"""
Search WinX32 Automation PDF for Camera / CCD Connection & Hardware Setup Classes
"""

import pypdf

pdf_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\WinX32_Automation_3X_for_Visual_Basic.pdf"
reader = pypdf.PdfReader(pdf_path)

keywords = ["HWSetup", "HardwareSetup", "Camera", "Detector", "Initialize", "Connect", "Port", "Interface", "Temperature", "Cooling", "ST133", "ST-133", "Controller"]

matches = []
for p_idx, page in enumerate(reader.pages):
    txt = page.extract_text()
    found_kw = [kw for kw in keywords if kw.lower() in txt.lower()]
    if found_kw:
        matches.append((p_idx + 1, found_kw, txt))

print(f"Total Pages with Camera/Hardware keywords: {len(matches)}")
for p_num, found_kw, txt in matches[:15]:
    print(f"\n{'='*70}\n PAGE {p_num}: Keywords {found_kw}\n{'='*70}")
    lines = [l.strip() for l in txt.splitlines() if l.strip()]
    for line in lines[:15]:
        print(" ", line)
