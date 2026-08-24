import re
import struct

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\pidc32.dll"
with open(p, "rb") as f:
    data = f.read()

for m in re.finditer(rb'[A-Za-z0-9_\-\. ]{0,30}USB[A-Za-z0-9_\-\. ]{0,30}', data, re.IGNORECASE):
    print(m.group(0).decode('latin1', 'ignore'))

bin_guid1 = struct.pack('<IHH8B', 0xB0FB3FB4, 0xAD95, 0x4A5C, 0x97, 0x4D, 0xD5, 0x9E, 0xB3, 0xD8, 0x31, 0x71)
bin_guid2 = struct.pack('<IHH8B', 0x7B4B6729, 0x58E7, 0x4E50, 0xA7, 0xD4, 0xCD, 0xEA, 0xFE, 0xC2, 0x29, 0xC1)

print(f"Legacy GUID in pidc32: {data.count(bin_guid1)}")
print(f"KMDF GUID in pidc32:   {data.count(bin_guid2)}")
