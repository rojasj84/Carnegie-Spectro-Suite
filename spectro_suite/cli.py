"""
Command-Line Interface (CLI) for Universal Spectrometer & Detector Control Suite.
"""

from __future__ import annotations
import argparse
import sys
import os
import numpy as np

from .config import SpectrometerConfig
from .core.calibration import OpticalCalibration, Units
from .core.spe_file import read_spe, write_spe
from .core.stitcher import SpectrumStitcher
from .hardware.factory import create_spectrometer, create_camera


def main():
    parser = argparse.ArgumentParser(
        description="Universal Spectrometer & Detector Control Suite"
    )
    subparsers = parser.add_subparsers(dest="command", help="Available subcommands")

    # Command: gui
    gui_parser = subparsers.add_parser("gui", help="Launch interactive graphical interface")
    gui_parser.add_argument("--config", "-c", default=None, help="Path to configuration file (.cfg / .json)")
    gui_parser.add_argument("--mock", "-m", action="store_true", help="Force simulation mode")
    gui_parser.add_argument("--modern", action="store_true", help="Launch modern dark-theme GUI instead of classic VB form")
    gui_parser.add_argument("--setup", "--select", action="store_true", help="Open instrument and detector setup dialog")

    # Command: spe2dat
    spe_parser = subparsers.add_parser("spe2dat", help="Convert Princeton Instruments SPE to 2-column ASCII")
    spe_parser.add_argument("input_spe", help="Path to input .spe file")
    spe_parser.add_argument("output_dat", help="Path to output .dat file")

    # Command: info
    info_parser = subparsers.add_parser("info", help="Display spectrometer configuration and calibration")
    info_parser.add_argument("--config", "-c", default=None, help="Path to configuration file")

    # Command: acquire
    acq_parser = subparsers.add_parser("acquire", help="Acquire a spectrum frame")
    acq_parser.add_argument("--exposure", "-e", type=float, default=1.0, help="Exposure time in seconds")
    acq_parser.add_argument("--accum", "-n", type=int, default=1, help="Number of accumulations")
    acq_parser.add_argument("--output", "-o", default="spectrum.dat", help="Output file path")
    acq_parser.add_argument("--mock", "-m", action="store_true", help="Use simulated hardware")

    # Command: move
    move_parser = subparsers.add_parser("move", help="Move monochromator position")
    move_parser.add_argument("--wavelength", "-w", type=float, help="Target wavelength in nm")
    move_parser.add_argument("--slit", "-s", type=float, help="Slit size in microns")
    move_parser.add_argument("--grating", "-g", type=int, choices=[0, 1], help="Grating index (0 or 1)")
    move_parser.add_argument("--port", "-p", default="COM1", help="Serial COM port")
    move_parser.add_argument("--model", choices=["HR460", "ACTON"], default="ACTON", help="Spectrometer model")
    move_parser.add_argument("--mock", "-m", action="store_true", help="Use simulated hardware")

    args = parser.parse_args()

    if args.command == "gui" or args.command is None:
        from .core.profiles import load_app_settings
        from .gui.device_selector import DeviceSelectorDialog

        config_arg = getattr(args, "config", None)
        force_mock = getattr(args, "mock", False)
        force_setup = getattr(args, "setup", False)
        use_modern = getattr(args, "modern", False)

        chosen_config = None

        if config_arg:
            if config_arg.endswith(".json"):
                chosen_config = SpectrometerConfig.from_json(config_arg)
            else:
                chosen_config = SpectrometerConfig.from_legacy_cfg(config_arg)
        elif not force_mock:
            settings = load_app_settings()
            remembered = settings.get("remember_choice", False)
            saved_cfg_dict = settings.get("saved_config", None)

            if not force_setup and remembered and saved_cfg_dict:
                try:
                    chosen_config = SpectrometerConfig.from_dict(saved_cfg_dict)
                except Exception:
                    chosen_config = None

            if chosen_config is None or force_setup:
                selector = DeviceSelectorDialog()
                action, sel_cfg, is_mock = selector.show()
                if action == "CANCEL":
                    sys.exit(0)
                elif action == "DEMO":
                    force_mock = True
                    chosen_config = sel_cfg
                else:
                    chosen_config = sel_cfg
                    force_mock = is_mock

        if use_modern:
            from .gui.app import launch_gui
            launch_gui(config_path=config_arg, force_mock=force_mock, config=chosen_config)
        else:
            from .gui.vb_app import launch_vb_gui
            launch_vb_gui(config_path=config_arg, force_mock=force_mock, config=chosen_config)

    elif args.command == "spe2dat":
        spe = read_spe(args.input_spe)
        spe.to_ascii(args.output_dat)
        print(f"Successfully exported {args.input_spe} -> {args.output_dat} ({spe.xdim} points)")

    elif args.command == "info":
        cfg_path = args.config or ("config_acton_sp2150.json" if os.path.exists("config_acton_sp2150.json") else ("Wsp-460.cfg" if os.path.exists("Wsp-460.cfg") else None))
        if cfg_path and os.path.exists(cfg_path):
            cfg = SpectrometerConfig.from_legacy_cfg(cfg_path) if cfg_path.endswith(".cfg") else SpectrometerConfig.from_json(cfg_path)
        else:
            cfg = SpectrometerConfig()
        
        g = cfg.active_grating
        cal = OpticalCalibration(g, cfg.num_pixels)
        wls = cal.get_pixel_wavelengths()

        print("=" * 60)
        print(f"{cfg.instrument_model} Spectrometer Configuration")
        print("=" * 60)
        print(f"Focal Length:          {g.focal_length_mm:.1f} mm")
        print(f"Active Grating:        {g.grating_grooves_per_mm:.0f} grooves/mm (Turret {cfg.active_grating_index + 1})")
        print(f"Laser Wavelength:      {g.laser_wavelength:.3f} nm")
        print(f"Center Wavelength:     {g.spectrometer_pos_nm:.3f} nm")
        print(f"Central Pixel:         {g.central_pixel:.1f}")
        print(f"Inclusion Angle:       {g.inclusion_angle_rad:.4f} rad")
        print(f"CCD Pixel Pitch:       {g.oma_element_size_mm:.5f} mm")
        print(f"Dispersion Coverage:   {wls[0]:.3f} nm -> {wls[-1]:.3f} nm (Delta_lambda = {abs(wls[-1] - wls[0]):.3f} nm)")
        print("=" * 60)

    elif args.command == "acquire":
        cfg = SpectrometerConfig()
        g = cfg.active_grating
        cal = OpticalCalibration(g, cfg.num_pixels)
        wls = cal.get_pixel_wavelengths()

        cam = create_camera(cfg, force_mock=args.mock)
        if not cam.connect() and not args.mock:
            print("Could not connect to physical detector, falling back to simulated camera.")
            cam = create_camera(cfg, force_mock=True)
            cam.connect()

        print(f"Acquiring spectrum ({args.exposure}s exposure, {args.accum} accumulations)...")
        accum_data = []
        for a in range(args.accum):
            data, _ = cam.acquire_frame(args.exposure, wavelengths_nm=wls)
            accum_data.append(data)
        
        final_y = np.mean(accum_data, axis=0)
        np.savetxt(args.output, np.column_stack((wls, final_y)), fmt="%.6f\t%.4f", header="Wavelength_nm\tIntensity")
        print(f"Spectrum saved to {args.output}")

    elif args.command == "move":
        cfg = SpectrometerConfig(com_port=args.port, instrument_model=args.model)
        mono = create_spectrometer(cfg, force_mock=args.mock)
        if not mono.connect():
            print(f"Failed to connect to {args.model} on {args.port}.")
            sys.exit(1)
        
        if args.wavelength is not None:
            print(f"Moving to {args.wavelength:.3f} nm...")
            mono.move_to_wavelength(args.wavelength)
            print(f"Reached {mono.current_wavelength_nm:.3f} nm")

        if args.slit is not None:
            print(f"Setting slit width to {args.slit:.1f} µm...")
            mono.move_slit(args.slit)

        if args.grating is not None:
            print(f"Selecting grating {args.grating + 1}...")
            mono.select_grating(args.grating)

        mono.disconnect()


if __name__ == "__main__":
    main()
