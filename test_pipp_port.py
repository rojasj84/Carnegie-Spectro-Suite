import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))

# PIPP_Get_DLLVersionString(char* buf, int max_len)
buf = ctypes.create_string_buffer(256)
try:
    pipp.PIPP_Get_DLLVersionString(buf, 256)
    print(f"Pipp32 Version: {buf.value.decode('latin1', 'ignore')}")
except Exception as e:
    print(f"PIPP_Get_DLLVersionString error: {e}")

# Check PIPP exports
print("\nTesting PIPP_Diagnose_Interface...")
for iface_type in range(10):
    try:
        diag_res = pipp.PIPP_Diagnose_Interface(iface_type)
        print(f"  Interface type {iface_type}: result={diag_res}")
    except Exception as e:
        print(f"  Interface type {iface_type}: error={e}")

# Check PIPP_Create_physical_port
# Port types: 0=ISA, 1=PCI, 2=USB, 3=1394, etc.
p_port = ctypes.c_void_p(0)
for p_type in range(6):
    try:
        res = pipp.PIPP_Create_physical_port(p_type, ctypes.byref(p_port))
        print(f"  PIPP_Create_physical_port({p_type}) -> res={res}, port={p_port.value}")
    except Exception as e:
        print(f"  PIPP_Create_physical_port({p_type}) -> error={e}")
