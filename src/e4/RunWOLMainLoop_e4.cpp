// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AnimTypeClass_e4.hpp"

// 0x77E110
namespace gamemd {
Coord * * sub_77E110()
{
  int v0; // eax
  int v1; // esi

  if ( ppv ) /*0x77e117*/
  {
    (*(void (__stdcall **)(LPVOID, int))(*(unsigned int *)ppv + 124))(ppv, dword_B779BC); /*0x77e123*/
    (*(void (__stdcall **)(LPVOID, int, int))(*(unsigned int *)ppv + 104))(ppv, dword_B779F0, dword_B76234); /*0x77e13c*/
  }
  Dialog::RefreshDialogsGame(0); /*0x77e141*/
  if ( dword_B7690C ) /*0x77e153*/
  {
    if ( !Theme::IsPlaying((int)&g_BuildingTypeClass_Count) ) /*0x77e15a*/
      goto LABEL_5; /*0x77e15a*/
    v1 = dword_A83D14; /*0x77e17d*/
    if ( dword_A83D14 == -1 ) /*0x77e186*/
      v1 = dword_A83D18; /*0x77e188*/
    v0 = StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO); /*0x77e198*/
    if ( v1 == v0 ) /*0x77e1a0*/
    {
  LABEL_5:
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x77e16a*/
      IDA_LOBYTE(v0) = Theme::QueueSong((int)&g_BuildingTypeClass_Count, -2); /*0x77e176*/
    }
  }
  else
  {
    IDA_LOBYTE(v0) = Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x77e1c2*/
  }
  return v0; /*0x77e17b*/
}
}
// 0x785EA0
namespace gamemd {
void sub_785EA0()
{
  unsigned int v0; // eax
  unsigned int i; // ebx
  int v2; // esi
  void **v3; // edi
  HWND result; // eax
  HANDLE *v5; // esi
  wchar_t *StringCSF; // eax
  int j; // ebp
  DWORD k; // esi
  HWND v9; // eax
  HWND v10; // eax
  HWND Current; // eax
  void *v12; // [esp+Ch] [ebp-4h] BYREF

  byte_B77DC0 = 1; /*0x785eac*/
  if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x785ec0*/
  {
    v0 = g_WOL_MsgPool; /*0x785ec6*/
    for ( i = 0; i < g_WOL_MsgPool; v0 = g_WOL_MsgPool ) /*0x785ecf*/
    {
      v2 = *((unsigned int *)g_WOL_MessageQueue + i); /*0x785ed6*/
      while ( v2 ) /*0x785edb*/
      {
        v3 = (void **)v2; /*0x785edd*/
        v2 = v2->SessionClass_field_08; /*0x785edf*/
        DeleteAndZero(v3); /*0x785ee8*/
        RA2_OPDEL(v3); /*0x785eee*/
      }
      *((unsigned int *)g_WOL_MessageQueue + i++) = 0; /*0x785f01*/
    }
    g_WOL_MessageConfig = 0; /*0x785f18*/
    if ( v0 > dword_B766B0 ) /*0x785f24*/
    {
      do /*0x785f46*/
      {
        if ( byte_B76694 ) /*0x785f2d*/
          break; /*0x785f2d*/
        HashMap::Shrink(&g_WOL_MessageQueue); /*0x785f34*/
      }
      while ( g_WOL_MsgPool > (unsigned int)dword_B766B0 ); /*0x785f46*/
    }
  }
  result = (HWND)ppv; /*0x785f48*/
  if ( ppv ) /*0x785f4f*/
  {
    v5 = &Handles; /*0x785f5b*/
    do /*0x785f6e*/
      ResetEvent(*v5++); /*0x785f63*/
    while ( (int)v5 < (int)g_WOL_RequestObject ); /*0x785f6e*/
    Game::ProcessIdle(); /*0x785f70*/
    if ( !(*(int (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 52))(ppv) ) /*0x785f7d*/
    {
      StringCSF = GetStringCSF(aTxtWolLoggingO, 0, g_Str_File_wonline_cpp, 9527); /*0x785f9a*/
      WideString::Assign((wchar_t **)&v12, StringCSF); /*0x785fa4*/
      ShowUIMessage(32, (wchar_t **)&v12, 0); /*0x785fb4*/
      DeleteAndZero::Alt(&v12); /*0x785fbd*/
      for ( j = 0; j < 5; ++j ) /*0x785fc8*/
      {
        for ( k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x785fdf*/
              k == 258;
              k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
        {
          Game::ProcessIdle(); /*0x785fe1*/
        }
        ResetEvent(*(&Handles + k)); /*0x786005*/
        if ( !k ) /*0x786009*/
          break; /*0x786009*/
        if ( k == 9 ) /*0x78600e*/
          break; /*0x78600e*/
      }
    }
    v9 = (HWND)Dialog::FindByHandle((void *)0x11E); /*0x78601c*/
    if ( v9 ) /*0x786023*/
      CloseDialog(v9, 0); /*0x786029*/
    v10 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x786033*/
    if ( v10 ) /*0x78603a*/
    {
      g_WOL_ChannelList &= ~0x20u; /*0x786045*/
      if ( !g_WOL_ChannelList ) /*0x78604b*/
        CloseDialog(v10, 0); /*0x786051*/
    }
    Current = Dialog::GetCurrent(); /*0x786056*/
    result = GetDlgItem(Current, 1344); /*0x786061*/
    if ( result ) /*0x786069*/
      return SetFocus(result, unsigned int a1, unsigned int a2); /*0x78606c*/
  }
  return result; /*0x786072*/
}
}
// 0x798DE0
namespace gamemd {
Coord * * RunWOLMainLoop_Read()
{
  int v2; // esi
  char *v3; // eax
  int v4; // esi
  char *v5; // eax
  void ** v6;
  int v8; // [esp+1Ch] [ebp-38h]
  int v9; // [esp+28h] [ebp-2Ch]
  int v10; // [esp+34h] [ebp-20h] BYREF
  char v11; // [esp+38h] [ebp-1Ch]
  unsigned int v12[3]; // [esp+3Ch] [ebp-18h] BYREF
  unsigned int v13[3]; // [esp+48h] [ebp-Ch] BYREF

  v10 = 0; /*0x798de9*/
  v11 = 0; /*0x798df1*/
  ReadRegistryOptionsWOL(&v10); /*0x798df6*/
  Screen::Capture(1, 0, a1, a2); /*0x798dff*/
  if ( g_UIPointerTable && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) ) /*0x798e27*/
  {
    v2 = *(unsigned int *)g_UIPointerTable; /*0x798e3f*/
    v8 = g_NetworkRematchState & 0xFFFF00; /*0x798e49*/
    v3 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x798e4f*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, unsigned int, unsigned int))(v2 + 20))( /*0x798e67*/
      g_UIPointerTable,
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v3,
      v8,
      -1,
      0,
      0);
    v4 = *(unsigned int *)g_UIPointerTable; /*0x798e7c*/
    v9 = g_NetworkRematchState & 0xFFFF00; /*0x798e7e*/
    v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x798e84*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v4 + 56))( /*0x798e9c*/
      g_UIPointerTable,
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v5,
      v9);
  }
  RunWOLMainLoop_Read_Read(); /*0x798e9f*/
  if ( Flag::IsNot2(&v10) ) /*0x798ea8*/
  {
    SimpleDialogControl::Constructor(v12); /*0x798eb5*/
    v12[0] = &off_7F7624; /*0x798ece*/
    RunDialog(0x10Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameModeDlgProcMultiplayer, (LPARAM)v12); /*0x798ed2*/
    RunWOLMainLoop_Read_Read_72C830(); /*0x798ed7*/
    v6 = g_GameOptionsFlags != 0; /*0x798eed*/
    v12[0] = &off_7F7624; /*0x798eef*/
    OwnerDrawControl::InitVtable(v12); /*0x798ef3*/
  }
  else
  {
    SimpleDialogControl::Constructor(v13); /*0x798f04*/
    v13[0] = &off_7F7624; /*0x798f1d*/
    RunDialog(0x11Cu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Setup2DlgProcMultiplayer, (LPARAM)v13); /*0x798f21*/
    RunWOLMainLoop_Read_Read_72C830(); /*0x798f26*/
    v6 = g_GameOptionsFlags != 0; /*0x798f3b*/
    v13[0] = &off_7F7624; /*0x798f3d*/
    OwnerDrawControl::InitVtable(v13); /*0x798f41*/
  }
  return v6; /*0x798efa*/
}
}
// 0x72C7E0
namespace gamemd {
char sub_72C7E0()
{
  char result; // al

  result = byte_B0FCFD; /*0x72c7e0*/
  if ( !byte_B0FCFD ) /*0x72c7e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c7f3*/
      dword_B0F9E8 = LoadFileSHP(off_844D84, (bool *)&byte_B0FCFC); /*0x72c805*/
    result = LoadPaletteSimple(off_844D88, &dword_B0FD00, &dword_B0FD04); /*0x72c81a*/
    byte_B0FCFD = 1; /*0x72c81f*/
  }
  return result; /*0x72c826*/
}
} // namespace gamemd

// 0x72C830
namespace gamemd {
void sub_72C830()
{
  unsigned int v0;

  if ( byte_B0FCFD ) /*0x72c83a*/
  {
    if ( byte_B0FCFC ) /*0x72c842*/
    {
      v0 = dword_B0F9E8; /*0x72c845*/
      if ( dword_B0F9E8 ) /*0x72c84d*/
      {
        FileTreeNode::Destroy(dword_B0F9E8); /*0x72c851*/
        RA2_OPDEL(v0); /*0x72c857*/
      }
      byte_B0FCFC = 0; /*0x72c85f*/
    }
    dword_B0F9E8 = 0; /*0x72c86b*/
    if ( dword_B0FD00 ) /*0x72c873*/
    {
      RA2_OPDEL(dword_B0FD00); /*0x72c876*/
      dword_B0FD00 = 0; /*0x72c87e*/
    }
    if ( dword_B0FD04 ) /*0x72c88c*/
    {
      (**(void (__thiscall ***)(int, int))dword_B0FD04)(dword_B0FD04, 1); /*0x72c892*/
      dword_B0FD04 = 0; /*0x72c894*/
    }
  }
  byte_B0FCFD = 0; /*0x72c89a*/
}
} // namespace gamemd

// 0x799CD0
namespace gamemd {
long long sub_799CD0()
{
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x799cdd*/
  byte_84A210 = 1; /*0x799ceb*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x799cf2*/
  g_WOL_AuthPool = 0; /*0x799cf4*/
  g_WOL_ChatState = 0; /*0x799cfa*/
  g_WOL_State = 0; /*0x799d00*/
  g_WOL_ChannelState = 0; /*0x799d06*/
  return 0; /*0x799d0c*/
}
} // namespace gamemd

// 0x799D30
namespace gamemd {
int sub_799D30()
{
  int result; // eax
  wchar_t *StringCSF; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  char *v7; // eax
  bool v8; // esi
  int v9; // [esp+18h] [ebp-28h]
  int v10; // [esp+24h] [ebp-1Ch]
  void *v11; // [esp+30h] [ebp-10h] BYREF
  unsigned int v12[3]; // [esp+34h] [ebp-Ch] BYREF

  result = LoginFlowWOL_Reset(); /*0x799d33*/
  if ( result == 1 ) /*0x799d3b*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x799d52*/
    WideString::Assign((wchar_t **)&v11, StringCSF); /*0x799d5c*/
    ShowUIMessage(16, (wchar_t **)&v11, 0); /*0x799d6c*/
    DeleteAndZero::Alt(&v11); /*0x799d75*/
    v2 = 8960; /*0x799d7f*/
    if ( g_GameOptionsFlags != 3 ) /*0x799d87*/
      v2 = 10496; /*0x799d89*/
    v3 = LoginWOL(v2); /*0x799d8e*/
    if ( v3 ) /*0x799d96*/
    {
      if ( v3 == 2 ) /*0x799d9b*/
        return -1; /*0x799da6*/
      else
        return -2; /*0x799d9d*/
    }
    else
    {
      if ( g_UIPointerTable && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) ) /*0x799dd2*/
      {
        v4 = *(unsigned int *)g_UIPointerTable; /*0x799dea*/
        v9 = g_NetworkRematchState & 0xFFFF00; /*0x799df4*/
        v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x799dfa*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, unsigned int, unsigned int))(v4 + 20))( /*0x799e12*/
          g_UIPointerTable,
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v5,
          v9,
          -1,
          0,
          0);
        v6 = *(unsigned int *)g_UIPointerTable; /*0x799e27*/
        v10 = g_NetworkRematchState & 0xFFFF00; /*0x799e29*/
        v7 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x799e2f*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v6 + 56))( /*0x799e47*/
          g_UIPointerTable,
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v7,
          v10);
      }
      System_Init_72C9C0(); /*0x799e4a*/
      SimpleDialogControl::Constructor(v12); /*0x799e53*/
      v12[0] = &off_7F7624; /*0x799e6c*/
      RunDialog(0x114u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainLobbyDlgProcWOL, (LPARAM)v12); /*0x799e70*/
      System_Init_72CA10(); /*0x799e75*/
      v8 = g_GameOptionsFlags != 0; /*0x799e8b*/
      v12[0] = &off_7F7624; /*0x799e8d*/
      OwnerDrawControl::InitVtable(v12); /*0x799e91*/
      return v8; /*0x799e96*/
    }
  }
  return result; /*0x799da2*/
}
} // namespace gamemd

// 0x7A2970
namespace gamemd {
void sub_7A2970()
{
  unsigned int v0[3]; // [esp+0h] [ebp-Ch] BYREF

  g_NetworkLobby_Init = 0; /*0x7a297a*/
  if ( !byte_B77DC2 && ReadWOLLobbyHouseOption() ) /*0x7a2983*/
  {
    if ( MapSeed::CheckName((const char **)&dword_B76AC4) ) /*0x7a2991*/
    {
      SimpleDialogControl::Constructor(v0); /*0x7a299e*/
      v0[0] = &off_7F7624; /*0x7a29b2*/
      RunDialog(0x122u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))BuddyDlgProcWOL, (LPARAM)v0); /*0x7a29ba*/
      v0[0] = &off_7F7624; /*0x7a29c3*/
      OwnerDrawControl::InitVtable(v0); /*0x7a29cb*/
    }
  }
}
} // namespace gamemd
