# SpectroSuite: Universal Hardware-Agnostic Spectrometry Suite

A modern Python package and graphical interface for multi-vendor **Spectrometers / Monochromators** (Acton SpectraPro, Horiba Jobin Yvon HR460, and future instruments) and **Optical Detectors / Cameras** (Princeton Instruments PI-MTE USB, WinSpec COM automation, and simulated multichannel CCD arrays).

---

## Key Features

- **Modular Hardware Architecture**:
  - `hardware/spectrometers/`: Separate vendor driver subpackages for **Acton** (SpectraPro line: rapid GOTO slewing, multi-grating turret indexing, diagnostics) and **Horiba** (Jobin Yvon HR460: dual turret, entrance slit stepping, status polling).
  - `hardware/detectors/`: Separate vendor detector subpackages for **PI-MTE** (Princeton Instruments USB detectors via PICam 64-bit SDK), **WinSpec** (Windows COM automation), and universal **MockDetector** (simulated multichannel array with synthetic emission peaks and noise).
  - Unified hardware factory `create_spectrometer(config)` and `create_camera(config)` / `create_detector(config)`.
- **Automatic Hardware Discovery & Profile Management**:
  - Live serial COM port scanning and automatic identification of connected spectrometers.
  - Startup profile dialog with persistence for default laboratory setups.
  - Instant fallback to simulation / demo mode when operating offline or remotely.
- **Optical Calibration Engine**:
  - Forward & inverse dispersion geometry ($\lambda \leftrightarrow \text{pixel}$).
  - Full coordinate conversion: Nanometers ($\text{nm}$), CCD Pixels, Relative Raman Shift ($\text{rel cm}^{-1}$), Absolute Wavenumber ($\text{cm}^{-1}$), Energy ($\text{meV}$ / $\text{rel meV}$).
  - Ruby $R_1$ fluorescence pressure scale ($P(T, \lambda)$ Mao-Bell calculation).
- **Signal Processing & Wide-Range Scanning**:
  - Cosmic ray spike rejection (threshold delta test and temporal 3-point median across accumulations).
  - Multi-window stepped scan planner and spectral stitcher / gluing engine.
  - Standalone Princeton Instruments `.spe` (SPE 2.x/3.x) binary reader & writer + ASCII `.dat` exporter.
- **Dual Graphical User Interfaces**:
  - **Classic Visual Basic Form GUI**: Authentic spectroscopy workbench layout, toolbars, buttons, and dialogs.
  - **Modern Desktop GUI**: Dark-theme interface (`--modern`) built with CustomTkinter.
- **Full Backward Compatibility**:
  - Existing scripts importing from `horiba_hr460` continue to run transparently through the compatibility shim.

---

## Directory Structure

```
spectro_suite/
├── __init__.py               # Package exports & public API
├── config.py                 # SpectrometerConfig & GratingConfig data models
├── cli.py                    # Command-line interface & launcher
├── core/
│   ├── __init__.py
│   ├── calibration.py        # Optical dispersion geometry & coordinate transforms
│   ├── filters.py            # Cosmic ray spike rejection & median filtering
│   ├── profiles.py           # Hardware discovery, COM port scanner & settings persistence
│   ├── spe_file.py           # Princeton Instruments SPE binary reader & writer
│   └── stitcher.py           # Multi-window wide-range spectrum stitching engine
├── hardware/
│   ├── __init__.py           # Hardware subsystem exports
│   ├── base.py               # Spectrometer & Camera/Detector Protocol definitions
│   ├── factory.py            # Unified hardware instantiation factory
│   ├── spectrometers/        # Monochromator drivers by vendor
│   │   ├── __init__.py
│   │   ├── acton.py          # Acton SpectraPro RS-232 serial driver & simulator
│   │   └── horiba.py         # Horiba Jobin Yvon HR460 RS-232 serial driver & simulator
│   └── detectors/            # Detector and camera drivers by vendor
│       ├── __init__.py
│       ├── mock.py           # Universal simulated multichannel array detector
│       ├── pimte.py          # Princeton Instruments PI-MTE / PIXIS PICam SDK driver
│       └── winspec.py        # WinSpec32 COM automation client
├── gui/
│   ├── __init__.py
│   ├── device_selector.py    # Startup instrument & COM selector dialog
│   ├── vb_app.py             # Classic workbench GUI
│   └── app.py                # Modern dark-theme GUI
└── tests/                    # Unit test suite (36 automated tests)
```

---

## Installation

Activate your Python virtual environment and install the package dependencies:

```bash
pip install -r requirements.txt
pip install -e .
```

---

## Quick Start

### 1. Launch the Workbench GUI
```bash
# Launch interactive graphical interface
python main.py

# Or via CLI commands
spectro-suite gui

# Launch in modern dark theme
spectro-suite gui --modern

# Force simulation / demo mode
spectro-suite gui --mock
```

### 2. Command-Line Operations

```bash
# View configuration and dispersion coverage
spectro-suite info

# Convert Princeton Instruments binary SPE to 2-column ASCII
spectro-suite spe2dat input.spe output.dat

# Acquire a spectrum
spectro-suite acquire --exposure 2.0 --accum 3 --output spectrum.dat

# Move spectrometer
spectro-suite move --model ACTON --port COM3 --wavelength 750.0
spectro-suite move --model HR460 --port COM1 --slit 25.0
```

### 3. Python API Usage

```python
from spectro_suite import SpectrometerConfig, create_spectrometer, create_camera

# Load configuration or create dynamically
config = SpectrometerConfig(instrument_model="ACTON", com_port="COM3")

# Instantiate hardware drivers (or pass force_mock=True for simulation)
spectrometer = create_spectrometer(config)
detector = create_camera(config)

spectrometer.connect()
spectrometer.move_to_wavelength(700.0)

detector.connect()
data, num_pixels = detector.acquire_frame(exposure_time_sec=1.0)
print(f"Acquired {num_pixels} pixels at {spectrometer.current_wavelength_nm} nm")
```

---

## Running Automated Tests

```bash
python -m unittest discover -s spectro_suite/tests -p "test_*.py" -v
```
