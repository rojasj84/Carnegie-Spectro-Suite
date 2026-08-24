import ctypes
from ctypes import wintypes
import os

# Device Interface GUID from piusbwdf.inf: {7B4B6729-58E7-4e50-A7D4-CDEAFEC229C1}
# Class GUID from PIUSB.inf: {B0FB3FB4-AD95-4a5c-974D-D59EB3D83171}

setupapi = ctypes.windll.setupapi

class GUID(ctypes.Structure):
    _fields_ = [
        ("Data1", ctypes.c_ulong),
        ("Data2", ctypes.c_ushort),
        ("Data3", ctypes.c_ushort),
        ("Data4", ctypes.c_ubyte * 8)
    ]

ole32 = ctypes.windll.ole32

def parse_guid(guid_str):
    g = GUID()
    ole32.CLSIDFromString(ctypes.c_wchar_p(guid_str), ctypes.byref(g))
    return g

for guid_name, guid_str in [
    ("PIUSB64 WDF", "{7B4B6729-58E7-4e50-A7D4-CDEAFEC229C1}"),
    ("PIUSB Legacy", "{B0FB3FB4-AD95-4a5c-974D-D59EB3D83171}"),
    ("USB Device Class", "{A5DCBF10-6530-11D2-901F-00C04FB951ED}")
]:
    g = parse_guid(guid_str)
    DIGCF_PRESENT = 2
    DIGCF_DEVICEINTERFACE = 16

    h_dev_info = setupapi.SetupDiGetClassDevsW(ctypes.byref(g), None, None, DIGCF_PRESENT | DIGCF_DEVICEINTERFACE)
    print(f"=== Checking GUID {guid_name} ({guid_str}) ===")
    
    class SP_DEVICE_INTERFACE_DATA(ctypes.Structure):
        _fields_ = [
            ("cbSize", wintypes.DWORD),
            ("InterfaceClassGuid", GUID),
            ("Flags", wintypes.DWORD),
            ("Reserved", ctypes.POINTER(ctypes.c_ulong))
        ]

    dev_iface_data = SP_DEVICE_INTERFACE_DATA()
    dev_iface_data.cbSize = ctypes.sizeof(SP_DEVICE_INTERFACE_DATA)

    idx = 0
    while setupapi.SetupDiEnumDeviceInterfaces(h_dev_info, None, ctypes.byref(g), idx, ctypes.byref(dev_iface_data)):
        # Get detail size
        req_size = wintypes.DWORD(0)
        setupapi.SetupDiGetDeviceInterfaceDetailW(h_dev_info, ctypes.byref(dev_iface_data), None, 0, ctypes.byref(req_size), None)
        
        detail_buf = ctypes.create_string_buffer(req_size.value)
        # On 64-bit, cbSize is 8 bytes for SP_DEVICE_INTERFACE_DETAIL_DATA_W
        detail_size = 8 if ctypes.sizeof(ctypes.c_void_p) == 8 else (4 + 2)
        ctypes.memmove(detail_buf, ctypes.byref(wintypes.DWORD(detail_size)), 4)
        
        if setupapi.SetupDiGetDeviceInterfaceDetailW(h_dev_info, ctypes.byref(dev_iface_data), detail_buf, req_size.value, None, None):
            dev_path = ctypes.wstring_at(ctypes.addressof(detail_buf) + 4)
            print(f"  [Device #{idx}] Path: {dev_path}")
            
            # Try opening device handle
            kernel32 = ctypes.windll.kernel32
            GENERIC_READ = 0x80000000
            GENERIC_WRITE = 0x40000000
            OPEN_EXISTING = 3
            FILE_SHARE_READ = 1
            FILE_SHARE_WRITE = 2
            
            h_file = kernel32.CreateFileW(dev_path, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, None, OPEN_EXISTING, 0, None)
            print(f"    CreateFileW handle: {h_file} (INVALID = -1)")
            if h_file != -1:
                kernel32.CloseHandle(h_file)

        idx += 1

    setupapi.SetupDiDestroyDeviceInfoList(h_dev_info)
