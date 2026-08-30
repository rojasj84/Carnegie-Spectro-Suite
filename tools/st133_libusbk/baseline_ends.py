"""Inspect the ends of the 0x32=0 flat baseline frame -- is pixel 511 a reference pixel or an error?"""
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

def grab(expo, nbytes=1024):
    res = {}
    def r():
        try: res["d"] = bytes(dev.read(P, nbytes, timeout=7000))
        except Exception as e: res["e"] = repr(e)
    th = threading.Thread(target=r); th.start(); time.sleep(0.05)
    for a, v in [(0x30,0),(0x30,1),(0x30,3),(0x00,0),(0xFE,0),(0x3C,1)]: wr(a, v)
    for a, v in [(0x14,0x0100),(0x10,4),(0x12,0),(0x14,1)]: wr(a, v)
    ep0(0xF2, 0x0200); wr(0x16, 0); wr(0x22, 0); wr(0x24, 1)
    wr(0x32, expo)
    for _ in range(401): rd(0xE2)
    rd(0xE0); ep0(0xF0, 0); wr(0x14, 1); rd(0x32)
    th.join(9)
    return res.get("d")

# 10 baseline frames at 0x32=0
F = []
for _ in range(10):
    d = grab(0)
    if d and len(d) == 1024:
        F.append(np.frombuffer(d, "<u2").astype(np.int64))
    time.sleep(0.15)
F = np.array(F)
m = F.mean(0)
print(f"{len(F)} frames, 0x32=0")
print("body (px 8..503): mean=%.1f std=%.1f min=%d max=%d" % (m[8:504].mean(), m[8:504].std(), m[8:504].min(), m[8:504].max()))
print("\nfirst 8 px (mean over frames):", [round(x,1) for x in m[:8]])
print("last 12 px (mean over frames):", [round(x,1) for x in m[-12:]])
print("\nper-frame value of the last 4 pixels:")
for i, fr in enumerate(F):
    print(f"  frame {i}: ...{fr[-4:].tolist()}")
print("\nper-pixel std across frames, last 12:", [round(x,1) for x in F.std(0)[-12:]])
print("per-pixel std across frames, first 8:", [round(x,1) for x in F.std(0)[:8]])

# read MORE than 1024 bytes -- is there anything past pixel 512?
print("\n=== over-read test: request 1152 bytes ===")
d2 = grab(0, nbytes=1152)
print("got", len(d2) if d2 else None, "bytes")
if d2:
    ext = np.frombuffer(d2[:len(d2)//2*2], "<u2").astype(int)
    print("values past index 508:", ext[508:].tolist()[:40])

usb.util.release_interface(dev, 0)
