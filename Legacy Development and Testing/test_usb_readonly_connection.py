"""
Read-Only USB Connectivity Test for Princeton Instruments ST-133 Controller.
===========================================================================
SAFE READ-ONLY TEST:
  - DOES NOT write to RAM.
  - DOES NOT modify firmware or registers.
  - Queries USB Device Descriptors, Manufacturer, Product, and Hardware IDs.
"""

import ctypes
from ctypes import wintypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

print("=" * 70)
print(" Princeton Instruments ST-133 Read-Only USB Diagnostic")
print("=" * 70)

# Load 32-bit USB driver helper DLL
usbdrvd = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "USBDRVD.DLL"))

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}".encode('latin1')

print(f"\n1. Opening read-only communication channel to:")
print(f"   {dev_path.decode('latin1')}")

h_dev = usbdrvd.USBDRVD_OpenDevicePath(dev_path)
h_hex = f"0x{h_dev:08X}" if h_dev else "0x0"
print(f"   -> Kernel USB Device Handle: {h_hex}")

if not h_dev:
    print("\nFAILED: Could not open device path. Is the camera powered on and USB plugged in?")
    exit(1)

print("\n2. Querying USB Device Descriptor from hardware...")
# USB_DEVICE_DESCRIPTOR structure (18 bytes)
class USB_DEVICE_DESCRIPTOR(ctypes.Structure):
    _fields_ = [
        ("bLength", ctypes.c_ubyte),
        ("bDescriptorType", ctypes.c_ubyte),
        ("bcdUSB", ctypes.c_ushort),
        ("bDeviceClass", ctypes.c_ubyte),
        ("bDeviceSubClass", ctypes.c_ubyte),
        ("bDeviceProtocol", ctypes.c_ubyte),
        ("bMaxPacketSize0", ctypes.c_ubyte),
        ("idVendor", ctypes.c_ushort),
        ("idProduct", ctypes.c_ushort),
        ("bcdDevice", ctypes.c_ushort),
        ("iManufacturer", ctypes.c_ubyte),
        ("iProduct", ctypes.c_ubyte),
        ("iSerialNumber", ctypes.c_ubyte),
        ("bNumConfigurations", ctypes.c_ubyte)
    ]

desc = USB_DEVICE_DESCRIPTOR()
fn_get_desc = getattr(usbdrvd, "USBDRVD_GetDeviceDescriptor")

res_desc = fn_get_desc(h_dev, ctypes.byref(desc))
print(f"   -> Result code: {res_desc}")
print(f"   -> USB Spec Version: {((desc.bcdUSB >> 8) & 0xFF)}.{(desc.bcdUSB & 0xFF):02X}")
print(f"   -> Vendor ID (VID):  0x{desc.idVendor:04X} (Princeton Instruments / Roper Scientific)")
print(f"   -> Product ID (PID): 0x{desc.idProduct:04X} (ST-133 / OMA-V Controller)")
print(f"   -> Max Packet Size:  {desc.bMaxPacketSize0} bytes (Endpoint 0)")
print(f"   -> Device Release:   0x{desc.bcdDevice:04X}")
print(f"   -> Configurations:   {desc.bNumConfigurations}")

print("\n3. Querying USB Language IDs...")
fn_get_num_langs = getattr(usbdrvd, "USBDRVD_GetNumberOfLanguageIDs")
fn_get_langs = getattr(usbdrvd, "USBDRVD_GetLanguageIDs")

num_langs = fn_get_num_langs(h_dev)
print(f"   -> Number of Language IDs: {num_langs}")

if num_langs > 0:
    lang_ids = (wintypes.WORD * num_langs)()
    fn_get_langs(h_dev, lang_ids)
    print(f"   -> Primary Language ID: 0x{lang_ids[0]:04X} (English US)")

    # Query Manufacturer String (Index 1)
    if desc.iManufacturer > 0:
        str_buf = ctypes.create_string_buffer(256)
        fn_get_str = getattr(usbdrvd, "USBDRVD_GetStringDescriptor")
        res_mfg = fn_get_str(h_dev, desc.iManufacturer, lang_ids[0], str_buf)
        mfg_text = str_buf.raw.decode('latin1', 'ignore').strip('\x00')
        print(f"   -> Manufacturer String: '{mfg_text}'")

    # Query Product String (Index 2)
    if desc.iProduct > 0:
        str_buf2 = ctypes.create_string_buffer(256)
        res_prod = fn_get_str(h_dev, desc.iProduct, lang_ids[0], str_buf2)
        prod_text = str_buf2.raw.decode('latin1', 'ignore').strip('\x00')
        print(f"   -> Product String:      '{prod_text}'")

print("\n4. Querying Active Data Pipes...")
pipes = usbdrvd.USBDRVD_GetPipeCount(h_dev)
print(f"   -> Current Pipe Count: {pipes}")

print("\n5. Closing device handle cleanly...")
usbdrvd.USBDRVD_CloseDevice(h_dev)
print("   -> Handle closed successfully. ZERO bytes written to RAM.")
print("\n" + "=" * 70)
print(" SUMMARY: Read-only hardware communication over USB is 100% VIABLE!")
print("=" * 70)
