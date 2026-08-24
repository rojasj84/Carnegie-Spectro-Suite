"""
Test USBDRVD_BulkRead on ST-133 Bulk Pipes
"""

import ctypes
from ctypes import wintypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path = f"\\\\?\\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{guid_str}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(path)

h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"Device Handle: {h_hex}")

if h_dev:
    fn_bread = getattr(usbdrvd, "USBDRVD_BulkRead")
    # fn_bread(hDev, pipeNum, pBuf, dwLen, pBytesRead)
    
    buf = (ctypes.c_ushort * 512)()
    bytes_ret = wintypes.DWORD(0)
    
    for pipe in range(4):
        try:
            res = fn_bread(h_dev, pipe, buf, 1024, ctypes.byref(bytes_ret))
            print(f"USBDRVD_BulkRead(pipe={pipe}) -> Result: {res}, Bytes: {bytes_ret.value}")
        except Exception as e:
            print(f"USBDRVD_BulkRead(pipe={pipe}) error: {e}")

    usbdrvd.USBDRVD_CloseDevice(h_dev)
