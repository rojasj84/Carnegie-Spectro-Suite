import ctypes
from ctypes import wintypes
import os

kernel32 = ctypes.windll.kernel32

# 1. Define DosDevice alias for APAUSB0 and PIUSB0
# Find active device name
target_path = r"\Device\USBPDO-5"
# Try creating aliases
for alias in ["APAUSB0", "APAUSB", "PIUSB0", "PIUSB"]:
    res = kernel32.DefineDosDeviceW(0x00000001 | 0x00000002, alias, target_path)
    print(f"DefineDosDevice({alias} -> {target_path}) -> {res}")

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
pidc = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "pidc32.dll"))

# 2. Create USB Port & PIDC Object
p_port = pipp.PIPP_Create_physical_port(2)
p_dc = ctypes.c_void_p(0)

fn_dc = getattr(pidc, "_PIDC_Create_datacollect_object@8")
res_dc = fn_dc(p_port, ctypes.byref(p_dc))
dc_hex = f"0x{p_dc.value:08X}" if p_dc.value else "0x0"
print(f"Result with APAUSB0 alias: {res_dc}, DC Object: {dc_hex}")
