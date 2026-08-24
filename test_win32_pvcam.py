import ctypes
import os
import sys

print(f"32-bit Python runtime active: {sys.maxsize < 2**32}")

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
dll_path = os.path.join(dll_dir, "Pvcam32.dll")
os.chdir(dll_dir)

try:
    pvcam = ctypes.windll.LoadLibrary(dll_path)
    print(f"Loaded Pvcam32.dll successfully: {pvcam}")

    init_res = pvcam.pl_pvcam_init()
    print(f"pl_pvcam_init() -> {init_res}")

    if init_res:
        total_cams = ctypes.c_short(0)
        res = pvcam.pl_cam_get_total(ctypes.byref(total_cams))
        print(f"pl_cam_get_total() -> res={res}, total cameras={total_cams.value}")

        for i in range(total_cams.value):
            cam_name = ctypes.create_string_buffer(32)
            res_n = pvcam.pl_cam_get_name(i, cam_name)
            name_str = cam_name.value.decode("ascii", "ignore")
            print(f"  [Camera #{i}] Name: '{name_str}' (res={res_n})")

            # Try opening camera
            h_cam = ctypes.c_short(0)
            res_open = pvcam.pl_cam_open(cam_name, ctypes.byref(h_cam), 0)
            print(f"  pl_cam_open -> res={res_open}, handle={h_cam.value}")

            if res_open != 0:
                # Query temperature
                # PARAM_TEMP = (CLASS2 << 16) + (TYPE_INT16 << 24) + 1 = 0x02020001
                PARAM_TEMP = 0x02020001
                temp_val = ctypes.c_short(0)
                res_t = pvcam.pl_get_param(h_cam, PARAM_TEMP, 0, ctypes.byref(temp_val))
                print(f"  pl_get_param(PARAM_TEMP) -> res={res_t}, Temperature: {temp_val.value / 100.0:.2f} °C")

                pvcam.pl_cam_close(h_cam)

        pvcam.pl_pvcam_uninit()
    else:
        err_code = ctypes.c_short(0)
        pvcam.pl_error_code(ctypes.byref(err_code))
        err_msg = ctypes.create_string_buffer(256)
        pvcam.pl_error_message(err_code.value, err_msg)
        print(f"Error ({err_code.value}): {err_msg.value.decode('ascii', 'ignore')}")

except Exception as ex:
    print(f"Exception: {ex}")
