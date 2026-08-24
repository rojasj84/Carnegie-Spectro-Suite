import ctypes
import os
import shutil

msi_src = r"C:\Program Files (x86)\Common Files\Wise Installation Wizard\WISD45BCDF9CCBB4ABCB55FBE7872964502_2_5_23_0.MSI"
msi_patched = os.path.abspath("WinSpec32_64bit.msi")

shutil.copy2(msi_src, msi_patched)
# Ensure not read-only
os.chmod(msi_patched, 0o777)
print(f"Copied to: {msi_patched} ({os.path.getsize(msi_patched)} bytes)")

msi = ctypes.windll.msi
MSIDBOPEN_TRANSACT = 1
MSIDBOPEN_DIRECT = 2

h_db = ctypes.c_void_p(0)
err = msi.MsiOpenDatabaseW(msi_patched, MSIDBOPEN_DIRECT, ctypes.byref(h_db))
print(f"MsiOpenDatabase result: {err}")

if err == 0 and h_db.value:
    for q in ["DELETE FROM `LaunchCondition`", "DROP TABLE `LaunchCondition`"]:
        h_view = ctypes.c_void_p(0)
        err_v = msi.MsiDatabaseOpenViewW(h_db, q, ctypes.byref(h_view))
        if err_v == 0 and h_view.value:
            err_ex = msi.MsiViewExecute(h_view, 0)
            print(f"Query '{q}': ViewErr={err_v}, ExecErr={err_ex}")
            msi.MsiViewClose(h_view)
            msi.MsiCloseHandle(h_view)
        else:
            print(f"Query '{q}': ViewErr={err_v}")

    err_commit = msi.MsiDatabaseCommit(h_db)
    print(f"MsiDatabaseCommit: {err_commit}")
    msi.MsiCloseHandle(h_db)
    print("\n[SUCCESS] Successfully removed 32-bit LaunchCondition from WinSpec32_64bit.msi!")
