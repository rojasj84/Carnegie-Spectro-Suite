import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))
pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
pixcm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "PIXCM32.dll"))

# 1. Create USB Physical Port
p_port = pipp.PIPP_Create_physical_port(2) # Type 2 = USB
print(f"1. USB Port: 0x{p_port:08X}")

# 2. Create ST-133 Controller
h_ctrl = cm.Create_controller_export(1) # Type 1 = ST-133
print(f"2. ST-133 Controller: 0x{h_ctrl:08X}")

if h_ctrl:
    # 3. Query Temperature via PIXCM
    fn_temp = getattr(pixcm, "_PIXCM_Get_Actual_Temperature@4", None)
    if fn_temp:
        try:
            fn_temp.restype = ctypes.c_float
            t_val = fn_temp(h_ctrl)
            print(f"3. _PIXCM_Get_Actual_Temperature -> {t_val} C")
        except Exception as e:
            print(f"3. Error reading temperature: {e}")

    # 4. Query Temperature Status
    fn_status = getattr(pixcm, "_PIXCM_Get_Temperature_Status@4", None)
    if fn_status:
        try:
            s_val = fn_status(h_ctrl)
            print(f"4. _PIXCM_Get_Temperature_Status -> {s_val}")
        except Exception as e:
            print(f"4. Error reading status: {e}")
