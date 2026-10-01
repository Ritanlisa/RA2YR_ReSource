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

// 0x46D350
namespace gamemd {
void E4Recv_46D350::sub_46D350()
{

  this->m_0 = (int)&vt_CampaignScoreClass; /*0x46d350*/

}
} // namespace gamemd

// 0x46D650
namespace gamemd {
bool sub_46D650()
{
  bool v0; // bl
  HWND v1; // eax
  HWND DlgItem; // eax
  LPARAM * v3;
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
    Debug::Log();
  v0 = dword_A8EB68 != (char)dword_A8D667; /*0x46d67f*/
  dword_A8EB68 = (char)dword_A8D667; /*0x46d686*/
  v1 = (HWND)Dialog::FindByHandle((void *)0xBC6); /*0x46d68b*/
  if ( v1 ) /*0x46d692*/
  {
    DlgItem = (HWND)((int)(GetDlgItem(v1, 1842)));
    if ( DlgItem ) /*0x46d6a2*/
      PostMessageA(DlgItem, 0x405u, 1u, dword_A8EB68); /*0x46d6b3*/
  }
  v3 = (LPARAM *)((int)((LPARAM *)(0)));
  v4 = (LPARAM *)(&dword_A8DA90);
  do /*0x46d7fd*/
  {
    v5 = *v4; /*0x46d6c3*/
    if ( *v4 && v5 != g_HouseClass_ObserverFlags && v5 != g_Lobby_PlayerCount ) /*0x46d6d7*/
    {
      v6 = *(v4 - 266); /*0x46d6d9*/
      if ( ((SessionClass *)(v5))->GetOption() != v6 ) /*0x46d6e6*/
        v0 = 1; /*0x46d6e8*/
      ((SessionClass *)(*v4))->SetOption(v6); /*0x46d6ed*/
      v7 = *(v4 - 258); /*0x46d6f4*/
      if ( ((SessionClass *)(*v4))->GetPlayerSide() != v7 ) /*0x46d701*/
        v0 = 1; /*0x46d703*/
      ((SessionClass *)(*v4))->SetPlayerOption(v7); /*0x46d708*/
      v8 = *(v4 - 250); /*0x46d70f*/
      if ( ((SessionClass *)(*v4))->GetPlayerColor() != v8 ) /*0x46d71c*/
        v0 = 1; /*0x46d71e*/
      ((SessionClass *)(*v4))->SetPlayerColor(v8); /*0x46d723*/
    }
    ToWideStringChar((gamemd::IUnknown *)((char *)*v4)); /*0x46d72a*/
    ((SessionClass *)(*v4))->GetPlayerColor(); /*0x46d733*/
    ((SessionClass *)(*v4))->GetPlayerSide(); /*0x46d73b*/
    ((SessionClass *)(*v4))->GetOption(); /*0x46d743*/
        Debug::Log();
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
        Debug::Log();
    ++v4; /*0x46d7f3*/
    ++v3; /*0x46d7f6*/
  }
  while ( (int)v4 < (int)&dword_A8DAB0 ); /*0x46d7fd*/
  return v0; /*0x46d808*/
}
}
// 0x46D8B0
namespace gamemd {
void sub_46D8B0()
{
  char v1; // bl
  int v2; // edi
  const wchar_t **v3; // esi
  char *v4; // eax
  uint8_t (**vtable0)(ObjectClass *, int); // esi
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
  if ( ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->GetPlayerSide() != *(unsigned int *)&stru_A8D600.__pad_64[7] ) /*0x46d907*/
    v1 = 1; /*0x46d909*/
  if ( dword_A8B23C ) /*0x46d913*/
  {
    if ( (*((uint8_t (**)(ObjectClass *, unsigned int))dword_A8B23C->AbstractClass + 7))( /*0x46d918*/
           dword_A8B23C,
           *(unsigned int *)&stru_A8D600.__pad_64[7]) )
    {
      ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->SetPlayerOption(*(int *)&stru_A8D600.__pad_64[7]); /*0x46d926*/
    }
    else if ( dword_A8B23C ) /*0x46d92f*/
    {
      vtable0 = (uint8_t (**)(ObjectClass *, int))dword_A8B23C->AbstractClass; /*0x46d938*/
      PlayerSide = ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->GetPlayerSide(); /*0x46d93a*/
      if ( !vtable0[7](dword_A8B23C, PlayerSide) ) /*0x46d946*/
      {
        v8 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x46d958*/
        ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->SetPlayerOption(v8); /*0x46d960*/
      }
    }
  }
  if ( ((SessionClass *)((SessionClass *)((unsigned int *)(dword_A8DA90))[v2]))->GetPlayerColor() != *(unsigned int *)stru_A8D600.Network_field_0x6F ) /*0x46d979*/
    v1 = 1; /*0x46d97b*/
  if ( IsAvailableColorhWnd(*(int *)stru_A8D600.Network_field_0x6F) ) /*0x46d97d*/
  {
    if ( ((SessionClass *)((SessionClass *)((unsigned int *)(dword_A8DA90))[v2]))->GetPlayerColor() != *(unsigned int *)stru_A8D600.Network_field_0x6F ) /*0x46d998*/
    {
      ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->SetPlayerColor(-2); /*0x46d9a3*/
      v1 = 1; /*0x46d9a8*/
    }
  }
  else
  {
    ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->SetPlayerColor(*(int *)stru_A8D600.Network_field_0x6F); /*0x46d9b9*/
  }
  if ( ((SessionClass *)((SessionClass *)((unsigned int *)(dword_A8DA90))[v2]))->GetPlayerColor() != *(unsigned int *)&stru_A8D600.__pad_64[3] ) /*0x46d9d2*/
    v1 = 1; /*0x46d9d4*/
  if ( sub_4E50A0(*(int *)&stru_A8D600.__pad_64[3]) ) /*0x46d9d6*/
  {
    if ( ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->GetOption() != *(unsigned int *)&stru_A8D600.__pad_64[3] ) /*0x46d9f1*/
    {
      ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->SetOption(-2); /*0x46d9fc*/
      return v1; /*0x46da06*/
    }
  }
  else
  {
    ((SessionClass *)((int *)((unsigned int *)(dword_A8DA90))[v2]))->SetOption(*(int *)&stru_A8D600.__pad_64[3]); /*0x46da15*/
  }
  return v1; /*0x46d8e2*/
}
}
// 0x46DA70
namespace gamemd {
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
    v2 = *(unsigned int *)&HouseClass_Array->gap0[4 * v1]; /*0x46da9a*/
    if ( v2 /*0x46dab7*/
      && v2->attachedTag->q698 != 1
      && (uint8_t)((House *)(*(void **)&HouseClass_Array->gap0[4 * v1]))->IsCurrentPlayer() )
    {
      v3 = g_CampaignScoreFlags++; /*0x46dacf*/
      v4 = 28 * v3; /*0x46dae1*/
      dword_A8D228[28 * v3] = 0; /*0x46daea*/
      wcscpy((wchar_t *)&unk_A8D1FC + 56 * v3, (const wchar_t *)(v2 + 90154)); /*0x46daf5*/
      v5 = 0; /*0x46dafa*/
      dword_A8D22C[28 * v3] = 0; /*0x46daff*/
      dword_A8D23C[28 * v3] = 0; /*0x46db05*/
      dword_A8D24C[28 * v3] = 0; /*0x46db0b*/
      dword_A8D25C[28 * v3] = 0; /*0x46db11*/
      dword_A8D224[28 * v3] = v2->q16054; /*0x46db1d*/
      if ( !v2->u8_1F5 ) /*0x46db23*/
      {
        ++dword_A8D228[28 * v3]; /*0x46db34*/
        v3 = v3; /*0x46db3a*/
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
      ((unsigned int *)(dword_A8D23C))[v4] = v5; /*0x46db6a*/
      ((unsigned int *)(dword_A8D22C))[v4] = v2->u32_5488 + v2->u32_5434; /*0x46db84*/
      Count = VectorClass::GetCount((unsigned int *)(v2 + 21840)); /*0x46db95*/
      v13 = VectorClass::GetCount((unsigned int *)(v2 + 21860)) + Count; /*0x46dba2*/
      v14 = VectorClass::GetCount((unsigned int *)(v2 + 21880)) + v13; /*0x46dbaf*/
      ((unsigned int *)(dword_A8D24C))[v4] = v2->u32_5488 /*0x46dbc8*/
                       + VectorClass::GetCount((unsigned int *)(v2 + 21900))
                       + v14
                       + v2->u32_5434;
      v15 = v2->u32_54E8; /*0x46dbce*/
      if ( v15 > 0 ) /*0x46dbd6*/
        ((unsigned int *)(dword_A8D25C))[v4] += v15; /*0x46dbd8*/
            Debug::Log();
      v1 = i; /*0x46dc21*/
      v0 = v17; /*0x46dc25*/
    }
    ++v1; /*0x46dc2c*/
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
  int DlgItem;
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
      DlgItem = (int)(GetDlgItem(hDlg, v5)); /*0x46dd09*/
      EnableWindow(DlgItem, a2); /*0x46dd17*/
      ResourceID2CSF = GetResourceID2CSF((int)((void *)i)); /*0x46dd1f*/
      v8 = GetDlgItem(hDlg, ResourceID2CSF); /*0x46dd26*/
      EnableWindow(v8, a2); /*0x46dd2a*/
      ResourceIDCSF = GetResourceIDCSF((int)((void *)i)); /*0x46dd32*/
      v10 = GetDlgItem(hDlg, ResourceIDCSF); /*0x46dd39*/
      EnableWindow(v10, a2); /*0x46dd3d*/
      ResourceID3CSF = GetResourceID3CSF((int)((void *)i)); /*0x46dd45*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x46dd4c*/
      result = EnableWindow(v12, a2); /*0x46dd50*/
    }
  }
  return result; /*0x46dd60*/
}
}
// 0x46DD70
namespace gamemd {
void EnableGameModeControls(HWND hDlg, bool a2)
{
  int v4; // eax
  int DlgItem;
  int ResourceID2; // eax
  int v7;
  int ResourceID; // eax
  int v9;
  int ResourceID3; // eax
  HWND v11; // eax
  HWND result; // eax
  HWND v13; // edi

  if ( dword_A8DA8C )
    v4 = dword_A8DA8C != 1 ? -1 : 1042;
  else
    v4 = 1041; /*0x46dd81*/
  DlgItem = (int)(GetDlgItem(hDlg, v4)); /*0x46dd9f*/
  EnableWindow(DlgItem, a2); /*0x46ddaf*/
  ResourceID2 = GetResourceID2CSF((int)((void *)dword_A8DA8C)); /*0x46ddb7*/
  v7 = (int)(GetDlgItem(hDlg, ResourceID2)); /*0x46ddbe*/
  EnableWindow(v7, a2); /*0x46ddc2*/
  ResourceID = GetResourceIDCSF((int)((void *)dword_A8DA8C)); /*0x46ddca*/
  v9 = (int)(GetDlgItem(hDlg, ResourceID)); /*0x46ddd1*/
  EnableWindow(v9, a2); /*0x46ddd5*/
  ResourceID3 = GetResourceID3CSF((int)((void *)dword_A8DA8C)); /*0x46dddd*/
  v11 = GetDlgItem(hDlg, ResourceID3); /*0x46dde4*/
  EnableWindow(v11, a2); /*0x46dde8*/
  result = (HWND)Settings::CheckString(); /*0x46ddea*/
  if ( (unsigned char)result ) /*0x46ddf1*/
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
void sub_46DE20(HWND hDlg, int nCmdShow)
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
  int64_t result; // rax

  v0 = ((Math *)(dbl_89DDD8 - dbl_89DE00))->Sin(); /*0x4661b2*/
  result = Math::RoundToInt(v0 * dbl_89DDF8 * 0.5); /*0x4661c6*/
  dword_89DE70 = result; /*0x4661cb*/
  return result; /*0x4661d0*/
}
} // namespace gamemd

// 0x4661E0
namespace gamemd {
void sub_4661E0()
{
  dbl_89DE08 = ((Math *)((double)dword_89DE70 * 0.00390625))->ArcTan(); /*0x4661f7*/
}
} // namespace gamemd

// 0x466210
namespace gamemd {
void sub_466210()
{
  dbl_89DE40 = ((Math *)((double)(2 * dword_89DE70) / dbl_89DDF8))->ArcTan(); /*0x466232*/
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
    dword_89DE18 = (int)&VectorClass_BulletClass___vftable; /*0x46632e*/
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

  ppv = (LPVOID)(0);
  if ( CoCreateInstance((const IID &)(&rclsid), 0, 7u, &IID_IUnknown, &ppv) < 0 ) /*0x46b07a*/
    return 0; /*0x46b07d*/
  v10 = ppv; /*0x46b0a4*/
  ((Particle *)((int *)ppv))->Init((int)(aP0), aP1, aP2, aP3, aP4, a6, aP7); /*0x46b0a6*/
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
  double v0; // st7
  int64_t result; // rax

  v0 = ((Math *)(dbl_89DE78 - dbl_89DEA0))->Sin(); /*0x46bab2*/
  result = Math::RoundToInt(v0 * dbl_89DE98 * 0.5); /*0x46bac6*/
  dword_89DEF0 = result; /*0x46bacb*/
  return result; /*0x46bad0*/
}
} // namespace gamemd

// 0x46BAE0
namespace gamemd {
void sub_46BAE0()
{
  dbl_89DEA8 = ((Math *)((double)dword_89DEF0 * 0.00390625))->ArcTan(); /*0x46baf7*/
}
} // namespace gamemd

// 0x46BB10
namespace gamemd {
void sub_46BB10()
{
  dbl_89DEC0 = ((Math *)((double)(2 * dword_89DEF0) / dbl_89DE98))->ArcTan(); /*0x46bb32*/
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
  int64_t result; // rax

  v0 = ((Math *)(dbl_89DEF8 - dbl_89DF10))->Sin(); /*0x46ca52*/
  result = Math::RoundToInt(v0 * dbl_89DF08 * 0.5); /*0x46ca66*/
  dword_89DF60 = result; /*0x46ca6b*/
  return result; /*0x46ca70*/
}
} // namespace gamemd

// 0x46CA80
namespace gamemd {
void sub_46CA80()
{
  dbl_89DF18 = ((Math *)((double)dword_89DF60 * 0.00390625))->ArcTan(); /*0x46ca97*/
}
} // namespace gamemd

// 0x46CAB0
namespace gamemd {
void sub_46CAB0()
{
  dbl_89DF30 = ((Math *)((double)(2 * dword_89DF60) / dbl_89DF08))->ArcTan(); /*0x46cad2*/
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
  int64_t result; // rax

  v0 = ((Math *)(dbl_89DF68 - dbl_89DFB0))->Sin(); /*0x46d202*/
  result = Math::RoundToInt(v0 * dbl_89DFA8 * 0.5); /*0x46d216*/
  dword_89E048 = result; /*0x46d21b*/
  return result; /*0x46d220*/
}
} // namespace gamemd

// 0x46D230
namespace gamemd {
void sub_46D230()
{
  dbl_89DFB8 = ((Math *)((double)dword_89E048 * 0.00390625))->ArcTan(); /*0x46d247*/
}
} // namespace gamemd

// 0x46D260
namespace gamemd {
void sub_46D260()
{
  dbl_89DFD8 = ((Math *)((double)(2 * dword_89E048) / dbl_89DFA8))->ArcTan(); /*0x46d282*/
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
void sub_46D480(void * a1, void * a2)
{
  int64_t result; // rax

  *((unsigned char *)&(unsigned int)(g_GameModeOptionState)+ a2) = IDA_BYTE4(result); /*0x46d480*/
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
  int result; // eax
  int v2; // [esp+8h] [ebp-1C8h] BYREF
  char v3[43]; // [esp+Ch] [ebp-1C4h] BYREF
  int Option; // [esp+37h] [ebp-199h]
  int PlayerSide; // [esp+3Bh] [ebp-195h]
  int PlayerColor; // [esp+3Fh] [ebp-191h]

  v2 = 51; /*0x46d82c*/
  strcpy(v3,(const char *)(unk_A8B380)); /*0x46d83d*/
  Option = ((SessionClass *)((int *)*(unsigned int *)(dword_A8DA78)))->GetOption(); /*(unsigned int *)(0x46d859)*/
  PlayerSide = ((SessionClass *)((int *)*(unsigned int *)(dword_A8DA78)))->GetPlayerSide(); /*0x46d864*/
  PlayerColor = ((SessionClass *)((SessionClass *)*(unsigned int *)(dword_A8DA78)))->GetPlayerColor(); /*0x46d874*/
  result = dword_A8DA90; /*0x46d878*/
  if ( dword_A8DA90 ) /*0x46d881*/
  {
    Network::SendToPlayer((int)&unk_A8E9C0, (int)&v2, 455,(wchar_t *)(1), (wchar_t *)dword_A8DA90); /*0x46d895*/
// 0x541820
    return ((Network *)(&unk_A8E9C0))->ReceiveLoop(); /*0x46d89f*/
  }
  return result; /*0x46d87d*/
}
} // namespace gamemd

// 0x46DA20
namespace gamemd {
LRESULT sub_46DA20(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x46da38*/
  DlgItem = GetDlgItem(aP0, nIDDlgItem); /*0x46da42*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x46da5b*/
}
} // namespace gamemd

// 0x46F810
namespace gamemd {
int Lobby_GetPlayerColor(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f814*/
  if ( Player::IsObserver(v2) ) /*0x46f81d*/
    return g_abs_A8B2BC[a1]; /*0x46f826*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f836*/
    return -2; /*0x46f839*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f846*/
    return -2; /*0x46f849*/
  if ( v2 == g_Lobby_PlayerReady ) /*0x46f856*/
    return -2; /*0x46f859*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f866*/
    return -2; /*0x46f869*/
// 0x696f20
  return ((SessionClass *)((int)v2))->GetPlayerColor(); /*0x46f82d*/
}
} // namespace gamemd

// 0x46F880
namespace gamemd {
int HouseClass_GetSideIndex(int a1)
{
  wchar_t *v2; // esi

  v2 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x46f884*/
  if ( Player::IsObserver(v2) ) /*0x46f88d*/
    return g_abs_A8B2DC[a1]; /*0x46f896*/
  if ( v2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x46f8a6*/
    return -2; /*0x46f8a9*/
  if ( v2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x46f8b6*/
    return -2; /*0x46f8b9*/
  if ( v2 == g_Lobby_PlayerReady ) /*0x46f8c6*/
    return -2; /*0x46f8c9*/
  if ( v2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x46f8d6*/
    return -2; /*0x46f8d9*/
// 0x696f50
  return ((SessionClass *)((int)v2))->GetOption(); /*0x46f89d*/
}
} // namespace gamemd
