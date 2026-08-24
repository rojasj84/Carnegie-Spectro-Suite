"""
Test Complete PIDC Data Collection Pipeline for ST-133
"""

import ctypes
from ctypes import wintypes
import os
import time

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))
pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
pidc = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "pidc32.dll"))
pixcm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "PIXCM32.dll"))

# 1. Create USB Port (Type 2 = USB)
p_port = pipp.PIPP_Create_physical_port(2)
print(f"1. USB Port: 0x{p_port:08X}")

# 2. Create PIDC Data Collector Object
# _PIDC_Create_datacollect_object@8(p_port, p_dc_out)
p_dc = ctypes.c_void_p(0)
fn_dc_create = getattr(pidc, "_PIDC_Create_datacollect_object@8", None)
if fn_dc_create:
    res_dc = fn_dc_create(p_port, ctypes.byref(p_dc))
    dc_hex = f"0x{p_dc.value:08X}" if p_dc.value else "0x0"
    print(f"2. _PIDC_Create_datacollect_object -> Result: {res_dc}, DC Object: {dc_hex}")

# 3. Create ST-133 Controller
h_ctrl = cm.Create_controller_export(1)
print(f"3. ST-133 Controller: 0x{h_ctrl:08X}")

# 4. Attach Port to Controller
fn_set_port = getattr(pidc, "_PIDC_SetPhysicalPort@8", None)
if fn_set_port and p_dc.value:
    res_port = fn_set_port(p_dc.value, p_port)
    print(f"4. _PIDC_SetPhysicalPort -> {res_port}")

# 5. Initialize & Enable PIDC
fn_init = getattr(pidc, "_PIDC_Initialize@4", None)
if fn_init and p_dc.value:
    res_init = fn_init(p_dc.value)
    print(f"5. _PIDC_Initialize -> {res_init}")

fn_enable = getattr(pidc, "_PIDC_Enable@4", None)
if fn_enable and p_dc.value:
    res_en = fn_enable(p_dc.value)
    print(f"6. _PIDC_Enable -> {res_en}")

# 6. Set HW Frame Size (512 pixels) & Start Controller
fn_size = getattr(pixcm, "_PIXCM_Set_HW_Frame_size@8")
fn_size(h_ctrl, 512)

fn_start = getattr(pixcm, "_PIXCM_Start_controller@4")
fn_start(h_ctrl)

# 7. Trigger 1 Frame
print("7. Triggering 1 Frame...")
fn_acq = getattr(pixcm, "_PIXCM_Start_1frame@4")
fn_acq(h_ctrl)

# Wait for 100ms exposure
time.sleep(0.2)

# 8. Check Data & Lock Frame
fn_check = getattr(pidc, "_PIDC_CheckData@8", None)
if fn_check and p_dc.value:
    status = wintypes.DWORD(0)
    res_chk = fn_check(p_dc.value, ctypes.byref(status))
    print(f"8. _PIDC_CheckData -> Result: {res_chk}, Status: 0x{status.value:08X}")

fn_lock = getattr(pidc, "_PIDC_LockFrameData@8", None)
if fn_lock and p_dc.value:
    p_frame = ctypes.c_void_p(0)
    try:
        res_lock = fn_lock(p_dc.value, ctypes.byref(p_frame))
        print(f"9. _PIDC_LockFrameData -> Result: {res_lock}, Frame Ptr: 0x{p_frame.value:08X if p_frame.value else 0}")
        if p_frame.value:
            c_array = (ctypes.c_ushort * 512).from_address(p_frame.value)
            pixels = list(c_array)
            print(f"\n==================================================================")
            print(f">>> PHYSICAL COUNTS ACQUIRED: Min={min(pixels)}, Max={max(pixels)}, Mean={sum(pixels)/len(pixels):.1f} <<<")
            print(f"==================================================================")
            print(f"First 10 Pixels: {pixels[:10]}")
            print(f"Center Pixels:   {pixels[250:260]}")
    except Exception as e:
        print(f"9. Error locking frame data: {e}")
