import ctypes
from ctypes import wintypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pvcam = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pvcam32.dll"))

for p_type in [1, 2]: # 1 = ST133
    for p_port in [0, 1, 2, 3]: # 2 = USB
        for p_drv in ["PIUSB", "USB", "APAUSB"]:
            ini_content = f"""[Camera_1]
Type={p_type}
Driver={p_drv}
Port={p_port}
"""
            local_ini = os.path.join(dll_dir, "pvcam.ini")
            with open(local_ini, "w", encoding="latin1") as f:
                f.write(ini_content)

            fn_init = getattr(pvcam, "pl_pvcam_init")
            res_init = fn_init()
            
            fn_total = getattr(pvcam, "pl_cam_get_total")
            total_cams = wintypes.SHORT(0)
            res_total = fn_total(ctypes.byref(total_cams))
            
            if total_cams.value > 0:
                print(f"\n>>> FOUND WORKING COMBO: Type={p_type}, Driver={p_drv}, Port={p_port} -> Total Cameras: {total_cams.value}! <<<")
            else:
                pass

            fn_uninit = getattr(pvcam, "pl_pvcam_uninit")
            fn_uninit()

print("Matrix test finished.")
