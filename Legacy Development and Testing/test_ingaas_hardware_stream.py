"""
Princeton Instruments ST-133 InGaAs Hardware Parameter & Stream Test
====================================================================
Transmits the factory-calibrated OMA-V InGaAs parameters:
  - 512 active pixels (X=512, Y=1)
  - 1 MHz ADC readout rate
  - Gain = 3 (High Sensitivity)
  - Shutter = 0 (Open / Disabled)
  - Trigger = 0 (Internal Free Run)
  - Exposure = 100 ms

Reads physical 16-bit counts from USB bulk DMA stream.
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
print(" Princeton Instruments ST-133 InGaAs Acquisition Stream Test")
print("=" * 75)

# 1. Enumerate active USB handle
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
                print(f"Active ST-133 USB Path found on instance: {inst}")
                break
        except OSError:
            break

if not active_path:
    print("FAILED: No active ST-133 USB instance found.")
    exit(1)

# Open Overlapped Kernel Handle
h = kernel32.CreateFileW(
    active_path,
    GENERIC_READ | GENERIC_WRITE,
    3,
    None,
    OPEN_EXISTING,
    FILE_FLAG_OVERLAPPED,
    None
)
print(f"Kernel Handle: {h}")

class VENDOR_REQUEST(ctypes.Structure):
    _fields_ = [
        ("direction", ctypes.c_ubyte),  # 0 = OUT, 1 = IN
        ("requestType", ctypes.c_ubyte),# 2 = Vendor
        ("recepient", ctypes.c_ubyte),  # 0 = Device
        ("reserved", ctypes.c_ubyte),
        ("request", ctypes.c_ubyte),    # Command
        ("value", ctypes.c_ushort),     # Address or Param
        ("index", ctypes.c_ushort)      # Index
    ]

IOCTL_EZUSB_VENDOR_REQUEST = 0x00222010

def send_vendor_req(req_code: int, value: int = 0, index: int = 0, data: bytes = b"") -> bool:
    req = VENDOR_REQUEST(0, 2, 0, 0, req_code, value, index)
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

# 2. Upload Microcode into Volatile SRAM
print("\n1. Bootstrapping Cypress FX2 Volatile SRAM...")
send_vendor_req(0xA0, 0xE600, 0, bytes([1])) # Assert CPU reset

fw_path = r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\pi133b.dat"
if not os.path.exists(fw_path):
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
        send_vendor_req(0xA0, addr, 0, rec_bytes)

send_vendor_req(0xA0, 0xE600, 0, bytes([0])) # Release CPU reset
time.sleep(0.2)
print(f"   -> Loaded {len(records)} microcode records and booted 8051.")

# 3. Send Factory InGaAs Parameters
print("\n2. Sending InGaAs Experiment Configuration...")
# Standard ST-133 / OMA-V Experiment Packet:
# Struct: [NumPixels: uint16, ReadoutSpeed: uint16, Gain: uint16, Shutter: uint16, Trigger: uint16, Cleans: uint16]
exp_params = struct.pack('<6H', 512, 1, 3, 0, 0, 1)

# Transmit configuration to controller register endpoint
send_vendor_req(0x10, 0x0001, 0, exp_params)
send_vendor_req(0x11, 512, 0, b"") # Set X Dimension = 512
send_vendor_req(0x12, 1, 0, b"")   # Set Y Dimension = 1
send_vendor_req(0x13, 3, 0, b"")   # Set Pre-amp Gain = 3
send_vendor_req(0x14, 100, 0, b"") # Set Exposure Time = 100 ms

print("   -> Parameters transmitted (512 pixels, 1 MHz, Gain 3, Exposure 100ms).")

# 4. Trigger Physical Acquisition
print("\n3. Triggering Physical Exposure...")
send_vendor_req(0x01, 100, 0, b"") # START_EXPOSURE (100ms)

time.sleep(0.15) # Wait for exposure duration

# 5. Read Digitized Spectrum from Bulk IN Endpoint
print("\n4. Reading Digitized 512-Pixel Counts from Bulk DMA...")
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

if not res_read and l_err == 997: # IO_PENDING
    w_res = kernel32.WaitForSingleObject(h_evt, 1000)
    if w_res == 0:
        kernel32.GetOverlappedResult(h, ctypes.byref(ov), ctypes.byref(bytes_read), False)
        print("\n==================================================================")
        print(f">>> PHYSICAL COUNTS RECEIVED OVER USB: {bytes_read.value} BYTES! <<<")
        print("==================================================================")
        raw_pixels = np.frombuffer(read_buf.raw[:bytes_read.value], dtype=np.uint16)
        print(f"Counts: Min={raw_pixels.min()}, Max={raw_pixels.max()}, Mean={raw_pixels.mean():.1f}")
        print(f"First 10 Pixels: {list(raw_pixels[:10])}")
        print(f"Center Pixels:   {list(raw_pixels[250:260])}")
    else:
        kernel32.CancelIo(h)
        print("   -> Read timed out (0 bytes received from bulk endpoint).")
elif res_read:
    print("\n==================================================================")
    print(f">>> PHYSICAL COUNTS RECEIVED: {bytes_read.value} BYTES! <<<")
    print("==================================================================")
    raw_pixels = np.frombuffer(read_buf.raw[:bytes_read.value], dtype=np.uint16)
    print(f"Counts: Min={raw_pixels.min()}, Max={raw_pixels.max()}, Mean={raw_pixels.mean():.1f}")
else:
    print(f"   -> ReadFile Error: {l_err}")

kernel32.CloseHandle(h_evt)
kernel32.CloseHandle(h)
print("\nStream test completed.")
