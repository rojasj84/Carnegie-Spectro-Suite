import ctypes
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

# Picam_ConnectDemoCamera(PicamModel model, const pichar* serial, PicamCameraID* id)
for model_name, model_id in [
    ("PIMte1024B", 1403),
    ("Pylonir102422", 902),
    ("NirvanaLN640", 1101),
    ("Blaze100B", 1501),
]:
    cid = PicamCameraID()
    res = picam.Picam_ConnectDemoCamera(model_id, b"DEMO_001", ctypes.byref(cid))
    print(f"Picam_ConnectDemoCamera({model_name} = {model_id}) -> res={res}")
    if res == 0:
        print(f"  Model: {cid.model}, Interface: {cid.computer_interface}, Sensor: {cid.sensor_name.decode()}, Serial: {cid.serial_number.decode()}")
        # Open it
        h_cam = ctypes.c_void_p(0)
        res_op = picam.Picam_OpenCamera(ctypes.byref(cid), ctypes.byref(h_cam))
        print(f"  Picam_OpenCamera -> res={res_op}, handle={h_cam.value}")
        if res_op == 0 and h_cam.value:
            # Query temperature
            temp_val = ctypes.c_double(0.0)
            res_t = picam.Picam_GetParameterFloatingPointValue(h_cam, 16908303, ctypes.byref(temp_val))
            print(f"  Temperature: {temp_val.value:.2f} °C (res={res_t})")
            picam.Picam_CloseCamera(h_cam)
        picam.Picam_DisconnectDemoCamera(ctypes.byref(cid))

picam.Picam_UninitializeLibrary()
