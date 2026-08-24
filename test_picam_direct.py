import ctypes
import os

dll_path = r"C:\Program Files\Princeton Instruments\PICam\Runtime\Picam.dll"
print(f"Loading 64-bit native PICam SDK from: {dll_path}")

picam = ctypes.CDLL(dll_path)

# Initialize
picam.Picam_InitializeLibrary.restype = ctypes.c_int
err_init = picam.Picam_InitializeLibrary()
print(f"Picam_InitializeLibrary() -> Result code: {err_init}")

class PicamCameraID(ctypes.Structure):
    _fields_ = [
        ("model", ctypes.c_int),
        ("computer_interface", ctypes.c_int),
        ("sensor_name", ctypes.c_char * 64),
        ("serial_number", ctypes.c_char * 64),
    ]

# Get Available Camera IDs
id_array_ptr = ctypes.POINTER(PicamCameraID)()
id_count = ctypes.c_int(0)

picam.Picam_GetAvailableCameraIDs.argtypes = [
    ctypes.POINTER(ctypes.POINTER(PicamCameraID)),
    ctypes.POINTER(ctypes.c_int)
]
picam.Picam_GetAvailableCameraIDs.restype = ctypes.c_int

err_ids = picam.Picam_GetAvailableCameraIDs(ctypes.byref(id_array_ptr), ctypes.byref(id_count))
print(f"Picam_GetAvailableCameraIDs() -> Result: {err_ids}, Available count: {id_count.value}")

for i in range(id_count.value):
    cid = id_array_ptr[i]
    print(f"  [Available Camera #{i}] Model ID: {cid.model}, Interface: {cid.computer_interface}")
    print(f"    Sensor Name: '{cid.sensor_name.decode(errors='ignore')}'")
    print(f"    Serial Number: '{cid.serial_number.decode(errors='ignore')}'")

# Get Unavailable Camera IDs
unavail_array_ptr = ctypes.POINTER(PicamCameraID)()
unavail_count = ctypes.c_int(0)

picam.Picam_GetUnavailableCameraIDs.argtypes = [
    ctypes.POINTER(ctypes.POINTER(PicamCameraID)),
    ctypes.POINTER(ctypes.c_int)
]
picam.Picam_GetUnavailableCameraIDs.restype = ctypes.c_int

err_unavail = picam.Picam_GetUnavailableCameraIDs(ctypes.byref(unavail_array_ptr), ctypes.byref(unavail_count))
print(f"\nPicam_GetUnavailableCameraIDs() -> Result: {err_unavail}, Unavailable count: {unavail_count.value}")

for i in range(unavail_count.value):
    cid = unavail_array_ptr[i]
    print(f"  [Unavailable Camera #{i}] Model ID: {cid.model}, Interface: {cid.computer_interface}")
    print(f"    Sensor Name: '{cid.sensor_name.decode(errors='ignore')}'")
    print(f"    Serial Number: '{cid.serial_number.decode(errors='ignore')}'")

# Open First Camera or Specific Camera
cam_handle = ctypes.c_void_p(0)
picam.Picam_OpenFirstCamera.argtypes = [ctypes.POINTER(ctypes.c_void_p)]
picam.Picam_OpenFirstCamera.restype = ctypes.c_int
err_open = picam.Picam_OpenFirstCamera(ctypes.byref(cam_handle))
print(f"\nPicam_OpenFirstCamera() -> Result: {err_open}, Handle: {cam_handle.value}")

if err_open == 0 and cam_handle.value:
    temp_val = ctypes.c_double(0.0)
    PicamParameter_SensorTemperatureReading = 16908303
    picam.Picam_ReadParameterFloatingPointValue.argtypes = [ctypes.c_void_p, ctypes.c_int, ctypes.POINTER(ctypes.c_double)]
    picam.Picam_ReadParameterFloatingPointValue.restype = ctypes.c_int
    err_t = picam.Picam_ReadParameterFloatingPointValue(cam_handle, PicamParameter_SensorTemperatureReading, ctypes.byref(temp_val))
    print(f"\n>>> LIVE PHYSICAL DETECTOR TEMPERATURE: {temp_val.value:.2f} °C (Status code: {err_t}) <<<\n")
    picam.Picam_CloseCamera(cam_handle)

picam.Picam_UninitializeLibrary()
