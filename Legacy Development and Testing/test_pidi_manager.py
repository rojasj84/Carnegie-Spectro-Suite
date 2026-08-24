import ctypes
import os

dll_dir = r"C:\Program Files\Princeton Instruments\PICam\Runtime"
os.chdir(dll_dir)

pidi = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pidi.dll"))

# Demangled: ?GetInstance@DeviceManager@Pidi@@SA?AVStatus@2@AEAPEAV12@@Z
# Returns: Pidi::Status (8 bytes), Param: Pidi::DeviceManager**
fn_get_instance = getattr(pidi, "?GetInstance@DeviceManager@Pidi@@SA?AVStatus@2@AEAPEAV12@@Z")

p_mgr = ctypes.c_void_p(0)
status = fn_get_instance(ctypes.byref(p_mgr))
val_hex = f"0x{p_mgr.value:016X}" if p_mgr.value else "0x0"
print(f"DeviceManager::GetInstance -> Status: {status}, Manager Pointer: {val_hex}")

if p_mgr.value:
    # ?GetAvailableDeviceIDs@DeviceManager@Pidi@@QEBA?AVStatus@2@AEAPEBVDeviceID@2@AEAHPEBW4DeviceType@2@@Z
    fn_get_devices = getattr(pidi, "?GetAvailableDeviceIDs@DeviceManager@Pidi@@QEBA?AVStatus@2@AEAPEBVDeviceID@2@AEAHPEBW4DeviceType@2@@Z")
    
    p_dev_ids = ctypes.c_void_p(0)
    count = ctypes.c_int(0)
    st = fn_get_devices(p_mgr, ctypes.byref(p_dev_ids), ctypes.byref(count), None)
    print(f"GetAvailableDeviceIDs -> Status: {st}, Count: {count.value}")
