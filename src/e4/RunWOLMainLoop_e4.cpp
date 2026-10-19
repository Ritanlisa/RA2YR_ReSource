// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Flag_e4.hpp"
#include "e4/classes/OwnerDrawControl_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
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
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/SHA1_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/CChatEventSink_e4.hpp"
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { int Multiplayer_GameMode_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4); }  // w18j2 raw 0x007988C0
namespace gamemd { int Multiplayer_Setup2_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4); }  // w18j2 raw 0x007983E0

// 0x77E110
namespace gamemd {  // G42.18 ns repair
Coord * * sub_77E110()
{

  int v1; // eax
  int v2; // esi

  if ( ppv ) /*0x77e117*/
  {
    (*(void (**)(LPVOID, unsigned int))(*(unsigned int *)ppv + 124))(ppv, *(unsigned int *)g_WOL_BuddyList.__pad_C); /*0x77e123*/
    (*(void (**)(LPVOID, int, void *))(*(unsigned int *)ppv + 104))(ppv, dword_B779F0, stru_B7622C.ptr_8); /*0x77e13c*/
  }
  Dialog::RefreshDialogsGame(0); /*0x77e141*/
  if ( stru_B76900.ptr_C ) /*0x77e153*/
  {
    if ( !Theme::IsPlaying((Theme *)&MEMORY[0xA83D10]) ) /*0x77e15a*/
      goto LABEL_5; /*0x77e15a*/
    v2 = MEMORY[0xA83D14]; /*0x77e17d*/
    if ( MEMORY[0xA83D14] == -1 ) /*0x77e186*/
      v2 = MEMORY[0xA83D18]; /*0x77e188*/
    v1 = StringList::Find((StringList *)&MEMORY[0xA83D10], g_INI_Key_INTRO); /*0x77e198*/
    if ( v2 == v1 ) /*0x77e1a0*/
    {
LABEL_5:
      ((Theme *)&MEMORY[0xA83D10])->Stop(0); /*0x77e16a*/
      (v1) = ((v1) & ~0xFF) | ((Theme::QueueSong((int)&MEMORY[0xA83D10], -2)) & 0xFF); /*0x77e176*/
    }
  }
  else
  {
    (v1) = ((v1) & ~0xFF) | ((Theme::QueueSong((int)&MEMORY[0xA83D10], -3)) & 0xFF); /*0x77e1c2*/
  }
  return v1; /*0x77e17b*/

}
}  // G42.18 ns repair
// 0x785EA0
namespace gamemd {
int sub_785EA0()
{

  unsigned int v1; // eax
  unsigned int i; // ebx
  ObjectClass *v3; // esi
  ObjectClass *v4; // edi
  int result; // eax
  HANDLE *v6; // esi
  TechnoTypeClass *v7; // ecx
  wchar_t *StringCSF; // eax
  int j; // ebp
  TechnoTypeClass *v10; // ecx
  DWORD k; // esi
  HWND v12; // eax
  HWND v13; // eax
  HWND Current; // eax
  void *v15; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(DataGlobal_B77DC0) = 1; /*0x785eac*/
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x785ec0*/
  {
    v1 = stru_B765EC.location[0]; /*0x785ec6*/
    for ( i = 0; i < stru_B765EC.location[0]; v1 = stru_B765EC.location[0] ) /*0x785ecf*/
    {
      v3 = *(ObjectClass **)(stru_B765EC.lastLayer + 4 * i); /*0x785ed6*/
      while ( v3 ) /*0x785edb*/
      {
        v4 = v3; /*0x785edd*/
        v3 = (ObjectClass *)v3->ptr_8; /*0x785edf*/
        DeleteAndZero(v4); /*0x785ee8*/
        __3_YAXPAX_Z(v4); /*0x785eee*/
      }
      ++i; /*0x785f00*/
      *(unsigned int *)(stru_B765EC.lastLayer + 4 * i - 4) = 0; /*0x785f01*/
    }
    *(unsigned int *)&stru_B765EC.isInLogic = 0; /*0x785f18*/
    if ( v1 > dword_B766B0 ) /*0x785f24*/
    {
      do /*0x785f46*/
      {
        if ( LOBYTE(stru_B765EC.lineTrailer) ) /*0x785f2d*/
          break; /*0x785f2d*/
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x785f34*/
      }
      while ( stru_B765EC.location[0] > (unsigned int)dword_B766B0 ); /*0x785f46*/
    }
  }
  result = (int)ppv; /*0x785f48*/
  if ( ppv ) /*0x785f4f*/
  {
    v6 = &Handles; /*0x785f5b*/
    do /*0x785f6e*/
      ResetEvent(*v6++); /*0x785f63*/
    while ( (int)v6 < (int)g_WOL_RequestObject ); /*0x785f6e*/
    Game::ProcessIdle(v7); /*0x785f70*/
    if ( !(*(int (**)(LPVOID))(*(unsigned int *)ppv + 52))(ppv) ) /*0x785f7d*/
    {
      StringCSF = GetStringCSF(aTxtWolLoggingO, 0, g_Str_File_wonline_cpp, 9527); /*0x785f9a*/
      WideString::Assign((wchar_t **)&v15, StringCSF); /*0x785fa4*/
      ShowUIMessage(32, (wchar_t **)&v15, 0); /*0x785fb4*/
      DeleteAndZero::Alt((DeleteAndZero *)&v15); /*0x785fbd*/
      for ( j = 0; j < 5; ++j ) /*0x785fc8*/
      {
        for ( k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x785fdf*/
              k == 258;
              k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
        {
          Game::ProcessIdle(v10); /*0x785fe1*/
        }
        ResetEvent(*(&Handles + k)); /*0x786005*/
        if ( !k ) /*0x786009*/
          break; /*0x786009*/
        if ( k == 9 ) /*0x78600e*/
          break; /*0x78600e*/
      }
    }
v12 = (HWND)Dialog::FindByHandle((Dialog *)0x11E); /*0x78601c*/
    if ( v12 ) /*0x786023*/
      CloseDialog(v12, 0); /*0x786029*/
v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x786033*/
    if ( v13 ) /*0x78603a*/
    {
      g_WOL_ChannelList &= ~0x20u; /*0x786045*/
      if ( !g_WOL_ChannelList ) /*0x78604b*/
        CloseDialog(v13, 0); /*0x786051*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x786056*/
    result = (int)GetDlgItem(Current, 1344); /*0x786061*/
    if ( result ) /*0x786069*/
      return (int)SetFocus((HWND)result); /*0x78606c*/
  }
  return result; /*0x786072*/

}
}
// 0x798DE0
namespace gamemd {
Coord * * RunWOLMainLoop_Read(void * a1, void * a2)
{

  int v2; // ebx
  int v3; // esi
  char *v4; // eax
  int v5; // esi
  char *v6; // eax
  BOOL v7; // esi
  int v9; // [esp+1Ch] [ebp-38h]
  int v10; // [esp+28h] [ebp-2Ch]
  ObjectClass *v11; // [esp+2Ch] [ebp-28h]
  Flag v12; // [esp+34h] [ebp-20h] BYREF
  OwnerDrawControl v13; // [esp+48h] [ebp-Ch] BYREF

  *(unsigned int *)v12.__pad_0 = 0; /*0x798de9*/
  LOBYTE(v12.Flag_field_0x04) = 0; /*0x798df1*/
  ReadRegistryOptionsWOL((ObjectClass *)&v12); /*0x798df6*/
  Screen::Capture(1, 0, v2, a2); /*0x798dff*/
  if ( g_UIPointerTable && strlen(byte_B761A8) && String::Length((String *)&stru_B73E10.CChatEventSink_field_0x30) ) /*0x798e27*/
  {
    v3 = *(unsigned int *)g_UIPointerTable; /*0x798e3f*/
    v9 = g_NetworkRematchState & 0xFFFF00; /*0x798e49*/
    v4 = String::GetOrEmpty((String *)&stru_B73E10.CChatEventSink_field_0x30); /*0x798e4f*/
    (*(void (**)(LPVOID, char *, int, char *, int, int, unsigned int, unsigned int))(v3 + 20))( /*0x798e67*/
      g_UIPointerTable,
      byte_B761A8,
      g_WOL_GameConfig,
      v4,
      v9,
      -1,
      0,
      0);
    v5 = *(unsigned int *)g_UIPointerTable; /*0x798e7c*/
    v10 = g_NetworkRematchState & 0xFFFF00; /*0x798e7e*/
    v6 = String::GetOrEmpty((String *)&stru_B73E10.CChatEventSink_field_0x30); /*0x798e84*/
    (*(void (**)(LPVOID, char *, int, char *, int))(v5 + 56))( /*0x798e9c*/
      g_UIPointerTable,
      byte_B761A8,
      g_WOL_GameConfig,
      v6,
      v10);
  }
  RunWOLMainLoop_Read_Read(); /*0x798e9f*/
  if ( (unsigned __int8)Flag::IsNot2(&v12) ) /*0x798ea8*/
  {
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v12.Flag_field_0x08); /*0x798eb5*/
    v12.Flag_field_0x08 = (int)&off_7F7624; /*0x798ece*/
    RunDialog( /*0x798ed2*/
      0x10Eu,
      (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))GameModeDlgProcMultiplayer,
      (LPARAM)&v12.Flag_field_0x08);
    RunWOLMainLoop_Read_Read_72C830(v11); /*0x798ed7*/
    v7 = dword_A8B244 != 0; /*0x798eed*/
    v12.Flag_field_0x08 = (int)&off_7F7624; /*0x798eef*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v12.Flag_field_0x08); /*0x798ef3*/
  }
  else
  {
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v13); /*0x798f04*/
    v13 = (OwnerDrawControl)&off_7F7624; /*0x798f1d*/
    RunDialog(0x11Cu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))Setup2DlgProcMultiplayer, (LPARAM)&v13); /*0x798f21*/
    RunWOLMainLoop_Read_Read_72C830(v11); /*0x798f26*/
    v7 = dword_A8B244 != 0; /*0x798f3b*/
    v13 = (OwnerDrawControl)&off_7F7624; /*0x798f3d*/
    OwnerDrawControl::InitVtable(&v13); /*0x798f41*/
  }
  return v7; /*0x798efa*/

}
}
// 0x72C7E0
namespace gamemd {
char sub_72C7E0()
{

  char result = byte_B0FCFD; // al /*0x72c7e0*/
  if ( !byte_B0FCFD ) /*0x72c7e7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72c7f3*/
      dword_B0F9E8 = (unsigned int)(LoadFileSHP((char *)(off_844D84), (bool *)&byte_B0FCFC)); /*0x72c805*/
    result = LoadPaletteSimple((char *)(off_844D88), &dword_B0FD00, &dword_B0FD04); /*0x72c81a*/
    byte_B0FCFD = 1; /*0x72c81f*/
  }
  return result; /*0x72c826*/
}
} // namespace gamemd

// 0x72C830
namespace gamemd {
void sub_72C830()
{

  if ( DataGlobal_B0FCFD ) /*0x72c83a*/
  {
    if ( DataGlobal_B0FCFC ) /*0x72c842*/
    {
      void *v1; // esi
      v1 = *(void **)&DataGlobal_B0F9E8; /*0x72c845*/
      if ( *(unsigned int *)&DataGlobal_B0F9E8 ) /*0x72c84d*/
      {
        (*(FileTreeNode **)&DataGlobal_B0F9E8)->Destroy(); /*0x72c851*/
        operator delete((v1)); /*0x72c857*/
      }
      DataGlobal_B0FCFC = 0; /*0x72c85f*/
    }
    *(unsigned int *)&DataGlobal_B0F9E8 = 0; /*0x72c86b*/
    if ( *(unsigned int *)&DataGlobal_B0FD00 ) /*0x72c873*/
    {
      operator delete((*(void **)&DataGlobal_B0FD00)); /*0x72c876*/
      *(unsigned int *)&DataGlobal_B0FD00 = 0; /*0x72c87e*/
    }
    if ( *(unsigned int *)&DataGlobal_B0FD04 ) /*0x72c88c*/
    {
      (***(void (****)(unsigned int, int))&DataGlobal_B0FD04)( /*0x72c892*/
        *(unsigned int *)&DataGlobal_B0FD04,
        1);
      *(unsigned int *)&DataGlobal_B0FD04 = 0; /*0x72c894*/
    }
  }
  DataGlobal_B0FCFD = 0; /*0x72c89a*/
}
} // namespace gamemd

// 0x799CD0
namespace gamemd {
long long sub_799CD0()
{
  memset(&dword_B76B10, 0, 0x10Cu); /*0x799cdd*/
  byte_84A210 = 1; /*0x799ceb*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x799cf2*/
  dword_B73E10 = 0; /*0x799cf4*/
  dword_B76AE0 = 0; /*0x799cfa*/
  dword_B77900 = 0; /*0x799d00*/
  dword_B77DD0 = 0; /*0x799d06*/
  return 0; /*0x799d0c*/
}
} // namespace gamemd

// 0x799D30
namespace gamemd {
int sub_799D30()
{

  ObjectClass *v1; // edi
  int result; // eax
  wchar_t *StringCSF; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  BOOL v10; // esi
  int v11; // [esp+18h] [ebp-28h]
  int v12; // [esp+24h] [ebp-1Ch]
  DeleteAndZero v13; // [esp+30h] [ebp-10h] BYREF

  result = LoginFlowWOL_Reset(v1); /*0x799d33*/
  if ( result == 1 ) /*0x799d3b*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x799d52*/
    WideString::Assign((WideString *)&v13, StringCSF); /*0x799d5c*/
    ShowUIMessage(16, (wchar_t **)&v13, 0); /*0x799d6c*/
    DeleteAndZero::Alt(&v13); /*0x799d75*/
    v4 = 8960; /*0x799d7f*/
    if ( dword_A8B244 != 3 ) /*0x799d87*/
      v4 = 10496; /*0x799d89*/
    v5 = LoginWOL(v4); /*0x799d8e*/
    if ( v5 ) /*0x799d96*/
    {
      if ( v5 == 2 ) /*0x799d9b*/
        return -1; /*0x799da6*/
      else
        return -2; /*0x799d9d*/
    }
    else
    {
      if ( g_UIPointerTable && strlen(byte_B761A8) && String::Length((String *)&stru_B73E10.CChatEventSink_field_0x30) ) /*0x799dd2*/
      {
        v6 = *(unsigned int *)g_UIPointerTable; /*0x799dea*/
        v11 = g_NetworkRematchState & 0xFFFF00; /*0x799df4*/
        v7 = String::GetOrEmpty((String *)&stru_B73E10.CChatEventSink_field_0x30); /*0x799dfa*/
        (*(void (**)(LPVOID, char *, int, char *, int, int, unsigned int, unsigned int))(v6 + 20))( /*0x799e12*/
          g_UIPointerTable,
          byte_B761A8,
          g_WOL_GameConfig,
          v7,
          v11,
          -1,
          0,
          0);
        v8 = *(unsigned int *)g_UIPointerTable; /*0x799e27*/
        v12 = g_NetworkRematchState & 0xFFFF00; /*0x799e29*/
        v9 = String::GetOrEmpty((String *)&stru_B73E10.CChatEventSink_field_0x30); /*0x799e2f*/
        (*(void (**)(LPVOID, char *, int, char *, int))(v8 + 56))( /*0x799e47*/
          g_UIPointerTable,
          byte_B761A8,
          g_WOL_GameConfig,
          v9,
          v12);
      }
      System_Init_72C9C0(); /*0x799e4a*/
      SimpleDialogControl::Constructor((SimpleDialogControl *)&v13.DeleteAndZero_field_0x04); /*0x799e53*/
      v13.DeleteAndZero_field_0x04 = (int)&off_7F7624; /*0x799e6c*/
      RunDialog( /*0x799e70*/
        0x114u,
        (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))MainLobbyDlgProcWOL,
        (LPARAM)&v13.DeleteAndZero_field_0x04);
      System_Init_72CA10(v1); /*0x799e75*/
      v10 = dword_A8B244 != 0; /*0x799e8b*/
      v13.DeleteAndZero_field_0x04 = (int)&off_7F7624; /*0x799e8d*/
      OwnerDrawControl::InitVtable((OwnerDrawControl *)&v13.DeleteAndZero_field_0x04); /*0x799e91*/
      return v10; /*0x799e96*/
    }
  }
  return result; /*0x799da2*/

}
} // namespace gamemd

// 0x7A2970
namespace gamemd {
void sub_7A2970()
{

  byte_B77DC1 = 0; /*0x7a297a*/
  if ( !byte_B77DC2 && ReadWOLLobbyHouseOption() ) /*0x7a2983*/
  {
    if ( ((const char **)&stru_B76AC4)->CheckName() ) /*0x7a2991*/
    {
      unsigned int v0[3]; // [esp+0h] [ebp-Ch] BYREF
      ((SimpleDialogControl *)(v0))->Constructor(); /*0x7a299e*/
      v0[0] = (unsigned int)&off_7F7624; /*0x7a29b2*/
      RunDialog(0x122u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))BuddyDlgProcWOL, (LPARAM)v0); /*0x7a29ba*/
      v0[0] = (unsigned int)&off_7F7624; /*0x7a29c3*/
      (v0)->InitVtable(); /*0x7a29cb*/
    }
  }
}
} // namespace gamemd
