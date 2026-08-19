# Horiba HR460 & WinSpec Python Control Suite

A modern Python package and graphical interface for controlling the **Horiba Jobin Yvon HR460 Monochromator / Spectrometer** and **Princeton Instruments CCD Cameras** (via WinSpec32 COM automation or standalone SPE files).

This package is a modernized, modular Python implementation of the legacy Visual Basic 6 software (`WizSpec` / `SpServer` in `HR460-PICCD`).

---

## Key Features

- **Horiba HR460 Serial Driver**:
  - Full RS-232 communication protocol support (handshakes, motor stepping, status polling, slit control, dual grating turret selection).
  - Built-in simulation / mock driver for offline testing and development without hardware attached.
- **Princeton Instruments WinSpec32 & SPE Support**:
  - COM / ActiveX automation (`WinX32.ExpSetup` / `WinX32.DocFile`) for automated CCD acquisition and focus mode.
  - Native binary reader & writer for Princeton Instruments `.spe` files (SPE 2.x/3.x).
  - Standalone ASCII `.dat` file export.
- **Optical Calibration Engine**:
  - Forward & inverse dispersion geometry ($\lambda \leftrightarrow \text{pixel}$).
  - Unit conversions: Nanometers ($\text{nm}$), CCD Pixels, Relative Raman Shift ($\text{rel cm}^{-1}$), Absolute Wavenumber ($\text{cm}^{-1}$), Energy ($\text{meV}$ / $\text{rel meV}$).
  - Ruby $R_1$ fluorescence pressure scale ($P(T, \lambda)$ Mao-Bell calculation).
- **Signal Processing & Wide-Range Stitching**:
  - Cosmic ray spike rejection (threshold delta test and temporal 3-point median across accumulations).
  - Multi-window stepped scan planner and spectral stitcher / glueing engine.
- **Authentic VB6 Form GUI**:
  - Exact layout, toolbar, buttons, and menus matching `SpServer.frm` (`Picture1` canvas, `posHR460`, `txtSlit`, `cmbGrating`, `cmbXscale`, `cmbLaser`, `Mouse Pos`, `Cursor Pos`, `Pressure/Temp`).
  - Integrated sub-forms: Long Spectrum Glue (`frmGlue.frm`), Port Properties (`Frmprops.frm`), Ruby Pressure Calibration, and About Dialog (`frmInfo.frm`).
- **Modern Desktop GUI**:
  - Optional dark-theme interface (`--modern`) built with CustomTkinter.

---

## Directory Structure

```
horiba_hr460/
├── __init__.py           # Package exports
├── config.py             # Spectrometer configuration & legacy .cfg parser/writer
├── cli.py                # Command-line interface
├── core/
│   ├── __init__.py
│   ├── calibration.py    # Optical dispersion geometry, unit transforms, ruby pressure
│   ├── filters.py        # Cosmic ray spike suppression & median filters
│   ├── spe_file.py       # Standalone Princeton Instruments SPE binary reader & writer
│   └── stitcher.py       # Multi-window spectrum stitching / gluing engine
├── hardware/
│   ├── __init__.py
│   ├── hr460.py          # Horiba HR460 RS-232 serial driver + Mock simulator
│   └── winspec.py        # WinSpec32 COM automation client + Mock camera
├── gui/
│   ├── __init__.py
│   ├── vb_app.py         # Classic VB6 form replica (SpServer.frm / frmGlue / frmProps)
│   └── app.py            # Modern CustomTkinter interface
└── tests/                # Automated test suite (19 unit tests)
```

---

## Quick Start

### 1. Launching the GUI

- **Direct Launch (Simplest):**
  ```bash
  python main.py
  ```
  *(or double-click **`run_gui.bat`** on Windows)*

- **Simulation / Demo Mode (No hardware required):**
  ```bash
  python main.py --mock
  ```

- **Modern Dark-Theme Interface:**
  ```bash
  python main.py --modern --mock
  ```

### 2. Command-Line Interface (CLI)

```bash
# View configuration & calculated dispersion coverage
python -m horiba_hr460.cli info

# Acquire a spectrum (1s exposure, 3 accumulations)
python -m horiba_hr460.cli acquire --exposure 1.0 --accum 3 --output spectrum.dat

# Move monochromator to 700 nm
python -m horiba_hr460.cli move --wavelength 700.0 --port COM1

# Convert Princeton Instruments .spe file to ASCII .dat
python -m horiba_hr460.cli spe2dat data/sample.spe data/sample.dat
```

---

## Python API Usage

### Example 1: Optical Calibration & Coordinate Conversion

```python
from horiba_hr460 import SpectrometerConfig, OpticalCalibration, Units

# Load configuration from legacy Wsp-460.cfg
config = SpectrometerConfig.from_legacy_cfg("HR460-PICCD/Wsp-460.cfg")
cal = OpticalCalibration(config.active_grating, num_pixels=config.num_pixels)

# Calculate wavelength array at center = 700.0 nm
wavelengths_nm = cal.get_pixel_wavelengths(center_wavelength_nm=700.0)

# Convert to Raman shift (cm-1) using 514.532 nm excitation laser
raman_shift_cm1 = cal.convert_wavelengths_to_units(
    wavelengths_nm,
    unit=Units.REL_CM_1,
    laser_wavelength_nm=514.532
)
```

### Example 2: Controlling the Monochromator & Acquiring Data

```python
from horiba_hr460 import HoribaHR460, WinSpecController, remove_cosmic_rays_median

# Connect to HR460 and WinSpec
mono = HoribaHR460(port="COM1")
mono.connect()
mono.move_to_wavelength(700.0)

camera = WinSpecController()
camera.connect()

# Acquire 3 frames and remove cosmic rays
frames = [camera.acquire_frame(exposure_time_sec=1.0)[0] for _ in range(3)]
clean_spectrum = remove_cosmic_rays_median(frames)
```

### Example 3: Wide-Range Spectrum Stitching (Glue)

```python
from horiba_hr460 import SpectrumStitcher

stitcher = SpectrumStitcher(cal)

# Plan stepped windows from 600 nm to 800 nm with 50-pixel overlap
intervals = stitcher.plan_intervals(from_nm=600.0, to_nm=800.0, overlap_pixels=50)

# Stitch acquired windows into a single continuous dataset
x_stitched, y_stitched = stitcher.stitch_spectra(wavelength_windows, intensity_windows)
```

---

## Running Automated Tests

Run the full unit test suite:

```bash
python -m unittest discover -s horiba_hr460/tests -p "test_*.py" -v
```
