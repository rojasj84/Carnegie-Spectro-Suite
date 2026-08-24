import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))

# Port 2 is USB
p_obj = pipp.PIPP_Create_physical_port(2)
print(f"USB Port Object Pointer: 0x{p_obj:08X}")

if p_obj:
    # Read vtable pointer at offset 0
    vtable_ptr = ctypes.cast(p_obj, ctypes.POINTER(ctypes.c_void_p))[0]
    print(f"USB Port VTable Pointer: 0x{vtable_ptr:08X}")

    # Read first 15 vtable function pointers
    vtable = ctypes.cast(vtable_ptr, ctypes.POINTER(ctypes.c_void_p))
    for i in range(15):
        fn_addr = vtable[i]
        print(f"  VTable[{i:02d}] -> 0x{fn_addr:08X}")
