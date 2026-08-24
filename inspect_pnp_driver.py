import winreg

def inspect_usb_devices():
    key_path = r"SYSTEM\CurrentControlSet\Enum\USB"
    with winreg.OpenKey(winreg.HKEY_LOCAL_MACHINE, key_path) as k:
        n_sub, _, _ = winreg.QueryInfoKey(k)
        for i in range(n_sub):
            vid_pid = winreg.EnumKey(k, i)
            if "0BD7" in vid_pid.upper() or "PI" in vid_pid.upper() or "MTE" in vid_pid.upper():
                print(f"=== Found Princeton Device: {vid_pid} ===")
                sub_path = f"{key_path}\\{vid_pid}"
                with winreg.OpenKey(winreg.HKEY_LOCAL_MACHINE, sub_path) as sub_k:
                    n_inst, _, _ = winreg.QueryInfoKey(sub_k)
                    for j in range(n_inst):
                        inst_name = winreg.EnumKey(sub_k, j)
                        inst_path = f"{sub_path}\\{inst_name}"
                        print(f"  Instance: {inst_name}")
                        with winreg.OpenKey(winreg.HKEY_LOCAL_MACHINE, inst_path) as inst_k:
                            n_val, _, _ = winreg.QueryInfoKey(inst_k)
                            for v in range(n_val):
                                vn, vd, _ = winreg.EnumValue(inst_k, v)
                                if vn in ["DeviceDesc", "FriendlyName", "Service", "Mfg", "Driver", "Class"]:
                                    print(f"    {vn}: {vd}")

inspect_usb_devices()
