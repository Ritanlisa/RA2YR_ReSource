// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"

// 0x4E5D60
namespace gamemd {
int Lobby::InvalidatePlayerSlots()
{
  int i; // esi
  int v3; // edx
  int v4; // eax
  int result; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v3 = 1902; /*0x4e5d76*/
          break;
        case 2:
          v3 = 1903; /*0x4e5d82*/
          break;
        case 3:
          v3 = 1904; /*0x4e5d8e*/
          break;
        case 4:
          v3 = 1905; /*0x4e5d9a*/
          break;
        case 5:
          v3 = 1906; /*0x4e5da6*/
          break;
        case 6:
          v3 = 1907; /*0x4e5db2*/
          break;
        default:
          v3 = i != 7 ? -1 : 1908;
          break;
      }
    }
    else
    {
      v3 = 1901; /*0x4e5d6a*/
    }
    if ( (g_GameMode_Current == 3 || g_GameMode_Current == 4) /*0x4e5df2*/
      && ((v4 = *(&g_NetworkPlayerName + i), v4 == g_Lobby_MaxPlayers) || *(unsigned int *)(v4 + 107) == -1) )
    {
      result = InitComboBoxNone(hDlg, v3); /*0x4e5dff*/
    }
    else
    {
      result = FillLobbyPlayerSlot(hDlg, v3); /*0x4e5df6*/
    }
  }
  return result; /*0x4e5e0e*/
}
} // namespace gamemd
// 0x5EB060
namespace gamemd {
void Lobby::UpdatePlayerLabels()
{
  int v1; // esi
  int v2; // eax
  int PlayerCount; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  Lobby * v7;
  HWND DlgItem; // esi
  wchar_t *v9; // ebx
  wchar_t *v10; // ebp
  wchar_t *String; // eax
  char *v12; // eax
  LRESULT v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // ebx
  int v18; // eax
  wchar_t *v19; // eax
  LRESULT v20; // eax
  wchar_t *v21; // eax
  LRESULT v22; // eax
  wchar_t *v23; // eax
  LRESULT v24; // eax
  wchar_t *v25; // eax
  LRESULT v26; // eax
  wchar_t *v27; // eax
  LRESULT v28; // eax
  wchar_t *v29; // eax
  LRESULT v30; // eax
  LRESULT v31; // eax
  wchar_t *v32; // eax
  char v33; // [esp+1h] [ebp-13h]
  char v34; // [esp+2h] [ebp-12h]
  bool v35; // [esp+3h] [ebp-11h]
  int v36; // [esp+4h] [ebp-10h]
  int v37; // [esp+8h] [ebp-Ch]
  void *v38; // [esp+Ch] [ebp-8h] BYREF
  Lobby * hDlg;

  hDlg = this; /*0x5eb063*/
  if ( g_GameStateFlags /*0x5eb07a*/
    && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 64))(g_GameStateFlags)
    || (v33 = 1, Network::IsMultiplayerActive()) )
  {
    v33 = 0; /*0x5eb088*/
  }
  if ( g_GameMode_Current[0] == 4 ) /*0x5eb09d*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb0a8*/
      v1 = 6; /*0x5eb0b8*/
    else
      v1 = 2; /*0x5eb0b1*/
  }
  else
  {
    v1 = 8; /*0x5eb0bf*/
  }
  v37 = v1; /*0x5eb0c9*/
  if ( g_MPCooperativeState ) /*0x5eb0cf*/
    goto LABEL_26; /*0x5eb0cf*/
  if ( v33 ) /*0x5eb0d7*/
    goto LABEL_25; /*0x5eb0d7*/
  if ( g_GameMode_Current[0] == 4 ) /*0x5eb0df*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb0ea*/
      v2 = 6; /*0x5eb0fa*/
    else
      v2 = 2; /*0x5eb0f3*/
  }
  else
  {
    v2 = 8; /*0x5eb101*/
  }
  if ( g_GameMode_Current[0] != 4 ) /*0x5eb10c*/
  {
    if ( v2 >= 8 ) /*0x5eb118*/
      goto LABEL_24; /*0x5eb118*/
    goto LABEL_23; /*0x5eb118*/
  }
  if ( v2 < 6 ) /*0x5eb111*/
  LABEL_23:
    ++v2; /*0x5eb11a*/
  LABEL_24:
  if ( v1 < v2 ) /*0x5eb11d*/
  LABEL_25:
    v37 = v1 + 1; /*0x5eb11f*/
  LABEL_26:
  v36 = 0; /*0x5eb124*/
  do
  {
    v34 = 0; /*0x5eb13d*/
    if ( v36 == g_MPCooperativeState ) /*0x5eb142*/
    {
      if ( g_GameRulesOptions == -1 ) /*0x5eb151*/
      {
        PlayerCount = 8; /*0x5eb153*/
      }
      else
      {
        PlayerCount = ReadPlayerCountMap(g_GameRulesOptions); /*0x5eb165*/
        if ( g_GameStateFlags ) /*0x5eb169*/
        {
          v4 = (*(int (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 152))(g_GameStateFlags); /*0x5eb16d*/
          if ( v4 != -1 && v4 < PlayerCount ) /*0x5eb17a*/
            PlayerCount = v4; /*0x5eb17c*/
        }
        if ( g_GameMode_Current[0] == 4 ) /*0x5eb185*/
        {
          if ( Network::IsLobbyFeature() ) /*0x5eb187*/
          {
            PlayerCount &= ~1u; /*0x5eb190*/
          }
          else if ( Network::IsMultiplayerActive() ) /*0x5eb195*/
          {
            PlayerCount = 2; /*0x5eb19e*/
          }
        }
      }
      if ( v36 > PlayerCount ) /*0x5eb1a5*/
      {
        v5 = *(&g_NetworkPlayerName + v36); /*0x5eb1a7*/
        if ( v5 != g_HouseClass_ObserverFlags /*0x5eb1d2*/
          && (!v5 || v5 != g_Lobby_PlayerTeam && v5 != g_Lobby_PlayerSide && v5 != g_Lobby_PlayerColor) )
        {
          v34 = 1; /*0x5eb1d4*/
        }
      }
      if ( v36 == g_MPCooperativeState && g_GameStateFlags ) /*0x5eb1e9*/
        (*(void (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 188))(g_GameStateFlags); /*0x5eb1ed*/
    }
    if ( v36 )
    {
      switch ( v36 )
      {
        case 1:
          v6 = 1042; /*0x5eb203*/
          break;
        case 2:
          v6 = 1043; /*0x5eb20f*/
          break;
        case 3:
          v6 = 1044; /*0x5eb21b*/
          break;
        case 4:
          v6 = 1045; /*0x5eb227*/
          break;
        case 5:
          v6 = 1046; /*0x5eb233*/
          break;
        case 6:
          v6 = 1047; /*0x5eb23f*/
          break;
        default:
          v6 = v36 != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5eb1f7*/
    }
    v7 = hDlg; /*0x5eb259*/
    DlgItem = GetDlgItem(hDlg, v6); /*0x5eb265*/
    v35 = !ShowWindow(DlgItem, 0); /*0x5eb27d*/
    SendDlgItemMessageA(v7, v6, 0x14Bu, 0, 0); /*0x5eb282*/
    v9 = (wchar_t *)*(&g_NetworkPlayerName + v36); /*0x5eb291*/
    v10 = v9; /*0x5eb29a*/
    if ( v9 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eb29c*/
    {
      String = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5436); /*0x5eb2af*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eb2ba*/
    {
      String = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 5438); /*0x5eb2cd*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerTeam ) /*0x5eb2d8*/
    {
      String = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 5440); /*0x5eb2eb*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerSide ) /*0x5eb2f3*/
    {
      String = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 5442); /*0x5eb306*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerColor ) /*0x5eb30e*/
    {
      String = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 5444); /*0x5eb321*/
    }
    else if ( v9 == g_Lobby_PlayerReady ) /*0x5eb329*/
    {
      String = GetStringCSF(aGuiWaiting, 0, g_Str_File_netshare_cpp, 5446); /*0x5eb33c*/
    }
    else
    {
      if ( v9 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eb344*/
        goto LABEL_79; /*0x5eb344*/
      String = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 5448); /*0x5eb357*/
    }
    v10 = String; /*0x5eb35c*/
  LABEL_79:
    if ( v9 /*0x5eb380*/
      && (v9 == (wchar_t *)g_Lobby_PlayerTeam
       || v9 == (wchar_t *)g_Lobby_PlayerSide
       || v9 == (wchar_t *)g_Lobby_PlayerColor)
      && !v33 )
    {
      v10 = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5455); /*0x5eb398*/
    }
    WideString::Assign((wchar_t **)&v38, v10); /*0x5eb39f*/
    v12 = CharToWideString(g_GameSetupBuffer); /*0x5eb3a9*/
    if ( !wcscmp((const wchar_t *)v12, g_CurrentPlayerName) ) /*0x5eb3b4*/
    {
      if ( v9 /*0x5eb3fe*/
        && v9 != (wchar_t *)g_HouseClass_ObserverFlags
        && v9 != (wchar_t *)g_Lobby_PlayerCount
        && v9 != g_Lobby_PlayerReady
        && v9 != (wchar_t *)g_Lobby_MaxPlayers
        && v9 != (wchar_t *)g_Lobby_PlayerTeam
        && v9 != (wchar_t *)g_Lobby_PlayerSide
        && v9 != (wchar_t *)g_Lobby_PlayerColor )
      {
        v13 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v10); /*0x5eb409*/
        SendMessageA(DlgItem, 0x151u, v13, (LPARAM)v9); /*0x5eb413*/
      }
      v14 = CharToWideString(g_GameSetupBuffer); /*0x5eb41a*/
      v15 = wcscmp(v10, (const wchar_t *)v14); /*0x5eb421*/
      v16 = v36; /*0x5eb426*/
      if ( v15 ) /*0x5eb42f*/
      {
        if ( v36 < v37 ) /*0x5eb439*/
        {
          if ( !v34 || v36 != g_MPCooperativeState ) /*0x5eb44d*/
            goto LABEL_111; /*0x5eb44d*/
          if ( g_GameRulesOptions == -1 ) /*0x5eb458*/
          {
            v17 = 8; /*0x5eb45a*/
          }
          else
          {
            v17 = ReadPlayerCountMap(g_GameRulesOptions); /*0x5eb46c*/
            if ( g_GameStateFlags ) /*0x5eb470*/
            {
              v18 = (*(int (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 152))(g_GameStateFlags); /*0x5eb474*/
              if ( v18 != -1 && v18 < v17 ) /*0x5eb481*/
                v17 = v18; /*0x5eb483*/
            }
            if ( g_GameMode_Current[0] == 4 ) /*0x5eb48c*/
            {
              if ( Network::IsLobbyFeature() ) /*0x5eb48e*/
              {
                v17 &= ~1u; /*0x5eb497*/
              }
              else if ( Network::IsMultiplayerActive() ) /*0x5eb49c*/
              {
                v17 = 2; /*0x5eb4a5*/
              }
            }
          }
          if ( v36 < v17 ) /*0x5eb4ac*/
          {
  LABEL_111:
            v19 = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5479); /*0x5eb4bf*/
            v20 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v19); /*0x5eb4cd*/
            SendMessageA(DlgItem, 0x151u, v20, g_HouseClass_ObserverFlags); /*0x5eb4dd*/
          }
        }
        if ( v36 == g_MPCooperativeState ) /*0x5eb4e5*/
        {
          v21 = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 5489); /*0x5eb4f8*/
          v22 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v21); /*0x5eb506*/
          SendMessageA(DlgItem, 0x151u, v22, g_Lobby_MaxPlayers); /*0x5eb516*/
        }
        v23 = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 5496); /*0x5eb529*/
        v24 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v23); /*0x5eb537*/
        SendMessageA(DlgItem, 0x151u, v24, g_Lobby_PlayerCount); /*0x5eb547*/
        if ( v33 && !v34 ) /*0x5eb55b*/
        {
          v25 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 5504); /*0x5eb572*/
          v26 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v25); /*0x5eb580*/
          SendMessageA(DlgItem, 0x151u, v26, g_Lobby_PlayerTeam); /*0x5eb590*/
          v27 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 5510); /*0x5eb5a3*/
          v28 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v27); /*0x5eb5b1*/
          SendMessageA(DlgItem, 0x151u, v28, g_Lobby_PlayerSide); /*0x5eb5c1*/
          v29 = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 5516); /*0x5eb5d4*/
          v30 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v29); /*0x5eb5e2*/
          SendMessageA(DlgItem, 0x151u, v30, g_Lobby_PlayerColor); /*0x5eb5f2*/
        }
      }
    }
    else
    {
      v31 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v10); /*0x5eb5ff*/
      SendMessageA(DlgItem, 0x151u, v31, (LPARAM)v9); /*0x5eb609*/
      v16 = v36; /*0x5eb60b*/
    }
    v32 = WideString::GetOrEmpty_Alt((wchar_t **)&v38); /*0x5eb613*/
    SendMessageA(DlgItem, 0x4C0u, 0xFFFFFFFF, (LPARAM)v32); /*0x5eb621*/
    if ( !v35 ) /*0x5eb629*/
      ShowWindow(DlgItem, 5); /*0x5eb62e*/
    DeleteAndZero::Alt(&v38); /*0x5eb638*/
    v36 = v16 + 1; /*0x5eb641*/
  }
  while ( v16 + 1 < 8 );
}
} // namespace gamemd
// 0x5EBA00
namespace gamemd {
void Lobby::SetupPlayerWidgets()
{
  int v1; // esi
  int v3; // ebp
  int v4; // ebx
  int ResourceID4; // eax
  int v6; // esi
  HWND DlgItem; // ebp
  HWND v8; // ebx
  HWND v9; // edi
  bool v10; // [esp+Bh] [ebp-19h]
  HWND ResourceID; // [esp+Ch] [ebp-18h]
  HWND v12; // [esp+Ch] [ebp-18h]
  int nIDDlgItem; // [esp+10h] [ebp-14h]
  HWND nIDDlgItema; // [esp+10h] [ebp-14h]
  HWND ResourceID2; // [esp+14h] [ebp-10h]
  HWND v16; // [esp+14h] [ebp-10h]
  int ResourceID3; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]
  HWND hWnd; // [esp+20h] [ebp-4h]

  v1 = g_MPCooperativeState; /*0x5eba04*/
  if ( g_MPCooperativeState >= 0 ) /*0x5eba0f*/
  {
    if ( !g_MPCooperativeState ) /*0x5eba15*/
      v1 = dword_A8BB0C; /*0x5eba17*/
    if ( v1 < 8 ) /*0x5eba20*/
    {
      if ( v1 ) /*0x5eba2a*/
      {
        switch ( v1 ) /*0x5eba3b*/
        {
          case 1: /*0x5eba3b*/
            v3 = 1747; /*0x5eba3d*/
            v4 = 1042; /*0x5eba42*/
            break;
          case 2: /*0x5eba3b*/
            v3 = 1748; /*0x5eba4e*/
            v4 = 1043; /*0x5eba53*/
            break;
          case 3: /*0x5eba3b*/
            v3 = 1749; /*0x5eba5f*/
            v4 = 1044; /*0x5eba64*/
            break;
          case 4: /*0x5eba3b*/
            v3 = 1750; /*0x5eba70*/
            v4 = 1045; /*0x5eba75*/
            break;
          case 5: /*0x5eba3b*/
            v3 = 1751; /*0x5eba81*/
            v4 = 1046; /*0x5eba86*/
            break;
          case 6: /*0x5eba3b*/
            v3 = 1752; /*0x5eba92*/
            v4 = 1047; /*0x5eba97*/
            break;
          case 7: /*0x5eba3b*/
            v3 = 1753; /*0x5ebaa3*/
            v4 = 1048; /*0x5ebaa8*/
            break;
          default:
            v3 = -1; /*0x5ebaaf*/
            v4 = -1; /*0x5ebab2*/
            break;
        }
      }
      else
      {
        v3 = 1746; /*0x5eba2c*/
        v4 = 1041; /*0x5eba31*/
      }
      nIDDlgItem = GetResourceIDHardcodedCSF((void *)v1); /*0x5ebabe*/
      ResourceID = (HWND)GetResourceIDCSF((void *)v1); /*0x5ebac9*/
      ResourceID2 = (HWND)GetResourceID2CSF((void *)v1); /*0x5ebad4*/
      ResourceID3 = GetResourceID3CSF((void *)v1); /*0x5ebadf*/
      ResourceID4 = GetResourceID4CSF((void *)v1); /*0x5ebae3*/
      v6 = *(&g_NetworkPlayerName + v1); /*0x5ebae8*/
      v18 = ResourceID4; /*0x5ebaef*/
      v10 = v6 == g_Lobby_MaxPlayers /*0x5ebb24*/
         || v6
         && v6 != g_HouseClass_ObserverFlags
         && v6 != g_Lobby_PlayerCount
         && (wchar_t *)v6 != g_Lobby_PlayerReady
         && *(unsigned int *)(v6 + 107) == -1;
      DlgItem = GetDlgItem(hDlg, v3); /*0x5ebb33*/
      v8 = GetDlgItem(hDlg, v4); /*0x5ebb39*/
      hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5ebb47*/
      v12 = GetDlgItem(hDlg, (int)ResourceID); /*0x5ebb53*/
      v16 = GetDlgItem(hDlg, (int)ResourceID2); /*0x5ebb5b*/
      nIDDlgItema = GetDlgItem(hDlg, ResourceID3); /*0x5ebb6b*/
      v9 = GetDlgItem(hDlg, v18); /*0x5ebb79*/
      ShowWindow(DlgItem, 5); /*0x5ebb7e*/
      ShowWindow(v8, 5); /*0x5ebb83*/
      ShowWindow(hWnd, 5); /*0x5ebb8c*/
      if ( v10 ) /*0x5ebb96*/
      {
        ShowWindow(v12, 0); /*0x5ebbd7*/
        ShowWindow(nIDDlgItema, 0); /*0x5ebbe0*/
        ShowWindow(v9, 0); /*0x5ebbe5*/
      }
      else
      {
        ShowWindow(v12, 5); /*0x5ebb9f*/
        ShowWindow(nIDDlgItema, 5); /*0x5ebba8*/
        if ( g_GameMode_Current[0] != 4 || !Network::IsLobbyFeature() ) /*0x5ebbb3*/
        {
          ShowWindow(v9, 5); /*0x5ebbbf*/
          ShowWindow(v16, 5); /*0x5ebbc8*/
          return; /*0x5ebbcf*/
        }
      }
      ShowWindow(v16, 5); /*0x5ebbee*/
    }
  }
}
} // namespace gamemd
// 0x77DB90
namespace gamemd {
int Lobby::BuildPlayerList()
{
  wchar_t **v0; // esi
  wchar_t *v1; // edi
  char **v2; // eax
  const char **v3; // eax
  char *v4; // eax
  void *v6; // [esp+8h] [ebp-110h] BYREF
  void *v7; // [esp+Ch] [ebp-10Ch] BYREF
  void *v8; // [esp+10h] [ebp-108h] BYREF
  void *v9; // [esp+14h] [ebp-104h] BYREF
  char Destination[256]; // [esp+18h] [ebp-100h] BYREF

  strcpy(Destination, asc_84A480); /*0x77dbb5*/
  v0 = (wchar_t **)&g_NetworkPlayerName; /*0x77dbbe*/
  do /*0x77dc6e*/
  {
    v1 = *v0; /*0x77dbc3*/
    unknown_libname_73(&v6); /*0x77dbc9*/
    if ( IsKnownPointer(v1) ) /*0x77dbd0*/
    {
      WideString::Assign((wchar_t **)&v7, v1); /*0x77dbde*/
      v2 = ToWideStringCharAlt((char **)&v8, (const wchar_t **)&v7); /*0x77dbeb*/
      String::Reassign((char **)&v6, (const char **)v2); /*0x77dbf5*/
      DeleteAndZero(&v8); /*0x77dbfe*/
      DeleteAndZero::Alt(&v7); /*0x77dc07*/
    }
    else
    {
      v3 = (const char **)GetPlayerTypeString(&v9, v1); /*0x77dc14*/
      String::Reassign((char **)&v6, v3); /*0x77dc1e*/
      DeleteAndZero(&v9); /*0x77dc27*/
    }
    v4 = String::GetOrEmpty((char **)&v6); /*0x77dc35*/
    strncat(Destination, v4, 0x100u); /*0x77dc40*/
    strncat(Destination, Delimiter, 0x100u); /*0x77dc54*/
    DeleteAndZero(&v6); /*0x77dc60*/
    ++v0; /*0x77dc65*/
  }
  while ( (int)v0 < (int)&g_PlayerNameListEnd ); /*0x77dc6e*/
  return (*(int (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 60))(ppv, Destination); /*0x77dc84*/
}
} // namespace gamemd