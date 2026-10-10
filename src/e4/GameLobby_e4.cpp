// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5EA180
namespace gamemd {  // G42.18 ns repair
char GameLobby_Setup(HWND hDlg, void * a2)
{
  int i; // esi
  int v4; // eax
  HWND DlgItem; // eax
  int v6; // eax
  HWND v7; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v4 = 1042; /*0x5ea1a9*/
          break;
        case 2:
          v4 = 1043; /*0x5ea1b5*/
          break;
        case 3:
          v4 = 1044; /*0x5ea1c1*/
          break;
        case 4:
          v4 = 1045; /*0x5ea1cd*/
          break;
        case 5:
          v4 = 1046; /*0x5ea1d9*/
          break;
        case 6:
          v4 = 1047; /*0x5ea1e5*/
          break;
        default:
          v4 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v4 = 1041; /*0x5ea19d*/
    }
    DlgItem = GetDlgItem(hDlg, v4); /*0x5ea201*/
    EnableWindow(DlgItem, 0); /*0x5ea206*/
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5ea20e*/
  }
  if ( a2 )
  {
    if ( a2 == (void *)1 )
    {
      v6 = 1042; /*0x5ea22d*/
    }
    else if ( a2 == (void *)2 )
    {
      v6 = 1043; /*0x5ea239*/
    }
    else if ( a2 == (void *)3 )
    {
      v6 = 1044; /*0x5ea245*/
    }
    else if ( a2 == (void *)4 )
    {
      v6 = 1045; /*0x5ea251*/
    }
    else if ( a2 == (void *)5 )
    {
      v6 = 1046; /*0x5ea25d*/
    }
    else if ( a2 == (void *)6 )
    {
      v6 = 1047; /*0x5ea269*/
    }
    else
    {
      v6 = a2 != (void *)7 ? -1 : 1048;
    }
  }
  else
  {
    v6 = 1041; /*0x5ea221*/
  }
  v7 = GetDlgItem(hDlg, v6); /*0x5ea285*/
  EnableWindow(v7, 1); /*0x5ea28a*/
  return SetupSkirmishPlayerSlots(hDlg, a2, (HWND)1); /*0x5ea297*/
}
}  // G42.18 ns repair