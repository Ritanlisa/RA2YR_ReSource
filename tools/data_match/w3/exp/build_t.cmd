@echo off
setlocal
set VC=D:\RA2YR_ReSource\.vc6-8447\BIN
set PATH=%VC%;C:\Windows\SysWOW64;C:\Windows;%PATH%
set INCLUDE=D:\RA2YR_ReSource\.vc6-8447\INCLUDE
set LIB=D:\RA2YR_ReSource\.vc6-8447\LIB
cd /d %~dp0
%VC%\CL.EXE /nologo /c /O2 exp_t_a.cpp
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /O2 exp_t_b.cpp
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /O2 exp_t_c.cpp
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /O2 exp_t_main.cpp
if errorlevel 1 goto :err

%VC%\LINK.EXE /nologo /subsystem:console /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /map:t1.map /out:t1.exe exp_t_a.obj exp_t_b.obj exp_t_c.obj exp_t_main.obj libcmt.lib
if errorlevel 1 goto :err
%VC%\LINK.EXE /nologo /subsystem:console /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /map:t2.map /out:t2.exe exp_t_c.obj exp_t_b.obj exp_t_a.obj exp_t_main.obj libcmt.lib
if errorlevel 1 goto :err
%VC%\LINK.EXE /nologo /subsystem:console /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /map:t3.map /out:t3.exe exp_t_main.obj exp_t_a.obj exp_t_b.obj exp_t_c.obj libcmt.lib
if errorlevel 1 goto :err
echo BUILD OK
goto :eof
:err
echo BUILD FAILED
exit /b 1
