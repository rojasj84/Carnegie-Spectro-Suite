import ctypes
import os

dll_dir = r"C:\Program Files\Princeton Instruments\PICam\Runtime"
os.chdir(dll_dir)

picam = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Picam.dll"))
pidi = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pidi.dll"))

picam.Picam_InitializeLibrary()

fn_get_instance = getattr(pidi, "?GetInstance@DeviceManager@Pidi@@SA?AVStatus@2@AEAPEAV12@@Z")

p_mgr = ctypes.c_void_p(0)
res = fn_get_instance(ctypes.byref(p_mgr))
print(f"DeviceManager Instance Pointer: 0x{p_mgr.value:016X}")

if p_mgr.value:
    # ?GetCreatedDevices@DeviceManager@Pidi@@QEBA?AVStatus@2@AEAPEAPEAVDevice@2@AEAH@Z
    fn_created = getattr(pidi, "?GetCreatedDevices@DeviceManager@Pidi@@QEBA?AVStatus@2@AEAPEAPEAVDevice@2@AEAH@Z")
    
    p_dev_arr = ctypes.c_void_p(0)
    dev_count = ctypes.c_int(0)
    
    # RCX = this (p_mgr), RDX = p_dev_arr, R8 = dev_count
    res_devs = fn_created(p_mgr, ctypes.byref(p_dev_arr), ctypes.byref(dev_count))
    print(f"GetCreatedDevices -> Res: {res_devs}, Count: {dev_count.value}")

    # ?GetAvailableDeviceIDs@DeviceManager@Pidi@@QEBA?AVStatus@2@AEAPEBVDeviceID@2@AEAHPEBW4DeviceType@2@@Z
    fn_avail = getattr(pidi, "?GetAvailableDeviceIDs@DeviceManager@Pidi@@QEBA?AVStatus@2@AEAPEBVDeviceID@2@AEAHPEBW4DeviceType@2@@Z")
    p_ids = ctypes.c_void_p(0)
    avail_count = ctypes.c_int(0)
    res_avail = fn_avail(p_mgr, ctypes.byref(p_ids), ctypes.byref(avail_count), None)
    print(f"GetAvailableDeviceIDs -> Res: {res_avail}, Count: {avail_count.value}")

picam.Picam_UninitializeLibrary()
