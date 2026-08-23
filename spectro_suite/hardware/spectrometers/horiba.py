"""
Horiba Jobin Yvon HR460 Monochromator Serial Driver & Mock Simulator.
"""

from __future__ import annotations
import time
import logging
from typing import Optional, Callable, Tuple
import serial

try:
    from ...config import SpectrometerConfig, GratingConfig
    from ..base import MonochromatorStatus
except (ImportError, ValueError):
    import sys
    from pathlib import Path
    sys.path.insert(0, str(Path(__file__).resolve().parent.parent.parent.parent))
    from spectro_suite.config import SpectrometerConfig, GratingConfig
    from spectro_suite.hardware.base import MonochromatorStatus

logger = logging.getLogger("spectro_suite")


class HoribaHR460:
    """
    Serial controller for Horiba Jobin Yvon HR460 Monochromator over RS-232.
    """

    is_mock = False

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
        self.config = config or SpectrometerConfig(instrument_model="HR460")
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

    @property
    def is_connected(self) -> bool:
        return self.status in (
            MonochromatorStatus.READY,
            MonochromatorStatus.MOVING,
            MonochromatorStatus.CHANGING_GRATING,
            MonochromatorStatus.DEMO_MODE,
        )

    def connect(self) -> bool:
        """Open the serial port and perform the initialization handshake."""
        try:
            logger.info(f"Connecting to HR460 on {self.port} at {self.baudrate} baud...")
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
            self._init_hardware()
            self.status = MonochromatorStatus.READY
            self.read_position()
            return True
        except Exception as ex:
            logger.warning(f"Could not connect to physical HR460 on {self.port}: {ex}")
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

    def _init_hardware(self) -> None:
        """Execute legacy multi-step HR460 power-on handshake sequence."""
        if not self.ser:
            return

        self.ser.reset_input_buffer()
        self.ser.reset_output_buffer()

        # Step 1: Send space -> expect '*'
        self.ser.write(b" ")
        time.sleep(0.05)
        resp = self.ser.read(1)

        if resp == b"*":
            # Send \xf7 -> expect '='
            self.ser.write(bytes([247]))
            time.sleep(0.05)
            self.ser.read(1)
            # Send space -> expect 'B'
            self.ser.write(b" ")
            time.sleep(0.05)
            self.ser.read(1)
            # Send 'O2000\x00' -> expect '*'
            self.ser.write(b"O2000\x00")
            time.sleep(0.05)
            self.ser.read(1)
            # Send space -> expect 'o'
            self.ser.write(b" ")
            time.sleep(0.05)
            self.ser.read(1)
        elif resp == b"B":
            self.ser.write(b"O2000\x00")
            time.sleep(0.05)
            self.ser.read(1)
            self.ser.write(b" ")
            time.sleep(0.05)
            self.ser.read(1)

    def hard_initialize(self) -> bool:
        """Execute hard motor zero initialization ('A')."""
        if not self.ser:
            return False
        logger.info("Executing HR460 Hard Initialization (A)...")
        self.ser.write(b"A\r")
        start = time.time()
        while time.time() - start < 30.0:
            if self.ser.in_waiting:
                char = self.ser.read(1)
                if char == b"o":
                    self.read_position()
                    return True
            time.sleep(0.1)
        return False

    def set_origin_position(self, wavelength_nm: float) -> bool:
        """Set the software position origin counter ('G0,<steps>')."""
        if not self.ser:
            return False
        g = self.active_grating
        steps = int(round(wavelength_nm * g.steps_per_nm_at_1200 * (g.grating_grooves_per_mm / 1200.0)))
        cmd = f"G0,{steps}\r".encode("ascii")
        self.ser.write(cmd)
        
        start = time.time()
        while time.time() - start < 10.0:
            if self.ser.in_waiting:
                char = self.ser.read(1)
                if char == b"o":
                    self._current_wavelength_nm = wavelength_nm
                    return True
            time.sleep(0.05)
        return False

    def move_to_wavelength(
        self,
        target_nm: float,
        progress_callback: Optional[Callable[[float], None]] = None
    ) -> bool:
        """Move monochromator to absolute wavelength in nm."""
        if not self.ser:
            return False

        g = self.active_grating
        delta_nm = target_nm - self._current_wavelength_nm
        steps_to_move = int(round(delta_nm * (g.steps_per_nm_at_1200 * g.grating_grooves_per_mm / 1200.0)))

        if steps_to_move == 0:
            return True

        self.status = MonochromatorStatus.MOVING
        cmd = f"F0,{steps_to_move}\r".encode("ascii")
        self.ser.write(cmd)
        time.sleep(0.05)

        # Polling loop: send 'E' and query status
        start_time = time.time()
        while time.time() - start_time < 60.0:
            self.ser.write(b"E")
            time.sleep(0.05)
            resp = self.ser.read(1)
            
            if resp == b"z":
                # Motion complete
                break
            elif resp == b"q":
                # Still moving: query intermediate step
                self.ser.write(b"H0\r")
                time.sleep(0.05)
                pos_str = self._read_until_cr()
                if pos_str:
                    inter_steps = self._parse_steps(pos_str)
                    inter_wl = inter_steps / (g.steps_per_nm_at_1200 * g.grating_grooves_per_mm / 1200.0)
                    self._current_wavelength_nm = inter_wl
                    if progress_callback:
                        progress_callback(inter_wl)
            time.sleep(0.1)

        self.status = MonochromatorStatus.READY
        self.read_position()
        return True

    def read_position(self) -> float:
        """Query current wavelength position from controller ('H0')."""
        if not self.ser:
            return self._current_wavelength_nm

        self.ser.write(b"H0\r")
        time.sleep(0.05)
        pos_str = self._read_until_cr()
        if pos_str:
            steps = self._parse_steps(pos_str)
            g = self.active_grating
            self._current_wavelength_nm = steps / (g.steps_per_nm_at_1200 * g.grating_grooves_per_mm / 1200.0)

        return self._current_wavelength_nm

    def move_slit(self, target_width_microns: float) -> bool:
        """Adjust entrance slit width ('k0,0,<steps>')."""
        if not self.ser:
            return False

        delta = int(round(target_width_microns - self._current_slit_size))
        if delta == 0:
            return True

        cmd = f"k0,0,{delta}\r".encode("ascii")
        self.ser.write(cmd)
        time.sleep(0.05)

        start = time.time()
        while time.time() - start < 15.0:
            self.ser.write(b"E")
            time.sleep(0.05)
            resp = self.ser.read(1)
            if resp == b"z":
                break
            time.sleep(0.1)

        self._current_slit_size = target_width_microns
        return True

    def read_slit(self) -> float:
        """Query entrance slit width ('j0,0')."""
        if not self.ser:
            return self._current_slit_size

        self.ser.write(b"j0,0\r")
        time.sleep(0.05)
        slit_str = self._read_until_cr()
        if slit_str:
            self._current_slit_size = float(self._parse_steps(slit_str))
        return self._current_slit_size

    def select_grating(self, grating_index: int) -> bool:
        """Switch active grating turret (0: Grating 1, 1: Grating 2)."""
        if not self.ser or grating_index not in (0, 1):
            self.config.active_grating_index = grating_index
            return True

        self.status = MonochromatorStatus.CHANGING_GRATING
        cmd = b"b0\r" if grating_index == 0 else b"a0\r"
        self.ser.write(cmd)

        start = time.time()
        while time.time() - start < 30.0:
            if self.ser.in_waiting:
                char = self.ser.read(1)
                if char in (b"z", b"o"):
                    break
            time.sleep(0.1)

        self.config.active_grating_index = grating_index
        self._active_grating_idx = grating_index
        self.status = MonochromatorStatus.READY
        self.read_position()
        return True

    def _read_until_cr(self) -> str:
        if not self.ser:
            return ""
        chars = []
        start = time.time()
        while time.time() - start < 1.0:
            if self.ser.in_waiting:
                c = self.ser.read(1)
                if c in (b"\r", b"\n"):
                    break
                chars.append(c.decode("latin-1", errors="ignore"))
            else:
                time.sleep(0.02)
        return "".join(chars).strip()

    @staticmethod
    def _parse_steps(s: str) -> int:
        clean = s.lstrip("o").strip()
        try:
            return int(clean)
        except ValueError:
            return 0


class MockHoribaHR460(HoribaHR460):
    """
    Simulated Horiba HR460 monochromator for development and demonstration.
    """

    is_mock = True

    def __init__(self, config: Optional[SpectrometerConfig] = None):
        super().__init__(port="MOCK_COM", baudrate=9600, config=config)
        self.status = MonochromatorStatus.DEMO_MODE
        self._current_wavelength_nm = 700.0
        self._current_slit_size = 30.0

    def connect(self) -> bool:
        self.status = MonochromatorStatus.DEMO_MODE
        logger.info("Connected to Mock Horiba HR460 (Simulation Mode).")
        return True

    def disconnect(self) -> None:
        self.status = MonochromatorStatus.DISCONNECTED

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


if __name__ == "__main__":
    print("Testing MockHoribaHR460 driver...")
    driver = MockHoribaHR460()
    driver.connect()
    print(f"Status: {driver.status.name}")
    print("Moving to 650.0 nm...")
    driver.move_to_wavelength(650.0, progress_callback=lambda wl: print(f"  -> {wl:.2f} nm"))
    print(f"Current wavelength: {driver.current_wavelength_nm} nm")
    print("HR460 driver loaded and tested successfully!")
