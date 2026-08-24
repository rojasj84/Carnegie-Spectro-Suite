import ctypes
import os
import time

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

# Re-open device after boot
dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)

h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"Re-opened Handle: {h_hex}")
if h_dev:
    pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
    print(f"Active Pipes: {pipes}")
    
    # Try reading Pipe 0 / 1 / 2
    for p in range(pipes):
        print(f"Checking Pipe #{p}...")

    usbdrvd.USBDRVD_CloseDevice(h_dev)
