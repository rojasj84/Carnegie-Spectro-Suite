import struct

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PIXCM32.dll"
with open(dll_path, "rb") as f:
    data = f.read()

start = 0x27BF0
end = 0x27C70
chunk = data[start:end]

print("=" * 70)
print(f" Disassembly of PIXCM Acquisition Trigger (0x{start:05X} - 0x{end:05X})")
print("=" * 70)

idx = start
while idx < end:
    b = data[idx]
    if b == 0x6A: # push imm8
        v = data[idx+1]
        print(f"  0x{idx:05X}: push 0x{v:02X}")
        idx += 2
    elif b == 0x68: # push imm32
        v = struct.unpack('<I', data[idx+1:idx+5])[0]
        print(f"  0x{idx:05X}: push 0x{v:08X}")
        idx += 5
    elif b == 0xE8: # call rel32
        rel = struct.unpack('<i', data[idx+1:idx+5])[0]
        dest = idx + 5 + rel
        print(f"  0x{idx:05X}: call 0x{dest:05X}")
        idx += 5
    elif b == 0x8B: # mov r32, r/m32
        print(f"  0x{idx:05X}: mov ... (0x{data[idx:idx+3].hex()})")
        idx += 3
    elif b == 0x8D: # lea
        print(f"  0x{idx:05X}: lea ... (0x{data[idx:idx+3].hex()})")
        idx += 3
    elif b == 0x50:
        print(f"  0x{idx:05X}: push eax")
        idx += 1
    elif b == 0x51:
        print(f"  0x{idx:05X}: push ecx")
        idx += 1
    elif b == 0x52:
        print(f"  0x{idx:05X}: push edx")
        idx += 1
    elif b == 0x53:
        print(f"  0x{idx:05X}: push ebx")
        idx += 1
    elif b == 0x56:
        print(f"  0x{idx:05X}: push esi")
        idx += 1
    elif b == 0x57:
        print(f"  0x{idx:05X}: push edi")
        idx += 1
    elif b == 0xC3:
        print(f"  0x{idx:05X}: ret")
        idx += 1
    else:
        idx += 1
