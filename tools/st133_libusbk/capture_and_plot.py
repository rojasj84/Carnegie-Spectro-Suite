"""Capture real ST-133 InGaAs frames over libusbK and plot pixel vs counts."""
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

EP_OUT, EP_REPLY, EP_PIX = 0x08, 0x86, 0x82
def wr(a, v): dev.write(EP_OUT, bytes([1, a & 0xFF, 0, 2, v & 0xFF, (v >> 8) & 0xFF]), timeout=1000)
def rd(a):
    dev.write(EP_OUT, bytes([1, a & 0xFF, 0, 3, 0, 0]), timeout=1000)
    return int.from_bytes(bytes(dev.read(EP_REPLY, 2, timeout=1000)), "little")
def ep0(b, w): dev.ctrl_transfer(0x40, b, w, 0, bytes(8), timeout=1000)

from spectro_suite.hardware.detectors.st133_init_replay import REPLAY_OPS
for op in REPLAY_OPS[:-6]:
    if op[0] == "BULK_OUT": dev.write(op[1], bytes(op[2]), timeout=2000)
    elif op[0] == "BULK_IN":
        try: dev.read(op[1], op[2], timeout=2000)
        except Exception: break

def trigger():
    for a, v in [(0x30,0),(0x30,1),(0x30,3),(0x00,0),(0xFE,0),(0x3C,1)]: wr(a, v)
    for a, v in [(0x14,0x0100),(0x10,4),(0x12,0),(0x14,1)]: wr(a, v)
    ep0(0xF2, 0x0200); wr(0x16, 0); wr(0x22, 0); wr(0x24, 1)
    for _ in range(401): rd(0xE2)
    rd(0xE0); ep0(0xF0, 0); wr(0x14, 1); rd(0x32)

def grab():
    res = {}
    def r():
        try: res["d"] = bytes(dev.read(EP_PIX, 1024, timeout=7000))
        except Exception as e: res["e"] = repr(e)
    th = threading.Thread(target=r); th.start(); time.sleep(0.05)
    trigger(); th.join(9)
    return res.get("d")

frames = []
frames_raw = []
for i in range(5):
    d = grab()
    if d and len(d) == 1024:
        frames_raw.append(d)
        frames.append(np.frombuffer(d, dtype="<u2").astype(np.int64))
    time.sleep(0.2)
usb.util.release_interface(dev, 0)

F = np.array(frames)
np.save(r"C:\Users\LabUserR129\Documents\Github\Carnegie-Spectro-Suite\ingaas_frames.npy", F)
f0 = F[0]

print(f"{len(frames)} frames captured")
print("frame 0: min", f0.min(), "max", f0.max(), "mean %.1f" % f0.mean(), "median", int(np.median(f0)))
print("zeros:", int((f0 == 0).sum()), " at 65535:", int((f0 == 65535).sum()))
z = np.where(f0 == 0)[0]
s = np.where(f0 == 65535)[0]
print("zero-pixel indices (first/last 10):", z[:10].tolist(), "...", z[-10:].tolist() if len(z) else [])
print("sat-pixel indices (first/last 10):", s[:10].tolist(), "...", s[-10:].tolist() if len(s) else [])
mid = f0[(f0 > 0) & (f0 < 65535)]
print("non-extreme pixels: n=%d  mean=%.1f  std=%.1f  min=%d  max=%d" % (len(mid), mid.mean(), mid.std(), mid.min(), mid.max()))
# frame-to-frame noise on the non-extreme pixels
if len(F) > 1:
    per_px_std = F.std(axis=0)
    print("per-pixel frame-to-frame std: median %.1f  (temporal noise)" % np.median(per_px_std))
print("first 24 raw pixel values (LE):", f0[:24].tolist())
raw0 = np.frombuffer(frames_raw[0], dtype=">u2").astype(int)
print("first 24 raw pixel values (BE):", raw0[:24].tolist())

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
fig, ax = plt.subplots(2, 1, figsize=(11, 8))
for i, fr in enumerate(F):
    ax[0].plot(fr, lw=0.7, alpha=0.7, label=f"frame {i+1}")
ax[0].set_title("ST-133 OMA-V InGaAs 512-px  |  raw counts vs pixel  (5 frames overlaid)")
ax[0].set_xlabel("pixel index"); ax[0].set_ylabel("counts (16-bit)")
ax[0].set_xlim(0, 511); ax[0].legend(fontsize=8, ncol=5); ax[0].grid(alpha=0.3)
ax[1].plot(f0, lw=0.8, color="k")
ax[1].set_title("frame 1, zoomed y (2nd–98th percentile)")
lo, hi = np.percentile(f0, [2, 98])
ax[1].set_ylim(lo - 50, hi + 50); ax[1].set_xlim(0, 511)
ax[1].set_xlabel("pixel index"); ax[1].set_ylabel("counts"); ax[1].grid(alpha=0.3)
plt.tight_layout()
out = r"C:\Users\LabUserR129\Documents\Github\Carnegie-Spectro-Suite\ingaas_scan.png"
plt.savefig(out, dpi=110)
print("saved:", out)
