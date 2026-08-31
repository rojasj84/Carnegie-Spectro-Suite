"""Test the 'T_detector = T_ambient - ADC' theory + hunt for an ambient register."""
import sys, time
sys.stdout.reconfigure(line_buffering=True)
import libusb_package, usb.core, usb.util

dev = libusb_package.find(idVendor=0x0BD7, idProduct=0xA010)
try: dev.set_configuration()
except Exception: pass
usb.util.claim_interface(dev, 0)
try: dev.set_interface_altsetting(interface=0, alternate_setting=0)
except Exception: pass
O, R = 0x08, 0x86
def rd(a):
    dev.write(O, bytes([1, a & 0xFF, 0, 3, 0, 0]), timeout=1000)
    return int.from_bytes(bytes(dev.read(R, 2, timeout=1000)), "little")
def s8(v): return v - 256 if v >= 128 else v

# full sweep: which registers are non-zero, and what does the low byte look like
print("=== full non-zero register sweep (low byte decoded 3 ways) ===")
for a in range(0x100):
    try: v = rd(a)
    except Exception: continue
    if not v: continue
    lo = v & 0xFF
    print(f"  0x{a:02X} = {v:#06x}   lo={lo:3d}  int8={s8(lo):4d}   25-lo={25-lo:4d}  lo*-2+150={lo*-2+150:4d}")

print("\n=== 0x46 ADC watched over 90s (theory: T = Troom - ADC; ADC rises as it cools) ===")
t0 = time.time()
first = None
for i in range(10):
    v = rd(0x46); lo = v & 0xFF
    if first is None: first = lo
    for Troom in (22, 25, 28):
        pass
    print(f"  t+{int(time.time()-t0):3d}s  0x46 lo = {lo:3d}   ->  T(room=22) {22-lo:5d} C   T(room=25) {25-lo:5d} C   T(room=28) {28-lo:5d} C")
    time.sleep(10)

print(f"\nADC moved {first} -> {lo} over ~90s (still cooling if rising).")
print("cached 0x54 lo =", rd(0x54) & 0xFF, "(=-98 as int8; the last cold steady state)")
print("If theory holds, ADC should approach", 25 - (-98), "(for room 25C, target -98C)  or", 25-(-100), "for -100C target.")
usb.util.release_interface(dev, 0)
