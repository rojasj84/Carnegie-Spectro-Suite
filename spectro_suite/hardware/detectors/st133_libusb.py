"""
ST-133 / OMA-V InGaAs -- WORKING 64-bit acquisition path (pyusb + libusb-1.0 / libusbK).
=======================================================================================
This is the transport that actually delivers pixel frames on 64-bit Windows.

WHY THIS EXISTS (2026-08-30): WinUSB (spectro_suite/hardware/detectors/st133_usb.py)
can drive the command channel fine -- register reads/writes, EP0 vendor calls -- but
the bulk-IN *pixel* pipe 0x82 stays completely silent under WinUSB no matter what.
Swapping the device to the **libusbK** kernel driver (via Zadig) and talking to it
through pyusb / libusb-1.0 makes frames come back immediately and reproducibly.

SETUP (one time):
  1. Zadig -> Options -> List All Devices -> select "…0BD7 A010…" -> target driver
     **libusbK** -> Replace Driver. (Reboot if Windows asks.)
  2. pip install pyusb libusb-package

VERIFIED WORKING 2026-08-30 against the physical unit:
  * connect + full cold-boot init burst (once per connection)
  * arm/trigger sequence -> 1024-byte frame on 0x82, reproducibly (6/6, N/N)
  * REG_EXPOSURE (0x32 low byte) controls integration time: frame mean scales
    ~linearly with it. exposure_units=0 -> clean flat bias frame (~260 counts).
NOT yet validated: a real spectrum (detector was warm -- LN2 long gone -- so every
frame at nonzero integration is dark-current-flooded). Re-cool + light source needed.

See IN_PROGRESS.md at the repo root for the full picture and Monday's plan.
"""
from __future__ import annotations
import os
import json
import time
import logging
import threading
from typing import Optional, Tuple

import numpy as np

from ..base import Camera as BaseCamera
from .st133_usb import (
    REG_SELFTEST, REG_TEMPERATURE, REG_TEMP_CACHED, REG_EXPOSURE,
    REG_RECONFIG_BURST_A, REG_ARM_PREP, REG_ARM_POST, REG_RECONFIG_BURST_B,
    VR_ARM_PREP, BUSY_POLL_COUNT, REG_ACQ_BUSY, REG_ACQ_PRETRIGGER,
    REG_ACQ_TRIGGER, REG_ACQ_POSTTRIGGER,
    TEMP_C_PLAUSIBLE_MIN, TEMP_C_PLAUSIBLE_MAX,
    BULK_CMD_READ, BULK_CMD_WRITE,
)

logger = logging.getLogger(__name__)

VID, PID = 0x0BD7, 0xA010
EP_CMD_OUT, EP_REPLY_IN, EP_PIXEL_IN = 0x08, 0x86, 0x82

# Bad pixels / regions on this 512-element InGaAs array (verified 2026-08-30/31):
#   - pixels 0..63  : a noisy elevated block present even at 0x32=0 -- a
#                     readout artifact at the start of the shift register (or a
#                     masked/overscan region). Not signal, not dark current.
#   - pixel 64      : a large single-pixel spike at the block boundary.
#   - pixel 511     : shift register running off the end (charge injection on
#                     the last, electrically-terminated element).
# GOOD_SLICE is the trustworthy science region. _sanitize_frame() flattens the
# bad zones to the local baseline unless correct_bad_pixels=False.
BAD_PIXEL_RANGES = ((0, 65),)   # half-open [start, stop)
BAD_PIXELS = (511,)
GOOD_SLICE = slice(70, 511)
# The array reads out through two amplifiers (even / odd pixel index); on this
# unit the two taps differ by ~10 counts of offset (even ~254, odd ~265 at
# 0x32=0). Not corrected here -- handle in flat-fielding if it matters.

# pyusb / libusb backend (libusb-package bundles libusb-1.0.dll; pyusb is pure python)
try:
    import usb.core            # noqa: F401
    import usb.util
    try:
        import libusb_package
        _find_dev = libusb_package.find
    except Exception:
        libusb_package = None
        import usb.core as _uc
        _find_dev = _uc.find
    HAVE_LIBUSB = True
except Exception:                # pragma: no cover - environment without pyusb
    HAVE_LIBUSB = False
    _find_dev = None


def _int8_celsius(word: Optional[int]) -> Optional[float]:
    """Low byte of a register word as two's-complement int8 -> degrees C (or None)."""
    if word is None:
        return None
    b = word & 0xFF
    c = b - 256 if b >= 128 else b
    return float(c) if TEMP_C_PLAUSIBLE_MIN <= c <= TEMP_C_PLAUSIBLE_MAX else None


# --- REG_TEMPERATURE (0x46) ADC -> Celsius calibration --------------------
# The 0x46 low byte is a live ADC value (0x00 while warm/invalid; 0x5D at
# ~1 h into a cool-down 2026-08-31). The ADC->C curve is NOT known. Drop a
# JSON file next to the config to calibrate it:
#   config/st133_temp_cal.json  ->  {"points": [[93, -92.0], [140, -99.0], ...]}
# (adc_low_byte, celsius pairs from WinSpec's live display). >=2 points -> a
# linear fit is used; otherwise temperature_c stays None (status UNCAL) and
# raw_adc is reported so you can still watch it move.
_TEMP_CAL_PATH = os.path.join(
    os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(__file__)))),
    "config", "st133_temp_cal.json",
)


def _load_temp_cal():
    try:
        with open(_TEMP_CAL_PATH) as fh:
            d = json.load(fh)
        if isinstance(d.get("poly"), list) and len(d["poly"]) >= 2:
            return ("poly", d["poly"])
        pts = [(float(a), float(c)) for a, c in d.get("points", [])]
        if len(pts) >= 2:
            xs = np.array([p[0] for p in pts]); ys = np.array([p[1] for p in pts])
            m, b = np.polyfit(xs, ys, 1)
            return ("poly", [float(m), float(b)])
    except FileNotFoundError:
        pass
    except Exception as ex:
        logger.warning(f"ST-133 temp cal file unreadable ({_TEMP_CAL_PATH}): {ex}")
    return (None, None)


def _adc_to_celsius(adc_byte: int):
    kind, coef = _load_temp_cal()
    if kind == "poly":
        return float(np.polyval(coef, adc_byte))
    return None


class ST133LibUsbCamera(BaseCamera):
    """
    Princeton Instruments ST-133 / OMA-V 512-px InGaAs over pyusb + libusbK.

    exposure_units (0..255) writes REG_EXPOSURE (0x32 low byte) just before the
    trigger. 0 = minimum integration (flat bias frame). The units-to-seconds
    conversion is not yet characterised; treat this as a raw integration knob.
    """

    is_mock = False

    def __init__(self, num_pixels: int = 512, dark_current: float = 500.0,
                 exposure_units: int = 0):
        self.num_pixels = num_pixels
        self.dark_current = dark_current
        self.exposure_units = int(exposure_units) & 0xFF
        self.is_connected = False
        self.camera_model_name = "Princeton Instruments OMA-V InGaAs (7514-0001)"
        self._dev = None
        self._io_lock = threading.RLock()
        self._last_temperature: Optional[float] = None

    # -- low-level register / control I/O ---------------------------------

    def _wr(self, addr: int, value: int) -> None:
        self._dev.write(EP_CMD_OUT,
                        bytes([0x01, addr & 0xFF, 0x00, BULK_CMD_WRITE,
                               value & 0xFF, (value >> 8) & 0xFF]),
                        timeout=1000)

    def _rd(self, addr: int) -> int:
        self._dev.write(EP_CMD_OUT,
                        bytes([0x01, addr & 0xFF, 0x00, BULK_CMD_READ, 0x00, 0x00]),
                        timeout=1000)
        return int.from_bytes(bytes(self._dev.read(EP_REPLY_IN, 2, timeout=1000)), "little")

    def _ep0(self, b_request: int, w_value: int) -> None:
        # RequestType 0x40 = host->device | vendor | device, 8 zero bytes
        self._dev.ctrl_transfer(0x40, b_request, w_value, 0, bytes(8), timeout=1000)

    # -- connection ----------------------------------------------------------

    def connect(self) -> bool:
        if not HAVE_LIBUSB:
            logger.warning("ST-133 libusb path needs `pip install pyusb libusb-package`.")
            self.is_connected = False
            return False
        try:
            dev = _find_dev(idVendor=VID, idProduct=PID)
            if dev is None:
                logger.warning("ST-133 not found by libusb. Is it on the libusbK driver (Zadig)?")
                self.is_connected = False
                return False
            self._dev = dev
            for step, fn in (
                ("set_configuration", lambda: dev.set_configuration()),
                ("claim_interface(0)", lambda: usb.util.claim_interface(dev, 0)),
                ("set_interface_altsetting(0,0)",
                 lambda: dev.set_interface_altsetting(interface=0, alternate_setting=0)),
            ):
                try:
                    fn()
                except Exception as ex:
                    logger.debug(f"ST-133 libusb {step}: {ex}")

            # liveness: 0x40 write-then-readback echo
            with self._io_lock:
                self._wr(REG_SELFTEST, 0x5A)
                echo = self._rd(REG_SELFTEST)
            if echo != 0x5A5A:
                logger.warning(f"ST-133 echo check unexpected (0x{echo:04X}); continuing anyway.")
            else:
                logger.info("ST-133 (libusb) command channel live -- 0x40 echo OK.")

            self._run_init_burst()
            self.is_connected = True
            logger.info("ST-133 connected via libusb/libusbK.")
            return True
        except Exception as ex:
            logger.error(f"ST-133 libusb connect failed: {ex}")
            self.is_connected = False
            return False

    def disconnect(self) -> None:
        if self._dev is not None:
            try:
                usb.util.release_interface(self._dev, 0)
            except Exception:
                pass
            try:
                usb.util.dispose_resources(self._dev)
            except Exception:
                pass
        self._dev = None
        self.is_connected = False

    # -- init burst + trigger ---------------------------------------------

    def _run_init_burst(self) -> None:
        """
        Replay WinSpec32's cold-boot controller init verbatim (the 0x40 unlock,
        the ~35k-value 0x54 PTG timing-table stream, 0xA2 handshake, 0x40 lock).
        REQUIRED once per connection -- without it the trigger produces no
        pixel clock. ~2.5s. Drops the trailing REG_RECONFIG_BURST_A (that
        belongs to the trigger sequence).
        """
        try:
            from .st133_init_replay import REPLAY_OPS
        except Exception as ex:
            logger.warning(f"ST-133 init-burst data unavailable: {ex}")
            return
        t0 = time.monotonic()
        nw = nr = 0
        with self._io_lock:
            for op in REPLAY_OPS[:-6]:
                if op[0] == "BULK_OUT":
                    self._dev.write(op[1], bytes(op[2]), timeout=2000)
                    nw += 1
                elif op[0] == "BULK_IN":
                    try:
                        self._dev.read(op[1], op[2], timeout=2000)
                        nr += 1
                    except Exception as ex:
                        logger.error(f"ST-133 init burst aborted at op {nw + nr}: {ex}")
                        return
        logger.info(f"ST-133 init burst: {nw} writes + {nr} reads in {time.monotonic() - t0:.1f}s.")

    def _arm_and_trigger(self, exposure_units: int) -> None:
        """The verified arm/trigger sequence. Holds _io_lock; caller must not."""
        with self._io_lock:
            for addr, val in REG_RECONFIG_BURST_A:
                self._wr(addr, val)
            for addr, val in REG_ARM_PREP:
                self._wr(addr, val)
            self._ep0(VR_ARM_PREP, 0x0200)
            for addr, val in REG_ARM_POST:
                self._wr(addr, val)
            for addr, val in REG_RECONFIG_BURST_B:
                self._wr(addr, val)
            self._wr(REG_EXPOSURE, exposure_units & 0xFF)   # integration time
            for _ in range(BUSY_POLL_COUNT):
                self._rd(REG_ACQ_BUSY)
            self._rd(REG_ACQ_PRETRIGGER)
            self._ep0(0xF0, 0x0000)
            self._wr(REG_ACQ_TRIGGER, 1)
            self._rd(REG_ACQ_POSTTRIGGER)

    # -- acquisition -----------------------------------------------------

    def acquire_frame(self, exposure_time_sec: float = 1.0,
                      wavelengths_nm=None, progress_callback=None,
                      stop_requested=None, correct_bad_pixels: bool = True) -> Tuple[np.ndarray, int]:
        """
        Pre-arm a bulk-IN read on 0x82, fire the trigger, collect the 1024-byte
        frame. Integration time is self.exposure_units (REG_EXPOSURE), NOT
        exposure_time_sec (units unknown). Returns (int64[num_pixels], count).

        correct_bad_pixels: flatten BAD_PIXEL_RANGES / BAD_PIXELS to the local
        baseline (see _sanitize_frame). Set False for the raw array.

        exposure_time_sec -> REG_EXPOSURE integration units (0..255) as
        round(sec * 250), clamped. 0x32 is a real integration-time register
        (frame level scales ~linearly with it); the exact units->seconds
        relation isn't characterised yet, so treat the seconds field as a
        relative knob: ~1.0 s is full scale, use 0.02-0.5 for a bright line.
        Set self.exposure_units directly, or pass exposure_time_sec <= 0, for
        raw control.
        """
        if exposure_time_sec and exposure_time_sec > 0:
            self.exposure_units = int(max(0, min(255, round(exposure_time_sec * 250))))
        n_bytes = self.num_pixels * 2
        if not self.is_connected or self._dev is None:
            if not self.connect():
                return np.zeros(self.num_pixels, dtype=np.int64), 0

        result: dict = {}

        def _reader():
            try:
                result["data"] = bytes(self._dev.read(EP_PIXEL_IN, n_bytes, timeout=7000))
            except Exception as ex:  # USBTimeoutError etc.
                result["err"] = repr(ex)

        th = threading.Thread(target=_reader, name="ST133PixelRead", daemon=True)
        th.start()
        time.sleep(0.05)  # let the read get posted before the trigger

        try:
            self._arm_and_trigger(self.exposure_units)
        except Exception as ex:
            logger.error(f"ST-133 trigger failed: {ex}")

        th.join(timeout=9.0)
        if progress_callback:
            progress_callback(1.0)

        data = result.get("data")
        if data and len(data) >= n_bytes:
            frame = np.frombuffer(data[:n_bytes], dtype="<u2").astype(np.int64)
            return (self._sanitize_frame(frame) if correct_bad_pixels else frame), 1
        if "err" in result:
            logger.warning(f"ST-133 no frame on 0x82: {result['err']}")
        return np.zeros(self.num_pixels, dtype=np.int64), 0

    @staticmethod
    def _sanitize_frame(frame: np.ndarray) -> np.ndarray:
        """Flatten the known bad zones to the local science baseline."""
        f = frame.copy()
        g0, g1 = GOOD_SLICE.start, GOOD_SLICE.stop
        baseline = int(np.median(f[g0:min(g1, g0 + 60)]))
        for a, b in BAD_PIXEL_RANGES:
            f[a:b] = baseline
        for p in BAD_PIXELS:
            f[p] = f[p - 1] if p > 0 else f[p + 1]
        return f

    def set_exposure_units(self, units: int) -> None:
        self.exposure_units = int(units) & 0xFF

    def grab_2d_frame(self, color_mode: str = "RGB", timeout_ms: int = 2000):
        spec, _ = self.acquire_frame()
        h = max(64, self.num_pixels // 4)
        mx = float(np.max(spec)) if spec.size and np.max(spec) > 0 else 1.0
        mono = np.tile(np.clip(spec / mx * 255.0, 0, 255).astype(np.uint8), (h, 1))
        if color_mode.upper() == "RGB":
            return np.stack([mono] * 3, axis=-1)
        return mono

    # -- temperature ---------------------------------------------------------

    def get_temperature(self) -> Optional[dict]:
        """
        Live temperature. REG_TEMPERATURE (0x46) low byte is a live ADC value
        (0x00 while warm/invalid; non-zero once cold and the sense loop runs).
        Converted to Celsius via config/st133_temp_cal.json if present
        (>=2 (adc, C) points -> linear fit); otherwise temperature_c is None
        with status UNCAL and raw_adc is reported so it can still be watched.
        REG_TEMP_CACHED (0x54) holds the last cold steady-state value (a cache,
        never updates live; NOT a setpoint).
        """
        raw_t = raw_c = None
        temp_c = cached_c = None
        raw_adc = None
        status = "OFFLINE"
        if self.is_connected and self._dev is not None:
            with self._io_lock:
                raw_t = self._rd(REG_TEMPERATURE)
                raw_c = self._rd(REG_TEMP_CACHED)
            cached_c = _int8_celsius(raw_c)
            if raw_t:
                raw_adc = raw_t & 0xFF
                temp_c = _adc_to_celsius(raw_adc)
                if temp_c is not None:
                    self._last_temperature = temp_c
                    status = "OK"
                else:
                    status = "UNCAL"    # live ADC present, no calibration loaded
            else:
                status = "NO_LIVE_TEMP"  # 0x46 == 0: warm / sense loop idle
        return {
            "temperature_c": temp_c,
            "raw_adc": raw_adc,
            "cached_temp_c": cached_c,
            "setpoint_c": None,
            "status": 1 if temp_c is not None else 0,
            "status_str": status,
            "raw_register": raw_t,
            "raw_cached": raw_c,
            "is_simulated": False,
        }

    def get_detector_info(self) -> dict:
        return {
            "model": self.camera_model_name,
            "xdim": self.num_pixels,
            "ydim": 1,
            "is_connected": self.is_connected,
            "transport": "libusb/libusbK",
            "is_simulated": False,
        }
