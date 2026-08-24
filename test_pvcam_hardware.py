import ctypes
import os

dll_path = os.path.abspath(r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Pvcam32.dll")
print(f"Loading PVCAM from: {dll_path}")

try:
    pvcam = ctypes.windll.LoadLibrary(dll_path)
    print("PVCAM DLL Loaded:", pvcam)

    init_res = pvcam.pl_pvcam_init()
    print(f"pl_pvcam_init() -> {init_res}")

    if init_res:
        total_cams = ctypes.c_short(0)
        res = pvcam.pl_cam_get_total(ctypes.byref(total_cams))
        print(f"Total Cameras Found: {total_cams.value} (Result Code: {res})")

        for i in range(total_cams.value):
            cam_name = ctypes.create_string_buffer(32)
            res_name = pvcam.pl_cam_get_name(i, cam_name)
            name_str = cam_name.value.decode("ascii", "ignore")
            print(f"  [Camera #{i}] Name: '{name_str}'")

        pvcam.pl_pvcam_uninit()
    else:
        err_code = ctypes.c_short(0)
        pvcam.pl_error_code(ctypes.byref(err_code))
        err_msg = ctypes.create_string_buffer(256)
        pvcam.pl_error_message(err_code.value, err_msg)
        print(f"Error ({err_code.value}): {err_msg.value.decode('ascii', 'ignore')}")

except Exception as ex:
    print(f"Exception during PVCAM test: {ex}")
