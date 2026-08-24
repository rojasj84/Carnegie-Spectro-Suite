"""
Extract Visual Basic Programming Examples from WinX32 Automation Manual
"""

import pypdf

pdf_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\WinX32_Automation_3X_for_Visual_Basic.pdf"
reader = pypdf.PdfReader(pdf_path)

print(f"Total Pages in Manual: {len(reader.pages)}")

# Extract pages 9 to 15 (Visual Basic Examples)
for p_num in range(8, 15):
    txt = reader.pages[p_num].extract_text()
    print(f"\n{'='*70}\n MANUAL PAGE {p_num + 1}\n{'='*70}")
    print(txt)
