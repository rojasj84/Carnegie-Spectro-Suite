"""
Pure Native 64-Bit ST-133 Microcode Loader & Physical Acquisition Test
======================================================================
Pure 64-bit Python:
  - Uses direct kernel32.DeviceIoControl (no 32-bit DLLs).
  - Uploads PI133B.DAT into Cypress FX2 SRAM.
  - Releases CPU from reset.
  - Sends exposure trigger.
  - Reads physical pixel buffer from USB DMA.
"""

import ctypes
from ctypes import wintypes
import os
import time
import struct
import numpy as np

kernel32 = ctypes.windll.kernel32

GENERIC_READ = 0x80000000
GENERIC_WRITE = 0x40000000
OPEN_EXISTING = 3
FILE_FLAG_OVERLAPPED = 0x40000000
INVALID_HANDLE_VALUE = -1

print("=" * 75)
print(" Native 64-Bit ST-133 Firmware Loader & Acquisition Test")
print("=" * 75)

# Find active path
import winreg
base = r"SYSTEM\CurrentControlSet\Enum\USB\VID_0BD7&PID_A010"
guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
active_path = None

with winreg.OpenKey(winreg.HKEY_LOCAL_MACHINE, base) as k:
    i = 0
    while True:
        try:
            inst = winreg.EnumKey(k, i)
            i += 1
            p = f"\\\\?\\USB#VID_0BD7&PID_A010#{inst}#{guid_str}"
            h = kernel32.CreateFileW(p, GENERIC_READ | GENERIC_WRITE, 3, None, OPEN_EXISTING, 0, None)
            if h != INVALID_HANDLE_VALUE and h != 0xFFFFFFFFFFFFFFFF:
                kernel32.CloseHandle(h)
                active_path = p
                print(f"Found active ST-133 device on instance: {inst}")
                break
        except OSError:
            break

if not active_path:
    print("FAILED: No active ST-133 USB instance found.")
    exit(1)

# 1. Open Device Handle
h = kernel32.CreateFileW(
    active_path,
    GENERIC_READ | GENERIC_WRITE,
    3,
    None,
    OPEN_EXISTING,
    FILE_FLAG_OVERLAPPED,
    None
)
print(f"1. Opened 64-Bit Kernel Handle: {h}")

# Struct for Cypress FX2 Vendor Request
class VENDOR_REQUEST(ctypes.Structure):
    _fields_ = [
        ("direction", ctypes.c_ubyte),  # 0 = OUT, 1 = IN
        ("requestType", ctypes.c_ubyte),# 2 = Vendor
        ("recepient", ctypes.c_ubyte),  # 0 = Device
        ("reserved", ctypes.c_ubyte),
        ("request", ctypes.c_ubyte),    # 0xA0
        ("value", ctypes.c_ushort),     # Address
        ("index", ctypes.c_ushort)      # 0
    ]

# IOCTL for Cypress Vendor Request in KMDF: 0x00222010
IOCTL_EZUSB_VENDOR_REQUEST = 0x00222010

def send_vendor_out(addr: int, data: bytes) -> bool:
    req = VENDOR_REQUEST(0, 2, 0, 0, 0xA0, addr, 0)
    
    # Combined buffer: Request header (8 bytes) + payload
    payload = bytes(req) + data
    in_buf = ctypes.create_string_buffer(payload, len(payload))
    bytes_ret = wintypes.DWORD(0)
    
    res = kernel32.DeviceIoControl(
        h,
        IOCTL_EZUSB_VENDOR_REQUEST,
        in_buf,
        len(payload),
        None,
        0,
        ctypes.byref(bytes_ret),
        None
    )
    return bool(res)

# 2. Put 8051 in Reset
print("2. Putting 8051 CPU in Reset (0xE600 = 1)...")
send_vendor_out(0xE600, bytes([1]))

# 3. Read and Transfer PI133B.DAT
fw_path = r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\pi133b.dat"
if not os.path.exists(fw_path):
    fw_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT"

print(f"3. Reading microcode from: {fw_path}")
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

print(f"   -> Transferring {len(records)} BIX records into FX2 volatile SRAM...")
for length, addr, rec_bytes in records:
    if length > 0:
        send_vendor_out(addr, rec_bytes)

# 4. Release CPU from Reset
print("4. Releasing 8051 CPU from Reset (0xE600 = 0) to execute firmware...")
send_vendor_out(0xE600, bytes([0]))
time.sleep(0.3)

# 5. Send Exposure Start Command (100ms)
print("\n5. Triggering Exposure (100ms)...")
req_trg = VENDOR_REQUEST(0, 2, 0, 0, 0x01, 100, 0)
trg_payload = bytes(req_trg)
in_trg = ctypes.create_string_buffer(trg_payload, len(trg_payload))
bytes_ret = wintypes.DWORD(0)

kernel32.DeviceIoControl(
    h,
    IOCTL_EZUSB_VENDOR_REQUEST,
    in_trg,
    len(trg_payload),
    None,
    0,
    ctypes.byref(bytes_ret),
    None
)

time.sleep(0.15) # Wait for exposure

# 6. Read Digitized Spectrum (1024 bytes = 512 uint16 counts)
print("6. Reading physical pixel stream from Bulk IN endpoint...")
read_buf = ctypes.create_string_buffer(1024)
bytes_read = wintypes.DWORD(0)

class OVERLAPPED(ctypes.Structure):
    _fields_ = [
        ("Internal", ctypes.c_ulonglong),
        ("InternalHigh", ctypes.c_ulonglong),
        ("Offset", wintypes.DWORD),
        ("OffsetHigh", wintypes.DWORD),
        ("hEvent", wintypes.HANDLE)
    ]
h_evt = kernel32.CreateEventW(None, True, False, None)
ov = OVERLAPPED()
ov.hEvent = h_evt

res_read = kernel32.ReadFile(h, read_buf, 1024, ctypes.byref(bytes_read), ctypes.byref(ov))
l_err = kernel32.GetLastError()

if not res_read and l_err == 997:
    w_res = kernel32.WaitForSingleObject(h_evt, 500)
    if w_res == 0:
        kernel32.GetOverlappedResult(h, ctypes.byref(ov), ctypes.byref(bytes_read), False)
        print(f"\n==================================================================")
        print(f">>> PHYSICAL COUNTS RECEIVED FROM HARDWARE: {bytes_read.value} BYTES! <<<")
        print(f"==================================================================")
        raw_pixels = np.frombuffer(read_buf.raw[:bytes_read.value], dtype=np.uint16)
        print(f"Spectrum Stats: Min={raw_pixels.min()}, Max={raw_pixels.max()}, Mean={raw_pixels.mean():.1f}")
        print(f"Center Pixels: {list(raw_pixels[250:260])}")
    else:
        kernel32.CancelIo(h)
        print("Bulk Read timed out. Camera in standby.")
elif res_read:
    print(f"\n>>> IMMEDIATE READ {bytes_read.value} BYTES! <<<")
    raw_pixels = np.frombuffer(read_buf.raw[:bytes_read.value], dtype=np.uint16)
    print(f"Spectrum Stats: Min={raw_pixels.min()}, Max={raw_pixels.max()}, Mean={raw_pixels.mean():.1f}")
else:
    print(f"ReadFile Error: {l_err}")

kernel32.CloseHandle(h_evt)
kernel32.CloseHandle(h)
print("\nTest completed.")
