import ctypes

user32 = ctypes.windll.user32

def enum_windows_callback(hwnd, extra):
    if user32.IsWindowVisible(hwnd):
        length = user32.GetWindowTextLengthW(hwnd)
        buff = ctypes.create_unicode_buffer(length + 1)
        user32.GetWindowTextW(hwnd, buff, length + 1)
        pid = ctypes.c_ulong()
        user32.GetWindowThreadProcessId(hwnd, ctypes.byref(pid))
        title = buff.value.strip()
        if title:
            if 'winspec' in title.lower() or 'princeton' in title.lower() or 'roper' in title.lower() or pid.value == 8424:
                print(f"HWND: {hwnd} | PID: {pid.value} | Title: '{title}'")
    return True

EnumWindowsProc = ctypes.WINFUNCTYPE(ctypes.c_bool, ctypes.c_int, ctypes.c_int)
user32.EnumWindows(EnumWindowsProc(enum_windows_callback), 0)
print("EnumWindows completed.")
