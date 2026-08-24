import ctypes
from ctypes import wintypes
import os

kernel32 = ctypes.windll.kernel32

# DefineDosDeviceW(DWORD dwFlags, LPCWSTR lpDeviceName, LPCWSTR lpTargetPath)
# DDD_RAW_TARGET_PATH = 1
DDD_RAW_TARGET_PATH = 1

target_path = r"\Device\USBPDO-12"
res_dos = kernel32.DefineDosDeviceW(DDD_RAW_TARGET_PATH, "PIUSB", target_path)
err_dos = kernel32.GetLastError()
print(f"DefineDosDeviceW('PIUSB' -> '{target_path}') -> res={res_dos}, error={err_dos}")

# Test opening \\.\PIUSB
GENERIC_READ = 0x80000000
GENERIC_WRITE = 0x40000000
OPEN_EXISTING = 3

h = kernel32.CreateFileW(r"\\.\PIUSB", GENERIC_READ | GENERIC_WRITE, 3, None, OPEN_EXISTING, 0, None)
err_h = kernel32.GetLastError()
print(f"CreateFileW('\\\\.\\PIUSB') -> handle={h}, error={err_h}")
if h != -1:
    print("SUCCESS! \\\\.\\PIUSB is now an active live link to the physical camera!")
    kernel32.CloseHandle(h)

# Now test Pvcam32.dll with 32-bit Python runtime
dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)
pvcam = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pvcam32.dll"))

init_ok = pvcam.pl_pvcam_init()
print(f"pl_pvcam_init() -> {init_ok}")

tot = ctypes.c_int16(0)
res_tot = pvcam.pl_cam_get_total(ctypes.byref(tot))
print(f"pl_cam_get_total() -> res={res_tot}, total cameras={tot.value}")

if tot.value > 0:
    name_buf = ctypes.create_string_buffer(64)
    pvcam.pl_cam_get_name(0, name_buf)
    print(f"Camera #0 Name: {name_buf.value.decode('latin1', 'ignore')}")
    
    h_cam = ctypes.c_int16(0)
    res_open = pvcam.pl_cam_open(name_buf, ctypes.byref(h_cam), 0)
    print(f"pl_cam_open -> res={res_open}, Handle={h_cam.value}")
