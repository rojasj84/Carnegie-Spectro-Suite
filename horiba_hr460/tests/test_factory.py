"""
Tests for the hardware factory functions (create_spectrometer / create_camera).
"""

import unittest
from horiba_hr460.config import SpectrometerConfig
from horiba_hr460.hardware.factory import create_spectrometer, create_camera
from horiba_hr460.hardware.hr460 import HoribaHR460, MockHoribaHR460
from horiba_hr460.hardware.acton import ActonSpectrometer, MockActonSpectrometer
from horiba_hr460.hardware.winspec import WinSpecController, MockWinSpecCamera


class TestSpectrometerFactory(unittest.TestCase):

    def test_hr460_real(self):
        cfg = SpectrometerConfig(instrument_model="HR460")
        self.assertIsInstance(create_spectrometer(cfg, force_mock=False), HoribaHR460)

    def test_hr460_mock(self):
        cfg = SpectrometerConfig(instrument_model="HR460")
        self.assertIsInstance(create_spectrometer(cfg, force_mock=True), MockHoribaHR460)

    def test_acton_real(self):
        cfg = SpectrometerConfig(instrument_model="ACTON")
        self.assertIsInstance(create_spectrometer(cfg, force_mock=False), ActonSpectrometer)

    def test_acton_mock(self):
        cfg = SpectrometerConfig(instrument_model="ACTON")
        self.assertIsInstance(create_spectrometer(cfg, force_mock=True), MockActonSpectrometer)

    def test_instrument_model_case_insensitive(self):
        cfg = SpectrometerConfig(instrument_model="acton")
        self.assertIsInstance(create_spectrometer(cfg, force_mock=True), MockActonSpectrometer)


class TestCameraFactory(unittest.TestCase):

    def test_real_camera(self):
        cfg = SpectrometerConfig()
        self.assertIsInstance(create_camera(cfg, force_mock=False), WinSpecController)

    def test_mock_camera(self):
        cfg = SpectrometerConfig()
        cam = create_camera(cfg, force_mock=True)
        self.assertIsInstance(cam, MockWinSpecCamera)
        self.assertEqual(cam.num_pixels, cfg.num_pixels)


if __name__ == "__main__":
    unittest.main()
