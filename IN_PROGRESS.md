# ST-133 / OMA-V InGaAs — IN PROGRESS

**Last worked: 2026-08-30 (Fri night). Resume: Mon 2026-09-01 after re-cooling the detector.**

This file is the single source of truth for the ST-133 USB reverse-engineering effort.
The old `AI Instructions N.txt` log is archived in `_ARCHIVE - do not read/` — it is
mostly disproven theories; don't use it.

---

## TL;DR — where we are

**We have a working 64-bit acquisition path.** Real 1024-byte frames come off the
detector, reproducibly, with exposure control. NOT yet validated as a real *spectrum*
because the detector was warm (LN2 gone) — every frame at nonzero integration is
flooded by dark current.

| piece | status |
|---|---|
| USB transport | ✅ **libusbK driver (Zadig) + pyusb / libusb-1.0**. WinUSB **cannot** deliver frames on this FX2 — pixel pipe `0x82` is 100% silent under WinUSB no matter what (proven exhaustively). |
| Command channel (register R/W, EP0) | ✅ works on both WinUSB and libusbK |
| Cold-boot init burst | ✅ required once per connection (`REPLAY_OPS`, ~2.5 s). Without it a trigger produces no pixel clock. |
| Arm / trigger sequence | ✅ verified |
| Frame readout `0x82` | ✅ 1024 bytes, reproducible (N/N) |
| **Exposure / integration time** | ✅ **register `0x32`, LOW BYTE (0x00–0xFF)** — found 2026-08-30. Frame mean scales ~linearly. `0` → flat bias frame (~260 counts). |
| Real spectrum | ⏳ needs **cold detector + light source** |
| Live temperature | ❌ `0x46` reads `0x0000` (cooler/sense loop idle while warm). `0x54` = `0x9E9E` = −98 °C is the **stale cooler setpoint**, NOT current temperature. |

---

## The working recipe (verified against hardware)

Device must be on the **libusbK** driver (Zadig → List All Devices → `0BD7 A010` →
target `libusbK` → Replace Driver). Then:

```python
from spectro_suite.hardware.detectors.st133_libusb import ST133LibUsbCamera
cam = ST133LibUsbCamera(exposure_units=0)   # 0..255
cam.connect()                               # finds device, claims iface, runs init burst
frame, count = cam.acquire_frame()          # (int64[512], 1)
cam.set_exposure_units(64); cam.acquire_frame()
cam.get_temperature()                       # temperature_c None + NO_LIVE_TEMP while warm; setpoint_c = -98
```

Or via the factory: model string containing `"LIBUSB"` →
`create_spectrometer` returns `ST133LibUsbCamera`.

### USB endpoints / protocol
- `0x08` bulk OUT — command frames `[0x01, addr, 0x00, cmd, lo, hi]` (cmd `0x02`=write, `0x03`=read)
- `0x86` bulk IN — 2-byte reply to a read
- `0x82` bulk IN — pixel data, 1024 bytes/frame (512 px × uint16 LE)
- EP0 vendor OUT (`RequestType 0x40`) — `0xF2/wValue=0x0200` and `0xF0/wValue=0` in the arm sequence
- `SET_INTERFACE(0,0)` after `SET_CONFIGURATION`

### Register map (current understanding)
| reg | meaning |
|---|---|
| `0x40` | write-then-readback echo (liveness: write `0x5A` → read `0x5A5A`) |
| `0x46` | **live** temperature ADC (per decompiled `PICM_Get_Temperature`; 10-sample avg + linear cal). Reads `0` while warm. |
| `0x54` | on READ = cooler **setpoint** (low byte int8 °C). on WRITE = PTG timing-table download target. |
| `0x32` | **integration time** (low byte). Also read once right after the trigger. |
| `0x14` | acquisition trigger (`WRITE 1`) |
| `0xE2` | busy poll (read ×401 in the arm sequence) |
| `0xE0` | pre-trigger read (once) |
| `0x30/0x00/0xFE/0x3C/0x10/0x12/0x16/0x22/0x24` | arm-sequence reconfig writes (see `REG_RECONFIG_BURST_A/B`, `REG_ARM_PREP/POST` in `st133_usb.py`) |
| `0x4A` | steady-state "host alive" heartbeat walk (WinUSB path only) |
| `0xC0`–`0xCA`, `0x42` | EPLD version regs per `ReadEPLDVersions` decompile — read dead (`0x8787`/`0`) for us; the poll for `(0x42 & 0xFFF)==0x113` never converges. **Unresolved**, but not blocking frames. |

### Arm/trigger sequence (in `st133_libusb.py::_arm_and_trigger`)
`RECONFIG_BURST_A` → `ARM_PREP` → EP0 `0xF2/0x0200` → `ARM_POST` → `RECONFIG_BURST_B`
→ **`WRITE 0x32 = exposure_units`** → read `0xE2` ×401 → read `0xE0` → EP0 `0xF0/0`
→ `WRITE 0x14 = 1` → read `0x32`.

---

## What Monday looks like

1. **Re-fill LN2** first thing; wait ~1–2 h for the detector to reach setpoint.
2. Check `cam.get_temperature()` — `0x46` should now be **non-zero** and give a real
   cold reading. If so we finally have a live-temp anchor to calibrate against
   (WinSpec displays a number; compare). If `0x46` stays 0 even cold, the live-temp
   path needs more work (maybe a "start temp sense" command, or it's a different reg).
3. **Real spectrum test**: `exposure_units=0` baseline, then a modest value (say 16–48),
   dark (capped) vs. a light source. On a cold detector the dark frame should be a
   flat low baseline; light should produce a coherent bump. Use
   `tools/st133_libusbk/light_dark.py` (port it to import `ST133LibUsbCamera`).
4. If spectra look right:
   - characterise `0x32` units → seconds (sweep, time each acquire, or find the clock)
   - fold `st133_libusb.py` in as the default ST-133 driver (config default + dropdown),
     demote `st133_usb.py` (WinUSB) to a fallback/diagnostic
   - handle the "warm → 0x46==0" case in the GUI temperature display
5. Nice-to-haves: proper `0x54` timing-table reconstruction from `PI133B.DAT` instead
   of the verbatim `REPLAY_OPS` blob; characterise `0x32` units → seconds.

## Array quirks (characterised 2026-08-30, warm, 0x32=0 flat baseline)

- **Pixel 511 is a bad "run-off-the-end" pixel** — body pixels 0..510 sit at a clean
  ~260 counts (std ~2); pixel 511 reads ~2100 ± 380 (charge injection / clock
  feedthrough on the last, electrically-terminated element). `st133_libusb.py` has
  `BAD_PIXELS = (511,)` and `acquire_frame(correct_bad_pixels=True)` replaces it with
  the neighbour. Confirmed NOT an over-read: device sends exactly 1024 bytes and
  requesting 1152 still returns 1024.
- **2-tap readout**: even vs odd pixel index read through separate amplifiers with a
  ~10-count offset difference (even ~254, odd ~265). Not corrected — fold into
  flat-fielding. Watch whether this changes on a cold detector.

---

## Dead ends — do NOT re-try

- **WinUSB for frames.** Every configuration tried: single read, pre-armed overlapped,
  4× 512-B continuous-reader pool, RAW_IO, infinite timeout, alt-setting reassert,
  full init replay at 3 pacing rates. `0x82` never yields a byte. It's a transport
  limitation, confirmed by libusbK working with the identical command stream.
- **KMDF `piusbwdf.sys` IOCTLs** (`0x55006026/2A/2E/32`, `VENDOR_REQUEST_*` with any
  bRequest other than `0xF0`/`0xF1`). They pend in an **uncancellable** kernel wait —
  a wrong call wedges the process and needs a device disable/enable or reboot. Only
  `IOCTL_READ_FRAME` and `VENDOR_REQUEST_IN {0xF0,0xF1}` are cancel-safe there.
- **Chasing a "missing command" in the WinSpec32 capture.** We replayed it byte-for-byte.
  Nothing is missing; it was always the transport.
- **VM / XP mode** — user has ruled this out.

## Prior art (confirmed)
- Teledyne/PI never brought the ST-133 to 64-bit. PICam's supported list has no ST-133.
- Princeton's own GPL Linux driver `rspiusb` (`github.com/delmic/pvcam-pilk`,
  `usb/rspiusb.c`) is a dumb IOCTL passthrough — no firmware/GPIF/special init. Our
  approach matches it. The userspace arm sequence lives only in the closed `libpvcam`.

---

## Key files
- `spectro_suite/hardware/detectors/st133_libusb.py` — **the working driver** (pyusb/libusbK)
- `spectro_suite/hardware/detectors/st133_usb.py` — WinUSB path (register/setpoint only; big transport-reality note at top)
- `spectro_suite/hardware/detectors/st133_init_replay.py` — `REPLAY_OPS`, the verbatim cold-boot init blob
- `tools/st133_libusbk/` — standalone probe/plot scripts used to crack this
- `results/st133_2026-08-30/` — warm-detector frames + plots (dark-current demo)
- `USB Capture/analysis/` — decoded captures, pcap tooling
- deps: `pyusb`, `libusb-package` (in `requirements.txt`)
