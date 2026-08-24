import struct

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PIXCM32.dll"
with open(dll_path, "rb") as f:
    data = f.read()

start = 0x28F80
end = 0x29050

print("=" * 70)
print(f" Disassembly of Hardware Trigger Function 0x28F80")
print("=" * 70)

idx = start
while idx < end:
    b = data[idx]
    if b == 0x6A:
        v = data[idx+1]
        print(f"  0x{idx:05X}: push 0x{v:02X} ({v})")
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
    elif b == 0xC7 and data[idx+1] == 0x45:
        off = data[idx+2]
        val = struct.unpack('<I', data[idx+3:idx+7])[0]
        print(f"  0x{idx:05X}: mov [ebp-0x{256-off if off > 128 else off:02X}], 0x{val:08X}")
        idx += 7
    elif b == 0x8B and data[idx+1] in (0x45, 0x4D, 0x55, 0x5D, 0x75, 0x7D):
        r_name = {0x45:'eax', 0x4D:'ecx', 0x55:'edx', 0x5D:'ebx', 0x75:'esi', 0x7D:'edi'}[data[idx+1]]
        off = data[idx+2]
        print(f"  0x{idx:05X}: mov {r_name}, [ebp+0x{off:02X}]")
        idx += 3
    elif b in (0x50, 0x51, 0x52, 0x53, 0x56, 0x57, 0x55):
        reg = {0x50:'eax', 0x51:'ecx', 0x52:'edx', 0x53:'ebx', 0x56:'esi', 0x57:'edi', 0x55:'ebp'}[b]
        print(f"  0x{idx:05X}: push {reg}")
        idx += 1
    elif b == 0xC3:
        print(f"  0x{idx:05X}: ret")
        idx += 1
    elif b == 0xC2:
        ret_bytes = struct.unpack('<H', data[idx+1:idx+3])[0]
        print(f"  0x{idx:05X}: ret 0x{ret_bytes:04X} ({ret_bytes} bytes)")
        idx += 3
    else:
        idx += 1
