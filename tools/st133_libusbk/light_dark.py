"""Light vs dark test. Run twice:
  python -u light_dark.py dark    # detector covered
  python -u light_dark.py light   # bright IR source on the detector
Then:
  python -u light_dark.py compare
"""
import sys, time, threading
sys.stdout.reconfigure(line_buffering=True)
import numpy as np

def capture(n=8):
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
    def trig():
        for a, v in [(0x30,0),(0x30,1),(0x30,3),(0x00,0),(0xFE,0),(0x3C,1)]: wr(a, v)
        for a, v in [(0x14,0x0100),(0x10,4),(0x12,0),(0x14,1)]: wr(a, v)
        ep0(0xF2, 0x0200); wr(0x16, 0); wr(0x22, 0); wr(0x24, 1)
        for _ in range(401): rd(0xE2)
        rd(0xE0); ep0(0xF0, 0); wr(0x14, 1); rd(0x32)
    out = []
    for _ in range(n):
        res = {}
        def r():
            try: res["d"] = bytes(dev.read(P, 1024, timeout=7000))
            except Exception as e: res["e"] = repr(e)
        th = threading.Thread(target=r); th.start(); time.sleep(0.05)
        trig(); th.join(9)
        if "d" in res and len(res["d"]) == 1024:
            out.append(np.frombuffer(res["d"], "<u2").astype(np.float64))
        time.sleep(0.2)
    usb.util.release_interface(dev, 0)
    return np.array(out)

mode = sys.argv[1] if len(sys.argv) > 1 else "dark"
if mode in ("dark", "light"):
    F = capture()
    np.save(f"frames_{mode}.npy", F)
    m = F.mean(0)
    print(f"{mode}: {len(F)} frames  mean={m.mean():.0f}  median={np.median(m):.0f}  "
          f"min={m.min():.0f}  max={m.max():.0f}  spatial_std={m.std():.0f}")
elif mode == "compare":
    d = np.load("frames_dark.npy").mean(0)
    l = np.load("frames_light.npy").mean(0)
    diff = l - d
    print("dark  mean %.0f  std %.0f" % (d.mean(), d.std()))
    print("light mean %.0f  std %.0f" % (l.mean(), l.std()))
    print("light-dark: mean %.1f  std %.1f  min %.0f  max %.0f" % (diff.mean(), diff.std(), diff.min(), diff.max()))
    print("|light-dark| > 500 counts on %d/512 pixels" % int((np.abs(diff) > 500).sum()))
    corr = np.corrcoef(d, l)[0, 1]
    print("corr(dark, light) = %.4f   (near 1.0 => light does nothing; lower => real response)" % corr)
    import matplotlib; matplotlib.use("Agg"); import matplotlib.pyplot as plt
    fig, ax = plt.subplots(2, 1, figsize=(11, 7))
    ax[0].plot(d, lw=0.8, label="dark (covered)")
    ax[0].plot(l, lw=0.8, label="light (IR source)", alpha=0.8)
    ax[0].legend(); ax[0].set_title("ST-133 InGaAs: dark vs light, mean of 8 frames"); ax[0].grid(alpha=0.3)
    ax[0].set_xlabel("pixel"); ax[0].set_ylabel("counts"); ax[0].set_xlim(0, 511)
    ax[1].plot(diff, lw=0.8, color="crimson"); ax[1].axhline(0, color="k", lw=0.5)
    ax[1].set_title("light - dark"); ax[1].set_xlabel("pixel"); ax[1].set_ylabel("delta counts")
    ax[1].grid(alpha=0.3); ax[1].set_xlim(0, 511)
    plt.tight_layout(); plt.savefig("ingaas_light_dark.png", dpi=110)
    print("saved ingaas_light_dark.png")
