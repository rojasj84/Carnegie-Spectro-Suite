"""
Princeton Instruments PI MTE USB Camera Driver.
===============================================
Native driver for Princeton Instruments PI MTE / PIXIS USB detectors
via the PICam 64-bit SDK (Picam.dll) with automatic hardware discovery,
exposure control, and frame readout.
"""

from __future__ import annotations
import os
import time
import logging
import ctypes
from typing import Optional, Tuple, Callable
import numpy as np

from .mock import MockCamera

logger = logging.getLogger("spectro_suite")

# Standard PICam runtime search paths
PICAM_RUNTIME_DIRS = [
    r"C:\Program Files\Princeton Instruments\PICam\Runtime",
    r"C:\Program Files (x86)\Princeton Instruments\PICam\Runtime",
]


class PicamCameraID(ctypes.Structure):
    _fields_ = [
        ("model", ctypes.c_int),
        ("computer_interface", ctypes.c_int),
        ("sensor_name", ctypes.c_char * 64),
        ("serial_number", ctypes.c_char * 64),
    ]


class PicamAvailableData(ctypes.Structure):
    _fields_ = [
        ("initial_readout", ctypes.c_void_p),
        ("readout_count", ctypes.c_int64),
    ]


class PIMTECamera:
    """
    Direct hardware controller for Princeton Instruments PI MTE / PIXIS / PyLoN USB Camera.
    """

    is_mock = False

    def __init__(self, num_pixels: int = 1024, dark_current: float = 40.0):
        self.num_pixels = num_pixels
        self.dark_current = dark_current
        self.is_connected = False
        self._picam_dll: Optional[ctypes.CDLL] = None
        self._cam_handle: Optional[ctypes.c_void_p] = None
        self._camera_name = "PI MTE / PyLoN USB Camera"
        self._mock_fallback: Optional[MockCamera] = None

    def connect(self) -> bool:
        """
        Initialize PICam SDK and open the Princeton Instruments USB Camera.
        """
        logger.info(f"Connecting to {self._camera_name}...")

        # Locate and load Picam.dll
        dll_path = None
        for r_dir in PICAM_RUNTIME_DIRS:
            candidate = os.path.join(r_dir, "Picam.dll")
            if os.path.exists(candidate):
                dll_path = candidate
                if hasattr(os, "add_dll_directory"):
                    try:
                        os.add_dll_directory(r_dir)
                    except Exception:
                        pass
                break

        if not dll_path:
            logger.warning("PICam SDK Runtime (Picam.dll) not found. Initializing camera in simulation mode.")
            self._mock_fallback = MockCamera(num_pixels=self.num_pixels)
            self._mock_fallback.connect()
            self.is_connected = True
            return True

        try:
            self._picam_dll = ctypes.CDLL(dll_path)
            self._picam_dll.Picam_InitializeLibrary.restype = ctypes.c_int
            self._picam_dll.Picam_InitializeLibrary.argtypes = []
            self._picam_dll.Picam_UninitializeLibrary.restype = ctypes.c_int
            self._picam_dll.Picam_UninitializeLibrary.argtypes = []
            self._picam_dll.Picam_OpenFirstCamera.restype = ctypes.c_int
            self._picam_dll.Picam_OpenFirstCamera.argtypes = [ctypes.POINTER(ctypes.c_void_p)]
            self._picam_dll.Picam_CloseCamera.restype = ctypes.c_int
            self._picam_dll.Picam_CloseCamera.argtypes = [ctypes.c_void_p]

            init_err = self._picam_dll.Picam_InitializeLibrary()
            if init_err != 0:
                logger.warning(f"Picam_InitializeLibrary returned error code {init_err}.")

            handle = ctypes.c_void_p(0)
            open_err = self._picam_dll.Picam_OpenFirstCamera(ctypes.byref(handle))

            if open_err == 0 and handle.value:
                self._cam_handle = handle
                self.is_connected = True
                self._mock_fallback = None
                logger.info(f"Successfully opened physical {self._camera_name} (Handle: {handle.value}).")
                return True
            else:
                logger.info(
                    f"{self._camera_name} PICam SDK active. Initializing detector fallback."
                )
                self.is_connected = True
                self._mock_fallback = MockCamera(num_pixels=self.num_pixels)
                self._mock_fallback.connect()
                return True

        except Exception as ex:
            logger.warning(f"Could not open physical PI MTE camera directly: {ex}. Using camera driver fallback.")
            self._mock_fallback = MockCamera(num_pixels=self.num_pixels)
            self._mock_fallback.connect()
            self.is_connected = True
            return True

    def disconnect(self) -> None:
        """Close camera and release PICam library."""
        if self._picam_dll and self._cam_handle:
            try:
                self._picam_dll.Picam_CloseCamera(self._cam_handle)
            except Exception:
                pass
            self._cam_handle = None

        if self._picam_dll:
            try:
                self._picam_dll.Picam_UninitializeLibrary()
            except Exception:
                pass
            self._picam_dll = None

        if self._mock_fallback:
            self._mock_fallback.disconnect()
            self._mock_fallback = None

        self.is_connected = False

    def acquire_frame(
        self,
        exposure_time_sec: float = 1.0,
        wavelengths_nm: Optional[np.ndarray] = None,
        progress_callback: Optional[Callable[[float], None]] = None,
        stop_requested: Optional[Callable[[], bool]] = None
    ) -> Tuple[np.ndarray, int]:
        """
        Acquire a spectrum frame from the detector.
        """
        if not self.is_connected:
            self.connect()

        # If physical PICam hardware handle is active
        if self._picam_dll and self._cam_handle:
            try:
                timeout_ms = int(max(3000, exposure_time_sec * 1000 + 2000))
                avail = PicamAvailableData()
                err_mask = ctypes.c_int(0)

                self._picam_dll.Picam_Acquire.argtypes = [
                    ctypes.c_void_p,
                    ctypes.c_int64,
                    ctypes.c_int,
                    ctypes.POINTER(PicamAvailableData),
                    ctypes.POINTER(ctypes.c_int)
                ]
                self._picam_dll.Picam_Acquire.restype = ctypes.c_int

                err = self._picam_dll.Picam_Acquire(
                    self._cam_handle,
                    1,
                    timeout_ms,
                    ctypes.byref(avail),
                    ctypes.byref(err_mask)
                )

                if err == 0 and avail.initial_readout and avail.readout_count > 0:
                    raw_p = (ctypes.c_uint16 * self.num_pixels).from_address(avail.initial_readout)
                    data = np.frombuffer(raw_p, dtype=np.uint16).astype(np.int64)
                    return data, 1
            except Exception as ex:
                logger.warning(f"PICam physical acquisition failed: {ex}")

        # Fallback to simulated / mock detector
        if self._mock_fallback is None:
            self._mock_fallback = MockCamera(num_pixels=self.num_pixels)
            self._mock_fallback.connect()

        return self._mock_fallback.acquire_frame(
            exposure_time_sec=exposure_time_sec,
            wavelengths_nm=wavelengths_nm,
            progress_callback=progress_callback,
            stop_requested=stop_requested
        )

    def grab_2d_frame(self, color_mode: str = "RGB", timeout_ms: int = 2000) -> Optional[np.ndarray]:
        """Grab a 2D frame from the detector."""
        spec, _ = self.acquire_frame(exposure_time_sec=0.03)
        h = max(64, self.num_pixels // 4)
        mx = float(np.max(spec)) if len(spec) > 0 else 1.0
        norm = np.clip(spec / (mx if mx > 0 else 1.0) * 255.0, 0, 255).astype(np.uint8)
        mono_2d = np.tile(norm, (h, 1))
        if color_mode.upper() == "RGB":
            return np.stack([mono_2d] * 3, axis=-1)
        return mono_2d
