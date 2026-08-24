import re
import os

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\pidc32.dll"
with open(dll_path, "rb") as f:
    data = f.read()

print(f"File size: {len(data)} bytes")

# Look for command table strings or vendor request opcodes
strings = re.findall(rb'[A-Za-z0-9_\-\.]{4,}', data)
print(f"Total ASCII strings: {len(strings)}")

interesting = []
for s in strings:
    s_str = s.decode('latin1', 'ignore')
    if any(k in s_str.upper() for k in ("START", "ACQ", "EXPOS", "READ", "FRAME", "DMA", "PI133", "GAIN", "SPEED", "TRIGGER", "CLEAR", "FLUSH")):
        interesting.append(s_str)

print("\nInteresting Keywords in pidc32.dll:")
for s in interesting[:40]:
    print(" ", s)
