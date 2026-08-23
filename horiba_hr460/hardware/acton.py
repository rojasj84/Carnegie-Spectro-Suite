"""
Acton Research Corporation / Princeton Instruments SpectraPro Monochromator Serial Driver
& Mock Simulator.

Command set (GOTO, NM, ?NM, GRATING, MICRONS, MONO-RESET, ...) is the documented ASCII
RS232 protocol shared across the SpectraPro line (150 / 300i / 500i / 750, including
custom focal-length units built on the same SpectraDrive controller firmware): 9600 baud,
8 data bits, 1 stop bit, no parity; commands terminated with CR; the controller echoes
each character sent and terminates every response with " ok\\r\\n".
"""

from __future__ import annotations
import re
import time
import logging
from typing import Optional, Callable
import serial

from ..config import SpectrometerConfig, GratingConfig
from .base import MonochromatorStatus

logger = logging.getLogger("horiba_hr460")

_FLOAT_RE = re.compile(r"[-+]?\d+\.?\d*")


class ActonSpectrometer:
    """
    Serial controller for Acton Research Corporation / Princeton Instruments
    SpectraPro-series monochromators over RS-232.
    """

    def __init__(
        self,
        port: str = "COM1",
        baudrate: int = 9600,
        timeout: float = 2.0,
        config: Optional[SpectrometerConfig] = None
    ):
        self.port = port
        self.baudrate = baudrate
        self.timeout = timeout
        self.config = config or SpectrometerConfig(instrument_model="ACTON")
        self.ser: Optional[serial.Serial] = None
        self.status = MonochromatorStatus.DISCONNECTED
        self._current_wavelength_nm: float = 700.0
        self._current_slit_size: float = 30.0
        self._active_grating_idx: int = 0

    @property
    def current_wavelength_nm(self) -> float:
        return self._current_wavelength_nm

    @property
    def current_slit_size(self) -> float:
        return self._current_slit_size

    @property
    def active_grating(self) -> GratingConfig:
        return self.config.active_grating

    def connect(self) -> bool:
        """Open the serial port and designate the entrance slit for width commands."""
        try:
            logger.info(f"Connecting to Acton SpectraPro on {self.port} at {self.baudrate} baud...")
            self.status = MonochromatorStatus.CONNECTING
            self.ser = serial.Serial(
                port=self.port,
                baudrate=self.baudrate,
                bytesize=serial.EIGHTBITS,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                timeout=self.timeout
            )
            time.sleep(0.2)
            self.ser.reset_input_buffer()
            self.ser.reset_output_buffer()

            # Designates the entrance slit for MICRONS commands; harmless/idempotent
            # per the SpectraPro manual, sticks until changed again.
            try:
                self._send("FRONT-ENT-SLIT")
            except Exception as ex:
                logger.debug(f"FRONT-ENT-SLIT designation failed (non-fatal): {ex}")

            try:
                model = self._send("MODEL")
                serial_no = self._send("SERIAL")
                if model:
                    self.config.instrument_model = f"Acton {model}"
                logger.info(f"Acton SpectraPro identified as MODEL={model!r} SERIAL={serial_no!r}")
            except Exception as ex:
                logger.debug(f"Could not read Acton MODEL/SERIAL: {ex}")

            try:
                self.read_installed_gratings()
                self.read_active_grating()
            except Exception as ex:
                logger.debug(f"Could not read Acton gratings: {ex}")

            self.status = MonochromatorStatus.READY
            self.read_position()
            return True
        except Exception as ex:
            logger.warning(f"Could not connect to physical Acton SpectraPro on {self.port}: {ex}")
            self.status = MonochromatorStatus.ERROR
            if self.ser and self.ser.is_open:
                self.ser.close()
            self.ser = None
            return False

    def disconnect(self) -> None:
        """Close serial port."""
        if self.ser and self.ser.is_open:
            self.ser.close()
        self.ser = None
        self.status = MonochromatorStatus.DISCONNECTED

    def _send(self, cmd: str, timeout: Optional[float] = None) -> str:
        """
        Send a command and return its response text (empty for commands with no
        return value). The controller echoes every sent character back and always
        terminates its reply with " ok\\r\\n", so the echoed command prefix and the
        trailing "ok" are stripped from what's read off the wire.
        """
        if not self.ser:
            raise RuntimeError("Not connected to Acton SpectraPro.")

        to = timeout if timeout is not None else self.timeout
        self.ser.reset_input_buffer()
        self.ser.write((cmd + "\r").encode("ascii"))

        deadline = time.time() + to
        buf = b""
        while time.time() < deadline:
            chunk = self.ser.read(self.ser.in_waiting or 1)
            if chunk:
                buf += chunk
                if buf.lower().rstrip().endswith(b"ok"):
                    break
            else:
                time.sleep(0.01)

        text = buf.decode("latin-1", errors="ignore").rstrip()
        if text.lower().endswith("ok"):
            text = text[: len(text) - 2]
        text = text.strip()
        if text.lower().startswith(cmd.lower()):
            text = text[len(cmd):]
        return text.strip(" \r\n\t")

    def _query_float(self, cmd: str, timeout: Optional[float] = None) -> Optional[float]:
        resp = self._send(cmd, timeout=timeout)
        match = _FLOAT_RE.search(resp)
        return float(match.group()) if match else None

    def hard_initialize(self) -> bool:
        """Re-initialize the monochromator ('MONO-RESET')."""
        if not self.ser:
            return False
        logger.info("Executing Acton SpectraPro MONO-RESET...")
        self._send("MONO-RESET", timeout=30.0)
        self.read_position()
        return True

    def move_to_wavelength(
        self,
        target_nm: float,
        progress_callback: Optional[Callable[[float], None]] = None
    ) -> bool:
        """
        Move to an absolute wavelength using the rapid 'GOTO' command.
        """
        if not self.ser:
            return False

        self.status = MonochromatorStatus.MOVING
        try:
            # GOTO rapidly slews directly to target wavelength
            self._send(f"{target_nm:.3f} GOTO", timeout=30.0)
            self.read_position()
            if progress_callback:
                progress_callback(self._current_wavelength_nm)
        finally:
            self.status = MonochromatorStatus.READY
            self.read_position()

        return True


    def read_position(self) -> float:
        """Query current wavelength position ('?NM')."""
        if not self.ser:
            return self._current_wavelength_nm
        wl = self._query_float("?NM")
        if wl is not None:
            self._current_wavelength_nm = wl
        return self._current_wavelength_nm

    def move_slit(self, target_width_microns: float) -> bool:
        """Adjust the designated entrance slit width ('<width> MICRONS')."""
        if not self.ser:
            return False
        self._send(f"{target_width_microns:.0f} MICRONS")
        self._current_slit_size = target_width_microns
        return True

    def read_slit(self) -> float:
        """Query the designated slit width ('?MICRONS')."""
        if not self.ser:
            return self._current_slit_size
        val = self._query_float("?MICRONS")
        if val is not None:
            self._current_slit_size = val
        return self._current_slit_size

    def select_grating(self, grating_index: int) -> bool:
        """Switch active grating (0-based, mapped to Acton's 1-based grating number)."""
        if not self.ser:
            self.config.active_grating_index = grating_index
            return True

        self.status = MonochromatorStatus.CHANGING_GRATING
        self._send(f"{grating_index + 1} GRATING", timeout=30.0)
        self.config.active_grating_index = grating_index
        self._active_grating_idx = grating_index
        self.status = MonochromatorStatus.READY
        self.read_position()
        return True

    def read_active_grating(self) -> int:
        """Query currently selected grating index (0-based) using '?GRATING'."""
        if not self.ser:
            return self._active_grating_idx
        try:
            resp = self._send("?GRATING")
            m = re.search(r"\d+", resp)
            if m:
                grating_num = int(m.group())
                self._active_grating_idx = max(0, grating_num - 1)
                self.config.active_grating_index = self._active_grating_idx
        except Exception as ex:
            logger.debug(f"Could not query ?GRATING: {ex}")
        return self._active_grating_idx

    def read_installed_gratings(self) -> List[GratingConfig]:
        """Query installed gratings from firmware using '?GRATINGS'."""
        if not self.ser:
            return self.config.gratings
        try:
            resp = self._send("?GRATINGS", timeout=3.0)
            parsed: List[GratingConfig] = []
            for line in resp.splitlines():
                line = line.strip(" \r\n\t\x1a")
                if not line or line.lower() == "ok" or "not installed" in line.lower():
                    continue
                m = re.match(r"(\d+)\s+([0-9.]+)\s*g/mm(?:\s+BLZ=\s*([^\s]+))?", line, re.IGNORECASE)
                if m:
                    grooves = float(m.group(2))
                    prev_g = self.config.gratings[len(parsed)] if len(parsed) < len(self.config.gratings) else None
                    g = GratingConfig(
                        grating_grooves_per_mm=grooves,
                        spectrometer_pos_nm=self._current_wavelength_nm,
                        slit_size=self._current_slit_size,
                        laser_wavelength=prev_g.laser_wavelength if prev_g else 532.0,
                        accumulations=prev_g.accumulations if prev_g else 1
                    )
                    parsed.append(g)
            if parsed:
                self.config.gratings = parsed
        except Exception as ex:
            logger.debug(f"Could not query ?GRATINGS: {ex}")
        return self.config.gratings


class MockActonSpectrometer(ActonSpectrometer):
    """
    Simulated Acton SpectraPro monochromator for development and demonstration.
    """

    def __init__(self, config: Optional[SpectrometerConfig] = None):
        super().__init__(port="MOCK_COM", baudrate=9600, config=config)
        self.status = MonochromatorStatus.DEMO_MODE
        self._current_wavelength_nm = 700.0
        self._current_slit_size = 30.0

    def connect(self) -> bool:
        self.status = MonochromatorStatus.DEMO_MODE
        logger.info("Connected to Mock Acton SpectraPro (Simulation Mode).")
        return True

    def disconnect(self) -> None:
        self.status = MonochromatorStatus.DISCONNECTED

    def read_active_grating(self) -> int:
        return self.config.active_grating_index

    def read_installed_gratings(self) -> List[GratingConfig]:
        return self.config.gratings

    def hard_initialize(self) -> bool:
        time.sleep(0.2)
        return True

    def move_to_wavelength(
        self,
        target_nm: float,
        progress_callback: Optional[Callable[[float], None]] = None
    ) -> bool:
        self.status = MonochromatorStatus.MOVING
        start_wl = self._current_wavelength_nm
        delta = target_nm - start_wl
        steps = 10
        for i in range(1, steps + 1):
            time.sleep(0.03)
            inter = start_wl + (delta * (i / steps))
            self._current_wavelength_nm = inter
            if progress_callback:
                progress_callback(inter)
        self._current_wavelength_nm = target_nm
        self.status = MonochromatorStatus.DEMO_MODE
        return True

    def move_slit(self, target_width_microns: float) -> bool:
        time.sleep(0.1)
        self._current_slit_size = target_width_microns
        return True

    def select_grating(self, grating_index: int) -> bool:
        self.status = MonochromatorStatus.CHANGING_GRATING
        time.sleep(0.3)
        self.config.active_grating_index = grating_index
        self._active_grating_idx = grating_index
        self.status = MonochromatorStatus.DEMO_MODE
        return True
