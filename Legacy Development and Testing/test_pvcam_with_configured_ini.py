import ctypes
from ctypes import wintypes
import os

ini_content = """[PVCAM]
NumCameras=1

[Camera_1]
Interface_Type=2
Interface_Num=0
Camera_Name=ST-133 2MHz
Controller_Name=ST-133
Driver_Name=PIUSB
Port_Name=USB
"""

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

local_ini = os.path.join(dll_dir, "pvcam.ini")
with open(local_ini, "w", encoding="latin1") as f:
    f.write(ini_content)

print(f"Wrote {local_ini} with ST-133 configuration.")

pvcam = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pvcam32.dll"))

fn_init = getattr(pvcam, "pl_pvcam_init")
res_init = fn_init()
print(f"pl_pvcam_init -> {res_init}")

fn_total = getattr(pvcam, "pl_cam_get_total")
total_cams = wintypes.SHORT(0)
res_total = fn_total(ctypes.byref(total_cams))
print(f"pl_cam_get_total -> Result: {res_total}, Total Cameras: {total_cams.value}")

if total_cams.value > 0:
    fn_name = getattr(pvcam, "pl_cam_get_name")
    cam_name = ctypes.create_string_buffer(64)
    res_name = fn_name(0, cam_name)
    print(f"Camera #0 Name: {cam_name.value.decode('latin1', 'ignore')}")
    
    # Try opening camera
    fn_open = getattr(pvcam, "pl_cam_open")
    h_cam = wintypes.SHORT(0)
    res_open = fn_open(cam_name, ctypes.byref(h_cam), 0)
    print(f"pl_cam_open -> Result: {res_open}, Handle: {h_cam.value}")

fn_uninit = getattr(pvcam, "pl_pvcam_uninit")
fn_uninit()
