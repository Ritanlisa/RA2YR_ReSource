// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/E4Recv_465D80_e4.hpp"
#include "e4/classes/E4Recv_46D350_e4.hpp"
#include "e4/classes/E4Recv_46D490_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Control_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/E4Recv_4880F0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/E4Recv_479740_e4.hpp"
#include "e4/classes/Settings_e4.hpp"

// 0x46D350
namespace gamemd {
void E4Recv_46D350::sub_46D350()
{
  this->m_0 = (int)&(void*)(void*)&CampaignScoreClass_vftable; /*0x46d350*/
}
} // namespace gamemd

// 0x46D650
namespace gamemd {
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

  if ( dword_A8D638 != 50 ) /*0x46d65b*/
    return 0; /*0x46d80a*/
  Debug::Log(); /*0x46d666*/
  v0 = dword_A8EB68 != (char)dword_A8D667; /*0x46d67f*/
  dword_A8EB68 = (char)dword_A8D667; /*0x46d686*/
  v1 = (HWND)Dialog::FindByHandle((void *)0xBC6); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    DlgItem = GetDlgItem(v1, 1842); /*0x46d69a*/
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, dword_A8EB68); /*0x46d6b3*/
  }
  v3 = 0; /*0x46d6bc*/
  v4 = &dword_A8DA90; /*0x46d6be*/
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
  while ( (int)v4 < (int)&dword_A8DAB0 ); /*0x46d7fd*/
  return v0; /*0x46d808*/
}
}
// 0x46D8B0
namespace gamemd {
char sub_46D8B0()
{
  char v1; // bl
  int v2; // edi
  const wchar_t **v3; // esi
  char *v4; // eax
  unsigned __int8 (__thiscall **vtable0)(ObjectClass *, int); // esi
  int PlayerSide; // eax
  int v8; // [esp-4h] [ebp-10h]

  v1 = 0; /*0x46d8b3*/
  v2 = 0; /*0x46d8b5*/
  v3 = (const wchar_t **)dword_A8DA90; /*0x46d8b7*/
  while ( 1 ) /*0x46d8c1*/
  {
    v4 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x46d8c1*/
    if ( !wcscmp((const wchar_t *)v4, *v3) ) /*0x46d8ca*/
      break; /*0x46d8ca*/
    ++v3; /*0x46d8d6*/
    ++v2; /*0x46d8d9*/
    if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x46d8e0*/
      return 0; /*0x46d8e7*/
  }
  if ( v2 == -1 ) /*0x46d8eb*/
    return 0; /*0x46d8f2*/
  if ( SessionClass::GetPlayerSide((int *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[7] ) /*0x46d907*/
    v1 = 1; /*0x46d909*/
  if ( dword_A8B23C ) /*0x46d913*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *, _DWORD))dword_A8B23C->vfptr + 7))( /*0x46d918*/
           dword_A8B23C,
           *(_DWORD *)&stru_A8D600.__pad_64[7]) )
    {
      SessionClass::SetPlayerOption((int *)dword_A8DA90[v2], *(int *)&stru_A8D600.__pad_64[7]); /*0x46d926*/
    }
    else if ( dword_A8B23C ) /*0x46d92f*/
    {
      vtable0 = (unsigned __int8 (__thiscall **)(ObjectClass *, int))dword_A8B23C->vfptr; /*0x46d938*/
      PlayerSide = SessionClass::GetPlayerSide((int *)dword_A8DA90[v2]); /*0x46d93a*/
      if ( !vtable0[7](dword_A8B23C, PlayerSide) ) /*0x46d946*/
      {
        v8 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->vfptr + 10))(dword_A8B23C); /*0x46d958*/
        SessionClass::SetPlayerOption((int *)dword_A8DA90[v2], v8); /*0x46d960*/
      }
    }
  }
  if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)stru_A8D600.Network_field_0x6F ) /*0x46d979*/
    v1 = 1; /*0x46d97b*/
  if ( IsAvailableColorhWnd(*(int *)stru_A8D600.Network_field_0x6F) ) /*0x46d97d*/
  {
    if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)stru_A8D600.Network_field_0x6F ) /*0x46d998*/
    {
      SessionClass::SetPlayerColor((int *)dword_A8DA90[v2], -2); /*0x46d9a3*/
      v1 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    SessionClass::SetPlayerColor((int *)dword_A8DA90[v2], *(int *)stru_A8D600.Network_field_0x6F); /*0x46d9b9*/
  }
  if ( SessionClass::GetPlayerColor((SessionClass *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[3] ) /*0x46d9d2*/
    v1 = 1; /*0x46d9d4*/
  if ( sub_4E50A0(*(int *)&stru_A8D600.__pad_64[3]) ) /*0x46d9d6*/
  {
    if ( SessionClass::GetOption((int *)dword_A8DA90[v2]) != *(_DWORD *)&stru_A8D600.__pad_64[3] ) /*0x46d9f1*/
    {
      SessionClass::SetOption((int *)dword_A8DA90[v2], -2); /*0x46d9fc*/
      return v1; /*0x46da06*/
    }
  }
  else
  {
    SessionClass::SetOption((int *)dword_A8DA90[v2], *(int *)&stru_A8D600.__pad_64[3]); /*0x46da15*/
  }
  return v1; /*0x46d8e2*/
}
}
// 0x46DA70
namespace gamemd {
void sub_46DA70()
{
  int nextArrayIndex; // ebx
  int v2; // esi
  int v3; // edi
  size_t v4; // ebp
  int v5; // esi
  int v6; // eax
  int *v7; // ecx
  int v8; // edx
  int v9; // ebp
  int *v10; // ecx
  int v11; // edx
  int v12; // ebp
  int Count; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // edi
  int i; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  nextArrayIndex = stru_A80220.nextArrayIndex; /*0x46da74*/
  v2 = 0; /*0x46da7b*/
  dword_A8D580 = 0; /*0x46da7f*/
  v18 = stru_A80220.nextArrayIndex; /*0x46da85*/
  for ( i = 0; v2 < nextArrayIndex; i = v2 ) /*0x46da8d*/
  {
    v3 = *((_DWORD *)stru_A80220.vfptr3 + v2); /*0x46da9a*/
    if ( v3 /*0x46dab7*/
      && *(_BYTE *)(v3->u32_34 + 422) != 1
      && (unsigned __int8)House::IsCurrentPlayer(*((House **)stru_A80220.vfptr3 + v2)) )
    {
      v4 = dword_A8D580++; /*0x46dacf*/
      v5 = 112 * v4; /*0x46dae1*/
      *((_DWORD *)&dword_A8D228 + 28 * v4) = 0; /*0x46daea*/
      wcscpy((wchar_t *)&unk_A8D1FC + 56 * v4, (const wchar_t *)(v3 + 90154)); /*0x46daf5*/
      v6 = 0; /*0x46dafa*/
      *((_DWORD *)&dword_A8D22C + 28 * v4) = 0; /*0x46daff*/
      *((_DWORD *)&dword_A8D23C + 28 * v4) = 0; /*0x46db05*/
      *((_DWORD *)&dword_A8D24C + 28 * v4) = 0; /*0x46db0b*/
      dword_A8D25C[28 * v4] = 0; /*0x46db11*/
      *((_DWORD *)&dword_A8D224 + 28 * v4) = *(_DWORD *)(v3 + 90196); /*0x46db1d*/
      if ( !v3->u8_1F5 ) /*0x46db23*/
      {
        ++*((_DWORD *)&dword_A8D228 + 28 * v4); /*0x46db34*/
        v4 = v4; /*0x46db3a*/
      }
      v7 = (int *)(v3 + 21476); /*0x46db40*/
      v8 = 20; /*0x46db46*/
      do /*0x46db53*/
      {
        v9 = *v7++; /*0x46db4b*/
        v6 += v9; /*0x46db50*/
        --v8; /*0x46db52*/
      }
      while ( v8 ); /*0x46db53*/
      v10 = (int *)(v3 + 21560); /*0x46db55*/
      v11 = 20; /*0x46db5b*/
      do /*0x46db68*/
      {
        v12 = *v10++; /*0x46db60*/
        v6 += v12; /*0x46db65*/
        --v11; /*0x46db67*/
      }
      while ( v11 ); /*0x46db68*/
      *(_DWORD *)((char *)&dword_A8D23C + v5) = v6; /*0x46db6a*/
      *(_DWORD *)((char *)&dword_A8D22C + v5) = *(_DWORD *)(v3 + 21640) + *(_DWORD *)(v3 + 21556); /*0x46db84*/
      Count = VectorClass::GetCount((VectorClass *)(v3 + 21840)); /*0x46db95*/
      v14 = VectorClass::GetCount((VectorClass *)(v3 + 21860)) + Count; /*0x46dba2*/
      v15 = VectorClass::GetCount((VectorClass *)(v3 + 21880)) + v14; /*0x46dbaf*/
      *(_DWORD *)((char *)&dword_A8D24C + v5) = *(_DWORD *)(v3 + 21640) /*0x46dbc8*/
                                              + VectorClass::GetCount((VectorClass *)(v3 + 21900))
                                              + v15
                                              + *(_DWORD *)(v3 + 21556);
      v16 = *(_DWORD *)(v3 + 21736); /*0x46dbce*/
      if ( v16 > 0 ) /*0x46dbd6*/
        dword_A8D25C[v5 / 4u] += v16; /*0x46dbd8*/
      Debug::Log(); /*0x46dc1c*/
      v2 = i; /*0x46dc21*/
      nextArrayIndex = v18; /*0x46dc25*/
    }
    ++v2; /*0x46dc2c*/
  }
}
}
// 0x46DCC0
namespace gamemd {
BOOL sub_46DCC0(HWND hDlg, bool a2)
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
    result = IsKnownPointer((wchar_t *)*(&dword_A8DA90 + i)); /*0x46dcda*/
    if ( result && i != dword_A8DA8C )
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
// 0x46DD70
namespace gamemd {
void * EnableGameModeControls(HWND hDlg, bool a2)
{
  int v4; // eax
  HWND DlgItem; // eax
  int ResourceID2; // eax
  HWND v7; // eax
  int ResourceID; // eax
  HWND v9; // eax
  int ResourceID3; // eax
  HWND v11; // eax
  HWND result; // eax
  HWND v13; // edi

  if ( dword_A8DA8C )
    v4 = dword_A8DA8C != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  DlgItem = GetDlgItem(hDlg, v4); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  ResourceID2 = GetResourceID2CSF((void *)dword_A8DA8C); /*0x46ddb7*/
  v7 = GetDlgItem(hDlg, ResourceID2); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  ResourceID = GetResourceIDCSF((void *)dword_A8DA8C); /*0x46ddca*/
  v9 = GetDlgItem(hDlg, ResourceID); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  ResourceID3 = GetResourceID3CSF((void *)dword_A8DA8C); /*0x46dddd*/
  v11 = GetDlgItem(hDlg, ResourceID3); /*0x46dde4*/
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
// 0x46DE20
namespace gamemd {
void * sub_46DE20(HWND hDlg, int nCmdShow)
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
// 0x465CB0
namespace gamemd {
void ObjectClass::nullsub_7()
{
  ; /*0x465cb0*/
}
} // namespace gamemd

// 0x465D80
namespace gamemd {
Iostream_init * E4Recv_465D80::__0Iostream_init_QAE_XZ_2()
{
  return this; /*0x465d82*/
}
} // namespace gamemd

// 0x4660D0
namespace gamemd {
void sub_4660D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4660dc*/
  dbl_89DDF8 = Math::Sqrt(v0 + v0); /*0x4660ee*/
}
} // namespace gamemd

// 0x466100
namespace gamemd {
void sub_466100()
{
  dbl_89DE68 = dbl_89DDF8 / 60.0; /*0x46610c*/
}
} // namespace gamemd

// 0x466120
namespace gamemd {
void sub_466120()
{
  dbl_89DE50 = 1.0 / dbl_89DE68; /*0x46612c*/
}
} // namespace gamemd

// 0x466140
namespace gamemd {
void sub_466140()
{
  dbl_89DE48 = 0.0174532925199433 * 45.0; /*0x46614c*/
}
} // namespace gamemd

// 0x466160
namespace gamemd {
void sub_466160()
{
  dbl_89DE00 = 0.0174532925199433 * 60.0; /*0x46616c*/
}
} // namespace gamemd

// 0x466180
namespace gamemd {
void sub_466180()
{
  dbl_89DDD8 = 0.0174532925199433 * 90.0; /*0x46618c*/
}
} // namespace gamemd

// 0x4661A0
namespace gamemd {
long long sub_4661A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DDD8 - dbl_89DE00); /*0x4661b2*/
  result = Math::RoundToInt(v0 * dbl_89DDF8 * 0.5); /*0x4661c6*/
  dword_89DE70 = result; /*0x4661cb*/
  return result; /*0x4661d0*/
}
} // namespace gamemd

// 0x4661E0
namespace gamemd {
void sub_4661E0()
{
  dbl_89DE08 = Math::ArcTan((double)dword_89DE70 * 0.00390625); /*0x4661f7*/
}
} // namespace gamemd

// 0x466210
namespace gamemd {
void sub_466210()
{
  dbl_89DE40 = Math::ArcTan((double)(2 * dword_89DE70) / dbl_89DDF8); /*0x466232*/
}
} // namespace gamemd

// 0x466240
namespace gamemd {
long long sub_466240()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DE70) + 0.5); /*0x46625b*/
  dword_89DE64 = result; /*0x466260*/
  return result; /*0x466266*/
}
} // namespace gamemd

// 0x466270
namespace gamemd {
int sub_466270()
{
  dword_89DDF0 = 0; /*0x466272*/
  return 0; /*0x46627e*/
}
} // namespace gamemd

// 0x466280
namespace gamemd {
int sub_466280()
{
  dword_89DE30 = 0; /*0x466282*/
  qword_89DE34 = 0; /*0x466287*/
  return 0; /*0x466291*/
}
} // namespace gamemd

// 0x4662A0
namespace gamemd {
int sub_4662A0()
{
  dword_89DE60 = 0; /*0x4662a5*/
  dword_89DE58 = 128; /*0x4662af*/
  dword_89DE5C = 128; /*0x4662b4*/
  return 128; /*0x4662b9*/
}
} // namespace gamemd

// 0x4662C0
namespace gamemd {
int sub_4662C0()
{
  dword_89DDE0 = 0; /*0x4662c2*/
  dword_89DDE4 = 0; /*0x4662c7*/
  dword_89DDE8 = 0; /*0x4662cc*/
  dword_89DDEC = 0; /*0x4662d1*/
  return 0; /*0x4662d6*/
}
} // namespace gamemd

// 0x4662E0
namespace gamemd {
int sub_4662E0()
{
  dword_89DE1C = 0; /*0x4662e7*/
  dword_89DE20 = 0; /*0x4662ec*/
  byte_89DE24 = 1; /*0x4662f1*/
  byte_89DE25 = 0; /*0x4662f8*/
  dword_89DE18 = (int)&off_7E4678; /*0x4662fd*/
  dword_89DE2C = 10; /*0x466307*/
  dword_89DE28 = 0; /*0x466311*/
  return atexit(sub_466320); /*0x46631c*/
}
} // namespace gamemd

// 0x466320
namespace gamemd {
void sub_466320()
{
  if ( (byte_89DDD0 & 1) == 0 ) /*0x46632a*/
  {
    dword_89DE18 = (int)&(void*)(void*)&VectorClass_BulletClass___vftable; /*0x46632e*/
    byte_89DDD0 |= 1u; /*0x466341*/
    if ( dword_89DE1C ) /*0x466347*/
    {
      if ( byte_89DE25 ) /*0x466351*/
      {
        RA2_OPDEL(dword_89DE1C); /*0x466354*/
        dword_89DE1C = 0; /*0x46635c*/
      }
    }
    byte_89DE25 = 0; /*0x466366*/
    dword_89DE20 = 0; /*0x46636d*/
  }
}
} // namespace gamemd

// 0x4666B0
namespace gamemd {
void nullsub_108()
{
  ; /*0x4666b0*/
}
} // namespace gamemd

// 0x46B050
namespace gamemd {
LPVOID CreateUIObjectCOM(IUnknown * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3, AbstractClass * aP4, int a6, AbstractClass * aP7)
{
  LPVOID v10; // esi
  LPVOID ppv; // [esp+8h] [ebp-4h] BYREF

  ppv = 0; /*0x46b06a*/
  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) < 0 ) /*0x46b07a*/
    return 0; /*0x46b07d*/
  v10 = ppv; /*0x46b0a4*/
  Particle::Init((int *)ppv, aP0, aP1, aP2, aP3, aP4, a6, aP7); /*0x46b0a6*/
  return (int)v10; /*0x46b07c*/
}
} // namespace gamemd

// 0x46B9B0
namespace gamemd {
int sub_46B9B0()
{
  dword_89DE80 = 0; /*0x46b9b2*/
  dword_89DE84 = 0; /*0x46b9b7*/
  dword_89DE88 = 0; /*0x46b9bc*/
  dword_89DE8C = 0; /*0x46b9c1*/
  return 0; /*0x46b9c6*/
}
} // namespace gamemd

// 0x46B9D0
namespace gamemd {
void sub_46B9D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46b9dc*/
  dbl_89DE98 = Math::Sqrt(v0 + v0); /*0x46b9ee*/
}
} // namespace gamemd

// 0x46BA00
namespace gamemd {
void sub_46BA00()
{
  dbl_89DEE8 = dbl_89DE98 / 60.0; /*0x46ba0c*/
}
} // namespace gamemd

// 0x46BA20
namespace gamemd {
void sub_46BA20()
{
  dbl_89DED0 = 1.0 / dbl_89DEE8; /*0x46ba2c*/
}
} // namespace gamemd

// 0x46BA40
namespace gamemd {
void sub_46BA40()
{
  dbl_89DEC8 = 0.0174532925199433 * 45.0; /*0x46ba4c*/
}
} // namespace gamemd

// 0x46BA60
namespace gamemd {
void sub_46BA60()
{
  dbl_89DEA0 = 0.0174532925199433 * 60.0; /*0x46ba6c*/
}
} // namespace gamemd

// 0x46BA80
namespace gamemd {
void sub_46BA80()
{
  dbl_89DE78 = 0.0174532925199433 * 90.0; /*0x46ba8c*/
}
} // namespace gamemd

// 0x46BAA0
namespace gamemd {
long long sub_46BAA0()
{
  int result; // eax
  double v2; // [esp+0h] [ebp-8h]

  __asm /*0x46baa0*/
  {
    fld dbl_89DE78
    fsub dbl_89DEA0
  }
  __asm { fstp [esp+8+var_8]; double }
  Math::Sin(v2); /*0x46bab2*/
  __asm { fmul dbl_89DE98 } /*0x46bab7*/
  __asm { fmul ds:dbl_7E1738 }
  (result) = ((result) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(a1)) & 0xFFFF); /*0x46bac6*/
  dword_89DEF0 = result; /*0x46bacb*/
  return result; /*0x46bad0*/
}
} // namespace gamemd

// 0x46BAE0
namespace gamemd {
void sub_46BAE0()
{
  dbl_89DEA8 = Math::ArcTan((double)dword_89DEF0 * 0.00390625); /*0x46baf7*/
}
} // namespace gamemd

// 0x46BB10
namespace gamemd {
void sub_46BB10()
{
  dbl_89DEC0 = Math::ArcTan((double)(2 * dword_89DEF0) / dbl_89DE98); /*0x46bb32*/
}
} // namespace gamemd

// 0x46BB40
namespace gamemd {
long long sub_46BB40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DEF0) + 0.5); /*0x46bb5b*/
  dword_89DEE4 = result; /*0x46bb60*/
  return result; /*0x46bb66*/
}
} // namespace gamemd

// 0x46BB70
namespace gamemd {
int sub_46BB70()
{
  word_89DE90 = 0; /*0x46bb72*/
  word_89DE92 = 0; /*0x46bb78*/
  return 0; /*0x46bb7e*/
}
} // namespace gamemd

// 0x46BB80
namespace gamemd {
int sub_46BB80()
{
  dword_89DEB0 = 0; /*0x46bb82*/
  dword_89DEB4 = 0; /*0x46bb87*/
  dword_89DEB8 = 0; /*0x46bb8c*/
  return 0; /*0x46bb91*/
}
} // namespace gamemd

// 0x46BBA0
namespace gamemd {
int sub_46BBA0()
{
  dword_89DEE0 = 0; /*0x46bba5*/
  dword_89DED8 = 128; /*0x46bbaf*/
  dword_89DEDC = 128; /*0x46bbb4*/
  return 128; /*0x46bbb9*/
}
} // namespace gamemd

// 0x46C970
namespace gamemd {
void sub_46C970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46c97c*/
  dbl_89DF08 = Math::Sqrt(v0 + v0); /*0x46c98e*/
}
} // namespace gamemd

// 0x46C9A0
namespace gamemd {
void sub_46C9A0()
{
  dbl_89DF58 = dbl_89DF08 / 60.0; /*0x46c9ac*/
}
} // namespace gamemd

// 0x46C9C0
namespace gamemd {
void sub_46C9C0()
{
  dbl_89DF40 = 1.0 / dbl_89DF58; /*0x46c9cc*/
}
} // namespace gamemd

// 0x46C9E0
namespace gamemd {
void sub_46C9E0()
{
  dbl_89DF38 = 0.0174532925199433 * 45.0; /*0x46c9ec*/
}
} // namespace gamemd

// 0x46CA00
namespace gamemd {
void sub_46CA00()
{
  dbl_89DF10 = 0.0174532925199433 * 60.0; /*0x46ca0c*/
}
} // namespace gamemd

// 0x46CA20
namespace gamemd {
void sub_46CA20()
{
  dbl_89DEF8 = 0.0174532925199433 * 90.0; /*0x46ca2c*/
}
} // namespace gamemd

// 0x46CA40
namespace gamemd {
long long sub_46CA40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DEF8 - dbl_89DF10); /*0x46ca52*/
  result = Math::RoundToInt(v0 * dbl_89DF08 * 0.5); /*0x46ca66*/
  dword_89DF60 = result; /*0x46ca6b*/
  return result; /*0x46ca70*/
}
} // namespace gamemd

// 0x46CA80
namespace gamemd {
void sub_46CA80()
{
  dbl_89DF18 = Math::ArcTan((double)dword_89DF60 * 0.00390625); /*0x46ca97*/
}
} // namespace gamemd

// 0x46CAB0
namespace gamemd {
void sub_46CAB0()
{
  dbl_89DF30 = Math::ArcTan((double)(2 * dword_89DF60) / dbl_89DF08); /*0x46cad2*/
}
} // namespace gamemd

// 0x46CAE0
namespace gamemd {
long long sub_46CAE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89DF60) + 0.5); /*0x46cafb*/
  dword_89DF54 = result; /*0x46cb00*/
  return result; /*0x46cb06*/
}
} // namespace gamemd

// 0x46CB10
namespace gamemd {
int sub_46CB10()
{
  word_89DF00 = 0; /*0x46cb12*/
  word_89DF02 = 0; /*0x46cb18*/
  return 0; /*0x46cb1e*/
}
} // namespace gamemd

// 0x46CB20
namespace gamemd {
int sub_46CB20()
{
  dword_89DF20 = 0; /*0x46cb22*/
  dword_89DF24 = 0; /*0x46cb27*/
  dword_89DF28 = 0; /*0x46cb2c*/
  return 0; /*0x46cb31*/
}
} // namespace gamemd

// 0x46CB40
namespace gamemd {
int sub_46CB40()
{
  dword_89DF50 = 0; /*0x46cb45*/
  dword_89DF48 = 128; /*0x46cb4f*/
  dword_89DF4C = 128; /*0x46cb54*/
  return 128; /*0x46cb59*/
}
} // namespace gamemd

// 0x46D120
namespace gamemd {
void sub_46D120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x46d12c*/
  dbl_89DFA8 = Math::Sqrt(v0 + v0); /*0x46d13e*/
}
} // namespace gamemd

// 0x46D150
namespace gamemd {
void sub_46D150()
{
  dbl_89E040 = dbl_89DFA8 / 60.0; /*0x46d15c*/
}
} // namespace gamemd

// 0x46D170
namespace gamemd {
void sub_46D170()
{
  dbl_89E018 = 1.0 / dbl_89E040; /*0x46d17c*/
}
} // namespace gamemd

// 0x46D190
namespace gamemd {
void sub_46D190()
{
  dbl_89E010 = 0.0174532925199433 * 45.0; /*0x46d19c*/
}
} // namespace gamemd

// 0x46D1B0
namespace gamemd {
void sub_46D1B0()
{
  dbl_89DFB0 = 0.0174532925199433 * 60.0; /*0x46d1bc*/
}
} // namespace gamemd

// 0x46D1D0
namespace gamemd {
void sub_46D1D0()
{
  dbl_89DF68 = 0.0174532925199433 * 90.0; /*0x46d1dc*/
}
} // namespace gamemd

// 0x46D1F0
namespace gamemd {
long long sub_46D1F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89DF68 - dbl_89DFB0); /*0x46d202*/
  result = Math::RoundToInt(v0 * dbl_89DFA8 * 0.5); /*0x46d216*/
  dword_89E048 = result; /*0x46d21b*/
  return result; /*0x46d220*/
}
} // namespace gamemd

// 0x46D230
namespace gamemd {
void sub_46D230()
{
  dbl_89DFB8 = Math::ArcTan((double)dword_89E048 * 0.00390625); /*0x46d247*/
}
} // namespace gamemd

// 0x46D260
namespace gamemd {
void sub_46D260()
{
  dbl_89DFD8 = Math::ArcTan((double)(2 * dword_89E048) / dbl_89DFA8); /*0x46d282*/
}
} // namespace gamemd

// 0x46D290
namespace gamemd {
long long sub_46D290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E048) + 0.5); /*0x46d2ab*/
  dword_89E034 = result; /*0x46d2b0*/
  return result; /*0x46d2b6*/
}
} // namespace gamemd

// 0x46D2C0
namespace gamemd {
int sub_46D2C0()
{
  word_89DFA0 = 0; /*0x46d2c2*/
  word_89DFA2 = 0; /*0x46d2c8*/
  return 0; /*0x46d2ce*/
}
} // namespace gamemd

// 0x46D2D0
namespace gamemd {
int sub_46D2D0()
{
  dword_89DFC8 = 0; /*0x46d2d2*/
  dword_89DFCC = 0; /*0x46d2d7*/
  dword_89DFD0 = 0; /*0x46d2dc*/
  return 0; /*0x46d2e1*/
}
} // namespace gamemd

// 0x46D2F0
namespace gamemd {
int sub_46D2F0()
{
  dword_89E030 = 0; /*0x46d2f5*/
  dword_89E028 = 128; /*0x46d2ff*/
  dword_89E02C = 128; /*0x46d304*/
  return 128; /*0x46d309*/
}
} // namespace gamemd

// 0x46D310
namespace gamemd {
int sub_46D310()
{
  dword_89DF70 = 0; /*0x46d312*/
  dword_89DF74 = 0; /*0x46d317*/
  dword_89DF78 = 0; /*0x46d31c*/
  dword_89DF7C = 0; /*0x46d321*/
  return 0; /*0x46d326*/
}
} // namespace gamemd

// 0x46D480
namespace gamemd {
__int64 sub_46D480(void * a1, void * a2)
{
  __int64 result; // rax

  *((_BYTE *)&g_GameModeOptionState + a2) = (((result) >> 32) & 0xFF); /*0x46d480*/
  return result; /*0x46d486*/
}
}
// 0x46D490
namespace gamemd {
char E4Recv_46D490::sub_46D490()
{
  return *((_BYTE *)&g_GameModeOptionState + (_DWORD)this); /*0x46d496*/
}
} // namespace gamemd

// 0x46D810
namespace gamemd {
int sub_46D810()
{
  int result; // eax
  int v2; // [esp+8h] [ebp-1C8h] BYREF
  char v3[43]; // [esp+Ch] [ebp-1C4h] BYREF
  int Option; // [esp+37h] [ebp-199h]
  int PlayerSide; // [esp+3Bh] [ebp-195h]
  int PlayerColor; // [esp+3Fh] [ebp-191h]

  v2 = 51; /*0x46d82c*/
  strcpy( (char *)(v3), (const char *)(unk_A8B380)); /*0x46d83d*/
  Option = ((SessionClass *)((int *)*(unsigned int *)(dword_A8DA78)))->GetOption(); /*(unsigned int *)(0x46d859)*/
  PlayerSide = ((SessionClass *)((int *)*(unsigned int *)(dword_A8DA78)))->GetPlayerSide(); /*0x46d864*/
  PlayerColor = ((SessionClass *)((SessionClass *)*(unsigned int *)(dword_A8DA78)))->GetPlayerColor(); /*0x46d874*/
  result = dword_A8DA90; /*0x46d878*/
  if ( dword_A8DA90 ) /*0x46d881*/
  {
    ((Network *)((int)&unk_A8E9C0))->SendToPlayer((int)((Network *)((int)&unk_A8E9C0)), (int)&v2, 455, (wchar_t *)(1), (wchar_t *)dword_A8DA90); /*0x46d895*/
// 0x541820
    return (int)(((Network *)(&unk_A8E9C0))->ReceiveLoop()); /*0x46d89f*/
    {
      void *Network_field_0xC; // ebx
      void *v3; // edx
      int v4; // ecx
      int v5; // edi
      bool v6; // zf
      unsigned __int16 *v7; // ebp
      int v8; // ecx
      const char *v9; // eax
      int v10; // edi
      char *v11; // eax
      __int16 v12; // ax
      __int16 v13; // bp
      int v14; // edx
      int *v15; // ecx
      int *v16; // eax
      int PlayerName; // eax
      int v18; // ebp
      IPXManagerClass *v19; // ebx
      char *v20; // eax
      int *v21; // ecx
      int v22; // ecx
      int *v23; // edx
      _WORD *v24; // ecx
      char v25; // cl
      int v26; // ebp
      IPXManagerClass *v27; // edi
      char LinkedIndex; // al
      int v29; // eax
      int v30; // edi
      _DWORD *v31; // ecx
      int i; // edi
      int *v33; // ecx
      int *v34; // eax
      int *v35; // eax
      int *v36; // ecx
      int v37; // ecx
      int v38; // ebp
      int v39; // ecx
      int v40; // ecx
      IPXManagerClass *v41; // edi
      int result; // eax
      __int16 v43; // [esp+20h] [ebp-4CCh]
      int v44; // [esp+20h] [ebp-4CCh]
      Network *v45; // [esp+24h] [ebp-4C8h]
      __int16 v46[2]; // [esp+34h] [ebp-4B8h] BYREF
      Network v47[2]; // [esp+38h] [ebp-4B4h] BYREF

      v47[0].Network_field_0x10 = (void *)1; /*0x541830*/
      Waypoint::InitInvalid((Waypoint *)v47); /*0x541838*/
      if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x541844*/
      {
        while ( 1 ) /*0x541864*/
        {
          *(_DWORD *)v47[0].__pad_14 = 1024; /*0x541864*/
          *(_DWORD *)&v47[0].__pad_14[4] = 128; /*0x54186c*/
          *(_DWORD *)v46 = 0; /*0x541874*/
          Network_field_0xC = (void *)(*(int (__thiscall **)(_DWORD, char *, char *, char *, char *, __int16 *))(**(_DWORD **)&stru_887598.isAliveFlag + 8))( /*0x541889*/
                                        *(_DWORD *)&stru_887598.isAliveFlag,
                                        &v47[0].__pad_87[45],
                                        v47[0].__pad_14,
                                        v47[0].__pad_34,
                                        &v47[0].__pad_14[4],
                                        v46);
          v47[0].Network_field_0xC = Network_field_0xC; /*0x54188d*/
          if ( !Network_field_0xC ) /*0x541891*/
            goto LABEL_92; /*0x541891*/
          v3 = *(void **)&v47[0].__pad_34[4]; /*0x54189b*/
          v47[0].Network_field_0x0 = *(_DWORD *)v47[0].__pad_34; /*0x5418a6*/
          v4 = *((_DWORD *)int + 18); /*0x5418aa*/
          *((_DWORD *)int + 35) = &v47[0].__pad_87[45]; /*0x5418ad*/
          v47[0].Network_field_0x4 = v3; /*0x5418b7*/
          v47[0].Network_field_0x8 = *(void **)&v47[0].__pad_34[8]; /*0x5418bb*/
          if ( *(_WORD *)&v47[0].__pad_87[45] == *(_WORD *)(v4 + 36) ) /*0x5418cb*/
          {
            if ( Network_Recv( /*0x5418ee*/
                   (int)&v47[0].__pad_87[45],
                   (int)&v47[0].__pad_87[45],
                   (int)Network_field_0xC,
                   (int)v47[0].__pad_34,
                   v46[0]) )
            {
              goto LABEL_87; /*0x5418f5*/
            }
            if ( (*(int (__thiscall **)(_DWORD, char *, void *, Network *, _DWORD))(**((_DWORD **)int + 18) + 48))( /*0x541913*/
                   *((_DWORD *)int + 18),
                   &v47[0].__pad_87[45],
                   Network_field_0xC,
                   v47,
                   *(_DWORD *)v46) )
            {
              if ( *(_DWORD *)&dword_A8B238 == 4 && byte_A8E2C8 ) /*0x541932*/
              {
                v5 = 0; /*0x54193d*/
                v6 = dword_A8DA84 == 0; /*0x54193f*/
                if ( dword_A8DA84 <= 0 ) /*0x541941*/
                {
      LABEL_14:
                  if ( !v6 ) /*0x541980*/
                  {
                    Debug::Log(); /*0x54198b*/
                    if ( (unsigned int)Network_field_0xC >= 0x10 /*0x5419ad*/
                      && v47[0].__pad_87[47] != 2
                      && (unsigned int)Network_field_0xC >= 0x3F )
                    {
                      v8 = *(_DWORD *)(*((_DWORD *)int + 35) + 16); /*0x5419bc*/
                      if ( v8 == 39 || v8 == 41 || v8 == 13 ) /*0x5419cb*/
                      {
                        v9 = (const char *)(*((_DWORD *)int + 35) + 20); /*0x5419d3*/
                        *(_DWORD *)&v47[0].__pad_14[8] = 0; /*0x5419d6*/
                        *(_DWORD *)&v47[0].__pad_14[12] = 0; /*0x5419dc*/
                        *(_DWORD *)&v47[0].Network_field_0x22[2] = 0; /*0x5419e4*/
                        v47[0].Network_field_0x28[0] = 0; /*0x5419e9*/
                        *(_DWORD *)v47[0].__pad_2C = 0; /*0x5419ee*/
                        IDA_LOWORD(v47[0].Network_field_0x30[0]) = 0; /*0x5419f2*/
                        strncpy(&v47[0].__pad_14[8], v9, 0x14u); /*0x5419f7*/
                        v10 = 0; /*0x541a04*/
                        if ( dword_A8DA84 > 0 ) /*0x541a08*/
                        {
                          while ( 1 ) /*0x541a1b*/
                          {
                            v11 = ToWideStringChar((char *)dword_A8DA78[v10]); /*0x541a1b*/
                            if ( !_strcmpi(v11, &v47[0].__pad_14[8]) ) /*0x541a21*/
                              break; /*0x541a21*/
                            if ( ++v10 >= dword_A8DA84 ) /*0x541a35*/
                              goto LABEL_87; /*0x541a35*/
                          }
                          if ( !(unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v10] + 40), (int)v47) /*0x541a67*/
                            || *(_WORD *)(dword_A8DA78[v10] + 40) != v46[0] )
                          {
                            Debug::Log(); /*0x541a7d*/
                            v12 = v46[0]; /*0x541a82*/
                            v13 = *(&dword_A8E2B2 + v10); /*0x541a86*/
                            *(&dword_A8E2B2 + v10) = v46[0]; /*0x541a91*/
                            Network::reconnect( /*0x541aab*/
                              (Network *)&stru_B052C0.__pad_0[16],
                              *(_DWORD *)(dword_A8DA78[v10] + 111),
                              v12);
                            (*(void (__thiscall **)(_DWORD, Network *, __int16))(**((_DWORD **)int + 18) + 64))( /*0x541abb*/
                              *((_DWORD *)int + 18),
                              v47,
                              v13);
                            v14 = dword_A8DA78[v10]; /*0x541ac7*/
                            IDA_LOWORD(v14) = *(_WORD *)(v14 + 40); /*0x541acc*/
                            (*(void (__thiscall **)(_DWORD, Network *, int))(**((_DWORD **)int + 18) + 64))( /*0x541ad6*/
                              *((_DWORD *)int + 18),
                              v47,
                              v14);
                            v15 = (int *)(dword_A8DA78[v10] + 40); /*0x541ae5*/
                            *v15 = v47[0].Network_field_0x0; /*0x541ae8*/
                            v15[1] = (int)v47[0].Network_field_0x4; /*0x541aee*/
                            v15[2] = (int)v47[0].Network_field_0x8; /*0x541af5*/
                            Network::SetPort((Network *)(dword_A8DA78[v10] + 40), v46[0]); /*0x541b09*/
                            NetworkManager::SetPlayerAddress( /*0x541b24*/
                              (NetworkManager *)&stru_B052C0.__pad_0[16],
                              *(_DWORD *)(dword_A8DA78[v10] + 111),
                              (_DWORD *)(dword_A8DA78[v10] + 40));
                            v16 = (int *)(dword_A8DA90[GameClass::FindPlayerName(v10)] + 40); /*0x541b3f*/
                            *v16 = v47[0].Network_field_0x0; /*0x541b42*/
                            v16[1] = (int)v47[0].Network_field_0x4; /*0x541b48*/
                            v16[2] = (int)v47[0].Network_field_0x8; /*0x541b4f*/
                            v43 = v46[0]; /*0x541b56*/
                            PlayerName = GameClass::FindPlayerName(v10); /*0x541b5d*/
                            Network::SetPort((Network *)(dword_A8DA90[PlayerName] + 40), v43); /*0x541b6c*/
                            v18 = 0; /*0x541b74*/
                            if ( *((int *)int + 17) > 0 ) /*0x541b78*/
                            {
                              v19 = int + 5; /*0x541b7a*/
                              while ( 1 ) /*0x541b87*/
                              {
                                v20 = ToWideStringChar((char *)(v19->Socket + 104)); /*0x541b87*/
                                if ( !_strcmpi(v20, &v47[0].__pad_14[8]) ) /*0x541b8d*/
                                  break; /*0x541b8d*/
                                ++v18; /*0x541b9c*/
                                v19 = (IPXManagerClass *)((char *)v19 + 4); /*0x541b9d*/
                                if ( v18 >= *((_DWORD *)int + 17) ) /*0x541ba2*/
                                  goto LABEL_33; /*0x541ba2*/
                              }
                              v21 = (int *)(*((_DWORD *)int + v18 + 10) + 76); /*0x541bae*/
                              *v21 = v47[0].Network_field_0x0; /*0x541bb1*/
                              v21[1] = (int)v47[0].Network_field_0x4; /*0x541bb7*/
                              v21[2] = (int)v47[0].Network_field_0x8; /*0x541bbe*/
                              Network::SetPort((Network *)(*((_DWORD *)int + v18 + 10) + 76), v46[0]); /*0x541bcd*/
                              Network::FormatAddress((Network *)(*((_DWORD *)int + v18 + 10) + 76), 0); /*0x541bdb*/
                              Debug::Log(); /*0x541be7*/
      LABEL_33:
                              Network_field_0xC = v47[0].Network_field_0xC; /*0x541bef*/
                            }
                            if ( !IDA_BYTE2(stru_A8D600.Network_field_0xC) ) /*0x541bfa*/
                            {
                              if ( *((_DWORD *)int + 17) ) /*0x541c00*/
                              {
                                v22 = dword_A8DA78[v10]; /*0x541c16*/
                                if ( stru_A80220.nextArrayIndex > *(_DWORD *)(v22 + 111) ) /*0x541c1c*/
                                {
                                  if ( SessionClass::IsValidHouse( /*0x541c36*/
                                         (int)&dword_A8B238,
                                         *((void **)stru_A80220.vfptr3 + *(_DWORD *)(v22 + 111))) )
                                  {
                                    Network::FormatAddress(v47, 0); /*0x541c49*/
                                    Network::FormatAddress((Network *)(*((_DWORD *)int + 20) + 76), 0); /*0x541c57*/
                                    Debug::Log(); /*0x541c69*/
                                    v23 = (int *)(*((_DWORD *)int + 20) + 76); /*0x541c75*/
                                    *v23 = v47[0].Network_field_0x0; /*0x541c7b*/
                                    v23[1] = (int)v47[0].Network_field_0x4; /*0x541c81*/
                                    v23[2] = (int)v47[0].Network_field_0x8; /*0x541c88*/
                                    Network::SetPort((Network *)(*((_DWORD *)int + 20) + 76), v46[0]); /*0x541c96*/
                                    stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0; /*0x541ca7*/
                                    stru_A8BB1C.Network_field_0x8 = v47[0].Network_field_0x8; /*0x541cb1*/
                                    stru_A8BB1C.Network_field_0x4 = v47[0].Network_field_0x4; /*0x541cbd*/
                                    Network::SetPort(&stru_A8BB1C, v46[0]); /*0x541cc2*/
                                    qword_A8DBA4 = *(NetworkID *)&v47[0].Network_field_0x0; /*0x541cd3*/
                                    dword_A8DBAC = v47[0].Network_field_0x8; /*0x541ce8*/
                                    Network::SetPort((Network *)&qword_A8DBA4, v46[0]); /*0x541cee*/
                                    dword_A8DBBC = v46[0]; /*0x541cf8*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v7 = &dword_A8E2B2; /*0x541943*/
                  while ( !(unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v5] + 40), (int)v47) || *v7 != v46[0] ) /*0x54196b*/
                  {
                    ++v5; /*0x541976*/
                    ++v7; /*0x541977*/
                    if ( v5 >= dword_A8DA84 ) /*0x54197c*/
                    {
                      v6 = dword_A8DA84 == 0; /*0x54197e*/
                      goto LABEL_14; /*0x54197e*/
                    }
                  }
                }
              }
              goto LABEL_87; /*0x54196b*/
            }
            ++*((_DWORD *)int + 41); /*0x54216c*/
            goto LABEL_91; /*0x542178*/
          }
          v24 = (_WORD *)*((_DWORD *)int + 19); /*0x541d04*/
          if ( *(_WORD *)&v47[0].__pad_87[45] == v24[18] ) /*0x541d0b*/
          {
            if ( !byte_A8DBA0 /*0x541d2c*/
              || (*(int (__thiscall **)(_WORD *, char *, void *, Network *, _DWORD))(*(_DWORD *)v24 + 48))(
                   v24,
                   &v47[0].__pad_87[45],
                   Network_field_0xC,
                   v47,
                   0) )
            {
              goto LABEL_87; /*0x541d31*/
            }
            ++*((_DWORD *)int + 41); /*0x542183*/
      LABEL_91:
            Debug::Log(); /*0x54218f*/
            goto LABEL_92; /*0x54218f*/
          }
          if ( *(_WORD *)&v47[0].__pad_87[45] != *((_WORD *)int + 16) /*0x541d63*/
            || Network_Recv(
                 (int)&v47[0].__pad_87[45],
                 (int)&v47[0].__pad_87[45],
                 (int)Network_field_0xC,
                 (int)v47[0].__pad_34,
                 v46[0]) )
          {
            goto LABEL_87; /*0x541d6a*/
          }
          v25 = v47[0].__pad_87[47]; /*0x541d75*/
          if ( byte_A8DBA0 && v47[0].__pad_87[48] == -1 ) /*0x541d87*/
          {
            if ( v47[0].__pad_87[47] == 2 ) /*0x541d90*/
            {
              (*(void (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)int + 20) + 12))( /*0x541da0*/
                *((_DWORD *)int + 20),
                &v47[0].__pad_87[45],
                Network_field_0xC);
            }
            else if ( *((int *)int + 17) > 0 ) /*0x541dad*/
            {
              Network::FormatAddress(v47, 0); /*0x541e46*/
              Debug::Log(); /*0x541e59*/
              if ( !(*(int (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)int + 10) + 12))( /*0x541e6f*/
                      *((_DWORD *)int + 10),
                      &v47[0].__pad_87[45],
                      Network_field_0xC) )
              {
                Network_field_0xC = 0; /*0x541e80*/
                ++*((_DWORD *)int + 41); /*0x541e85*/
                goto LABEL_74; /*0x541e91*/
              }
            }
            goto LABEL_75; /*0x541da3*/
          }
          v26 = 0; /*0x541e99*/
          if ( *((int *)int + 17) <= 0 ) /*0x541e9d*/
          {
      LABEL_60:
            if ( *(_DWORD *)&dword_A8B238 == 4 /*0x541f4a*/
              && !dword_A8E7AC
              && *(int *)&stru_A8EB00.?[416] > 8
              && !byte_A8DBA0
              && (unsigned int)Network_field_0xC > 0xF
              && v25 == 1
              && v47[0].__pad_87[59] == 25 )
            {
              v29 = 1; /*0x541f56*/
              v30 = v47[0].__pad_87[61]; /*0x541f5b*/
              if ( dword_A8DA84 > 1 ) /*0x541f65*/
              {
                v31 = dword_A8DA78 + 1; /*0x541f71*/
                while ( *(_DWORD *)(*v31 + 111) != v47[0].__pad_87[61] ) /*0x541f79*/
                {
                  ++v29; /*0x541f7f*/
                  ++v31; /*0x541f80*/
                  if ( v29 >= dword_A8DA84 ) /*0x541f85*/
                    goto LABEL_86; /*0x541f85*/
                }
                v35 = (int *)(dword_A8DA78[v29] + 40); /*0x542113*/
                v44 = v47[0].__pad_87[61]; /*0x542116*/
                *v35 = v47[0].Network_field_0x0; /*0x542117*/
                v35[1] = (int)v47[0].Network_field_0x4; /*0x54211d*/
                v35[2] = (int)v47[0].Network_field_0x8; /*0x542124*/
                if ( (*(int (__thiscall **)(IPXManagerClass *, int))(int->Socket + 24))(int, v44) != -1 ) /*0x542131*/
                {
                  v36 = (int *)(*((_DWORD *)int /*0x542143*/
                                + (*(int (__thiscall **)(IPXManagerClass *, int))(int->Socket + 24))(int, v30)
                                + 10)
                              + 76);
                  *v36 = v47[0].Network_field_0x0; /*0x542146*/
                  v36[1] = (int)v47[0].Network_field_0x4; /*0x54214c*/
                  v36[2] = (int)v47[0].Network_field_0x8; /*0x542153*/
                }
      LABEL_86:
                Network_field_0xC = v47[0].Network_field_0xC; /*0x542156*/
              }
            }
            goto LABEL_87; /*0x542156*/
          }
          v27 = int + 5; /*0x541e9f*/
          while ( byte_A8DBA0 ) /*0x541ea9*/
          {
            LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], *(_DWORD *)(v27->Socket + 100)); /*0x541eb6*/
            v25 = v47[0].__pad_87[47]; /*0x541ebb*/
            if ( LinkedIndex == v47[0].__pad_87[48] ) /*0x541ec4*/
              goto LABEL_72; /*0x541ec4*/
            if ( !byte_A8DBA0 ) /*0x541ed1*/
              break; /*0x541ed1*/
      LABEL_59:
            ++v26; /*0x541ef1*/
            v27 = (IPXManagerClass *)((char *)v27 + 4); /*0x541ef5*/
            if ( v26 >= *((_DWORD *)int + 17) ) /*0x541efa*/
              goto LABEL_60; /*0x541efa*/
          }
          if ( !(unsigned __int8)GUID::Compare((char *)(v27->Socket + 76), (int)v47) ) /*0x541edd*/
            break; /*0x541edd*/
      LABEL_72:
          if ( !(*(int (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)int + v26 + 10) + 12))( /*0x541f9b*/
                  *((_DWORD *)int + v26 + 10),
                  &v47[0].__pad_87[45],
                  Network_field_0xC) )
          {
            Network_field_0xC = 0; /*0x541fa8*/
            ++*((_DWORD *)int + 41); /*0x541fad*/
      LABEL_74:
            Debug::Log(); /*0x541fb9*/
          }
      LABEL_75:
          if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x541fc8*/
          {
            if ( byte_A8DBA0 ) /*0x541fd5*/
            {
              if ( Network::processPacket((char *)v47, *((_DWORD *)int + 20) + 76) ) /*0x541fe6*/
              {
                for ( i = 1; i < dword_A8DA84; ++i ) /*0x541fff*/
                {
                  if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[i] + 40), *((_DWORD *)int + 20) + 76) /*0x54203e*/
                    && SessionClass::IsValidHouse(
                         (int)&dword_A8B238,
                         *((void **)stru_A80220.vfptr3 + *(_DWORD *)(dword_A8DA78[i] + 111))) )
                  {
                    Network::FormatAddress(v47, 0); /*0x542051*/
                    Network::FormatAddress((Network *)(*((_DWORD *)int + 20) + 76), 0); /*0x54205f*/
                    Debug::Log(); /*0x542071*/
                    v33 = (int *)(dword_A8DA78[i] + 40); /*0x542085*/
                    *v33 = v47[0].Network_field_0x0; /*0x542088*/
                    v33[1] = (int)v47[0].Network_field_0x4; /*0x54208e*/
                    v33[2] = (int)v47[0].Network_field_0x8; /*0x542095*/
                    v34 = (int *)(*((_DWORD *)int + 20) + 76); /*0x54209f*/
                    *v34 = v47[0].Network_field_0x0; /*0x5420a2*/
                    v34[1] = (int)v47[0].Network_field_0x4; /*0x5420a8*/
                    v34[2] = (int)v47[0].Network_field_0x8; /*0x5420af*/
                    stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0; /*0x5420be*/
                    qword_A8DBA4 = *(NetworkID *)&v47[0].Network_field_0x0; /*0x5420c3*/
                    stru_A8BB1C.Network_field_0x4 = v47[0].Network_field_0x4; /*0x5420cd*/
                    stru_A8BB1C.Network_field_0x8 = v47[0].Network_field_0x8; /*0x5420d3*/
                    dword_A8DBAC = v47[0].Network_field_0x8; /*0x5420df*/
                    NetworkManager::SetPlayerAddress( /*0x5420f6*/
                      (NetworkManager *)&stru_B052C0.__pad_0[16],
                      *(_DWORD *)(dword_A8DA78[i] + 111),
                      v47);
                  }
                }
              }
            }
          }
      LABEL_87:
          if ( !Network_field_0xC ) /*0x54215c*/
            goto LABEL_92; /*0x54215c*/
        }
        v25 = v47[0].__pad_87[47]; /*0x541eea*/
        goto LABEL_59; /*0x541eea*/
      }
      LABEL_92:
      v37 = *((_DWORD *)int + 18); /*0x542197*/
      v38 = 0; /*0x54219a*/
      if ( v37 && *(_DWORD *)&stru_887598.isAliveFlag && !(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 20))(v37) ) /*0x5421aa*/
      {
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)int + 18) + 24))(*((_DWORD *)int + 18)); /*0x5421b6*/
        v47[0].Network_field_0x10 = 0; /*0x5421b9*/
      }
      if ( byte_A8DBA0 ) /*0x5421c4*/
      {
        v39 = *((_DWORD *)int + 19); /*0x5421c6*/
        if ( v39 ) /*0x5421cb*/
        {
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 20))(v39) ) /*0x5421cf*/
          {
            (*(void (__thiscall **)(_DWORD))(**((_DWORD **)int + 19) + 24))(*((_DWORD *)int + 19)); /*0x5421db*/
            v47[0].Network_field_0x10 = 0; /*0x5421de*/
          }
          if ( !byte_A8E2D0 ) /*0x5421e9*/
            Network::ProcessAddressChange(v45); /*0x5421f0*/
        }
        if ( byte_A8DBA0 ) /*0x5421fc*/
        {
          v40 = *((_DWORD *)int + 20); /*0x5421fe*/
          if ( v40 ) /*0x542203*/
          {
            if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 20))(v40) ) /*0x542207*/
            {
              Debug::Log(); /*0x542213*/
              v47[0].Network_field_0x10 = 0; /*0x54221b*/
            }
          }
        }
      }
      if ( *(_DWORD *)&stru_887598.isAliveFlag && *((int *)int + 17) > 0 ) /*0x54222a*/
      {
        v41 = int + 5; /*0x54222c*/
        do /*0x542260*/
        {
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v41->Socket + 20))(v41->Socket) ) /*0x542233*/
          {
            v47[0].Network_field_0x10 = 0; /*0x54223a*/
            *((_DWORD *)int + 42) = *(_DWORD *)(v41->Socket + 100); /*0x542249*/
            Debug::Log(); /*0x54224f*/
          }
          ++v38; /*0x54225a*/
          v41 = (IPXManagerClass *)((char *)v41 + 4); /*0x54225b*/
        }
        while ( v38 < *((_DWORD *)int + 17) ); /*0x542260*/
      }
      result = (int)v47[0].Network_field_0x10; /*0x542262*/
      if ( v47[0].Network_field_0x10 ) /*0x542268*/
        *((_DWORD *)int + 42) = -1; /*0x54226a*/
      return result; /*0x542274*/
    }
LRESULT sub_46DA20(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x46da38*/
  DlgItem = GetDlgItem((HWND)(aP0), nIDDlgItem); /*0x46da42*/
  return SendMessageA( (HWND)(DlgItem), 0x4B2u, 0, (LPARAM)((LPARAM)((LPARAM)Buffer))); /*0x46da5b*/
}
} // namespace gamemd
}
}

// 0x46F810
namespace gamemd {
int Lobby_GetPlayerColor(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f814*/
  if ( Player::IsObserver(v2) ) /*0x46f81d*/
    return MEMORY[0xA8B2BC][a1]; /*0x46f826*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f836*/
    return -2; /*0x46f839*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f846*/
    return -2; /*0x46f849*/
  if ( v2 == g_Lobby_PlayerReady ) /*0x46f856*/
    return -2; /*0x46f859*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f866*/
    return -2; /*0x46f869*/
  return SessionClass::GetPlayerColor((int)v2); /*0x46f82d*/
}
}
// 0x46F880
namespace gamemd {
int HouseClass_GetSideIndex(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f884*/
  if ( Player::IsObserver(v2) ) /*0x46f88d*/
    return MEMORY[0xA8B2DC][a1]; /*0x46f896*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f8a6*/
    return -2; /*0x46f8a9*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f8b6*/
    return -2; /*0x46f8b9*/
  if ( v2 == g_Lobby_PlayerReady ) /*0x46f8c6*/
    return -2; /*0x46f8c9*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f8d6*/
    return -2; /*0x46f8d9*/
  return SessionClass::GetOption((int)v2); /*0x46f89d*/
}
}