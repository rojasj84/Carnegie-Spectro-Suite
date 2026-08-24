import os
import re

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\rsconfig.exe"
with open(p, "rb") as f:
    data = f.read()

print(f"rsconfig.exe size: {len(data)} bytes")
strings = re.findall(rb'[A-Za-z0-9_\-\.\:\\]{4,}', data)
for s in strings:
    s_str = s.decode('latin1', 'ignore')
    if any(k in s_str.upper() for k in ("ROPER", "PVCAM", "ST133", "CAMERA", "PORT", "USB", "CONFIG", "SETUP")):
        print(" ", s_str)
