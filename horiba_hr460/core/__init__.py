"""
Core calculation and data processing modules.
"""

from .calibration import OpticalCalibration, Units, ruby_pressure
from .filters import remove_cosmic_rays_threshold, remove_cosmic_rays_median
from .stitcher import SpectrumStitcher, StitchInterval
from .spe_file import read_spe, write_spe, SpeFile

__all__ = [
    "OpticalCalibration",
    "Units",
    "ruby_pressure",
    "remove_cosmic_rays_threshold",
    "remove_cosmic_rays_median",
    "SpectrumStitcher",
    "StitchInterval",
    "read_spe",
    "write_spe",
    "SpeFile",
]
