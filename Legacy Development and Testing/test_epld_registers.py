"""
Test ST-133 EPLD Register Access via Vendor Request 0x8D
"""

import ctypes
from ctypes import wintypes
import os
import time

kernel32 = ctypes.windll.kernel32

guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path = f"\\\\?\\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{guid_str}"

h = kernel32.CreateFileW(
    path,
    0x80000000 | 0x40000000,
    3,
    None,
    3,
    0x40000000,
    None
)

print(f"Kernel Handle: {h}")

class VENDOR_REQUEST(ctypes.Structure):
    _fields_ = [
        ("direction", ctypes.c_ubyte),  # 0 = OUT, 1 = IN
        ("requestType", ctypes.c_ubyte),# 2 = Vendor
        ("recepient", ctypes.c_ubyte),  # 0 = Device
        ("reserved", ctypes.c_ubyte),
        ("request", ctypes.c_ubyte),
        ("value", ctypes.c_ushort),
        ("index", ctypes.c_ushort)
    ]

IOCTL_VENDOR = 0x00222010

def write_epld(reg_addr, val):
    req = VENDOR_REQUEST(0, 2, 0, 0, 0x8D, reg_addr, 0)
    data = bytes([val & 0xFF, (val >> 8) & 0xFF])
    payload = bytes(req) + data
    in_buf = ctypes.create_string_buffer(payload, len(payload))
    bytes_ret = wintypes.DWORD(0)
    return kernel32.DeviceIoControl(h, IOCTL_VENDOR, in_buf, len(payload), None, 0, ctypes.byref(bytes_ret), None)

print("Testing EPLD register writes (0x8D)...")
for reg in range(16):
    res = write_epld(reg, 1)
    print(f"  EPLD Register 0x{reg:02X} -> res={res}")

kernel32.CloseHandle(h)
