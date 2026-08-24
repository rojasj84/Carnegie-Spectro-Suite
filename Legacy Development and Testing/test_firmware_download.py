import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)
h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"Opened Device: Handle={h_hex}")

if h_dev:
    # Test firmware files
    candidates = [
        r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\omavb.dat",
        r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\oma1db.dat",
        r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\pi133b.dat",
        r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT",
    ]

    for fw in candidates:
        if os.path.exists(fw):
            print(f"\nAttempting firmware download: {fw}")
            fw_bytes = fw.encode('latin1')
            res = usbdrvd.USBDRVD_EZUSBDownloadRam(h_dev, fw_bytes)
            print(f"  USBDRVD_EZUSBDownloadRam -> result={res}")
            
            pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
            print(f"  Post-download Pipe Count: {pipes}")
            if pipes > 0:
                print("  SUCCESS! Controller pipes are ACTIVE!")
                break

    usbdrvd.USBDRVD_CloseDevice(h_dev)
