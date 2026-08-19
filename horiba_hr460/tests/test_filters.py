"""
Tests for cosmic ray removal and filtering.
"""

import unittest
import numpy as np
from horiba_hr460.core.filters import (
    remove_cosmic_rays_threshold,
    remove_cosmic_rays_median,
    remove_single_frame_spikes
)


class TestFilters(unittest.TestCase):

    def test_remove_cosmic_rays_median(self):
        # Create 3 clean baseline frames
        f1 = np.full(100, 500.0)
        f2 = np.full(100, 500.0)
        f3 = np.full(100, 500.0)

        # Inject a cosmic ray spike in f2 at pixel 45
        f2[45] = 25000.0

        clean = remove_cosmic_rays_median([f1, f2, f3])
        self.assertEqual(len(clean), 100)
        self.assertAlmostEqual(clean[45], 500.0)

    def test_remove_cosmic_rays_threshold(self):
        running_avg = np.full(100, 500.0)
        prev_frame = np.full(100, 500.0)
        curr_frame = np.full(100, 500.0)

        # Inject spike
        curr_frame[20] = 10000.0

        clean = remove_cosmic_rays_threshold(
            current_frame=curr_frame,
            running_avg=running_avg,
            previous_frame=prev_frame,
            threshold=100.0,
            factor=3.0
        )
        self.assertAlmostEqual(clean[20], 500.0)
        self.assertAlmostEqual(clean[0], 500.0)

    def test_remove_single_frame_spikes(self):
        spectrum = np.full(100, 1000.0)
        spectrum[50] = 50000.0  # single pixel spike

        clean = remove_single_frame_spikes(spectrum, window_size=5, threshold_sigma=5.0)
        self.assertAlmostEqual(clean[50], 1000.0)


if __name__ == "__main__":
    unittest.main()
