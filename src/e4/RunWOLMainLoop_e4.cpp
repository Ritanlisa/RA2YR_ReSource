// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x77E110
namespace gamemd {
void sub_77E110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v0; // eax
  int v1; // esi
  if ( ppv ) /*0x77e117*/
  {
    (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 124))(ppv, dword_B779BC); /*0x77e123*/
    (*(void (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 104))( /*0x77e13c*/
      ppv,
      dword_B779F0,
      dword_B76234);
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
      LOBYTE(v0) = Theme::QueueSong((int)&g_BuildingTypeClass_Count, -2); /*0x77e176*/
    }
  }
  else
  {
    LOBYTE(v0) = Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x77e1c2*/
  }
  return v0; /*0x77e17b*/
}
}
} // namespace gamemd

// 0x785EA0
namespace gamemd {
void sub_785EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebx
  void **v3; // edi
  HWND result; // eax
  HANDLE *v5; // esi
  wchar_t *StringCSF; // eax
  int j; // ebp
  DWORD k; // esi
  HWND v9; // eax
  HWND v10; // eax
  HWND Current; // eax

  byte_B77DC0 = 1; /*0x785eac*/
  if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x785ec0*/
  {
    unsigned int v0 = g_WOL_MsgPool; /*0x785ec6*/
    for ( i = 0; i < g_WOL_MsgPool; v0 = g_WOL_MsgPool ) /*0x785ecf*/
    {
      int v2 = *((_DWORD *)g_WOL_MessageQueue + i); /*0x785ed6*/
      while ( v2 ) /*0x785edb*/
      {
        v3 = (void **)v2; /*0x785edd*/
        v2 = *(_DWORD *)(v2 + 8); /*0x785edf*/
        DeleteAndZero(v3); /*0x785ee8*/
        __3_YAXPAX_Z(v3); /*0x785eee*/
      }
      *((_DWORD *)g_WOL_MessageQueue + i++) = 0; /*0x785f01*/
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
    if ( !(*(int (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 52))(ppv) ) /*0x785f7d*/
    {
      StringCSF = GetStringCSF(aTxtWolLoggingO, 0, g_Str_File_wonline_cpp, 9527); /*0x785f9a*/
  void *v12; // [esp+Ch] [ebp-4h] BYREF
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
      return SetFocus(result); /*0x78606c*/
  }
  return result; /*0x786072*/
}
}
} // namespace gamemd

// 0x798DE0
namespace gamemd {
void RunWOLMainLoop_Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  BOOL v6; // esi
  int v8; // [esp+1Ch] [ebp-38h]
  int v9; // [esp+28h] [ebp-2Ch]
  int v10; // [esp+34h] [ebp-20h] BYREF
  char v11; // [esp+38h] [ebp-1Ch]
  _DWORD v12[3]; // [esp+3Ch] [ebp-18h] BYREF
  _DWORD v13[3]; // [esp+48h] [ebp-Ch] BYREF

  v10 = 0; /*0x798de9*/
  v11 = 0; /*0x798df1*/
  ReadRegistryOptionsWOL(&v10); /*0x798df6*/
  Screen::Capture(1, 0, a1, a2); /*0x798dff*/
  if ( g_UIPointerTable && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) ) /*0x798e27*/
  {
    int v2 = *(_DWORD *)g_UIPointerTable; /*0x798e3f*/
    v8 = g_NetworkRematchState & 0xFFFF00; /*0x798e49*/
    char * v3 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x798e4f*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v2 + 20))( /*0x798e67*/
      g_UIPointerTable,
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v3,
      v8,
      -1,
      0,
      0);
    int v4 = *(_DWORD *)g_UIPointerTable; /*0x798e7c*/
    v9 = g_NetworkRematchState & 0xFFFF00; /*0x798e7e*/
    char * v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x798e84*/
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
} // namespace gamemd

// 0x72C7E0
namespace gamemd {
char sub_72C7E0()
{
{
    char result;
    result = DataGlobal_B0FCFD;
    if ( !DataGlobal_B0FCFD )
  {
    if ( g_DisplayWidth == 800 )
    DataGlobal_B0F9E8 = LoadFileSHP(DataGlobal_844D84, (bool *)&DataGlobal_B0FCFC);
    result = LoadPaletteSimple(DataGlobal_844D88, &DataGlobal_B0FD00, &DataGlobal_B0FD04);
    DataGlobal_B0FCFD = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x72C830
namespace gamemd {
void sub_72C830()
{
{
    void *v0;
    if ( DataGlobal_B0FCFD )
  {
    if ( DataGlobal_B0FCFC )
    {
    v0 = DataGlobal_B0F9E8;
    if ( DataGlobal_B0F9E8 )
      {
    FileTreeNode::Destroy(DataGlobal_B0F9E8);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCFC = 0;
    }
    DataGlobal_B0F9E8 = 0;
    if ( DataGlobal_B0FD00 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD00);
    DataGlobal_B0FD00 = 0;
    }
    if ( DataGlobal_B0FD04 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD04)(DataGlobal_B0FD04, 1);
    DataGlobal_B0FD04 = 0;
    }
  }
    DataGlobal_B0FCFD = 0;
}
}
} // namespace gamemd

// 0x799CD0
namespace gamemd {
long long sub_799CD0()
{
{
    memset(&g_WOL_ProcessIdle, 0, 0x10Cu);
    DataGlobal_84A210 = 1;
    memset(&DataGlobal_B73BE8, 0, 0x10Cu);
    g_WOL_AuthPool = 0;
    g_WOL_ChatState = 0;
    g_WOL_State = 0;
    g_WOL_ChannelState = 0;
    return 0;
}
}
} // namespace gamemd

// 0x799D30
namespace gamemd {
int sub_799D30()
{
{
    int result;
    wchar_t *StringCSF;
    int v2;
    int v3;
    int v4;
    char *v5;
    int v6;
    char *v7;
    int v8;
    int v9;
    int v10;
    void *v11;
    int v12[3];
    result = LoginFlowWOL_Reset();
    if ( result == 1 )
  {
    StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300);
    WideString::Assign((wchar_t **)&v11, StringCSF);
    ShowUIMessage(16, (wchar_t **)&v11, 0);
    DeleteAndZero::Alt(&v11);
    v2 = 8960;
    if ( g_GameOptionsFlags != 3 )
    v2 = 10496;
    v3 = LoginWOL(v2);
    if ( v3 )
    {
    if ( v3 == 2 )
    return -1;
    else
    return -2;
    }
    else
    {
    if ( g_UIPointerTable && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) )
      {
    v4 = *(int *)g_UIPointerTable;
    v9 = g_NetworkRematchState & 0xFFFF00;
    v5 = String::GetOrEmpty((char **)&g_WebBrowser);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, int, int))(v4 + 20))( g_UIPointerTable, g_WOL_ConnectFlag, g_WOL_GameConfig, v5, v9, -1, 0, 0);
    v6 = *(int *)g_UIPointerTable;
    v10 = g_NetworkRematchState & 0xFFFF00;
    v7 = String::GetOrEmpty((char **)&g_WebBrowser);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v6 + 56))( g_UIPointerTable, g_WOL_ConnectFlag, g_WOL_GameConfig, v7, v10);
      }
    System_Init_72C9C0();
    SimpleDialogControl::Constructor(v12);
    v12[0] = &DataGlobal_7F7624;
    RunDialog(0x114u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainLobbyDlgProcWOL, (LPARAM)v12);
    System_Init_72CA10();
    v8 = g_GameOptionsFlags != 0;
    v12[0] = &DataGlobal_7F7624;
    OwnerDrawControl::InitVtable(v12);
    return v8;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x7A2970
namespace gamemd {
void sub_7A2970()
{
{
    int v0[3];
    g_NetworkLobby_Init = 0;
    if ( !DataGlobal_B77DC2 && ReadWOLLobbyHouseOption() )
  {
    if ( MapSeed::CheckName((const char **)&DataGlobal_B76AC4) )
    {
    SimpleDialogControl::Constructor(v0);
    v0[0] = &DataGlobal_7F7624;
    RunDialog(0x122u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))BuddyDlgProcWOL, (LPARAM)v0);
    v0[0] = &DataGlobal_7F7624;
    OwnerDrawControl::InitVtable(v0);
    }
  }
}
}
} // namespace gamemd
