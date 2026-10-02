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
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/GameOptions_e4.hpp"

// 0x4E1D00
namespace gamemd {
void Main::CreateDialog()
{

  uint16_t v2; // cx
  HWND Dialog; // eax
  LONG i; // eax
  TechnoTypeClass *v5; // ecx
  int v6; // [esp+0h] [ebp-8h]
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x4e1d1d*/
  ((Debug *)this)->Log(); /*0x4e1d25*/
  v2 = 3003; /*0x4e1d3b*/
  if ( byte_A8E9A0 != 1 ) /*0x4e1d40*/
    v2 = 245; /*0x4e1d42*/
  Dialog = (HWND)CreateDialog(v2, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))GameOptionsDlgProc, 0); /*0x4e1d47*/
  this->Main_field_00 = (int)Dialog; /*0x4e1d4e*/
  if ( Dialog ) /*0x4e1d50*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x4e1d5a*/
    ((Dialog *)((Dialog *)this->Main_field_00))->Show(); /*0x4e1d62*/
    for ( i = dwNewLong; dwNewLong == -1; i = dwNewLong ) /*0x4e1d6e*/
    {
      if ( (uint8_t)((Dialog *)this)->PumpMessages() == 1 ) /*0x4e1d77*/
        dwNewLong = 2; /*0x4e1d79*/
      if ( !byte_A8E9A0 ) /*0x4e1d88*/
      {
        LOBYTE(v5) = 0; /*0x4e1d8a*/
        Process@<al>(v5, v6); /*0x4e1d8c*/
      }
    }
    if ( i == 1 ) /*0x4e1d9d*/
    {
      GameOptions::GameSpeedChanged((GameOptions *)this); /*0x4e1da1*/
      ((ScenarioClass *)((ScenarioClass *)&stru_A8EB00.ObjectTypeClass[24]))->SaveGameOptions(); /*0x4e1dab*/
    }
    Dialog::Destroy((Dialog *)this->Main_field_00); /*0x4e1db2*/
  }
  ((Debug *)this)->Log(); /*0x4e1dd0*/

}
} // namespace gamemd