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
namespace gamemd {  // G42.18 ns repair
void E4Recv_46D350::sub_46D350()
{
  this->m_0 = (int)&vt_CampaignScoreClass; /*0x46d350*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x46D650
namespace gamemd {
bool sub_46D650()
{

  if ( dword_A8D638 != 50 ) /*0x46d65b*/
    return 0; /*0x46d80a*/
  Debug::Log(); /*0x46d666*/
  bool v0; // bl
  v0 = dword_A8EB68 != (char)dword_A8D667; /*0x46d67f*/
  dword_A8EB68 = (char)dword_A8D667; /*0x46d686*/
  HWND v1; // eax
  v1 = (HWND)((void *)0xBC6)->FindByHandle(); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    HWND DlgItem; // eax
    DlgItem = GetDlgItem(v1, 1842); /*0x46d69a*/
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, dword_A8EB68); /*0x46d6b3*/
  }
  int v3 = 0; // ebp /*0x46d6bc*/
  LPARAM *v4; // esi
  v4 = (LPARAM *)(&dword_A8DA90); /*0x46d6be*/
  do /*0x46d7fd*/
  {
    int v5 = *v4; // ecx /*0x46d6c3*/
    if ( *v4 && v5 != g_HouseClass_ObserverFlags && v5 != g_Lobby_PlayerCount ) /*0x46d6d7*/
    {
      int v6; // edi
      v6 = *(v4 - 266); /*0x46d6d9*/
      if ( SessionClass::GetOption(v5) != v6 ) /*0x46d6e6*/
        v0 = 1; /*0x46d6e8*/
      SessionClass::SetOption(*v4, v6); /*0x46d6ed*/
      int v7; // edi
      v7 = *(v4 - 258); /*0x46d6f4*/
      if ( SessionClass::GetPlayerSide(*v4) != v7 ) /*0x46d701*/
        v0 = 1; /*0x46d703*/
      ((SessionClass *)(*v4))->SetPlayerOption(v7); /*0x46d708*/
      int v8; // edi
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
    LPARAM v9; // eax
    v9 = *(v4 - 242); /*0x46d755*/
    if ( *(v4 - 2557) != v9 ) /*0x46d766*/
      v0 = 1; /*0x46d768*/
    *(v4 - 2557) = v9; /*0x46d76a*/
    LPARAM v10; // eax
    v10 = *(v4 - 234); /*0x46d770*/
    if ( *(v4 - 2549) != v10 ) /*0x46d77c*/
      v0 = 1; /*0x46d77e*/
    *(v4 - 2549) = v10; /*0x46d780*/
    LPARAM v11; // eax
    v11 = *(v4 - 226); /*0x46d786*/
    if ( *(v4 - 2565) != v11 ) /*0x46d792*/
      v0 = 1; /*0x46d794*/
    *(v4 - 2565) = v11; /*0x46d796*/
    LPARAM v12; // eax
    v12 = *(v4 - 218); /*0x46d79c*/
    if ( *(v4 - 2541) != v12 ) /*0x46d7a8*/
      v0 = 1; /*0x46d7aa*/
    *(v4 - 2541) = v12; /*0x46d7ac*/
    LPARAM v13; // eax
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
  uint8_t (**vtable0)(ObjectClass *, int); // esi
  int PlayerSide; // eax
  int v8; // [esp-4h] [ebp-10h]

  char v1 = 0; // bl /*0x46d8b3*/
  int v2 = 0; // edi /*0x46d8b5*/
  const wchar_t **v3; // esi
  v3 = (const wchar_t **)dword_A8DA90; /*0x46d8b7*/
  while ( 1 ) /*0x46d8c1*/
  {
    char *v4; // eax
    v4 = CharToWideString(&g_NetworkPlayerBuffer); /*0x46d8c1*/
    if ( !wcscmp((const wchar_t *)v4, *v3) ) /*0x46d8ca*/
      break; /*0x46d8ca*/
    ++v3; /*0x46d8d6*/
    ++v2; /*0x46d8d9*/
    if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x46d8e0*/
      return 0; /*0x46d8e7*/
  }
  if ( v2 == -1 ) /*0x46d8eb*/
    return 0; /*0x46d8f2*/
  if ( ((int *)((unsigned int *)(dword_A8DA90))[v2])->GetPlayerSide() != *(unsigned int *)&stru_A8D600.__pad_64[7] ) /*0x46d907*/
    v1 = 1; /*0x46d909*/
  if ( dword_A8B23C ) /*0x46d913*/
  {
    if ( (*((uint8_t (**)(ObjectClass *, unsigned int))dword_A8B23C->vfptr + 7))( /*0x46d918*/
           dword_A8B23C,
           *(unsigned int *)&stru_A8D600.__pad_64[7]) )
    {
      ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->SetPlayerOption(*(int *)&stru_A8D600.__pad_64[7]); /*0x46d926*/
    }
    else if ( dword_A8B23C ) /*0x46d92f*/
    {
      vtable0 = (uint8_t (**)(ObjectClass *, int))dword_A8B23C->vfptr; /*0x46d938*/
      PlayerSide = ((int *)((unsigned int *)(dword_A8DA90))[v2])->GetPlayerSide(); /*0x46d93a*/
      if ( !vtable0[7](dword_A8B23C, PlayerSide) ) /*0x46d946*/
      {
        v8 = (*((int (**)(ObjectClass *))dword_A8B23C->vfptr + 10))(dword_A8B23C); /*0x46d958*/
        ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->SetPlayerOption(v8); /*0x46d960*/
      }
    }
  }
  if ( ((SessionClass *)((unsigned int *)(dword_A8DA90))[v2])->GetPlayerColor() != *(unsigned int *)DataGlobal_A8D66F ) /*0x46d979*/
    v1 = 1; /*0x46d97b*/
  if ( IsAvailableColorhWnd(*(int *)DataGlobal_A8D66F) ) /*0x46d97d*/
  {
    if ( ((SessionClass *)((unsigned int *)(dword_A8DA90))[v2])->GetPlayerColor() != *(unsigned int *)DataGlobal_A8D66F ) /*0x46d998*/
    {
      ((int *)((unsigned int *)(dword_A8DA90))[v2])->SetPlayerColor(-2); /*0x46d9a3*/
      v1 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    ((int *)((unsigned int *)(dword_A8DA90))[v2])->SetPlayerColor(*(int *)DataGlobal_A8D66F); /*0x46d9b9*/
  }
  if ( ((SessionClass *)((unsigned int *)(dword_A8DA90))[v2])->GetPlayerColor() != *(unsigned int *)&DataGlobal_A8D667 ) /*0x46d9d2*/
    v1 = 1; /*0x46d9d4*/
  if ( sub_4E50A0(*(int *)&DataGlobal_A8D667) ) /*0x46d9d6*/
  {
    if ( ((int *)((unsigned int *)(dword_A8DA90))[v2])->GetOption() != *(unsigned int *)&DataGlobal_A8D667 ) /*0x46d9f1*/
    {
      SessionClass::SetOption((int *)((unsigned int *)(dword_A8DA90))[v2], -2); /*0x46d9fc*/
      return v1; /*0x46da06*/
    }
  }
  else
  {
    SessionClass::SetOption((int *)((unsigned int *)(dword_A8DA90))[v2], *(int *)&DataGlobal_A8D667); /*0x46da15*/
  }
  return v1; /*0x46d8e2*/
}
}
// 0x46DA70
namespace gamemd {
void sub_46DA70()
{

  int nextArrayIndex; // ebx
  nextArrayIndex = stru_A80220.nextArrayIndex; /*0x46da74*/
  int v2 = 0; // esi /*0x46da7b*/
  dword_A8D580 = 0; /*0x46da7f*/
  int v18; // [esp+Ch] [ebp-4h]
  v18 = stru_A80220.nextArrayIndex; /*0x46da85*/
  int i; // [esp+8h] [ebp-8h]
  for ( i = 0; v2 < nextArrayIndex; i = v2 ) /*0x46da8d*/
  {
    int v3; // edi
    v3 = *((unsigned int *)stru_A80220.vfptr3 + v2); /*0x46da9a*/
    if ( v3 /*0x46dab7*/
      && *(unsigned char *)(v3->u32_34 + 422) != 1
      && (uint8_t)((House *)(*((House **)stru_A80220.vfptr3 + v2)))->IsCurrentPlayer() )
    {
      size_t v4; // ebp
      v4 = dword_A8D580++; /*0x46dacf*/
      int v5 = 112 * v4; // esi /*0x46dae1*/
      *((unsigned int *)&dword_A8D228 + 28 * v4) = 0; /*0x46daea*/
      wcscpy((wchar_t *)&unk_A8D1FC + 56 * v4, &v3->u8_1602A); /*0x46daf5*/
      int v6 = 0; // eax /*0x46dafa*/
      *((unsigned int *)&dword_A8D22C + 28 * v4) = 0; /*0x46daff*/
      *((unsigned int *)&dword_A8D23C + 28 * v4) = 0; /*0x46db05*/
      *((unsigned int *)&dword_A8D24C + 28 * v4) = 0; /*0x46db0b*/
      dword_A8D25C[28 * v4] = 0; /*0x46db11*/
      *((unsigned int *)&dword_A8D224 + 28 * v4) = v3->u32_16054; /*0x46db1d*/
      if ( !v3->u32_1F5 ) /*0x46db23*/
      {
        ++*((unsigned int *)&dword_A8D228 + 28 * v4); /*0x46db34*/
        dword_A8D584 = v4; /*0x46db3a*/
      }
      int *v7 = &v3->u32_53E4; // ecx /*0x46db40*/
      int v8 = 20; // edx /*0x46db46*/
      do /*0x46db53*/
      {
        int v9; // ebp
        v9 = *v7++; /*0x46db4b*/
        v6 += v9; /*0x46db50*/
        --v8; /*0x46db52*/
      }
      while ( v8 ); /*0x46db53*/
      int *v10 = &v3->u32_5438; // ecx /*0x46db55*/
      int v11 = 20; // edx /*0x46db5b*/
      do /*0x46db68*/
      {
        int v12; // ebp
        v12 = *v10++; /*0x46db60*/
        v6 += v12; /*0x46db65*/
        --v11; /*0x46db67*/
      }
      while ( v11 ); /*0x46db68*/
      *(unsigned int *)((char *)&dword_A8D23C + v5) = v6; /*0x46db6a*/
      *(unsigned int *)((char *)&dword_A8D22C + v5) = v3->u32_5488 + v3->u32_5434; /*0x46db84*/
      int Count; // ebp
      Count = (&v3->VectorClass_5550)->GetCount(); /*0x46db95*/
      int v14; // ebp
      v14 = (&v3->VectorClass_5564)->GetCount() + Count; /*0x46dba2*/
      int v15; // ebp
      v15 = (&v3->VectorClass_5578)->GetCount() + v14; /*0x46dbaf*/
      *(unsigned int *)((char *)&dword_A8D24C + v5) = v3->u32_5488 /*0x46dbc8*/
      + (&v3->VectorClass_558C)->GetCount()
      + v15
      + v3->u32_5434;
      int v16 = v3->u32_54E8; // edi /*0x46dbce*/
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
  BOOL result; // eax

  int i; // edi
  for ( i = 0; i < 8; ++i )
  {
    result = IsKnownPointer((wchar_t *)*(&dword_A8DA90 + i)); /*0x46dcda*/
    if ( result && i != dword_A8DA8C )
    {
      int v5; // eax
      if ( i )
        v5 = i != 1 ? -1 : 1042;
      else
        v5 = 1041; /*0x46dcef*/
      HWND DlgItem; // eax
      DlgItem = GetDlgItem(hDlg, v5); /*0x46dd09*/
      EnableWindow(DlgItem, a2); /*0x46dd17*/
      int ResourceID2CSF; // eax
      ResourceID2CSF = GetResourceID2CSF((int)((void *)i)); /*0x46dd1f*/
      HWND v8; // eax
      v8 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46dd26*/
      EnableWindow(v8, a2); /*0x46dd2a*/
      int ResourceIDCSF; // eax
      ResourceIDCSF = GetResourceIDCSF((int)((void *)i)); /*0x46dd32*/
      HWND v10; // eax
      v10 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46dd39*/
      EnableWindow(v10, a2); /*0x46dd3d*/
      int ResourceID3CSF; // eax
      ResourceID3CSF = GetResourceID3CSF((int)((void *)i)); /*0x46dd45*/
      HWND v12; // eax
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
  if ( dword_A8DA8C )
    v4 = dword_A8DA8C != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  HWND DlgItem; // eax
  DlgItem = GetDlgItem(hDlg, v4); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  int ResourceID2; // eax
  ResourceID2 = GetResourceID2CSF((int)((void *)dword_A8DA8C)); /*0x46ddb7*/
  HWND v7; // eax
  v7 = GetDlgItem(hDlg, ResourceID2); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  int ResourceID; // eax
  ResourceID = GetResourceIDCSF((int)((void *)dword_A8DA8C)); /*0x46ddca*/
  HWND v9; // eax
  v9 = GetDlgItem(hDlg, ResourceID); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  int ResourceID3; // eax
  ResourceID3 = GetResourceID3CSF((int)((void *)dword_A8DA8C)); /*0x46dddd*/
  HWND v11; // eax
  v11 = GetDlgItem(hDlg, ResourceID3); /*0x46dde4*/
  EnableWindow(v11, a2); /*0x46dde8*/
  HWND result; // eax
  result = (HWND)Settings::CheckString(); /*0x46ddea*/
  if ( (unsigned char)result ) /*0x46ddf1*/
  {
    result = GetDlgItem(hDlg, 1842); /*0x46ddf9*/
    HWND v13 = result; // edi /*0x46ddfb*/
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
  DlgItem = GetDlgItem(hDlg, 1842); /*0x46de35*/
  HWND hWnd; // [esp+10h] [ebp-4h]
  hWnd = DlgItem; /*0x46de3f*/
  if ( DlgItem ) /*0x46de43*/
  {
    ShowWindow(DlgItem, nCmdShow); /*0x46de47*/
    InvalidateRect(hWnd, 0, 0); /*0x46de52*/
  }
  HWND v5; // eax
  v5 = GetDlgItem(hDlg, 1839); /*0x46de5e*/
  if ( v5 ) /*0x46de62*/
    ShowWindow(v5, nCmdShow); /*0x46de66*/
  HWND v6; // eax
  v6 = GetDlgItem(hDlg, 1944); /*0x46de6e*/
  if ( v6 ) /*0x46de72*/
    ShowWindow(v6, nCmdShow); /*0x46de76*/
  HWND v7; // eax
  v7 = GetDlgItem(hDlg, 1945); /*0x46de7e*/
  if ( v7 ) /*0x46de82*/
    ShowWindow(v7, nCmdShow); /*0x46de86*/
  HWND v8; // eax
  v8 = GetDlgItem(hDlg, 1946); /*0x46de8e*/
  if ( v8 ) /*0x46de92*/
    ShowWindow(v8, nCmdShow); /*0x46de96*/
  HWND v9; // eax
  v9 = GetDlgItem(hDlg, 1947); /*0x46de9e*/
  if ( v9 ) /*0x46dea2*/
    ShowWindow(v9, nCmdShow); /*0x46dea6*/
  HWND v10; // eax
  v10 = GetDlgItem(hDlg, 1918); /*0x46deae*/
  if ( v10 ) /*0x46deb2*/
    ShowWindow(v10, nCmdShow); /*0x46deb6*/
  HWND v11; // eax
  v11 = GetDlgItem(hDlg, 1746); /*0x46debe*/
  if ( v11 ) /*0x46dec2*/
    ShowWindow(v11, nCmdShow); /*0x46dec6*/
  HWND v12; // eax
  v12 = GetDlgItem(hDlg, 1747); /*0x46dece*/
  if ( v12 ) /*0x46ded2*/
    ShowWindow(v12, nCmdShow); /*0x46ded6*/
  HWND v13; // eax
  v13 = GetDlgItem(hDlg, 1041); /*0x46dede*/
  if ( v13 ) /*0x46dee2*/
    ShowWindow(v13, nCmdShow); /*0x46dee6*/
  HWND v14; // eax
  v14 = GetDlgItem(hDlg, 1042); /*0x46deee*/
  if ( v14 ) /*0x46def2*/
    ShowWindow(v14, nCmdShow); /*0x46def6*/
  HWND v15; // eax
  v15 = GetDlgItem(hDlg, 1754); /*0x46defe*/
  if ( v15 ) /*0x46df02*/
    ShowWindow(v15, nCmdShow); /*0x46df06*/
  HWND v16; // eax
  v16 = GetDlgItem(hDlg, 1755); /*0x46df0e*/
  if ( v16 ) /*0x46df12*/
    ShowWindow(v16, nCmdShow); /*0x46df16*/
  HWND v17; // eax
  v17 = GetDlgItem(hDlg, 1697); /*0x46df1e*/
  if ( v17 ) /*0x46df22*/
    ShowWindow(v17, nCmdShow); /*0x46df26*/
  HWND v18; // eax
  v18 = GetDlgItem(hDlg, 1296); /*0x46df2e*/
  if ( v18 ) /*0x46df32*/
    ShowWindow(v18, nCmdShow); /*0x46df36*/
  HWND v19; // eax
  v19 = GetDlgItem(hDlg, 1698); /*0x46df3e*/
  if ( v19 ) /*0x46df42*/
    ShowWindow(v19, nCmdShow); /*0x46df46*/
  HWND v20; // eax
  v20 = GetDlgItem(hDlg, 1314); /*0x46df4e*/
  if ( v20 ) /*0x46df52*/
    ShowWindow(v20, nCmdShow); /*0x46df56*/
  HWND v21; // eax
  v21 = GetDlgItem(hDlg, 1699); /*0x46df5e*/
  if ( v21 ) /*0x46df62*/
    ShowWindow(v21, nCmdShow); /*0x46df66*/
  HWND v22; // eax
  v22 = GetDlgItem(hDlg, 1700); /*0x46df6e*/
  if ( v22 ) /*0x46df72*/
    ShowWindow(v22, nCmdShow); /*0x46df76*/
  HWND v23; // eax
  v23 = GetDlgItem(hDlg, 1745); /*0x46df7e*/
  if ( v23 ) /*0x46df82*/
    ShowWindow(v23, nCmdShow); /*0x46df86*/
  HWND v24; // eax
  v24 = GetDlgItem(hDlg, 1448); /*0x46df8e*/
  if ( v24 ) /*0x46df92*/
    ShowWindow(v24, nCmdShow); /*0x46df96*/
  HWND v25; // eax
  v25 = GetDlgItem(hDlg, 1820); /*0x46df9e*/
  if ( v25 ) /*0x46dfa2*/
    ShowWindow(v25, nCmdShow == 0); /*0x46dfaf*/
  HWND result; // eax
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

  return (gamemd::Iostream_init *)(this); /*0x465d82*/

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
  v0 = Math::Sin(dbl_89DDD8 - dbl_89DE00); /*0x4661b2*/
  int64_t result; // rax
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

  int64_t result; // rax
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
    dword_89DE18 = (int)&vt_VectorClass; /*0x46632e*/
    byte_89DDD0 |= 1u; /*0x466341*/
    if ( dword_89DE1C ) /*0x466347*/
    {
      if ( byte_89DE25 ) /*0x466351*/
      {
        operator delete((void *)(dword_89DE1C)); /*0x466354*/
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

  LPVOID ppv; // [esp+8h] [ebp-4h] BYREF
  ppv = (LPVOID)(0);
  if ( CoCreateInstance((const IID &)(&rclsid), 0, 7u, &IID_IUnknown, &ppv) < 0 ) /*0x46b07a*/
    return 0; /*0x46b07d*/
  LPVOID v10 = ppv; // esi /*0x46b0a4*/
  ((Particle *)((int *)ppv))->Init((int)(aP0), aP1, aP2, aP3, aP4, a6, aP7); /*0x46b0a6*/
  return (LPVOID)((int)v10); /*0x46b07c*/
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

  __asm /*0x46baa0*/
  {
    fld dbl_89DE78
    fsub dbl_89DEA0
  }
  __asm { fstp [esp+8+var_8] } /*; double*/
  double v2; // [esp+0h] [ebp-8h]
  Math::Sin(v2); /*0x46bab2*/
  __asm { fmul dbl_89DE98 } /*0x46bab7*/
  __asm { fmul ds:dbl_7E1738 }
  int result; // eax
  (*((unsigned short *)&(result))) = Math::RoundToInt(a1); /*0x46bac6*/
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

  int64_t result; // rax
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
  v0 = Math::Sin(dbl_89DEF8 - dbl_89DF10); /*0x46ca52*/
  int64_t result; // rax
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

  int64_t result; // rax
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
  v0 = Math::Sin(dbl_89DF68 - dbl_89DFB0); /*0x46d202*/
  int64_t result; // rax
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

  int64_t result; // rax
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
int64_t sub_46D480(void * a1, void * a2)
{

  int64_t result; // rax
  *((unsigned char *)&(unsigned int)(g_GameModeOptionState)+ a2) = (((unsigned char *)&(result))[4]); /*0x46d480*/
  return result; /*0x46d486*/
}
}
// 0x46D490
namespace gamemd {
char E4Recv_46D490::sub_46D490()
{
  return *((unsigned char *)&g_GameModeOptionState + (unsigned int)this); /*0x46d496*/
}
} // namespace gamemd

// 0x46D810
namespace gamemd {
int sub_46D810()
{

  int v2; // [esp+8h] [ebp-1C8h] BYREF
  v2 = 51; /*0x46d82c*/
  char v3[43]; // [esp+Ch] [ebp-1C4h] BYREF
  strcpy(v3,(const char *)(unk_A8B380)); /*0x46d83d*/
  int Option; // [esp+37h] [ebp-199h]
  Option = ((int *)*(unsigned int *)(dword_A8DA78))->GetOption(); /*0x46d859*/
  int PlayerSide; // [esp+3Bh] [ebp-195h]
  PlayerSide = ((int *)*(unsigned int *)(dword_A8DA78))->GetPlayerSide(); /*0x46d864*/
  int PlayerColor; // [esp+3Fh] [ebp-191h]
  PlayerColor = ((SessionClass *)*(unsigned int *)(dword_A8DA78))->GetPlayerColor(); /*0x46d874*/
  int result = dword_A8DA90; // eax /*0x46d878*/
  if ( dword_A8DA90 ) /*0x46d881*/
  {
    Network::SendToPlayer((int)&unk_A8E9C0, (int)&v2, 455, 1, (wchar_t *)dword_A8DA90); /*0x46d895*/
    return (&unk_A8E9C0)->ReceiveLoop(); /*0x46d89f*/
  }
  return result; /*0x46d87d*/
}
}
// 0x46F810
namespace gamemd {
int Lobby_GetPlayerColor(int a1)
{

  wchar_t *v2; // esi
  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f814*/
  if ( (v2)->IsObserver() ) /*0x46f81d*/
    return g_abs_A8B2BC[a1]; /*0x46f826*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f836*/
    return -2; /*0x46f839*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f846*/
    return -2; /*0x46f849*/
  if ( v2 == (wchar_t *)(g_Lobby_PlayerReady) ) /*0x46f856*/
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
  if ( (v2)->IsObserver() ) /*0x46f88d*/
    return g_abs_A8B2DC[a1]; /*0x46f896*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f8a6*/
    return -2; /*0x46f8a9*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f8b6*/
    return -2; /*0x46f8b9*/
  if ( v2 == (wchar_t *)(g_Lobby_PlayerReady) ) /*0x46f8c6*/
    return -2; /*0x46f8c9*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f8d6*/
    return -2; /*0x46f8d9*/
  return SessionClass::GetOption((int)v2); /*0x46f89d*/
}
}