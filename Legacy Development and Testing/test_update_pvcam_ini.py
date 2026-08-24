import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

rs = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "RSCONFIGEX.dll"))

fn_update_list = getattr(rs, "?UpdateCameraList@@YGXXZ", None)
if fn_update_list:
    print("Calling UpdateCameraList()...")
    fn_update_list()
    print("UpdateCameraList() finished.")

fn_update_ini = getattr(rs, "UpdatePVCAMini", None)
if fn_update_ini:
    print("Calling UpdatePVCAMini()...")
    fn_update_ini()
    print("UpdatePVCAMini() finished.")

fn_write = getattr(rs, "?WriteIniFile@@YGXXZ", None)
if fn_write:
    print("Calling WriteIniFile()...")
    fn_write()
    print("WriteIniFile() finished.")

# Check generated files
for f in os.listdir(dll_dir):
    if f.lower().endswith(('.ini', '.cfg')):
        print(f"File: {f} ({os.path.getsize(os.path.join(dll_dir, f))} bytes)")
