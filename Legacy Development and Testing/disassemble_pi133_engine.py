"""
Deep Disassembly of PI13332.dll to Extract Complete Hardware Register Table
==========================================================================
Scans all functions in PI13332.dll for:
  - Sequences of Vendor Requests (0x8D, 0x8E, 0x80, 0x01, etc.)
  - EPLD register addresses and initialization constants
  - ADC clock prescalers, shift register timings, and ROI parameters
"""

import os
import struct
import re

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI13332.dll"
with open(dll_path, "rb") as f:
    data = f.read()

print("=" * 75)
print(f" Deep Disassembly of ST-133 Hardware Controller Engine (PI13332.dll)")
print("=" * 75)

# PE Header parsing to get .text section
pe_offset = struct.unpack('<I', data[0x3c:0x40])[0]
num_sections = struct.unpack('<H', data[pe_offset+6:pe_offset+8])[0]
opt_hdr_size = struct.unpack('<H', data[pe_offset+20:pe_offset+22])[0]
sec_tbl = pe_offset + 24 + opt_hdr_size

text_data = None
text_rva = 0

for i in range(num_sections):
    sec = data[sec_tbl + i*40 : sec_tbl + (i+1)*40]
    name = sec[:8].rstrip(b'\x00').decode('latin1', 'ignore')
    vsize, vaddr, rsize, rptr = struct.unpack('<IIII', sec[8:24])
    if name == '.text':
        text_data = data[rptr : rptr + rsize]
        text_rva = vaddr
        print(f"Found .text section: {len(text_data)} bytes at RVA 0x{text_rva:08X} (offset 0x{rptr:08X})")
        break

# Look for sequences where 0x8D (Write EPLD) is pushed or loaded
# Patterns:
# 6A 8D (push 0x8D)
# B8 8D 00 00 00 (mov eax, 0x8D)
# C6 / C7 (mov byte/dword ptr ..., 0x8D)

found_epld = []
for m in re.finditer(rb'\x6a\x8d', text_data):
    found_epld.append(m.start())

print(f"\nFound {len(found_epld)} references to EPLD Write (0x8D) in .text:")
for off in found_epld:
    print(f"  Offset in .text: 0x{off:04X} (RVA: 0x{text_rva + off:08X})")
    
    # Print 40 bytes before and 40 bytes after
    start = max(0, off - 30)
    end = min(len(text_data), off + 50)
    chunk = text_data[start:end]
    print(f"    Context (hex): {chunk.hex()}")

# Look for all constants loaded into registers in the functions containing 0x8D
# Let's inspect the entire function surrounding 0x3f16
func_start = max(0, found_epld[0] - 200) if found_epld else 0
func_end = min(len(text_data), func_start + 400)

print(f"\nDetailed byte analysis of EPLD control function (0x{func_start:04X} - 0x{func_end:04X}):")
sub_chunk = text_data[func_start:func_end]

# Extract all numeric push constants (6A xx or 68 xxxxxxxx)
constants = []
idx = 0
while idx < len(sub_chunk) - 4:
    b = sub_chunk[idx]
    if b == 0x6A: # push imm8
        c = sub_chunk[idx+1]
        constants.append((func_start + idx, f"push 0x{c:02X} ({c})"))
        idx += 2
    elif b == 0x68: # push imm32
        c = struct.unpack('<I', sub_chunk[idx+1:idx+5])[0]
        constants.append((func_start + idx, f"push 0x{c:08X} ({c})"))
        idx += 5
    elif b == 0xB8: # mov eax, imm32
        c = struct.unpack('<I', sub_chunk[idx+1:idx+5])[0]
        constants.append((func_start + idx, f"mov eax, 0x{c:08X} ({c})"))
        idx += 5
    elif b == 0xBA: # mov edx, imm32
        c = struct.unpack('<I', sub_chunk[idx+1:idx+5])[0]
        constants.append((func_start + idx, f"mov edx, 0x{c:08X} ({c})"))
        idx += 5
    else:
        idx += 1

print("\nExtracted Register/Constant Sequence:")
for off, desc in constants:
    print(f"  0x{off:04X}: {desc}")
