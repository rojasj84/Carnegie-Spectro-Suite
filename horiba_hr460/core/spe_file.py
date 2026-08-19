"""
Princeton Instruments SPE Binary File Reader & Writer (SPE 2.x / 3.x).
"""

from __future__ import annotations
import struct
import os
from dataclasses import dataclass, field
from typing import Optional, Dict, Any, Tuple
import numpy as np


SPE_DATA_TYPES = {
    0: (np.float32, 4, "f"),
    1: (np.int32, 4, "i"),
    2: (np.int16, 2, "h"),
    3: (np.uint16, 2, "H"),
    8: (np.uint32, 4, "I"),
}


@dataclass
class SpeFile:
    """Represents a Princeton Instruments SPE file with header metadata and array data."""
    data: np.ndarray                            # Shape: (frames, ydim, xdim) or (ydim, xdim) or (xdim,)
    xdim: int = 1024
    ydim: int = 1
    num_frames: int = 1
    datatype: int = 0                          # 0=float32, 1=int32, 2=int16, 3=uint16
    exposure_time: float = 1.0
    date_str: str = ""
    experiment_title: str = ""
    laser_wavelength: float = 514.532
    center_wavelength: float = 700.0
    grating_grooves: float = 1800.0
    wavelengths: Optional[np.ndarray] = None   # Calibrated X-axis wavelengths if present

    def to_ascii(self, filepath: str, x_axis: Optional[np.ndarray] = None) -> None:
        """Export spectrum as 2-column ASCII text file."""
        x = x_axis if x_axis is not None else (self.wavelengths if self.wavelengths is not None else np.arange(1, len(self.data.flat) + 1))
        y = np.ravel(self.data)
        
        with open(filepath, "w", encoding="utf-8") as f:
            f.write(f"# Exported Spectrum from SPE\n")
            f.write(f"# Exposure: {self.exposure_time:.3f} s, Frames: {self.num_frames}\n")
            f.write(f"# Laser: {self.laser_wavelength:.3f} nm, Center: {self.center_wavelength:.3f} nm\n")
            f.write(f"# X_Wavelength\tY_Intensity\n")
            for xi, yi in zip(x, y):
                f.write(f"{xi:.6f}\t{yi:.6f}\n")


def read_spe(filepath: str) -> SpeFile:
    """Read a Princeton Instruments SPE file into an SpeFile object."""
    if not os.path.exists(filepath):
        raise FileNotFoundError(f"SPE file not found: {filepath}")

    with open(filepath, "rb") as f:
        header = f.read(4100)
        if len(header) < 4100:
            raise ValueError(f"File {filepath} is smaller than 4100 bytes (invalid SPE file).")

        # Datatype at offset 42 (short)
        datatype = struct.unpack_from("<h", header, 42)[0]
        # xdim at offset 656 (ushort)
        xdim = struct.unpack_from("<H", header, 656)[0]
        # ydim at offset 658 (ushort)
        ydim = struct.unpack_from("<H", header, 658)[0]
        # num_frames at offset 1446 (long)
        num_frames = struct.unpack_from("<l", header, 1446)[0]
        if num_frames <= 0:
            num_frames = 1

        # Exposure time at offset 10 (float)
        exp_time = struct.unpack_from("<f", header, 10)[0]
        # Date string at offset 20 (10 bytes)
        date_raw = header[20:30].decode("ascii", errors="ignore").strip("\x00")

        # Laser wavelength / calib at offset 3100 (float) if present
        laser_wl = struct.unpack_from("<d", header, 688)[0] if len(header) >= 696 else 514.532
        if math_is_invalid(laser_wl) or laser_wl <= 0 or laser_wl > 5000:
            laser_wl = 514.532

        dtype_info = SPE_DATA_TYPES.get(datatype, (np.float32, 4, "f"))
        dtype, itemsize, _ = dtype_info

        total_points = num_frames * ydim * xdim
        raw_data = f.read(total_points * itemsize)
        data = np.frombuffer(raw_data, dtype=dtype)

        if len(data) == total_points:
            if num_frames == 1 and ydim == 1:
                data = data.reshape((xdim,))
            elif num_frames == 1:
                data = data.reshape((ydim, xdim))
            else:
                data = data.reshape((num_frames, ydim, xdim))

        return SpeFile(
            data=data,
            xdim=xdim,
            ydim=ydim,
            num_frames=num_frames,
            datatype=datatype,
            exposure_time=exp_time,
            date_str=date_raw,
            laser_wavelength=laser_wl
        )


def write_spe(filepath: str, data: np.ndarray, exposure_time: float = 1.0) -> None:
    """Write 1D or 2D numpy array into a standard Princeton Instruments SPE 2.x file."""
    arr = np.asarray(data, dtype=np.float32)
    if arr.ndim == 1:
        num_frames, ydim, xdim = 1, 1, arr.shape[0]
    elif arr.ndim == 2:
        num_frames, ydim, xdim = 1, arr.shape[0], arr.shape[1]
    elif arr.ndim == 3:
        num_frames, ydim, xdim = arr.shape[0], arr.shape[1], arr.shape[2]
    else:
        raise ValueError(f"Unsupported array dimension: {arr.ndim}")

    header = bytearray(4100)
    # Datatype = 0 (float32)
    struct.pack_into("<h", header, 42, 0)
    # xdim
    struct.pack_into("<H", header, 656, xdim)
    # ydim
    struct.pack_into("<H", header, 658, ydim)
    # num_frames
    struct.pack_into("<l", header, 1446, num_frames)
    # exposure time
    struct.pack_into("<f", header, 10, float(exposure_time))
    # version (e.g. 2.5)
    struct.pack_into("<f", header, 3100, 2.5)

    with open(filepath, "wb") as f:
        f.write(header)
        f.write(arr.tobytes())


def math_is_invalid(val: float) -> bool:
    """Check if float is NaN or infinite."""
    import math
    return math.isnan(val) or math.isinf(val)
