@echo off
title Horiba HR460 / Acton SP2150 & WinSpec32 Suite
setlocal

set "PYTHON_EXE=python"
where %PYTHON_EXE% >nul 2>nul
if %ERRORLEVEL% NEQ 0 (
    if exist "%LOCALAPPDATA%\Programs\Python\Python312\python.exe" (
        set "PYTHON_EXE=%LOCALAPPDATA%\Programs\Python\Python312\python.exe"
    )
)

echo Launching Spectrometer & Detector Control Suite using: %PYTHON_EXE%
"%PYTHON_EXE%" main.py %*
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo Application exited with an error code: %ERRORLEVEL%
    pause
)
endlocal

