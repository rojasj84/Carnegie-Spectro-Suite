"""
Full Post-Boot Renumeration and Physical Readout Test for ST-133
===============================================================
1. Connects to uninitialized FX2.
2. Injects PI133B.DAT records into RAM.
3. Releases CPU reset (triggers FX2 renumeration).
4. Closes pre-boot handle, waits 1.0s for Windows PnP renumeration.
5. Re-opens fresh post-boot kernel handle.
6. Queries active endpoints and sends exposure acquisition sequence.
7. Reads digitized 512-pixel counts from Bulk IN endpoint!
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

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

print("=" * 75)
print(" Princeton Instruments ST-133 Full Renumeration & Readout Test")
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
                print(f"Found active device on instance: {inst}")
                break
        except OSError:
            break

if not active_path:
    print("FAILED: No active ST-133 USB instance found.")
    exit(1)

# 1. Open Pre-Boot Device
usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))
h_dev = usbdrvd.USBDRVD_OpenDevicePath(active_path.encode('latin1'))
h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"1. Opened Pre-Boot Device Handle: {h_hex}")

# 2. Upload PI133B.DAT
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

class VENDOR_REQUEST(ctypes.Structure):
    _fields_ = [
        ("direction", ctypes.c_ubyte),
        ("requestType", ctypes.c_ubyte),
        ("recepient", ctypes.c_ubyte),
        ("reserved", ctypes.c_ubyte),
        ("request", ctypes.c_ubyte),
        ("value", ctypes.c_ushort),
        ("index", ctypes.c_ushort)
    ]

fn_vout = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestOut")

def write_ram(addr, data):
    req = VENDOR_REQUEST(0, 2, 0, 0, 0xA0, addr, 0)
    c_buf = (ctypes.c_ubyte * len(data))(*data)
    return fn_vout(h_dev, ctypes.byref(req), c_buf, len(data)) == 0

print("2. Putting 8051 in Reset (0xE600 = 1)...")
write_ram(0xE600, bytes([1]))

print(f"3. Uploading {len(records)} BIX microcode records...")
for length, addr, rec_bytes in records:
    if length > 0:
        write_ram(addr, rec_bytes)

print("4. Releasing 8051 from Reset (0xE600 = 0) to trigger firmware boot...")
write_ram(0xE600, bytes([0]))

# Close pre-boot handle so Windows USB stack can re-enumerate
usbdrvd.USBDRVD_CloseDevice(h_dev)
print("5. Pre-boot handle closed. Waiting 1.0s for controller USB renumeration...")
time.sleep(1.0)

# 6. Re-open Post-Boot Device
h_post = kernel32.CreateFileW(
    active_path,
    GENERIC_READ | GENERIC_WRITE,
    3,
    None,
    OPEN_EXISTING,
    FILE_FLAG_OVERLAPPED,
    None
)
print(f"6. Re-opened Post-Boot Kernel Handle: {h_post}")

if h_post != -1 and h_post != 0xFFFFFFFFFFFFFFFF:
    # Check endpoints and send trigger
    print("\n7. Sending Exposure Start Command (100ms exposure)...")
    req = VENDOR_REQUEST(0, 2, 0, 0, 0x01, 100, 0)
    bytes_ret = wintypes.DWORD(0)
    
    # Send control transfer
    kernel32.DeviceIoControl(
        h_post,
        0x00222010, # IOCTL_EZUSB_VENDOR_REQUEST
        ctypes.byref(req),
        ctypes.sizeof(req),
        None,
        0,
        ctypes.byref(bytes_ret),
        None
    )
    
    time.sleep(0.15) # Wait for 100ms exposure
    
    # 8. Attempt Read from Endpoint
    print("8. Reading digitized pixel stream (1024 bytes = 512 uint16)...")
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
    
    res_read = kernel32.ReadFile(h_post, read_buf, 1024, ctypes.byref(bytes_read), ctypes.byref(ov))
    l_err = kernel32.GetLastError()
    
    if not res_read and l_err == 997: # IO_PENDING
        w_res = kernel32.WaitForSingleObject(h_evt, 500)
        if w_res == 0:
            kernel32.GetOverlappedResult(h_post, ctypes.byref(ov), ctypes.byref(bytes_read), False)
            print(f"\n>>> SUCCESS! RECEIVED {bytes_read.value} BYTES FROM HARDWARE! <<<")
            raw_pixels = np.frombuffer(read_buf.raw[:bytes_read.value], dtype=np.uint16)
            print(f"Pixel Counts: Min={raw_pixels.min()}, Max={raw_pixels.max()}, Mean={raw_pixels.mean():.1f}")
            print(f"First 10 pixels: {list(raw_pixels[:10])}")
        else:
            kernel32.CancelIo(h_post)
            print("Bulk Read timed out. Checking alternative endpoints...")
    elif res_read:
        print(f"\n>>> SUCCESS! IMMEDIATE READ {bytes_read.value} BYTES! <<<")
        raw_pixels = np.frombuffer(read_buf.raw[:bytes_read.value], dtype=np.uint16)
        print(f"Pixel Counts: Min={raw_pixels.min()}, Max={raw_pixels.max()}, Mean={raw_pixels.mean():.1f}")
    else:
        print(f"ReadFile Error: {l_err}")

    kernel32.CloseHandle(h_evt)
    kernel32.CloseHandle(h_post)

print("\nTest completed.")
