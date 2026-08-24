@echo off
title Launching SpectroSuite with Physical Camera Access
cd /d "%~dp0"

echo ================================================================
echo  Launching SpectroSuite (Connecting to WinSpec & Horiba Hardware)...
echo ================================================================

powershell -Command "Start-Process python -ArgumentList 'main.py' -Verb RunAs"
