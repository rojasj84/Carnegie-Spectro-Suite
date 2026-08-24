import winreg
import subprocess

ps = """
Get-PnpDeviceProperty -InstanceId "USB\\VID_0BD7&PID_A010\\5&1487294B&0&5" | Select-Object KeyName, Type, Data | Format-Table -AutoSize
"""
try:
    res = subprocess.check_output(["powershell", "-NoProfile", "-Command", ps], text=True)
    print(res)
except Exception as ex:
    print(f"Error: {ex}")
