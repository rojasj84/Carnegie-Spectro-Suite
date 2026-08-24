import ctypes
import os
import time

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)

print("=" * 70)
print(" Standalone Princeton ST-133 FX2 Firmware Loader Diagnostic")
print("=" * 70)
h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"Device Handle: {h_hex}")

if not h_dev:
    print("FAILED: Could not open device path.")
    exit(1)

# Inspect Vendor Request signature
# USBDRVD_VendorOrClassRequestOut(h_dev, p_req, p_buf, buf_len, ...)
# In Cypress ezusb:
# struct VENDOR_OR_CLASS_REQUEST_CONTROL {
#    UCHAR direction; // 0 = host to device (OUT)
#    UCHAR requestType; // 2 = Vendor
#    UCHAR recepient; // 0 = Device
#    UCHAR requestTypeReservedBits;
#    UCHAR request; // 0xA0
#    USHORT value; // Address
#    USHORT index; // 0
# }

class VENDOR_REQUEST(ctypes.Structure):
    _fields_ = [
        ("direction", ctypes.c_ubyte),
        ("requestType", ctypes.c_ubyte),
        ("recepient", ctypes.c_ubyte),
        ("reserved", ctypes.c_ubyte),
        ("request", ctypes.c_ubyte),
        ("value", ctypes.c_ushort),
        ("index", ctypes.c_ushort)
    ]

req = VENDOR_REQUEST()
req.direction = 0 # OUT
req.requestType = 2 # Vendor
req.recepient = 0 # Device
req.reserved = 0
req.request = 0xA0 # Anchor Download
req.value = 0xE600 # CPUCS Register
req.index = 0

buf = (ctypes.c_ubyte * 1)(1) # 1 = Reset CPU

fn_vout = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestOut", None)
if fn_vout:
    try:
        # Try signature: (h_dev, p_req, p_buf, buf_len)
        res = fn_vout(h_dev, ctypes.byref(req), buf, 1)
        print(f"1. Test CPU Reset (0xE600 = 1) -> Result code: {res}")
    except Exception as ex:
        print(f"1. Error calling VendorRequestOut: {ex}")

pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
print(f"Active Pipes: {pipes}")

usbdrvd.USBDRVD_CloseDevice(h_dev)
