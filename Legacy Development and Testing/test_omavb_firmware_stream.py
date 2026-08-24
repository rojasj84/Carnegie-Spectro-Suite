"""
Test OMA-V Dedicated InGaAs Microcode (OMAVB.DAT) on ST-133
===========================================================
OMAVB.DAT is the official dedicated microcode for Princeton Instruments
OMA-V Linear InGaAs Photodiode Arrays.
"""

import ctypes
from ctypes import wintypes
import os
import time

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path = f"\\\\?\\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{guid_str}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(path)

h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"Device Handle: {h_hex}")

if not h_dev:
    print("FAILED: Could not open device path.")
    exit(1)

fn_vout = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestOut")
fn_bread = getattr(usbdrvd, "USBDRVD_BulkRead")

def vout(req, val=0, idx=0, data=b""):
    c_buf = (ctypes.c_ubyte * len(data))(*data) if data else None
    return fn_vout(
        h_dev,
        ctypes.c_ubyte(0),
        ctypes.c_ubyte(2),
        ctypes.c_ubyte(0),
        ctypes.c_ubyte(req),
        ctypes.c_ushort(val),
        ctypes.c_ushort(idx),
        c_buf,
        len(data)
    )

# 1. Put CPU in Reset
print("1. Putting 8051 in Reset (0xE600 = 1)...")
vout(0xA0, 0xE600, 0, bytes([1]))

# 2. Find and Upload OMAVB.DAT
omavb_candidates = [
    r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\omavb.dat",
    r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\OMAVB.DAT",
    r"C:\Users\LabUserR129\Desktop\WinSpec_Extracted_All\extracted_cabs\OMAVB.DAT",
    r"C:\Users\LabUserR129\Documents\Github\Horiba-HR460\Legacy Development and Testing\extracted_cabs\OMAVB.DAT"
]

omavb_path = None
for c in omavb_candidates:
    if os.path.exists(c) and os.path.getsize(c) > 1000:
        omavb_path = c
        break

if not omavb_path:
    # Search all of C:\Users\LabUserR129
    print("Searching for OMAVB.DAT on disk...")
    for root, dirs, files in os.walk(r"C:\Users\LabUserR129"):
        for f in files:
            if f.lower() == "omavb.dat":
                omavb_path = os.path.join(root, f)
                break
        if omavb_path:
            break

print(f"2. Found dedicated OMA-V InGaAs microcode at:\n   {omavb_path}")

with open(omavb_path, "rb") as f:
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

print(f"   -> Uploading {len(records)} OMA-V InGaAs BIX records into FX2 SRAM...")
for length, addr, rec_bytes in records:
    if length > 0:
        vout(0xA0, addr, 0, rec_bytes)

# 3. Release Reset
print("3. Releasing 8051 from Reset (0xE600 = 0) to execute OMA-V firmware...")
vout(0xA0, 0xE600, 0, bytes([0]))
time.sleep(0.3)

# 4. Trigger InGaAs Exposure (100ms)
print("4. Triggering OMA-V Exposure (100ms)...")
vout(0x01, 100, 0, b"")
time.sleep(0.15)

# 5. Read Bulk Pipes
print("5. Reading OMA-V InGaAs Bulk Stream...")
buf = (ctypes.c_ushort * 512)()
bytes_ret = wintypes.DWORD(0)

for pipe in range(4):
    res = fn_bread(h_dev, pipe, buf, 1024, ctypes.byref(bytes_ret))
    print(f"   -> Pipe {pipe} Result: {res}, Bytes Read: {bytes_ret.value}")
    if bytes_ret.value > 0:
        pixels = list(buf)[:bytes_ret.value // 2]
        print(f"\n==================================================================")
        print(f">>> PHYSICAL COUNTS READ FROM OMA-V: {bytes_ret.value} BYTES! <<<")
        print(f"==================================================================")
        print(f"Counts: Min={min(pixels)}, Max={max(pixels)}, Mean={sum(pixels)/len(pixels):.1f}")
        print(f"First 10 Pixels: {pixels[:10]}")
        print(f"Center Pixels:   {pixels[250:260]}")

usbdrvd.USBDRVD_CloseDevice(h_dev)
print("\nOMAVB test completed.")
