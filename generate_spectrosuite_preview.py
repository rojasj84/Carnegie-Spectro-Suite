import matplotlib.pyplot as plt
import numpy as np
from spectro_suite.hardware.detectors.pimte import PIMTECamera

cam = PIMTECamera(num_pixels=1024)
cam.connect()
temp_info = cam.get_temperature()

wavelengths = np.linspace(1000.0, 1140.0, 1024)
spec, _ = cam.acquire_frame(exposure_time_sec=0.5, wavelengths_nm=wavelengths)

fig, ax = plt.subplots(figsize=(10, 5), dpi=120)
ax.plot(wavelengths, spec, color='#0066CC', lw=1.5, label='InGaAs 1024x1 (Model 7514-0001)')
ax.set_title(f"SpectroSuite - Princeton Instruments InGaAs Detector [Temp: {temp_info['temperature_c']} °C ({temp_info['status_str']})]", fontsize=12, fontweight='bold')
ax.set_xlabel("Wavelength (nm)", fontsize=11)
ax.set_ylabel("Intensity (Counts)", fontsize=11)
ax.grid(True, linestyle='--', alpha=0.6)
ax.legend(loc='upper right')

out_path = r"C:\Users\LabUserR129\.gemini\antigravity-ide\brain\0079dd9a-69eb-49a2-815b-46ae0809cc3d\ingaas_spectrum_preview.png"
plt.tight_layout()
plt.savefig(out_path)
print(f"Saved spectrum preview to {out_path}")
