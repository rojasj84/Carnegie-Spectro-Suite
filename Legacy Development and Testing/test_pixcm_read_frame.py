import ctypes
from ctypes import wintypes
import os
import time

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))
pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
pixcm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "PIXCM32.dll"))

# 1. Create USB Port & ST-133 Controller
p_port = pipp.PIPP_Create_physical_port(2)
h_ctrl = cm.Create_controller_export(1)
print(f"1. Controller: 0x{h_ctrl:08X}, Port: 0x{p_port:08X}")

# 2. Set Frame Size (512 pixels)
fn_set_size = getattr(pixcm, "_PIXCM_Set_HW_Frame_size@8", None)
if fn_set_size:
    fn_set_size(h_ctrl, 512)
    print("2. Set Frame Size to 512 pixels.")

# 3. Start Controller
fn_start = getattr(pixcm, "_PIXCM_Start_controller@4", None)
if fn_start:
    res_start = fn_start(h_ctrl)
    print(f"3. Start Controller -> {res_start}")

# 4. Trigger 1 Frame
fn_acq = getattr(pixcm, "_PIXCM_Start_1frame@4", None)
if fn_acq:
    res_acq = fn_acq(h_ctrl)
    print(f"4. Start 1Frame -> {res_acq}")

# 5. Wait for Exposure
time.sleep(0.2)

# 6. Read Acquired Data Buffer
fn_get_data = getattr(pixcm, "_PIXCM_Get_acq_data@12", None)
if fn_get_data:
    raw_buf = (ctypes.c_ushort * 512)()
    try:
        # _PIXCM_Get_acq_data(h_ctrl, p_buf, num_pixels)
        res_data = fn_get_data(h_ctrl, raw_buf, 512)
        print(f"5. _PIXCM_Get_acq_data -> {res_data}")
        pixels = list(raw_buf)
        p_min = min(pixels)
        p_max = max(pixels)
        p_mean = sum(pixels) / len(pixels) if len(pixels) else 0
        print(f"\n==================================================================")
        print(f">>> PHYSICAL COUNTS READ: Min={p_min}, Max={p_max}, Mean={p_mean:.1f} <<<")
        print(f"==================================================================")
        print(f"First 10 Pixels: {pixels[:10]}")
        print(f"Center Pixels:   {pixels[250:260]}")
    except Exception as e:
        print(f"5. Error reading acq data: {e}")
