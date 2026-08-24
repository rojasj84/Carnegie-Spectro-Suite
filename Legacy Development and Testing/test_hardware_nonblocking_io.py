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
FILE_FLAG_OVERLAPPED = 0x40000000

print("Opening direct kernel communication to camera with OVERLAPPED I/O...")
h = kernel32.CreateFileW(
    dev_path,
    GENERIC_READ | GENERIC_WRITE,
    FILE_SHARE_READ | FILE_SHARE_WRITE,
    None,
    OPEN_EXISTING,
    FILE_FLAG_OVERLAPPED,
    None
)
err = kernel32.GetLastError()
print(f"Kernel handle: {h}, LastError: {err}")

if h == -1 or h == 0xFFFFFFFFFFFFFFFF:
    print("FAILED: Could not open kernel handle to camera.")
    exit(1)

class OVERLAPPED(ctypes.Structure):
    _fields_ = [
        ("Internal", ctypes.c_ulonglong),
        ("InternalHigh", ctypes.c_ulonglong),
        ("Offset", wintypes.DWORD),
        ("OffsetHigh", wintypes.DWORD),
        ("hEvent", wintypes.HANDLE)
    ]

# Create Event
h_event = kernel32.CreateEventW(None, True, False, None)

ov = OVERLAPPED()
ov.hEvent = h_event

# Test IOCTLs
print("\n--- Testing DeviceIoControl with Overlapped I/O ---")
test_ioctls = [
    (0x0022E004, "IOCTL_GET_DRIVER_VERSION"),
    (0x0022E008, "IOCTL_GET_USB_SPEED"),
    (0x0022E010, "IOCTL_GET_CAMERA_INFO"),
    (0x0022E090, "IOCTL_CHECK_FIRMWARE"),
    (0x0022E0E9, "IOCTL_READ_EPLD"),
]

for code, name in test_ioctls:
    in_buf = ctypes.create_string_buffer(64)
    out_buf = ctypes.create_string_buffer(512)
    bytes_returned = wintypes.DWORD(0)
    kernel32.ResetEvent(h_event)

    res = kernel32.DeviceIoControl(
        h,
        code,
        in_buf,
        ctypes.sizeof(in_buf),
        out_buf,
        ctypes.sizeof(out_buf),
        ctypes.byref(bytes_returned),
        ctypes.byref(ov)
    )
    last_err = kernel32.GetLastError()
    
    if not res and last_err == 997: # ERROR_IO_PENDING
        wait_res = kernel32.WaitForSingleObject(h_event, 300)
        if wait_res == 0: # WAIT_OBJECT_0
            kernel32.GetOverlappedResult(h, ctypes.byref(ov), ctypes.byref(bytes_returned), False)
            print(f"  [REPLIED] {name} (0x{code:08X}) -> Returned {bytes_returned.value} bytes: {out_buf.raw[:bytes_returned.value].hex()}")
        else:
            kernel32.CancelIo(h)
            print(f"  [TIMEOUT] {name} (0x{code:08X}) -> No response in 300ms")
    elif res:
        print(f"  [SUCCESS] {name} (0x{code:08X}) -> Returned {bytes_returned.value} bytes: {out_buf.raw[:bytes_returned.value].hex()}")
    else:
        print(f"  [CODE]    {name} (0x{code:08X}) -> Error {last_err}")

# Test ReadFile on bulk endpoint with timeout
print("\n--- Testing ReadFile (Bulk IN data endpoint) ---")
read_buf = ctypes.create_string_buffer(2048)
bytes_read = wintypes.DWORD(0)
kernel32.ResetEvent(h_event)

res_read = kernel32.ReadFile(h, read_buf, 2048, ctypes.byref(bytes_read), ctypes.byref(ov))
read_err = kernel32.GetLastError()

if not res_read and read_err == 997:
    print("ReadFile is pending on USB bus, waiting 500ms for incoming packet...")
    wait_res = kernel32.WaitForSingleObject(h_event, 500)
    if wait_res == 0:
        kernel32.GetOverlappedResult(h, ctypes.byref(ov), ctypes.byref(bytes_read), False)
        print(f"SUCCESS! Hardware sent {bytes_read.value} bytes over USB!")
        print(f"Raw data: {read_buf.raw[:bytes_read.value].hex()}")
    else:
        kernel32.CancelIo(h)
        print("ReadFile timed out (Camera is idle, waiting for acquisition start trigger command).")
elif res_read:
    print(f"Immediate Read: {bytes_read.value} bytes received.")
else:
    print(f"ReadFile failed: {read_err}")

kernel32.CloseHandle(h_event)
kernel32.CloseHandle(h)
