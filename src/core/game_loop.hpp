#pragma once
#include <windows.h>

namespace gamemd {

extern HWND      g_hWnd;
extern HINSTANCE g_hInstance;

int  InitGame(bool no_cd);
bool SpawnModeEnter();
void MainGame();

bool GameLoopInit(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
void GameLoopRun();
void GameLoopShutdown();

int  GameLoopMessagePump(MSG* msg, UINT wMsgFilterMin, UINT wMsgFilterMax, HWND hWnd, UINT flags);
bool TranslateMessageDispatch(MSG* msg);
void AudioVideoUpdate();

// IDA 0x69BAB0 -- WTFMode (Westwood Technology Framework debug mode)
class WTFMode {
public:
    static bool Init(int* mode) { (void)mode; return false; }
    static bool Shutdown(int* mode) { (void)mode; return false; }
};

// IDA 0x532100 -- ScreenSaver
class ScreenSaver {
public:
    static void Process(bool enable) { (void)enable; }
};

} // namespace gamemd
