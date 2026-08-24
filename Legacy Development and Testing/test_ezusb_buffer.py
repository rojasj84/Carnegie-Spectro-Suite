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
    fn_dl_buf = getattr(usbdrvd, "USBDRVD_EZUSBDownloadRamFromBuffer")
    
    fw_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT"
    with open(fw_path, "rb") as f:
        fw_data = f.read()

    print(f"Firmware file size: {len(fw_data)} bytes")
    c_buf = ctypes.create_string_buffer(fw_data, len(fw_data))
    
    try:
        res = fn_dl_buf(h_dev, c_buf, len(fw_data))
        print(f"Arg order (h, buf, len) -> Result: {res}")
    except Exception as e:
        print(f"Arg order (h, buf, len) -> Error: {e}")

    try:
        res = fn_dl_buf(h_dev, len(fw_data), c_buf)
        print(f"Arg order (h, len, buf) -> Result: {res}")
    except Exception as e:
        print(f"Arg order (h, len, buf) -> Error: {e}")

    pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
    print(f"Post-download Pipe Count: {pipes}")

    usbdrvd.USBDRVD_CloseDevice(h_dev)
