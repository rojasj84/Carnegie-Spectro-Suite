"""
Tests for SpectrometerConfig and legacy CFG file parsing.
"""

import os
import unittest
import tempfile
from horiba_hr460.config import SpectrometerConfig, GratingConfig


class TestSpectrometerConfig(unittest.TestCase):

    def setUp(self):
        self.legacy_cfg_path = os.path.join(
            os.path.dirname(__file__), "..", "..", "HR460-PICCD", "Wsp-460.cfg"
        )

    def test_load_legacy_cfg(self):
        if not os.path.exists(self.legacy_cfg_path):
            self.skipTest(f"Legacy CFG not found at {self.legacy_cfg_path}")

        cfg = SpectrometerConfig.from_legacy_cfg(self.legacy_cfg_path)
        self.assertEqual(len(cfg.gratings), 2)
        
        # Grating 1
        g1 = cfg.gratings[0]
        self.assertAlmostEqual(g1.laser_wavelength, 514.532, places=3)
        self.assertAlmostEqual(g1.central_pixel, 512.0, places=1)
        self.assertAlmostEqual(g1.grating_grooves_per_mm, 1800.0, places=1)
        self.assertAlmostEqual(g1.focal_length_mm, 460.0, places=1)
        self.assertAlmostEqual(g1.oma_element_size_mm, -0.02765, places=5)
        self.assertAlmostEqual(g1.inclusion_angle_rad, 0.288, places=3)
        self.assertAlmostEqual(g1.steps_per_nm_at_1200, 160.0, places=1)
        self.assertAlmostEqual(g1.slit_size, 30.0, places=1)

        # Grating 2
        g2 = cfg.gratings[1]
        self.assertAlmostEqual(g2.grating_grooves_per_mm, 300.0, places=1)
        self.assertAlmostEqual(g2.slit_size, 10.0, places=1)

    def test_roundtrip_legacy_cfg(self):
        cfg = SpectrometerConfig(
            gratings=[
                GratingConfig(grating_grooves_per_mm=1800.0, spectrometer_pos_nm=699.99),
                GratingConfig(grating_grooves_per_mm=300.0, spectrometer_pos_nm=695.0)
            ]
        )

        with tempfile.NamedTemporaryFile("w", delete=False, suffix=".cfg") as tmp:
            tmp_path = tmp.name

        try:
            cfg.save_legacy_cfg(tmp_path)
            loaded_cfg = SpectrometerConfig.from_legacy_cfg(tmp_path)
            self.assertAlmostEqual(loaded_cfg.gratings[0].grating_grooves_per_mm, 1800.0)
            self.assertAlmostEqual(loaded_cfg.gratings[1].grating_grooves_per_mm, 300.0)
            self.assertAlmostEqual(loaded_cfg.gratings[0].spectrometer_pos_nm, 699.99, places=2)
            self.assertAlmostEqual(loaded_cfg.gratings[1].spectrometer_pos_nm, 695.0, places=2)
        finally:
            if os.path.exists(tmp_path):
                os.remove(tmp_path)

    def test_json_serialization(self):
        cfg = SpectrometerConfig()
        with tempfile.NamedTemporaryFile("w", delete=False, suffix=".json") as tmp:
            tmp_path = tmp.name

        try:
            cfg.save_json(tmp_path)
            loaded_cfg = SpectrometerConfig.from_json(tmp_path)
            self.assertEqual(len(loaded_cfg.gratings), 2)
            self.assertEqual(loaded_cfg.active_grating_index, 0)
        finally:
            if os.path.exists(tmp_path):
                os.remove(tmp_path)


if __name__ == "__main__":
    unittest.main()
