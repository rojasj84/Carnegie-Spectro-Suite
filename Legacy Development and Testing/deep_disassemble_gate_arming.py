"""
Deep Opcode Decoder for sub_28B33 (Gate Arming Sequence)
"""

import struct

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PIXCM32.dll"
with open(dll_path, "rb") as f:
    data = f.read()

start = 0x28B30
end = 0x28BE0

print("=" * 75)
print(f" Detailed Instruction Trace of Gate Arming (0x{start:05X} - 0x{end:05X})")
print("=" * 75)

idx = start
while idx < end:
    b = data[idx]
    
    # Check 1-byte opcodes
    if b == 0x55:
        print(f"  0x{idx:05X}: push ebp")
        idx += 1
    elif b == 0x8B and data[idx+1] == 0xEC:
        print(f"  0x{idx:05X}: mov ebp, esp")
        idx += 2
    elif b == 0x83 and data[idx+1] == 0xEC:
        sub_len = data[idx+2]
        print(f"  0x{idx:05X}: sub esp, 0x{sub_len:02X} ({sub_len} bytes local stack)")
        idx += 3
    elif b == 0x6A:
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
    elif b == 0xC7 and data[idx+1] == 0x45: # mov [ebp-xx], imm32
        off = data[idx+2]
        val = struct.unpack('<I', data[idx+3:idx+7])[0]
        print(f"  0x{idx:05X}: mov [ebp-0x{256-off if off > 128 else off:02X}], 0x{val:08X} ({val})")
        idx += 7
    elif b == 0x66 and data[idx+1] == 0xC7 and data[idx+2] == 0x45: # mov word ptr [ebp-xx], imm16
        off = data[idx+3]
        val = struct.unpack('<H', data[idx+4:idx+6])[0]
        print(f"  0x{idx:05X}: mov word ptr [ebp-0x{256-off if off > 128 else off:02X}], 0x{val:04X} ({val})")
        idx += 6
    elif b == 0xC6 and data[idx+1] == 0x45: # mov byte ptr [ebp-xx], imm8
        off = data[idx+2]
        val = data[idx+3]
        print(f"  0x{idx:05X}: mov byte ptr [ebp-0x{256-off if off > 128 else off:02X}], 0x{val:02X} ({val})")
        idx += 4
    elif b == 0x8B and data[idx+1] == 0x45: # mov eax, [ebp+xx]
        off = data[idx+2]
        print(f"  0x{idx:05X}: mov eax, [ebp+0x{off:02X}]")
        idx += 3
    elif b == 0x8B and data[idx+1] == 0x4D: # mov ecx, [ebp+xx]
        off = data[idx+2]
        print(f"  0x{idx:05X}: mov ecx, [ebp+0x{off:02X}]")
        idx += 3
    elif b == 0x8B and data[idx+1] == 0x55: # mov edx, [ebp+xx]
        off = data[idx+2]
        print(f"  0x{idx:05X}: mov edx, [ebp+0x{off:02X}]")
        idx += 3
    elif b == 0x8D and data[idx+1] == 0x45: # lea eax, [ebp-xx]
        off = data[idx+2]
        print(f"  0x{idx:05X}: lea eax, [ebp-0x{256-off if off > 128 else off:02X}]")
        idx += 3
    elif b == 0x8D and data[idx+1] == 0x55: # lea edx, [ebp-xx]
        off = data[idx+2]
        print(f"  0x{idx:05X}: lea edx, [ebp-0x{256-off if off > 128 else off:02X}]")
        idx += 3
    elif b in (0x50, 0x51, 0x52, 0x53, 0x56, 0x57):
        reg = {0x50:'eax', 0x51:'ecx', 0x52:'edx', 0x53:'ebx', 0x56:'esi', 0x57:'edi'}[b]
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
