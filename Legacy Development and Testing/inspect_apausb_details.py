import os
import struct
import re

p = r"C:\Users\LabUserR129\Documents\Github\Horiba-HR460\Drivers\APAUSB.SYS"
with open(p, "rb") as fp:
    data = fp.read()

print(f"APAUSB.SYS size: {len(data)} bytes")

# Extract strings
strings = re.findall(rb'[A-Za-z0-9_\-\\\.\:\$]{4,50}', data)
for s in set(strings):
    txt = s.decode('latin1', 'ignore')
    if any(k in txt.lower() for k in ['ioctl', 'device', 'usb', 'pipe', 'read', 'write', 'reset', 'firmware', 'piusb', 'apa', 'ezusb']):
        print(' ', txt)

# Extract IOCTLs
ioctls = []
for i in range(0, len(data)-4, 4):
    val = struct.unpack('<I', data[i:i+4])[0]
    dev_type = (val >> 16) & 0xFFFF
    method = val & 3
    func = (val >> 2) & 0xFFF
    if dev_type in [0x0022, 0x8000, 0x0000, 0x0009] and 0x800 <= func <= 0x950:
        ioctls.append((val, dev_type, func, method))

print(f"\nFound {len(set(ioctls))} IOCTLs in APAUSB.SYS:")
for val, dev_type, func, method in sorted(set(ioctls)):
    print(f"  0x{val:08X} (DevType=0x{dev_type:04X}, Func=0x{func:03X}, Method={method})")
