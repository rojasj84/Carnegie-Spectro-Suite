"""
Native 64-Bit Hardware Driver for Princeton Instruments ST-133 InGaAs Detectors.
================================================================================
Controls Princeton Instruments ST-133 / OMA-V linear InGaAs detectors on 64-bit
Windows 10/11 through direct kernel communication over USB.

########################################################################
# TRANSPORT REALITY (2026-08-30) -- READ THIS FIRST
#
# WinUSB CANNOT deliver pixel frames from this controller. The bulk-IN
# pixel pipe 0x82 stays 100% silent under WinUSB no matter what -- single
# read, pre-armed overlapped read, 4x 512-byte continuous-reader pool,
# RAW_IO, infinite timeout, full cold-boot init replay: not one byte.
# Proven by swapping the device to the libusbK driver (Zadig) and running
# the identical command sequence through pyusb/libusb-1.0 -- frames come
# back immediately and reproducibly. So:
#
#   * WORKING 64-bit acquisition path  ->  st133_libusb.py  (pyusb + libusbK)
#   * THIS file (WinUSB)               ->  register I/O + setpoint readback
#                                          ONLY; acquire_frame() will not
#                                          get a frame on WinUSB.
#
# See IN_PROGRESS.md at the repo root for the full current state.
########################################################################

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
  - 0x40: self-test/echo pattern. REVISED 2026-08-29: plain write-then-
    readback echo, not a fixed 0x5555/0xD5D5 constant -- see
    _init_controller_handshake. Liveness check only.
  - 0x54: detector temperature on READ. The low byte, taken as a two's-
    complement int8, is degrees Celsius directly -- no scale, no offset.
    Anchor: read 0x9E9E live 2026-08-29 while WinSpec32 displayed -98 C on the
    same unit (0x9E = 158 -> -98). The SAME address 0x54 is the timing-table
    DOWNLOAD target on WRITE; read and write meanings are unrelated. See
    get_temperature(). SUPERSEDES 0x46 (used until 2026-08-29 on the strength
    of a decompiled PIXCM32.dll PIPP_Input(handle,0x46) path and some
    0x9191/0x9292 pokes): 0x46 reads a flat 0x0000 on this unit across a full
    256-address sweep + 60s watch, and in every USB capture WinSpec only ever
    *writes* it (0x0096), never reads it.
  - The real, COMPLETE first-trigger arming sequence (REG_RECONFIG_BURST_A/B,
    REG_ARM_PREP/POST, VR_ARM_PREP, REG_ACQ_BUSY x BUSY_POLL_COUNT,
    REG_ACQ_PRETRIGGER, the EP0 0xF0 arm, REG_ACQ_TRIGGER, REG_ACQ_POSTTRIGGER):
    extracted from USBCapture-FullPowerCycle.pcapng (2026-08-29) -- a genuine
    CCD power-off + USB disconnect, captured start to finish through power-on/
    reconnect/WinSpec32 launch/one real 1-second acquisition, the only pixel
    completion in a 33,221-packet capture. This SUPERSEDES a shorter sequence
    derived earlier the same day from USBCapture-AQTime4.pcapng, which turned
    out to be a *repeat* trigger within an already-armed session (that capture
    never included a true first connection) -- confirmed live to still fail,
    byte-for-byte-correct, both alone and combined with every other same-day
    hypothesis (continuous heartbeat, read-posting timing, explicit
    SET_INTERFACE reassertion, the large batched table writes). The full
    sequence includes a genuine 401-iteration busy-poll on 0xE2 (~45ms real
    time) and a vendor EP0 call (bRequest=0xF2, wValue=0x0200) that was first
    flagged as "never decoded further" all the way back in the original Part-10
    capture. See _trigger_acquisition for the exact order.
  - 0x14: WRITE with value=1 -- the acquisition trigger, immediately
    preceded by the EP0 0xF0 arm call with nothing in between. Live-
    confirmed to actually produce a real frame when replayed (see
    acquire_frame).
  - Pixel readout (bulk IN 0x82) needs no explicit "arm" request of its own --
    confirmed live to match piusbwdf.sys's continuous-reader architecture
    (Parts 4/5): a frame simply arrives once the trigger sequence above has
    been sent, with WinUSB re-arming the pipe automatically after each read.
  - EXPOSURE TIME IS NOT YET WIRED TO HARDWARE. No register controlling
    integration time has been identified in the capture yet -- acquire_frame's
    exposure_time_sec currently only paces local progress-callback timing.
  - CONTINUOUS BACKGROUND HEARTBEAT (added 2026-08-29, see _heartbeat_loop):
    real WinSpec32 never goes quiet on the bulk pipe. TWO DISTINCT walking-
    pattern mechanisms exist, not one: an elaborate, batched multi-step write
    sequence to 0x54 that dominates for a long stretch right after connect
    (confirmed in both USBCapture-AQTime3.pcapng and
    USBCapture-FullPowerCycle.pcapng -- REVISES an earlier same-day claim that
    0x54 "doesn't exist", which was based on USBCapture-AQTime4.pcapng alone,
    a capture that apparently started past this phase), and a simpler,
    ongoing walking pattern on 0x4A that dominates steady-state activity
    afterward (confirmed dominant in AQTime4, and still present later in
    FullPowerCycle). The background thread currently only replicates the 0x4A
    steady-state pattern, not the 0x54 init burst -- see REG_HEARTBEAT_WALK.

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
import queue
import struct
import ctypes
import threading
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
REG_TEMPERATURE      = 0x46   # LIVE detector temperature. Decompiled PICM_Get_Temperature for
                              # the ST-133 (PIXCM32 FUN_10058ab2 -> PIPP_Input(handle, 0x46))
                              # reads 10 ADC samples here, averages, applies a linear cal.
                              # Reads 0x0000 while the detector is warm / cooler loop idle.
REG_TEMP_SETPOINT    = 0x54   # Cooler SETPOINT (on READ): low byte as two's-complement int8
                              # degrees C. Read 0x9E9E = -98 C on 2026-08-30 -- but this is the
                              # last value WinSpec programmed, NOT a live reading (it never
                              # changes, detector was warm). Same address is the PTG timing-
                              # table DOWNLOAD target on WRITE.
REG_EXPOSURE         = 0x32   # Integration time, LOW BYTE (0x00..0xFF). Identified 2026-08-30:
                              # frame mean counts scale ~linearly with this value (dark-current
                              # integration on a warm detector). Written just before the busy-
                              # poll in the arm sequence. 0 => minimum integration (flat bias
                              # frame ~260 counts). WinSpec's captured value was 0xFA (250).
REG_ACQ_TRIGGER      = 0x14   # WRITE value=1 -- the acquisition trigger
REG_ACQ_POSTTRIGGER  = 0x32   # (same addr as REG_EXPOSURE) one-time read right after the trigger

# REG_ACQ_BUSY (0xE2) / REG_ACQ_PRETRIGGER (0xE0): RESTORED 2026-08-29 after
# initially being removed based on USBCapture-AQTime4.pcapng (which showed
# zero occurrences across all 4 of its triggers). A true full-power-cycle
# capture (USBCapture-FullPowerCycle.pcapng: genuine CCD power-off, USB
# disconnect, full capture running through power-on/reconnect/WinSpec32
# launch/one real 1-second acquisition -- the only pixel completion in a
# 33,221-packet capture) shows a real, sustained poll loop: 401 consecutive
# reads of 0xE2 (idx 31583-33183, ~45ms real elapsed time, tightly
# back-to-back, always reading 0), then ONE read of 0xE0, immediately before
# the already-known EP0 0xF0 arm call and trigger write. AQTime4's 4
# triggers must all have been *repeat* triggers within an already-armed
# WinSpec32 session (it never captured the true first trigger after a cold
# connect), which apparently skips this entire block -- our own driver
# creates a fresh WinUSB session on every connect() and has never observed
# what a "warm" second trigger within our own session would need, so the
# full sequence below is used for every trigger until proven unnecessary.
REG_ACQ_BUSY         = 0xE2
REG_ACQ_PRETRIGGER   = 0xE0
BUSY_POLL_COUNT       = 401   # matches the real capture's poll count exactly

# Full real "first trigger after a true power cycle" arming sequence,
# extracted from USBCapture-FullPowerCycle.pcapng (idx 31553-33198). Three
# previously-unseen registers (0x10, 0x12, 0x16) and the vendor EP0 call
# bRequest=0xF2 (wValue=0x0200=512, 8-byte zero payload -- the "never
# decoded further" request flagged all the way back in the original Part-10
# capture) appear here for the first time with full context. Order:
#   REG_RECONFIG_BURST_A -> REG_ARM_PREP -> VR_ARM_PREP(0xF2) ->
#   REG_ARM_POST -> REG_RECONFIG_BURST_B -> [busy-poll+pretrigger+arm+trigger]
REG_RECONFIG_BURST_A = [(0x30, 0), (0x30, 1), (0x30, 3), (0x00, 0), (0xFE, 0), (0x3C, 1)]
REG_ARM_PREP         = [(0x14, 0x0100), (0x10, 4), (0x12, 0), (0x14, 1)]
REG_ARM_POST         = [(0x16, 0)]
REG_RECONFIG_BURST_B = [(0x22, 0), (0x24, 1)]
VR_ARM_PREP           = 0xF2

# Continuous background heartbeat, confirmed live 2026-08-29 via a true
# cold-boot capture (USBCapture-AQTime3.pcapng): real WinSpec32 never stops
# talking to the controller -- a write-verify cycle on 0x40 and a walking-
# bit-pattern write repeat for the ENTIRE session, not just once at init.
# REVISED 2026-08-29 (USBCapture-AQTime4.pcapng): the real walking-pattern
# register is 0x4A, not 0x54 -- 0x54 never appears anywhere in that fresh
# capture, while 0x4A is by far the single most active register in the whole
# session (1664 writes across ~5200 packets), cycling mostly between 0x0C/
# 0x0E with occasional 0x0D/0x0F/0x08/0x00. Working hypothesis (not yet
# independently proven, only tested as a bundle -- see _heartbeat_loop): the
# firmware treats this as a "live host is present" signal and won't arm
# frame delivery on trigger without it.
REG_HEARTBEAT_ECHO   = 0x40
REG_HEARTBEAT_WALK   = 0x4A
HEARTBEAT_INTERVAL_SEC = 0.1

# Both REG_TEMPERATURE (0x46, live) and REG_TEMP_SETPOINT (0x54, setpoint)
# carry a value in their low byte; read as two's-complement int8 it is degrees
# Celsius (no scale/offset known -- one anchor: 0x54 low byte 0x9E = -98, the
# setpoint WinSpec last programmed). REAL calibration of 0x46 (slope/offset,
# per decompiled PICM_Get_Temperature) is still TODO and needs a cold detector
# to pin down. Values outside this window are flagged as an implausible decode.
TEMP_C_PLAUSIBLE_MIN = -140
TEMP_C_PLAUSIBLE_MAX = 60


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

    def __init__(self, num_pixels: int = 512, dark_current: float = 500.0,
                 run_init_burst: bool = False, init_burst_target_sec: float = 0.0,
                 continuous_reader: bool = True):
        self.num_pixels = num_pixels
        self.dark_current = dark_current
        self.is_connected = False
        self.camera_model_name = "Princeton Instruments OMA-V InGaAs (7514-0001)"

        # Replicate piusbwdf.sys's pixel-pipe architecture on WinUSB: a
        # background pool of overlapped 512-byte reads on 0x82, always pending
        # and auto-re-armed, feeding a frame assembler. The KMDF driver
        # (decompiled: FUN_000113cc -> WdfUsbTargetPipeConfigContinuousReader,
        # TransferLength 0x200, ~2 pending) runs this from device-start; WinUSB
        # does nothing equivalent, which is why a single ReadPipe issued around
        # each trigger never caught a frame -- the FX2 auto-commits 512-byte
        # packets on 0x82 whether or not a host read is pending. Set False to
        # fall back to the old single-overlapped-read path in acquire_frame.
        self.continuous_reader = continuous_reader

        # EXPERIMENTAL (2026-08-29): when True, connect() replays WinSpec32's
        # full cold-boot controller init verbatim from the USB capture -- the
        # 0x40 unlock handshake, the ~35k-value 0x54 PTG timing-table stream,
        # interleaved 0xA2 status reads, the 0x40 lock. Every captured session
        # (cold boot AND warm reconnect) sends this byte-for-byte identical, so
        # it carries no per-acquisition state. Hypothesis: without the PTG
        # timing tables loaded the controller never clocks the CCD, so 0x82
        # stays empty and temperature telemetry is stale. Off by default until
        # proven -- it is ~15k blocking USB ops and writes DSP state.
        self.run_init_burst = run_init_burst
        # "full"  = the ~420-op FullPowerCycle arming sequence (current HEAD).
        # "short" = the 5-op sequence from commit 2608036 (3x read 0xE2 ->
        #           read 0xE0 -> write 0x14=1 -> read 0x32), derived from an
        #           already-warm repeat-trigger capture. Kept as an option to
        #           retest against a device freshly primed by run_init_burst,
        #           a combination never tried before.
        self.trigger_mode = "full"
        # Unpaced, the replay runs ~2x faster than the real WinSpec session
        # (~2.5s vs ~4.7s) because FX2 NAK flow control is our only throttle.
        # If >0, _replay_init_burst spreads coarse sleeps across the stream to
        # stretch it to roughly this many wall-clock seconds, in case the PTG
        # needs the slower ingest rate to actually latch the timing tables.
        self.init_burst_target_sec = init_burst_target_sec
        
        self._device_handle = None
        self._winusb_handle = None
        self._device_path = None
        self._is_firmware_loaded = False
        self._last_temperature: Optional[float] = None
        self._quantum_us = 153.0 # InGaAs gate integration quantum (from omavb.dat)

        # Serializes all bulk register I/O between the heartbeat thread and
        # whatever thread calls acquire_frame()/get_temperature() -- the
        # protocol is a strict write-then-read-reply pairing on 0x08/0x86, so
        # two threads issuing ops back-to-back without a lock could pair a
        # request with the wrong reply. RLock so a method that already holds
        # it (e.g. _trigger_acquisition) can still call the individual
        # register helpers, which also acquire it.
        self._bulk_lock = threading.RLock()
        self._heartbeat_thread: Optional[threading.Thread] = None
        self._heartbeat_stop = threading.Event()

        # Continuous pixel-reader state (see continuous_reader / _pixel_reader_loop).
        self._reader_thread: Optional[threading.Thread] = None
        self._reader_stop = threading.Event()
        self._frame_q: "queue.Queue[bytes]" = queue.Queue(maxsize=8)
        self._reader_alive = threading.Event()

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

                    # Re-assert interface 0, alt-setting 0. The real cold-boot
                    # capture issues a standard SET_INTERFACE (bReq=0x0B) right
                    # after SET_CONFIGURATION -- WinUsb_Initialize does the
                    # latter but not this, and re-selecting the alt setting also
                    # resets endpoint data-toggle state per USB spec. NOTE this
                    # silently reverts pipe policies to OS defaults, so it must
                    # come BEFORE the SetPipePolicy loop below.
                    try:
                        winusb.WinUsb_SetCurrentAlternateSetting(self._winusb_handle, 0)
                    except Exception as ex:
                        logger.debug(f"WinUsb_SetCurrentAlternateSetting(0) notice: {ex}")

                    # Pipe transfer-timeout policy. 500ms on the command pipes
                    # (0x00/0x08/0x86), but 0 (wait forever) on the pixel pipe
                    # 0x82: the real capture shows the 0x82 read submitted ~47ms
                    # BEFORE the trigger and completing exactly one exposure
                    # later, so its lifetime is bounded by the (arbitrary)
                    # exposure, not a fixed policy value. acquire_frame() now
                    # posts that read as overlapped I/O and bounds it itself via
                    # CancelIoEx -- see _begin_overlapped_read.
                    PIPE_TRANSFER_TIMEOUT = 0x03
                    for p_id in [0x00, 0x08, 0x82, 0x86]:
                        timeout_ms = wintypes.ULONG(0 if p_id == 0x82 else 500)
                        winusb.WinUsb_SetPipePolicy(
                            self._winusb_handle,
                            p_id,
                            PIPE_TRANSFER_TIMEOUT,
                            ctypes.sizeof(timeout_ms),
                            ctypes.byref(timeout_ms)
                        )

                    # ALLOW_PARTIAL_READS on 0x82 -- the WinUSB equivalent of
                    # USBD_SHORT_TRANSFER_OK, which APAUSB.sys (decompiled) sets
                    # on every bulk-IN URB (TransferFlags=3). Default is already
                    # TRUE, set explicitly for clarity. RAW_IO is intentionally
                    # NOT used: APAUSB is a buffered synchronous pass-through,
                    # not raw, and RAW_IO makes WinUSB ignore ALLOW_PARTIAL_READS.
                    ALLOW_PARTIAL_READS = 0x05
                    partial_on = wintypes.ULONG(1)
                    try:
                        winusb.WinUsb_SetPipePolicy(
                            self._winusb_handle, 0x82, ALLOW_PARTIAL_READS,
                            ctypes.sizeof(partial_on), ctypes.byref(partial_on)
                        )
                    except Exception as ex:
                        logger.debug(f"ALLOW_PARTIAL_READS policy on 0x82 notice: {ex}")
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

            # The 0x42 / 0xC0<-0xDEAD / 0xCA register handshake piusbwdf.sys
            # runs at driver-attach but WinUsb_Initialize does not (see
            # _attach_handshake).
            self._attach_handshake()

            # EXPERIMENTAL, opt-in: replay WinSpec32's full cold-boot init
            # (0x40 unlock -> 0x54 PTG timing-table stream -> 0x40 lock) so the
            # controller actually clocks the CCD on a trigger. See __init__.
            if self.run_init_burst:
                self._replay_init_burst()

            # Start the continuous background heartbeat -- see _heartbeat_loop
            # for why this runs for the life of the connection, not just once.
            self._start_heartbeat()

            # Start the continuous pixel reader on 0x82 (WinUSB equivalent of
            # piusbwdf.sys's WdfUsbTargetPipeConfigContinuousReader) so a frame
            # is caught whenever the FX2 clocks one out -- see _pixel_reader_loop.
            self._start_pixel_reader()
            return True
        except Exception as ex:
            logger.error(f"Error connecting to ST-133 controller: {ex}")
            self.is_connected = False
            return False

    def _init_controller_handshake(self) -> bool:
        """
        Lightweight liveness check using the real bulk-pipe protocol.

        REVISED 2026-08-29 (true cold-boot capture): register 0x40 is NOT a
        fixed self-test constant -- it's a plain write-then-readback ECHO
        register. A genuine cold-boot capture showed WinSpec32 writing an
        arbitrary byte (e.g. 0x90) and reading it back doubled (0x9090), then
        writing 0x10 and reading back 0x1010, etc. The earlier "always
        0x5555/0xD5D5" belief was an artifact of those specific bytes being
        whatever WinSpec had last written there in prior sessions, not a
        hardware-fixed pattern -- comparing against them literally caused a
        real false-negative right after a physical power cycle (the register
        read back 0 -- a real value, just not one we recognized).

        REPLACES an earlier, longer "handshake" that wrote registers 0x22/
        0x23/0x24/0x26 over EP0 vendor requests (PICM_Create_controller /
        PISCC_CreateCommunicationObject theory). That whole approach is now
        known to be unnecessary: acquire_frame() and get_temperature() were
        confirmed live to work correctly via the bulk protocol with NO
        handshake beforehand at all. This check is purely informational and
        does NOT gate connect()'s success -- a device that isn't yet on
        WinUSB (still piusbwdf.sys-bound, no bulk-pipe access) just fails
        this check harmlessly; connect() still succeeds either way, since
        WinUSB binding is what actually determines whether the bulk protocol
        (and therefore real communication) is available.
        """
        if not self._winusb_handle or not winusb:
            logger.debug("Self-test skipped: bulk-pipe protocol requires WinUSB binding.")
            return False

        try:
            probe = 0x5A  # arbitrary, distinguishable from a stale/zero readback
            wrote = self._bulk_write_register(REG_SELFTEST, probe)
            val = self._bulk_read_register(REG_SELFTEST)
            expected = probe | (probe << 8)
            ok = wrote and val == expected
            if ok:
                logger.info(f"ST-133 echo register (0x{REG_SELFTEST:02X}) round-tripped 0x{probe:02X} correctly -- bulk-pipe protocol live.")
            else:
                logger.debug(f"ST-133 echo register did not round-trip as expected (wrote 0x{probe:02X}, got {val!r}).")
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
        with self._bulk_lock:
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
        with self._bulk_lock:
            pkt = bytes([0x01, addr & 0xFF, 0x00, BULK_CMD_WRITE, value & 0xFF, (value >> 8) & 0xFF])
            buf = (ctypes.c_ubyte * 6)(*pkt)
            trans = wintypes.ULONG(0)
            res = winusb.WinUsb_WritePipe(self._winusb_handle, 0x08, buf, 6, ctypes.byref(trans), None)
            return bool(res)

    def _replay_init_burst(self) -> bool:
        """
        Replay WinSpec32's cold-boot controller init verbatim from the USB
        capture (st133_init_replay.REPLAY_OPS): the 0x40 unlock handshake, the
        ~35,209-value 0x54 PTG timing-table stream (proven byte-identical
        across every captured session -> no per-acquisition state), the
        interleaved 0xA2/0x40 status reads, the 0x40 lock, and the trailing
        0x4A "host alive" walk.

        Sent exactly as the transfers appeared on the wire -- same byte-for-
        byte framing (6..78 byte chunks), and NO artificial pacing: the FX2
        NAKs when its endpoint FIFO is full, which throttles this loop to the
        rate the silicon can digest (a Python sleep loop can't hit the ~294us
        inter-packet timing on Windows anyway). The interleaved 2-byte reply
        reads also naturally rate-limit the stream.

        The two leading CTRL_OUT ops (SET_CONFIGURATION / SET_INTERFACE) are
        skipped -- WinUsb_Initialize + WinUsb_SetCurrentAlternateSetting in
        connect() already cover those. The trailing REG_RECONFIG_BURST_A (the
        last 6 ops) is dropped: it belongs to the trigger sequence, which
        _trigger_acquisition() sends.

        Aborts (returns False) on the first failed/short transfer rather than
        blasting the rest of the stream out of sync.
        """
        if not self._winusb_handle or not winusb:
            return False
        try:
            from .st133_init_replay import REPLAY_OPS
        except Exception as ex:
            logger.warning(f"ST-133 init-burst replay data unavailable: {ex}")
            return False

        ops = list(REPLAY_OPS)
        _RECONFIG_A = [(0x30, 0), (0x30, 1), (0x30, 3), (0x00, 0), (0xFE, 0), (0x3C, 1)]
        tail = [
            (o[2][1], o[2][4] | (o[2][5] << 8))
            for o in ops[-6:] if o[0] == "BULK_OUT" and len(o[2]) == 6
        ]
        if tail == _RECONFIG_A:
            ops = ops[:-6]

        # Optional coarse pacing: sleep every PACE_BATCH ops to stretch the
        # whole replay toward init_burst_target_sec wall-clock seconds. Per-op
        # sub-ms sleeps are unreliable on Windows, so we sleep in chunks.
        PACE_BATCH = 24
        pace_sleep = 0.0
        if self.init_burst_target_sec > 0:
            pace_sleep = max(0.0, self.init_burst_target_sec / max(1, len(ops))) * PACE_BATCH

        logger.info(
            f"ST-133: replaying {len(ops)} cold-boot init ops verbatim "
            f"({'unpaced' if pace_sleep == 0 else f'~{self.init_burst_target_sec:.1f}s target'})..."
        )
        t0 = time.monotonic()
        n_out = n_in = 0
        with self._bulk_lock:
            for idx, op in enumerate(ops):
                if pace_sleep and idx and idx % PACE_BATCH == 0:
                    time.sleep(pace_sleep)
                kind = op[0]
                if kind == "CTRL_OUT":
                    continue  # SET_CONFIGURATION / SET_INTERFACE handled in connect()
                if kind == "BULK_OUT":
                    ep, data = op[1], op[2]
                    buf = (ctypes.c_ubyte * len(data)).from_buffer_copy(bytearray(data))
                    trans = wintypes.ULONG(0)
                    ok = winusb.WinUsb_WritePipe(
                        self._winusb_handle, ep, buf, len(data), ctypes.byref(trans), None
                    )
                    if not ok:
                        err = kernel32.GetLastError() if kernel32 else -1
                        logger.error(
                            f"ST-133 init burst: WritePipe failed at op {idx}/{len(ops)} "
                            f"({bytes(data).hex()}), error {err} -- aborting."
                        )
                        return False
                    n_out += 1
                elif kind == "BULK_IN":
                    ep, exp = op[1], op[2]
                    rb = ctypes.create_string_buffer(exp)
                    trans = wintypes.ULONG(0)
                    ok = winusb.WinUsb_ReadPipe(
                        self._winusb_handle, ep, rb, exp, ctypes.byref(trans), None
                    )
                    if not ok or trans.value != exp:
                        logger.error(
                            f"ST-133 init burst: ReadPipe short/failed at op {idx}/{len(ops)} "
                            f"(got {trans.value}/{exp}) -- aborting; controller state now partial."
                        )
                        return False
                    n_in += 1
        logger.info(
            f"ST-133 init burst complete: {n_out} writes + {n_in} reads in {time.monotonic() - t0:.2f}s."
        )
        return True

    def _bulk_read_frame(self, expected_bytes: int) -> Optional[bytes]:
        """
        Blocking read of raw frame bytes from the pixel pipe (bulk IN 0x82).

        SUPERSEDED for acquire_frame() by the overlapped
        _begin_overlapped_read/_end_overlapped_read pair -- kept only for
        callers that already know a frame is sitting in the FIFO. The real
        WinSpec capture (USB Capture/analysis/claude_dataset,
        USBCapture-FullPowerCycle.pcapng) shows the 0x82 read is SUBMITTED
        ~47ms BEFORE the trigger write and completes exactly one exposure
        later; posting a blocking read only AFTER the trigger (what this
        method does) is why frame delivery never worked over WinUSB -- the
        data is clocked into the FX2 endpoint with no host read pending and
        is lost.
        """
        if not self._winusb_handle or not winusb:
            return None
        with self._bulk_lock:
            buf = ctypes.create_string_buffer(expected_bytes)
            trans = wintypes.ULONG(0)
            res = winusb.WinUsb_ReadPipe(self._winusb_handle, 0x82, buf, expected_bytes, ctypes.byref(trans), None)
            if res and trans.value > 0:
                return buf.raw[:trans.value]
            return None

    def _begin_overlapped_read(self, pipe_id: int, nbytes: int) -> Optional[dict]:
        """
        Post a non-blocking (overlapped) bulk IN read and return a context
        dict to reap later with _end_overlapped_read.

        This exists so acquire_frame() can ARM the pixel pipe (0x82) BEFORE
        it writes the acquisition trigger, exactly as the real WinSpec32
        session does: in every capture the 0x82 read request is submitted
        ~47ms ahead of the trigger and the single outstanding read then
        completes one full exposure later with all 1024 bytes. A blocking
        WinUsb_ReadPipe issued after the trigger (the old path) misses the
        frame entirely.

        Caller MUST pass the result to _end_overlapped_read exactly once
        (with cancel=True if it gave up waiting) so the event handle is
        closed and any still-pending transfer is cancelled.
        """
        if not self._winusb_handle or not winusb or not kernel32:
            return None
        buf = ctypes.create_string_buffer(nbytes)
        ov = OVERLAPPED()
        ov.hEvent = kernel32.CreateEventW(None, True, False, None)  # manual-reset, unsignalled
        trans = wintypes.ULONG(0)
        res = winusb.WinUsb_ReadPipe(
            self._winusb_handle, pipe_id, buf, nbytes, ctypes.byref(trans), ctypes.byref(ov)
        )
        ctx = {"buf": buf, "ov": ov, "event": ov.hEvent, "pipe": pipe_id, "done": False, "nbytes": 0}
        if res:
            # Completed synchronously (rare for a not-yet-triggered pipe).
            ctx["done"] = True
            ctx["nbytes"] = trans.value
            return ctx
        err = kernel32.GetLastError()
        if err != 997:  # not ERROR_IO_PENDING -- rejected outright
            kernel32.CloseHandle(ov.hEvent)
            logger.error(f"Overlapped read on pipe 0x{pipe_id:02X} rejected immediately: error {err}")
            return None
        return ctx

    def _end_overlapped_read(self, ctx: Optional[dict], cancel: bool = False) -> Optional[bytes]:
        """
        Reap (or cancel then reap) a read started by _begin_overlapped_read.
        Returns the bytes actually received, or None. Always closes the event
        handle. Pass cancel=True if you stopped waiting before the event was
        signalled -- otherwise the GetOverlappedResult(wait=True) below would
        block forever on a transfer that never completes.
        """
        if not ctx:
            return None
        try:
            if ctx.get("done"):
                n = ctx.get("nbytes", 0)
                return ctx["buf"].raw[:n] if n > 0 else None
            if cancel and self._device_handle and kernel32:
                kernel32.CancelIoEx(self._device_handle, ctypes.byref(ctx["ov"]))
            trans = wintypes.ULONG(0)
            getres = getattr(winusb, "WinUsb_GetOverlappedResult", None)
            if getres is not None:
                ok = getres(self._winusb_handle, ctypes.byref(ctx["ov"]), ctypes.byref(trans), True)
            else:
                ok = kernel32.GetOverlappedResult(
                    self._device_handle, ctypes.byref(ctx["ov"]), ctypes.byref(trans), True
                )
            if ok and trans.value > 0:
                return ctx["buf"].raw[:trans.value]
            return None
        except Exception as ex:
            logger.warning(f"Overlapped read reap notice: {ex}")
            return None
        finally:
            if ctx.get("event") and kernel32:
                kernel32.CloseHandle(ctx["event"])

    # ------------------------------------------------------------------
    # Attach handshake + continuous pixel reader (Path B, 2026-08-29)
    # ------------------------------------------------------------------

    def _attach_handshake(self) -> dict:
        """
        The ReadEPLDVersions protocol (decompiled: FUN_00012e9c). In the vendor
        stack this runs as user-mode IOCTLs that translate to 8-byte bulk
        frames; it is NOT done by the ST133's driver at attach (that path is
        PIXIS-only), so nothing performs it before our WinUSB session -- we do
        it here.

        1. EPLD-ready poll: write 0xBEEF -> 0xC0, read 0x42, until
           (0x42 & 0xFFF) == 0x113.
        2. Read version registers 0xC0, 0xC2, 0xC4, 0xC6, 0xC8.
        3. Write 0xDEAD -> 0xC0, read 0xCA (the decompiled code fails the whole
           init if the low byte of 0xCA comes back < 3).

        Returns a dict of what happened; best-effort, does not gate connect().
        """
        result = {"ready": False, "poll_iters": 0, "reg42": None, "versions": {}, "reg_ca": None}
        if not self._winusb_handle or not winusb:
            return result
        try:
            with self._bulk_lock:
                for i in range(400):
                    self._bulk_write_register(0xC0, 0xBEEF)
                    v = self._bulk_read_register(0x42)
                    result["reg42"] = v
                    result["poll_iters"] = i + 1
                    if v is not None and (v & 0xFFF) == 0x113:
                        result["ready"] = True
                        break

                for op in (0xC0, 0xC2, 0xC4, 0xC6, 0xC8):
                    result["versions"][op] = self._bulk_read_register(op)

                self._bulk_write_register(0xC0, 0xDEAD)
                result["reg_ca"] = self._bulk_read_register(0xCA)

            vers = {hex(k): (None if x is None else hex(x)) for k, x in result["versions"].items()}
            logger.info(
                f"ST-133 EPLD handshake: ready={result['ready']} "
                f"(0x42={result['reg42'] if result['reg42'] is None else hex(result['reg42'])} "
                f"after {result['poll_iters']} polls), versions={vers}, "
                f"0xCA={result['reg_ca'] if result['reg_ca'] is None else hex(result['reg_ca'])}"
            )
            if not result["ready"]:
                logger.warning("ST-133 EPLD never reported ready (0x42 & 0xFFF != 0x113) -- pixel pipe likely stays dead.")
        except Exception as ex:
            logger.debug(f"ST-133 EPLD handshake notice: {ex}")
        return result

    def _pixel_reader_loop(self) -> None:
        """
        Background pool of overlapped 512-byte reads on the pixel pipe (0x82),
        always pending and re-armed the instant one completes -- the WinUSB
        equivalent of the KMDF driver's continuous reader. Completed 512-byte
        chunks are concatenated; every time num_pixels*2 bytes have accumulated
        a whole frame is pushed onto _frame_q for acquire_frame() to consume.
        """
        POOL = 4
        CHUNK = 512
        expected = self.num_pixels * 2
        ctxs: List[Optional[dict]] = []
        accum = bytearray()
        try:
            for _ in range(POOL):
                ctxs.append(self._begin_overlapped_read(0x82, CHUNK))
            if not any(ctxs):
                logger.warning("ST-133 pixel reader: could not post any 0x82 reads; disabling.")
                return
            self._reader_alive.set()
            logger.info(f"ST-133 pixel reader running ({POOL}x {CHUNK}B overlapped on 0x82).")

            while not self._reader_stop.is_set():
                progressed = False
                for i, c in enumerate(ctxs):
                    if c is None:
                        ctxs[i] = self._begin_overlapped_read(0x82, CHUNK)
                        continue
                    if c.get("done") or (kernel32 and kernel32.WaitForSingleObject(c["event"], 0) == 0):
                        got = self._end_overlapped_read(c, cancel=False)
                        ctxs[i] = self._begin_overlapped_read(0x82, CHUNK)
                        progressed = True
                        if got:
                            accum.extend(got)
                            while len(accum) >= expected:
                                frame = bytes(accum[:expected])
                                del accum[:expected]
                                try:
                                    self._frame_q.put_nowait(frame)
                                except queue.Full:
                                    try:
                                        self._frame_q.get_nowait()
                                    except queue.Empty:
                                        pass
                                    try:
                                        self._frame_q.put_nowait(frame)
                                    except queue.Full:
                                        pass
                if not progressed:
                    self._reader_stop.wait(0.01)
        except Exception as ex:
            logger.warning(f"ST-133 pixel reader loop stopped: {ex}")
        finally:
            self._reader_alive.clear()
            for c in ctxs:
                if c is not None:
                    self._end_overlapped_read(c, cancel=True)

    def _start_pixel_reader(self) -> None:
        if not self.continuous_reader or not self._winusb_handle or not winusb:
            return
        if self._reader_thread and self._reader_thread.is_alive():
            return
        self._reader_stop.clear()
        self._reader_alive.clear()
        with self._frame_q.mutex:
            self._frame_q.queue.clear()
        self._reader_thread = threading.Thread(
            target=self._pixel_reader_loop, name="ST133PixelReader", daemon=True
        )
        self._reader_thread.start()

    def _stop_pixel_reader(self) -> None:
        self._reader_stop.set()
        if self._reader_thread and self._reader_thread.is_alive():
            self._reader_thread.join(timeout=2.0)
        self._reader_thread = None
        self._reader_alive.clear()

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

    def _ep0_vendor_call(self, b_request: int, w_value: int = 0) -> bool:
        """
        Send an 8-byte-zero-payload EP0 vendor control OUT transfer:
        RequestType=0x40 (OUT|VENDOR|DEVICE), wIndex=0. Used for both real
        vendor calls confirmed in this exact position in the real capture:
        bRequest=0xF2/wValue=0x0200 (REG_ARM_PREP's VR_ARM_PREP step -- the
        request flagged all the way back in the original Part-10 capture as
        "never decoded further") and bRequest=0xF0/wValue=0 (the final
        pre-trigger arm call, confirmed since Part 10).
        """
        if not self._winusb_handle or not winusb:
            return False
        pkt = WINUSB_SETUP_PACKET()
        pkt.RequestType = 0x40
        pkt.Request = b_request
        pkt.Value = w_value & 0xFFFF
        pkt.Index = 0
        pkt.Length = 8
        data = (ctypes.c_ubyte * 8)(0, 0, 0, 0, 0, 0, 0, 0)
        trans = wintypes.ULONG(0)
        res = winusb.WinUsb_ControlTransfer(self._winusb_handle, pkt, data, 8, ctypes.byref(trans), None)
        return bool(res)

    def _trigger_acquisition(self) -> None:
        """
        Replay the full "true first trigger after a power cycle" arming
        sequence, extracted from USBCapture-FullPowerCycle.pcapng (a genuine
        CCD power-off + USB disconnect, captured start to finish through
        power-on/reconnect/WinSpec32 launch/one real 1-second acquisition --
        the only pixel completion in a 33,221-packet capture, idx 31553-
        33198). See REG_ACQ_BUSY/REG_RECONFIG_BURST_A/REG_ARM_PREP/
        VR_ARM_PREP/REG_ARM_POST/REG_RECONFIG_BURST_B for full provenance of
        each piece. Order, exactly as captured:
          1. REG_RECONFIG_BURST_A  (0x30 x3, 0x00, 0xFE, 0x3C)
          2. REG_ARM_PREP          (0x14=0x0100, 0x10=4, 0x12=0, 0x14=1)
          3. VR_ARM_PREP           (EP0 vendor OUT bRequest=0xF2, wValue=0x0200)
          4. REG_ARM_POST          (0x16=0)
          5. REG_RECONFIG_BURST_B  (0x22=0, 0x24=1)
          6. REG_ACQ_BUSY x BUSY_POLL_COUNT (401 tight polls, ~45ms real time)
          7. REG_ACQ_PRETRIGGER    (one read of 0xE0)
          8. EP0 vendor OUT bRequest=0xF0 (the arm call, confirmed since Part 10)
          9. WRITE REG_ACQ_TRIGGER=1 -- the real trigger
          10. REG_ACQ_POSTTRIGGER  (one read of 0x32)

        REPLACES a shorter version derived from USBCapture-AQTime4.pcapng,
        which turned out to be a *repeat* trigger within an already-armed
        WinSpec32 session (that capture never included a true first
        connection), not the full sequence a fresh session actually needs --
        confirmed live to still fail even byte-for-byte-correct, in
        isolation and combined with every other hypothesis tried the same
        day (continuous heartbeat, immediate vs. delayed frame-read posting,
        explicit SET_INTERFACE reassertion, the large batched table writes).

        Wrapped in the bulk lock as one atomic unit (RLock, so the
        individual register helpers it calls can still take the same lock)
        so the background heartbeat thread can't interleave a write in the
        middle of this sequence -- it can only run between whole
        acquisitions.
        """
        with self._bulk_lock:
            if self.trigger_mode == "short":
                # 5-op sequence from commit 2608036 (AQTime4 repeat-trigger
                # capture). Retest vehicle for run_init_burst-primed devices.
                for _ in range(3):
                    self._bulk_read_register(REG_ACQ_BUSY)
                self._bulk_read_register(REG_ACQ_PRETRIGGER)
                self._bulk_write_register(REG_ACQ_TRIGGER, 1)
                self._bulk_read_register(REG_ACQ_POSTTRIGGER)
                return

            for addr, val in REG_RECONFIG_BURST_A:
                self._bulk_write_register(addr, val)
            for addr, val in REG_ARM_PREP:
                self._bulk_write_register(addr, val)
            self._ep0_vendor_call(VR_ARM_PREP, w_value=0x0200)
            for addr, val in REG_ARM_POST:
                self._bulk_write_register(addr, val)
            for addr, val in REG_RECONFIG_BURST_B:
                self._bulk_write_register(addr, val)
            for _ in range(BUSY_POLL_COUNT):
                self._bulk_read_register(REG_ACQ_BUSY)
            self._bulk_read_register(REG_ACQ_PRETRIGGER)
            self._ep0_vendor_call(0xF0)
            self._bulk_write_register(REG_ACQ_TRIGGER, 1)
            self._bulk_read_register(REG_ACQ_POSTTRIGGER)

    def _heartbeat_loop(self) -> None:
        """
        Continuously replay write-verify activity on 0x40/0x4A for as long
        as the connection is open -- see REG_HEARTBEAT_ECHO/WALK for
        provenance. Working hypothesis (not yet independently proven, only
        tested as a bundle): real WinSpec32 never goes quiet on the bulk
        pipe, even while just idling or waiting out an exposure, and the
        controller firmware needs that sustained activity as an ongoing
        "a live host is present" signal before it will arm frame delivery
        on trigger.

        Deliberately does NOT hold the lock between cycles -- only each
        individual register op is atomic -- so _trigger_acquisition() can
        always get in promptly rather than waiting out a long idle period.
        """
        probe_cycle = [0x10, 0x50, 0x90, 0xD0, 0x30, 0x70, 0xB0, 0xF0]
        # Matches the real 0x4A walking pattern (USBCapture-AQTime4.pcapng):
        # cycles mostly between 0x0C/0x0E, with occasional 0x0D/0x0F/0x08/0x00.
        walk_cycle = [0x0C, 0x0E, 0x0C, 0x0C, 0x0E, 0x0C, 0x0D, 0x0F, 0x08, 0x00]
        i = 0
        while not self._heartbeat_stop.is_set():
            probe = probe_cycle[i % len(probe_cycle)]
            walk = walk_cycle[i % len(walk_cycle)]
            try:
                self._bulk_write_register(REG_HEARTBEAT_ECHO, probe)
                self._bulk_read_register(REG_HEARTBEAT_ECHO)
                self._bulk_write_register(REG_HEARTBEAT_WALK, walk)
            except Exception as ex:
                logger.debug(f"Heartbeat cycle notice: {ex}")
            i += 1
            self._heartbeat_stop.wait(HEARTBEAT_INTERVAL_SEC)

    def _start_heartbeat(self) -> None:
        """Start the continuous background heartbeat thread (see _heartbeat_loop)."""
        if not self._winusb_handle or not winusb:
            return
        if self._heartbeat_thread and self._heartbeat_thread.is_alive():
            return
        self._heartbeat_stop.clear()
        self._heartbeat_thread = threading.Thread(
            target=self._heartbeat_loop, name="ST133Heartbeat", daemon=True
        )
        self._heartbeat_thread.start()
        logger.info("ST-133 background heartbeat started (continuous 0x40/0x54 activity).")

    def _stop_heartbeat(self) -> None:
        """Stop the background heartbeat thread cleanly, if running."""
        self._heartbeat_stop.set()
        if self._heartbeat_thread and self._heartbeat_thread.is_alive():
            self._heartbeat_thread.join(timeout=1.0)
        self._heartbeat_thread = None

    def disconnect(self):
        """Close communication handles cleanly."""
        self._stop_pixel_reader()
        self._stop_heartbeat()
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

        ORDER OF OPERATIONS (revised 2026-08-29 from the timestamped capture
        dataset in USB Capture/analysis/claude_dataset): the pixel-pipe read
        is ARMED FIRST, as an overlapped transfer, and only then is the
        trigger sequence written. Every real capture shows the 0x82 read
        submitted ~47ms before the trigger, with the single outstanding read
        completing exactly one exposure later carrying all 1024 bytes. The
        previous code triggered first and posted a blocking read afterwards,
        by which point the frame had already been clocked into the FX2
        endpoint with no host read pending -- lost every time.
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

        expected_bytes = self.num_pixels * 2

        # --- Path B: the continuous pixel reader is running. It already has
        #     512-byte reads pending on 0x82, so we just trigger and then pull
        #     the next assembled frame off the queue. ---
        if self._reader_alive.is_set():
            try:
                while True:
                    self._frame_q.get_nowait()  # drop stale frames -> return a post-trigger one
            except queue.Empty:
                pass

            with self._bulk_lock:
                self._trigger_acquisition()

            deadline = time.monotonic() + exposure_time_sec + 3.0
            steps = max(1, int(exposure_time_sec / 0.05))
            step = 0
            frame_bytes = None
            while time.monotonic() < deadline:
                if stop_requested and stop_requested():
                    break
                try:
                    frame_bytes = self._frame_q.get(timeout=0.05)
                    break
                except queue.Empty:
                    step += 1
                    if progress_callback:
                        progress_callback(min(0.99, step / steps))

            if frame_bytes and len(frame_bytes) >= expected_bytes:
                raw_data = np.frombuffer(frame_bytes[:expected_bytes], dtype=np.uint16)
                if progress_callback:
                    progress_callback(1.0)
                return raw_data.astype(np.int64), 1
            logger.warning("ST-133 no frame from pixel reader before deadline.")
            return np.zeros(self.num_pixels, dtype=np.int64), 0

        # --- Fallback (continuous_reader=False, or reader failed to start):
        #     arm ONE overlapped read before the trigger, wait, reap. ---
        # Hold the bulk lock across arm-read + trigger + wait: the real
        # session goes completely silent on the bus for the whole exposure
        # (no heartbeat writes between the trigger and the frame completion),
        # so the heartbeat thread must not inject anything here either.
        with self._bulk_lock:
            # 1. Arm the pixel pipe BEFORE triggering (overlapped, stays pending).
            rd = self._begin_overlapped_read(0x82, expected_bytes)
            if rd is None:
                return np.zeros(self.num_pixels, dtype=np.int64), 0

            frame_bytes = None
            try:
                # 2. Replay the captured acquisition-trigger sequence.
                self._trigger_acquisition()

                # 3. Wait for the frame, pacing progress callbacks. The frame
                #    lands ~one exposure after the trigger; allow generous slack
                #    on top before giving up and cancelling the transfer.
                deadline = time.monotonic() + exposure_time_sec + 3.0
                steps = max(1, int(exposure_time_sec / 0.05))
                step = 0
                signalled = False
                while True:
                    if stop_requested and stop_requested():
                        break
                    w = kernel32.WaitForSingleObject(rd["event"], 50) if kernel32 else 258
                    if w == 0:  # WAIT_OBJECT_0 -- frame arrived
                        signalled = True
                        break
                    if time.monotonic() > deadline:
                        logger.warning("ST-133 frame did not arrive on 0x82 before deadline; cancelling read.")
                        break
                    step += 1
                    if progress_callback:
                        progress_callback(min(1.0, step / steps))

                frame_bytes = self._end_overlapped_read(rd, cancel=not signalled)
            except Exception:
                self._end_overlapped_read(rd, cancel=True)
                raise

        if frame_bytes and len(frame_bytes) >= expected_bytes:
            raw_data = np.frombuffer(frame_bytes[:expected_bytes], dtype=np.uint16)
            if progress_callback:
                progress_callback(1.0)
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

    @staticmethod
    def _int8_c(word: Optional[int]) -> Optional[float]:
        """Low byte of a register word as two's-complement int8 -> degrees C."""
        if word is None:
            return None
        b = word & 0xFF
        c = b - 256 if b >= 128 else b
        return float(c) if TEMP_C_PLAUSIBLE_MIN <= c <= TEMP_C_PLAUSIBLE_MAX else None

    def get_temperature(self) -> Optional[dict]:
        """
        Detector temperature.

        REVISED 2026-08-30: the LIVE temperature is REG_TEMPERATURE (0x46), per
        decompiled PICM_Get_Temperature. On this unit it currently reads
        0x0000 -- the detector is warm and the cooler/temperature-sense loop is
        not running, so there is no live reading yet. REG_TEMP_SETPOINT (0x54)
        still holds the last cooler setpoint WinSpec programmed (low byte int8
        C, e.g. -98) -- that is NOT the current temperature, it never changes.

        Reported as: temperature_c from 0x46 when non-zero and plausibly
        decodable, else None with status NO_LIVE_TEMP; setpoint_c from 0x54.
        A real 0x46 slope/offset calibration is still TODO (needs a cold
        detector to pin down).
        """
        raw_temp = raw_set = None
        temp_c = setpoint_c = None
        status_str = "OFFLINE"

        if self.is_connected and self._winusb_handle:
            raw_temp = self._bulk_read_register(REG_TEMPERATURE)
            raw_set = self._bulk_read_register(REG_TEMP_SETPOINT)
            setpoint_c = self._int8_c(raw_set)
            if raw_temp:  # non-zero -> a live reading is available
                temp_c = self._int8_c(raw_temp)
                status_str = "OK" if temp_c is not None else "DECODE_IMPLAUSIBLE"
                if temp_c is not None:
                    self._last_temperature = temp_c
            else:
                status_str = "NO_LIVE_TEMP"  # 0x46 == 0: cooler/sense loop idle (warm detector)

        return {
            "temperature_c": temp_c,
            "setpoint_c": setpoint_c,
            "status": 1 if temp_c is not None else 0,
            "status_str": status_str,
            "raw_register": raw_temp,
            "raw_setpoint": raw_set,
            "is_simulated": False,
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

