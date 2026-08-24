import ctypes
from ctypes import wintypes
import os
import time

kernel32 = ctypes.windll.kernel32

base_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
GENERIC_READ = 0x80000000
GENERIC_WRITE = 0x40000000
OPEN_EXISTING = 3
FILE_FLAG_OVERLAPPED = 0x40000000

print("=" * 70)
print(" Probing KMDF USB Named Pipes (\\PIPE00 .. \\PIPE04)")
print("=" * 70)

for pipe_name in ["", r"\PIPE00", r"\PIPE01", r"\PIPE02", r"\PIPE03", r"\PIPE04", r"\PIPE06", r"\PIPE82"]:
    full_path = base_path + pipe_name
    h = kernel32.CreateFileW(
        full_path,
        GENERIC_READ | GENERIC_WRITE,
        3,
        None,
        OPEN_EXISTING,
        FILE_FLAG_OVERLAPPED,
        None
    )
    err = kernel32.GetLastError()
    if h != -1 and h != 0xFFFFFFFFFFFFFFFF:
        print(f"  SUCCESS! Opened {pipe_name or '[ROOT DEVICE]'} -> Handle: {h}")
        
        # Test reading 1024 bytes from this pipe
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
        
        buf = ctypes.create_string_buffer(1024)
        bytes_read = wintypes.DWORD(0)
        res = kernel32.ReadFile(h, buf, 1024, ctypes.byref(bytes_read), ctypes.byref(ov))
        l_err = kernel32.GetLastError()
        
        if not res and l_err == 997:
            w_res = kernel32.WaitForSingleObject(h_evt, 200)
            if w_res == 0:
                kernel32.GetOverlappedResult(h, ctypes.byref(ov), ctypes.byref(bytes_read), False)
                print(f"    >>> RECEIVED {bytes_read.value} BYTES! <<<")
                import numpy as np
                data = np.frombuffer(buf.raw[:bytes_read.value], dtype=np.uint16)
                print(f"    Data min: {data.min()}, max: {data.max()}, mean: {data.mean():.1f}")
            else:
                kernel32.CancelIo(h)
                print("    (Read timed out)")
        elif res:
            print(f"    >>> IMMEDIATE READ {bytes_read.value} BYTES! <<<")
        else:
            print(f"    ReadFile returned error: {l_err}")
            
        kernel32.CloseHandle(h_evt)
        kernel32.CloseHandle(h)
    else:
        print(f"  Failed {pipe_name}: Error {err}")
