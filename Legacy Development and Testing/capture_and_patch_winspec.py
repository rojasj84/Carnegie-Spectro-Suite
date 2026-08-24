"""
Capture temporary MSI files from WinSpec installer and patch the 32-bit launch condition.
"""

import os
import time
import shutil
import ctypes

temp_root = os.environ.get("TEMP", r"C:\Users\LabUserR129\AppData\Local\Temp")
dest_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), "winspec_setup_files"))
os.makedirs(dest_dir, exist_ok=True)

print("=" * 60)
print(" WINSPEC 64-BIT MSI CAPTURE & PATCH TOOL")
print("=" * 60)
print(f"Monitoring temporary directory: {temp_root}")
print(f"Destination directory: {dest_dir}")
print("\n>>> Please launch 'WinSpec32.exe' from your Desktop NOW.")
print(">>> Leave the error dialog open on the screen while this script captures the files!\n")

before_dirs = set(os.listdir(temp_root))
captured_items = []

t0 = time.time()
msi_found = None

while time.time() - t0 < 90.0:
    try:
        current_dirs = set(os.listdir(temp_root))
        new_items = current_dirs - before_dirs
        for item_name in new_items:
            item_path = os.path.join(temp_root, item_name)
            if item_path not in captured_items:
                captured_items.append(item_path)
                print(f"[+] Detected new temp item: {item_name}")
                dest_path = os.path.join(dest_dir, item_name)
                try:
                    if os.path.isdir(item_path):
                        shutil.copytree(item_path, dest_path, dirs_exist_ok=True)
                    else:
                        shutil.copy2(item_path, dest_path)
                    print(f"    -> Successfully copied to: {dest_path}")
                except Exception as e:
                    print(f"    -> Copy error (still writing): {e}")

        # Check if an MSI was copied
        for root, dirs, files in os.walk(dest_dir):
            for f in files:
                if f.lower().endswith(".msi"):
                    msi_found = os.path.join(root, f)
                    break
            if msi_found:
                break

        if msi_found:
            print(f"\n[***] Found MSI file: {msi_found} ({os.path.getsize(msi_found)} bytes)")
            # Wait 2 seconds to make sure any associated CAB files finish copying
            time.sleep(2.0)
            break

    except Exception as ex:
        pass

    time.sleep(0.1)

if not msi_found:
    print("\n[-] Timeout: No MSI file was detected. Please try running the script and launching WinSpec32.exe again.")
    exit(1)

print("\n" + "=" * 60)
print(" PATCHING MSI LAUNCH CONDITIONS (REMOVING 32-BIT RESTRICTION)")
print("=" * 60)

# Patch MSI using Windows msi.dll
msi = ctypes.windll.msi
MSIDBOPEN_DIRECT = 2
MSIDBOPEN_TRANSACT = 1

h_db = ctypes.c_void_p(0)
err = msi.MsiOpenDatabaseW(msi_found, MSIDBOPEN_DIRECT, ctypes.byref(h_db))
if err != 0:
    print(f"[-] MsiOpenDatabase failed with error code: {err}")
    exit(1)

queries = [
    "DELETE FROM `LaunchCondition`",
    "DROP TABLE `LaunchCondition`",
]

for q in queries:
    h_view = ctypes.c_void_p(0)
    err_view = msi.MsiDatabaseOpenViewW(h_db, q, ctypes.byref(h_view))
    if err_view == 0 and h_view.value:
        err_exec = msi.MsiViewExecute(h_view, 0)
        msi.MsiViewClose(h_view)
        msi.MsiCloseHandle(h_view)
        print(f"[+] Executed query: '{q}' -> Result: {err_exec}")

err_commit = msi.MsiDatabaseCommit(h_db)
msi.MsiCloseHandle(h_db)
print(f"[+] Database committed successfully (Code: {err_commit})")

# Create simple batch installer
bat_path = os.path.join(os.path.dirname(dest_dir), "run_patched_winspec_installer.bat")
with open(bat_path, "w") as f:
    f.write(f'@echo off\ntitle Installing Patched WinSpec32 on 64-bit Windows\nmsiexec.exe /i "{msi_found}"\npause\n')

print(f"\n[***] SUCCESS! Patched installer ready at:")
print(f"      {bat_path}")
print(f"      MSI: {msi_found}")
