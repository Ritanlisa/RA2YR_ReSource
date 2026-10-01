// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/Session_e4.hpp"

// 0x5EBEC0
namespace gamemd {
void SetupMultiplayerLobbyScreen_Setup(SkirmishDialog * hDlg, char * a2, int nIDDlgItem)
{
  char * v3;
  char * v4;
  int v6; // esi
  LRESULT v7; // eax
  wchar_t *v8; // eax
  int v10; // [esp+Ch] [ebp-Ch]
  char * v11;

  v3 = (char *)((int)(a2));
  v4 = a2 + nIDDlgItem; /*0x5ebed0*/
  v11 = a2 + nIDDlgItem; /*0x5ebedd*/
  if ( ((unsigned int *)(dword_A8B238))[0] == 4 ) /*0x5ebee1*/
  {
        if ( !((Network *)this)->IsMultiplayerActive() || ((Network *)this)->IsLobbyFeature() )
      v10 = 6; /*0x5ebeff*/
    else
      v10 = 2; /*0x5ebef5*/
  }
  else
  {
    v10 = 8; /*0x5ebf09*/
  }
  if ( v3 < v4 )
  {
    do
    {
      if ( v3 )
      {
        switch ( v3 )
        {
          case 1:
            v6 = 1042; /*0x5ebf30*/
            break;
          case 2:
            v6 = 1043; /*0x5ebf3c*/
            break;
          case 3:
            v6 = 1044; /*0x5ebf48*/
            break;
          case 4:
            v6 = 1045; /*0x5ebf54*/
            break;
          case 5:
            v6 = 1046; /*0x5ebf60*/
            break;
          case 6:
            v6 = 1047; /*0x5ebf6c*/
            break;
          default:
            v6 = v3 != (char *)(7) ? -1 : 1048;
            break;
        }
      }
      else
      {
        v6 = 1041; /*0x5ebf24*/
      }
      v7 = SendDlgItemMessageA(hDlg, v6, 0x147u, 0, 0); /*0x5ebf93*/
      v8 = (wchar_t *)SendDlgItemMessageA(hDlg, v6, 0x150u, v7, 0); /*0x5ebf9f*/
      if ( v8 == (wchar_t *)-1 /*0x5ebfcc*/
        || !v8
        || v8 == (wchar_t *)g_HouseClass_ObserverFlags
        || v8 == (wchar_t *)g_Lobby_PlayerCount
        || v8 == (wchar_t *)((wchar_t *))g_Lobby_MaxPlayers
        || v8 == g_Lobby_PlayerReady )
      {
        if ( v3 != (char *)(g_MPCooperativeState) ) /*0x5ebfd9*/
        {
          if ( v3 >= (char *)(v10) ) /*0x5ebfe3*/
            PlayerSkirmishSlotHandler(hDlg, v6, g_Lobby_PlayerCount, 0); /*0x5ebfed*/
          else
            PlayerSkirmishSlotHandler(hDlg, v6, g_HouseClass_ObserverFlags, 0); /*0x5ebfe6*/
        }
      }
      else
      {
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)v8, 0); /*0x5ebfd1*/
      }
      ++v3; /*0x5ebff6*/
    }
    while ( v3 < v11 );
    v3 = (char *)((int)(a2));
  }
  UpdateMultiplayerLobbySlots(hDlg, v3, nIDDlgItem); /*0x5ec00d*/
  RetVtableStubZero_eax_27(); /*0x5ec012*/
  return CheckGameSettingsChanged(1, 0); /*0x5ec020*/
}
}