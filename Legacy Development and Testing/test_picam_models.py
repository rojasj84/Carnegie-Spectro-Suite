import ctypes

dll_path = r"C:\Program Files\Princeton Instruments\PICam\Runtime\Picam.dll"
picam = ctypes.CDLL(dll_path)

picam.Picam_InitializeLibrary.restype = ctypes.c_int
picam.Picam_InitializeLibrary()

class PicamCameraID(ctypes.Structure):
    _fields_ = [
        ("model", ctypes.c_int),
        ("computer_interface", ctypes.c_int),
        ("sensor_name", ctypes.c_char * 64),
        ("serial_number", ctypes.c_char * 64),
    ]

# Test candidate interfaces and models
interfaces = [1, 2, 3, 4, 5, 6, 7]
models = [
    1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409,
    1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417, 1418, 1200, 1201, 1202, 1203
]

print("Scanning Picam_IsCameraIDConnected across models and interfaces...")
for m in models:
    for iface in interfaces:
        cid = PicamCameraID()
        cid.model = m
        cid.computer_interface = iface
        cid.sensor_name = b""
        cid.serial_number = b""
        connected = ctypes.c_bool(False)
        picam.Picam_IsCameraIDConnected.argtypes = [ctypes.POINTER(PicamCameraID), ctypes.POINTER(ctypes.c_bool)]
        picam.Picam_IsCameraIDConnected.restype = ctypes.c_int
        err = picam.Picam_IsCameraIDConnected(ctypes.byref(cid), ctypes.byref(connected))
        if connected.value:
            print(f"[FOUND CONNECTED CAMERA!] Model: {m}, Interface: {iface}")

# Also check open cameras
open_array_ptr = ctypes.POINTER(ctypes.c_void_p)()
open_count = ctypes.c_int(0)
picam.Picam_GetOpenCameras.argtypes = [ctypes.POINTER(ctypes.POINTER(ctypes.c_void_p)), ctypes.POINTER(ctypes.c_int)]
picam.Picam_GetOpenCameras.restype = ctypes.c_int
err_open = picam.Picam_GetOpenCameras(ctypes.byref(open_array_ptr), ctypes.byref(open_count))
print(f"Open cameras count: {open_count.value}")

picam.Picam_UninitializeLibrary()
