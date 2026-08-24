p = r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\omavb.dat"
with open(p, "rb") as f:
    data = f.read()

print(f"OMAVB.DAT Total Length: {len(data)} bytes")
print("Hex dump:")
print(data.hex())

print("\nASCII / Byte Interpretation:")
for i in range(0, len(data), 16):
    chunk = data[i:i+16]
    hex_str = ' '.join(f'{b:02X}' for b in chunk)
    asc_str = ''.join(chr(b) if 32 <= b <= 126 else '.' for b in chunk)
    print(f"  {i:04X}: {hex_str:<48}  {asc_str}")
