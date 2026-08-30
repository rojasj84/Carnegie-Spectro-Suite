"""libusbK transport test via pyusb/libusb-1.0. Run AFTER Zadig-swapping the ST-133
to libusbK and `pip install libusb-package`.

  python -u libusbk_probe.py            # trigger + 0x82 read, no init burst
  python -u libusbk_probe.py burst      # replay full cold-boot init burst first

Mirrors Princeton's own rspiusb model: pre-submit a bulk-IN read on 0x82, then
send the userspace arm/trigger commands, then collect the frame.
"""
import sys, time, threading
sys.stdout.reconfigure(line_buffering=True)

try:
    import libusb_package
    import usb.core, usb.util
    dev = libusb_package.find(idVendor=0x0BD7, idProduct=0xA010)
except Exception:
    import usb.core, usb.util
    dev = usb.core.find(idVendor=0x0BD7, idProduct=0xA010)

if dev is None:
    print("FAIL: no VID_0BD7/PID_A010 device found by libusb. Is it on libusbK?")
    sys.exit(1)

print("device:", dev._str() if hasattr(dev, "_str") else dev)
print("backend:", type(dev.backend).__module__)

for step, fn in [
    ("set_configuration", lambda: dev.set_configuration()),
    ("claim interface 0", lambda: usb.util.claim_interface(dev, 0)),
    ("set_interface_altsetting(0,0)", lambda: dev.set_interface_altsetting(interface=0, alternate_setting=0)),
]:
    try:
        fn(); print(f"  {step}: ok")
    except Exception as e:
        print(f"  {step}: {e}")

EP_OUT, EP_REPLY, EP_PIX = 0x08, 0x86, 0x82

def wr(addr, val):
    dev.write(EP_OUT, bytes([1, addr & 0xFF, 0, 2, val & 0xFF, (val >> 8) & 0xFF]), timeout=1000)

def rd(addr):
    dev.write(EP_OUT, bytes([1, addr & 0xFF, 0, 3, 0, 0]), timeout=1000)
    r = bytes(dev.read(EP_REPLY, 2, timeout=1000))
    return int.from_bytes(r, "little")

def ep0(breq, wval):
    dev.ctrl_transfer(0x40, breq, wval, 0, bytes(8), timeout=1000)

print("\n== sanity ==")
try:
    wr(0x40, 0x5A); print("  0x40 echo (write 0x5A):", hex(rd(0x40)), "(expect 0x5a5a)")
    print("  0x54 (temp int8):", hex(rd(0x54)))
except Exception as e:
    print("  register I/O FAILED:", e); sys.exit(1)

if len(sys.argv) > 1 and sys.argv[1] == "burst":
    print("\n== init burst replay ==")
    from spectro_suite.hardware.detectors.st133_init_replay import REPLAY_OPS
    t0 = time.monotonic(); nw = nr = 0
    for op in REPLAY_OPS[:-6]:  # drop trailing RECONFIG_BURST_A
        if op[0] == "BULK_OUT":
            dev.write(op[1], bytes(op[2]), timeout=2000); nw += 1
        elif op[0] == "BULK_IN":
            try:
                dev.read(op[1], op[2], timeout=2000); nr += 1
            except Exception as e:
                print(f"  BULK_IN abort at op {nw+nr}: {e}"); break
    print(f"  {nw} writes + {nr} reads in {time.monotonic()-t0:.1f}s")

print("\n== pre-arm 0x82 read, then trigger ==")
res = {}
def reader():
    try:
        res["data"] = bytes(dev.read(EP_PIX, 1024, timeout=7000))
    except Exception as e:
        res["err"] = repr(e)
th = threading.Thread(target=reader); th.start()
time.sleep(0.05)

try:
    for a, v in [(0x30,0),(0x30,1),(0x30,3),(0x00,0),(0xFE,0),(0x3C,1)]:
        wr(a, v)
    for a, v in [(0x14,0x0100),(0x10,4),(0x12,0),(0x14,1)]:
        wr(a, v)
    ep0(0xF2, 0x0200)
    wr(0x16, 0)
    wr(0x22, 0); wr(0x24, 1)
    for _ in range(401):
        rd(0xE2)
    rd(0xE0)
    ep0(0xF0, 0)
    wr(0x14, 1)
    rd(0x32)
    print("  trigger sequence sent")
except Exception as e:
    print("  trigger sequence error:", e)

th.join(9)
if "data" in res:
    d = res["data"]
    import statistics
    vals = [int.from_bytes(d[i:i+2], "little") for i in range(0, len(d)-1, 2)]
    nz = sum(1 for x in vals if x)
    print(f"\n*** 0x82 RETURNED {len(d)} BYTES ***  nonzero={nz}/{len(vals)} "
          f"min={min(vals)} max={max(vals)} mean={statistics.mean(vals):.1f}")
    print("  first 16 bytes:", d[:16].hex())
elif "err" in res:
    print(f"\n0x82 read failed/timeout: {res['err']}")
else:
    print("\n0x82: reader still blocked (no data, no error)")

usb.util.release_interface(dev, 0)
print("\ndone.")
