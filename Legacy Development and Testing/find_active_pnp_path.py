import ctypes
from ctypes import wintypes
import os

setupapi = ctypes.windll.setupapi

class GUID(ctypes.Structure):
    _fields_ = [
        ("Data1", wintypes.DWORD),
        ("Data2", wintypes.WORD),
        ("Data3", wintypes.WORD),
        ("Data4", ctypes.c_ubyte * 8)
    ]

# Princeton Instruments USB Interface GUID: {3972C010-8EA9-4939-926E-8A9DB35BA0A6}
guid = GUID(0x3972c010, 0x8ea9, 0x4939, (ctypes.c_ubyte * 8)(0x92, 0x6e, 0x8a, 0x9d, 0xb3, 0x5b, 0xa0, 0xa6))

DIGCF_PRESENT = 0x00000002
DIGCF_DEVICEINTERFACE = 0x00000010

h_dev_info = setupapi.SetupDiGetClassDevsW(
    ctypes.byref(guid),
    None,
    None,
    DIGCF_PRESENT | DIGCF_DEVICEINTERFACE
)

print(f"SetupDiGetClassDevs Handle: {h_dev_info}")

class SP_DEVICE_INTERFACE_DATA(ctypes.Structure):
    _fields_ = [
        ("cbSize", wintypes.DWORD),
        ("InterfaceClassGuid", GUID),
        ("Flags", wintypes.DWORD),
        ("Reserved", ctypes.c_ulonglong)
    ]

class SP_DEVICE_INTERFACE_DETAIL_DATA(ctypes.Structure):
    _fields_ = [
        ("cbSize", wintypes.DWORD),
        ("DevicePath", ctypes.c_wchar * 512)
    ]

if h_dev_info != -1:
    idx = 0
    found_paths = []
    while True:
        ifdata = SP_DEVICE_INTERFACE_DATA()
        ifdata.cbSize = ctypes.sizeof(SP_DEVICE_INTERFACE_DATA)
        res = setupapi.SetupDiEnumDeviceInterfaces(h_dev_info, None, ctypes.byref(guid), idx, ctypes.byref(ifdata))
        if not res:
            break
        
        detail = SP_DEVICE_INTERFACE_DETAIL_DATA()
        detail.cbSize = 8 if ctypes.sizeof(ctypes.c_void_p) == 8 else 5 # 8 bytes on x64
        req_size = wintypes.DWORD(0)
        
        res_detail = setupapi.SetupDiGetDeviceInterfaceDetailW(
            h_dev_info,
            ctypes.byref(ifdata),
            ctypes.byref(detail),
            ctypes.sizeof(detail),
            ctypes.byref(req_size),
            None
        )
        if res_detail:
            p = detail.DevicePath
            print(f"Found Active Interface #{idx}: {p}")
            found_paths.append(p)
        idx += 1
        
    setupapi.SetupDiDestroyDeviceInfoList(h_dev_info)
    if not found_paths:
        print("No active device interfaces found with GUID {3972C010-8EA9-4939-926E-8A9DB35BA0A6}.")
        print("Checking if camera is physically connected to USB...")
