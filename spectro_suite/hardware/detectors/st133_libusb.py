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
import time
import logging
import threading
from typing import Optional, Tuple

import numpy as np

from ..base import Camera as BaseCamera
from .st133_usb import (
    REG_SELFTEST, REG_TEMPERATURE, REG_TEMP_SETPOINT, REG_EXPOSURE,
    REG_RECONFIG_BURST_A, REG_ARM_PREP, REG_ARM_POST, REG_RECONFIG_BURST_B,
    VR_ARM_PREP, BUSY_POLL_COUNT, REG_ACQ_BUSY, REG_ACQ_PRETRIGGER,
    REG_ACQ_TRIGGER, REG_ACQ_POSTTRIGGER,
    TEMP_C_PLAUSIBLE_MIN, TEMP_C_PLAUSIBLE_MAX,
    BULK_CMD_READ, BULK_CMD_WRITE,
)

logger = logging.getLogger(__name__)

VID, PID = 0x0BD7, 0xA010
EP_CMD_OUT, EP_REPLY_IN, EP_PIXEL_IN = 0x08, 0x86, 0x82

# Known-bad edge pixels on this 512-element InGaAs array. Verified 2026-08-30
# on a flat 0x32=0 baseline: pixels 0..510 sit at a clean ~260 counts (std ~2),
# but pixel 511 reads ~2100 +/- 380 -- the shift-register readout running off
# the end of the array (charge injection / clock feedthrough on the last
# element, which is an electrically-terminated dummy cell). Replaced with the
# nearest good neighbour unless correct_bad_pixels=False.
BAD_PIXELS = (511,)
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

        correct_bad_pixels: replace BAD_PIXELS (the run-off-the-end pixel 511)
        with the nearest good neighbour. Set False to see the raw array.
        """
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
            if correct_bad_pixels:
                frame = frame.copy()
                for p in BAD_PIXELS:
                    if 0 < p < self.num_pixels - 1:
                        frame[p] = (frame[p - 1] + frame[p + 1]) // 2
                    elif p == self.num_pixels - 1:
                        frame[p] = frame[p - 1]
                    elif p == 0:
                        frame[p] = frame[p + 1]
            return frame, 1
        if "err" in result:
            logger.warning(f"ST-133 no frame on 0x82: {result['err']}")
        return np.zeros(self.num_pixels, dtype=np.int64), 0

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
        Live temperature from REG_TEMPERATURE (0x46); cooler setpoint from
        REG_TEMP_SETPOINT (0x54). While the detector is warm / cooler loop
        idle, 0x46 reads 0 -> temperature_c is None with status NO_LIVE_TEMP.
        """
        raw_t = raw_s = None
        temp_c = setpoint_c = None
        status = "OFFLINE"
        if self.is_connected and self._dev is not None:
            with self._io_lock:
                raw_t = self._rd(REG_TEMPERATURE)
                raw_s = self._rd(REG_TEMP_SETPOINT)
            setpoint_c = _int8_celsius(raw_s)
            if raw_t:
                temp_c = _int8_celsius(raw_t)
                status = "OK" if temp_c is not None else "DECODE_IMPLAUSIBLE"
                if temp_c is not None:
                    self._last_temperature = temp_c
            else:
                status = "NO_LIVE_TEMP"
        return {
            "temperature_c": temp_c,
            "setpoint_c": setpoint_c,
            "status": 1 if temp_c is not None else 0,
            "status_str": status,
            "raw_register": raw_t,
            "raw_setpoint": raw_s,
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
