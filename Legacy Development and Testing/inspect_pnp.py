import subprocess

ps = "Get-PnpDevice | Where-Object { $_.InstanceId -like '*0BD7*' } | Select-Object InstanceId, Class, ClassGuid, FriendlyName, Status, Problem, Present | Format-List"

res = subprocess.check_output(["powershell", "-NoProfile", "-Command", ps], text=True)
print(res)
