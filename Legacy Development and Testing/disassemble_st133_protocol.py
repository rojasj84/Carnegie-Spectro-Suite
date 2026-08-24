"""
Disassemble WinSpec ST-133 Driver DLLs to Extract Exact USB Protocol
===================================================================
Scans PI13332.dll, PIDC32.dll, and USBDRVD.DLL for:
  - Vendor Request opcodes (bRequest, wValue, wIndex, wLength)
  - Control Transfer packets sent to ST-133 FPGA
  - Bulk transfer pipe numbers and endpoints
"""

import os
import re
import struct

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"

def scan_dll(dll_name):
    p = os.path.join(dll_dir, dll_name)
    if not os.path.exists(p):
        print(f"File not found: {p}")
        return
        
    with open(p, "rb") as f:
        data = f.read()
        
    print(f"\n{'='*70}\n Disassembly & Constant Analysis: {dll_name} ({len(data)} bytes)\n{'='*70}")
    
    # 1. Search for IOCTL constants
    # 0x00222010, 0x00222048, 0x0022204C, etc.
    ioctls = [
        (0x00222010, "IOCTL_EZUSB_VENDOR_OR_CLASS_REQUEST"),
        (0x00222048, "IOCTL_EZUSB_BULK_READ"),
        (0x0022204C, "IOCTL_EZUSB_BULK_WRITE"),
        (0x00222014, "IOCTL_EZUSB_ANCHOR_DOWNLOAD"),
        (0x00222018, "IOCTL_EZUSB_RESET"),
        (0x0022201C, "IOCTL_EZUSB_RESETPIPE"),
        (0x00222020, "IOCTL_EZUSB_START_CONT_TRANSFER"),
    ]
    
    for val, name in ioctls:
        packed = struct.pack('<I', val)
        matches = [m.start() for m in re.finditer(re.escape(packed), data)]
        if matches:
            print(f"  [IOCTL] Found {name} (0x{val:08X}) at offsets: {[hex(m) for m in matches]}")
            
            # Disassemble around the offset to see parameters pushed
            for m in matches[:5]:
                start = max(0, m - 40)
                end = min(len(data), m + 40)
                chunk = data[start:end]
                print(f"    Offset {hex(m)} context (hex): {chunk.hex()}")

    # 2. Look for vendor request byte sequences
    # Push 0xA0, Push 0xE600, etc.
    # 0x6A 0xA0 (push 0xA0) or 0xB8 0xA0 0x00 0x00 0x00 (mov eax, 0xA0)
    print("\n  Searching for Vendor Request opcodes in code section...")
    opcodes = [
        (b'\x6a\xa0', "push 0xA0 (Anchor Download)"),
        (b'\x6a\x01', "push 0x01 (Start Exposure)"),
        (b'\x6a\x8d', "push 0x8D (Write EPLD)"),
        (b'\x6a\x8e', "push 0x8E (Read EPLD)"),
        (b'\x6a\x82', "push 0x82 (Get Temp)"),
        (b'\x6a\x84', "push 0x84 (Get Status)"),
    ]
    
    for op, desc in opcodes:
        matches = [m.start() for m in re.finditer(re.escape(op), data)]
        if matches:
            print(f"    [OPCODE] {desc} found {len(matches)} times at offsets: {[hex(m) for m in matches[:6]]}")

for dll in ["USBDRVD.DLL", "PI13332.dll", "pidc32.dll", "PISCC32.dll", "PIXCM32.dll"]:
    scan_dll(dll)
