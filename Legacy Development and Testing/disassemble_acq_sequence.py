import struct

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI13332.dll"
with open(dll_path, "rb") as f:
    data = f.read()

# Inspect offset 0x7A00 to 0x7B00
start = 0x7A00
end = 0x7B00
chunk = data[start:end]

print("=" * 70)
print(f" Acquisition Sequence Disassembly (0x{start:04X} - 0x{end:04X})")
print("=" * 70)

idx = start
while idx < end:
    b = data[idx]
    if b == 0x6A: # push imm8
        v = data[idx+1]
        print(f"  0x{idx:04X}: push 0x{v:02X}")
        idx += 2
    elif b == 0x68: # push imm32
        v = struct.unpack('<I', data[idx+1:idx+5])[0]
        print(f"  0x{idx:04X}: push 0x{v:08X}")
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
    elif b == 0x56:
        print(f"  0x{idx:04X}: push esi")
        idx += 1
    elif b == 0x57:
        print(f"  0x{idx:04X}: push edi")
        idx += 1
    elif b == 0x5D:
        print(f"  0x{idx:04X}: pop ebp")
        idx += 1
    elif b == 0x5E:
        print(f"  0x{idx:04X}: pop esi")
        idx += 1
    elif b == 0x5F:
        print(f"  0x{idx:04X}: pop edi")
        idx += 1
    else:
        idx += 1
