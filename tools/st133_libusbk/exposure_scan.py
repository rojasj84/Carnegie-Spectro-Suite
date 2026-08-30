"""Does frame level scale with a candidate integration-time register?
If mean counts track the value -> real (warm) dark-current readout. If flat -> timing/framing artifact.
Sweeps reg 0x32 (standing exposure candidate) and, as a control, 0x34."""
import sys, time, threading
sys.stdout.reconfigure(line_buffering=True)
import numpy as np
import libusb_package, usb.core, usb.util

dev = libusb_package.find(idVendor=0x0BD7, idProduct=0xA010)
assert dev is not None
try: dev.set_configuration()
except Exception: pass
usb.util.claim_interface(dev, 0)
try: dev.set_interface_altsetting(interface=0, alternate_setting=0)
except Exception: pass

O, R, P = 0x08, 0x86, 0x82
def wr(a, v): dev.write(O, bytes([1, a & 0xFF, 0, 2, v & 0xFF, (v >> 8) & 0xFF]), timeout=1000)
def rd(a):
    dev.write(O, bytes([1, a & 0xFF, 0, 3, 0, 0]), timeout=1000)
    return int.from_bytes(bytes(dev.read(R, 2, timeout=1000)), "little")
def ep0(b, w): dev.ctrl_transfer(0x40, b, w, 0, bytes(8), timeout=1000)

from spectro_suite.hardware.detectors.st133_init_replay import REPLAY_OPS
for op in REPLAY_OPS[:-6]:
    if op[0] == "BULK_OUT": dev.write(op[1], bytes(op[2]), timeout=2000)
    elif op[0] == "BULK_IN":
        try: dev.read(op[1], op[2], timeout=2000)
        except Exception: break

def grab(expo_reg=None, expo_val=None):
    res = {}
    def r():
        try: res["d"] = bytes(dev.read(P, 1024, timeout=7000))
        except Exception as e: res["e"] = repr(e)
    th = threading.Thread(target=r); th.start(); time.sleep(0.05)
    for a, v in [(0x30,0),(0x30,1),(0x30,3),(0x00,0),(0xFE,0),(0x3C,1)]: wr(a, v)
    for a, v in [(0x14,0x0100),(0x10,4),(0x12,0),(0x14,1)]: wr(a, v)
    ep0(0xF2, 0x0200); wr(0x16, 0); wr(0x22, 0); wr(0x24, 1)
    if expo_reg is not None: wr(expo_reg, expo_val)   # override candidate exposure reg just before trigger
    for _ in range(401): rd(0xE2)
    rd(0xE0); ep0(0xF0, 0); wr(0x14, 1); rd(0x32)
    th.join(9)
    if "d" in res and len(res["d"]) == 1024:
        return np.frombuffer(res["d"], "<u2").astype(np.float64)
    return None

def stats(fr):
    nz = fr[fr > 0]
    return (fr.mean(), np.median(fr), int((fr == 65535).sum()), int((fr == 0).sum()),
            nz.mean() if len(nz) else 0)

print("baseline (no override), 3x:")
base = [grab() for _ in range(3)]
for f in base:
    if f is not None:
        m, md, sat, z, nzm = stats(f); print(f"  mean={m:.0f} med={md:.0f} sat={sat} zero={z} nzmean={nzm:.0f}")

for reg in (0x32, 0x34):
    print(f"\nsweep reg 0x{reg:02X}:")
    for val in (0x0000, 0x0010, 0x0040, 0x00FA, 0x0200, 0x0800, 0x2000, 0xF000):
        fr = grab(reg, val)
        if fr is None:
            print(f"  0x{val:04X}: no frame"); continue
        m, md, sat, z, nzm = stats(fr)
        print(f"  0x{val:04X}: mean={m:8.0f}  median={md:7.0f}  sat={sat:3d}  zero={z:3d}  nonzero_mean={nzm:8.0f}")

usb.util.release_interface(dev, 0)
print("\ndone.")
