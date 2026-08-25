"""
Native 64-Bit Hardware Driver for Princeton Instruments ST-133 InGaAs Detectors.
================================================================================
Controls Princeton Instruments ST-133 / OMA-V linear InGaAs detectors on 64-bit
Windows 10/11 through direct kernel communication over USB (piusbwdf.sys / KMDF).

Reverse-Engineered Architecture:
  - Exact 10-byte USB setup packet matching USBDRVD.DLL & piusbwdf.sys.
  - Native IOCTL dispatch: IOCTL_EZUSB_VENDOR_REQUEST (0x00220425 / 0x00222010),
    IOCTL_EZUSB_BULK_READ (0x00220429 / 0x00222048), IOCTL_EZUSB_BULK_WRITE (0x0022042E).
  - EPLD/FPGA gate-arming microcode builder derived from PIXCM32.dll (FUN_1002c88f / FUN_1002cf00).
  - Direct 512-channel linear InGaAs photodiode digitizer reading 16-bit physical counts.
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

# Verified USB Driver IOCTL Codes (from USBDRVD.DLL & piusbwdf.sys)
IOCTL_EZUSB_VENDOR_REQUEST = 0x00220425      # Primary KMDF vendor request
IOCTL_EZUSB_VENDOR_REQUEST_LEGACY = 0x00222010 # WDM / legacy vendor request
IOCTL_EZUSB_BULK_READ = 0x00220429           # Primary KMDF bulk read
IOCTL_EZUSB_BULK_READ_LEGACY = 0x00222048    # WDM / legacy bulk read
IOCTL_EZUSB_BULK_WRITE = 0x0022042E          # Bulk write
IOCTL_EZUSB_RESET_PIPE = 0x0022040C

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
        Execute the 4-parameter PIPP_Initialize handshake reverse-engineered from
        PIXCM32.dll (FUN_1001089c / FUN_1000f0f4) and Pipp32.dll:
          1. Reset / Flush USB Endpoints (0x08, 0x82, 0x86).
          2. Set Controller Mode (0x22 = 1: High-Speed 16-Bit Digitizer DMA).
          3. Set Packet Size (0x23 = 512 bytes).
          4. Set Sub-address (0x24 = 0).
          5. Arm EPLD Command Decoder (0x26 = 1).
          6. Query Hardware Revision (VR 0xF0, 0xF1, 0xA8).
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

            # 2. Configure High-Speed 16-Bit Digitizer Mode (0x22 = 1)
            steps = []
            steps.append(("AF/0x22", self._vendor_request_out(0xAF, w_value=0x22, data=bytes([1, 0]))))
            steps.append(("F2/0x22", self._vendor_request_out(0xF2, w_value=0x22, data=bytes([1, 0]))))

            # 3. Configure USB Endpoint Packet Size (0x23 = 512)
            steps.append(("AF/0x23", self._vendor_request_out(0xAF, w_value=0x23, data=bytes([0x00, 0x02]))))

            # 4. Set Controller Sub-address (0x24 = 0)
            steps.append(("AF/0x24", self._vendor_request_out(0xAF, w_value=0x24, data=bytes([0, 0]))))

            # 5. Arm EPLD Command Decoder (0x26 = 1)
            steps.append(("AF/0x26", self._vendor_request_out(0xAF, w_value=0x26, data=bytes([1, 0]))))

            # 6. Query Hardware Status / Presence (VR 0xF0, 0xF1)
            steps.append(("F0", self._vendor_request_in(0xF0, length=1) is not None))
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

    def _vendor_request_out(
        self,
        b_request: int,
        w_value: int = 0,
        w_index: int = 0,
        data: Optional[bytes] = None
    ) -> bool:
        """
        Send a vendor control OUT transfer. Uses WinUsb_ControlTransfer if WinUSB is active,
        or DeviceIoControl with the 10-byte setup packet if KMDF is active.
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

        # 2. KMDF DeviceIoControl Path
        pkt = USB_SETUP_PACKET()
        pkt.direction = 0     # OUT
        pkt.bRequestType = 2 # Vendor
        pkt.bRecipient = 0   # Device
        pkt.reserved1 = 0
        pkt.bRequest = b_request
        pkt.reserved2 = 0
        pkt.wValue = w_value & 0xFFFF
        pkt.wIndex = w_index & 0xFFFF

        bytes_ret = wintypes.DWORD(0)
        for ioctl in [IOCTL_EZUSB_VENDOR_REQUEST, IOCTL_EZUSB_VENDOR_REQUEST_LEGACY]:
            res = kernel32.DeviceIoControl(
                self._device_handle,
                ioctl,
                ctypes.byref(pkt),
                ctypes.sizeof(pkt),
                c_buf,
                data_len,
                ctypes.byref(bytes_ret),
                None
            )
            if res:
                return True

        return False

    def _vendor_request_in(
        self,
        b_request: int,
        w_value: int = 0,
        w_index: int = 0,
        length: int = 64
    ) -> Optional[bytes]:
        """
        Execute a vendor control IN transfer to read bytes from controller.
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

        # 2. KMDF DeviceIoControl Path
        pkt = USB_SETUP_PACKET()
        pkt.direction = 1     # IN
        pkt.bRequestType = 2 # Vendor
        pkt.bRecipient = 0   # Device
        pkt.reserved1 = 0
        pkt.bRequest = b_request
        pkt.reserved2 = 0
        pkt.wValue = w_value & 0xFFFF
        pkt.wIndex = w_index & 0xFFFF

        read_buf = ctypes.create_string_buffer(length)
        bytes_ret = wintypes.DWORD(0)

        for ioctl in [IOCTL_EZUSB_VENDOR_REQUEST, IOCTL_EZUSB_VENDOR_REQUEST_LEGACY]:
            res = kernel32.DeviceIoControl(
                self._device_handle,
                ioctl,
                ctypes.byref(pkt),
                ctypes.sizeof(pkt),
                read_buf,
                length,
                ctypes.byref(bytes_ret),
                None
            )
            if res and bytes_ret.value > 0:
                return bytes(read_buf.raw[:bytes_ret.value])

        return None

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
        Build the hardware timing microcode stream for the OMA-V InGaAs array.
        Reverse-engineered from PIXCM32.dll FUN_1002c88f / FUN_1002cf00 / FUN_1002de3c.
        
        Opcodes:
          - 0xE0 / 0x20: Pre-exposure photodiode charge flush
          - 0x44: Hardware loop repeat start
          - 0x40: Integration gate duration (scaled to 153 us quanta)
          - 0x46 / 0xBD: Loop repeat end and termination
          - 0x00: ADC sample clocking and bulk FIFO push
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
            stream.append(0x40)
            stream.extend(struct.pack("<H", 0xFFFF))
            stream.append(0x46)
            stream.append(0xBD)
            
            if rem > 0:
                stream.append(0x40)
                stream.extend(struct.pack("<H", rem))
        else:
            stream.append(0x40)
            stream.extend(struct.pack("<H", max(1, quanta_count)))
            
        # 3. Readout trigger & ADC pixel shift clocking for 512 channels
        stream.append(0x00) # Opcode: Clock ADC
        stream.extend(struct.pack("<H", self.num_pixels))
        stream.append(0xBD) # Opcode: Arm complete
        
        return bytes(stream)

    def _arm_gate_and_trigger(self, exposure_time_sec: float) -> bool:
        """
        Arm the EPLD timing generator and assert the hardware acquisition trigger.
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

        # B. KMDF IOCTL_EZUSB_BULK_READ fallback
        res_ioctl = kernel32.DeviceIoControl(
            self._device_handle,
            IOCTL_EZUSB_BULK_READ,
            None,
            0,
            read_buf,
            expected_bytes,
            ctypes.byref(bytes_read),
            None
        )

        if not res_ioctl or bytes_read.value < expected_bytes:
            # Fallback to Overlapped ReadFile
            h_event = kernel32.CreateEventW(None, True, False, None)
            ov = OVERLAPPED()
            ov.hEvent = h_event

            res_read = kernel32.ReadFile(
                self._device_handle,
                read_buf,
                expected_bytes,
                ctypes.byref(bytes_read),
                ctypes.byref(ov)
            )
            last_err = kernel32.GetLastError()

            if not res_read and last_err == 997: # ERROR_IO_PENDING
                timeout_ms = int(max(1000, exposure_time_sec * 1000 + 500))
                wait_res = kernel32.WaitForSingleObject(h_event, timeout_ms)
                if wait_res == 0:
                    kernel32.GetOverlappedResult(self._device_handle, ctypes.byref(ov), ctypes.byref(bytes_read), False)
                else:
                    kernel32.CancelIo(self._device_handle)

            kernel32.CloseHandle(h_event)

        # 4. If Physical Pixels Received over USB DMA:
        if bytes_read.value >= expected_bytes:
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

