// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x4E1D00
void Main::CreateDialog()
{
{
    unsigned short v2;
    HWND Dialog;
    LONG i;
    int v5;
    LONG dwNewLong;
    dwNewLong = -1;
    Debug::Log();
    v2 = 3003;
    if ( g_WTFMode != 1 )
    v2 = 245;
    Dialog = (HWND)CreateDialog(v2, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameOptionsDlgProc, 0);
    *(void**)this = Dialog;
    if ( Dialog )
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong);
    Dialog::Show(*(void**)this);
    for ( i = dwNewLong; dwNewLong == -1; i = dwNewLong )
    {
    if ( Dialog::PumpMessages() == 1 )
    dwNewLong = 2;
    if ( !g_WTFMode )
      {
    LOBYTE(v5) = 0;
    ScreenSaver::Process(v5);
      }
    }
    if ( i == 1 )
    {
    GameOptions::GameSpeedChanged(this);
    ScenarioClass::SaveGameOptions((int)g_GameModeOptions);
    }
    Dialog::Destroy(*(void**)this);
  }
    Debug::Log();
}
}
