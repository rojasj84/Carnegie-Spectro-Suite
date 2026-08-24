"""
Trace and Test Step-by-Step ST-133 Hardware Initialization
"""

import ctypes
from ctypes import wintypes
import os
import time

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))
pi133 = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "PI13332.dll"))

# 1. Connect via USBDRVD
guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path = f"\\\\?\\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{guid_str}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(path)
h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"1. USBDRVD Device Handle: {h_hex}")

if h_dev:
    # 2. Get DLL Version
    fn_ver = getattr(pi133, "_PI133_Get_DLLVersionString@8", None)
    if fn_ver:
        v_buf = ctypes.create_string_buffer(64)
        fn_ver(v_buf, 64)
        print(f"2. PI133 Driver DLL Version: {v_buf.value.decode('latin1', 'ignore')}")

    # 3. Check pipe count
    pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
    print(f"3. Active USB Pipes: {pipes}")

    usbdrvd.USBDRVD_CloseDevice(h_dev)
    print("4. Closed handle.")
