import pypdf

pdf_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\WinX32_Automation_3X_for_Visual_Basic.pdf"
reader = pypdf.PdfReader(pdf_path)

print(f"Scanning all {len(reader.pages)} pages for Hardware Setup / Controller initialization...")

for p_idx, page in enumerate(reader.pages):
    txt = page.extract_text()
    if any(k in txt for k in ["Setup -> Hardware", "Hardware Setup", "EXP_CONTROLLER", "EXP_DETECTOR", "EXP_INTERFACE", "EXP_TEMP", "EXP_COOLING"]):
        print(f"\n--- PAGE {p_idx + 1} ---")
        for line in txt.splitlines():
            if any(k in line for k in ["Setup", "Hardware", "Controller", "Detector", "Interface", "Temp", "Cooling", "EXP_"]):
                print(" ", line.strip())
