@echo off
setlocal
set VC=D:\RA2YR_ReSource\.vc6-8447\BIN
set PATH=%VC%;C:\Windows\SysWOW64;C:\Windows;%PATH%
set INCLUDE=D:\RA2YR_ReSource\.vc6-8447\INCLUDE
set LIB=D:\RA2YR_ReSource\.vc6-8447\LIB
cd /d %~dp0
%VC%\CL.EXE /nologo /c /O2 exp_main6.cpp
if errorlevel 1 goto :err
%VC%\LINK.EXE /nologo /subsystem:console /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /map:exp6.map /out:exp6.exe exp_bss6.obj exp_main6.obj libcmt.lib
if errorlevel 1 goto :err
echo BUILD OK
goto :eof
:err
echo BUILD FAILED
exit /b 1
