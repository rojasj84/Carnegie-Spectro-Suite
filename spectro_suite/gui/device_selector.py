"""
Startup Spectrometer & Camera Hardware Selection Dialog.
========================================================
Allows users to choose from pre-configured spectrometer and detector profiles,
auto-detect attached serial instruments, customize COM settings, and persist
startup preferences.
"""

from __future__ import annotations
import os
import sys
import threading
from typing import Optional, Dict, Any, Tuple
import tkinter as tk
from tkinter import ttk, filedialog, messagebox

try:
    from ..config import SpectrometerConfig
    from ..core.profiles import (
        get_default_profiles,
        load_app_settings,
        save_app_settings,
        scan_hardware_ports,
        clear_default_settings
    )
except (ImportError, ValueError):
    import sys
    from pathlib import Path
    sys.path.insert(0, str(Path(__file__).resolve().parent.parent.parent))
    from spectro_suite.config import SpectrometerConfig
    from spectro_suite.core.profiles import (
        get_default_profiles,
        load_app_settings,
        save_app_settings,
        scan_hardware_ports,
        clear_default_settings
    )


class DeviceSelectorDialog:
    """
    Startup hardware selector and configuration manager window.
    Can run before the main application window or be opened from Settings.
    """

    def __init__(
        self,
        parent: Optional[tk.Tk] = None,
        initial_config: Optional[SpectrometerConfig] = None
    ):
        self.parent = parent
        self.is_standalone = parent is None

        if self.is_standalone:
            self.root = tk.Tk()
        else:
            self.root = tk.Toplevel(parent)
            self.root.transient(parent)
            self.root.grab_set()

        self.root.title("Spectrometer & Detector Setup")
        self.root.geometry("560x520")
        self.root.resizable(False, False)

        # Style configuration
        self.style = ttk.Style(self.root)
        try:
            self.style.theme_use("winnative" if "winnative" in self.style.theme_names() else "default")
        except Exception:
            pass

        self.profiles = get_default_profiles()
        self.selected_config: Optional[SpectrometerConfig] = initial_config
        self.force_mock: bool = False
        self.result_action: str = "CANCEL"

        # Load saved settings
        self.settings = load_app_settings()

        self._build_ui()
        self._apply_initial_selection(initial_config)

    def _build_ui(self):
        # 1. Header Frame
        hdr_frame = tk.Frame(self.root, bg="#1E293B", padx=16, pady=12)
        hdr_frame.pack(fill="x")

        lbl_title = tk.Label(
            hdr_frame,
            text="Spectrometer & Detector Setup",
            font=("Segoe UI", 13, "bold"),
            fg="#F8FAFC",
            bg="#1E293B"
        )
        lbl_title.pack(anchor="w")

        lbl_sub = tk.Label(
            hdr_frame,
            text="Select your instrument profile or scan connected COM ports.",
            font=("Segoe UI", 9),
            fg="#94A3B8",
            bg="#1E293B"
        )
        lbl_sub.pack(anchor="w", pady=(2, 0))

        # Main Container
        main_frame = ttk.Frame(self.root, padding=16)
        main_frame.pack(fill="both", expand=True)

        # 2. Instrument Profile Selection
        grp_profile = ttk.LabelFrame(main_frame, text=" Spectrometer Profile ", padding=10)
        grp_profile.pack(fill="x", pady=(0, 10))

        row1 = ttk.Frame(grp_profile)
        row1.pack(fill="x", pady=2)
        ttk.Label(row1, text="Profile Preset:", width=15).pack(side="left")

        self.profile_names = list(self.profiles.keys()) + ["-- Browse Custom Config File (.json / .cfg) --"]
        self.var_profile = tk.StringVar()
        self.cbo_profile = ttk.Combobox(
            row1,
            textvariable=self.var_profile,
            values=self.profile_names,
            state="readonly",
            width=38
        )
        self.cbo_profile.pack(side="left", padx=5, fill="x", expand=True)
        self.cbo_profile.bind("<<ComboboxSelected>>", self._on_profile_selected)

        # Auto-Discovery Button & Status
        row_scan = ttk.Frame(grp_profile)
        row_scan.pack(fill="x", pady=(6, 2))
        self.btn_scan = ttk.Button(row_scan, text="Auto-Detect / Scan COM Ports", command=self._on_scan_ports)
        self.btn_scan.pack(side="left")

        self.lbl_scan_status = ttk.Label(row_scan, text="", foreground="#0369A1")
        self.lbl_scan_status.pack(side="left", padx=10)

        # Detected Hardware Quick-Select Listbox/Frame
        self.frame_detected = ttk.Frame(grp_profile)
        self.frame_detected.pack(fill="x", pady=(4, 0))

        # 3. Connection & Hardware Details
        grp_details = ttk.LabelFrame(main_frame, text=" Hardware Parameters ", padding=10)
        grp_details.pack(fill="x", pady=(0, 10))

        grid = ttk.Frame(grp_details)
        grid.pack(fill="x")

        # Instrument Model
        ttk.Label(grid, text="Model Type:", width=15).grid(row=0, column=0, sticky="w", pady=4)
        self.var_model = tk.StringVar(value="ACTON")
        self.cbo_model = ttk.Combobox(grid, textvariable=self.var_model, values=["ACTON", "HR460"], state="readonly", width=12)
        self.cbo_model.grid(row=0, column=1, sticky="w", padx=5, pady=4)

        # Serial COM Port
        ttk.Label(grid, text="COM Port:", width=15).grid(row=0, column=2, sticky="w", padx=(15, 0), pady=4)
        self.var_port = tk.StringVar(value="COM3")
        self.entry_port = ttk.Entry(grid, textvariable=self.var_port, width=12)
        self.entry_port.grid(row=0, column=3, sticky="w", padx=5, pady=4)

        # Baud Rate
        ttk.Label(grid, text="Baud Rate:", width=15).grid(row=1, column=0, sticky="w", pady=4)
        self.var_baud = tk.StringVar(value="9600")
        self.cbo_baud = ttk.Combobox(grid, textvariable=self.var_baud, values=["9600", "19200", "38400", "57600", "115200"], width=12)
        self.cbo_baud.grid(row=1, column=1, sticky="w", padx=5, pady=4)

        # Camera / Detector Driver
        ttk.Label(grid, text="Detector:", width=15).grid(row=1, column=2, sticky="w", padx=(15, 0), pady=4)
        self.var_camera = tk.StringVar(value="FLIR Blackfly S BFS-U3")
        self.cbo_camera = ttk.Combobox(
            grid,
            textvariable=self.var_camera,
            values=["Princeton Instruments ST-133 InGaAs (512)", "Princeton Instruments ST-133 InGaAs (libusbK)", "FLIR Blackfly S BFS-U3", "PI MTE USB Camera", "Simulated Detector (Demo)", "Custom / Other"],
            width=22
        )
        self.cbo_camera.grid(row=1, column=3, sticky="w", padx=5, pady=4)

        # 4. Remember Option
        self.var_remember = tk.BooleanVar(value=True)
        self.chk_remember = ttk.Checkbutton(
            main_frame,
            text="Remember this selection as default (do not prompt on next startup)",
            variable=self.var_remember
        )
        self.chk_remember.pack(anchor="w", pady=(0, 12))

        # 5. Action Buttons
        btn_frame = ttk.Frame(main_frame)
        btn_frame.pack(fill="x", side="bottom")

        self.btn_cancel = ttk.Button(btn_frame, text="Cancel / Exit", command=self._on_cancel)
        self.btn_cancel.pack(side="right", padx=(5, 0))

        self.btn_demo = ttk.Button(btn_frame, text="Run in Demo Mode", command=self._on_demo)
        self.btn_demo.pack(side="right", padx=5)

        self.btn_connect = ttk.Button(btn_frame, text="Connect & Launch", command=self._on_connect)
        self.btn_connect.pack(side="right", padx=5)

    def _apply_initial_selection(self, config: Optional[SpectrometerConfig] = None):
        saved_profile_name = self.settings.get("default_profile", None)

        if config:
            self.var_model.set(config.instrument_model)
            self.var_port.set(config.com_port)
            self.var_baud.set(str(config.baudrate))
            self.var_camera.set(config.camera_model)
            for name, prof in self.profiles.items():
                if prof.instrument_model == config.instrument_model and prof.com_port == config.com_port:
                    self.var_profile.set(name)
                    return
            self.var_profile.set("Custom")
        elif saved_profile_name and saved_profile_name in self.profiles:
            self.var_profile.set(saved_profile_name)
            self._load_profile_data(self.profiles[saved_profile_name])
        else:
            default_acton = "Acton SpectraPro SP-2150 (COM3)"
            if default_acton in self.profiles:
                self.var_profile.set(default_acton)
                self._load_profile_data(self.profiles[default_acton])
            elif self.profile_names:
                self.var_profile.set(self.profile_names[0])
                self._load_profile_data(self.profiles[self.profile_names[0]])

    def _on_profile_selected(self, event=None):
        choice = self.var_profile.get()
        if choice.startswith("-- Browse"):
            filepath = filedialog.askopenfilename(
                title="Select Configuration File",
                filetypes=[("Spectrometer Config", "*.json *.cfg"), ("All Files", "*.*")]
            )
            if filepath and os.path.exists(filepath):
                try:
                    if filepath.endswith(".json"):
                        cfg = SpectrometerConfig.from_json(filepath)
                    else:
                        cfg = SpectrometerConfig.from_legacy_cfg(filepath)
                    self.selected_config = cfg
                    self._load_profile_data(cfg)
                except Exception as ex:
                    messagebox.showerror("Config Error", f"Failed to load configuration:\n{ex}")
            return

        if choice in self.profiles:
            prof = self.profiles[choice]
            self.selected_config = prof
            self._load_profile_data(prof)

    def _load_profile_data(self, config: SpectrometerConfig):
        self.var_model.set(config.instrument_model)
        self.var_port.set(config.com_port)
        self.var_baud.set(str(config.baudrate))
        self.var_camera.set(getattr(config, "camera_model", "PI MTE USB Camera"))

    def _on_scan_ports(self):
        self.lbl_scan_status.config(text="Scanning serial ports...")
        self.btn_scan.config(state="disabled")

        def _do_scan():
            devices = scan_hardware_ports()
            self.root.after(0, lambda: self._display_scan_results(devices))

        threading.Thread(target=_do_scan, daemon=True).start()

    def _display_scan_results(self, devices: list[dict]):
        self.btn_scan.config(state="normal")

        for w in self.frame_detected.winfo_children():
            w.destroy()

        identified = [d for d in devices if d.get("model") in ("ACTON", "HR460")]

        if not identified:
            self.lbl_scan_status.config(text=f"Scan complete: {len(devices)} port(s) found (no spectrometer answered).")
            return

        self.lbl_scan_status.config(text=f"Scan complete: Found {len(identified)} spectrometer(s)!")

        for d in identified:
            p_name = d["port"]
            ident = d["identified_as"]
            model = d["model"]
            baud = d["baudrate"]

            btn = ttk.Button(
                self.frame_detected,
                text=f"Use Detected: [{p_name}] {ident}",
                command=lambda m=model, p=p_name, b=baud: self._select_detected_device(m, p, b)
            )
            btn.pack(fill="x", pady=2)

    def _select_detected_device(self, model: str, port: str, baud: int):
        self.var_model.set(model)
        self.var_port.set(port)
        self.var_baud.set(str(baud))

        for name, prof in self.profiles.items():
            if prof.instrument_model.upper() == model.upper() and prof.com_port.upper() == port.upper():
                self.var_profile.set(name)
                return

    def _on_connect(self):
        choice = self.var_profile.get()
        if choice in self.profiles:
            cfg = self.profiles[choice]
        elif self.selected_config:
            cfg = self.selected_config
        else:
            cfg = SpectrometerConfig()

        cfg.instrument_model = self.var_model.get().strip()
        cfg.com_port = self.var_port.get().strip()
        try:
            cfg.baudrate = int(self.var_baud.get().strip())
        except ValueError:
            cfg.baudrate = 9600
        cfg.camera_model = self.var_camera.get().strip()

        self.selected_config = cfg
        self.force_mock = False
        self.result_action = "LAUNCH"

        if self.var_remember.get():
            settings = load_app_settings()
            settings["default_profile"] = choice
            settings["remember_choice"] = True
            settings["saved_config"] = cfg.to_dict()
            save_app_settings(settings)

        self._close()

    def _on_demo(self):
        choice = "Demo / Simulation Mode"
        if choice in self.profiles:
            cfg = self.profiles[choice]
        else:
            cfg = SpectrometerConfig(instrument_model="ACTON", com_port="MOCK_COM")

        self.selected_config = cfg
        self.force_mock = True
        self.result_action = "DEMO"
        self._close()

    def _on_cancel(self):
        self.result_action = "CANCEL"
        self._close()

    def _close(self):
        if self.is_standalone:
            self.root.destroy()
        else:
            self.root.grab_release()
            self.root.destroy()

    def show(self) -> Tuple[str, Optional[SpectrometerConfig], bool]:
        """
        Display the dialog and wait for user response.
        """
        if self.is_standalone:
            self.root.mainloop()
        else:
            self.root.wait_window()

        return self.result_action, self.selected_config, self.force_mock
