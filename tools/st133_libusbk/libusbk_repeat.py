"""libusbK: confirm frames are reproducible. One connect, one init burst, then N acquisitions."""
import sys, time, threading, statistics
sys.stdout.reconfigure(line_buffering=True)
import libusb_package, usb.core, usb.util

dev = libusb_package.find(idVendor=0x0BD7, idProduct=0xA010)
assert dev is not None, "device not found on libusb"
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

print("0x40 echo:", hex((wr(0x40, 0x5A), rd(0x40))[1]), " 0x54 temp:", hex(rd(0x54)))

from spectro_suite.hardware.detectors.st133_init_replay import REPLAY_OPS
t0 = time.monotonic()
for op in REPLAY_OPS[:-6]:
    if op[0] == "BULK_OUT": dev.write(op[1], bytes(op[2]), timeout=2000)
    elif op[0] == "BULK_IN":
        try: dev.read(op[1], op[2], timeout=2000)
        except Exception: break
print(f"init burst: {time.monotonic()-t0:.1f}s")

def trigger():
    for a, v in [(0x30,0),(0x30,1),(0x30,3),(0x00,0),(0xFE,0),(0x3C,1)]: wr(a, v)
    for a, v in [(0x14,0x0100),(0x10,4),(0x12,0),(0x14,1)]: wr(a, v)
    ep0(0xF2, 0x0200); wr(0x16, 0); wr(0x22, 0); wr(0x24, 1)
    for _ in range(401): rd(0xE2)
    rd(0xE0); ep0(0xF0, 0); wr(0x14, 1); rd(0x32)

for i in range(6):
    res = {}
    def reader():
        try: res["d"] = bytes(dev.read(EP_PIX, 1024, timeout=7000))
        except Exception as e: res["e"] = repr(e)
    th = threading.Thread(target=reader); th.start()
    time.sleep(0.05)
    trigger()
    th.join(9)
    if "d" in res:
        d = res["d"]; v = [int.from_bytes(d[j:j+2], "little") for j in range(0, len(d)-1, 2)]
        print(f"  #{i+1}: {len(d)}B  nz={sum(1 for x in v if x)}/{len(v)}  "
              f"min={min(v)} max={max(v)} mean={statistics.mean(v):.0f}  sd={statistics.pstdev(v):.0f}")
    else:
        print(f"  #{i+1}: {res.get('e', 'blocked, no data')}")
    time.sleep(0.3)

print("temp after:", hex(rd(0x54)))
usb.util.release_interface(dev, 0)
print("done.")
