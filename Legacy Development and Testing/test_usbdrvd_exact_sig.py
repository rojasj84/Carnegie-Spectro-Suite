"""
Test exact 8-parameter signature of USBDRVD_VendorOrClassRequestOut
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
    fn_vout = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestOut")
    # fn_vout(hDev, bDirection, bRequestType, bRecipient, bRequest, wValue, wIndex, pBuffer, dwLen)
    # stdcall: 8 or 9 params
    
    # Try calling Anchor Download for CPU reset (0xE600 = 1)
    buf = (ctypes.c_ubyte * 1)(1)
    
    for req_type in [2]:
        for recip in [0]:
            try:
                # Signature: (h_dev, bDir, bReqType, bRecip, bReq, wVal, wIdx, pBuf, dwLen)
                res = fn_vout(
                    h_dev,
                    ctypes.c_ubyte(0), # Dir OUT
                    ctypes.c_ubyte(req_type), # Type Vendor
                    ctypes.c_ubyte(recip), # Recip Device
                    ctypes.c_ubyte(0xA0), # Request Anchor Download
                    ctypes.c_ushort(0xE600), # Addr
                    ctypes.c_ushort(0), # Index
                    buf,
                    1
                )
                print(f"Call with 9 params (0xE600 = 1) -> Result: {res}")
            except Exception as e:
                print(f"Error calling 9 params: {e}")

    usbdrvd.USBDRVD_CloseDevice(h_dev)
