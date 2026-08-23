# Workspace Rules: Codebase Navigation & Scope

## Active Codebase
- All active development, features, refactoring, bug fixes, unit tests, and documentation are strictly located within [`spectro_suite/`](file:///home/javierrojas/Programming/Horiba-HR460/spectro_suite/).
- Hardware drivers are organized in:
  - `spectro_suite/hardware/spectrometers/` (Acton, Horiba, future monochromators)
  - `spectro_suite/hardware/detectors/` (PI-MTE, WinSpec, simulated detectors)

## Archived & Deprecated Folders (Do Not Search or Modify)
1. **`HR460-PICCD/`**:
   - Contains historical Visual Basic 6.0 forms, projects, binaries, and legacy reference data.
   - **Rule**: NEVER search, index, or use `HR460-PICCD/` for general development tasks or context unless the user explicitly requests inspection of the legacy VB codebase.
2. **`horiba_hr460/`**:
   - Contains only a backward-compatibility import shim (`horiba_hr460/__init__.py`).
   - **Rule**: Do not add new features or search this folder.
