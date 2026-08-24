import struct
import re

for dll_name in ["PI13332.dll", "PISCC32.dll", "pidc32.dll", "PIXCM32.dll"]:
    p = rf"C:\Users\LabUserR129\Desktop\WinSpec32_Full\{dll_name}"
    with open(p, "rb") as f:
        data = f.read()

    print(f"\n{'='*70}\n Scanning {dll_name} for Vendor Request Signatures\n{'='*70}")
    
    # In stdcall, USBDRVD_VendorOrClassRequestOut parameters are pushed right-to-left:
    # push dwLength
    # push pBuffer
    # push wIndex
    # push wValue
    # push bRequest (1 byte)
    # push bRecipient (0)
    # push bRequestType (2)
    # push bDirection (0)
    # push hDev
    # call USBDRVD_VendorOrClassRequestOut
    
    # Look for push 0 (dir), push 2 (vendor), push 0 (device) -> 6A 00 6A 02 6A 00
    # or variations: 6A 00 6A 02 6A xx
    matches = [m.start() for m in re.finditer(rb'\x6a\x02\x6a\x00', data)]
    print(f"Found {len(matches)} Vendor Request sequences (push 2, push 0):")
    
    for m in matches[:15]:
        # Inspect 30 bytes before and after
        start = max(0, m - 20)
        end = min(len(data), m + 35)
        chunk = data[start:end]
        print(f"  Offset 0x{m:05X}: {chunk.hex()}")
