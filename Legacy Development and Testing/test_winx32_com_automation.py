"""
Test WinX32 COM/ActiveX Automation Server Registration & Connection
"""

import subprocess
import os
import time

exe_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Winspec.exe"
print(f"Registering WinSpec COM server ({exe_path} /RegServer)...")

res = subprocess.run([exe_path, "/RegServer"], capture_output=True, text=True)
print(f"Registration return code: {res.returncode}")

time.sleep(0.5)

# Test creating WinX32 COM object via win32com
try:
    import win32com.client
    print("\nAttempting to connect to WinX32.Winx32App via COM...")
    winx_app = win32com.client.Dispatch("WinX32.Winx32App")
    print(">>> SUCCESS: Connected to WinX32.Winx32App COM Object! <<<")
    print(f"COM Object: {winx_app}")
    
    # Try querying documents / experiments
    try:
        exp = win32com.client.Dispatch("WinX32.ExpSetup")
        print(f"Connected to WinX32.ExpSetup: {exp}")
    except Exception as e:
        print(f"ExpSetup note: {e}")
        
except Exception as ex:
    print(f"COM dispatch result: {ex}")
