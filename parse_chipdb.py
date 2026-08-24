import os
import struct

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PICHIPDB.dll"
with open(p, "rb") as f:
    data = f.read()

# Look for InGaAs strings and preceding/following data structures
import re
for m in re.finditer(rb'InGaAs\s+1x\d+', data):
    pos = m.start()
    snippet = data[max(0, pos-32):min(len(data), pos+64)]
    print(f"Offset 0x{pos:X}: {m.group(0).decode('latin1')}")
    # print hex
    print("  Hex:", snippet.hex())
