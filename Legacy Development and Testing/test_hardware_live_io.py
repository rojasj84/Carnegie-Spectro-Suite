import ctypes
from ctypes import wintypes
import time

kernel32 = ctypes.windll.kernel32

dev_path = r"\\?\USB#VID_0BD7&PID_A010#5&1487294b&0&5#{3972c010-8ea9-4939-926e-8a9db35ba0a6}"
GENERIC_READ = 0x80000000
GENERIC_WRITE = 0x40000000
OPEN_EXISTING = 3
FILE_SHARE_READ = 1
FILE_SHARE_WRITE = 2

print("Opening direct kernel communication to camera...")
h = kernel32.CreateFileW(
    dev_path,
    GENERIC_READ | GENERIC_WRITE,
    FILE_SHARE_READ | FILE_SHARE_WRITE,
    None,
    OPEN_EXISTING,
    0,
    None
)
err = kernel32.GetLastError()
print(f"Kernel handle: {h}, LastError: {err}")

if h == -1:
    print("FAILED: Could not open kernel handle to camera.")
    exit(1)

print("\nProbing hardware registers and USB controller responses...")

# Test IOCTL codes found in piusbwdf.sys
# Standard IOCTL pattern: DeviceIoControl(h, ioctl, in_buf, in_sz, out_buf, out_sz, &bytes_ret, None)

bytes_returned = wintypes.DWORD(0)

# Probe Candidate IOCTLs
test_ioctls = [
    (0x0022E000, "IOCTL_RESET_PIPE"),
    (0x0022E004, "IOCTL_GET_DRIVER_VERSION"),
    (0x0022E008, "IOCTL_GET_USB_SPEED"),
    (0x0022E010, "IOCTL_GET_CAMERA_INFO"),
    (0x0022E024, "IOCTL_READ_REGISTERS"),
    (0x0022E090, "IOCTL_CHECK_FIRMWARE"),
    (0x0022E0E9, "IOCTL_READ_EPLD"),
    (0x0022E0EA, "IOCTL_READ_PIXELS"),
    (0x00002048, "IOCTL_ALT_VERSION"),
    (0x0000A010, "IOCTL_ALT_SPEED"),
]

for code, name in test_ioctls:
    in_buf = ctypes.create_string_buffer(64)
    out_buf = ctypes.create_string_buffer(512)
    bytes_returned.value = 0
    
    success = kernel32.DeviceIoControl(
        h,
        code,
        in_buf,
        ctypes.sizeof(in_buf),
        out_buf,
        ctypes.sizeof(out_buf),
        ctypes.byref(bytes_returned),
        None
    )
    last_err = kernel32.GetLastError()
    
    if success or bytes_returned.value > 0:
        raw_data = out_buf.raw[:bytes_returned.value]
        print(f"  [SUCCESS] {name} (0x{code:08X}) -> Returned {bytes_returned.value} bytes: {raw_data.hex()}")
    else:
        print(f"  [PROBE]   {name} (0x{code:08X}) -> Code: {last_err} (0=Success, 1=InvalidFunc, 50=NotSupported)")

# Test ReadFile directly on Bulk IN pipe
print("\nTesting direct bulk readout on camera data pipe...")
read_buf = ctypes.create_string_buffer(2048)
bytes_read = wintypes.DWORD(0)

# Set non-blocking/read test
res_read = kernel32.ReadFile(h, read_buf, 2048, ctypes.byref(bytes_read), None)
read_err = kernel32.GetLastError()
print(f"ReadFile result: {res_read}, Bytes read: {bytes_read.value}, LastError: {read_err}")

if bytes_read.value > 0:
    print(f"Hardware DATA RECEIVED: {bytes_read.value} bytes from InGaAs detector!")
    print(f"First 32 bytes hex: {read_buf.raw[:32].hex()}")

kernel32.CloseHandle(h)
