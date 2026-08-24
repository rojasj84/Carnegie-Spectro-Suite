import ctypes
import os
import sys

# Test COM dispatch using ctypes/comtypes or raw IDispatch
# In 32-bit Windows, CLSID {1A762222-D8BA-11CF-AFC2-508201C10000} is WinX32.ExpSetup

CLSID_ExpSetup = "{1A762222-D8BA-11CF-AFC2-508201C10000}"
CLSID_DocFile  = "{1A762223-D8BA-11CF-AFC2-508201C10000}"

ole32 = ctypes.windll.ole32
oleaut32 = ctypes.windll.oleaut32

ole32.CoInitialize(None)

class GUID(ctypes.Structure):
    _fields_ = [
        ("Data1", ctypes.c_ulong),
        ("Data2", ctypes.c_ushort),
        ("Data3", ctypes.c_ushort),
        ("Data4", ctypes.c_ubyte * 8)
    ]

def get_guid(guid_str):
    guid = GUID()
    ole32.CLSIDFromString(ctypes.c_wchar_p(guid_str), ctypes.byref(guid))
    return guid

clsid_exp = get_guid(CLSID_ExpSetup)
clsid_doc = get_guid(CLSID_DocFile)

IID_IDispatch = get_guid("{00020400-0000-0000-C000-000000000046}")

p_disp = ctypes.c_void_p(0)
CLSCTX_LOCAL_SERVER = 4
CLSCTX_INPROC_SERVER = 1
CLSCTX_ALL = 23

# Try connecting to already running instance via GetActiveObject
p_unk = ctypes.c_void_p(0)
res_act = oleaut32.GetActiveObject(ctypes.byref(clsid_exp), None, ctypes.byref(p_unk))
print(f"GetActiveObject(WinX32.ExpSetup) -> res: 0x{res_act & 0xFFFFFFFF:08X} (0x0 = SUCCESS)")

res_act_doc = oleaut32.GetActiveObject(ctypes.byref(clsid_doc), None, ctypes.byref(p_unk))
print(f"GetActiveObject(WinX32.DocFile)  -> res: 0x{res_act_doc & 0xFFFFFFFF:08X} (0x0 = SUCCESS)")

ole32.CoUninitialize()
