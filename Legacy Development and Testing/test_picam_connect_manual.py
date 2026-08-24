import ctypes
import os

dll_path = r"C:\Program Files\Princeton Instruments\PICam\Runtime\Picam.dll"
picam = ctypes.windll.LoadLibrary(dll_path)

init_res = picam.Picam_InitializeLibrary()
print(f"Picam_InitializeLibrary -> {init_res}")

class PicamCameraID(ctypes.Structure):
    _fields_ = [
        ("model", ctypes.c_int),
        ("computer_interface", ctypes.c_int),
        ("sensor_name", ctypes.c_char * 64),
        ("serial_number", ctypes.c_char * 64)
    ]

# Try models:
# 900: PyLoN-IR Series
# 901: PyLoN-IR 1024 Series
# 902: PyLoN-IR 1024-2.2
# 903: PyLoN-IR 1024-1.7
# 1100: NIRvana-LN Series
# 1101: NIRvana-LN 640

h_cam = ctypes.c_void_p(0)
for model_id in [900, 901, 902, 903, 1100, 1101, 800, 801, 1300, 1301, 2200, 2201]:
    cam_id = PicamCameraID()
    cam_id.model = model_id
    cam_id.computer_interface = 1 # Usb2
    cam_id.sensor_name = b""
    cam_id.serial_number = b""

    res = picam.Picam_OpenCamera(ctypes.byref(cam_id), ctypes.byref(h_cam))
    print(f"Picam_OpenCamera(model={model_id}) -> res={res}, handle={h_cam.value}")
    if res == 0 and h_cam.value:
        print(f"  SUCCESS! Opened camera with model {model_id}!")
        temp_val = ctypes.c_double(0.0)
        res_t = picam.Picam_GetParameterFloatingPointValue(h_cam, 16908303, ctypes.byref(temp_val))
        print(f"  Temperature: {temp_val.value:.2f} °C (res={res_t})")
        picam.Picam_CloseCamera(h_cam)
        break

picam.Picam_UninitializeLibrary()
