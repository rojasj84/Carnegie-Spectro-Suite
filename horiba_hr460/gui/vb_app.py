"""
Authentic Visual Basic 6 Form-styled GUI for Horiba HR460 / WinSpec32.
Faithfully recreates the layout, controls, toolbars, menus, and dialogs of SpServer.frm / frmGlue / frmProps.
"""

from __future__ import annotations
import os
import sys
import time
import math
import threading
from typing import Optional, List, Dict, Any, Tuple
import numpy as np

import tkinter as tk
from tkinter import ttk, messagebox, filedialog

import matplotlib
matplotlib.use("TkAgg")
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk

from ..config import SpectrometerConfig, GratingConfig
from ..core.calibration import OpticalCalibration, Units, ruby_pressure
from ..core.filters import remove_cosmic_rays_threshold, remove_cosmic_rays_median
from ..core.stitcher import SpectrumStitcher, StitchInterval
from ..core.spe_file import read_spe, write_spe, SpeFile
from ..hardware.base import MonochromatorStatus
from ..hardware.factory import create_spectrometer, create_camera


class VBFormApp(tk.Tk):
    """
    Main application form replicating the classic VB6 HR460/WinSpec32 interface (SpServer.frm).
    """

    def __init__(self, config_path: Optional[str] = None, force_mock: bool = False):
        super().__init__()

        self.title("HR460/WinSpec32")
        self.geometry("1100x780")
        self.minsize(980, 680)

        # Style configuration (Classic Windows 3D / Win32 styling)
        self.style = ttk.Style(self)
        try:
            self.style.theme_use("winnative" if "winnative" in self.style.theme_names() else "default")
        except Exception:
            pass

        # Load Configuration
        self.config_path = config_path or self._find_default_config()
        if self.config_path and os.path.exists(self.config_path):
            if self.config_path.endswith(".json"):
                self.sp_config = SpectrometerConfig.from_json(self.config_path)
            else:
                self.sp_config = SpectrometerConfig.from_legacy_cfg(self.config_path)
        else:
            self.sp_config = SpectrometerConfig()

        self.calibration = OpticalCalibration(self.sp_config.active_grating, self.sp_config.num_pixels)
        self.stitcher = SpectrumStitcher(self.calibration)
        self.force_mock = force_mock

        # Initialize Hardware Drivers
        self.mono = create_spectrometer(self.sp_config, force_mock=self.force_mock)
        self.camera = create_camera(self.sp_config, force_mock=self.force_mock)

        # Data & State Variables
        self.current_raw_wavelengths = self.calibration.get_pixel_wavelengths(
            self.sp_config.active_grating.spectrometer_pos_nm, self.sp_config.num_pixels
        )
        self.current_spectrum = np.zeros(self.sp_config.num_pixels, dtype=np.float32)
        self.loaded_spectra: Dict[int, Tuple[str, np.ndarray, np.ndarray]] = {} # index -> (name, x, y)
        self.current_unit = Units.NM
        self.cosmic_filter_mode = "Median" # "Threshold", "Median", "Off"
        self.cosmic_threshold = 100.0
        self.is_acquiring = False
        self.focus_running = False
        self.stop_requested = False
        self.ruby_temperature = 300.0
        self.show_neon_reference = False
        self.big_cursor = False
        self.cursor_pixel = 512
        self.cursor_x = 700.0
        self.cursor_y = 0.0

        # Build UI layout matching SpServer.frm
        self._build_menu()
        self._build_toolbar()
        self._build_action_bar()
        self._build_body()
        self._build_statusbar()

        # Connect hardware in background
        self._connect_hardware_async()

    def _find_default_config(self) -> Optional[str]:
        candidates = ["Wsp-460.cfg", "DEFAULT.CFG", "wsp-460.cfg"]
        for c in candidates:
            if os.path.exists(c):
                return c
        return None

    # =========================================================================
    # 1. MENU BAR (Replicating VB Menu Hierarchy)
    # =========================================================================
    def _build_menu(self):
        menubar = tk.Menu(self)

        # --- File Menu ---
        file_menu = tk.Menu(menubar, tearoff=0)
        file_menu.add_command(label="Save Spectrum...", accelerator="Ctrl+S", command=self._on_save_spectrum)
        file_menu.add_command(label="Load Spectrum...", accelerator="Ctrl+O", command=self._on_load_spectrum)
        file_menu.add_separator()
        
        self.recent_files_menu = tk.Menu(file_menu, tearoff=0)
        file_menu.add_cascade(label="Overlaid Spectra (Slots 1..10)", menu=self.recent_files_menu)
        self._update_recent_files_menu()

        file_menu.add_separator()
        file_menu.add_command(label="Save Config As...", command=self._on_save_config_as)
        file_menu.add_command(label="Load Config...", command=self._on_load_config)
        file_menu.add_separator()
        file_menu.add_command(label="Print Spectrum", command=self._on_print_spectrum)
        file_menu.add_separator()
        file_menu.add_command(label="Exit", command=self._on_exit)
        menubar.add_cascade(label="File", menu=file_menu)

        # --- View Menu ---
        view_menu = tk.Menu(menubar, tearoff=0)
        view_menu.add_command(label="Autoscale View (AutoXY)", command=self._on_autoscale)
        view_menu.add_checkbutton(label="Big Cursor", command=self._toggle_big_cursor)
        view_menu.add_separator()
        view_menu.add_command(label="Clear Overlaid Spectra", command=self._clear_loaded_spectra)
        menubar.add_cascade(label="View", menu=view_menu)

        # --- WinSpec Menu ---
        winspec_menu = tk.Menu(menubar, tearoff=0)
        winspec_menu.add_command(label="Focus (Continuous)", command=self._on_toggle_focus)
        winspec_menu.add_command(label="Get Spectrum (Go 1)", command=self._on_acquire_single)
        winspec_menu.add_command(label="Get N Spectra (Go N)", command=self._on_acquire_multi)
        winspec_menu.add_command(label="Stop Accumulation", command=self._on_stop)
        winspec_menu.add_separator()
        winspec_menu.add_command(label="Set Exposure Time...", command=self._prompt_exposure_time)
        winspec_menu.add_command(label="Set Accumulations...", command=self._prompt_accumulations)
        winspec_menu.add_separator()
        
        filter_menu = tk.Menu(winspec_menu, tearoff=0)
        self.var_filter_mode = tk.StringVar(value="Median")
        filter_menu.add_radiobutton(label="Median Filter (Cosmic Ray Rejection)", variable=self.var_filter_mode, value="Median", command=self._update_filter_mode)
        filter_menu.add_radiobutton(label="Threshold Filter", variable=self.var_filter_mode, value="Threshold", command=self._update_filter_mode)
        filter_menu.add_radiobutton(label="Filter Off", variable=self.var_filter_mode, value="Off", command=self._update_filter_mode)
        winspec_menu.add_cascade(label="Cosmic Ray Filters", menu=filter_menu)

        self.var_sim_mode = tk.BooleanVar(value=self.force_mock)
        winspec_menu.add_checkbutton(label="Simulation Mode (Demo)", variable=self.var_sim_mode, command=self._toggle_simulation_mode)
        menubar.add_cascade(label="WinSpec", menu=winspec_menu)

        # --- Spectrometer (Call) Menu ---
        call_menu = tk.Menu(menubar, tearoff=0)
        call_menu.add_command(label=f"Model: {self.sp_config.instrument_model}", state="disabled")
        self.mnu_spectrometer_model_index = 0
        call_menu.add_separator()
        call_menu.add_command(label="Initialize Spectrometer (Power-on Init)...", command=self._on_init_hardware)
        call_menu.add_separator()
        call_menu.add_command(label="Move Wavelength...", command=self._prompt_move_wavelength)
        call_menu.add_command(label="Set Entrance Slit...", command=self._prompt_set_slit)
        call_menu.add_command(label="Select Grating Turret...", command=self._prompt_select_grating)
        call_menu.add_separator()
        call_menu.add_command(label="Read Current Position", command=self._on_read_position)
        call_menu.add_command(label="Read Entrance Slit", command=self._on_read_slit)
        self.call_menu = call_menu
        menubar.add_cascade(label="Spectrometer", menu=call_menu)

        # --- Tools Menu ---
        tools_menu = tk.Menu(menubar, tearoff=0)
        tools_menu.add_command(label="Long Spectrum (Glue)...", command=self._open_glue_dialog)
        tools_menu.add_separator()
        self.var_neon_ref = tk.BooleanVar(value=False)
        tools_menu.add_checkbutton(label="Overlay Neon Reference Lines", variable=self.var_neon_ref, command=self._toggle_neon_reference)
        tools_menu.add_command(label="Ruby Pressure Calibration Tool...", command=self._open_ruby_dialog)
        menubar.add_cascade(label="Tools", menu=tools_menu)

        # --- Configuration Menu ---
        config_menu = tk.Menu(menubar, tearoff=0)
        config_menu.add_command(label="Set Excitation Laser Wavelength...", command=self._prompt_laser_wavelength)
        config_menu.add_command(label="Communication Port Properties...", command=self._open_properties_dialog)
        menubar.add_cascade(label="Configuration", menu=config_menu)

        # --- Help Menu ---
        help_menu = tk.Menu(menubar, tearoff=0)
        help_menu.add_command(label="Basic Help", command=self._open_help_dialog)
        help_menu.add_command(label="About WizSpec...", command=self._open_about_dialog)
        menubar.add_cascade(label="Help", menu=help_menu)

        self.configure(menu=menubar)

    def _update_recent_files_menu(self):
        self.recent_files_menu.delete(0, "end")
        for i in range(1, 11):
            if i in self.loaded_spectra:
                fname, _, _ = self.loaded_spectra[i]
                self.recent_files_menu.add_command(
                    label=f"Slot {i}: {os.path.basename(fname)} (Unload)",
                    command=lambda idx=i: self._unload_spectrum_slot(idx)
                )
            else:
                self.recent_files_menu.add_command(
                    label=f"Slot {i}: [Empty] (Click to load...)",
                    command=lambda idx=i: self._load_spectrum_slot(idx)
                )

    # =========================================================================
    # 2. TOOLBAR & QUICK BUTTONS
    # =========================================================================
    def _build_toolbar(self):
        self.toolbar_frame = ttk.Frame(self, relief="raised", borderwidth=1)
        self.toolbar_frame.pack(side="top", fill="x")

        # Toolbar Buttons matching VB ComctlLib.Toolbar
        ttk.Button(self.toolbar_frame, text="📁 Open", width=8, command=self._on_load_spectrum).pack(side="left", padx=2, pady=2)
        ttk.Button(self.toolbar_frame, text="💾 Save", width=8, command=self._on_save_spectrum).pack(side="left", padx=2, pady=2)
        ttk.Separator(self.toolbar_frame, orient="vertical").pack(side="left", fill="y", padx=4, pady=2)
        
        ttk.Button(self.toolbar_frame, text="🔍 Focus", width=8, command=self._on_toggle_focus).pack(side="left", padx=2, pady=2)
        ttk.Button(self.toolbar_frame, text="⏹ Stop", width=8, command=self._on_stop).pack(side="left", padx=2, pady=2)
        ttk.Button(self.toolbar_frame, text="▶ Go 1", width=8, command=self._on_acquire_single).pack(side="left", padx=2, pady=2)
        ttk.Button(self.toolbar_frame, text="⏩ Go N", width=8, command=self._on_acquire_multi).pack(side="left", padx=2, pady=2)
        ttk.Separator(self.toolbar_frame, orient="vertical").pack(side="left", fill="y", padx=4, pady=2)

        ttk.Button(self.toolbar_frame, text="📐 AutoXY", width=8, command=self._on_autoscale).pack(side="left", padx=2, pady=2)
        ttk.Button(self.toolbar_frame, text="🧩 Glue...", width=8, command=self._open_glue_dialog).pack(side="left", padx=2, pady=2)
        ttk.Button(self.toolbar_frame, text="⚙ Props...", width=8, command=self._open_properties_dialog).pack(side="left", padx=2, pady=2)

    def _build_action_bar(self):
        self.action_frame = ttk.Frame(self, padding=(6, 4))
        self.action_frame.pack(side="top", fill="x")

        # Large action buttons (matching btnFocus, btnAutoXY, btnGo, btnGoN, btnStop)
        self.btn_focus_main = tk.Button(self.action_frame, text="Focus", width=8, font=("Tahoma", 9, "bold"),
                                        bg="#E0E0E0", relief="raised", command=self._on_toggle_focus)
        self.btn_focus_main.pack(side="left", padx=3)

        self.btn_autoxy_main = tk.Button(self.action_frame, text="AutoXY", width=8, font=("Tahoma", 9),
                                         bg="#E0E0E0", relief="raised", command=self._on_autoscale)
        self.btn_autoxy_main.pack(side="left", padx=3)

        self.btn_go_main = tk.Button(self.action_frame, text="Go 1", width=8, font=("Tahoma", 9, "bold"),
                                     bg="#D0E8D0", relief="raised", command=self._on_acquire_single)
        self.btn_go_main.pack(side="left", padx=3)

        self.btn_gon_main = tk.Button(self.action_frame, text="Go N", width=8, font=("Tahoma", 9, "bold"),
                                      bg="#D0E8D0", relief="raised", command=self._on_acquire_multi)
        self.btn_gon_main.pack(side="left", padx=3)

        self.btn_stop_main = tk.Button(self.action_frame, text="STOP", width=8, font=("Tahoma", 9, "bold"),
                                       bg="#FFD0D0", fg="#AA0000", relief="raised", command=self._on_stop)
        self.btn_stop_main.pack(side="left", padx=3)

        # Hardware connection icon / status badge
        self.lbl_conn_indicator = tk.Label(self.action_frame, text="● HR460", font=("Tahoma", 9, "bold"),
                                           fg="#CC8800", relief="groove", padx=6, pady=2)
        self.lbl_conn_indicator.pack(side="right", padx=5)

    # =========================================================================
    # 3. MAIN BODY (Picture1 Canvas on Left, VB Control Panel on Right)
    # =========================================================================
    def _build_body(self):
        body_frame = ttk.Frame(self)
        body_frame.pack(side="top", fill="both", expand=True, padx=4, pady=2)

        # Left side: Matplotlib Chart inside border (replicating Picture1)
        chart_frame = ttk.Frame(body_frame, relief="sunken", borderwidth=2)
        chart_frame.pack(side="left", fill="both", expand=True, padx=(2, 4), pady=2)

        self.fig = Figure(figsize=(7, 5), dpi=100, facecolor="#D4D0C8")
        self.ax = self.fig.add_subplot(111)
        self._style_vb_plot()

        self.canvas = FigureCanvasTkAgg(self.fig, master=chart_frame)
        self.canvas.draw()
        self.canvas.get_tk_widget().pack(side="top", fill="both", expand=True)

        # Interactive event hooks
        self.fig.canvas.mpl_connect("motion_notify_event", self._on_plot_hover)
        self.fig.canvas.mpl_connect("button_press_event", self._on_plot_click)

        # Right side: Control column (txtTime, posHR460, txtSlit, cmbGrating, cmbXscale, cmbLaser, readouts)
        right_panel = ttk.Frame(body_frame, width=200, padding=4)
        right_panel.pack(side="right", fill="y", padx=2, pady=2)
        right_panel.pack_propagate(False)

        # --- Acc. time ---
        ttk.Label(right_panel, text="Acc. time (s)", font=("Tahoma", 8, "bold")).pack(anchor="w", pady=(0, 1))
        self.txt_time = ttk.Entry(right_panel, width=16)
        self.txt_time.insert(0, f"{self.sp_config.active_grating.exposure_time_sec:.2f}")
        self.txt_time.pack(fill="x", pady=(0, 6))

        # --- Pos. nm (HR460 Center Wavelength) ---
        ttk.Label(right_panel, text="Pos. nm", font=("Tahoma", 8, "bold")).pack(anchor="w", pady=(0, 1))
        pos_row = ttk.Frame(right_panel)
        pos_row.pack(fill="x", pady=(0, 2))
        self.pos_hr460 = ttk.Entry(pos_row, width=10)
        self.pos_hr460.insert(0, f"{self.sp_config.active_grating.spectrometer_pos_nm:.2f}")
        self.pos_hr460.pack(side="left", fill="x", expand=True)
        ttk.Button(pos_row, text="Go", width=4, command=self._on_move_wavelength).pack(side="right", padx=(2, 0))

        # Jog buttons row
        jog_frame = ttk.Frame(right_panel)
        jog_frame.pack(fill="x", pady=(0, 6))
        ttk.Button(jog_frame, text="-5", width=3, command=lambda: self._jog_wavelength(-5.0)).pack(side="left", expand=True, fill="x")
        ttk.Button(jog_frame, text="-1", width=3, command=lambda: self._jog_wavelength(-1.0)).pack(side="left", expand=True, fill="x")
        ttk.Button(jog_frame, text="+1", width=3, command=lambda: self._jog_wavelength(1.0)).pack(side="left", expand=True, fill="x")
        ttk.Button(jog_frame, text="+5", width=3, command=lambda: self._jog_wavelength(5.0)).pack(side="left", expand=True, fill="x")

        # --- Slit, mkm ---
        ttk.Label(right_panel, text="Slit, µm", font=("Tahoma", 8, "bold")).pack(anchor="w", pady=(0, 1))
        slit_row = ttk.Frame(right_panel)
        slit_row.pack(fill="x", pady=(0, 6))
        self.txt_slit = ttk.Entry(slit_row, width=10)
        self.txt_slit.insert(0, f"{self.sp_config.active_grating.slit_size:.0f}")
        self.txt_slit.pack(side="left", fill="x", expand=True)
        ttk.Button(slit_row, text="Set", width=4, command=self._on_set_slit).pack(side="right", padx=(2, 0))

        # --- Grating ---
        ttk.Label(right_panel, text="Grating (g/mm)", font=("Tahoma", 8, "bold")).pack(anchor="w", pady=(0, 1))
        grating_vals = [
            f"{g.grating_grooves_per_mm:.0f}" for g in self.sp_config.gratings
        ]
        self.cmb_grating = ttk.Combobox(right_panel, values=grating_vals, state="readonly")
        self.cmb_grating.set(f"{self.sp_config.active_grating.grating_grooves_per_mm:.0f}")
        self.cmb_grating.pack(fill="x", pady=(0, 6))
        self.cmb_grating.bind("<<ComboboxSelected>>", self._on_select_grating_combo)

        # --- Scaling (Units) ---
        ttk.Label(right_panel, text="Scaling", font=("Tahoma", 8, "bold")).pack(anchor="w", pady=(0, 1))
        unit_vals = [u.value for u in Units]
        self.cmb_xscale = ttk.Combobox(right_panel, values=unit_vals, state="readonly")
        self.cmb_xscale.set(self.current_unit.value)
        self.cmb_xscale.pack(fill="x", pady=(0, 6))
        self.cmb_xscale.bind("<<ComboboxSelected>>", self._on_change_units_combo)

        # --- Laser, nm ---
        ttk.Label(right_panel, text="Laser, nm", font=("Tahoma", 8, "bold")).pack(anchor="w", pady=(0, 1))
        laser_row = ttk.Frame(right_panel)
        laser_row.pack(fill="x", pady=(0, 6))
        self.cmb_laser = ttk.Entry(laser_row, width=10)
        self.cmb_laser.insert(0, f"{self.sp_config.active_grating.laser_wavelength:.3f}")
        self.cmb_laser.pack(side="left", fill="x", expand=True)
        ttk.Button(laser_row, text="Upd", width=4, command=self._on_update_laser).pack(side="right", padx=(2, 0))

        # --- Mouse Pos. Box (lblMouse, lblMsPix, lblMsX, lblMsY) ---
        lbl_mouse_box = ttk.LabelFrame(right_panel, text="Mouse Pos.", padding=3)
        lbl_mouse_box.pack(fill="x", pady=(0, 4))
        self.lbl_ms_pix = ttk.Label(lbl_mouse_box, text="Pxl: --", font=("Tahoma", 8))
        self.lbl_ms_pix.pack(anchor="w")
        self.lbl_ms_x = ttk.Label(lbl_mouse_box, text="X: --", font=("Tahoma", 8))
        self.lbl_ms_x.pack(anchor="w")
        self.lbl_ms_y = ttk.Label(lbl_mouse_box, text="Y: --", font=("Tahoma", 8))
        self.lbl_ms_y.pack(anchor="w")

        # --- Cursor Pos. Box (lblCursor, lblCurPix, lblCurX, lblCurY) ---
        lbl_cursor_box = ttk.LabelFrame(right_panel, text="Cursor Pos.", padding=3)
        lbl_cursor_box.pack(fill="x", pady=(0, 4))
        self.lbl_cur_pix = ttk.Label(lbl_cursor_box, text="Pxl: --", font=("Tahoma", 8))
        self.lbl_cur_pix.pack(anchor="w")
        self.lbl_cur_x = ttk.Label(lbl_cursor_box, text="X: --", font=("Tahoma", 8))
        self.lbl_cur_x.pack(anchor="w")
        self.lbl_cur_y = ttk.Label(lbl_cursor_box, text="Y: --", font=("Tahoma", 8))
        self.lbl_cur_y.pack(anchor="w")

        # --- Pressure & Temperature Box (lblPress, lblTemp, txtTemp) ---
        lbl_press_box = ttk.LabelFrame(right_panel, text="Pressure (Ruby)", padding=3)
        lbl_press_box.pack(fill="x", pady=(0, 4))
        self.lbl_press = ttk.Label(lbl_press_box, text="P: -- GPa", font=("Tahoma", 8, "bold"), foreground="#000088")
        self.lbl_press.pack(anchor="w")

        temp_row = ttk.Frame(lbl_press_box)
        temp_row.pack(fill="x", pady=(2, 0))
        ttk.Label(temp_row, text="T, K:", font=("Tahoma", 8)).pack(side="left")
        self.txt_temp = ttk.Entry(temp_row, width=8)
        self.txt_temp.insert(0, f"{self.ruby_temperature:.1f}")
        self.txt_temp.pack(side="right")
        self.txt_temp.bind("<Return>", self._on_update_temp)

    def _style_vb_plot(self):
        self.ax.set_facecolor("#000000") # Classic black canvas of Picture1
        self.fig.patch.set_facecolor("#D4D0C8") # Classic Windows gray surrounding
        self.ax.tick_params(colors="#000000", labelsize=8)
        for spine in self.ax.spines.values():
            spine.set_color("#000000")
            spine.set_linewidth(1.0)
        self.ax.grid(True, linestyle=":", alpha=0.5, color="#888888")
        
        # Primary line: Cyan (#00FFFF / &HFFFF00&)
        self.line_active, = self.ax.plot([], [], color="#00FFFF", linewidth=1.2, label="Spectrum")
        # Reference line: Yellow/Gold
        self.line_ref, = self.ax.plot([], [], color="#FFCC00", linewidth=1.0, linestyle="--", alpha=0.8, label="Neon / Ref")
        # Crosshair cursor lines
        self.cursor_vline = self.ax.axvline(x=0, color="#FF0000", linewidth=0.8, visible=False)
        self.cursor_hline = self.ax.axhline(y=0, color="#FF0000", linewidth=0.8, visible=False)

    # =========================================================================
    # 4. STATUS BAR (Replicating ComctlLib.StatusBar sbrStatus)
    # =========================================================================
    def _build_statusbar(self):
        self.statusbar = ttk.Frame(self, relief="sunken", borderwidth=1)
        self.statusbar.pack(side="bottom", fill="x")

        self.sbr_model = ttk.Label(self.statusbar, text=f"Model: {self.sp_config.instrument_model}", relief="groove", padding=(4, 2), font=("Tahoma", 8, "bold"))
        self.sbr_model.pack(side="left", padx=1)

        self.sbr_port = ttk.Label(self.statusbar, text=f"Port: {self.sp_config.com_port} {self.sp_config.baudrate},N,8,1", relief="groove", padding=(4, 2), font=("Tahoma", 8))
        self.sbr_port.pack(side="left", padx=1)

        self.sbr_status = ttk.Label(self.statusbar, text="Status: Ready", relief="groove", padding=(6, 2), font=("Tahoma", 8))
        self.sbr_status.pack(side="left", fill="x", expand=True, padx=1)

        self.sbr_time = ttk.Label(self.statusbar, text="Time Left: 0.0s", relief="groove", padding=(4, 2), font=("Tahoma", 8))
        self.sbr_time.pack(side="left", padx=1)

        self.sbr_grating = ttk.Label(self.statusbar, text=f"Grating: {self.sp_config.active_grating.grating_grooves_per_mm:.0f} g/mm", relief="groove", padding=(4, 2), font=("Tahoma", 8))
        self.sbr_grating.pack(side="left", padx=1)

        self.sbr_pos = ttk.Label(self.statusbar, text=f"Position: {self.sp_config.active_grating.spectrometer_pos_nm:.2f} nm", relief="groove", padding=(4, 2), font=("Tahoma", 8))
        self.sbr_pos.pack(side="left", padx=1)

    # =========================================================================
    # 5. HARDWARE CONNECTION & BACKGROUND TASKS
    # =========================================================================
    def _connect_hardware_async(self):
        def _task():
            mono_ok = self.mono.connect()
            cam_ok = self.camera.connect()
            if not cam_ok and not self.force_mock:
                self.camera = create_camera(self.sp_config, force_mock=True)
                self.camera.connect()

            self.after(0, self._on_connect_done)

        threading.Thread(target=_task, daemon=True).start()

    def _on_connect_done(self):
        if self.mono.status == MonochromatorStatus.DEMO_MODE or self.camera.is_mock:
            self.lbl_conn_indicator.config(text="● DEMO MODE", fg="#CC8800")
            if "DEMO MODE" not in self.title():
                self.title(self.title() + "      DEMO MODE")
        else:
            self.lbl_conn_indicator.config(text="● CONNECTED", fg="#008800")

        self.sbr_status.config(text=f"Status: {self.mono.status.value}")
        self.sbr_pos.config(text=f"Position: {self.mono.current_wavelength_nm:.2f} nm")
        self.pos_hr460.delete(0, "end")
        self.pos_hr460.insert(0, f"{self.mono.current_wavelength_nm:.2f}")
        self._refresh_plot()

    # =========================================================================
    # 6. PLOT REDRAW & RECALIBRATION (Replicating Picture1_Redraw & Recalibrate)
    # =========================================================================
    def _refresh_plot(self):
        self.current_raw_wavelengths = self.calibration.get_pixel_wavelengths(
            self.mono.current_wavelength_nm, self.sp_config.num_pixels
        )
        x_data = self.calibration.convert_wavelengths_to_units(
            self.current_raw_wavelengths, self.current_unit
        )

        self.line_active.set_data(x_data, self.current_spectrum)

        # Neon reference overlay
        if self.show_neon_reference:
            neon_spec = self._generate_neon_reference(self.current_raw_wavelengths)
            self.line_ref.set_data(x_data, neon_spec)
            self.line_ref.set_visible(True)
        elif len(self.loaded_spectra) > 0:
            # Overlaid loaded spectra
            first_loaded = list(self.loaded_spectra.values())[0]
            self.line_ref.set_data(first_loaded[1], first_loaded[2])
            self.line_ref.set_visible(True)
        else:
            self.line_ref.set_visible(False)

        self.ax.relim()
        self.ax.autoscale_view()
        self.ax.set_xlabel(f"Scale: {self.current_unit.value}", fontname="Tahoma", fontsize=9)
        self.ax.set_ylabel("Intensity (Counts)", fontname="Tahoma", fontsize=9)
        self.canvas.draw_idle()

        # Update cursor readouts
        if 1 <= self.cursor_pixel <= self.sp_config.num_pixels:
            idx = self.cursor_pixel - 1
            if idx < len(x_data) and idx < len(self.current_spectrum):
                self.cursor_x = x_data[idx]
                self.cursor_y = self.current_spectrum[idx]
                self.lbl_cur_pix.config(text=f"Pxl: {self.cursor_pixel}")
                self.lbl_cur_x.config(text=f"X: {self.cursor_x:.3f}")
                self.lbl_cur_y.config(text=f"Y: {self.cursor_y:.1f}")

                # Peak pressure calculation if near ruby R1
                wl_nm = self.current_raw_wavelengths[idx]
                if 680.0 <= wl_nm <= 730.0:
                    p = ruby_pressure(wl_nm, self.ruby_temperature)
                    self.lbl_press.config(text=f"P: {p:.2f} GPa")

    def _generate_neon_reference(self, wls: np.ndarray) -> np.ndarray:
        neon_lines = [(692.95, 3000), (702.70, 300), (703.24, 6000), (717.38, 900)]
        spec = np.zeros_like(wls)
        for center, intensity in neon_lines:
            spec += intensity * np.exp(-((wls - center) / 0.035) ** 2)
        return spec

    # =========================================================================
    # 7. EVENT HANDLERS & MOTOR CONTROLS
    # =========================================================================
    def _on_move_wavelength(self):
        try:
            target_nm = float(self.pos_hr460.get())
        except ValueError:
            messagebox.showerror("Invalid Input", "Please enter a valid numeric wavelength in nm.")
            return

        def _task():
            self.sbr_status.config(text=f"Status: Moving to {target_nm:.2f} nm...")
            
            def _prog(pos):
                self.after(0, lambda: self.sbr_pos.config(text=f"Position: {pos:.2f} nm"))

            self.mono.move_to_wavelength(target_nm, progress_callback=_prog)
            self.after(0, lambda: self._on_move_done(target_nm))

        threading.Thread(target=_task, daemon=True).start()

    def _on_move_done(self, target_nm: float):
        self.sbr_status.config(text="Status: Ready")
        self.sbr_pos.config(text=f"Position: {self.mono.current_wavelength_nm:.2f} nm")
        self.pos_hr460.delete(0, "end")
        self.pos_hr460.insert(0, f"{self.mono.current_wavelength_nm:.2f}")
        self._refresh_plot()

    def _jog_wavelength(self, delta_nm: float):
        curr = self.mono.current_wavelength_nm
        target = curr + delta_nm
        self.pos_hr460.delete(0, "end")
        self.pos_hr460.insert(0, f"{target:.2f}")
        self._on_move_wavelength()

    def _on_set_slit(self):
        try:
            slit = float(self.txt_slit.get())
        except ValueError:
            messagebox.showerror("Invalid Input", "Please enter a valid slit width in microns.")
            return

        def _task():
            self.sbr_status.config(text=f"Status: Moving Slit to {slit:.0f} µm...")
            self.mono.move_slit(slit)
            self.after(0, lambda: self.sbr_status.config(text="Status: Ready"))

        threading.Thread(target=_task, daemon=True).start()

    def _on_select_grating_combo(self, event=None):
        val = self.cmb_grating.get()
        idx = 0
        for i, g in enumerate(self.sp_config.gratings):
            if f"{g.grating_grooves_per_mm:.0f}" == val:
                idx = i
                break

        def _task():
            self.sbr_status.config(text="Status: Changing Grating...")
            self.mono.select_grating(idx)
            self.calibration = OpticalCalibration(self.sp_config.active_grating, self.sp_config.num_pixels)
            self.after(0, lambda: self.sbr_grating.config(text=f"Grating: {self.sp_config.active_grating.grating_grooves_per_mm:.0f} g/mm"))
            self.after(0, lambda: self.sbr_status.config(text="Status: Ready"))
            self.after(0, self._refresh_plot)

        threading.Thread(target=_task, daemon=True).start()

    def _on_change_units_combo(self, event=None):
        self.current_unit = Units(self.cmb_xscale.get())
        self._refresh_plot()

    def _on_update_laser(self):
        try:
            laser = float(self.cmb_laser.get())
            self.sp_config.active_grating.laser_wavelength = laser
            self._refresh_plot()
        except ValueError:
            messagebox.showerror("Invalid Input", "Please enter a valid laser wavelength in nm.")

    def _on_update_temp(self, event=None):
        try:
            self.ruby_temperature = float(self.txt_temp.get())
            self._refresh_plot()
        except ValueError:
            pass

    # =========================================================================
    # 8. ACQUISITION METHODS (Go 1, Go N, Focus, Stop)
    # =========================================================================
    def _on_acquire_single(self):
        if self.is_acquiring:
            return
        try:
            exp_time = float(self.txt_time.get())
        except ValueError:
            exp_time = 1.0

        self.is_acquiring = True
        self.stop_requested = False

        def _task():
            try:
                self.sbr_status.config(text="Status: Acquiring 1 Spectrum...")
                wls = self.calibration.get_pixel_wavelengths(self.mono.current_wavelength_nm, self.sp_config.num_pixels)
                
                def _prog(tl):
                    self.after(0, lambda: self.sbr_time.config(text=f"Time Left: {tl:.1f}s"))

                data, _ = self.camera.acquire_frame(exp_time, wavelengths_nm=wls, progress_callback=_prog, stop_requested=lambda: self.stop_requested)

                self.current_spectrum = data
                self.after(0, self._refresh_plot)
            except Exception as ex:
                self.after(0, lambda: self.sbr_status.config(text=f"Acquisition Error: {ex}"))
            finally:
                self.is_acquiring = False
                self.after(0, lambda: self.sbr_status.config(text="Status: Ready"))
                self.after(0, lambda: self.sbr_time.config(text="Time Left: 0.0s"))

        threading.Thread(target=_task, daemon=True).start()

    def _on_acquire_multi(self):
        if self.is_acquiring:
            return
        try:
            exp_time = float(self.txt_time.get())
            n_acc = int(self.sp_config.active_grating.accumulations)
        except ValueError:
            exp_time, n_acc = 1.0, 1

        self.is_acquiring = True
        self.stop_requested = False

        def _task():
            frames: List[np.ndarray] = []
            try:
                wls = self.calibration.get_pixel_wavelengths(self.mono.current_wavelength_nm, self.sp_config.num_pixels)
                for a in range(1, n_acc + 1):
                    if self.stop_requested:
                        break
                    self.sbr_status.config(text=f"Status: Accumulation {a} of {n_acc}...")
                    
                    def _prog(tl):
                        self.after(0, lambda: self.sbr_time.config(text=f"Time Left: {tl:.1f}s ({a}/{n_acc})"))

                    data, _ = self.camera.acquire_frame(exp_time, wavelengths_nm=wls, progress_callback=_prog, stop_requested=lambda: self.stop_requested)

                    frames.append(data)

                if frames:
                    if self.var_filter_mode.get() == "Median" and len(frames) >= 3:
                        self.current_spectrum = remove_cosmic_rays_median(frames)
                    elif self.var_filter_mode.get() == "Threshold" and len(frames) > 1:
                        avg = frames[0].copy()
                        for i in range(1, len(frames)):
                            clean = remove_cosmic_rays_threshold(frames[i], avg, frames[i-1], self.cosmic_threshold)
                            avg = (avg * i + clean) / (i + 1)
                        self.current_spectrum = avg
                    else:
                        self.current_spectrum = np.mean(frames, axis=0)

                    self.after(0, self._refresh_plot)
            except Exception as ex:
                self.after(0, lambda: self.sbr_status.config(text=f"Multi-Acq Error: {ex}"))
            finally:
                self.is_acquiring = False
                self.after(0, lambda: self.sbr_status.config(text="Status: Ready"))
                self.after(0, lambda: self.sbr_time.config(text="Time Left: 0.0s"))

        threading.Thread(target=_task, daemon=True).start()

    def _on_toggle_focus(self):
        if self.focus_running:
            self.focus_running = False
            self.btn_focus_main.config(text="Focus", bg="#E0E0E0")
            return

        self.focus_running = True
        self.btn_focus_main.config(text="FOCUSING", bg="#FFF0A0")

        try:
            exp_time = float(self.txt_time.get())
        except ValueError:
            exp_time = 0.2

        def _focus_loop():
            while self.focus_running:
                try:
                    wls = self.calibration.get_pixel_wavelengths(self.mono.current_wavelength_nm, self.sp_config.num_pixels)
                    data, _ = self.camera.acquire_frame(exp_time, wavelengths_nm=wls, stop_requested=lambda: not self.focus_running)
                    self.current_spectrum = data
                    self.after(0, self._refresh_plot)
                except Exception:
                    break
                time.sleep(0.01)

            self.focus_running = False
            self.after(0, lambda: self.btn_focus_main.config(text="Focus", bg="#E0E0E0"))

        threading.Thread(target=_focus_loop, daemon=True).start()

    def _on_stop(self):
        self.stop_requested = True
        self.focus_running = False
        self.sbr_status.config(text="Status: Stopped by user")

    def _on_autoscale(self):
        self.ax.relim()
        self.ax.autoscale_view()
        self.canvas.draw_idle()

    # =========================================================================
    # 9. MOUSE & CURSOR INTERACTION
    # =========================================================================
    def _on_plot_hover(self, event):
        if event.inaxes == self.ax and event.xdata is not None and event.ydata is not None:
            # Find closest pixel index
            x_data = self.calibration.convert_wavelengths_to_units(
                self.current_raw_wavelengths, self.current_unit
            )
            idx = int(np.argmin(np.abs(x_data - event.xdata)))
            pix = idx + 1

            self.lbl_ms_pix.config(text=f"Pxl: {pix}")
            self.lbl_ms_x.config(text=f"X: {event.xdata:.3f}")
            self.lbl_ms_y.config(text=f"Y: {event.ydata:.1f}")

    def _on_plot_click(self, event):
        if event.inaxes == self.ax and event.xdata is not None:
            x_data = self.calibration.convert_wavelengths_to_units(
                self.current_raw_wavelengths, self.current_unit
            )
            idx = int(np.argmin(np.abs(x_data - event.xdata)))
            self.cursor_pixel = idx + 1
            self.cursor_x = x_data[idx]
            self.cursor_y = self.current_spectrum[idx] if idx < len(self.current_spectrum) else 0.0

            # Draw cursor lines if enabled
            if self.big_cursor:
                self.cursor_vline.set_xdata([self.cursor_x, self.cursor_x])
                self.cursor_hline.set_ydata([self.cursor_y, self.cursor_y])
                self.cursor_vline.set_visible(True)
                self.cursor_hline.set_visible(True)

            self.lbl_cur_pix.config(text=f"Pxl: {self.cursor_pixel}")
            self.lbl_cur_x.config(text=f"X: {self.cursor_x:.3f}")
            self.lbl_cur_y.config(text=f"Y: {self.cursor_y:.1f}")

            # Check Ruby Pressure calculation
            wl_nm = self.current_raw_wavelengths[idx]
            if 680.0 <= wl_nm <= 730.0:
                p = ruby_pressure(wl_nm, self.ruby_temperature)
                self.lbl_press.config(text=f"P: {p:.2f} GPa")

            self.canvas.draw_idle()

    def _toggle_big_cursor(self):
        self.big_cursor = not self.big_cursor
        self.cursor_vline.set_visible(self.big_cursor)
        self.cursor_hline.set_visible(self.big_cursor)
        self.canvas.draw_idle()

    def _toggle_neon_reference(self):
        self.show_neon_reference = self.var_neon_ref.get()
        self._refresh_plot()

    def _update_filter_mode(self):
        self.cosmic_filter_mode = self.var_filter_mode.get()

    def _toggle_simulation_mode(self):
        self.force_mock = self.var_sim_mode.get()
        self.mono = create_spectrometer(self.sp_config, force_mock=self.force_mock)
        self.camera = create_camera(self.sp_config, force_mock=self.force_mock)
        self._connect_hardware_async()

    # =========================================================================
    # 10. FILE I/O & SPECTRA OVERLAYS
    # =========================================================================
    def _on_save_spectrum(self):
        path = filedialog.asksaveasfilename(
            defaultextension=".dat",
            filetypes=[("Data Files (*.dat)", "*.dat"), ("Princeton Instruments SPE (*.spe)", "*.spe"), ("All Files (*.*)", "*.*")]
        )
        if not path:
            return

        x = self.calibration.convert_wavelengths_to_units(self.current_raw_wavelengths, self.current_unit)
        if path.endswith(".spe"):
            g = self.sp_config.active_grating
            write_spe(
                path, self.current_spectrum, float(self.txt_time.get()),
                wavelengths_nm=self.current_raw_wavelengths,
                center_wavelength_nm=self.mono.current_wavelength_nm,
                grating_grooves_per_mm=g.grating_grooves_per_mm,
                laser_wavelength_nm=g.laser_wavelength,
            )
        else:
            header = f"Laser: {self.sp_config.active_grating.laser_wavelength:.3f} nm, Center: {self.mono.current_wavelength_nm:.3f} nm\n{self.current_unit.value}\tIntensity"
            np.savetxt(path, np.column_stack((x, self.current_spectrum)), fmt="%.6f\t%.4f", header=header)
        self.sbr_status.config(text=f"Status: Saved to {os.path.basename(path)}")

    def _on_load_spectrum(self):
        self._load_spectrum_slot(1)

    def _load_spectrum_slot(self, slot_idx: int):
        path = filedialog.askopenfilename(
            filetypes=[("Spectrum Files (*.dat;*.spe)", "*.dat;*.spe"), ("All Files (*.*)", "*.*")]
        )
        if not path:
            return

        if path.endswith(".spe"):
            spe = read_spe(path)
            y = np.ravel(spe.data)
            x = np.linspace(spe.laser_wavelength - 10, spe.laser_wavelength + 10, len(y))
        else:
            data = np.loadtxt(path)
            x, y = data[:, 0], data[:, 1]

        self.loaded_spectra[slot_idx] = (os.path.basename(path), x, y)
        self._update_recent_files_menu()
        self._refresh_plot()

    def _unload_spectrum_slot(self, slot_idx: int):
        if slot_idx in self.loaded_spectra:
            del self.loaded_spectra[slot_idx]
            self._update_recent_files_menu()
            self._refresh_plot()

    def _clear_loaded_spectra(self):
        self.loaded_spectra.clear()
        self._update_recent_files_menu()
        self._refresh_plot()

    def _on_save_config_as(self):
        path = filedialog.asksaveasfilename(defaultextension=".cfg", filetypes=[("Config Files (*.cfg;*.json)", "*.cfg;*.json")])
        if not path:
            return
        if path.endswith(".json"):
            self.sp_config.save_json(path)
        else:
            self.sp_config.save_legacy_cfg(path)
        messagebox.showinfo("Config Saved", f"Configuration saved to {os.path.basename(path)}")

    def _on_load_config(self):
        path = filedialog.askopenfilename(filetypes=[("Config Files (*.cfg;*.json)", "*.cfg;*.json")])
        if not path:
            return
        if path.endswith(".json"):
            self.sp_config = SpectrometerConfig.from_json(path)
        else:
            self.sp_config = SpectrometerConfig.from_legacy_cfg(path)
        self.calibration = OpticalCalibration(self.sp_config.active_grating, self.sp_config.num_pixels)
        self.cmb_grating.config(values=[f"{g.grating_grooves_per_mm:.0f}" for g in self.sp_config.gratings])
        self.cmb_grating.set(f"{self.sp_config.active_grating.grating_grooves_per_mm:.0f}")
        self.pos_hr460.delete(0, "end")
        self.pos_hr460.insert(0, f"{self.sp_config.active_grating.spectrometer_pos_nm:.2f}")
        self._refresh_plot()

    def _on_print_spectrum(self):
        messagebox.showinfo("Print", "Spectrum chart ready for printing / export.")

    def _on_exit(self):
        self.focus_running = False
        self.mono.disconnect()
        self.destroy()

    # =========================================================================
    # 11. SUB-DIALOGS (Properties, Glue, Ruby, About)
    # =========================================================================
    def _open_properties_dialog(self):
        PropertiesDialog(self)

    def _open_glue_dialog(self):
        GlueDialog(self)

    def _open_ruby_dialog(self):
        RubyDialog(self)

    def _open_help_dialog(self):
        messagebox.showinfo(
            "WizSpec Help",
            "Horiba Jobin Yvon HR460 & WinSpec32 Control Suite\n\n"
            "- Use 'Go 1' for single spectrum acquisition\n"
            "- Use 'Go N' for multi-accumulation with cosmic ray removal\n"
            "- Use 'Focus' for real-time alignment and continuous acquisition\n"
            "- Click on the spectrum canvas to inspect peaks and calculate Ruby pressure\n"
            "- Use 'Tools -> Long Spectrum (Glue)' to acquire wide-range stitched scans."
        )

    def _open_about_dialog(self):
        g = self.sp_config.active_grating
        messagebox.showinfo(
            "About WizSpec / WinSpec32",
            "WizSpec/WinSpec32 Spectrometer Interface\n"
            "Modern Python Re-implementation of WizSpec (c) Viktor Struzhkin\n\n"
            f"Spectrometer: {self.sp_config.instrument_model} (Focal length {g.focal_length_mm:.0f} mm)\n"
            "Detector: Princeton Instruments CCD (WinSpec32 / SPE)\n"
            "Interface: RS-232 Monochromator Control & ActiveX/COM Detector Automation"
        )

    # Prompt dialog helpers
    def _prompt_exposure_time(self):
        val = tk.simpledialog.askfloat("Exposure Time", "Enter exposure time in seconds:", initialvalue=float(self.txt_time.get()))
        if val is not None:
            self.txt_time.delete(0, "end")
            self.txt_time.insert(0, f"{val:.2f}")

    def _prompt_accumulations(self):
        val = tk.simpledialog.askinteger("Accumulations", "Enter number of accumulations:", initialvalue=self.sp_config.active_grating.accumulations)
        if val is not None:
            self.sp_config.active_grating.accumulations = val

    def _prompt_move_wavelength(self):
        val = tk.simpledialog.askfloat("Move Wavelength", "Enter target center wavelength in nm:", initialvalue=self.mono.current_wavelength_nm)
        if val is not None:
            self.pos_hr460.delete(0, "end")
            self.pos_hr460.insert(0, f"{val:.2f}")
            self._on_move_wavelength()

    def _prompt_set_slit(self):
        val = tk.simpledialog.askfloat("Entrance Slit", "Enter slit width in microns:", initialvalue=float(self.txt_slit.get()))
        if val is not None:
            self.txt_slit.delete(0, "end")
            self.txt_slit.insert(0, f"{val:.0f}")
            self._on_set_slit()

    def _prompt_select_grating(self):
        val = tk.simpledialog.askinteger("Grating Turret", "Select Grating (1 or 2):", initialvalue=self.sp_config.active_grating_index + 1)
        if val in (1, 2):
            self.cmb_grating.set(f"{self.sp_config.gratings[val-1].grating_grooves_per_mm:.0f}")
            self._on_select_grating_combo()

    def _prompt_laser_wavelength(self):
        val = tk.simpledialog.askfloat("Laser Wavelength", "Enter excitation laser wavelength in nm:", initialvalue=self.sp_config.active_grating.laser_wavelength)
        if val is not None:
            self.cmb_laser.delete(0, "end")
            self.cmb_laser.insert(0, f"{val:.3f}")
            self._on_update_laser()

    def _on_init_hardware(self):
        res = messagebox.askyesno("Spectrometer Initialization", "Execute hardware motor zero initialization?")
        if res:
            threading.Thread(target=lambda: self.mono.hard_initialize(), daemon=True).start()

    def _on_read_position(self):
        pos = self.mono.read_position()
        self.pos_hr460.delete(0, "end")
        self.pos_hr460.insert(0, f"{pos:.2f}")
        self.sbr_pos.config(text=f"Position: {pos:.2f} nm")

    def _on_read_slit(self):
        slit = self.mono.read_slit()
        self.txt_slit.delete(0, "end")
        self.txt_slit.insert(0, f"{slit:.0f}")


# =============================================================================
# PROPERTIES DIALOG (Replicating Frmprops.frm)
# =============================================================================
class PropertiesDialog(tk.Toplevel):
    def __init__(self, parent: VBFormApp):
        super().__init__(parent)
        self.parent = parent
        self.title("Properties")
        self.geometry("420x360")
        self.resizable(False, False)
        self.transient(parent)
        self.grab_set()

        notebook = ttk.Notebook(self)
        notebook.pack(fill="both", expand=True, padx=10, pady=10)

        # Tab 1: Port Settings
        tab_port = ttk.Frame(notebook, padding=10)
        notebook.add(tab_port, text="Port Settings")

        # Instrument Model
        r0 = ttk.Frame(tab_port)
        r0.pack(fill="x", pady=4)
        ttk.Label(r0, text="Model:", width=14, font=("Tahoma", 8)).pack(side="left")
        self.cbo_model = ttk.Combobox(r0, values=["HR460", "ACTON"], state="readonly", width=16)
        self.cbo_model.set(self.parent.sp_config.instrument_model)
        self.cbo_model.pack(side="left")

        # Port
        r1 = ttk.Frame(tab_port)
        r1.pack(fill="x", pady=4)
        ttk.Label(r1, text="Port:", width=14, font=("Tahoma", 8)).pack(side="left")
        self.cbo_port = ttk.Combobox(r1, values=[f"COM{i}" for i in range(1, 17)], state="readonly", width=16)
        self.cbo_port.set(self.parent.sp_config.com_port)
        self.cbo_port.pack(side="left")

        # Baud Rate
        r2 = ttk.Frame(tab_port)
        r2.pack(fill="x", pady=4)
        ttk.Label(r2, text="Baud Rate:", width=14, font=("Tahoma", 8)).pack(side="left")
        self.cbo_speed = ttk.Combobox(r2, values=["1200", "2400", "4800", "9600", "19200", "38400", "57600", "115200"], state="readonly", width=16)
        self.cbo_speed.set(str(self.parent.sp_config.baudrate))
        self.cbo_speed.pack(side="left")

        # Data Bits
        r3 = ttk.Frame(tab_port)
        r3.pack(fill="x", pady=4)
        ttk.Label(r3, text="Data Bits:", width=14, font=("Tahoma", 8)).pack(side="left")
        self.cbo_bits = ttk.Combobox(r3, values=["5", "6", "7", "8"], state="readonly", width=16)
        self.cbo_bits.set("8")
        self.cbo_bits.pack(side="left")

        # Parity
        r4 = ttk.Frame(tab_port)
        r4.pack(fill="x", pady=4)
        ttk.Label(r4, text="Parity:", width=14, font=("Tahoma", 8)).pack(side="left")
        self.cbo_parity = ttk.Combobox(r4, values=["None", "Even", "Odd", "Mark", "Space"], state="readonly", width=16)
        self.cbo_parity.set("None")
        self.cbo_parity.pack(side="left")

        # Stop Bits
        r5 = ttk.Frame(tab_port)
        r5.pack(fill="x", pady=4)
        ttk.Label(r5, text="Stop Bits:", width=14, font=("Tahoma", 8)).pack(side="left")
        self.cbo_stop = ttk.Combobox(r5, values=["1", "1.5", "2"], state="readonly", width=16)
        self.cbo_stop.set("1")
        self.cbo_stop.pack(side="left")

        # Tab 2: Optical Parameters
        tab_opt = ttk.Frame(notebook, padding=10)
        notebook.add(tab_opt, text="Optical Setup")

        g = self.parent.sp_config.active_grating
        self.entries_opt = {}
        for param, label_text, val in [
            ("focal_length_mm", "Focal Length (mm):", g.focal_length_mm),
            ("inclusion_angle_rad", "Inclusion Angle (rad):", g.inclusion_angle_rad),
            ("central_pixel", "Central Pixel:", g.central_pixel),
            ("oma_element_size_mm", "OMA Element Size (mm):", g.oma_element_size_mm),
            ("steps_per_nm_at_1200", "Steps/nm (1200 g/mm):", g.steps_per_nm_at_1200),
        ]:
            rf = ttk.Frame(tab_opt)
            rf.pack(fill="x", pady=3)
            ttk.Label(rf, text=label_text, width=22, font=("Tahoma", 8)).pack(side="left")
            e = ttk.Entry(rf, width=14)
            e.insert(0, str(val))
            e.pack(side="left")
            self.entries_opt[param] = e

        # Buttons OK / Cancel
        btn_bar = ttk.Frame(self)
        btn_bar.pack(side="bottom", fill="x", padx=10, pady=8)
        ttk.Button(btn_bar, text="OK", width=10, command=self._on_save).pack(side="right", padx=5)
        ttk.Button(btn_bar, text="Cancel", width=10, command=self.destroy).pack(side="right")

    def _on_save(self):
        new_model = self.cbo_model.get()
        model_changed = new_model.upper() != self.parent.sp_config.instrument_model.upper()

        self.parent.sp_config.instrument_model = new_model
        self.parent.sp_config.com_port = self.cbo_port.get()
        self.parent.sp_config.baudrate = int(self.cbo_speed.get())
        g = self.parent.sp_config.active_grating
        try:
            g.focal_length_mm = float(self.entries_opt["focal_length_mm"].get())
            g.inclusion_angle_rad = float(self.entries_opt["inclusion_angle_rad"].get())
            g.central_pixel = float(self.entries_opt["central_pixel"].get())
            g.oma_element_size_mm = float(self.entries_opt["oma_element_size_mm"].get())
            g.steps_per_nm_at_1200 = float(self.entries_opt["steps_per_nm_at_1200"].get())
        except ValueError:
            pass

        self.parent.calibration = OpticalCalibration(g, self.parent.sp_config.num_pixels)
        self.parent.sbr_port.config(text=f"Port: {self.parent.sp_config.com_port} {self.parent.sp_config.baudrate},N,8,1")

        if model_changed:
            try:
                self.parent.mono.disconnect()
            except Exception:
                pass
            self.parent.mono = create_spectrometer(self.parent.sp_config, force_mock=self.parent.force_mock)
            self.parent.sbr_model.config(text=f"Model: {self.parent.sp_config.instrument_model}")
            self.parent.call_menu.entryconfig(
                self.parent.mnu_spectrometer_model_index, label=f"Model: {self.parent.sp_config.instrument_model}"
            )
            self.parent._connect_hardware_async()

        self.parent._refresh_plot()
        self.destroy()


# =============================================================================
# GLUE DIALOG (Replicating frmGlue.frm)
# =============================================================================
class GlueDialog(tk.Toplevel):
    def __init__(self, parent: VBFormApp):
        super().__init__(parent)
        self.parent = parent
        self.title("Long Spectrum (Glue)")
        self.geometry("440x320")
        self.resizable(False, False)
        self.transient(parent)

        top_f = ttk.LabelFrame(self, text="Spectral Scanning Limits", padding=10)
        top_f.pack(fill="x", padx=10, pady=8)

        # From
        r1 = ttk.Frame(top_f)
        r1.pack(fill="x", pady=4)
        ttk.Label(r1, text="From, nm:", width=14, font=("Tahoma", 8, "bold")).pack(side="left")
        self.txt_from = ttk.Entry(r1, width=12)
        self.txt_from.insert(0, "650.0")
        self.txt_from.pack(side="left")

        # To
        r2 = ttk.Frame(top_f)
        r2.pack(fill="x", pady=4)
        ttk.Label(r2, text="To, nm:", width=14, font=("Tahoma", 8, "bold")).pack(side="left")
        self.txt_to = ttk.Entry(r2, width=12)
        self.txt_to.insert(0, "750.0")
        self.txt_to.pack(side="left")

        # Overlap
        r3 = ttk.Frame(top_f)
        r3.pack(fill="x", pady=4)
        ttk.Label(r3, text="Overlap, pxl:", width=14, font=("Tahoma", 8)).pack(side="left")
        self.txt_overlap = ttk.Entry(r3, width=12)
        self.txt_overlap.insert(0, "50")
        self.txt_overlap.pack(side="left")

        # File Name
        r4 = ttk.Frame(top_f)
        r4.pack(fill="x", pady=4)
        ttk.Label(r4, text="File Name:", width=14, font=("Tahoma", 8)).pack(side="left")
        self.txt_fname = ttk.Entry(r4, width=18)
        self.txt_fname.insert(0, "spectrum_stitched.dat")
        self.txt_fname.pack(side="left", fill="x", expand=True)

        self.progress = ttk.Progressbar(self, mode="determinate")
        self.progress.pack(fill="x", padx=10, pady=6)

        self.lbl_status = ttk.Label(self, text="Ready to start multi-window scanning", font=("Tahoma", 8))
        self.lbl_status.pack(pady=2)

        btn_bar = ttk.Frame(self)
        btn_bar.pack(side="bottom", fill="x", padx=10, pady=10)
        self.btn_ok = ttk.Button(btn_bar, text="Start Glue", width=12, command=self._start_glue)
        self.btn_ok.pack(side="right", padx=5)
        self.btn_cancel = ttk.Button(btn_bar, text="Cancel", width=10, command=self.destroy)
        self.btn_cancel.pack(side="right")

    def _start_glue(self):
        try:
            from_wl = float(self.txt_from.get())
            to_wl = float(self.txt_to.get())
            ov_px = int(self.txt_overlap.get())
            fname = self.txt_fname.get()
        except ValueError:
            messagebox.showerror("Error", "Invalid numeric parameters.")
            return

        intervals = self.parent.stitcher.plan_intervals(from_wl, to_wl, ov_px, self.parent.sp_config.num_pixels)
        if not intervals:
            messagebox.showerror("Error", "No intervals calculated.")
            return

        self.btn_ok.config(state="disabled")
        self.progress["maximum"] = len(intervals)

        def _task():
            w_wins, i_wins = [], []
            exp_t = float(self.parent.txt_time.get())

            for idx, item in enumerate(intervals):
                self.lbl_status.config(text=f"Window {idx+1}/{len(intervals)}: Center {item.center_wavelength_nm:.2f} nm")
                self.parent.mono.move_to_wavelength(item.center_wavelength_nm)
                
                wls = self.parent.calibration.get_pixel_wavelengths(item.center_wavelength_nm, self.parent.sp_config.num_pixels)
                data, _ = self.parent.camera.acquire_frame(exp_t, wavelengths_nm=wls)

                w_wins.append(wls)
                i_wins.append(data)
                self.progress["value"] = idx + 1

            x_st, y_st = self.parent.stitcher.stitch_spectra(w_wins, i_wins)
            np.savetxt(fname, np.column_stack((x_st, y_st)), fmt="%.6f\t%.4f", header="Wavelength_nm\tIntensity")

            self.parent.current_raw_wavelengths = x_st
            self.parent.current_spectrum = y_st
            self.after(0, self.parent._refresh_plot)
            self.after(0, lambda: messagebox.showinfo("Glue Complete", f"Stitched spectrum saved to {fname}"))
            self.after(0, self.destroy)

        threading.Thread(target=_task, daemon=True).start()


# =============================================================================
# RUBY PRESSURE DIALOG
# =============================================================================
class RubyDialog(tk.Toplevel):
    def __init__(self, parent: VBFormApp):
        super().__init__(parent)
        self.parent = parent
        self.title("Ruby Pressure Calibration")
        self.geometry("340x220")
        self.resizable(False, False)
        self.transient(parent)

        f = ttk.Frame(self, padding=10)
        f.pack(fill="both", expand=True)

        r1 = ttk.Frame(f)
        r1.pack(fill="x", pady=4)
        ttk.Label(r1, text="R1 Peak (nm):", width=16, font=("Tahoma", 8, "bold")).pack(side="left")
        self.e_wl = ttk.Entry(r1, width=12)
        self.e_wl.insert(0, f"{self.parent.cursor_x:.3f}" if 680 <= self.parent.cursor_x <= 750 else "694.340")
        self.e_wl.pack(side="left")

        r2 = ttk.Frame(f)
        r2.pack(fill="x", pady=4)
        ttk.Label(r2, text="Temperature (K):", width=16, font=("Tahoma", 8)).pack(side="left")
        self.e_temp = ttk.Entry(r2, width=12)
        self.e_temp.insert(0, f"{self.parent.ruby_temperature:.1f}")
        self.e_temp.pack(side="left")

        self.lbl_res = ttk.Label(f, text="Pressure: 0.00 GPa", font=("Tahoma", 11, "bold"), foreground="#0000AA")
        self.lbl_res.pack(pady=12)

        ttk.Button(f, text="Calculate", command=self._calc).pack()

    def _calc(self):
        try:
            wl = float(self.e_wl.get())
            t = float(self.e_temp.get())
            p = ruby_pressure(wl, t)
            self.lbl_res.config(text=f"Pressure: {p:.2f} GPa ({p * 10.0:.1f} kbar)")
        except ValueError:
            messagebox.showerror("Error", "Invalid numeric values.")


def launch_vb_gui(config_path: Optional[str] = None, force_mock: bool = False):
    """Launch the authentic VB-styled application."""
    app = VBFormApp(config_path=config_path, force_mock=force_mock)
    app.mainloop()
