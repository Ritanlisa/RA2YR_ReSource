@echo off
setlocal
set VC=D:\RA2YR_ReSource\.vc6-8447\BIN
set PATH=%VC%;C:\Windows\SysWOW64;C:\Windows;%PATH%
set INCLUDE=D:\RA2YR_ReSource\.vc6-8447\INCLUDE
set LIB=D:\RA2YR_ReSource\.vc6-8447\LIB
cd /d %~dp0
%VC%\CL.EXE /nologo /O2 exp_sizeof.cpp /link /subsystem:console /fixed /filealign:0x1000 libcmt.lib >nul
if errorlevel 1 exit /b 1
exp_sizeof.exe
