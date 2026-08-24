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

# 3. Start Controller
fn_start = getattr(pixcm, "_PIXCM_Start_controller@4", None)
if fn_start:
    try:
        res = fn_start(h_ctrl)
        print(f"3. _PIXCM_Start_controller -> {res}")
    except Exception as e:
        print(f"3. Error starting controller: {e}")

# 4. Start 1 Frame Acquisition
fn_acq = getattr(pixcm, "_PIXCM_Start_1frame@4", None)
if fn_acq:
    try:
        res_acq = fn_acq(h_ctrl)
        print(f"4. _PIXCM_Start_1frame -> {res_acq}")
    except Exception as e:
        print(f"4. Error starting 1frame: {e}")
