import struct

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT"
with open(p, "rb") as f:
    data = f.read()

print(f"PI133B.DAT size: {len(data)} bytes")
# Dump all 16-bit and 32-bit words that look like chip IDs or interface IDs
# 0x5F (95), 0x60 (96), 0x7A (122), 0x7E (126)
for target in [95, 96, 122, 126]:
    positions = [i for i in range(0, len(data)-2, 2) if struct.unpack('<H', data[i:i+2])[0] == target]
    print(f"Chip ID {target} found at offsets: {positions}")
