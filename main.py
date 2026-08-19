"""
Main Entry Point for Universal Spectrometer & Detector Control Suite.
=====================================================================
Running this file directly (or double-clicking it) launches the
Graphical User Interface (GUI) immediately.
"""

from __future__ import annotations
import sys
from horiba_hr460.cli import main


if __name__ == "__main__":
    # Default to GUI if no arguments are passed
    if len(sys.argv) == 1:
        sys.argv.append("gui")
    main()
