import struct
import os

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PIXCM32.dll"
with open(p, "rb") as fp:
    data = fp.read()

pe_offset = struct.unpack('<I', data[0x3c:0x40])[0]
opt_hdr_size = struct.unpack('<H', data[pe_offset+20:pe_offset+22])[0]
num_sections = struct.unpack('<H', data[pe_offset+6:pe_offset+8])[0]
sec_tbl = pe_offset + 24 + opt_hdr_size

export_rva, export_sz = struct.unpack('<II', data[pe_offset+24+96:pe_offset+24+96+8])
for i in range(num_sections):
    sec = data[sec_tbl + i*40 : sec_tbl + (i+1)*40]
    vsize, vaddr, rsize, rptr = struct.unpack('<IIII', sec[8:24])
    if vaddr <= export_rva < vaddr + vsize:
        exp_off = rptr + (export_rva - vaddr)
        num_names = struct.unpack('<I', data[exp_off+24:exp_off+28])[0]
        names_rva = struct.unpack('<I', data[exp_off+32:exp_off+36])[0]
        names_off = rptr + (names_rva - vaddr)
        exported = []
        for n in range(num_names):
            nrva = struct.unpack('<I', data[names_off+n*4:names_off+(n+1)*4])[0]
            noff = rptr + (nrva - vaddr)
            name = data[noff:data.find(b'\x00', noff)].decode('latin1', 'ignore')
            exported.append(name)
        print(f"Total exports in PIXCM32.dll: {len(exported)}")
        temp_funcs = [e for e in exported if 'TEMP' in e.upper() or 'ACQ' in e.upper() or 'START' in e.upper() or 'FRAME' in e.upper()]
        for e in temp_funcs:
            print(" ", e)
