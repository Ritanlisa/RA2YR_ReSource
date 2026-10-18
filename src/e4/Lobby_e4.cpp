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
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x4E5D60
namespace gamemd {  // G42.18 ns repair
int Lobby::InvalidatePlayerSlots(HWND hDlg)
{
  int v3; // edx
  int result; // eax

  int i; // esi
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
    LPARAM v4; // eax
    if ( (*(unsigned int *)&dword_A8B238 == 3 || *(unsigned int *)&dword_A8B238 == 4) /*0x4e5df2*/
      && ((v4 = ((unsigned int *)(dword_A8DA90))[i], v4 == g_Lobby_MaxPlayers) || *(unsigned int *)(v4 + 107) == -1) )
    {
      result = InitComboBoxNone((HWND)hDlg, v3); /*0x4e5dff*/
    }
    else
    {
      result = FillLobbyPlayerSlot((HWND)hDlg, v3); /*0x4e5df6*/
    }
  }
  return result; /*0x4e5e0e*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5EB060
namespace gamemd {
void Lobby::UpdatePlayerLabels()
{

  int v1; // esi
  int v2; // eax
  int PlayerCountMap; // esi
  int v4; // eax
  LPARAM v5; // eax
  int v6; // ebp
  HWND v7; // ebx
  HWND DlgItem; // esi
  wchar_t *v9; // ebx
  wchar_t *v10; // ebp
  wchar_t *StringCSF; // eax
  char *v12; // eax
  LRESULT v13; // eax
  char *v14; // eax
  int v15; // eax
  ObjectClass *v16; // ebp
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
  ObjectClass *v36; // [esp+4h] [ebp-10h]
  int v37; // [esp+8h] [ebp-Ch]
  __int64 v38; // [esp+Ch] [ebp-8h] BYREF

  (v38) = ((v38) & 0xFFFFFFFFull) | ((unsigned long long)((this) & 0xFFFFFFFFull) << 32); /*0x5eb063*/
  if ( dword_A8B23C && !(*((unsigned __int8 (**)(ObjectClass *))dword_A8B23C->ptr_0 + 16))(dword_A8B23C) /*0x5eb07a*/
    || (v33 = 1, Network::IsMultiplayerActive()) )
  {
    v33 = 0; /*0x5eb088*/
  }
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5eb09d*/
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
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5eb0df*/
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
  if ( *(unsigned int *)&dword_A8B238 != 4 ) /*0x5eb10c*/
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
      if ( *(unsigned int *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5eb151*/
      {
        PlayerCountMap = 8; /*0x5eb153*/
      }
      else
      {
        PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5eb165*/
        if ( dword_A8B23C ) /*0x5eb169*/
        {
          v4 = (*((int (**)(ObjectClass *))dword_A8B23C->ptr_0 + 38))(dword_A8B23C); /*0x5eb16d*/
          if ( v4 != -1 && v4 < PlayerCountMap ) /*0x5eb17a*/
            PlayerCountMap = v4; /*0x5eb17c*/
        }
        if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5eb185*/
        {
          if ( Network::IsLobbyFeature() ) /*0x5eb187*/
          {
            PlayerCountMap &= ~1u; /*0x5eb190*/
          }
          else if ( Network::IsMultiplayerActive() ) /*0x5eb195*/
          {
            PlayerCountMap = 2; /*0x5eb19e*/
          }
        }
      }
      if ( (int)v36 > PlayerCountMap ) /*0x5eb1a5*/
      {
        v5 = MEMORY[0xA8DA90][(unsigned int)v36]; /*0x5eb1a7*/
        if ( v5 != g_HouseClass_ObserverFlags /*0x5eb1d2*/
          && (!v5 || v5 != g_Lobby_PlayerTeam && v5 != g_Lobby_PlayerSide && v5 != g_Lobby_PlayerColor) )
        {
          v34 = 1; /*0x5eb1d4*/
        }
      }
      if ( v36 == g_MPCooperativeState && dword_A8B23C ) /*0x5eb1e9*/
        (*((void (**)(ObjectClass *))dword_A8B23C->ptr_0 + 47))(dword_A8B23C); /*0x5eb1ed*/
    }
    if ( v36 )
    {
      if ( v36 == 1 )
      {
        v6 = 1042; /*0x5eb203*/
      }
      else if ( v36 == 2 )
      {
        v6 = 1043; /*0x5eb20f*/
      }
      else if ( v36 == 3 )
      {
        v6 = 1044; /*0x5eb21b*/
      }
      else if ( v36 == 4 )
      {
        v6 = 1045; /*0x5eb227*/
      }
      else if ( v36 == 5 )
      {
        v6 = 1046; /*0x5eb233*/
      }
      else if ( v36 == 6 )
      {
        v6 = 1047; /*0x5eb23f*/
      }
      else
      {
        v6 = v36 != 7 ? -1 : 1048;
      }
    }
    else
    {
      v6 = 1041; /*0x5eb1f7*/
    }
    v7 = (HWND)(((v38) >> 32) & 0xFFFFFFFFu); /*0x5eb259*/
    DlgItem = GetDlgItem((HWND)(((v38) >> 32) & 0xFFFFFFFFu), v6); /*0x5eb265*/
    v35 = !ShowWindow(DlgItem, 0); /*0x5eb27d*/
    SendDlgItemMessageA(v7, v6, 0x14Bu, 0, 0); /*0x5eb282*/
    v9 = (wchar_t *)MEMORY[0xA8DA90][(unsigned int)v36]; /*0x5eb291*/
    v10 = v9; /*0x5eb29a*/
    if ( v9 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eb29c*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5436); /*0x5eb2af*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eb2ba*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 5438); /*0x5eb2cd*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerTeam ) /*0x5eb2d8*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 5440); /*0x5eb2eb*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerSide ) /*0x5eb2f3*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 5442); /*0x5eb306*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerColor ) /*0x5eb30e*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 5444); /*0x5eb321*/
    }
    else if ( v9 == g_Lobby_PlayerReady ) /*0x5eb329*/
    {
      StringCSF = GetStringCSF(aGuiWaiting, 0, g_Str_File_netshare_cpp, 5446); /*0x5eb33c*/
    }
    else
    {
      if ( v9 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eb344*/
        goto LABEL_79; /*0x5eb344*/
      StringCSF = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 5448); /*0x5eb357*/
    }
    v10 = StringCSF; /*0x5eb35c*/
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
    v12 = CharToWideString(unk_A8B380); /*0x5eb3a9*/
    if ( !wcscmp((const wchar_t *)v12, (const wchar_t *)&g_CurrentPlayerName) ) /*0x5eb3b4*/
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
      v14 = CharToWideString(unk_A8B380); /*0x5eb41a*/
      v15 = wcscmp(v10, (const wchar_t *)v14); /*0x5eb421*/
      v16 = v36; /*0x5eb426*/
      if ( v15 ) /*0x5eb42f*/
      {
        if ( (int)v36 < v37 ) /*0x5eb439*/
        {
          if ( !v34 || v36 != g_MPCooperativeState ) /*0x5eb44d*/
            goto LABEL_111; /*0x5eb44d*/
          if ( *(unsigned int *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5eb458*/
          {
            v17 = 8; /*0x5eb45a*/
          }
          else
          {
            v17 = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5eb46c*/
            if ( dword_A8B23C ) /*0x5eb470*/
            {
              v18 = (*((int (**)(ObjectClass *))dword_A8B23C->ptr_0 + 38))(dword_A8B23C); /*0x5eb474*/
              if ( v18 != -1 && v18 < v17 ) /*0x5eb481*/
                v17 = v18; /*0x5eb483*/
            }
            if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5eb48c*/
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
          if ( (int)v36 < v17 ) /*0x5eb4ac*/
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
    DeleteAndZero::Alt((DeleteAndZero *)&v38); /*0x5eb638*/
    v36 = (ObjectClass *)v16->ptr_0 + 1); /*0x5eb641*/
  }
  while ( (int)&v16->ptr_0 + 1 < 8 );

}
} // namespace gamemd
// 0x5EBA00
namespace gamemd {
int Lobby::SetupPlayerWidgets(HWND hDlg)
{

  int v3; // ebp
  int v4; // ebx

  ObjectClass *v1; // esi
  v1 = (gamemd::ObjectClass *)(g_MPCooperativeState); /*0x5eba04*/
  if ( (int)g_MPCooperativeState >= 0 ) /*0x5eba0f*/
  {
    if ( !g_MPCooperativeState ) /*0x5eba15*/
      v1 = (ObjectClass *)dword_A8BB0C; /*0x5eba17*/
    if ( (int)v1 < 8 ) /*0x5eba20*/
    {
      if ( v1 ) /*0x5eba2a*/
      {
        if ( v1 == 1 ) /*0x5eba3b*/
        {
          v3 = 1747; /*0x5eba3d*/
          v4 = 1042; /*0x5eba42*/
        }
        else if ( v1 == 2 ) /*0x5eba4c*/
        {
          v3 = 1748; /*0x5eba4e*/
          v4 = 1043; /*0x5eba53*/
        }
        else if ( v1 == 3 ) /*0x5eba5d*/
        {
          v3 = 1749; /*0x5eba5f*/
          v4 = 1044; /*0x5eba64*/
        }
        else if ( v1 == 4 ) /*0x5eba6e*/
        {
          v3 = 1750; /*0x5eba70*/
          v4 = 1045; /*0x5eba75*/
        }
        else if ( v1 == 5 ) /*0x5eba7f*/
        {
          v3 = 1751; /*0x5eba81*/
          v4 = 1046; /*0x5eba86*/
        }
        else if ( v1 == 6 ) /*0x5eba90*/
        {
          v3 = 1752; /*0x5eba92*/
          v4 = 1047; /*0x5eba97*/
        }
        else if ( v1 == 7 ) /*0x5ebaa1*/
        {
          v3 = 1753; /*0x5ebaa3*/
          v4 = 1048; /*0x5ebaa8*/
        }
        else
        {
          v3 = -1; /*0x5ebaaf*/
          v4 = -1; /*0x5ebab2*/
        }
      }
      else
      {
        v3 = 1746; /*0x5eba2c*/
        v4 = 1041; /*0x5eba31*/
      }
      int nIDDlgItem; // [esp+10h] [ebp-14h]
      nIDDlgItem = GetResourceIDHardcodedCSF(v1); /*0x5ebabe*/
      HWND ResourceIDCSF; // [esp+Ch] [ebp-18h]
      ResourceIDCSF = (HWND)GetResourceIDCSF(v1); /*0x5ebac9*/
      HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
      ResourceID2CSF = (HWND)GetResourceID2CSF(v1); /*0x5ebad4*/
      int ResourceID3CSF; // [esp+18h] [ebp-Ch]
      ResourceID3CSF = GetResourceID3CSF(v1); /*0x5ebadf*/
      int ResourceID4CSF; // eax
      ResourceID4CSF = GetResourceID4CSF(v1); /*0x5ebae3*/
      LPARAM v6; // esi
      v6 = dword_A8DA90[(unsigned int)v1]; /*0x5ebae8*/
      int v19; // [esp+1Ch] [ebp-8h]
      v19 = ResourceID4CSF; /*0x5ebaef*/
      bool v11; // [esp+Bh] [ebp-19h]
      v11 = v6 == g_Lobby_MaxPlayers /*0x5ebb24*/
      || v6
      && v6 != g_HouseClass_ObserverFlags
      && v6 != g_Lobby_PlayerCount
      && (wchar_t *)v6 != g_Lobby_PlayerReady
      && *(unsigned int *)(v6 + 107) == -1;
      HWND DlgItem; // ebp
      DlgItem = GetDlgItem((HWND)hDlg, v3); /*0x5ebb33*/
      HWND v8; // ebx
      v8 = GetDlgItem((HWND)hDlg, v4); /*0x5ebb39*/
      HWND hWnd; // [esp+20h] [ebp-4h]
      hWnd = GetDlgItem((HWND)hDlg, nIDDlgItem); /*0x5ebb47*/
      HWND v13; // [esp+Ch] [ebp-18h]
      v13 = GetDlgItem((HWND)hDlg, (int)ResourceIDCSF); /*0x5ebb53*/
      HWND v17; // [esp+14h] [ebp-10h]
      v17 = GetDlgItem((HWND)hDlg, (int)ResourceID2CSF); /*0x5ebb5b*/
      HWND nIDDlgItema; // [esp+10h] [ebp-14h]
      nIDDlgItema = GetDlgItem((HWND)hDlg, ResourceID3CSF); /*0x5ebb6b*/
      HWND v9; // edi
      v9 = GetDlgItem((HWND)hDlg, v19); /*0x5ebb79*/
      ShowWindow(DlgItem, 5); /*0x5ebb7e*/
      ShowWindow(v8, 5); /*0x5ebb83*/
      ShowWindow(hWnd, 5); /*0x5ebb8c*/
      if ( v11 ) /*0x5ebb96*/
      {
        ShowWindow(v13, 0); /*0x5ebbd7*/
        ShowWindow(nIDDlgItema, 0); /*0x5ebbe0*/
        ShowWindow(v9, 0); /*0x5ebbe5*/
      }
      else
      {
        ShowWindow(v13, 5); /*0x5ebb9f*/
        ShowWindow(nIDDlgItema, 5); /*0x5ebba8*/
        if ( *(unsigned int *)&dword_A8B238 != 4 || !Network::IsLobbyFeature() ) /*0x5ebbb3*/
        {
          ShowWindow(v9, 5); /*0x5ebbbf*/
          return ShowWindow(v17, 5); /*0x5ebbcf*/
        }
      }
      return ShowWindow(v17, 5); /*0x5ebbee*/
    }
  }
  int result; // eax
  return result; /*0x5ebbca*/

}
} // namespace gamemd
// 0x77DB90
namespace gamemd {
int Lobby::BuildPlayerList()
{

  wchar_t **v1; // esi
  wchar_t *v2; // edi
  char **v3; // eax
  const char **PlayerTypeString; // eax
  char *v5; // eax
  ObjectClass v7; // [esp+8h] [ebp-110h] BYREF

  strcpy((char *)&v7.uniqueId, asc_84A480); /*0x77dbb5*/
  v1 = (wchar_t **)MEMORY[0xA8DA90]; /*0x77dbbe*/
  do /*0x77dc6e*/
  {
    v2 = *v1; /*0x77dbc3*/
    unknown_libname_73(&v7); /*0x77dbc9*/
    if ( (unsigned __int8)IsKnownPointer((ObjectClass *)v2) ) /*0x77dbd0*/
    {
      WideString::Assign((wchar_t **)&v7.ptr_4, v2); /*0x77dbde*/
      v3 = ToWideStringCharAlt((char **)&v7.ptr_8, (const wchar_t **)&v7.ptr_4); /*0x77dbeb*/
      String::Reassign((String *)&v7, (const char **)v3); /*0x77dbf5*/
      DeleteAndZero((ObjectClass *)&v7.ptr_8); /*0x77dbfe*/
      DeleteAndZero::Alt((DeleteAndZero *)&v7.ptr_4); /*0x77dc07*/
    }
    else
    {
      PlayerTypeString = (const char **)GetPlayerTypeString((String *)&v7.ptr_C, v2); /*0x77dc14*/
      String::Reassign((String *)&v7, PlayerTypeString); /*0x77dc1e*/
      DeleteAndZero((ObjectClass *)&v7.ptr_C); /*0x77dc27*/
    }
    v5 = String::GetOrEmpty((String *)&v7); /*0x77dc35*/
    strncat((char *)&v7.uniqueId, v5, 0x100u); /*0x77dc40*/
    strncat((char *)&v7.uniqueId, Delimiter, 0x100u); /*0x77dc54*/
    DeleteAndZero(&v7); /*0x77dc60*/
    ++v1; /*0x77dc65*/
  }
  while ( (int)v1 < (int)&MEMORY[0xA8DAB0] ); /*0x77dc6e*/
  return (*(int (**)(LPVOID, int *))(*(unsigned int *)ppv + 60))(ppv, &v7.uniqueId); /*0x77dc84*/

}
} // namespace gamemd
