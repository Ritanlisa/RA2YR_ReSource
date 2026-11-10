@echo off
rem build_variants.cmd -- assemble/link the .idata test variants
rem usage: build_variants.cmd
setlocal
set VC=D:\RA2YR_ReSource\.vc6-8447\BIN
set PATH=%VC%;C:\Windows\SysWOW64;C:\Windows;%PATH%
set LIB=D:\RA2YR_ReSource\.vc6-8447\LIB
cd /d %~dp0

rem ---- common: main.obj ----
%VC%\CL.EXE /nologo /c /Zl main.c
if errorlevel 1 goto :err

rem ---- test2: all 371 refs in one object (single wave) ----
%VC%\ML.EXE /coff /c ref.asm
if errorlevel 1 goto :err
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /out:test2.exe ref.obj main.obj kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib winmm.lib wsock32.lib ddraw.lib dsound.lib version.lib comctl32.lib imm32.lib binkw32_h.lib libcmt.lib
if errorlevel 1 goto :err

rem ---- test3: wave1 in obj; wave2 in a static lib scanned after libcmt ----
%VC%\ML.EXE /coff /c ref1.asm
if errorlevel 1 goto :err
%VC%\ML.EXE /coff /c ref2.asm
if errorlevel 1 goto :err
if exist myref2.lib del myref2.lib
%VC%\LIB.EXE /NOLOGO /OUT:myref2.lib ref2.obj
if errorlevel 1 goto :err
%VC%\LINK.EXE /nologo /subsystem:windows /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /out:test3.exe ref1.obj main.obj kernel32.lib user32.lib gdi32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib winmm.lib wsock32.lib ddraw.lib dsound.lib version.lib comctl32.lib imm32.lib binkw32_h.lib libcmt.lib myref2.lib
if errorlevel 1 goto :err
if errorlevel 1 goto :err
echo BUILD OK
goto :eof
:err
echo BUILD FAILED
exit /b 1
