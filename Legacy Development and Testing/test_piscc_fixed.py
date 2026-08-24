import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
piscc = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "PISCC32.dll"))

fn_port = pipp.PIPP_Create_physical_port
fn_port.restype = ctypes.c_void_p
p_port = fn_port(2)
print(f"1. USB Physical Port: 0x{p_port:08X}")

fn_create = getattr(piscc, "PISCC_CreateCommunicationObject")
fn_create.restype = ctypes.c_void_p
p_scc = fn_create(p_port)
print(f"2. PISCC Communication Object: 0x{p_scc:08X}")

if p_scc:
    fn_comm = getattr(piscc, "PISCC_Communicate")
    # PISCC_Communicate(void* p_scc, char* cmd, char* resp, int resp_len)
    in_cmd = b"TEMP?\r\n"
    out_buf = ctypes.create_string_buffer(256)
    
    try:
        res = fn_comm(p_scc, in_cmd, out_buf, 256)
        print(f"3. PISCC_Communicate('TEMP?') -> res={res}, Resp: {out_buf.value}")
    except Exception as e:
        print(f"3. PISCC_Communicate error: {e}")
        
    fn_input = getattr(piscc, "SCC_Input", None)
    if fn_input:
        try:
            val = fn_input(p_scc, 0)
            print(f"4. SCC_Input(0) -> {val}")
        except Exception as e:
            print(f"4. SCC_Input error: {e}")
