"""
Core calculation and data processing modules.
"""

from .calibration import OpticalCalibration, Units, ruby_pressure
from .filters import remove_cosmic_rays_threshold, remove_cosmic_rays_median, remove_single_frame_spikes
from .stitcher import SpectrumStitcher, StitchInterval
from .spe_file import read_spe, write_spe, SpeFile
from .profiles import (
    get_default_profiles,
    load_app_settings,
    save_app_settings,
    clear_default_settings,
    scan_hardware_ports,
    detect_connected_cameras,
)

__all__ = [
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
    "get_default_profiles",
    "load_app_settings",
    "save_app_settings",
    "clear_default_settings",
    "scan_hardware_ports",
    "detect_connected_cameras",
]
