import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))
pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))

# 1. Create USB Physical Port (Type 2 = USB)
p_port = pipp.PIPP_Create_physical_port(2)
print(f"1. USB Physical Port: 0x{p_port:08X}")

# 2. Create Controller Manager
h_cm = cm.Create_controllermanager_export()
print(f"2. Controller Manager: 0x{h_cm:08X}")

# 3. Create ST-133 Controller (Type 1)
# Create_controller_export(DWORD type) -> void*
h_ctrl = cm.Create_controller_export(1)
print(f"3. ST-133 Controller Object: 0x{h_ctrl:08X}")

if h_ctrl:
    # Query controller ID
    fn_id = getattr(cm, "Get_Controller_ID", None)
    if fn_id:
        c_id = fn_id(h_ctrl)
        print(f"4. Controller ID: {c_id}")
