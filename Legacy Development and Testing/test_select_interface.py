import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)

if h_dev:
    fn_sel = getattr(usbdrvd, "USBDRVD_SelectInterface", None)
    if fn_sel:
        # Try selecting Interface 0, Alternate Setting 0, 1, etc.
        for alt in [0, 1, 2]:
            res = fn_sel(h_dev, 0, alt)
            pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
            print(f"SelectInterface(0, alt={alt}) -> res={res}, Pipe Count={pipes}")

    usbdrvd.USBDRVD_CloseDevice(h_dev)
