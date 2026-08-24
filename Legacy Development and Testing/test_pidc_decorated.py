import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
pidc = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "pidc32.dll"))

fn_create = getattr(pidc, "_PIDC_Create_datacollect_object@8")
fn_set_port = getattr(pidc, "_PIDC_SetPhysicalPort@8")
fn_init = getattr(pidc, "_PIDC_Initialize@4")
fn_enable = getattr(pidc, "_PIDC_Enable@4")
fn_check = getattr(pidc, "_PIDC_CheckData@8")
fn_lock = getattr(pidc, "_PIDC_LockFrameData@8")
fn_unlock = getattr(pidc, "_PIDC_UnlockFrameData@8")

# 1. Create USB Port
p_port = pipp.PIPP_Create_physical_port(2)
print(f"1. USB Port: 0x{p_port:08X}")

# 2. Create DC Object
p_dc = ctypes.c_void_p(0)
res_create = fn_create(1, ctypes.byref(p_dc))
h_hex = f"0x{p_dc.value:08X}" if p_dc.value is not None else "0x0"
print(f"2. PIDC_Create: res={res_create}, Handle={h_hex}")

if p_dc.value and p_port:
    res_port = fn_set_port(p_dc, p_port)
    print(f"3. SetPhysicalPort -> res={res_port}")

    res_init = fn_init(p_dc)
    print(f"4. Initialize -> res={res_init}")

    res_en = fn_enable(p_dc)
    print(f"5. Enable -> res={res_en}")

    p_frame = ctypes.c_void_p(0)
    res_lock = fn_lock(p_dc, ctypes.byref(p_frame))
    print(f"6. LockFrameData -> res={res_lock}, Frame Pointer=0x{p_frame.value:08X if p_frame.value else 0}")
