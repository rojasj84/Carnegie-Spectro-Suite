# Carnegie Spectro Suite

**Carnegie Spectro Suite** is a modern 64-bit Python spectroscopy and optical Raman software suite designed for high-pressure laboratory physics and spectroscopy experiments. It provides hardware-agnostic control over multi-vendor spectrometers and linear/2D optical detectors, real-time optical calibration, and automated wide-range spectrum stitching.

---

## Hardware Support

### 1. Spectrometers / Monochromators
* **Acton SpectraPro SP-2150** (RS-232 Serial / COM3): Rapid GOTO wavelength positioning, multi-grating turret indexing, motor diagnostics.
* **Horiba Jobin Yvon HR460** (RS-232 Serial / COM1): Dual turret positioning, entrance slit micrometer stepping, status polling.
* **Automatic COM Port Discovery**: Live scan and dynamic serial port reconnection.

### 2. Optical Detectors & Cameras
* **Princeton Instruments ST-133 / OMA-V InGaAs** (`st133_usb.py`):
  * Native 64-bit KMDF USB driver for OMA-V linear InGaAs photodiode arrays (Model 7514-0001 / 512 channels, 1024 channels).
  * Direct 64-bit kernel I/O, volatile SRAM microcode bootstrapping, EPLD hardware timing compilation, and RTD cryogenic sensor monitoring.
* **Princeton Instruments PI-MTE / PIXIS** (`pimte.py`): PICam 64-bit SDK driver.
* **FLIR / Teledyne Blackfly S CMOS** (`blackfly.py`): Spinnaker SDK driver.
* **WinSpec Automation Client** (`winspec.py`): ActiveX / COM automation.
* **Universal Simulated Detector** (`mock.py`): Full offline simulation for analysis.

---

## Key Features

* **Optical Calibration & Coordinate Transforms**:
  * Forward & inverse dispersion geometry ($\lambda \leftrightarrow \text{pixel}$).
  * Instant coordinate conversion: Nanometers ($\text{nm}$), CCD Pixels, Relative Raman Shift ($\text{rel cm}^{-1}$), Absolute Wavenumber ($\text{cm}^{-1}$), Energy ($\text{meV}$ / $\text{rel meV}$).
  * Ruby $R_1$ fluorescence hydrostatic pressure scale ($P(T, \lambda)$ Mao-Bell calculation).
* **Signal Processing & Wide-Range Scanning**:
  * Cosmic ray spike rejection (3-point median filter & threshold delta filtering).
  * Multi-window stepped scan planner and spectral stitcher / gluing engine.
  * Princeton Instruments `.spe` (SPE 2.5) binary reader & writer + 64-bit ASCII `.dat` exporter.
* **Dual Graphical User Interfaces**:
  * **Classic VB Workbench Layout**: Authentic laboratory instrument workbench with toolbars, jogging controls, and 10-slot reference spectrum overlay.
  * **Modern Dark-Mode GUI**: Built with CustomTkinter (`--modern`).
  * **2D Live Camera View**: Real-time 2D spatial / linear array imaging (`Ctrl+K`).

---

## Directory Structure

```
Carnegie-Spectro-Suite/
├── spectro_suite/            # Core 64-bit production package
│   ├── config.py             # SpectrometerConfig & GratingConfig data models
│   ├── cli.py                # Command-line interface & launcher
│   ├── core/                 # Calibration, filters, SPE I/O, stitching engine
│   ├── hardware/             # Spectrometer & detector hardware drivers
│   │   ├── spectrometers/    # Acton SP-2150 & Horiba HR460 drivers
│   │   └── detectors/        # ST-133 InGaAs, PI-MTE, Blackfly, WinSpec
│   ├── gui/                  # Application windows (Classic VB & Modern UI)
│   └── tests/                # 51 unit tests (100% passing)
├── firmware/                 # ST-133 / FX2 volatile SRAM microcode (PI133B.DAT, etc.)
├── disassembly_dlls/         # Original vendor PE DLLs (preserved for reference)
├── ghidra_scripts/           # Full Ghidra decompiled C sources & export scripts
├── Drivers/                  # Official 64-bit Windows USB driver packages (piusbwdf)
├── main.py                   # Primary application entry point
├── pyproject.toml            # Python package metadata
├── requirements.txt          # Dependencies (numpy, matplotlib, pyserial, customtkinter)
├── run_gui.bat               # Windows batch launcher
├── AI Instructions.txt       # Reverse engineering & system architecture guide
└── Future Add Ons.txt        # Feature roadmap & enhancement backlog
```

---

## Quick Start

### Installation

```bash
git clone https://github.com/rojasj84/Horiba-HR460.git
cd Horiba-HR460
pip install -r requirements.txt
```

### Launching the Application

* **Launch GUI**:
  ```bash
  python main.py
  ```
* **Launch in Modern Dark Theme**:
  ```bash
  python main.py --modern
  ```
* **Launch in Demo / Simulation Mode**:
  ```bash
  python main.py --demo
  ```

### Running Automated Unit Tests

```bash
python -m unittest discover -s spectro_suite/tests/
```
