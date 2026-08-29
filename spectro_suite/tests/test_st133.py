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
    IOCTL_READ_FRAME,
    BULK_CMD_READ,
    BULK_CMD_WRITE,
    REG_SELFTEST,
    REG_TEMPERATURE,
    REG_ACQ_TRIGGER,
    REG_ACQ_POSTTRIGGER,
    REG_ACQ_BUSY,
    REG_ACQ_PRETRIGGER,
    BUSY_POLL_COUNT,
    REG_RECONFIG_BURST_A,
    REG_RECONFIG_BURST_B,
    REG_ARM_PREP,
    REG_ARM_POST,
    VR_ARM_PREP,
    REG_HEARTBEAT_ECHO,
    REG_HEARTBEAT_WALK,
    TEMP_REG_COLD_REFERENCE,
    TEMP_REG_COLD_TOLERANCE,
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

    def test_bulk_protocol_register_constants(self):
        """Verify bulk-pipe register constants match the live Wireshark capture (2026-08-29)."""
        self.assertEqual(BULK_CMD_READ, 0x03)
        self.assertEqual(BULK_CMD_WRITE, 0x02)
        self.assertEqual(REG_SELFTEST, 0x40)
        self.assertEqual(REG_TEMPERATURE, 0x46)
        self.assertEqual(REG_ACQ_TRIGGER, 0x14)
        self.assertEqual(REG_ACQ_POSTTRIGGER, 0x32)

    def test_trigger_sequence_matches_full_power_cycle_capture(self):
        """
        Verify the full first-trigger arming sequence matches
        USBCapture-FullPowerCycle.pcapng (2026-08-29) exactly -- a genuine
        CCD power-off + USB disconnect capture, through power-on/reconnect/
        WinSpec32/one real acquisition (the only pixel completion in that
        33,221-packet capture). Includes REG_ACQ_BUSY (0xE2) and
        REG_ACQ_PRETRIGGER (0xE0), which an earlier same-day version had
        removed based on USBCapture-AQTime4.pcapng alone -- that capture
        turned out to only contain *repeat* triggers within an already-armed
        session, not a true first connection.
        """
        self.assertEqual(REG_ACQ_BUSY, 0xE2)
        self.assertEqual(REG_ACQ_PRETRIGGER, 0xE0)
        self.assertEqual(BUSY_POLL_COUNT, 401)
        self.assertEqual(
            REG_RECONFIG_BURST_A,
            [(0x30, 0), (0x30, 1), (0x30, 3), (0x00, 0), (0xFE, 0), (0x3C, 1)],
        )
        self.assertEqual(REG_ARM_PREP, [(0x14, 0x0100), (0x10, 4), (0x12, 0), (0x14, 1)])
        self.assertEqual(VR_ARM_PREP, 0xF2)
        self.assertEqual(REG_ARM_POST, [(0x16, 0)])
        self.assertEqual(REG_RECONFIG_BURST_B, [(0x22, 0), (0x24, 1)])
        self.assertEqual(REG_HEARTBEAT_ECHO, 0x40)
        self.assertEqual(REG_HEARTBEAT_WALK, 0x4A)

    def test_bulk_protocol_no_winusb_returns_safely(self):
        """Bulk register read/write/frame-read must return None/False without a WinUSB handle, not raise."""
        self.assertIsNone(self.cam._bulk_read_register(REG_TEMPERATURE))
        self.assertFalse(self.cam._bulk_write_register(REG_ACQ_TRIGGER, 1))
        self.assertIsNone(self.cam._bulk_read_frame(1024))

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
        self.assertIsNone(temp_info["is_near_cold_reference"])

    def test_cold_reference_matches_captured_dither_average(self):
        """Cold reference must be the average of the two live-confirmed dithered raw values (0x9191/0x9292)."""
        self.assertEqual(TEMP_REG_COLD_REFERENCE, (0x9191 + 0x9292) // 2)
        self.assertGreater(TEMP_REG_COLD_TOLERANCE, 257)  # must exceed the observed dither noise floor

    def test_detector_info_and_1024_support(self):
        """Verify detector info reporting and 1024-pixel timing generation."""
        info = self.cam.get_detector_info()
        self.assertIn("xdim", info)
        self.assertEqual(info["xdim"], 512)

        # Test 1024-channel configuration
        cam1024 = ST133Camera(num_pixels=1024)
        info1024 = cam1024.get_detector_info()
        self.assertEqual(info1024["xdim"], 1024)


if __name__ == "__main__":
    unittest.main()
