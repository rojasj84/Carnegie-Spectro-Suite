import ctypes
from ctypes import wintypes
import os

setupapi = ctypes.windll.setupapi
kernel32 = ctypes.windll.kernel32
ole32 = ctypes.windll.ole32

class GUID(ctypes.Structure):
    _fields_ = [
        ("Data1", ctypes.c_ulong),
        ("Data2", ctypes.c_ushort),
        ("Data3", ctypes.c_ushort),
        ("Data4", ctypes.c_ubyte * 8)
    ]

def parse_guid(guid_str):
    g = GUID()
    ole32.CLSIDFromString(ctypes.c_wchar_p(guid_str), ctypes.byref(g))
    return g

class SP_DEVINFO_DATA(ctypes.Structure):
    _fields_ = [
        ("cbSize", wintypes.DWORD),
        ("ClassGuid", GUID),
        ("DevInst", wintypes.DWORD),
        ("Reserved", ctypes.POINTER(ctypes.c_ulong))
    ]

g = parse_guid("{7b4b6729-58e7-4e50-a7d4-cdeafec229c1}")
DIGCF_PRESENT = 2

h_dev_info = setupapi.SetupDiGetClassDevsW(ctypes.byref(g), None, None, DIGCF_PRESENT)
print(f"SetupDiGetClassDevs handle: {h_dev_info}")

dev_info_data = SP_DEVINFO_DATA()
dev_info_data.cbSize = ctypes.sizeof(SP_DEVINFO_DATA)

idx = 0
while setupapi.SetupDiEnumDeviceInfo(h_dev_info, idx, ctypes.byref(dev_info_data)):
    print(f"Found Device #{idx} with DevInst: {dev_info_data.DevInst}")
    
    # Get device description
    buf = ctypes.create_unicode_buffer(512)
    req_sz = wintypes.DWORD(0)
    SPDRP_DEVICEDESC = 0
    SPDRP_FRIENDLYNAME = 12
    SPDRP_HARDWAREID = 1
    
    setupapi.SetupDiGetDeviceRegistryPropertyW(h_dev_info, ctypes.byref(dev_info_data), SPDRP_FRIENDLYNAME, None, ctypes.byref(buf), 512, ctypes.byref(req_sz))
    print(f"  FriendlyName: {buf.value}")
    
    setupapi.SetupDiGetDeviceRegistryPropertyW(h_dev_info, ctypes.byref(dev_info_data), SPDRP_HARDWAREID, None, ctypes.byref(buf), 512, ctypes.byref(req_sz))
    print(f"  HardwareID: {buf.value}")
    
    idx += 1

setupapi.SetupDiDestroyDeviceInfoList(h_dev_info)
