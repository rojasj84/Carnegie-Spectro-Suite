# Antigravity Workspace Guidelines for SpectroSuite

## Repository Structure & Scope
- **Active Codebase**: Always use [`spectro_suite/`](file:///home/javierrojas/Programming/Horiba-HR460/spectro_suite/) for all general coding, debugging, refactoring, tests, and documentation.
- **Hardware Modular Subpackages**:
  - Spectrometers: [`spectro_suite/hardware/spectrometers/`](file:///home/javierrojas/Programming/Horiba-HR460/spectro_suite/hardware/spectrometers/)
  - Detectors: [`spectro_suite/hardware/detectors/`](file:///home/javierrojas/Programming/Horiba-HR460/spectro_suite/hardware/detectors/)
- **Archived / Non-Active Directories**:
  - `HR460-PICCD/`: Legacy VB6 code and historical files. Do NOT search, inspect, or modify for general tasks.
  - `horiba_hr460/`: Deprecated import compatibility shim only. Do NOT use for active development.
