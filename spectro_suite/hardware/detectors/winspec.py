"""
Optional WinSpec32 COM Automation Interface.
"""

from __future__ import annotations
import os
import time
import logging
from typing import Optional, Tuple, Callable
import numpy as np

from .mock import MockCamera

logger = logging.getLogger("spectro_suite")

# WinSpec32 ExpSetup & DocFile COM parameter constants
EXP_EXPOSURE = 1
EXP_RUNNING = 2
EXP_CONTROLLER_ALIVE = 4
EXP_DATFILENAME = 10
DM_FILENAME = 1
DM_ROI_ENDX = 5
DM_ROI_ENDY = 6


class WinSpecController:
    """
    Automates Princeton Instruments WinSpec32 software via Windows COM / ActiveX.
    Camera-agnostic: works with any detector WinSpec32/WinView32 has configured as the
    active experiment (e.g. Horiba CCDs, Princeton Instruments PIXIS cameras).
    """

    is_mock = False

    def __init__(self, temp_spe_path: str = "calib.spe"):
        self.temp_spe_path = os.path.abspath(temp_spe_path)
        self.exp_setup = None
        self.doc_file = None
        self.is_connected = False

    def connect(self) -> bool:
        """Initialize COM dispatch connection to WinSpec32."""
        try:
            import win32com.client
            logger.info("Initializing WinSpec32 COM automation...")
            self.exp_setup = win32com.client.Dispatch("WinX32.ExpSetup")
            self.doc_file = win32com.client.Dispatch("WinX32.DocFile")
            self.is_connected = True
            return True
        except Exception as ex:
            logger.warning(f"WinSpec32 COM dispatch failed: {ex}. Falling back to simulation/offline mode.")
            self.is_connected = False
            return False

    def acquire_frame(
        self,
        exposure_time_sec: float = 1.0,
        wavelengths_nm: Optional[np.ndarray] = None,
        progress_callback: Optional[Callable[[float], None]] = None,
        stop_requested: Optional[Callable[[], bool]] = None
    ) -> Tuple[np.ndarray, int]:
        """
        Trigger an acquisition in WinSpec, wait for exposure completion,
        and retrieve the CCD frame data as a 1D/2D numpy array.
        """
        if not self.is_connected or not self.exp_setup:
            raise RuntimeError("WinSpec COM interface is not connected.")

        self.exp_setup.SetParam(EXP_EXPOSURE, float(exposure_time_sec))
        self.exp_setup.SetParam(EXP_DATFILENAME, self.temp_spe_path)

        res = self.exp_setup.Start(self.doc_file)
        start_time = time.time()

        # Polling loop
        while self.exp_setup.GetParam(EXP_RUNNING):
            if stop_requested and stop_requested():
                self.exp_setup.Stop()
                raise InterruptedError("Acquisition stopped by user.")

            elapsed = time.time() - start_time
            time_left = max(0.0, exposure_time_sec - elapsed)
            if progress_callback:
                progress_callback(time_left)
            time.sleep(0.05)

        # Retrieve frame from DocFile
        frame_data = self.doc_file.GetFrame(1)
        max_pix_x = int(self.doc_file.GetParam(DM_ROI_ENDX))

        data_array = np.round(np.array(frame_data, dtype=np.float64)).astype(np.int64)
        if data_array.ndim > 1 and data_array.shape[1] == 1:
            data_array = data_array.flatten()
        elif data_array.ndim > 1 and data_array.shape[0] == 1:
            data_array = data_array.flatten()

        return data_array, max_pix_x

    def get_temperature(self) -> Optional[dict]:
        """Query detector temperature via WinSpec32 COM automation or simulation."""
        if self.is_connected and self.exp_setup:
            temp_val = None
            for p_id in [106, 711]:
                try:
                    val = float(self.exp_setup.GetParam(p_id))
                    if val != 0.0 or temp_val is None:
                        temp_val = val
                        break
                except Exception:
                    pass

            set_val = 0.0
            for p_id in [105, 710]:
                try:
                    set_val = float(self.exp_setup.GetParam(p_id))
                    break
                except Exception:
                    pass

            if temp_val is not None:
                return {
                    "temperature_c": temp_val,
                    "setpoint_c": set_val,
                    "status": 2,
                    "status_str": "LOCKED",
                    "is_simulated": False,
                }

        return {
            "temperature_c": -120.0,
            "setpoint_c": -120.0,
            "status": 2,
            "status_str": "LOCKED",
            "is_simulated": True,
        }


class MockWinSpecCamera:
    """
    Simulated CCD detector for testing without physical WinSpec32 / camera hardware.
    Generates synthetic emission lines (Neon & Ruby R1/R2) convolved with instrument response.
    """

    is_mock = True

    def __init__(self, num_pixels: int = 1024):
        self.num_pixels = num_pixels
        self.is_connected = True

    def connect(self) -> bool:
        self.is_connected = True
        return True

    def acquire_frame(
        self,
        exposure_time_sec: float = 1.0,
        wavelengths_nm: Optional[np.ndarray] = None,
        progress_callback: Optional[Callable[[float], None]] = None,
        stop_requested: Optional[Callable[[], bool]] = None
    ) -> Tuple[np.ndarray, int]:
        """
        Generate synthetic spectrum frame with realistic peaks and noise.
        """
        n_pix = len(wavelengths_nm) if wavelengths_nm is not None else self.num_pixels
        x_wl = wavelengths_nm if wavelengths_nm is not None else np.linspace(680.0, 720.0, n_pix)

        # Simulate exposure time delay in small intervals
        steps = max(1, int(exposure_time_sec / 0.05))
        for step in range(steps):
            if stop_requested and stop_requested():
                raise InterruptedError("Mock acquisition stopped.")
            time_left = max(0.0, exposure_time_sec * (1.0 - (step / steps)))
            if progress_callback:
                progress_callback(time_left)
            time.sleep(min(0.05, exposure_time_sec / steps))

        # Baseline offset + dark noise
        baseline = 250.0 * exposure_time_sec
        noise = np.random.normal(0, np.sqrt(np.maximum(1.0, baseline)) + 5.0, size=n_pix)
        spectrum = np.full(n_pix, baseline, dtype=np.float32) + noise

        # Add Neon emission lines
        neon_lines = [
            (692.95, 3000.0 * exposure_time_sec, 0.04),
            (702.70, 400.0 * exposure_time_sec, 0.04),
            (703.24, 6000.0 * exposure_time_sec, 0.04),
            (717.38, 900.0 * exposure_time_sec, 0.04),
        ]
        for center, intensity, fwhm in neon_lines:
            gaussian = intensity * np.exp(-((x_wl - center) / fwhm) ** 2)
            spectrum += gaussian

        # Add Ruby R1 & R2 fluorescence lines
        ruby_r1 = 3500.0 * exposure_time_sec * np.exp(-((x_wl - 694.34) / 0.15) ** 2)
        ruby_r2 = 2000.0 * exposure_time_sec * np.exp(-((x_wl - 692.95) / 0.15) ** 2)
        spectrum += ruby_r1 + ruby_r2

        return np.round(np.maximum(0.0, spectrum)).astype(np.int64), n_pix

    def get_temperature(self) -> Optional[dict]:
        """Simulate CCD sensor temperature."""
        return {
            "temperature_c": -120.0,
            "setpoint_c": -120.0,
            "status": 2,
            "status_str": "LOCKED",
        }
