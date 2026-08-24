import struct
import re

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI13332.dll"
with open(dll_path, "rb") as f:
    data = f.read()

# Target RVA 0x3F10 (start of function containing 0x3F16)
# Search for call rel32 (0xE8 xxxxxxxx) where target = 0x3F10
target_rva = 0x00003F10
print(f"Searching for all call instructions to 0x{target_rva:08X} in PI13332.dll...")

# Find all 0xE8 instructions in .text
text_start = 0x1000
text_len = 45056

calls = []
for i in range(text_start, text_start + text_len - 5):
    if data[i] == 0xE8:
        rel = struct.unpack('<i', data[i+1:i+5])[0]
        dest_rva = (i - text_start + 0x1000) + 5 + rel
        if abs(dest_rva - target_rva) < 0x20:
            calls.append((i, dest_rva))

print(f"Found {len(calls)} calls to EPLD function:")
for off, dest in calls:
    print(f"  Call at offset 0x{off:04X} -> dest 0x{dest:04X}")
    # Inspect 30 bytes before the call to see parameters
    chunk = data[off-30 : off+5]
    print(f"    Hex before call: {chunk.hex()}")
