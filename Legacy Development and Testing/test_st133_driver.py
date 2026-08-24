import sys, os
sys.path.insert(0, os.path.abspath("."))
from spectro_suite.hardware.detectors.st133_usb import ST133Camera

print("=" * 70)
print(" Testing Native 64-Bit ST133Camera Driver")
print("=" * 70)

cam = ST133Camera(num_pixels=512)
print("1. Connecting to ST-133 Hardware over 64-bit kernel...")
ok = cam.connect()
print(f"   -> Connected: {ok}")

print("2. Querying Cryogenic Temperature...")
temp = cam.get_temperature()
print(f"   -> Temperature: {temp}")

print("3. Acquiring 512-pixel Frame (0.2s exposure)...")
spec, acc = cam.acquire_frame(exposure_time_sec=0.2)
print(f"   -> Spectrum Shape: {spec.shape}, Acc: {acc}")
print(f"   -> Min: {spec.min()}, Max: {spec.max()}, Mean: {spec.mean():.1f}")
print(f"   -> First 10 pixels: {list(spec[:10])}")

print("4. Disconnecting...")
cam.disconnect()
print("   -> Disconnected cleanly.")
