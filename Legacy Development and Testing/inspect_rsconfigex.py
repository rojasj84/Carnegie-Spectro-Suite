import struct
import os

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\RSCONFIGEX.dll"
with open(p, "rb") as fp:
    data = fp.read()

pe_offset = struct.unpack('<I', data[0x3c:0x40])[0]
opt_hdr_size = struct.unpack('<H', data[pe_offset+20:pe_offset+22])[0]
num_sections = struct.unpack('<H', data[pe_offset+6:pe_offset+8])[0]
sec_tbl = pe_offset + 24 + opt_hdr_size

export_rva, export_sz = struct.unpack('<II', data[pe_offset+24+96:pe_offset+24+96+8])

def rva_to_offset(rva):
    for i in range(num_sections):
        sec = data[sec_tbl + i*40 : sec_tbl + (i+1)*40]
        vsize, vaddr, rsize, rptr = struct.unpack('<IIII', sec[8:24])
        if vaddr <= rva < vaddr + vsize:
            return rptr + (rva - vaddr)
    return None

exp_off = rva_to_offset(export_rva)
num_names = struct.unpack('<I', data[exp_off+24:exp_off+28])[0]
names_rva = struct.unpack('<I', data[exp_off+32:exp_off+36])[0]
names_off = rva_to_offset(names_rva)

print("Exports in RSCONFIGEX.dll:")
for n in range(num_names):
    nrva = struct.unpack('<I', data[names_off+n*4:names_off+(n+1)*4])[0]
    noff = rva_to_offset(nrva)
    name = data[noff:data.find(b'\x00', noff)].decode('latin1', 'ignore')
    print(" ", name)
