"""
Optical Calibration and Coordinate Conversion for Horiba HR460.
"""

from __future__ import annotations
import math
from enum import Enum
from typing import Union, Sequence
import numpy as np

from ..config import GratingConfig


class Units(str, Enum):
    NM = "nm"
    PIXEL = "pixel"
    REL_CM_1 = "rel cm-1"   # Relative Raman shift in cm-1
    CM_1 = "cm-1"           # Absolute wavenumber in cm-1
    MEV = "meV"             # Absolute energy in meV
    REL_MEV = "rel meV"     # Relative energy shift in meV


def ruby_pressure(wavelength_nm: float, temperature_k: float = 300.0) -> float:
    """
    Calculate pressure (in GPa) from Ruby R1 fluorescence peak wavelength and temperature
    using the standard Mao-Bell calibrated scale.
    """
    if temperature_k < 80.0:
        delta = 0.92
    else:
        dt = temperature_k - 300.0
        delta = -(0.0068581 * dt + 0.0000049137 * (dt ** 2) - 0.000000033064 * (dt ** 3))

    r0 = 694.34 - delta
    ratio = wavelength_nm / r0
    if ratio <= 0:
        return 0.0

    # Mao-Bell ruby scale: P (in GPa) = (1904 / 7.665) * [(lambda / lambda_0)^7.665 - 1] / 10
    # Note: in the original VB code PressT gives GPa / kbar.
    pressure = (1904.0 / 7.665) * (math.pow(ratio, 7.665) - 1.0)
    return pressure


class OpticalCalibration:
    """
    Handles spectrometer dispersion geometry and coordinate transformations
    for the Horiba Jobin Yvon HR460 with a multichannel detector (CCD).
    """

    def __init__(self, config: GratingConfig, num_pixels: int = 1024):
        self.config = config
        self.num_pixels = num_pixels

    def get_pixel_wavelengths(
        self,
        center_wavelength_nm: float | None = None,
        num_pixels: int | None = None
    ) -> np.ndarray:
        """
        Compute wavelength for each pixel across the CCD array.
        Pixels are 1-indexed (1 to N) matching legacy VB calibration.
        """
        ls = center_wavelength_nm if center_wavelength_nm is not None else self.config.spectrometer_pos_nm
        n_pix = num_pixels if num_pixels is not None else self.num_pixels

        pixels = np.arange(1, n_pix + 1, dtype=np.float64)
        return self.pixel_to_wavelength(ls, pixels)

    def pixel_to_wavelength(
        self,
        center_wavelength_nm: float,
        pixel_indices: Union[float, Sequence[float], np.ndarray]
    ) -> Union[float, np.ndarray]:
        """
        Forward dispersion equation: maps pixel indices to wavelength (nm).
        """
        pix = np.asarray(pixel_indices, dtype=np.float64)
        ang = self.config.inclusion_angle_rad
        g_sp = self.config.grating_grooves_per_mm
        focal_sp = self.config.focal_length_mm
        oma_el = self.config.oma_element_size_mm
        cor_ang_rad = math.radians(self.config.correction_angle_deg)
        l_center = self.config.central_pixel

        # Fi0 central grating angle
        sin_arg = (center_wavelength_nm * 1e-6 * g_sp) / (2.0 * math.cos(ang / 2.0))
        sin_arg = max(-1.0, min(1.0, sin_arg))
        fi0 = ang / 2.0 + math.asin(sin_arg)

        # Delta pixel distance from center
        delta_p = l_center - pix
        # Fi1 angle for each pixel
        tan_cor = math.tan(cor_ang_rad)
        disp_term = (delta_p * oma_el / focal_sp) * (1.0 - (delta_p * oma_el / focal_sp) * tan_cor)
        fi1 = fi0 + np.arctan(disp_term)

        wavelength_nm = (np.sin(fi1) + math.sin(fi0 - ang)) / g_sp * 1e6
        if isinstance(pixel_indices, (int, float)):
            return float(wavelength_nm)
        return wavelength_nm

    def wavelength_to_pixel(
        self,
        center_wavelength_nm: float,
        target_wavelength_nm: float
    ) -> float:
        """
        Inverse dispersion equation: find the pixel index corresponding to a given wavelength.
        """
        ang = self.config.inclusion_angle_rad
        g_sp = self.config.grating_grooves_per_mm
        focal_sp = self.config.focal_length_mm
        oma_el = self.config.oma_element_size_mm
        cor_ang_rad = math.radians(self.config.correction_angle_deg)
        l_center = self.config.central_pixel

        sin_arg = (center_wavelength_nm * 1e-6 * g_sp) / (2.0 * math.cos(ang / 2.0))
        sin_arg = max(-1.0, min(1.0, sin_arg))
        fi0 = ang / 2.0 + math.asin(sin_arg)

        sin_fi1 = (target_wavelength_nm * g_sp / 1e6) - math.sin(fi0 - ang)
        sin_fi1 = max(-1.0, min(1.0, sin_fi1))
        fi1 = math.asin(sin_fi1)

        # Initial pixel estimate (without tilt correction)
        pix_0 = l_center - (math.tan(fi1 - fi0) / oma_el * focal_sp)

        # Refined pixel with tilt correction
        tan_cor = math.tan(cor_ang_rad)
        denom = 1.0 - ((l_center - pix_0) * oma_el / focal_sp) * tan_cor
        if abs(denom) < 1e-9:
            denom = 1e-9
        angle_corrected = (fi1 - fi0) / denom
        pix = l_center - (math.tan(angle_corrected) / oma_el * focal_sp)
        return float(pix)

    def calculate_center_for_target_pixel(
        self,
        target_wavelength_nm: float,
        target_pixel: float
    ) -> float:
        """
        Calculate the spectrometer center wavelength required so that
        `target_wavelength_nm` lands at `target_pixel`.
        (Equivalent to legacy `LcentPixel`).
        """
        ang = self.config.inclusion_angle_rad
        g_sp = self.config.grating_grooves_per_mm
        focal_sp = self.config.focal_length_mm
        oma_el = self.config.oma_element_size_mm
        cor_ang_rad = math.radians(self.config.correction_angle_deg)
        l_center = self.config.central_pixel

        delta_p = l_center - target_pixel
        tan_cor = math.tan(cor_ang_rad)
        del_fi = math.atan((delta_p / focal_sp) * oma_el * (1.0 - (delta_p / focal_sp) * oma_el * tan_cor))

        sin_arg = (target_wavelength_nm * g_sp / 1e6) / (2.0 * math.cos((del_fi + ang) / 2.0))
        sin_arg = max(-1.0, min(1.0, sin_arg))
        sum_fi = ang + 2.0 * math.asin(sin_arg)

        fi0 = (sum_fi - del_fi) / 2.0
        center_nm = math.sin(fi0 - ang / 2.0) * math.cos(ang / 2.0) * 2.0 / (1e-6 * g_sp)
        return float(center_nm)

    def convert_wavelengths_to_units(
        self,
        wavelengths_nm: np.ndarray,
        unit: Units | str,
        laser_wavelength_nm: float | None = None
    ) -> np.ndarray:
        """
        Convert an array of wavelengths (in nm) to the requested coordinate unit.
        """
        unit = Units(unit)
        laser_wl = laser_wavelength_nm if laser_wavelength_nm is not None else self.config.laser_wavelength

        if unit == Units.NM:
            return wavelengths_nm.copy()

        elif unit == Units.PIXEL:
            return np.arange(1, len(wavelengths_nm) + 1, dtype=np.float64)

        elif unit == Units.REL_CM_1:
            # Raman shift in cm-1: (1/laser - 1/lambda) * 1e7
            return (1.0 / laser_wl - 1.0 / wavelengths_nm) * 1e7

        elif unit == Units.CM_1:
            # Absolute wavenumber in cm-1: 1/lambda * 1e7
            return (1.0 / wavelengths_nm) * 1e7

        elif unit == Units.MEV:
            # Absolute energy in meV: 1239.84193 / lambda * 1000
            return (1239.7 / wavelengths_nm) * 1000.0

        elif unit == Units.REL_MEV:
            # Relative energy shift in meV: 1239.7 * (1/laser - 1/lambda) * 1000
            return 1239.7 * (1.0 / laser_wl - 1.0 / wavelengths_nm) * 1000.0

        else:
            return wavelengths_nm.copy()
