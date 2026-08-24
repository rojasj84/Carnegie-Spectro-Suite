"""
Test Sending Command Packets to ST-133 via Bulk OUT (Pipe 1)
============================================================
Tests sending binary command packets over Bulk OUT (Endpoint 1)
and reading digitized data from Bulk IN (Endpoint 2 / Pipe 0).
"""

import ctypes
from ctypes import wintypes
import os
import time
import struct

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path = f"\\\\?\\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{guid_str}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(path)

fn_vout = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestOut")
fn_bread = getattr(usbdrvd, "USBDRVD_BulkRead")
fn_bwrite = getattr(usbdrvd, "USBDRVD_BulkWrite")

def vout(req, val=0, idx=0, data=b""):
    c_buf = (ctypes.c_ubyte * len(data))(*data) if data else None
    return fn_vout(h_dev, ctypes.c_ubyte(0), ctypes.c_ubyte(2), ctypes.c_ubyte(0), ctypes.c_ubyte(req), ctypes.c_ushort(val), ctypes.c_ushort(idx), c_buf, len(data))

# 1. Upload Microcode
print("1. Uploading microcode into FX2 volatile SRAM...")
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

# 2. Test Sending Bulk OUT Command Packets
print("\n2. Testing Bulk OUT Command Packets on Pipe 0, 1, 2, 3...")
# Princeton Instruments 64-byte command packet format:
# Byte 0: Magic Header (0x55 or 0xAA or 0x01)
# Byte 1: Opcode (0x01 = Start, 0x02 = Stop, 0x10 = Setup)
# Byte 2-3: Exposure time (100 ms = 0x0064)
# Byte 4-5: Width (512 = 0x0200)
# Byte 6-7: Height (1 = 0x0001)
cmd_pkt = bytearray(64)
cmd_pkt[0] = 0x55
cmd_pkt[1] = 0x01 # Start
cmd_pkt[2] = 100 & 0xFF
cmd_pkt[3] = (100 >> 8) & 0xFF
cmd_pkt[4] = 512 & 0xFF
cmd_pkt[5] = (512 >> 8) & 0xFF
cmd_pkt[6] = 1

bytes_written = wintypes.DWORD(0)
for out_pipe in [0, 1, 2, 3]:
    c_buf = (ctypes.c_ubyte * 64)(*cmd_pkt)
    res_w = fn_bwrite(h_dev, out_pipe, c_buf, 64, ctypes.byref(bytes_written))
    print(f"  USBDRVD_BulkWrite(pipe={out_pipe}) -> Result: {res_w}, Bytes Written: {bytes_written.value}")

time.sleep(0.15)

# 3. Read Bulk IN
print("\n3. Reading Bulk IN Data...")
read_buf = (ctypes.c_ushort * 512)()
bytes_read = wintypes.DWORD(0)

for in_pipe in [0, 1, 2, 3]:
    res_r = fn_bread(h_dev, in_pipe, read_buf, 1024, ctypes.byref(bytes_read))
    print(f"  USBDRVD_BulkRead(pipe={in_pipe}) -> Result: {res_r}, Bytes Read: {bytes_read.value}")
    if bytes_read.value > 0:
        pixels = list(read_buf)[:bytes_read.value // 2]
        print(f"\n==================================================================")
        print(f">>> PHYSICAL COUNTS READ FROM HARDWARE: {bytes_read.value} BYTES! <<<")
        print(f"==================================================================")
        print(f"Counts: Min={min(pixels)}, Max={max(pixels)}, Mean={sum(pixels)/len(pixels):.1f}")
        print(f"First 10 Pixels: {pixels[:10]}")
        print(f"Center Pixels:   {pixels[250:260]}")

usbdrvd.USBDRVD_CloseDevice(h_dev)
