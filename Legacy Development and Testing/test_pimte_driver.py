from spectro_suite.hardware.detectors.pimte import PIMTECamera

cam = PIMTECamera(num_pixels=512)
print("Connecting to PIMTECamera (512 pixels)...")
ok = cam.connect()
print(f"Connected: {ok}")

temp = cam.get_temperature()
print(f"Temperature: {temp}")

print("Acquiring 1s spectrum frame...")
spec, acc = cam.acquire_frame(exposure_time_sec=0.2)
print(f"Acquired spectrum shape: {spec.shape}, min: {spec.min()}, max: {spec.max()}, mean: {spec.mean():.1f}")
