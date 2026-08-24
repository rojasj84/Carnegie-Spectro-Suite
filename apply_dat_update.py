import shutil
import os

src = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT"
dst2 = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B2.DAT"
dst5 = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B5.DAT"

shutil.copyfile(src, dst2)
shutil.copyfile(src, dst5)

print("SUCCESS: Updated PI133B2.DAT and PI133B5.DAT with full InGaAs chip database!")
