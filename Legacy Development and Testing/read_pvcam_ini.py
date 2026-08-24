import os

paths = [
    r"C:\Windows\pvcam.ini",
    r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\pvcam.ini",
    r"C:\Program Files\Photometrics\PVCAM\pvcam.ini",
    r"C:\Program Files (x86)\Photometrics\PVCAM\pvcam.ini"
]

for p in paths:
    if os.path.exists(p):
        print(f"\n==================================================")
        print(f" Found: {p} ({os.path.getsize(p)} bytes)")
        print(f"==================================================")
        with open(p, "r", encoding="latin1", errors="ignore") as f:
            print(f.read())
