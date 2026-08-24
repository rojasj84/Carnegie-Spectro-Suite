import ctypes
import os
import time

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
pidc = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "pidc32.dll"))
cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))

# 1. Create USB Physical Port
p_port = pipp.PIPP_Create_physical_port(2)
print(f"1. USB Port created: 0x{p_port:08X}")

# 2. Create Data Collection Object
# _PIDC_Create_datacollect_object(DWORD type, void** pp_dc)
p_dc = ctypes.c_void_p(0)
res_create = pidc._PIDC_Create_datacollect_object(1, ctypes.byref(p_dc))
print(f"2. PIDC Create DataCollect Object: res={res_create}, Handle=0x{p_dc.value:08X if p_dc.value else 0}")

if p_dc.value and p_port:
    # 3. Set Physical Port
    res_port = pidc._PIDC_SetPhysicalPort(p_dc, p_port)
    print(f"3. SetPhysicalPort -> res={res_port}")

    # 4. Initialize DataCollect
    res_init = pidc._PIDC_Initialize(p_dc)
    print(f"4. PIDC_Initialize -> res={res_init}")

    # 5. Enable
    res_en = pidc._PIDC_Enable(p_dc)
    print(f"5. PIDC_Enable -> res={res_en}")

    # 6. Check Data / Lock Frame Data
    p_frame = ctypes.c_void_p(0)
    res_lock = pidc._PIDC_LockFrameData(p_dc, ctypes.byref(p_frame))
    print(f"6. PIDC_LockFrameData -> res={res_lock}, Frame Pointer=0x{p_frame.value:08X if p_frame.value else 0}")

    if p_frame.value:
        raw_pixels = (ctypes.c_uint16 * 1024).from_address(p_frame.value)
        data = list(raw_pixels[:10])
        print(f"   PHYSICAL PIXEL DATA: {data}")
        pidc._PIDC_UnlockFrameData(p_dc, p_frame)
