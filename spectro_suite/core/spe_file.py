"""
Princeton Instruments SPE Binary File Reader & Writer (WinSpec/WinView SPE 2.x format).
"""

from __future__ import annotations
import struct
import os
import math
from datetime import datetime
from dataclasses import dataclass
from typing import Optional
import numpy as np

SPE_DATA_TYPES = {
    0: (np.float32, 4, "f"),
    1: (np.int32, 4, "i"),
    2: (np.int16, 2, "h"),
    3: (np.uint16, 2, "H"),
    8: (np.uint32, 4, "I"),
}

# Header field offsets (WinSpec SPE 2.5 spec)
_OFFSET_EXP_SEC = 10
_OFFSET_DATE = 20
_OFFSET_SPEC_CENTER_WL_NM = 72
_OFFSET_XDIM = 42
_OFFSET_DATATYPE = 108
_OFFSET_SPEC_GROOVES = 650
_OFFSET_YDIM = 656
_OFFSET_NUM_FRAMES = 1446
_OFFSET_FILE_HEADER_VER = 1992
_OFFSET_XCALIB = 3000

# Offsets within the 489-byte AxisCalibration block
_XCAL_OFFSET = 0
_XCAL_FACTOR = 8
_XCAL_CURRENT_UNIT = 16
_XCAL_STRING = 18
_XCAL_VALID = 98
_XCAL_INPUT_UNIT = 99
_XCAL_POLYNOM_UNIT = 100
_XCAL_POLYNOM_ORDER = 101
_XCAL_CALIB_COUNT = 102
_XCAL_PIXEL_POSITION = 103
_XCAL_CALIB_VALUE = 183
_XCAL_POLYNOM_COEFF = 263
_XCAL_LASER_POSITION = 311
_XCAL_CALIB_LABEL = 321

_XCAL_UNIT_CODE_BEST_EFFORT = 1


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
                f.write(f"{xi:.6f}\t{int(round(float(yi)))}\n")


def read_spe(filepath: str) -> SpeFile:
    """Read a Princeton Instruments SPE file into an SpeFile object."""
    if not os.path.exists(filepath):
        raise FileNotFoundError(f"SPE file not found: {filepath}")

    with open(filepath, "rb") as f:
        header = f.read(4100)
        if len(header) < 4100:
            raise ValueError(f"File {filepath} is smaller than 4100 bytes (invalid SPE file).")

        datatype = struct.unpack_from("<h", header, _OFFSET_DATATYPE)[0]
        xdim = struct.unpack_from("<H", header, _OFFSET_XDIM)[0]
        ydim = struct.unpack_from("<H", header, _OFFSET_YDIM)[0]
        num_frames = struct.unpack_from("<l", header, _OFFSET_NUM_FRAMES)[0]
        if num_frames <= 0:
            num_frames = 1

        exp_time = struct.unpack_from("<f", header, _OFFSET_EXP_SEC)[0]
        date_raw = header[_OFFSET_DATE:_OFFSET_DATE + 10].decode("ascii", errors="ignore").strip("\x00")

        center_wavelength = struct.unpack_from("<f", header, _OFFSET_SPEC_CENTER_WL_NM)[0]
        grating_grooves = struct.unpack_from("<f", header, _OFFSET_SPEC_GROOVES)[0]
        if _is_invalid(center_wavelength):
            center_wavelength = 0.0
        if _is_invalid(grating_grooves):
            grating_grooves = 0.0

        calib_valid = struct.unpack_from("<b", header, _OFFSET_XCALIB + _XCAL_VALID)[0]
        wavelengths = None
        laser_wavelength = 514.532
        if calib_valid:
            order = struct.unpack_from("<b", header, _OFFSET_XCALIB + _XCAL_POLYNOM_ORDER)[0]
            order = max(0, min(order, 5))
            coeffs_ascending = struct.unpack_from("<6d", header, _OFFSET_XCALIB + _XCAL_POLYNOM_COEFF)
            coeffs_descending = list(coeffs_ascending[:order + 1])[::-1]
            pixels = np.arange(1, xdim + 1)
            wavelengths = np.polyval(coeffs_descending, pixels)

            laser_pos = struct.unpack_from("<d", header, _OFFSET_XCALIB + _XCAL_LASER_POSITION)[0]
            if not _is_invalid(laser_pos) and laser_pos > 0:
                laser_wavelength = laser_pos

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
            laser_wavelength=laser_wavelength,
            center_wavelength=center_wavelength,
            grating_grooves=grating_grooves,
            wavelengths=wavelengths,
        )


def write_spe(
    filepath: str,
    data: np.ndarray,
    exposure_time: float = 1.0,
    wavelengths_nm: Optional[np.ndarray] = None,
    center_wavelength_nm: float = 0.0,
    grating_grooves_per_mm: float = 0.0,
    laser_wavelength_nm: float = 0.0,
    date_str: Optional[str] = None,
) -> None:
    """
    Write 1D or 2D numpy array into a WinSpec-compatible SPE 2.x file.
    """
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
    struct.pack_into("<h", header, _OFFSET_DATATYPE, 0)  # float32
    struct.pack_into("<H", header, _OFFSET_XDIM, xdim)
    struct.pack_into("<H", header, _OFFSET_YDIM, ydim)
    struct.pack_into("<l", header, _OFFSET_NUM_FRAMES, num_frames)
    struct.pack_into("<f", header, _OFFSET_EXP_SEC, float(exposure_time))
    struct.pack_into("<f", header, _OFFSET_FILE_HEADER_VER, 2.5)
    struct.pack_into("<f", header, _OFFSET_SPEC_CENTER_WL_NM, float(center_wavelength_nm))
    struct.pack_into("<f", header, _OFFSET_SPEC_GROOVES, float(grating_grooves_per_mm))

    date_text = (date_str or datetime.now().strftime("%d%b%Y")).encode("ascii", errors="ignore")[:10]
    header[_OFFSET_DATE:_OFFSET_DATE + len(date_text)] = date_text

    if wavelengths_nm is not None and len(wavelengths_nm) >= 2:
        _write_xcalibration(header, np.asarray(wavelengths_nm, dtype=np.float64), laser_wavelength_nm)

    with open(filepath, "wb") as f:
        f.write(header)
        f.write(arr.tobytes())


def _write_xcalibration(header: bytearray, wavelengths_nm: np.ndarray, laser_wavelength_nm: float) -> None:
    xcal = _OFFSET_XCALIB
    order = min(5, len(wavelengths_nm) - 1)
    pixels = np.arange(1, len(wavelengths_nm) + 1)
    coeffs_descending = np.polyfit(pixels, wavelengths_nm, order)
    coeffs_ascending = coeffs_descending[::-1]

    poly_coeff = [0.0] * 6
    poly_coeff[: order + 1] = coeffs_ascending.tolist()

    struct.pack_into("<d", header, xcal + _XCAL_OFFSET, 0.0)
    struct.pack_into("<d", header, xcal + _XCAL_FACTOR, 0.0)
    struct.pack_into("<b", header, xcal + _XCAL_CURRENT_UNIT, _XCAL_UNIT_CODE_BEST_EFFORT)
    _pack_string(header, xcal + _XCAL_STRING, "Wavelength", 40)
    struct.pack_into("<b", header, xcal + _XCAL_VALID, 1)
    struct.pack_into("<b", header, xcal + _XCAL_INPUT_UNIT, 0)
    struct.pack_into("<b", header, xcal + _XCAL_POLYNOM_UNIT, _XCAL_UNIT_CODE_BEST_EFFORT)
    struct.pack_into("<b", header, xcal + _XCAL_POLYNOM_ORDER, order)
    struct.pack_into("<b", header, xcal + _XCAL_CALIB_COUNT, 0)
    for i, coeff in enumerate(poly_coeff):
        struct.pack_into("<d", header, xcal + _XCAL_POLYNOM_COEFF + i * 8, coeff)
    struct.pack_into("<d", header, xcal + _XCAL_LASER_POSITION, float(laser_wavelength_nm))
    _pack_string(header, xcal + _XCAL_CALIB_LABEL, "Wavelength (nm)", 81)


def _pack_string(header: bytearray, offset: int, text: str, max_len: int) -> None:
    raw = text.encode("ascii", errors="ignore")[:max_len]
    header[offset:offset + len(raw)] = raw


def _is_invalid(val: float) -> bool:
    return math.isnan(val) or math.isinf(val)
