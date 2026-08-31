"""Cold-detector test: temperature registers + spectra. Detector re-cooled ~45 min ago."""
import sys, time, threading
sys.stdout.reconfigure(line_buffering=True)
import numpy as np
import libusb_package, usb.core, usb.util

dev = libusb_package.find(idVendor=0x0BD7, idProduct=0xA010)
assert dev is not None, "device not found (on libusbK?)"
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
def s8(v): return v - 256 if v >= 128 else v

print("=== TEMPERATURE (before init burst) ===")
for a in (0x46, 0x54, 0x42, 0x44, 0x48, 0x4C, 0x4E, 0x50, 0x52, 0x56, 0x58):
    v = rd(a)
    note = f"  int8_lo={s8(v & 0xFF)}  (raw*-2+150={ (v & 0xFF)*-2+150 })" if v else ""
    print(f"  0x{a:02X} = {v:#06x}{note}")
print("  0x46 sampled 10x (looking for live drift):", [rd(0x46) for _ in range(10)])

print("\n=== init burst ===")
from spectro_suite.hardware.detectors.st133_init_replay import REPLAY_OPS
t0 = time.monotonic()
for op in REPLAY_OPS[:-6]:
    if op[0] == "BULK_OUT": dev.write(op[1], bytes(op[2]), timeout=2000)
    elif op[0] == "BULK_IN":
        try: dev.read(op[1], op[2], timeout=2000)
        except Exception: break
print(f"  done in {time.monotonic()-t0:.1f}s")

print("\n=== TEMPERATURE (after init burst) ===")
for a in (0x46, 0x54, 0x48):
    print(f"  0x{a:02X} = {rd(a):#06x}   (10x: {[rd(a) for _ in range(10)]})")

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
    return np.frombuffer(res["d"], "<u2").astype(np.int64) if res.get("d") and len(res["d"]) == 1024 else None

print("\n=== SPECTRA vs integration (compare to yesterday's WARM numbers in comments) ===")
print("  0x32   mean     std    min    max    | WARM was:")
warm = {0:(262,80), 16:(1858,2229), 64:(7135,7279), 128:(12740,12980), 250:(19907,19673)}
frames = {}
for e in (0, 4, 16, 32, 64, 128, 200, 250):
    fs = np.array([grab(e) for _ in range(4)])
    m = fs.mean(0)
    frames[e] = m
    w = warm.get(e)
    wtxt = f"  mean {w[0]}, std {w[1]}" if w else ""
    print(f"  {e:4d}  {m.mean():7.0f}  {m.std():6.0f}  {int(m.min()):5d}  {int(m.max()):5d}   |{wtxt}")

# bad pixel fix for display
for m in frames.values():
    m[511] = m[510]

import matplotlib; matplotlib.use("Agg"); import matplotlib.pyplot as plt
fig, ax = plt.subplots(2, 1, figsize=(12, 8))
for e, m in frames.items():
    ax[0].plot(m, lw=0.8, label=f"0x32={e}")
ax[0].legend(ncol=4, fontsize=8); ax[0].grid(alpha=0.3); ax[0].set_xlim(0, 511)
ax[0].set_title("ST-133 InGaAs, cold ~45 min -- counts vs pixel, by integration time")
ax[0].set_xlabel("pixel"); ax[0].set_ylabel("counts")
ax[1].plot(frames[0], lw=0.9, color="k", label="0x32=0 bias")
ax[1].plot(frames[64], lw=0.9, color="C1", label="0x32=64")
ax[1].legend(); ax[1].grid(alpha=0.3); ax[1].set_xlim(0, 511)
ax[1].set_title("bias vs mid integration (zoom)")
ax[1].set_xlabel("pixel"); ax[1].set_ylabel("counts")
plt.tight_layout()
out = r"C:\Users\LabUserR129\Documents\Github\Carnegie-Spectro-Suite\results\st133_2026-08-31\cold_spectra.png"
import os; os.makedirs(os.path.dirname(out), exist_ok=True)
plt.savefig(out, dpi=110)
np.save(out.replace("cold_spectra.png", "cold_frames.npy"), np.array([frames[e] for e in sorted(frames)]))
print("saved", out)
usb.util.release_interface(dev, 0)
