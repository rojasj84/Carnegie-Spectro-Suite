import re

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\RSCONFIGEX.dll"
with open(p, "rb") as f:
    data = f.read()

strings = re.findall(rb'[A-Za-z0-9_\-\.\:\%\\\[\]\=]{3,}', data)
print("Format strings in RSCONFIGEX.dll:")
for s in strings:
    s_str = s.decode('latin1', 'ignore')
    if any(k in s_str.upper() for k in ("CAMERA", "PVCAM", "INTERFACE", "PORT", "DRIVER", "TYPE", "NUM", "INI", "SYSTEM")):
        print(" ", s_str)
