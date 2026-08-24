"""
Disassemble PIDC32.dll Ring Buffer and DMA Transfer Engine
==========================================================
Scans pidc32.dll for:
  - Memory buffer allocation functions
  - Worker thread loop and USB bulk read loop
  - Frame completion event handles
"""

import struct
import os
import re

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\pidc32.dll"
with open(dll_path, "rb") as f:
    data = f.read()

print("=" * 75)
print(f" Disassembly of PIDC32.dll DMA Ring Buffer Engine ({len(data)} bytes)")
print("=" * 75)

# PE Header parsing
pe_offset = struct.unpack('<I', data[0x3c:0x40])[0]
num_sections = struct.unpack('<H', data[pe_offset+6:pe_offset+8])[0]
opt_hdr_size = struct.unpack('<H', data[pe_offset+20:pe_offset+22])[0]
sec_tbl = pe_offset + 24 + opt_hdr_size

def rva_to_offset(rva):
    for i in range(num_sections):
        sec = data[sec_tbl + i*40 : sec_tbl + (i+1)*40]
        vsize, vaddr, rsize, rptr = struct.unpack('<IIII', sec[8:24])
        if vaddr <= rva < vaddr + vsize:
            return rptr + (rva - vaddr)
    return None

# Parse Export Table
export_rva = struct.unpack('<I', data[pe_offset+24+96:pe_offset+24+96+4])[0]
exp_off = rva_to_offset(export_rva)

num_funcs = struct.unpack('<I', data[exp_off+20:exp_off+24])[0]
num_names = struct.unpack('<I', data[exp_off+24:exp_off+28])[0]
funcs_rva = struct.unpack('<I', data[exp_off+28:exp_off+32])[0]
names_rva = struct.unpack('<I', data[exp_off+32:exp_off+36])[0]
ords_rva = struct.unpack('<I', data[exp_off+36:exp_off+40])[0]

names_off = rva_to_offset(names_rva)
funcs_off = rva_to_offset(funcs_rva)
ords_off = rva_to_offset(ords_rva)

exports = []
for i in range(num_names):
    nrva = struct.unpack('<I', data[names_off+i*4:names_off+(i+1)*4])[0]
    noff = rva_to_offset(nrva)
    name = data[noff:data.find(b'\x00', noff)].decode('latin1', 'ignore')
    
    ord_idx = struct.unpack('<H', data[ords_off+i*2:ords_off+(i+1)*2])[0]
    frva = struct.unpack('<I', data[funcs_off+ord_idx*4:funcs_off+(ord_idx+1)*4])[0]
    foff = rva_to_offset(frva)
    exports.append((name, frva, foff))

print(f"Total Exports in pidc32.dll: {len(exports)}")
for name, frva, foff in exports:
    print(f"  Export: {name} -> RVA 0x{frva:08X} (Offset 0x{foff:04X})")

# Look for CreateThread in IAT or .text
# Search for calls to CreateThread or _beginthreadex
print("\nSearching for Thread Creation and DMA Engine in pidc32.dll...")
matches = [m.start() for m in re.finditer(rb'\x68.{4}\xe8', data)]
print(f"Found {len(matches)} push imm32 / call sequences.")
