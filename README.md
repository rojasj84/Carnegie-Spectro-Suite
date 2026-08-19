# Universal Spectrometer & Detector Python Control Suite

A modern Python package and graphical interface for multi-vendor **Spectrometers / Monochromators** (Acton SpectraPro, Horiba Jobin Yvon HR460, etc.) and **Optical Detectors / Cameras** (Simulated arrays, WinSpec COM automation, and extensible camera drivers).

---

## Key Features

- **Multi-Vendor Spectrometer Serial Drivers**:
  - **Acton SpectraPro**: Rapid GOTO wavelength slewing, multi-grating turret indexing, motor diagnostics, and status queries.
  - **Horiba Jobin Yvon HR460**: Full RS-232 communication protocol support (handshakes, motor stepping, status polling, slit control, dual grating turret selection).
  - Built-in simulation / mock drivers for offline testing and development without hardware attached.
- **Modular Optical Detector / Camera Architecture**:
  - Generic [`Camera`](file:///c:/Users/LabUserR129/Documents/Github/Horiba-HR460/horiba_hr460/hardware/base.py) interface and [`MockCamera`](file:///c:/Users/LabUserR129/Documents/Github/Horiba-HR460/horiba_hr460/hardware/camera.py) generator with synthetic spectral lines and Poisson shot noise.
  - Extensible backend support for physical detectors (e.g. WinSpec COM, Thorlabs, Andor, FLIR).
  - Native binary reader & writer for Princeton Instruments `.spe` files (SPE 2.x/3.x).
  - Standalone ASCII `.dat` file export.
- **Optical Calibration Engine**:
  - Forward & inverse dispersion geometry ($\lambda \leftrightarrow \text{pixel}$).
  - Unit conversions: Nanometers ($\text{nm}$), CCD Pixels, Relative Raman Shift ($\text{rel cm}^{-1}$), Absolute Wavenumber ($\text{cm}^{-1}$), Energy ($\text{meV}$ / $\text{rel meV}$).
  - Ruby $R_1$ fluorescence pressure scale ($P(T, \lambda)$ Mao-Bell calculation).
- **Signal Processing & Wide-Range Stitching**:
  - Cosmic ray spike rejection (threshold delta test and temporal 3-point median across accumulations).
  - Multi-window stepped scan planner and spectral stitcher / gluing engine.
- **Classic Visual Basic Form GUI**:
  - Authentic spectroscopy workbench layout, toolbars, buttons, and menus matching standard laboratory instruments.
  - Integrated sub-forms: Long Spectrum Glue, Port Properties, Ruby Pressure Calibration, and About Dialog.
- **Modern Desktop GUI**:
  - Optional dark-theme interface (`--modern`) built with CustomTkinter.

---

## Directory Structure

```
horiba_hr460/
├── __init__.py           # Package exports (Spectrometer, Camera, MockCamera, etc.)
├── config.py             # System configuration model & JSON/legacy .cfg loader
├── cli.py                # Command-line interface
├── core/
│   ├── __init__.py
│   ├── calibration.py    # Optical dispersion geometry, unit transforms, ruby pressure
│   ├── filters.py        # Cosmic ray spike suppression & median filters
│   ├── spe_file.py       # Standalone Princeton Instruments SPE binary reader & writer
│   └── stitcher.py       # Multi-window spectrum stitching / gluing engine
├── hardware/
│   ├── __init__.py
│   ├── base.py           # Protocol definitions: Spectrometer & Camera
│   ├── factory.py        # Hardware instantiation factory
│   ├── acton.py          # Acton SpectraPro serial driver & mock simulator
│   ├── hr460.py          # Horiba HR460 serial driver & mock simulator
│   ├── camera.py         # Universal MockCamera / simulated detector driver
│   └── winspec.py        # Optional WinSpec32 COM automation client
├── gui/
│   ├── __init__.py
│   ├── vb_app.py         # Classic VB-styled workbench GUI
│   └── app.py            # Modern CustomTkinter dark-theme interface
└── tests/                # Automated test suite (32 unit tests)
```

---

## Quick Start

### 1. Launching the GUI

- **Direct Launch (Simplest):**
  ```bash
  python main.py
  ```
  *(or double-click **`run_gui.bat`** on Windows)*

- **With Acton SP2150 Configuration:**
  ```bash
  python main.py gui --config config_acton_sp2150.json
  ```

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
python -m horiba_hr460.cli info --config config_acton_sp2150.json

# Acquire a spectrum (1s exposure, 3 accumulations)
python -m horiba_hr460.cli acquire --exposure 1.0 --accum 3 --output spectrum.dat

# Move Acton monochromator to 700 nm on COM3
python -m horiba_hr460.cli move --wavelength 700.0 --port COM3 --model ACTON
```

---

## Python API Usage

### Example 1: Optical Calibration & Coordinate Conversion

```python
from horiba_hr460 import SpectrometerConfig, OpticalCalibration, Units

# Load configuration from JSON
config = SpectrometerConfig.from_json("config_acton_sp2150.json")
cal = OpticalCalibration(config.active_grating, num_pixels=config.num_pixels)

# Calculate wavelength array at center = 700.0 nm
wavelengths_nm = cal.get_pixel_wavelengths(center_wavelength_nm=700.0)

# Convert to Raman shift (cm-1) using 1064.0 nm excitation laser
raman_shift_cm1 = cal.convert_wavelengths_to_units(
    wavelengths_nm,
    unit=Units.REL_CM_1,
    laser_wavelength_nm=1064.0
)
```

### Example 2: Controlling the Spectrometer & Acquiring Data

```python
from horiba_hr460 import create_spectrometer, create_camera, SpectrometerConfig, remove_cosmic_rays_median

config = SpectrometerConfig.from_json("config_acton_sp2150.json")

# Connect to spectrometer (Acton SP2150 on COM3)
mono = create_spectrometer(config)
mono.connect()
mono.move_to_wavelength(750.0)

# Connect to detector
camera = create_camera(config)
camera.connect()

# Acquire 3 frames and remove cosmic rays
frames = [camera.acquire_frame(exposure_time_sec=1.0)[0] for _ in range(3)]
clean_spectrum = remove_cosmic_rays_median(frames)
```

---

## Running Automated Tests

Run the full unit test suite:

```bash
python -m unittest discover -s horiba_hr460/tests -p "test_*.py" -v
```
