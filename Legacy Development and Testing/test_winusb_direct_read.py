"""
Test WinUsb_Initialize and WinUsb_ReadPipe on ST-133 (64-Bit Native)
"""

import ctypes
from ctypes import wintypes
import os

kernel32 = ctypes.windll.kernel32
winusb = ctypes.windll.winusb

guid_str = "{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
path = f"\\\\?\\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{guid_str}"

h_file = kernel32.CreateFileW(
    path,
    0x80000000 | 0x40000000,
    3,
    None,
    3,
    0x40000000, # OVERLAPPED
    None
)

print(f"File Handle: {h_file}")

if h_file != -1:
    h_winusb = ctypes.c_void_p(0)
    fn_init = getattr(winusb, "WinUsb_Initialize", None)
    if fn_init:
        res = fn_init(h_file, ctypes.byref(h_winusb))
        err = kernel32.GetLastError()
        w_hex = f"0x{h_winusb.value:08X}" if h_winusb.value else "0x0"
        print(f"WinUsb_Initialize -> Result: {res}, WinUSB Handle: {w_hex}, Error: {err}")
        
        if res and h_winusb.value:
            # Query Pipe Information
            class USB_INTERFACE_DESCRIPTOR(ctypes.Structure):
                _fields_ = [
                    ("bLength", ctypes.c_ubyte),
                    ("bDescriptorType", ctypes.c_ubyte),
                    ("bInterfaceNumber", ctypes.c_ubyte),
                    ("bAlternateSetting", ctypes.c_ubyte),
                    ("bNumEndpoints", ctypes.c_ubyte),
                    ("bInterfaceClass", ctypes.c_ubyte),
                    ("bInterfaceSubClass", ctypes.c_ubyte),
                    ("bInterfaceProtocol", ctypes.c_ubyte),
                    ("iInterface", ctypes.c_ubyte)
                ]
            
            if_desc = USB_INTERFACE_DESCRIPTOR()
            fn_desc = getattr(winusb, "WinUsb_QueryInterfaceSettings")
            res_desc = fn_desc(h_winusb, 0, ctypes.byref(if_desc))
            print(f"QueryInterfaceSettings -> Endpoints: {if_desc.bNumEndpoints}")
            
            # Query each pipe
            class WINUSB_PIPE_INFORMATION(ctypes.Structure):
                _fields_ = [
                    ("PipeType", wintypes.ULONG),
                    ("PipeId", ctypes.c_ubyte),
                    ("MaximumPacketSize", wintypes.USHORT),
                    ("Interval", ctypes.c_ubyte)
                ]
            
            fn_pipe = getattr(winusb, "WinUsb_QueryPipe")
            for p in range(if_desc.bNumEndpoints):
                pipe_info = WINUSB_PIPE_INFORMATION()
                res_p = fn_pipe(h_winusb, 0, p, ctypes.byref(pipe_info))
                print(f"  Pipe #{p}: ID=0x{pipe_info.PipeId:02X}, Type={pipe_info.PipeType}, MaxPacket={pipe_info.MaximumPacketSize}")

            winusb.WinUsb_Free(h_winusb)

    kernel32.CloseHandle(h_file)
