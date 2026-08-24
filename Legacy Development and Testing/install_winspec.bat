@echo off
title WinSpec 64-bit Installation Launcher
cd /d "C:\Users\LabUserR129\Desktop\WinSpec32"

echo ================================================================
echo  Launching WinSpec Setup with MSI Condition Bypasses Enabled...
echo ================================================================

set PROCESSOR_ARCHITECTURE=x86
set PROCESSOR_ARCHITEW6432=
set PROCESSOR_IDENTIFIER=x86 Family 6 Model 15 Stepping 11, GenuineIntel
set __COMPAT_LAYER=WINXPSP3

start "" "C:\Users\LabUserR129\Desktop\WinSpec32\WinSpec32.exe" DONTCHECKMSICONDITIONS=1 /v"DONTCHECKMSICONDITIONS=1"
