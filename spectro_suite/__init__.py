"""
Universal Spectrometer & Detector Control Suite (SpectroSuite)
==============================================================
A modern, vendor-agnostic Python package and graphical interface for multi-vendor
Spectrometers / Monochromators (Acton SpectraPro, Horiba Jobin Yvon, etc.) and
Optical Detectors / Cameras (Princeton Instruments PI-MTE, WinSpec COM, simulated arrays).
"""

from .config import SpectrometerConfig, GratingConfig
from .core.calibration import OpticalCalibration, Units, ruby_pressure
from .core.filters import remove_cosmic_rays_threshold, remove_cosmic_rays_median, remove_single_frame_spikes
from .core.stitcher import SpectrumStitcher, StitchInterval
from .core.spe_file import read_spe, write_spe, SpeFile
from .hardware.base import MonochromatorStatus, Spectrometer, Camera, Detector
from .hardware.spectrometers import (
    ActonSpectrometer,
    MockActonSpectrometer,
    HoribaHR460,
    MockHoribaHR460,
)
from .hardware.detectors import (
    MockCamera,
    MockDetector,
    PIMTECamera,
    WinSpecController,
    MockWinSpecCamera,
)
from .hardware.factory import create_spectrometer, create_camera, create_detector

__version__ = "2.0.0"
__all__ = [
    "SpectrometerConfig",
    "GratingConfig",
    "OpticalCalibration",
    "Units",
    "ruby_pressure",
    "remove_cosmic_rays_threshold",
    "remove_cosmic_rays_median",
    "remove_single_frame_spikes",
    "SpectrumStitcher",
    "StitchInterval",
    "read_spe",
    "write_spe",
    "SpeFile",
    "MonochromatorStatus",
    "Spectrometer",
    "Camera",
    "Detector",
    "ActonSpectrometer",
    "MockActonSpectrometer",
    "HoribaHR460",
    "MockHoribaHR460",
    "MockCamera",
    "MockDetector",
    "PIMTECamera",
    "WinSpecController",
    "MockWinSpecCamera",
    "create_spectrometer",
    "create_camera",
    "create_detector",
]
