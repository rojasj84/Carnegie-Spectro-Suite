"""
Shared hardware interfaces: the duck-typed contract that GUI/CLI code relies on,
formalized as Protocol classes so any vendor driver can be dropped in.
"""

from __future__ import annotations
from enum import Enum
from typing import Optional, Callable, Tuple, Protocol, runtime_checkable
import numpy as np


class MonochromatorStatus(str, Enum):
    DISCONNECTED = "Disconnected"
    CONNECTING = "Connecting"
    READY = "Ready"
    MOVING = "Moving"
    CHANGING_GRATING = "Changing Grating"
    ERROR = "Error"
    DEMO_MODE = "Demo Mode (Mock)"


@runtime_checkable
class Spectrometer(Protocol):
    """Interface satisfied by any monochromator/spectrograph driver (e.g. HoribaHR460, ActonSpectrometer)."""

    status: MonochromatorStatus
    is_mock: bool

    @property
    def current_wavelength_nm(self) -> float: ...

    @property
    def current_slit_size(self) -> float: ...

    def connect(self) -> bool: ...

    def disconnect(self) -> None: ...

    def move_to_wavelength(
        self,
        target_nm: float,
        progress_callback: Optional[Callable[[float], None]] = None
    ) -> bool: ...

    def move_slit(self, target_width_microns: float) -> bool: ...

    def select_grating(self, grating_index: int) -> bool: ...

    def read_position(self) -> float: ...

    def read_slit(self) -> float: ...

    def hard_initialize(self) -> bool: ...


@runtime_checkable
class Camera(Protocol):
    """Interface satisfied by any detector / camera driver (e.g. MockCamera, WinSpecController, etc.)."""

    is_connected: bool
    is_mock: bool

    def connect(self) -> bool: ...

    def acquire_frame(
        self,
        exposure_time_sec: float = 1.0,
        wavelengths_nm: Optional[np.ndarray] = None,
        progress_callback: Optional[Callable[[float], None]] = None,
        stop_requested: Optional[Callable[[], bool]] = None
    ) -> Tuple[np.ndarray, int]: ...
