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

# 2. Set Frame Size (512)
fn_size = getattr(pixcm, "_PIXCM_Set_HW_Frame_size@8")
fn_size(h_ctrl, 512)

# 3. Start Controller & Trigger Frame
fn_start = getattr(pixcm, "_PIXCM_Start_controller@4")
fn_start(h_ctrl)

fn_acq = getattr(pixcm, "_PIXCM_Start_1frame@4")
fn_acq(h_ctrl)

time.sleep(0.2)

# 4. Lock Current Frame
# _PIXCM_LockCurrentFrame@16(h_ctrl, frame_num, &p_data, &size)
fn_lock = getattr(pixcm, "_PIXCM_LockCurrentFrame@16", None)
fn_unlock = getattr(pixcm, "_PIXCM_UnlockCurrentFrame@4", None)

if fn_lock:
    p_data = ctypes.c_void_p(0)
    data_size = wintypes.DWORD(0)
    
    try:
        res_lock = fn_lock(h_ctrl, 1, ctypes.byref(p_data), ctypes.byref(data_size))
        print(f"Lock Frame Result: {res_lock}, Data Ptr: 0x{p_data.value:08X if p_data.value else 0}, Size: {data_size.value}")
        
        if p_data.value and data_size.value >= 512:
            # Read 512 uint16s from pointer
            c_array = (ctypes.c_ushort * 512).from_address(p_data.value)
            pixels = list(c_array)
            print(f"\n==================================================================")
            print(f">>> PHYSICAL COUNTS: Min={min(pixels)}, Max={max(pixels)}, Mean={sum(pixels)/len(pixels):.1f} <<<")
            print(f"==================================================================")
            print(f"First 10 Pixels: {pixels[:10]}")
            print(f"Center Pixels:   {pixels[250:260]}")
            
        if fn_unlock:
            fn_unlock(h_ctrl)
    except Exception as e:
        print(f"Error locking frame: {e}")
