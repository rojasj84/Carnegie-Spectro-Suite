"""
Test 3-Command FPGA Readout Clock Initiation on ST-133
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

IOCTL_VENDOR = 0x00222010

def send_cmd(cmd_code, val=0, idx=0, data=b""):
    req = VENDOR_REQUEST(0, 2, 0, 0, cmd_code, val, idx)
    payload = bytes(req) + data
    in_buf = ctypes.create_string_buffer(payload, len(payload))
    bytes_ret = wintypes.DWORD(0)
    return kernel32.DeviceIoControl(
        h,
        IOCTL_VENDOR,
        in_buf,
        len(payload),
        None,
        0,
        ctypes.byref(bytes_ret),
        None
    )

print("1. Initializing FPGA Readout Registers...")
# 1. Select InGaAs 512 ROI (0x03)
send_cmd(0x03, 512, 0)
# 2. Set Readout Speed = 1 MHz (0x04)
send_cmd(0x04, 1, 0)
# 3. Enable ADC Clock & FIFO DMA (0x05)
send_cmd(0x05, 1, 0)
# 4. Set Pre-amp Gain = 3 (0x06)
send_cmd(0x06, 3, 0)

print("2. Starting Physical Exposure (100ms)...")
send_cmd(0x01, 100, 0) # START_EXPOSURE

time.sleep(0.15) # Wait for exposure

print("3. Reading Bulk IN Pipe via IOCTL_EZUSB_BULK_READ...")
class BULK_TRANSFER_CONTROL(ctypes.Structure):
    _fields_ = [
        ("pipeNum", wintypes.ULONG)
    ]

for pipe_idx in [0, 1, 2]:
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
        w = kernel32.WaitForSingleObject(h_evt, 300)
        if w == 0:
            kernel32.GetOverlappedResult(h, ctypes.byref(ov), ctypes.byref(bytes_ret), False)
            if bytes_ret.value > 0:
                raw = np.frombuffer(out_buf.raw[:bytes_ret.value], dtype=np.uint16)
                print(f"\n>>> Pipe {pipe_idx} READ {bytes_ret.value} BYTES! Min={raw.min()}, Max={raw.max()}, Mean={raw.mean():.1f} <<<")
                print(f"Center Pixels: {list(raw[250:260])}")
            else:
                print(f"Pipe {pipe_idx} -> 0 bytes")
        else:
            kernel32.CancelIo(h)
    elif res:
        if bytes_ret.value > 0:
            raw = np.frombuffer(out_buf.raw[:bytes_ret.value], dtype=np.uint16)
            print(f"\n>>> Pipe {pipe_idx} READ {bytes_ret.value} BYTES! Min={raw.min()}, Max={raw.max()}, Mean={raw.mean():.1f} <<<")
        else:
            print(f"Pipe {pipe_idx} -> 0 bytes")
            
    kernel32.CloseHandle(h_evt)

kernel32.CloseHandle(h)
