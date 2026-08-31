import sys, time, threading
sys.stdout.reconfigure(line_buffering=True)
import numpy as np
import libusb_package, usb.core, usb.util

dev = libusb_package.find(idVendor=0x0BD7, idProduct=0xA010)
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
    return np.frombuffer(res["d"], "<u2").astype(np.float64) if res.get("d") and len(res["d"]) == 1024 else None

GOOD = slice(70, 511)   # exclude 0..63 artifact block, pixel 64 spike, pixel 511
print("0x46 (live temp ADC) now:", rd(0x46))
print()
print("=== body stats (pixels 70..510), 6 frames each ===")
print(" 0x32 | body_mean body_std | peak_px peak_val peak/exp | frame-to-frame body noise")
data = {}
for e in (0, 8, 16, 32, 64, 128, 200, 250):
    fs = np.array([grab(e) for _ in range(6)])
    m = fs.mean(0)
    data[e] = m
    body = m[GOOD]
    # subtract a rough baseline (median of far-from-peak region) to find the peak
    base = np.median(np.concatenate([m[70:250], m[330:511]]))
    peakpx = 250 + int(np.argmax(m[250:330]))
    peakval = m[peakpx] - base
    ppe = peakval / e if e else float('nan')
    ptp_noise = fs[:, GOOD].std(axis=0).mean()
    print(f" {e:4d} | {body.mean():9.1f} {body.std():8.1f} | {peakpx:5d}  {peakval:8.0f}  {ppe:7.1f} | {ptp_noise:6.1f}")

# linearity of the peak
xs = np.array([e for e in data if e])
base0 = np.median(np.concatenate([data[0][70:250], data[0][330:511]]))
peaks = np.array([data[e][250 + int(np.argmax(data[e][250:330]))] - base0 for e in xs])
A = np.vstack([xs, np.ones_like(xs)]).T
slope, icpt = np.linalg.lstsq(A, peaks, rcond=None)[0]
resid = peaks - (slope * xs + icpt)
print(f"\npeak vs exposure: slope={slope:.1f} counts/unit, intercept={icpt:.0f}, "
      f"max|resid|={np.abs(resid).max():.0f} ({100*np.abs(resid).max()/peaks.max():.1f}% of full)")

import matplotlib; matplotlib.use("Agg"); import matplotlib.pyplot as plt
fig, ax = plt.subplots(2, 1, figsize=(12, 8))
for e, m in data.items():
    mm = m.copy(); mm[:65] = np.nan; mm[511] = np.nan
    ax[0].plot(mm, lw=0.9, label=f"0x32={e}")
ax[0].legend(ncol=4, fontsize=8); ax[0].grid(alpha=0.3); ax[0].set_xlim(60, 511)
ax[0].set_title("ST-133 InGaAs (cold ~1h) -- spectrum vs integration time  [pixels 0-64 masked]")
ax[0].set_xlabel("pixel"); ax[0].set_ylabel("counts")
ax[1].plot(xs, peaks, "o-"); ax[1].plot(xs, slope*xs+icpt, "--", alpha=0.6)
ax[1].set_title(f"peak height vs integration time  (slope {slope:.0f} counts/unit, linear)")
ax[1].set_xlabel("0x32 integration units"); ax[1].set_ylabel("peak counts above baseline"); ax[1].grid(alpha=0.3)
plt.tight_layout()
import os
out = r"C:\Users\LabUserR129\Documents\Github\Carnegie-Spectro-Suite\results\st133_2026-08-31\cold_spectrum_quantified.png"
os.makedirs(os.path.dirname(out), exist_ok=True)
plt.savefig(out, dpi=110)
np.save(out.replace(".png", "_frames.npy"), np.array([data[e] for e in sorted(data)]))
print("saved", out)
usb.util.release_interface(dev, 0)
