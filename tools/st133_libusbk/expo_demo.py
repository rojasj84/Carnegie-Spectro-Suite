"""Demonstrate: flat baseline at 0x32=0, linear dark-current integration as 0x32 rises."""
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

def grab(expo):
    res = {}
    def r():
        try: res["d"] = bytes(dev.read(P, 1024, timeout=7000))
        except Exception as e: res["e"] = repr(e)
    th = threading.Thread(target=r); th.start(); time.sleep(0.05)
    for a, v in [(0x30,0),(0x30,1),(0x30,3),(0x00,0),(0xFE,0),(0x3C,1)]: wr(a, v)
    for a, v in [(0x14,0x0100),(0x10,4),(0x12,0),(0x14,1)]: wr(a, v)
    ep0(0xF2, 0x0200); wr(0x16, 0); wr(0x22, 0); wr(0x24, 1)
    wr(0x32, expo)
    for _ in range(401): rd(0xE2)
    rd(0xE0); ep0(0xF0, 0); wr(0x14, 1); rd(0x32)
    th.join(9)
    return np.frombuffer(res["d"], "<u2").astype(np.float64) if "d" in res else None

expos = [0, 4, 8, 16, 32, 48, 64, 96, 128, 160, 200, 250]
means, frames = [], {}
for e in expos:
    fs = np.array([grab(e) for _ in range(4)])
    m = fs.mean()
    means.append(m)
    if e in (0, 16, 64, 250): frames[e] = fs.mean(0)
    print(f"  0x32={e:3d}: mean={m:8.1f}  spatial_std={fs.mean(0).std():8.1f}")
usb.util.release_interface(dev, 0)

import matplotlib; matplotlib.use("Agg"); import matplotlib.pyplot as plt
fig = plt.figure(figsize=(12, 8))
ax1 = fig.add_subplot(2, 1, 1)
for e, fr in frames.items():
    ax1.plot(fr, lw=0.7, label=f"0x32={e}")
ax1.legend(); ax1.set_xlim(0, 511); ax1.grid(alpha=0.3)
ax1.set_title("ST-133 InGaAs frame vs integration time (warm detector)")
ax1.set_xlabel("pixel"); ax1.set_ylabel("counts")
ax2 = fig.add_subplot(2, 2, 3)
ax2.plot(frames[0], lw=0.8, color="k")
ax2.set_title("0x32=0 : flat baseline (all 512 px)"); ax2.grid(alpha=0.3)
ax2.set_xlabel("pixel"); ax2.set_ylabel("counts"); ax2.set_xlim(0, 511)
ax3 = fig.add_subplot(2, 2, 4)
ax3.plot(expos, means, "o-")
ax3.set_title("mean counts vs 0x32  (linear => dark-current integration)")
ax3.set_xlabel("0x32 (integration units)"); ax3.set_ylabel("mean counts"); ax3.grid(alpha=0.3)
plt.tight_layout()
plt.savefig(r"C:\Users\LabUserR129\Documents\Github\Carnegie-Spectro-Suite\ingaas_exposure.png", dpi=110)
print("saved ingaas_exposure.png")
