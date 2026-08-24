import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))
pixcm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "PIXCM32.dll"))

# Create Controller Manager
# Create_controllermanager_export takes (void) or (void** pp_mgr)
p_mgr = cm.Create_controllermanager_export()
print(f"Controller Manager Instance: 0x{p_mgr:08X}")

# Create Controller Export
# ST-133 controller ID = 1 or 2 or 6
for ctrl_id in range(10):
    try:
        p_ctrl = cm.Create_controller_export(ctrl_id)
        print(f"  Create_controller_export({ctrl_id}) -> 0x{p_ctrl:08X}")
    except Exception as e:
        print(f"  Create_controller_export({ctrl_id}) -> error={e}")
