"""
Tests for Horiba HR460 hardware drivers and simulation mode.
"""

import unittest
from horiba_hr460.config import SpectrometerConfig
from horiba_hr460.hardware.hr460 import HoribaHR460, MockHoribaHR460, MonochromatorStatus
from horiba_hr460.hardware.winspec import MockWinSpecCamera


class TestHardwareDrivers(unittest.TestCase):

    def setUp(self):
        self.config = SpectrometerConfig()
        self.mock_mono = MockHoribaHR460(self.config)
        self.mock_cam = MockWinSpecCamera(self.config.num_pixels)

    def test_mock_mono_connection_and_motion(self):
        self.assertTrue(self.mock_mono.connect())
        self.assertEqual(self.mock_mono.status, MonochromatorStatus.DEMO_MODE)

        # Move to 750 nm
        reported_positions = []
        def _prog(pos):
            reported_positions.append(pos)

        res = self.mock_mono.move_to_wavelength(750.0, progress_callback=_prog)
        self.assertTrue(res)
        self.assertAlmostEqual(self.mock_mono.current_wavelength_nm, 750.0)
        self.assertGreater(len(reported_positions), 0)

    def test_mock_mono_slit_and_grating(self):
        self.mock_mono.connect()
        self.assertTrue(self.mock_mono.move_slit(50.0))
        self.assertAlmostEqual(self.mock_mono.current_slit_size, 50.0)

        self.assertTrue(self.mock_mono.select_grating(1))
        self.assertEqual(self.mock_mono.config.active_grating_index, 1)

    def test_mock_camera_acquisition(self):
        self.assertTrue(self.mock_cam.connect())
        spectrum, n_pix = self.mock_cam.acquire_frame(exposure_time_sec=0.1)
        self.assertEqual(n_pix, 1024)
        self.assertEqual(len(spectrum), 1024)
        self.assertGreater(spectrum.max(), 0.0)


if __name__ == "__main__":
    unittest.main()
