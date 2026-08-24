@echo off
title WinSpec32 64-bit Native Windows Installer
cd /d "%~dp0"

echo ================================================================
echo  Installing WinSpec/32 on 64-bit Windows (Launch Conditions Removed)...
echo ================================================================

msiexec.exe /i "%~dp0WinSpec32_64bit.msi"
