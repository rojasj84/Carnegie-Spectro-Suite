from pyvcam import pvc
from pyvcam.camera import Camera

pvc.init_pvcam()
print("PVCAM Version:", pvc.get_pvcam_version())
print("Available cameras via pvc.get_cam_total():", pvc.get_cam_total())

# List all cameras
for i in range(pvc.get_cam_total()):
    name = pvc.get_cam_name(i)
    print(f"  Camera #{i}: '{name}'")
    try:
        cam = Camera(name)
        cam.open()
        print(f"    Opened: chip={cam.chip_name}, serial={cam.serial_no}")
        print(f"    Temperature: {cam.temp} °C, Setpoint: {cam.temp_setpoint} °C")
        cam.close()
    except Exception as e:
        print(f"    Open error: {e}")

pvc.uninit_pvcam()
