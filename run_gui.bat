@echo off
title Horiba HR460 / WinSpec32
echo Launching Horiba HR460 / WinSpec32 Control Suite...
python main.py
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo Application exited with an error.
    pause
)
