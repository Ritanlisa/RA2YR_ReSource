@echo off
set SHADOW_HEADLESS=1
set SHADOW_PORT=25400
cd /d D:\RA2MD
echo Starting gamemd.exe headless...
start "" Syringe.exe "gamemd.exe" -cd -speedcontrol
echo Waiting 20s for game to start and server to be ready...
timeout /t 20 /nobreak >nul
cd /d D:\RA2YR_ReSource\injectFunctionTest
echo Running test client...
python test_client.py --port 25400 --quit
pause
