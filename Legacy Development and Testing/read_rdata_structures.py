import struct

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI13332.dll"
with open(dll_path, "rb") as f:
    data = f.read()

# PE Image Base is 0x10000000
# Virtual Address 0x1000C4F8 -> RVA 0xC4F8 -> File Offset in .rdata / .data
# Let's find sections
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

targets = [0xC514, 0xC4F8, 0xC4F4, 0xC4CC, 0xC5C0, 0xC5B8, 0xC5B0]

print("=" * 70)
print(" Inspecting Hardware Command Strings/Structures in PI13332.dll")
print("=" * 70)

for va in targets:
    off = rva_to_offset(va)
    if off is not None:
        chunk = data[off:off+32]
        # Try decoding as ASCII string
        str_val = ""
        for b in chunk:
            if b == 0:
                break
            str_val += chr(b) if 32 <= b <= 126 else "."
        print(f"RVA 0x{va:04X} (File Offset 0x{off:04X}):")
        print(f"  Hex: {chunk.hex()}")
        print(f"  Str: '{str_val}'")
