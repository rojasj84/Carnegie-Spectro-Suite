"""
FLIR / Teledyne Blackfly S (BFS-U3) USB3 & GigE Vision Camera Driver.
Interfaces directly with the Teledyne Spinnaker C Runtime API (SpinnakerC_v140.dll).
Supports full 2D live video acquisition (RGB/Mono8), column-wise 1D spectral binning,
hardware exposure, gain control, and graceful mock fallback.
"""

from __future__ import annotations
import os
import sys
import time
import threading
import ctypes
import logging
from typing import Optional, Callable, Tuple, List, Dict, Any
import numpy as np

from ..config import SpectrometerConfig
from .base import Camera

logger = logging.getLogger("horiba_hr460")


def _find_spinnaker_dll() -> Optional[str]:
    """Locate SpinnakerC_v140.dll in standard installation locations or system PATH."""
    candidates = [
        r"C:\Program Files\Teledyne\Spinnaker\bin64\vs2015\SpinnakerC_v140.dll",
        r"C:\Program Files\Point Grey Research\Spinnaker\bin64\vs2015\SpinnakerC_v140.dll",
        r"C:\Program Files (x86)\Teledyne\Spinnaker\bin\vs2015\SpinnakerC_v140.dll",
        r"C:\Program Files (x86)\Point Grey Research\Spinnaker\bin\vs2015\SpinnakerC_v140.dll",
    ]
    for c in candidates:
        if os.path.exists(c):
            return c
    # Fallback to search in PATH
    for path_dir in os.environ.get("PATH", "").split(os.pathsep):
        candidate = os.path.join(path_dir, "SpinnakerC_v140.dll")
        if os.path.exists(candidate):
            return candidate
    return None


class BlackflySCamera:
    """
    Physical hardware driver for Teledyne FLIR Blackfly S (BFS-U3) cameras.
    """

    def __init__(self, num_pixels: int = 1616, camera_index: int = 0):
        self.num_pixels = num_pixels
        self.camera_index = camera_index
        self.is_connected = False
        self.is_mock = False
        self.device_model: str = "FLIR Blackfly S"
        self.serial_number: str = "Unknown"
        self.width: int = 1616
        self.height: int = 1240

        self._dll_path = _find_spinnaker_dll()
        self._spin: Optional[ctypes.CDLL] = None
        self._h_system = ctypes.c_void_p()
        self._h_cam_list = ctypes.c_void_p()
        self._h_cam = ctypes.c_void_p()
        self._h_processor = ctypes.c_void_p()
        self._is_acquiring = False
        self._exposure_time_us: float = 20000.0
        self._gain_db: float = 0.0
        self._lock = threading.Lock()

        if self._dll_path and os.path.exists(self._dll_path):
            try:
                dll_dir = os.path.dirname(self._dll_path)
                if hasattr(os, "add_dll_directory"):
                    try:
                        os.add_dll_directory(dll_dir)
                    except Exception:
                        pass
                self._spin = ctypes.cdll.LoadLibrary(self._dll_path)
                self._setup_c_types()
            except Exception as ex:
                logger.warning(f"Could not load Spinnaker C library from {self._dll_path}: {ex}")
                self._spin = None

    def _setup_c_types(self):
        if not self._spin:
            return
        # Setup specific function argtypes to ensure correct 64-bit/double passing
        try:
            self._spin.spinFloatSetValue.argtypes = [ctypes.c_void_p, ctypes.c_double]
            self._spin.spinFloatSetValue.restype = ctypes.c_int
            self._spin.spinFloatGetValue.argtypes = [ctypes.c_void_p, ctypes.POINTER(ctypes.c_double)]
            self._spin.spinFloatGetValue.restype = ctypes.c_int
            self._spin.spinCameraGetNextImageEx.argtypes = [ctypes.c_void_p, ctypes.c_uint64, ctypes.POINTER(ctypes.c_void_p)]
            self._spin.spinCameraGetNextImageEx.restype = ctypes.c_int
        except Exception:
            pass

    def connect(self) -> bool:
        """Initialize Spinnaker system, open camera, and query sensor geometry."""
        if not self._spin:
            logger.warning("Spinnaker C library not available.")
            return False

        with self._lock:
            if self.is_connected and self._h_cam.value:
                return True

            try:
                # 1. Get System instance
                err = self._spin.spinSystemGetInstance(ctypes.byref(self._h_system))
                if err != 0 or not self._h_system.value:
                    logger.warning(f"spinSystemGetInstance failed (code {err})")
                    return False

                # 2. Get Camera list
                err = self._spin.spinCameraListCreateEmpty(ctypes.byref(self._h_cam_list))
                if err != 0:
                    return False
                self._spin.spinSystemGetCameras(self._h_system, self._h_cam_list)

                num_cams = ctypes.c_size_t(0)
                self._spin.spinCameraListGetSize(self._h_cam_list, ctypes.byref(num_cams))
                if num_cams.value == 0:
                    logger.warning("No Spinnaker cameras found.")
                    self._internal_disconnect()
                    return False

                idx = min(self.camera_index, num_cams.value - 1)
                err = self._spin.spinCameraListGet(self._h_cam_list, idx, ctypes.byref(self._h_cam))
                if err != 0 or not self._h_cam.value:
                    self._internal_disconnect()
                    return False

                # 3. Initialize camera
                err = self._spin.spinCameraInit(self._h_cam)
                if err != 0:
                    logger.warning(f"spinCameraInit failed with error {err}")
                    self._internal_disconnect()
                    return False

                # 4. Create ImageProcessor for format conversion / debayering
                self._spin.spinImageProcessorCreate(ctypes.byref(self._h_processor))

                # 5. Set Stream Buffer Handling Mode to NewestOnly (low latency, zero queue backup)
                try:
                    h_tl_stream = ctypes.c_void_p()
                    if self._spin.spinCameraGetTLStreamNodeMap(self._h_cam, ctypes.byref(h_tl_stream)) == 0:
                        h_buf_mode = ctypes.c_void_p()
                        if self._spin.spinNodeMapGetNode(h_tl_stream, b"StreamBufferHandlingMode", ctypes.byref(h_buf_mode)) == 0:
                            h_newest = ctypes.c_void_p()
                            if self._spin.spinEnumerationGetEntryByName(h_buf_mode, b"NewestOnly", ctypes.byref(h_newest)) == 0:
                                val = ctypes.c_int64(0)
                                if self._spin.spinEnumerationEntryGetIntValue(h_newest, ctypes.byref(val)) == 0:
                                    self._spin.spinEnumerationSetIntValue(h_buf_mode, val.value)
                except Exception as ex:
                    logger.debug(f"Could not set StreamBufferHandlingMode: {ex}")

                # 6. Query device info & dimensions
                self._query_camera_info()

                # 7. Set manual exposure / gain defaults
                self._internal_set_exposure_time(0.02)  # 20 ms
                self.is_connected = True
                logger.info(f"Connected to FLIR Camera: {self.device_model} (SN: {self.serial_number}, {self.width}x{self.height})")
                return True
            except Exception as ex:
                logger.error(f"Failed to connect to FLIR Blackfly S: {ex}")
                self._internal_disconnect()
                return False

    def _query_camera_info(self):
        """Query camera model, serial number, and width/height from GenICam nodemap."""
        if not self._h_cam.value:
            return
        h_nodemap = ctypes.c_void_p()
        if self._spin.spinCameraGetNodeMap(self._h_cam, ctypes.byref(h_nodemap)) == 0:
            # Model Name
            h_model = ctypes.c_void_p()
            if self._spin.spinNodeMapGetNode(h_nodemap, b"DeviceModelName", ctypes.byref(h_model)) == 0:
                buf = ctypes.create_string_buffer(128)
                buflen = ctypes.c_size_t(128)
                if self._spin.spinStringGetValue(h_model, buf, ctypes.byref(buflen)) == 0:
                    self.device_model = buf.value.decode("utf-8", errors="ignore").strip()

            # Serial Number
            h_serial = ctypes.c_void_p()
            if self._spin.spinNodeMapGetNode(h_nodemap, b"DeviceSerialNumber", ctypes.byref(h_serial)) == 0:
                buf = ctypes.create_string_buffer(128)
                buflen = ctypes.c_size_t(128)
                if self._spin.spinStringGetValue(h_serial, buf, ctypes.byref(buflen)) == 0:
                    self.serial_number = buf.value.decode("utf-8", errors="ignore").strip()

            # Sensor Width / Height
            h_w = ctypes.c_void_p()
            if self._spin.spinNodeMapGetNode(h_nodemap, b"Width", ctypes.byref(h_w)) == 0:
                val = ctypes.c_int64(0)
                if self._spin.spinIntegerGetValue(h_w, ctypes.byref(val)) == 0 and val.value > 0:
                    self.width = val.value
                    self.num_pixels = val.value

            h_h = ctypes.c_void_p()
            if self._spin.spinNodeMapGetNode(h_nodemap, b"Height", ctypes.byref(h_h)) == 0:
                val = ctypes.c_int64(0)
                if self._spin.spinIntegerGetValue(h_h, ctypes.byref(val)) == 0 and val.value > 0:
                    self.height = val.value

    def start_acquisition(self) -> bool:
        """Start continuous image streaming from the camera."""
        if not self.is_connected or not self._h_cam.value:
            return False
        with self._lock:
            if self._is_acquiring:
                return True
            err = self._spin.spinCameraBeginAcquisition(self._h_cam)
            if err == 0:
                self._is_acquiring = True
                return True
            return False

    def stop_acquisition(self) -> bool:
        """Stop image streaming."""
        with self._lock:
            if not self._is_acquiring or not self._h_cam.value:
                return True
            err = self._spin.spinCameraEndAcquisition(self._h_cam)
            self._is_acquiring = False
            return err == 0

    def grab_2d_frame(self, color_mode: str = "RGB", timeout_ms: int = 2000) -> Optional[np.ndarray]:
        """
        Grab a 2D image from the camera stream.
        Args:
            color_mode: "RGB" (returns HxWx3 uint8) or "MONO" (returns HxW uint8).
            timeout_ms: Maximum wait time for image arrival in milliseconds.
        Returns:
            numpy array of image data, or None on timeout/error.
        """
        if not self.is_connected or not self._h_cam.value:
            return None

        with self._lock:
            was_acquiring = self._is_acquiring
            if not was_acquiring:
                if not self.start_acquisition():
                    return None

            h_image = ctypes.c_void_p()
            try:
                err = self._spin.spinCameraGetNextImageEx(self._h_cam, ctypes.c_uint64(timeout_ms), ctypes.byref(h_image))
                if err != 0 or not h_image.value:
                    return None

                is_incomplete = ctypes.c_bool(False)
                self._spin.spinImageIsIncomplete(h_image, ctypes.byref(is_incomplete))
                if is_incomplete.value:
                    self._spin.spinImageRelease(h_image)
                    return None

                # Convert to target format: Mono8 = 0, RGB8 = 63, BGR8 = 27
                mode = color_mode.upper()
                if mode == "RGB":
                    target_fmt = 63
                    channels = 3
                elif mode == "BGR":
                    target_fmt = 27
                    channels = 3
                else:
                    target_fmt = 0
                    channels = 1

                h_converted = ctypes.c_void_p()
                self._spin.spinImageCreateEmpty(ctypes.byref(h_converted))

                err = self._spin.spinImageProcessorConvert(self._h_processor, h_image, h_converted, target_fmt)
                if err != 0:
                    self._spin.spinImageDestroy(h_converted)
                    self._spin.spinImageRelease(h_image)
                    return None

                w = ctypes.c_size_t(0)
                h = ctypes.c_size_t(0)
                p_data = ctypes.c_void_p()
                self._spin.spinImageGetWidth(h_converted, ctypes.byref(w))
                self._spin.spinImageGetHeight(h_converted, ctypes.byref(h))
                self._spin.spinImageGetData(h_converted, ctypes.byref(p_data))

                if w.value == 0 or h.value == 0 or not p_data.value:
                    self._spin.spinImageDestroy(h_converted)
                    self._spin.spinImageRelease(h_image)
                    return None

                total_bytes = w.value * h.value * channels
                raw_bytes = (ctypes.c_uint8 * total_bytes).from_address(p_data.value)

                if channels == 3:
                    img = np.frombuffer(raw_bytes, dtype=np.uint8).reshape((h.value, w.value, 3)).copy()
                else:
                    img = np.frombuffer(raw_bytes, dtype=np.uint8).reshape((h.value, w.value)).copy()

                self._spin.spinImageDestroy(h_converted)
                self._spin.spinImageRelease(h_image)
                return img
            except Exception as ex:
                logger.debug(f"grab_2d_frame error: {ex}")
                return None

    def acquire_frame(
        self,
        exposure_time_sec: float = 1.0,
        wavelengths_nm: Optional[np.ndarray] = None,
        progress_callback: Optional[Callable[[float], None]] = None,
        stop_requested: Optional[Callable[[], bool]] = None,
        roi_vertical_range: Optional[Tuple[int, int]] = None
    ) -> Tuple[np.ndarray, int]:
        """
        Spectroscopy acquisition: Grabs 2D frame and integrates/bins columns
        into a 1D calibrated spectrum curve.
        """
        if not self.is_connected:
            return np.zeros(self.num_pixels, dtype=np.float32), 0

        self.set_exposure_time(exposure_time_sec)
        timeout_ms = int(max(2000, exposure_time_sec * 1000 + 1500))

        if progress_callback:
            progress_callback(exposure_time_sec)

        frame = self.grab_2d_frame(color_mode="MONO", timeout_ms=timeout_ms)
        if frame is None:
            return np.zeros(self.num_pixels, dtype=np.float32), 0

        # Crop to vertical ROI if specified (e.g. laser stripe)
        if roi_vertical_range:
            r_min, r_max = roi_vertical_range
            r_min = max(0, min(r_min, frame.shape[0] - 1))
            r_max = max(r_min + 1, min(r_max, frame.shape[0]))
            sub_frame = frame[r_min:r_max, :]
        else:
            sub_frame = frame

        # Vertically bin columns (sum or mean intensity across rows)
        spectrum_1d = np.sum(sub_frame.astype(np.float32), axis=0)

        # Resample or match to num_pixels if needed
        if len(spectrum_1d) != self.num_pixels:
            x_orig = np.linspace(0, 1, len(spectrum_1d))
            x_target = np.linspace(0, 1, self.num_pixels)
            spectrum_1d = np.interp(x_target, x_orig, spectrum_1d).astype(np.float32)

        max_val = int(np.max(spectrum_1d)) if len(spectrum_1d) > 0 else 0
        return spectrum_1d, max_val

    def set_exposure_time(self, exposure_time_sec: float) -> bool:
        """Set sensor exposure time in seconds."""
        with self._lock:
            return self._internal_set_exposure_time(exposure_time_sec)

    def _internal_set_exposure_time(self, exposure_time_sec: float) -> bool:
        if not self._h_cam.value:
            return False
        try:
            h_nodemap = ctypes.c_void_p()
            if self._spin.spinCameraGetNodeMap(self._h_cam, ctypes.byref(h_nodemap)) == 0:
                # Disable Auto Exposure first
                h_auto = ctypes.c_void_p()
                if self._spin.spinNodeMapGetNode(h_nodemap, b"ExposureAuto", ctypes.byref(h_auto)) == 0:
                    h_off = ctypes.c_void_p()
                    if self._spin.spinEnumerationGetEntryByName(h_auto, b"Off", ctypes.byref(h_off)) == 0:
                        val = ctypes.c_int64(0)
                        self._spin.spinEnumerationEntryGetIntValue(h_off, ctypes.byref(val))
                        self._spin.spinEnumerationSetIntValue(h_auto, val.value)

                # Set ExposureTime in microseconds
                exp_us = max(10.0, float(exposure_time_sec) * 1_000_000.0)
                h_exp = ctypes.c_void_p()
                if self._spin.spinNodeMapGetNode(h_nodemap, b"ExposureTime", ctypes.byref(h_exp)) == 0:
                    self._spin.spinFloatSetValue(h_exp, ctypes.c_double(exp_us))
                    self._exposure_time_us = exp_us
                    return True
        except Exception as ex:
            logger.debug(f"set_exposure_time failed: {ex}")
        return False

    def get_exposure_time(self) -> float:
        """Return current exposure time in seconds."""
        if not self.is_connected or not self._h_cam.value:
            return self._exposure_time_us / 1_000_000.0
        try:
            h_nodemap = ctypes.c_void_p()
            if self._spin.spinCameraGetNodeMap(self._h_cam, ctypes.byref(h_nodemap)) == 0:
                h_exp = ctypes.c_void_p()
                if self._spin.spinNodeMapGetNode(h_nodemap, b"ExposureTime", ctypes.byref(h_exp)) == 0:
                    val = ctypes.c_double(0.0)
                    self._spin.spinFloatGetValue(h_exp, ctypes.byref(val))
                    if val.value > 0:
                        self._exposure_time_us = val.value
        except Exception:
            pass
        return self._exposure_time_us / 1_000_000.0

    def set_gain(self, gain_db: float) -> bool:
        """Set analog/digital gain in decibels (dB)."""
        with self._lock:
            return self._internal_set_gain(gain_db)

    def _internal_set_gain(self, gain_db: float) -> bool:
        if not self._h_cam.value:
            return False
        try:
            h_nodemap = ctypes.c_void_p()
            if self._spin.spinCameraGetNodeMap(self._h_cam, ctypes.byref(h_nodemap)) == 0:
                # Disable Auto Gain
                h_auto = ctypes.c_void_p()
                if self._spin.spinNodeMapGetNode(h_nodemap, b"GainAuto", ctypes.byref(h_auto)) == 0:
                    h_off = ctypes.c_void_p()
                    if self._spin.spinEnumerationGetEntryByName(h_auto, b"Off", ctypes.byref(h_off)) == 0:
                        val = ctypes.c_int64(0)
                        self._spin.spinEnumerationEntryGetIntValue(h_off, ctypes.byref(val))
                        self._spin.spinEnumerationSetIntValue(h_auto, val.value)

                h_gain = ctypes.c_void_p()
                if self._spin.spinNodeMapGetNode(h_nodemap, b"Gain", ctypes.byref(h_gain)) == 0:
                    self._spin.spinFloatSetValue(h_gain, ctypes.c_double(float(gain_db)))
                    self._gain_db = float(gain_db)
                    return True
        except Exception as ex:
            logger.debug(f"set_gain failed: {ex}")
        return False

    def get_gain(self) -> float:
        """Return current gain in dB."""
        if not self.is_connected or not self._h_cam.value:
            return self._gain_db
        try:
            h_nodemap = ctypes.c_void_p()
            if self._spin.spinCameraGetNodeMap(self._h_cam, ctypes.byref(h_nodemap)) == 0:
                h_gain = ctypes.c_void_p()
                if self._spin.spinNodeMapGetNode(h_nodemap, b"Gain", ctypes.byref(h_gain)) == 0:
                    val = ctypes.c_double(0.0)
                    self._spin.spinFloatGetValue(h_gain, ctypes.byref(val))
                    self._gain_db = val.value
        except Exception:
            pass
        return self._gain_db

    def disconnect(self) -> None:
        """Safely release camera, image processor, camera list, and Spinnaker system."""
        with self._lock:
            self._internal_disconnect()

    def _internal_disconnect(self) -> None:
        if self._is_acquiring and self._spin and self._h_cam.value:
            try:
                self._spin.spinCameraEndAcquisition(self._h_cam)
            except Exception:
                pass
            self._is_acquiring = False

        if self._spin:
            try:
                if self._h_processor.value:
                    self._spin.spinImageProcessorDestroy(self._h_processor)
                    self._h_processor = ctypes.c_void_p()

                if self._h_cam.value:
                    self._spin.spinCameraDeInit(self._h_cam)
                    self._spin.spinCameraRelease(self._h_cam)
                    self._h_cam = ctypes.c_void_p()

                if self._h_cam_list.value:
                    self._spin.spinCameraListClear(self._h_cam_list)
                    self._spin.spinCameraListDestroy(self._h_cam_list)
                    self._h_cam_list = ctypes.c_void_p()

                if self._h_system.value:
                    self._spin.spinSystemReleaseInstance(self._h_system)
                    self._h_system = ctypes.c_void_p()
            except Exception as ex:
                logger.debug(f"Error during Spinnaker disconnect: {ex}")

        self.is_connected = False
        logger.info("FLIR Blackfly S camera disconnected.")


class MockBlackflySCamera(BlackflySCamera):
    """
    Simulated 2D Blackfly S camera providing synthetic spectral images and beam spots.
    """

    def __init__(self, num_pixels: int = 1616):
        self.num_pixels = num_pixels
        self.width = 1616
        self.height = 1240
        self.is_connected = True
        self.is_mock = True
        self.device_model = "FLIR Blackfly S (Simulation)"
        self.serial_number = "MOCK_BFS_01703D"
        self._exposure_time_us = 20000.0
        self._gain_db = 0.0
        self._is_acquiring = False

    def connect(self) -> bool:
        self.is_connected = True
        logger.info("Connected to Mock FLIR Blackfly S Camera.")
        return True

    def disconnect(self) -> None:
        self.is_connected = False

    def start_acquisition(self) -> bool:
        self._is_acquiring = True
        return True

    def stop_acquisition(self) -> bool:
        self._is_acquiring = False
        return True

    def grab_2d_frame(self, color_mode: str = "RGB", timeout_ms: int = 2000) -> Optional[np.ndarray]:
        """Generate synthetic 2D laser spot / diffraction pattern with noise."""
        y = np.linspace(-3, 3, self.height)
        x = np.linspace(-4, 4, self.width)
        xx, yy = np.meshgrid(x, y)

        # Dynamic drift / shimmer
        t = time.time() * 2.0
        cx = 0.3 * np.sin(t)
        cy = 0.2 * np.cos(t * 1.3)

        # Synthetic laser beam spot + horizontal spectral streak
        spot = np.exp(-(((xx - cx) ** 2) / 0.15 + ((yy - cy) ** 2) / 0.15)) * 180
        streak = np.exp(-((yy - cy) ** 2) / 0.08) * (np.sin(xx * 3.0 + t) * 30 + 50)
        streak = np.clip(streak, 0, 100)

        # Background noise
        noise = np.random.normal(15, 3, (self.height, self.width))
        mono_img = np.clip(spot + streak + noise, 0, 255).astype(np.uint8)

        if color_mode.upper() == "RGB":
            # Convert to false color / greenish laser glow RGB
            rgb = np.zeros((self.height, self.width, 3), dtype=np.uint8)
            rgb[:, :, 0] = np.clip(mono_img * 0.4, 0, 255).astype(np.uint8) # Red
            rgb[:, :, 1] = mono_img # Green
            rgb[:, :, 2] = np.clip(mono_img * 0.7, 0, 255).astype(np.uint8) # Blue
            return rgb
        return mono_img

    def acquire_frame(
        self,
        exposure_time_sec: float = 1.0,
        wavelengths_nm: Optional[np.ndarray] = None,
        progress_callback: Optional[Callable[[float], None]] = None,
        stop_requested: Optional[Callable[[], bool]] = None,
        roi_vertical_range: Optional[Tuple[int, int]] = None
    ) -> Tuple[np.ndarray, int]:
        frame = self.grab_2d_frame(color_mode="MONO")
        if frame is None:
            return np.zeros(self.num_pixels, dtype=np.float32), 0
        spectrum_1d = np.sum(frame.astype(np.float32), axis=0)
        return spectrum_1d, int(np.max(spectrum_1d))

    def set_exposure_time(self, exposure_time_sec: float) -> bool:
        self._exposure_time_us = float(exposure_time_sec) * 1_000_000.0
        return True

    def get_exposure_time(self) -> float:
        return self._exposure_time_us / 1_000_000.0

    def set_gain(self, gain_db: float) -> bool:
        self._gain_db = float(gain_db)
        return True

    def get_gain(self) -> float:
        return self._gain_db
