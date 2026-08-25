"""
Main Entry Point for Carnegie Spectro Suite.
============================================
Running this file directly (or double-clicking it) launches the
Carnegie Spectro Suite Graphical User Interface (GUI) immediately.
"""

from __future__ import annotations
import sys
from spectro_suite.cli import main


if __name__ == "__main__":
    # Default to GUI if no arguments are passed
    if len(sys.argv) == 1:
        sys.argv.append("gui")
        #sys.argv.append("--modern")
    main()
