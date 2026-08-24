import os
import subprocess
import time
import win32com.client

exe = os.path.abspath(r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Winspec.exe")
print(f"Testing non-elevated launch of: {exe}")

try:
    p = subprocess.Popen([exe], cwd=os.path.dirname(exe))
    print(f"Winspec process started with PID: {p.pid}")
    time.sleep(1.0)

    exp = win32com.client.Dispatch("WinX32.ExpSetup")
    print(f"SUCCESS: win32com.client.Dispatch('WinX32.ExpSetup') connected: {exp}")

    doc = win32com.client.Dispatch("WinX32.DocFile")
    print(f"SUCCESS: win32com.client.Dispatch('WinX32.DocFile') connected: {doc}")

    # Query temperature
    # EXP_ACTUAL_TEMP in WinSpec COM is 711 or 106
    for param_id in [106, 711, 105, 710]:
        try:
            val = exp.GetParam(param_id)
            print(f"  exp.GetParam({param_id}) = {val}")
        except Exception as e:
            print(f"  exp.GetParam({param_id}) error: {e}")

except Exception as ex:
    print(f"Launch/Dispatch error: {ex}")
