// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_465D80_e4.hpp"
#include "e4/classes/E4Recv_46D350_e4.hpp"
#include "e4/classes/E4Recv_46D490_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Particle_e4.hpp"

// 0x46D350
namespace gamemd {
void E4Recv_46D350::sub_46D350()
{
    *(void**)this = &vt_CampaignScoreClass;

}
} // namespace gamemd

// 0x46D650
namespace gamemd {
bool sub_46D650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool sub_46D650()
{
  bool v0; // bl
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // ebp
  LPARAM *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // edi
  int v8; // edi
  LPARAM v9; // eax
  LPARAM v10; // eax
  LPARAM v11; // eax
  LPARAM v12; // eax
  LPARAM v13; // eax

  if ( Network_EventType != 50 ) /*0x46d65b*/
    return 0; /*0x46d80a*/
  Debug::Log(); /*0x46d666*/
  v0 = DataGlobal_A8EB68 != (char)DataGlobal_A8D667; /*0x46d67f*/
  DataGlobal_A8EB68 = (char)DataGlobal_A8D667; /*0x46d686*/
  v1 = (HWND)Dialog::FindByHandle((void *)0xBC6); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    DlgItem = GetDlgItem(v1, 1842); /*0x46d69a*/
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, DataGlobal_A8EB68); /*0x46d6b3*/
  }
  v3 = 0; /*0x46d6bc*/
  v4 = &g_NetworkPlayerName; /*0x46d6be*/
  do /*0x46d7fd*/
  {
    v5 = *v4; /*0x46d6c3*/
    if ( *v4 && v5 != g_HouseClass_ObserverFlags && v5 != g_Lobby_PlayerCount ) /*0x46d6d7*/
    {
      v6 = *(v4 - 266); /*0x46d6d9*/
      if ( SessionClass::GetOption(v5) != v6 ) /*0x46d6e6*/
        v0 = 1; /*0x46d6e8*/
      SessionClass::SetOption(*v4, v6); /*0x46d6ed*/
      v7 = *(v4 - 258); /*0x46d6f4*/
      if ( SessionClass::GetPlayerSide(*v4) != v7 ) /*0x46d701*/
        v0 = 1; /*0x46d703*/
      SessionClass::SetPlayerOption(*v4, v7); /*0x46d708*/
      v8 = *(v4 - 250); /*0x46d70f*/
      if ( SessionClass::GetPlayerColor(*v4) != v8 ) /*0x46d71c*/
        v0 = 1; /*0x46d71e*/
      SessionClass::SetPlayerColor(*v4, v8); /*0x46d723*/
    }
    ToWideStringChar((char *)*v4); /*0x46d72a*/
    SessionClass::GetPlayerColor(*v4); /*0x46d733*/
    SessionClass::GetPlayerSide(*v4); /*0x46d73b*/
    SessionClass::GetOption(*v4); /*0x46d743*/
    Debug::Log(); /*0x46d750*/
    v9 = *(v4 - 242); /*0x46d755*/
    if ( *(v4 - 2557) != v9 ) /*0x46d766*/
      v0 = 1; /*0x46d768*/
    *(v4 - 2557) = v9; /*0x46d76a*/
    v10 = *(v4 - 234); /*0x46d770*/
    if ( *(v4 - 2549) != v10 ) /*0x46d77c*/
      v0 = 1; /*0x46d77e*/
    *(v4 - 2549) = v10; /*0x46d780*/
    v11 = *(v4 - 226); /*0x46d786*/
    if ( *(v4 - 2565) != v11 ) /*0x46d792*/
      v0 = 1; /*0x46d794*/
    *(v4 - 2565) = v11; /*0x46d796*/
    v12 = *(v4 - 218); /*0x46d79c*/
    if ( *(v4 - 2541) != v12 ) /*0x46d7a8*/
      v0 = 1; /*0x46d7aa*/
    *(v4 - 2541) = v12; /*0x46d7ac*/
    v13 = *(v4 - 210); /*0x46d7b2*/
    if ( *(v4 - 2533) != v13 ) /*0x46d7be*/
      v0 = 1; /*0x46d7c0*/
    *(v4 - 2533) = v13; /*0x46d7c2*/
    Debug::Log(); /*0x46d7eb*/
    ++v4; /*0x46d7f3*/
    ++v3; /*0x46d7f6*/
  }
  while ( (int)v4 < (int)&g_PlayerNameListEnd ); /*0x46d7fd*/
  return v0; /*0x46d808*/
}
}
} // namespace gamemd

// 0x46D8B0
namespace gamemd {
char sub_46D8B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_46D8B0()
{
  char v0; // bl
  int v1; // edi
  const wchar_t **v2; // esi
  char *v3; // eax
  int v5; // esi
  int PlayerSide; // eax
  int v7; // [esp-4h] [ebp-10h]

  v0 = 0; /*0x46d8b3*/
  v1 = 0; /*0x46d8b5*/
  v2 = (const wchar_t **)&g_NetworkPlayerName; /*0x46d8b7*/
  while ( 1 ) /*0x46d8c1*/
  {
    v3 = CharToWideString(g_NetworkPlayerBuffer); /*0x46d8c1*/
    if ( !wcscmp((const wchar_t *)v3, *v2) ) /*0x46d8ca*/
      break; /*0x46d8ca*/
    ++v2; /*0x46d8d6*/
    ++v1; /*0x46d8d9*/
    if ( (int)v2 >= (int)&g_PlayerNameListEnd ) /*0x46d8e0*/
      return 0; /*0x46d8e7*/
  }
  if ( v1 == -1 ) /*0x46d8eb*/
    return 0; /*0x46d8f2*/
  if ( SessionClass::GetPlayerSide(*(&g_NetworkPlayerName + v1)) != *((_DWORD *)&DataGlobal_A8D667 + 1) ) /*0x46d907*/
    v0 = 1; /*0x46d909*/
  if ( g_GameStateFlags ) /*0x46d913*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)g_GameStateFlags + 28))( /*0x46d918*/
           g_GameStateFlags,
           *((_DWORD *)&DataGlobal_A8D667 + 1)) )
    {
      SessionClass::SetPlayerOption(*(&g_NetworkPlayerName + v1), *((int *)&DataGlobal_A8D667 + 1)); /*0x46d926*/
    }
    else if ( g_GameStateFlags ) /*0x46d92f*/
    {
      v5 = *(_DWORD *)g_GameStateFlags; /*0x46d938*/
      PlayerSide = SessionClass::GetPlayerSide(*(&g_NetworkPlayerName + v1)); /*0x46d93a*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v5 + 28))(g_GameStateFlags, PlayerSide) ) /*0x46d946*/
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 40))(g_GameStateFlags); /*0x46d958*/
        SessionClass::SetPlayerOption(*(&g_NetworkPlayerName + v1), v7); /*0x46d960*/
      }
    }
  }
  if ( SessionClass::GetPlayerColor(*(&g_NetworkPlayerName + v1)) != DataGlobal_A8D66F ) /*0x46d979*/
    v0 = 1; /*0x46d97b*/
  if ( (unsigned __int8)IsAvailableColorhWnd() ) /*0x46d97d*/
  {
    if ( SessionClass::GetPlayerColor(*(&g_NetworkPlayerName + v1)) != DataGlobal_A8D66F ) /*0x46d998*/
    {
      SessionClass::SetPlayerColor(*(&g_NetworkPlayerName + v1), -2); /*0x46d9a3*/
      v0 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    SessionClass::SetPlayerColor(*(&g_NetworkPlayerName + v1), DataGlobal_A8D66F); /*0x46d9b9*/
  }
  if ( SessionClass::GetPlayerColor(*(&g_NetworkPlayerName + v1)) != *(_DWORD *)&DataGlobal_A8D667 ) /*0x46d9d2*/
    v0 = 1; /*0x46d9d4*/
  if ( (unsigned __int8)sub_4E50A0() ) /*0x46d9d6*/
  {
    if ( SessionClass::GetOption(*(&g_NetworkPlayerName + v1)) != *(_DWORD *)&DataGlobal_A8D667 ) /*0x46d9f1*/
    {
      SessionClass::SetOption(*(&g_NetworkPlayerName + v1), -2); /*0x46d9fc*/
      return v0; /*0x46da06*/
    }
  }
  else
  {
    SessionClass::SetOption(*(&g_NetworkPlayerName + v1), *(int *)&DataGlobal_A8D667); /*0x46da15*/
  }
  return v0; /*0x46d8e2*/
}
}
} // namespace gamemd

// 0x46DA70
namespace gamemd {
void sub_46DA70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_46DA70()
{
  int v0; // ebx
  int v1; // esi
  int v2; // edi
  size_t v3; // ebp
  int v4; // esi
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  int v8; // ebp
  int *v9; // ecx
  int v10; // edx
  int v11; // ebp
  int Count; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // edi
  int i; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]

  v0 = HouseClass_Count; /*0x46da74*/
  v1 = 0; /*0x46da7b*/
  g_CampaignScoreFlags = 0; /*0x46da7f*/
  v17 = HouseClass_Count; /*0x46da85*/
  for ( i = 0; v1 < v0; i = v1 ) /*0x46da8d*/
  {
    v2 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v1]; /*0x46da9a*/
    if ( v2 /*0x46dab7*/
      && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1
      && (unsigned __int8)House::IsCurrentPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * v1]) )
    {
      v3 = g_CampaignScoreFlags++; /*0x46dacf*/
      v4 = 28 * v3; /*0x46dae1*/
      DataGlobal_A8D228[28 * v3] = 0; /*0x46daea*/
      wcscpy((wchar_t *)&DataGlobal_A8D1FC + 56 * v3, (const wchar_t *)(v2 + 90154)); /*0x46daf5*/
      v5 = 0; /*0x46dafa*/
      DataGlobal_A8D22C[28 * v3] = 0; /*0x46daff*/
      DataGlobal_A8D23C[28 * v3] = 0; /*0x46db05*/
      DataGlobal_A8D24C[28 * v3] = 0; /*0x46db0b*/
      DataGlobal_A8D25C[28 * v3] = 0; /*0x46db11*/
      DataGlobal_A8D224[28 * v3] = *(_DWORD *)(v2 + 90196); /*0x46db1d*/
      if ( !*(_BYTE *)(v2 + 501) ) /*0x46db23*/
      {
        ++DataGlobal_A8D228[28 * v3]; /*0x46db34*/
        DataGlobal_A8D584 = v3; /*0x46db3a*/
      }
      v6 = (int *)(v2 + 21476); /*0x46db40*/
      v7 = 20; /*0x46db46*/
      do /*0x46db53*/
      {
        v8 = *v6++; /*0x46db4b*/
        v5 += v8; /*0x46db50*/
        --v7; /*0x46db52*/
      }
      while ( v7 ); /*0x46db53*/
      v9 = (int *)(v2 + 21560); /*0x46db55*/
      v10 = 20; /*0x46db5b*/
      do /*0x46db68*/
      {
        v11 = *v9++; /*0x46db60*/
        v5 += v11; /*0x46db65*/
        --v10; /*0x46db67*/
      }
      while ( v10 ); /*0x46db68*/
      DataGlobal_A8D23C[v4] = v5; /*0x46db6a*/
      DataGlobal_A8D22C[v4] = *(_DWORD *)(v2 + 21640) + *(_DWORD *)(v2 + 21556); /*0x46db84*/
      Count = VectorClass::GetCount((_DWORD *)(v2 + 21840)); /*0x46db95*/
      v13 = VectorClass::GetCount((_DWORD *)(v2 + 21860)) + Count; /*0x46dba2*/
      v14 = VectorClass::GetCount((_DWORD *)(v2 + 21880)) + v13; /*0x46dbaf*/
      DataGlobal_A8D24C[v4] = *(_DWORD *)(v2 + 21640) /*0x46dbc8*/
                           + VectorClass::GetCount((_DWORD *)(v2 + 21900))
                           + v14
                           + *(_DWORD *)(v2 + 21556);
      v15 = *(_DWORD *)(v2 + 21736); /*0x46dbce*/
      if ( v15 > 0 ) /*0x46dbd6*/
        DataGlobal_A8D25C[v4] += v15; /*0x46dbd8*/
      Debug::Log(); /*0x46dc1c*/
      v1 = i; /*0x46dc21*/
      v0 = v17; /*0x46dc25*/
    }
    ++v1; /*0x46dc2c*/
  }
}
}
} // namespace gamemd

// 0x46DCC0
namespace gamemd {
BOOL sub_46DCC0(HWND hDlg, bool a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall sub_46DCC0(HWND hDlg, bool a2)
{
  int i; // edi
  BOOL result; // eax
  int v5; // eax
  HWND DlgItem; // eax
  int ResourceID2CSF; // eax
  HWND v8; // eax
  int ResourceIDCSF; // eax
  HWND v10; // eax
  int ResourceID3CSF; // eax
  HWND v12; // eax

  for ( i = 0; i < 8; ++i )
  {
    result = IsKnownPointer((wchar_t *)*(&g_NetworkPlayerName + i)); /*0x46dcda*/
    if ( result && i != g_NetworkPlayerCount )
    {
      if ( i )
        v5 = i != 1 ? -1 : 1042;
      else
        v5 = 1041; /*0x46dcef*/
      DlgItem = GetDlgItem(hDlg, v5); /*0x46dd09*/
      EnableWindow(DlgItem, a2); /*0x46dd17*/
      ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x46dd1f*/
      v8 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46dd26*/
      EnableWindow(v8, a2); /*0x46dd2a*/
      ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x46dd32*/
      v10 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46dd39*/
      EnableWindow(v10, a2); /*0x46dd3d*/
      ResourceID3CSF = GetResourceID3CSF((void *)i); /*0x46dd45*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x46dd4c*/
      result = EnableWindow(v12, a2); /*0x46dd50*/
    }
  }
  return result; /*0x46dd60*/
}
}
} // namespace gamemd

// 0x46DD70
namespace gamemd {
HWND EnableGameModeControls(HWND hDlg, bool a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __fastcall EnableGameModeControls(HWND hDlg, bool a2)
{
  int v4; // eax
  HWND DlgItem; // eax
  int ResourceID2CSF; // eax
  HWND v7; // eax
  int ResourceIDCSF; // eax
  HWND v9; // eax
  int ResourceID3CSF; // eax
  HWND v11; // eax
  HWND result; // eax
  HWND v13; // edi

  if ( *(_DWORD *)&g_NetworkPlayerBuffer[1104] )
    v4 = *(_DWORD *)&g_NetworkPlayerBuffer[1104] != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  DlgItem = GetDlgItem(hDlg, v4); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  ResourceID2CSF = GetResourceID2CSF(*(void **)&g_NetworkPlayerBuffer[1104]); /*0x46ddb7*/
  v7 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  ResourceIDCSF = GetResourceIDCSF(*(void **)&g_NetworkPlayerBuffer[1104]); /*0x46ddca*/
  v9 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  ResourceID3CSF = GetResourceID3CSF(*(void **)&g_NetworkPlayerBuffer[1104]); /*0x46dddd*/
  v11 = GetDlgItem(hDlg, ResourceID3CSF); /*0x46dde4*/
  EnableWindow(v11, a2); /*0x46dde8*/
  result = (HWND)Settings::CheckString(); /*0x46ddea*/
  if ( (_BYTE)result ) /*0x46ddf1*/
  {
    result = GetDlgItem(hDlg, 1842); /*0x46ddf9*/
    v13 = result; /*0x46ddfb*/
    if ( result ) /*0x46ddff*/
    {
      EnableWindow(result, a2); /*0x46de03*/
      return (HWND)InvalidateRect(v13, 0, 0); /*0x46de0a*/
    }
  }
  return result; /*0x46de10*/
}
}
} // namespace gamemd

// 0x46DE20
namespace gamemd {
HWND sub_46DE20(HWND hDlg, int nCmdShow)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __fastcall sub_46DE20(HWND hDlg, int nCmdShow)
{
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND result; // eax
  HWND hWnd; // [esp+10h] [ebp-4h]

  DlgItem = GetDlgItem(hDlg, 1842); /*0x46de35*/
  hWnd = DlgItem; /*0x46de3f*/
  if ( DlgItem ) /*0x46de43*/
  {
    ShowWindow(DlgItem, nCmdShow); /*0x46de47*/
    InvalidateRect(hWnd, 0, 0); /*0x46de52*/
  }
  v5 = GetDlgItem(hDlg, 1839); /*0x46de5e*/
  if ( v5 ) /*0x46de62*/
    ShowWindow(v5, nCmdShow); /*0x46de66*/
  v6 = GetDlgItem(hDlg, 1944); /*0x46de6e*/
  if ( v6 ) /*0x46de72*/
    ShowWindow(v6, nCmdShow); /*0x46de76*/
  v7 = GetDlgItem(hDlg, 1945); /*0x46de7e*/
  if ( v7 ) /*0x46de82*/
    ShowWindow(v7, nCmdShow); /*0x46de86*/
  v8 = GetDlgItem(hDlg, 1946); /*0x46de8e*/
  if ( v8 ) /*0x46de92*/
    ShowWindow(v8, nCmdShow); /*0x46de96*/
  v9 = GetDlgItem(hDlg, 1947); /*0x46de9e*/
  if ( v9 ) /*0x46dea2*/
    ShowWindow(v9, nCmdShow); /*0x46dea6*/
  v10 = GetDlgItem(hDlg, 1918); /*0x46deae*/
  if ( v10 ) /*0x46deb2*/
    ShowWindow(v10, nCmdShow); /*0x46deb6*/
  v11 = GetDlgItem(hDlg, 1746); /*0x46debe*/
  if ( v11 ) /*0x46dec2*/
    ShowWindow(v11, nCmdShow); /*0x46dec6*/
  v12 = GetDlgItem(hDlg, 1747); /*0x46dece*/
  if ( v12 ) /*0x46ded2*/
    ShowWindow(v12, nCmdShow); /*0x46ded6*/
  v13 = GetDlgItem(hDlg, 1041); /*0x46dede*/
  if ( v13 ) /*0x46dee2*/
    ShowWindow(v13, nCmdShow); /*0x46dee6*/
  v14 = GetDlgItem(hDlg, 1042); /*0x46deee*/
  if ( v14 ) /*0x46def2*/
    ShowWindow(v14, nCmdShow); /*0x46def6*/
  v15 = GetDlgItem(hDlg, 1754); /*0x46defe*/
  if ( v15 ) /*0x46df02*/
    ShowWindow(v15, nCmdShow); /*0x46df06*/
  v16 = GetDlgItem(hDlg, 1755); /*0x46df0e*/
  if ( v16 ) /*0x46df12*/
    ShowWindow(v16, nCmdShow); /*0x46df16*/
  v17 = GetDlgItem(hDlg, 1697); /*0x46df1e*/
  if ( v17 ) /*0x46df22*/
    ShowWindow(v17, nCmdShow); /*0x46df26*/
  v18 = GetDlgItem(hDlg, 1296); /*0x46df2e*/
  if ( v18 ) /*0x46df32*/
    ShowWindow(v18, nCmdShow); /*0x46df36*/
  v19 = GetDlgItem(hDlg, 1698); /*0x46df3e*/
  if ( v19 ) /*0x46df42*/
    ShowWindow(v19, nCmdShow); /*0x46df46*/
  v20 = GetDlgItem(hDlg, 1314); /*0x46df4e*/
  if ( v20 ) /*0x46df52*/
    ShowWindow(v20, nCmdShow); /*0x46df56*/
  v21 = GetDlgItem(hDlg, 1699); /*0x46df5e*/
  if ( v21 ) /*0x46df62*/
    ShowWindow(v21, nCmdShow); /*0x46df66*/
  v22 = GetDlgItem(hDlg, 1700); /*0x46df6e*/
  if ( v22 ) /*0x46df72*/
    ShowWindow(v22, nCmdShow); /*0x46df76*/
  v23 = GetDlgItem(hDlg, 1745); /*0x46df7e*/
  if ( v23 ) /*0x46df82*/
    ShowWindow(v23, nCmdShow); /*0x46df86*/
  v24 = GetDlgItem(hDlg, 1448); /*0x46df8e*/
  if ( v24 ) /*0x46df92*/
    ShowWindow(v24, nCmdShow); /*0x46df96*/
  v25 = GetDlgItem(hDlg, 1820); /*0x46df9e*/
  if ( v25 ) /*0x46dfa2*/
    ShowWindow(v25, nCmdShow == 0); /*0x46dfaf*/
  result = GetDlgItem(hDlg, 1128); /*0x46dfb7*/
  if ( result ) /*0x46dfbb*/
    return (HWND)ShowWindow(result, nCmdShow); /*0x46dfbf*/
  return result; /*0x46dfc1*/
}
}
} // namespace gamemd

// 0x465CB0
namespace gamemd {
void nullsub_7()
{
  ;
}
} // namespace gamemd

// 0x465D80
namespace gamemd {
Iostream_init * E4Recv_465D80::__0Iostream_init_QAE_XZ_2()
{
{
    return this;
}
}
} // namespace gamemd

// 0x4660D0
namespace gamemd {
void sub_4660D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89DDF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x466100
namespace gamemd {
void sub_466100()
{
{
    DataGlobal_89DE68 = DataGlobal_89DDF8 / 60.0;
}
}
} // namespace gamemd

// 0x466120
namespace gamemd {
void sub_466120()
{
{
    DataGlobal_89DE50 = 1.0 / DataGlobal_89DE68;
}
}
} // namespace gamemd

// 0x466140
namespace gamemd {
void sub_466140()
{
{
    DataGlobal_89DE48 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x466160
namespace gamemd {
void sub_466160()
{
{
    DataGlobal_89DE00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x466180
namespace gamemd {
void sub_466180()
{
{
    DataGlobal_89DDD8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4661A0
namespace gamemd {
long long sub_4661A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89DDD8 - DataGlobal_89DE00);
    result = Math::RoundToInt(v0 * DataGlobal_89DDF8 * 0.5);
    DataGlobal_89DE70 = result;
    return result;
}
}
} // namespace gamemd

// 0x4661E0
namespace gamemd {
void sub_4661E0()
{
{
    DataGlobal_89DE08 = Math::ArcTan((double)DataGlobal_89DE70 * 0.00390625);
}
}
} // namespace gamemd

// 0x466210
namespace gamemd {
void sub_466210()
{
{
    DataGlobal_89DE40 = Math::ArcTan((double)(2 * DataGlobal_89DE70) / DataGlobal_89DDF8);
}
}
} // namespace gamemd

// 0x466240
namespace gamemd {
long long sub_466240()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89DE70) + 0.5);
    DataGlobal_89DE64 = result;
    return result;
}
}
} // namespace gamemd

// 0x466270
namespace gamemd {
int sub_466270()
{
{
    DataGlobal_89DDF0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x466280
namespace gamemd {
int sub_466280()
{
{
    DataGlobal_89DE30 = 0;
    DataGlobal_89DE34 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4662A0
namespace gamemd {
int sub_4662A0()
{
{
    DataGlobal_89DE60 = 0;
    DataGlobal_89DE58 = 128;
    DataGlobal_89DE5C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4662C0
namespace gamemd {
int sub_4662C0()
{
{
    DataGlobal_89DDE0 = 0;
    DataGlobal_89DDE4 = 0;
    DataGlobal_89DDE8 = 0;
    DataGlobal_89DDEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4662E0
namespace gamemd {
int sub_4662E0()
{
{
    DataGlobal_89DE1C = 0;
    DataGlobal_89DE20 = 0;
    DataGlobal_89DE24 = 1;
    DataGlobal_89DE25 = 0;
    DataGlobal_89DE18 = (int)&DataGlobal_7E4678;
    DataGlobal_89DE2C = 10;
    DataGlobal_89DE28 = 0;
    return atexit(sub_466320);
}
}
} // namespace gamemd

// 0x466320
namespace gamemd {
void sub_466320()
{
{
    if ( (DataGlobal_89DDD0 & 1) == 0 )
  {
    DataGlobal_89DE18 = (int)&vt_VectorClass_BulletClass;
    DataGlobal_89DDD0 |= 1u;
    if ( DataGlobal_89DE1C )
    {
    if ( DataGlobal_89DE25 )
      {
    __3_YAXPAX_Z(DataGlobal_89DE1C);
    DataGlobal_89DE1C = 0;
      }
    }
    DataGlobal_89DE25 = 0;
    DataGlobal_89DE20 = 0;
  }
}
}
} // namespace gamemd

// 0x4666B0
namespace gamemd {
void nullsub_108()
{
  ;
}
} // namespace gamemd

// 0x46B050
namespace gamemd {
LPVOID CreateUIObjectCOM(IUnknown * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3, AbstractClass * aP4, int a6, AbstractClass * aP7)
{
{
    void *v10;
    LPVOID ppv;
    ppv = 0;
    if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) < 0 )
    return 0;
    v10 = ppv;
    Particle::Init( (int)ppv, (AbstractClass *)aP0, (TechnoClass *)aP1, (IUnknown *)aP2, (TechnoClass *)aP3, (InfantryClass *)aP4, a6, aP7);
    return v10;
}
}
} // namespace gamemd

// 0x46B9B0
namespace gamemd {
int sub_46B9B0()
{
{
    DataGlobal_89DE80 = 0;
    DataGlobal_89DE84 = 0;
    DataGlobal_89DE88 = 0;
    DataGlobal_89DE8C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x46B9D0
namespace gamemd {
void sub_46B9D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89DE98 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x46BA00
namespace gamemd {
void sub_46BA00()
{
{
    DataGlobal_89DEE8 = DataGlobal_89DE98 / 60.0;
}
}
} // namespace gamemd

// 0x46BA20
namespace gamemd {
void sub_46BA20()
{
{
    DataGlobal_89DED0 = 1.0 / DataGlobal_89DEE8;
}
}
} // namespace gamemd

// 0x46BA40
namespace gamemd {
void sub_46BA40()
{
{
    DataGlobal_89DEC8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x46BA60
namespace gamemd {
void sub_46BA60()
{
{
    DataGlobal_89DEA0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x46BA80
namespace gamemd {
void sub_46BA80()
{
{
    DataGlobal_89DE78 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x46BAA0
namespace gamemd {
long long sub_46BAA0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89DE78 - DataGlobal_89DEA0);
    result = Math::RoundToInt(v0 * DataGlobal_89DE98 * 0.5);
    DataGlobal_89DEF0 = result;
    return result;
}
}
} // namespace gamemd

// 0x46BAE0
namespace gamemd {
void sub_46BAE0()
{
{
    DataGlobal_89DEA8 = Math::ArcTan((double)DataGlobal_89DEF0 * 0.00390625);
}
}
} // namespace gamemd

// 0x46BB10
namespace gamemd {
void sub_46BB10()
{
{
    DataGlobal_89DEC0 = Math::ArcTan((double)(2 * DataGlobal_89DEF0) / DataGlobal_89DE98);
}
}
} // namespace gamemd

// 0x46BB40
namespace gamemd {
long long sub_46BB40()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89DEF0) + 0.5);
    DataGlobal_89DEE4 = result;
    return result;
}
}
} // namespace gamemd

// 0x46BB70
namespace gamemd {
int sub_46BB70()
{
{
    DataGlobal_89DE90 = 0;
    DataGlobal_89DE92 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x46BB80
namespace gamemd {
int sub_46BB80()
{
{
    DataGlobal_89DEB0 = 0;
    DataGlobal_89DEB4 = 0;
    DataGlobal_89DEB8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x46BBA0
namespace gamemd {
int sub_46BBA0()
{
{
    DataGlobal_89DEE0 = 0;
    DataGlobal_89DED8 = 128;
    DataGlobal_89DEDC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x46C970
namespace gamemd {
void sub_46C970()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89DF08 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x46C9A0
namespace gamemd {
void sub_46C9A0()
{
{
    DataGlobal_89DF58 = DataGlobal_89DF08 / 60.0;
}
}
} // namespace gamemd

// 0x46C9C0
namespace gamemd {
void sub_46C9C0()
{
{
    DataGlobal_89DF40 = 1.0 / DataGlobal_89DF58;
}
}
} // namespace gamemd

// 0x46C9E0
namespace gamemd {
void sub_46C9E0()
{
{
    DataGlobal_89DF38 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x46CA00
namespace gamemd {
void sub_46CA00()
{
{
    DataGlobal_89DF10 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x46CA20
namespace gamemd {
void sub_46CA20()
{
{
    DataGlobal_89DEF8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x46CA40
namespace gamemd {
long long sub_46CA40()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89DEF8 - DataGlobal_89DF10);
    result = Math::RoundToInt(v0 * DataGlobal_89DF08 * 0.5);
    DataGlobal_89DF60 = result;
    return result;
}
}
} // namespace gamemd

// 0x46CA80
namespace gamemd {
void sub_46CA80()
{
{
    DataGlobal_89DF18 = Math::ArcTan((double)DataGlobal_89DF60 * 0.00390625);
}
}
} // namespace gamemd

// 0x46CAB0
namespace gamemd {
void sub_46CAB0()
{
{
    DataGlobal_89DF30 = Math::ArcTan((double)(2 * DataGlobal_89DF60) / DataGlobal_89DF08);
}
}
} // namespace gamemd

// 0x46CAE0
namespace gamemd {
long long sub_46CAE0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89DF60) + 0.5);
    DataGlobal_89DF54 = result;
    return result;
}
}
} // namespace gamemd

// 0x46CB10
namespace gamemd {
int sub_46CB10()
{
{
    DataGlobal_89DF00 = 0;
    DataGlobal_89DF02 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x46CB20
namespace gamemd {
int sub_46CB20()
{
{
    DataGlobal_89DF20 = 0;
    DataGlobal_89DF24 = 0;
    DataGlobal_89DF28 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x46CB40
namespace gamemd {
int sub_46CB40()
{
{
    DataGlobal_89DF50 = 0;
    DataGlobal_89DF48 = 128;
    DataGlobal_89DF4C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x46D120
namespace gamemd {
void sub_46D120()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89DFA8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x46D150
namespace gamemd {
void sub_46D150()
{
{
    DataGlobal_89E040 = DataGlobal_89DFA8 / 60.0;
}
}
} // namespace gamemd

// 0x46D170
namespace gamemd {
void sub_46D170()
{
{
    DataGlobal_89E018 = 1.0 / DataGlobal_89E040;
}
}
} // namespace gamemd

// 0x46D190
namespace gamemd {
void sub_46D190()
{
{
    DataGlobal_89E010 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x46D1B0
namespace gamemd {
void sub_46D1B0()
{
{
    DataGlobal_89DFB0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x46D1D0
namespace gamemd {
void sub_46D1D0()
{
{
    DataGlobal_89DF68 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x46D1F0
namespace gamemd {
long long sub_46D1F0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89DF68 - DataGlobal_89DFB0);
    result = Math::RoundToInt(v0 * DataGlobal_89DFA8 * 0.5);
    DataGlobal_89E048 = result;
    return result;
}
}
} // namespace gamemd

// 0x46D230
namespace gamemd {
void sub_46D230()
{
{
    DataGlobal_89DFB8 = Math::ArcTan((double)DataGlobal_89E048 * 0.00390625);
}
}
} // namespace gamemd

// 0x46D260
namespace gamemd {
void sub_46D260()
{
{
    DataGlobal_89DFD8 = Math::ArcTan((double)(2 * DataGlobal_89E048) / DataGlobal_89DFA8);
}
}
} // namespace gamemd

// 0x46D290
namespace gamemd {
long long sub_46D290()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E048) + 0.5);
    DataGlobal_89E034 = result;
    return result;
}
}
} // namespace gamemd

// 0x46D2C0
namespace gamemd {
int sub_46D2C0()
{
{
    DataGlobal_89DFA0 = 0;
    DataGlobal_89DFA2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x46D2D0
namespace gamemd {
int sub_46D2D0()
{
{
    DataGlobal_89DFC8 = 0;
    DataGlobal_89DFCC = 0;
    DataGlobal_89DFD0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x46D2F0
namespace gamemd {
int sub_46D2F0()
{
{
    DataGlobal_89E030 = 0;
    DataGlobal_89E028 = 128;
    DataGlobal_89E02C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x46D310
namespace gamemd {
int sub_46D310()
{
{
    DataGlobal_89DF70 = 0;
    DataGlobal_89DF74 = 0;
    DataGlobal_89DF78 = 0;
    DataGlobal_89DF7C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x46D480
namespace gamemd {
int sub_46D480()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __usercall sub_46D480@<edx:eax>(__int64 result@<edx:eax>, int a2@<ecx>)
{
  *((_BYTE *)&g_GameModeOptionState + a2) = BYTE4(result); /*0x46d480*/
  return result; /*0x46d486*/
}
}
} // namespace gamemd

// 0x46D490
namespace gamemd {
char E4Recv_46D490::sub_46D490()
{
{
    return *((char *)&g_GameModeOptionState + (int)this);
}
}
} // namespace gamemd

// 0x46D810
namespace gamemd {
int sub_46D810()
{
{
    int result;
    int v1;
    char v2[43];
    int Option;
    int PlayerSide;
    int PlayerColor;
    v1 = 51;
    strcpy(v2, g_GameSetupBuffer);
    Option = SessionClass::GetOption(*(int *)Game_PlayerInfoArray);
    PlayerSide = SessionClass::GetPlayerSide(*(int *)Game_PlayerInfoArray);
    PlayerColor = SessionClass::GetPlayerColor(*(int *)Game_PlayerInfoArray);
    result = g_NetworkPlayerName;
    if ( g_NetworkPlayerName )
  {
    Network::SendToPlayer((int)g_NetworkManager, (int)&v1, 455, 1, (wchar_t *)g_NetworkPlayerName);
    return Network::ReceiveLoop(g_NetworkManager);
  }
    return result;
}
}
} // namespace gamemd

// 0x46DA20
namespace gamemd {
LRESULT sub_46DA20(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
{
    HWND DlgItem;
    CampaignScore *v7;
    wchar_t Buffer[32];
    swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7);
    DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem);
    return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
}
}
} // namespace gamemd

// 0x46F810
namespace gamemd {
int Lobby_GetPlayerColor(int a1)
{
{
    wchar_t *v2;
    v2 = (wchar_t *)*(&g_NetworkPlayerName + a1);
    if ( Player::IsObserver(v2) )
    return g_CampaignConfig[a1];
    if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags )
    return -2;
    if ( v2 == (wchar_t *)g_Lobby_PlayerCount )
    return -2;
    if ( v2 == g_Lobby_PlayerReady )
    return -2;
    if ( v2 == (wchar_t *)g_Lobby_MaxPlayers )
    return -2;
    return SessionClass::GetPlayerColor((int)v2);
}
}
} // namespace gamemd

// 0x46F880
namespace gamemd {
int HouseClass_GetSideIndex(int a1)
{
{
    wchar_t *v2;
    v2 = (wchar_t *)*(&g_NetworkPlayerName + a1);
    if ( Player::IsObserver(v2) )
    return g_CampaignSideIndex[a1];
    if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags )
    return -2;
    if ( v2 == (wchar_t *)g_Lobby_PlayerCount )
    return -2;
    if ( v2 == g_Lobby_PlayerReady )
    return -2;
    if ( v2 == (wchar_t *)g_Lobby_MaxPlayers )
    return -2;
    return SessionClass::GetOption((int)v2);
}
}
} // namespace gamemd
