"""
Tests for spectrum stitching / gluing engine.
"""

import unittest
import numpy as np
from spectro_suite.config import GratingConfig
from spectro_suite.core.calibration import OpticalCalibration
from spectro_suite.core.stitcher import SpectrumStitcher


class TestStitcher(unittest.TestCase):

    def setUp(self):
        self.grating_config = GratingConfig(
            laser_wavelength=514.532,
            central_pixel=512.0,
            grating_grooves_per_mm=1800.0,
            focal_length_mm=460.0,
            oma_element_size_mm=-0.02765,
            inclusion_angle_rad=0.288,
            spectrometer_pos_nm=700.0
        )
        self.cal = OpticalCalibration(self.grating_config, num_pixels=1024)
        self.stitcher = SpectrumStitcher(self.cal)

    def test_plan_intervals(self):
        intervals = self.stitcher.plan_intervals(from_nm=680.0, to_nm=720.0, overlap_pixels=50)
        self.assertGreater(len(intervals), 1)
        self.assertLess(intervals[0].left_wavelength_nm, 685.0)
        self.assertGreater(intervals[-1].right_wavelength_nm, 715.0)

    def test_stitch_overlapping_windows(self):
        # Two overlapping windows
        w1 = np.linspace(680.0, 705.0, 500)
        w2 = np.linspace(700.0, 725.0, 500)

        # Flat intensity with a peak at 702.5 nm (in the overlap region)
        i1 = np.full(500, 100.0) + 500.0 * np.exp(-((w1 - 702.5) / 0.5) ** 2)
        i2 = np.full(500, 100.0) + 500.0 * np.exp(-((w2 - 702.5) / 0.5) ** 2)

        x_grid, y_grid = self.stitcher.stitch_spectra([w1, w2], [i1, i2], step_nm=0.05)
        self.assertGreater(len(x_grid), 0)
        self.assertEqual(len(x_grid), len(y_grid))
        self.assertAlmostEqual(x_grid[0], 680.0, places=1)
        self.assertAlmostEqual(x_grid[-1], 725.0, places=1)

        # Check that peak height is preserved smoothly in overlap region
        peak_idx = np.argmin(np.abs(x_grid - 702.5))
        self.assertAlmostEqual(y_grid[peak_idx], 600.0, delta=20.0)

    def test_stitch_empty_and_mismatched_windows(self):
        # Empty inputs
        x, y = self.stitcher.stitch_spectra([], [])
        self.assertEqual(len(x), 0)
        self.assertEqual(len(y), 0)

        # Mismatched lengths
        x, y = self.stitcher.stitch_spectra([np.array([1, 2, 3])], [])
        self.assertEqual(len(x), 0)
        self.assertEqual(len(y), 0)

        # Window with empty array filtered out
        w1 = np.linspace(680.0, 700.0, 100)
        i1 = np.full(100, 50.0)
        w_empty = np.array([])
        i_empty = np.array([])
        x, y = self.stitcher.stitch_spectra([w1, w_empty], [i1, i_empty])
        self.assertGreater(len(x), 0)
        self.assertEqual(len(x), len(y))


if __name__ == "__main__":
    unittest.main()
