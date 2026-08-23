"""
Tests for Acton SpectraPro hardware driver and simulation mode.
"""

import unittest
from spectro_suite.config import SpectrometerConfig
from spectro_suite.hardware.spectrometers.acton import ActonSpectrometer, MockActonSpectrometer
from spectro_suite.hardware.base import MonochromatorStatus


class TestActonDrivers(unittest.TestCase):

    def setUp(self):
        self.config = SpectrometerConfig(instrument_model="ACTON")
        self.mock_mono = MockActonSpectrometer(self.config)

    def test_mock_mono_connection_and_motion(self):
        self.assertTrue(self.mock_mono.connect())
        self.assertEqual(self.mock_mono.status, MonochromatorStatus.DEMO_MODE)

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

    def test_mock_hard_initialize(self):
        self.mock_mono.connect()
        self.assertTrue(self.mock_mono.hard_initialize())

    def test_response_parsing_strips_echo_and_ok(self):
        """ActonSpectrometer._send() must strip the echoed command and trailing
        'ok' terminator, leaving just the value text (e.g. '300.00 nm')."""
        mono = ActonSpectrometer(port="COM_TEST", config=self.config)

        class _FakeSerial:
            def __init__(self, payload: bytes):
                self._payload = payload
                self.in_waiting = len(payload)

            def reset_input_buffer(self):
                pass

            def write(self, data):
                pass

            def read(self, n):
                chunk, self._payload = self._payload[:n], self._payload[n:]
                self.in_waiting = len(self._payload)
                return chunk

        mono.ser = _FakeSerial(b"?NM 300.00 nm ok\r\n")
        result = mono._send("?NM")
        self.assertEqual(result, "300.00 nm")

        # _send() above consumed the fake buffer; re-prime for a fresh query.
        mono.ser = _FakeSerial(b"?NM 300.00 nm ok\r\n")
        wl = mono._query_float("?NM")
        self.assertAlmostEqual(wl, 300.00)

    def test_read_gratings_queries(self):
        mono = ActonSpectrometer(port="COM_TEST", config=self.config)

        class _FakeSerial:
            def __init__(self, payload: bytes):
                self._payload = payload
                self.in_waiting = len(payload)

            def reset_input_buffer(self):
                pass

            def write(self, data):
                pass

            def read(self, n):
                chunk, self._payload = self._payload[:n], self._payload[n:]
                self.in_waiting = len(self._payload)
                return chunk

        # Test ?GRATING
        mono.ser = _FakeSerial(b"?GRATING 2 ok\r\n")
        idx = mono.read_active_grating()
        self.assertEqual(idx, 1) # 2 -> 0-based index 1
        self.assertEqual(mono.config.active_grating_index, 1)

        # Test ?GRATINGS
        gratings_payload = b"?GRATINGS \r\n 1 300 g/mm BLZ= 750NM \r\n 2 600 g/mm BLZ= 1.0UM \r\n 3 Not Installed \r\n ok\r\n"
        mono.ser = _FakeSerial(gratings_payload)
        gratings = mono.read_installed_gratings()
        self.assertEqual(len(gratings), 2)
        self.assertAlmostEqual(gratings[0].grating_grooves_per_mm, 300.0)
        self.assertAlmostEqual(gratings[1].grating_grooves_per_mm, 600.0)


if __name__ == "__main__":
    unittest.main()
