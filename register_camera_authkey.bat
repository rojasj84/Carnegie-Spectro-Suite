@echo off
title Registering Princeton Instruments ST-133 USB Hardware Authorization
echo ================================================================
echo  Registering ST-133 / PI-MTE Hardware Auth Key for PIUSB64 Driver...
echo ================================================================

reg add "HKLM\SYSTEM\CurrentControlSet\Services\PIUSB64\Vid_0bd7&Pid_A010" /v "AuthKey" /t REG_SZ /d "c64c5d38770c864f" /f
reg add "HKLM\SYSTEM\CurrentControlSet\Services\PIUSB64\Vid_0bd7&Pid_A010" /v "MaxTransfer" /t REG_DWORD /d 3604480 /f
reg add "HKLM\SYSTEM\CurrentControlSet\Services\PIUSB64\Vid_0bd7&Pid_A010" /v "RenumOnHibernate" /t REG_DWORD /d 0 /f

reg add "HKLM\SYSTEM\CurrentControlSet\Services\PIUSB64\Vid_0bd7&Pid_A026" /v "AuthKey" /t REG_SZ /d "da651abf103b2661" /f
reg add "HKLM\SYSTEM\CurrentControlSet\Services\PIUSB64\Vid_0bd7&Pid_A026" /v "MaxTransfer" /t REG_DWORD /d 3424256 /f
reg add "HKLM\SYSTEM\CurrentControlSet\Services\PIUSB64\Vid_0bd7&Pid_A026" /v "RenumOnHibernate" /t REG_DWORD /d 0 /f

echo.
echo ================================================================
echo  SUCCESS: Hardware Auth Keys applied!
echo ================================================================
pause
