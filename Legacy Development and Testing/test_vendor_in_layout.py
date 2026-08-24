import ctypes
from ctypes import wintypes
import os
import struct

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)

if h_dev:
    fn_vin = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestIn")
    
    # Try different request combinations for temperature
    # In ST-133: Request 0xDE / 0xDF / 0xEE / 0xEF / 0x82
    class VENDOR_REQUEST(ctypes.Structure):
        _fields_ = [
            ("direction", ctypes.c_ubyte),  # 1 = IN
            ("requestType", ctypes.c_ubyte),# 2 = Vendor
            ("recepient", ctypes.c_ubyte),  # 0 = Device
            ("reserved", ctypes.c_ubyte),
            ("request", ctypes.c_ubyte),
            ("value", ctypes.c_ushort),
            ("index", ctypes.c_ushort)
        ]

    for req_code in [0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x80, 0x82, 0x84, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0]:
        req = VENDOR_REQUEST()
        req.direction = 1
        req.requestType = 2
        req.recepient = 0
        req.reserved = 0
        req.request = req_code
        req.value = 0
        req.index = 0
        
        buf = ctypes.create_string_buffer(64)
        res = fn_vin(h_dev, ctypes.byref(req), buf, 64)
        raw = buf.raw[:16]
        if any(b != 0 for b in raw):
            print(f"Vendor IN 0x{req_code:02X} -> {raw.hex()}")

    usbdrvd.USBDRVD_CloseDevice(h_dev)
