import struct
import os

# Original legacy GUID in Pipp32.dll: {B0FB3FB4-AD95-4a5c-974D-D59EB3D83171}
bin_guid_orig = struct.pack('<IHH8B', 0xB0FB3FB4, 0xAD95, 0x4A5C, 0x97, 0x4D, 0xD5, 0x9E, 0xB3, 0xD8, 0x31, 0x71)

# Class GUID previously patched: {7B4B6729-58E7-4e50-A7D4-CDEAFEC229C1}
bin_guid_prev = struct.pack('<IHH8B', 0x7B4B6729, 0x58E7, 0x4E50, 0xA7, 0xD4, 0xCD, 0xEA, 0xFE, 0xC2, 0x29, 0xC1)

# Real verified Device Interface GUID: {3972C010-8EA9-4939-926E-8A9DB35BA0A6}
bin_guid_real = struct.pack('<IHH8B', 0x3972C010, 0x8EA9, 0x4939, 0x92, 0x6E, 0x8A, 0x9D, 0xB3, 0x5B, 0xA0, 0xA6)

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Pipp32.dll"
with open(p, "rb") as f:
    data = f.read()

if bin_guid_prev in data:
    patched = data.replace(bin_guid_prev, bin_guid_real)
    with open(p, "wb") as f:
        f.write(patched)
    print("SUCCESS: Patched Pipp32.dll with real verified Device Interface GUID {3972C010-8EA9-4939-926E-8A9DB35BA0A6}!")
elif bin_guid_orig in data:
    patched = data.replace(bin_guid_orig, bin_guid_real)
    with open(p, "wb") as f:
        f.write(patched)
    print("SUCCESS: Patched Pipp32.dll from orig with real verified Device Interface GUID {3972C010-8EA9-4939-926E-8A9DB35BA0A6}!")
elif bin_guid_real in data:
    print("Pipp32.dll already has the real verified Device Interface GUID!")
else:
    print("Target GUID not found in Pipp32.dll.")
