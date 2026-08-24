import subprocess
import os

print("--- Windows Services for Princeton Instruments ---")
try:
    ps_cmd = "Get-Service | Where-Object { $_.Name -match 'PI|Picam|Princeton|Roper' -or $_.DisplayName -match 'PI|Picam|Princeton|Roper' } | Format-Table Name, DisplayName, Status, StartType"
    out = subprocess.check_output(["powershell", "-NoProfile", "-Command", ps_cmd], text=True)
    print(out)
except Exception as ex:
    print(f"Service query error: {ex}")

print("\n--- Searching for Logs and Config Files ---")
log_roots = [
    r"C:\ProgramData\Princeton Instruments",
    r"C:\ProgramData\Roper Scientific",
    os.path.expandvars(r"%LOCALAPPDATA%\Princeton Instruments"),
    os.path.expandvars(r"%APPDATA%\Princeton Instruments"),
]

for lr in log_roots:
    if os.path.exists(lr):
        print(f"Directory: {lr}")
        for root, dirs, files in os.walk(lr):
            for f in files:
                p = os.path.join(root, f)
                print(f"  {p} ({os.path.getsize(p)} bytes)")
