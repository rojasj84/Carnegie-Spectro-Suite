import ctypes
import os
import sys

print(f"32-bit Bridge Python active: {sys.maxsize < 2**32}")

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

# Load libraries
dlls = {}
for name in ["Pipp32.dll", "contrman.dll", "PIXCM32.dll", "PICHIPDB.dll", "pidc32.dll"]:
    try:
        p = os.path.join(dll_dir, name)
        dlls[name] = ctypes.windll.LoadLibrary(p)
        print(f"Loaded: {name} ({dlls[name]})")
    except Exception as e:
        print(f"Failed to load {name}: {e}")

# Inspect Pipp32 (Physical Port Provider)
pipp = dlls.get("Pipp32.dll")
if pipp:
    print("\n--- Testing Pipp32 Port Creation ---")
    # PIPP_Create_physical_port_ex or PIPP_Create_physical_port
    for fn in ["PIPP_Get_DLLVersionString", "PIPP_Diagnose_Interface", "PIPP_Create_physical_port"]:
        if hasattr(pipp, fn):
            print(f"  Pipp32 has {fn}")

# Inspect contrman (Controller Manager)
cm = dlls.get("contrman.dll")
if cm:
    print("\n--- Testing Controller Manager ---")
    for fn in ["Create_controllermanager_export", "Create_controller_export", "Get_Controller_ID"]:
        if hasattr(cm, fn):
            print(f"  contrman has {fn}")

# Inspect PIXCM32
pixcm = dlls.get("PIXCM32.dll")
if pixcm:
    print("\n--- Testing PIXCM32 (PI Controller Module) ---")
    for fn in ["PICM_CMGetLongParam", "PICM_CMGetDoubleParam", "PICM_CMSetLongParam"]:
        if hasattr(pixcm, fn):
            print(f"  PIXCM32 has {fn}")
