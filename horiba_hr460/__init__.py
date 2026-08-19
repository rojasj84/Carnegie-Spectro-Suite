"""
Universal Spectrometer & Detector Control Suite
================================================
A modern Python interface for controlling multi-vendor spectrometers
(Horiba, Acton SpectraPro, etc.) and optical detectors/cameras.
"""

from .config import SpectrometerConfig, GratingConfig
from .core.calibration import OpticalCalibration, Units
from .core.filters import remove_cosmic_rays_threshold, remove_cosmic_rays_median
from .core.stitcher import SpectrumStitcher, StitchInterval
from .core.spe_file import read_spe, write_spe, SpeFile
from .hardware.base import MonochromatorStatus, Spectrometer, Camera
from .hardware.hr460 import HoribaHR460, MockHoribaHR460
from .hardware.acton import ActonSpectrometer, MockActonSpectrometer
from .hardware.camera import MockCamera
from .hardware.winspec import WinSpecController, MockWinSpecCamera
from .hardware.factory import create_spectrometer, create_camera

__version__ = "1.1.0"
__all__ = [
    "SpectrometerConfig",
    "GratingConfig",
    "OpticalCalibration",
    "Units",
    "remove_cosmic_rays_threshold",
    "remove_cosmic_rays_median",
    "SpectrumStitcher",
    "StitchInterval",
    "read_spe",
    "write_spe",
    "SpeFile",
    "MonochromatorStatus",
    "Spectrometer",
    "Camera",
    "HoribaHR460",
    "MockHoribaHR460",
    "ActonSpectrometer",
    "MockActonSpectrometer",
    "MockCamera",
    "WinSpecController",
    "MockWinSpecCamera",
    "create_spectrometer",
    "create_camera",
]

