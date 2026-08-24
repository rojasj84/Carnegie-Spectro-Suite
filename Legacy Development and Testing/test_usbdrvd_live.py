import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

# USBDRVD_GetDevCount() -> DWORD
n_devs = usbdrvd.USBDRVD_GetDevCount()
print(f"USBDRVD_GetDevCount() -> {n_devs}")

# Open by path
dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path_bytes = dev_path.encode('latin1')

h_dev = usbdrvd.USBDRVD_OpenDevicePath(path_bytes)
h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"USBDRVD_OpenDevicePath('{dev_path}') -> Handle: {h_hex}")

if h_dev:
    # Get Driver Version
    ver = usbdrvd.USBDRVD_GetDriverVersion(h_dev)
    print(f"USB Driver Version: 0x{ver:08X}")
    
    # Get Pipe Count
    pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
    print(f"Pipe Count: {pipes}")
    
    usbdrvd.USBDRVD_CloseDevice(h_dev)
