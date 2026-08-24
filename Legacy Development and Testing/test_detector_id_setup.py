"""
Test Setting InGaAs Detector ID (Model 7514) on ST-133
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
    return fn_vout(h_dev, ctypes.c_ubyte(0), ctypes.c_ubyte(2), ctypes.c_ubyte(0), ctypes.c_ubyte(req), ctypes.c_ushort(val), ctypes.c_ushort(idx), c_buf, len(data))

print("1. Uploading microcode into FX2 volatile SRAM...")
vout(0xA0, 0xE600, 0, bytes([1]))
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
vout(0xA0, 0xE600, 0, bytes([0]))
time.sleep(0.2)

print("2. Configuring InGaAs Detector ID & Geometry...")
# Probe detector model IDs for OMA-V InGaAs (7514)
for det_id in [0x0001, 0x0002, 0x001B, 0x002B, 0x7514]:
    vout(0x10, det_id, 0)
    vout(0x11, 512, 0) # Width = 512
    vout(0x12, 1, 0)   # Height = 1
    vout(0x13, 3, 0)   # Gain = 3
    vout(0x14, 100, 0) # Exp = 100ms
    
    # Trigger
    vout(0x01, 100, 0)
    time.sleep(0.12)
    
    buf = (ctypes.c_ushort * 512)()
    bytes_ret = wintypes.DWORD(0)
    res = fn_bread(h_dev, 0, buf, 1024, ctypes.byref(bytes_ret))
    if bytes_ret.value > 0:
        pixels = list(buf)[:bytes_ret.value // 2]
        print(f"\n>>> DETECTOR ID 0x{det_id:04X} TRIGGERED PHYSICAL READOUT: {bytes_ret.value} BYTES! <<<")
        print(f"Counts: Min={min(pixels)}, Max={max(pixels)}, Mean={sum(pixels)/len(pixels):.1f}")
        break
    else:
        print(f"  Detector ID 0x{det_id:04X} -> 0 bytes")

usbdrvd.USBDRVD_CloseDevice(h_dev)
