"""
Unit tests for FLIR Blackfly S Camera driver and Live Camera Display Window.
"""

import unittest
from unittest.mock import MagicMock, patch
import numpy as np

from horiba_hr460.config import SpectrometerConfig
from horiba_hr460.hardware.blackfly import BlackflySCamera, MockBlackflySCamera
from horiba_hr460.hardware.factory import create_camera
from horiba_hr460.gui.camera_view import CameraDisplayWindow


class TestBlackflyCamera(unittest.TestCase):

    def test_mock_blackfly_camera(self):
        cam = MockBlackflySCamera(num_pixels=1616)
        self.assertTrue(cam.connect())
        self.assertTrue(cam.is_connected)
        self.assertTrue(cam.is_mock)
        self.assertEqual(cam.width, 1616)
        self.assertEqual(cam.height, 1240)

        # Test 2D frame grab
        rgb_frame = cam.grab_2d_frame("RGB")
        self.assertIsNotNone(rgb_frame)
        self.assertEqual(rgb_frame.shape, (1240, 1616, 3))
        self.assertEqual(rgb_frame.dtype, np.uint8)

        mono_frame = cam.grab_2d_frame("MONO")
        self.assertIsNotNone(mono_frame)
        self.assertEqual(mono_frame.shape, (1240, 1616))
        self.assertEqual(mono_frame.dtype, np.uint8)

        # Test spectroscopy 1D binning
        spec_1d, max_val = cam.acquire_frame(0.05)
        self.assertEqual(len(spec_1d), 1616)
        self.assertGreater(max_val, 0)

        # Test exposure and gain setters
        self.assertTrue(cam.set_exposure_time(0.03))
        self.assertAlmostEqual(cam.get_exposure_time(), 0.03, places=3)
        self.assertTrue(cam.set_gain(6.0))
        self.assertAlmostEqual(cam.get_gain(), 6.0, places=1)

        cam.disconnect()
        self.assertFalse(cam.is_connected)

    def test_factory_camera_creation(self):
        cfg_mock = SpectrometerConfig(camera_model="FLIR Blackfly S BFS-U3")
        cam = create_camera(cfg_mock, force_mock=True)
        self.assertIsInstance(cam, MockBlackflySCamera)

    def test_camera_display_window_mock(self):
        cam = MockBlackflySCamera(num_pixels=1616)
        win = CameraDisplayWindow(camera=cam)
        win.withdraw()  # Hide during test
        self.assertTrue(win.winfo_exists())
        self.assertIsNotNone(win.canvas)
        self.assertIsNotNone(win.spectrum_canvas)
        win._on_close()


if __name__ == "__main__":
    unittest.main()
