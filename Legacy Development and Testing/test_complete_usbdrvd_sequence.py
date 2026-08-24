"""
Complete ST-133 Acquisition Sequence via USBDRVD.DLL
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
    print("FAILED: Could not open device.")
    exit(1)

fn_vout = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestOut")
fn_bread = getattr(usbdrvd, "USBDRVD_BulkRead")

def vout(req, val=0, idx=0, data=b""):
    c_buf = (ctypes.c_ubyte * len(data))(*data) if data else None
    return fn_vout(
        h_dev,
        ctypes.c_ubyte(0), # Dir OUT
        ctypes.c_ubyte(2), # Vendor
        ctypes.c_ubyte(0), # Device
        ctypes.c_ubyte(req),
        ctypes.c_ushort(val),
        ctypes.c_ushort(idx),
        c_buf,
        len(data)
    )

# 1. Upload PI133B.DAT into SRAM
print("1. Bootstrapping volatile SRAM...")
vout(0xA0, 0xE600, 0, bytes([1])) # Assert Reset

fw_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT"
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

vout(0xA0, 0xE600, 0, bytes([0])) # Release Reset
time.sleep(0.2)
print(f"   -> Loaded {len(records)} microcode records.")

# 2. Write EPLD Registers (Discovered Sequence)
print("2. Initializing EPLD Timing Registers (0x8D)...")
vout(0x8D, 0x0001, 0, bytes([1]))
vout(0x8D, 0x0007, 0, bytes([1]))
vout(0x8D, 0x0008, 0, bytes([8]))

# 3. Trigger 100ms Exposure
print("3. Triggering Exposure (100ms)...")
vout(0x01, 100, 0, b"")

time.sleep(0.15) # Wait for exposure duration

# 4. Read Bulk Pipes
print("4. Reading Bulk Pipes via USBDRVD_BulkRead...")
buf = (ctypes.c_ushort * 512)()
bytes_ret = wintypes.DWORD(0)

for pipe in range(4):
    res = fn_bread(h_dev, pipe, buf, 1024, ctypes.byref(bytes_ret))
    print(f"   -> Pipe {pipe} Result: {res}, Bytes Read: {bytes_ret.value}")
    if bytes_ret.value > 0:
        pixels = list(buf)[:bytes_ret.value // 2]
        print(f"\n==================================================================")
        print(f">>> PHYSICAL COUNTS READ: Min={min(pixels)}, Max={max(pixels)}, Mean={sum(pixels)/len(pixels):.1f} <<<")
        print(f"==================================================================")
        print(f"First 10 Pixels: {pixels[:10]}")
        print(f"Center Pixels:   {pixels[250:260]}")

usbdrvd.USBDRVD_CloseDevice(h_dev)
print("\nSequence test completed.")
