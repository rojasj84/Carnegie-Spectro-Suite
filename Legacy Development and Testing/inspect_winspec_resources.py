"""
Inspect WinSpec.exe Resources, Imports, and Embedded Modules
"""

import struct
import os

exe_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Winspec.exe"
with open(exe_path, "rb") as f:
    data = f.read()

print(f"Winspec.exe Total Size: {len(data):,} bytes")

# PE Header parsing
pe_offset = struct.unpack('<I', data[0x3c:0x40])[0]
magic = data[pe_offset:pe_offset+4]
print(f"PE Magic: {magic}")

num_sections = struct.unpack('<H', data[pe_offset+6:pe_offset+8])[0]
opt_hdr_size = struct.unpack('<H', data[pe_offset+20:pe_offset+22])[0]
sec_tbl = pe_offset + 24 + opt_hdr_size

print(f"Number of Sections: {num_sections}")

sections = []
for i in range(num_sections):
    sec = data[sec_tbl + i*40 : sec_tbl + (i+1)*40]
    name = sec[:8].rstrip(b'\x00').decode('latin1', 'ignore')
    vsize, vaddr, rsize, rptr = struct.unpack('<IIII', sec[8:24])
    sections.append((name, vaddr, vsize, rptr, rsize))
    print(f"  Section {i}: {name:<10} VirtualAddr=0x{vaddr:08X} Size=0x{vsize:08X} RawPtr=0x{rptr:08X} RawSize=0x{rsize:08X}")

def rva_to_offset(rva):
    for name, vaddr, vsize, rptr, rsize in sections:
        if vaddr <= rva < vaddr + vsize:
            return rptr + (rva - vaddr)
    return None

# Parse Import Table
import_rva = struct.unpack('<I', data[pe_offset+24+104:pe_offset+24+104+4])[0]
imp_off = rva_to_offset(import_rva)

print(f"\n{'='*70}\n DLLs Imported by Winspec.exe (Import Table)\n{'='*70}")
if imp_off:
    pos = imp_off
    while True:
        desc = data[pos:pos+20]
        if len(desc) < 20 or all(b == 0 for b in desc):
            break
        o_first_thunk, t_stamp, f_chain, name_rva, f_thunk = struct.unpack('<IIIII', desc)
        if name_rva == 0:
            break
        name_off = rva_to_offset(name_rva)
        dll_name = data[name_off:data.find(b'\x00', name_off)].decode('latin1', 'ignore')
        print(f"  Imported DLL: {dll_name}")
        pos += 20

# Search for embedded PE signatures (MZ / PE) inside Winspec.exe data
print(f"\n{'='*70}\n Scanning Winspec.exe for Embedded DLLs / Binaries\n{'='*70}")
mz_matches = []
idx = 100
while idx < len(data) - 1000:
    if data[idx:idx+2] == b'MZ':
        # Check if it has a valid PE header
        pe_sub = struct.unpack('<I', data[idx+0x3c:idx+0x40])[0] if idx + 0x40 < len(data) else 0
        if 0 < pe_sub < 1024 and idx + pe_sub + 4 < len(data):
            if data[idx+pe_sub:idx+pe_sub+4] == b'PE\x00\x00':
                mz_matches.append((idx, pe_sub))
    idx += 1

print(f"Found {len(mz_matches)} embedded PE modules inside Winspec.exe:")
for m_idx, pe_sub in mz_matches:
    print(f"  Embedded PE at offset 0x{m_idx:08X}")
