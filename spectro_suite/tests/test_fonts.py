"""
Unit tests for cross-platform font utilities in spectro_suite.gui.fonts.
"""

import unittest
import tkinter as tk
from spectro_suite.gui.fonts import (
    get_default_sans_family,
    get_default_mono_family,
    get_ui_font,
    get_heading_font,
    get_mono_font,
    setup_app_fonts,
)


class TestFonts(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        cls.root = tk.Tk()
        cls.root.withdraw()

    @classmethod
    def tearDownClass(cls):
        try:
            cls.root.destroy()
        except Exception:
            pass

    def test_default_families_exist(self):
        sans = get_default_sans_family()
        mono = get_default_mono_family()
        self.assertIsInstance(sans, str)
        self.assertIsInstance(mono, str)
        self.assertTrue(len(sans) > 0)
        self.assertTrue(len(mono) > 0)

    def test_get_ui_font(self):
        f1 = get_ui_font(9)
        self.assertEqual(len(f1), 2)
        self.assertEqual(f1[1], 9)

        f2 = get_ui_font(10, "bold")
        self.assertEqual(len(f2), 3)
        self.assertEqual(f2[1], 10)
        self.assertEqual(f2[2], "bold")

    def test_get_heading_font(self):
        f = get_heading_font(13)
        self.assertEqual(f[1], 13)
        self.assertEqual(f[2], "bold")

    def test_get_mono_font(self):
        f = get_mono_font(10)
        self.assertEqual(f[1], 10)

    def test_setup_app_fonts(self):
        # Should execute without errors on root window
        setup_app_fonts(self.root, base_size=10)


if __name__ == "__main__":
    unittest.main()
