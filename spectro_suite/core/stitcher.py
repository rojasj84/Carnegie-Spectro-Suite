"""
Spectrum Stitching / Gluing Engine for Wide-Range Spectral Scanning.
"""

from __future__ import annotations
from dataclasses import dataclass
from typing import List, Tuple, Callable, Optional
import numpy as np

from .calibration import OpticalCalibration
from ..config import GratingConfig


@dataclass
class StitchInterval:
    """Represents an individual spectral acquisition window in a stitched scan."""
    index: int
    center_wavelength_nm: float
    left_wavelength_nm: float
    right_wavelength_nm: float
    wavelengths: Optional[np.ndarray] = None
    intensities: Optional[np.ndarray] = None


class SpectrumStitcher:
    """
    Plans and stitches multi-window spectral scans across wide wavelength ranges.
    """

    def __init__(self, calibration: OpticalCalibration):
        self.cal = calibration

    def plan_intervals(
        self,
        from_nm: float,
        to_nm: float,
        overlap_pixels: int = 50,
        num_pixels: int | None = None
    ) -> List[StitchInterval]:
        """
        Calculate the required sequence of spectrometer center positions to cover
        [from_nm, to_nm] with the specified pixel overlap.
        """
        n_pix = num_pixels if num_pixels is not None else self.cal.num_pixels
        if overlap_pixels <= 0:
            overlap_pixels = 1
        if overlap_pixels >= n_pix:
            overlap_pixels = n_pix // 4

        intervals: List[StitchInterval] = []
        
        # Window 1
        center_1 = self.cal.calculate_center_for_target_pixel(from_nm, float(overlap_pixels))
        w_left_1 = self.cal.pixel_to_wavelength(center_1, 1.0)
        w_right_1 = self.cal.pixel_to_wavelength(center_1, float(n_pix))

        # Handle grating dispersion direction
        increasing = (w_right_1 > w_left_1)
        
        intervals.append(StitchInterval(
            index=1,
            center_wavelength_nm=center_1,
            left_wavelength_nm=min(w_left_1, w_right_1),
            right_wavelength_nm=max(w_left_1, w_right_1)
        ))

        idx = 1
        curr_right = max(w_left_1, w_right_1) if increasing else min(w_left_1, w_right_1)

        while (curr_right < to_nm if increasing else curr_right > to_nm) and idx < 100:
            idx += 1
            target_edge = intervals[-1].right_wavelength_nm if increasing else intervals[-1].left_wavelength_nm
            next_center = self.cal.calculate_center_for_target_pixel(target_edge, float(overlap_pixels))
            w_l = self.cal.pixel_to_wavelength(next_center, 1.0)
            w_r = self.cal.pixel_to_wavelength(next_center, float(n_pix))

            left_bound = min(w_l, w_r)
            right_bound = max(w_l, w_r)

            # Guard against infinite loops if no progress
            if abs(next_center - intervals[-1].center_wavelength_nm) < 0.01:
                break

            intervals.append(StitchInterval(
                index=idx,
                center_wavelength_nm=next_center,
                left_wavelength_nm=left_bound,
                right_wavelength_nm=right_bound
            ))
            curr_right = right_bound if increasing else left_bound

        return intervals

    @staticmethod
    def stitch_spectra(
        wavelength_windows: List[np.ndarray],
        intensity_windows: List[np.ndarray],
        step_nm: Optional[float] = None
    ) -> Tuple[np.ndarray, np.ndarray]:
        """
        Merge multiple overlapping spectral windows into a unified continuous spectrum.
        Uses linear blend across overlapping regions to avoid step discontinuities.
        """
        if not wavelength_windows or not intensity_windows:
            return np.array([]), np.array([])

        all_w = np.concatenate(wavelength_windows)
        min_w, max_w = float(np.min(all_w)), float(np.max(all_w))

        if step_nm is None:
            diffs = np.diff(wavelength_windows[0])
            step_nm = float(np.abs(np.mean(diffs))) if len(diffs) > 0 else 0.05

        grid_x = np.arange(min_w, max_w + step_nm / 2.0, step_nm)
        grid_y = np.zeros_like(grid_x)
        grid_weights = np.zeros_like(grid_x)

        for w_arr, i_arr in zip(wavelength_windows, intensity_windows):
            sort_idx = np.argsort(w_arr)
            w_sorted = w_arr[sort_idx]
            i_sorted = i_arr[sort_idx]

            valid_mask = (grid_x >= w_sorted[0]) & (grid_x <= w_sorted[-1])
            if np.any(valid_mask):
                interp_y = np.interp(grid_x[valid_mask], w_sorted, i_sorted)
                
                # Weighting: triangular taper near window edges for smooth blending
                w_norm = (grid_x[valid_mask] - w_sorted[0]) / (w_sorted[-1] - w_sorted[0] + 1e-9)
                weights = np.minimum(w_norm, 1.0 - w_norm) * 2.0
                weights = np.clip(weights, 0.01, 1.0)

                grid_y[valid_mask] += interp_y * weights
                grid_weights[valid_mask] += weights

        non_zero = grid_weights > 0
        grid_y[non_zero] /= grid_weights[non_zero]

        return grid_x, grid_y
