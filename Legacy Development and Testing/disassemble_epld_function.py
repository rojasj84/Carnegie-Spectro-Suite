import os
import struct

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI13332.dll"
with open(p, "rb") as f:
    data = f.read()

# Inspect 200 bytes around offset 0x3f16
target = 0x3f16
start = max(0, target - 60)
end = min(len(data), target + 120)
chunk = data[start:end]

print(f"Bytes around 0x3f16 in PI13332.dll (total {len(chunk)} bytes):")
print(chunk.hex())

# Let's decode x86 instructions manually
# 0x68 = push imm32, 0x6A = push imm8, 0xE8 = call rel32, 0x8B = mov, etc.
import binascii
print("\nFormatted Assembly View:")
idx = start
while idx < end:
    b = data[idx]
    if b == 0x6A: # push imm8
        val = data[idx+1]
        print(f"  0x{idx:04X}: push 0x{val:02X}")
        idx += 2
    elif b == 0x68: # push imm32
        val = struct.unpack('<I', data[idx+1:idx+5])[0]
        print(f"  0x{idx:04X}: push 0x{val:08X}")
        idx += 5
    elif b == 0xE8: # call rel32
        rel = struct.unpack('<i', data[idx+1:idx+5])[0]
        dest = idx + 5 + rel
        print(f"  0x{idx:04X}: call 0x{dest:04X}")
        idx += 5
    elif b == 0xC3:
        print(f"  0x{idx:04X}: ret")
        idx += 1
    elif b == 0x50:
        print(f"  0x{idx:04X}: push eax")
        idx += 1
    elif b == 0x51:
        print(f"  0x{idx:04X}: push ecx")
        idx += 1
    elif b == 0x52:
        print(f"  0x{idx:04X}: push edx")
        idx += 1
    elif b == 0x53:
        print(f"  0x{idx:04X}: push ebx")
        idx += 1
    elif b == 0x56:
        print(f"  0x{idx:04X}: push esi")
        idx += 1
    elif b == 0x57:
        print(f"  0x{idx:04X}: push edi")
        idx += 1
    elif b == 0x55:
        print(f"  0x{idx:04X}: push ebp")
        idx += 1
    else:
        # Just advance 1 byte
        idx += 1
