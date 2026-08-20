"""
Backward compatibility layer for legacy imports.
All active functionality has migrated to `spectro_suite`.
"""

import warnings
from spectro_suite import (
    SpectrometerConfig,
    GratingConfig,
    OpticalCalibration,
    Units,
    ruby_pressure,
    remove_cosmic_rays_threshold,
    remove_cosmic_rays_median,
    remove_single_frame_spikes,
    SpectrumStitcher,
    StitchInterval,
    read_spe,
    write_spe,
    SpeFile,
    MonochromatorStatus,
    Spectrometer,
    Camera,
    Detector,
    ActonSpectrometer,
    MockActonSpectrometer,
    HoribaHR460,
    MockHoribaHR460,
    MockCamera,
    MockDetector,
    PIMTECamera,
    WinSpecController,
    MockWinSpecCamera,
    create_spectrometer,
    create_camera,
    create_detector,
)

warnings.warn(
    "Importing from 'horiba_hr460' is deprecated and will be removed in future versions. "
    "Please import from 'spectro_suite' instead.",
    DeprecationWarning,
    stacklevel=2,
)

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
