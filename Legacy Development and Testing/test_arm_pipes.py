import ctypes
from ctypes import wintypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path = f"\\\\?\\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{guid_str}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(path)

# List all functions in USBDRVD starting with USBDRVD_
funcs = [f for f in dir(usbdrvd) if f.startswith("USBDRVD_")]
print("Available USBDRVD functions:")
for f in funcs:
    print(" ", f)

if h_dev:
    # Test ResetPipe on all pipes
    fn_reset = getattr(usbdrvd, "USBDRVD_ResetPipe", None)
    if fn_reset:
        for p in range(4):
            res = fn_reset(h_dev, p)
            print(f"USBDRVD_ResetPipe({p}) -> {res}")

    usbdrvd.USBDRVD_CloseDevice(h_dev)
