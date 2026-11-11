@echo off
setlocal
set VC=D:\RA2YR_ReSource\.vc6-8447\BIN
set PATH=%VC%;C:\Windows\SysWOW64;C:\Windows;%PATH%
set INCLUDE=D:\RA2YR_ReSource\.vc6-8447\INCLUDE
set LIB=D:\RA2YR_ReSource\.vc6-8447\LIB
cd /d %~dp0
%VC%\CL.EXE /nologo /c /O2 exp_gui.cpp
if errorlevel 1 goto :err
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /map:gui.map /out:gui.exe exp_gui.obj libcmt.lib
if errorlevel 1 goto :err
echo BUILD OK
goto :eof
:err
echo BUILD FAILED
exit /b 1
