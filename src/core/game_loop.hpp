#pragma once
#include <windows.h>

namespace gamemd {

extern HWND      g_hWnd;
extern HINSTANCE g_hInstance;

int  InitGame(bool no_cd);  // 0x52BA60
// unmatched: no callgraph reference and no git history record
bool SpawnModeEnter();
void MainGame();  // 0x48CCC0

// unmatched: no callgraph reference and no git history record
bool GameLoopInit(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
void GameLoopRun();
void GameLoopShutdown();

int  GameLoopMessagePump(MSG* msg, UINT wMsgFilterMin, UINT wMsgFilterMax, HWND hWnd, UINT flags);  // 0x53E770
// unmatched: no callgraph reference and no git history record
bool TranslateMessageDispatch(MSG* msg);
void AudioVideoUpdate();

// IDA 0x69BAB0 -- WTFMode (Westwood Technology Framework debug mode)
class WTFMode {
public:
    static bool Init(int* mode);  // 0x69BAB0
    static bool Shutdown(int* mode);  // 0x69BB40
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int ResetUnitFlags();  // 0x41DB40
    void* FindObjectByType(int a1);  // 0x47EC40
    // --- gap2 auto-generated stub declarations (END) ---
};

// IDA 0x532100 -- ScreenSaver
class ScreenSaver {
public:
    static void Process(bool enable);  // 0x532100
};

} // namespace gamemd
