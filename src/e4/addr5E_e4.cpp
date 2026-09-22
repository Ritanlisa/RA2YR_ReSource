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

// 0x5E2820
namespace gamemd {
void DrawDialogText(ObjectClass * aP0, const wchar_t * a1, HWND hWnd)
{
{
  BlowStraw *i; // esi
  HWND v4; // ebx
  wchar_t *v6; // eax
  AbstractClass *v8; // ebx
  wint_t *v11; // ebp
  AbstractClass *v14; // [esp+14h] [ebp-24h]
  HDC hDC; // [esp+1Ch] [ebp-1Ch]
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  i = (BlowStraw *)a1; /*0x5e2826*/
  v4 = hWnd; /*0x5e2833*/
  signed int v5 = wcslen(a1); /*0x5e2840*/
  int v13 = 18; /*0x5e2842*/
  ScreenDialogToClient(hWnd, &Rect); /*0x5e284a*/
  if ( SendMessageA(hWnd, 0x4A0u, 0, 0) ) /*0x5e285f*/
    v13 = 1; /*0x5e2865*/
  hDC = GetDC(hWnd); /*0x5e287d*/
  SendMessageA(hWnd, 0x49Eu, 0, (LPARAM)hDC); /*0x5e2881*/
  if ( v5 ) /*0x5e2885*/
  {
    do /*0x5e2980*/
    {
      if ( i ) /*0x5e288d*/
      {
        v6 = wcschr(i, (CCINIClass *)0xA); /*0x5e2892*/
        if ( v6 ) /*0x5e289c*/
        {
          int v7 = (((char *)v6 - (char *)i) >> 1) + 1; /*0x5e28a2*/
          if ( v5 >= v7 ) /*0x5e28a5*/
            v5 = v7; /*0x5e28a7*/
        }
      }
      v8 = _wcsdup((CampaignScore *)i); /*0x5e28b2*/
      v8[v5] = 0; /*0x5e28c2*/
  int v18; // [esp+24h] [ebp-14h] BYREF
  int v17; // [esp+20h] [ebp-18h] BYREF
      Text::Layout(::aP0, v8, (AbstractClass *)&v17, (AbstractClass *)&v18, 0); /*0x5e28d0*/
      free(v8); /*0x5e28d6*/
      int v9 = Rect.right - Rect.left - v13; /*0x5e28e9*/
      if ( v17 < v9 - 4 ) /*0x5e28f7*/
      {
        UI_Draw(hWnd, (wchar_t *)i, v5, (LPARAM)aP0); /*0x5e295d*/
        for ( i = (BlowStraw *)((char *)i + 2 * v5); *(_WORD *)i->__pad_0 == 32; i = (BlowStraw *)((char *)i + 2) ) /*0x5e2968*/
          ; /*0x5e296a*/
        v5 = wcslen((const wchar_t *)i); /*0x5e297c*/
      }
      else
      {
        if ( v17 / 2 <= v9 ) /*0x5e2900*/
        {
          v14 = (AbstractClass *)1; /*0x5e290f*/
        }
        else
        {
          v14 = (AbstractClass *)10; /*0x5e2902*/
          v5 -= 10; /*0x5e290a*/
        }
        int v10 = v5 - 1; /*0x5e2917*/
        if ( v5 - 1 <= 0 ) /*0x5e291c*/
          goto LABEL_18; /*0x5e291c*/
        v11 = (wint_t *)((char *)i + 2 * v10); /*0x5e291e*/
        while ( iswgraph(*v11) ) /*0x5e2930*/
        {
          --v10; /*0x5e2932*/
          --v11; /*0x5e2933*/
          if ( v10 <= 0 ) /*0x5e2938*/
          {
            v5 -= (int)v14; /*0x5e293a*/
            goto LABEL_23; /*0x5e2940*/
          }
        }
        if ( v10 == -1 ) /*0x5e2945*/
LABEL_18:
          v10 = v5 - (_DWORD)v14; /*0x5e294b*/
        v5 = v10; /*0x5e294d*/
      }
LABEL_23:
      ; /*0x5e297e*/
    }
    while ( v5 ); /*0x5e2980*/
    v4 = hWnd; /*0x5e2986*/
  }
  return ReleaseDC(v4, hDC); /*0x5e2996*/
}
} // namespace gamemd

// 0x5E2AC0
namespace gamemd {
void sub_5E2AC0()
{
{
  HWND Current; // edi
  HWND DlgItem; // esi
  HWND v2; // eax
  LRESULT v3; // edi
  CampaignScore *v4; // eax
  if ( Dialog::GetCurrent() ) /*0x5e2ac4*/
  {
    Current = Dialog::GetCurrent(); /*0x5e2adc*/
    DlgItem = GetDlgItem(Current, 1343); /*0x5e2ae6*/
    if ( DlgItem ) /*0x5e2aea*/
    {
LABEL_5:
      v3 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5e2b0b*/
  int v5; // [esp+Ch] [ebp-4h] BYREF
      unknown_libname_74(&v5); /*0x5e2b23*/
      if ( v3 > 0 ) /*0x5e2b2a*/
        UI_Assign_623F60(DlgItem, v3 - 1, (void **)&v5); /*0x5e2b36*/
      if ( (unsigned int)WideString::Length((const wchar_t **)&v5) >= 0x24 ) /*0x5e2b47*/
      {
        WideString::Assign_Alt((void **)&v5, DataGlobal_831774); /*0x5e2b6e*/
      }
      else
      {
        SendMessageA(DlgItem, 0x182u, v3 - 1, 0); /*0x5e2b53*/
        WideString::Append2((wchar_t **)&v5, DataGlobal_831774); /*0x5e2b5e*/
      }
      v4 = WideString::GetOrEmpty((wchar_t **)&v5); /*0x5e2b78*/
      DrawDialogText(-1, v4, DlgItem); /*0x5e2b82*/
      InvalidateRect(DlgItem, 0, 0); /*0x5e2b8c*/
      DeleteAndZero::Alt((void **)&v5); /*0x5e2b96*/
    }
    else
    {
      while ( 1 ) /*0x5e2aee*/
      {
        v2 = (HWND)Dialog::FindByPtr(Current); /*0x5e2aee*/
        Current = v2; /*0x5e2af3*/
        if ( !v2 ) /*0x5e2af7*/
          break; /*0x5e2af7*/
        DlgItem = GetDlgItem(v2, 1343); /*0x5e2b05*/
        if ( DlgItem ) /*0x5e2b09*/
          goto LABEL_5; /*0x5e2b09*/
      }
    }
  }
}
} // namespace gamemd

// 0x5E2CD0
namespace gamemd {
void ShowDialogConfirm(CampaignScore * aP0, int nIDDlgItem, unsigned char (*a3)() a3, char a4)
{
{
  CampaignScore *v4; // ebp
  int edi4; // edi
  SkirmishDialog *v6; // esi
  ObjectClass *DlgItem; // ebx
  LONG WindowLongA; // eax
  LONG (__stdcall *v10)(HWND, int); // ebp
  HWND v11; // ebx
  LONG v12; // eax
  HWND v13; // eax
  HWND v14; // ebx
  LONG v15; // eax
  HWND v16; // ebx
  LONG v17; // eax
  HWND v18; // eax
  v4 = aP0; /*0x5e2cd3*/
  if ( aP0 && wcslen((const wchar_t *)aP0) )
  {
    if ( a4 )
    {
      edi4 = 251; /*0x5e2cfe*/
    }
    else if ( nIDDlgItem )
    {
      if ( nIDDlgItem == 1 )
        edi4 = 252; /*0x5e2d15*/
      else
        edi4 = nIDDlgItem != 4 ? 251 : 294;
    }
    else
    {
      edi4 = 208; /*0x5e2d09*/
    }
    v6 = (SkirmishDialog *)CreateDialogIndirect(g_hInstance, (HWND)edi4, g_hWnd, sub_5E2E40, 0); /*0x5e2d48*/
    SetupDialog((HWND)v6, edi4); /*0x5e2d4e*/
    switch ( nIDDlgItem ) /*0x5e2d5b*/
    {
      case 0: /*0x5e2d5b*/
        DlgItem = (ObjectClass *)GetDlgItem((HWND)v6, 1); /*0x5e2d62*/
        WindowLongA = GetWindowLongA((HWND)DlgItem, -16); /*0x5e2d67*/
        SetWindowLongA((HWND)DlgItem, -16, WindowLongA | 0x10000000); /*0x5e2d76*/
        if ( a4 ) /*0x5e2d82*/
          UI_Get_60B350((HWND)DlgItem); /*0x5e2d86*/
        goto LABEL_18; /*0x5e2d8b*/
      case 1: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2d96*/
        v11 = GetDlgItem((HWND)v6, 1); /*0x5e2d9c*/
        v12 = GetWindowLongA(v11, -16); /*0x5e2da1*/
        SetWindowLongA(v11, -16, v12 | 0x10000000); /*0x5e2dac*/
        v13 = GetDlgItem((HWND)v6, 2); /*0x5e2db4*/
        break;
      case 4: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2dc0*/
        v14 = GetDlgItem((HWND)v6, 6); /*0x5e2dc6*/
        v15 = GetWindowLongA(v14, -16); /*0x5e2dcb*/
        SetWindowLongA(v14, -16, v15 | 0x10000000); /*0x5e2dd6*/
        v13 = GetDlgItem((HWND)v6, 7); /*0x5e2ddf*/
        break;
      default:
LABEL_18:
        v18 = GetDlgItem((HWND)v6, 1456); /*0x5e2dfb*/
        SendMessageA(v18, 0x4B2u, 0, (LPARAM)v4); /*0x5e2e0c*/
        ShowWindow((HWND)v6, 1); /*0x5e2e15*/
        return MessageDialogLoopAlt((HWND)v6, a3, 0, 1, 1); /*0x5e2e31*/
    }
    v16 = v13; /*0x5e2de1*/
    v17 = v10(v13, -16); /*0x5e2de6*/
    SetWindowLongA(v16, -16, v17 | 0x10000000); /*0x5e2df1*/
    v4 = aP0; /*0x5e2df7*/
    goto LABEL_18; /*0x5e2df7*/
  }
  return 0; /*0x5e2e2e*/
}
} // namespace gamemd

// 0x5E2EF0
namespace gamemd {
void SetDialogPlayerName(HWND hDlg, int a2)
{
{
  HWND DlgItem; // edi
  CampaignScore *v4; // eax
  if ( a2 ) /*0x5e2ef5*/
  {
    DlgItem = GetDlgItem(hDlg, 1772); /*0x5e2f07*/
    v4 = WideString::GetOrEmpty_Alt((wchar_t **)(a2 + 32)); /*0x5e2f09*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v4); /*0x5e2f17*/
  }
}
} // namespace gamemd

// 0x5E3010
namespace gamemd {
AbstractClass * * InitSkirmishDialogControls(HWND hDlg, int a2)
{
{
  _DWORD *WDTTerritoryClass; // eax
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  LPARAM lParam; // [esp+10h] [ebp-18h]
  LPARAM v14; // [esp+14h] [ebp-14h]
  WPARAM wParam; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-Ch]
  v14 = g_Rules_MultiEngineer; /*0x5e3022*/
  lParam = g_Rules_Bases; /*0x5e3032*/
  int v12 = g_Rules_EngineerCount; /*0x5e3038*/
  if ( a2 ) /*0x5e303c*/
  {
    ComPtr::Constructor(&wParam); /*0x5e3047*/
    wParam = (WPARAM)&vt_rc_ptr_WDTTerritory; /*0x5e3059*/
    if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x5e3066*/
    {
  _DWORD v17[2]; // [esp+20h] [ebp-8h] BYREF
      WDTTerritoryClass = FindWDTTerritoryClass(v17, *(int *)g_GameDifficulty); /*0x5e3072*/
      ComPtr::Set(&wParam, WDTTerritoryClass[1]); /*0x5e307f*/
      v17[0] = &vt_rc_ptr_WDTTerritory; /*0x5e3088*/
      ComPtr::Release(v17); /*0x5e308c*/
    }
    if ( v16 ) /*0x5e3097*/
    {
      DlgItem = GetDlgItem(hDlg, 1348); /*0x5e30ab*/
      EnableWindow(DlgItem, 0); /*0x5e30b4*/
      v5 = GetDlgItem(hDlg, 1748); /*0x5e30be*/
      EnableWindow(v5, 0); /*0x5e30c1*/
      if ( (*(_DWORD *)(v16 + 60) & 0x20000) == 0 ) /*0x5e30ce*/
      {
        v6 = GetDlgItem(hDlg, 1026); /*0x5e30d8*/
        EnableWindow(v6, 0); /*0x5e30db*/
      }
      if ( (BYTE1(*(_DWORD *)(v16 + 60)) & 0x80u) == 0 ) /*0x5e30e7*/
      {
        v7 = GetDlgItem(hDlg, 1359); /*0x5e30f1*/
        EnableWindow(v7, 0); /*0x5e30f4*/
      }
      if ( (*(_DWORD *)(v16 + 60) & 0x400) == 0 ) /*0x5e3100*/
      {
        v8 = GetDlgItem(hDlg, 1358); /*0x5e310a*/
        EnableWindow(v8, 0); /*0x5e310d*/
      }
      if ( (*(_BYTE *)(v16 + 60) & 0x20) == 0 ) /*0x5e3117*/
      {
        v9 = GetDlgItem(hDlg, 1000); /*0x5e3121*/
        EnableWindow(v9, 0); /*0x5e3124*/
      }
      if ( (*(_DWORD *)(v16 + 60) & 0x100) == 0 ) /*0x5e3130*/
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
      *(unsigned __int16 *)&g_RulesClass_Instance->__pad_C3C[2116]
    | (*(unsigned __int16 *)&g_RulesClass_Instance->__pad_C3C[2124] << 16));
    SendDlgItemMessageA(hDlg, 1026, 0x4ABu, 0, *(_DWORD *)&g_RulesClass_Instance->__pad_C3C[2128]); /*0x5e3198*/
    SendDlgItemMessageA( /*0x5e31c4*/
      hDlg,
      1359,
      0x406u,
      1u,
      *(unsigned __int16 *)&g_RulesClass_Instance->__pad_C3C[2132]
    | (*(unsigned __int16 *)&g_RulesClass_Instance->__pad_C3C[2140] << 16));
    wParam = (WPARAM)&vt_rc_ptr_WDTTerritory; /*0x5e31ca*/
    ComPtr::Release(&wParam); /*0x5e31d2*/
  }
  SendDlgItemMessageA(hDlg, 1321, 0x405u, 1u, 6 - v12); /*0x5e31f1*/
  SendDlgItemMessageA(hDlg, 1026, 0x405u, 1u, lParam); /*0x5e3205*/
  SendDlgItemMessageA(hDlg, 1359, 0x405u, 1u, v14); /*0x5e3219*/
  wParam = 0; /*0x5e3223*/
  v16 = 1; /*0x5e322b*/
  SendDlgItemMessageA(hDlg, 1358, 0xF1u, *(&wParam + (unsigned __int8)ShortGame), 0); /*0x5e3245*/
  SendDlgItemMessageA(hDlg, 1690, 0xF1u, *(&wParam + (unsigned __int8)SWAllowed), 0); /*0x5e3261*/
  SendDlgItemMessageA(hDlg, 1693, 0xF1u, *(&wParam + (unsigned __int8)g_Rules_ShortGame), 0); /*0x5e327f*/
  SendDlgItemMessageA(hDlg, 1000, 0xF1u, *(&wParam + (unsigned __int8)MCVRedeploy), 0); /*0x5e329f*/
  return SendDlgItemMessageA(hDlg, 1357, 0xF1u, *(&wParam + (unsigned __int8)Crates), 0); /*0x5e32bd*/
}
} // namespace gamemd

// 0x5E32D0
namespace gamemd {
char Game_CheckSettingsChanged(char a1, char a2)
{
{
  char result; // al
  char Buffer[520]; // [esp+8h] [ebp-208h] BYREF

  char v2 = 0; /*0x5e32e1*/
  if ( time(0) != DataGlobal_AC11B8 ) /*0x5e32f1*/
    goto LABEL_5; /*0x5e32f1*/
  if ( a1 ) /*0x5e32fb*/
    DataGlobal_AC11BC = 1; /*0x5e32fd*/
  result = a2; /*0x5e3304*/
  if ( a2 ) /*0x5e330a*/
  {
LABEL_5:
    if ( DataGlobal_AC11BC ) /*0x5e3317*/
      a1 = 1; /*0x5e3319*/
    DataGlobal_AC11BC = 0; /*0x5e3323*/
    if ( ppv ) /*0x5e332e*/
    {
      if ( time(0) - DataGlobal_AC11B8 >= 5 ) /*0x5e3343*/
        goto LABEL_11; /*0x5e3343*/
    }
    else if ( time(0) - DataGlobal_AC11B8 >= 2 ) /*0x5e335a*/
    {
LABEL_11:
      v2 = 1; /*0x5e335c*/
    }
    if ( a1 ) /*0x5e3364*/
      v2 = 1; /*0x5e3366*/
    if ( DataGlobal_8316D8 != g_Rules_EngineerCount ) /*0x5e3375*/
      v2 = 1; /*0x5e3377*/
    if ( DataGlobal_8316DC != g_Rules_Bases ) /*0x5e3386*/
      v2 = 1; /*0x5e3388*/
    if ( DataGlobal_8316E0 != g_Rules_MultiEngineer ) /*0x5e3397*/
      v2 = 1; /*0x5e3399*/
    if ( DataGlobal_AC11BD != ShortGame ) /*0x5e33a8*/
      v2 = 1; /*0x5e33aa*/
    if ( DataGlobal_AC11BE != SWAllowed ) /*0x5e33b9*/
      v2 = 1; /*0x5e33bb*/
    if ( DataGlobal_AC11BF != (_BYTE)g_Rules_ShortGame ) /*0x5e33ca*/
      v2 = 1; /*0x5e33cc*/
    if ( DataGlobal_AC11C0 != (_BYTE)MCVRedeploy ) /*0x5e33db*/
      v2 = 1; /*0x5e33dd*/
    if ( DataGlobal_AC11C1 != Crates ) /*0x5e33ec*/
      v2 = 1; /*0x5e33ee*/
    DataGlobal_AC1146 = 0; /*0x5e33fa*/
    if ( _wcsicmp(&DataGlobal_AC10F0, (const wchar_t *)&MCVRedeploy + 1) ) /*0x5e3403*/
      v2 = 1; /*0x5e340f*/
    DataGlobal_AC0CFD = 0; /*0x5e341b*/
    if ( _strcmpi(DataGlobal_AC0CF0, &Destination) ) /*0x5e3422*/
      v2 = 1; /*0x5e342e*/
    DataGlobal_AC0D20 = 0; /*0x5e343a*/
    if ( _strcmpi(DataGlobal_AC0D00, &g_MultiplayerFlags) ) /*0x5e3441*/
      v2 = 1; /*0x5e344d*/
    if ( DataGlobal_8316E8 != g_MultiplayerConfigState ) /*0x5e345c*/
      v2 = 1; /*0x5e345e*/
    result = DataGlobal_8316E4; /*0x5e3460*/
    if ( DataGlobal_8316E4 != (_BYTE)g_MultiplayerSetupState || v2 ) /*0x5e3471*/
    {
      DataGlobal_AC11B8 = time(0); /*0x5e348c*/
      DataGlobal_8316D8 = g_Rules_EngineerCount; /*0x5e3496*/
      DataGlobal_8316DC = g_Rules_Bases; /*0x5e34a2*/
      DataGlobal_8316E0 = g_Rules_MultiEngineer; /*0x5e34ae*/
      DataGlobal_AC11BD = ShortGame; /*0x5e34b8*/
      DataGlobal_AC11BE = SWAllowed; /*0x5e34c4*/
      DataGlobal_AC11BF = g_Rules_ShortGame; /*0x5e34da*/
      DataGlobal_AC11C0 = MCVRedeploy; /*0x5e34df*/
      DataGlobal_AC11C1 = Crates; /*0x5e34e5*/
      wcscpy(&DataGlobal_AC10F0, (const wchar_t *)&MCVRedeploy + 1); /*0x5e34eb*/
      strcpy(DataGlobal_AC0D00, &g_MultiplayerFlags); /*0x5e350f*/
      DataGlobal_8316E8 = g_MultiplayerConfigState; /*0x5e3536*/
      strcpy(DataGlobal_AC0CF0, &Destination); /*0x5e353e*/
      DataGlobal_8316E4 = g_MultiplayerSetupState; /*0x5e3553*/
      memset(Buffer, 0, sizeof(Buffer)); /*0x5e355e*/
      if ( ppv ) /*0x5e356d*/
        Game::EncodeGameSetupState(Buffer); /*0x5e356f*/
      else
        Game::BuildGameSettingsPacket(Buffer); /*0x5e3585*/
      return Network::SendOptionsGame(Buffer); /*0x5e3578*/
    }
  }
  return result; /*0x5e357d*/
}
} // namespace gamemd

// 0x5E39C0
namespace gamemd {
ObjectClass * * ValidateNetworkLobbyHostMap()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd

// 0x5E3AB0
namespace gamemd {
int SendMultiplayerStartSignal()
{
{
  int started; // esi
  HWND v1; // eax
  HWND (__stdcall *v2)(HWND, int); // esi
  HWND DlgItem; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  int result; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  INIClass *v12; // [esp+0h] [ebp-48h]
  int v13; // [esp+4h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+8h] [ebp-40h] BYREF

  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3abb*/
  {
    String::Assign((char **)&v13, 0); /*0x5e3ac3*/
    started = SendMultiplayerStartSignal_Start_77EBA0((const char **)&v13); /*0x5e3ad5*/
    DeleteAndZero((int)&v13); /*0x5e3ad7*/
  }
  else
  {
    started = SendMultiplayerStartSignal_Start(0); /*0x5e3ae5*/
  }
  HouseClass_Player[40292] = 0; /*0x5e3aec*/
  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3af5*/
    SendMultiplayerStartSignal_Start_7A27D0(); /*0x5e3af7*/
  else
    SendMultiplayerStartSignal_Start_5E23A0(); /*0x5e3afe*/
  if ( started == 1 ) /*0x5e3b06*/
  {
  BOOL v11; // [esp-4h] [ebp-4Ch]
    if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3b13*/
    {
      String::Assign((char **)&v13, 0); /*0x5e3b1b*/
      AssignWOLPlayerSide((const char **)&v13, 0); /*0x5e3b26*/
      DeleteAndZero((int)&v13); /*0x5e3b2f*/
    }
    else
    {
      SetGameSetupPlayerState(0, 0); /*0x5e3b3a*/
    }
    sprintf(Buffer, (ObjectClass *)&stru_830620[4564], v12); /*0x5e3b49*/
    Network::SendOptionsGame(Buffer); /*0x5e3b55*/
    if ( *((_BYTE *)&g_MatrixTransformState + 9138) ) /*0x5e3b66*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b68*/
      if ( !v1 ) /*0x5e3b6f*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3b76*/
        if ( !v1 ) /*0x5e3b7d*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3b84*/
          if ( !v1 ) /*0x5e3b8b*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3b92*/
        }
      }
      v11 = 1; /*0x5e3b97*/
    }
    else
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b9b*/
      if ( !v1 ) /*0x5e3ba2*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3ba9*/
        if ( !v1 ) /*0x5e3bb0*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3bb7*/
          if ( !v1 ) /*0x5e3bbe*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3bc5*/
        }
      }
      v11 = 0; /*0x5e3bca*/
    }
    v2 = GetDlgItem; /*0x5e3bcc*/
    DlgItem = GetDlgItem(v1, 1439); /*0x5e3bd8*/
    EnableWindow(DlgItem, v11); /*0x5e3bdb*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3be6*/
    if ( v4 ) /*0x5e3bed*/
      goto LABEL_40; /*0x5e3bed*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3bf8*/
    if ( v4 ) /*0x5e3bff*/
      goto LABEL_40; /*0x5e3bff*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c0a*/
    if ( v4 ) /*0x5e3c11*/
      goto LABEL_40; /*0x5e3c11*/
    goto LABEL_39; /*0x5e3c11*/
  }
  v5 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c21*/
  if ( !v5 ) /*0x5e3c28*/
  {
    v5 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c2f*/
    if ( !v5 ) /*0x5e3c36*/
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c3d*/
      if ( !v5 ) /*0x5e3c44*/
        v5 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3c4b*/
    }
  }
  v2 = GetDlgItem; /*0x5e3c50*/
  v6 = GetDlgItem(v5, 1439); /*0x5e3c5c*/
  result = IsWindowEnabled(v6); /*0x5e3c5f*/
  if ( !result ) /*0x5e3c67*/
  {
    result = *((unsigned __int8 *)&g_MatrixTransformState + 9138); /*0x5e3c6d*/
    if ( *((_BYTE *)&g_MatrixTransformState + 9138) ) /*0x5e3c74*/
    {
      v8 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c7f*/
      if ( !v8 ) /*0x5e3c86*/
      {
        v8 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c8d*/
        if ( !v8 ) /*0x5e3c94*/
        {
          v8 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c9b*/
          if ( !v8 ) /*0x5e3ca2*/
            v8 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ca9*/
        }
      }
      v9 = GetDlgItem(v8, 1439); /*0x5e3cb6*/
      EnableWindow(v9, 1); /*0x5e3cb9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3cc4*/
      if ( v4 ) /*0x5e3ccb*/
        goto LABEL_40; /*0x5e3ccb*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3cd2*/
      if ( v4 ) /*0x5e3cd9*/
        goto LABEL_40; /*0x5e3cd9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3ce0*/
      if ( v4 ) /*0x5e3ce7*/
        goto LABEL_40; /*0x5e3ce7*/
LABEL_39:
      v4 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ce9*/
LABEL_40:
      v10 = v2(v4, 1439); /*0x5e3cf3*/
      return InvalidateRect(v10, 0, 0); /*0x5e3d00*/
    }
  }
  return result; /*0x5e3d06*/
}
} // namespace gamemd

// 0x5E3D10
namespace gamemd {
void SetupNetworkLobbyDialog(INIClass * Source, void * a2)
{
{
  HWND v7; // edi
  HWND DlgItem; // eax
  HWND v9; // esi
  HWND v10; // eax
  wchar_t *StringCSF; // eax
  __int16 ax8; // ax
  SessionClass *v12; // ebx
  int i; // esi
  CCINIClass *v25; // eax
  CCINIClass *v26; // edi
  int j; // ecx
  HWND eax42; // eax
  VectorClass *v31; // esi
  char al49; // al
  INIClass *v33; // ecx
  wchar_t *v37; // ebp
  int ResourceID2CSF; // eax
  HWND v40; // eax
  int ResourceIDCSF; // edi
  INIClass *v41; // ecx
  HWND v45; // eax
  CCINIClass *v47; // esi
  int ii; // edi
  CCINIClass *v62; // esi
  ObjectClass *v64; // ebp
  IUnknown *jj; // esi
  GameSetup *v66; // eax
  CampaignScore *v68; // eax
  IUnknown *esi157; // esi
  GameSetup *v72; // eax
  CampaignScore *v74; // eax
  CampaignScore *v76; // eax
  HWND v77; // edi
  const wchar_t **v79; // ebp
  wchar_t *v80; // ebx
  HWND (__stdcall *v83)(HWND, int); // ebx
  HWND v84; // eax
  int ResourceID3CSF; // eax
  int ResourceID4CSF; // eax
  HWND v90; // eax
  int ebp212; // ebp
  SessionClass *v94; // esi
  wchar_t *v96; // ebx
  int k; // esi
  HWND v99; // eax
  HWND v101; // eax
  char m; // al
  char n; // al
  int CurrentType; // eax
  HWND v109; // eax
  CellStruct *v123; // esi
  char bl313; // bl
  wchar_t **v124; // eax
  ObjectClass *v127; // esi
  char *eax324; // eax
  CellStruct *v131; // esi
  char *eax330; // eax
  CellStruct *v133; // esi
  CCINIClass *eax334; // eax
  CCINIClass *v135; // edi
  int esi338; // esi
  SkirmishDialog *v136; // eax
  CampaignScore *v140; // eax
  wchar_t **ebp366; // ebp
  HWND v141; // esi
  HWND (__stdcall *v142)(HWND, int); // ebx
  HWND v143; // ebx
  CampaignScore *v145; // eax
  HWND eax380; // eax
  wchar_t *v147; // eax
  HWND v148; // eax
  HWND v149; // eax
  HWND v150; // eax
  HWND v151; // eax
  HWND v153; // eax
  HWND v154; // eax
  HWND v155; // eax
  HWND v156; // eax
  wchar_t *v157; // eax
  HWND v158; // eax
  HWND Current; // eax
  HWND v161; // eax
  CCINIClass *v165; // ebp
  CCINIClass *v169; // ebx
  char *eax438; // eax
  SessionClass *v171; // edi
  CCINIClass *v176; // edi
  wchar_t *eax453; // eax
  CCINIClass *v178; // esi
  char *ebp463; // ebp
  ObjectClass *v179; // eax
  INIClass *v180; // ecx
  ObjectClass *v189; // ecx
  INIClass *v190; // edx
  HWND v191; // eax
  HWND v192; // eax
  _DWORD _FFFFFFF4[3]; // [esp-Ch] [ebp-400h] BYREF
  char *v194; // [esp+0h] [ebp-3F4h]
  ObjectClass *v195; // [esp+4h] [ebp-3F0h]
  CCINIClass *v193; // [esp+8h] [ebp-3ECh]
  ObjectClass *v197; // [esp+Ch] [ebp-3E8h]
  _BYTE v198[176]; // [esp+10h] [ebp-3E4h] BYREF
  INIClass aP0_160; // [esp+D0h] [ebp-324h] BYREF
  int v200[22]; // [esp+110h] [ebp-2E4h] BYREF
  int v202; // [esp+170h] [ebp-284h]
  CCINIClass *v238; // [esp+1B0h] [ebp-244h]
  CCINIClass *v239; // [esp+1C0h] [ebp-234h]
  int v206; // [esp+1D0h] [ebp-224h]
  int v207; // [esp+1E0h] [ebp-214h]
  CampaignScore Destination[14]; // [esp+1F0h] [ebp-204h] BYREF
  int v209; // [esp+3F0h] [ebp-4h]
  int v3 = 0;
  v209 = 0;
  v198[22] = 0;
  char * v5 = _strdup(Source);
  *(_DWORD *)&v198[40] = v5;
  char v6 = *v5;
  if ( *v5 == 90 )
  {
    *(_DWORD *)v198 = &stru_830620[5004];
    Debug::Log();
    if ( v5[1] == 49 )
    {
      v12 = (SessionClass *)&HouseClass_Player[40260];
      do
      {
        char * v14 = ToWideStringChar((IUnknown *)v12->GameMode[0]);
        if ( !_strcmpi(a2, v14) )
        {
          *(_DWORD *)&v198[44] = v200;
          strcpy((char *)v200, (const char *)(*(_DWORD *)&v198[40] + 3));
          UI_Setup_793930(a2, v200, *(char *)(*(_DWORD *)&v198[40] + 2) - 48);
        }
        v12 = (SessionClass *)((char *)v12 + 4);
      }
      while ( (int)v12 < (int)&HouseClass_Player[40292] );
    }
    else
    {
      if ( v5[1] == 50 )
      {
        ax8 = atol(v5 + 2);
        UI_Setup_793A10(a2, ax8);
        *(_DWORD *)v198 = *(_DWORD *)&v198[40];
        goto LABEL_102;
      }
      if ( v5[1] == 51 && !UI_Setup_7930A0() )
      {
        v7 = (HWND)Dialog::FindByHandle((void *)0xC9);
        DlgItem = GetDlgItem(v7, 1823);
        v9 = DlgItem;
        if ( DlgItem )
        {
          ShowWindow(DlgItem, 1);
          v10 = GetDlgItem(v7, 1128);
          ShowWindow(v10, 0);
          StringCSF = GetStringCSF((wchar_t *)&stru_830620[4984], 0, &stru_830620[4536], 1326);
          SendMessageA(v9, 0x4B2u, 0, (LPARAM)StringCSF);
          *(_DWORD *)v198 = *(_DWORD *)&v198[40];
          goto LABEL_102;
        }
      }
    }
    goto LABEL_13;
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 && (g_NetworkLobby_Init || g_NetworkLobbyState) )
    goto LABEL_101;
  switch ( v6 )
  {
    case 'W':
      *(_DWORD *)v198 = v5;
      v197 = (ObjectClass *)&stru_830620[4960];
      Debug::Log();
      int v15 = 0;
      *(_DWORD *)&v198[32] = 0;
      *(_DWORD *)&v198[36] = 0;
      *(_DWORD *)&v198[24] = 0;
      char * v16 = strtok(v5 + 1, (ObjectClass *)&stru_817F40.nextObject);
      if ( v16 )
        *(_DWORD *)&v198[32] = atol(v16);
      char * v17 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v17 )
        *(_DWORD *)&v198[36] = atol(v17);
      char * v18 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v18 )
        *(_DWORD *)&v198[24] = atol(v18);
      char * v19 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v19 )
        v3 = atol(v19);
      char * v20 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v20 )
        v15 = atol(v20);
      for ( i = 0; i < 32; i += 4 )
      {
        char * v22 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        if ( v22 )
          *(_DWORD *)&aP0_160[0][i] = atol(v22);
        char * v23 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        if ( v23 )
          *(_DWORD *)&v198[i + 56] = atol(v23);
        char * v24 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        if ( v24 )
          *(_DWORD *)&v198[i + 108] = atol(v24);
        v25 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        v26 = v25;
        if ( v25 )
          *(_DWORD *)&aP0_160[32][i] = atol(v25->__pad_0);
      }
      if ( v26 )
      {
        if ( *(_DWORD *)&HouseClass_Player[29924] )
        {
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4404) = *(_DWORD *)&v198[32];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4408) = *(_DWORD *)&v198[36];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4396) = *(_DWORD *)&v198[24];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4400) = v3;
          unsigned int v27 = 0;
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4412) = v15;
          for ( j = 4416; j < 4480; j += 8 )
          {
            int v29 = *(_DWORD *)&aP0_160[0][v27];
            int v30 = *(_DWORD *)&v198[v27 + 56];
            v27 += 4;
            *(_DWORD *)(j + *(_DWORD *)&HouseClass_Player[29924]) = v29;
            *(_DWORD *)(j + *(_DWORD *)&HouseClass_Player[29924] + 4) = v30;
            *(_WORD *)&v198[24] = *(_WORD *)&v198[v27 + 104];
            *(_WORD *)&v198[26] = aP0_160.sectionHead[v27 / 4 + 3];
            *(_DWORD *)(v27 + *(_DWORD *)&HouseClass_Player[29924] + 4540) = *(_DWORD *)&v198[24];
          }
          eax42 = (HWND)Dialog::FindByHandle((void *)0xC9);
          if ( eax42 || (eax42 = (HWND)Dialog::FindByHandle((void *)0xBD)) != 0 )
            InvalidateRect(eax42, 0, 0);
        }
      }
      *(_DWORD *)v198 = *(_DWORD *)&v198[40];
LABEL_102:
      free(*(void **)v198);
      return 0;
    case 'O':
      v31 = (VectorClass *)Dialog::FindByHandle((void *)0xC9);
      if ( v31 || (v31 = (VectorClass *)Dialog::FindByHandle((void *)0xBD)) != 0 )
      {
        al49 = v5[1];
        v33 = *(INIClass **)&stru_830620[4228];
        if ( al49 == 56 )
          int v35 = -1;
        else
          v35 = al49 - 48;
        *(_DWORD *)&stru_830620[4228] = v35;
        if ( (INIClass *)v35 == v33 )
          goto LABEL_98;
        Lobby::SetupPlayerWidgets((HWND)v31);
        char * v36 = CharToWideString(v5 + 2);
        wcscpy((wchar_t *)Destination, (const wchar_t *)v36);
        if ( !*(_WORD *)Destination[0].__pad_0 )
        {
          v35 = *(_DWORD *)&stru_830620[4228];
          goto LABEL_98;
        }
        WideString::Assign((wchar_t **)&v198[24], Destination);
        v37 = NetworkLobby::DeleteAndZero((const wchar_t **)&v198[24]);
        DeleteAndZero::Alt((void **)&v198[24]);
        if ( v37 || (v37 = Player::FindByName((wchar_t *)Destination)) != 0 )
        {
          if ( v37 != (wchar_t *)*(&g_MatrixTransformState + 2281)
            && (v37 == (wchar_t *)*(&g_MatrixTransformState + 2275)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2276)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2280)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2277)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2278)
             || v37 == (wchar_t *)*(&g_MatrixTransformState + 2279)
             || *(_DWORD *)((char *)v37 + 107) != -1) )
          {
  int v39; // eax
            ResourceID2CSF = GetResourceID2CSF(*(void **)&stru_830620[4228]);
            FillComboBoxRandomOnly((HWND)v31, ResourceID2CSF);
            if ( *(_DWORD *)&stru_830620[4228] )
            {
              switch ( *(_DWORD *)&stru_830620[4228] )
              {
                case 1:
                  v39 = 1042;
                  break;
                case 2:
                  v39 = 1043;
                  break;
                case 3:
                  v39 = 1044;
                  break;
                case 4:
                  v39 = 1045;
                  break;
                case 5:
                  v39 = 1046;
                  break;
                case 6:
                  v39 = 1047;
                  break;
                default:
                  v39 = *(_DWORD *)&stru_830620[4228] != 7 ? -1 : 1048;
                  break;
              }
            }
            else
            {
              v39 = 1041;
            }
            v40 = GetDlgItem((HWND)v31, v39);
            SendMessageA(v40, 0x4F1u, 0, 0);
            ResourceIDCSF = GetResourceIDCSF(*(void **)&stru_830620[4228]);
            FillComboBoxFactions((HWND)v31, ResourceIDCSF);
            *(_DWORD *)v198 = -2;
          }
          else
          {
  int v44; // eax
            v41 = *(INIClass **)&stru_830620[4228];
            *(_DWORD *)&HouseClass_Player[21864][4 * *(_DWORD *)&stru_830620[4228] + 18396] = v37;
            int v43 = GetResourceID2CSF(v41);
            SetupComboBoxObserver((HWND)v31, v43);
            if ( *(_DWORD *)&stru_830620[4228] )
            {
              switch ( *(_DWORD *)&stru_830620[4228] )
              {
                case 1:
                  v44 = 1042;
                  break;
                case 2:
                  v44 = 1043;
                  break;
                case 3:
                  v44 = 1044;
                  break;
                case 4:
                  v44 = 1045;
                  break;
                case 5:
                  v44 = 1046;
                  break;
                case 6:
                  v44 = 1047;
                  break;
                default:
                  v44 = *(_DWORD *)&stru_830620[4228] != 7 ? -1 : 1048;
                  break;
              }
            }
            else
            {
              v44 = 1041;
            }
            v45 = GetDlgItem((HWND)v31, v44);
            SendMessageA(v45, 0x4F1u, 0, 1);
            ResourceIDCSF = GetResourceIDCSF(*(void **)&stru_830620[4228]);
            FillListBox((HWND)v31, ResourceIDCSF);
            *(_DWORD *)v198 = 8;
          }
          SetupSkirmishSpawnLocations((HWND)v31, ResourceIDCSF, *(int *)v198);
          v35 = *(_DWORD *)&stru_830620[4228];
          v5 = *(char **)&v198[40];
          *(_DWORD *)&HouseClass_Player[21864][4 * *(_DWORD *)&stru_830620[4228] + 18396] = v37;
LABEL_98:
          if ( v35 >= 0 && v35 != *(_DWORD *)&HouseClass_Player[40256] )
            SetupSkirmishPlayerSlots((HWND)v31, (void *)v35, 0);
        }
      }
LABEL_101:
      *(_DWORD *)v198 = v5;
      goto LABEL_102;
    case 'A':
      v47 = (CCINIClass *)atol(v5 + 1);
      if ( *(&g_MatrixTransformState + 2263) )
      {
        String::Assign((char **)&v198[24], (const char *)a2);
        AssignWOLPlayerSide((const char **)&v198[24], (int)v47);
        DeleteAndZero((int)&v198[24]);
      }
      else
      {
        SetGameSetupPlayerState((char *)a2, (int)v47);
      }
      goto LABEL_101;
  }
  if ( v6 != 67 )
  {
  char *v152; // ecx
    switch ( v6 )
    {
      case 'L':
        String::Assign((char **)&v198[24], &Source->__pad_0[1]);
        CharStringToWide((ObjectClass *)&v198[32], (const char **)&v198[24]);
        DeleteAndZero((int)&v198[24]);
        v76 = WideString::GetOrEmpty((wchar_t **)&v198[32]);
        NetworkLobby::SetupPlayers((wchar_t *)v76);
        v77 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( v77 )
        {
          if ( !*(_DWORD *)&HouseClass_Player[40248] )
            goto LABEL_171;
          void * v78 = 0;
          v79 = (const wchar_t **)&HouseClass_Player[40260];
          v80 = **(wchar_t ***)&HouseClass_Player[40236];
          while ( !*v79 || _wcsicmp(v80, *v79) )
          {
            ++v79;
            v78 = (char *)v78 + 1;
            if ( (int)v79 >= (int)&HouseClass_Player[40292] )
              goto LABEL_171;
          }
          if ( v78 != (void *)-1 )
          {
            if ( v78 != *(void **)&HouseClass_Player[40256] )
            {
  int v100; // eax
              int v81 = GetResourceID2CSF(v78);
              if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player[21864][4 * (_DWORD)v78 + 18396] + 107) == -1 )
              {
  int v82; // eax
                SetupComboBoxObserver(v77, v81);
                if ( v78 )
                {
                  if ( v78 == (void *)1 )
                  {
                    v82 = 1042;
                  }
                  else if ( v78 == (void *)2 )
                  {
                    v82 = 1043;
                  }
                  else if ( v78 == (void *)3 )
                  {
                    v82 = 1044;
                  }
                  else if ( v78 == (void *)4 )
                  {
                    v82 = 1045;
                  }
                  else if ( v78 == (void *)5 )
                  {
                    v82 = 1046;
                  }
                  else if ( v78 == (void *)6 )
                  {
                    v82 = 1047;
                  }
                  else
                  {
                    v82 = v78 != (void *)7 ? -1 : 1048;
                  }
                }
                else
                {
                  v82 = 1041;
                }
                v83 = GetDlgItem;
                v84 = GetDlgItem(v77, v82);
                SendMessageA(v84, 0x4F1u, 0, 1);
                int v85 = GetResourceIDCSF(v78);
                FillListBox(v77, v85);
                SetupSkirmishSpawnLocations(v77, v85, 8);
                ResourceID3CSF = GetResourceID3CSF(v78);
                SetupComboBoxRandomAlliance(v77, ResourceID3CSF);
                ResourceID4CSF = GetResourceID4CSF(v78);
                InitComboBoxNone(v77, ResourceID4CSF);
              }
              else
              {
  int v89; // eax
                int v88 = GetResourceID2CSF(v78);
                if ( *(_DWORD *)&HouseClass_Player[29936]
                  && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 4))(*(_DWORD *)&HouseClass_Player[29936]) )
                {
                  FillComboBoxRandomOnly(v77, v88);
                }
                if ( v78 )
                {
                  if ( v78 == (void *)1 )
                  {
                    v89 = 1042;
                  }
                  else if ( v78 == (void *)2 )
                  {
                    v89 = 1043;
                  }
                  else if ( v78 == (void *)3 )
                  {
                    v89 = 1044;
                  }
                  else if ( v78 == (void *)4 )
                  {
                    v89 = 1045;
                  }
                  else if ( v78 == (void *)5 )
                  {
                    v89 = 1046;
                  }
                  else if ( v78 == (void *)6 )
                  {
                    v89 = 1047;
                  }
                  else
                  {
                    v89 = v78 != (void *)7 ? -1 : 1048;
                  }
                }
                else
                {
                  v89 = 1041;
                }
                v83 = GetDlgItem;
                v90 = GetDlgItem(v77, v89);
                SendMessageA(v90, 0x4F1u, 0, 0);
                int v91 = GetResourceIDCSF(v78);
                FillComboBoxFactions(v77, v91);
                SetupSkirmishSpawnLocations(v77, v91, -2);
                int v92 = GetResourceID3CSF(v78);
                FillComboBoxAllianceSlots(v77, v92);
                int v93 = GetResourceID4CSF(v78);
                FillLobbyPlayerSlot(v77, v93);
              }
              if ( *(_DWORD *)&HouseClass_Player[40248] )
              {
                ebp212 = 0;
                v94 = (SessionClass *)&HouseClass_Player[40260];
                v96 = **(wchar_t ***)&HouseClass_Player[40236];
                while ( !v94->GameMode[0] || _wcsicmp(v96, (const wchar_t *)v94->GameMode[0]) )
                {
                  v94 = (SessionClass *)((char *)v94 + 4);
                  ++ebp212;
                  if ( (int)v94 >= (int)&HouseClass_Player[40292] )
                  {
                    ebp212 = -1;
                    break;
                  }
                }
                v83 = GetDlgItem;
              }
              else
              {
                ebp212 = -1;
              }
              *(_DWORD *)&HouseClass_Player[40256] = ebp212;
              for ( k = 0; k < 8; ++k )
              {
  int v98; // eax
                if ( k )
                {
                  switch ( k )
                  {
                    case 1:
                      v98 = 1042;
                      break;
                    case 2:
                      v98 = 1043;
                      break;
                    case 3:
                      v98 = 1044;
                      break;
                    case 4:
                      v98 = 1045;
                      break;
                    case 5:
                      v98 = 1046;
                      break;
                    case 6:
                      v98 = 1047;
                      break;
                    default:
                      v98 = k != 7 ? -1 : 1048;
                      break;
                  }
                }
                else
                {
                  v98 = 1041;
                }
                v99 = v83(v77, v98);
                EnableWindow(v99, 0);
                SetupSkirmishPlayerSlots(v77, (void *)k, 0);
              }
              if ( ebp212 )
              {
                switch ( ebp212 )
                {
                  case 1:
                    v100 = 1042;
                    break;
                  case 2:
                    v100 = 1043;
                    break;
                  case 3:
                    v100 = 1044;
                    break;
                  case 4:
                    v100 = 1045;
                    break;
                  case 5:
                    v100 = 1046;
                    break;
                  case 6:
                    v100 = 1047;
                    break;
                  default:
                    v100 = ebp212 != 7 ? -1 : 1048;
                    break;
                }
              }
              else
              {
                v100 = 1041;
              }
              v101 = v83(v77, v100);
              EnableWindow(v101, 1);
              SetupSkirmishPlayerSlots(v77, (void *)ebp212, (HWND)1);
              SetupSkirmishDialogPlayerSlot(v77, *(int *)&HouseClass_Player[40256]);
              MapSkirmishDialogPlayerToControl(v77, *(int *)&HouseClass_Player[40256]);
              FillLobbyFactionComboBox(v77, *(int *)&HouseClass_Player[40256]);
              SetupLobbyPlayerSlotDialog(v77, *(int *)&HouseClass_Player[40256]);
            }
          }
          else
          {
LABEL_171:
            UI_Setup_791AA0(v77);
          }
        }
        free(*(void **)&v198[40]);
        DeleteAndZero::Alt((void **)&v198[32]);
        return 0;
      case 'G':
        if ( Dialog::FindByHandle((void *)0xC9) )
        {
          HouseClass_Player[40292] = 1;
          if ( *(&g_MatrixTransformState + 2263) )
            UI_Setup_7A2750();
          else
            UI_Setup_5E2340();
        }
        goto LABEL_101;
      case 'K':
        if ( Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xBC) )
        {
          if ( v5[1] == 49 )
          {
            ValidateNetworkLobbyHostMap((char *)a2, 1);
          }
          else if ( v5[1] == 50 )
          {
            ValidateNetworkLobbyHostMap((char *)a2, 2);
          }
          else
          {
            ValidateNetworkLobbyHostMap((char *)a2, 0);
          }
        }
        goto LABEL_101;
      case 'P':
        *(_DWORD *)v198 = v5;
        v197 = (ObjectClass *)&stru_830620[4792];
        Debug::Log();
        char * v102 = v5 + 3;
        if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
        {
          for ( m = *v102; *v102; m = *v102 )
          {
            int v104 = 0;
            if ( m )
            {
              do
              {
                if ( m == 44 )
                  break;
                ++v102;
                aP0_160[0][v104++] = m;
                m = *v102;
              }
              while ( *v102 );
            }
            char v105 = *v102;
            aP0_160[0][v104] = 0;
            int v106 = 0;
            if ( v105 )
              ++v102;
            for ( n = *v102; *v102; n = *v102 )
            {
              if ( n == 44 )
                break;
              ++v102;
              v198[v106++ + 56] = n;
            }
            v198[v106 + 56] = 0;
            atol(&v198[56]);
            if ( *v102 )
              ++v102;
            SetGameOptionsPing(&aP0_160);
          }
        }
        goto LABEL_101;
    }
    CurrentType = Dialog::GetCurrentType();
    *(_DWORD *)&v198[32] = CurrentType;
    if ( CurrentType != 188 && CurrentType != 189 )
    {
      v109 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v109 )
      {
        v109 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v109 )
        {
          v109 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v109 )
            v109 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      SendDlgItemMessageA(v109, 1342, 0x49Du, 0, 1);
    }
    *(_DWORD *)v198 = Source;
    v197 = (ObjectClass *)&stru_830620[4764];
    Debug::Log();
    char * v110 = strtok(v5, (ObjectClass *)&stru_817F40.nextObject);
    if ( v110 )
      *(_DWORD *)&HouseClass_Player[45128] = atol(v110);
    char * v111 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v111 )
      *(_DWORD *)&HouseClass_Player[44564] = atol(v111);
    char * v112 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v112 )
      *(_DWORD *)&HouseClass_Player[29980] = atol(v112);
    char * v113 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v113 )
      *(_DWORD *)&HouseClass_Player[29968] = atol(v113);
    char * v114 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v114 )
      *(_DWORD *)&HouseClass_Player[29988] = atol(v114);
    char * v115 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v115 )
      HouseClass_Player[29974] = atol(v115) != 0;
    char * v116 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v116 )
      HouseClass_Player[29975] = atol(v116) != 0;
    char * v117 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v117 )
      HouseClass_Player[29976] = atol(v117) != 0;
    char * v118 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v118 )
      HouseClass_Player[30164] = atoi(v118) != 0;
    char * v119 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v119 )
      HouseClass_Player[29973] = atoi(v119) != 0;
    char * v120 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v120 )
      *(_DWORD *)&HouseClass_Player[29956] = atol(v120);
    char * v121 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( !v121 )
      goto LABEL_101;
    *(_DWORD *)&HouseClass_Player[44572] = atol(v121);
    v198[23] = 1;
    v123 = (CellStruct *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 && UI_Setup_77CF40() )
    {
      bl313 = 1;
      v124 = WideString::Assign((wchar_t **)&v198[52], (CampaignScore *)&stru_87C374[46016]);
    }
    else
    {
      String::Assign((char **)&v198[24], (const char *)v123);
      bl313 = 6;
      v124 = UI_Setup_7B83E0((wchar_t **)&v198[44], (const char **)&v198[24]);
    }
    WideString::AssignFromPtr((wchar_t **)&v198[88], (const wchar_t **)v124);
    if ( (bl313 & 4) != 0 )
    {
      bl313 &= ~4u;
      DeleteAndZero::Alt((void **)&v198[44]);
    }
    if ( (bl313 & 2) != 0 )
    {
      bl313 &= ~2u;
      DeleteAndZero((int)&v198[24]);
    }
    if ( (bl313 & 1) != 0 )
      DeleteAndZero::Alt((void **)&v198[52]);
    char * v125 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    v127 = *(ObjectClass **)&HouseClass_Player[32192];
    *(_DWORD *)&v198[44] = *(_DWORD *)&HouseClass_Player[32192];
    if ( v125 )
    {
      *(_DWORD *)&HouseClass_Player[32192] = atoi(v125);
      if ( *(ObjectClass **)&HouseClass_Player[32192] != v127 )
        v198[23] = 0;
    }
    eax324 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    char v128 = HouseClass_Player[32188];
    v198[51] = HouseClass_Player[32188];
    if ( eax324 )
    {
      HouseClass_Player[32188] = atoi(eax324) != 0;
      if ( HouseClass_Player[32188] != v128 )
        v198[23] = 0;
    }
    char * v129 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    v131 = *(CellStruct **)&HouseClass_Player[32184];
    *(_DWORD *)&v198[52] = *(_DWORD *)&HouseClass_Player[32184];
    if ( v129 )
    {
      *(_DWORD *)&HouseClass_Player[32184] = atoi(v129);
      if ( *(CellStruct **)&HouseClass_Player[32184] != v131 )
        v198[23] = 0;
    }
    eax330 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    v133 = (CellStruct *)eax330;
    if ( eax330 )
    {
      if ( _strcmpi(&HouseClass_Player[31636], eax330) )
        v198[23] = 0;
      strncpy(&HouseClass_Player[31636], (const char *)v133, (IUnknown *)0x202);
      strcpy((char *)(*(_DWORD *)&HouseClass_Player[29924] + 4700), &HouseClass_Player[31636]);
    }
    eax334 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_830620[4760]);
    v135 = eax334;
    *(_DWORD *)&v198[24] = eax334;
    if ( eax334 )
    {
      if ( strcmp(&HouseClass_Player[32150], eax334->__pad_0) )
        v198[23] = 0;
      strncpy(&HouseClass_Player[32150], v135->__pad_0, (IUnknown *)0x21);
    }
    esi338 = MultiplayerGameMode::Find(*(void **)&HouseClass_Player[29956]);
    if ( esi338 != *(_DWORD *)&HouseClass_Player[29936] )
      v198[23] = 0;
    if ( *(_DWORD *)&v198[32] == 189 || *(_DWORD *)&v198[32] == 201 )
    {
      v136 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xC2);
      if ( !v136 )
      {
        v136 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xC9);
        if ( !v136 )
        {
          v136 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xBC);
          if ( !v136 )
            v136 = (SkirmishDialog *)Dialog::FindByHandle((void *)0xBD);
        }
      }
      UI_Setup_5EBDD0(v136, *(int *)&v198[44], *(int *)&HouseClass_Player[32192], esi338);
    }
    v198[31] = 1;
    if ( !v198[23] || !wcslen((const wchar_t *)&HouseClass_Player[30166]) )
    {
      char v137 = 0;
      v198[31] = 0;
      v198[23] = 0;
      *(_DWORD *)&v198[36] = 0;
      if ( *(int *)&HouseClass_Player[31628] <= 0 )
        goto LABEL_519;
      do
      {
        int v138 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] + 4 * *(_DWORD *)&v198[36]);
        if ( !_strcmpi(&HouseClass_Player[31636], (const void *)(v138 + 88)) )
        {
          CCFileClass::Construct(v200, (char *)(v138 + 88));
          if ( CCFileClass::Open(v200, 0)
            && CCFileClass::GetSize(v200) == *(_DWORD *)&HouseClass_Player[32184] )
          {
            *(_DWORD *)&v198[112] = 0;
            *(_DWORD *)&v198[116] = 0;
            *(_DWORD *)&v198[128] = 0;
            *(_DWORD *)&v198[132] = 0;
            *(_DWORD *)&v198[124] = &vt_GenericNode;
            *(_DWORD *)&v198[140] = 0;
            *(_DWORD *)&v198[144] = 0;
            *(_DWORD *)&v198[136] = &vt_GenericNode;
            *(_DWORD *)&v198[120] = &vt_GenericList;
            MixFileClass::LinkIntoPool(&v198[136]);
            *(_DWORD *)&v198[140] = *(_DWORD *)&v198[128];
            *(_DWORD *)&v198[144] = &v198[124];
            if ( *(_DWORD *)&v198[128] )
              *(_DWORD *)(*(_DWORD *)&v198[128] + 8) = &v198[136];
            *(_DWORD *)&v198[128] = &v198[136];
            *(_DWORD *)&v198[120] = &vt_List_INIClass_INISection;
            memset(&v198[148], 0, 13);
            *(_DWORD *)&v198[164] = 0;
            *(_DWORD *)&v198[168] = 0;
            *(_DWORD *)&v198[108] = &vt_INIClass;
            FileStraw::Open(&v198[108], (int)v200, 0);
            INIClass::GetString(
              (unsigned __int8 ***)&v198[108],
              &g_INI_Key_Digest,
              (unsigned __int8 *)&stru_830620[4728],
              (INIClass *)&stru_830620[4732],
              (INIClass *)aP0_160[32],
              32);
            if ( !HouseClass_Player[32150] || !strcmp(&HouseClass_Player[32150], aP0_160[32]) )
            {
              wcscpy((wchar_t *)&HouseClass_Player[30166], (const wchar_t *)v138);
              v137 = 1;
            }
            HashTable::DestroyHashTableINIClass((void **)&v198[108]);
          }
          v200[0] = (int)&vt_CCFileClass;
          int v203 = 0;
  char v201[8]; // [esp+168h] [ebp-28Ch] BYREF
          Vector::Clear((int)v201);
          v200[0] = (int)&off_7E1668;
          BufferIOFileClass::Dtor(v200);
        }
        ++*(_DWORD *)&v198[36];
      }
      while ( *(int *)&v198[36] < *(int *)&HouseClass_Player[31628] );
      v198[31] = v137;
      if ( !v137 )
      {
LABEL_519:
        if ( WideString::Length((const wchar_t **)&v198[88]) )
        {
          v140 = WideString::GetOrEmpty((wchar_t **)&v198[88]);
          wcscpy((wchar_t *)&HouseClass_Player[30166], (const wchar_t *)v140);
        }
      }
      if ( *(_DWORD *)&HouseClass_Player[29936] )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 36))(*(_DWORD *)&HouseClass_Player[29936]);
    }
    ebp366 = (wchar_t **)MultiplayerGameMode::Find(*(void **)&HouseClass_Player[29956]);
    if ( ebp366 != *(wchar_t ***)&HouseClass_Player[29936] )
    {
      if ( *(_DWORD *)&HouseClass_Player[29936] )
        (*(void (**)(void))(**(_DWORD **)&HouseClass_Player[29936] + 156))();
      if ( ebp366 )
        (*((void (__thiscall **)(wchar_t **))*ebp366 + 8))(ebp366);
    }
    *(_DWORD *)&HouseClass_Player[29936] = ebp366;
    if ( ebp366 && !v198[23] )
    {
      (*((void (__thiscall **)(wchar_t **))*ebp366 + 31))(ebp366);
      NetworkLobby::FillOptionCombo();
    }
    v141 = (HWND)Dialog::FindByHandle((void *)0xC2);
    if ( !v141 )
    {
      v141 = (HWND)Dialog::FindByHandle((void *)0xC9);
      if ( !v141 )
      {
        v141 = (HWND)Dialog::FindByHandle((void *)0xBC);
        if ( !v141 )
          v141 = (HWND)Dialog::FindByHandle((void *)0xBD);
      }
    }
    v142 = GetDlgItem;
    if ( ebp366 )
    {
      v143 = GetDlgItem(v141, 1772);
      v145 = WideString::GetOrEmpty_Alt(ebp366 + 8);
      SendMessageA(v143, 0x4B2u, 0, (LPARAM)v145);
      v142 = GetDlgItem;
    }
    eax380 = v142(v141, 1448);
    SendMessageA(eax380, 0x4B2u, 0, 11055906);
    char v146 = v198[51];
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4692) = -1;
    *(_DWORD *)&HouseClass_Player[45112] = 0;
    *(_DWORD *)&HouseClass_Player[29952] = 2;
    if ( v146 == HouseClass_Player[32188]
      && *(_DWORD *)&v198[52] == *(_DWORD *)&HouseClass_Player[32184] )
    {
      if ( v198[23] )
        goto LABEL_430;
    }
    else
    {
      v198[23] = 0;
    }
    *(_DWORD *)v198 = &stru_830620[4704];
    Debug::Log();
    if ( HouseClass_Player[32188] && !v198[31] && _strcmpi(&HouseClass_Player[31636], aRandmapSed) )
    {
      if ( Dialog::FindByHandle((void *)0xC2)
        || Dialog::FindByHandle((void *)0xC9)
        || Dialog::FindByHandle((void *)0xBC)
        || Dialog::FindByHandle((void *)0xBD) )
      {
        *(_DWORD *)v198 = 11055906;
        v147 = GetStringCSF((wchar_t *)&stru_830620[4688], 0, &stru_830620[4536], 2068);
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v147, *(ObjectClass *)v198);
      }
      *((_BYTE *)&g_MatrixTransformState + 9138) = 0;
      v148 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v148 )
      {
        v148 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v148 )
        {
          v148 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v148 )
            v148 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      v149 = v142(v148, 1439);
      EnableWindow(v149, 0);
      v150 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v150 )
      {
        v150 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v150 )
        {
          v150 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v150 )
            v150 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      v151 = v142(v150, 1439);
      InvalidateRect(v151, 0, 0);
      v152 = &stru_830620[4684];
    }
    else
    {
      *((_BYTE *)&g_MatrixTransformState + 9138) = 1;
      v153 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v153 )
      {
        v153 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v153 )
        {
          v153 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v153 )
            v153 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      v154 = v142(v153, 1439);
      EnableWindow(v154, 1);
      v155 = (HWND)Dialog::FindByHandle((void *)0xC2);
      if ( !v155 )
      {
        v155 = (HWND)Dialog::FindByHandle((void *)0xC9);
        if ( !v155 )
        {
          v155 = (HWND)Dialog::FindByHandle((void *)0xBC);
          if ( !v155 )
            v155 = (HWND)Dialog::FindByHandle((void *)0xBD);
        }
      }
      v156 = v142(v155, 1439);
      InvalidateRect(v156, 0, 0);
      if ( HouseClass_Player[32188]
        || v198[31]
        || !_strcmpi(&HouseClass_Player[31636], aRandmapSed) )
      {
        v152 = &stru_830620[4652];
      }
      else
      {
        if ( Dialog::FindByHandle((void *)0xC2)
          || Dialog::FindByHandle((void *)0xC9)
          || Dialog::FindByHandle((void *)0xBC)
          || Dialog::FindByHandle((void *)0xBD) )
        {
          *(_DWORD *)v198 = 11055906;
          v157 = GetStringCSF((wchar_t *)&stru_830620[4660], 0, &stru_830620[4536], 2084);
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v157, *(ObjectClass *)v198);
        }
        v152 = &stru_830620[4656];
      }
    }
    Network::SendOptionsGame(v152);
    v158 = (HWND)Dialog::FindByHandle((void *)0xC2);
    if ( !v158 )
    {
      v158 = (HWND)Dialog::FindByHandle((void *)0xC9);
      if ( !v158 )
      {
        v158 = (HWND)Dialog::FindByHandle((void *)0xBC);
        if ( !v158 )
          v158 = (HWND)Dialog::FindByHandle((void *)0xBD);
      }
    }
    Session::PrepareGame(v158);
    if ( !*(_DWORD *)&HouseClass_Player[29936]
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 4))(*(_DWORD *)&HouseClass_Player[29936])
  int v159; // ecx
      || (v159 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4580),
          v159 > *(int *)&HouseClass_Player[32192]) )
    {
      v159 = *(_DWORD *)&HouseClass_Player[32192];
    }
    ResetLobbyFactionTable(v159);
    if ( *(_DWORD *)&v198[32] == 189 || *(_DWORD *)&v198[32] == 201 )
    {
      Current = Dialog::GetCurrent();
      Lobby::InvalidateFactionCombos(Current);
      v161 = Dialog::GetCurrent();
      Lobby::InvalidatePlayerSlots(v161);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
    }
LABEL_430:
    if ( !*(_DWORD *)&v198[24] )
      Dialog::ShowMessage(
        (ObjectClass *)0xFFFFFFFF,
        (CampaignScore *)&stru_830620[4608],
        *(ObjectClass *)&v198[4]);
    *(_DWORD *)&v198[92] = 0;
    char * v162 = strtok(0, (ObjectClass *)&stru_830620[4604]);
    if ( !v162 )
    {
LABEL_463:
      LOBYTE(v200[0]) = 0;
      ebp463 = &HouseClass_Player[30096];
      do
      {
        v179 = *(ObjectClass **)ebp463;
        v180 = (INIClass *)*((_DWORD *)ebp463 - 16);
        *(_DWORD *)v198 = *((_DWORD *)ebp463 + 8);
        v197 = v179;
        sprintf(&v198[56], (ObjectClass *)&stru_830620[4568], v180);
        strcat((char *)v200, &v198[56]);
        ebp463 += 4;
      }
      while ( (int)ebp463 < (int)&HouseClass_Player[30128] );
      int v181 = 0;
      char * v182 = &HouseClass_Player[30032];
      do
      {
        char * v183 = strtok(0, (ObjectClass *)&stru_830620[4604]);
        if ( !v183 )
          break;
        v197 = (ObjectClass *)&stru_830620[4604];
        v193 = 0;
        *((_DWORD *)v182 - 8) = atol(v183);
        char * v184 = strtok(v193->__pad_0, v197);
        if ( !v184 )
          break;
        v197 = (ObjectClass *)&stru_830620[4604];
        v193 = 0;
        *(_DWORD *)v182 = atol(v184);
        char * v185 = strtok(v193->__pad_0, v197);
        if ( !v185 )
          break;
        *((_DWORD *)v182 + 8) = atol(v185);
        if ( *(_DWORD *)v182 != -1 )
          ++v181;
        char * v186 = strtok(0, (ObjectClass *)&stru_830620[4604]);
        if ( !v186 )
          break;
        v197 = (ObjectClass *)&stru_830620[4604];
        v193 = 0;
        *((_DWORD *)v182 + 16) = atol(v186);
        char * v187 = strtok(v193->__pad_0, v197);
        if ( !v187 )
          break;
        *((_DWORD *)v182 + 24) = atol(v187);
        v182 += 4;
      }
      while ( (int)v182 < (int)&HouseClass_Player[30064] );
      *(_DWORD *)&HouseClass_Player[29992] = v181;
      v198[108] = 0;
      char * v188 = &HouseClass_Player[30096];
      do
      {
        v189 = *(ObjectClass **)v188;
        v190 = (INIClass *)*((_DWORD *)v188 - 16);
        *(_DWORD *)v198 = *((_DWORD *)v188 + 8);
        v197 = v189;
        sprintf(&v198[56], (ObjectClass *)&stru_830620[4568], v190);
        strcat(&v198[108], &v198[56]);
        v188 += 4;
      }
      while ( (int)v188 < (int)&HouseClass_Player[30128] );
      if ( strcmp((const char *)v200, &v198[108]) )
        v198[22] = 1;
      free(*(void **)&v198[40]);
      if ( *(_DWORD *)&HouseClass_Player[29932] != 4 || !UI_Setup_77CF40() )
      {
        v191 = (HWND)Dialog::FindByHandle((void *)0xC2);
        if ( !v191 )
        {
          v191 = (HWND)Dialog::FindByHandle((void *)0xC9);
          if ( !v191 )
          {
            v191 = (HWND)Dialog::FindByHandle((void *)0xBC);
            if ( !v191 )
              v191 = (HWND)Dialog::FindByHandle((void *)0xBD);
          }
        }
        InitSkirmishDialogControls(v191, 0);
      }
      if ( *(_DWORD *)&stru_830620[4300] != *(_DWORD *)&HouseClass_Player[29980] )
        v198[22] = 1;
      if ( *(_DWORD *)&stru_830620[4304] != *(_DWORD *)&HouseClass_Player[29968] )
        v198[22] = 1;
      if ( *(_DWORD *)&stru_830620[4308] != *(_DWORD *)&HouseClass_Player[29988] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9139) != HouseClass_Player[29974] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9140) != HouseClass_Player[29975] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9141) != HouseClass_Player[29976] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9142) != HouseClass_Player[30164] )
        v198[22] = 1;
      if ( *((_BYTE *)&g_MatrixTransformState + 9143) != HouseClass_Player[29973] )
        v198[22] = 1;
      if ( *(_DWORD *)&stru_830620[4312] != *(_DWORD *)&HouseClass_Player[44572] )
        v198[22] = 1;
      if ( !v198[23] || v198[22] )
        SendMultiplayerStartSignal();
      if ( *(_DWORD *)&v198[32] != 188 && *(_DWORD *)&v198[32] != 189 )
      {
        v192 = (HWND)Dialog::FindByHandle((void *)0xC2);
        if ( !v192 )
        {
          v192 = (HWND)Dialog::FindByHandle((void *)0xC9);
          if ( !v192 )
          {
            v192 = (HWND)Dialog::FindByHandle((void *)0xBC);
            if ( !v192 )
              v192 = (HWND)Dialog::FindByHandle((void *)0xBD);
          }
        }
        SendDlgItemMessageA(v192, 1342, 0x49Du, 0, 0);
      }
      if ( *(&g_MatrixTransformState + 2263) )
        DisplayRankingsThunkWOL();
      else
        RetVtableStubZero_eax_27();
      *(_DWORD *)&stru_830620[4300] = *(_DWORD *)&HouseClass_Player[29980];
      *(_DWORD *)&stru_830620[4304] = *(_DWORD *)&HouseClass_Player[29968];
      *(_DWORD *)&stru_830620[4308] = *(_DWORD *)&HouseClass_Player[29988];
      *(_WORD *)((char *)&g_MatrixTransformState + 9139) = *(_WORD *)&HouseClass_Player[29974];
      *((_BYTE *)&g_MatrixTransformState + 9141) = HouseClass_Player[29976];
      *((_BYTE *)&g_MatrixTransformState + 9142) = HouseClass_Player[30164];
      *((_BYTE *)&g_MatrixTransformState + 9143) = HouseClass_Player[29973];
      *(_DWORD *)&stru_830620[4312] = *(_DWORD *)&HouseClass_Player[44572];
      DeleteAndZero::Alt((void **)&v198[88]);
      return v198[23] == 0;
    }
    while ( 1 )
    {
      *(_DWORD *)&v198[24] = v162;
      if ( !strcmp(v162, &stru_830620[4600]) )
        goto LABEL_463;
      char * v163 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v163 )
        goto LABEL_463;
      *(_DWORD *)&v198[44] = atol(v163);
      char * v164 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v164 )
        goto LABEL_463;
      v165 = (CCINIClass *)atol(v164);
      char * v166 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v166 )
        goto LABEL_463;
      *(_DWORD *)&v198[52] = atol(v166);
      char * v167 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v167 )
        goto LABEL_463;
      v169 = (CCINIClass *)atol(v167);
      eax438 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !eax438 )
        goto LABEL_463;
      sscanf(eax438, (const char *const)&stru_825BAC.objectTypeFlags, &v198[92]);
      if ( !*(_DWORD *)&v198[92] || *(_DWORD *)&HouseClass_Player[29932] != 4 )
        goto LABEL_449;
      int v170 = 0;
      v171 = (SessionClass *)&HouseClass_Player[40260];
      while ( 1 )
      {
        char * v172 = ToWideStringChar((IUnknown *)v171->GameMode[0]);
        if ( !_strcmpi(*(const void **)&v198[24], v172) )
          break;
        v171 = (SessionClass *)((char *)v171 + 4);
        ++v170;
        if ( (int)v171 >= (int)&HouseClass_Player[40292] )
          goto LABEL_448;
      }
      *(_DWORD *)&v198[56] = *(_DWORD *)&v198[92];
      *(_WORD *)&v198[60] = 0;
      *(_DWORD *)&v198[104] = 0;
      NetworkID::Assign((_DWORD *)(12 * v170 + 11066316), (IPXManagerClass *)&v198[104], (int)&v198[56], 0);
      char * v173 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( v173 )
      {
        sscanf(v173, (const char *const)&stru_825BAC.objectTypeFlags, &v198[100]);
        v195 = (ObjectClass *)&stru_830620[4604];
        v194 = 0;
        *(_DWORD *)&HouseClass_Player[21864][4 * v170 + 18808] = *(_DWORD *)&v198[100];
        char * v174 = strtok(v194, v195);
        if ( v174 )
        {
          sscanf(v174, (const char *const)&stru_825BAC.objectTypeFlags, &v198[96]);
          *(_DWORD *)&HouseClass_Player[21864][4 * v170 + 20348] = *(_DWORD *)&v198[96];
        }
      }
LABEL_448:
      if ( v170 == 8 )
      {
LABEL_449:
        strtok(0, (ObjectClass *)&stru_830620[4604]);
        strtok(0, (ObjectClass *)&stru_830620[4604]);
      }
      v176 = *(CCINIClass **)&v198[24];
      *(&g_MatrixTransformState + 2266) = (CoordStruct *)1;
      if ( !_strcmpi(*(const void **)&v198[24], &HouseClass_Player[30260])
        && v165 != *(CCINIClass **)&HouseClass_Player[30312] )
      {
        if ( !*(&g_MatrixTransformState + 2266) )
        {
          eax453 = GetStringCSF((wchar_t *)&stru_830620[4580], 0, &stru_830620[4536], 2230);
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)eax453, *(ObjectClass *)&v198[4]);
        }
        *(_DWORD *)&HouseClass_Player[30312] = v165;
      }
      if ( !_strcmpi(v176, &HouseClass_Player[30260]) )
        *(&g_MatrixTransformState + 2266) = 0;
      if ( !*(&g_MatrixTransformState + 2263) )
        goto LABEL_520;
      String::Assign((char **)&v198[36], v176->__pad_0);
      v178 = (CCINIClass *)SetupLobbyPlayerSlot(
                             (CCINIClass *)&v198[36],
                             *(CCINIClass **)&v198[44],
                             v165,
                             *(int *)&v198[52],
                             (int)v169);
      DeleteAndZero((int)&v198[36]);
      if ( v178 )
        goto LABEL_461;
      if ( !*(&g_MatrixTransformState + 2263) )
      {
LABEL_520:
        if ( UpdateMultiplayerPlayerOptions(v176, *(CCINIClass **)&v198[44], v165, *(int *)&v198[52], (int)v169) )
LABEL_461:
          v198[22] = 1;
      }
      v162 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v162 )
        goto LABEL_463;
    }
  }
  unsigned int v48 = strlen(Source->__pad_0) + 1;
  if ( (int)(v48 - 1) < 2 )
  {
    *(_DWORD *)v198 = *(_DWORD *)&v198[40];
    goto LABEL_102;
  }
  *(_DWORD *)v198 = Source;
  v197 = (ObjectClass *)&stru_830620[4908];
  if ( *(_BYTE *)(*(_DWORD *)&v198[40] + 1) != 48 )
  {
    Debug::Log();
    esi157 = 0;
    if ( MultiplayerGameMode::ListGet() >= 0 )
    {
      while ( 1 )
      {
        if ( MultiplayerGameMode::Find(esi157) )
        {
          v72 = (GameSetup *)MultiplayerGameMode::Find(esi157);
          v74 = WideString::GetOrEmpty_Alt((wchar_t **)&v72[1].GameSetup_field_0x04);
          *(_DWORD *)v198 = ToWideStringChar((IUnknown *)v74);
          v197 = (ObjectClass *)esi157;
          v193 = (CCINIClass *)&stru_830620[4828];
          Debug::Log();
          if ( (int)(v48 - 1) < 3 )
          {
            *(_DWORD *)v198 = *(_DWORD *)&v198[40];
            goto LABEL_102;
          }
          int v75 = MultiplayerGameMode::Find(esi157);
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v75 + 116))(
            v75,
            *(char *)(*(_DWORD *)&v198[40] + 1) - 48,
            *(_DWORD *)&v198[40] + 2);
        }
        esi157 = (IUnknown *)((char *)esi157 + 1);
        if ( (int)esi157 > MultiplayerGameMode::ListGet() )
        {
          *(_DWORD *)v198 = *(_DWORD *)&v198[40];
          goto LABEL_102;
        }
      }
    }
LABEL_13:
    *(_DWORD *)v198 = *(_DWORD *)&v198[40];
    goto LABEL_102;
  }
  Debug::Log();
  *(_DWORD *)&v198[24] = -1;
  *(_DWORD *)&v198[60] = 0;
  *(_DWORD *)&v198[64] = 0;
  *(_WORD *)&v198[68] = 1;
  *(_DWORD *)&v198[56] = &vt_DynamicVectorClass_int;
  *(_DWORD *)&v198[76] = 10;
  *(_DWORD *)&v198[72] = 0;
  *(_DWORD *)&v198[32] = 0;
  *(_DWORD *)&v198[36] = 0;
  char * v49 = strtok((char *)(*(_DWORD *)&v198[40] + 2), (ObjectClass *)&stru_817F40.nextObject);
  if ( v49 )
    *(_DWORD *)&v198[24] = atol(v49);
  char * v50 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v50 )
    *(_DWORD *)&v198[36] = atol(v50);
  char * v51 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v51 )
    *(_DWORD *)&v198[32] = atol(v51);
  char * v52 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v52 )
    v239 = (CCINIClass *)atol(v52);
  char * v53 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v53 )
    v206 = atol(v53);
  char * v54 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v54 )
    v238 = (CCINIClass *)atol(v54);
  char * v55 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v55 )
    v207 = atol(v55);
  char * v56 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v56 )
    v200[16] = atol(v56);
  char * v57 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v57 )
    v200[20] = atol(v57);
  char * v58 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v58 )
    v200[12] = atol(v58);
  char * v59 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v59 )
    v202 = atol(v59);
  for ( ii = 0; ii < 10; ++ii )
  {
    char * v61 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( !v61 )
      break;
    v62 = (CCINIClass *)atol(v61);
    if ( (int)v62 < 0 )
      break;
    if ( *(int *)&v198[72] < *(int *)&v198[64]
      || (v198[69] || !*(_DWORD *)&v198[64])
      && *(int *)&v198[76] > 0
      && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&v198[56] + 8))(
           &v198[56],
           *(_DWORD *)&v198[76] + *(_DWORD *)&v198[64],
           0) )
    {
      int v63 = (*(_DWORD *)&v198[72])++;
      *(_DWORD *)(*(_DWORD *)&v198[60] + 4 * v63) = v62;
    }
  }
  v64 = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  char * v65 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  *(_DWORD *)&v198[44] = v65;
  if ( v64 && v65 )
  {
    for ( jj = 0; (int)jj <= MultiplayerGameMode::ListGet(); jj = (IUnknown *)((char *)jj + 1) )
    {
      if ( MultiplayerGameMode::Find(jj) )
      {
        v66 = (GameSetup *)MultiplayerGameMode::Find(jj);
        v68 = WideString::GetOrEmpty_Alt((wchar_t **)&v66[1].GameSetup_field_0x04);
        *(_DWORD *)v198 = ToWideStringChar((IUnknown *)v68);
        v197 = (ObjectClass *)jj;
        v193 = (CCINIClass *)&stru_830620[4868];
        Debug::Log();
        int * v69 = (int *)MultiplayerGameMode::Find(jj);
        *(_DWORD *)v198 = *(_DWORD *)&v198[44];
        v197 = v64;
        int v70 = *v69;
        DynamicVectorClass::Copy(_FFFFFFF4, (DynamicVector *)&v198[56]);
        if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD, char *, ObjectClass *, CCINIClass *, ObjectClass *, _DWORD))(v70 + 88))(
               v69,
               *(_DWORD *)&v198[24],
               _FFFFFFF4[0],
               _FFFFFFF4[1],
               _FFFFFFF4[2],
               v194,
               v195,
               v193,
               v197,
               *(_DWORD *)v198) )
        {
          int v71 = MultiplayerGameMode::Find(jj);
          (*(void (__thiscall **)(int, _DWORD, _DWORD, int *))(*(_DWORD *)v71 + 92))(
            v71,
            *(_DWORD *)&v198[36],
            *(_DWORD *)&v198[32],
            v200);
        }
      }
    }
    *(_DWORD *)&v198[56] = &vt_VectorClass_int;
    if ( *(_DWORD *)&v198[60] && v198[69] )
    {
      __3_YAXPAX_Z(*(void **)&v198[60]);
      *(_DWORD *)v198 = *(_DWORD *)&v198[40];
      goto LABEL_102;
    }
    goto LABEL_13;
  }
  free(*(void **)&v198[40]);
  *(_DWORD *)&v198[56] = &vt_VectorClass_int;
  if ( !*(_DWORD *)&v198[60] || !v198[69] )
    return 0;
  __3_YAXPAX_Z(*(void **)&v198[60]);
  return 0;
}

} // namespace gamemd

// 0x5E5F10
namespace gamemd {
AbstractClass * * RehashGenericHashMap(HWND hWnd, int a2)
{
{
  __int16 WindowLongA; // ax
  void **v7; // eax
  void **v8; // edi
  void ***v9; // eax
  void **v10; // ecx
  LRESULT v12; // eax
  AbstractClass *v13; // edi
  void **v14; // eax
  void **v15; // edi
  void ***v16; // edx
  void **v17; // eax
  int *i; // [esp+14h] [ebp-C18h]
  void *Block; // [esp+18h] [ebp-C14h]
  LPARAM v33[256]; // [esp+2Ch] [ebp-C00h] BYREF
  wchar_t lParam[1024]; // [esp+42Ch] [ebp-800h] BYREF

  void * v4 = (void *)SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e5f30*/
  Block = v4; /*0x5e5f36*/
  void *v28; // [esp+10h] [ebp-C1Ch] BYREF
  unknown_libname_74(&v28); /*0x5e5f3a*/
  if ( v4 ) /*0x5e5f41*/
  {
  __int64 v31; // [esp+1Ch] [ebp-C10h]
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e5f4a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e5f52*/
    {
      AbstractClass *v6 = 0; /*0x5e5f5c*/
      for ( i = 0; v6 < (int)Block; i = (int *)v6 ) /*0x5e5f64*/
      {
        if ( SendMessageA(hWnd, 0x187u, v6, 0) ) /*0x5e5f73*/
        {
          if ( SendMessageA(hWnd, 0x4CFu, v6, 0) ) /*0x5e5f86*/
          {
            SendMessageA(hWnd, 0x4B6u, v6, (LPARAM)lParam); /*0x5e5f9b*/
          }
          else
          {
            SendMessageA(hWnd, 0x4B7u, v6, (LPARAM)v33); /*0x5e5fab*/
            BulkCharToWide(lParam, (unsigned __int8 *)v33, -1); /*0x5e5fba*/
          }
          WideString::Assign_Alt(&v28, lParam); /*0x5e5fcb*/
          v7 = (void **)__2_YAPAXI_Z(0xCu); /*0x5e5fd2*/
          v8 = v7; /*0x5e5fd7*/
          if ( v7 ) /*0x5e5fde*/
            unknown_libname_74(v7); /*0x5e5fe2*/
          GameSetup *v8 = 0; /*0x5e5fe9*/
          WideString::Reassign_Alt(v8, (const wchar_t **)&v28); /*0x5e5ff2*/
          v8->q004 = 1; /*0x5e5ffb*/
          v8[2] = 0; /*0x5e5fff*/
          v9 = (void ***)(*(_DWORD *)a2 /*0x5e6018*/
                        + 4 * ((*(int (__thiscall **)(void **))(a2 + 24))(&v28) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
          v10 = *v9; /*0x5e601d*/
          *v9 = v8; /*0x5e601f*/
          if ( v10 ) /*0x5e6023*/
            v8[2] = v10; /*0x5e6025*/
          int v11 = *(_DWORD *)(a2 + 4); /*0x5e6028*/
  __int64 v32; // [esp+24h] [ebp-C08h]
          HIDWORD(v32) = 0; /*0x5e602b*/
          ++v11; /*0x5e602f*/
          HIDWORD(v31) = 0; /*0x5e6030*/
          *(_DWORD *)(a2 + 4) = v11; /*0x5e6034*/
          LODWORD(v32) = v11; /*0x5e6037*/
          LODWORD(v31) = *(_DWORD *)(a2 + 8); /*0x5e6042*/
          if ( (double)v32 / (double)(int)v31 >= *(double *)(a2 + 40) ) /*0x5e6052*/
            Map_Helper_5EF010((_DWORD *)a2); /*0x5e6056*/
          v6 = (signed int)i; /*0x5e605b*/
        }
        ++v6; /*0x5e6063*/
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6078*/
    {
      v12 = SendMessageA(hWnd, 0x188u, 0, 0); /*0x5e6088*/
      v13 = v12; /*0x5e608a*/
      if ( v12 >= 0 ) /*0x5e608e*/
      {
        lParam[0] = 0; /*0x5e609d*/
        if ( SendMessageA(hWnd, 0x4CFu, v12, 0) ) /*0x5e60a7*/
        {
          SendMessageA(hWnd, 0x4B6u, v13, (LPARAM)lParam); /*0x5e60bc*/
        }
        else
        {
          SendMessageA(hWnd, 0x4B7u, v13, (LPARAM)v33); /*0x5e60cc*/
          BulkCharToWide(lParam, (unsigned __int8 *)v33, -1); /*0x5e60db*/
        }
        WideString::Assign_Alt(&v28, lParam); /*0x5e60ec*/
        v14 = (void **)__2_YAPAXI_Z(0xCu); /*0x5e60f3*/
        v15 = v14; /*0x5e60f8*/
        if ( v14 ) /*0x5e60ff*/
          unknown_libname_74(v14); /*0x5e6103*/
        MultiplayerGameMode *v15 = 0; /*0x5e610a*/
        WideString::Reassign_Alt(v15, (const wchar_t **)&v28); /*0x5e6113*/
        v15->q004 = 1; /*0x5e611e*/
        v15[2] = 0; /*0x5e6122*/
        v16 = (void ***)(*(_DWORD *)a2 /*0x5e6137*/
                       + 4 * ((*(int (__thiscall **)(void **))(a2 + 24))(&v28) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
        v17 = *v16; /*0x5e613a*/
        *v16 = v15; /*0x5e613c*/
        if ( v17 ) /*0x5e6140*/
          v15[2] = v17; /*0x5e6142*/
        int v18 = *(_DWORD *)(a2 + 8); /*0x5e6148*/
        int v19 = *(_DWORD *)(a2 + 4) + 1; /*0x5e614b*/
        v31 = (unsigned int)v19; /*0x5e6150*/
        *(_DWORD *)(a2 + 4) = v19; /*0x5e6154*/
        double v20 = (double)v31; /*0x5e6157*/
        v31 = (unsigned int)v18; /*0x5e615b*/
        if ( v20 / (double)v18 >= *(double *)(a2 + 40) && *(_BYTE *)(a2 + 20) != 1 ) /*0x5e6179*/
        {
          Block = *(void **)a2; /*0x5e6184*/
          int v21 = *(_DWORD *)(a2 + 12) + 1; /*0x5e6192*/
          *(_DWORD *)(a2 + 8) = 2 * v18; /*0x5e6194*/
          *(_DWORD *)(a2 + 12) = v21; /*0x5e6197*/
          void * v22 = __2_YAPAXI_Z(8 * v18); /*0x5e61a2*/
          unsigned int v23 = 4 * *(_DWORD *)(a2 + 8); /*0x5e61a7*/
          *(_DWORD *)a2 = v22; /*0x5e61ae*/
          memset(v22, 0, v23); /*0x5e61b3*/
          if ( v18 > 0 ) /*0x5e61be*/
          {
            i = (int *)Block; /*0x5e61c4*/
            do /*0x5e6206*/
            {
              int v24 = *i; /*0x5e61cc*/
              if ( *i ) /*0x5e61cc*/
              {
  int v27; // eax
                do /*0x5e61f8*/
                {
                  int v25 = (*(int (__thiscall **)(int))(a2 + 24))(v24) & ((1 << *(_DWORD *)(a2 + 12)) - 1); /*0x5e61e2*/
                  int v26 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v25); /*0x5e61e6*/
                  *(_DWORD *)(*(_DWORD *)a2 + 4 * v25) = v24; /*0x5e61ec*/
                  v27 = *(_DWORD *)(v24 + 8); /*0x5e61ee*/
                  *(_DWORD *)(v24 + 8) = v26; /*0x5e61f1*/
                  v24 = v27; /*0x5e61f6*/
                }
                while ( v27 ); /*0x5e61f8*/
              }
              --v18; /*0x5e6201*/
              ++i; /*0x5e6202*/
            }
            while ( v18 ); /*0x5e6206*/
          }
          __3_YAXPAX_Z(Block); /*0x5e620d*/
        }
      }
    }
  }
  DeleteAndZero::Alt(&v28); /*0x5e6219*/
}
} // namespace gamemd

// 0x5E6230
namespace gamemd {
void ProcessComboBoxAddString(HWND hWnd, int a2)
{
{
  void (__stdcall *v2)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v5; // edi
  __int16 WindowLongA; // ax
  LPARAM v7; // edi
  CampaignScore *v17; // eax
  LRESULT v18; // eax
  wchar_t lParam[1024]; // [esp+20h] [ebp-C00h] BYREF
  LPARAM v23[256]; // [esp+820h] [ebp-400h] BYREF

  v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6239*/
  v5 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e6250*/
  int v20 = v5; /*0x5e6256*/
  void *v19; // [esp+10h] [ebp-C10h] BYREF
  unknown_libname_74(&v19); /*0x5e625a*/
  if ( v5 ) /*0x5e6261*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e626a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e6272*/
    {
      v7 = 0; /*0x5e627c*/
      if ( v20 > 0 ) /*0x5e6280*/
      {
        while ( 1 ) /*0x5e628e*/
        {
          if ( v2(hWnd, 0x4CFu, v7, 0) ) /*0x5e6297*/
          {
            v2(hWnd, 0x4B6u, v7, (LPARAM)lParam); /*0x5e62a9*/
          }
          else
          {
            v2(hWnd, 0x4B7u, v7, (LPARAM)v23); /*0x5e62bc*/
            BulkCharToWide(lParam, (unsigned __int8 *)v23, -1); /*0x5e62cb*/
          }
          WideString::Assign_Alt(&v19, lParam); /*0x5e62d9*/
  int v8; // esi
          v8 = *(_DWORD *)(*(_DWORD *)a2 /*0x5e62f4*/
                         + 4 * ((*(int (__thiscall **)(void **))(a2 + 24))(&v19) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
          if ( v8 ) /*0x5e62f9*/
          {
            while ( !SendMultiplayerStartSignal_Start_77EBA0_Start((const wchar_t **)v8, (const wchar_t **)&v19) ) /*0x5e6309*/
            {
              v8 = *(_DWORD *)(v8 + 8); /*0x5e630b*/
              if ( !v8 ) /*0x5e6310*/
                goto LABEL_14; /*0x5e6310*/
            }
            SendMessageA(hWnd, 0x185u, 1u, v7); /*0x5e631d*/
          }
LABEL_14:
          if ( ++v7 >= v20 ) /*0x5e632a*/
            break; /*0x5e632a*/
          v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6288*/
        }
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6338*/
    {
      int v9 = *(_DWORD *)(a2 + 4); /*0x5e633e*/
      int v10 = 0; /*0x5e6341*/
      if ( v9 ) /*0x5e6345*/
      {
        int v11 = *(_DWORD *)(a2 + 8); /*0x5e634b*/
        __int64 v21 = (unsigned int)(v9 - 1); /*0x5e634f*/
        *(float *)&v21 = (double)v21 / (double)v11; /*0x5e6369*/
        if ( v11 > 0 ) /*0x5e636d*/
        {
          _DWORD * v12 = *(_DWORD **)a2; /*0x5e6375*/
          while ( !*v12 ) /*0x5e637a*/
          {
            ++v10; /*0x5e637c*/
            ++v12; /*0x5e637d*/
            if ( v10 >= v11 ) /*0x5e6382*/
              goto LABEL_30; /*0x5e6382*/
          }
          if ( v10 != -1 ) /*0x5e638c*/
          {
            WideString::Reassign_Alt(&v19, *(const wchar_t ***)(*(_DWORD *)a2 + 4 * v10)); /*0x5e639a*/
            AbstractClass *v13 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v10); /*0x5e63a1*/
            v20 = v13->vtable3; /*0x5e63a9*/
            if ( v13 ) /*0x5e63ad*/
            {
              DeleteAndZero::Alt((void **)v13); /*0x5e63b1*/
              __3_YAXPAX_Z((void *)v13); /*0x5e63b7*/
            }
            double v14 = *(float *)&v21; /*0x5e63c5*/
            *(_DWORD *)(*(_DWORD *)a2 + 4 * v10) = v20; /*0x5e63c9*/
            bool v15 = v14 < *(double *)(a2 + 32); /*0x5e63cf*/
            bool v16 = v14 == *(double *)(a2 + 32); /*0x5e63cf*/
            --*(_DWORD *)(a2 + 4); /*0x5e63d3*/
            if ( v15 || v16 ) /*0x5e63d8*/
              String_Process((_DWORD *)a2); /*0x5e63df*/
            v17 = WideString::GetOrEmpty((wchar_t **)&v19); /*0x5e63e8*/
            wcscpy(lParam, v17); /*0x5e63f3*/
            v18 = SendMessageA(hWnd, 0x4CAu, 0xFFFFFFFF, (LPARAM)lParam); /*0x5e640e*/
            if ( v18 != -1 ) /*0x5e6413*/
              SendMessageA(hWnd, 0x186u, v18, 0); /*0x5e641e*/
          }
        }
      }
    }
  }
LABEL_30:
  DeleteAndZero::Alt(&v19); /*0x5e6420*/
}
} // namespace gamemd

// 0x5E6520
namespace gamemd {
AbstractClass * * Map_ReadPlayerCount(int a1)
{
{
  int Int_Overwrite; // edi
  int i; // esi
  _BYTE v11[12]; // [esp+A4h] [ebp-B8h] BYREF
  int v12; // [esp+B0h] [ebp-ACh]
  char Buffer[32]; // [esp+B8h] [ebp-A4h] BYREF
  char Source[132]; // [esp+D8h] [ebp-84h] BYREF

  if ( a1 < 0 || a1 >= g_MultiplayerOptions ) /*0x5e6539*/
    return 0; /*0x5e6539*/
  strcpy(Source, (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * a1) + 88)); /*0x5e6565*/
  _DWORD v10[22]; // [esp+4Ch] [ebp-110h] BYREF
  CCFileClass::Construct(v10, Source); /*0x5e657a*/
  void *v4[4]; // [esp+Ch] [ebp-150h] BYREF
  v4[1] = 0; /*0x5e6583*/
  v4[2] = 0; /*0x5e6587*/
  _DWORD v5[3]; // [esp+1Ch] [ebp-140h] BYREF
  GenericNode::Constructor(v5); /*0x5e658b*/
  _DWORD v6[6]; // [esp+28h] [ebp-134h] BYREF
  GenericNode::Constructor(v6); /*0x5e6594*/
  LinkedList::Prepend(v5, (int)v6); /*0x5e65aa*/
  v4[3] = &vt_List_INIClass_INISection; /*0x5e65b9*/
  memset(&v6[3], 0, 12); /*0x5e65c1*/
  char v7 = 0; /*0x5e65cd*/
  int v8 = 0; /*0x5e65d1*/
  int v9 = 0; /*0x5e65d5*/
  v4[0] = &vt_INIClass; /*0x5e65d9*/
  if ( !FileStraw::Open(v4, (int)v10, 0) ) /*0x5e65e1*/
  {
    HashTable::DestroyHashTableINIClass(v4); /*0x5e65ee*/
    v10[0] = &vt_CCFileClass; /*0x5e65fa*/
    v12 = 0; /*0x5e6602*/
    Vector::Clear((int)v11); /*0x5e6609*/
    v10[0] = &off_7E1668; /*0x5e6612*/
    BufferIOFileClass::Dtor(v10); /*0x5e661a*/
    return 0; /*0x5e662a*/
  }
  Int_Overwrite = 0; /*0x5e662b*/
  for ( i = 0; i < 8; ++i ) /*0x5e662d*/
  {
    sprintf(Buffer, g_Str_Trace__d, i); /*0x5e663d*/
    if ( INIClass::ReadInt_Overwrite(g_INI_Key_Waypoints, Buffer, -1) != -1 ) /*0x5e6660*/
      ++Int_Overwrite; /*0x5e6662*/
  }
  if ( !Int_Overwrite ) /*0x5e666b*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite(g_INI_Key_RandomMap, g_INI_Key_NumPlayers, 0); /*0x5e6681*/
    if ( !Int_Overwrite ) /*0x5e6685*/
      Int_Overwrite = 8; /*0x5e6687*/
  }
  HashTable::DestroyHashTableINIClass(v4); /*0x5e6690*/
  v10[0] = &vt_CCFileClass; /*0x5e669c*/
  v12 = 0; /*0x5e66a4*/
  Vector::Clear((int)v11); /*0x5e66ab*/
  v10[0] = &off_7E1668; /*0x5e66b4*/
  BufferIOFileClass::Dtor(v10); /*0x5e66bc*/
  return Int_Overwrite; /*0x5e661f*/
}
} // namespace gamemd

// 0x5E66F0
namespace gamemd {
char sub_5E66F0()
{
{
  LRESULT v0; // eax
  LRESULT v1; // eax
  ObjectClass *v3; // edx
  ObjectClass *v4; // ebx
  ObjectClass *v6; // eax
  SkirmishDialog *v7; // esi
  LRESULT v8; // eax
  CreateGameDialogControl *v9; // ecx
  const wchar_t *v10; // eax

  v0 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x199u, v0, 0); /*0x5e672c*/
    int v2 = 0; /*0x5e6734*/
    if ( *(int *)&HouseClass_Player[31628] > 0 ) /*0x5e6738*/
    {
      v3 = *(ObjectClass **)&HouseClass_Player[31616]; /*0x5e673e*/
      while ( v1 != *(_DWORD *)v3->__pad_0 ) /*0x5e6746*/
      {
        ++v2; /*0x5e6748*/
        v3 = (ObjectClass *)((char *)v3 + 4); /*0x5e6749*/
        if ( v2 >= *(int *)&HouseClass_Player[31628] ) /*0x5e674e*/
          goto LABEL_20; /*0x5e674e*/
      }
      if ( v2 != -1 && (CoordStruct *)v2 != *(&g_MatrixTransformState + 1992) ) /*0x5e6764*/
      {
        LoadScenarioClassByIndex(v2); /*0x5e676c*/
        if ( IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] + 4 * v2)) ) /*0x5e677a*/
        {
          v4 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x5e6783*/
          if ( *(&g_MatrixTransformState + 2257) ) /*0x5e678b*/
          {
            ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x5e678f*/
            __3_YAXPAX_Z(v4); /*0x5e6795*/
          }
          _DWORD * v5 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = (ObjectClass *)unknown_libname_27(v5); /*0x5e67ad*/
          ObjectClass *v6 = 0; /*0x5e67b4*/
          *(&g_MatrixTransformState + 2257) = (CoordStruct *)v6; /*0x5e67bd*/
          Surface::LoadToSurfaceSHP((char **)v6, stru_829ABC[0]); /*0x5e67c2*/
          if ( !(*(&g_MatrixTransformState + 2257))->X ) /*0x5e67cc*/
            Session::PrepareGame((HWND)*(&g_MatrixTransformState + 1996)); /*0x5e67d7*/
          InvalidateRect((HWND)*(&g_MatrixTransformState + 1996), 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame((HWND)*(&g_MatrixTransformState + 1996)); /*0x5e67fa*/
        }
        *(&g_MatrixTransformState + 1992) = (CoordStruct *)v2; /*0x5e6805*/
        *(_DWORD *)&HouseClass_Player[29960] = *(&g_MatrixTransformState + 2228); /*0x5e680b*/
        LoadScenarioClassByIndex((int)*(&g_MatrixTransformState + 2228)); /*0x5e6811*/
      }
    }
  }
LABEL_20:
  v7 = (SkirmishDialog *)*(&g_MatrixTransformState + 1996); /*0x5e6816*/
  v8 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v10 = (const wchar_t *)SendDlgItemMessageA((HWND)v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    *((_WORD *)&g_MatrixTransformState + 4188) = 0; /*0x5e6857*/
  else
    wcscpy((wchar_t *)&g_MatrixTransformState + 4188, v10); /*0x5e684d*/
  switch ( *(_DWORD *)&HouseClass_Player[29932] ) /*0x5e686b*/
  {
    case 3: /*0x5e686b*/
      return sub_5DAF20(); /*0x5e686d*/
    case 4: /*0x5e686b*/
      return Game::ProcessIdle(v9); /*0x5e6877*/
    case 1: /*0x5e686b*/
    case 2: /*0x5e686b*/
      if ( *(&g_MatrixTransformState + 191) ) /*0x5bb268*/
      {
        CellClass::SetOccupancy((int)*(&g_MatrixTransformState + 191), 0); /*0x5bb26c*/
        ModemGuest::ProcessPacket((int)*(&g_MatrixTransformState + 191), (ModemHost *)1); /*0x5bb279*/
      }
      break;
  }
  Event::Dispatch(); /*0x5bb27e*/
  return 0; /*0x5e6865*/
}
} // namespace gamemd

// 0x5E7160
namespace gamemd {
SkirmishDialog * * E4Recv_5E7160::HandleMultiplayerMapSelection()
{
{
  LRESULT v1; // eax
  LRESULT v2; // eax
  CampaignScore *v3; // esi
  ObjectClass *i; // edx
  SkirmishDialog *v6; // ebp
  wchar_t **v7; // esi
  SkirmishDialog *v8; // ebx
  LRESULT v9; // eax
  int PlayerCountMap; // edi
  SkirmishDialog *v13; // ecx
  char bl20; // bl
  char v14; // al
  CellStruct *StringCSF; // edi
  wchar_t *v17; // ebx
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  HWND v20; // edi
  HWND DlgItem; // ebx
  CampaignScore *v23; // eax
  LPARAM ebx47; // ebx
  HWND v24; // eax
  char v26; // [esp+13h] [ebp-Dh]
  CampaignScore *v27; // [esp+14h] [ebp-Ch]
  char v28; // [esp+18h] [ebp-8h]
  v1 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e7185*/
  if ( v1 == -1 ) /*0x5e718a*/
    return 0; /*0x5e718a*/
  v2 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x199u, v1, 0); /*0x5e71a0*/
  v3 = 0; /*0x5e71a8*/
  if ( *(int *)&HouseClass_Player[31628] <= 0 ) /*0x5e71b0*/
    return 0; /*0x5e71b0*/
  for ( i = *(ObjectClass **)&HouseClass_Player[31616]; /*0x5e71b2*/
        v2 != *(_DWORD *)i->__pad_0;
        i = (ObjectClass *)((char *)i + 4) )
  {
    v3 = (CampaignScore *)((char *)v3 + 1); /*0x5e71bc*/
    if ( (int)v3 >= *(int *)&HouseClass_Player[31628] ) /*0x5e71c2*/
      return 0; /*0x5e71d1*/
  }
  v27 = v3; /*0x5e71d5*/
  if ( v3 == (CampaignScore *)-1 ) /*0x5e71d9*/
    return 0; /*0x5e71e4*/
  v6 = *(SkirmishDialog **)&HouseClass_Player[29936]; /*0x5e71ea*/
  v7 = 0; /*0x5e71f0*/
  v8 = (SkirmishDialog *)*(&g_MatrixTransformState + 1996); /*0x5e71f2*/
  v9 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1771, 0x188u, 0, 0); /*0x5e7201*/
  if ( v9 != -1 ) /*0x5e7206*/
    v7 = (wchar_t **)SendDlgItemMessageA((HWND)v8, 1771, 0x199u, v9, 0); /*0x5e7217*/
  *(_DWORD *)&HouseClass_Player[29936] = v7; /*0x5e7219*/
  v26 = (*((int (__thiscall **)(wchar_t **))*v7 + 16))(v7); /*0x5e7226*/
  v28 = (*((int (__thiscall **)(wchar_t **))*v7 + 47))(v7); /*0x5e7238*/
  PlayerCountMap = ReadPlayerCountMap((int)v27); /*0x5e7247*/
  if ( *(_DWORD *)&HouseClass_Player[29936] ) /*0x5e724b*/
  {
    int v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 152))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5e724f*/
    if ( v11 != -1 && v11 < PlayerCountMap ) /*0x5e725c*/
      PlayerCountMap = v11; /*0x5e725e*/
  }
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5e7267*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e7269*/
    {
      PlayerCountMap &= ~1u; /*0x5e7272*/
    }
    else if ( Network::IsMultiplayerActive() ) /*0x5e7277*/
    {
      PlayerCountMap = 2; /*0x5e7280*/
    }
  }
  v13 = v6; /*0x5e728a*/
  bl20 = 0; /*0x5e728c*/
  *(_DWORD *)&HouseClass_Player[29936] = v6; /*0x5e7291*/
  switch ( *(_DWORD *)&HouseClass_Player[29932] ) /*0x5e7297*/
  {
    case 3: /*0x5e7297*/
      v14 = Map_Handle(PlayerCountMap, v26, v28); /*0x5e72cb*/
      break;
    case 4: /*0x5e7297*/
      v14 = Map_Handle_7A2800(PlayerCountMap, v26, v28); /*0x5e72b9*/
      break;
    case 5: /*0x5e7297*/
      v14 = Map_Handle_6ACCA0(PlayerCountMap); /*0x5e72a5*/
      bl20 = 1; /*0x5e72aa*/
      break;
    default:
      goto LABEL_32; /*0x5e729d*/
  }
  if ( v14 ) /*0x5e72d2*/
  {
    char * v15 = &stru_830620[5164]; /*0x5e72d6*/
    if ( bl20 ) /*0x5e72db*/
      v15 = &stru_830620[5144]; /*0x5e72dd*/
    StringCSF = (CellStruct *)GetStringCSF((wchar_t *)v15, 0, &stru_830620[4536], 2963); /*0x5e7304*/
    v17 = GetStringCSF((wchar_t *)&stru_830620[5136], 0, &stru_830620[4536], 2964); /*0x5e731c*/
    v18 = GetStringCSF(aGuiCancel, 0, &stru_830620[4536], 2965); /*0x5e731e*/
  int v25; // [esp+0h] [ebp-20h]
    if ( Dialog::ShowMessageBox((int)StringCSF, v17, (Movie *)v18, 0, 0, v25) ) /*0x5e7336*/
      return 0; /*0x5e7348*/
  }
  v13 = *(SkirmishDialog **)&HouseClass_Player[29936]; /*0x5e7349*/
LABEL_32:
  if ( v7 != (wchar_t **)v13 ) /*0x5e7351*/
  {
    if ( v13 ) /*0x5e7355*/
      (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v13->__pad_0 + 156))(v13); /*0x5e7359*/
    if ( v7 ) /*0x5e7361*/
    {
      *(_DWORD *)&HouseClass_Player[29936] = v7; /*0x5e7367*/
      v19 = v7[10]; /*0x5e736d*/
      *(_DWORD *)&HouseClass_Player[29960] = v27; /*0x5e7370*/
      *(_DWORD *)&HouseClass_Player[29956] = v19; /*0x5e7376*/
      (*((void (__thiscall **)(wchar_t **))*v7 + 8))(v7); /*0x5e737f*/
    }
  }
  *(_DWORD *)&HouseClass_Player[29960] = v27; /*0x5e7388*/
  if ( v7 ) /*0x5e738d*/
    (*((void (__thiscall **)(wchar_t **))*v7 + 9))(v7); /*0x5e7393*/
  (*((void (__thiscall **)(wchar_t **))*v7 + 6))(v7); /*0x5e739a*/
  (*((void (__thiscall **)(wchar_t **))*v7 + 31))(v7); /*0x5e73a1*/
  CloseDialog(this, 1); /*0x5e73ad*/
  v20 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e73bc*/
  if ( !v20 ) /*0x5e73c0*/
  {
    v20 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e73cc*/
    if ( !v20 ) /*0x5e73d0*/
    {
      v20 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e73dc*/
      if ( !v20 ) /*0x5e73e0*/
        v20 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e73ec*/
    }
  }
  if ( v7 ) /*0x5e73f6*/
  {
    DlgItem = GetDlgItem(v20, 1772); /*0x5e7403*/
    v23 = WideString::GetOrEmpty_Alt(v7 + 8); /*0x5e7405*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v23); /*0x5e7413*/
  }
  if ( *(int *)&HouseClass_Player[29960] >= 0 /*0x5e7428*/
    && *(int *)&HouseClass_Player[29960] < *(int *)&HouseClass_Player[31628] )
  {
    ebx47 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] /*0x5e7430*/
                      + 4 * *(_DWORD *)&HouseClass_Player[29960]);
    if ( ebx47 ) /*0x5e7435*/
    {
      v24 = GetDlgItem(v20, 1448); /*0x5e743d*/
      SendMessageA(v24, 0x4B2u, 0, ebx47); /*0x5e7448*/
    }
  }
  (*((void (__thiscall **)(wchar_t **))*v7 + 24))(v7); /*0x5e7452*/
  return 1; /*0x5e71c8*/
}
} // namespace gamemd

// 0x5E7920
namespace gamemd {
void ExchangeMultiplayerGameInfo()
{
{
  char *FlaggedGameSettings; // eax
  int FileSize; // edi
  HWND CurrentDialog; // eax
  __int16 v16; // [esp+234h] [ebp-104h]
  Network::SetConnectionParams(g_NetworkManager, 50, -1, 5000, 1); /*0x5e7938*/
  Debug::Log(); /*0x5e7942*/
  int v15[113]; // [esp+70h] [ebp-2C8h] BYREF
  memset(v15, 0, sizeof(v15)); /*0x5e7957*/
  v16 = 0; /*0x5e7959*/
  char v17 = 0; /*0x5e795b*/
  v15[0] = 26; /*0x5e795c*/
  Debug::Log(); /*0x5e7964*/
  while ( 1 ) /*0x5e7977*/
  {
  int v0; // eax
    if ( g_GameMode_Current[0] == 3 ) /*0x5e7977*/
    {
      v0 = Network::SendMessage((int)g_NetworkManager, (int)v15, 455, 1, (int)&g_NetworkRematchObject, 0, 0); /*0x5e7996*/
    }
    else
    {
      FlaggedGameSettings = GameSettings::FindFlagged(); /*0x5e799d*/
      if ( !FlaggedGameSettings ) /*0x5e79a4*/
        break; /*0x5e79a4*/
      char * v2 = CharToWideString(FlaggedGameSettings + 36); /*0x5e79a9*/
      v0 = Network::SendToPlayer((int)g_NetworkManager, (int)v15, 455, 1, (wchar_t *)v2); /*0x5e79c0*/
    }
    if ( v0 ) /*0x5e79c7*/
      break; /*0x5e79c7*/
    Event::Dispatch(); /*0x5e79c9*/
  }
  while ( Network::GetQueueCount((int)g_NetworkManager) ) /*0x5e79d5*/
    Event::Dispatch(); /*0x5e79de*/
  Debug::Log(); /*0x5e79f6*/
  Network_EventValue = g_NetworkRematchObject; /*0x5e7a11*/
  DataGlobal_A8D808 = DataGlobal_A8BB20; /*0x5e7a17*/
  DataGlobal_A8D80C = DataGlobal_A8BB24; /*0x5e7a1c*/
  Debug::Log(); /*0x5e7a22*/
  char v18[256]; // [esp+238h] [ebp-100h] BYREF
  if ( RequestNetworkFile(v18, 3, 0) ) /*0x5e7a35*/
  {
    Debug::Log(); /*0x5e7a6f*/
  int v13[9]; // [esp+24h] [ebp-314h] BYREF
    RawFileClass::Construct(v13, (int)v18); /*0x5e7a83*/
    FileSize = CCFileClass::GetFileSize(v13); /*0x5e7a91*/
    char * v4 = (char *)__2_YAPAXI_Z(FileSize); /*0x5e7a9c*/
    FileClass::Read(v13, v4, FileSize); /*0x5e7aa4*/
    signed int v5 = *(_DWORD *)v4; /*0x5e7aa9*/
    Debug::Log(); /*0x5e7ab0*/
  int v11[3]; // [esp+8h] [ebp-330h] BYREF
    v11[1] = 0; /*0x5e7abf*/
    v11[2] = 0; /*0x5e7ac9*/
  _DWORD v12[4]; // [esp+14h] [ebp-324h] BYREF
    Buffer::Init(v12, (int)(v4 + 4), FileSize); /*0x5e7ad9*/
    v12[3] = 0; /*0x5e7ae2*/
    v11[0] = (int)&vt_BufferStraw; /*0x5e7af1*/
  int v14[10]; // [esp+48h] [ebp-2F0h] BYREF
    LZOStraw::Constructor(v14, 1, 0x2000); /*0x5e7af9*/
    Delegate::Set(v14, (int)v11); /*0x5e7b07*/
    AbstractClass *v6 = (char *)__2_YAPAXI_Z(2 * v5); /*0x5e7b18*/
    LCW::Decompress((int)v14, v6, v5); /*0x5e7b20*/
    Debug::Log(); /*0x5e7b2a*/
    if ( g_UIControlState ) /*0x5e7b39*/
    {
      IUnknown *v7 = g_UIControlState; /*0x5e7b3b*/
      ComPtr::Dtor(g_UIControlState); /*0x5e7b43*/
      __3_YAXPAX_Z(v7); /*0x5e7b49*/
    }
    void * v8 = __2_YAPAXI_Z(4u); /*0x5e7b53*/
    if ( v8 ) /*0x5e7b5e*/
      void * v9 = (void *)unknown_libname_27(v8); /*0x5e7b62*/
    else
      v9 = 0; /*0x5e7b69*/
    g_UIControlState = v9; /*0x5e7b6e*/
    ModemGame::RenderPaletteImage(v6); /*0x5e7b73*/
    CurrentDialog = Dialog::GetCurrent(); /*0x5e7b7c*/
    InvalidateRect(CurrentDialog, 0, 0); /*0x5e7b82*/
    Debug::Log(); /*0x5e7b8d*/
    __3_YAXPAX_Z(v6); /*0x5e7b93*/
    __3_YAXPAX_Z(v4); /*0x5e7b99*/
    Network::SetConnectionParams(g_NetworkManager, 30, -1, 600, 1); /*0x5e7bb1*/
    LZOStraw::Destructor(v14); /*0x5e7bba*/
    Vector::Clear((int)v12); /*0x5e7bc3*/
    Straw::Dtor(v11); /*0x5e7bcc*/
    RawFileClass::Dtor(v13); /*0x5e7bd5*/
  }
  else
  {
    Debug::Log(); /*0x5e7a43*/
    Network::SetConnectionParams(g_NetworkManager, 30, -1, 600, 1); /*0x5e7a5b*/
  }
}
} // namespace gamemd

// 0x5E7BF0
namespace gamemd {
char LoadScenarioClassByIndex(int a1)
{
{
  char result; // al
  CCFileClass *v3; // eax
  int **v6; // esi
  int Field; // eax
  wchar_t *eax8; // eax
  ScenarioClass *v9; // eax
  int PlayerCountMap; // esi
  CCFileClass *v13; // eax
  CCFileClass *v14; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-90h]

  if ( a1 == -1 ) /*0x5e7bfb*/
  {
    *(_DWORD *)&HouseClass_Player[32184] = 0; /*0x5e7c00*/
    HouseClass_Player[32188] = 0; /*0x5e7c05*/
    *(_DWORD *)&HouseClass_Player[32192] = 0; /*0x5e7c0a*/
    *(_WORD *)&HouseClass_Player[30166] = 0; /*0x5e7c0f*/
    HouseClass_Player[31636] = 0; /*0x5e7c16*/
    HouseClass_Player[32150] = 0; /*0x5e7c1d*/
    return 0; /*0x5e7c2a*/
  }
  _DWORD v17[22]; // [esp+14h] [ebp-6Ch] BYREF
  v3 = CCFileClass::Construct(v17, (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] + 4 * a1) + 88)); /*0x5e7c3b*/
  char v4 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v3->__pad_0 + 20))(v3, 0); /*0x5e7c46*/
  v17[0] = &vt_CCFileClass; /*0x5e7c4f*/
  bool v5 = v4 == 0; /*0x5e7c57*/
  int v19 = 0; /*0x5e7c5a*/
  _BYTE v18[12]; // [esp+6Ch] [ebp-14h] BYREF
  Vector::Clear((int)v18); /*0x5e7c62*/
  v17[0] = &off_7E1668; /*0x5e7c6b*/
  BufferIOFileClass::Dtor(v17); /*0x5e7c73*/
  if ( !v5 ) /*0x5e7c7a*/
    goto LABEL_9; /*0x5e7c7a*/
  if ( dword_81C1D0 == -2 ) /*0x5e7c87*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620[4536], 3627); /*0x5e7cfe*/
    eax8 = GetStringCSF((wchar_t *)&stru_830620[5328], 0, &stru_830620[4536], 3627); /*0x5e7d09*/
  int v16; // [esp+0h] [ebp-80h]
    Dialog::ShowMessageBox((int)eax8, StringCSF, 0, 0, 0, v16); /*0x5e7d13*/
    return 0; /*0x5e7d20*/
  }
  v6 = (int **)(*(_DWORD *)&HouseClass_Player[31616] + 4 * a1); /*0x5e7c93*/
  int v7 = Game::CheckForGameCD((void *)0x3C); /*0x5e7c96*/
  if ( ScenarioClass::CheckExists(*v6, v7) /*0x5e7cca*/
    || (Field = GameOption::GetField(*(_DWORD ***)(*(_DWORD *)&HouseClass_Player[31616] + 4 * a1)),
        (result = CD::`vftable'(Field)) != 0) )
  {
LABEL_9:
    wcscpy( /*0x5e7d31*/
      (wchar_t *)&HouseClass_Player[30166],
      *(const wchar_t **)(*(_DWORD *)&HouseClass_Player[31616] + 4 * a1));
    strcpy( /*0x5e7d5f*/
      &HouseClass_Player[32150],
      (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] + 4 * a1) + 348));
    v9 = *(ScenarioClass **)&HouseClass_Player[29924]; /*0x5e7d7e*/
    strcpy( /*0x5e7d8f*/
      &HouseClass_Player[31636],
      (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] + 4 * a1) + 88));
    strcpy((char *)v9->fileName, &HouseClass_Player[31636]); /*0x5e7db7*/
    HouseClass_Player[32188] = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] + 4 * a1) /*0x5e7dd1*/
                                                   + 380);
    PlayerCountMap = ReadPlayerCountMap(a1); /*0x5e7de5*/
    if ( *(_DWORD *)&HouseClass_Player[29936] ) /*0x5e7de7*/
    {
      int v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 152))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5e7deb*/
      if ( v12 != -1 && v12 < PlayerCountMap ) /*0x5e7df8*/
        PlayerCountMap = v12; /*0x5e7dfa*/
    }
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5e7e03*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5e7e05*/
      {
        PlayerCountMap &= ~1u; /*0x5e7e0e*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5e7e13*/
      {
        PlayerCountMap = 2; /*0x5e7e1c*/
      }
    }
    *(_DWORD *)&HouseClass_Player[32192] = PlayerCountMap; /*0x5e7e2a*/
    v13 = CCFileClass::Construct(v17, &HouseClass_Player[31636]); /*0x5e7e30*/
    *(_DWORD *)&HouseClass_Player[32184] = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)v13->__pad_0 + 44))(v13); /*0x5e7e45*/
    v17[0] = &vt_CCFileClass; /*0x5e7e4a*/
    v19 = 0; /*0x5e7e4e*/
    Vector::Clear((int)v18); /*0x5e7e52*/
    v17[0] = &off_7E1668; /*0x5e7e60*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e64*/
    v14 = CCFileClass::Construct(v17, &HouseClass_Player[31636]); /*0x5e7e72*/
    *(_DWORD *)&HouseClass_Player[32184] = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)v14->__pad_0 + 44))(v14); /*0x5e7e82*/
    v17[0] = &vt_CCFileClass; /*0x5e7e87*/
    v19 = 0; /*0x5e7e8b*/
    Vector::Clear((int)v18); /*0x5e7e8f*/
    v17[0] = &off_7E1668; /*0x5e7e98*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e9c*/
    return 1; /*0x5e7ea1*/
  }
  return result; /*0x5e7bff*/
}
} // namespace gamemd

// 0x5E87A0
namespace gamemd {
HashTable * * LoadNetworkShareStrings()
{
{
  wchar_t *v0; // eax
  wchar_t *v1; // esi
  wchar_t *v2; // eax
  wchar_t *v3; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // esi
  wchar_t *result; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // esi
  if ( !DataGlobal_AC117C ) /*0x5e87a7*/
  {
    DataGlobal_AC117C = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 4078); /*0x5e87d4*/
    DataGlobal_AC1180 = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 4079); /*0x5e87ef*/
    DataGlobal_AC1184 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 4080); /*0x5e880a*/
    DataGlobal_AC1188 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 4081); /*0x5e8825*/
    DataGlobal_AC118C = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 4082); /*0x5e8840*/
    DataGlobal_AC1190 = GetStringCSF(DataGlobal_831C40, 0, g_Str_File_netshare_cpp, 4083); /*0x5e885b*/
    DataGlobal_AC1194 = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 4084); /*0x5e8865*/
  }
  if ( !g_HouseClass_ObserverFlags ) /*0x5e8872*/
  {
    v0 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e8879*/
    v1 = v0; /*0x5e887e*/
    if ( v0 ) /*0x5e8885*/
      Waypoint::InitInvalid((_BYTE *)v0 + 40); /*0x5e888a*/
    wchar_t *v1 = 0; /*0x5e8891*/
    g_HouseClass_ObserverFlags = (LPARAM)v1; /*0x5e8898*/
    wcscpy(v1, DataGlobal_AC117C); /*0x5e88a0*/
  }
  if ( !g_Lobby_PlayerCount ) /*0x5e88af*/
  {
    v2 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e88b6*/
    v3 = v2; /*0x5e88bb*/
    if ( v2 ) /*0x5e88c2*/
      Waypoint::InitInvalid((_BYTE *)v2 + 40); /*0x5e88c7*/
    wchar_t *v3 = 0; /*0x5e88ce*/
    g_Lobby_PlayerCount = (LPARAM)v3; /*0x5e88d6*/
    wcscpy(v3, DataGlobal_AC1180); /*0x5e88de*/
  }
  if ( !g_Lobby_PlayerTeam ) /*0x5e88ed*/
  {
    v4 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e88f4*/
    v5 = v4; /*0x5e88f9*/
    if ( v4 ) /*0x5e8900*/
      Waypoint::InitInvalid((_BYTE *)v4 + 40); /*0x5e8905*/
    wchar_t *v5 = 0; /*0x5e890c*/
    g_Lobby_PlayerTeam = (LPARAM)v5; /*0x5e8914*/
    wcscpy(v5, DataGlobal_AC1184); /*0x5e891c*/
  }
  if ( !g_Lobby_PlayerSide ) /*0x5e892b*/
  {
    v6 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e8932*/
    v7 = v6; /*0x5e8937*/
    if ( v6 ) /*0x5e893e*/
      Waypoint::InitInvalid((_BYTE *)v6 + 40); /*0x5e8943*/
    wchar_t *v7 = 0; /*0x5e894a*/
    g_Lobby_PlayerSide = (LPARAM)v7; /*0x5e8951*/
    wcscpy(v7, DataGlobal_AC1188); /*0x5e8959*/
  }
  if ( !g_Lobby_PlayerColor ) /*0x5e8968*/
  {
    v8 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e896f*/
    v9 = v8; /*0x5e8974*/
    if ( v8 ) /*0x5e897b*/
      Waypoint::InitInvalid((_BYTE *)v8 + 40); /*0x5e8980*/
    wchar_t *v9 = 0; /*0x5e8987*/
    g_Lobby_PlayerColor = (LPARAM)v9; /*0x5e898f*/
    wcscpy(v9, DataGlobal_AC118C); /*0x5e8997*/
  }
  if ( !g_Lobby_PlayerReady ) /*0x5e89a6*/
  {
    v10 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e89ad*/
    v11 = v10; /*0x5e89b2*/
    if ( v10 ) /*0x5e89b9*/
      Waypoint::InitInvalid((_BYTE *)v10 + 40); /*0x5e89be*/
    wchar_t *v11 = 0; /*0x5e89c5*/
    g_Lobby_PlayerReady = v11; /*0x5e89cd*/
    wcscpy(v11, DataGlobal_AC1190); /*0x5e89d5*/
  }
  result = (wchar_t *)g_Lobby_MaxPlayers; /*0x5e89dd*/
  if ( !g_Lobby_MaxPlayers ) /*0x5e89e4*/
  {
    v13 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e89eb*/
    v14 = v13; /*0x5e89f0*/
    if ( v13 ) /*0x5e89f7*/
      Waypoint::InitInvalid((_BYTE *)v13 + 40); /*0x5e89fc*/
    wchar_t *v14 = 0; /*0x5e8a03*/
    g_Lobby_MaxPlayers = (LPARAM)v14; /*0x5e8a0a*/
    return wcscpy(v14, DataGlobal_AC1194); /*0x5e8a12*/
  }
  return result; /*0x5e8a1b*/
}
} // namespace gamemd

// 0x5E9B20
namespace gamemd {
void GetComboBoxSelectedDefault(SkirmishDialog * aP0, int nIDDlgItem, WPARAM wParam)
{
{
  SkirmishDialog *v3; // eax
  LRESULT v6; // eax
  v3 = (SkirmishDialog *)wParam; /*0x5e9b20*/
  if ( wParam == -1 ) /*0x5e9b34*/
    v3 = (SkirmishDialog *)SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x147u, 0, 0); /*0x5e9b41*/
  v6 = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, (WPARAM)v3, 0); /*0x5e9b4d*/
  return v6 != -1 ? v6 : 0;
}
} // namespace gamemd

// 0x5E9C00
namespace gamemd {
void Player_AssignColor(HWND hDlg, void * nIDDlgItem)
{
{
  LRESULT SelectedRaw; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  SelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)nIDDlgItem, -1); /*0x5e9c10*/
  result = StartCombo::IDToIndex(nIDDlgItem); /*0x5e9c12*/
  if ( result == g_NetworkPlayerCount ) /*0x5e9c1d*/
  {
    FillColorComboBoxUI(hDlg, (int)nIDDlgItem); /*0x5e9c27*/
    if ( SelectedRaw != -2 ) /*0x5e9c2f*/
    {
      v6 = (wchar_t **)&g_NetworkPlayerName; /*0x5e9c31*/
      while ( 1 ) /*0x5e9c36*/
      {
        v7 = *v6; /*0x5e9c36*/
        if ( *v6 ) /*0x5e9c36*/
        {
          if ( v7 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9c7b*/
            && v7 != (wchar_t *)g_Lobby_PlayerCount
            && v7 != g_Lobby_PlayerReady
            && v7 != (wchar_t *)g_Lobby_MaxPlayers
            && v7 != (wchar_t *)g_Lobby_PlayerTeam
            && v7 != (wchar_t *)g_Lobby_PlayerSide
            && v7 != (wchar_t *)g_Lobby_PlayerColor
            && SessionClass::GetPlayerColor((int)v7) == SelectedRaw )
          {
            break; /*0x5e9c7b*/
          }
        }
        if ( (int)++v6 >= (int)&g_PlayerNameListEnd ) /*0x5e9c86*/
        {
          int * v8 = g_CampaignConfig; /*0x5e9c88*/
          while ( *v8 != SelectedRaw ) /*0x5e9c8f*/
          {
            if ( (int)++v8 >= (int)g_CampaignSideIndex ) /*0x5e9c99*/
              goto LABEL_19; /*0x5e9c99*/
          }
          break; /*0x5e9c8f*/
        }
      }
      SelectedRaw = -2; /*0x5e9c9d*/
    }
LABEL_19:
    SessionClass::AssignColor(g_GameMode_Current, SelectedRaw, 0); /*0x5e9ca2*/
    result = Game_PlayerCount; /*0x5e9caf*/
    if ( Game_PlayerCount ) /*0x5e9cb6*/
      return SessionClass::SetPlayerColor(*(_DWORD *)Game_PlayerInfoArray, SelectedRaw); /*0x5e9cc0*/
  }
  else
  {
    g_CampaignConfig[result] = SelectedRaw; /*0x5e9cc9*/
  }
  return result; /*0x5e9cc5*/
}
} // namespace gamemd

// 0x5E9CE0
namespace gamemd {
void Player_AssignSide(HWND hDlg, int nIDDlgItem)
{
{
  CampaignClass *v4; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  v4 = SetComboBoxSelection(hDlg, nIDDlgItem, -1); /*0x5e9cf0*/
  result = Dialog::SideIDToIndex(nIDDlgItem); /*0x5e9cf2*/
  if ( result == g_NetworkPlayerCount ) /*0x5e9cfd*/
  {
    FillComboBoxSides(hDlg, nIDDlgItem); /*0x5e9d07*/
    if ( v4 != -2 ) /*0x5e9d0f*/
    {
      v6 = (wchar_t **)&g_NetworkPlayerName; /*0x5e9d11*/
      while ( 1 ) /*0x5e9d16*/
      {
        v7 = *v6; /*0x5e9d16*/
        if ( *v6 ) /*0x5e9d16*/
        {
          if ( v7 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9d5b*/
            && v7 != (wchar_t *)g_Lobby_PlayerCount
            && v7 != g_Lobby_PlayerReady
            && v7 != (wchar_t *)g_Lobby_MaxPlayers
            && v7 != (wchar_t *)g_Lobby_PlayerTeam
            && v7 != (wchar_t *)g_Lobby_PlayerSide
            && v7 != (wchar_t *)g_Lobby_PlayerColor
            && SessionClass::GetOption((int)v7) == v4 )
          {
            break; /*0x5e9d5b*/
          }
        }
        if ( (int)++v6 >= (int)&g_PlayerNameListEnd ) /*0x5e9d66*/
        {
          AbstractClass *v8 = g_CampaignSideIndex; /*0x5e9d68*/
          while ( *v8 != v4 ) /*0x5e9d6f*/
          {
            if ( (int)++v8 >= (int)g_CampaignFactionSlot ) /*0x5e9d79*/
              goto LABEL_19; /*0x5e9d79*/
          }
          break; /*0x5e9d6f*/
        }
      }
      v4 = -2; /*0x5e9d7d*/
    }
LABEL_19:
    result = Game_PlayerCount; /*0x5e9d82*/
    if ( Game_PlayerCount ) /*0x5e9d89*/
      return SessionClass::SetOption(*(_DWORD *)Game_PlayerInfoArray, v4); /*0x5e9d93*/
  }
  else
  {
    g_CampaignSideIndex[result] = v4; /*0x5e9d9c*/
  }
  return result; /*0x5e9d98*/
}
} // namespace gamemd

// 0x5E9DB0
namespace gamemd {
void ProcessNetworkLobbyOption(SessionClass * hDlg, void * nIDDlgItem)
{
{
  SessionClass *ComboBoxSelectedRaw2; // ebx
  int result; // eax

  ComboBoxSelectedRaw2 = (SessionClass *)GetComboBoxSelectedRaw2((HWND)hDlg, (int)nIDDlgItem, 0xFFFFFFFF); /*0x5e9dc0*/
  result = Dialog::OptionIDToIndex(nIDDlgItem); /*0x5e9dc2*/
  if ( result == *(_DWORD *)&HouseClass_Player[40256] ) /*0x5e9dcd*/
  {
    SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItem, (int)ComboBoxSelectedRaw2); /*0x5e9dd4*/
    result = *(_DWORD *)&HouseClass_Player[40248]; /*0x5e9dd9*/
    if ( *(_DWORD *)&HouseClass_Player[40248] ) /*0x5e9de0*/
      return SessionClass::SetOption2(**(_DWORD **)&HouseClass_Player[40236], ComboBoxSelectedRaw2); /*0x5e9dea*/
  }
  else
  {
    *(_DWORD *)&HouseClass_Player[21864][4 * result + 8264] = ComboBoxSelectedRaw2; /*0x5e9df3*/
  }
  return result; /*0x5e9def*/
}
} // namespace gamemd

// 0x5E9E70
namespace gamemd {
void SetupSkirmishPlayerSlots(SkirmishDialog * hDlg, int a2, HWND hWnd)
{
{
  int ResourceID2CSF; // edi
  int ResourceIDCSF; // ebx
  HWND DlgItem; // eax
  HWND v9; // ebx
  HWND v10; // esi
  char result; // al
  HWND v12; // eax
  HWND v13; // ebp
  int PlayerCountMap; // esi
  int nIDDlgItem; // [esp+10h] [ebp-10h]
  HWND nIDDlgItema; // [esp+10h] [ebp-10h]
  int ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v20; // [esp+1Ch] [ebp-4h]
  HWND hWnda; // [esp+24h] [ebp+4h]

  ResourceID2CSF = GetResourceID2CSF((void *)a2); /*0x5e9e88*/
  ResourceIDCSF = GetResourceIDCSF((void *)a2); /*0x5e9e91*/
  nIDDlgItem = GetResourceID3CSF((void *)a2); /*0x5e9e9a*/
  ResourceID4CSF = GetResourceID4CSF((void *)a2); /*0x5e9ea3*/
  if ( *(int *)&stru_830620[4228] >= 0 /*0x5e9ed5*/
    && a2 == *(_DWORD *)&stru_830620[4228]
  int v7; // eax
    && ((v7 = *(_DWORD *)&HouseClass_Player[21864][4 * a2 + 18396],
         (CoordStruct *)v7 == *(&g_MatrixTransformState + 2281))
     || !a2
     || *(_DWORD *)(v7 + 107) == -1) )
  {
    SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -3); /*0x5e9ee1*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, -2); /*0x5e9eec*/
    SetupLobbyFactionSlots((SessionClass *)hDlg, nIDDlgItem, -2); /*0x5e9ef9*/
    SetupLobbyPlayerSlots((SessionClass *)hDlg, ResourceID4CSF, -2); /*0x5e9f06*/
    DlgItem = GetDlgItem((HWND)hDlg, ResourceID2CSF); /*0x5e9f13*/
    EnableWindow(DlgItem, 0); /*0x5e9f1e*/
    v9 = GetDlgItem((HWND)hDlg, ResourceIDCSF); /*0x5e9f24*/
    EnableWindow(v9, 0); /*0x5e9f29*/
    ShowWindow(v9, 0); /*0x5e9f34*/
    hWnda = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x5e9f41*/
    EnableWindow(hWnda, 0); /*0x5e9f45*/
    ShowWindow(hWnda, 0); /*0x5e9f4e*/
    v10 = GetDlgItem((HWND)hDlg, ResourceID4CSF); /*0x5e9f58*/
    EnableWindow(v10, 0); /*0x5e9f5d*/
    return ShowWindow(v10, 0); /*0x5e9f62*/
  }
  else
  {
    if ( !(_BYTE)hWnd ) /*0x5e9f74*/
    {
      SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -2); /*0x5e9f7c*/
      SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, -2); /*0x5e9f87*/
      SetupLobbyFactionSlots((SessionClass *)hDlg, nIDDlgItem, -2); /*0x5e9f94*/
      SetupLobbyPlayerSlots((SessionClass *)hDlg, ResourceID4CSF, -2); /*0x5e9fa1*/
    }
    v12 = GetDlgItem((HWND)hDlg, ResourceID2CSF); /*0x5e9fae*/
    EnableWindow(v12, (unsigned __int8)hWnd); /*0x5e9fbc*/
    v20 = GetDlgItem((HWND)hDlg, ResourceIDCSF); /*0x5e9fce*/
    EnableWindow(v20, (unsigned __int8)hWnd); /*0x5e9fd2*/
    nIDDlgItema = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x5e9fde*/
    EnableWindow(nIDDlgItema, (unsigned __int8)hWnd); /*0x5e9fe2*/
    v13 = GetDlgItem((HWND)hDlg, ResourceID4CSF); /*0x5e9fec*/
    if ( (_BYTE)hWnd /*0x5e9fff*/
      && *(_DWORD *)&HouseClass_Player[29936]
      && !*(_BYTE *)(*(_DWORD *)&HouseClass_Player[29936] + 60) )
    {
      EnableWindow(v13, 0); /*0x5ea008*/
    }
    else
    {
      EnableWindow(v13, (unsigned __int8)hWnd); /*0x5ea00c*/
    }
    if ( *(_DWORD *)&HouseClass_Player[29960] == -1 ) /*0x5ea01c*/
    {
      PlayerCountMap = 8; /*0x5ea01e*/
    }
    else
    {
      PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player[29960]); /*0x5ea030*/
      if ( *(_DWORD *)&HouseClass_Player[29936] ) /*0x5ea034*/
      {
        int v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 152))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5ea038*/
        if ( v15 != -1 && v15 < PlayerCountMap ) /*0x5ea045*/
          PlayerCountMap = v15; /*0x5ea047*/
      }
      if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ea04f*/
      {
        if ( Network::IsLobbyFeature() ) /*0x5ea051*/
        {
          PlayerCountMap &= ~1u; /*0x5ea05a*/
        }
        else if ( Network::IsMultiplayerActive() ) /*0x5ea05f*/
        {
          PlayerCountMap = 2; /*0x5ea068*/
        }
      }
    }
    if ( !*(_DWORD *)&stru_830620[4228] && PlayerCountMap < 7 ) /*0x5ea07a*/
      ++PlayerCountMap; /*0x5ea07c*/
    result = a2; /*0x5ea07d*/
    if ( a2 < PlayerCountMap || a2 == *(_DWORD *)&stru_830620[4228] ) /*0x5ea087*/
    {
      ShowWindow(v20, 5); /*0x5ea096*/
      ShowWindow(nIDDlgItema, 5); /*0x5ea09f*/
      if ( *(_DWORD *)&HouseClass_Player[29932] != 4 ) /*0x5ea0a7*/
        return ShowWindow(v13, 5); /*0x5ea0a7*/
      result = Network::IsLobbyFeature(); /*0x5ea0a9*/
      if ( !result ) /*0x5ea0b0*/
        return ShowWindow(v13, 5); /*0x5ea0b5*/
    }
  }
  return result; /*0x5e9f64*/
}
} // namespace gamemd

// 0x5EA0D0
namespace gamemd {
char sub_5EA0D0(HWND hDlg, void * a2)
{
{
  int i; // esi
  HWND DlgItem; // eax

  for ( i = 0; i < 8; ++i )
  {
  int v4; // eax
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v4 = 1042; /*0x5ea0f9*/
          break;
        case 2:
          v4 = 1043; /*0x5ea105*/
          break;
        case 3:
          v4 = 1044; /*0x5ea111*/
          break;
        case 4:
          v4 = 1045; /*0x5ea11d*/
          break;
        case 5:
          v4 = 1046; /*0x5ea129*/
          break;
        case 6:
          v4 = 1047; /*0x5ea135*/
          break;
        default:
          v4 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v4 = 1041; /*0x5ea0ed*/
    }
    DlgItem = GetDlgItem(hDlg, v4); /*0x5ea151*/
    EnableWindow(DlgItem, 1); /*0x5ea156*/
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5ea15e*/
  }
  return SetupSkirmishPlayerSlots(hDlg, a2, (HWND)1); /*0x5ea176*/
}
} // namespace gamemd

// 0x5EA3E0
namespace gamemd {
void RefreshLobbyAll(HWND hDlg, char a2)
{
{
  AbstractClass *v2; // edi
  int ResourceIDHardcodedCSF; // eax
  HWND DlgItem; // edi
  void *PlayerSide; // eax
  HWND Default; // eax
  int i; // esi
  int ResourceID2CSF; // edi
  void *refreshed; // eax
  int ResourceIDCSF; // esi
  AbstractClass *v15; // edi
  int j; // esi
  int k; // esi
  int ResourceID3CSF; // ebx
  int m; // esi
  int ResourceID4CSF; // ebx
  int _5EAA70; // eax
  SessionClass *v26; // ebx
  HWND v28; // eax
  SessionClass *v29; // esi
  HWND v30; // edi
  SessionClass *v31; // ecx
  SessionClass *v35; // ebx
  int eax34; // eax
  HWND v36; // eax
  SessionClass *v38; // esi
  HWND edi34; // edi
  SessionClass *v40; // ecx
  int eax36; // eax
  int n; // esi
  HWND v43; // edi
  HWND v45; // eax
  int ii; // esi
  char Buffer[4]; // [esp+14h] [ebp-4h] BYREF

  v2 = hDlg; /*0x5ea3e7*/
  if ( a2 ) /*0x5ea3ef*/
  {
  int v32; // eax
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea3f5*/
    int v3 = 0; /*0x5ea3fa*/
    while ( 1 ) /*0x5ea404*/
    {
      ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF((void *)v3); /*0x5ea404*/
      DlgItem = GetDlgItem(v2, ResourceIDHardcodedCSF); /*0x5ea413*/
      PlayerSide = (void *)GetPlayerSide(v3); /*0x5ea415*/
      Default = (HWND)BuildingType::FindDefault(PlayerSide); /*0x5ea41c*/
      CacheDialogInvalidate(DlgItem, Default); /*0x5ea425*/
      if ( ++v3 >= 8 ) /*0x5ea42e*/
        break; /*0x5ea42e*/
      v2 = hDlg; /*0x5ea3fe*/
    }
    for ( i = 0; i < 8; ++i ) /*0x5ea430*/
    {
      ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x5ea43b*/
      int v10 = GetPlayerSide(i); /*0x5ea43d*/
      SetupLobbyCountryCombo(hDlg, ResourceID2CSF, v10); /*0x5ea449*/
    }
    refreshed = (void *)RefreshLobbyAll_Helper(); /*0x5ea454*/
    int v12 = (int)refreshed; /*0x5ea459*/
    if ( refreshed == (void *)-1 ) /*0x5ea45e*/
    {
      v15 = hDlg; /*0x5ea480*/
    }
    else
    {
      ResourceIDCSF = GetResourceIDCSF(refreshed); /*0x5ea469*/
      int v14 = RefreshLobbyAll_Play(v12); /*0x5ea46b*/
      v15 = hDlg; /*0x5ea470*/
      SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, v14); /*0x5ea479*/
    }
    for ( j = 0; j < 8; ++j ) /*0x5ea484*/
    {
      if ( j != v12 ) /*0x5ea488*/
      {
        CampaignClass *v17 = GetResourceIDCSF((void *)j); /*0x5ea493*/
        int v18 = RefreshLobbyAll_Play(j); /*0x5ea495*/
        SetupSkirmishSpawnLocations(v15, v17, v18); /*0x5ea49f*/
      }
    }
    for ( k = 0; k < 8; ++k ) /*0x5ea4aa*/
    {
      ResourceID3CSF = GetResourceID3CSF((void *)k); /*0x5ea4b5*/
      int v21 = RefreshLobbyAll_Get(k); /*0x5ea4b7*/
      SetupLobbyFactionSlots(v15, ResourceID3CSF, v21); /*0x5ea4c1*/
    }
    for ( m = 0; m < 8; ++m ) /*0x5ea4cc*/
    {
      ResourceID4CSF = GetResourceID4CSF((void *)m); /*0x5ea4d7*/
      _5EAA70 = RefreshLobbyAll_Get_5EAA70(m); /*0x5ea4d9*/
      SetupLobbyPlayerSlots(v15, ResourceID4CSF, _5EAA70); /*0x5ea4e3*/
    }
    char * v25 = 0; /*0x5ea4ee*/
    v26 = (SessionClass *)&g_NetworkPlayerName; /*0x5ea4f0*/
    while ( 1 ) /*0x5ea4f7*/
    {
      int v27 = RefreshLobbyAll_Helper_5EAAD0(v25); /*0x5ea4f7*/
      v28 = GetDlgItem(hDlg, v27); /*0x5ea502*/
      v29 = (SessionClass *)v26->GameMode[0]; /*0x5ea508*/
      v30 = 0; /*0x5ea50a*/
      v31 = (SessionClass *)v26->GameMode[0]; /*0x5ea50c*/
      *(_DWORD *)Buffer = v28; /*0x5ea50e*/
      if ( IsKnownPointer((wchar_t *)v31) ) /*0x5ea512*/
      {
        if ( !wcscmp((const wchar_t *)v29, g_CurrentPlayerName) ) /*0x5ea521*/
          break; /*0x5ea521*/
      }
      if ( RefreshLobbyAll_Helper_5EA8E0((int)v25) == 1 ) /*0x5ea541*/
      {
        v32 = HashTable::Find(g_DialogHashTable, DataGlobal_8316D0, 0); /*0x5ea551*/
        goto LABEL_24; /*0x5ea551*/
      }
LABEL_25:
      CacheDialogInvalidate(*(HWND *)Buffer, v30); /*0x5ea558*/
      v26 = (SessionClass *)((char *)v26 + 4); /*0x5ea563*/
      ++v25; /*0x5ea566*/
      if ( (int)v26 >= (int)&g_PlayerNameListEnd ) /*0x5ea56d*/
      {
        if ( g_GameMode_Current[0] == 4 ) /*0x5ea576*/
          RefreshLobbyAll_Set(); /*0x5ea578*/
        if ( g_GameStateFlags ) /*0x5ea585*/
          (*(void (__thiscall **)(int, HWND))(*(_DWORD *)g_GameStateFlags + 120))(g_GameStateFlags, hDlg); /*0x5ea592*/
        return; /*0x5ea59c*/
      }
    }
    v32 = HashTable::Find(g_DialogHashTable, DataGlobal_8316CC[0], 0); /*0x5ea535*/
LABEL_24:
    v30 = (HWND)v32; /*0x5ea556*/
    goto LABEL_25; /*0x5ea556*/
  }
  if ( g_GameStateFlags ) /*0x5ea5a5*/
    (*(void (__thiscall **)(int, HWND))(*(_DWORD *)g_GameStateFlags + 120))(g_GameStateFlags, hDlg); /*0x5ea5aa*/
  char * v33 = 0; /*0x5ea5ad*/
  v35 = (SessionClass *)&g_NetworkPlayerName; /*0x5ea5af*/
  while ( 1 ) /*0x5ea5da*/
  {
    eax34 = RefreshLobbyAll_Helper_5EAAD0(v33); /*0x5ea5bc*/
    v36 = GetDlgItem(v2, eax34); /*0x5ea5c3*/
    v38 = (SessionClass *)v35->GameMode[0]; /*0x5ea5c9*/
    edi34 = 0; /*0x5ea5cb*/
    v40 = (SessionClass *)v35->GameMode[0]; /*0x5ea5cd*/
    *(_DWORD *)Buffer = v36; /*0x5ea5cf*/
    if ( IsKnownPointer((wchar_t *)v40) && !wcscmp((const wchar_t *)v38, g_CurrentPlayerName) ) /*0x5ea5e2*/
    {
      eax36 = HashTable::Find(g_DialogHashTable, DataGlobal_8316CC[0], 0); /*0x5ea5f6*/
    }
    else
    {
      if ( RefreshLobbyAll_Helper_5EA8E0((int)v33) != 1 ) /*0x5ea602*/
        goto LABEL_40; /*0x5ea602*/
      eax36 = HashTable::Find(g_DialogHashTable, DataGlobal_8316D0, 0); /*0x5ea612*/
    }
    edi34 = (HWND)eax36; /*0x5ea617*/
LABEL_40:
    CacheDialogInvalidate(*(HWND *)Buffer, edi34); /*0x5ea61f*/
    v35 = (SessionClass *)((char *)v35 + 4); /*0x5ea624*/
    ++v33; /*0x5ea627*/
    if ( (int)v35 >= (int)&g_PlayerNameListEnd ) /*0x5ea62e*/
      break; /*0x5ea62e*/
    v2 = hDlg; /*0x5ea5b6*/
  }
  wcscpy(&DataGlobal_AC0D44, &DataGlobal_AC0B94); /*0x5ea63a*/
  Player::BuildListString(&DataGlobal_AC0B94); /*0x5ea647*/
  if ( wcscmp(&DataGlobal_AC0D44, &DataGlobal_AC0B94) ) /*0x5ea656*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea668*/
    if ( g_GameMode_Current[0] == 4 ) /*0x5ea674*/
      RefreshLobbyAll_Set(); /*0x5ea676*/
  }
  for ( n = 0; n < 8; ++n ) /*0x5ea67b*/
  {
    int v42 = GetResourceIDHardcodedCSF((void *)n); /*0x5ea67f*/
    v43 = GetDlgItem(hDlg, v42); /*0x5ea68e*/
    void * v44 = (void *)GetPlayerSide(n); /*0x5ea690*/
    v45 = (HWND)BuildingType::FindDefault(v44); /*0x5ea697*/
    CacheDialogInvalidate(v43, v45); /*0x5ea6a0*/
  }
  strcpy(&DataGlobal_AC0EA4, &DataGlobal_AC0B10); /*0x5ea6c7*/
  int v46 = 0; /*0x5ea6ce*/
  DataGlobal_AC0B10 = 0; /*0x5ea6d2*/
  do /*0x5ea723*/
  {
    int v47 = GetPlayerSide(v46); /*0x5ea6db*/
    sprintf(Buffer, g_Str_Trace__d_, v47); /*0x5ea6eb*/
    strcat(&DataGlobal_AC0B10, Buffer); /*0x5ea716*/
    ++v46; /*0x5ea71d*/
  }
  while ( v46 < 8 ); /*0x5ea723*/
  if ( strcmp(&DataGlobal_AC0EA4, &DataGlobal_AC0B10) ) /*0x5ea737*/
  {
    for ( ii = 0; ii < 8; ++ii ) /*0x5ea760*/
    {
      int v49 = GetResourceID2CSF((void *)ii); /*0x5ea76b*/
      int v50 = GetPlayerSide(ii); /*0x5ea76d*/
      SetupLobbyCountryCombo(hDlg, v49, v50); /*0x5ea777*/
    }
  }
  strcpy(&DataGlobal_AC0AC8, &DataGlobal_AC0AEC); /*0x5ea79e*/
  RefreshLobbyAll_Play_5EAB30(&DataGlobal_AC0AEC); /*0x5ea7ac*/
  if ( strcmp(&DataGlobal_AC0AC8, &DataGlobal_AC0AEC) ) /*0x5ea7c3*/
    RefreshLobbyAll_Play_5EAEE0(hDlg); /*0x5ea7ee*/
  strcpy(DataGlobal_AC0A9C, DataGlobal_AC0B6C); /*0x5ea80f*/
  RefreshLobbyAll_Get_5EAC00(DataGlobal_AC0B6C); /*0x5ea81d*/
  if ( strcmp(DataGlobal_AC0A9C, DataGlobal_AC0B6C) ) /*0x5ea834*/
    RefreshLobbyAll_Get_5EADA0(hDlg); /*0x5ea85f*/
  strcpy(DataGlobal_AC0278, DataGlobal_AC0B48); /*0x5ea880*/
  RefreshLobbyAll_Get_5EACD0(DataGlobal_AC0B48); /*0x5ea88e*/
  if ( strcmp(DataGlobal_AC0278, DataGlobal_AC0B48) ) /*0x5ea8a5*/
    RefreshLobbyAll_Setup(hDlg); /*0x5ea8d0*/
}
} // namespace gamemd

// 0x5EA920
namespace gamemd {
int sub_5EA920(int a1)
{
{
  int result; // eax
  wchar_t *v3; // esi
  result = -2; /*0x5ea924*/
  v3 = (wchar_t *)*(&g_NetworkPlayerName + a1); /*0x5ea92f*/
  if ( g_GameStateFlags && (g_GameMode_Current[0] == 3 || g_GameMode_Current[0] == 4) ) /*0x5ea948*/
    result = (*(int (**)(void))(*(_DWORD *)g_GameStateFlags + 40))(); /*0x5ea94c*/
  if ( v3 /*0x5ea969*/
    && (v3 == (wchar_t *)g_Lobby_PlayerTeam || v3 == (wchar_t *)g_Lobby_PlayerSide || v3 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return g_CampaignPlayerArray[a1]; /*0x5ea96b*/
  }
  if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags && v3 != (wchar_t *)g_Lobby_PlayerCount && v3 != g_Lobby_PlayerReady ) /*0x5ea98b*/
  {
    if ( v3 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ea993*/
      return -3; /*0x5ea996*/
    else
      return SessionClass::GetPlayerSide((int)v3); /*0x5ea99f*/
  }
  return result; /*0x5ea972*/
}
} // namespace gamemd

// 0x5EB7B0
namespace gamemd {
void UpdateMultiplayerLobbySlots(HWND hDlg, char * a2, int nIDDlgItem)
{
{
  int result; // eax
  int ResourceIDHardcodedCSF; // ebx
  HWND v9; // [esp+8h] [ebp-28h]
  HWND ResourceID2CSF; // [esp+10h] [ebp-20h]
  HWND v12; // [esp+10h] [ebp-20h]
  HWND ResourceIDCSF; // [esp+14h] [ebp-1Ch]
  HWND v14; // [esp+14h] [ebp-1Ch]
  int ResourceID3CSF; // [esp+18h] [ebp-18h]
  int ResourceID4CSF; // [esp+1Ch] [ebp-14h]
  HWND hWnd; // [esp+20h] [ebp-10h]
  HWND DlgItem; // [esp+24h] [ebp-Ch]
  HWND v19; // [esp+28h] [ebp-8h]
  HWND v20; // [esp+2Ch] [ebp-4h]
  int nIDDlgItema; // [esp+34h] [ebp+4h]
  bool nIDDlgItemb; // [esp+34h] [ebp+4h]

  if ( (int)a2 < 0 ) /*0x5eb7b9*/
    a2 = 0; /*0x5eb7bb*/
  result = (int)&a2[nIDDlgItem]; /*0x5eb7c1*/
  int v10 = (int)&a2[nIDDlgItem]; /*0x5eb7c6*/
  if ( (int)&a2[nIDDlgItem] > 8 ) /*0x5eb7ca*/
  {
    v10 = 8; /*0x5eb7cc*/
    result = 8; /*0x5eb7d4*/
  }
  char * v5 = a2; /*0x5eb7da*/
  if ( (int)a2 < result ) /*0x5eb7dc*/
  {
    do /*0x5eb9f0*/
    {
  int v8; // [esp+8h] [ebp-28h]
      if ( v5 ) /*0x5eb7ec*/
      {
        if ( v5 == (char *)1 ) /*0x5eb806*/
        {
          nIDDlgItema = 1747; /*0x5eb808*/
          v8 = 1042; /*0x5eb810*/
        }
        else if ( v5 == (char *)2 ) /*0x5eb820*/
        {
          nIDDlgItema = 1748; /*0x5eb822*/
          v8 = 1043; /*0x5eb82a*/
        }
        else if ( v5 == (char *)3 ) /*0x5eb837*/
        {
          nIDDlgItema = 1749; /*0x5eb839*/
          v8 = 1044; /*0x5eb841*/
        }
        else if ( v5 == (char *)4 ) /*0x5eb84e*/
        {
          nIDDlgItema = 1750; /*0x5eb850*/
          v8 = 1045; /*0x5eb858*/
        }
        else if ( v5 == (char *)5 ) /*0x5eb865*/
        {
          nIDDlgItema = 1751; /*0x5eb867*/
          v8 = 1046; /*0x5eb86f*/
        }
        else if ( v5 == (char *)6 ) /*0x5eb87c*/
        {
          nIDDlgItema = 1752; /*0x5eb87e*/
          v8 = 1047; /*0x5eb886*/
        }
        else if ( v5 == (char *)7 ) /*0x5eb893*/
        {
          nIDDlgItema = 1753; /*0x5eb895*/
          v8 = 1048; /*0x5eb89d*/
        }
        else
        {
          nIDDlgItema = -1; /*0x5eb8aa*/
          v8 = -1; /*0x5eb8ae*/
        }
      }
      else
      {
        nIDDlgItema = 1746; /*0x5eb7ee*/
        v8 = 1041; /*0x5eb7f6*/
      }
      ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(v5); /*0x5eb8bb*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x5eb8c4*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x5eb8cf*/
      ResourceID3CSF = GetResourceID3CSF(v5); /*0x5eb8da*/
      ResourceID4CSF = GetResourceID4CSF(v5); /*0x5eb8e7*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x5eb8f3*/
      DlgItem = GetDlgItem(hDlg, v8); /*0x5eb8fd*/
      v19 = GetDlgItem(hDlg, ResourceIDHardcodedCSF); /*0x5eb903*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5eb913*/
      v20 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5eb91f*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5eb927*/
      v14 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5eb939*/
      int v7 = *(&g_NetworkPlayerName + (_DWORD)v5); /*0x5eb93d*/
      nIDDlgItemb = v7 == g_Lobby_MaxPlayers /*0x5eb971*/
                 || v7
                 && v7 != g_HouseClass_ObserverFlags
                 && v7 != g_Lobby_PlayerCount
                 && (wchar_t *)v7 != g_Lobby_PlayerReady
                 && *(_DWORD *)(v7 + 107) == -1;
      ShowWindow(hWnd, 5); /*0x5eb983*/
      ShowWindow(DlgItem, 5); /*0x5eb98c*/
      ShowWindow(v19, 5); /*0x5eb995*/
      if ( nIDDlgItemb ) /*0x5eb99d*/
      {
        ShowWindow(v9, 0); /*0x5eb9a6*/
        ShowWindow(v12, 0); /*0x5eb9af*/
        ShowWindow(v14, 0); /*0x5eb9b3*/
      }
      else
      {
        ShowWindow(v9, 5); /*0x5eb9bc*/
        ShowWindow(v12, 5); /*0x5eb9c5*/
        if ( g_GameMode_Current[0] != 4 || !Network::IsLobbyFeature() ) /*0x5eb9d0*/
          ShowWindow(v14, 5); /*0x5eb9e0*/
      }
      result = ShowWindow(v20, 5); /*0x5eb9e9*/
      ++v5; /*0x5eb9eb*/
    }
    while ( (int)v5 < v10 ); /*0x5eb9f0*/
  }
  return result; /*0x5eb9f8*/
}
} // namespace gamemd

// 0x5EBC00
namespace gamemd {
void DisableCampaignSlots(HWND hDlg, int a2)
{
{
  int i; // ebp
  int nIDDlgItem; // [esp+8h] [ebp-1Ch]
  HWND nIDDlgItema; // [esp+8h] [ebp-1Ch]
  int hWnd; // [esp+Ch] [ebp-18h]
  HWND hWnda; // [esp+Ch] [ebp-18h]
  HWND ResourceIDHardcodedCSF; // [esp+10h] [ebp-14h]
  HWND DlgItem; // [esp+10h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
  HWND v11; // [esp+14h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+18h] [ebp-Ch]
  HWND v13; // [esp+18h] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+1Ch] [ebp-8h]
  HWND v15; // [esp+1Ch] [ebp-8h]
  HWND ResourceID4CSF; // [esp+20h] [ebp-4h]
  HWND v17; // [esp+20h] [ebp-4h]
  for ( i = a2; i < 8; ++i ) /*0x5ebc0c*/
  {
    if ( i != g_MPCooperativeState ) /*0x5ebc26*/
    {
      if ( i ) /*0x5ebc2e*/
      {
        switch ( i ) /*0x5ebc48*/
        {
          case 1: /*0x5ebc48*/
            nIDDlgItem = 1747; /*0x5ebc4a*/
            hWnd = 1042; /*0x5ebc52*/
            break;
          case 2: /*0x5ebc48*/
            nIDDlgItem = 1748; /*0x5ebc64*/
            hWnd = 1043; /*0x5ebc6c*/
            break;
          case 3: /*0x5ebc48*/
            nIDDlgItem = 1749; /*0x5ebc7b*/
            hWnd = 1044; /*0x5ebc83*/
            break;
          case 4: /*0x5ebc48*/
            nIDDlgItem = 1750; /*0x5ebc92*/
            hWnd = 1045; /*0x5ebc9a*/
            break;
          case 5: /*0x5ebc48*/
            nIDDlgItem = 1751; /*0x5ebca9*/
            hWnd = 1046; /*0x5ebcb1*/
            break;
          case 6: /*0x5ebc48*/
            nIDDlgItem = 1752; /*0x5ebcc0*/
            hWnd = 1047; /*0x5ebcc8*/
            break;
          case 7: /*0x5ebc48*/
            nIDDlgItem = 1753; /*0x5ebcd7*/
            hWnd = 1048; /*0x5ebcdf*/
            break;
          default:
            nIDDlgItem = -1; /*0x5ebcec*/
            hWnd = -1; /*0x5ebcf0*/
            break;
        }
      }
      else
      {
        nIDDlgItem = 1746; /*0x5ebc30*/
        hWnd = 1041; /*0x5ebc38*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF((void *)i); /*0x5ebcfd*/
      ResourceID2CSF = (HWND)GetResourceID2CSF((void *)i); /*0x5ebd08*/
      ResourceIDCSF = (HWND)GetResourceIDCSF((void *)i); /*0x5ebd13*/
      ResourceID3CSF = (HWND)GetResourceID3CSF((void *)i); /*0x5ebd1e*/
      ResourceID4CSF = (HWND)GetResourceID4CSF((void *)i); /*0x5ebd27*/
      nIDDlgItema = GetDlgItem(hDlg, nIDDlgItem); /*0x5ebd37*/
      hWnda = GetDlgItem(hDlg, hWnd); /*0x5ebd43*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x5ebd4b*/
      v11 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ebd5b*/
      v13 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ebd67*/
      v15 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5ebd6f*/
      v17 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x5ebd82*/
      ShowWindow(nIDDlgItema, 0); /*0x5ebd86*/
      ShowWindow(hWnda, 0); /*0x5ebd8f*/
      ShowWindow(DlgItem, 0); /*0x5ebd98*/
      ShowWindow(v11, 0); /*0x5ebda1*/
      ShowWindow(v13, 0); /*0x5ebdaa*/
      ShowWindow(v15, 0); /*0x5ebdb3*/
      ShowWindow(v17, 0); /*0x5ebdbc*/
    }
  }
}
} // namespace gamemd

// 0x5EC290
namespace gamemd {
char sub_5EC290(SkirmishDialog * hDlg, int a2)
{
{
  int v4; // ebp
  int i; // esi

  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ec2a0*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec2ab*/
      v4 = 6; /*0x5ec2bb*/
    else
      v4 = 2; /*0x5ec2b4*/
  }
  else
  {
    v4 = 8; /*0x5ec2c2*/
  }
  for ( i = a2; i < 8; ++i )
  {
  int v6; // edx
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v6 = 1042; /*0x5ec2e2*/
          break;
        case 2:
          v6 = 1043; /*0x5ec2ee*/
          break;
        case 3:
          v6 = 1044; /*0x5ec2fa*/
          break;
        case 4:
          v6 = 1045; /*0x5ec306*/
          break;
        case 5:
          v6 = 1046; /*0x5ec312*/
          break;
        case 6:
          v6 = 1047; /*0x5ec31e*/
          break;
        default:
          v6 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5ec2d6*/
    }
    if ( i >= v4 ) /*0x5ec341*/
    {
      if ( i != *(_DWORD *)&stru_830620[4228] ) /*0x5ec353*/
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2276), 1); /*0x5ec360*/
    }
    else if ( i != *(_DWORD *)&stru_830620[4228] ) /*0x5ec345*/
    {
      PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)*(&g_MatrixTransformState + 2275), 1); /*0x5ec34f*/
    }
  }
  DisableCampaignSlots((HWND)hDlg, a2); /*0x5ec373*/
  if ( *(&g_MatrixTransformState + 2263) ) /*0x5ec383*/
    DisplayRankingsThunkWOL(); /*0x5ec385*/
  else
    RetVtableStubZero_eax_27(); /*0x5ec38c*/
  return CheckGameSettingsChanged(1, 0);
}
} // namespace gamemd

// 0x5EC3A0
namespace gamemd {
void SetupMultiplayerLobbyScreen(SkirmishDialog * hDlg, wchar_t * a2, int a3)
{
{
  int PlayerCountMap; // esi
  char v7; // bl
  int v9; // edi
  int v10; // esi
  INIClass *ResourceID2; // esi
  HWND DlgItem; // eax
  int ResourceIDCSF; // esi
  ReferenceCounted *v19; // esi
  wchar_t **v20; // eax
  CampaignScore *v21; // eax
  int v22; // [esp+Ch] [ebp-114h]
  wchar_t *v23; // [esp+10h] [ebp-110h] BYREF
  int v24; // [esp+14h] [ebp-10Ch]
  wchar_t *v25; // [esp+18h] [ebp-108h] BYREF
  ObjectClass aP0; // [esp+1Ch] [ebp-104h] BYREF

  v23 = a2; /*0x5ec3b7*/
  if ( a3 == -1 ) /*0x5ec3bb*/
  {
    PlayerCountMap = 8; /*0x5ec3bd*/
  }
  else
  {
    PlayerCountMap = ReadPlayerCountMap(a3); /*0x5ec3cf*/
    if ( *(_DWORD *)&HouseClass_Player[29936] ) /*0x5ec3d3*/
    {
      int v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 152))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5ec3d7*/
      if ( v6 != -1 && v6 < PlayerCountMap ) /*0x5ec3e4*/
        PlayerCountMap = v6; /*0x5ec3e6*/
    }
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ec3ef*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5ec3f1*/
      {
        PlayerCountMap &= ~1u; /*0x5ec3fa*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5ec3ff*/
      {
        PlayerCountMap = 2; /*0x5ec408*/
      }
    }
  }
  v22 = PlayerCountMap; /*0x5ec413*/
  if ( *(_DWORD *)&HouseClass_Player[29936] /*0x5ec425*/
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 64))(*(_DWORD *)&HouseClass_Player[29936])
    || Network::IsMultiplayerActive() )
  {
  int v8; // eax
    v7 = 0; /*0x5ec437*/
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ec43c*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec447*/
        v8 = 6; /*0x5ec457*/
      else
        v8 = 2; /*0x5ec450*/
    }
    else
    {
      v8 = 8; /*0x5ec45e*/
    }
    if ( PlayerCountMap > v8 ) /*0x5ec465*/
      v22 = v8; /*0x5ec467*/
  }
  else
  {
    v7 = 1; /*0x5ec42e*/
  }
  if ( a2 == (wchar_t *)-1 ) /*0x5ec46e*/
  {
    *(_DWORD *)&stru_830620[4320] = 8; /*0x5ec470*/
    *(&g_MatrixTransformState + 2287) = 0; /*0x5ec47a*/
  }
  v9 = v22 - *(_DWORD *)&stru_830620[4320]; /*0x5ec493*/
  v10 = 0; /*0x5ec495*/
  v24 = 0; /*0x5ec499*/
  if ( !*(_DWORD *)&stru_830620[4228] ) /*0x5ec49d*/
  {
  int v11; // eax
    if ( v7 ) /*0x5ec4a1*/
    {
LABEL_40:
      v10 = 1; /*0x5ec4f1*/
      v24 = 1; /*0x5ec4fd*/
      if ( !*(&g_MatrixTransformState + 2287) && v9 + v22 < 7 ) /*0x5ec50d*/
        ++v9; /*0x5ec50f*/
      goto LABEL_43; /*0x5ec50f*/
    }
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ec4af*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec4ba*/
        v11 = 6; /*0x5ec4ca*/
      else
        v11 = 2; /*0x5ec4c3*/
    }
    else
    {
      v11 = 8; /*0x5ec4d1*/
    }
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ec4dc*/
    {
      if ( v11 >= 6 ) /*0x5ec4e1*/
      {
LABEL_39:
        if ( v22 >= v11 ) /*0x5ec4ef*/
          goto LABEL_43; /*0x5ec4ef*/
        goto LABEL_40; /*0x5ec4ef*/
      }
    }
    else if ( v11 >= 8 ) /*0x5ec4e8*/
    {
      goto LABEL_39; /*0x5ec4e8*/
    }
    ++v11; /*0x5ec4ea*/
    goto LABEL_39; /*0x5ec4ea*/
  }
LABEL_43:
  if ( v23 == (wchar_t *)-1 && !*(_DWORD *)&stru_830620[4228] ) /*0x5ec51e*/
  {
    ResourceID2 = (INIClass *)GetResourceID2CSF(0); /*0x5ec527*/
    SetupComboBoxObserver((HWND)hDlg, (int)ResourceID2); /*0x5ec52d*/
    SetupLobbyCountryCombo(hDlg, (int)ResourceID2, -3); /*0x5ec538*/
    DlgItem = GetDlgItem((HWND)hDlg, 1041); /*0x5ec54c*/
    SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5ec553*/
    ResourceIDCSF = GetResourceIDCSF(0); /*0x5ec560*/
    FillListBox((HWND)hDlg, ResourceIDCSF); /*0x5ec566*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, 8); /*0x5ec571*/
    v10 = v24; /*0x5ec576*/
  }
  if ( v9 <= 0 )
  {
    if ( v9 >= 0 )
    {
      if ( v10 + v22 >= 7 ) /*0x5ec6b9*/
        SetupMultiplayerLobbyScreen_Setup(hDlg, (char *)7, 1); /*0x5ec6c4*/
    }
    else
    {
  int v16; // edi
      int v15 = v10 + v22; /*0x5ec5a3*/
      if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ec5a6*/
      {
        if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec5b1*/
          v16 = 6; /*0x5ec5c1*/
        else
          v16 = 2; /*0x5ec5ba*/
      }
      else
      {
        v16 = 8; /*0x5ec5c8*/
      }
      int v17 = v10 + v22; /*0x5ec5d0*/
      if ( v15 < 8 )
      {
        do
        {
  int v18; // edx
          if ( v17 )
          {
            switch ( v17 )
            {
              case 1:
                v18 = 1042; /*0x5ec5e8*/
                break;
              case 2:
                v18 = 1043; /*0x5ec5f4*/
                break;
              case 3:
                v18 = 1044; /*0x5ec600*/
                break;
              case 4:
                v18 = 1045; /*0x5ec60c*/
                break;
              case 5:
                v18 = 1046; /*0x5ec618*/
                break;
              case 6:
                v18 = 1047; /*0x5ec624*/
                break;
              default:
                v18 = v17 != 7 ? -1 : 1048;
                break;
            }
          }
          else
          {
            v18 = 1041; /*0x5ec5dc*/
          }
          if ( v17 >= v16 ) /*0x5ec647*/
          {
            if ( v17 != *(_DWORD *)&stru_830620[4228] ) /*0x5ec659*/
              PlayerSkirmishSlotHandler(hDlg, v18, (LPARAM)*(&g_MatrixTransformState + 2276), 1); /*0x5ec666*/
          }
          else if ( v17 != *(_DWORD *)&stru_830620[4228] ) /*0x5ec64b*/
          {
            PlayerSkirmishSlotHandler(hDlg, v18, (LPARAM)*(&g_MatrixTransformState + 2275), 1); /*0x5ec655*/
          }
          ++v17; /*0x5ec66b*/
        }
        while ( v17 < 8 );
      }
      DisableCampaignSlots((HWND)hDlg, v15); /*0x5ec679*/
      if ( *(&g_MatrixTransformState + 2263) ) /*0x5ec685*/
        DisplayRankingsThunkWOL(); /*0x5ec687*/
      else
        RetVtableStubZero_eax_27(); /*0x5ec69b*/
      CheckGameSettingsChanged(1, 0); /*0x5ec690*/
      v10 = v24; /*0x5ec695*/
    }
  }
  else
  {
    SetupMultiplayerLobbyScreen_Setup( /*0x5ec58c*/
      hDlg,
      (char *)*(&g_MatrixTransformState + 2287) + *(_DWORD *)&stru_830620[4320],
      v9);
  }
  MultiplayerLobby::FillSlots(hDlg); /*0x5ec6cb*/
  if ( *(_DWORD *)&stru_830620[4228] == -1 ) /*0x5ec6d9*/
  {
    if ( *(_DWORD *)&HouseClass_Player[29936] ) /*0x5ec6e7*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 188))(*(_DWORD *)&HouseClass_Player[29936]) ) /*0x5ec6ef*/
      {
        *(_DWORD *)&stru_830620[4228] = 7; /*0x5ec6ff*/
        MultiplayerLobby::FillSlots(hDlg); /*0x5ec709*/
        Debug::Log(); /*0x5ec713*/
        v19 = *(ReferenceCounted **)&HouseClass_Player[21864][4 * *(_DWORD *)&stru_830620[4228] + 18396]; /*0x5ec724*/
        unknown_libname_74(&v25); /*0x5ec72b*/
        if ( !v19 /*0x5ec76a*/
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2275)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2276)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2280)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2281)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2277)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2278)
          || v19 == (ReferenceCounted *)*(&g_MatrixTransformState + 2279) )
        {
          GetPlayerTypeString((char **)&v23, (wchar_t *)v19); /*0x5ec77e*/
          v20 = CharStringToWide(&aP0, (const char **)&v23); /*0x5ec78b*/
          WideString::Reassign_Alt((void **)&v25, (const wchar_t **)v20); /*0x5ec795*/
          DeleteAndZero::Alt((void **)&aP0); /*0x5ec79e*/
          DeleteAndZero((int)&v23); /*0x5ec7a7*/
        }
        else
        {
          WideString::Assign_Alt((void **)&v25, (wchar_t *)v19); /*0x5ec771*/
        }
        v21 = WideString::GetOrEmpty(&v25); /*0x5ec7b0*/
        WideString::Assign(&v23, v21); /*0x5ec7ba*/
        ToWideStringCharAlt((char **)&aP0, (const wchar_t **)&v23); /*0x5ec7c7*/
        sprintf(&aP0[4], (ObjectClass *)&stru_830620[5928], *(INIClass **)&stru_830620[4228]); /*0x5ec7e0*/
        DeleteAndZero((int)&aP0); /*0x5ec7ec*/
        DeleteAndZero::Alt((void **)&v23); /*0x5ec7f5*/
        Network::SendOptionsGame(&aP0[4]); /*0x5ec7fe*/
        DeleteAndZero::Alt((void **)&v25); /*0x5ec807*/
        *(_DWORD *)&stru_830620[4320] = v22; /*0x5ec816*/
        *(&g_MatrixTransformState + 2287) = (CoordStruct *)v24; /*0x5ec81c*/
      }
      else
      {
        *(&g_MatrixTransformState + 2287) = (CoordStruct *)v10; /*0x5ec867*/
        *(_DWORD *)&stru_830620[4320] = v22; /*0x5ec86f*/
      }
    }
    else
    {
      *(&g_MatrixTransformState + 2287) = (CoordStruct *)v10; /*0x5ec84b*/
      *(_DWORD *)&stru_830620[4320] = v22; /*0x5ec853*/
    }
  }
  else
  {
    *(&g_MatrixTransformState + 2287) = (CoordStruct *)v10; /*0x5ec830*/
    *(_DWORD *)&stru_830620[4320] = v22; /*0x5ec838*/
  }
}
} // namespace gamemd

// 0x5EC9F0
namespace gamemd {
AbstractClass * * PlayerSkirmishSlotHandler()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd

// 0x5ED270
namespace gamemd {
char sub_5ED270(SkirmishDialog * hDlg, int nIDDlgItem, LPARAM a3)
{
{
  CCINIClass *v5; // edx
  WPARAM v6; // ebx
  LRESULT v8; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]
  CCINIClass *v10; // [esp+1Ch] [ebp+4h]
  switch ( a3 )
  {
    case 2:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2275); /*0x5ed289*/
      goto LABEL_13; /*0x5ed28d*/
    case 3:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2276); /*0x5ed29a*/
      goto LABEL_13; /*0x5ed29e*/
    case 4:
      v5 = (CCINIClass *)*(&g_MatrixTransformState + 2277); /*0x5ed2a5*/
      break;
    case 5:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2278); /*0x5ed2b7*/
      goto LABEL_13; /*0x5ed2bb*/
    case 6:
      v10 = (CCINIClass *)*(&g_MatrixTransformState + 2279); /*0x5ed2c8*/
      goto LABEL_13; /*0x5ed2cc*/
    default:
      v5 = a3 != 7 ? 0 : (CCINIClass *)*(&g_MatrixTransformState + 2281);
      break;
  }
  v10 = v5; /*0x5ed2de*/
LABEL_13:
  hWnd = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x5ed2e2*/
  ShowWindow(hWnd, 0); /*0x5ed2f1*/
  v6 = 0; /*0x5ed30a*/
  v8 = SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5ed30e*/
  if ( v8 > 0 ) /*0x5ed312*/
  {
    while ( (CCINIClass *)SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x150u, v6, 0) != v10 ) /*0x5ed324*/
    {
      if ( (int)++v6 >= v8 ) /*0x5ed32d*/
        goto LABEL_18; /*0x5ed32d*/
    }
    SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x14Eu, v6, 0); /*0x5ed33b*/
  }
LABEL_18:
  ShowWindow(hWnd, 5); /*0x5ed33d*/
  return PlayerSkirmishSlotHandler(hDlg, nIDDlgItem, (LPARAM)v10, 0); /*0x5ed35a*/
}
} // namespace gamemd

// 0x5ED400
namespace gamemd {
AbstractClass * * SaveMultiplayerLobbySettings(ReferenceCounted * hDlg, int a2)
{
{
  int i; // edi
  LRESULT v6; // eax
  LRESULT v7; // eax
  CoordStruct *v8; // ecx
  int ResourceID2CSF; // eax
  int ResourceIDCSF; // eax
  LRESULT ComboBoxSelectedRaw; // eax
  char result; // al

  *(_DWORD *)a2 = *(_DWORD *)&HouseClass_Player[29956]; /*0x5ed40c*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)&HouseClass_Player[29960]; /*0x5ed416*/
  for ( i = 1; i < 8; ++i )
  {
  int v9; // ecx
  int v5; // esi
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v5 = 1042; /*0x5ed42e*/
          break;
        case 2:
          v5 = 1043; /*0x5ed43a*/
          break;
        case 3:
          v5 = 1044; /*0x5ed446*/
          break;
        case 4:
          v5 = 1045; /*0x5ed452*/
          break;
        case 5:
          v5 = 1046; /*0x5ed45e*/
          break;
        case 6:
          v5 = 1047; /*0x5ed46a*/
          break;
        default:
          v5 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v5 = 1041; /*0x5ed422*/
    }
    v6 = SendDlgItemMessageA((HWND)hDlg, v5, 0x147u, 0, 0); /*0x5ed491*/
    v7 = SendDlgItemMessageA((HWND)hDlg, v5, 0x150u, v6, 0); /*0x5ed4a1*/
    v8 = v7 != -1 ? (CoordStruct *)v7 : 0;
    if ( v8 == *(&g_MatrixTransformState + 2275) )
    {
      v9 = 2; /*0x5ed4b9*/
    }
    else if ( v8 == *(&g_MatrixTransformState + 2276) )
    {
      v9 = 3; /*0x5ed4c8*/
    }
    else if ( v8 == *(&g_MatrixTransformState + 2277) )
    {
      v9 = 4; /*0x5ed4d7*/
    }
    else if ( v8 == *(&g_MatrixTransformState + 2278) )
    {
      v9 = 5; /*0x5ed4e6*/
    }
    else if ( v8 == *(&g_MatrixTransformState + 2279) )
    {
      v9 = 6; /*0x5ed4f5*/
    }
    else
    {
      v9 = *(&g_MatrixTransformState + 2281) != v8 ? 2 : 7;
    }
    int v10 = a2 + 12 * i; /*0x5ed50f*/
    *(_DWORD *)(v10 + 28) = v9; /*0x5ed513*/
    ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x5ed518*/
    *(_DWORD *)(v10 + 32) = GetComboBoxSelected(hDlg, ResourceID2CSF, 0xFFFFFFFF); /*0x5ed52a*/
    ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x5ed52d*/
    ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, ResourceIDCSF, 0xFFFFFFFF); /*0x5ed538*/
    int v14 = 3 * i + 9; /*0x5ed53d*/
    *(_DWORD *)(a2 + 4 * v14) = ComboBoxSelectedRaw; /*0x5ed545*/
  }
  *(_DWORD *)(a2 + 8) = *(_DWORD *)&HouseClass_Player[29980]; /*0x5ed556*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)&HouseClass_Player[29968]; /*0x5ed55e*/
  *(_DWORD *)(a2 + 16) = *(_DWORD *)&HouseClass_Player[29988]; /*0x5ed567*/
  *(_BYTE *)(a2 + 20) = HouseClass_Player[29974]; /*0x5ed570*/
  *(_BYTE *)(a2 + 21) = HouseClass_Player[29975]; /*0x5ed578*/
  *(_BYTE *)(a2 + 22) = HouseClass_Player[29976]; /*0x5ed581*/
  *(_BYTE *)(a2 + 23) = HouseClass_Player[30164]; /*0x5ed58a*/
  result = HouseClass_Player[29973]; /*0x5ed58d*/
  *(_BYTE *)(a2 + 24) = HouseClass_Player[29973]; /*0x5ed592*/
  return result; /*0x5ed555*/
}
} // namespace gamemd

// 0x5ED5A0
namespace gamemd {
void SetupMultiplayerLobbyPlayers(SkirmishDialog * hDlg, int a2)
{
{
  char *First; // edi
  CoordStruct *v15; // ebp
  WPARAM v16; // ebx
  void *ResourceID2CSF; // ebx
  void *ResourceIDCSF; // edi
  void *ResourceID3CSF; // ebp
  HWND v21; // edi
  HWND v22; // ebp
  LRESULT ComboBoxSelectedRaw; // ebx
  SessionClass *v25; // edi
  CoordStruct *v26; // ecx
  CampaignClass *v28; // ebx
  SessionClass *v30; // edi
  CoordStruct *v31; // ecx
  SessionClass *v32; // eax
  SessionClass *ComboBoxSelectedRaw2; // ebx
  HWND v38; // edi
  HWND v39; // ebp
  int i; // [esp+14h] [ebp-1Ch]
  LRESULT nIDDlgItem; // [esp+1Ch] [ebp-14h]
  void *nIDDlgItema; // [esp+1Ch] [ebp-14h]
  HWND nIDDlgItemb; // [esp+1Ch] [ebp-14h]
  HWND hWnd; // [esp+28h] [ebp-8h]
  HWND hWnda; // [esp+28h] [ebp-8h]
  HWND hWndb; // [esp+28h] [ebp-8h]
  HWND DlgItem; // [esp+2Ch] [ebp-4h]

  if ( *(int *)a2 < 1 || *(_DWORD *)a2 > MultiplayerGameMode::ListGet() ) /*0x5ed5bf*/
    *(_DWORD *)a2 = *(_DWORD *)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed5c9*/
  *(_DWORD *)&HouseClass_Player[29956] = *(_DWORD *)a2; /*0x5ed5cf*/
  First = (char *)MultiplayerGameMode::Find(*(void **)&HouseClass_Player[29956]); /*0x5ed5da*/
  if ( !First ) /*0x5ed5de*/
    First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed5e5*/
  if ( (Network::IsMultiplayerActive() || Network::IsLobbyFeature()) /*0x5ed601*/
    && First
    && (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)First + 4))(First) )
  {
    void * v5 = *(void **)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed60d*/
    *(_DWORD *)a2 = v5; /*0x5ed610*/
    *(_DWORD *)&HouseClass_Player[29956] = v5; /*0x5ed615*/
    int v6 = MultiplayerGameMode::Find(v5); /*0x5ed61a*/
    if ( !v6 ) /*0x5ed621*/
      v6 = MultiplayerGameMode::GetFirst(); /*0x5ed623*/
    First = (char *)v6; /*0x5ed628*/
  }
  *(_DWORD *)a2 = *((_DWORD *)First + 10); /*0x5ed62d*/
  *(_DWORD *)&HouseClass_Player[29956] = *((_DWORD *)First + 10); /*0x5ed633*/
  int v7 = *(_DWORD *)(a2 + 4); /*0x5ed639*/
  if ( v7 < 0 || v7 >= *(int *)&HouseClass_Player[31628] ) /*0x5ed646*/
    *(_DWORD *)(a2 + 4) = 0; /*0x5ed648*/
  if ( LoadScenarioClassByIndex(*(_DWORD *)(a2 + 4)) ) /*0x5ed652*/
    int v8 = *(_DWORD *)(a2 + 4); /*0x5ed65b*/
  else
    v8 = 0; /*0x5ed660*/
  *(_DWORD *)&HouseClass_Player[29960] = v8; /*0x5ed668*/
  char v41 = 0; /*0x5ed66d*/
  AbstractClass *v9 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] + 4 * v8); /*0x5ed672*/
  if ( v9 && IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[31616] + 4 * v8)) ) /*0x5ed67b*/
  {
    if ( MapSeed::IsInitialized() ) /*0x5ed684*/
      ScenarioClass::CopyStartPositions(); /*0x5ed694*/
    else
      v41 = 1; /*0x5ed68d*/
  }
  if ( !MapPreview::Check(First, v9) || v41 ) /*0x5ed6ab*/
  {
    int v10 = (*(int (__thiscall **)(char *))(*(_DWORD *)First + 68))(First); /*0x5ed6b1*/
    if ( v10 == -1 ) /*0x5ed6b7*/
    {
      First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed6be*/
      *(_DWORD *)a2 = *((_DWORD *)First + 10); /*0x5ed6c3*/
      *(_DWORD *)&HouseClass_Player[29956] = *((_DWORD *)First + 10); /*0x5ed6c9*/
      v10 = (*(int (__thiscall **)(char *))(*(_DWORD *)First + 68))(First); /*0x5ed6d3*/
    }
    *(_DWORD *)(a2 + 4) = v10; /*0x5ed6d6*/
    *(_DWORD *)&HouseClass_Player[29960] = v10; /*0x5ed6db*/
    LoadScenarioClassByIndex(v10); /*0x5ed6e0*/
  }
  *(_DWORD *)&HouseClass_Player[29936] = First; /*0x5ed6eb*/
  LoadScenarioClassByIndex(*(int *)&HouseClass_Player[29960]); /*0x5ed6f1*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 32))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5ed6fe*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 36))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5ed709*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)First + 24))(First); /*0x5ed710*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)First + 124))(First); /*0x5ed717*/
  int v11 = 8; /*0x5ed720*/
  int v47 = 8; /*0x5ed728*/
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x5ed72c*/
  {
  bool v12; // zf
    if ( !Network::IsMultiplayerActive() || (v12 = Network::IsLobbyFeature() == 0, v11 = 2, !v12) ) /*0x5ed743*/
      v11 = 6; /*0x5ed745*/
    v47 = v11; /*0x5ed74a*/
  }
  if ( !*(_DWORD *)&stru_830620[4228] && v11 < 8 ) /*0x5ed75b*/
    v47 = v11 + 1; /*0x5ed75e*/
  for ( i = 1; i < 8; ++i )
  {
  int v13; // edi
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v13 = 1042; /*0x5ed77e*/
          break;
        case 2:
          v13 = 1043; /*0x5ed78a*/
          break;
        case 3:
          v13 = 1044; /*0x5ed796*/
          break;
        case 4:
          v13 = 1045; /*0x5ed7a2*/
          break;
        case 5:
          v13 = 1046; /*0x5ed7ae*/
          break;
        case 6:
          v13 = 1047; /*0x5ed7ba*/
          break;
        default:
          v13 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v13 = 1041; /*0x5ed772*/
    }
    int v14 = *(_DWORD *)(a2 + 12 * i + 28); /*0x5ed7de*/
    int v43 = v14; /*0x5ed7e9*/
    if ( (Network::IsMultiplayerActive() || !*(_DWORD *)&stru_830620[4228] || *(&g_MatrixTransformState + 2222)) /*0x5ed815*/
      && (v14 == 4 || v14 == 5 || v14 == 6) )
    {
      v14 = 2; /*0x5ed817*/
      v43 = 2; /*0x5ed81c*/
    }
    if ( i < v47 )
    {
      switch ( v14 )
      {
        case 7:
          v15 = *(&g_MatrixTransformState + 2275); /*0x5ed83b*/
          v43 = 2; /*0x5ed841*/
          break;
        case 2:
          v15 = *(&g_MatrixTransformState + 2275); /*0x5ed850*/
          break;
        case 3:
          v15 = *(&g_MatrixTransformState + 2276); /*0x5ed85d*/
          break;
        case 4:
          v15 = *(&g_MatrixTransformState + 2277); /*0x5ed86a*/
          break;
        case 5:
          v15 = *(&g_MatrixTransformState + 2278); /*0x5ed877*/
          break;
        default:
          v15 = v14 != 6 ? 0 : *(&g_MatrixTransformState + 2279);
          break;
      }
    }
    else
    {
      v15 = *(&g_MatrixTransformState + 2276); /*0x5ed826*/
      v43 = 3; /*0x5ed82c*/
    }
    hWnd = GetDlgItem((HWND)hDlg, v13); /*0x5ed89d*/
    ShowWindow(hWnd, 0); /*0x5ed8a1*/
    v16 = 0; /*0x5ed8b8*/
    nIDDlgItem = SendDlgItemMessageA((HWND)hDlg, v13, 0x146u, 0, 0); /*0x5ed8bc*/
    if ( nIDDlgItem > 0 ) /*0x5ed8c0*/
    {
      while ( (CoordStruct *)SendDlgItemMessageA((HWND)hDlg, v13, 0x150u, v16, 0) != v15 ) /*0x5ed8d4*/
      {
        if ( (int)++v16 >= nIDDlgItem ) /*0x5ed8dd*/
          goto LABEL_78; /*0x5ed8dd*/
      }
      SendDlgItemMessageA((HWND)hDlg, v13, 0x14Eu, v16, 0); /*0x5ed8eb*/
    }
LABEL_78:
    ShowWindow(hWnd, 5); /*0x5ed8f1*/
    PlayerSkirmishSlotHandler(hDlg, v13, (LPARAM)v15, 0); /*0x5ed905*/
    ResourceID2CSF = (void *)GetResourceID2CSF((void *)i); /*0x5ed917*/
    ResourceIDCSF = (void *)GetResourceIDCSF((void *)i); /*0x5ed920*/
    ResourceID3CSF = (void *)GetResourceID3CSF((void *)i); /*0x5ed92b*/
    nIDDlgItema = (void *)GetResourceID4CSF((void *)i); /*0x5ed932*/
    if ( v43 == 2 || v43 == 3 ) /*0x5ed946*/
    {
      int v36 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 40))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5edc12*/
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, v36); /*0x5edc1a*/
      SetupSkirmishSpawnLocations((HWND)hDlg, (int)ResourceIDCSF, -2); /*0x5edc25*/
      SetupLobbyFactionSlots((SessionClass *)hDlg, (int)ResourceID3CSF, -2); /*0x5edc30*/
      int v37 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 44))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5edc3d*/
      SetupLobbyPlayerSlots((SessionClass *)hDlg, (int)nIDDlgItema, v37); /*0x5edc47*/
      DlgItem = GetDlgItem((HWND)hDlg, (int)ResourceID2CSF); /*0x5edc58*/
      v38 = GetDlgItem((HWND)hDlg, (int)ResourceIDCSF); /*0x5edc5e*/
      v39 = GetDlgItem((HWND)hDlg, (int)ResourceID3CSF); /*0x5edc64*/
      hWndb = GetDlgItem((HWND)hDlg, (int)nIDDlgItema); /*0x5edc7b*/
      EnableWindow(DlgItem, 0); /*0x5edc7f*/
      EnableWindow(v38, 0); /*0x5edc84*/
      EnableWindow(v39, 0); /*0x5edc89*/
      EnableWindow(hWndb, 0); /*0x5edc92*/
    }
    else if ( v43 == 7 ) /*0x5ed94f*/
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, -3); /*0x5ed95b*/
      SetupSkirmishSpawnLocations((HWND)hDlg, (int)ResourceIDCSF, -2); /*0x5ed966*/
      SetupLobbyFactionSlots((SessionClass *)hDlg, (int)ResourceID3CSF, -2); /*0x5ed971*/
      int v20 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 44))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5ed97e*/
      SetupLobbyPlayerSlots((SessionClass *)hDlg, (int)nIDDlgItema, v20); /*0x5ed988*/
      hWnda = GetDlgItem((HWND)hDlg, (int)ResourceID2CSF); /*0x5ed999*/
      v21 = GetDlgItem((HWND)hDlg, (int)ResourceIDCSF); /*0x5ed99f*/
      v22 = GetDlgItem((HWND)hDlg, (int)ResourceID3CSF); /*0x5ed9a5*/
      nIDDlgItemb = GetDlgItem((HWND)hDlg, (int)nIDDlgItema); /*0x5ed9bc*/
      EnableWindow(hWnda, 0); /*0x5ed9c0*/
      EnableWindow(v21, 0); /*0x5ed9c5*/
      EnableWindow(v22, 0); /*0x5ed9ca*/
      EnableWindow(nIDDlgItemb, 0); /*0x5ed9d3*/
    }
    else
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, *(_DWORD *)(a2 + 12 * i + 32)); /*0x5ed9e4*/
      SelectLobbyCountry((HWND)hDlg, ResourceID2CSF); /*0x5ed9ed*/
      SetupSkirmishSpawnLocations((HWND)hDlg, (int)ResourceIDCSF, *(_DWORD *)(a2 + 4 * (3 * i + 9))); /*0x5eda06*/
      ComboBoxSelectedRaw = GetComboBoxSelectedRaw((ReferenceCounted *)hDlg, (int)ResourceIDCSF, 0xFFFFFFFF); /*0x5eda18*/
      int v24 = StartCombo::IDToIndex(ResourceIDCSF); /*0x5eda1a*/
      if ( v24 == *(_DWORD *)&HouseClass_Player[40256] ) /*0x5eda25*/
      {
        FillColorComboBoxUI((HWND)hDlg, (int)ResourceIDCSF); /*0x5eda2f*/
        if ( ComboBoxSelectedRaw != -2 ) /*0x5eda37*/
        {
          v25 = (SessionClass *)&HouseClass_Player[40260]; /*0x5eda39*/
          while ( 1 ) /*0x5eda3e*/
          {
            v26 = (CoordStruct *)v25->GameMode[0]; /*0x5eda3e*/
            if ( v25->GameMode[0] ) /*0x5eda3e*/
            {
              if ( v26 != *(&g_MatrixTransformState + 2275) /*0x5eda83*/
                && v26 != *(&g_MatrixTransformState + 2276)
                && v26 != *(&g_MatrixTransformState + 2280)
                && v26 != *(&g_MatrixTransformState + 2281)
                && v26 != *(&g_MatrixTransformState + 2277)
                && v26 != *(&g_MatrixTransformState + 2278)
                && v26 != *(&g_MatrixTransformState + 2279)
                && SessionClass::GetPlayerColor((int)v26) == ComboBoxSelectedRaw )
              {
                break; /*0x5eda83*/
              }
            }
            v25 = (SessionClass *)((char *)v25 + 4); /*0x5eda85*/
            if ( (int)v25 >= (int)&HouseClass_Player[40292] ) /*0x5eda8e*/
            {
              char * v27 = &HouseClass_Player[30064]; /*0x5eda90*/
              while ( *(_DWORD *)v27 != ComboBoxSelectedRaw ) /*0x5eda97*/
              {
                v27 += 4; /*0x5eda99*/
                if ( (int)v27 >= (int)&HouseClass_Player[30096] ) /*0x5edaa1*/
                  goto LABEL_100; /*0x5edaa1*/
              }
              break; /*0x5eda97*/
            }
          }
          ComboBoxSelectedRaw = -2; /*0x5edaa5*/
        }
LABEL_100:
        SessionClass::AssignColor(&HouseClass_Player[29932], ComboBoxSelectedRaw, 0); /*0x5edaaa*/
        if ( *(_DWORD *)&HouseClass_Player[40248] ) /*0x5edabe*/
          SessionClass::SetPlayerColor(**(_DWORD **)&HouseClass_Player[40236], ComboBoxSelectedRaw); /*0x5edac9*/
      }
      else
      {
        *(_DWORD *)&HouseClass_Player[21864][4 * v24 + 8200] = ComboBoxSelectedRaw; /*0x5edad0*/
      }
      SetupLobbyFactionSlots((SessionClass *)hDlg, (int)ResourceID3CSF, -2); /*0x5edadd*/
      v28 = SetComboBoxSelection((HWND)hDlg, (int)ResourceID3CSF, 0xFFFFFFFF); /*0x5edaef*/
      int v29 = Dialog::SideIDToIndex(ResourceID3CSF); /*0x5edaf1*/
      if ( v29 == *(_DWORD *)&HouseClass_Player[40256] ) /*0x5edafc*/
      {
        FillComboBoxSides((HWND)hDlg, (int)ResourceID3CSF); /*0x5edb06*/
        if ( v28 != -2 ) /*0x5edb0e*/
        {
          v30 = (SessionClass *)&HouseClass_Player[40260]; /*0x5edb10*/
          while ( 1 ) /*0x5edb15*/
          {
            v31 = (CoordStruct *)v30->GameMode[0]; /*0x5edb15*/
            if ( v30->GameMode[0] ) /*0x5edb15*/
            {
              if ( v31 != *(&g_MatrixTransformState + 2275) /*0x5edb5a*/
                && v31 != *(&g_MatrixTransformState + 2276)
                && v31 != *(&g_MatrixTransformState + 2280)
                && v31 != *(&g_MatrixTransformState + 2281)
                && v31 != *(&g_MatrixTransformState + 2277)
                && v31 != *(&g_MatrixTransformState + 2278)
                && v31 != *(&g_MatrixTransformState + 2279)
                && SessionClass::GetOption((int)v31) == v28 )
              {
                break; /*0x5edb5a*/
              }
            }
            v30 = (SessionClass *)((char *)v30 + 4); /*0x5edb5c*/
            if ( (int)v30 >= (int)&HouseClass_Player[40292] ) /*0x5edb65*/
            {
              v32 = (SessionClass *)&HouseClass_Player[30096]; /*0x5edb67*/
              while ( v32->GameMode[0] != v28 ) /*0x5edb6e*/
              {
                v32 = (SessionClass *)((char *)v32 + 4); /*0x5edb70*/
                if ( (int)v32 >= (int)&HouseClass_Player[30128] ) /*0x5edb78*/
                  goto LABEL_121; /*0x5edb78*/
              }
              break; /*0x5edb6e*/
            }
          }
          v28 = -2; /*0x5edb7c*/
        }
LABEL_121:
        if ( *(_DWORD *)&HouseClass_Player[40248] ) /*0x5edb88*/
          SessionClass::SetOption(**(_DWORD **)&HouseClass_Player[40236], (SessionClass *)v28); /*0x5edb92*/
      }
      else
      {
        *(_DWORD *)&HouseClass_Player[21864][4 * v29 + 8232] = v28; /*0x5edb99*/
      }
      int v33 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 48))(*(_DWORD *)&HouseClass_Player[29936]); /*0x5edba8*/
      SetupLobbyPlayerSlots((SessionClass *)hDlg, (int)nIDDlgItema, v33); /*0x5edbb4*/
      ComboBoxSelectedRaw2 = (SessionClass *)GetComboBoxSelectedRaw2((HWND)hDlg, (int)nIDDlgItema, 0xFFFFFFFF); /*0x5edbc6*/
      int v35 = Dialog::OptionIDToIndex(nIDDlgItema); /*0x5edbc8*/
      if ( v35 == *(_DWORD *)&HouseClass_Player[40256] ) /*0x5edbd3*/
      {
        SetupLobbyPlayerSlots((SessionClass *)hDlg, (int)nIDDlgItema, (int)ComboBoxSelectedRaw2); /*0x5edbda*/
        if ( *(_DWORD *)&HouseClass_Player[40248] ) /*0x5edbe6*/
          SessionClass::SetOption2(**(_DWORD **)&HouseClass_Player[40236], ComboBoxSelectedRaw2); /*0x5edbf4*/
      }
      else
      {
        *(_DWORD *)&HouseClass_Player[21864][4 * v35 + 8264] = ComboBoxSelectedRaw2; /*0x5edbfe*/
      }
    }
  }
  *(_DWORD *)&HouseClass_Player[29980] = *(_DWORD *)(a2 + 8); /*0x5edcb1*/
  *(_DWORD *)&HouseClass_Player[29968] = *(_DWORD *)(a2 + 12); /*0x5edcba*/
  *(_DWORD *)&HouseClass_Player[29988] = *(_DWORD *)(a2 + 16); /*0x5edcc3*/
  HouseClass_Player[29974] = *(_BYTE *)(a2 + 20); /*0x5edccc*/
  HouseClass_Player[29975] = *(_BYTE *)(a2 + 21); /*0x5edcd5*/
  HouseClass_Player[29976] = *(_BYTE *)(a2 + 22); /*0x5edcde*/
  HouseClass_Player[30164] = *(_BYTE *)(a2 + 23); /*0x5edce7*/
  HouseClass_Player[29973] = *(_BYTE *)(a2 + 24); /*0x5edcf0*/
  return a2; /*0x5edcaa*/
}
} // namespace gamemd

// 0x5EDDE0
namespace gamemd {
void EnablePlayerSlotControls(HWND hDlg, bool a2)
{
{
  SessionClass *v5; // esi
  const wchar_t *v6; // ebx
  int ResourceID2CSF; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // eax
  HWND v10; // eax
  int ResourceID3CSF; // eax
  HWND v12; // eax
  int ResourceID4CSF; // eax
  HWND v14; // eax
  if ( hDlg ) /*0x5edded*/
  {
  int v3; // esi
    if ( Game_PlayerCount ) /*0x5eddfa*/
    {
      int v4 = 0; /*0x5ede06*/
      v5 = (SessionClass *)&g_NetworkPlayerName; /*0x5ede08*/
      v6 = *(const wchar_t **)Game_PlayerInfoArray; /*0x5ede0d*/
      while ( !v5->GameMode[0] || _wcsicmp(v6, (const wchar_t *)v5->GameMode[0]) ) /*0x5ede21*/
      {
        v5 = (SessionClass *)((char *)v5 + 4); /*0x5ede23*/
        ++v4; /*0x5ede26*/
        if ( (int)v5 >= (int)&g_PlayerNameListEnd ) /*0x5ede2d*/
        {
          v4 = -1; /*0x5ede2f*/
          break; /*0x5ede2f*/
        }
      }
      v3 = v4; /*0x5ede32*/
    }
    else
    {
      v3 = -1; /*0x5eddfc*/
    }
    if ( v3 != g_MPCooperativeState ) /*0x5ede3a*/
    {
      ResourceID2CSF = GetResourceID2CSF((void *)v3); /*0x5ede42*/
      DlgItem = GetDlgItem(hDlg, ResourceID2CSF); /*0x5ede4f*/
      if ( DlgItem ) /*0x5ede59*/
        EnableWindow(DlgItem, a2); /*0x5ede67*/
      ResourceIDCSF = GetResourceIDCSF((void *)v3); /*0x5ede6b*/
      v10 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5ede72*/
      if ( v10 ) /*0x5ede76*/
        EnableWindow(v10, a2); /*0x5ede84*/
      ResourceID3CSF = GetResourceID3CSF((void *)v3); /*0x5ede88*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5ede8f*/
      if ( v12 ) /*0x5ede93*/
        EnableWindow(v12, a2); /*0x5edea1*/
      ResourceID4CSF = GetResourceID4CSF((void *)v3); /*0x5edea5*/
      v14 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5edeac*/
      if ( v14 ) /*0x5edeb0*/
      {
        if ( a2 && g_GameStateFlags && !*(_BYTE *)(g_GameStateFlags + 60) ) /*0x5edec5*/
          EnableWindow(v14, 0); /*0x5edece*/
        else
          EnableWindow(v14, a2); /*0x5edede*/
      }
    }
  }
}
} // namespace gamemd

// 0x5EE510
namespace gamemd {
int Lobby_RefreshPlayerSlots(unsigned int a1)
{
{
  HWND v2; // ebx
  int result; // eax
  _DWORD *i; // edi
  int ResourceID4; // eax

  v2 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee521*/
  if ( v2 /*0x5ee555*/
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (result = Dialog::FindByHandle((void *)0xBD), (v2 = (HWND)result) != 0) )
  {
    result = g_GameStateFlags; /*0x5ee55b*/
    if ( g_GameStateFlags ) /*0x5ee562*/
    {
      result = 0; /*0x5ee568*/
      int v13 = 8; /*0x5ee56d*/
      if ( a1 < 8 ) /*0x5ee575*/
      {
        result = a1; /*0x5ee57b*/
        v13 = a1 + 1; /*0x5ee57e*/
      }
      SkirmishDialog *v12 = (char *)result; /*0x5ee586*/
      if ( result < v13 ) /*0x5ee58c*/
      {
  int v8; // eax
  int v7; // esi
        for ( i = (_DWORD *)(4 * result + 11055868); ; ++i ) /*0x5ee594*/
        {
          int v5 = i[2533]; /*0x5ee59f*/
          ResourceID4 = GetResourceID4CSF(v12); /*0x5ee5a5*/
          v7 = ResourceID4; /*0x5ee5aa*/
          if ( ResourceID4 < 0 || !GetDlgItem(v2, ResourceID4) ) /*0x5ee5b6*/
            goto LABEL_24; /*0x5ee5be*/
          if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5ee5de*/
            break; /*0x5ee5de*/
          if ( v5 == g_HouseClass_ObserverFlags || v5 == g_Lobby_MaxPlayers ) /*0x5ee608*/
          {
            *i = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 44))(g_GameStateFlags); /*0x5ee667*/
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 44))(g_GameStateFlags); /*0x5ee671*/
            goto LABEL_23; /*0x5ee671*/
          }
          CampaignClass *v9 = *(_DWORD *)g_GameStateFlags; /*0x5ee617*/
          if ( v5 == g_Lobby_PlayerCount ) /*0x5ee619*/
          {
            *i = v9->StubReturn10(); /*0x5ee61e*/
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 44))(g_GameStateFlags); /*0x5ee628*/
            goto LABEL_23; /*0x5ee62b*/
          }
          *i = v9->StubReturn10(); /*0x5ee630*/
          int v10 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 44))(g_GameStateFlags); /*0x5ee63a*/
          SetupLobbyPlayerSlots(v2, v7, v10); /*0x5ee642*/
          int v11 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 44))(g_GameStateFlags); /*0x5ee64f*/
          SessionClass::SetOption2(v5, v11); /*0x5ee655*/
LABEL_24:
          result = (int)(v12 + 1); /*0x5ee67e*/
          if ( (int)++v12 >= v13 ) /*0x5ee690*/
            return result; /*0x5ee690*/
        }
        *i = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 48))(g_GameStateFlags); /*0x5ee5eb*/
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 48))(g_GameStateFlags); /*0x5ee5f5*/
LABEL_23:
        SetupLobbyPlayerSlots(v2, v7, v8); /*0x5ee674*/
        goto LABEL_24; /*0x5ee679*/
      }
    }
  }
  return result; /*0x5ee698*/
}
} // namespace gamemd

// 0x5EE6F0
namespace gamemd {
unsigned int * AssignRandomMapStartPositions(MouseClass * aP0, IUnknown * aP1, int a3, int a4, char a5)
{
{
  int v9; // esi
  int v12; // eax
  int v13; // edx
  int v28; // [esp+1Ch] [ebp-14h]
  int v31; // [esp+20h] [ebp-10h]
  MouseClass *v34; // [esp+24h] [ebp-Ch]
  int v6 = *(_DWORD *)(a3 + 16); /*0x5ee705*/
  int v7 = 0; /*0x5ee708*/
  int v8 = 0; /*0x5ee70a*/
  v34 = aP0; /*0x5ee70c*/
  if ( v6 <= 0 ) /*0x5ee716*/
  {
    v9 = a4; /*0x5ee731*/
    goto LABEL_8; /*0x5ee731*/
  }
  do /*0x5ee725*/
  {
    v9 = a4; /*0x5ee718*/
    if ( *(_BYTE *)(v8 + a4) ) /*0x5ee71b*/
      ++v7; /*0x5ee721*/
    ++v8; /*0x5ee722*/
  }
  while ( v8 < v6 ); /*0x5ee725*/
  v31 = v7; /*0x5ee729*/
  if ( !v7 ) /*0x5ee72d*/
  {
LABEL_8:
    if ( a5 ) /*0x5ee739*/
    {
      int v10 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536), 0, (IUnknown *)(v6 - 1)); /*0x5ee74e*/
      *(_BYTE *)(v10 + v9) = 1; /*0x5ee757*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4 * v10 + 4480) = aP1; /*0x5ee761*/
      aP0->field_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v10); /*0x5ee770*/
      return &aP0->field_0; /*0x5ee778*/
    }
    goto LABEL_17; /*0x5ee739*/
  }
  if ( v7 != 2 || a5 ) /*0x5ee785*/
  {
LABEL_17:
    int v14 = -1; /*0x5ee7cf*/
    int v29 = -1; /*0x5ee7d5*/
    int v35 = -1; /*0x5ee7d9*/
    if ( v7 == 1 ) /*0x5ee7dd*/
    {
      int v15 = 0; /*0x5ee7e3*/
      if ( v6 > 0 ) /*0x5ee7e7*/
      {
        do /*0x5ee888*/
        {
          if ( !*(_BYTE *)(v15 + v9) ) /*0x5ee7ed*/
          {
            int v16 = 0; /*0x5ee7f7*/
            int v17 = 0; /*0x5ee7f9*/
            int v32 = 0; /*0x5ee7fd*/
            if ( v6 > 0 ) /*0x5ee801*/
            {
              do /*0x5ee865*/
              {
                if ( *(_BYTE *)(v17 + a4) ) /*0x5ee806*/
                {
                  int v18 = *(_DWORD *)(a3 + 4); /*0x5ee80c*/
                  double v19 = (double)(__int16)(*(_WORD *)(v18 + 4 * v15 + 2) - *(_WORD *)(v18 + 4 * v17 + 2)); /*0x5ee82e*/
                  int v37 = (__int16)(*(_WORD *)(v18 + 4 * v15) - *(_WORD *)(v18 + 4 * v17)); /*0x5ee832*/
                  double v20 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v37 * (double)v37 + v19 * v19)); /*0x5ee84b*/
                  v32 += (__int16)Math::RoundToInt(v20); /*0x5ee85b*/
                }
                ++v17; /*0x5ee862*/
              }
              while ( v17 < *(_DWORD *)(a3 + 16) ); /*0x5ee865*/
              v16 = v32; /*0x5ee867*/
            }
            if ( v16 < v29 || v29 < 0 ) /*0x5ee875*/
            {
              v29 = v16; /*0x5ee877*/
              v35 = v15; /*0x5ee87b*/
            }
            v9 = a4; /*0x5ee87f*/
          }
          v6 = *(_DWORD *)(a3 + 16); /*0x5ee882*/
          ++v15; /*0x5ee885*/
        }
        while ( v15 < v6 ); /*0x5ee888*/
        v14 = v35; /*0x5ee88e*/
      }
      *(_BYTE *)(v14 + v9) = 1; /*0x5ee896*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4 * v14 + 4480) = aP1; /*0x5ee8a0*/
      v34->field_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v14); /*0x5ee8b1*/
      return &v34->field_0; /*0x5ee8ad*/
    }
    else
    {
      int v21 = 0; /*0x5ee8e6*/
      int v36 = -1; /*0x5ee8e8*/
      int v30 = -1; /*0x5ee8ee*/
      if ( v6 > 0 ) /*0x5ee8f2*/
      {
        do /*0x5ee98d*/
        {
          if ( !*(_BYTE *)(v21 + v9) ) /*0x5ee8f8*/
          {
            int v22 = 0; /*0x5ee902*/
            int v23 = 0; /*0x5ee904*/
            int v33 = 0; /*0x5ee908*/
            if ( v6 > 0 ) /*0x5ee90c*/
            {
              do /*0x5ee970*/
              {
                if ( *(_BYTE *)(v23 + a4) ) /*0x5ee911*/
                {
                  int v24 = *(_DWORD *)(a3 + 4); /*0x5ee917*/
                  double v25 = (double)(__int16)(*(_WORD *)(v24 + 4 * v21 + 2) - *(_WORD *)(v24 + 4 * v23 + 2)); /*0x5ee939*/
                  int v38 = (__int16)(*(_WORD *)(v24 + 4 * v21) - *(_WORD *)(v24 + 4 * v23)); /*0x5ee93d*/
                  double v26 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v38 * (double)v38 + v25 * v25)); /*0x5ee956*/
                  v33 += (__int16)Math::RoundToInt(v26); /*0x5ee966*/
                }
                ++v23; /*0x5ee96d*/
              }
              while ( v23 < *(_DWORD *)(a3 + 16) ); /*0x5ee970*/
              v22 = v33; /*0x5ee972*/
            }
            if ( v22 > v36 ) /*0x5ee97a*/
            {
              v36 = v22; /*0x5ee97c*/
              v30 = v21; /*0x5ee980*/
            }
            v9 = a4; /*0x5ee984*/
          }
          v6 = *(_DWORD *)(a3 + 16); /*0x5ee987*/
          ++v21; /*0x5ee98a*/
        }
        while ( v21 < v6 ); /*0x5ee98d*/
        v14 = v30; /*0x5ee993*/
      }
      *(_BYTE *)(v14 + v9) = 1; /*0x5ee99b*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4 * v14 + 4480) = aP1; /*0x5ee9a7*/
      v34->field_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v14); /*0x5ee9b9*/
      return &v34->field_0; /*0x5ee9b5*/
    }
  }
  v12 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536), 0, (IUnknown *)(v6 - 3)); /*0x5ee798*/
  v6 = *(_DWORD *)(a3 + 16); /*0x5ee79d*/
  v13 = 0; /*0x5ee7a0*/
  v28 = 0; /*0x5ee7a4*/
  if ( v6 <= 0 ) /*0x5ee7a8*/
  {
LABEL_16:
    v7 = v31; /*0x5ee7cb*/
    goto LABEL_17; /*0x5ee7cb*/
  }
  while ( *(_BYTE *)(v13 + a4) || ++v28 != v12 + 1 ) /*0x5ee7aa*/
  {
    if ( ++v13 >= v6 ) /*0x5ee7c9*/
      goto LABEL_16; /*0x5ee7c9*/
  }
  *(_BYTE *)(v13 + a4) = 1; /*0x5ee8c0*/
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4 * v13 + 4480) = aP1; /*0x5ee8ca*/
  aP0->field_0 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v13); /*0x5ee8db*/
  return &aP0->field_0; /*0x5ee772*/
}
} // namespace gamemd

// 0x5E2410
namespace gamemd {
int sub_5E2410()
{
{
    DataGlobal_AC0B38 = 0;
    DataGlobal_AC0B3C = 0;
    DataGlobal_AC0B40 = 0;
    DataGlobal_AC0B44 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5E2430
namespace gamemd {
void sub_5E2430()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC0CE8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5E2460
namespace gamemd {
void sub_5E2460()
{
{
    DataGlobal_AC1160 = DataGlobal_AC0CE8 / 60.0;
}
}
} // namespace gamemd

// 0x5E2480
namespace gamemd {
void sub_5E2480()
{
{
    DataGlobal_AC10E8 = 1.0 / DataGlobal_AC1160;
}
}
} // namespace gamemd

// 0x5E24A0
namespace gamemd {
void sub_5E24A0()
{
{
    DataGlobal_AC10D8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5E24C0
namespace gamemd {
void sub_5E24C0()
{
{
    DataGlobal_AC0D28 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5E24E0
namespace gamemd {
void sub_5E24E0()
{
{
    DataGlobal_AC0AC0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5E2500
namespace gamemd {
long long sub_5E2500()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC0AC0 - DataGlobal_AC0D28);
    result = Math::RoundToInt(v0 * DataGlobal_AC0CE8 * 0.5);
    DataGlobal_AC1168 = result;
    return result;
}
}
} // namespace gamemd

// 0x5E2540
namespace gamemd {
void sub_5E2540()
{
{
    DataGlobal_AC0D38 = Math::ArcTan((double)DataGlobal_AC1168 * 0.00390625);
}
}
} // namespace gamemd

// 0x5E2570
namespace gamemd {
void sub_5E2570()
{
{
    DataGlobal_AC10D0 = Math::ArcTan((double)(2 * DataGlobal_AC1168) / DataGlobal_AC0CE8);
}
}
} // namespace gamemd

// 0x5E25A0
namespace gamemd {
long long sub_5E25A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC1168) + 0.5);
    DataGlobal_AC1158 = result;
    return result;
}
}
} // namespace gamemd

// 0x5E25D0
namespace gamemd {
int sub_5E25D0()
{
{
    DataGlobal_AC0B90 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5E25E0
namespace gamemd {
int sub_5E25E0()
{
{
    DataGlobal_AC0E98 = 0;
    DataGlobal_AC0E9C = 0;
    DataGlobal_AC0EA0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5E2600
namespace gamemd {
int sub_5E2600()
{
{
    DataGlobal_AC1150 = 0;
    DataGlobal_AC1148 = 128;
    DataGlobal_AC114C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5E2E40
namespace gamemd {
INT_PTR sub_5E2E40(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
{
    INT_PTR result;
    if ( a2 <= 0x2B )
  {
    switch ( a2 )
    {
    case 0x2Bu: Dialog::Resize(a4);
    return 1;
    case 0xFu: Dialog::DrawBackground(hWnd);
    Dialog::StopBink(hWnd);
    ValidateRect(hWnd, 0);
    return 1;
    case 0x14u: return 1;
    }
    return 0;
  }
    if ( a2 != 273 )
    return 0;
    switch ( (short)a3 )
  {
    case 1: case 2: case 6: case 7: CloseDialog(hWnd, (unsigned short)a3);
    result = 1;
    break;
    default: return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x5E35A0
namespace gamemd {
char sub_5E35A0()
{
{
    unsigned int v0;
    int v1;
    int i;
    int v4[113];
    short v5;
    char v6;
    memset(v4, 0, sizeof(v4));
    v5 = 0;
    v6 = 0;
    v4[0] = 40;
    v0 = strlen(g_GameSetupBuffer) + 1;
    qmemcpy(&v4[1], g_GameSetupBuffer, v0);
    v1 = Game_PlayerCount;
    for ( i = 1; i < v1; ++i )
  {
    Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 1, *(int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0);
    LOBYTE(v0) = Event::Dispatch();
  }
    return v0;
}
}
} // namespace gamemd

// 0x5E9AA0
namespace gamemd {
BOOL sub_5E9AA0(HWND hDlg, int nIDDlgItem, int a3)
{
{
    WPARAM v5;
    LRESULT v7;
    HWND hWnd;
    hWnd = GetDlgItem(hDlg, nIDDlgItem);
    ShowWindow(hWnd, 0);
    v5 = 0;
    v7 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x146u, 0, 0);
    if ( v7 > 0 )
  {
    while ( SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v5, 0) != a3 )
    {
    if ( (int)++v5 >= v7 )
    return ShowWindow(hWnd, 5);
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v5, 0);
  }
    return ShowWindow(hWnd, 5);
}
}
} // namespace gamemd

// 0x5E9B60
namespace gamemd {
int Lobby_SelectCountry(HWND a1, void * a2)
{
{
    LRESULT Selected;
    int result;
    int v5;
    Selected = GetComboBoxSelected(a1, (int)a2, -1);
    result = CountryCombo::IDToIndex(a2);
    if ( result == g_NetworkPlayerCount )
  {
    SessionClass::AssignSide(&g_GameMode_Current, Selected, 0);
    result = Game_PlayerCount;
    if ( Game_PlayerCount )
    return SessionClass::SetPlayerOption(*(int *)Game_PlayerInfoArray, Selected);
  }
    else
  {
    v5 = *(&g_NetworkPlayerName + result);
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) )
    {
    g_CampaignPlayerArray[result] = Selected;
    }
    else
    {
    g_CampaignPlayerArray[result] = -1;
    DataGlobal_A8B27C[result] = -1;
    g_CampaignConfig[result] = -1;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5EDD00
namespace gamemd {
wchar_t ** ReadChatMessage(wchar_t ** a1, HWND a2)
{
{
    size_t v4;
    size_t v5;
    wchar_t *v6;
    void *v8;
    void *v9;
    unknown_libname_74(&v8);
    GetEditControlText(a2, &v8);
    v4 = 120;
    if ( !WideString::IsASCII((const wchar_t **)&v8) )
  {
    v5 = 0;
    if ( WideString::Length((const wchar_t **)&v8) )
    {
    do
      {
    if ( WideString::GetChar((const wchar_t **)&v8, v5) > 0x100u )
    break;
    ++v5;
      }
    while ( v5 < (unsigned int)WideString::Length((const wchar_t **)&v8) );
    }
    v4 = v5 - 1;
    if ( v4 <= 0x28 )
    v4 = 40;
  }
    if ( (unsigned int)WideString::Length((const wchar_t **)&v8) > v4 )
  {
    String::TruncateTo(&v8, v4);
    v6 = WideString::GetOrEmpty_Alt((wchar_t **)&v8);
    SendMessageA(a2, 0x4B2u, 0, (LPARAM)v6);
  }
    WideString::Assign((wchar_t **)&v9, DataGlobal_831D9C);
    WString::TrimRight((const wchar_t **)&v8, (const wchar_t **)&v9);
    DeleteAndZero::Alt(&v9);
    WideString::AssignFromPtr(a1, (const wchar_t **)&v8);
    DeleteAndZero::Alt(&v8);
    return a1;
}
}
} // namespace gamemd

// 0x5EDEF0
namespace gamemd {
char ** Player_GetTypeString(char ** a1, wchar_t * a2)
{
{
    if ( a2 == (wchar_t *)g_HouseClass_ObserverFlags )
  {
    String::Assign(a1, DataGlobal_831704[0]);
    return a1;
  }
    else if ( a2 == (wchar_t *)g_Lobby_PlayerCount )
  {
    String::Assign(a1, DataGlobal_831708[0]);
    return a1;
  }
    else if ( a2 == g_Lobby_PlayerReady )
  {
    String::Assign(a1, DataGlobal_83170C[0]);
    return a1;
  }
    else if ( a2 == (wchar_t *)g_Lobby_PlayerTeam )
  {
    String::Assign(a1, DataGlobal_831710[0]);
    return a1;
  }
    else if ( a2 == (wchar_t *)g_Lobby_PlayerSide )
  {
    String::Assign(a1, DataGlobal_831714[0]);
    return a1;
  }
    else if ( a2 == (wchar_t *)g_Lobby_PlayerColor )
  {
    String::Assign(a1, DataGlobal_831718[0]);
    return a1;
  }
    else
  {
    if ( a2 == (wchar_t *)g_Lobby_MaxPlayers )
    String::Assign(a1, DataGlobal_83171C);
    else
    String::Assign(a1, DataGlobal_83170C[0]);
    return a1;
  }
}
}
} // namespace gamemd

// 0x5EE200
namespace gamemd {
void E4Recv_5EE200::UpdateObserveButtonWOL()
{
{
    HWND DlgItem;
    IUnknown *v3;
    IUnknown *v4;
    HWND v5;
    IUnknown *v6;
    wchar_t *StringCSF;
    IUnknown *v8;
    wchar_t *v9;
    if ( this )
  {
    DlgItem = GetDlgItem(this, 1888);
    if ( DlgItem )
    SendMessageA(DlgItem, 0xF1u, g_MenuStateFlags != 0, 0);
    if ( g_MenuStateFlags )
    v3 = (IUnknown *)HashTable::Find(g_DialogHashTable, g_Str_File_wolob_pcx, 0);
    else
    v3 = (IUnknown *)HashTable::Find(g_DialogHashTable, DataGlobal_831DD0, 0);
    v4 = v3;
    v5 = GetDlgItem(this, 1887);
    CacheDialogInvalidate(v5, (HWND)v4);
    v6 = (IUnknown *)GetDlgItem(this, 1741);
    if ( v6 )
    {
    if ( g_MenuStateFlags )
    StringCSF = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_netshare_cpp, 6751);
    else
    StringCSF = GetStringCSF(DataGlobal_831DC4, 0, g_Str_File_netshare_cpp, 6753);
    SendMessageA((HWND)v6, 0x4B2u, 0, (LPARAM)StringCSF);
    InvalidateRect((HWND)v6, 0, 0);
    }
    v8 = (IUnknown *)GetDlgItem(this, 1581);
    if ( v8 )
    {
    if ( g_MenuStateFlags )
      {
    v9 = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_netshare_cpp, 6762);
      }
    else if ( (HWND)Dialog::FindByHandle((void *)0x113) == this )
      {
    v9 = GetStringCSF((wchar_t *)DataGlobal_831DB4, 0, g_Str_File_netshare_cpp, 6766);
      }
    else
      {
    v9 = GetStringCSF(DataGlobal_831DC4, 0, g_Str_File_netshare_cpp, 6768);
      }
    SendMessageA((HWND)v8, 0x4B2u, 0, (LPARAM)v9);
    InvalidateRect((HWND)v8, 0, 0);
    }
  }
}
}
} // namespace gamemd

// 0x5EF270
namespace gamemd {
int sub_5EF270()
{
return 24;
}
} // namespace gamemd

// 0x5EF2D0
namespace gamemd {
int sub_5EF2D0()
{
{
    DataGlobal_AC11D8 = 0;
    DataGlobal_AC11DC = 0;
    DataGlobal_AC11E0 = 0;
    DataGlobal_AC11E4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5EF2F0
namespace gamemd {
void sub_5EF2F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC1210 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5EF320
namespace gamemd {
void sub_5EF320()
{
{
    DataGlobal_AC1260 = DataGlobal_AC1210 / 60.0;
}
}
} // namespace gamemd

// 0x5EF340
namespace gamemd {
void sub_5EF340()
{
{
    DataGlobal_AC1248 = 1.0 / DataGlobal_AC1260;
}
}
} // namespace gamemd

// 0x5EF360
namespace gamemd {
void sub_5EF360()
{
{
    DataGlobal_AC1240 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5EF380
namespace gamemd {
void sub_5EF380()
{
{
    DataGlobal_AC1218 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5EF3A0
namespace gamemd {
void sub_5EF3A0()
{
{
    DataGlobal_AC11D0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5EF3C0
namespace gamemd {
long long sub_5EF3C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC11D0 - DataGlobal_AC1218);
    result = Math::RoundToInt(v0 * DataGlobal_AC1210 * 0.5);
    DataGlobal_AC1268 = result;
    return result;
}
}
} // namespace gamemd

// 0x5EF400
namespace gamemd {
void sub_5EF400()
{
{
    DataGlobal_AC1220 = Math::ArcTan((double)DataGlobal_AC1268 * 0.00390625);
}
}
} // namespace gamemd

// 0x5EF430
namespace gamemd {
void sub_5EF430()
{
{
    DataGlobal_AC1238 = Math::ArcTan((double)(2 * DataGlobal_AC1268) / DataGlobal_AC1210);
}
}
} // namespace gamemd

// 0x5EF460
namespace gamemd {
long long sub_5EF460()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC1268) + 0.5);
    DataGlobal_AC125C = result;
    return result;
}
}
} // namespace gamemd

// 0x5EF490
namespace gamemd {
int sub_5EF490()
{
{
    DataGlobal_AC120C = 0;
    DataGlobal_AC120E = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5EF4A0
namespace gamemd {
int sub_5EF4A0()
{
{
    DataGlobal_AC1228 = 0;
    DataGlobal_AC122C = 0;
    DataGlobal_AC1230 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5EF4C0
namespace gamemd {
int sub_5EF4C0()
{
{
    DataGlobal_AC1258 = 0;
    DataGlobal_AC1250 = 128;
    DataGlobal_AC1254 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5EFF00
namespace gamemd {
int sub_5EFF00(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
{
    int result;
    unsigned int *WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    if ( a2 == 273 )
    {
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8);
    if ( a3 == 2 || a3 > 0x651 && a3 <= 0x655 )
    *WindowLongA = a3;
    }
    else if ( a2 == 1175 )
    {
    Network::handleTimeout(hWnd);
    return 0;
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd
