"""
Probe Live CCD Counts from Princeton ST-133 Hardware over USB
=============================================================
Attempts to issue exposure start triggers and read digitized pixel counts
from the bulk endpoints.
"""

import ctypes
from ctypes import wintypes
import os
import time

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

print("=" * 70)
print(" Live CCD Counts Probing (ST-133 Hardware)")
print("=" * 70)

usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')
h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)

h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"Device Handle: {h_hex}")

if not h_dev:
    print("FAILED: Could not open USB device.")
    exit(1)

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

fn_vout = getattr(usbdrvd, "USBDRVD_VendorOrClassRequestOut")
fn_bulk_read = getattr(usbdrvd, "USBDRVD_BulkRead", None)

print("\n1. Testing Exposure Start Triggers...")

# Try standard exposure trigger codes (100ms exposure = value 100)
for trg in [0x01, 0x02, 0x10, 0x11, 0x20, 0x81]:
    req = VENDOR_REQUEST()
    req.direction = 0 # OUT
    req.requestType = 2 # Vendor
    req.recepient = 0 # Device
    req.reserved = 0
    req.request = trg
    req.value = 100 # 100 ms
    req.index = 0

    buf = ctypes.create_string_buffer(16)
    res = fn_vout(h_dev, ctypes.byref(req), buf, 0)
    print(f"  Trigger Request 0x{trg:02X} (100ms) -> res={res}")

time.sleep(0.15) # Wait for exposure

print("\n2. Probing Bulk Read on Data Endpoints...")
read_buf = ctypes.create_string_buffer(1024) # 512 uint16 = 1024 bytes
bytes_read = wintypes.DWORD(0)

# Probe direct ReadFile on handle with non-blocking check
kernel32 = ctypes.windll.kernel32
h_w32 = kernel32.CreateFileW(
    r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}",
    0x80000000 | 0x40000000,
    3,
    None,
    3,
    0x40000000, # FILE_FLAG_OVERLAPPED
    None
)

if h_w32 != -1 and h_w32 != 0xFFFFFFFFFFFFFFFF:
    class OVERLAPPED(ctypes.Structure):
        _fields_ = [
            ("Internal", ctypes.c_ulonglong),
            ("InternalHigh", ctypes.c_ulonglong),
            ("Offset", wintypes.DWORD),
            ("OffsetHigh", wintypes.DWORD),
            ("hEvent", wintypes.HANDLE)
        ]

    h_event = kernel32.CreateEventW(None, True, False, None)
    ov = OVERLAPPED()
    ov.hEvent = h_event

    res_rf = kernel32.ReadFile(h_w32, read_buf, 1024, ctypes.byref(bytes_read), ctypes.byref(ov))
    err = kernel32.GetLastError()
    
    if not res_rf and err == 997: # IO_PENDING
        wait_res = kernel32.WaitForSingleObject(h_event, 300)
        if wait_res == 0:
            kernel32.GetOverlappedResult(h_w32, ctypes.byref(ov), ctypes.byref(bytes_read), False)
            print(f"  SUCCESS! Received {bytes_read.value} bytes of digitized CCD data!")
            raw = read_buf.raw[:bytes_read.value]
            print(f"  Raw Hex: {raw[:32].hex()}")
        else:
            kernel32.CancelIo(h_w32)
            print("  Bulk Read: Timed out (0 bytes received). Internal CCD readout clock is idle.")
    elif res_rf:
        print(f"  SUCCESS! Received {bytes_read.value} bytes immediately!")
    else:
        print(f"  ReadFile Error: {err}")

    kernel32.CloseHandle(h_event)
    kernel32.CloseHandle(h_w32)

usbdrvd.USBDRVD_CloseDevice(h_dev)
print("\nClosed device handle.")
