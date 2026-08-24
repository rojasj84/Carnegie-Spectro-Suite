import ctypes
import os

dll_dir = r"C:\Program Files\Princeton Instruments\PICam\Runtime"
os.chdir(dll_dir)

picam = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Picam.dll"))
pidi = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pidi.dll"))

# Initialize PICam
picam.Picam_InitializeLibrary()

fn_get_instance = getattr(pidi, "?GetInstance@DeviceManager@Pidi@@SA?AVStatus@2@AEAPEAV12@@Z")

status_buf = ctypes.create_string_buffer(32)
p_mgr = ctypes.c_void_p(0)

fn_get_instance(ctypes.byref(status_buf), ctypes.byref(p_mgr))
val_mgr = f"0x{p_mgr.value:016X}" if p_mgr.value is not None else "0x0"
print(f"DeviceManager Instance Pointer: {val_mgr}")

if p_mgr.value:
    fn_get_devices = getattr(pidi, "?GetAvailableDeviceIDs@DeviceManager@Pidi@@QEBA?AVStatus@2@AEAPEBVDeviceID@2@AEAHPEBW4DeviceType@2@@Z")
    
    st_buf2 = ctypes.create_string_buffer(32)
    p_dev_ids = ctypes.c_void_p(0)
    count = ctypes.c_int(0)
    
    fn_get_devices(ctypes.byref(st_buf2), p_mgr, ctypes.byref(p_dev_ids), ctypes.byref(count), None)
    print(f"Pidi Discovered Devices -> Count: {count.value}")

picam.Picam_UninitializeLibrary()
