"""
Cross-Platform Font Utilities for Carnegie Spectro Suite.
=========================================================
Provides smooth, anti-aliased font selection across Linux, Windows, and macOS,
preventing jagged raster fallbacks on X11 / Wayland environments.
"""

from __future__ import annotations
import sys
from typing import Optional, Tuple
import tkinter as tk
import tkinter.font as tkfont


# Preferred font candidate lists per platform
_SANS_CANDIDATES_WIN = ["Segoe UI", "Tahoma", "Arial", "sans-serif"]
_SANS_CANDIDATES_LINUX = ["DejaVu Sans", "Liberation Sans", "Noto Sans", "Ubuntu", "FreeSans", "Arial", "sans-serif"]
_SANS_CANDIDATES_MAC = ["Helvetica Neue", "San Francisco", "Helvetica", "Arial", "sans-serif"]

_MONO_CANDIDATES_WIN = ["Consolas", "Courier New", "monospace"]
_MONO_CANDIDATES_LINUX = ["DejaVu Sans Mono", "Liberation Mono", "Noto Sans Mono", "Ubuntu Mono", "monospace"]
_MONO_CANDIDATES_MAC = ["Menlo", "Monaco", "Courier New", "monospace"]

_CACHED_SANS_FAMILY: Optional[str] = None
_CACHED_MONO_FAMILY: Optional[str] = None


def get_default_sans_family() -> str:
    """Detect and return the best available anti-aliased sans-serif font family."""
    global _CACHED_SANS_FAMILY
    if _CACHED_SANS_FAMILY is not None:
        return _CACHED_SANS_FAMILY

    if sys.platform.startswith("win"):
        candidates = _SANS_CANDIDATES_WIN
    elif sys.platform.startswith("darwin"):
        candidates = _SANS_CANDIDATES_MAC
    else:
        candidates = _SANS_CANDIDATES_LINUX

    try:
        if tk._default_root:
            available = set(tkfont.families())
            for name in candidates:
                if name in available:
                    _CACHED_SANS_FAMILY = name
                    return name
    except Exception:
        pass

    # Safe fallback
    _CACHED_SANS_FAMILY = candidates[0]
    return _CACHED_SANS_FAMILY


def get_default_mono_family() -> str:
    """Detect and return the best available monospace font family."""
    global _CACHED_MONO_FAMILY
    if _CACHED_MONO_FAMILY is not None:
        return _CACHED_MONO_FAMILY

    if sys.platform.startswith("win"):
        candidates = _MONO_CANDIDATES_WIN
    elif sys.platform.startswith("darwin"):
        candidates = _MONO_CANDIDATES_MAC
    else:
        candidates = _MONO_CANDIDATES_LINUX

    try:
        if tk._default_root:
            available = set(tkfont.families())
            for name in candidates:
                if name in available:
                    _CACHED_MONO_FAMILY = name
                    return name
    except Exception:
        pass

    _CACHED_MONO_FAMILY = candidates[0]
    return _CACHED_MONO_FAMILY


def get_ui_font(size: int = 9, weight: str = "normal", slant: str = "roman") -> Tuple:
    """
    Returns a standard UI font tuple (family, size, [weight, [slant]]).
    Example: get_ui_font(9, 'bold') -> ('DejaVu Sans', 9, 'bold')
    """
    family = get_default_sans_family()
    if slant != "roman":
        return (family, size, weight, slant)
    if weight != "normal":
        return (family, size, weight)
    return (family, size)


def get_heading_font(size: int = 12, weight: str = "bold") -> Tuple:
    """Returns a heading font tuple with bold weight by default."""
    family = get_default_sans_family()
    return (family, size, weight)


def get_mono_font(size: int = 9, weight: str = "normal") -> Tuple:
    """Returns a monospace font tuple."""
    family = get_default_mono_family()
    if weight != "normal":
        return (family, size, weight)
    return (family, size)


def setup_app_fonts(root: Optional[tk.Tk | tk.Toplevel] = None, base_size: int = 9) -> None:
    """
    Configures Tk's standard named fonts to use high-quality system fonts.
    This ensures ttk and Tk widgets automatically inherit crisp typography.
    """
    sans = get_default_sans_family()
    mono = get_default_mono_family()

    named_fonts = [
        ("TkDefaultFont", sans, base_size, "normal"),
        ("TkTextFont", sans, base_size, "normal"),
        ("TkHeadingFont", sans, base_size + 2, "bold"),
        ("TkCaptionFont", sans, base_size, "bold"),
        ("TkMenuFont", sans, base_size, "normal"),
        ("TkTooltipFont", sans, max(8, base_size - 1), "normal"),
        ("TkFixedFont", mono, base_size, "normal"),
    ]

    for name, family, size, weight in named_fonts:
        try:
            f = tkfont.nametofont(name)
            f.configure(family=family, size=size, weight=weight)
        except Exception:
            pass
