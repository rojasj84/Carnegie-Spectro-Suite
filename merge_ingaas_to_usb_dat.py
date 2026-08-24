import os
import struct
import shutil

p_src = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT"
p_dst = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B2.DAT"
backup_dst = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B2.DAT.bak"

with open(p_src, "rb") as f:
    src_data = f.read()

with open(p_dst, "rb") as f:
    dst_data = f.read()

if not os.path.exists(backup_dst):
    shutil.copyfile(p_dst, backup_dst)
    print("Created backup of PI133B2.DAT")

print(f"PI133B.DAT (src) size: {len(src_data)} bytes")
print(f"PI133B2.DAT (dst) size: {len(dst_data)} bytes")

# Read header structure of DAT files
# Typically, first 2 bytes is number of chips
num_chips_src = struct.unpack('<H', src_data[:2])[0]
num_chips_dst = struct.unpack('<H', dst_data[:2])[0]
print(f"Source chip count: {num_chips_src}, Dest chip count: {num_chips_dst}")

# Let's inspect the chip IDs in src and dst
src_chips = [struct.unpack('<H', src_data[2+i*2:4+i*2])[0] for i in range(min(num_chips_src, 100))]
dst_chips = [struct.unpack('<H', dst_data[2+i*2:4+i*2])[0] for i in range(min(num_chips_dst, 100))]

print(f"Source chip IDs: {src_chips}")
print(f"Dest chip IDs: {dst_chips}")

# InGaAs IDs: 95 (1x256), 96 (1x512), 122 (1x1024), 126 (1x512L)
ingaas_ids = [95, 96, 122, 126]
print("InGaAs in source:", [x for x in ingaas_ids if x in src_chips])
print("InGaAs in dest:", [x for x in ingaas_ids if x in dst_chips])
