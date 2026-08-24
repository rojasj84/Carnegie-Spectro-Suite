import ctypes
from ctypes import wintypes
import os

dll_path = r"C:\Program Files\Princeton Instruments\PICam\Runtime\Picam.dll"
picam = ctypes.windll.LoadLibrary(dll_path)

picam.Picam_InitializeLibrary()

class PicamCameraID(ctypes.Structure):
    _fields_ = [
        ("model", ctypes.c_int),
        ("computer_interface", ctypes.c_int),
        ("sensor_name", ctypes.c_char * 64),
        ("serial_number", ctypes.c_char * 64)
    ]

# Picam_GetAvailableCameraIDs
p_avail = ctypes.POINTER(PicamCameraID)()
count_avail = ctypes.c_int(0)
res_av = picam.Picam_GetAvailableCameraIDs(ctypes.byref(p_avail), ctypes.byref(count_avail))
print(f"Available cameras: count={count_avail.value}, res={res_av}")

# Picam_GetUnavailableCameraIDs
p_unavail = ctypes.POINTER(PicamCameraID)()
count_unavail = ctypes.c_int(0)
res_un = picam.Picam_GetUnavailableCameraIDs(ctypes.byref(p_unavail), ctypes.byref(count_unavail))
print(f"Unavailable cameras: count={count_unavail.value}, res={res_un}")

for i in range(count_unavail.value):
    cam_id = p_unavail[i]
    print(f"  [Unavailable #{i}] Model: {cam_id.model}, Interface: {cam_id.computer_interface}, Sensor: {cam_id.sensor_name.decode('latin1', 'ignore')}, Serial: {cam_id.serial_number.decode('latin1', 'ignore')}")
    # Picam_GetCameraUnavailableReason
    reason = ctypes.c_int(0)
    res_r = picam.Picam_GetCameraUnavailableReason(ctypes.byref(cam_id), ctypes.byref(reason))
    print(f"    Unavailable reason code: {reason.value} (res={res_r})")

picam.Picam_UninitializeLibrary()
