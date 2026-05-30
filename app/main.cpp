#include <windows.h>
#include <commctrl.h>
#include <cstring>

#include "gamemd/core/game_loop.hpp"

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                      LPSTR lpCmdLine, int nShowCmd)
{
    (void)nShowCmd;

    InitCommonControls();

    // Switch to the EXE's directory so MIX files and DLLs are found
    char exePath[MAX_PATH];
    if (GetModuleFileNameA(nullptr, exePath, sizeof(exePath))) {
        char* lastSep = strrchr(exePath, '\\');
        if (lastSep) { *lastSep = '\0'; SetCurrentDirectoryA(exePath); }
    }

    if (!gamemd::GameLoop_Init(hInstance, hPrevInstance, lpCmdLine, nShowCmd)) {
        MessageBoxA(nullptr, "Failed to initialize game.", "Error",
                    MB_OK | MB_ICONERROR);
        return 1;
    }

    gamemd::GameLoop_Run();
    gamemd::GameLoop_Shutdown();
    return 0;
}
