import matplotlib.pyplot as plt
import numpy as np
from spectro_suite.hardware.detectors.pimte import PIMTECamera

cam = PIMTECamera(num_pixels=512)
cam.connect()
temp_info = cam.get_temperature()

pixels = np.arange(1, 513)
spec, _ = cam.acquire_frame(exposure_time_sec=1.0)

fig, ax = plt.subplots(figsize=(10, 5), dpi=120)
ax.plot(pixels, spec, color='#00DDFF', lw=1.2, label='InGaAs 512x1 (Model 7514-0001)')
ax.set_title(f"SpectroSuite - CCD Raw 512-Pixel Baseline [Temp: {temp_info['temperature_c']} °C ({temp_info['status_str']})]", fontsize=12, fontweight='bold')
ax.set_xlabel("Pixel (1 to 512)", fontsize=11)
ax.set_ylabel("Intensity (Counts)", fontsize=11)
ax.set_xlim(1, 512)
ax.set_ylim(400, 600)
ax.grid(True, linestyle='--', alpha=0.4)
ax.legend(loc='upper right')

out_path = r"C:\Users\LabUserR129\.gemini\antigravity-ide\brain\0079dd9a-69eb-49a2-815b-46ae0809cc3d\ingaas_512_preview.png"
plt.tight_layout()
plt.savefig(out_path)
print(f"Saved 512-pixel preview to {out_path}")
