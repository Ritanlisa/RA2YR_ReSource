// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5E7160_e4.hpp"
#include "e4/classes/E4Recv_5E93F0_e4.hpp"
#include "e4/classes/E4Recv_5EE200_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_5D25D0_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/E4Recv_5D0240_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/E4Recv_5D2650_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/E4Recv_5DBEC0_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"

// 0x5E2820
namespace gamemd {
int DrawDialogText(LPARAM, wchar_t *a1, HWND hWnd, void * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2820.json)
}
}
// 0x5E2AC0
namespace gamemd {
void sub_5E2AC0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2AC0.json)
}
}
// 0x5E2CD0
namespace gamemd {
extern int AddMessageListPlayerMessage::ShowDialogConfirm(void *aP0 = 0, void *aP1 = 0, void *aP2 = 0, void *aP3 = 0)
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2CD0.json)
}
}
// 0x5E2EF0
namespace gamemd {
void SetDialogPlayerName(HWND hDlg, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2EF0.json)
}
}
// 0x5E3010
namespace gamemd {
AbstractClass * * InitSkirmishDialogControls(HWND hDlg, int a2)
{
  int v3; // eax
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  int v12; // [esp+Ch] [ebp-1Ch]
  LPARAM lParam; // [esp+10h] [ebp-18h]
  LPARAM v14; // [esp+14h] [ebp-14h]
  WPARAM wParam; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-Ch]
  unsigned int v17[2]; // [esp+20h] [ebp-8h] BYREF

  v14 = (LPARAM)((int)(g_abs_A8B270));
  lParam = (LPARAM)((int)(g_abs_A8B25C));
  v12 = (int)(g_abs_A8B268);
  if ( a2 ) /*0x5e303c*/
  {
    ((ComPtr *)(&wParam))->Constructor(); /*0x5e3047*/
    wParam = (WPARAM)(void*)&rc_ptr_WDTTerritory_vftable; /*0x5e3059*/
    if ( dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x5e3066*/
    {
      v3 = (unsigned int)(FindWDTTerritoryClass(v17, *(unsigned int *)dword_A8B240));
      ((ComPtr *)(&wParam))->Set(v3->q010); /*0x5e307f*/
      v17[0] = (unsigned int)((void*)&rc_ptr_WDTTerritory_vftable); /*0x5e3088*/
      ((ComPtr *)(v17))->Release(); /*0x5e308c*/
    }
    if ( v16 ) /*0x5e3097*/
    {
      DlgItem = GetDlgItem(hDlg, 1348); /*0x5e30ab*/
      EnableWindow(DlgItem, 0); /*0x5e30b4*/
      v5 = GetDlgItem(hDlg, 1748); /*0x5e30be*/
      EnableWindow(v5, 0); /*0x5e30c1*/
      if ( (*(unsigned int *)(v16 + 60) & 0x20000) == 0 ) /*0x5e30ce*/
      {
        v6 = GetDlgItem(hDlg, 1026); /*0x5e30d8*/
        EnableWindow(v6, 0); /*0x5e30db*/
      }
      if ( (IDA_BYTE1(*(unsigned int *)(v16 + 60)) & 0x80u) == 0 ) /*0x5e30e7*/
      {
        v7 = GetDlgItem(hDlg, 1359); /*0x5e30f1*/
        EnableWindow(v7, 0); /*0x5e30f4*/
      }
      if ( (*(unsigned int *)(v16 + 60) & 0x400) == 0 ) /*0x5e3100*/
      {
        v8 = GetDlgItem(hDlg, 1358); /*0x5e310a*/
        EnableWindow(v8, 0); /*0x5e310d*/
      }
      if ( (*(unsigned char *)(v16 + 60) & 0x20) == 0 ) /*0x5e3117*/
      {
        v9 = GetDlgItem(hDlg, 1000); /*0x5e3121*/
        EnableWindow(v9, 0); /*0x5e3124*/
      }
      if ( (*(unsigned int *)(v16 + 60) & 0x100) == 0 ) /*0x5e3130*/
      {
        v10 = GetDlgItem(hDlg, 1357); /*0x5e313a*/
        EnableWindow(v10, 0); /*0x5e313d*/
      }
    }
    SendDlgItemMessageA(hDlg, 1321, 0x406u, 1u, 393216); /*0x5e3151*/
    SendDlgItemMessageA( /*0x5e317d*/
      hDlg,
      1026,
      0x406u,
      1u,
      *((uint16_t *)dword_8871E0 + 2624) | (*((uint16_t *)dword_8871E0 + 2628) << 16));
    SendDlgItemMessageA(hDlg, 1026, 0x4ABu, 0, *((unsigned int *)dword_8871E0 + 1315)); /*0x5e3198*/
    SendDlgItemMessageA( /*0x5e31c4*/
      hDlg,
      1359,
      0x406u,
      1u,
      *((uint16_t *)dword_8871E0 + 2632) | (*((uint16_t *)dword_8871E0 + 2636) << 16));
    wParam = (WPARAM)(void*)&rc_ptr_WDTTerritory_vftable; /*0x5e31ca*/
    ((ComPtr *)(&wParam))->Release(); /*0x5e31d2*/
  }
  SendDlgItemMessageA(hDlg, 1321, 0x405u, 1u, 6 - v12); /*0x5e31f1*/
  SendDlgItemMessageA(hDlg, 1026, 0x405u, 1u, lParam); /*0x5e3205*/
  SendDlgItemMessageA(hDlg, 1359, 0x405u, 1u, v14); /*0x5e3219*/
  wParam = 0; /*0x5e3223*/
  v16 = 1; /*0x5e322b*/
  SendDlgItemMessageA(hDlg, 1358, 0xF1u, *(&wParam + (uint8_t)g_abs_A8B262), 0); /*0x5e3245*/
  SendDlgItemMessageA(hDlg, 1690, 0xF1u, *(&wParam + (uint8_t)g_abs_A8B263), 0); /*0x5e3261*/
  SendDlgItemMessageA(hDlg, 1693, 0xF1u, *(&wParam + (uint8_t)g_abs_A8B264), 0); /*0x5e327f*/
  SendDlgItemMessageA(hDlg, 1000, 0xF1u, *(&wParam + (uint8_t)dword_A8B320), 0); /*0x5e329f*/
  return (gamemd::AbstractClass **)(SendDlgItemMessageA(hDlg, 1357, 0xF1u, *(&wParam + (uint8_t)g_abs_A8B261), 0)); /*0x5e32bd*/
}
}
// 0x5E32D0
namespace gamemd {
char Game_CheckSettingsChanged(char a1, char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E32D0.json)
}
}
// 0x5E39C0
namespace gamemd {
ObjectClass * * ValidateNetworkLobbyHostMap(void * a1, void * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5E39C0)
}
}
// 0x5E3AB0
namespace gamemd {
int SendMultiplayerStartSignal()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E3AB0.json)
}
}
// 0x5E3D10
namespace gamemd {
void SetupNetworkLobbyDialog(INIClass * Source, void * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E3D10.json)
}

} // namespace gamemd

// 0x5E5F10
namespace gamemd {
AbstractClass * * RehashGenericHashMap(HWND hWnd, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5E5F10)
}
}
// 0x5E6230
namespace gamemd {
void ProcessComboBoxAddString(HWND hWnd, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E6230.json)
}
}
// 0x5E6520
namespace gamemd {
AbstractClass * * Map_ReadPlayerCount(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5E6520)
}
}
// 0x5E66F0
namespace gamemd {
char sub_5E66F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E66F0.json)
}
}
// 0x5E7160
namespace gamemd {
SkirmishDialog * * SkirmishDialog::HandleMultiplayerMapSelection()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E7160.json)
}
}
// 0x5E7920
namespace gamemd {
void ExchangeMultiplayerGameInfo()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E7920.json)
}
}
// 0x5E7BF0
namespace gamemd {
char LoadScenarioClassByIndex(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E7BF0.json)
}
}
// 0x5E87A0
namespace gamemd {
HashTable_flat * * LoadNetworkShareStrings()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5E87A0)
}
}
// 0x5E9B20
namespace gamemd {
void GetComboBoxSelectedDefault(SkirmishDialog * aP0, int nIDDlgItem, WPARAM wParam)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9B20.json)
}
}
// 0x5E9C00
namespace gamemd {
void Player_AssignColor(HWND hDlg, void * nIDDlgItem)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9C00.json)
}
}
// 0x5E9CE0
namespace gamemd {
void Player_AssignSide(HWND hDlg, int nIDDlgItem)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9CE0.json)
}
}
// 0x5E9DB0
namespace gamemd {
void ProcessNetworkLobbyOption(SessionClass * hDlg, void * nIDDlgItem)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9DB0.json)
}
}
// 0x5E9E70
namespace gamemd {
void SetupSkirmishPlayerSlots(SkirmishDialog * hDlg, int a2, HWND hWnd)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9E70.json)
}
}
// 0x5EA0D0
namespace gamemd {
char sub_5EA0D0(HWND hDlg, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EA0D0.json)
}
}
// 0x5EA3E0
namespace gamemd {
void RefreshLobbyAll(HWND hDlg, char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EA3E0.json)
}
}
// 0x5EA920
namespace gamemd {
int sub_5EA920(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EA920.json)
}
}
// 0x5EB7B0
namespace gamemd {
int UpdateMultiplayerLobbySlots(HWND hDlg, ObjectClass *a2, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EB7B0.json)
}
}
// 0x5EBC00
namespace gamemd {
void DisableCampaignSlots(HWND hDlg, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EBC00.json)
}
}
// 0x5EC290
namespace gamemd {
char sub_5EC290(SkirmishDialog * hDlg, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EC290.json)
}
}
// 0x5EC3A0
namespace gamemd {
void SetupMultiplayerLobbyScreen(SkirmishDialog * hDlg, wchar_t * a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EC3A0.json)
}
}
// 0x5EC9F0
namespace gamemd {
AbstractClass * * PlayerSkirmishSlotHandler()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5EC9F0)
}
}
// 0x5ED270
namespace gamemd {
char sub_5ED270(SkirmishDialog * hDlg, int nIDDlgItem, LPARAM)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005ED270.json)
}
}
// 0x5ED400
namespace gamemd {
AbstractClass * * SaveMultiplayerLobbySettings(ReferenceCounted * hDlg, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5ED400)
}
}
// 0x5ED5A0
namespace gamemd {
int SetupMultiplayerLobbyPlayers(HWND hDlg, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005ED5A0.json)
}
}
// 0x5EDDE0
namespace gamemd {
void EnablePlayerSlotControls(HWND hDlg, bool a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EDDE0.json)
}
}
// 0x5EE510
namespace gamemd {
int Lobby_RefreshPlayerSlots(unsigned int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EE510.json)
}
}
// 0x5EE6F0
namespace gamemd {
unsigned int * AssignRandomMapStartPositions(MouseClass * aP0, IUnknown * aP1, int a3, int a4, char a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5EE6F0)
}
}
// 0x5E2410
namespace gamemd {
int sub_5E2410()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2410.json)
}
} // namespace gamemd

// 0x5E2430
namespace gamemd {
void sub_5E2430()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2430.json)
}
} // namespace gamemd

// 0x5E2460
namespace gamemd {
void sub_5E2460()
{
  dbl_AC1160 = dbl_AC0CE8 / 60.0; /*0x5e246c*/
}
} // namespace gamemd

// 0x5E2480
namespace gamemd {
void sub_5E2480()
{
  dbl_AC10E8 = 1.0 / dbl_AC1160; /*0x5e248c*/
}
} // namespace gamemd

// 0x5E24A0
namespace gamemd {
void sub_5E24A0()
{
  dbl_AC10D8 = 0.0174532925199433 * 45.0; /*0x5e24ac*/
}
} // namespace gamemd

// 0x5E24C0
namespace gamemd {
void sub_5E24C0()
{
  dbl_AC0D28 = 0.0174532925199433 * 60.0; /*0x5e24cc*/
}
} // namespace gamemd

// 0x5E24E0
namespace gamemd {
void sub_5E24E0()
{
  dbl_AC0AC0 = 0.0174532925199433 * 90.0; /*0x5e24ec*/
}
} // namespace gamemd

// 0x5E2500
namespace gamemd {
long long sub_5E2500()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC0AC0 - dbl_AC0D28); /*0x5e2512*/
  result = Math::RoundToInt(v0 * dbl_AC0CE8 * 0.5); /*0x5e2526*/
  dword_AC1168 = result; /*0x5e252b*/
  return result; /*0x5e2530*/
}
} // namespace gamemd

// 0x5E2540
namespace gamemd {
void sub_5E2540()
{
  dbl_AC0D38 = Math::ArcTan((double)dword_AC1168 * 0.00390625); /*0x5e2557*/
}
} // namespace gamemd

// 0x5E2570
namespace gamemd {
void sub_5E2570()
{
  dbl_AC10D0 = Math::ArcTan((double)(2 * dword_AC1168) / dbl_AC0CE8); /*0x5e2592*/
}
} // namespace gamemd

// 0x5E25A0
namespace gamemd {
long long sub_5E25A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1168) + 0.5); /*0x5e25bb*/
  dword_AC1158 = result; /*0x5e25c0*/
  return result; /*0x5e25c6*/
}
} // namespace gamemd

// 0x5E25D0
namespace gamemd {
int sub_5E25D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E25D0.json)
}
} // namespace gamemd

// 0x5E25E0
namespace gamemd {
int sub_5E25E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E25E0.json)
}
} // namespace gamemd

// 0x5E2600
namespace gamemd {
int sub_5E2600()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2600.json)
}
} // namespace gamemd

// 0x5E2E40
namespace gamemd {
INT_PTR sub_5E2E40(HWND hWnd, UINT, WPARAM, char * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2E40.json)
}
} // namespace gamemd

// 0x5E35A0
namespace gamemd {
char sub_5E35A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E35A0.json)
}
} // namespace gamemd

// 0x5E9AA0
namespace gamemd {
bool sub_5E9AA0(HWND hDlg, int nIDDlgItem, int a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9AA0.json)
}
} // namespace gamemd

// 0x5E9B60
namespace gamemd {
int Lobby_SelectCountry(HWND a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9B60.json)
}
} // namespace gamemd

// 0x5EDD00
namespace gamemd {
wchar_t ** ReadChatMessage(wchar_t ** a1, HWND a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5EDD00)
}
} // namespace gamemd

// 0x5EDEF0
namespace gamemd {
char ** Player_GetTypeString(char ** a1, wchar_t * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5EDEF0)
}
} // namespace gamemd

// 0x5EE200
namespace gamemd {
void UpdateObserveButtonWOL(HWND hDlg)
{
    (void)hDlg;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EE200.json)
}
} // namespace gamemd

// 0x5EF270
namespace gamemd {
int sub_5EF270()
{
  return 24; /*0x5ef275*/
}
} // namespace gamemd

// 0x5EF2D0
namespace gamemd {
int sub_5EF2D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF2D0.json)
}
} // namespace gamemd

// 0x5EF2F0
namespace gamemd {
void sub_5EF2F0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF2F0.json)
}
} // namespace gamemd

// 0x5EF320
namespace gamemd {
void sub_5EF320()
{
  dbl_AC1260 = dbl_AC1210 / 60.0; /*0x5ef32c*/
}
} // namespace gamemd

// 0x5EF340
namespace gamemd {
void sub_5EF340()
{
  dbl_AC1248 = 1.0 / dbl_AC1260; /*0x5ef34c*/
}
} // namespace gamemd

// 0x5EF360
namespace gamemd {
void sub_5EF360()
{
  dbl_AC1240 = 0.0174532925199433 * 45.0; /*0x5ef36c*/
}
} // namespace gamemd

// 0x5EF380
namespace gamemd {
void sub_5EF380()
{
  dbl_AC1218 = 0.0174532925199433 * 60.0; /*0x5ef38c*/
}
} // namespace gamemd

// 0x5EF3A0
namespace gamemd {
void sub_5EF3A0()
{
  dbl_AC11D0 = 0.0174532925199433 * 90.0; /*0x5ef3ac*/
}
} // namespace gamemd

// 0x5EF3C0
namespace gamemd {
long long sub_5EF3C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC11D0 - dbl_AC1218); /*0x5ef3d2*/
  result = Math::RoundToInt(v0 * dbl_AC1210 * 0.5); /*0x5ef3e6*/
  dword_AC1268 = result; /*0x5ef3eb*/
  return result; /*0x5ef3f0*/
}
} // namespace gamemd

// 0x5EF400
namespace gamemd {
void sub_5EF400()
{
  dbl_AC1220 = Math::ArcTan((double)dword_AC1268 * 0.00390625); /*0x5ef417*/
}
} // namespace gamemd

// 0x5EF430
namespace gamemd {
void sub_5EF430()
{
  dbl_AC1238 = Math::ArcTan((double)(2 * dword_AC1268) / dbl_AC1210); /*0x5ef452*/
}
} // namespace gamemd

// 0x5EF460
namespace gamemd {
long long sub_5EF460()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1268) + 0.5); /*0x5ef47b*/
  dword_AC125C = result; /*0x5ef480*/
  return result; /*0x5ef486*/
}
} // namespace gamemd

// 0x5EF490
namespace gamemd {
int sub_5EF490()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF490.json)
}
} // namespace gamemd

// 0x5EF4A0
namespace gamemd {
int sub_5EF4A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF4A0.json)
}
} // namespace gamemd

// 0x5EF4C0
namespace gamemd {
int sub_5EF4C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF4C0.json)
}
} // namespace gamemd

// 0x5EFF00
namespace gamemd {
int sub_5EFF00(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EFF00.json)
}
} // namespace gamemd
