import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))
pixcm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "PIXCM32.dll"))

p_ctrl = cm.Create_controller_export(1) # ST-133
print(f"Controller 1 Handle: 0x{p_ctrl:08X}")

# PICM_CMGetDoubleParam(h_ctrl, param_id, double* val)
# PICM_CMGetLongParam(h_ctrl, param_id, long* val)

# Test querying basic parameters
val_l = ctypes.c_long(0)
val_d = ctypes.c_double(0.0)

for param_id in range(1, 30):
    try:
        res_l = pixcm.PICM_CMGetLongParam(p_ctrl, param_id, ctypes.byref(val_l))
        res_d = pixcm.PICM_CMGetDoubleParam(p_ctrl, param_id, ctypes.byref(val_d))
        print(f"  Param #{param_id:02d} -> Long: (res={res_l}, val={val_l.value}) | Double: (res={res_d}, val={val_d.value})")
    except Exception as e:
        print(f"  Param #{param_id:02d} -> Error: {e}")
