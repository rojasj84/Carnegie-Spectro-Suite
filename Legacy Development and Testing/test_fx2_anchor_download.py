import ctypes
from ctypes import wintypes
import os

kernel32 = ctypes.windll.kernel32

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
GENERIC_READ = 0x80000000
GENERIC_WRITE = 0x40000000
OPEN_EXISTING = 3

h = kernel32.CreateFileW(dev_path, GENERIC_READ | GENERIC_WRITE, 3, None, OPEN_EXISTING, 0, None)
print(f"Open Handle: {h}")

if h != -1:
    # Cypress FX2 Standard Control Transfer Structure (WINUSB / KMDF)
    # IOCTL_EZUSB_ANCHOR_DOWNLOAD = 0x222000 + (0x800 + 27)*4 = 0x22206C
    # IOCTL_EZUSB_VENDOR_REQUEST = 0x222010
    
    # Test sending Vendor Request 0xA0 to 0xE600 (CPUCS Reset)
    # Struct: UCHAR Request, USHORT Value, USHORT Index, UCHAR Direction, ULONG Length, UCHAR Buffer[]
    class VENDOR_REQUEST(ctypes.Structure):
        _fields_ = [
            ("Request", ctypes.c_ubyte),      # 0xA0 (Anchor load)
            ("Value", ctypes.c_ushort),       # Address (e.g. 0xE600)
            ("Index", ctypes.c_ushort),       # 0x0000
            ("Direction", ctypes.c_ubyte),   # 0 = OUT
            ("Reserved", ctypes.c_ubyte),
            ("DataLength", ctypes.c_ulong),   # 1 byte
            ("Data", ctypes.c_ubyte * 64)     # Payload (1 = Reset)
        ]

    req = VENDOR_REQUEST()
    req.Request = 0xA0
    req.Value = 0xE600
    req.Index = 0x0000
    req.Direction = 0
    req.DataLength = 1
    req.Data[0] = 1 # Put CPU in reset

    bytes_ret = wintypes.DWORD(0)
    
    # Probe IOCTL codes for vendor request in piusbwdf
    for code in [0x0022E000, 0x0022E010, 0x00222010, 0x0022206C, 0x0022E0E9]:
        res = kernel32.DeviceIoControl(
            h,
            code,
            ctypes.byref(req),
            ctypes.sizeof(req),
            None,
            0,
            ctypes.byref(bytes_ret),
            None
        )
        err = kernel32.GetLastError()
        print(f"IOCTL 0x{code:08X} -> res={res}, LastError={err}")

    kernel32.CloseHandle(h)
