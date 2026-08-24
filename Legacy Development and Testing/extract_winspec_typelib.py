"""
Extract and Inspect Embedded COM Type Library from Winspec.exe
==============================================================
In VB6, programs communicate with WinSpec via its COM/ActiveX TypeLib:
  - ExpAutoApp
  - ExpAutoDoc
  - ExpAutoCalib
"""

import struct
import os

exe_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Winspec.exe"
with open(exe_path, "rb") as f:
    data = f.read()

# Search for TYPELIB magic in Winspec.exe: MSFT (0x5446534D) or SLTG (0x47544C53)
sltg_pos = data.find(b'SLTG')
msft_pos = data.find(b'MSFT')

print(f"SLTG TypeLib signature offset: 0x{sltg_pos:08X}" if sltg_pos != -1 else "SLTG: Not found")
print(f"MSFT TypeLib signature offset: 0x{msft_pos:08X}" if msft_pos != -1 else "MSFT: Not found")

tlb_pos = msft_pos if msft_pos != -1 else sltg_pos

if tlb_pos != -1:
    print(f"\nExtracting embedded Type Library starting at 0x{tlb_pos:08X}...")
    tlb_data = data[tlb_pos : tlb_pos + 65536] # slice type library chunk
    out_tlb = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\WinSpec_Extracted.tlb"
    with open(out_tlb, "wb") as fp:
        fp.write(tlb_data)
    print(f"Saved TypeLib to: {out_tlb}")

# Search for COM ProgIDs inside Winspec.exe
import re
progids = re.findall(rb'[A-Za-z0-9_]+\.[A-Za-z0-9_\.]+', data)
print(f"\nCOM ProgIDs discovered in Winspec.exe:")
for p in set(progids):
    p_str = p.decode('latin1', 'ignore')
    if any(k in p_str.upper() for k in ("WINX", "EXPAUTO", "ROPER", "WINSPEC", "SPECTRUM", "CAMERA")):
        print(f"  ProgID: {p_str}")
