import struct

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PIXCM32.dll"
with open(dll_path, "rb") as f:
    data = f.read()

start = 0x28B30
end = 0x28BA0

print("=" * 70)
print(f" Disassembly of sub_28B33 (0x{start:05X} - 0x{end:05X})")
print("=" * 70)

idx = start
while idx < end:
    b = data[idx]
    if b == 0x6A:
        v = data[idx+1]
        print(f"  0x{idx:05X}: push 0x{v:02X}")
        idx += 2
    elif b == 0x68:
        v = struct.unpack('<I', data[idx+1:idx+5])[0]
        print(f"  0x{idx:05X}: push 0x{v:08X}")
        idx += 5
    elif b == 0xE8:
        rel = struct.unpack('<i', data[idx+1:idx+5])[0]
        dest = idx + 5 + rel
        print(f"  0x{idx:05X}: call 0x{dest:05X}")
        idx += 5
    elif b == 0xFF and idx + 1 < len(data) and data[idx+1] == 0x15: # call dword ptr [iat]
        iat = struct.unpack('<I', data[idx+2:idx+6])[0]
        print(f"  0x{idx:05X}: call dword ptr [0x{iat:08X}]")
        idx += 6
    elif b == 0xC3:
        print(f"  0x{idx:05X}: ret")
        idx += 1
    elif b in (0x50, 0x51, 0x52, 0x53, 0x56, 0x57, 0x55):
        reg = {0x50:'eax', 0x51:'ecx', 0x52:'edx', 0x53:'ebx', 0x56:'esi', 0x57:'edi', 0x55:'ebp'}[b]
        print(f"  0x{idx:05X}: push {reg}")
        idx += 1
    else:
        idx += 1
