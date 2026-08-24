"""
Query Live CCD Temperature from Princeton Instruments ST-133 Controller.
========================================================================
Probes Vendor Control IN requests on the open kernel USB handle
to retrieve the real sensor temperature reading from the ADC / RTD.
"""

import ctypes
from ctypes import wintypes
import os
import struct

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

print("=" * 70)
print(" Live InGaAs Temperature Query (ST-133 Hardware)")
print("=" * 70)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)

h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"Kernel Device Handle: {h_hex}")

if not h_dev:
    print("FAILED: Could not open USB device.")
    exit(1)

class VENDOR_REQUEST(ctypes.Structure):
    _fields_ = [
        ("direction", ctypes.c_ubyte),  # 1 = IN (device to host)
        ("requestType", ctypes.c_ubyte),# 2 = Vendor
        ("recepient", ctypes.c_ubyte),  # 0 = Device
        ("reserved", ctypes.c_ubyte),
        ("request", ctypes.c_ubyte),    # Command
        ("value", ctypes.c_ushort),     # Param
        ("index", ctypes.c_ushort)      # 0
    ]

fn_vin = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestIn", None)

if fn_vin:
    print("\nProbing ST-133 Vendor Control IN commands for live temperature / status...")
    
    # Test standard ST-133 vendor read commands
    commands = [
        (0x80, "GET_STATUS"),
        (0x81, "GET_VERSION"),
        (0x82, "GET_TEMP_RAW"),
        (0x83, "GET_TEMP_CALIB"),
        (0x84, "GET_LOCK_STATUS"),
        (0x8A, "READ_ADC_TEMP"),
        (0x8B, "READ_NVRAM_TEMP"),
        (0x8D, "READ_EPLD"),
        (0x90, "GET_CONTROLLER_INFO"),
        (0x91, "GET_DETECTOR_PARAMS"),
        (0x92, "GET_TEMP_STATUS"),
    ]

    for req_code, name in commands:
        req = VENDOR_REQUEST()
        req.direction = 1 # IN
        req.requestType = 2 # Vendor
        req.recepient = 0 # Device
        req.reserved = 0
        req.request = req_code
        req.value = 0
        req.index = 0

        buf = (ctypes.c_ubyte * 64)()
        
        try:
            res = fn_vin(h_dev, ctypes.byref(req), buf, len(buf))
            raw_bytes = bytes(buf)
            
            # Print non-zero responses
            if any(b != 0 for b in raw_bytes[:16]):
                hex_str = raw_bytes[:16].hex()
                # Try decoding as 16-bit integer (temperature * 10 or * 100)
                int16_vals = struct.unpack('<8h', raw_bytes[:16])
                print(f"  [REPLIED] {name} (0x{req_code:02X}) -> Hex: {hex_str}, Int16s: {int16_vals}")
            else:
                print(f"  [ACK]     {name} (0x{req_code:02X}) -> res={res} (empty buffer)")
        except Exception as ex:
            print(f"  [ERR]     {name} (0x{req_code:02X}) -> {ex}")

usbdrvd.USBDRVD_CloseDevice(h_dev)
print("\nHandle closed cleanly.")
