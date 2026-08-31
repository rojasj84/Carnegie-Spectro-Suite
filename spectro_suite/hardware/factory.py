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
    ST133Camera,
    ST133LibUsbCamera,
    WinSpecController,
    BlackflySCamera,
    MockBlackflySCamera,
)


def create_spectrometer(config: SpectrometerConfig, force_mock: bool = False) -> Spectrometer:
    """Instantiate the Spectrometer driver named by config.instrument_model."""
    im = (config.instrument_model or "").upper()
    # Tolerate descriptive names ("Acton SP-2-150i", "Acton SpectraPro SP-2150 (COM3)")
    # not just the canonical "ACTON".
    is_acton = any(k in im for k in ("ACTON", "SP-2", "SP2", "SPECTRAPRO", "SPECTRA PRO"))

    if force_mock:
        return MockActonSpectrometer(config) if is_acton else MockHoribaHR460(config)

    if is_acton:
        return ActonSpectrometer(port=config.com_port, baudrate=config.baudrate, config=config)
    return HoribaHR460(port=config.com_port, baudrate=config.baudrate, config=config)


def create_camera(config: SpectrometerConfig, force_mock: bool = False) -> Camera:
    """
    Instantiate the Camera/Detector driver named by config.camera_model.
    Supports Princeton Instruments ST-133 / InGaAs, FLIR Blackfly S, PI MTE, WinSpec automation, and simulated detectors.
    """
    cam_model = getattr(config, "camera_model", "SIMULATED").upper()

    if force_mock:
        if any(k in cam_model for k in ("FLIR", "BLACKFLY", "BFS", "SPINNAKER")):
            return MockBlackflySCamera(config.num_pixels)
        return MockCamera(config.num_pixels)

    if any(k in cam_model for k in ("ST133", "ST-133", "OMA", "INGAAS", "7514")):
        # libusbK transport (pyusb) is the only one that delivers pixel frames
        # on 64-bit Windows -- see st133_libusb.py / IN_PROGRESS.md. Opt in via
        # a model string containing "LIBUSB"; the default stays on the WinUSB
        # ST133Camera (register I/O + setpoint only).
        if "LIBUSB" in cam_model:
            return ST133LibUsbCamera(num_pixels=config.num_pixels)
        return ST133Camera(num_pixels=config.num_pixels)

    if any(k in cam_model for k in ("FLIR", "BLACKFLY", "BFS", "SPINNAKER")):
        return BlackflySCamera(num_pixels=config.num_pixels)

    if any(k in cam_model for k in ("MTE", "PIMTE", "PIXIS", "PICAM")):
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
