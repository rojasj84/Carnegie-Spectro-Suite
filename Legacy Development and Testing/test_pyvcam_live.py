from pyvcam import pvc
from pyvcam.camera import Camera

print("Initializing 64-bit native PyVCAM...")
try:
    pvc.init_pvcam()
    print("PVCAM initialized successfully!")

    # Find first camera
    try:
        cam = Camera.detect_first()
        print(f"FOUND PHYSICAL CAMERA: {cam}")
        cam.open()
        print(f"Camera Name: {cam.chip_name}")
        print(f"Camera Serial: {cam.serial_no}")
        print(f"Current Temperature: {cam.temp} °C")
        print(f"Temperature Setpoint: {cam.temp_setpoint} °C")
        
        # Test 1 frame acquisition
        print("Acquiring 1 frame...")
        frame = cam.get_frame(exp_time=10) # 10 ms
        print(f"Acquired frame shape: {frame.shape}, min: {frame.min()}, max: {frame.max()}, mean: {frame.mean():.1f}")
        
        cam.close()
    except Exception as cam_ex:
        print(f"Camera detection/open exception: {cam_ex}")

    pvc.uninit_pvcam()
    print("PVCAM uninitialized.")
except Exception as ex:
    print(f"PyVCAM Init Error: {ex}")
