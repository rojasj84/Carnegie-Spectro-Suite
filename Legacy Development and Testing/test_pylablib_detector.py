from pylablib.devices import PrincetonInstruments
import traceback

print("Testing Princeton Instruments discovery via pylablib...")
try:
    cams = PrincetonInstruments.list_cameras()
    print(f"pylablib.list_cameras() -> {cams}")
except Exception as ex:
    print(f"list_cameras() error: {ex}")
    traceback.print_exc()

try:
    print("Trying PicamCamera...")
    cam = PrincetonInstruments.PicamCamera()
    print(f"SUCCESS: Opened camera: {cam.get_device_info()}")
    cam.close()
except Exception as ex:
    print(f"PicamCamera error: {ex}")

from pylablib.devices import Photometrics
try:
    print("\nTesting Photometrics / PVCAM discovery via pylablib...")
    pvc_cams = Photometrics.list_cameras()
    print(f"Photometrics.list_cameras() -> {pvc_cams}")
except Exception as ex:
    print(f"Photometrics.list_cameras error: {ex}")
