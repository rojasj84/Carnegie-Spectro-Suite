"""
Unit tests for VBFormApp GUI hardware switching and grating population.
"""

import unittest
from horiba_hr460.config import SpectrometerConfig, GratingConfig
from horiba_hr460.gui.vb_app import VBFormApp


class TestVBAppHardwareSwitch(unittest.TestCase):

    def setUp(self):
        # Create app with force_mock=True
        self.app = VBFormApp(force_mock=True)
        self.app.withdraw()  # Hide window during test

    def tearDown(self):
        try:
            self.app.destroy()
        except Exception:
            pass

    def test_populate_grating_combobox(self):
        self.assertTrue(hasattr(self.app, "_populate_grating_combobox"))
        self.app._populate_grating_combobox()
        vals = list(self.app.cmb_grating["values"])
        self.assertTrue(len(vals) > 0)
        self.assertEqual(self.app.cmb_grating.get(), f"{self.app.sp_config.active_grating.grating_grooves_per_mm:.0f}")

    def test_switch_hardware(self):
        new_cfg = SpectrometerConfig(
            instrument_model="ACTON",
            com_port="COM5",
            baudrate=9600,
            gratings=[
                GratingConfig(grating_grooves_per_mm=1200.0, spectrometer_pos_nm=500.0, slit_size=50.0, laser_wavelength=532.0),
                GratingConfig(grating_grooves_per_mm=2400.0, spectrometer_pos_nm=500.0, slit_size=50.0, laser_wavelength=532.0),
            ],
            active_grating_index=1,
            num_pixels=1024
        )

        self.app._switch_hardware(new_cfg, force_mock=True)

        self.assertEqual(self.app.sp_config.instrument_model, "ACTON")
        self.assertEqual(self.app.cmb_grating.get(), "2400")
        self.assertIn("1200", self.app.cmb_grating["values"])
        self.assertIn("2400", self.app.cmb_grating["values"])
        self.assertEqual(self.app.sbr_model.cget("text"), "Model: ACTON")
        self.assertIn("COM5", self.app.sbr_port.cget("text"))


if __name__ == "__main__":
    unittest.main()
