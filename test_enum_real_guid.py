import ctypes
from ctypes import wintypes
import os

setupapi = ctypes.windll.setupapi
ole32 = ctypes.windll.ole32

class GUID(ctypes.Structure):
    _fields_ = [
        ("Data1", ctypes.c_ulong),
        ("Data2", ctypes.c_ushort),
        ("Data3", ctypes.c_ushort),
        ("Data4", ctypes.c_ubyte * 8)
    ]

g = GUID()
ole32.CLSIDFromString(ctypes.c_wchar_p("{3972C010-8EA9-4939-926E-8A9DB35BA0A6}"), ctypes.byref(g))

DIGCF_PRESENT = 2
DIGCF_DEVICEINTERFACE = 16

h_dev = setupapi.SetupDiGetClassDevsW(ctypes.byref(g), None, None, DIGCF_PRESENT | DIGCF_DEVICEINTERFACE)
print(f"SetupDiGetClassDevsW handle: {h_dev}")

class SP_DEVICE_INTERFACE_DATA(ctypes.Structure):
    _fields_ = [
        ("cbSize", wintypes.DWORD),
        ("InterfaceClassGuid", GUID),
        ("Flags", wintypes.DWORD),
        ("Reserved", ctypes.POINTER(ctypes.c_ulong))
    ]

dev_iface = SP_DEVICE_INTERFACE_DATA()
dev_iface.cbSize = ctypes.sizeof(SP_DEVICE_INTERFACE_DATA)

idx = 0
while setupapi.SetupDiEnumDeviceInterfaces(h_dev, None, ctypes.byref(g), idx, ctypes.byref(dev_iface)):
    req_sz = wintypes.DWORD(0)
    setupapi.SetupDiGetDeviceInterfaceDetailW(h_dev, ctypes.byref(dev_iface), None, 0, ctypes.byref(req_sz), None)
    
    buf = ctypes.create_string_buffer(req_sz.value)
    detail_size = 8 if ctypes.sizeof(ctypes.c_void_p) == 8 else (4 + 2)
    ctypes.memmove(buf, ctypes.byref(wintypes.DWORD(detail_size)), 4)
    
    if setupapi.SetupDiGetDeviceInterfaceDetailW(h_dev, ctypes.byref(dev_iface), buf, req_sz.value, None, None):
        dev_path = ctypes.wstring_at(ctypes.addressof(buf) + 4)
        print(f"  SUCCESS! Discovered Device #{idx} Path: {dev_path}")
    idx += 1

setupapi.SetupDiDestroyDeviceInfoList(h_dev)
