"""
Test IOCTL_EZUSB_BULK_READ with Live Exposure Trigger
"""

import ctypes
from ctypes import wintypes
import os
import time
import struct
import numpy as np

kernel32 = ctypes.windll.kernel32

guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path = f"\\\\?\\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{guid_str}"

h = kernel32.CreateFileW(
    path,
    0x80000000 | 0x40000000,
    3,
    None,
    3,
    0x40000000, # OVERLAPPED
    None
)

print(f"Kernel Handle: {h}")

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

# 1. Trigger Exposure (100ms)
req = VENDOR_REQUEST(0, 2, 0, 0, 0x01, 100, 0)
payload = bytes(req)
in_buf = ctypes.create_string_buffer(payload, len(payload))
bytes_ret = wintypes.DWORD(0)

print("Triggering 100ms Exposure...")
kernel32.DeviceIoControl(
    h,
    0x00222010, # IOCTL_EZUSB_VENDOR_REQUEST
    in_buf,
    len(payload),
    None,
    0,
    ctypes.byref(bytes_ret),
    None
)

time.sleep(0.15) # Wait for exposure duration

# 2. Read Bulk Pipes with IOCTL_EZUSB_BULK_READ (0x00222048)
class BULK_TRANSFER_CONTROL(ctypes.Structure):
    _fields_ = [
        ("pipeNum", wintypes.ULONG)
    ]

for pipe_idx in range(8):
    btc = BULK_TRANSFER_CONTROL(pipe_idx)
    out_buf = ctypes.create_string_buffer(1024)
    bytes_ret = wintypes.DWORD(0)
    
    h_evt = kernel32.CreateEventW(None, True, False, None)
    class OVERLAPPED(ctypes.Structure):
        _fields_ = [
            ("Internal", ctypes.c_ulonglong),
            ("InternalHigh", ctypes.c_ulonglong),
            ("Offset", wintypes.DWORD),
            ("OffsetHigh", wintypes.DWORD),
            ("hEvent", wintypes.HANDLE)
        ]
    ov = OVERLAPPED()
    ov.hEvent = h_evt
    
    res = kernel32.DeviceIoControl(
        h,
        0x00222048, # IOCTL_EZUSB_BULK_READ
        ctypes.byref(btc),
        ctypes.sizeof(btc),
        out_buf,
        1024,
        ctypes.byref(bytes_ret),
        ctypes.byref(ov)
    )
    l_err = kernel32.GetLastError()
    
    if not res and l_err == 997:
        w = kernel32.WaitForSingleObject(h_evt, 200)
        if w == 0:
            kernel32.GetOverlappedResult(h, ctypes.byref(ov), ctypes.byref(bytes_ret), False)
            if bytes_ret.value > 0:
                raw = np.frombuffer(out_buf.raw[:bytes_ret.value], dtype=np.uint16)
                print(f"  >>> Pipe {pipe_idx} READ {bytes_ret.value} BYTES! Min={raw.min()}, Max={raw.max()}, Mean={raw.mean():.1f} <<<")
            else:
                print(f"  Pipe {pipe_idx} -> 0 bytes")
        else:
            kernel32.CancelIo(h)
    elif res:
        if bytes_ret.value > 0:
            raw = np.frombuffer(out_buf.raw[:bytes_ret.value], dtype=np.uint16)
            print(f"  >>> Pipe {pipe_idx} READ {bytes_ret.value} BYTES! Min={raw.min()}, Max={raw.max()}, Mean={raw.mean():.1f} <<<")
        else:
            print(f"  Pipe {pipe_idx} -> 0 bytes")
            
    kernel32.CloseHandle(h_evt)

kernel32.CloseHandle(h)
