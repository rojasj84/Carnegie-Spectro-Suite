"""
Native 64-Bit Hardware Driver for Princeton Instruments ST-133 InGaAs Detectors.
================================================================================
Controls Princeton Instruments ST-133 / OMA-V linear InGaAs detectors on 64-bit
Windows 10/11 through direct kernel communication over USB.

THE REAL PROTOCOL (confirmed 2026-08-29 via a live Wireshark/USBPcap capture of
the original 32-bit WinSpec32 software talking to this exact hardware unit,
VID_0BD7/PID_A010) is bulk-pipe framed commands, NOT EP0 vendor control
requests. This superseded an earlier, purely decompiled-code-derived theory
(EP0 vendor requests, cross-validated against Princeton Instruments' own
rspiusb.c Linux driver) that turned out to describe a real but essentially
unused command surface for this unit -- only 2 EP0 vendor requests appear in
an entire real capture session, versus tens of thousands of bulk-pipe frames.
Frame shape, for both reads and writes, sent to bulk OUT endpoint 0x08:
    [0x01, addr, 0x00, cmd, data_lo, data_hi]   (fixed 6 bytes)
  cmd=0x03 ("read-trigger"): device replies with 2 bytes on bulk IN 0x86.
  cmd=0x02 ("write"): data_lo/data_hi carries the 16-bit value; no reply.
This requires WinUSB binding -- piusbwdf.sys (KMDF) has no general bulk-pipe
IOCTL (Part 3: no bulk-write IOCTL was ever found in its dispatch table), so
none of this works while the device is bound to piusbwdf.sys.
Confirmed registers (see _bulk_read_register/_bulk_write_register call sites):
  - 0x40: self-test/echo pattern, always 0x5555 or 0xD5D5. Liveness check only.
  - 0x46: temperature-adjacent register. Live values track the real captured
    WinSpec32 session almost exactly (0x9191/0x9292 raw) -- also independently
    matches PIXCM32.dll's own traced temperature-read register from static
    analysis (PIPP_Input(handle, 0x46), see git history). Calibration to actual
    Celsius is NOT yet known -- see get_temperature().
  - 0xE2, 0xE0, 0x32: read as part of the acquisition sequence (poll loop /
    one-time pre- and post-trigger reads); always 0 in the captured session.
    Meaning beyond "some kind of status/handshake check" is unconfirmed.
  - 0x14: WRITE with value=1 -- the only state-changing write between the
    busy-poll loop and real pixel data arriving on 0x82 in the captured
    session. Best-evidenced acquisition trigger; live-confirmed to actually
    produce a real frame when replayed (see acquire_frame).
  - Pixel readout (bulk IN 0x82) needs no explicit "arm" request of its own --
    confirmed live to match piusbwdf.sys's continuous-reader architecture
    (Parts 4/5): a frame simply arrives once the trigger sequence above has
    been sent, with WinUSB re-arming the pipe automatically after each read.
  - EXPOSURE TIME IS NOT YET WIRED TO HARDWARE. No register controlling
    integration time has been identified in the capture yet -- acquire_frame's
    exposure_time_sec currently only paces local progress-callback timing.

Earlier EP0-vendor-request-based architecture (IOCTL_VENDOR_REQUEST_OUT/IN,
piusbwdf.sys's real IOCTL dispatch table, the KMDF overlapped-I/O safety
pattern) is still real and still implemented below (_vendor_request_out/in,
_ioctl_overlapped, etc.) -- it's accurate for what it documents, just no
longer the mechanism used for the core temperature/acquisition/readout path.
Kept as working infrastructure for the two real EP0 vendor requests observed
(0xF0/0xF1 status queries) and any future exploration of that command surface.
"""

from __future__ import annotations
import os
import time
import struct
import ctypes
from ctypes import wintypes
import logging
from typing import Optional, Tuple, Callable, List
import numpy as np

from ..base import Camera as BaseCamera

logger = logging.getLogger(__name__)

# Safe Win32 kernel32 and winusb handles (platform-guarded)
kernel32 = getattr(ctypes, "windll", None).kernel32 if hasattr(ctypes, "windll") else None
winusb = getattr(ctypes, "windll", None).winusb if hasattr(ctypes, "windll") else None

# Win32 File Constants
GENERIC_READ = 0x80000000
GENERIC_WRITE = 0x40000000
FILE_SHARE_READ = 0x00000001
FILE_SHARE_WRITE = 0x00000002
OPEN_EXISTING = 3
FILE_FLAG_OVERLAPPED = 0x40000000
INVALID_HANDLE_VALUE = -1

# IOCTL codes for piusbwdf.sys, decoded directly from the driver binary's IOCTL
# dispatch (Ghidra: ghidra_scripts/decompiled_piusbwdf.c) and confirmed live
# against real hardware. These replace an earlier set of guessed Cypress/USBDRVD
# -style codes that the real driver rejected outright with ERROR_INVALID_FUNCTION.
IOCTL_VENDOR_REQUEST_OUT = 0x55002005   # METHOD_IN_DIRECT: header in input buffer, payload in output buffer
IOCTL_VENDOR_REQUEST_IN  = 0x5500200A   # METHOD_OUT_DIRECT: header in input buffer, response in output buffer
IOCTL_CANCEL_FRAME_READ  = 0x5500201C   # Cancel a pending IOCTL_READ_FRAME
IOCTL_READ_FRAME         = 0x55002021   # Async/pended frame read; issue as overlapped I/O
IOCTL_GET_DRIVER_INFO    = 0x55006002
IOCTL_GET_USB_PID        = 0x5500600E   # Reports which of PID_A010 / PID_A026 is attached

# Cypress FX/FX2 CPU Control Registers
CYPRESS_FX2_CPUCS = 0xE600                   # Cypress FX2 (CY7C68013A) 8051 CPU Reset Register
CYPRESS_FX_CPUCS  = 0x7F92                   # Legacy Cypress FX (AN2131) CPU Reset Register

# Hardware Vendor Request Commands (from PIXCM32.dll & USBDRVD.DLL). Real but
# rarely-used EP0 command surface -- see module docstring. VR_READ_TEMP/
# VR_EPLD_CONFIG/VR_TRIGGER_ACQ removed 2026-08-29: superseded by the real,
# live-confirmed bulk-pipe protocol below (BULK_CMD_*/REG_* constants).
VR_ANCHOR_DOWNLOAD = 0xA0                    # SRAM Microcode Download (Anchor Download)
VR_READ_STATUS     = 0x8A                    # Hardware Status & Temp Readback

# Real bulk-pipe protocol, confirmed live 2026-08-29 via Wireshark/USBPcap
# capture of a working 32-bit WinSpec32 session against this exact hardware.
# Frame: [0x01, addr, 0x00, cmd, data_lo, data_hi] -> bulk OUT 0x08.
# See module docstring for full provenance and register meanings.
BULK_CMD_READ  = 0x03   # "read-trigger": 2-byte reply follows on bulk IN 0x86
BULK_CMD_WRITE = 0x02   # "write": data_lo/data_hi carries the 16-bit value

REG_SELFTEST         = 0x40   # Self-test/echo pattern (0x5555 / 0xD5D5) -- liveness check only
REG_TEMPERATURE      = 0x46   # Temperature-adjacent register (raw ADC-like code, uncalibrated)
REG_ACQ_BUSY         = 0xE2   # Polled in a loop while waiting; always 0 in the captured session
REG_ACQ_PRETRIGGER   = 0xE0   # One-time read immediately before the trigger write
REG_ACQ_TRIGGER      = 0x14   # WRITE value=1 -- best-evidenced acquisition trigger
REG_ACQ_POSTTRIGGER  = 0x32   # One-time read immediately after the trigger write


class WINUSB_SETUP_PACKET(ctypes.Structure):
    """Standard WinUSB Setup Packet structure."""
    _pack_ = 1
    _fields_ = [
        ("RequestType", ctypes.c_ubyte),  # 0x40 = Vendor OUT, 0xC0 = Vendor IN
        ("Request", ctypes.c_ubyte),
        ("Value", ctypes.c_ushort),
        ("Index", ctypes.c_ushort),
        ("Length", ctypes.c_ushort)
    ]


class OVERLAPPED(ctypes.Structure):
    _fields_ = [
        ("Internal", ctypes.c_ulonglong),
        ("InternalHigh", ctypes.c_ulonglong),
        ("Offset", wintypes.DWORD),
        ("OffsetHigh", wintypes.DWORD),
        ("hEvent", wintypes.HANDLE)
    ]


class USB_SETUP_PACKET(ctypes.Structure):
    """
    Exact 10-Byte USB Setup Packet structure expected by piusbwdf.sys & USBDRVD.DLL.
    Reverse-engineered from USBDRVD.DLL at 0x10001A80.
    """
    _pack_ = 1
    _fields_ = [
        ("direction", ctypes.c_ubyte),       # 0 = OUT, 1 = IN
        ("bRequestType", ctypes.c_ubyte),   # 2 = Vendor, 0 = Standard, 1 = Class
        ("bRecipient", ctypes.c_ubyte),     # 0 = Device, 1 = Interface, 2 = Endpoint
        ("reserved1", ctypes.c_ubyte),      # 0
        ("bRequest", ctypes.c_ubyte),       # Vendor command (0xA0, 0x8D, 0x01, etc.)
        ("reserved2", ctypes.c_ubyte),      # 0
        ("wValue", ctypes.c_ushort),        # Parameter / Target Address
        ("wIndex", ctypes.c_ushort)         # Sub-index / Pipe index (0)
    ]


class ST133Camera(BaseCamera):
    """
    Native 64-Bit Hardware Driver for Princeton Instruments ST-133 / OMA-V InGaAs Detectors.
    """

    is_mock = False

    def __init__(self, num_pixels: int = 512, dark_current: float = 500.0):
        self.num_pixels = num_pixels
        self.dark_current = dark_current
        self.is_connected = False
        self.camera_model_name = "Princeton Instruments OMA-V InGaAs (7514-0001)"
        
        self._device_handle = None
        self._winusb_handle = None
        self._device_path = None
        self._is_firmware_loaded = False
        self._last_temperature: Optional[float] = None
        self._quantum_us = 153.0 # InGaAs gate integration quantum (from omavb.dat)

    def _find_device_path(self) -> Optional[str]:
        """Locate active Windows PnP device path for Princeton Instruments USB (VID_0BD7&PID_A010)."""
        if not kernel32:
            return None

        # Known GUIDs for Princeton Instruments KMDF and WinUSB
        target_guids = [
            "{a5dcbf10-6530-11d2-901f-00c04fb951ed}", # USB Raw Device GUID (WinUSB)
            "{3972c010-8ea9-4939-926e-8a9db35ba0a6}", # Princeton Instruments KMDF GUID
            "{88bae032-5a81-49f0-bc3d-a4ff138216d6}", # USBDevice class GUID
            "{dee824ef-729b-4a0e-9c14-b7117d33a817}", # Custom WinUSB Interface GUID
        ]

        # 1. Enumerate active PnP USB instances from Windows Registry
        try:
            import winreg
            base = r"SYSTEM\CurrentControlSet\Enum\USB\VID_0BD7&PID_A010"
            with winreg.OpenKey(winreg.HKEY_LOCAL_MACHINE, base) as k:
                i = 0
                while True:
                    try:
                        inst = winreg.EnumKey(k, i)
                        i += 1
                        for g in target_guids:
                            path = f"\\\\?\\USB#VID_0BD7&PID_A010#{inst}#{g}"
                            h = kernel32.CreateFileW(
                                path,
                                GENERIC_READ | GENERIC_WRITE,
                                FILE_SHARE_READ | FILE_SHARE_WRITE,
                                None,
                                OPEN_EXISTING,
                                0,
                                None
                            )
                            if h != INVALID_HANDLE_VALUE and h != 0xFFFFFFFFFFFFFFFF:
                                kernel32.CloseHandle(h)
                                logger.info(f"Found active ST-133 USB path on instance: {inst} (GUID: {g})")
                                return path
                    except OSError:
                        break
        except Exception:
            pass

        # 2. Fallback to known standard device symlinks
        for g in target_guids:
            for inst_pattern in ["5&1487294b&0&5", "5&1487294b&0&6"]:
                p = f"\\\\?\\USB#VID_0BD7&PID_A010#{inst_pattern}#{g}"
                h = kernel32.CreateFileW(p, GENERIC_READ | GENERIC_WRITE, 3, None, OPEN_EXISTING, 0, None)
                if h != INVALID_HANDLE_VALUE and h != 0xFFFFFFFFFFFFFFFF:
                    kernel32.CloseHandle(h)
                    return p

        for p in [r"\\.\PIUSB0", r"\\.\PIUSB", r"\\.\EZUSB0"]:
            h = kernel32.CreateFileW(p, GENERIC_READ | GENERIC_WRITE, 3, None, OPEN_EXISTING, 0, None)
            if h != INVALID_HANDLE_VALUE and h != 0xFFFFFFFFFFFFFFFF:
                kernel32.CloseHandle(h)
                return p

        return None

    def connect(self) -> bool:
        """Open 64-bit communication channel to the ST-133 controller via WinUSB / KMDF."""
        if not kernel32:
            logger.warning("ST-133 native USB driver requires a 64-bit Windows host.")
            self.is_connected = False
            return False

        self._device_path = self._find_device_path()
        if not self._device_path:
            logger.warning("No Princeton Instruments ST-133 USB controller detected on PnP bus.")
            self.is_connected = False
            return False

        try:
            h = kernel32.CreateFileW(
                self._device_path,
                GENERIC_READ | GENERIC_WRITE,
                FILE_SHARE_READ | FILE_SHARE_WRITE,
                None,
                OPEN_EXISTING,
                FILE_FLAG_OVERLAPPED,
                None
            )
            
            if h == INVALID_HANDLE_VALUE or h == 0xFFFFFFFFFFFFFFFF:
                err = kernel32.GetLastError()
                logger.warning(f"Could not open kernel handle to {self._device_path}: error {err}")
                self.is_connected = False
                return False

            self._device_handle = h

            # Initialize WinUSB if supported
            if winusb:
                h_wusb = ctypes.c_void_p(0)
                if winusb.WinUsb_Initialize(h, ctypes.byref(h_wusb)):
                    self._winusb_handle = h_wusb
                    # Set 500ms pipe timeout policy on EP0 and bulk endpoints
                    PIPE_TRANSFER_TIMEOUT = 0x03
                    timeout_ms = wintypes.ULONG(500)
                    for p_id in [0x00, 0x08, 0x82, 0x86]:
                        winusb.WinUsb_SetPipePolicy(
                            self._winusb_handle,
                            p_id,
                            PIPE_TRANSFER_TIMEOUT,
                            ctypes.sizeof(timeout_ms),
                            ctypes.byref(timeout_ms)
                        )
                    logger.info("WinUSB initialized successfully for ST-133.")

            self.is_connected = True
            logger.info(f"Connected to ST-133 Controller (Handle: {h})")

            # NOTE: _bootstrap_firmware() is intentionally NOT called here.
            # PI133B.DAT is a pixel/intrapixel timing-pattern table consumed in
            # software by PI13332.dll's PICM_Define_Intrapixel_Pattern (confirmed via
            # decompiled_PI13332.c FUN_10001a05, which parses it as a stream of 16-bit
            # ints for lookup tables) -- it is never uploaded as 8051 code. Asserting
            # CPU reset and writing this file into the chip's RAM overwrites whatever
            # firmware is already resident (this controller's real ST-133 application
            # firmware is not present anywhere in this repo or the vendor installer;
            # it is most likely already running from onboard EEPROM at power-up).

            # Execute Step 7: Controller Handshake & EPLD Decoder Arming (PIPP_Initialize)
            self._init_controller_handshake()
            return True
        except Exception as ex:
            logger.error(f"Error connecting to ST-133 controller: {ex}")
            self.is_connected = False
            return False

    def _init_controller_handshake(self) -> bool:
        """
        Lightweight liveness check using the real bulk-pipe protocol: read the
        self-test/echo register (0x40), confirmed both from a captured real
        WinSpec32 session and a live replay through this driver (2026-08-29)
        to always return one of two fixed bit patterns (0x5555 / 0xD5D5).

        REPLACES an earlier, longer "handshake" that wrote registers 0x22/
        0x23/0x24/0x26 over EP0 vendor requests (PICM_Create_controller /
        PISCC_CreateCommunicationObject theory). That whole approach is now
        known to be unnecessary: acquire_frame() and get_temperature() were
        confirmed live to work correctly via the bulk protocol with NO
        handshake beforehand at all. This check is now purely informational
        and does NOT gate connect()'s success -- a device that isn't yet on
        WinUSB (still piusbwdf.sys-bound, no bulk-pipe access) just fails
        this check harmlessly; connect() still succeeds either way, since
        WinUSB binding is what actually determines whether the bulk protocol
        (and therefore real communication) is available.
        """
        if not self._winusb_handle or not winusb:
            logger.debug("Self-test skipped: bulk-pipe protocol requires WinUSB binding.")
            return False

        try:
            val = self._bulk_read_register(REG_SELFTEST)
            ok = val in (0x5555, 0xD5D5)
            if ok:
                logger.info(f"ST-133 self-test register (0x{REG_SELFTEST:02X}) responded: 0x{val:04X} -- bulk-pipe protocol live.")
            else:
                logger.debug(f"ST-133 self-test register did not respond as expected (got {val!r}).")
            return ok
        except Exception as ex:
            logger.warning(f"Controller handshake notice: {ex}")
            return False

    def _bulk_read_register(self, addr: int) -> Optional[int]:
        """
        Read a controller register over the real bulk-pipe protocol: write
        [0x01, addr, 0x00, 0x03, 0x00, 0x00] to bulk OUT 0x08, then read 2
        bytes back from bulk IN 0x86. This is the actual wire protocol the
        real 32-bit WinSpec32 software uses -- reverse-engineered directly
        from a live Wireshark/USBPcap capture of a working WinSpec32 session
        against this exact hardware (2026-08-29), not decompiled-code
        inference. Requires WinUSB (see module docstring). Pipe timeouts are
        set once in connect() via WinUsb_SetPipePolicy.
        """
        if not self._winusb_handle or not winusb:
            return None
        pkt = bytes([0x01, addr & 0xFF, 0x00, BULK_CMD_READ, 0x00, 0x00])
        buf = (ctypes.c_ubyte * 6)(*pkt)
        trans = wintypes.ULONG(0)
        wres = winusb.WinUsb_WritePipe(self._winusb_handle, 0x08, buf, 6, ctypes.byref(trans), None)
        if not wres:
            return None
        read_buf = ctypes.create_string_buffer(2)
        trans2 = wintypes.ULONG(0)
        rres = winusb.WinUsb_ReadPipe(self._winusb_handle, 0x86, read_buf, 2, ctypes.byref(trans2), None)
        if not rres or trans2.value != 2:
            return None
        return int.from_bytes(read_buf.raw[:2], "little")

    def _bulk_write_register(self, addr: int, value: int) -> bool:
        """
        Write a controller register over the real bulk-pipe protocol: send
        [0x01, addr, 0x00, 0x02, value_lo, value_hi] to bulk OUT 0x08. No
        reply is read -- writes were never followed by an 0x86 read in the
        captured session. See _bulk_read_register for full provenance.
        """
        if not self._winusb_handle or not winusb:
            return False
        pkt = bytes([0x01, addr & 0xFF, 0x00, BULK_CMD_WRITE, value & 0xFF, (value >> 8) & 0xFF])
        buf = (ctypes.c_ubyte * 6)(*pkt)
        trans = wintypes.ULONG(0)
        res = winusb.WinUsb_WritePipe(self._winusb_handle, 0x08, buf, 6, ctypes.byref(trans), None)
        return bool(res)

    def _bulk_read_frame(self, expected_bytes: int) -> Optional[bytes]:
        """
        Read raw frame bytes from the pixel pipe (bulk IN 0x82). Confirmed
        live 2026-08-29: no explicit "arm" request is needed on 0x82 itself
        (matches piusbwdf.sys's continuous-reader architecture, Parts 4/5) --
        data simply arrives once the acquisition trigger sequence (see
        acquire_frame) has been sent. WinUsb_ReadPipe's own pipe-policy
        timeout (set once in connect()) bounds this call.
        """
        if not self._winusb_handle or not winusb:
            return None
        buf = ctypes.create_string_buffer(expected_bytes)
        trans = wintypes.ULONG(0)
        res = winusb.WinUsb_ReadPipe(self._winusb_handle, 0x82, buf, expected_bytes, ctypes.byref(trans), None)
        if res and trans.value > 0:
            return buf.raw[:trans.value]
        return None

    def _write_register(self, addr: int, value: int) -> bool:
        """
        Write a controller register: bRequest=register address itself, wValue=
        the 16-bit value, with NO data stage (zero-length control transfer).

        REVISED from an earlier "bRequest=0xAF fixed opcode, wValue=address,
        value-in-payload" theory after cross-referencing Princeton Instruments'
        own GPL-licensed Linux kernel driver for this exact hardware (rspiusb.c,
        VID_0BD7/PID_A010 "ST133", https://github.com/delmic/pvcam-pilk). Its
        PIUSB_SETVNDCMD ioctl handler builds the SETUP packet as bRequest=
        ctrl.cmd, wValue=controlData (the 16-bit value), with a dummy data-stage
        buffer of caller-chosen length -- confirming the value travels in
        wValue, not the payload, but leaving the payload's own length/necessity
        ambiguous (Linux userspace controls ctrl.numbytes; not visible in this
        kernel driver).

        LIVE-CONFIRMED on real hardware (2026-08-28, WinUSB, bRequest=0x22,
        wValue=1): a 2-byte dummy OUT data stage (matching rspiusb.c's pattern
        literally) times out -- WinUsb_ControlTransfer fails with
        ERROR_SEMAPHORE_TIMEOUT (121), i.e. the device never completes that
        data stage. A zero-length transfer (Length=0, no data stage at all)
        instead completes immediately with GetLastError=0 -- a real ACK. So
        unlike rspiusb.c's userspace caller, this firmware wants the SETUP
        packet alone with no OUT phase. bRequest=addr/wValue=value is therefore
        confirmed as the right field mapping; only the "send a dummy payload"
        part of the original theory was wrong, and is dropped here.
        NOTE: this confirms the IOCTL is ACKed by the transport, not that the
        controller's internal register actually took the value -- there's no
        independent register-read to verify against yet.
        """
        return self._vendor_request_out(addr & 0xFF, w_value=value & 0xFFFF, data=None)

    def _vendor_request_out(
        self,
        b_request: int,
        w_value: int = 0,
        w_index: int = 0,
        data: Optional[bytes] = None
    ) -> bool:
        """
        Send a vendor control OUT transfer. Uses WinUsb_ControlTransfer if WinUSB
        is active, or IOCTL_VENDOR_REQUEST_OUT (0x55002005) against piusbwdf.sys.

        The KMDF path is METHOD_IN_DIRECT: the IOCTL *input* buffer carries only
        the 8-byte header [bRequest, 0,0,0, wValueLo, wValueHi, 0,0] -- the actual
        payload bytes go in the IOCTL *output* buffer slot (Direct I/O/MDL), not
        appended to the input buffer. Passing the payload as input instead fails
        immediately with ERROR_INSUFFICIENT_BUFFER; this shape was confirmed live.
        """
        if not self._device_handle or not kernel32:
            return False

        data_len = len(data) if data else 0
        c_buf = (ctypes.c_ubyte * data_len)(*data) if data else None

        # 1. WinUSB Path
        if self._winusb_handle and winusb:
            pkt_w = WINUSB_SETUP_PACKET()
            pkt_w.RequestType = 0x40 # Host-to-Device | Vendor | Device
            pkt_w.Request = b_request
            pkt_w.Value = w_value & 0xFFFF
            pkt_w.Index = w_index & 0xFFFF
            pkt_w.Length = data_len
            trans = wintypes.ULONG(0)
            res = winusb.WinUsb_ControlTransfer(
                self._winusb_handle,
                pkt_w,
                c_buf,
                data_len,
                ctypes.byref(trans),
                None
            )
            if res:
                return True

        # 2. KMDF IOCTL_VENDOR_REQUEST_OUT path (piusbwdf.sys)
        header = bytes([b_request & 0xFF, 0, 0, 0, w_value & 0xFF, (w_value >> 8) & 0xFF, 0, 0])
        ok, _bytes_ret = self._ioctl_overlapped(IOCTL_VENDOR_REQUEST_OUT, header, c_buf, data_len)
        return ok

    def _vendor_request_in(
        self,
        b_request: int,
        w_value: int = 0,
        w_index: int = 0,
        length: int = 64
    ) -> Optional[bytes]:
        """
        Execute a vendor control IN transfer to read bytes from controller.
        KMDF path uses IOCTL_VENDOR_REQUEST_IN (0x5500200A) against piusbwdf.sys,
        with the same 8-byte header format as _vendor_request_out. Confirmed live
        for VR 0xF0 (8 bytes) and 0xF1 (2 bytes, firmware version) -- both return
        real data through this exact call shape.
        """
        if not self._device_handle or not kernel32:
            return None

        # 1. WinUSB Path
        if self._winusb_handle and winusb:
            pkt_w = WINUSB_SETUP_PACKET()
            pkt_w.RequestType = 0xC0 # Device-to-Host | Vendor | Device
            pkt_w.Request = b_request
            pkt_w.Value = w_value & 0xFFFF
            pkt_w.Index = w_index & 0xFFFF
            pkt_w.Length = length
            read_buf = ctypes.create_string_buffer(length)
            trans = wintypes.ULONG(0)
            res = winusb.WinUsb_ControlTransfer(
                self._winusb_handle,
                pkt_w,
                read_buf,
                length,
                ctypes.byref(trans),
                None
            )
            if res and trans.value > 0:
                return bytes(read_buf.raw[:trans.value])

        # 2. KMDF IOCTL_VENDOR_REQUEST_IN path (piusbwdf.sys)
        header = bytes([b_request & 0xFF, 0, 0, 0, w_value & 0xFF, (w_value >> 8) & 0xFF, 0, 0])
        read_buf = ctypes.create_string_buffer(length)
        ok, bytes_ret = self._ioctl_overlapped(IOCTL_VENDOR_REQUEST_IN, header, read_buf, length)
        if ok and bytes_ret > 0:
            return bytes(read_buf.raw[:bytes_ret])

        return None

    def _ioctl_overlapped(
        self,
        ioctl_code: int,
        in_buf: Optional[bytes],
        out_buf,
        out_len: int,
        timeout_ms: int = 2000
    ) -> Tuple[bool, int]:
        """
        Issue a DeviceIoControl call as overlapped I/O with a bounded wait,
        cleanly cancelling (CancelIoEx) and reaping the request if it doesn't
        complete in time. This exists because a *synchronous* DeviceIoControl
        against piusbwdf.sys can block in an uninterruptible kernel-mode wait
        when the controller doesn't respond -- confirmed live: neither
        TerminateProcess nor Stop-Process -Force could clear it, only a
        physical USB replug (which cancels all pending I/O for the device) or
        CancelIoEx from within the same process before the handle is lost.
        Every KMDF call in this driver goes through this helper so a single
        non-responding request can't hang the whole process.
        """
        h_event = kernel32.CreateEventW(None, True, False, None)
        ov = OVERLAPPED()
        ov.hEvent = h_event
        bytes_ret = wintypes.DWORD(0)
        in_len = len(in_buf) if in_buf else 0

        res = kernel32.DeviceIoControl(
            self._device_handle,
            ioctl_code,
            in_buf,
            in_len,
            out_buf,
            out_len,
            ctypes.byref(bytes_ret),
            ctypes.byref(ov)
        )
        err = kernel32.GetLastError()

        if res:
            kernel32.CloseHandle(h_event)
            return True, bytes_ret.value

        if err != 997:  # not ERROR_IO_PENDING -- rejected immediately (e.g. wrong IOCTL/buffer shape)
            kernel32.CloseHandle(h_event)
            return False, 0

        ok = False
        wait_res = kernel32.WaitForSingleObject(h_event, timeout_ms)
        if wait_res == 0:  # WAIT_OBJECT_0
            ok = bool(kernel32.GetOverlappedResult(self._device_handle, ctypes.byref(ov), ctypes.byref(bytes_ret), False))
        else:
            kernel32.CancelIoEx(self._device_handle, ctypes.byref(ov))
            kernel32.GetOverlappedResult(self._device_handle, ctypes.byref(ov), ctypes.byref(bytes_ret), True)
            logger.debug(f"IOCTL 0x{ioctl_code:08X} timed out after {timeout_ms}ms, cancelled cleanly.")

        kernel32.CloseHandle(h_event)
        return ok, bytes_ret.value

    def _write_fx2_ram(self, addr: int, data: bytes) -> bool:
        """
        Write raw firmware bytes into Cypress FX/FX2 internal/external RAM.
        Chunks transfers to 64 bytes (0x40) per EP0 control packet (matching USBDRVD.DLL FUN_10001d20).
        """
        if not data:
            return True
        chunk_size = 64
        offset = 0
        while offset < len(data):
            chunk = data[offset : offset + chunk_size]
            success = self._vendor_request_out(
                VR_ANCHOR_DOWNLOAD,
                w_value=(addr + offset) & 0xFFFF,
                w_index=0,
                data=chunk
            )
            if not success:
                return False
            offset += chunk_size
        return True

    def _set_fx2_reset(self, in_reset: bool) -> bool:
        """
        Assert or release the 8051 CPU reset flag.
        Tries Cypress FX2 register (0xE600) with fallback to legacy FX (0x7F92).
        Matching USBDRVD.DLL FUN_10001c80 / FUN_10001cd0.
        """
        val_byte = bytes([1 if in_reset else 0])
        # Try FX2 address 0xE600 first
        res = self._vendor_request_out(VR_ANCHOR_DOWNLOAD, w_value=CYPRESS_FX2_CPUCS, data=val_byte)
        if not res:
            # Fallback to FX address 0x7F92
            res = self._vendor_request_out(VR_ANCHOR_DOWNLOAD, w_value=CYPRESS_FX_CPUCS, data=val_byte)
        return res

    def _bootstrap_firmware(self) -> bool:
        """
        Transfer official microcode (PI133B.DAT) into controller volatile SRAM.
        Implements the two-pass upload architecture proven in USBDRVD_EZUSBDownloadRam:
          - Pass 1: External RAM / Registers (addr >= 0x2000)
          - Pass 2: Internal 8051 Code RAM (addr < 0x2000)
        """
        if self._is_firmware_loaded:
            return True

        candidates = [
            os.path.join(os.path.dirname(__file__), "..", "..", "..", "disassembly_dlls", "PI133B.DAT"),
            os.path.join(os.path.dirname(__file__), "PI133B.DAT"),
            r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\pi133b.dat",
            r"C:\Program Files (x86)\Roper Scientific\WinSpec\PI133B.DAT",
            r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\omavb.dat"
        ]

        fw_path = None
        for c in candidates:
            c_norm = os.path.abspath(c)
            if os.path.exists(c_norm) and os.path.getsize(c_norm) > 1000:
                fw_path = c_norm
                break

        if not fw_path:
            logger.info("Official firmware file not located, assuming controller already bootstrapped.")
            self._is_firmware_loaded = True
            return True

        try:
            with open(fw_path, "rb") as f:
                fw_data = f.read()

            # Parse standard 8051 BIX records: [Length (1B), Addr_MSB (1B), Addr_LSB (1B), Data (Length B)]
            pos = 0
            records = []
            while pos < len(fw_data):
                rec_len = fw_data[pos]
                if pos + 3 > len(fw_data):
                    break
                addr = (fw_data[pos+1] << 8) | fw_data[pos+2]
                if pos + 3 + rec_len > len(fw_data):
                    break
                rec_bytes = fw_data[pos+3 : pos+3+rec_len]
                records.append((rec_len, addr, rec_bytes))
                pos += 3 + rec_len

            # 1. Assert CPU Reset (CPUCS = 1)
            reset_asserted = self._set_fx2_reset(True)

            # 2. Pass 1: External RAM records (addr >= 0x2000)
            fail_count = 0
            attempted = 0
            for length, addr, rec_bytes in records:
                if length > 0 and addr >= 0x2000:
                    attempted += 1
                    if not self._write_fx2_ram(addr, rec_bytes):
                        fail_count += 1

            # 3. Pass 2: Internal 8051 Code RAM records (addr < 0x2000)
            for length, addr, rec_bytes in records:
                if length > 0 and addr < 0x2000:
                    attempted += 1
                    if not self._write_fx2_ram(addr, rec_bytes):
                        fail_count += 1

            # 4. Release CPU Reset (CPUCS = 0) to start 8051 firmware execution
            reset_released = self._set_fx2_reset(False)
            time.sleep(0.1)

            if not reset_asserted or not reset_released:
                logger.warning("CPU reset assert/release was not acknowledged by the device.")
            if fail_count:
                logger.warning(f"Firmware upload: {fail_count}/{attempted} chunk writes were not ACKed by the device.")

            self._is_firmware_loaded = (fail_count == 0 and reset_asserted and reset_released)
            logger.info(
                f"{'Loaded' if self._is_firmware_loaded else 'Attempted to load'} "
                f"{len(records)} microcode records ({len(fw_data)} bytes) into volatile SRAM (2-pass)."
            )
            return self._is_firmware_loaded
        except Exception as ex:
            logger.warning(f"Firmware SRAM bootstrap notice: {ex}")
            return False

    def _trigger_acquisition(self) -> None:
        """
        Replay the acquisition-trigger sequence, byte-for-byte as captured
        from a real, working WinSpec32 session against this exact hardware
        (2026-08-29): poll the busy register a few times, one read of the
        pre-trigger register, WRITE the trigger register (the only state
        change in the whole captured sequence before pixel data appeared),
        then one post-trigger read. Live-confirmed to actually produce a
        real 1024-byte frame on 0x82 when replayed through this driver.
        """
        for _ in range(3):
            self._bulk_read_register(REG_ACQ_BUSY)
        self._bulk_read_register(REG_ACQ_PRETRIGGER)
        self._bulk_write_register(REG_ACQ_TRIGGER, 1)
        self._bulk_read_register(REG_ACQ_POSTTRIGGER)

    def disconnect(self):
        """Close communication handles cleanly."""
        if self._winusb_handle and winusb:
            try:
                winusb.WinUsb_Free(self._winusb_handle)
            except Exception:
                pass
            self._winusb_handle = None

        if self._device_handle and self._device_handle != INVALID_HANDLE_VALUE and kernel32:
            try:
                kernel32.CloseHandle(self._device_handle)
            except Exception:
                pass
        self._device_handle = None
        self.is_connected = False

    def acquire_frame(
        self,
        exposure_time_sec: float = 1.0,
        wavelengths_nm: Optional[np.ndarray] = None,
        progress_callback: Optional[Callable[[float], None]] = None,
        stop_requested: Optional[Callable[[], bool]] = None,
    ) -> Tuple[np.ndarray, int]:
        """
        Execute physical exposure and read raw 512-pixel InGaAs spectrum via
        the real bulk-pipe protocol (see module docstring). Live-confirmed
        working 2026-08-29: this exact trigger sequence, replayed from a
        captured real WinSpec32 session, produced a real 1024-byte frame with
        plausible detector-noise-floor values.

        NOTE: exposure_time_sec is NOT yet wired to hardware -- no register
        controlling integration time has been identified in the capture yet.
        It currently only paces local progress_callback timing; the actual
        exposure duration is whatever the controller itself uses internally.

        Returns exact zeros (0 counts) when hardware is in standby (no synthetic data).
        """
        if not self.is_connected or not self._winusb_handle:
            if not self.connect():
                return np.zeros(self.num_pixels, dtype=np.int64), 0

        if not self._winusb_handle:
            logger.warning(
                "Bulk-pipe protocol requires WinUSB binding -- device is currently "
                "on piusbwdf.sys, which has no general bulk-pipe access."
            )
            return np.zeros(self.num_pixels, dtype=np.int64), 0

        # 1. Replay the captured acquisition-trigger sequence
        self._trigger_acquisition()

        # 2. Wait for Exposure Duration with Real-Time Progress Updates
        steps = max(1, int(exposure_time_sec / 0.05))
        for step in range(steps):
            if stop_requested and stop_requested():
                break
            time.sleep(min(0.05, exposure_time_sec / steps))
            if progress_callback:
                progress_callback(min(1.0, (step + 1) / steps))

        # 3. Read 512 uint16 Pixels (1024 bytes) from the pixel pipe (0x82)
        expected_bytes = self.num_pixels * 2
        frame_bytes = self._bulk_read_frame(expected_bytes)

        if frame_bytes and len(frame_bytes) >= expected_bytes:
            raw_data = np.frombuffer(frame_bytes[:expected_bytes], dtype=np.uint16)
            return raw_data.astype(np.int64), 1

        # Strict scientific integrity: Return exact zeros when in standby
        return np.zeros(self.num_pixels, dtype=np.int64), 0

    def grab_2d_frame(self, color_mode: str = "RGB", timeout_ms: int = 2000) -> Optional[np.ndarray]:
        """Grab 2D representation of linear spectrum."""
        spec, _ = self.acquire_frame(exposure_time_sec=0.03)
        h = max(64, self.num_pixels // 4)
        mx = float(np.max(spec)) if len(spec) > 0 and np.max(spec) > 0 else 1.0
        norm = np.clip(spec / mx * 255.0, 0, 255).astype(np.uint8)
        mono_2d = np.tile(norm, (h, 1))
        if color_mode.upper() == "RGB":
            return np.stack([mono_2d] * 3, axis=-1)
        return mono_2d

    def get_temperature(self) -> Optional[dict]:
        """
        Query the temperature-adjacent register (0x46) via the real bulk-pipe
        protocol -- live-confirmed 2026-08-29 against real hardware, with
        values tracking a real captured WinSpec32 session on the same unit
        almost exactly (raw 0x9191/0x9292).

        NOTE: the raw register value itself is real and live; the conversion
        to degrees Celsius is NOT confirmed -- no calibration constants (slope/
        offset) have been recovered from either the capture or documentation
        yet. temperature_c is therefore left as None (uncalibrated) rather
        than reporting a fabricated number; raw_register is populated instead
        so the real reading is still visible. Calibrate by comparing a raw
        read here against WinSpec32's own displayed temperature at the same
        moment.
        """
        temp_val = None
        raw_val = None
        status_str = "OFFLINE"

        if self.is_connected and self._winusb_handle:
            raw_val = self._bulk_read_register(REG_TEMPERATURE)
            if raw_val is not None:
                status_str = "REGISTER_OK_UNCALIBRATED"
                self._last_temperature = None

        return {
            "temperature_c": temp_val,
            "setpoint_c": None,
            "status": 1 if raw_val is not None else 0,
            "status_str": status_str,
            "raw_register": raw_val,
            "is_simulated": False
        }

    def get_detector_info(self) -> dict:
        """
        Query physical detector head geometry and identification from controller NVRAM / status registers.
        Returns active pixel geometry (e.g. xdim=512 or 1024, ydim=1), model name, and connection state.
        """
        info = {
            "model": self.camera_model_name,
            "xdim": self.num_pixels,
            "ydim": 1,
            "is_connected": self.is_connected,
            "is_simulated": False
        }
        if self.is_connected and self._device_handle and kernel32:
            resp = self._vendor_request_in(VR_READ_STATUS, length=16)
            if resp and len(resp) >= 4:
                # Parse geometry from status descriptor [flags (2B), xdim (2B), ...]
                xdim = struct.unpack("<H", resp[2:4])[0]
                if xdim in (256, 512, 1024, 2048):
                    info["xdim"] = xdim
                    self.num_pixels = xdim
                    logger.info(f"Detected physical array geometry from hardware: {xdim} active pixels.")
        return info

