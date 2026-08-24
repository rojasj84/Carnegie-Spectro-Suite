import struct
import os
import shutil

bin_guid1 = struct.pack('<IHH8B', 0xB0FB3FB4, 0xAD95, 0x4A5C, 0x97, 0x4D, 0xD5, 0x9E, 0xB3, 0xD8, 0x31, 0x71)
bin_guid2 = struct.pack('<IHH8B', 0x7B4B6729, 0x58E7, 0x4E50, 0xA7, 0xD4, 0xCD, 0xEA, 0xFE, 0xC2, 0x29, 0xC1)

p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Pipp32.dll"
backup_p = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Pipp32.dll.bak"

try:
    with open(p, "rb") as f:
        data = f.read()

    if not os.path.exists(backup_p):
        shutil.copyfile(p, backup_p)
        print("Created backup of Pipp32.dll")

    if bin_guid1 in data:
        patched = data.replace(bin_guid1, bin_guid2)
        with open(p, "wb") as f:
            f.write(patched)
        print("SUCCESS: Successfully patched Pipp32.dll with 64-bit KMDF driver GUID!")
    elif bin_guid2 in data:
        print("Pipp32.dll is already patched with the 64-bit KMDF driver GUID!")
    else:
        print("Could not find target GUID in Pipp32.dll.")

except PermissionError:
    print("PERMISSION ERROR: Please close WinSpec so Pipp32.dll can be updated.")
except Exception as ex:
    print(f"Error: {ex}")
