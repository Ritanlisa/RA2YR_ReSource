@echo off
rem build_w2.cmd -- w2 master table build
setlocal
set VC=D:\RA2YR_ReSource\.vc6-8447\BIN
set PATH=%VC%;C:\Windows\SysWOW64;C:\Windows;%PATH%
set LIB=D:\RA2YR_ReSource\.vc6-8447\LIB
cd /d %~dp0

%VC%\CL.EXE /nologo /c /O2 tables_w2.c
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /Zl w2_main.c
if errorlevel 1 goto :err
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /out:w2.exe tables_w2.obj w2_main.obj libcmt.lib
if errorlevel 1 goto :err
echo BUILD OK
goto :eof
:err
echo BUILD FAILED
exit /b 1
