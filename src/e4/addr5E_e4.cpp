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

// 0x5E2820
namespace gamemd {
void DrawDialogText(ObjectClass * aP0, const wchar_t * a1, HWND hWnd)
{
  wchar_t *v3; // esi
  wint_t * v4;
  wint_t * v5;
  wchar_t *v6; // eax
  wint_t * v7;
  uint16_t *v8; // ebx
  int v9; // ecx
  wint_t * v10;
  wint_t *v11; // ebp
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  HDC hDC; // [esp+1Ch] [ebp-1Ch]
  int v17; // [esp+20h] [ebp-18h] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  v3 = (wchar_t *)((wint_t *)((wchar_t *)((wint_t *)((wchar_t *)(a1)))));
  v4 = (unsigned int)((wint_t *)((unsigned int)((wint_t *)((unsigned int)((wint_t *)((unsigned int)((wint_t *)((unsigned int)((wint_t *)((unsigned int)((wint_t *)((unsigned int)((wint_t *)((unsigned int)((wint_t *)((HWND)((wint_t *)(hWnd))))))))))))))))));
  v5 = (wint_t *)(wcslen(a1));
  v13 = 18; /*0x5e2842*/
  ScreenDialogToClient(hWnd, &Rect); /*0x5e284a*/
  if ( SendMessageA(hWnd, 0x4A0u, 0, 0) ) /*0x5e285f*/
    v13 = 1; /*0x5e2865*/
  hDC = GetDC(hWnd); /*0x5e287d*/
  SendMessageA(hWnd, 0x49Eu, 0, (LPARAM)hDC); /*0x5e2881*/
  if ( v5 ) /*0x5e2885*/
  {
    do /*0x5e2980*/
    {
      if ( v3 ) /*0x5e288d*/
      {
        v6 = wcschr(v3, 0xAu); /*0x5e2892*/
        if ( v6 ) /*0x5e289c*/
        {
          v7 = (wint_t *)((int)((wint_t *)(v6 - v3 + 1)));
          if ( v5 >= (unsigned int)((wint_t *))(v7) ) /*0x5e28a5*/
            v5 = v7; /*0x5e28a7*/
        }
      }
      v8 = (uint16_t *)(_wcsdup(v3));
      v8[v5] = 0; /*0x5e28c2*/
      Text::Layout(g_FogOfWarState, v8, &v17, &v18, 0); /*0x5e28d0*/
      free(v8); /*0x5e28d6*/
      v9 = Rect.right - Rect.left - v13; /*0x5e28e9*/
      if ( v17 < v9 - 4 ) /*0x5e28f7*/
      {
        UI_Draw(hWnd, v3, v5, aP0); /*0x5e295d*/
        for ( v3 += v5; *v3 == 32; ++v3 ) /*0x5e2968*/
          ; /*0x5e296a*/
        v5 = wcslen(v3); /*0x5e297c*/
      }
      else
      {
        if ( v17 / 2 <= v9 ) /*0x5e2900*/
        {
          v14 = 1; /*0x5e290f*/
        }
        else
        {
          v14 = 10; /*0x5e2902*/
          v5 -= 10; /*0x5e290a*/
        }
        v10 = (wint_t *)((int)((wint_t *)(v5 - 1)));
        if ( v5 - 1 <= 0 ) /*0x5e291c*/
          goto LABEL_18; /*0x5e291c*/
        v11 = &v3[v10]; /*0x5e291e*/
        while ( iswgraph(*v11) ) /*0x5e2930*/
        {
          --v10; /*0x5e2932*/
          --v11; /*0x5e2933*/
          if ( v10 <= 0 ) /*0x5e2938*/
          {
            v5 -= v14; /*0x5e293a*/
            goto LABEL_23; /*0x5e2940*/
          }
        }
        if ( v10 == (wint_t *)(-1) ) /*0x5e2945*/
  LABEL_18:
          v10 = v5 - v14; /*0x5e294b*/
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
}
// 0x5E2AC0
namespace gamemd {
void sub_5E2AC0()
{
  HWND Current; // edi
  HWND DlgItem; // esi
  HWND v2; // eax
  LRESULT v3; // edi
  wchar_t *v4; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

    if ( ((Dialog *)0)->GetCurrent() )
  {
        Current = ((Dialog *)0)->GetCurrent();
    DlgItem = GetDlgItem(Current, 1343); /*0x5e2ae6*/
    if ( DlgItem ) /*0x5e2aea*/
    {
  LABEL_5:
      v3 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5e2b0b*/
      unknown_libname_74(&v5); /*0x5e2b23*/
      if ( v3 > 0 ) /*0x5e2b2a*/
        UI_Assign_623F60(DlgItem, v3 - 1, (void **)&v5); /*0x5e2b36*/
      if ( (unsigned int)WideString::Length((const wchar_t **)&v5) >= 0x24 ) /*0x5e2b47*/
      {
        WideString::Assign_Alt((void **)&v5, asc_831774); /*0x5e2b6e*/
      }
      else
      {
        SendMessageA(DlgItem, 0x182u, v3 - 1, 0); /*0x5e2b53*/
        WideString::Append2((wchar_t **)&v5, asc_831774); /*0x5e2b5e*/
      }
      v4 = (wchar_t *)(WideString::GetOrEmpty((wchar_t **)&v5));
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
}
// 0x5E2CD0
namespace gamemd {
void ShowDialogConfirm(CampaignScore * aP0, int nIDDlgItem, unsigned char (*a3)() a3, char a4)
{
  wchar_t *v4; // ebp
  int v6; // edi
  DLGTEMPLATE *DialogIndirect; // esi
  HWND DlgItem; // ebx
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

  v4 = String; /*0x5e2cd3*/
  if ( String && wcslen(String) )
  {
    if ( a4 )
    {
      v6 = 251; /*0x5e2cfe*/
    }
    else if ( nIDDlgItem )
    {
      if ( nIDDlgItem == 1 )
        v6 = 252; /*0x5e2d15*/
      else
        v6 = nIDDlgItem != 4 ? 251 : 294;
    }
    else
    {
      v6 = 208; /*0x5e2d09*/
    }
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)v6, g_hWnd, (DLGPROC)sub_5E2E40, 0); /*0x5e2d48*/
    SetupDialog((HWND)DialogIndirect, v6); /*0x5e2d4e*/
    switch ( nIDDlgItem ) /*0x5e2d5b*/
    {
      case 0: /*0x5e2d5b*/
        DlgItem = GetDlgItem((HWND)DialogIndirect, 1); /*0x5e2d62*/
        WindowLongA = GetWindowLongA(DlgItem, -16); /*0x5e2d67*/
        SetWindowLongA(DlgItem, -16, WindowLongA | 0x10000000); /*0x5e2d76*/
        if ( a4 ) /*0x5e2d82*/
          UI_Get_60B350(DlgItem); /*0x5e2d86*/
        goto LABEL_18; /*0x5e2d8b*/
      case 1: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2d96*/
        v11 = GetDlgItem((HWND)DialogIndirect, 1); /*0x5e2d9c*/
        v12 = GetWindowLongA(v11, -16); /*0x5e2da1*/
        SetWindowLongA(v11, -16, v12 | 0x10000000); /*0x5e2dac*/
        v13 = GetDlgItem((HWND)DialogIndirect, 2); /*0x5e2db4*/
        break;
      case 4: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2dc0*/
        v14 = GetDlgItem((HWND)DialogIndirect, 6); /*0x5e2dc6*/
        v15 = GetWindowLongA(v14, -16); /*0x5e2dcb*/
        SetWindowLongA(v14, -16, v15 | 0x10000000); /*0x5e2dd6*/
        v13 = GetDlgItem((HWND)DialogIndirect, 7); /*0x5e2ddf*/
        break;
      default:
  LABEL_18:
        v18 = GetDlgItem((HWND)DialogIndirect, 1456); /*0x5e2dfb*/
        SendMessageA(v18, 0x4B2u, 0, (LPARAM)v4); /*0x5e2e0c*/
        ShowWindow((HWND)DialogIndirect, 1); /*0x5e2e15*/
        return MessageDialogLoopAlt((HWND)DialogIndirect, a3, 0, 1, 1); /*0x5e2e31*/
    }
    v16 = v13; /*0x5e2de1*/
    v17 = v10(v13, -16); /*0x5e2de6*/
    SetWindowLongA(v16, -16, v17 | 0x10000000); /*0x5e2df1*/
    v4 = String; /*0x5e2df7*/
    goto LABEL_18; /*0x5e2df7*/
  }
  return 0; /*0x5e2e2e*/
}
}
// 0x5E2EF0
namespace gamemd {
void SetDialogPlayerName(HWND hDlg, int a2)
{
  wchar_t * DlgItem;
  wchar_t *v4; // eax

  if ( a2 ) /*0x5e2ef5*/
  {
    DlgItem = (wchar_t *)((HWND)((wchar_t *)(GetDlgItem(hDlg, 1772))));
    v4 = (wchar_t *)(WideString::GetOrEmpty_Alt((wchar_t **)(a2 + 32)));
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v4); /*0x5e2f17*/
  }
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
      v17[0] = (void*)&rc_ptr_WDTTerritory_vftable; /*0x5e3088*/
      ComPtr::Release(v17); /*0x5e308c*/
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
    ComPtr::Release(&wParam); /*0x5e31d2*/
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
  return SendDlgItemMessageA(hDlg, 1357, 0xF1u, *(&wParam + (uint8_t)g_abs_A8B261), 0); /*0x5e32bd*/
}
}
// 0x5E32D0
namespace gamemd {
char Game_CheckSettingsChanged(char a1, char a2)
{
  char v2; // bl
  char result; // al
  char Buffer[520]; // [esp+8h] [ebp-208h] BYREF

  v2 = 0; /*0x5e32e1*/
  if ( time(0) != dword_AC11B8 ) /*0x5e32f1*/
    goto LABEL_5; /*0x5e32f1*/
  if ( a1 ) /*0x5e32fb*/
    byte_AC11BC = 1; /*0x5e32fd*/
  result = a2; /*0x5e3304*/
  if ( a2 ) /*0x5e330a*/
  {
  LABEL_5:
    if ( byte_AC11BC ) /*0x5e3317*/
      a1 = 1; /*0x5e3319*/
    byte_AC11BC = 0; /*0x5e3323*/
    if ( ppv ) /*0x5e332e*/
    {
      if ( time(0) - dword_AC11B8 >= 5 ) /*0x5e3343*/
        goto LABEL_11; /*0x5e3343*/
    }
    else if ( time(0) - dword_AC11B8 >= 2 ) /*0x5e335a*/
    {
  LABEL_11:
      v2 = 1; /*0x5e335c*/
    }
    if ( a1 ) /*0x5e3364*/
      v2 = 1; /*0x5e3366*/
    if ( dword_8316D8 != (unsigned int)((unsigned int))((unsigned int))(g_abs_A8B268) ) /*0x5e3375*/
      v2 = 1; /*0x5e3377*/
    if ( dword_8316DC != (unsigned int)((unsigned int))((unsigned int))(g_abs_A8B25C) ) /*0x5e3386*/
      v2 = 1; /*0x5e3388*/
    if ( dword_8316E0 != (unsigned int)((unsigned int))((unsigned int))(g_abs_A8B270) ) /*0x5e3397*/
      v2 = 1; /*0x5e3399*/
    if ( byte_AC11BD != (int)((int))((int))(g_abs_A8B262) ) /*0x5e33a8*/
      v2 = 1; /*0x5e33aa*/
    if ( byte_AC11BE != (int)((int))((int))(g_abs_A8B263) ) /*0x5e33b9*/
      v2 = 1; /*0x5e33bb*/
    if ( byte_AC11BF != (unsigned char)g_abs_A8B264 ) /*0x5e33ca*/
      v2 = 1; /*0x5e33cc*/
    if ( byte_AC11C0 != (unsigned char)dword_A8B320 ) /*0x5e33db*/
      v2 = 1; /*0x5e33dd*/
    if ( byte_AC11C1 != (int)((int))((int))(g_abs_A8B261) ) /*0x5e33ec*/
      v2 = 1; /*0x5e33ee*/
    word_AC1146 = 0; /*0x5e33fa*/
    if ( _wcsicmp(&word_AC10F0, (const wchar_t *)&dword_A8B320 + 1) ) /*0x5e3403*/
      v2 = 1; /*0x5e340f*/
    byte_AC0CFD = 0; /*0x5e341b*/
    if ( _strcmpi(byte_AC0CF0, &byte_A8B8E0) ) /*0x5e3422*/
      v2 = 1; /*0x5e342e*/
    byte_AC0D20 = 0; /*0x5e343a*/
    if ( _strcmpi(byte_AC0D00, &byte_A8BAE2) ) /*0x5e3441*/
      v2 = 1; /*0x5e344d*/
    if ( dword_8316E8 != dword_A8BB04 ) /*0x5e345c*/
      v2 = 1; /*0x5e345e*/
    result = byte_8316E4; /*0x5e3460*/
    if ( byte_8316E4 != (unsigned char)dword_A8BB08 || v2 ) /*0x5e3471*/
    {
      dword_AC11B8 = (unsigned char)(time(0));
      dword_8316D8 = (unsigned char)(g_abs_A8B268);
      dword_8316DC = (unsigned char)(g_abs_A8B25C);
      dword_8316E0 = (unsigned char)(g_abs_A8B270);
      byte_AC11BD = (unsigned char)(g_abs_A8B262);
      byte_AC11BE = (unsigned char)(g_abs_A8B263);
      byte_AC11BF = (unsigned char)(g_abs_A8B264);
      byte_AC11C0 = (unsigned char)(dword_A8B320);
      byte_AC11C1 = (unsigned char)(g_abs_A8B261);
      wcscpy(&word_AC10F0, (const wchar_t *)&dword_A8B320 + 1); /*0x5e34eb*/
      strcpy(byte_AC0D00, &byte_A8BAE2); /*0x5e350f*/
      dword_8316E8 = dword_A8BB04; /*0x5e3536*/
      strcpy(byte_AC0CF0, &byte_A8B8E0); /*0x5e353e*/
      byte_8316E4 = dword_A8BB08; /*0x5e3553*/
      memset(Buffer, 0, sizeof(Buffer)); /*0x5e355e*/
      if ( ppv ) /*0x5e356d*/
        ((Game *)(Buffer))->EncodeGameSetupState(); /*0x5e356f*/
      else
        ((Game *)(Buffer))->BuildGameSettingsPacket(); /*0x5e3585*/
// 0x5e3720
      return ((Network *)(Buffer))->SendOptionsGame(); /*0x5e3578*/
    }
  }
  return result; /*0x5e357d*/
}
}
// 0x5E39C0
namespace gamemd {
ObjectClass * * ValidateNetworkLobbyHostMap(void * a1, void * a2)
{
  unsigned int v2;
  char *v4; // eax
  ObjectClass ** result;
  int v6; // esi
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *String; // eax
  wchar_t * v10;
  int v11; // [esp-8h] [ebp-14h]

  v2 = (unsigned int)((void *)((unsigned int)((void *)((unsigned int)((void *)(a1))))));
  if ( !a1 ) /*0x5e39c9*/
    v2 = unk_A8B380; /*0x5e39cb*/
  v4 = CharToWideString(v2); /*0x5e39d7*/
  if ( !wcscmp((const wchar_t *)v4, word_A8D610) ) /*0x5e39dd*/
    a2 = 1; /*0x5e39e9*/
  result = (HWND)dword_A8DA84; /*0x5e39ee*/
  v6 = 0; /*0x5e39f3*/
  if ( dword_A8DA84 > 0 ) /*0x5e39f7*/
  {
    while ( 1 ) /*0x5e3a06*/
    {
      v7 = (char *)((gamemd::ObjectClass **)(ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v6))));
      result = (gamemd::ObjectClass **)((HWND)((gamemd::ObjectClass **)((HWND)_strcmpi(v7, v2))));
      if ( !result ) /*0x5e3a16*/
        break; /*0x5e3a16*/
      result = (HWND)dword_A8DA84; /*0x5e3a18*/
      if ( ++v6 >= dword_A8DA84 ) /*0x5e3a20*/
        return result; /*0x5e3a20*/
    }
    if ( v6 != -1 ) /*0x5e3a29*/
    {
      *(unsigned int *)(*(unsigned int *)(dword_A8DA78 + 4 * v6) + 127) = a2; /*0x5e3a36*/
      if ( a2 ) /*0x5e3a39*/
      {
        if ( a2 == (void *)(2) ) /*0x5e3a71*/
        {
          v11 = *(unsigned int *)(dword_A8DA78 + 4 * v6); /*0x5e3a88*/
          String = GetStringCSF(aGuiHostmaptran, 0, g_Str_File_netshare_cpp, 1173); /*0x5e3a93*/
// 0x5e2700
          return Dialog::ShowMessage(-1, (size_t)String, v11, 11055906); /*0x5e3a9b*/
        }
      }
      else
      {
        v10 = (wchar_t *)((int)((wchar_t *)(*(unsigned int *)(dword_A8DA78 + 4 * v6))));
        v8 = (wchar_t *)(GetStringCSF(g_Str_GUI_HostNoMap, 0, g_Str_File_netshare_cpp, 1169));
// 0x5e2700
        return Dialog::ShowMessage(-1, (size_t)v8, v10, 11055906); /*0x5e3a62*/
      }
    }
  }
  return (gamemd::ObjectClass **)(result);
}
}
// 0x5E3AB0
namespace gamemd {
int SendMultiplayerStartSignal()
{
  int v0; // esi
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
  BOOL v11; // [esp-4h] [ebp-4Ch]
  void *v12; // [esp+4h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+8h] [ebp-40h] BYREF

  if ( ppv ) /*0x5e3abb*/
  {
    String::Assign((char **)&v12, 0); /*0x5e3ac3*/
    v0 = SendMultiplayerStartSignal_Start_77EBA0(&v12); /*0x5e3ad5*/
    DeleteAndZero(&v12); /*0x5e3ad7*/
  }
  else
  {
    v0 = SendMultiplayerStartSignal_Start(0); /*0x5e3ae5*/
  }
  dword_A8DAB0 = 0; /*0x5e3aec*/
  if ( ppv ) /*0x5e3af5*/
    SendMultiplayerStartSignal_Start_7A27D0(); /*0x5e3af7*/
  else
    SendMultiplayerStartSignal_Start_5E23A0(); /*0x5e3afe*/
  if ( v0 == 1 ) /*0x5e3b06*/
  {
    if ( ppv ) /*0x5e3b13*/
    {
      String::Assign((char **)&v12, 0); /*0x5e3b1b*/
      AssignWOLPlayerSide((const char **)&v12, 0); /*0x5e3b26*/
      DeleteAndZero(&v12); /*0x5e3b2f*/
    }
    else
    {
      SetGameSetupPlayerState(0, 0); /*0x5e3b3a*/
    }
    sprintf(Buffer, aA0); /*0x5e3b49*/
    ((Network *)(Buffer))->SendOptionsGame(); /*0x5e3b55*/
    if ( byte_AC11C2 ) /*0x5e3b66*/
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
    result = (uint8_t)byte_AC11C2; /*0x5e3c6d*/
    if ( byte_AC11C2 ) /*0x5e3c74*/
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
}
// 0x5E3D10
namespace gamemd {
void SetupNetworkLobbyDialog(INIClass * Source, void * a2)
{
  HWND v7; // edi
  HWND DlgItem; // eax
  HWND v9; // esi
  HWND v10; // eax
  wchar_t *StringCSF; // eax
  int16_t ax8; // ax
  SessionClass *v12; // ebx
  int i; // esi
  CCINIClass *v25; // eax
  CCINIClass *v26; // edi
  int j; // ecx
  HWND eax42; // eax
  VectorClass_flat *v31; // esi
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
  unsigned int _FFFFFFF4[3]; // [esp-Ch] [ebp-400h] BYREF
  char *v194; // [esp+0h] [ebp-3F4h]
  ObjectClass *v195; // [esp+4h] [ebp-3F0h]
  CCINIClass *v193; // [esp+8h] [ebp-3ECh]
  ObjectClass *v197; // [esp+Ch] [ebp-3E8h]
  unsigned char v198[176]; // [esp+10h] [ebp-3E4h] BYREF
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
  *(unsigned int *)&v198[40] = v5;
  char v6 = *v5;
  if ( *v5 == 90 )
  {
    *(unsigned int *)v198 = &stru_830620[5004];
    Debug::Log();
    if ( v5[1] == 49 )
    {
      v12 = (SessionClass *)&HouseClass_Player[40260];
      do
      {
        char * v14 = ToWideStringChar((IUnknown *)v12->GameMode[0]);
        if ( !_strcmpi(a2, v14) )
        {
          *(unsigned int *)&v198[44] = v200;
          strcpy((char *)v200, (const char *)(*(unsigned int *)&v198[40] + 3));
          UI_Setup_793930(a2, v200, *(char *)(*(unsigned int *)&v198[40] + 2) - 48);
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
        *(unsigned int *)v198 = *(unsigned int *)&v198[40];
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
          *(unsigned int *)v198 = *(unsigned int *)&v198[40];
          goto LABEL_102;
        }
      }
    }
    goto LABEL_13;
  }
  if ( *(unsigned int *)&HouseClass_Player[29932] == 4 && (g_NetworkLobby_Init || g_NetworkLobbyState) )
    goto LABEL_101;
  switch ( v6 )
  {
    case 'W':
      *(unsigned int *)v198 = v5;
      v197 = (ObjectClass *)&stru_830620[4960];
      Debug::Log();
      int v15 = 0;
      *(unsigned int *)&v198[32] = 0;
      *(unsigned int *)&v198[36] = 0;
      *(unsigned int *)&v198[24] = 0;
      char * v16 = strtok(v5 + 1, (ObjectClass *)&stru_817F40.nextObject);
      if ( v16 )
        *(unsigned int *)&v198[32] = atol(v16);
      char * v17 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v17 )
        *(unsigned int *)&v198[36] = atol(v17);
      char * v18 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
      if ( v18 )
        *(unsigned int *)&v198[24] = atol(v18);
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
          *(unsigned int *)&aP0_160[0][i] = atol(v22);
        char * v23 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        if ( v23 )
          *(unsigned int *)&v198[i + 56] = atol(v23);
        char * v24 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        if ( v24 )
          *(unsigned int *)&v198[i + 108] = atol(v24);
        v25 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
        v26 = v25;
        if ( v25 )
          *(unsigned int *)&aP0_160[32][i] = atol(v25->__pad_0);
      }
      if ( v26 )
      {
        if ( *(unsigned int *)&HouseClass_Player[29924] )
        {
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4404) = *(unsigned int *)&v198[32];
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4408) = *(unsigned int *)&v198[36];
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4396) = *(unsigned int *)&v198[24];
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4400) = v3;
          unsigned int v27 = 0;
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4412) = v15;
          for ( j = 4416; j < 4480; j += 8 )
          {
            int v29 = *(unsigned int *)&aP0_160[0][v27];
            int v30 = *(unsigned int *)&v198[v27 + 56];
            v27 += 4;
            *(unsigned int *)(j + *(unsigned int *)&HouseClass_Player[29924]) = v29;
            *(unsigned int *)(j + *(unsigned int *)&HouseClass_Player[29924] + 4) = v30;
            *(unsigned short *)&v198[24] = *(unsigned short *)&v198[v27 + 104];
            *(unsigned short *)&v198[26] = aP0_160.sectionHead[v27 / 4 + 3];
            *(unsigned int *)(v27 + *(unsigned int *)&HouseClass_Player[29924] + 4540) = *(unsigned int *)&v198[24];
          }
          eax42 = (HWND)Dialog::FindByHandle((void *)0xC9);
          if ( eax42 || (eax42 = (HWND)Dialog::FindByHandle((void *)0xBD)) != 0 )
            InvalidateRect(eax42, 0, 0);
        }
      }
      *(unsigned int *)v198 = *(unsigned int *)&v198[40];
LABEL_102:
      free(*(void **)v198);
      return 0;
    case 'O':
      v31 = (VectorClass_flat *)Dialog::FindByHandle((void *)0xC9);
      if ( v31 || (v31 = (VectorClass_flat *)Dialog::FindByHandle((void *)0xBD)) != 0 )
      {
        al49 = v5[1];
        v33 = *(INIClass **)&stru_830620[4228];
        if ( al49 == 56 )
          int v35 = -1;
        else
          v35 = al49 - 48;
        *(unsigned int *)&stru_830620[4228] = v35;
        if ( (INIClass *)v35 == v33 )
          goto LABEL_98;
        Lobby::SetupPlayerWidgets((HWND)v31);
        char * v36 = CharToWideString(v5 + 2);
        wcscpy((wchar_t *)Destination, (const wchar_t *)v36);
        if ( !*(unsigned short *)Destination[0].__pad_0 )
        {
          v35 = *(unsigned int *)&stru_830620[4228];
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
             || *(unsigned int *)((char *)v37 + 107) != -1) )
          {
  int v39; // eax
            ResourceID2CSF = GetResourceID2CSF(*(void **)&stru_830620[4228]);
            FillComboBoxRandomOnly((HWND)v31, ResourceID2CSF);
            if ( *(unsigned int *)&stru_830620[4228] )
            {
              switch ( *(unsigned int *)&stru_830620[4228] )
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
                  v39 = *(unsigned int *)&stru_830620[4228] != 7 ? -1 : 1048;
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
            *(unsigned int *)v198 = -2;
          }
          else
          {
  int v44; // eax
            v41 = *(INIClass **)&stru_830620[4228];
            *(unsigned int *)&HouseClass_Player[21864][4 * *(unsigned int *)&stru_830620[4228] + 18396] = v37;
            int v43 = GetResourceID2CSF(v41);
            SetupComboBoxObserver((HWND)v31, v43);
            if ( *(unsigned int *)&stru_830620[4228] )
            {
              switch ( *(unsigned int *)&stru_830620[4228] )
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
                  v44 = *(unsigned int *)&stru_830620[4228] != 7 ? -1 : 1048;
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
            *(unsigned int *)v198 = 8;
          }
          SetupSkirmishSpawnLocations((HWND)v31, ResourceIDCSF, *(int *)v198);
          v35 = *(unsigned int *)&stru_830620[4228];
          v5 = *(char **)&v198[40];
          *(unsigned int *)&HouseClass_Player[21864][4 * *(unsigned int *)&stru_830620[4228] + 18396] = v37;
LABEL_98:
          if ( v35 >= 0 && v35 != *(unsigned int *)&HouseClass_Player[40256] )
            SetupSkirmishPlayerSlots((HWND)v31, (void *)v35, 0);
        }
      }
LABEL_101:
      *(unsigned int *)v198 = v5;
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
          if ( !*(unsigned int *)&HouseClass_Player[40248] )
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
              if ( *(unsigned int *)(*(unsigned int *)&HouseClass_Player[21864][4 * (unsigned int)v78 + 18396] + 107) == -1 )
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
                if ( *(unsigned int *)&HouseClass_Player[29936]
                  && !(*(uint8_t (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 4))(*(unsigned int *)&HouseClass_Player[29936]) )
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
              if ( *(unsigned int *)&HouseClass_Player[40248] )
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
              *(unsigned int *)&HouseClass_Player[40256] = ebp212;
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
        *(unsigned int *)v198 = v5;
        v197 = (ObjectClass *)&stru_830620[4792];
        Debug::Log();
        char * v102 = v5 + 3;
        if ( *(unsigned int *)&HouseClass_Player[29932] == 4 )
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
    *(unsigned int *)&v198[32] = CurrentType;
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
    *(unsigned int *)v198 = Source;
    v197 = (ObjectClass *)&stru_830620[4764];
    Debug::Log();
    char * v110 = strtok(v5, (ObjectClass *)&stru_817F40.nextObject);
    if ( v110 )
      *(unsigned int *)&HouseClass_Player[45128] = atol(v110);
    char * v111 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v111 )
      *(unsigned int *)&HouseClass_Player[44564] = atol(v111);
    char * v112 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v112 )
      *(unsigned int *)&HouseClass_Player[29980] = atol(v112);
    char * v113 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v113 )
      *(unsigned int *)&HouseClass_Player[29968] = atol(v113);
    char * v114 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( v114 )
      *(unsigned int *)&HouseClass_Player[29988] = atol(v114);
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
      *(unsigned int *)&HouseClass_Player[29956] = atol(v120);
    char * v121 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( !v121 )
      goto LABEL_101;
    *(unsigned int *)&HouseClass_Player[44572] = atol(v121);
    v198[23] = 1;
    v123 = (CellStruct *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
    if ( *(unsigned int *)&HouseClass_Player[29932] == 4 && UI_Setup_77CF40() )
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
    *(unsigned int *)&v198[44] = *(unsigned int *)&HouseClass_Player[32192];
    if ( v125 )
    {
      *(unsigned int *)&HouseClass_Player[32192] = atoi(v125);
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
    *(unsigned int *)&v198[52] = *(unsigned int *)&HouseClass_Player[32184];
    if ( v129 )
    {
      *(unsigned int *)&HouseClass_Player[32184] = atoi(v129);
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
      strcpy((char *)(*(unsigned int *)&HouseClass_Player[29924] + 4700), &HouseClass_Player[31636]);
    }
    eax334 = (CCINIClass *)strtok(0, (ObjectClass *)&stru_830620[4760]);
    v135 = eax334;
    *(unsigned int *)&v198[24] = eax334;
    if ( eax334 )
    {
      if ( strcmp(&HouseClass_Player[32150], eax334->__pad_0) )
        v198[23] = 0;
      strncpy(&HouseClass_Player[32150], v135->__pad_0, (IUnknown *)0x21);
    }
    esi338 = MultiplayerGameMode::Find(*(void **)&HouseClass_Player[29956]);
    if ( esi338 != *(unsigned int *)&HouseClass_Player[29936] )
      v198[23] = 0;
    if ( *(unsigned int *)&v198[32] == 189 || *(unsigned int *)&v198[32] == 201 )
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
      *(unsigned int *)&v198[36] = 0;
      if ( *(int *)&HouseClass_Player[31628] <= 0 )
        goto LABEL_519;
      do
      {
        int v138 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[31616] + 4 * *(unsigned int *)&v198[36]);
        if ( !_strcmpi(&HouseClass_Player[31636], (const void *)(v138 + 88)) )
        {
          CCFileClass::Construct(v200, (char *)(v138 + 88));
          if ( CCFileClass::Open(v200, 0)
// 0x473c00
            && CCFileClass::GetSize() == *(unsigned int *)&HouseClass_Player[32184] )
{

  int v3; // edx
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( *(this + 22) ) /*0x473c04*/
    return *(this + 23); /*0x473c0b*/
  if ( File::IsReady(this, 0) ) /*0x473c15*/
    return BufferIOFileClass::SetSize(this); /*0x473c48*/
  v3 = *this; /*0x473c1e*/
  v4 = 0; /*0x473c2b*/
  (*(void (**)(int *))(v3 + 4))(this); /*0x473c33*/
  LookupFileInfoCache(0, 0, &v4); /*0x473c3a*/
  return v4; /*0x473c0e*/

}
          v200[0] = (int)&vt_CCFileClass;
          int v203 = 0;
  char v201[8]; // [esp+168h] [ebp-28Ch] BYREF
          Vector::Clear((int)v201);
          v200[0] = (int)&off_7E1668;
          BufferIOFileClass::Dtor(v200);
        }
        ++*(unsigned int *)&v198[36];
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
      if ( *(unsigned int *)&HouseClass_Player[29936] )
        (*(void (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 36))(*(unsigned int *)&HouseClass_Player[29936]);
    }
    ebp366 = (wchar_t **)MultiplayerGameMode::Find(*(void **)&HouseClass_Player[29956]);
    if ( ebp366 != *(wchar_t ***)&HouseClass_Player[29936] )
    {
      if ( *(unsigned int *)&HouseClass_Player[29936] )
        (*(void (**)(void))(**(unsigned int **)&HouseClass_Player[29936] + 156))();
      if ( ebp366 )
        (*((void (**)(wchar_t **))*ebp366 + 8))(ebp366);
    }
    *(unsigned int *)&HouseClass_Player[29936] = ebp366;
    if ( ebp366 && !v198[23] )
    {
      (*((void (**)(wchar_t **))*ebp366 + 31))(ebp366);
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
    *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4692) = -1;
    *(unsigned int *)&HouseClass_Player[45112] = 0;
    *(unsigned int *)&HouseClass_Player[29952] = 2;
    if ( v146 == HouseClass_Player[32188]
      && *(unsigned int *)&v198[52] == *(unsigned int *)&HouseClass_Player[32184] )
    {
      if ( v198[23] )
        goto LABEL_430;
    }
    else
    {
      v198[23] = 0;
    }
    *(unsigned int *)v198 = &stru_830620[4704];
    Debug::Log();
    if ( HouseClass_Player[32188] && !v198[31] && _strcmpi(&HouseClass_Player[31636], aRandmapSed) )
    {
      if ( Dialog::FindByHandle((void *)0xC2)
        || Dialog::FindByHandle((void *)0xC9)
        || Dialog::FindByHandle((void *)0xBC)
        || Dialog::FindByHandle((void *)0xBD) )
      {
        *(unsigned int *)v198 = 11055906;
        v147 = GetStringCSF((wchar_t *)&stru_830620[4688], 0, &stru_830620[4536], 2068);
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v147, *(ObjectClass *)v198);
      }
      *((unsigned char *)&g_MatrixTransformState + 9138) = 0;
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
      *((unsigned char *)&g_MatrixTransformState + 9138) = 1;
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
          *(unsigned int *)v198 = 11055906;
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
    if ( !*(unsigned int *)&HouseClass_Player[29936]
      || !(*(uint8_t (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 4))(*(unsigned int *)&HouseClass_Player[29936])
  int v159; // ecx
      || (v159 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4580),
          v159 > *(int *)&HouseClass_Player[32192]) )
    {
      v159 = *(unsigned int *)&HouseClass_Player[32192];
    }
    ResetLobbyFactionTable(v159);
    if ( *(unsigned int *)&v198[32] == 189 || *(unsigned int *)&v198[32] == 201 )
    {
      Current = Dialog::GetCurrent();
      Lobby::InvalidateFactionCombos(Current);
      v161 = Dialog::GetCurrent();
      Lobby::InvalidatePlayerSlots(v161);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
    }
LABEL_430:
    if ( !*(unsigned int *)&v198[24] )
      Dialog::ShowMessage(
        (ObjectClass *)0xFFFFFFFF,
        (CampaignScore *)&stru_830620[4608],
        *(ObjectClass *)&v198[4]);
    *(unsigned int *)&v198[92] = 0;
    char * v162 = strtok(0, (ObjectClass *)&stru_830620[4604]);
    if ( !v162 )
    {
LABEL_463:
      IDA_LOBYTE(v200[0]) = 0;
      ebp463 = &HouseClass_Player[30096];
      do
      {
        v179 = *(ObjectClass **)ebp463;
        v180 = (INIClass *)*((unsigned int *)ebp463 - 16);
        *(unsigned int *)v198 = *((unsigned int *)ebp463 + 8);
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
        *((unsigned int *)v182 - 8) = atol(v183);
        char * v184 = strtok(v193->__pad_0, v197);
        if ( !v184 )
          break;
        v197 = (ObjectClass *)&stru_830620[4604];
        v193 = 0;
        *(unsigned int *)v182 = atol(v184);
        char * v185 = strtok(v193->__pad_0, v197);
        if ( !v185 )
          break;
        *((unsigned int *)v182 + 8) = atol(v185);
        if ( *(unsigned int *)v182 != -1 )
          ++v181;
        char * v186 = strtok(0, (ObjectClass *)&stru_830620[4604]);
        if ( !v186 )
          break;
        v197 = (ObjectClass *)&stru_830620[4604];
        v193 = 0;
        *((unsigned int *)v182 + 16) = atol(v186);
        char * v187 = strtok(v193->__pad_0, v197);
        if ( !v187 )
          break;
        *((unsigned int *)v182 + 24) = atol(v187);
        v182 += 4;
      }
      while ( (int)v182 < (int)&HouseClass_Player[30064] );
      *(unsigned int *)&HouseClass_Player[29992] = v181;
      v198[108] = 0;
      char * v188 = &HouseClass_Player[30096];
      do
      {
        v189 = *(ObjectClass **)v188;
        v190 = (INIClass *)*((unsigned int *)v188 - 16);
        *(unsigned int *)v198 = *((unsigned int *)v188 + 8);
        v197 = v189;
        sprintf(&v198[56], (ObjectClass *)&stru_830620[4568], v190);
        strcat(&v198[108], &v198[56]);
        v188 += 4;
      }
      while ( (int)v188 < (int)&HouseClass_Player[30128] );
      if ( strcmp((const char *)v200, &v198[108]) )
        v198[22] = 1;
      free(*(void **)&v198[40]);
      if ( *(unsigned int *)&HouseClass_Player[29932] != 4 || !UI_Setup_77CF40() )
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
      if ( *(unsigned int *)&stru_830620[4300] != *(unsigned int *)&HouseClass_Player[29980] )
        v198[22] = 1;
      if ( *(unsigned int *)&stru_830620[4304] != *(unsigned int *)&HouseClass_Player[29968] )
        v198[22] = 1;
      if ( *(unsigned int *)&stru_830620[4308] != *(unsigned int *)&HouseClass_Player[29988] )
        v198[22] = 1;
      if ( *((unsigned char *)&g_MatrixTransformState + 9139) != HouseClass_Player[29974] )
        v198[22] = 1;
      if ( *((unsigned char *)&g_MatrixTransformState + 9140) != HouseClass_Player[29975] )
        v198[22] = 1;
      if ( *((unsigned char *)&g_MatrixTransformState + 9141) != HouseClass_Player[29976] )
        v198[22] = 1;
      if ( *((unsigned char *)&g_MatrixTransformState + 9142) != HouseClass_Player[30164] )
        v198[22] = 1;
      if ( *((unsigned char *)&g_MatrixTransformState + 9143) != HouseClass_Player[29973] )
        v198[22] = 1;
      if ( *(unsigned int *)&stru_830620[4312] != *(unsigned int *)&HouseClass_Player[44572] )
        v198[22] = 1;
      if ( !v198[23] || v198[22] )
        SendMultiplayerStartSignal();
      if ( *(unsigned int *)&v198[32] != 188 && *(unsigned int *)&v198[32] != 189 )
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
      *(unsigned int *)&stru_830620[4300] = *(unsigned int *)&HouseClass_Player[29980];
      *(unsigned int *)&stru_830620[4304] = *(unsigned int *)&HouseClass_Player[29968];
      *(unsigned int *)&stru_830620[4308] = *(unsigned int *)&HouseClass_Player[29988];
      *(unsigned short *)((char *)&g_MatrixTransformState + 9139) = *(unsigned short *)&HouseClass_Player[29974];
      *((unsigned char *)&g_MatrixTransformState + 9141) = HouseClass_Player[29976];
      *((unsigned char *)&g_MatrixTransformState + 9142) = HouseClass_Player[30164];
      *((unsigned char *)&g_MatrixTransformState + 9143) = HouseClass_Player[29973];
      *(unsigned int *)&stru_830620[4312] = *(unsigned int *)&HouseClass_Player[44572];
      DeleteAndZero::Alt((void **)&v198[88]);
      return v198[23] == 0;
    }
    while ( 1 )
    {
      *(unsigned int *)&v198[24] = v162;
      if ( !strcmp(v162, &stru_830620[4600]) )
        goto LABEL_463;
      char * v163 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v163 )
        goto LABEL_463;
      *(unsigned int *)&v198[44] = atol(v163);
      char * v164 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v164 )
        goto LABEL_463;
      v165 = (CCINIClass *)atol(v164);
      char * v166 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v166 )
        goto LABEL_463;
      *(unsigned int *)&v198[52] = atol(v166);
      char * v167 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !v167 )
        goto LABEL_463;
      v169 = (CCINIClass *)atol(v167);
      eax438 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( !eax438 )
        goto LABEL_463;
      sscanf(eax438, (const char *const)&stru_825BAC.objectTypeFlags, &v198[92]);
      if ( !*(unsigned int *)&v198[92] || *(unsigned int *)&HouseClass_Player[29932] != 4 )
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
      *(unsigned int *)&v198[56] = *(unsigned int *)&v198[92];
      *(unsigned short *)&v198[60] = 0;
      *(unsigned int *)&v198[104] = 0;
      NetworkID::Assign((unsigned int *)(12 * v170 + 11066316), (IPXManagerClass *)&v198[104], (int)&v198[56], 0);
      char * v173 = strtok(0, (ObjectClass *)&stru_830620[4604]);
      if ( v173 )
      {
        sscanf(v173, (const char *const)&stru_825BAC.objectTypeFlags, &v198[100]);
        v195 = (ObjectClass *)&stru_830620[4604];
        v194 = 0;
        *(unsigned int *)&HouseClass_Player[21864][4 * v170 + 18808] = *(unsigned int *)&v198[100];
        char * v174 = strtok(v194, v195);
        if ( v174 )
        {
          sscanf(v174, (const char *const)&stru_825BAC.objectTypeFlags, &v198[96]);
          *(unsigned int *)&HouseClass_Player[21864][4 * v170 + 20348] = *(unsigned int *)&v198[96];
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
        *(unsigned int *)&HouseClass_Player[30312] = v165;
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
    *(unsigned int *)v198 = *(unsigned int *)&v198[40];
    goto LABEL_102;
  }
  *(unsigned int *)v198 = Source;
  v197 = (ObjectClass *)&stru_830620[4908];
  if ( *(unsigned char *)(*(unsigned int *)&v198[40] + 1) != 48 )
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
          *(unsigned int *)v198 = ToWideStringChar((IUnknown *)v74);
          v197 = (ObjectClass *)esi157;
          v193 = (CCINIClass *)&stru_830620[4828];
          Debug::Log();
          if ( (int)(v48 - 1) < 3 )
          {
            *(unsigned int *)v198 = *(unsigned int *)&v198[40];
            goto LABEL_102;
          }
          int v75 = MultiplayerGameMode::Find(esi157);
          (*(void (**)(int, int, int))(*(unsigned int *)v75 + 116))(
            v75,
            *(char *)(*(unsigned int *)&v198[40] + 1) - 48,
            *(unsigned int *)&v198[40] + 2);
        }
        esi157 = (IUnknown *)((char *)esi157 + 1);
        if ( (int)esi157 > MultiplayerGameMode::ListGet() )
        {
          *(unsigned int *)v198 = *(unsigned int *)&v198[40];
          goto LABEL_102;
        }
      }
    }
LABEL_13:
    *(unsigned int *)v198 = *(unsigned int *)&v198[40];
    goto LABEL_102;
  }
  Debug::Log();
  *(unsigned int *)&v198[24] = -1;
  *(unsigned int *)&v198[60] = 0;
  *(unsigned int *)&v198[64] = 0;
  *(unsigned short *)&v198[68] = 1;
  *(unsigned int *)&v198[56] = &vt_DynamicVectorClass_int;
  *(unsigned int *)&v198[76] = 10;
  *(unsigned int *)&v198[72] = 0;
  *(unsigned int *)&v198[32] = 0;
  *(unsigned int *)&v198[36] = 0;
  char * v49 = strtok((char *)(*(unsigned int *)&v198[40] + 2), (ObjectClass *)&stru_817F40.nextObject);
  if ( v49 )
    *(unsigned int *)&v198[24] = atol(v49);
  char * v50 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v50 )
    *(unsigned int *)&v198[36] = atol(v50);
  char * v51 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  if ( v51 )
    *(unsigned int *)&v198[32] = atol(v51);
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
      || (v198[69] || !*(unsigned int *)&v198[64])
      && *(int *)&v198[76] > 0
      && (*(uint8_t (**)(unsigned char *, int, unsigned int))(*(unsigned int *)&v198[56] + 8))(
           &v198[56],
           *(unsigned int *)&v198[76] + *(unsigned int *)&v198[64],
           0) )
    {
      int v63 = (*(unsigned int *)&v198[72])++;
      *(unsigned int *)(*(unsigned int *)&v198[60] + 4 * v63) = v62;
    }
  }
  v64 = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  char * v65 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
  *(unsigned int *)&v198[44] = v65;
  if ( v64 && v65 )
  {
    for ( jj = 0; (int)jj <= MultiplayerGameMode::ListGet(); jj = (IUnknown *)((char *)jj + 1) )
    {
      if ( MultiplayerGameMode::Find(jj) )
      {
        v66 = (GameSetup *)MultiplayerGameMode::Find(jj);
        v68 = WideString::GetOrEmpty_Alt((wchar_t **)&v66[1].GameSetup_field_0x04);
        *(unsigned int *)v198 = ToWideStringChar((IUnknown *)v68);
        v197 = (ObjectClass *)jj;
        v193 = (CCINIClass *)&stru_830620[4868];
        Debug::Log();
        int * v69 = (int *)MultiplayerGameMode::Find(jj);
        *(unsigned int *)v198 = *(unsigned int *)&v198[44];
        v197 = v64;
        int v70 = *v69;
        DynamicVectorClass_flat::Copy(_FFFFFFF4, (DynamicVector *)&v198[56]);
        if ( (*(uint8_t (**)(int *, unsigned int, unsigned int, unsigned int, unsigned int, char *, ObjectClass *, CCINIClass *, ObjectClass *, unsigned int))(v70 + 88))(
               v69,
               *(unsigned int *)&v198[24],
               _FFFFFFF4[0],
               _FFFFFFF4[1],
               _FFFFFFF4[2],
               v194,
               v195,
               v193,
               v197,
               *(unsigned int *)v198) )
        {
          int v71 = MultiplayerGameMode::Find(jj);
          (*(void (**)(int, unsigned int, unsigned int, int *))(*(unsigned int *)v71 + 92))(
            v71,
            *(unsigned int *)&v198[36],
            *(unsigned int *)&v198[32],
            v200);
        }
      }
    }
    *(unsigned int *)&v198[56] = &vt_VectorClass_int;
    if ( *(unsigned int *)&v198[60] && v198[69] )
    {
      RA2_OPDEL(*(void **)&v198[60]);
      *(unsigned int *)v198 = *(unsigned int *)&v198[40];
      goto LABEL_102;
    }
    goto LABEL_13;
  }
  free(*(void **)&v198[40]);
  *(unsigned int *)&v198[56] = &vt_VectorClass_int;
  if ( !*(unsigned int *)&v198[60] || !v198[69] )
    return 0;
  RA2_OPDEL(*(void **)&v198[60]);
  return 0;
}

} // namespace gamemd

// 0x5E5F10
namespace gamemd {
AbstractClass * * RehashGenericHashMap(HWND hWnd, int a2)
{
  LRESULT v4; // edi
  int16_t WindowLongA; // ax
  int DeleteAndZero_field_0x04; // edi
  void **v7; // eax
  void **v8; // edi
  void ***v9; // eax
  void **v10; // ecx
  int v11; // eax
  LRESULT v12; // eax
  WPARAM v13; // edi
  void **v14; // eax
  void **v15; // edi
  void ***v16; // edx
  void **v17; // eax
  int v18; // ebx
  int v19; // eax
  double v20; // st7
  int v21; // ecx
  void *v22; // edi
  unsigned int v23; // edx
  int v24; // edi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  DeleteAndZero v28; // [esp+10h] [ebp-C1Ch] BYREF
  int64_t v29; // [esp+1Ch] [ebp-C10h]
  int64_t v30; // [esp+24h] [ebp-C08h]
  uint8_t v31[1024]; // [esp+2Ch] [ebp-C00h] BYREF
  wchar_t lParam[1024]; // [esp+42Ch] [ebp-800h] BYREF

  v4 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e5f30*/
  v28.DeleteAndZero_field_0x08 = v4; /*0x5e5f36*/
  unknown_libname_74(&v28); /*0x5e5f3a*/
  if ( v4 ) /*0x5e5f41*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e5f4a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e5f52*/
    {
      DeleteAndZero_field_0x04 = 0; /*0x5e5f5c*/
      for ( v28.DeleteAndZero_field_0x04 = 0; /*0x5e5f64*/
            DeleteAndZero_field_0x04 < v28.DeleteAndZero_field_0x08;
            v28.DeleteAndZero_field_0x04 = DeleteAndZero_field_0x04 )
      {
        if ( SendMessageA(hWnd, 0x187u, DeleteAndZero_field_0x04, 0) ) /*0x5e5f73*/
        {
          if ( SendMessageA(hWnd, 0x4CFu, DeleteAndZero_field_0x04, 0) ) /*0x5e5f86*/
          {
            SendMessageA(hWnd, 0x4B6u, DeleteAndZero_field_0x04, (LPARAM)lParam); /*0x5e5f9b*/
          }
          else
          {
            SendMessageA(hWnd, 0x4B7u, DeleteAndZero_field_0x04, (LPARAM)v31); /*0x5e5fab*/
            BulkCharToWide(lParam, v31, -1); /*0x5e5fba*/
          }
          WideString::Assign_Alt((void **)&v28, lParam); /*0x5e5fcb*/
          v7 = (void **)RA2_OPNEW(0xCu); /*0x5e5fd2*/
          v8 = v7; /*0x5e5fd7*/
          if ( v7 ) /*0x5e5fde*/
            unknown_libname_74(v7); /*0x5e5fe2*/
          else
            v8 = 0; /*0x5e5fe9*/
          WideString::Reassign_Alt(v8, (const wchar_t **)&v28); /*0x5e5ff2*/
          *((unsigned char *)v8 + 4) = 1; /*0x5e5ffb*/
          v8[2] = 0; /*0x5e5fff*/
          v9 = (void ***)(*(unsigned int *)a2 /*0x5e6018*/
                        + 4
                        * ((*(int (**)(DeleteAndZero *))(a2 + 24))(&v28) & ((1 << *(unsigned int *)(a2 + 12)) - 1)));
          v10 = *v9; /*0x5e601d*/
          *v9 = v8; /*0x5e601f*/
          if ( v10 ) /*0x5e6023*/
            v8[2] = v10; /*0x5e6025*/
          v11 = *(unsigned int *)(a2 + 4); /*0x5e6028*/
          IDA_HIDWORD(v30) = 0; /*0x5e602b*/
          ++v11; /*0x5e602f*/
          IDA_HIDWORD(v29) = 0; /*0x5e6030*/
          *(unsigned int *)(a2 + 4) = v11; /*0x5e6034*/
          IDA_LODWORD(v30) = v11; /*0x5e6037*/
          IDA_LODWORD(v29) = *(unsigned int *)(a2 + 8); /*0x5e6042*/
          if ( (double)v30 / (double)(int)v29 >= *(double *)(a2 + 40) ) /*0x5e6052*/
            Map_Helper_5EF010((ObjectClass *)a2); /*0x5e6056*/
          DeleteAndZero_field_0x04 = v28.DeleteAndZero_field_0x04; /*0x5e605b*/
        }
        ++DeleteAndZero_field_0x04; /*0x5e6063*/
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
          SendMessageA(hWnd, 0x4B7u, v13, (LPARAM)v31); /*0x5e60cc*/
          BulkCharToWide(lParam, v31, -1); /*0x5e60db*/
        }
        WideString::Assign_Alt((void **)&v28, lParam); /*0x5e60ec*/
        v14 = (void **)RA2_OPNEW(0xCu); /*0x5e60f3*/
        v15 = v14; /*0x5e60f8*/
        if ( v14 ) /*0x5e60ff*/
          unknown_libname_74(v14); /*0x5e6103*/
        else
          v15 = 0; /*0x5e610a*/
        WideString::Reassign_Alt(v15, (const wchar_t **)&v28); /*0x5e6113*/
        *((unsigned char *)v15 + 4) = 1; /*0x5e611e*/
        v15[2] = 0; /*0x5e6122*/
        v16 = (void ***)(*(unsigned int *)a2 /*0x5e6137*/
                       + 4
                       * ((*(int (**)(DeleteAndZero *))(a2 + 24))(&v28) & ((1 << *(unsigned int *)(a2 + 12)) - 1)));
        v17 = *v16; /*0x5e613a*/
        *v16 = v15; /*0x5e613c*/
        if ( v17 ) /*0x5e6140*/
          v15[2] = v17; /*0x5e6142*/
        v18 = *(unsigned int *)(a2 + 8); /*0x5e6148*/
        v19 = *(unsigned int *)(a2 + 4) + 1; /*0x5e614b*/
        v29 = (unsigned int)v19; /*0x5e6150*/
        *(unsigned int *)(a2 + 4) = v19; /*0x5e6154*/
        v20 = (double)v29; /*0x5e6157*/
        v29 = (unsigned int)v18; /*0x5e615b*/
        if ( v20 / (double)v18 >= *(double *)(a2 + 40) && *(unsigned char *)(a2 + 20) != 1 ) /*0x5e6179*/
        {
          v28.DeleteAndZero_field_0x08 = *(unsigned int *)a2; /*0x5e6184*/
          v21 = *(unsigned int *)(a2 + 12) + 1; /*0x5e6192*/
          *(unsigned int *)(a2 + 8) = 2 * v18; /*0x5e6194*/
          *(unsigned int *)(a2 + 12) = v21; /*0x5e6197*/
          v22 = (void *)RA2_OPNEW(8 * v18); /*0x5e61a2*/
          v23 = 4 * *(unsigned int *)(a2 + 8); /*0x5e61a7*/
          *(unsigned int *)a2 = v22; /*0x5e61ae*/
          memset(v22, 0, v23); /*0x5e61b3*/
          if ( v18 > 0 ) /*0x5e61be*/
          {
            v28.DeleteAndZero_field_0x04 = v28.DeleteAndZero_field_0x08; /*0x5e61c4*/
            do /*0x5e6206*/
            {
              v24 = *(unsigned int *)v28.DeleteAndZero_field_0x04; /*0x5e61cc*/
              if ( *(unsigned int *)v28.DeleteAndZero_field_0x04 ) /*0x5e61cc*/
              {
                do /*0x5e61f8*/
                {
                  v25 = (*(int (**)(int))(a2 + 24))(v24) & ((1 << *(unsigned int *)(a2 + 12)) - 1); /*0x5e61e2*/
                  v26 = *(unsigned int *)(*(unsigned int *)a2 + 4 * v25); /*0x5e61e6*/
                  *(unsigned int *)(*(unsigned int *)a2 + 4 * v25) = v24; /*0x5e61ec*/
                  v27 = *(unsigned int *)(v24 + 8); /*0x5e61ee*/
                  *(unsigned int *)(v24 + 8) = v26; /*0x5e61f1*/
                  v24 = v27; /*0x5e61f6*/
                }
                while ( v27 ); /*0x5e61f8*/
              }
              --v18; /*0x5e6201*/
              v28.DeleteAndZero_field_0x04 += 4; /*0x5e6202*/
            }
            while ( v18 ); /*0x5e6206*/
          }
          RA2_OPDEL((void *)v28.DeleteAndZero_field_0x08); /*0x5e620d*/
        }
      }
    }
  }
  DeleteAndZero::Alt(&v28); /*0x5e6219*/
}
}
// 0x5E6230
namespace gamemd {
void ProcessComboBoxAddString(HWND hWnd, int a2)
{
  void (__stdcall *v2)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v5; // edi
  int16_t WindowLongA; // ax
  LPARAM v7; // edi
  ObjectClass *v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  unsigned int *v12; // ecx
  DeleteAndZero *v13; // edi
  double v14; // st7
  bool v15; // c0
  bool v16; // c3
  wchar_t *v17; // eax
  LRESULT v18; // eax
  void *v19; // [esp+10h] [ebp-C10h] BYREF
  int DeleteAndZero_field_0x08; // [esp+14h] [ebp-C0Ch]
  int64_t v21; // [esp+18h] [ebp-C08h]
  wchar_t lParam[1024]; // [esp+20h] [ebp-C00h] BYREF
  uint8_t v23[1024]; // [esp+820h] [ebp-400h] BYREF

  v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6239*/
  v5 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e6250*/
  DeleteAndZero_field_0x08 = v5; /*0x5e6256*/
  unknown_libname_74(&v19); /*0x5e625a*/
  if ( v5 ) /*0x5e6261*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e626a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e6272*/
    {
      v7 = 0; /*0x5e627c*/
      if ( DeleteAndZero_field_0x08 > 0 ) /*0x5e6280*/
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
            BulkCharToWide(lParam, v23, -1); /*0x5e62cb*/
          }
          WideString::Assign_Alt(&v19, lParam); /*0x5e62d9*/
          v8 = *(ObjectClass **)(*(unsigned int *)a2 /*0x5e62f4*/
                               + 4
                               * ((*(int (**)(void **))(a2 + 24))(&v19) & ((1 << *(unsigned int *)(a2 + 12)) - 1)));
          if ( v8 ) /*0x5e62f9*/
          {
            while ( !SendMultiplayerStartSignal_Start_77EBA0_Start(v8, (const wchar_t **)&v19) ) /*0x5e6309*/
            {
              v8 = (ObjectClass *)v8->vtable3; /*0x5e630b*/
              if ( !v8 ) /*0x5e6310*/
                goto LABEL_14; /*0x5e6310*/
            }
            SendMessageA(hWnd, 0x185u, 1u, v7); /*0x5e631d*/
          }
  LABEL_14:
          if ( ++v7 >= DeleteAndZero_field_0x08 ) /*0x5e632a*/
            break; /*0x5e632a*/
          v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6288*/
        }
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6338*/
    {
      v9 = *(unsigned int *)(a2 + 4); /*0x5e633e*/
      v10 = 0; /*0x5e6341*/
      if ( v9 ) /*0x5e6345*/
      {
        v11 = *(unsigned int *)(a2 + 8); /*0x5e634b*/
        v21 = (unsigned int)(v9 - 1); /*0x5e634f*/
        *(float *)&v21 = (double)v21 / (double)v11; /*0x5e6369*/
        if ( v11 > 0 ) /*0x5e636d*/
        {
          v12 = *(unsigned int **)a2; /*0x5e6375*/
          while ( !*v12 ) /*0x5e637a*/
          {
            ++v10; /*0x5e637c*/
            ++v12; /*0x5e637d*/
            if ( v10 >= v11 ) /*0x5e6382*/
              goto LABEL_30; /*0x5e6382*/
          }
          if ( v10 != -1 ) /*0x5e638c*/
          {
            WideString::Reassign_Alt(&v19, *(const wchar_t ***)(*(unsigned int *)a2 + 4 * v10)); /*0x5e639a*/
            v13 = *(DeleteAndZero **)(*(unsigned int *)a2 + 4 * v10); /*0x5e63a1*/
            DeleteAndZero_field_0x08 = v13->DeleteAndZero_field_0x08; /*0x5e63a9*/
            if ( v13 ) /*0x5e63ad*/
            {
              DeleteAndZero::Alt(v13); /*0x5e63b1*/
              RA2_OPDEL(v13); /*0x5e63b7*/
            }
            v14 = *(float *)&v21; /*0x5e63c5*/
            *(unsigned int *)(*(unsigned int *)a2 + 4 * v10) = DeleteAndZero_field_0x08; /*0x5e63c9*/
            v15 = v14 < *(double *)(a2 + 32); /*0x5e63cf*/
            v16 = v14 == *(double *)(a2 + 32); /*0x5e63cf*/
            --*(unsigned int *)(a2 + 4); /*0x5e63d3*/
            if ( v15 || v16 ) /*0x5e63d8*/
              String_Process((ObjectClass *)a2); /*0x5e63df*/
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
  DeleteAndZero::Alt((DeleteAndZero *)&v19); /*0x5e6420*/
}
}
// 0x5E6520
namespace gamemd {
AbstractClass * * Map_ReadPlayerCount(int a1)
{
  int Int_Overwrite; // edi
  int i; // esi
  void *v4[4]; // [esp+Ch] [ebp-150h] BYREF
  unsigned int v5[3]; // [esp+1Ch] [ebp-140h] BYREF
  unsigned int v6[6]; // [esp+28h] [ebp-134h] BYREF
  char v7; // [esp+40h] [ebp-11Ch]
  int v8; // [esp+44h] [ebp-118h]
  int v9; // [esp+48h] [ebp-114h]
  unsigned int v10[22]; // [esp+4Ch] [ebp-110h] BYREF
  unsigned char v11[12]; // [esp+A4h] [ebp-B8h] BYREF
  int v12; // [esp+B0h] [ebp-ACh]
  char Buffer[32]; // [esp+B8h] [ebp-A4h] BYREF
  char Source[132]; // [esp+D8h] [ebp-84h] BYREF

  if ( a1 < 0 || a1 >= dword_A8B8D8 ) /*0x5e6539*/
    return 0; /*0x5e6539*/
  strcpy(Source, (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e6565*/
  CCFileClass::Construct(v10, Source); /*0x5e657a*/
  v4[1] = 0; /*0x5e6583*/
  v4[2] = 0; /*0x5e6587*/
  GenericNode::Constructor(v5); /*0x5e658b*/
  GenericNode::Constructor(v6); /*0x5e6594*/
  LinkedList::Prepend(v5, (int)v6); /*0x5e65aa*/
  v4[3] = (void*)&List_INIClass_INISection___vftable; /*0x5e65b9*/
  memset(&v6[3], 0, 12); /*0x5e65c1*/
  v7 = 0; /*0x5e65cd*/
  v8 = 0; /*0x5e65d1*/
  v9 = 0; /*0x5e65d5*/
  v4[0] = (void*)&INIClass_vftable; /*0x5e65d9*/
  if ( !FileStraw::Open(v4, (int)v10, 0) ) /*0x5e65e1*/
  {
    HashTable::DestroyHashTableINIClass(v4); /*0x5e65ee*/
    v10[0] = (void*)&CCFileClass_vftable; /*0x5e65fa*/
    v12 = 0; /*0x5e6602*/
    Vector::Clear((int)v11); /*0x5e6609*/
    v10[0] = (unsigned int)&off_7E1668; /*0x5e6612*/
    BufferIOFileClass::Dtor(v10); /*0x5e661a*/
    return 0; /*0x5e662a*/
  }
  Int_Overwrite = 0; /*0x5e662b*/
  for ( i = 0; i < 8; ++i ) /*0x5e662d*/
  {
    sprintf(Buffer, "%d", i); /*0x5e663d*/
    if ( INIClass::ReadInt_Overwrite(g_INI_Key_Waypoints, Buffer, -1) != -1 ) /*0x5e6660*/
      ++Int_Overwrite; /*0x5e6662*/
  }
  if ( !Int_Overwrite ) /*0x5e666b*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite(aRandommap, aNumplayers, 0); /*0x5e6681*/
    if ( !Int_Overwrite ) /*0x5e6685*/
      Int_Overwrite = 8; /*0x5e6687*/
  }
  HashTable::DestroyHashTableINIClass(v4); /*0x5e6690*/
  v10[0] = (void*)&CCFileClass_vftable; /*0x5e669c*/
  v12 = 0; /*0x5e66a4*/
  Vector::Clear((int)v11); /*0x5e66ab*/
  v10[0] = (unsigned int)&off_7E1668; /*0x5e66b4*/
  BufferIOFileClass::Dtor(v10); /*0x5e66bc*/
  return Int_Overwrite; /*0x5e661f*/
}
}
// 0x5E66F0
namespace gamemd {
char sub_5E66F0()
{
  LRESULT v0; // eax
  LRESULT v1; // eax
  int v2; // esi
  unsigned int *v3; // edx
  void *v4; // ebx
  void *v5; // eax
  void *v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  const wchar_t *v9; // eax

  v0 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA(hDlg, 1363, 0x199u, v0, 0); /*0x5e672c*/
    v2 = 0; /*0x5e6734*/
    if ( g_MultiplayerOptions > 0 ) /*0x5e6738*/
    {
      v3 = (unsigned int *)g_MultiplayerGameState; /*0x5e673e*/
      while ( v1 != *v3 ) /*0x5e6746*/
      {
        ++v2; /*0x5e6748*/
        ++v3; /*0x5e6749*/
        if ( v2 >= g_MultiplayerOptions ) /*0x5e674e*/
          goto LABEL_20; /*0x5e674e*/
      }
      if ( v2 != -1 && v2 != dword_AC0D30 ) /*0x5e6764*/
      {
        LoadScenarioClassByIndex(v2); /*0x5e676c*/
        if ( IsRandMap::Sed(*(unsigned int *)(g_MultiplayerGameState + 4 * v2)) ) /*0x5e677a*/
        {
          v4 = g_UIControlState; /*0x5e6783*/
          if ( g_UIControlState ) /*0x5e678b*/
          {
            ComPtr::Dtor(g_UIControlState); /*0x5e678f*/
            RA2_OPDEL(v4); /*0x5e6795*/
          }
          v5 = RA2_OPNEW(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = (void *)unknown_libname_27(v5); /*0x5e67ad*/
          else
            v6 = 0; /*0x5e67b4*/
          g_UIControlState = v6; /*0x5e67bd*/
          Surface::LoadToSurfaceSHP((char **)v6, ExistingFileName); /*0x5e67c2*/
          if ( !*(unsigned int *)g_UIControlState ) /*0x5e67cc*/
            Session::PrepareGame(hDlg); /*0x5e67d7*/
          InvalidateRect(hDlg, 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame(hDlg); /*0x5e67fa*/
        }
        dword_AC0D30 = v2; /*0x5e6805*/
        g_GameRulesOptions = dword_AC10E0; /*0x5e680b*/
        LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6811*/
      }
    }
  }
  LABEL_20:
  v7 = hDlg; /*0x5e6816*/
  v8 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v9 = (const wchar_t *)SendDlgItemMessageA(v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    word_AC0EC8 = 0; /*0x5e6857*/
  else
    wcscpy(&word_AC0EC8, v9); /*0x5e684d*/
  if ( g_GameMode_Current[0] == 3 ) /*0x5e686b*/
  {
    Event::Dispatch(); /*0x5daf20*/
    NetworkLobby::MessageHandler(); /*0x5daf25*/
    return 0; /*0x5daf2a*/
  }
  else if ( g_GameMode_Current[0] == 4 ) /*0x5e6875*/
  {
// 0x77f900
    return Game::ProcessIdle(); /*0x5e6877*/
  }
  else
  {
    if ( g_GameMode_Current[0] == 1 || g_GameMode_Current[0] == 2 ) /*0x5e6884*/
    {
      if ( dword_ABF10C ) /*0x5bb268*/
      {
        CellClass::SetOccupancy(dword_ABF10C, 0); /*0x5bb26c*/
        ModemGuest::ProcessPacket(dword_ABF10C, 1); /*0x5bb279*/
      }
    }
    Event::Dispatch(); /*0x5e6886*/
    return 0; /*0x5e688b*/
  }
}
}
// 0x5E7160
namespace gamemd {
SkirmishDialog * * E4Recv_5E7160::HandleMultiplayerMapSelection()
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
  int v11; // eax
  SkirmishDialog *v13; // ecx
  char bl20; // bl
  char v14; // al
  char *v15; // ecx
  CellStruct *StringCSF; // edi
  wchar_t *v17; // ebx
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  HWND v20; // edi
  HWND DlgItem; // ebx
  CampaignScore *v23; // eax
  LPARAM ebx47; // ebx
  HWND v24; // eax
  int v25; // [esp+0h] [ebp-20h]
  char v26; // [esp+13h] [ebp-Dh]
  CampaignScore *v27; // [esp+14h] [ebp-Ch]
  char v28; // [esp+18h] [ebp-8h]

  v1 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x188u, 0, 0); /*0x5e7185*/
  if ( v1 == -1 ) /*0x5e718a*/
    return 0; /*0x5e718a*/
  v2 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1363, 0x199u, v1, 0); /*0x5e71a0*/
  v3 = 0; /*0x5e71a8*/
  if ( *(int *)&HouseClass_Player.__pad_5568[9764] <= 0 ) /*0x5e71b0*/
    return 0; /*0x5e71b0*/
  for ( i = *(ObjectClass **)&HouseClass_Player.__pad_5568[9752]; /*0x5e71b2*/
        v2 != *(unsigned int *)i->__pad_0;
        i = (ObjectClass *)((char *)i + 4) )
  {
    v3 = (CampaignScore *)((char *)v3 + 1); /*0x5e71bc*/
    if ( (int)v3 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5e71c2*/
      return 0; /*0x5e71d1*/
  }
  v27 = v3; /*0x5e71d5*/
  if ( v3 == (CampaignScore *)-1 ) /*0x5e71d9*/
    return 0; /*0x5e71e4*/
  v6 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072]; /*0x5e71ea*/
  v7 = 0; /*0x5e71f0*/
  v8 = (SkirmishDialog *)*(&g_MatrixTransformState + 1996); /*0x5e71f2*/
  v9 = SendDlgItemMessageA((HWND)*(&g_MatrixTransformState + 1996), 1771, 0x188u, 0, 0); /*0x5e7201*/
  if ( v9 != -1 ) /*0x5e7206*/
    v7 = (wchar_t **)SendDlgItemMessageA((HWND)v8, 1771, 0x199u, v9, 0); /*0x5e7217*/
  *(unsigned int *)&HouseClass_Player.__pad_5568[8072] = v7; /*0x5e7219*/
  v26 = (*((int (**)(wchar_t **))*v7 + 16))(v7); /*0x5e7226*/
  v28 = (*((int (**)(wchar_t **))*v7 + 47))(v7); /*0x5e7238*/
  PlayerCountMap = ReadPlayerCountMap((int)v27); /*0x5e7247*/
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8072] ) /*0x5e724b*/
  {
    v11 = (*(int (**)(unsigned int))(**(unsigned int **)&HouseClass_Player.__pad_5568[8072] + 152))(*(unsigned int *)&HouseClass_Player.__pad_5568[8072]); /*0x5e724f*/
    if ( v11 != -1 && v11 < PlayerCountMap ) /*0x5e725c*/
      PlayerCountMap = v11; /*0x5e725e*/
  }
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5e7267*/
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
  *(unsigned int *)&HouseClass_Player.__pad_5568[8072] = v6; /*0x5e7291*/
  switch ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] ) /*0x5e7297*/
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
    v15 = &stru_830620.__pad_1258[468]; /*0x5e72d6*/
    if ( bl20 ) /*0x5e72db*/
      v15 = &stru_830620.__pad_1258[448]; /*0x5e72dd*/
    StringCSF = (CellStruct *)GetStringCSF((wchar_t *)v15, 0, &stru_830620.__pad_1140[120], 2963); /*0x5e7304*/
    v17 = GetStringCSF((wchar_t *)&stru_830620.__pad_1258[440], 0, &stru_830620.__pad_1140[120], 2964); /*0x5e731c*/
    v18 = GetStringCSF(aGuiCancel, 0, &stru_830620.__pad_1140[120], 2965); /*0x5e731e*/
    if ( Dialog::ShowMessageBox((int)StringCSF, v17, (Movie *)v18, 0, 0, v25) ) /*0x5e7336*/
      return 0; /*0x5e7348*/
  }
  v13 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072]; /*0x5e7349*/
LABEL_32:
  if ( v7 != (wchar_t **)v13 ) /*0x5e7351*/
  {
    if ( v13 ) /*0x5e7355*/
      (*(void (**)(SkirmishDialog *))(*(unsigned int *)v13->__pad_0 + 156))(v13); /*0x5e7359*/
    if ( v7 ) /*0x5e7361*/
    {
      *(unsigned int *)&HouseClass_Player.__pad_5568[8072] = v7; /*0x5e7367*/
      v19 = v7[10]; /*0x5e736d*/
      *(unsigned int *)&HouseClass_Player.__pad_5568[8096] = v27; /*0x5e7370*/
      *(unsigned int *)&HouseClass_Player.__pad_5568[8092] = v19; /*0x5e7376*/
      (*((void (**)(wchar_t **))*v7 + 8))(v7); /*0x5e737f*/
    }
  }
  *(unsigned int *)&HouseClass_Player.__pad_5568[8096] = v27; /*0x5e7388*/
  if ( v7 ) /*0x5e738d*/
    (*((void (**)(wchar_t **))*v7 + 9))(v7); /*0x5e7393*/
  (*((void (**)(wchar_t **))*v7 + 6))(v7); /*0x5e739a*/
  (*((void (**)(wchar_t **))*v7 + 31))(v7); /*0x5e73a1*/
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
  if ( *(int *)&HouseClass_Player.__pad_5568[8096] >= 0 /*0x5e7428*/
    && *(int *)&HouseClass_Player.__pad_5568[8096] < *(int *)&HouseClass_Player.__pad_5568[9764] )
  {
    ebx47 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[9752] /*0x5e7430*/
                      + 4 * *(unsigned int *)&HouseClass_Player.__pad_5568[8096]);
    if ( ebx47 ) /*0x5e7435*/
    {
      v24 = GetDlgItem(v20, 1448); /*0x5e743d*/
      SendMessageA(v24, 0x4B2u, 0, ebx47); /*0x5e7448*/
    }
  }
  (*((void (**)(wchar_t **))*v7 + 24))(v7); /*0x5e7452*/
  return 1; /*0x5e71c8*/

}
}
// 0x5E7920
namespace gamemd {
void ExchangeMultiplayerGameInfo()
{
  int v0; // eax
  char *FlaggedGameSettings; // eax
  char *v2; // eax
  int FileSize; // edi
  char *v4; // esi
  signed int v5; // ebx
  char *v6; // edi
  void *v7; // ebx
  void *v8; // eax
  void *v9; // eax
  HWND CurrentDialog; // eax
  int v11[3]; // [esp+8h] [ebp-330h] BYREF
  unsigned int v12[4]; // [esp+14h] [ebp-324h] BYREF
  int v13[9]; // [esp+24h] [ebp-314h] BYREF
  int v14[10]; // [esp+48h] [ebp-2F0h] BYREF
  int v15[113]; // [esp+70h] [ebp-2C8h] BYREF
  int16_t v16; // [esp+234h] [ebp-104h]
  char v17; // [esp+236h] [ebp-102h]
  char v18[256]; // [esp+238h] [ebp-100h] BYREF

  Network::SetConnectionParams(unk_A8E9C0, 50, -1, 5000, 1); /*0x5e7938*/
  Debug::Log(); /*0x5e7942*/
  memset(v15, 0, sizeof(v15)); /*0x5e7957*/
  v16 = 0; /*0x5e7959*/
  v17 = 0; /*0x5e795b*/
  v15[0] = 26; /*0x5e795c*/
  Debug::Log(); /*0x5e7964*/
  while ( 1 ) /*0x5e7977*/
  {
    if ( dword_A8B238[0] == 3 ) /*0x5e7977*/
    {
      v0 = Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x5e7996*/
    }
    else
    {
      FlaggedGameSettings = GameSettings::FindFlagged(); /*0x5e799d*/
      if ( !FlaggedGameSettings ) /*0x5e79a4*/
        break; /*0x5e79a4*/
      v2 = CharToWideString(FlaggedGameSettings + 36); /*0x5e79a9*/
      v0 = Network::SendToPlayer((int)unk_A8E9C0, (int)v15, 455, 1, (wchar_t *)v2); /*0x5e79c0*/
    }
    if ( v0 ) /*0x5e79c7*/
      break; /*0x5e79c7*/
    Event::Dispatch(); /*0x5e79c9*/
  }
  while ( Network::GetQueueCount((int)unk_A8E9C0) ) /*0x5e79d5*/
    Event::Dispatch(); /*0x5e79de*/
  Debug::Log(); /*0x5e79f6*/
  dword_A8D804 = stru_A8BB1C; /*0x5e7a11*/
  dword_A8D808 = dword_A8BB20; /*0x5e7a17*/
  dword_A8D80C = dword_A8BB24; /*0x5e7a1c*/
  Debug::Log(); /*0x5e7a22*/
  if ( RequestNetworkFile(v18, 3, 0) ) /*0x5e7a35*/
  {
    Debug::Log(); /*0x5e7a6f*/
    RawFileClass::Construct(v13, (int)v18); /*0x5e7a83*/
    FileSize = CCFileClass::GetFileSize(v13); /*0x5e7a91*/
    v4 = (char *)RA2_OPNEW(FileSize); /*0x5e7a9c*/
    FileClass::Read(v13, v4, FileSize); /*0x5e7aa4*/
    v5 = *(unsigned int *)v4; /*0x5e7aa9*/
    Debug::Log(); /*0x5e7ab0*/
    v11[1] = 0; /*0x5e7abf*/
    v11[2] = 0; /*0x5e7ac9*/
    Buffer::Init(v12, (int)(v4 + 4), FileSize); /*0x5e7ad9*/
    v12[3] = 0; /*0x5e7ae2*/
    v11[0] = (int)&BufferStraw_vftable; /*0x5e7af1*/
    LZOStraw::Constructor(v14, 1, 0x2000); /*0x5e7af9*/
    Delegate::Set(v14, (int)v11); /*0x5e7b07*/
    v6 = (char *)RA2_OPNEW(2 * v5); /*0x5e7b18*/
    LCW::Decompress((int)v14, v6, v5); /*0x5e7b20*/
    Debug::Log(); /*0x5e7b2a*/
    if ( g_UIControlState ) /*0x5e7b39*/
    {
      v7 = g_UIControlState; /*0x5e7b3b*/
      ComPtr::Dtor(g_UIControlState); /*0x5e7b43*/
      RA2_OPDEL(v7); /*0x5e7b49*/
    }
    v8 = RA2_OPNEW(4u); /*0x5e7b53*/
    if ( v8 ) /*0x5e7b5e*/
      v9 = (void *)unknown_libname_27(v8); /*0x5e7b62*/
    else
      v9 = 0; /*0x5e7b69*/
    g_UIControlState = v9; /*0x5e7b6e*/
    ModemGame::RenderPaletteImage(v6); /*0x5e7b73*/
    CurrentDialog = Dialog::GetCurrent(); /*0x5e7b7c*/
    InvalidateRect(CurrentDialog, 0, 0); /*0x5e7b82*/
    Debug::Log(); /*0x5e7b8d*/
    RA2_OPDEL(v6); /*0x5e7b93*/
    RA2_OPDEL(v4); /*0x5e7b99*/
    Network::SetConnectionParams(unk_A8E9C0, 30, -1, 600, 1); /*0x5e7bb1*/
    LZOStraw::Destructor(v14); /*0x5e7bba*/
    Vector::Clear((int)v12); /*0x5e7bc3*/
    Straw::Dtor(v11); /*0x5e7bcc*/
    RawFileClass::Dtor(v13); /*0x5e7bd5*/
  }
  else
  {
    Debug::Log(); /*0x5e7a43*/
    Network::SetConnectionParams(unk_A8E9C0, 30, -1, 600, 1); /*0x5e7a5b*/
  }
}
}
// 0x5E7BF0
namespace gamemd {
char LoadScenarioClassByIndex(int a1)
{
  char result; // al
  unsigned int *v3; // eax
  char v4; // al
  bool v5; // bl
  int **v6; // esi
  int v7; // eax
  int Field; // eax
  int *v9; // eax
  char *v10; // eax
  int PlayerCountMap; // esi
  int v12; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-90h]
  int v16; // [esp+0h] [ebp-80h]
  unsigned int v17[22]; // [esp+14h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v19; // [esp+78h] [ebp-8h]

  if ( a1 == -1 ) /*0x5e7bfb*/
  {
    dword_A8BB04 = 0; /*0x5e7c00*/
    IDA_LOBYTE(dword_A8BB08) = 0; /*0x5e7c05*/
    dword_A8BB0C = 0; /*0x5e7c0a*/
    IDA_HIWORD(dword_A8B320) = 0; /*0x5e7c0f*/
    byte_A8B8E0 = 0; /*0x5e7c16*/
    byte_A8BAE2 = 0; /*0x5e7c1d*/
    return 0; /*0x5e7c2a*/
  }
  v3 = CCFileClass::Construct(v17, (char *)(*(unsigned int *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e7c3b*/
  v4 = (*(int (**)(unsigned int *, unsigned int))(*v3 + 20))(v3, 0); /*0x5e7c46*/
  v17[0] = (void*)&CCFileClass_vftable; /*0x5e7c4f*/
  v5 = v4 == 0; /*0x5e7c57*/
  v19 = 0; /*0x5e7c5a*/
  Vector::Clear((int)v18); /*0x5e7c62*/
  v17[0] = (unsigned int)&off_7E1668; /*0x5e7c6b*/
  BufferIOFileClass::Dtor(v17); /*0x5e7c73*/
  if ( !v5 ) /*0x5e7c7a*/
    goto LABEL_9; /*0x5e7c7a*/
  if ( dword_81C1D0 == -2 ) /*0x5e7c87*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_netshare_cpp, 3627); /*0x5e7cfe*/
    v9 = (int *)GetStringCSF(aTxtUnableReadS, 0, g_Str_File_netshare_cpp, 3627); /*0x5e7d09*/
    Dialog::ShowMessageBox(v9, StringCSF, 0, 0, 0, v16); /*0x5e7d13*/
    return 0; /*0x5e7d20*/
  }
  v6 = (int **)(dword_A8B8CC + 4 * a1); /*0x5e7c93*/
  v7 = Game::CheckForGameCD((void *)0x3C); /*0x5e7c96*/
  if ( (uint8_t)ScenarioClass::CheckExists(*v6, v7) /*0x5e7cca*/
    || (Field = GameOption::GetField(*(unsigned int ***)(dword_A8B8CC + 4 * a1)), (result = (void*)&CD_vftable(Field)) != 0) )
  {
  LABEL_9:
    wcscpy((wchar_t *)&dword_A8B320 + 1, *(const wchar_t **)(dword_A8B8CC + 4 * a1)); /*0x5e7d31*/
    strcpy(&byte_A8BAE2, (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * a1) + 348)); /*0x5e7d5f*/
    v10 = dword_A8B230; /*0x5e7d7e*/
    strcpy(&byte_A8B8E0, (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e7d8f*/
    strcpy(v10 + 4700, &byte_A8B8E0); /*0x5e7db7*/
    IDA_LOBYTE(dword_A8BB08) = *(unsigned char *)(*(unsigned int *)(dword_A8B8CC + 4 * a1) + 380); /*0x5e7dd1*/
    PlayerCountMap = ReadPlayerCountMap(a1); /*0x5e7de5*/
    if ( dword_A8B23C ) /*0x5e7de7*/
    {
      v12 = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 152))(dword_A8B23C); /*0x5e7deb*/
      if ( v12 != -1 && v12 < PlayerCountMap ) /*0x5e7df8*/
        PlayerCountMap = v12; /*0x5e7dfa*/
    }
    if ( dword_A8B238[0] == 4 ) /*0x5e7e03*/
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
    dword_A8BB0C = PlayerCountMap; /*0x5e7e2a*/
    v13 = CCFileClass::Construct(v17, &byte_A8B8E0); /*0x5e7e30*/
    dword_A8BB04 = (*(int (**)(unsigned int *))(*v13 + 44))(v13); /*0x5e7e45*/
    v17[0] = (void*)&CCFileClass_vftable; /*0x5e7e4a*/
    v19 = 0; /*0x5e7e4e*/
    Vector::Clear((int)v18); /*0x5e7e52*/
    v17[0] = (unsigned int)&off_7E1668; /*0x5e7e60*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e64*/
    v14 = CCFileClass::Construct(v17, &byte_A8B8E0); /*0x5e7e72*/
    dword_A8BB04 = (*(int (**)(unsigned int *))(*v14 + 44))(v14); /*0x5e7e82*/
    v17[0] = (void*)&CCFileClass_vftable; /*0x5e7e87*/
    v19 = 0; /*0x5e7e8b*/
    Vector::Clear((int)v18); /*0x5e7e8f*/
    v17[0] = (unsigned int)&off_7E1668; /*0x5e7e98*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e9c*/
    return 1; /*0x5e7ea1*/
  }
  return result; /*0x5e7bff*/
}
}
// 0x5E87A0
namespace gamemd {
HashTable_flat * * LoadNetworkShareStrings()
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

  if ( !dword_AC117C ) /*0x5e87a7*/
  {
    dword_AC117C = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 4078); /*0x5e87d4*/
    dword_AC1180 = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 4079); /*0x5e87ef*/
    dword_AC1184 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 4080); /*0x5e880a*/
    dword_AC1188 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 4081); /*0x5e8825*/
    dword_AC118C = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 4082); /*0x5e8840*/
    dword_AC1190 = GetStringCSF(aGuiWaiting, 0, g_Str_File_netshare_cpp, 4083); /*0x5e885b*/
    dword_AC1194 = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 4084); /*0x5e8865*/
  }
  if ( !g_HouseClass_ObserverFlags ) /*0x5e8872*/
  {
    v0 = (wchar_t *)RA2_OPNEW(0x85u); /*0x5e8879*/
    v1 = v0; /*0x5e887e*/
    if ( v0 ) /*0x5e8885*/
      Waypoint::InitInvalid((unsigned char *)v0 + 40); /*0x5e888a*/
    else
      v1 = 0; /*0x5e8891*/
    g_HouseClass_ObserverFlags = (LPARAM)v1; /*0x5e8898*/
    wcscpy(v1, dword_AC117C); /*0x5e88a0*/
  }
  if ( !g_Lobby_PlayerCount ) /*0x5e88af*/
  {
    v2 = (wchar_t *)RA2_OPNEW(0x85u); /*0x5e88b6*/
    v3 = v2; /*0x5e88bb*/
    if ( v2 ) /*0x5e88c2*/
      Waypoint::InitInvalid((unsigned char *)v2 + 40); /*0x5e88c7*/
    else
      v3 = 0; /*0x5e88ce*/
    g_Lobby_PlayerCount = (LPARAM)v3; /*0x5e88d6*/
    wcscpy(v3, dword_AC1180); /*0x5e88de*/
  }
  if ( !g_Lobby_PlayerTeam ) /*0x5e88ed*/
  {
    v4 = (wchar_t *)RA2_OPNEW(0x85u); /*0x5e88f4*/
    v5 = v4; /*0x5e88f9*/
    if ( v4 ) /*0x5e8900*/
      Waypoint::InitInvalid((unsigned char *)v4 + 40); /*0x5e8905*/
    else
      v5 = 0; /*0x5e890c*/
    g_Lobby_PlayerTeam = (LPARAM)v5; /*0x5e8914*/
    wcscpy(v5, dword_AC1184); /*0x5e891c*/
  }
  if ( !g_Lobby_PlayerSide ) /*0x5e892b*/
  {
    v6 = (wchar_t *)RA2_OPNEW(0x85u); /*0x5e8932*/
    v7 = v6; /*0x5e8937*/
    if ( v6 ) /*0x5e893e*/
      Waypoint::InitInvalid((unsigned char *)v6 + 40); /*0x5e8943*/
    else
      v7 = 0; /*0x5e894a*/
    g_Lobby_PlayerSide = (LPARAM)v7; /*0x5e8951*/
    wcscpy(v7, dword_AC1188); /*0x5e8959*/
  }
  if ( !g_Lobby_PlayerColor ) /*0x5e8968*/
  {
    v8 = (wchar_t *)RA2_OPNEW(0x85u); /*0x5e896f*/
    v9 = v8; /*0x5e8974*/
    if ( v8 ) /*0x5e897b*/
      Waypoint::InitInvalid((unsigned char *)v8 + 40); /*0x5e8980*/
    else
      v9 = 0; /*0x5e8987*/
    g_Lobby_PlayerColor = (LPARAM)v9; /*0x5e898f*/
    wcscpy(v9, dword_AC118C); /*0x5e8997*/
  }
  if ( !g_Lobby_PlayerReady ) /*0x5e89a6*/
  {
    v10 = (wchar_t *)RA2_OPNEW(0x85u); /*0x5e89ad*/
    v11 = v10; /*0x5e89b2*/
    if ( v10 ) /*0x5e89b9*/
      Waypoint::InitInvalid((unsigned char *)v10 + 40); /*0x5e89be*/
    else
      v11 = 0; /*0x5e89c5*/
    g_Lobby_PlayerReady = v11; /*0x5e89cd*/
    wcscpy(v11, dword_AC1190); /*0x5e89d5*/
  }
  result = (wchar_t *)g_Lobby_MaxPlayers; /*0x5e89dd*/
  if ( !g_Lobby_MaxPlayers ) /*0x5e89e4*/
  {
    v13 = (wchar_t *)RA2_OPNEW(0x85u); /*0x5e89eb*/
    v14 = v13; /*0x5e89f0*/
    if ( v13 ) /*0x5e89f7*/
      Waypoint::InitInvalid((unsigned char *)v13 + 40); /*0x5e89fc*/
    else
      v14 = 0; /*0x5e8a03*/
    g_Lobby_MaxPlayers = (LPARAM)v14; /*0x5e8a0a*/
    return wcscpy(v14, dword_AC1194); /*0x5e8a12*/
  }
  return result; /*0x5e8a1b*/
}
}
// 0x5E9B20
namespace gamemd {
void GetComboBoxSelectedDefault(SkirmishDialog * aP0, int nIDDlgItem, WPARAM wParam)
{
  LRESULT v3; // eax
  LRESULT v6; // eax

  v3 = wParam; /*0x5e9b20*/
  if ( wParam == -1 ) /*0x5e9b34*/
    v3 = SendDlgItemMessageA(aP0, nIDDlgItem, 0x147u, 0, 0); /*0x5e9b41*/
  v6 = SendDlgItemMessageA(aP0, nIDDlgItem, 0x150u, v3, 0); /*0x5e9b4d*/
  return v6 != -1 ? v6 : 0;
}
}
// 0x5E9C00
namespace gamemd {
void Player_AssignColor(HWND hDlg, void * nIDDlgItem)
{
  int ComboBoxSelectedRaw; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  char *v8; // eax

  ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)nIDDlgItem, -1); /*0x5e9c10*/
  result = StartCombo::IDToIndex(nIDDlgItem); /*0x5e9c12*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9c1d*/
  {
    FillColorComboBoxUI(hDlg, (int)nIDDlgItem); /*0x5e9c27*/
    if ( ComboBoxSelectedRaw != -2 ) /*0x5e9c2f*/
    {
      v6 = (wchar_t **)dword_A8DA90; /*0x5e9c31*/
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
// 0x696f20
            && SessionClass::GetPlayerColor((SessionClass *)v7) == ComboBoxSelectedRaw )
{

  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(unsigned int *)((char *)this + 87) != -2 ) /*0x696f2a*/
    return *(unsigned int *)((char *)this + 83); /*0x696f2c*/
  return result; /*0x696f2f*/

}
        }
        if ( (int)++v6 >= (int)&dword_A8DAB0 ) /*0x5e9c86*/
        {
          v8 = &stru_A8B250.__pad_0[108]; /*0x5e9c88*/
          while ( *(unsigned int *)v8 != ComboBoxSelectedRaw ) /*0x5e9c8f*/
          {
            v8 += 4; /*0x5e9c91*/
            if ( (int)v8 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5e9c99*/
              goto LABEL_19; /*0x5e9c99*/
          }
          break; /*0x5e9c8f*/
        }
      }
      ComboBoxSelectedRaw = -2; /*0x5e9c9d*/
    }
  LABEL_19:
    SessionClass::AssignColor((SessionClass *)&dword_A8B238, ComboBoxSelectedRaw, 0); /*0x5e9ca2*/
    result = dword_A8DA84; /*0x5e9caf*/
    if ( dword_A8DA84 ) /*0x5e9cb6*/
// 0x696fc0
      return SessionClass::SetPlayerColor((int *)*dword_A8DA78, ComboBoxSelectedRaw); /*0x5e9cc0*/
  }
  else
  {
    *(unsigned int *)&stru_A8B250.__pad_0[4 * result + 108] = ComboBoxSelectedRaw; /*0x5e9cc9*/
  }
  return result; /*0x5e9cc5*/
}
}
// 0x5E9CE0
namespace gamemd {
void Player_AssignSide(HWND hDlg, int nIDDlgItem)
{
  int v4; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  char *v8; // eax

  v4 = SetComboBoxSelection(hDlg, (int)nIDDlgItem, -1); /*0x5e9cf0*/
  result = Dialog::SideIDToIndex(nIDDlgItem); /*0x5e9cf2*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9cfd*/
  {
    FillComboBoxSides(hDlg, (int)nIDDlgItem); /*0x5e9d07*/
    if ( v4 != -2 ) /*0x5e9d0f*/
    {
      v6 = (wchar_t **)dword_A8DA90; /*0x5e9d11*/
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
// 0x696f50
            && SessionClass::GetOption((int *)v7) == v4 )
{

  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(unsigned int *)((char *)this + 95) != -2 || *(unsigned int *)((char *)this + 91) != -1 ) /*0x696f60*/
    return *(unsigned int *)((char *)this + 91); /*0x696f62*/
  return result; /*0x696f65*/

}
        }
        if ( (int)++v6 >= (int)&dword_A8DAB0 ) /*0x5e9d66*/
        {
          v8 = &stru_A8B250.__pad_0[140]; /*0x5e9d68*/
          while ( *(unsigned int *)v8 != v4 ) /*0x5e9d6f*/
          {
            v8 += 4; /*0x5e9d71*/
            if ( (int)v8 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5e9d79*/
              goto LABEL_19; /*0x5e9d79*/
          }
          break; /*0x5e9d6f*/
        }
      }
      v4 = -2; /*0x5e9d7d*/
    }
  LABEL_19:
    result = dword_A8DA84; /*0x5e9d82*/
    if ( dword_A8DA84 ) /*0x5e9d89*/
// 0x696ff0
      return SessionClass::SetOption((int *)*dword_A8DA78, v4); /*0x5e9d93*/
  }
  else
  {
    *(unsigned int *)&stru_A8B250.__pad_0[4 * result + 140] = v4; /*0x5e9d9c*/
  }
  return result; /*0x5e9d98*/
}
}
// 0x5E9DB0
namespace gamemd {
void ProcessNetworkLobbyOption(SessionClass * hDlg, void * nIDDlgItem)
{
  int ComboBoxSelectedRaw2; // ebx
  int result; // eax

  ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2(hDlg, (int)nIDDlgItem, -1); /*0x5e9dc0*/
  result = Dialog::OptionIDToIndex(nIDDlgItem); /*0x5e9dc2*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9dcd*/
  {
    SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItem, ComboBoxSelectedRaw2); /*0x5e9dd4*/
    result = dword_A8DA84; /*0x5e9dd9*/
    if ( dword_A8DA84 ) /*0x5e9de0*/
// 0x697020
      return SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5e9dea*/
  }
  else
  {
    *(unsigned int *)&stru_A8B250.__pad_0[4 * result + 172] = ComboBoxSelectedRaw2; /*0x5e9df3*/
  }
  return result; /*0x5e9def*/
}
}
// 0x5E9E70
namespace gamemd {
void SetupSkirmishPlayerSlots(SkirmishDialog * hDlg, int a2, HWND hWnd)
{
  int ResourceID2CSF; // edi
  int ResourceIDCSF; // ebx
  LPARAM v7; // eax
  HWND DlgItem; // eax
  HWND v9; // ebx
  HWND v10; // esi
  int result; // eax
  HWND v12; // eax
  HWND v13; // ebp
  int PlayerCountMap; // esi
  int v15; // eax
  int nIDDlgItem; // [esp+10h] [ebp-10h]
  HWND nIDDlgItema; // [esp+10h] [ebp-10h]
  int ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v20; // [esp+1Ch] [ebp-4h]
  HWND hWnda; // [esp+24h] [ebp+4h]

  ResourceID2CSF = GetResourceID2CSF((ObjectClass *)a2); /*0x5e9e88*/
  ResourceIDCSF = GetResourceIDCSF((ObjectClass *)a2); /*0x5e9e91*/
  nIDDlgItem = GetResourceID3CSF((ObjectClass *)a2); /*0x5e9e9a*/
  ResourceID4CSF = GetResourceID4CSF((ObjectClass *)a2); /*0x5e9ea3*/
  if ( (int)g_MPCooperativeState >= 0 /*0x5e9ed5*/
    && a2 == g_MPCooperativeState
    && ((v7 = dword_A8DA90[(unsigned int)a2], v7 == g_Lobby_MaxPlayers) || !a2 || *(unsigned int *)(v7 + 107) == -1) )
  {
    SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -3); /*0x5e9ee1*/
    SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x5e9eec*/
    SetupLobbyFactionSlots(hDlg, nIDDlgItem, -2); /*0x5e9ef9*/
    SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x5e9f06*/
    DlgItem = GetDlgItem(hDlg, ResourceID2CSF); /*0x5e9f13*/
    EnableWindow(DlgItem, 0); /*0x5e9f1e*/
    v9 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5e9f24*/
    EnableWindow(v9, 0); /*0x5e9f29*/
    ShowWindow(v9, 0); /*0x5e9f34*/
    hWnda = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9f41*/
    EnableWindow(hWnda, 0); /*0x5e9f45*/
    ShowWindow(hWnda, 0); /*0x5e9f4e*/
    v10 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5e9f58*/
    EnableWindow(v10, 0); /*0x5e9f5d*/
    return ShowWindow(v10, 0); /*0x5e9f62*/
  }
  else
  {
    if ( !(unsigned char)hWnd ) /*0x5e9f74*/
    {
      SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -2); /*0x5e9f7c*/
      SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x5e9f87*/
      SetupLobbyFactionSlots(hDlg, nIDDlgItem, -2); /*0x5e9f94*/
      SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x5e9fa1*/
    }
    v12 = GetDlgItem(hDlg, ResourceID2CSF); /*0x5e9fae*/
    EnableWindow(v12, (uint8_t)hWnd); /*0x5e9fbc*/
    v20 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5e9fce*/
    EnableWindow(v20, (uint8_t)hWnd); /*0x5e9fd2*/
    nIDDlgItema = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9fde*/
    EnableWindow(nIDDlgItema, (uint8_t)hWnd); /*0x5e9fe2*/
    v13 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5e9fec*/
    if ( (unsigned char)hWnd && dword_A8B23C && !IDA_LOBYTE(dword_A8B23C->ambientSoundController[0]) ) /*0x5e9fff*/
      EnableWindow(v13, 0); /*0x5ea008*/
    else
      EnableWindow(v13, (uint8_t)hWnd); /*0x5ea00c*/
    if ( *(unsigned int *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5ea01c*/
    {
      PlayerCountMap = 8; /*0x5ea01e*/
    }
    else
    {
      PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ea030*/
      if ( dword_A8B23C ) /*0x5ea034*/
      {
        v15 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5ea038*/
        if ( v15 != -1 && v15 < PlayerCountMap ) /*0x5ea045*/
          PlayerCountMap = v15; /*0x5ea047*/
      }
      if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ea04f*/
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
    if ( !g_MPCooperativeState && PlayerCountMap < 7 ) /*0x5ea07a*/
      ++PlayerCountMap; /*0x5ea07c*/
    result = (int)a2; /*0x5ea07d*/
    if ( (int)a2 < PlayerCountMap || a2 == g_MPCooperativeState ) /*0x5ea087*/
    {
      ShowWindow(v20, 5); /*0x5ea096*/
      ShowWindow(nIDDlgItema, 5); /*0x5ea09f*/
      if ( *(unsigned int *)&dword_A8B238 != 4 ) /*0x5ea0a7*/
        return ShowWindow(v13, 5); /*0x5ea0a7*/
      IDA_LOBYTE(result) = Network::IsLobbyFeature(); /*0x5ea0a9*/
      if ( !(unsigned char)result ) /*0x5ea0b0*/
        return ShowWindow(v13, 5); /*0x5ea0b5*/
    }
  }
  return result; /*0x5e9f64*/
}
}
// 0x5EA0D0
namespace gamemd {
char sub_5EA0D0(HWND hDlg, void * a2)
{
  int i; // esi
  int v4; // eax
  HWND DlgItem; // eax

  for ( i = 0; i < 8; ++i )
  {
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
}
// 0x5EA3E0
namespace gamemd {
void RefreshLobbyAll(HWND hDlg, char a2)
{
  HWND v2; // edi
  int v3; // esi
  int ResourceID_Hardcoded; // eax
  HWND DlgItem; // edi
  void *v6; // eax
  HWND Default; // eax
  int i; // esi
  int ResourceID2; // edi
  int v10; // eax
  void *v11; // eax
  void *v12; // ebp
  int ResourceID; // esi
  int v14; // eax
  HWND v15; // edi
  int j; // esi
  int v17; // ebx
  int v18; // eax
  int k; // esi
  int ResourceID3; // ebx
  int v21; // eax
  int m; // esi
  int ResourceID4; // ebx
  int v24; // eax
  int v25; // ebp
  const wchar_t **v26; // ebx
  int v27; // eax
  HWND v28; // eax
  const wchar_t *v29; // esi
  HWND v30; // edi
  wchar_t *v31; // ecx
  int v32; // eax
  HWND *result; // eax
  int v34; // ebp
  const wchar_t **v35; // ebx
  int v36; // eax
  HWND v37; // eax
  const wchar_t *v38; // esi
  HWND v39; // edi
  wchar_t *v40; // ecx
  int v41; // eax
  int n; // esi
  int v43; // eax
  HWND v44; // edi
  void *v45; // eax
  HWND v46; // eax
  int v47; // ebx
  int v48; // eax
  int ii; // esi
  int v50; // edi
  int v51; // eax
  char Buffer[4]; // [esp+14h] [ebp-4h] BYREF

  v2 = hDlg; /*0x5ea3e7*/
  if ( a2 ) /*0x5ea3ef*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea3f5*/
    v3 = 0; /*0x5ea3fa*/
    while ( 1 ) /*0x5ea404*/
    {
      ResourceID_Hardcoded = GetResourceIDHardcodedCSF((void *)v3); /*0x5ea404*/
      DlgItem = GetDlgItem(v2, ResourceID_Hardcoded); /*0x5ea413*/
      v6 = (void *)GetPlayerSide(v3); /*0x5ea415*/
      Default = (HWND)BuildingType::FindDefault(v6); /*0x5ea41c*/
      CacheDialogInvalidate(DlgItem, Default); /*0x5ea425*/
      if ( ++v3 >= 8 ) /*0x5ea42e*/
        break; /*0x5ea42e*/
      v2 = hDlg; /*0x5ea3fe*/
    }
    for ( i = 0; i < 8; ++i ) /*0x5ea430*/
    {
      ResourceID2 = GetResourceID2CSF((void *)i); /*0x5ea43b*/
      v10 = GetPlayerSide(i); /*0x5ea43d*/
      SetupLobbyCountryCombo(hDlg, ResourceID2, v10); /*0x5ea449*/
    }
    v11 = (void *)RefreshLobbyAll_Helper(); /*0x5ea454*/
    v12 = v11; /*0x5ea459*/
    if ( v11 == (void *)-1 ) /*0x5ea45e*/
    {
      v15 = hDlg; /*0x5ea480*/
    }
    else
    {
      ResourceID = GetResourceIDCSF(v11); /*0x5ea469*/
      v14 = RefreshLobbyAll_Play(v12); /*0x5ea46b*/
      v15 = hDlg; /*0x5ea470*/
      SetupSkirmishSpawnLocations(hDlg, ResourceID, v14); /*0x5ea479*/
    }
    for ( j = 0; j < 8; ++j ) /*0x5ea484*/
    {
      if ( (void *)j != v12 ) /*0x5ea488*/
      {
        v17 = GetResourceIDCSF((void *)j); /*0x5ea493*/
        v18 = RefreshLobbyAll_Play(j); /*0x5ea495*/
        SetupSkirmishSpawnLocations(v15, v17, v18); /*0x5ea49f*/
      }
    }
    for ( k = 0; k < 8; ++k ) /*0x5ea4aa*/
    {
      ResourceID3 = GetResourceID3CSF((void *)k); /*0x5ea4b5*/
      v21 = RefreshLobbyAll_Get(k); /*0x5ea4b7*/
      SetupLobbyFactionSlots(v15, ResourceID3, v21); /*0x5ea4c1*/
    }
    for ( m = 0; m < 8; ++m ) /*0x5ea4cc*/
    {
      ResourceID4 = GetResourceID4CSF((void *)m); /*0x5ea4d7*/
      v24 = RefreshLobbyAll_Get_5EAA70(m); /*0x5ea4d9*/
      SetupLobbyPlayerSlots(v15, ResourceID4, v24); /*0x5ea4e3*/
    }
    v25 = 0; /*0x5ea4ee*/
    v26 = (const wchar_t **)&dword_A8DA90; /*0x5ea4f0*/
    while ( 1 ) /*0x5ea4f7*/
    {
      v27 = RefreshLobbyAll_Helper_5EAAD0(v25); /*0x5ea4f7*/
      v28 = GetDlgItem(hDlg, v27); /*0x5ea502*/
      v29 = *v26; /*0x5ea508*/
      v30 = 0; /*0x5ea50a*/
      v31 = (wchar_t *)*v26; /*0x5ea50c*/
      *(unsigned int *)Buffer = v28; /*0x5ea50e*/
      if ( IsKnownPointer(v31) ) /*0x5ea512*/
      {
        if ( !wcscmp(v29, &word_A8D610) ) /*0x5ea521*/
          break; /*0x5ea521*/
      }
      if ( RefreshLobbyAll_Helper_5EA8E0(v25) == 1 ) /*0x5ea541*/
      {
        v32 = HashTable::Find(g_DialogHashTable, off_8316D0, 0); /*0x5ea551*/
        goto LABEL_24; /*0x5ea551*/
      }
  LABEL_25:
      result = CacheDialogInvalidate(*(HWND *)Buffer, v30); /*0x5ea558*/
      ++v26; /*0x5ea563*/
      ++v25; /*0x5ea566*/
      if ( (int)v26 >= (int)&dword_A8DAB0 ) /*0x5ea56d*/
      {
        if ( dword_A8B238 == 4 ) /*0x5ea576*/
          result = (HWND *)RefreshLobbyAll_Set(); /*0x5ea578*/
        if ( dword_A8B23C ) /*0x5ea585*/
          return (HWND *)(*(int (**)(int, HWND))(*(unsigned int *)dword_A8B23C + 120))(dword_A8B23C, hDlg); /*0x5ea592*/
        return result; /*0x5ea59c*/
      }
    }
    v32 = HashTable::Find(g_DialogHashTable, off_8316CC[0], 0); /*0x5ea535*/
  LABEL_24:
    v30 = (HWND)v32; /*0x5ea556*/
    goto LABEL_25; /*0x5ea556*/
  }
  if ( dword_A8B23C ) /*0x5ea5a5*/
    (*(void (**)(int, HWND))(*(unsigned int *)dword_A8B23C + 120))(dword_A8B23C, hDlg); /*0x5ea5aa*/
  v34 = 0; /*0x5ea5ad*/
  v35 = (const wchar_t **)&dword_A8DA90; /*0x5ea5af*/
  while ( 1 ) /*0x5ea5da*/
  {
    v36 = RefreshLobbyAll_Helper_5EAAD0(v34); /*0x5ea5bc*/
    v37 = GetDlgItem(v2, v36); /*0x5ea5c3*/
    v38 = *v35; /*0x5ea5c9*/
    v39 = 0; /*0x5ea5cb*/
    v40 = (wchar_t *)*v35; /*0x5ea5cd*/
    *(unsigned int *)Buffer = v37; /*0x5ea5cf*/
    if ( IsKnownPointer(v40) && !wcscmp(v38, &word_A8D610) ) /*0x5ea5e2*/
    {
      v41 = HashTable::Find(g_DialogHashTable, off_8316CC[0], 0); /*0x5ea5f6*/
    }
    else
    {
      if ( RefreshLobbyAll_Helper_5EA8E0(v34) != 1 ) /*0x5ea602*/
        goto LABEL_40; /*0x5ea602*/
      v41 = HashTable::Find(g_DialogHashTable, off_8316D0, 0); /*0x5ea612*/
    }
    v39 = (HWND)v41; /*0x5ea617*/
  LABEL_40:
    CacheDialogInvalidate(*(HWND *)Buffer, v39); /*0x5ea61f*/
    ++v35; /*0x5ea624*/
    ++v34; /*0x5ea627*/
    if ( (int)v35 >= (int)&dword_A8DAB0 ) /*0x5ea62e*/
      break; /*0x5ea62e*/
    v2 = hDlg; /*0x5ea5b6*/
  }
  wcscpy(&word_AC0D44, &word_AC0B94); /*0x5ea63a*/
  Player::BuildListString(&word_AC0B94); /*0x5ea647*/
  if ( wcscmp(&word_AC0D44, &word_AC0B94) ) /*0x5ea656*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea668*/
    if ( dword_A8B238 == 4 ) /*0x5ea674*/
      RefreshLobbyAll_Set(); /*0x5ea676*/
  }
  for ( n = 0; n < 8; ++n ) /*0x5ea67b*/
  {
    v43 = GetResourceIDHardcodedCSF((void *)n); /*0x5ea67f*/
    v44 = GetDlgItem(hDlg, v43); /*0x5ea68e*/
    v45 = (void *)GetPlayerSide(n); /*0x5ea690*/
    v46 = (HWND)BuildingType::FindDefault(v45); /*0x5ea697*/
    CacheDialogInvalidate(v44, v46); /*0x5ea6a0*/
  }
  strcpy(&byte_AC0EA4, &byte_AC0B10); /*0x5ea6c7*/
  v47 = 0; /*0x5ea6ce*/
  byte_AC0B10 = 0; /*0x5ea6d2*/
  do /*0x5ea723*/
  {
    v48 = GetPlayerSide(v47); /*0x5ea6db*/
    sprintf(Buffer, "%d,", v48); /*0x5ea6eb*/
    strcat(&byte_AC0B10, Buffer); /*0x5ea716*/
    ++v47; /*0x5ea71d*/
  }
  while ( v47 < 8 ); /*0x5ea723*/
  if ( strcmp(&byte_AC0EA4, &byte_AC0B10) ) /*0x5ea737*/
  {
    for ( ii = 0; ii < 8; ++ii ) /*0x5ea760*/
    {
      v50 = GetResourceID2CSF((void *)ii); /*0x5ea76b*/
      v51 = GetPlayerSide(ii); /*0x5ea76d*/
      SetupLobbyCountryCombo(hDlg, v50, v51); /*0x5ea777*/
    }
  }
  strcpy(&byte_AC0AC8, &byte_AC0AEC); /*0x5ea79e*/
  RefreshLobbyAll_Play_5EAB30(&byte_AC0AEC); /*0x5ea7ac*/
  if ( strcmp(&byte_AC0AC8, &byte_AC0AEC) ) /*0x5ea7c3*/
    RefreshLobbyAll_Play_5EAEE0(hDlg); /*0x5ea7ee*/
  strcpy(byte_AC0A9C, byte_AC0B6C); /*0x5ea80f*/
  RefreshLobbyAll_Get_5EAC00(byte_AC0B6C); /*0x5ea81d*/
  if ( strcmp(byte_AC0A9C, byte_AC0B6C) ) /*0x5ea834*/
    RefreshLobbyAll_Get_5EADA0(hDlg); /*0x5ea85f*/
  strcpy(byte_AC0278, byte_AC0B48); /*0x5ea880*/
  RefreshLobbyAll_Get_5EACD0(byte_AC0B48); /*0x5ea88e*/
  result = (HWND *)strcmp(byte_AC0278, byte_AC0B48); /*0x5ea8a5*/
  if ( result ) /*0x5ea8cc*/
    return (HWND *)RefreshLobbyAll_Setup(hDlg); /*0x5ea8d0*/
  return result; /*0x5ea595*/
}
}
// 0x5EA920
namespace gamemd {
int sub_5EA920(int a1)
{
  int result; // eax
  wchar_t *v3; // esi

  result = -2; /*0x5ea924*/
  v3 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5ea92f*/
  if ( dword_A8B23C && (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) ) /*0x5ea948*/
    result = (*(int (**)(void))(*(unsigned int *)dword_A8B23C + 40))(); /*0x5ea94c*/
  if ( v3 /*0x5ea969*/
    && (v3 == (wchar_t *)g_Lobby_PlayerTeam
     || v3 == (wchar_t *)g_Lobby_PlayerSide
     || v3 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return g_abs_A8B29C[a1]; /*0x5ea96b*/
  }
  if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags && v3 != (wchar_t *)g_Lobby_PlayerCount && v3 != g_Lobby_PlayerReady ) /*0x5ea98b*/
  {
    if ( v3 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ea993*/
      return -3; /*0x5ea996*/
    else
// 0x696f10
      return SessionClass::GetPlayerSide((int)v3); /*0x5ea99f*/
  }
  return result; /*0x5ea972*/
}
}
// 0x5EB7B0
namespace gamemd {
void UpdateMultiplayerLobbySlots(HWND hDlg, char * a2, int nIDDlgItem)
{
  int result; // eax
  ObjectClass *v5; // esi
  int ResourceIDHardcodedCSF; // ebx
  LPARAM v7; // eax
  int v8; // [esp+8h] [ebp-28h]
  HWND v9; // [esp+8h] [ebp-28h]
  int v10; // [esp+Ch] [ebp-24h]
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
  result = (int)a2 + nIDDlgItem; /*0x5eb7c1*/
  v10 = (int)a2 + nIDDlgItem; /*0x5eb7c6*/
  if ( (int)a2 + nIDDlgItem > 8 ) /*0x5eb7ca*/
  {
    v10 = 8; /*0x5eb7cc*/
    result = 8; /*0x5eb7d4*/
  }
  v5 = a2; /*0x5eb7da*/
  if ( (int)a2 < result ) /*0x5eb7dc*/
  {
    do /*0x5eb9f0*/
    {
      if ( v5 ) /*0x5eb7ec*/
      {
        if ( v5 == (ObjectClass *)1 ) /*0x5eb806*/
        {
          nIDDlgItema = 1747; /*0x5eb808*/
          v8 = 1042; /*0x5eb810*/
        }
        else if ( v5 == (ObjectClass *)2 ) /*0x5eb820*/
        {
          nIDDlgItema = 1748; /*0x5eb822*/
          v8 = 1043; /*0x5eb82a*/
        }
        else if ( v5 == (ObjectClass *)3 ) /*0x5eb837*/
        {
          nIDDlgItema = 1749; /*0x5eb839*/
          v8 = 1044; /*0x5eb841*/
        }
        else if ( v5 == (ObjectClass *)4 ) /*0x5eb84e*/
        {
          nIDDlgItema = 1750; /*0x5eb850*/
          v8 = 1045; /*0x5eb858*/
        }
        else if ( v5 == (ObjectClass *)5 ) /*0x5eb865*/
        {
          nIDDlgItema = 1751; /*0x5eb867*/
          v8 = 1046; /*0x5eb86f*/
        }
        else if ( v5 == (ObjectClass *)6 ) /*0x5eb87c*/
        {
          nIDDlgItema = 1752; /*0x5eb87e*/
          v8 = 1047; /*0x5eb886*/
        }
        else if ( v5 == (ObjectClass *)7 ) /*0x5eb893*/
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
      v7 = dword_A8DA90[(unsigned int)v5]; /*0x5eb93d*/
      nIDDlgItemb = v7 == g_Lobby_MaxPlayers /*0x5eb971*/
                 || v7
                 && v7 != g_HouseClass_ObserverFlags
                 && v7 != g_Lobby_PlayerCount
                 && (wchar_t *)v7 != g_Lobby_PlayerReady
                 && *(unsigned int *)(v7 + 107) == -1;
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
        if ( *(unsigned int *)&dword_A8B238 != 4 || !Network::IsLobbyFeature() ) /*0x5eb9d0*/
          ShowWindow(v14, 5); /*0x5eb9e0*/
      }
      result = ShowWindow(v20, 5); /*0x5eb9e9*/
      v5 = (ObjectClass *)((char *)v5 + 1); /*0x5eb9eb*/
    }
    while ( (int)v5 < v10 ); /*0x5eb9f0*/
  }
  return result; /*0x5eb9f8*/
}
}
// 0x5EBC00
namespace gamemd {
void DisableCampaignSlots(HWND hDlg, int a2)
{
  int i; // ebp
  int result; // eax
  int nIDDlgItem; // [esp+8h] [ebp-1Ch]
  HWND nIDDlgItema; // [esp+8h] [ebp-1Ch]
  int hWnd; // [esp+Ch] [ebp-18h]
  HWND hWnda; // [esp+Ch] [ebp-18h]
  HWND ResourceIDHardcodedCSF; // [esp+10h] [ebp-14h]
  HWND DlgItem; // [esp+10h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
  HWND v12; // [esp+14h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+18h] [ebp-Ch]
  HWND v14; // [esp+18h] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+1Ch] [ebp-8h]
  HWND v16; // [esp+1Ch] [ebp-8h]
  HWND ResourceID4CSF; // [esp+20h] [ebp-4h]
  HWND v18; // [esp+20h] [ebp-4h]

  for ( i = a2; i < 8; ++i ) /*0x5ebc0c*/
  {
    if ( (ObjectClass *)i != g_MPCooperativeState ) /*0x5ebc26*/
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
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF((ObjectClass *)i); /*0x5ebcfd*/
      ResourceID2CSF = (HWND)GetResourceID2CSF((ObjectClass *)i); /*0x5ebd08*/
      ResourceIDCSF = (HWND)GetResourceIDCSF((ObjectClass *)i); /*0x5ebd13*/
      ResourceID3CSF = (HWND)GetResourceID3CSF((ObjectClass *)i); /*0x5ebd1e*/
      ResourceID4CSF = (HWND)GetResourceID4CSF((ObjectClass *)i); /*0x5ebd27*/
      nIDDlgItema = GetDlgItem(hDlg, nIDDlgItem); /*0x5ebd37*/
      hWnda = GetDlgItem(hDlg, hWnd); /*0x5ebd43*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x5ebd4b*/
      v12 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ebd5b*/
      v14 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ebd67*/
      v16 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5ebd6f*/
      v18 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x5ebd82*/
      ShowWindow(nIDDlgItema, 0); /*0x5ebd86*/
      ShowWindow(hWnda, 0); /*0x5ebd8f*/
      ShowWindow(DlgItem, 0); /*0x5ebd98*/
      ShowWindow(v12, 0); /*0x5ebda1*/
      ShowWindow(v14, 0); /*0x5ebdaa*/
      ShowWindow(v16, 0); /*0x5ebdb3*/
      result = ShowWindow(v18, 0); /*0x5ebdbc*/
    }
  }
  return result; /*0x5ebdca*/
}
}
// 0x5EC290
namespace gamemd {
char sub_5EC290(SkirmishDialog * hDlg, int a2)
{
  int v4; // ebp
  int i; // esi
  int v6; // edx

  if ( dword_A8B238[0] == 4 ) /*0x5ec2a0*/
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
      if ( (void *)i != g_MPCooperativeState ) /*0x5ec353*/
        PlayerSkirmishSlotHandler(hDlg, v6, g_Lobby_PlayerCount, 1); /*0x5ec360*/
    }
    else if ( (void *)i != g_MPCooperativeState ) /*0x5ec345*/
    {
      PlayerSkirmishSlotHandler(hDlg, v6, g_HouseClass_ObserverFlags, 1); /*0x5ec34f*/
    }
  }
  DisableCampaignSlots(hDlg, a2); /*0x5ec373*/
  if ( ppv ) /*0x5ec383*/
    DisplayRankingsThunkWOL(); /*0x5ec385*/
  else
    RetVtableStubZero_eax_27(); /*0x5ec38c*/
  return CheckGameSettingsChanged(1, 0);
}
}
// 0x5EC3A0
namespace gamemd {
void SetupMultiplayerLobbyScreen(SkirmishDialog * hDlg, wchar_t * a2, int a3)
{
  int PlayerCountMap; // esi
  int v6; // eax
  char v7; // bl
  int v8; // eax
  int v9; // edi
  int vtable1; // esi
  int v11; // eax
  int ResourceID2CSF; // esi
  HWND DlgItem; // eax
  int ResourceIDCSF; // esi
  int v15; // ebx
  int v16; // edi
  ObjectClass *v17; // esi
  int v18; // edx
  wchar_t *v19; // esi
  wchar_t **v20; // eax
  wchar_t *v21; // eax
  char **v22; // eax
  int v23; // [esp+Ch] [ebp-114h]
  ObjectClass v24; // [esp+10h] [ebp-110h] BYREF

  v24.AbstractClass = a2; /*0x5ec3b7*/
  if ( a3 == -1 ) /*0x5ec3bb*/
  {
    PlayerCountMap = 8; /*0x5ec3bd*/
  }
  else
  {
    PlayerCountMap = ReadPlayerCountMap(a3); /*0x5ec3cf*/
    if ( dword_A8B23C ) /*0x5ec3d3*/
    {
      v6 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5ec3d7*/
      if ( v6 != -1 && v6 < PlayerCountMap ) /*0x5ec3e4*/
        PlayerCountMap = v6; /*0x5ec3e6*/
    }
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ec3ef*/
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
  v23 = PlayerCountMap; /*0x5ec413*/
  if ( dword_A8B23C /*0x5ec425*/
    && !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C)
    || Network::IsMultiplayerActive() )
  {
    v7 = 0; /*0x5ec437*/
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ec43c*/
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
      v23 = v8; /*0x5ec467*/
  }
  else
  {
    v7 = 1; /*0x5ec42e*/
  }
  if ( a2 == (void *)-1 ) /*0x5ec46e*/
  {
    dword_831700 = 8; /*0x5ec470*/
    dword_AC11CC = 0; /*0x5ec47a*/
  }
  v9 = v23 - dword_831700; /*0x5ec493*/
  vtable1 = 0; /*0x5ec495*/
  v24.? = 0; /*0x5ec499*/
  if ( !g_MPCooperativeState ) /*0x5ec49d*/
  {
    if ( v7 ) /*0x5ec4a1*/
    {
  LABEL_40:
      vtable1 = 1; /*0x5ec4f1*/
      v24.? = (void *)1; /*0x5ec4fd*/
      if ( !dword_AC11CC && v9 + v23 < 7 ) /*0x5ec50d*/
        ++v9; /*0x5ec50f*/
      goto LABEL_43; /*0x5ec50f*/
    }
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ec4af*/
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
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ec4dc*/
    {
      if ( v11 >= 6 ) /*0x5ec4e1*/
      {
  LABEL_39:
        if ( v23 >= v11 ) /*0x5ec4ef*/
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
  if ( v24.AbstractClass == (void *)-1 && !g_MPCooperativeState ) /*0x5ec51e*/
  {
    ResourceID2CSF = GetResourceID2CSF(0); /*0x5ec527*/
    SetupComboBoxObserver((HWND)hDlg, ResourceID2CSF); /*0x5ec52d*/
    SetupLobbyCountryCombo((HWND)hDlg, ResourceID2CSF, -3); /*0x5ec538*/
    DlgItem = GetDlgItem((HWND)hDlg, 1041); /*0x5ec54c*/
    SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5ec553*/
    ResourceIDCSF = GetResourceIDCSF(0); /*0x5ec560*/
    FillListBox((HWND)hDlg, ResourceIDCSF); /*0x5ec566*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, 8); /*0x5ec571*/
    vtable1 = (int)v24.?; /*0x5ec576*/
  }
  if ( v9 <= 0 )
  {
    if ( v9 >= 0 )
    {
      if ( vtable1 + v23 >= 7 ) /*0x5ec6b9*/
        SetupMultiplayerLobbyScreen_Setup((HWND)hDlg, 7, 1); /*0x5ec6c4*/
    }
    else
    {
      v15 = vtable1 + v23; /*0x5ec5a3*/
      if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ec5a6*/
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
      v17 = (ObjectClass *)(vtable1 + v23); /*0x5ec5d0*/
      if ( v15 < 8 )
      {
        do
        {
          if ( v17 )
          {
            if ( v17 == (ObjectClass *)1 )
            {
              v18 = 1042; /*0x5ec5e8*/
            }
            else if ( v17 == (ObjectClass *)2 )
            {
              v18 = 1043; /*0x5ec5f4*/
            }
            else if ( v17 == (ObjectClass *)3 )
            {
              v18 = 1044; /*0x5ec600*/
            }
            else if ( v17 == (ObjectClass *)4 )
            {
              v18 = 1045; /*0x5ec60c*/
            }
            else if ( v17 == (ObjectClass *)5 )
            {
              v18 = 1046; /*0x5ec618*/
            }
            else if ( v17 == (ObjectClass *)6 )
            {
              v18 = 1047; /*0x5ec624*/
            }
            else
            {
              v18 = v17 != (ObjectClass *)7 ? -1 : 1048;
            }
          }
          else
          {
            v18 = 1041; /*0x5ec5dc*/
          }
          if ( (int)v17 >= v16 ) /*0x5ec647*/
          {
            if ( v17 != g_MPCooperativeState ) /*0x5ec659*/
              PlayerSkirmishSlotHandler((HWND)hDlg, v18, g_Lobby_PlayerCount, 1); /*0x5ec666*/
          }
          else if ( v17 != g_MPCooperativeState ) /*0x5ec64b*/
          {
            PlayerSkirmishSlotHandler((HWND)hDlg, v18, g_HouseClass_ObserverFlags, 1); /*0x5ec655*/
          }
          v17 = (ObjectClass *)((char *)v17 + 1); /*0x5ec66b*/
        }
        while ( (int)v17 < 8 );
      }
      DisableCampaignSlots((HWND)hDlg, v15); /*0x5ec679*/
      if ( ppv ) /*0x5ec685*/
        DisplayRankingsThunkWOL(); /*0x5ec687*/
      else
        RetVtableStubZero_eax_27(); /*0x5ec69b*/
      CheckGameSettingsChanged(1, 0); /*0x5ec690*/
      vtable1 = (int)v24.?; /*0x5ec695*/
    }
  }
  else
  {
    SetupMultiplayerLobbyScreen_Setup((HWND)hDlg, dword_831700 + dword_AC11CC, v9); /*0x5ec58c*/
  }
  MultiplayerLobby::FillSlots(hDlg); /*0x5ec6cb*/
  if ( g_MPCooperativeState == (ObjectClass *)-1 ) /*0x5ec6d9*/
  {
    if ( dword_A8B23C ) /*0x5ec6e7*/
    {
      if ( (*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) ) /*0x5ec6ef*/
      {
        g_MPCooperativeState = (ObjectClass *)7; /*0x5ec6ff*/
        MultiplayerLobby::FillSlots(hDlg); /*0x5ec709*/
        Debug::Log(); /*0x5ec713*/
        v19 = (wchar_t *)dword_A8DA90[(unsigned int)g_MPCooperativeState]; /*0x5ec724*/
        unknown_libname_74(&v24.?); /*0x5ec72b*/
        if ( !v19 /*0x5ec76a*/
          || v19 == (wchar_t *)g_HouseClass_ObserverFlags
          || v19 == (wchar_t *)g_Lobby_PlayerCount
          || v19 == g_Lobby_PlayerReady
          || v19 == (wchar_t *)g_Lobby_MaxPlayers
          || v19 == (wchar_t *)g_Lobby_PlayerTeam
          || v19 == (wchar_t *)g_Lobby_PlayerSide
          || v19 == (wchar_t *)g_Lobby_PlayerColor )
        {
          GetPlayerTypeString((char **)&v24, v19); /*0x5ec77e*/
          v20 = CharStringToWide((wchar_t **)&v24.?, (const char **)&v24); /*0x5ec78b*/
          WideString::Reassign_Alt(&v24.?, (const wchar_t **)v20); /*0x5ec795*/
          DeleteAndZero::Alt((DeleteAndZero *)&v24.?); /*0x5ec79e*/
          DeleteAndZero(&v24); /*0x5ec7a7*/
        }
        else
        {
          WideString::Assign_Alt(&v24.?, v19); /*0x5ec771*/
        }
        v21 = WideString::GetOrEmpty((wchar_t **)&v24.?); /*0x5ec7b0*/
        WideString::Assign((wchar_t **)&v24, v21); /*0x5ec7ba*/
        v22 = ToWideStringCharAlt((char **)&v24.?, (const wchar_t **)&v24); /*0x5ec7c7*/
        sprintf((char *const)&v24.?, "O%d%s", g_MPCooperativeState, *v22); /*0x5ec7e0*/
        DeleteAndZero((ObjectClass *)&v24.?); /*0x5ec7ec*/
        DeleteAndZero::Alt((DeleteAndZero *)&v24); /*0x5ec7f5*/
        Network::SendOptionsGame((char *)&v24.?); /*0x5ec7fe*/
        DeleteAndZero::Alt((DeleteAndZero *)&v24.?); /*0x5ec807*/
        dword_831700 = v23; /*0x5ec816*/
        dword_AC11CC = (int)v24.?; /*0x5ec81c*/
      }
      else
      {
        dword_AC11CC = vtable1; /*0x5ec867*/
        dword_831700 = v23; /*0x5ec86f*/
      }
    }
    else
    {
      dword_AC11CC = vtable1; /*0x5ec84b*/
      dword_831700 = v23; /*0x5ec853*/
    }
  }
  else
  {
    dword_AC11CC = vtable1; /*0x5ec830*/
    dword_831700 = v23; /*0x5ec838*/
  }
}
}
// 0x5EC9F0
namespace gamemd {
AbstractClass * * PlayerSkirmishSlotHandler()
{
  int v7; // edi
  int v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  bool v11; // zf
  WPARAM v12; // ebx
  char v13; // cl
  int v14; // esi
  int v15; // eax
  int v16; // esi
  WPARAM v17; // ebx
  wchar_t *v18; // eax
  char result; // al
  LPARAM v20; // ecx
  LPARAM v21; // esi
  char v22; // cl
  bool v23; // al
  int ResourceID2; // eax
  int v25; // eax
  HWND v26; // eax
  int ResourceID; // esi
  int ResourceID3; // eax
  int ResourceID4; // eax
  int v30; // eax
  int v31; // eax
  HWND v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  bool v37; // cl
  LPARAM v38; // edx
  LPARAM *v39; // ecx
  LPARAM v40; // eax
  bool v41; // [esp+11h] [ebp-17h]
  wchar_t *String; // [esp+14h] [ebp-14h]
  LRESULT v46; // [esp+1Ch] [ebp-Ch]
  LRESULT v47; // [esp+1Ch] [ebp-Ch]
  HWND hWnd; // [esp+20h] [ebp-8h]
  HWND hWnda; // [esp+20h] [ebp-8h]
  HWND DlgItem; // [esp+24h] [ebp-4h]
  LPARAM v51; // [esp+2Ch] [ebp+4h]
  int v52; // [esp+2Ch] [ebp+4h]
  bool v53; // [esp+2Ch] [ebp+4h]

  switch ( a2 )
  {
    case 1041:
      v7 = 0; /*0x5eca0b*/
      break;
    case 1042:
      v7 = 1; /*0x5eca17*/
      break;
    case 1043:
      v7 = 2; /*0x5eca26*/
      break;
    case 1044:
      v7 = 3; /*0x5eca35*/
      break;
    case 1045:
      v7 = 4; /*0x5eca44*/
      break;
    case 1046:
      v7 = 5; /*0x5eca53*/
      break;
    case 1047:
      v7 = 6; /*0x5eca62*/
      break;
    default:
      v7 = a2 != 1048 ? -1 : 7;
      break;
  }
  String = (wchar_t *)*(&dword_A8DA90 + v7); /*0x5eca84*/
  if ( a3
    && (a3 == g_Lobby_PlayerTeam || a3 == g_Lobby_PlayerSide || a3 == g_Lobby_PlayerColor)
    && v7 != g_MPCooperativeState )
  {
    if ( g_MenuStateFlags /*0x5ecadc*/
      || g_MPCooperativeState > 0
      && ((v8 = *(&dword_A8DA90 + g_MPCooperativeState), *(unsigned int *)(v8 + 107) == -1) || v8 == g_Lobby_MaxPlayers) )
    {
      v9 = GetStringCSF(aTxtNoAiWithObs, 0, g_Str_File_netshare_cpp, 6150); /*0x5ecaf3*/
      Dialog::ShowMessage(-1, (size_t)v9); /*0x5ecafb*/
      v10 = String; /*0x5ecb00*/
      v11 = String == 0; /*0x5ecb07*/
      v51 = (LPARAM)String; /*0x5ecb09*/
      String = (wchar_t *)a3; /*0x5ecb0d*/
      if ( !v11 /*0x5ecb29*/
        && (v10 == (wchar_t *)g_Lobby_PlayerTeam
         || v10 == (wchar_t *)g_Lobby_PlayerSide
         || v10 == (wchar_t *)g_Lobby_PlayerColor) )
      {
        v51 = g_Lobby_PlayerCount; /*0x5ecb31*/
      }
      hWnd = GetDlgItem(a1, a2); /*0x5ecb40*/
      ShowWindow(hWnd, 0); /*0x5ecb44*/
      v12 = 0; /*0x5ecb5b*/
      v46 = SendDlgItemMessageA(a1, a2, 0x146u, 0, 0); /*0x5ecb5f*/
      if ( v46 > 0 ) /*0x5ecb63*/
      {
        while ( SendDlgItemMessageA(a1, a2, 0x150u, v12, 0) != v51 ) /*0x5ecb79*/
        {
          if ( (int)++v12 >= v46 ) /*0x5ecb82*/
            goto LABEL_33; /*0x5ecb82*/
        }
        SendDlgItemMessageA(a1, a2, 0x14Eu, v12, 0); /*0x5ecba0*/
      }
  LABEL_33:
      ShowWindow(hWnd, 5); /*0x5ecb84*/
    }
  }
  else if ( a3 == g_Lobby_MaxPlayers )
  {
    v13 = 0; /*0x5ecbc4*/
    v14 = 0; /*0x5ecbc6*/
    v52 = 0; /*0x5ecbc8*/
    do
    {
      if ( v14 != v7 )
      {
        v15 = *(&dword_A8DA90 + v14); /*0x5ecbd4*/
        if ( v15 )
        {
          if ( v15 == g_Lobby_PlayerTeam || v15 == g_Lobby_PlayerSide || v15 == g_Lobby_PlayerColor )
          {
            if ( v14 )
            {
              switch ( v14 )
              {
                case 1:
                  v16 = 1042; /*0x5ecc0f*/
                  break;
                case 2:
                  v16 = 1043; /*0x5ecc1b*/
                  break;
                case 3:
                  v16 = 1044; /*0x5ecc27*/
                  break;
                case 4:
                  v16 = 1045; /*0x5ecc33*/
                  break;
                case 5:
                  v16 = 1046; /*0x5ecc3f*/
                  break;
                case 6:
                  v16 = 1047; /*0x5ecc4b*/
                  break;
                default:
                  v16 = v14 != 7 ? -1 : 1048;
                  break;
              }
            }
            else
            {
              v16 = 1041; /*0x5ecc03*/
            }
            hWnda = (HWND)g_Lobby_PlayerCount; /*0x5ecc6c*/
            DlgItem = GetDlgItem(a1, v16); /*0x5ecc79*/
            ShowWindow(DlgItem, 0); /*0x5ecc7d*/
            v17 = 0; /*0x5ecc94*/
            v47 = SendDlgItemMessageA(a1, v16, 0x146u, 0, 0); /*0x5ecc98*/
            if ( v47 > 0 ) /*0x5ecc9c*/
            {
              while ( (HWND)SendDlgItemMessageA(a1, v16, 0x150u, v17, 0) != hWnda ) /*0x5eccb2*/
              {
                if ( (int)++v17 >= v47 ) /*0x5eccbb*/
                  goto LABEL_63; /*0x5eccbb*/
              }
              SendDlgItemMessageA(a1, v16, 0x14Eu, v17, 0); /*0x5eccc9*/
            }
  LABEL_63:
            ShowWindow(DlgItem, 5); /*0x5ecccf*/
            PlayerSkirmishSlotHandler(g_Lobby_PlayerCount, 0); /*0x5ecce9*/
            v13 = 1; /*0x5eccee*/
            v14 = v52; /*0x5eccf0*/
          }
        }
      }
      v52 = ++v14; /*0x5eccf8*/
    }
    while ( v14 < 8 );
    if ( v13 ) /*0x5ecd04*/
    {
      v18 = GetStringCSF(aTxtObserverBoo, 0, g_Str_File_netshare_cpp, 6179); /*0x5ecd17*/
      Dialog::ShowMessage(-1, (size_t)v18); /*0x5ecd1f*/
    }
  }
  result = a3; /*0x5ecd27*/
  if ( (wchar_t *)a3 != String )
  {
    *(&dword_A8DA90 + v7) = a3; /*0x5ecd3b*/
    if ( a4 == 1 || a4 == 2 ) /*0x5ecd4a*/
    {
      v20 = g_HouseClass_ObserverFlags; /*0x5ecd56*/
      if ( !a3 /*0x5ecd90*/
        || a3 == g_HouseClass_ObserverFlags
        || a3 == g_Lobby_PlayerCount
        || (wchar_t *)a3 == g_Lobby_PlayerReady
        || a3 == g_Lobby_MaxPlayers
        || a3 == g_Lobby_PlayerTeam
        || a3 == g_Lobby_PlayerSide
        || a3 == g_Lobby_PlayerColor )
      {
        if ( String ) /*0x5ecd98*/
        {
          if ( String != (wchar_t *)g_HouseClass_ObserverFlags /*0x5ecda4*/
            && String != (wchar_t *)g_Lobby_PlayerCount
            && String != g_Lobby_PlayerReady )
          {
            v20 = (LPARAM)String; /*0x5ecdab*/
            if ( String != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ecdb1*/
            {
              v20 = g_Lobby_PlayerTeam; /*0x5ecdb3*/
              if ( String != (wchar_t *)g_Lobby_PlayerTeam && String != (wchar_t *)g_Lobby_PlayerSide ) /*0x5ecdc9*/
              {
                v20 = (LPARAM)String; /*0x5ecdd0*/
                if ( String != (wchar_t *)g_Lobby_PlayerColor ) /*0x5ecdd6*/
                {
                  if ( ppv ) /*0x5ecddf*/
                    PlayerSkirmishSlotHandler_Handle_7A28B0(String); /*0x5ecde1*/
                  else
                    PlayerSkirmishSlotHandler_Handle_5DB600(); /*0x5ecde8*/
                }
              }
            }
          }
        }
      }
      if ( ppv ) /*0x5ecdf4*/
        Lobby::BuildPlayerList(v20); /*0x5ecdf6*/
      else
        PlayerSkirmishSlotHandler_Handle(v20); /*0x5ecdfd*/
    }
    v21 = a3; /*0x5ece02*/
    v53 = a3 && (a3 == g_Lobby_PlayerTeam || a3 == g_Lobby_PlayerSide || a3 == g_Lobby_PlayerColor); /*0x5ece24*/
    v41 = String /*0x5ece4c*/
       && (String == (wchar_t *)g_Lobby_PlayerTeam
        || String == (wchar_t *)g_Lobby_PlayerSide
        || String == (wchar_t *)g_Lobby_PlayerColor);
    if ( a3 != g_Lobby_MaxPlayers )
    {
      if ( !a3 /*0x5ece92*/
        || a3 == g_HouseClass_ObserverFlags
        || a3 == g_Lobby_PlayerCount
        || (wchar_t *)a3 == g_Lobby_PlayerReady
        || a3 == g_Lobby_PlayerTeam
        || a3 == g_Lobby_PlayerSide
        || a3 == g_Lobby_PlayerColor )
      {
        v22 = 0; /*0x5ecea5*/
        goto LABEL_116; /*0x5ecea7*/
      }
      if ( *(unsigned int *)(a3 + 107) != -1 )
      {
        v22 = 0; /*0x5ece9e*/
  LABEL_116:
        v22 = v22; /*0x5eceae*/
        v23 = String == (wchar_t *)g_Lobby_MaxPlayers /*0x5eceef*/
           || String
           && String != (wchar_t *)g_HouseClass_ObserverFlags
           && String != (wchar_t *)g_Lobby_PlayerCount
           && String != g_Lobby_PlayerReady
           && String != (wchar_t *)g_Lobby_PlayerTeam
           && String != (wchar_t *)g_Lobby_PlayerSide
           && String != (wchar_t *)g_Lobby_PlayerColor
           && *(unsigned int *)((char *)String + 107) == -1;
        v23 = v23; /*0x5ecef7*/
        if ( v22 )
        {
          ResourceID2 = GetResourceID2CSF((void *)v7); /*0x5ecf03*/
          SetupComboBoxObserver(a1, ResourceID2); /*0x5ecf0c*/
          if ( v7 )
          {
            switch ( v7 )
            {
              case 1:
                v25 = 1042; /*0x5ecf21*/
                break;
              case 2:
                v25 = 1043; /*0x5ecf2d*/
                break;
              case 3:
                v25 = 1044; /*0x5ecf39*/
                break;
              case 4:
                v25 = 1045; /*0x5ecf45*/
                break;
              case 5:
                v25 = 1046; /*0x5ecf51*/
                break;
              case 6:
                v25 = 1047; /*0x5ecf5d*/
                break;
              default:
                v25 = v7 != 7 ? -1 : 1048;
                break;
            }
          }
          else
          {
            v25 = 1041; /*0x5ecf15*/
          }
          v26 = GetDlgItem(a1, v25); /*0x5ecf82*/
          SendMessageA(v26, 0x4F1u, 0, 1); /*0x5ecf89*/
          ResourceID = GetResourceIDCSF((void *)v7); /*0x5ecf96*/
          FillListBox(a1, ResourceID); /*0x5ecf9c*/
          SetupSkirmishSpawnLocations(a1, ResourceID, 8); /*0x5ecfa7*/
          ResourceID3 = GetResourceID3CSF((void *)v7); /*0x5ecfae*/
          SetupComboBoxRandomAlliance(a1, ResourceID3); /*0x5ecfb7*/
          ResourceID4 = GetResourceID4CSF((void *)v7); /*0x5ecfbe*/
          SetupComboBoxRandomAlliance(a1, ResourceID4); /*0x5ecfc7*/
          SetupSkirmishPlayerSlots(a1, 0); /*0x5ecfd2*/
          DataGlobal_A8B27C[v7] = -1; /*0x5ecfd7*/
          g_abs_A8B29C[v7] = -1; /*0x5ecfde*/
          g_abs_A8B2BC[v7] = -1; /*0x5ecfe5*/
        }
        else
        {
          if ( !v23 ) /*0x5ecff3*/
          {
  LABEL_162:
            if ( v53 ) /*0x5ed0fc*/
            {
              SetupSkirmishPlayerSlots(a1, (HWND)1); /*0x5ed104*/
              v36 = -1; /*0x5ed10f*/
              if ( v21 == g_Lobby_PlayerTeam ) /*0x5ed113*/
              {
                v36 = 2; /*0x5ed115*/
              }
              else if ( v21 == g_Lobby_PlayerSide ) /*0x5ed122*/
              {
                v36 = 1; /*0x5ed124*/
              }
              else if ( v21 == g_Lobby_PlayerColor ) /*0x5ed131*/
              {
                v36 = 0; /*0x5ed133*/
              }
              DataGlobal_A8B27C[v7] = v36; /*0x5ed135*/
              g_abs_A8B29C[v7] = -2; /*0x5ed141*/
              g_abs_A8B2BC[v7] = -2; /*0x5ed148*/
              g_abs_A8B2DC[v7] = -2; /*0x5ed14f*/
              g_abs_A8B2FC[v7] = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ed161*/
            }
            else if ( v41 ) /*0x5ed170*/
            {
              SetupSkirmishPlayerSlots(a1, 0); /*0x5ed178*/
              DataGlobal_A8B27C[v7] = -1; /*0x5ed17d*/
              g_abs_A8B29C[v7] = -1; /*0x5ed184*/
              g_abs_A8B2BC[v7] = -1; /*0x5ed18b*/
              g_abs_A8B2DC[v7] = -1; /*0x5ed192*/
              g_abs_A8B2FC[v7] = -1; /*0x5ed199*/
            }
            if ( ppv ) /*0x5ed1a7*/
              SessionClass::BuildLaunchString(); /*0x5ed1a9*/
            RefreshLobbyPlayerSlots(v7); /*0x5ed1b0*/
            v37 = v53 || v41; /*0x5ed1c9*/
            result = v22 || v23; /*0x5ed1df*/
            if ( v37 || result ) /*0x5ed1e7*/
            {
              v38 = 0; /*0x5ed1fb*/
              v39 = &dword_A8DA90; /*0x5ed1fd*/
              do /*0x5ed21e*/
              {
                v40 = *v39; /*0x5ed202*/
                if ( *v39 && (v40 == g_Lobby_PlayerTeam || v40 == g_Lobby_PlayerSide || v40 == g_Lobby_PlayerColor) ) /*0x5ed212*/
                  ++v38; /*0x5ed214*/
                ++v39; /*0x5ed215*/
              }
              while ( (int)v39 < (int)&dword_A8DAB0 ); /*0x5ed21e*/
              result = a4; /*0x5ed220*/
              g_abs_A8B274 = v38; /*0x5ed224*/
              if ( a4 == 2 ) /*0x5ed22d*/
              {
                if ( ppv ) /*0x5ed236*/
                  DisplayRankingsThunkWOL(); /*0x5ed238*/
                else
                  RetVtableStubZero_eax_27(); /*0x5ed250*/
                return CheckGameSettingsChanged(1, 0); /*0x5ed241*/
              }
            }
            return result; /*0x5ed24d*/
          }
          v30 = GetResourceID2CSF((void *)v7); /*0x5ecffb*/
          FillComboBoxRandomOnly(a1, v30); /*0x5ed004*/
          if ( v7 )
          {
            switch ( v7 )
            {
              case 1:
                v31 = 1042; /*0x5ed019*/
                break;
              case 2:
                v31 = 1043; /*0x5ed025*/
                break;
              case 3:
                v31 = 1044; /*0x5ed031*/
                break;
              case 4:
                v31 = 1045; /*0x5ed03d*/
                break;
              case 5:
                v31 = 1046; /*0x5ed049*/
                break;
              case 6:
                v31 = 1047; /*0x5ed055*/
                break;
              default:
                v31 = v7 != 7 ? -1 : 1048;
                break;
            }
          }
          else
          {
            v31 = 1041; /*0x5ed00d*/
          }
          v32 = GetDlgItem(a1, v31); /*0x5ed07a*/
          SendMessageA(v32, 0x4F1u, 0, 0); /*0x5ed081*/
          v33 = GetResourceIDCSF((void *)v7); /*0x5ed08e*/
          FillListBox(a1, v33); /*0x5ed094*/
          SetupSkirmishSpawnLocations(a1, v33, -2); /*0x5ed09f*/
          v34 = GetResourceID3CSF((void *)v7); /*0x5ed0a6*/
          FillComboBoxAllianceSlots(a1, v34); /*0x5ed0af*/
          v35 = GetResourceID4CSF((void *)v7); /*0x5ed0b6*/
          FillLobbyPlayerSlot(a1, v35); /*0x5ed0bf*/
          SetupSkirmishPlayerSlots(a1, 0); /*0x5ed0ca*/
          DataGlobal_A8B27C[v7] = -1; /*0x5ed0cf*/
          g_abs_A8B29C[v7] = -1; /*0x5ed0d6*/
          g_abs_A8B2BC[v7] = -1; /*0x5ed0dd*/
          g_abs_A8B2DC[v7] = -1; /*0x5ed0e4*/
          g_abs_A8B2FC[v7] = -1; /*0x5ed0eb*/
        }
        v21 = a3; /*0x5ed0f2*/
        goto LABEL_162; /*0x5ed0f2*/
      }
    }
    v22 = 1; /*0x5eceac*/
    goto LABEL_116; /*0x5eceac*/
  }
  return result; /*0x5ed246*/
}
}
// 0x5ED270
namespace gamemd {
char sub_5ED270(SkirmishDialog * hDlg, int nIDDlgItem, LPARAM a3)
{
  LPARAM v5; // edx
  WPARAM v6; // ebx
  LRESULT v8; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]
  LPARAM v10; // [esp+1Ch] [ebp+4h]

  switch ( a3 )
  {
    case 2:
      v10 = g_HouseClass_ObserverFlags; /*0x5ed289*/
      goto LABEL_13; /*0x5ed28d*/
    case 3:
      v10 = g_Lobby_PlayerCount; /*0x5ed29a*/
      goto LABEL_13; /*0x5ed29e*/
    case 4:
      v5 = g_Lobby_PlayerTeam; /*0x5ed2a5*/
      break;
    case 5:
      v10 = g_Lobby_PlayerSide; /*0x5ed2b7*/
      goto LABEL_13; /*0x5ed2bb*/
    case 6:
      v10 = g_Lobby_PlayerColor; /*0x5ed2c8*/
      goto LABEL_13; /*0x5ed2cc*/
    default:
      v5 = a3 != 7 ? 0 : g_Lobby_MaxPlayers;
      break;
  }
  v10 = v5; /*0x5ed2de*/
  LABEL_13:
  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5ed2e2*/
  ShowWindow(hWnd, 0); /*0x5ed2f1*/
  v6 = 0; /*0x5ed30a*/
  v8 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5ed30e*/
  if ( v8 > 0 ) /*0x5ed312*/
  {
    while ( SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v6, 0) != v10 ) /*0x5ed324*/
    {
      if ( (int)++v6 >= v8 ) /*0x5ed32d*/
        goto LABEL_18; /*0x5ed32d*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v6, 0); /*0x5ed33b*/
  }
  LABEL_18:
  ShowWindow(hWnd, 5); /*0x5ed33d*/
  return PlayerSkirmishSlotHandler(hDlg, nIDDlgItem, v10, 0); /*0x5ed35a*/
}
}
// 0x5ED400
namespace gamemd {
AbstractClass * * SaveMultiplayerLobbySettings(ReferenceCounted * hDlg, int a2)
{
  int i; // edi
  int v5; // esi
  LRESULT v6; // eax
  LRESULT v7; // eax
  LRESULT v8; // ecx
  int v9; // ecx
  int v10; // esi
  int ResourceID2CSF; // eax
  int ResourceIDCSF; // eax
  int ComboBoxSelectedRaw; // eax
  int v14; // ecx
  char result; // al

  *(unsigned int *)a2 = *(unsigned int *)stru_A8B250; /*0x5ed40c*/
  *(unsigned int *)(a2 + 4) = g_abs_A8B254; /*0x5ed416*/
  for ( i = 1; i < 8; ++i )
  {
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
    v6 = SendDlgItemMessageA(hDlg, v5, 0x147u, 0, 0); /*0x5ed491*/
    v7 = SendDlgItemMessageA(hDlg, v5, 0x150u, v6, 0); /*0x5ed4a1*/
    v8 = v7 != -1 ? v7 : 0;
    if ( v8 == g_HouseClass_ObserverFlags )
    {
      v9 = 2; /*0x5ed4b9*/
    }
    else if ( v8 == g_Lobby_PlayerCount )
    {
      v9 = 3; /*0x5ed4c8*/
    }
    else if ( v8 == g_Lobby_PlayerTeam )
    {
      v9 = 4; /*0x5ed4d7*/
    }
    else if ( v8 == g_Lobby_PlayerSide )
    {
      v9 = 5; /*0x5ed4e6*/
    }
    else if ( v8 == g_Lobby_PlayerColor )
    {
      v9 = 6; /*0x5ed4f5*/
    }
    else
    {
      v9 = g_Lobby_MaxPlayers != v8 ? 2 : 7;
    }
    v10 = a2 + 12 * i; /*0x5ed50f*/
    *(unsigned int *)(v10 + 28) = v9; /*0x5ed513*/
    ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x5ed518*/
    *(unsigned int *)(v10 + 32) = GetComboBoxSelected(hDlg, ResourceID2CSF, -1); /*0x5ed52a*/
    ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x5ed52d*/
    ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, ResourceIDCSF, -1); /*0x5ed538*/
    v14 = 3 * i + 9; /*0x5ed53d*/
    *(unsigned int *)(a2 + 4 * v14) = ComboBoxSelectedRaw; /*0x5ed545*/
  }
  *(unsigned int *)(a2 + 8) = g_abs_A8B268; /*0x5ed556*/
  *(unsigned int *)(a2 + 12) = g_abs_A8B25C; /*0x5ed55e*/
  *(unsigned int *)(a2 + 16) = g_abs_A8B270; /*0x5ed567*/
  *(unsigned char *)(a2 + 20) = g_abs_A8B262; /*0x5ed570*/
  *(unsigned char *)(a2 + 21) = g_abs_A8B263; /*0x5ed578*/
  *(unsigned char *)(a2 + 22) = g_abs_A8B264; /*0x5ed581*/
  *(unsigned char *)(a2 + 23) = dword_A8B320; /*0x5ed58a*/
  result = g_abs_A8B261; /*0x5ed58d*/
  *(unsigned char *)(a2 + 24) = g_abs_A8B261; /*0x5ed592*/
  return result; /*0x5ed555*/
}
}
// 0x5ED5A0
namespace gamemd {
void SetupMultiplayerLobbyPlayers(SkirmishDialog * hDlg, int a2)
{
  char *First; // edi
  MultiplayerGameMode *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebx
  LPARAM v15; // ebp
  WPARAM v16; // ebx
  CountryCombo *ResourceID2CSF; // ebx
  StartCombo *ResourceIDCSF; // edi
  Dialog *ResourceID3CSF; // ebp
  int v20; // eax
  HWND v21; // edi
  HWND v22; // ebp
  int ComboBoxSelectedRaw; // ebx
  int v24; // eax
  wchar_t **v25; // edi
  wchar_t *v26; // ecx
  char *v27; // eax
  int v28; // ebx
  int v29; // eax
  wchar_t **v30; // edi
  wchar_t *v31; // ecx
  char *v32; // eax
  int v33; // eax
  int ComboBoxSelectedRaw2; // ebx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  HWND v38; // edi
  HWND v39; // ebp
  ScenarioClass *v41; // [esp+0h] [ebp-30h]
  char v42; // [esp+13h] [ebp-1Dh]
  int i; // [esp+14h] [ebp-1Ch]
  int v44; // [esp+18h] [ebp-18h]
  LRESULT nIDDlgItem; // [esp+1Ch] [ebp-14h]
  Dialog *nIDDlgItema; // [esp+1Ch] [ebp-14h]
  HWND nIDDlgItemb; // [esp+1Ch] [ebp-14h]
  int v48; // [esp+20h] [ebp-10h]
  HWND hWnd; // [esp+28h] [ebp-8h]
  HWND hWnda; // [esp+28h] [ebp-8h]
  HWND hWndb; // [esp+28h] [ebp-8h]
  HWND DlgItem; // [esp+2Ch] [ebp-4h]

  if ( *(int *)a2 < 1 || *(unsigned int *)a2 > MultiplayerGameMode::ListGet() ) /*0x5ed5bf*/
    *(unsigned int *)a2 = *(unsigned int *)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed5c9*/
  *(unsigned int *)stru_A8B250.__pad_0 = *(unsigned int *)a2; /*0x5ed5cf*/
  First = (char *)MultiplayerGameMode::Find(*(MultiplayerGameMode **)stru_A8B250.__pad_0); /*0x5ed5da*/
  if ( !First ) /*0x5ed5de*/
    First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed5e5*/
  if ( (Network::IsMultiplayerActive() || Network::IsLobbyFeature()) /*0x5ed601*/
    && First
    && (*(uint8_t (**)(char *))(*(unsigned int *)First + 4))(First) )
  {
    v5 = *(MultiplayerGameMode **)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed60d*/
    *(unsigned int *)a2 = v5; /*0x5ed610*/
    *(unsigned int *)stru_A8B250.__pad_0 = v5; /*0x5ed615*/
    v6 = MultiplayerGameMode::Find(v5); /*0x5ed61a*/
    if ( !v6 ) /*0x5ed621*/
      v6 = MultiplayerGameMode::GetFirst(); /*0x5ed623*/
    First = (char *)v6; /*0x5ed628*/
  }
  *(unsigned int *)a2 = *((unsigned int *)First + 10); /*0x5ed62d*/
  *(unsigned int *)stru_A8B250.__pad_0 = *((unsigned int *)First + 10); /*0x5ed633*/
  v7 = a2->q004; /*0x5ed639*/
  if ( v7 < 0 || v7 >= dword_A8B8D8 ) /*0x5ed646*/
    a2->q004 = 0; /*0x5ed648*/
  if ( LoadScenarioClassByIndex(a2->q004) ) /*0x5ed652*/
    v8 = a2->q004; /*0x5ed65b*/
  else
    v8 = 0; /*0x5ed660*/
  *(unsigned int *)&stru_A8B250.__pad_0[4] = v8; /*0x5ed668*/
  v42 = 0; /*0x5ed66d*/
  v9 = *(unsigned int *)(dword_A8B8CC + 4 * v8); /*0x5ed672*/
  if ( v9 && (uint8_t)IsRandMap::Sed(*(unsigned int *)(dword_A8B8CC + 4 * v8)) ) /*0x5ed67b*/
  {
    if ( MapSeed::IsInitialized() ) /*0x5ed684*/
      ScenarioClass::CopyStartPositions(v41); /*0x5ed694*/
    else
      v42 = 1; /*0x5ed68d*/
  }
  if ( !(uint8_t)MapPreview::Check(First, v9) || v42 ) /*0x5ed6ab*/
  {
    v10 = (*(int (**)(char *))(*(unsigned int *)First + 68))(First); /*0x5ed6b1*/
    if ( v10 == -1 ) /*0x5ed6b7*/
    {
      First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed6be*/
      *(unsigned int *)a2 = *((unsigned int *)First + 10); /*0x5ed6c3*/
      *(unsigned int *)stru_A8B250.__pad_0 = *((unsigned int *)First + 10); /*0x5ed6c9*/
      v10 = (*(int (**)(char *))(*(unsigned int *)First + 68))(First); /*0x5ed6d3*/
    }
    a2->q004 = v10; /*0x5ed6d6*/
    *(unsigned int *)&stru_A8B250.__pad_0[4] = v10; /*0x5ed6db*/
    LoadScenarioClassByIndex(v10); /*0x5ed6e0*/
  }
  dword_A8B23C = (ObjectClass *)First; /*0x5ed6eb*/
  LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ed6f1*/
  (*((void (**)(ObjectClass *))dword_A8B23C->AbstractClass + 8))(dword_A8B23C); /*0x5ed6fe*/
  (*((void (**)(ObjectClass *))dword_A8B23C->AbstractClass + 9))(dword_A8B23C); /*0x5ed709*/
  (*(void (**)(char *))(*(unsigned int *)First + 24))(First); /*0x5ed710*/
  (*(void (**)(char *))(*(unsigned int *)First + 124))(First); /*0x5ed717*/
  v11 = 8; /*0x5ed720*/
  v48 = 8; /*0x5ed728*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ed72c*/
  {
    if ( !Network::IsMultiplayerActive() || (v12 = Network::IsLobbyFeature() == 0, v11 = 2, !v12) ) /*0x5ed743*/
      v11 = 6; /*0x5ed745*/
    v48 = v11; /*0x5ed74a*/
  }
  if ( !g_MPCooperativeState && v11 < 8 ) /*0x5ed75b*/
    v48 = v11 + 1; /*0x5ed75e*/
  for ( i = 1; i < 8; ++i )
  {
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
    v14 = *(unsigned int *)(a2 + 12 * i + 28); /*0x5ed7de*/
    v44 = v14; /*0x5ed7e9*/
    if ( (Network::IsMultiplayerActive() || !g_MPCooperativeState || g_MenuStateFlags) /*0x5ed815*/
      && (v14 == 4 || v14 == 5 || v14 == 6) )
    {
      v14 = 2; /*0x5ed817*/
      v44 = 2; /*0x5ed81c*/
    }
    if ( i < v48 )
    {
      switch ( v14 )
      {
        case 7:
          v15 = g_HouseClass_ObserverFlags; /*0x5ed83b*/
          v44 = 2; /*0x5ed841*/
          break;
        case 2:
          v15 = g_HouseClass_ObserverFlags; /*0x5ed850*/
          break;
        case 3:
          v15 = g_Lobby_PlayerCount; /*0x5ed85d*/
          break;
        case 4:
          v15 = g_Lobby_PlayerTeam; /*0x5ed86a*/
          break;
        case 5:
          v15 = g_Lobby_PlayerSide; /*0x5ed877*/
          break;
        default:
          v15 = v14 != 6 ? 0 : g_Lobby_PlayerColor;
          break;
      }
    }
    else
    {
      v15 = g_Lobby_PlayerCount; /*0x5ed826*/
      v44 = 3; /*0x5ed82c*/
    }
    hWnd = GetDlgItem(hDlg, v13); /*0x5ed89d*/
    ShowWindow(hWnd, 0); /*0x5ed8a1*/
    v16 = 0; /*0x5ed8b8*/
    nIDDlgItem = SendDlgItemMessageA(hDlg, v13, 0x146u, 0, 0); /*0x5ed8bc*/
    if ( nIDDlgItem > 0 ) /*0x5ed8c0*/
    {
      while ( SendDlgItemMessageA(hDlg, v13, 0x150u, v16, 0) != v15 ) /*0x5ed8d4*/
      {
        if ( (int)++v16 >= nIDDlgItem ) /*0x5ed8dd*/
          goto LABEL_78; /*0x5ed8dd*/
      }
      SendDlgItemMessageA(hDlg, v13, 0x14Eu, v16, 0); /*0x5ed8eb*/
    }
  LABEL_78:
    ShowWindow(hWnd, 5); /*0x5ed8f1*/
    PlayerSkirmishSlotHandler(hDlg, v13, v15, 0); /*0x5ed905*/
    ResourceID2CSF = (CountryCombo *)GetResourceID2CSF((ObjectClass *)i); /*0x5ed917*/
    ResourceIDCSF = (StartCombo *)GetResourceIDCSF((ObjectClass *)i); /*0x5ed920*/
    ResourceID3CSF = (Dialog *)GetResourceID3CSF((ObjectClass *)i); /*0x5ed92b*/
    nIDDlgItema = (Dialog *)GetResourceID4CSF((ObjectClass *)i); /*0x5ed932*/
    if ( v44 == 2 || v44 == 3 ) /*0x5ed946*/
    {
      v36 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x5edc12*/
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, v36); /*0x5edc1a*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, -2); /*0x5edc25*/
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5edc30*/
      v37 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 11))(dword_A8B23C); /*0x5edc3d*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v37); /*0x5edc47*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5edc58*/
      v38 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5edc5e*/
      v39 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5edc64*/
      hWndb = GetDlgItem(hDlg, (int)nIDDlgItema); /*0x5edc7b*/
      EnableWindow(DlgItem, 0); /*0x5edc7f*/
      EnableWindow(v38, 0); /*0x5edc84*/
      EnableWindow(v39, 0); /*0x5edc89*/
      EnableWindow(hWndb, 0); /*0x5edc92*/
    }
    else if ( v44 == 7 ) /*0x5ed94f*/
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, -3); /*0x5ed95b*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, -2); /*0x5ed966*/
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5ed971*/
      v20 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 11))(dword_A8B23C); /*0x5ed97e*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v20); /*0x5ed988*/
      hWnda = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ed999*/
      v21 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ed99f*/
      v22 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5ed9a5*/
      nIDDlgItemb = GetDlgItem(hDlg, (int)nIDDlgItema); /*0x5ed9bc*/
      EnableWindow(hWnda, 0); /*0x5ed9c0*/
      EnableWindow(v21, 0); /*0x5ed9c5*/
      EnableWindow(v22, 0); /*0x5ed9ca*/
      EnableWindow(nIDDlgItemb, 0); /*0x5ed9d3*/
    }
    else
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, *(unsigned int *)(a2 + 12 * i + 32)); /*0x5ed9e4*/
      SelectLobbyCountry(hDlg, ResourceID2CSF); /*0x5ed9ed*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, *(unsigned int *)(a2 + 4 * (3 * i + 9))); /*0x5eda06*/
      ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)ResourceIDCSF, -1); /*0x5eda18*/
      v24 = StartCombo::IDToIndex(ResourceIDCSF); /*0x5eda1a*/
      if ( (ObjectClass *)v24 == dword_A8DA8C ) /*0x5eda25*/
      {
        FillColorComboBoxUI(hDlg, (int)ResourceIDCSF); /*0x5eda2f*/
        if ( ComboBoxSelectedRaw != -2 ) /*0x5eda37*/
        {
          v25 = (wchar_t **)dword_A8DA90; /*0x5eda39*/
          while ( 1 ) /*0x5eda3e*/
          {
            v26 = *v25; /*0x5eda3e*/
            if ( *v25 ) /*0x5eda3e*/
            {
              if ( v26 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5eda83*/
                && v26 != (wchar_t *)g_Lobby_PlayerCount
                && v26 != g_Lobby_PlayerReady
                && v26 != (wchar_t *)g_Lobby_MaxPlayers
                && v26 != (wchar_t *)g_Lobby_PlayerTeam
                && v26 != (wchar_t *)g_Lobby_PlayerSide
                && v26 != (wchar_t *)g_Lobby_PlayerColor
// 0x696f20
                && SessionClass::GetPlayerColor((SessionClass *)v26) == ComboBoxSelectedRaw )
{

  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(unsigned int *)((char *)this + 87) != -2 ) /*0x696f2a*/
    return *(unsigned int *)((char *)this + 83); /*0x696f2c*/
  return result; /*0x696f2f*/

}
            }
            if ( (int)++v25 >= (int)&dword_A8DAB0 ) /*0x5eda8e*/
            {
              v27 = &stru_A8B250.__pad_0[108]; /*0x5eda90*/
              while ( *(unsigned int *)v27 != ComboBoxSelectedRaw ) /*0x5eda97*/
              {
                v27 += 4; /*0x5eda99*/
                if ( (int)v27 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5edaa1*/
                  goto LABEL_100; /*0x5edaa1*/
              }
              break; /*0x5eda97*/
            }
          }
          ComboBoxSelectedRaw = -2; /*0x5edaa5*/
        }
  LABEL_100:
        SessionClass::AssignColor((SessionClass *)&dword_A8B238, ComboBoxSelectedRaw, 0); /*0x5edaaa*/
        if ( dword_A8DA84 ) /*0x5edabe*/
          SessionClass::SetPlayerColor((int *)*dword_A8DA78, ComboBoxSelectedRaw); /*0x5edac9*/
      }
      else
      {
        *(unsigned int *)&stru_A8B250.__pad_0[4 * v24 + 108] = ComboBoxSelectedRaw; /*0x5edad0*/
      }
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5edadd*/
      v28 = SetComboBoxSelection(hDlg, (int)ResourceID3CSF, -1); /*0x5edaef*/
      v29 = Dialog::SideIDToIndex(ResourceID3CSF); /*0x5edaf1*/
      if ( (ObjectClass *)v29 == dword_A8DA8C ) /*0x5edafc*/
      {
        FillComboBoxSides(hDlg, (int)ResourceID3CSF); /*0x5edb06*/
        if ( v28 != -2 ) /*0x5edb0e*/
        {
          v30 = (wchar_t **)dword_A8DA90; /*0x5edb10*/
          while ( 1 ) /*0x5edb15*/
          {
            v31 = *v30; /*0x5edb15*/
            if ( *v30 ) /*0x5edb15*/
            {
              if ( v31 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5edb5a*/
                && v31 != (wchar_t *)g_Lobby_PlayerCount
                && v31 != g_Lobby_PlayerReady
                && v31 != (wchar_t *)g_Lobby_MaxPlayers
                && v31 != (wchar_t *)g_Lobby_PlayerTeam
                && v31 != (wchar_t *)g_Lobby_PlayerSide
                && v31 != (wchar_t *)g_Lobby_PlayerColor
// 0x696f50
                && SessionClass::GetOption((int *)v31) == v28 )
{

  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(unsigned int *)((char *)this + 95) != -2 || *(unsigned int *)((char *)this + 91) != -1 ) /*0x696f60*/
    return *(unsigned int *)((char *)this + 91); /*0x696f62*/
  return result; /*0x696f65*/

}
            }
            if ( (int)++v30 >= (int)&dword_A8DAB0 ) /*0x5edb65*/
            {
              v32 = &stru_A8B250.__pad_0[140]; /*0x5edb67*/
              while ( *(unsigned int *)v32 != v28 ) /*0x5edb6e*/
              {
                v32 += 4; /*0x5edb70*/
                if ( (int)v32 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5edb78*/
                  goto LABEL_121; /*0x5edb78*/
              }
              break; /*0x5edb6e*/
            }
          }
          v28 = -2; /*0x5edb7c*/
        }
  LABEL_121:
        if ( dword_A8DA84 ) /*0x5edb88*/
          SessionClass::SetOption((int *)*dword_A8DA78, v28); /*0x5edb92*/
      }
      else
      {
        *(unsigned int *)&stru_A8B250.__pad_0[4 * v29 + 140] = v28; /*0x5edb99*/
      }
      v33 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 12))(dword_A8B23C); /*0x5edba8*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v33); /*0x5edbb4*/
      ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2(hDlg, (int)nIDDlgItema, -1); /*0x5edbc6*/
      v35 = Dialog::OptionIDToIndex(nIDDlgItema); /*0x5edbc8*/
      if ( (ObjectClass *)v35 == dword_A8DA8C ) /*0x5edbd3*/
      {
        SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, ComboBoxSelectedRaw2); /*0x5edbda*/
        if ( dword_A8DA84 ) /*0x5edbe6*/
          SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5edbf4*/
      }
      else
      {
        *(unsigned int *)&stru_A8B250.__pad_0[4 * v35 + 172] = ComboBoxSelectedRaw2; /*0x5edbfe*/
      }
    }
  }
  *(unsigned int *)&stru_A8B250.__pad_0[24] = a2->u32_8; /*0x5edcb1*/
  *(unsigned int *)&stru_A8B250.__pad_0[12] = a2->q00C; /*0x5edcba*/
  *(unsigned int *)&stru_A8B250.__pad_0[32] = a2->q010; /*0x5edcc3*/
  stru_A8B250.__pad_0[18] = a2->q014; /*0x5edccc*/
  stru_A8B250.__pad_0[19] = *(unsigned char *)(a2 + 21); /*0x5edcd5*/
  stru_A8B250.__pad_0[20] = *(unsigned char *)(a2 + 22); /*0x5edcde*/
  dword_A8B320 = *(unsigned char *)(a2 + 23); /*0x5edce7*/
  stru_A8B250.__pad_0[17] = a2->q018; /*0x5edcf0*/
  return a2; /*0x5edcaa*/
}
}
// 0x5EDDE0
namespace gamemd {
void EnablePlayerSlotControls(HWND hDlg, bool a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  const wchar_t **v6; // esi
  const wchar_t *v7; // ebx
  int ResourceID2CSF; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // eax
  HWND v11; // eax
  int ResourceID3CSF; // eax
  HWND v13; // eax
  int ResourceID4CSF; // eax

  if ( hDlg ) /*0x5edded*/
  {
    result = dword_A8DA84; /*0x5eddf3*/
    if ( dword_A8DA84 ) /*0x5eddfa*/
    {
      v5 = 0; /*0x5ede06*/
      v6 = (const wchar_t **)&dword_A8DA90; /*0x5ede08*/
      v7 = *(const wchar_t **)dword_A8DA78; /*0x5ede0d*/
      while ( 1 ) /*0x5ede0f*/
      {
        result = (int)*v6; /*0x5ede0f*/
        if ( *v6 ) /*0x5ede0f*/
        {
          result = _wcsicmp(v7, *v6); /*0x5ede17*/
          if ( !result ) /*0x5ede21*/
            break; /*0x5ede21*/
        }
        ++v6; /*0x5ede23*/
        ++v5; /*0x5ede26*/
        if ( (int)v6 >= (int)&dword_A8DAB0 ) /*0x5ede2d*/
        {
          v5 = -1; /*0x5ede2f*/
          break; /*0x5ede2f*/
        }
      }
      v4 = v5; /*0x5ede32*/
    }
    else
    {
      v4 = -1; /*0x5eddfc*/
    }
    if ( (void *)v4 != g_MPCooperativeState ) /*0x5ede3a*/
    {
      ResourceID2CSF = GetResourceID2CSF((void *)v4); /*0x5ede42*/
      DlgItem = GetDlgItem(hDlg, ResourceID2CSF); /*0x5ede4f*/
      if ( DlgItem ) /*0x5ede59*/
        EnableWindow(DlgItem, a2); /*0x5ede67*/
      ResourceIDCSF = GetResourceIDCSF((void *)v4); /*0x5ede6b*/
      v11 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5ede72*/
      if ( v11 ) /*0x5ede76*/
        EnableWindow(v11, a2); /*0x5ede84*/
      ResourceID3CSF = GetResourceID3CSF((void *)v4); /*0x5ede88*/
      v13 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5ede8f*/
      if ( v13 ) /*0x5ede93*/
        EnableWindow(v13, a2); /*0x5edea1*/
      ResourceID4CSF = GetResourceID4CSF((void *)v4); /*0x5edea5*/
      result = (int)GetDlgItem(hDlg, ResourceID4CSF); /*0x5edeac*/
      if ( result ) /*0x5edeb0*/
      {
        if ( a2 == 1 && dword_A8B23C && !*(unsigned char *)(dword_A8B23C + 60) ) /*0x5edec5*/
          return EnableWindow((HWND)result, 0); /*0x5edece*/
        else
          return EnableWindow((HWND)result, a2); /*0x5edede*/
      }
    }
  }
  return result; /*0x5eded0*/
}
}
// 0x5EE510
namespace gamemd {
int Lobby_RefreshPlayerSlots(unsigned int a1)
{
  HWND v2; // ebx
  int result; // eax
  unsigned int *i; // edi
  int v5; // ebp
  int ResourceID4; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  v2 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee521*/
  if ( v2 /*0x5ee555*/
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (result = Dialog::FindByHandle((void *)0xBD), (v2 = (HWND)result) != 0) )
  {
    result = dword_A8B23C; /*0x5ee55b*/
    if ( dword_A8B23C ) /*0x5ee562*/
    {
      result = 0; /*0x5ee568*/
      v13 = 8; /*0x5ee56d*/
      if ( a1 < 8 ) /*0x5ee575*/
      {
        result = a1; /*0x5ee57b*/
        v13 = a1 + 1; /*0x5ee57e*/
      }
      v12 = (char *)result; /*0x5ee586*/
      if ( result < v13 ) /*0x5ee58c*/
      {
        for ( i = (unsigned int *)(4 * result + 11055868); ; ++i ) /*0x5ee594*/
        {
          v5 = i[2533]; /*0x5ee59f*/
          ResourceID4 = GetResourceID4CSF(v12); /*0x5ee5a5*/
          v7 = ResourceID4; /*0x5ee5aa*/
          if ( ResourceID4 < 0 || !GetDlgItem(v2, ResourceID4) ) /*0x5ee5b6*/
            goto LABEL_24; /*0x5ee5be*/
          if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5ee5de*/
            break; /*0x5ee5de*/
          if ( v5 == g_HouseClass_ObserverFlags || v5 == g_Lobby_MaxPlayers ) /*0x5ee608*/
          {
            *i = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee667*/
            v8 = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee671*/
            goto LABEL_23; /*0x5ee671*/
          }
          v9 = *(unsigned int *)dword_A8B23C; /*0x5ee617*/
          if ( v5 == g_Lobby_PlayerCount ) /*0x5ee619*/
          {
            *i = (*(int (**)(void))(v9 + 44))(); /*0x5ee61e*/
            v8 = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee628*/
            goto LABEL_23; /*0x5ee62b*/
          }
          *i = (*(int (**)(void))(v9 + 44))(); /*0x5ee630*/
          v10 = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee63a*/
          SetupLobbyPlayerSlots(v2, v7, v10); /*0x5ee642*/
          v11 = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee64f*/
          SessionClass::SetOption2(v5, v11); /*0x5ee655*/
  LABEL_24:
          result = (int)(v12 + 1); /*0x5ee67e*/
          if ( (int)++v12 >= v13 ) /*0x5ee690*/
            return result; /*0x5ee690*/
        }
        *i = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ee5eb*/
        v8 = (*(int (**)(int))(*(unsigned int *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ee5f5*/
  LABEL_23:
        SetupLobbyPlayerSlots(v2, v7, v8); /*0x5ee674*/
        goto LABEL_24; /*0x5ee679*/
      }
    }
  }
  return result; /*0x5ee698*/
}
}
// 0x5EE6F0
namespace gamemd {
unsigned int * AssignRandomMapStartPositions(MouseClass * aP0, IUnknown * aP1, int a3, int a4, char a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  double v19; // st7
  double v20; // st7
  int v21; // edi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  double v25; // st7
  double v26; // st7
  int v28; // [esp+1Ch] [ebp-14h]
  int v29; // [esp+1Ch] [ebp-14h]
  int v30; // [esp+1Ch] [ebp-14h]
  int v31; // [esp+20h] [ebp-10h]
  int v32; // [esp+20h] [ebp-10h]
  int v33; // [esp+20h] [ebp-10h]
  unsigned int *v34; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  int v36; // [esp+28h] [ebp-8h]
  int v37; // [esp+2Ch] [ebp-4h]
  int v38; // [esp+2Ch] [ebp-4h]

  v6 = *(unsigned int *)(a3 + 16); /*0x5ee705*/
  v7 = 0; /*0x5ee708*/
  v8 = 0; /*0x5ee70a*/
  v34 = aP0; /*0x5ee70c*/
  if ( v6 <= 0 ) /*0x5ee716*/
  {
    v9 = a4; /*0x5ee731*/
    goto LABEL_8; /*0x5ee731*/
  }
  do /*0x5ee725*/
  {
    v9 = a4; /*0x5ee718*/
    if ( *(unsigned char *)(v8 + a4) ) /*0x5ee71b*/
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
      v10 = Random::Range((unsigned int *)dword_A8B230 + 134, 0, v6 - 1); /*0x5ee74e*/
      *(unsigned char *)(v10 + v9) = 1; /*0x5ee757*/
      *((unsigned int *)dword_A8B230 + v10 + 1120) = aP1; /*0x5ee761*/
      *aP0 = *(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v10); /*0x5ee770*/
      return aP0; /*0x5ee778*/
    }
    goto LABEL_17; /*0x5ee739*/
  }
  if ( v7 != 2 || a5 ) /*0x5ee785*/
  {
  LABEL_17:
    v14 = -1; /*0x5ee7cf*/
    v29 = -1; /*0x5ee7d5*/
    v35 = -1; /*0x5ee7d9*/
    if ( v7 == 1 ) /*0x5ee7dd*/
    {
      v15 = 0; /*0x5ee7e3*/
      if ( v6 > 0 ) /*0x5ee7e7*/
      {
        do /*0x5ee888*/
        {
          if ( !*(unsigned char *)(v15 + v9) ) /*0x5ee7ed*/
          {
            v16 = 0; /*0x5ee7f7*/
            v17 = 0; /*0x5ee7f9*/
            v32 = 0; /*0x5ee7fd*/
            if ( v6 > 0 ) /*0x5ee801*/
            {
              do /*0x5ee865*/
              {
                if ( *(unsigned char *)(v17 + a4) ) /*0x5ee806*/
                {
                  v18 = *(unsigned int *)(a3 + 4); /*0x5ee80c*/
                  v19 = (double)(int16_t)(*(unsigned short *)(v18 + 4 * v15 + 2) - *(unsigned short *)(v18 + 4 * v17 + 2)); /*0x5ee82e*/
                  v37 = (int16_t)(*(unsigned short *)(v18 + 4 * v15) - *(unsigned short *)(v18 + 4 * v17)); /*0x5ee832*/
                  v20 = Math::Sqrt((double)v37 * (double)v37 + v19 * v19); /*0x5ee84b*/
                  v32 += (int16_t)Math::RoundToInt(v20); /*0x5ee85b*/
                }
                ++v17; /*0x5ee862*/
              }
              while ( v17 < *(unsigned int *)(a3 + 16) ); /*0x5ee865*/
              v16 = v32; /*0x5ee867*/
            }
            if ( v16 < v29 || v29 < 0 ) /*0x5ee875*/
            {
              v29 = v16; /*0x5ee877*/
              v35 = v15; /*0x5ee87b*/
            }
            v9 = a4; /*0x5ee87f*/
          }
          v6 = *(unsigned int *)(a3 + 16); /*0x5ee882*/
          ++v15; /*0x5ee885*/
        }
        while ( v15 < v6 ); /*0x5ee888*/
        v14 = v35; /*0x5ee88e*/
      }
      *(unsigned char *)(v14 + v9) = 1; /*0x5ee896*/
      *((unsigned int *)dword_A8B230 + v14 + 1120) = aP1; /*0x5ee8a0*/
      *v34 = *(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v14); /*0x5ee8b1*/
      return v34; /*0x5ee8ad*/
    }
    else
    {
      v21 = 0; /*0x5ee8e6*/
      v36 = -1; /*0x5ee8e8*/
      v30 = -1; /*0x5ee8ee*/
      if ( v6 > 0 ) /*0x5ee8f2*/
      {
        do /*0x5ee98d*/
        {
          if ( !*(unsigned char *)(v21 + v9) ) /*0x5ee8f8*/
          {
            v22 = 0; /*0x5ee902*/
            v23 = 0; /*0x5ee904*/
            v33 = 0; /*0x5ee908*/
            if ( v6 > 0 ) /*0x5ee90c*/
            {
              do /*0x5ee970*/
              {
                if ( *(unsigned char *)(v23 + a4) ) /*0x5ee911*/
                {
                  v24 = *(unsigned int *)(a3 + 4); /*0x5ee917*/
                  v25 = (double)(int16_t)(*(unsigned short *)(v24 + 4 * v21 + 2) - *(unsigned short *)(v24 + 4 * v23 + 2)); /*0x5ee939*/
                  v38 = (int16_t)(*(unsigned short *)(v24 + 4 * v21) - *(unsigned short *)(v24 + 4 * v23)); /*0x5ee93d*/
                  v26 = Math::Sqrt((double)v38 * (double)v38 + v25 * v25); /*0x5ee956*/
                  v33 += (int16_t)Math::RoundToInt(v26); /*0x5ee966*/
                }
                ++v23; /*0x5ee96d*/
              }
              while ( v23 < *(unsigned int *)(a3 + 16) ); /*0x5ee970*/
              v22 = v33; /*0x5ee972*/
            }
            if ( v22 > v36 ) /*0x5ee97a*/
            {
              v36 = v22; /*0x5ee97c*/
              v30 = v21; /*0x5ee980*/
            }
            v9 = a4; /*0x5ee984*/
          }
          v6 = *(unsigned int *)(a3 + 16); /*0x5ee987*/
          ++v21; /*0x5ee98a*/
        }
        while ( v21 < v6 ); /*0x5ee98d*/
        v14 = v30; /*0x5ee993*/
      }
      *(unsigned char *)(v14 + v9) = 1; /*0x5ee99b*/
      *((unsigned int *)dword_A8B230 + v14 + 1120) = aP1; /*0x5ee9a7*/
      *v34 = *(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v14); /*0x5ee9b9*/
      return v34; /*0x5ee9b5*/
    }
  }
  v12 = Random::Range((unsigned int *)dword_A8B230 + 134, 0, v6 - 3); /*0x5ee798*/
  v6 = *(unsigned int *)(a3 + 16); /*0x5ee79d*/
  v13 = 0; /*0x5ee7a0*/
  v28 = 0; /*0x5ee7a4*/
  if ( v6 <= 0 ) /*0x5ee7a8*/
  {
  LABEL_16:
    v7 = v31; /*0x5ee7cb*/
    goto LABEL_17; /*0x5ee7cb*/
  }
  while ( *(unsigned char *)(v13 + a4) || ++v28 != v12 + 1 ) /*0x5ee7aa*/
  {
    if ( ++v13 >= v6 ) /*0x5ee7c9*/
      goto LABEL_16; /*0x5ee7c9*/
  }
  *(unsigned char *)(v13 + a4) = 1; /*0x5ee8c0*/
  *((unsigned int *)dword_A8B230 + v13 + 1120) = aP1; /*0x5ee8ca*/
  *aP0 = *(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v13); /*0x5ee8db*/
  return aP0; /*0x5ee772*/
}
}
// 0x5E2410
namespace gamemd {
int sub_5E2410()
{
  dword_AC0B38 = 0; /*0x5e2412*/
  dword_AC0B3C = 0; /*0x5e2417*/
  dword_AC0B40 = 0; /*0x5e241c*/
  dword_AC0B44 = 0; /*0x5e2421*/
  return 0; /*0x5e2426*/
}
} // namespace gamemd

// 0x5E2430
namespace gamemd {
void sub_5E2430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5e243c*/
  dbl_AC0CE8 = Math::Sqrt(v0 + v0); /*0x5e244e*/
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
  dword_AC0B90 = 0; /*0x5e25d2*/
  return 0; /*0x5e25de*/
}
} // namespace gamemd

// 0x5E25E0
namespace gamemd {
int sub_5E25E0()
{
  dword_AC0E98 = 0; /*0x5e25e2*/
  dword_AC0E9C = 0; /*0x5e25e7*/
  dword_AC0EA0 = 0; /*0x5e25ec*/
  return 0; /*0x5e25f1*/
}
} // namespace gamemd

// 0x5E2600
namespace gamemd {
int sub_5E2600()
{
  dword_AC1150 = 0; /*0x5e2605*/
  dword_AC1148 = 128; /*0x5e260f*/
  dword_AC114C = 128; /*0x5e2614*/
  return 128; /*0x5e2619*/
}
} // namespace gamemd

// 0x5E2E40
namespace gamemd {
INT_PTR sub_5E2E40(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
  INT_PTR result; // eax

  if ( a2 <= 0x2B ) /*0x5e2e47*/
  {
    switch ( a2 ) /*0x5e2e49*/
    {
      case 0x2Bu: /*0x5e2e49*/
        Dialog::Resize(a4); /*0x5e2e86*/
        return 1; /*0x5e2e90*/
      case 0xFu: /*0x5e2e49*/
        Dialog::DrawBackground(hWnd); /*0x5e2e64*/
        Dialog::StopBink(hWnd); /*0x5e2e6b*/
        ValidateRect(hWnd, 0); /*0x5e2e73*/
        return 1; /*0x5e2e7f*/
      case 0x14u: /*0x5e2e49*/
        return 1; /*0x5e2e5a*/
    }
    return 0; /*0x5e2e53*/
  }
  if ( a2 != 273 ) /*0x5e2e98*/
    return 0; /*0x5e2ecc*/
  switch ( (int16_t)a3 ) /*0x5e2eb4*/
  {
    case 1: /*0x5e2eb4*/
    case 2: /*0x5e2eb4*/
    case 6: /*0x5e2eb4*/
    case 7: /*0x5e2eb4*/
      CloseDialog(hWnd, (uint16_t)a3); /*0x5e2ebf*/
      result = 1; /*0x5e2ec4*/
      break; /*0x5e2ec9*/
    default:
      return 0;
  }
  return result; /*0x5e2e5a*/
}
} // namespace gamemd

// 0x5E35A0
namespace gamemd {
char sub_5E35A0()
{
  char *v1; // edi
  unsigned int v2; // kr08_4
  char result; // al
  int v4; // edi
  int i; // esi
  int v6[113]; // [esp+8h] [ebp-1C8h] BYREF
  int16_t v7; // [esp+1CCh] [ebp-4h]
  char v8; // [esp+1CEh] [ebp-2h]

  memset(v6, 0, sizeof(v6)); /*0x5e35b7*/
  v7 = 0; /*0x5e35b9*/
  v8 = 0; /*0x5e35bb*/
  v6[0] = 40; /*0x5e35c6*/
  v2 = strlen(unk_A8B380) + 1; /*0x5e35ce*/
  v1 = &unk_A8B380[v2++]; /*0x5e35ce*/
  result = v2 - 1; /*0x5e35d4*/
  qmemcpy(&v6[1], &v1[1 - v2], v2 - 1); /*0x5e35dd*/
  v4 = dword_A8DA84; /*0x5e35e6*/
  for ( i = 1; i < v4; ++i ) /*0x5e35f3*/
  {
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v6, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5e3617*/
    result = Event::Dispatch(); /*0x5e361c*/
  }
  return result; /*0x5e3626*/
}
} // namespace gamemd

// 0x5E9AA0
namespace gamemd {
bool sub_5E9AA0(HWND hDlg, int nIDDlgItem, int a3)
{
  WPARAM v5; // ebx
  LRESULT v7; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9ab6*/
  ShowWindow(hWnd, 0); /*0x5e9aba*/
  v5 = 0; /*0x5e9ad3*/
  v7 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5e9ad7*/
  if ( v7 > 0 ) /*0x5e9adb*/
  {
    while ( SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v5, 0) != a3 ) /*0x5e9aed*/
    {
      if ( (int)++v5 >= v7 ) /*0x5e9af6*/
        return ShowWindow(hWnd, 5); /*0x5e9af6*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v5, 0); /*0x5e9b04*/
  }
  return ShowWindow(hWnd, 5); /*0x5e9b13*/
}
} // namespace gamemd

// 0x5E9B60
namespace gamemd {
int Lobby_SelectCountry(HWND a1, void * a2)
{
  int ComboBoxSelected; // edi
  int result; // eax
  LPARAM v5; // ecx

  ComboBoxSelected = GetComboBoxSelected(a1, (int)a2, -1); /*0x5e9b6d*/
  result = CountryCombo::IDToIndex(a2); /*0x5e9b6f*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9b7a*/
  {
    SessionClass::AssignSide((SessionClass *)&dword_A8B238, ComboBoxSelected, 0); /*0x5e9b84*/
    result = dword_A8DA84; /*0x5e9b89*/
    if ( dword_A8DA84 ) /*0x5e9b90*/
// 0x696f90
      return SessionClass::SetPlayerOption((int *)*dword_A8DA78, ComboBoxSelected); /*0x5e9b9a*/
  }
  else
  {
    v5 = dword_A8DA90[result]; /*0x5e9ba2*/
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5e9bc3*/
    {
      *(unsigned int *)&stru_A8B250.__pad_0[4 * result + 76] = ComboBoxSelected; /*0x5e9bc5*/
    }
    else
    {
      *(unsigned int *)&stru_A8B250.__pad_0[4 * result + 76] = -1; /*0x5e9bcf*/
      *(unsigned int *)&stru_A8B250.__pad_0[4 * result + 44] = -1; /*0x5e9bda*/
      *(unsigned int *)&stru_A8B250.__pad_0[4 * result + 108] = -1; /*0x5e9be5*/
    }
  }
  return result; /*0x5e9b9f*/
}
} // namespace gamemd

// 0x5EDD00
namespace gamemd {
wchar_t ** ReadChatMessage(wchar_t ** a1, HWND a2)
{
  size_t v4; // esi
  size_t v5; // esi
  wchar_t *v6; // eax
  WString v8; // [esp+Ch] [ebp-8h] BYREF

  unknown_libname_74(&v8); /*0x5edd0e*/
  GetEditControlText(a2, (SafeDelete *)&v8); /*0x5edd19*/
  v4 = 120; /*0x5edd22*/
  if ( !(uint8_t)WideString::IsASCII((WideString *)&v8) ) /*0x5edd27*/
  {
    v5 = 0; /*0x5edd34*/
    if ( WideString::Length((WideString *)&v8) ) /*0x5edd36*/
    {
      do /*0x5edd5b*/
      {
        if ( (uint16_t)WideString::GetChar((WideString *)&v8, v5) > 0x100u ) /*0x5edd4d*/
          break; /*0x5edd4d*/
        ++v5; /*0x5edd53*/
      }
      while ( v5 < (unsigned int)WideString::Length((WideString *)&v8) ); /*0x5edd5b*/
    }
    v4 = v5 - 1; /*0x5edd5d*/
    if ( v4 <= 0x28 ) /*0x5edd61*/
      v4 = 40; /*0x5edd63*/
  }
  if ( (unsigned int)WideString::Length((WideString *)&v8) > v4 ) /*0x5edd73*/
  {
    String::TruncateTo((String *)&v8, v4); /*0x5edd7a*/
    v6 = WideString::GetOrEmpty_Alt((WideString *)&v8); /*0x5edd83*/
    SendMessageA(a2, 0x4B2u, 0, (LPARAM)v6); /*0x5edd91*/
  }
  WideString::Assign((WideString *)&v8.WString_field_0x04, asc_831D9C); /*0x5edda0*/
  WString::TrimRight(&v8, (const wchar_t **)&v8.WString_field_0x04); /*0x5eddae*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8.WString_field_0x04); /*0x5eddb7*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v8); /*0x5eddc3*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8); /*0x5eddcc*/
  return a1; /*0x5eddd3*/
}
} // namespace gamemd

// 0x5EDEF0
namespace gamemd {
char ** Player_GetTypeString(char ** a1, wchar_t * a2)
{
  if ( a2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5edefa*/
  {
    String::Assign(a1, off_831704); /*0x5edf02*/
    return a1; /*0x5edf07*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5edf11*/
  {
    String::Assign(a1, off_831708); /*0x5edf1c*/
    return a1; /*0x5edf21*/
  }
  else if ( a2 == g_Lobby_PlayerReady ) /*0x5edf2b*/
  {
    String::Assign(a1, off_83170C); /*0x5edf36*/
    return a1; /*0x5edf3b*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerTeam ) /*0x5edf45*/
  {
    String::Assign(a1, off_831710); /*0x5edf4f*/
    return a1; /*0x5edf54*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerSide ) /*0x5edf5e*/
  {
    String::Assign(a1, off_831714); /*0x5edf69*/
    return a1; /*0x5edf6e*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerColor ) /*0x5edf78*/
  {
    String::Assign(a1, off_831718); /*0x5edf83*/
    return a1; /*0x5edf88*/
  }
  else
  {
    if ( a2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x5edf92*/
      String::Assign(a1, off_83171C); /*0x5edf9c*/
    else
      String::Assign(a1, off_83170C); /*0x5edfae*/
    return a1; /*0x5edfa1*/
  }
}
} // namespace gamemd

// 0x5EE200
namespace gamemd {
void E4Recv_5EE200::UpdateObserveButtonWOL(HWND hDlg)
{

  HWND DlgItem; // eax
  IUnknown *v3; // eax
  IUnknown *v4; // esi
  HWND v5; // eax
  IUnknown *v6; // esi
  wchar_t *StringCSF; // eax
  IUnknown *v8; // esi
  wchar_t *v9; // eax

  if ( hDlg ) /*0x5ee207*/
  {
    DlgItem = GetDlgItem(hDlg, 1888); /*0x5ee21a*/
    if ( DlgItem ) /*0x5ee21e*/
      SendMessageA(DlgItem, 0xF1u, g_abs_AC10C8 != 0, 0); /*0x5ee236*/
    if ( g_abs_AC10C8 ) /*0x5ee245*/
      v3 = (IUnknown *)HashTable::Find(g_abs_AC4848, g_abs_831DDC, 0); /*0x5ee24c*/
    else
      v3 = (IUnknown *)HashTable::Find(g_abs_AC4848, g_abs_831DD0, 0); /*0x5ee258*/
    v4 = v3; /*0x5ee25d*/
    v5 = GetDlgItem(hDlg, 1887); /*0x5ee265*/
    CacheDialogInvalidate(v5, (HWND)v4); /*0x5ee26b*/
    v6 = (IUnknown *)GetDlgItem(hDlg, 1741); /*0x5ee27e*/
    if ( v6 ) /*0x5ee282*/
    {
      if ( g_abs_AC10C8 ) /*0x5ee28b*/
        StringCSF = GetStringCSF(g_Str_GUI_Observe, 0, g_abs_8317D8, 6751); /*0x5ee29e*/
      else
        StringCSF = GetStringCSF(g_abs_831DC4, 0, g_abs_8317D8, 6753); /*0x5ee2b1*/
      SendMessageA((HWND)v6, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5ee2bf*/
      InvalidateRect((HWND)v6, 0, 0); /*0x5ee2ca*/
    }
    v8 = (IUnknown *)GetDlgItem(hDlg, 1581); /*0x5ee2d4*/
    if ( v8 ) /*0x5ee2d9*/
    {
      if ( g_abs_AC10C8 ) /*0x5ee2e2*/
      {
        v9 = GetStringCSF(g_Str_GUI_Observe, 0, g_abs_8317D8, 6762); /*0x5ee2f5*/
      }
      else if ( (HWND)Dialog::FindByHandle((void *)0x113) == hDlg ) /*0x5ee303*/
      {
        v9 = GetStringCSF((wchar_t *)g_abs_831DB4, 0, g_abs_8317D8, 6766); /*0x5ee316*/
      }
      else
      {
        v9 = GetStringCSF(g_abs_831DC4, 0, g_abs_8317D8, 6768); /*0x5ee329*/
      }
      SendMessageA((HWND)v8, 0x4B2u, 0, (LPARAM)v9); /*0x5ee337*/
      InvalidateRect((HWND)v8, 0, 0); /*0x5ee342*/
    }
  }

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
  dword_AC11D8 = 0; /*0x5ef2d2*/
  dword_AC11DC = 0; /*0x5ef2d7*/
  dword_AC11E0 = 0; /*0x5ef2dc*/
  dword_AC11E4 = 0; /*0x5ef2e1*/
  return 0; /*0x5ef2e6*/
}
} // namespace gamemd

// 0x5EF2F0
namespace gamemd {
void sub_5EF2F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5ef2fc*/
  dbl_AC1210 = Math::Sqrt(v0 + v0); /*0x5ef30e*/
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
  word_AC120C = 0; /*0x5ef492*/
  word_AC120E = 0; /*0x5ef498*/
  return 0; /*0x5ef49e*/
}
} // namespace gamemd

// 0x5EF4A0
namespace gamemd {
int sub_5EF4A0()
{
  dword_AC1228 = 0; /*0x5ef4a2*/
  dword_AC122C = 0; /*0x5ef4a7*/
  dword_AC1230 = 0; /*0x5ef4ac*/
  return 0; /*0x5ef4b1*/
}
} // namespace gamemd

// 0x5EF4C0
namespace gamemd {
int sub_5EF4C0()
{
  dword_AC1258 = 0; /*0x5ef4c5*/
  dword_AC1250 = 128; /*0x5ef4cf*/
  dword_AC1254 = 128; /*0x5ef4d4*/
  return 128; /*0x5ef4d9*/
}
} // namespace gamemd

// 0x5EFF00
namespace gamemd {
int sub_5EFF00(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  unsigned int *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5eff19*/
  if ( !result ) /*0x5eff20*/
  {
    if ( a2 == 273 ) /*0x5eff28*/
    {
      WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x5eff44*/
      if ( a3 == 2 || a3 > 0x651 && a3 <= 0x655 ) /*0x5eff5d*/
        *WindowLongA = a3; /*0x5eff5f*/
    }
    else if ( a2 == 1175 ) /*0x5eff30*/
    {
      Network::handleTimeout(hWnd); /*0x5eff34*/
      return 0; /*0x5eff3e*/
    }
    return 0; /*0x5eff61*/
  }
  return result; /*0x5eff39*/
}
} // namespace gamemd
