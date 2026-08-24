import os
import struct
import re

candidates = [
    r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\omavb.dat",
    r"C:\Program Files\Common Files\Princeton Instruments\Picam\Runtime\oma1db.dat",
    r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\PI133B.DAT"
]

for p in candidates:
    if os.path.exists(p):
        with open(p, "rb") as f:
            data = f.read()
        print("=" * 70)
        print(f"File: {os.path.basename(p)}")
        print(f"Path: {p}")
        print(f"Size: {len(data)} bytes")
        
        # Check if Cypress FX2 BIX format (Length, Address MSB, Address LSB, Data...)
        # Cypress BIX records: [Length (1 byte)][Addr MSB (1 byte)][Addr LSB (1 byte)][Data (Length bytes)]
        pos = 0
        records = []
        is_bix = True
        while pos < len(data):
            rec_len = data[pos]
            if pos + 3 > len(data):
                is_bix = False
                break
            addr = (data[pos+1] << 8) | data[pos+2]
            if pos + 3 + rec_len > len(data):
                is_bix = False
                break
            records.append((rec_len, addr, pos+3))
            pos += 3 + rec_len
        
        if is_bix and len(records) > 1:
            print(f"Format: Standard Cypress FX2 Binary Record (BIX) format")
            print(f"Total Memory Records: {len(records)}")
            print(f"RAM Address Range: 0x{min(r[1] for r in records):04X} to 0x{max(r[1]+r[0] for r in records):04X}")
            for r in records[:5]:
                print(f"  Record: {r[0]} bytes at RAM Address 0x{r[1]:04X}")
            if len(records) > 5:
                print(f"  ... and {len(records)-5} more records")
        else:
            print("Format: Raw 8051 binary / custom firmware stream")

        # Extract text / ASCII strings inside the firmware
        strings = re.findall(rb'[A-Za-z0-9_\-\.\,\ \:\/]{4,50}', data)
        valid_strings = [s.decode('latin1', 'ignore') for s in strings if len(s.strip()) > 3]
        print(f"Embedded Strings / Descriptors in firmware ({len(valid_strings)}):")
        for s in valid_strings[:12]:
            print(f"  '{s}'")
        print()
