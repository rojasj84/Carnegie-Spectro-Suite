"""
Spectrometer Configuration Model & Legacy CFG Parser.
"""

from __future__ import annotations
import json
import os
from dataclasses import dataclass, field
from typing import Optional, Dict, Any


DEFAULT_LABELS = [
    "wavelength",
    "Central pixel",
    "Grating grooves/mm",
    "Inclusion angle (radians)",
    "Focal length",
    "OMA element size",
    "Angle between normal to the OMA plane and the optical axis (degrees)",
    "Steps/Nm for 1200 g/mm grating",
    "Spectrometer position in nm",
    "Slit size",
    "Accumulation (1) time",
    "Number of Accumulations"
]


@dataclass
class GratingConfig:
    """Optical parameters associated with a specific grating turret position."""
    laser_wavelength: float = 514.532       # Laser excitation wavelength (nm)
    central_pixel: float = 512.0            # Optical center CCD pixel
    grating_grooves_per_mm: float = 1800.0  # Grooves per mm (e.g., 1800, 1200, 300)
    inclusion_angle_rad: float = 0.288      # Monochromator inclusion angle in radians
    focal_length_mm: float = 460.0          # Spectrometer focal length (460 mm for HR460)
    oma_element_size_mm: float = -0.02765   # CCD pixel pitch / dispersion scale (mm)
    correction_angle_deg: float = 0.0       # CCD plane tilt angle relative to normal (deg)
    steps_per_nm_at_1200: float = 160.0     # Motor encoder steps per nm for 1200 g/mm grating
    spectrometer_pos_nm: float = 700.0      # Current or last known center wavelength (nm)
    slit_size: float = 30.0                 # Entrance slit width (microns / steps)
    exposure_time_sec: float = 1.0          # Default single exposure time (s)
    accumulations: int = 1                  # Number of spectrum accumulations


@dataclass
class SpectrometerConfig:
    """Complete spectrometer and detector system configuration."""
    gratings: list[GratingConfig] = field(default_factory=lambda: [
        GratingConfig(grating_grooves_per_mm=1800.0, spectrometer_pos_nm=700.0),
        GratingConfig(grating_grooves_per_mm=300.0, spectrometer_pos_nm=700.0)
    ])
    active_grating_index: int = 0          # 0 for Grating 1, 1 for Grating 2
    num_pixels: int = 1024                 # Detector pixel count (e.g., 1024, 1340, 1400)
    instrument_model: str = "HR460"        # Spectrometer driver to use: "HR460" or "ACTON"
    camera_model: str = "SIMULATED"        # Detector driver to use: "SIMULATED", "MOCK", "WINSPEC", etc.
    com_port: str = "COM1"                 # Serial COM port for the spectrometer controller
    baudrate: int = 9600                   # Serial baudrate
    spe_data_path: str = "calib.spe"       # Path for temporary SPE acquisition transfer
    labels: list[str] = field(default_factory=lambda: list(DEFAULT_LABELS))

    @property
    def active_grating(self) -> GratingConfig:
        """Returns the currently active GratingConfig."""
        if 0 <= self.active_grating_index < len(self.gratings):
            return self.gratings[self.active_grating_index]
        return self.gratings[0]

    @classmethod
    def from_legacy_cfg(cls, filepath: str) -> SpectrometerConfig:
        """Load configuration from a legacy Wsp-460.cfg / DEFAULT.CFG file."""
        if not os.path.exists(filepath):
            raise FileNotFoundError(f"Configuration file not found: {filepath}")

        with open(filepath, "r", encoding="latin-1") as f:
            lines = [line.strip() for line in f if line.strip()]

        if len(lines) < 12:
            raise ValueError(f"Legacy CFG file {filepath} contains fewer than 12 parameter lines.")

        params1 = []
        params2 = []
        for i in range(12):
            parts = lines[i].split()
            if len(parts) == 1:
                val1 = float(parts[0])
                val2 = val1
            else:
                val1 = float(parts[0])
                val2 = float(parts[1])
            params1.append(val1)
            params2.append(val2)

        g1 = GratingConfig(
            laser_wavelength=params1[0],
            central_pixel=params1[1],
            grating_grooves_per_mm=params1[2],
            inclusion_angle_rad=params1[3],
            focal_length_mm=params1[4],
            oma_element_size_mm=params1[5],
            correction_angle_deg=params1[6],
            steps_per_nm_at_1200=params1[7],
            spectrometer_pos_nm=params1[8],
            slit_size=params1[9],
            exposure_time_sec=params1[10],
            accumulations=int(params1[11])
        )

        g2 = GratingConfig(
            laser_wavelength=params2[0],
            central_pixel=params2[1],
            grating_grooves_per_mm=params2[2],
            inclusion_angle_rad=params2[3],
            focal_length_mm=params2[4],
            oma_element_size_mm=params2[5],
            correction_angle_deg=params2[6],
            steps_per_nm_at_1200=params2[7],
            spectrometer_pos_nm=params2[8],
            slit_size=params2[9],
            exposure_time_sec=params2[10],
            accumulations=int(params2[11])
        )

        labels = lines[12:24] if len(lines) >= 24 else list(DEFAULT_LABELS)

        return cls(gratings=[g1, g2], active_grating_index=0, labels=labels)

    def save_legacy_cfg(self, filepath: str) -> None:
        """Save configuration in legacy Wsp-460.cfg format."""
        g1 = self.gratings[0] if len(self.gratings) > 0 else GratingConfig()
        g2 = self.gratings[1] if len(self.gratings) > 1 else g1

        vals1 = [
            g1.laser_wavelength,
            g1.central_pixel,
            g1.grating_grooves_per_mm,
            g1.inclusion_angle_rad,
            g1.focal_length_mm,
            g1.oma_element_size_mm,
            g1.correction_angle_deg,
            g1.steps_per_nm_at_1200,
            g1.spectrometer_pos_nm,
            g1.slit_size,
            g1.exposure_time_sec,
            float(g1.accumulations)
        ]

        vals2 = [
            g2.laser_wavelength,
            g2.central_pixel,
            g2.grating_grooves_per_mm,
            g2.inclusion_angle_rad,
            g2.focal_length_mm,
            g2.oma_element_size_mm,
            g2.correction_angle_deg,
            g2.steps_per_nm_at_1200,
            g2.spectrometer_pos_nm,
            g2.slit_size,
            g2.exposure_time_sec,
            float(g2.accumulations)
        ]

        with open(filepath, "w", encoding="latin-1") as f:
            for v1, v2 in zip(vals1, vals2):
                f.write(f" {v1:<16} {v2}\n")
            for lbl in self.labels[:12]:
                f.write(f"{lbl}\n")

    def to_dict(self) -> Dict[str, Any]:
        """Convert configuration to dictionary."""
        return {
            "active_grating_index": self.active_grating_index,
            "num_pixels": self.num_pixels,
            "instrument_model": self.instrument_model,
            "camera_model": self.camera_model,
            "com_port": self.com_port,
            "baudrate": self.baudrate,
            "spe_data_path": self.spe_data_path,
            "gratings": [
                {
                    "laser_wavelength": g.laser_wavelength,
                    "central_pixel": g.central_pixel,
                    "grating_grooves_per_mm": g.grating_grooves_per_mm,
                    "inclusion_angle_rad": g.inclusion_angle_rad,
                    "focal_length_mm": g.focal_length_mm,
                    "oma_element_size_mm": g.oma_element_size_mm,
                    "correction_angle_deg": g.correction_angle_deg,
                    "steps_per_nm_at_1200": g.steps_per_nm_at_1200,
                    "spectrometer_pos_nm": g.spectrometer_pos_nm,
                    "slit_size": g.slit_size,
                    "exposure_time_sec": g.exposure_time_sec,
                    "accumulations": g.accumulations,
                }
                for g in self.gratings
            ]
        }

    @classmethod
    def from_dict(cls, data: Dict[str, Any]) -> SpectrometerConfig:
        """Create configuration from dictionary."""
        gratings = [
            GratingConfig(**g_data) for g_data in data.get("gratings", [])
        ]
        if not gratings:
            gratings = [GratingConfig()]
        return cls(
            gratings=gratings,
            active_grating_index=data.get("active_grating_index", 0),
            num_pixels=data.get("num_pixels", 1024),
            instrument_model=data.get("instrument_model", "HR460"),
            camera_model=data.get("camera_model", "SIMULATED"),
            com_port=data.get("com_port", "COM1"),
            baudrate=data.get("baudrate", 9600),
            spe_data_path=data.get("spe_data_path", "calib.spe"),
        )

    def save_json(self, filepath: str) -> None:
        """Save configuration to JSON file."""
        with open(filepath, "w", encoding="utf-8") as f:
            json.dump(self.to_dict(), f, indent=2)

    @classmethod
    def from_json(cls, filepath: str) -> SpectrometerConfig:
        """Load configuration from JSON file."""
        with open(filepath, "r", encoding="utf-8") as f:
            data = json.load(f)
        return cls.from_dict(data)
