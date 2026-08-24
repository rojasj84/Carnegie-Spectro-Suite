import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))

# Trenton_FindController
try:
    res = cm.Trenton_FindController()
    print(f"Trenton_FindController -> {res}")
except Exception as e:
    print(f"Trenton_FindController error: {e}")

try:
    res_avail = cm.Trenton_IsAvail()
    print(f"Trenton_IsAvail -> {res_avail}")
except Exception as e:
    print(f"Trenton_IsAvail error: {e}")
