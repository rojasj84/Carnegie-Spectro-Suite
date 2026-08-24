import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
piscc = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "PISCC32.dll"))

# 1. Create USB Physical Port (Type 2 = USB)
p_port = pipp.PIPP_Create_physical_port(2)
print(f"1. USB Physical Port: 0x{p_port:08X}")

# 2. Create Communication Object
p_scc = ctypes.c_void_p(0)
fn_create = getattr(piscc, "PISCC_CreateCommunicationObject")
res_create = fn_create(p_port, ctypes.byref(p_scc))
h_hex = f"0x{p_scc.value:08X}" if p_scc.value else "0x0"
print(f"2. PISCC_CreateCommunicationObject -> res={res_create}, Handle={h_hex}")

if p_scc.value:
    # Test communication
    fn_comm = getattr(piscc, "PISCC_Communicate")
    # Send command string or query
    in_buf = ctypes.create_string_buffer(b"?TEMP\r\n")
    out_buf = ctypes.create_string_buffer(256)
    res_comm = fn_comm(p_scc, in_buf, out_buf)
    print(f"3. PISCC_Communicate -> res={res_comm}, Response: {out_buf.value}")
