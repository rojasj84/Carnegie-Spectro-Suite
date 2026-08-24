"""
Tests for the hardware factory functions (create_spectrometer / create_camera / create_detector).
"""

import unittest
import numpy as np
from spectro_suite.config import SpectrometerConfig
from spectro_suite.hardware.factory import create_spectrometer, create_camera, create_detector
from spectro_suite.hardware.spectrometers import HoribaHR460, MockHoribaHR460, ActonSpectrometer, MockActonSpectrometer
from spectro_suite.hardware.detectors import MockCamera, PIMTECamera, ST133Camera, WinSpecController, MockWinSpecCamera, MockBlackflySCamera


class TestSpectrometerFactory(unittest.TestCase):

    def test_hr460_real(self):
        cfg = SpectrometerConfig(instrument_model="HR460")
        inst = create_spectrometer(cfg, force_mock=False)
        self.assertIsInstance(inst, HoribaHR460)
        self.assertFalse(inst.is_mock)

    def test_hr460_mock(self):
        cfg = SpectrometerConfig(instrument_model="HR460")
        inst = create_spectrometer(cfg, force_mock=True)
        self.assertIsInstance(inst, MockHoribaHR460)
        self.assertTrue(inst.is_mock)

    def test_acton_real(self):
        cfg = SpectrometerConfig(instrument_model="ACTON")
        inst = create_spectrometer(cfg, force_mock=False)
        self.assertIsInstance(inst, ActonSpectrometer)
        self.assertFalse(inst.is_mock)

    def test_acton_mock(self):
        cfg = SpectrometerConfig(instrument_model="ACTON")
        inst = create_spectrometer(cfg, force_mock=True)
        self.assertIsInstance(inst, MockActonSpectrometer)
        self.assertTrue(inst.is_mock)

    def test_instrument_model_case_insensitive(self):
        cfg = SpectrometerConfig(instrument_model="acton")
        inst = create_spectrometer(cfg, force_mock=True)
        self.assertIsInstance(inst, MockActonSpectrometer)
        self.assertTrue(inst.is_mock)


class TestCameraFactory(unittest.TestCase):

    def test_default_camera(self):
        cfg_sim = SpectrometerConfig(camera_model="SIMULATED")
        cam_sim = create_camera(cfg_sim, force_mock=False)
        self.assertIsInstance(cam_sim, MockCamera)

        cfg_st133 = SpectrometerConfig(camera_model="Princeton Instruments ST-133 InGaAs")
        cam_st133 = create_camera(cfg_st133, force_mock=False)
        self.assertIsInstance(cam_st133, ST133Camera)

    def test_mock_camera(self):
        cfg = SpectrometerConfig()
        cam = create_camera(cfg, force_mock=True)
        self.assertIsInstance(cam, MockCamera)
        self.assertEqual(cam.num_pixels, cfg.num_pixels)

    def test_pimte_camera(self):
        cfg = SpectrometerConfig(camera_model="PI MTE USB Camera")
        cam = create_camera(cfg, force_mock=False)
        self.assertIsInstance(cam, PIMTECamera)

    def test_create_detector_alias(self):
        cfg = SpectrometerConfig(camera_model="PI MTE USB Camera")
        cam = create_detector(cfg, force_mock=False)
        self.assertIsInstance(cam, PIMTECamera)

    def test_blackfly_camera(self):
        cfg = SpectrometerConfig(camera_model="FLIR Blackfly S BFS-U3")
        cam = create_camera(cfg, force_mock=True)
        from spectro_suite.hardware.detectors import MockBlackflySCamera
        self.assertIsInstance(cam, MockBlackflySCamera)

    def test_mock_camera_returns_integer_counts(self):
        cfg = SpectrometerConfig()
        cam = create_camera(cfg, force_mock=True)
        data, frame_idx = cam.acquire_frame(exposure_time_sec=0.01)
        self.assertTrue(np.issubdtype(data.dtype, np.integer))
        self.assertEqual(len(data), cam.num_pixels)

    def test_camera_temperature_readout(self):
        for cam in [MockCamera(), MockBlackflySCamera(), MockWinSpecCamera()]:
            cam.connect()
            temp_info = cam.get_temperature()
            self.assertIsNotNone(temp_info)
            self.assertIn("temperature_c", temp_info)
            self.assertIsInstance(temp_info["temperature_c"], (int, float))

        # Real hardware drivers return None (OFFLINE) when disconnected
        for real_cam in [ST133Camera(), PIMTECamera()]:
            temp_info = real_cam.get_temperature()
            self.assertIsNotNone(temp_info)
            self.assertIn("temperature_c", temp_info)
            self.assertIsNone(temp_info["temperature_c"])


if __name__ == "__main__":
    unittest.main()
