"""
Unit tests for ST133Camera native 64-bit InGaAs driver.
"""

import unittest
import struct
import numpy as np
from spectro_suite.hardware.detectors.st133_usb import (
    ST133Camera,
    USB_SETUP_PACKET,
    IOCTL_VENDOR_REQUEST_OUT,
    IOCTL_VENDOR_REQUEST_IN,
    IOCTL_READ_FRAME
)


class TestST133Driver(unittest.TestCase):

    def setUp(self):
        self.cam = ST133Camera(num_pixels=512)

    def test_setup_packet_structure_size(self):
        """Verify the USB setup packet is exactly 10 bytes matching USBDRVD.DLL."""
        pkt = USB_SETUP_PACKET()
        pkt.direction = 0
        pkt.bRequestType = 2
        pkt.bRecipient = 0
        pkt.reserved1 = 0
        pkt.bRequest = 0x8D
        pkt.reserved2 = 0
        pkt.wValue = 0x1234
        pkt.wIndex = 0x0000

        raw_bytes = bytes(pkt)
        self.assertEqual(len(raw_bytes), 10)
        self.assertEqual(raw_bytes[0], 0)     # direction
        self.assertEqual(raw_bytes[1], 2)     # bRequestType
        self.assertEqual(raw_bytes[2], 0)     # bRecipient
        self.assertEqual(raw_bytes[4], 0x8D)  # bRequest
        self.assertEqual(struct.unpack("<H", raw_bytes[6:8])[0], 0x1234) # wValue
        self.assertEqual(struct.unpack("<H", raw_bytes[8:10])[0], 0)     # wIndex

    def test_ioctl_constants(self):
        """Verify driver IOCTL constants match the real piusbwdf.sys dispatch table."""
        self.assertEqual(IOCTL_VENDOR_REQUEST_OUT, 0x55002005)
        self.assertEqual(IOCTL_VENDOR_REQUEST_IN, 0x5500200A)
        self.assertEqual(IOCTL_READ_FRAME, 0x55002021)

    def test_timing_stream_generation(self):
        """Test opcode compilation for short and long integration times."""
        # 1. 0.1 second exposure
        stream_short = self.cam._build_ingaas_timing_stream(0.1)
        self.assertIsInstance(stream_short, bytes)
        self.assertEqual(stream_short[0], 0xE0) # Reset shift register
        self.assertEqual(stream_short[1], 0x20) # Flush gate
        self.assertIn(0x00, stream_short)      # Clock ADC opcode
        self.assertIn(0xBD, stream_short)      # Arm complete

        # 2. Long exposure (> 15 seconds, exceeding 16-bit quanta)
        stream_long = self.cam._build_ingaas_timing_stream(20.0)
        self.assertIsInstance(stream_long, bytes)
        self.assertEqual(stream_long[0], 0xE0)
        self.assertIn(0x44, stream_long)       # Nested repeat loop start
        self.assertIn(0x46, stream_long)       # Nested repeat loop end

    def test_standby_acquisition_integrity(self):
        """Verify driver returns exact zeros and 0 count when in standby without hardware."""
        data, count = self.cam.acquire_frame(exposure_time_sec=0.01)
        self.assertEqual(count, 0)
        self.assertEqual(len(data), 512)
        self.assertEqual(int(np.sum(data)), 0)

    def test_standby_temperature_semantics(self):
        """Verify temperature queries return OFFLINE / None when unconnected."""
        temp_info = self.cam.get_temperature()
        self.assertIsNotNone(temp_info)
        self.assertIsNone(temp_info["temperature_c"])
        self.assertEqual(temp_info["status_str"], "OFFLINE")
        self.assertEqual(temp_info["status"], 0)

    def test_detector_info_and_1024_support(self):
        """Verify detector info reporting and 1024-pixel timing generation."""
        info = self.cam.get_detector_info()
        self.assertIn("xdim", info)
        self.assertEqual(info["xdim"], 512)

        # Test 1024-channel configuration
        cam1024 = ST133Camera(num_pixels=1024)
        info1024 = cam1024.get_detector_info()
        self.assertEqual(info1024["xdim"], 1024)

        stream1024 = cam1024._build_ingaas_timing_stream(0.1)
        # Check ADC clock opcode 0x00 followed by little-endian 1024 (0x0400)
        self.assertEqual(stream1024[-4], 0x00)
        self.assertEqual(stream1024[-3], 0x00)
        self.assertEqual(stream1024[-2], 0x04)
        self.assertEqual(stream1024[-1], 0xBD)


if __name__ == "__main__":
    unittest.main()
