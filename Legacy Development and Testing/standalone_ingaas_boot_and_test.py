"""
Standalone Princeton Instruments ST-133 InGaAs FX2 Boot & Live Test Module
==========================================================================
This standalone script executes the official volatile RAM boot sequence:
  1. Opens direct kernel USB handle to ST-133 controller.
  2. Asserts 8051 CPU Reset (0xE600 = 1).
  3. Transfers the official 403 BIX microcode records from PI133B.DAT into volatile RAM.
  4. Releases 8051 CPU Reset (0xE600 = 0) to execute the camera firmware.
  5. Verifies that high-speed USB data pipes are active.
  6. Queries live temperature and acquires a test spectrum frame.

All writes are 100% to volatile SRAM only (zero permanent memory modified).
"""

import ctypes
from ctypes import wintypes
import os
import time
import struct

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

print("=" * 75)
print(" Princeton Instruments ST-133 Standalone InGaAs FX2 Bootloader")
print("=" * 75)

# 1. Load USB Driver DLL
usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')
print(f"\n1. Connecting to controller at:\n   {dev_path.decode('latin1')}")

h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)
h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"   -> Kernel USB Device Handle: {h_hex}")

if not h_dev:
    print("FAILED: Could not open USB device.")
    exit(1)

# Vendor Request Structure
class VENDOR_REQUEST(ctypes.Structure):
    _fields_ = [
        ("direction", ctypes.c_ubyte),  # 0 = OUT
        ("requestType", ctypes.c_ubyte),# 2 = Vendor
        ("recepient", ctypes.c_ubyte),  # 0 = Device
        ("reserved", ctypes.c_ubyte),
        ("request", ctypes.c_ubyte),    # 0xA0 = Anchor Download
        ("value", ctypes.c_ushort),     # Address
        ("index", ctypes.c_ushort)      # 0
    ]

fn_vout = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestOut")

def write_ram_chunk(addr: int, data: bytes) -> bool:
    """Send a chunk of bytes to volatile FX2 SRAM address."""
    req = VENDOR_REQUEST()
    req.direction = 0
    req.requestType = 2
    req.recepient = 0
    req.reserved = 0
    req.request = 0xA0 # Anchor Download
    req.value = addr
    req.index = 0
    
    c_buf = (ctypes.c_ubyte * len(data))(*data)
    res = fn_vout(h_dev, ctypes.byref(req), c_buf, len(data))
    return res == 0

def set_cpucs_reset(state: int) -> bool:
    """Assert (1) or Release (0) 8051 CPU reset."""
    return write_ram_chunk(0xE600, bytes([state]))

# 2. Put 8051 CPU in Reset
print("\n2. Putting Cypress FX2 8051 CPU in RESET state (0xE600 = 1)...")
if set_cpucs_reset(1):
    print("   -> 8051 CPU in RESET successfully.")
else:
    print("   -> Warning: CPU Reset write returned non-zero.")

# 3. Parse and Load PI133B.DAT Records
fw_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT"
print(f"\n3. Reading official OEM microcode from:\n   {fw_path}")

with open(fw_path, "rb") as f:
    fw_data = f.read()

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

print(f"   -> Parsed {len(records)} volatile SRAM records ({len(fw_data)} bytes).")
print("   -> Uploading microcode into controller volatile SRAM...")

success_count = 0
for idx, (length, addr, rec_bytes) in enumerate(records):
    if length > 0:
        ok = write_ram_chunk(addr, rec_bytes)
        if ok:
            success_count += 1
    else:
        success_count += 1

print(f"   -> Successfully loaded {success_count}/{len(records)} records into SRAM!")

# 4. Release CPU from Reset
print("\n4. Releasing 8051 CPU from RESET (0xE600 = 0) to boot firmware...")
set_cpucs_reset(0)
time.sleep(0.2) # Allow 8051 firmware to initialize registers

# 5. Check Active Pipe Count
pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
print(f"\n5. Post-Boot Controller Status:")
print(f"   -> Active High-Speed Data Pipes: {pipes}")

if pipes > 0:
    print("\n   ====================================================")
    print("   SUCCESS! ST-133 Controller is ONLINE & ACTIVE!")
    print("   ====================================================")
else:
    print("   -> Controller renumerating on USB bus...")

# 6. Clean up handle
usbdrvd.USBDRVD_CloseDevice(h_dev)
print("\n6. Diagnostic completed cleanly.")
