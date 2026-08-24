import re
import struct

p = r"C:\Windows\System32\Drivers\piusbwdf.sys"
with open(p, "rb") as f:
    data = f.read()

# Extract all ASCII/Unicode strings
strings = re.findall(rb'[A-Za-z0-9_]{4,40}', data)
for s in set(strings):
    txt = s.decode('latin1', 'ignore')
    if any(k in txt.lower() for k in ['ioctl', 'read', 'write', 'firmware', 'reset', 'speed', 'version', 'param', 'frame', 'pipe', 'endpoint', 'bulk']):
        print(' ', txt)

# Look for standard IOCTL CTL_CODE patterns: (DeviceType << 16) | (Access << 14) | (Function << 2) | Method
# DeviceType for custom USB is typically 0x00000022 (FILE_DEVICE_UNKNOWN) or 0x00008000
ioctls = []
for i in range(0, len(data)-4, 4):
    val = struct.unpack('<I', data[i:i+4])[0]
    dev_type = (val >> 16) & 0xFFFF
    method = val & 3
    func = (val >> 2) & 0xFFF
    if dev_type in [0x0022, 0x8000, 0x0000, 0x0009] and 0x800 <= func <= 0x900:
        ioctls.append((val, dev_type, func, method))

print(f"\nFound {len(ioctls)} candidate IOCTLs in piusbwdf.sys:")
for val, dev_type, func, method in set(ioctls):
    print(f"  0x{val:08X} (DevType=0x{dev_type:04X}, Func=0x{func:03X}, Method={method})")
