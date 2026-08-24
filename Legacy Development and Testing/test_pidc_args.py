import ctypes
import os

dll_dir = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full"
os.chdir(dll_dir)

pipp = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "Pipp32.dll"))
pidc = ctypes.windll.LoadLibrary(os.path.join(dll_dir, "pidc32.dll"))

fn_create = getattr(pidc, "_PIDC_Create_datacollect_object@8")
p_port = pipp.PIPP_Create_physical_port(2)

# Try different combinations of 2 arguments
p_dc = ctypes.c_void_p(0)

# Combination A: (port, &p_dc)
res_a = fn_create(p_port, ctypes.byref(p_dc))
print(f"Comb A (port, &p_dc) -> res={res_a}, p_dc={p_dc.value}")

# Combination B: (&p_dc, 0)
p_dc2 = ctypes.c_void_p(0)
res_b = fn_create(ctypes.byref(p_dc2), 0)
print(f"Comb B (&p_dc, 0) -> res={res_b}, p_dc={p_dc2.value}")

# Combination C: (&p_dc, port)
p_dc3 = ctypes.c_void_p(0)
res_c = fn_create(ctypes.byref(p_dc3), p_port)
print(f"Comb C (&p_dc, port) -> res={res_c}, p_dc={p_dc3.value}")
