"""
Construct the correct hardware driver (real or mock) from a SpectrometerConfig,
replacing the hardcoded "if force_mock: Mock... else Real..." blocks previously
duplicated across cli.py, gui/app.py, and gui/vb_app.py.
"""

from __future__ import annotations

from ..config import SpectrometerConfig
from .base import Spectrometer, Camera
from .hr460 import HoribaHR460, MockHoribaHR460
from .acton import ActonSpectrometer, MockActonSpectrometer
from .camera import MockCamera


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
    Supports Simulated/Mock cameras and optional vendor backends (e.g., WinSpec, Andor, etc.).
    """
    if force_mock:
        return MockCamera(config.num_pixels)

    cam_model = getattr(config, "camera_model", "SIMULATED").upper()

    if cam_model == "WINSPEC":
        try:
            from .winspec import WinSpecController
            return WinSpecController(config.spe_data_path)
        except Exception:
            return MockCamera(config.num_pixels)

    # Default to simulated/mock detector
    return MockCamera(config.num_pixels)

