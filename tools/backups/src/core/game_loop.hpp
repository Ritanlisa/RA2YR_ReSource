#pragma once
#include <windows.h>

namespace gamemd {

extern HWND      g_hWnd;
extern HINSTANCE g_hInstance;

int  InitGame(bool no_cd);  // 0x52ba60
bool SpawnModeEnter();
void MainGame();  // 0x48ccc0

bool GameLoopInit(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
void GameLoopRun();
void GameLoopShutdown();

int  GameLoopMessagePump(MSG* msg, UINT wMsgFilterMin, UINT wMsgFilterMax, HWND hWnd, UINT flags);  // 0x53e770
bool TranslateMessageDispatch(MSG* msg);
void AudioVideoUpdate();

// IDA 0x69BAB0 -- WTFMode (Westwood Technology Framework debug mode)
class WTFMode {
public:
    static bool Init(int* mode);  // 0x69bab0
    static bool Shutdown(int* mode);  // 0x69bb40
};

// IDA 0x532100 -- ScreenSaver
class ScreenSaver {
public:
    static void Process(bool enable);  // 0x532100
};

} // namespace gamemd
