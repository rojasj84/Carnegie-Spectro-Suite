import os

manifest_content = """<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">
  <assemblyIdentity version="2.5.23.0" processorArchitecture="X86" name="Winspec" type="win32"/>
  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">
    <security>
      <requestedPrivileges>
        <requestedExecutionLevel level="asInvoker" uiAccess="false"/>
      </requestedPrivileges>
    </security>
  </trustInfo>
</assembly>
"""

p = os.path.abspath(r"C:\Users\LabUserR129\Desktop\WinSpec32_Full\Winspec.exe.manifest")
with open(p, "w", encoding="utf-8") as f:
    f.write(manifest_content)

print(f"Successfully created external manifest: {p}")
