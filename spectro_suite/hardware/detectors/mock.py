"""
Universal Simulated Detector / Mock Camera.
===========================================
Provides simulated optical detector implementations for development, testing,
and demonstration without physical camera hardware attached.
"""

from __future__ import annotations
import time
import numpy as np
from typing import Optional, Callable, Tuple


class MockCamera:
    """
    Simulated optical detector / CCD / InGaAs array for testing and development.
    Generates realistic optical spectra with Gaussian emission peaks, detector noise,
    and exposure-time scaling.
    """

    def __init__(self, num_pixels: int = 1024, dark_current: float = 50.0):
        self.num_pixels = num_pixels
        self.dark_current = dark_current
        self.is_connected = False
        self.is_mock = True

    def connect(self) -> bool:
        """Establish connection to the simulated detector."""
        self.is_connected = True
        return True

    def disconnect(self) -> None:
        """Disconnect simulated detector."""
        self.is_connected = False

    def acquire_frame(
        self,
        exposure_time_sec: float = 1.0,
        wavelengths_nm: Optional[np.ndarray] = None,
        progress_callback: Optional[Callable[[float], None]] = None,
        stop_requested: Optional[Callable[[], bool]] = None
    ) -> Tuple[np.ndarray, int]:
        """
        Simulate an optical frame acquisition.

        Returns:
            Tuple of (1D numpy array of pixel counts, tracking frame index)
        """
        if not self.is_connected:
            self.connect()

        # Simulate exposure time in fine intervals so GUI stays responsive and cancellable
        steps = max(1, int(exposure_time_sec / 0.05))
        step_dt = exposure_time_sec / steps

        for i in range(steps):
            if stop_requested and stop_requested():
                break
            time.sleep(min(step_dt, 0.05))
            if progress_callback:
                progress_callback((i + 1) / steps)

        # Baseline dark noise
        rng = np.random.default_rng()
        data = rng.normal(loc=self.dark_current, scale=3.0, size=self.num_pixels)

        # Synthetic spectral line profile
        if wavelengths_nm is not None and len(wavelengths_nm) == self.num_pixels:
            center_wl = np.median(wavelengths_nm)
            # Add synthetic emission peak near center
            peak1 = 8000.0 * exposure_time_sec * np.exp(-((wavelengths_nm - (center_wl + 2.0)) ** 2) / (2 * 1.5**2))
            peak2 = 3500.0 * exposure_time_sec * np.exp(-((wavelengths_nm - (center_wl - 8.0)) ** 2) / (2 * 2.0**2))
            data += peak1 + peak2
        else:
            x = np.linspace(0, self.num_pixels - 1, self.num_pixels)
            center = self.num_pixels / 2.0
            peak1 = 8000.0 * exposure_time_sec * np.exp(-((x - (center + 30)) ** 2) / (2 * 20**2))
            peak2 = 4000.0 * exposure_time_sec * np.exp(-((x - (center - 120)) ** 2) / (2 * 15**2))
            data += peak1 + peak2

        # Add Poisson shot noise
        data = np.maximum(data, 0.0)
        shot_noise = rng.normal(0, np.sqrt(data + 1.0))
        data += shot_noise

        return np.round(np.maximum(data, 0.0)).astype(np.int64), 1


# Alias for detector terminology parity
MockDetector = MockCamera
