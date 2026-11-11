@echo off
setlocal
set VC=D:\RA2YR_ReSource\.vc6-8447\BIN
set PATH=%VC%;C:\Windows\SysWOW64;C:\Windows;%PATH%
set INCLUDE=D:\RA2YR_ReSource\.vc6-8447\INCLUDE
set LIB=D:\RA2YR_ReSource\.vc6-8447\LIB
cd /d %~dp0

%VC%\CL.EXE /nologo /c /O2 exp_abc.cpp
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /O2 exp_main.cpp
if errorlevel 1 goto :err

rem E1: natural order abc + main
%VC%\LINK.EXE /nologo /subsystem:console /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /map:exp1.map /out:exp1.exe exp_abc.obj exp_main.obj libcmt.lib
if errorlevel 1 goto :err

rem E2: main first (link order swap)
%VC%\LINK.EXE /nologo /subsystem:console /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /map:exp2.map /out:exp2.exe exp_main.obj exp_abc.obj libcmt.lib
if errorlevel 1 goto :err

echo BUILD OK
goto :eof
:err
echo BUILD FAILED
exit /b 1
