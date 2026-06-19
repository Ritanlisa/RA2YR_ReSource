#pragma once
#include <windows.h>

namespace gamemd {

extern HWND      g_hWnd;
extern HINSTANCE g_hInstance;

int  InitGame(bool no_cd);  // 0x52BA60
bool SpawnModeEnter(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
void MainGame();  // 0x48CCC0

bool GameLoopInit(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd); // IDA: UNMATCHED — no_callgraph_match, no_git_history
void GameLoopRun();
void GameLoopShutdown();

int  GameLoopMessagePump(MSG* msg, UINT wMsgFilterMin, UINT wMsgFilterMax, HWND hWnd, UINT flags);  // 0x53E770
bool TranslateMessageDispatch(MSG* msg); // IDA: UNMATCHED — no_callgraph_match, no_git_history
void AudioVideoUpdate();

// IDA 0x69BAB0 -- WTFMode (Westwood Technology Framework debug mode)
class WTFMode {
public:
    static bool Init(int* mode);  // 0x69BAB0
    static bool Shutdown(int* mode);  // 0x69BB40
};

// IDA 0x532100 -- ScreenSaver
class ScreenSaver {
public:
    static void Process(bool enable);  // 0x532100
};

} // namespace gamemd
