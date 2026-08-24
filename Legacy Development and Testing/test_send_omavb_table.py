"""
Send OMA-V InGaAs Timing Table (omavb.dat) to ST-133 Controller
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

# 1. Boot Base PI133B.DAT
print("1. Loading Base ST-133 Microcode (PI133B.DAT)...")
vout(0xA0, 0xE600, 0, bytes([1]))
fw_path = r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\pi133b.dat"
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

for length, addr, rec_bytes in records:
    if length > 0:
        vout(0xA0, addr, 0, rec_bytes)
vout(0xA0, 0xE600, 0, bytes([0]))
time.sleep(0.3)

# 2. Read 250-byte OMAVB.DAT Timing Table
oma_path = r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\omavb.dat"
with open(oma_path, "rb") as f:
    oma_table = f.read()

print(f"2. Transmitting 250-byte OMA-V InGaAs Timing Table to controller...")

# Try sending timing table via Vendor Request 0x8D (Write EPLD Table) and 0x10 (Config Table)
for req_code in [0x8D, 0x10, 0x05, 0x06, 0x07, 0x08]:
    res = vout(req_code, 0, 0, oma_table)
    print(f"  Vendor Request 0x{req_code:02X} -> Result: {res}")

# 3. Trigger 100ms Exposure
print("\n3. Triggering InGaAs Exposure (100ms)...")
vout(0x01, 100, 0, b"")
time.sleep(0.15)

# 4. Read Bulk Pipes
print("4. Reading Bulk Pipes for Physical Digitized Photons...")
buf = (ctypes.c_ushort * 512)()
bytes_ret = wintypes.DWORD(0)

for pipe in range(4):
    res = fn_bread(h_dev, pipe, buf, 1024, ctypes.byref(bytes_ret))
    print(f"  Pipe {pipe} -> Result: {res}, Bytes Read: {bytes_ret.value}")
    if bytes_ret.value > 0:
        pixels = list(buf)[:bytes_ret.value // 2]
        print(f"\n==================================================================")
        print(f">>> PHYSICAL COUNTS READ FROM INGAAS SENSOR: {bytes_ret.value} BYTES! <<<")
        print("==================================================================")
        print(f"Counts: Min={min(pixels)}, Max={max(pixels)}, Mean={sum(pixels)/len(pixels):.1f}")
        print(f"First 10 Pixels: {pixels[:10]}")
        print(f"Center Pixels:   {pixels[250:260]}")

usbdrvd.USBDRVD_CloseDevice(h_dev)
