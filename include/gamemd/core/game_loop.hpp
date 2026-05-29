#pragma once

namespace gamemd {

bool GameLoop_Init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
void GameLoop_Run();
void GameLoop_Shutdown();

} // namespace gamemd
