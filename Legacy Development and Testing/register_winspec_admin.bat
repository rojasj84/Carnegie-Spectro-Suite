@echo off
title Registering WinSpec32 COM Server
cd /d "C:\Users\LabUserR129\Desktop\WinSpec32_Full"

echo ================================================================
echo  Registering WinSpec32 COM & ActiveX Automation Components...
echo ================================================================

start "" /wait "C:\Users\LabUserR129\Desktop\WinSpec32_Full\Winspec.exe" /RegServer

for %%f in ("C:\Users\LabUserR129\Desktop\WinSpec32_Full\*.dll") do (
    regsvr32.exe /s "%%~ff"
)

for %%f in ("C:\Users\LabUserR129\Desktop\WinSpec32_Full\*.ocx") do (
    regsvr32.exe /s "%%~ff"
)

echo.
echo ================================================================
echo  WinSpec COM Registration Complete!
echo ================================================================
pause
