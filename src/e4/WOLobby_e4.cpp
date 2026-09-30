// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/WOLobby_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/WWMouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"

// 0x5E3850
namespace gamemd {
int INIClass::WOLobby_Play(void * a1, void * a2)
{

  LPVOID v2; // ebx
  int result; // eax
  int i; // esi
  char *v6; // eax
  char v7[108]; // [esp+14h] [ebp-234h] BYREF
  unsigned int v8[113]; // [esp+80h] [ebp-1C8h] BYREF
  int16_t v9; // [esp+244h] [ebp-4h]
  char v10; // [esp+246h] [ebp-2h]
v2 = (LPVOID)(ppv);
  if ( ppv ) /*0x5e3864*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3875*/
    strcpy(&v7[36], a1); /*0x5e3892*/
    return (*(int (**, unsigned int a2, unsigned int a1)(LPVOID, char *, const char *))(*(unsigned int *)v2 + 56))(v2, v7, a2); /*0x5e38a3*/
  }
  else
  {
    memset(v8, 0, sizeof(v8)); /*0x5e38c6*/
    v9 = 0; /*0x5e38c8*/
    v10 = 0; /*0x5e38ca*/
    v8[0] = 24; /*0x5e38d5*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5e38f6*/
    strcpy((char *)&v8[11] + 3, a2); /*0x5e3915*/
    dword_A8D7F7 = Session::GetPlayerColor(dword_A8B238); /*0x5e392d*/
    dword_A8D7FB = WideString::Hash(word_A8D610); /*0x5e3937*/
    result = dword_A8DA84; /*0x5e393c*/
    for ( i = 1; i < dword_A8DA84; ++i ) /*0x5e3948*/
    {
      v6 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * i)); /*0x5e3953*/
      if ( !_strcmpi(v6, a1) ) /*0x5e3959*/
      {
        this->Debug::Log(); /*0x5e3974*/
        Network::SendMessage((int)unk_A8E9C0, (int)v8, 455, 1, *(unsigned int *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5e39a0*/
        this->Event::Dispatch(); /*0x5e39a5*/
      }
      result = dword_A8DA84; /*0x5e39aa*/
    }
  }
  return result; /*0x5e38a6*/

}
}
// 0x78F7F0
int WOLobby::SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd)
{
    unsigned int v14 = 0;  /* G37 hoist */
    unsigned int v14 = 0;  /* G37 hoist */
    unsigned int v28 = 0;  /* G37 hoist */
    unsigned int v26 = 0;  /* G37 hoist */
    unsigned int v25 = 0;  /* G37 hoist */
    unsigned int v14 = 0;  /* G37 hoist */

  int result; // eax
  int v5; // ecx
  HWND DlgItem; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // ebx
  HWND v10; // ebx
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  HWND v13; // esi
  int v14; // esi
  wchar_t *v15; // eax
  HWND v16; // ebx
  int v17; // esi
  unsigned int v18; // edi
  HWND v19; // eax
  HWND v20; // esi
  wchar_t **v21; // eax
  wchar_t *v22; // eax
  wchar_t **SkirmishMenuOwnerName; // eax
  wchar_t *v24; // eax
  Skirmish *v25; // esi
  Skirmish *v26; // ecx
  wchar_t *v27; // eax
  Skirmish *v28; // esi
  LRESULT v29; // eax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  int v32; // ebx
  size_t v33; // esi
  wchar_t *v34; // edi
  wchar_t *v35; // eax
  wchar_t *v36; // eax
  wchar_t *v37; // ebp
  const wchar_t *v38; // esi
  wchar_t *v39; // edi
  wchar_t v40; // ax
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  size_t v43; // esi
  wchar_t *v... [59148 chars total]
}

// 0x791B10
int WOLobby::ChatDlgProc(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd)
{

  int result; // eax
  HWND v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  HWND v8; // eax
  HWND v9; // edi
  wchar_t **v10; // eax
  wchar_t *v11; // eax
  wchar_t **SkirmishMenuOwnerName; // eax
  wchar_t *v13; // eax
  Skirmish *v14; // esi
  HWND v15; // esi
  int v16; // esi
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  int v21; // ebx
  size_t v22; // esi
  wchar_t *v23; // edi
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // ebp
  const wchar_t *v27; // esi
  ObjectClass **p_nextObject; // edi
  wchar_t v29; // ax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  size_t v32; // esi
  wchar_t *v33; // edi
  wchar_t *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // eax
  wchar_t *v37; // edi
  size_t v38; // eax
  int v39; // eax
  const wchar_t *i; // esi
  char *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // e... [27756 chars total]
}

// 0x603F60
namespace gamemd {
wchar_t ** WOLobby_Setup(wchar_t ** a1, HWND a2, LPARAM a3)
{
  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  wchar_t *v7; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v7); /*0x603f6d*/
  lParam[0] = a3; /*0x603f83*/
  lParam[1] = -1; /*0x603f87*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f8f*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v7); /*0x603f9c*/
  DeleteAndZero::Alt((DeleteAndZero *)&v7); /*0x603fa5*/
  return a1; /*0x603fac*/
}
} // namespace gamemd

// 0x72BAC0
namespace gamemd {
char sub_72BAC0()
{
  char result; // al

  result = byte_B0FD51; /*0x72bac0*/
  if ( !byte_B0FD51 ) /*0x72bac7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bad3*/
      dword_B0FB2C = LoadFileSHP(off_844DBC, (bool *)&byte_B0FD50); /*0x72bae5*/
    result = LoadPaletteSimple(off_844DC0, &dword_B0FD54, &dword_B0FD58); /*0x72bafa*/
    byte_B0FD51 = 1; /*0x72baff*/
  }
  return result; /*0x72bb06*/
}
} // namespace gamemd

// 0x72BB10
namespace gamemd {
void sub_72BB10()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1441] ) /*0x72bb1a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1440] ) /*0x72bb22*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[892]; /*0x72bb25*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[892] ) /*0x72bb2d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[892]); /*0x72bb31*/
        RA2_OPDEL(v1); /*0x72bb37*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1440] = 0; /*0x72bb3f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[892] = 0; /*0x72bb4b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1444] ) /*0x72bb53*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1444]); /*0x72bb56*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1444] = 0; /*0x72bb5e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448] ) /*0x72bb6c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1448])( /*0x72bb72*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448] = 0; /*0x72bb74*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1441] = 0; /*0x72bb7a*/
}
} // namespace gamemd

// 0x781090
namespace gamemd {
CampaignScore * WOLobby_Get(wchar_t ** a1, HWND a2, WPARAM wParam)
{
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  char v7[108]; // [esp+4h] [ebp-6Ch] BYREF

  if ( wParam == -1 ) /*0x78109d*/
  {
    StringCSF = GetStringCSF(aSttLobbylistus, 0, g_Str_File_wonline_cpp, 3050); /*0x7810a4*/
  }
  else
  {
    v5 = SendMessageA(a2, 0x199u, wParam, 0); /*0x7810af*/
    if ( v5 >= 0 && v5 < (int)dword_B77900 ) /*0x7810c1*/
    {
      qmemcpy(v7, (char *)dword_B77908 + 108 * v5, sizeof(v7)); /*0x7810ee*/
      FormatWOLPlayerInfo(a1, v7); /*0x7810f2*/
      return a1; /*0x7810ff*/
    }
    StringCSF = GetStringCSF(aSttLobbylistus, 0, g_Str_File_wonline_cpp, 3055); /*0x781113*/
  }
  WideString::Assign((WideString *)a1, StringCSF); /*0x78111b*/
  return a1; /*0x7810fb*/
}
} // namespace gamemd
