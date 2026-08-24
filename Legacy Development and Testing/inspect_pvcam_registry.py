import winreg

def inspect_key(root, subkey_path):
    try:
        key = winreg.OpenKey(root, subkey_path, 0, winreg.KEY_READ | winreg.KEY_WOW64_32KEY)
        print(f"FOUND 32-bit Registry Key: {subkey_path}")
        
        # Enumerate values
        idx = 0
        while True:
            try:
                name, val, vtype = winreg.EnumValue(key, idx)
                print(f"  Value: {name} = {val} (type={vtype})")
                idx += 1
            except OSError:
                break
                
        # Enumerate subkeys
        idx = 0
        while True:
            try:
                sk_name = winreg.EnumKey(key, idx)
                print(f"  Subkey: {sk_name}")
                inspect_key(root, f"{subkey_path}\\{sk_name}")
                idx += 1
            except OSError:
                break
        winreg.CloseKey(key)
    except FileNotFoundError:
        print(f"Key not found: {subkey_path}")

print("Checking PVCAM / Roper Scientific 32-bit registry configuration...")
inspect_key(winreg.HKEY_LOCAL_MACHINE, r"SOFTWARE\Roper Scientific")
inspect_key(winreg.HKEY_LOCAL_MACHINE, r"SOFTWARE\Princeton Instruments")
inspect_key(winreg.HKEY_LOCAL_MACHINE, r"SOFTWARE\Photometrics")
