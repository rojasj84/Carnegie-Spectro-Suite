import winreg
import os
import win32com.client

winspec_exe = os.path.abspath(r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Winspec.exe")
print(f"Winspec path: {winspec_exe} (Exists: {os.path.exists(winspec_exe)})")

entries = [
    ("WinX32.ExpSetup", "{1A762222-D8BA-11CF-AFC2-508201C10000}", "Princeton Instruments WinX/32 ExpSetup Object"),
    ("WinX32.DocFile", "{1A762223-D8BA-11CF-AFC2-508201C10000}", "Princeton Instruments WinX/32 DocFile Object"),
    ("WinX32.DocWindow", "{1A762224-D8BA-11CF-AFC2-508201C10000}", "Princeton Instruments WinX/32 DocWindow Object"),
    ("WinX32.Winx32App", "{1A762225-D8BA-11CF-AFC2-508201C10000}", "Princeton Instruments WinX/32 Application Object"),
]

for prog_id, clsid, desc in entries:
    # Set HKCU\Software\Classes\ProgID
    with winreg.CreateKey(winreg.HKEY_CURRENT_USER, rf"Software\Classes\{prog_id}") as k:
        winreg.SetValueEx(k, "", 0, winreg.REG_SZ, desc)
        with winreg.CreateKey(k, "CLSID") as sub_k:
            winreg.SetValueEx(sub_k, "", 0, winreg.REG_SZ, clsid)

    # Set HKCU\Software\Classes\CLSID\{GUID}
    with winreg.CreateKey(winreg.HKEY_CURRENT_USER, rf"Software\Classes\CLSID\{clsid}") as k:
        winreg.SetValueEx(k, "", 0, winreg.REG_SZ, desc)
        with winreg.CreateKey(k, "ProgID") as sub_k:
            winreg.SetValueEx(sub_k, "", 0, winreg.REG_SZ, prog_id)
        with winreg.CreateKey(k, "LocalServer32") as sub_k:
            winreg.SetValueEx(sub_k, "", 0, winreg.REG_SZ, winspec_exe)
        with winreg.CreateKey(k, "TypeLib") as sub_k:
            winreg.SetValueEx(sub_k, "", 0, winreg.REG_SZ, "{1A762221-D8BA-11CF-AFC2-508201C10000}")

# Set TypeLib
tlb_guid = "{1A762221-D8BA-11CF-AFC2-508201C10000}"
with winreg.CreateKey(winreg.HKEY_CURRENT_USER, rf"Software\Classes\TypeLib\{tlb_guid}\3.1") as k:
    winreg.SetValueEx(k, "", 0, winreg.REG_SZ, "Princeton Instruments' WinX/32 3.1 Type Library")
    with winreg.CreateKey(k, r"0\win32") as sub_k:
        winreg.SetValueEx(sub_k, "", 0, winreg.REG_SZ, winspec_exe)
    with winreg.CreateKey(k, "FLAGS") as sub_k:
        winreg.SetValueEx(sub_k, "", 0, winreg.REG_SZ, "0")

print("Successfully registered WinX32 COM classes in HKCU!")

# Test dispatch
try:
    exp = win32com.client.Dispatch("WinX32.ExpSetup")
    print("[SUCCESS] win32com.client.Dispatch('WinX32.ExpSetup') SUCCEEDED!")
    print("ExpSetup object:", exp)
except Exception as ex:
    print("[INFO] Dispatch test:", ex)
