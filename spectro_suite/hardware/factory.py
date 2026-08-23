"""
Construct the correct hardware driver (real or mock) from a SpectrometerConfig.
"""

from __future__ import annotations

from ..config import SpectrometerConfig
from .base import Spectrometer, Camera, Detector
from .spectrometers import (
    HoribaHR460,
    MockHoribaHR460,
    ActonSpectrometer,
    MockActonSpectrometer,
)
from .detectors import (
    MockCamera,
    MockDetector,
    PIMTECamera,
    WinSpecController,
    BlackflySCamera,
    MockBlackflySCamera,
)


def create_spectrometer(config: SpectrometerConfig, force_mock: bool = False) -> Spectrometer:
    """Instantiate the Spectrometer driver named by config.instrument_model."""
    is_acton = config.instrument_model.upper() == "ACTON"

    if force_mock:
        return MockActonSpectrometer(config) if is_acton else MockHoribaHR460(config)

    if is_acton:
        return ActonSpectrometer(port=config.com_port, baudrate=config.baudrate, config=config)
    return HoribaHR460(port=config.com_port, baudrate=config.baudrate, config=config)


def create_camera(config: SpectrometerConfig, force_mock: bool = False) -> Camera:
    """
    Instantiate the Camera/Detector driver named by config.camera_model.
    Supports FLIR Blackfly S (BFS-U3), PI MTE USB Camera, WinSpec automation, simulated detectors, and extensible drivers.
    """
    cam_model = getattr(config, "camera_model", "SIMULATED").upper()

    if force_mock:
        if any(k in cam_model for k in ("FLIR", "BLACKFLY", "BFS", "SPINNAKER")):
            return MockBlackflySCamera(config.num_pixels)
        return MockCamera(config.num_pixels)

    if any(k in cam_model for k in ("FLIR", "BLACKFLY", "BFS", "SPINNAKER")):
        return BlackflySCamera(num_pixels=config.num_pixels)

    if any(k in cam_model for k in ("MTE", "PRINCETON", "PIMTE", "PIXIS", "PICAM")):
        return PIMTECamera(num_pixels=config.num_pixels)

    if "WINSPEC" in cam_model:
        try:
            return WinSpecController(config.spe_data_path)
        except Exception:
            return MockCamera(config.num_pixels)

    # Default to simulated / mock detector
    return MockCamera(config.num_pixels)


# Alias for detector terminology parity
create_detector = create_camera
