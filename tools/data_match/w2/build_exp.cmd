@echo off
rem build_exp.cmd -- w2 layout experiments (E1-E4)
setlocal
set VC=D:\RA2YR_ReSource\.vc6-8447\BIN
set PATH=%VC%;C:\Windows\SysWOW64;C:\Windows;%PATH%
set LIB=D:\RA2YR_ReSource\.vc6-8447\LIB
cd /d %~dp0

%VC%\CL.EXE /nologo /c /O2 exp_layout.c
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /O2 exp_layout_rev.c
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /O2 exp_x1.c
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /O2 exp_x2.c
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /Zl exp_main.c
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /Zl exp_main2.c
if errorlevel 1 goto :err

rem E1/E2: same-obj decl order (fwd) vs reversed
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /out:exp1.exe exp_layout.obj exp_main.obj libcmt.lib
if errorlevel 1 goto :err
rem reversed declaration order
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /out:exp2.exe exp_layout_rev.obj exp_main.obj libcmt.lib
if errorlevel 1 goto :err
rem E4: cross-object, link order x1 x2
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /out:exp3.exe exp_x1.obj exp_x2.obj exp_main2.obj libcmt.lib
if errorlevel 1 goto :err
rem E4: cross-object, link order x2 x1
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /out:exp4.exe exp_x2.obj exp_x1.obj exp_main2.obj libcmt.lib
if errorlevel 1 goto :err
rem E5: padding probe
%VC%\CL.EXE /nologo /c /O2 exp_pad.c
if errorlevel 1 goto :err
%VC%\CL.EXE /nologo /c /Zl exp_main3.c
if errorlevel 1 goto :err
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /out:exp5.exe exp_pad.obj exp_main3.obj libcmt.lib
if errorlevel 1 goto :err
echo BUILD OK
goto :eof
:err
echo BUILD FAILED
exit /b 1
