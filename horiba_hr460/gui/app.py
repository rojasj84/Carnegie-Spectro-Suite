"""
Modern Desktop Interface for Horiba HR460 & WinSpec CCD.
Built with CustomTkinter and embedded Matplotlib.
"""

from __future__ import annotations
import os
import sys
import time
import threading
from typing import Optional, List
import numpy as np

import customtkinter as ctk
import matplotlib
matplotlib.use("TkAgg")
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg, NavigationToolbar2Tk
import matplotlib.pyplot as plt

from ..config import SpectrometerConfig, GratingConfig
from ..core.calibration import OpticalCalibration, Units, ruby_pressure
from ..core.filters import remove_cosmic_rays_threshold, remove_cosmic_rays_median
from ..core.stitcher import SpectrumStitcher
from ..core.spe_file import read_spe, write_spe
from ..hardware.base import MonochromatorStatus
from ..hardware.factory import create_spectrometer, create_camera

ctk.set_appearance_mode("Dark")
ctk.set_default_color_theme("blue")


class HoribaApp(ctk.CTk):
    """Main application window for Horiba HR460 & WinSpec control."""

    def __init__(self, config_path: Optional[str] = None, force_mock: bool = False):
        super().__init__()

        self.title("Horiba HR460 / WinSpec Control Suite (Python)")
        self.geometry("1240x820")
        self.minsize(1050, 700)

        # Load Configuration
        self.config_path = config_path or self._find_default_config()
        if self.config_path and os.path.exists(self.config_path):
            if self.config_path.endswith(".json"):
                self.config = SpectrometerConfig.from_json(self.config_path)
            else:
                self.config = SpectrometerConfig.from_legacy_cfg(self.config_path)
        else:
            self.config = SpectrometerConfig()

        self.calibration = OpticalCalibration(self.config.active_grating, self.config.num_pixels)
        self.force_mock = force_mock

        # Initialize Hardware Drivers
        self.mono = create_spectrometer(self.config, force_mock=self.force_mock)
        self.camera = create_camera(self.config, force_mock=self.force_mock)

        # State Variables
        self.current_raw_wavelengths = self.calibration.get_pixel_wavelengths()
        self.current_spectrum = np.zeros(self.config.num_pixels, dtype=np.float32)
        self.reference_spectrum: Optional[np.ndarray] = None
        self.current_unit = Units.NM
        self.is_acquiring = False
        self.focus_running = False
        self.stop_requested = False
        self.stitcher = SpectrumStitcher(self.calibration)

        # Build UI layout
        self._create_layout()
        self._connect_hardware_async()

    def _find_default_config(self) -> Optional[str]:
        candidates = ["Wsp-460.cfg", "DEFAULT.CFG", "wsp-460.cfg"]
        for c in candidates:
            if os.path.exists(c):
                return c
        return None

    def _create_layout(self):
        # Configure Grid Layout (Sidebar + Main Plot Area)
        self.grid_columnconfigure(1, weight=1)
        self.grid_rowconfigure(0, weight=1)

        # Left Sidebar (Controls)
        self.sidebar = ctk.CTkScrollableFrame(self, width=340, corner_radius=0)
        self.sidebar.grid(row=0, column=0, sticky="nsew", padx=5, pady=5)

        # Right Main Panel (Plot & Realtime Readouts)
        self.main_panel = ctk.CTkFrame(self)
        self.main_panel.grid(row=0, column=1, sticky="nsew", padx=5, pady=5)
        self.main_panel.grid_rowconfigure(1, weight=1)
        self.main_panel.grid_columnconfigure(0, weight=1)

        self._build_sidebar()
        self._build_main_panel()
        self._build_statusbar()

    def _build_sidebar(self):
        # 1. Monochromator Control Section
        mono_label = ctk.CTkLabel(self.sidebar, text="Monochromator (HR460)", font=ctk.CTkFont(size=16, weight="bold"))
        mono_label.pack(anchor="w", padx=10, pady=(10, 5))

        mono_frame = ctk.CTkFrame(self.sidebar)
        mono_frame.pack(fill="x", padx=5, pady=5)

        # Wavelength Input
        wl_row = ctk.CTkFrame(mono_frame, fg_color="transparent")
        wl_row.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(wl_row, text="Center λ (nm):", width=100, anchor="w").pack(side="left")
        self.entry_wl = ctk.CTkEntry(wl_row, width=100)
        self.entry_wl.insert(0, f"{self.config.active_grating.spectrometer_pos_nm:.2f}")
        self.entry_wl.pack(side="left", padx=5)
        self.btn_go_wl = ctk.CTkButton(wl_row, text="Go", width=60, command=self._on_move_wavelength)
        self.btn_go_wl.pack(side="left")

        # Quick Jogs
        jog_row = ctk.CTkFrame(mono_frame, fg_color="transparent")
        jog_row.pack(fill="x", padx=5, pady=2)
        ctk.CTkButton(jog_row, text="-5nm", width=55, command=lambda: self._jog_wavelength(-5.0)).pack(side="left", padx=2)
        ctk.CTkButton(jog_row, text="-1nm", width=55, command=lambda: self._jog_wavelength(-1.0)).pack(side="left", padx=2)
        ctk.CTkButton(jog_row, text="+1nm", width=55, command=lambda: self._jog_wavelength(1.0)).pack(side="left", padx=2)
        ctk.CTkButton(jog_row, text="+5nm", width=55, command=lambda: self._jog_wavelength(5.0)).pack(side="left", padx=2)

        # Slit Width
        slit_row = ctk.CTkFrame(mono_frame, fg_color="transparent")
        slit_row.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(slit_row, text="Slit (µm):", width=100, anchor="w").pack(side="left")
        self.entry_slit = ctk.CTkEntry(slit_row, width=100)
        self.entry_slit.insert(0, f"{self.config.active_grating.slit_size:.0f}")
        self.entry_slit.pack(side="left", padx=5)
        ctk.CTkButton(slit_row, text="Set", width=60, command=self._on_set_slit).pack(side="left")

        # Grating Selector
        grat_row = ctk.CTkFrame(mono_frame, fg_color="transparent")
        grat_row.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(grat_row, text="Grating:", width=100, anchor="w").pack(side="left")
        grating_options = [
            f"Turret 1 ({self.config.gratings[0].grating_grooves_per_mm:.0f} g/mm)" if len(self.config.gratings) > 0 else "Turret 1",
            f"Turret 2 ({self.config.gratings[1].grating_grooves_per_mm:.0f} g/mm)" if len(self.config.gratings) > 1 else "Turret 2"
        ]
        self.cbo_grating = ctk.CTkComboBox(grat_row, values=grating_options, width=165, command=self._on_select_grating)
        self.cbo_grating.set(grating_options[self.config.active_grating_index])
        self.cbo_grating.pack(side="left", padx=5)

        # 2. Camera & Acquisition Section
        cam_label = ctk.CTkLabel(self.sidebar, text="CCD Acquisition (WinSpec)", font=ctk.CTkFont(size=16, weight="bold"))
        cam_label.pack(anchor="w", padx=10, pady=(15, 5))

        cam_frame = ctk.CTkFrame(self.sidebar)
        cam_frame.pack(fill="x", padx=5, pady=5)

        # Exposure Time
        exp_row = ctk.CTkFrame(cam_frame, fg_color="transparent")
        exp_row.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(exp_row, text="Exposure (s):", width=110, anchor="w").pack(side="left")
        self.entry_exp = ctk.CTkEntry(exp_row, width=80)
        self.entry_exp.insert(0, f"{self.config.active_grating.exposure_time_sec:.2f}")
        self.entry_exp.pack(side="left", padx=5)

        # Accumulations
        acc_row = ctk.CTkFrame(cam_frame, fg_color="transparent")
        acc_row.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(acc_row, text="Accumulations:", width=110, anchor="w").pack(side="left")
        self.entry_acc = ctk.CTkEntry(acc_row, width=80)
        self.entry_acc.insert(0, f"{self.config.active_grating.accumulations}")
        self.entry_acc.pack(side="left", padx=5)

        # Cosmic Ray Filter Checkbox
        self.chk_cosmic = ctk.CTkCheckBox(cam_frame, text="Cosmic Ray Rejection (Median)")
        self.chk_cosmic.select()
        self.chk_cosmic.pack(anchor="w", padx=10, pady=5)

        # Action Buttons
        btn_acq_row = ctk.CTkFrame(cam_frame, fg_color="transparent")
        btn_acq_row.pack(fill="x", padx=5, pady=5)
        self.btn_acquire_1 = ctk.CTkButton(btn_acq_row, text="Acquire 1", width=120, command=self._on_acquire_single)
        self.btn_acquire_1.pack(side="left", padx=3)
        self.btn_acquire_n = ctk.CTkButton(btn_acq_row, text="Acquire N", width=120, command=self._on_acquire_multi)
        self.btn_acquire_n.pack(side="left", padx=3)

        btn_focus_row = ctk.CTkFrame(cam_frame, fg_color="transparent")
        btn_focus_row.pack(fill="x", padx=5, pady=5)
        self.btn_focus = ctk.CTkButton(btn_focus_row, text="Continuous Focus", fg_color="#107C41", hover_color="#0E6B37", width=150, command=self._on_toggle_focus)
        self.btn_focus.pack(side="left", padx=3)
        self.btn_stop = ctk.CTkButton(btn_focus_row, text="Stop", fg_color="#D83B01", hover_color="#A82B00", width=90, command=self._on_stop)
        self.btn_stop.pack(side="left", padx=3)

        # Progress Bar
        self.progress_bar = ctk.CTkProgressBar(cam_frame)
        self.progress_bar.set(0)
        self.progress_bar.pack(fill="x", padx=10, pady=8)

        # 3. Optical Parameters & Tools
        tools_label = ctk.CTkLabel(self.sidebar, text="Optical Tools & Scale", font=ctk.CTkFont(size=16, weight="bold"))
        tools_label.pack(anchor="w", padx=10, pady=(15, 5))

        tools_frame = ctk.CTkFrame(self.sidebar)
        tools_frame.pack(fill="x", padx=5, pady=5)

        # Units selector
        unit_row = ctk.CTkFrame(tools_frame, fg_color="transparent")
        unit_row.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(unit_row, text="X Units:", width=80, anchor="w").pack(side="left")
        unit_values = [u.value for u in Units]
        self.cbo_units = ctk.CTkComboBox(unit_row, values=unit_values, width=180, command=self._on_change_units)
        self.cbo_units.set(self.current_unit.value)
        self.cbo_units.pack(side="left", padx=5)

        # Laser Wavelength
        laser_row = ctk.CTkFrame(tools_frame, fg_color="transparent")
        laser_row.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(laser_row, text="Laser λ (nm):", width=100, anchor="w").pack(side="left")
        self.entry_laser = ctk.CTkEntry(laser_row, width=90)
        self.entry_laser.insert(0, f"{self.config.active_grating.laser_wavelength:.3f}")
        self.entry_laser.pack(side="left", padx=5)
        ctk.CTkButton(laser_row, text="Update", width=55, command=self._on_update_laser).pack(side="left")

        # Wide-Range Glue Button
        ctk.CTkButton(tools_frame, text="Wide-Range Spectrum Glue (Stitch)...", command=self._open_glue_dialog).pack(fill="x", padx=10, pady=5)

        # File I/O Buttons
        io_row = ctk.CTkFrame(tools_frame, fg_color="transparent")
        io_row.pack(fill="x", padx=5, pady=5)
        ctk.CTkButton(io_row, text="Save Spectrum", width=120, command=self._on_save_spectrum).pack(side="left", padx=2)
        ctk.CTkButton(io_row, text="Load Spectrum", width=120, command=self._on_load_spectrum).pack(side="left", padx=2)

    def _build_main_panel(self):
        # Top toolbar row
        top_bar = ctk.CTkFrame(self.main_panel, fg_color="transparent")
        top_bar.grid(row=0, column=0, sticky="ew", padx=10, pady=5)

        self.lbl_peak_info = ctk.CTkLabel(
            top_bar,
            text="Peak: -- | Cursor X: -- | Cursor Y: --",
            font=ctk.CTkFont(size=13, weight="bold")
        )
        self.lbl_peak_info.pack(side="left", padx=10)

        self.lbl_ruby_press = ctk.CTkLabel(
            top_bar,
            text="Ruby Pressure: -- GPa",
            font=ctk.CTkFont(size=13, weight="bold"),
            text_color="#00BCF2"
        )
        self.lbl_ruby_press.pack(side="right", padx=10)

        # Embedded Matplotlib Figure
        self.fig = Figure(figsize=(8, 6), dpi=100, facecolor="#1F1F1F")
        self.ax = self.fig.add_subplot(111)
        self._style_plot()

        self.canvas = FigureCanvasTkAgg(self.fig, master=self.main_panel)
        self.canvas.draw()
        self.canvas.get_tk_widget().grid(row=1, column=0, sticky="nsew", padx=5, pady=5)

        # Matplotlib Navigation Toolbar
        toolbar_frame = ctk.CTkFrame(self.main_panel, height=35)
        toolbar_frame.grid(row=2, column=0, sticky="ew", padx=5, pady=2)
        self.toolbar = NavigationToolbar2Tk(self.canvas, toolbar_frame)
        self.toolbar.update()

        # Connect mouse motion event for cursor tracker
        self.fig.canvas.mpl_connect("motion_notify_event", self._on_plot_hover)

    def _style_plot(self):
        self.ax.set_facecolor("#121212")
        self.ax.tick_params(colors="#CCCCCC", labelsize=10)
        for spine in self.ax.spines.values():
            spine.set_color("#444444")
        self.ax.grid(True, linestyle="--", alpha=0.3, color="#888888")
        self.ax.set_xlabel("Wavelength (nm)", color="#FFFFFF", fontsize=11)
        self.ax.set_ylabel("Intensity (Counts)", color="#FFFFFF", fontsize=11)
        self.line_active, = self.ax.plot([], [], color="#00D2FF", linewidth=1.5, label="Active Spectrum")
        self.line_ref, = self.ax.plot([], [], color="#FFAA00", linewidth=1.2, linestyle="--", alpha=0.7, label="Reference")
        self.ax.legend(loc="upper right", facecolor="#222222", edgecolor="#444444", labelcolor="#FFFFFF")

    def _build_statusbar(self):
        self.statusbar = ctk.CTkFrame(self, height=28, corner_radius=0)
        self.statusbar.grid(row=1, column=0, columnspan=2, sticky="ew")

        self.status_hw = ctk.CTkLabel(self.statusbar, text="Monochromator: Initializing...", font=ctk.CTkFont(size=11))
        self.status_hw.pack(side="left", padx=15)

        self.status_cam = ctk.CTkLabel(self.statusbar, text="Camera: Connecting...", font=ctk.CTkFont(size=11))
        self.status_cam.pack(side="left", padx=15)

        self.status_action = ctk.CTkLabel(self.statusbar, text="Ready", font=ctk.CTkFont(size=11, weight="bold"))
        self.status_action.pack(side="right", padx=15)

    def _connect_hardware_async(self):
        def _task():
            mono_ok = self.mono.connect()
            cam_ok = self.camera.connect()
            if not cam_ok and not self.force_mock:
                # Fallback to simulated camera
                self.camera = create_camera(self.config, force_mock=True)
                self.camera.connect()

            self.after(0, self._update_connection_status)

        threading.Thread(target=_task, daemon=True).start()

    def _update_connection_status(self):
        self.status_hw.configure(text=f"Monochromator: {self.mono.status.value}")
        cam_type = "Mock Simulated" if self.camera.is_mock else "WinSpec32 COM"
        self.status_cam.configure(text=f"Camera: {cam_type}")
        self._refresh_plot()

    def _refresh_plot(self):
        self.current_raw_wavelengths = self.calibration.get_pixel_wavelengths(
            self.mono.current_wavelength_nm, self.config.num_pixels
        )
        x_data = self.calibration.convert_wavelengths_to_units(
            self.current_raw_wavelengths, self.current_unit
        )

        self.line_active.set_data(x_data, self.current_spectrum)

        if self.reference_spectrum is not None and len(self.reference_spectrum) == len(x_data):
            self.line_ref.set_data(x_data, self.reference_spectrum)
            self.line_ref.set_visible(True)
        else:
            self.line_ref.set_visible(False)

        self.ax.relim()
        self.ax.autoscale_view()
        self.ax.set_xlabel(f"{self.current_unit.value.capitalize()}", color="#FFFFFF")
        self.canvas.draw_idle()

        # Update peak readout
        if len(self.current_spectrum) > 0 and np.max(self.current_spectrum) > 0:
            max_idx = int(np.argmax(self.current_spectrum))
            peak_x = x_data[max_idx]
            peak_y = self.current_spectrum[max_idx]
            peak_nm = self.current_raw_wavelengths[max_idx]
            self.lbl_peak_info.configure(text=f"Peak Max: {peak_y:.1f} at {peak_x:.3f} {self.current_unit.value} ({peak_nm:.3f} nm)")

            # Check Ruby Pressure calculation
            if 680.0 <= peak_nm <= 730.0:
                p_gpa = ruby_pressure(peak_nm, temperature_k=300.0)
                self.lbl_ruby_press.configure(text=f"Ruby Pressure: {p_gpa:.2f} GPa")

    def _on_move_wavelength(self):
        try:
            target = float(self.entry_wl.get())
        except ValueError:
            return

        def _task():
            self.status_action.configure(text=f"Moving to {target:.2f} nm...")
            self.mono.move_to_wavelength(target)
            self.after(0, lambda: self._on_move_complete(target))

        threading.Thread(target=_task, daemon=True).start()

    def _on_move_complete(self, target: float):
        self.status_action.configure(text="Ready")
        self.entry_wl.delete(0, "end")
        self.entry_wl.insert(0, f"{self.mono.current_wavelength_nm:.2f}")
        self._refresh_plot()

    def _jog_wavelength(self, delta_nm: float):
        curr = self.mono.current_wavelength_nm
        target = curr + delta_nm
        self.entry_wl.delete(0, "end")
        self.entry_wl.insert(0, f"{target:.2f}")
        self._on_move_wavelength()

    def _on_set_slit(self):
        try:
            slit = float(self.entry_slit.get())
        except ValueError:
            return
        threading.Thread(target=lambda: self.mono.move_slit(slit), daemon=True).start()

    def _on_select_grating(self, selection: str):
        idx = 0 if "Turret 1" in selection else 1
        def _task():
            self.status_action.configure(text="Changing Grating...")
            self.mono.select_grating(idx)
            self.calibration = OpticalCalibration(self.config.active_grating, self.config.num_pixels)
            self.after(0, lambda: self.status_action.configure(text="Ready"))
            self.after(0, self._refresh_plot)

        threading.Thread(target=_task, daemon=True).start()

    def _on_change_units(self, unit_str: str):
        self.current_unit = Units(unit_str)
        self._refresh_plot()

    def _on_update_laser(self):
        try:
            laser = float(self.entry_laser.get())
            self.config.active_grating.laser_wavelength = laser
            self._refresh_plot()
        except ValueError:
            pass

    def _on_acquire_single(self):
        if self.is_acquiring:
            return
        try:
            exp_time = float(self.entry_exp.get())
        except ValueError:
            exp_time = 1.0

        self.is_acquiring = True
        self.stop_requested = False
        self.progress_bar.set(0)

        def _task():
            try:
                self.status_action.configure(text="Acquiring...")
                wls = self.calibration.get_pixel_wavelengths(self.mono.current_wavelength_nm, self.config.num_pixels)
                
                def _prog(time_left):
                    frac = 1.0 - (time_left / max(0.1, exp_time))
                    self.after(0, lambda: self.progress_bar.set(frac))

                data, _ = self.camera.acquire_frame(exp_time, wavelengths_nm=wls, progress_callback=_prog, stop_requested=lambda: self.stop_requested)

                self.current_spectrum = data
                self.after(0, self._refresh_plot)
            except Exception as ex:
                print(f"Acquisition error: {ex}")
            finally:
                self.is_acquiring = False
                self.after(0, lambda: self.progress_bar.set(1.0))
                self.after(0, lambda: self.status_action.configure(text="Ready"))

        threading.Thread(target=_task, daemon=True).start()

    def _on_acquire_multi(self):
        if self.is_acquiring:
            return
        try:
            exp_time = float(self.entry_exp.get())
            n_acc = int(self.entry_acc.get())
        except ValueError:
            exp_time, n_acc = 1.0, 1

        self.is_acquiring = True
        self.stop_requested = False
        self.progress_bar.set(0)

        def _task():
            frames: List[np.ndarray] = []
            try:
                wls = self.calibration.get_pixel_wavelengths(self.mono.current_wavelength_nm, self.config.num_pixels)
                for a in range(1, n_acc + 1):
                    if self.stop_requested:
                        break
                    self.status_action.configure(text=f"Accumulation {a}/{n_acc}...")
                    
                    data, _ = self.camera.acquire_frame(exp_time, wavelengths_nm=wls, stop_requested=lambda: self.stop_requested)

                    frames.append(data)
                    self.after(0, lambda: self.progress_bar.set(a / n_acc))

                if frames:
                    if self.chk_cosmic.get() and len(frames) >= 3:
                        self.current_spectrum = remove_cosmic_rays_median(frames)
                    else:
                        self.current_spectrum = np.mean(frames, axis=0)

                    self.after(0, self._refresh_plot)
            except Exception as ex:
                print(f"Multi-acquisition error: {ex}")
            finally:
                self.is_acquiring = False
                self.after(0, lambda: self.status_action.configure(text="Ready"))

        threading.Thread(target=_task, daemon=True).start()

    def _on_toggle_focus(self):
        if self.focus_running:
            self.focus_running = False
            self.btn_focus.configure(text="Continuous Focus", fg_color="#107C41")
            return

        self.focus_running = True
        self.btn_focus.configure(text="Focus Active (Running)", fg_color="#B8860B")

        try:
            exp_time = float(self.entry_exp.get())
        except ValueError:
            exp_time = 0.2

        def _focus_loop():
            while self.focus_running:
                try:
                    wls = self.calibration.get_pixel_wavelengths(self.mono.current_wavelength_nm, self.config.num_pixels)
                    data, _ = self.camera.acquire_frame(exp_time, wavelengths_nm=wls, stop_requested=lambda: not self.focus_running)
                    self.current_spectrum = data
                    self.after(0, self._refresh_plot)
                except Exception:
                    break
                time.sleep(0.01)

            self.focus_running = False
            self.after(0, lambda: self.btn_focus.configure(text="Continuous Focus", fg_color="#107C41"))

        threading.Thread(target=_focus_loop, daemon=True).start()

    def _on_stop(self):
        self.stop_requested = True
        self.focus_running = False

    def _on_plot_hover(self, event):
        if event.inaxes == self.ax and event.xdata is not None and event.ydata is not None:
            self.lbl_peak_info.configure(
                text=f"Cursor X: {event.xdata:.3f} {self.current_unit.value} | Y: {event.ydata:.1f}"
            )

    def _on_save_spectrum(self):
        from tkinter import filedialog
        path = filedialog.asksaveasfilename(
            defaultextension=".dat",
            filetypes=[("Data ASCII (*.dat)", "*.dat"), ("Princeton Instruments SPE (*.spe)", "*.spe"), ("All Files", "*.*")]
        )
        if not path:
            return

        x = self.calibration.convert_wavelengths_to_units(self.current_raw_wavelengths, self.current_unit)
        if path.endswith(".spe"):
            g = self.config.active_grating
            write_spe(
                path, self.current_spectrum, float(self.entry_exp.get()),
                wavelengths_nm=self.current_raw_wavelengths,
                center_wavelength_nm=self.mono.current_wavelength_nm,
                grating_grooves_per_mm=g.grating_grooves_per_mm,
                laser_wavelength_nm=g.laser_wavelength,
            )
        else:
            np.savetxt(path, np.column_stack((x, self.current_spectrum)), fmt="%.6f\t%.4f", header=f"{self.current_unit.value}\tIntensity")
        self.status_action.configure(text=f"Saved to {os.path.basename(path)}")

    def _on_load_spectrum(self):
        from tkinter import filedialog
        path = filedialog.askopenfilename(
            filetypes=[("Data files (*.dat;*.spe)", "*.dat;*.spe"), ("All Files", "*.*")]
        )
        if not path:
            return

        if path.endswith(".spe"):
            spe = read_spe(path)
            self.reference_spectrum = np.ravel(spe.data)
        else:
            data = np.loadtxt(path)
            if data.ndim == 2 and data.shape[1] >= 2:
                self.reference_spectrum = data[:, 1]
        self._refresh_plot()

    def _open_glue_dialog(self):
        dialog = ctk.CTkToplevel(self)
        dialog.title("Wide-Range Spectrum Stitching (Glue)")
        dialog.geometry("450x380")
        dialog.transient(self)

        ctk.CTkLabel(dialog, text="Spectrum Stitching Setup", font=ctk.CTkFont(size=16, weight="bold")).pack(pady=10)

        f_frame = ctk.CTkFrame(dialog)
        f_frame.pack(fill="x", padx=15, pady=5)

        # From nm
        r1 = ctk.CTkFrame(f_frame, fg_color="transparent")
        r1.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(r1, text="From Wavelength (nm):", width=160, anchor="w").pack(side="left")
        e_from = ctk.CTkEntry(r1, width=100)
        e_from.insert(0, "650.0")
        e_from.pack(side="left")

        # To nm
        r2 = ctk.CTkFrame(f_frame, fg_color="transparent")
        r2.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(r2, text="To Wavelength (nm):", width=160, anchor="w").pack(side="left")
        e_to = ctk.CTkEntry(r2, width=100)
        e_to.insert(0, "750.0")
        e_to.pack(side="left")

        # Overlap pixels
        r3 = ctk.CTkFrame(f_frame, fg_color="transparent")
        r3.pack(fill="x", padx=5, pady=5)
        ctk.CTkLabel(r3, text="Overlap (Pixels):", width=160, anchor="w").pack(side="left")
        e_ov = ctk.CTkEntry(r3, width=100)
        e_ov.insert(0, "50")
        e_ov.pack(side="left")

        lbl_plan = ctk.CTkLabel(dialog, text="", font=ctk.CTkFont(size=12))
        lbl_plan.pack(pady=5)

        def _do_stitch():
            from_wl = float(e_from.get())
            to_wl = float(e_to.get())
            ov_px = int(e_ov.get())
            intervals = self.stitcher.plan_intervals(from_wl, to_wl, ov_px, self.config.num_pixels)
            lbl_plan.configure(text=f"Acquiring {len(intervals)} spectral intervals...")

            def _stitch_task():
                w_windows, i_windows = [], []
                exp_t = float(self.entry_exp.get())
                for item in intervals:
                    self.mono.move_to_wavelength(item.center_wavelength_nm)
                    wls = self.calibration.get_pixel_wavelengths(item.center_wavelength_nm, self.config.num_pixels)
                    data, _ = self.camera.acquire_frame(exp_t, wavelengths_nm=wls)
                    w_windows.append(wls)
                    i_windows.append(data)

                stitched_x, stitched_y = self.stitcher.stitch_spectra(w_windows, i_windows)
                self.current_raw_wavelengths = stitched_x
                self.current_spectrum = stitched_y
                self.after(0, self._refresh_plot)
                self.after(0, dialog.destroy)

            threading.Thread(target=_stitch_task, daemon=True).start()

        ctk.CTkButton(dialog, text="Start Stitched Scan", command=_do_stitch).pack(pady=15)


def launch_gui(config_path: Optional[str] = None, force_mock: bool = False):
    """Entry point to launch the graphical user interface."""
    app = HoribaApp(config_path=config_path, force_mock=force_mock)
    app.mainloop()
