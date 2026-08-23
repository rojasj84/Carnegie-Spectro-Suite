"""
Tests for optical dispersion geometry and unit conversion.
"""

import unittest
import numpy as np
from spectro_suite.config import GratingConfig
from spectro_suite.core.calibration import OpticalCalibration, Units, ruby_pressure


class TestOpticalCalibration(unittest.TestCase):

    def setUp(self):
        self.grating_config = GratingConfig(
            laser_wavelength=514.532,
            central_pixel=512.0,
            grating_grooves_per_mm=1800.0,
            inclusion_angle_rad=0.288,
            focal_length_mm=460.0,
            oma_element_size_mm=-0.02765,
            correction_angle_deg=0.0,
            spectrometer_pos_nm=700.0
        )
        self.cal = OpticalCalibration(self.grating_config, num_pixels=1024)

    def test_dispersion_shape_and_center(self):
        wls = self.cal.get_pixel_wavelengths(center_wavelength_nm=700.0, num_pixels=1024)
        self.assertEqual(len(wls), 1024)
        
        # Central pixel (512) should be very close to 700 nm
        center_wl = self.cal.pixel_to_wavelength(700.0, 512.0)
        self.assertAlmostEqual(center_wl, 700.0, places=2)

        # Monotonicity check
        self.assertTrue(np.all(np.diff(wls) > 0) or np.all(np.diff(wls) < 0))

    def test_inverse_wavelength_to_pixel(self):
        target_wl = 705.0
        pix = self.cal.wavelength_to_pixel(center_wavelength_nm=700.0, target_wavelength_nm=target_wl)
        
        # Forward calculation back to wavelength should match target_wl
        reconstructed_wl = self.cal.pixel_to_wavelength(700.0, pix)
        self.assertAlmostEqual(reconstructed_wl, target_wl, places=3)

    def test_target_pixel_center_calculation(self):
        target_wl = 694.34
        target_pixel = 512.0
        center = self.cal.calculate_center_for_target_pixel(target_wl, target_pixel)
        
        # Verify that at this center, pixel 512 gives 694.34 nm
        wl_at_pix = self.cal.pixel_to_wavelength(center, target_pixel)
        self.assertAlmostEqual(wl_at_pix, target_wl, places=3)

    def test_unit_conversions(self):
        wls = np.array([514.532, 532.0, 600.0])
        
        # Relative Raman shift in cm-1
        raman = self.cal.convert_wavelengths_to_units(wls, Units.REL_CM_1, laser_wavelength_nm=514.532)
        self.assertAlmostEqual(raman[0], 0.0, places=2)  # Zero shift at Rayleigh line
        self.assertGreater(raman[1], 0.0)

        # Absolute Wavenumber cm-1
        cm1 = self.cal.convert_wavelengths_to_units(wls, Units.CM_1)
        self.assertAlmostEqual(cm1[0], (1.0 / 514.532) * 1e7, places=2)

        # Pixel
        pix = self.cal.convert_wavelengths_to_units(wls, Units.PIXEL)
        self.assertEqual(list(pix), [1.0, 2.0, 3.0])

    def test_ruby_pressure(self):
        # At 300K, R1 peak at 694.34 nm corresponds to 0 GPa
        p0 = ruby_pressure(694.34, temperature_k=300.0)
        self.assertAlmostEqual(p0, 0.0, places=2)

        # Peak redshift under high pressure (e.g. 700 nm) -> positive pressure
        p_high = ruby_pressure(700.0, temperature_k=300.0)
        self.assertGreater(p_high, 0.0)


if __name__ == "__main__":
    unittest.main()
