"""
Cosmic Ray Suppression and Signal Processing Filters.
"""

from __future__ import annotations
from typing import Sequence, List
import numpy as np


def remove_cosmic_rays_threshold(
    current_frame: np.ndarray,
    running_avg: np.ndarray,
    previous_frame: np.ndarray,
    threshold: float = 100.0,
    factor: float = 3.0
) -> np.ndarray:
    """
    Cosmic ray suppression via threshold delta test.
    If |current - previous| / threshold > factor, the pixel is replaced by the running average.
    """
    clean_frame = np.copy(current_frame)
    if threshold <= 0:
        threshold = 1.0

    delta = np.abs(current_frame - previous_frame)
    spikes = (delta / threshold) > factor
    clean_frame[spikes] = running_avg[spikes]
    return clean_frame


def remove_cosmic_rays_median(
    frames: Sequence[np.ndarray]
) -> np.ndarray:
    """
    Cosmic ray suppression across temporal accumulations via pixel-by-pixel median.
    Expects at least 3 frames.
    """
    if len(frames) == 0:
        return np.array([], dtype=np.float64)
    if len(frames) < 3:
        # Fallback to mean if fewer than 3 frames
        return np.mean(frames, axis=0)

    stack = np.stack(frames, axis=0)
    return np.median(stack, axis=0)


def remove_single_frame_spikes(
    spectrum: np.ndarray,
    window_size: int = 5,
    threshold_sigma: float = 5.0
) -> np.ndarray:
    """
    Remove sharp cosmic ray spikes from a single 1D spectrum using a robust rolling median filter.
    """
    if len(spectrum) < window_size:
        return spectrum.copy()

    clean = spectrum.copy()
    half = window_size // 2
    n = len(spectrum)

    for i in range(half, n - half):
        neighborhood = np.concatenate((spectrum[i - half:i], spectrum[i + 1:i + half + 1]))
        med = float(np.median(neighborhood))
        mad = float(np.median(np.abs(neighborhood - med)))
        std_est = 1.4826 * mad if mad > 0 else 1e-6
        if abs(spectrum[i] - med) > threshold_sigma * std_est:
            clean[i] = med

    return clean
