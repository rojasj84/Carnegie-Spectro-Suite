import re

for f in ["pidc32.dll", "Pipp32.dll", "Pvcam32.dll", "USBDRVD.DLL"]:
    p = rf"C:\Users\LabUserR129\Desktop\WinSpec32_Full\{f}"
    with open(p, "rb") as fp:
        data = fp.read()
    
    matches = re.findall(rb'\\\\\.\\\w+', data)
    if matches:
        print(f"{f}: {matches}")
