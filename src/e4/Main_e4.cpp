// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Main_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MainMenu_e4.hpp"
#include "e4/classes/Cell_e4.hpp"

// 0x4E1D00
namespace gamemd {
void Main::CreateDialog()
{

  uint16_t v2; // cx
  HWND Dialog; // eax
  LONG i; // eax
  int v5; // ecx
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = (unsigned int)(-1);
  this->Debug::Log(); /*0x4e1d25*/
  v2 = 3003; /*0x4e1d3b*/
  if ( g_abs_A8E9A0 != (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1) ) /*0x4e1d40*/
    v2 = 245; /*0x4e1d42*/
  Dialog = (HWND)CreateDialog(v2, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))GameOptionsDlgProc, 0); /*0x4e1d47*/
  *(unsigned int *)this = Dialog; /*0x4e1d4e*/
  if ( Dialog ) /*0x4e1d50*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x4e1d5a*/
    Dialog::Show(*this); /*0x4e1d62*/
    for ( i = dwNewLong; dwNewLong == -1; i = dwNewLong ) /*0x4e1d6e*/
    {
      if ( this->Dialog::PumpMessages() == 1 ) /*0x4e1d77*/
        dwNewLong = 2; /*0x4e1d79*/
      if ( !g_abs_A8E9A0 ) /*0x4e1d88*/
      {
        IDA_LOBYTE(v5) = 0; /*0x4e1d8a*/
        ScreenSaver::Process(v5); /*0x4e1d8c*/
      }
    }
    if ( i == 1 ) /*0x4e1d9d*/
    {
      GameOptions::GameSpeedChanged(this); /*0x4e1da1*/
      ScenarioClass::SaveGameOptions((int)g_abs_A8EB60); /*0x4e1dab*/
    }
    Dialog::Destroy(*this); /*0x4e1db2*/
  }
  this->Debug::Log(); /*0x4e1dd0*/

}
} // namespace gamemd