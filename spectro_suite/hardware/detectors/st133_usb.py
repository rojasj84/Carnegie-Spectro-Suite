"""
Native 64-Bit Hardware Driver for Princeton Instruments ST-133 InGaAs Detectors.
================================================================================
Controls Princeton Instruments ST-133 / OMA-V linear InGaAs detectors on 64-bit
Windows 10/11 through direct kernel communication over USB.

Architecture, confirmed by decompiling the actual installed kernel driver
(C:/Windows/System32/drivers/piusbwdf.sys, Provider: Princeton Instruments,
package piusb3.inf) and validating live against real hardware:
  - IOCTL 0x55002005 = vendor request OUT, 0x5500200A = vendor request IN.
    Both take an 8-byte header [bRequest, 0,0,0, wValueLo, wValueHi, 0,0] as the
    IOCTL *input* buffer; 0x55002005 is METHOD_IN_DIRECT, so the bytes actually
    being written to the device go in the IOCTL *output* buffer slot, not
    appended to the input buffer.
  - IOCTL 0x55002021 = start an asynchronous frame read. It does not complete
    immediately (STATUS_PENDING) -- must be issued as overlapped I/O and either
    waited on or cleanly cancelled with CancelIoEx. Its counterpart 0x5500201C
    cancels a pending frame read. Confirmed live: accepted and cleanly
    cancellable; no frame data observed yet (see _build_ingaas_timing_stream).
  - IOCTL 0x5500600E reads back the connected device's USB PID and reports
    which of two supported hardware revisions (PID_A010 vs PID_A026) is
    attached -- both are legitimate, not a version mismatch.
  - VR 0xF0 (8-byte IN) and 0xF1 (2-byte IN, firmware version) respond with
    real data on live hardware; VR 0x8B (temperature), 0xA8/0xAE/0xAF status
    requests, and register writes for "digitizer mode"/"EPLD arm" do not --
    the controller answers pure identification requests but not anything
    requiring the EPLD/detector to actually operate. Root cause unconfirmed;
    the kernel driver's own CheckFirmwareAndUpgrade routine (present in
    piusbwdf.sys, pushes a real Cypress FX2 firmware image when the reported
    firmware version is below 3.6 -- this unit reports 1.0) is the leading
    candidate, unverified without capturing its DbgPrint output.
  - Exposure time and gain are NOT sent as standalone commands. PICM_Set_exposuretime
    (PIXCM32.dll) just stores the value as object state. The actual timing
    program is compiled from an in-memory linked list of {count, opcode, flag}
    instructions (PIXCM32.dll FUN_1002c88f / FUN_1002cf00) into a byte buffer by
    FUN_10029160, then sent via a Pipp32.dll-style bulk write (PIPP_Output_Multiple)
    before triggering the read. FUN_10029160 is a large (~100+ local variable)
    routine shared across many PI camera modes; its exact byte-serialization has
    NOT been fully traced, so _build_ingaas_timing_stream's byte layout below is
    a best-effort approximation, not a confirmed wire format.
  - Direct 512-channel linear InGaAs photodiode digitizer reading 16-bit physical
    counts (512 pixels x 2 bytes = 1024-byte frame, matches observed ADC ceiling
    near 60000 counts on a 16-bit unsigned readout).
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

# Hardware Vendor Request Commands (from PIXCM32.dll & USBDRVD.DLL)
VR_ANCHOR_DOWNLOAD = 0xA0                    # SRAM Microcode Download (Anchor Download)
VR_EPLD_CONFIG     = 0x8D                    # EPLD / FPGA Register Bank Config
VR_TRIGGER_ACQ     = 0x01                    # Trigger Hardware Acquisition
VR_READ_STATUS     = 0x8A                    # Hardware Status & Temp Readback
VR_READ_TEMP       = 0x8B                    # Read RTD Temperature Sensor


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
        Execute the controller handshake reverse-engineered from Pipp32.dll's PIFX2
        communication class (FUN_1000d08b / FUN_1000ddd0), reached via PISCC32.dll's
        PISCC_CreateCommunicationObject(1) backend from PIXCM32.dll's default
        controller constructor (ST-133 is the unlisted/default case in
        PICM_Create_controller's type dispatch, not an explicit numbered case):
          1. Reset / Flush USB Endpoints (0x08, 0x82, 0x86).
          2. Set Controller Mode (register 0x22 = 1: High-Speed 16-Bit Digitizer DMA).
          3. Set Packet Size (register 0x23 = 512 bytes).
          4. Set Sub-address (register 0x24 = 0).
          5. Arm EPLD Command Decoder (register 0x26 = 1).
          6. Query Hardware Status / Presence (VR 0xF0, 0xF1).

        NOTE: an earlier version of this docstring claimed registers 0x22/0x23/
        0x24/0x26 were written as 6-byte packets over the bulk OUT pipe (from
        decompiling FUN_1000d08b in the legacy Pipp32.dll/USBDRVD.dll stack).
        That entire call graph was later confirmed to be a dead end for this
        hardware (see AI Instructions 6.txt Sec. 3 -- it targets a 6-pipe USB
        topology this 3-pipe device does not have) and does not apply here.
        _write_register sends these as real EP0 vendor control requests via
        piusbwdf.sys's IOCTL_VENDOR_REQUEST_OUT, which is independently
        cross-validated by Princeton Instruments' own GPL Linux driver for this
        exact hardware (rspiusb.c, see _write_register docstring) -- vendor
        commands are plain USB control transfers, never bulk-pipe framed. VR
        0xF0 (1 byte) / 0xF1 (2 bytes) as EP0 IN reads are confirmed live.
        """
        if not self._device_handle or not kernel32:
            return False

        try:
            # 1. Reset / Flush active endpoints
            if self._winusb_handle and winusb:
                for p_id in [0x00, 0x08, 0x82, 0x86]:
                    try:
                        winusb.WinUsb_ResetPipe(self._winusb_handle, p_id)
                    except Exception:
                        pass

            steps = []
            # 2. Configure High-Speed 16-Bit Digitizer Mode (register 0x22 = 1)
            steps.append(("REG/0x22", self._write_register(0x22, 1)))

            # 3. Configure USB Endpoint Packet Size (register 0x23 = 512)
            steps.append(("REG/0x23", self._write_register(0x23, 512)))

            # 4. Set Controller Sub-address (register 0x24 = 0)
            steps.append(("REG/0x24", self._write_register(0x24, 0)))

            # 5. Arm EPLD Command Decoder (register 0x26 = 1)
            steps.append(("REG/0x26", self._write_register(0x26, 1)))

            # 6. Query Hardware Status / Presence (VR 0xF0, 0xF1)
            # NOTE: VR 0xF0 must be requested with length>=2 (was length=1) --
            # live-confirmed 2026-08-28 that a 1-byte request STALLs the
            # control endpoint (WinUsb_ControlTransfer -> ERROR_GEN_FAILURE),
            # while length=8 (matching the module docstring) completes cleanly.
            steps.append(("F0", self._vendor_request_in(0xF0, length=8) is not None))
            steps.append(("F1", self._vendor_request_in(0xF1, length=2) is not None))

            failed = [name for name, ok in steps if not ok]
            if failed:
                logger.warning(f"Controller handshake steps did not respond (device did not ACK): {failed}")
                return False

            logger.info("ST-133 controller handshake & EPLD decoder armed successfully.")
            return True
        except Exception as ex:
            logger.warning(f"Controller handshake notice: {ex}")
            return False

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

    def _build_ingaas_timing_stream(self, exposure_time_sec: float) -> bytes:
        """
        Build a best-effort approximation of the hardware timing microcode for
        the OMA-V InGaAs array. NOT a confirmed wire format -- see below.

        The real mechanism (traced through PIXCM32.dll) does not build a flat
        byte stream at all: PICM_Set_exposuretime just stores the value as
        object state, and the actual timing program is assembled as an
        in-memory doubly-linked list of {count: u32, opcode: u8, flag: u8}
        instructions (FUN_1002c88f / FUN_1002cf00), which a large, shared,
        multi-camera-mode routine (FUN_10029160, PIXCM32.dll) then compiles
        into a byte buffer and sends via a Pipp32.dll-style bulk write
        (PIPP_Output_Multiple) before triggering the read. FUN_10029160's
        exact serialization has not been fully traced (100+ local variables,
        many device-type branches) -- opcodes below are corrected against what
        FUN_1002c88f actually emits (0xE0/0x20/0x44/0x46/0xBD/0x30; 0x40 never
        appears despite an earlier version of this code claiming it did) but
        the overall byte layout is still a guess, not the compiled output of
        FUN_10029160. The confirmed way to trigger a read on the real driver
        is IOCTL_READ_FRAME (0x55002021, see acquire_frame) -- this function's
        output is not currently sent anywhere on that path.
        """
        quanta_count = int(max(1, (exposure_time_sec * 1_000_000.0) / self._quantum_us))
        
        stream = bytearray()
        
        # 1. Pre-charge array flush (Clear dark accumulation)
        stream.append(0xE0) # Opcode: Reset shift register
        stream.append(0x20) # Opcode: Flush gate
        
        # 2. Program Integration Loop
        if quanta_count > 65535:
            loops = quanta_count // 65535
            rem = quanta_count % 65535
            
            # Nested loop start
            stream.append(0x44)
            stream.extend(struct.pack("<H", loops))
            stream.append(0x30)
            stream.extend(struct.pack("<H", 0xFFFF))
            stream.append(0x46)
            stream.append(0xBD)
            
            if rem > 0:
                stream.append(0x30)
                stream.extend(struct.pack("<H", rem))
        else:
            stream.append(0x30)
            stream.extend(struct.pack("<H", max(1, quanta_count)))
            
        # 3. Readout trigger & ADC pixel shift clocking for 512 channels
        stream.append(0x00) # Opcode: Clock ADC
        stream.extend(struct.pack("<H", self.num_pixels))
        stream.append(0xBD) # Opcode: Arm complete
        
        return bytes(stream)

    def _arm_gate_and_trigger(self, exposure_time_sec: float) -> bool:
        """
        Arm the EPLD timing generator and assert the hardware acquisition trigger.

        NOTE: VR 0x8D (EPLD config) and VR 0x01 (trigger) below are carried over
        from before this driver's real IOCTL interface was known and have never
        been tested against real hardware -- unlike 0xF0/0xF1/0x8B/0xAF/0xA8/0xAE,
        none of which are used here. The confirmed acquisition-trigger mechanism
        on the real driver is IOCTL_READ_FRAME itself (0x55002021, see
        acquire_frame): issuing it starts an async pended read rather than
        requiring a separate discrete "start" command. This method's vendor
        requests are speculative and may be doing nothing (or the wrong thing).
        """
        timing_stream = self._build_ingaas_timing_stream(exposure_time_sec)

        # 1. Dispatch timing microcode to EPLD register bank (Vendor Request 0x8D)
        armed = self._vendor_request_out(VR_EPLD_CONFIG, w_value=0, w_index=0, data=timing_stream)
        if not armed:
            logger.debug("EPLD config transfer returned non-zero status (expected during standby).")

        # 2. Issue Acquisition Start Trigger (Vendor Request 0x01)
        exp_ms = int(max(10, exposure_time_sec * 1000.0))
        return self._vendor_request_out(VR_TRIGGER_ACQ, w_value=min(65535, exp_ms), w_index=0)

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
        Execute physical exposure and read raw 512-pixel InGaAs spectrum.
        Returns exact zeros (0 counts) when hardware is in standby (no synthetic data).
        """
        if not self.is_connected or not kernel32:
            if not self.connect():
                return np.zeros(self.num_pixels, dtype=np.int64), 0

        # 1. Arm EPLD Gate & Assert Hardware Acquisition Trigger
        self._arm_gate_and_trigger(exposure_time_sec)

        # 2. Wait for Exposure Duration with Real-Time Progress Updates
        steps = max(1, int(exposure_time_sec / 0.05))
        for step in range(steps):
            if stop_requested and stop_requested():
                break
            time.sleep(min(0.05, exposure_time_sec / steps))
            if progress_callback:
                progress_callback(min(1.0, (step + 1) / steps))

        # 3. Read 512 uint16 Pixels (1024 bytes) from Bulk IN Pipe (0x82)
        expected_bytes = self.num_pixels * 2
        read_buf = ctypes.create_string_buffer(expected_bytes)
        bytes_read = wintypes.DWORD(0)

        # A. WinUSB Direct Pipe Read (0x82)
        if self._winusb_handle and winusb:
            trans = wintypes.ULONG(0)
            res_wu = winusb.WinUsb_ReadPipe(
                self._winusb_handle,
                0x82, # Endpoint 2 Bulk IN
                read_buf,
                expected_bytes,
                ctypes.byref(trans),
                None
            )
            if res_wu and trans.value >= expected_bytes:
                raw_data = np.frombuffer(read_buf.raw[:expected_bytes], dtype=np.uint16)
                return raw_data.astype(np.int64), 1

        # B. KMDF IOCTL_READ_FRAME (piusbwdf.sys) -- confirmed live to be an
        # asynchronous/pended request (STATUS_PENDING, not completed inline).
        # _ioctl_overlapped() handles the overlapped-I/O dance and bounded
        # cancellation this requires -- see its docstring for why a plain
        # synchronous DeviceIoControl call is not safe here. Confirmed live:
        # the request is accepted and cleanly cancellable; no frame data has
        # been observed yet (see module docstring).
        timeout_ms = int(max(1000, exposure_time_sec * 1000 + 500))
        ok, bytes_ret = self._ioctl_overlapped(IOCTL_READ_FRAME, None, read_buf, expected_bytes, timeout_ms)
        bytes_read.value = bytes_ret

        # 4. If Physical Pixels Received over USB DMA:
        if ok and bytes_read.value >= expected_bytes:
            raw_data = np.frombuffer(read_buf.raw[:expected_bytes], dtype=np.uint16)
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
        Query physical InGaAs sensor cryogenic cooling temperature from hardware.
        Returns None / OFFLINE unless physical RTD sensor bytes are read from instrument.
        """
        temp_val = None
        status_str = "OFFLINE"
        
        if self.is_connected and self._device_handle and kernel32:
            # Query RTD temperature sensor via Vendor Request 0x8B
            resp = self._vendor_request_in(VR_READ_TEMP, length=4)
            if resp and len(resp) >= 2:
                raw_adc = struct.unpack("<h", resp[:2])[0]
                # Convert raw RTD counts to Celsius (-100.0 C typical for LN2 Dewar)
                calc_temp = (raw_adc / 10.0)
                if -150.0 <= calc_temp <= 50.0:
                    temp_val = calc_temp
                    self._last_temperature = temp_val
                    status_str = "LOCKED"

        return {
            "temperature_c": temp_val,
            "setpoint_c": -97.5 if temp_val is not None else None,
            "status": 1 if temp_val is not None else 0,
            "status_str": status_str,
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

