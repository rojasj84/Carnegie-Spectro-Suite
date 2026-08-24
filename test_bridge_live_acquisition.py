import ctypes
import os
import sys

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))

# Create USB Port (Port 2 = USB)
print("Creating USB Physical Port...")
p_port = pipp.PIPP_Create_physical_port(2)
print(f"USB Port Object: 0x{p_port:08X}")

if p_port:
    print("SUCCESS: USB Physical Port initialized!")
    # Test PIPP_Diagnose_Interface or query port
    try:
        # Diagnose interface 2 (USB)
        diag = pipp.PIPP_Diagnose_Interface(2)
        print(f"PIPP_Diagnose_Interface(2) -> {diag}")
    except Exception as e:
        print(f"Diagnose error: {e}")

# Check Controller Manager
cm = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "contrman.dll"))
cm.Create_controllermanager_export()
p_ctrl = cm.Create_controller_export(1) # ST-133
print(f"ST-133 Controller Handle: 0x{p_ctrl:08X}")
