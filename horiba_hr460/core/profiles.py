"""
Spectrometer & Detector Profiles and Hardware Discovery.
========================================================
Manages pre-configured instrument profiles, persistent startup settings,
and live serial port auto-detection for connected spectrometers.
"""

from __future__ import annotations
import json
import os
import time
import logging
from typing import Dict, List, Any, Optional, Tuple
import serial
import serial.tools.list_ports

from ..config import SpectrometerConfig, GratingConfig

logger = logging.getLogger("horiba_hr460")

SETTINGS_FILE = "app_settings.json"


def get_default_profiles() -> Dict[str, SpectrometerConfig]:
    """
    Returns pre-configured spectrometer instrument profiles.
    """
    profiles: Dict[str, SpectrometerConfig] = {}

    # 1. Acton SpectraPro SP-2150 (SP2150i)
    acton_cfg_path = "config_acton_sp2150.json"
    if os.path.exists(acton_cfg_path):
        try:
            profiles["Acton SpectraPro SP-2150 (COM3)"] = SpectrometerConfig.from_json(acton_cfg_path)
        except Exception as ex:
            logger.warning(f"Could not load {acton_cfg_path}: {ex}")

    if "Acton SpectraPro SP-2150 (COM3)" not in profiles:
        profiles["Acton SpectraPro SP-2150 (COM3)"] = SpectrometerConfig(
            instrument_model="ACTON",
            com_port="COM3",
            baudrate=9600,
            camera_model="PI MTE USB Camera",
            num_pixels=1024,
            gratings=[
                GratingConfig(
                    grating_grooves_per_mm=300.0,
                    spectrometer_pos_nm=1000.0,
                    laser_wavelength=1064.0,
                    focal_length_mm=150.0,
                    inclusion_angle_rad=0.288,
                    central_pixel=512.0,
                    oma_element_size_mm=0.025,
                    slit_size=30.0,
                    exposure_time_sec=1.0,
                    accumulations=1
                ),
                GratingConfig(
                    grating_grooves_per_mm=600.0,
                    spectrometer_pos_nm=1200.0,
                    laser_wavelength=1064.0,
                    focal_length_mm=150.0,
                    inclusion_angle_rad=0.288,
                    central_pixel=512.0,
                    oma_element_size_mm=0.025,
                    slit_size=30.0,
                    exposure_time_sec=1.0,
                    accumulations=1
                )
            ]
        )

    # 2. Horiba Jobin Yvon HR460
    profiles["Horiba Jobin Yvon HR460 (COM1)"] = SpectrometerConfig(
        instrument_model="HR460",
        com_port="COM1",
        baudrate=9600,
        camera_model="SIMULATED",
        num_pixels=1024,
        gratings=[
            GratingConfig(
                grating_grooves_per_mm=1800.0,
                spectrometer_pos_nm=700.0,
                laser_wavelength=514.532,
                focal_length_mm=460.0,
                inclusion_angle_rad=0.288,
                central_pixel=512.0,
                oma_element_size_mm=-0.02765,
                slit_size=30.0,
                exposure_time_sec=1.0,
                accumulations=1
            ),
            GratingConfig(
                grating_grooves_per_mm=300.0,
                spectrometer_pos_nm=700.0,
                laser_wavelength=514.532,
                focal_length_mm=460.0,
                inclusion_angle_rad=0.288,
                central_pixel=512.0,
                oma_element_size_mm=-0.02765,
                slit_size=10.0,
                exposure_time_sec=1.0,
                accumulations=1
            )
        ]
    )

    # 3. Demo / Simulation Profile
    profiles["Demo / Simulation Mode"] = SpectrometerConfig(
        instrument_model="ACTON",
        com_port="MOCK_COM",
        camera_model="SIMULATED",
        num_pixels=1024,
        gratings=[
            GratingConfig(
                grating_grooves_per_mm=300.0,
                spectrometer_pos_nm=700.0,
                focal_length_mm=150.0
            ),
            GratingConfig(
                grating_grooves_per_mm=600.0,
                spectrometer_pos_nm=700.0,
                focal_length_mm=150.0
            )
        ]
    )

    return profiles


def load_app_settings(settings_path: str = SETTINGS_FILE) -> Dict[str, Any]:
    """
    Load user application preferences and startup settings.
    """
    if os.path.exists(settings_path) and os.path.getsize(settings_path) > 0:
        try:
            with open(settings_path, "r", encoding="utf-8") as f:
                return json.load(f)
        except Exception as ex:
            logger.warning(f"Error loading {settings_path}: {ex}")
    return {}


def save_app_settings(settings: Dict[str, Any], settings_path: str = SETTINGS_FILE) -> None:
    """
    Save user preferences and startup settings to JSON.
    """
    try:
        with open(settings_path, "w", encoding="utf-8") as f:
            json.dump(settings, f, indent=2)
    except Exception as ex:
        logger.error(f"Error saving {settings_path}: {ex}")


def clear_default_settings(settings_path: str = SETTINGS_FILE) -> None:
    """
    Clear saved default instrument profile so the setup dialog prompts on next launch.
    """
    settings = load_app_settings(settings_path)
    settings.pop("default_profile", None)
    settings.pop("remember_choice", None)
    settings.pop("saved_config", None)
    settings.pop("last_config", None)
    save_app_settings(settings, settings_path)


def scan_hardware_ports(baudrates: Tuple[int, ...] = (9600,)) -> List[Dict[str, Any]]:
    """
    Scan available serial COM ports and actively probe for connected spectrometers
    (Acton SpectraPro, Horiba HR460).
    
    Returns list of dictionaries:
        [
            {
                "port": "COM3",
                "description": "USB Serial Port (COM3)",
                "identified_as": "Acton SpectraPro SP-2-150i (SN: 21561259)",
                "model": "ACTON",
                "baudrate": 9600,
                "details": {...}
            },
            ...
        ]
    """
    available_ports = serial.tools.list_ports.comports()
    detected_devices: List[Dict[str, Any]] = []

    for p in available_ports:
        port_info: Dict[str, Any] = {
            "port": p.device,
            "description": p.description,
            "identified_as": "Generic Serial Port",
            "model": "UNKNOWN",
            "baudrate": 9600,
            "details": {}
        }

        # Probe port for Acton / Horiba protocols
        try:
            with serial.Serial(p.device, baudrate=9600, timeout=0.3) as ser:
                ser.reset_input_buffer()
                ser.reset_output_buffer()

                # 1. Test Acton ASCII Protocol ("MODEL\r")
                ser.write(b"MODEL\r")
                time.sleep(0.15)
                acton_resp = ser.read(ser.in_waiting or 32).decode("latin-1", errors="ignore").strip()

                if "ok" in acton_resp.lower() or "sp-" in acton_resp.lower() or "2150" in acton_resp.lower():
                    # Query serial number and position
                    ser.reset_input_buffer()
                    ser.write(b"SERIAL\r")
                    time.sleep(0.15)
                    ser_resp = ser.read(ser.in_waiting or 32).decode("latin-1", errors="ignore").strip()
                    sn = ser_resp.replace("SERIAL", "").replace("ok", "").strip()

                    model_clean = acton_resp.replace("MODEL", "").replace("ok", "").strip()
                    port_info["identified_as"] = f"Acton SpectraPro {model_clean}" + (f" (SN: {sn})" if sn else "")
                    port_info["model"] = "ACTON"
                    port_info["details"] = {"model_string": model_clean, "serial_number": sn}
                    detected_devices.append(port_info)
                    continue

                # 2. Test Horiba Protocol (Handshake space -> " ")
                ser.reset_input_buffer()
                ser.write(b" ")
                time.sleep(0.15)
                hr_resp = ser.read(ser.in_waiting or 16).decode("latin-1", errors="ignore")
                if " " in hr_resp or "o" in hr_resp or "F" in hr_resp:
                    port_info["identified_as"] = "Horiba Jobin Yvon HR460"
                    port_info["model"] = "HR460"
                    detected_devices.append(port_info)
                    continue

        except (serial.SerialException, PermissionError, OSError):
            # Port is busy or inaccessible
            pass

        detected_devices.append(port_info)

    return detected_devices


def detect_connected_cameras() -> List[str]:
    """
    Detect available detector / camera models on the system.
    """
    cameras = ["PI MTE USB Camera", "Simulated Detector (Demo)"]
    
    # Check if PICam runtime is present
    picam_dirs = [
        r"C:\Program Files\Princeton Instruments\PICam\Runtime",
        r"C:\Program Files (x86)\Princeton Instruments\PICam\Runtime"
    ]
    has_picam = any(os.path.exists(os.path.join(d, "Picam.dll")) for d in picam_dirs)
    if has_picam and "PI MTE USB Camera" not in cameras:
        cameras.insert(0, "PI MTE USB Camera")

    return cameras

