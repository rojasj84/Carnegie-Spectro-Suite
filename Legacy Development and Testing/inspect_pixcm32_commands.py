import re
import os

dll_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PIXCM32.dll"
with open(dll_path, "rb") as f:
    data = f.read()

print(f"File size: {len(data)} bytes")

strings = re.findall(rb'[A-Za-z0-9_\-\.]{4,}', data)
interesting = []
for s in strings:
    s_str = s.decode('latin1', 'ignore')
    if any(k in s_str.upper() for k in ("START", "ACQ", "EXPOS", "READ", "FRAME", "DMA", "PI133", "GAIN", "SPEED", "TRIGGER", "CLEAR", "FLUSH", "CMD", "TEMP")):
        interesting.append(s_str)

print("\nInteresting Keywords in PIXCM32.dll:")
for s in interesting[:50]:
    print(" ", s)
