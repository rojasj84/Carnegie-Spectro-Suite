"""
Unit tests for instrument profiles, settings persistence, and hardware scanning.
"""

import os
import tempfile
import unittest
from horiba_hr460.config import SpectrometerConfig
from horiba_hr460.core.profiles import (
    get_default_profiles,
    load_app_settings,
    save_app_settings,
    clear_default_settings,
    scan_hardware_ports
)


class TestProfilesAndSettings(unittest.TestCase):

    def test_default_profiles_contains_sp2150_and_hr460(self):
        profiles = get_default_profiles()
        self.assertIn("Acton SpectraPro SP-2150 (COM3)", profiles)
        self.assertIn("Horiba Jobin Yvon HR460 (COM1)", profiles)
        self.assertIn("Demo / Simulation Mode", profiles)

        sp2150 = profiles["Acton SpectraPro SP-2150 (COM3)"]
        self.assertEqual(sp2150.instrument_model, "ACTON")
        self.assertEqual(sp2150.com_port, "COM3")
        self.assertEqual(len(sp2150.gratings), 2)
        self.assertAlmostEqual(sp2150.gratings[0].grating_grooves_per_mm, 300.0)
        self.assertAlmostEqual(sp2150.gratings[1].grating_grooves_per_mm, 600.0)

    def test_settings_save_load_clear(self):
        with tempfile.NamedTemporaryFile("w", delete=False, suffix=".json") as tmp:
            tmp_path = tmp.name

        try:
            # Initially empty
            settings = load_app_settings(tmp_path)
            self.assertEqual(settings, {})

            # Save settings
            cfg = SpectrometerConfig(instrument_model="ACTON", com_port="COM3")
            save_app_settings(
                {
                    "default_profile": "Acton SpectraPro SP-2150 (COM3)",
                    "remember_choice": True,
                    "saved_config": cfg.to_dict()
                },
                settings_path=tmp_path
            )

            loaded = load_app_settings(tmp_path)
            self.assertTrue(loaded.get("remember_choice"))
            self.assertEqual(loaded.get("default_profile"), "Acton SpectraPro SP-2150 (COM3)")
            self.assertEqual(loaded["saved_config"]["instrument_model"], "ACTON")

            # Clear settings
            clear_default_settings(tmp_path)
            cleared = load_app_settings(tmp_path)
            self.assertNotIn("default_profile", cleared)
            self.assertNotIn("remember_choice", cleared)
            self.assertNotIn("saved_config", cleared)
        finally:
            if os.path.exists(tmp_path):
                os.remove(tmp_path)

    def test_scan_hardware_ports_executes(self):
        # Should execute safely on any machine and return a list of port info dicts
        devices = scan_hardware_ports()
        self.assertIsInstance(devices, list)
        for dev in devices:
            self.assertIn("port", dev)
            self.assertIn("model", dev)
            self.assertIn("identified_as", dev)


if __name__ == "__main__":
    unittest.main()
