"""
Inspect WinX32 Automation PDF Contents using PyPDF / pypdf / fitz
"""

import os

pdf_path = r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\WinX32_Automation_3X_for_Visual_Basic.pdf"
print(f"Checking if PDF exists at {pdf_path}: {os.path.exists(pdf_path)}")

if os.path.exists(pdf_path):
    print(f"File size: {os.path.getsize(pdf_path):,} bytes")
    
    # Try importing pdf reader libraries or extract text with python
    try:
        import pypdf
        reader = pypdf.PdfReader(pdf_path)
        print(f"Total pages: {len(reader.pages)}")
        # Print table of contents or outline if available
        outline = reader.outline
        print("Outline items:", len(outline) if outline else "No outline")
        # Print first few pages text summary
        for i in range(min(5, len(reader.pages))):
            txt = reader.pages[i].extract_text()
            print(f"\n--- Page {i+1} Sample ---")
            lines = [l.strip() for l in txt.splitlines() if l.strip()][:8]
            print("\n".join(lines))
    except Exception as e:
        print(f"pypdf error: {e}")
        try:
            import fitz # PyMuPDF
            doc = fitz.open(pdf_path)
            print(f"PyMuPDF pages: {len(doc)}")
            for i in range(min(5, len(doc))):
                print(f"Page {i+1}: {doc[i].get_text()[:200]}")
        except Exception as e2:
            print(f"fitz error: {e2}")
