import ctypes
import os

kernel32 = ctypes.windll.kernel32
target_path = r"\Device\USBPDO-12"

for name in ["PIUSB", "PIUSB0", "PIUSB1", "PIUSB2", "PIUSB3", "PIUSB_0", "PIUSB64"]:
    kernel32.DefineDosDeviceW(1, name, target_path)

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)
pvcam = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pvcam32.dll"))

pvcam.pl_pvcam_init()
tot = ctypes.c_int16(0)
pvcam.pl_cam_get_total(ctypes.byref(tot))
print(f"Cameras detected with all DosDevice aliases: {tot.value}")
