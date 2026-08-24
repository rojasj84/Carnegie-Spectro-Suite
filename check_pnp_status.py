import subprocess

ps_script = """
Get-PnpDevice | Where-Object { $_.InstanceId -like '*0BD7*' } | Format-List FriendlyName, Status, Problem, ConfigManagerErrorCode, Present
"""
try:
    res = subprocess.check_output(["powershell", "-NoProfile", "-Command", ps_script], text=True)
    print(res)
except Exception as ex:
    print(f"Error: {ex}")
