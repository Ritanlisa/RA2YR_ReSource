#pragma once
#include <windows.h>

namespace gamemd {

extern HWND      g_hWnd;
extern HINSTANCE g_hInstance;

bool InitGame(bool no_cd);
bool SpawnMode_Enter();
void Main_Game();

bool GameLoop_Init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
void GameLoop_Run();
void GameLoop_Shutdown();

int  GameLoop_MessagePump(MSG* msg, UINT wMsgFilterMin, UINT wMsgFilterMax, HWND hWnd, UINT flags);
bool TranslateMessage_Dispatch(MSG* msg);
void AudioVideo_Update();

} // namespace gamemd
