// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6A04C0_e4.hpp"
#include "e4/classes/E4Recv_6A6AF0_e4.hpp"
#include "e4/classes/E4Recv_6A74A0_e4.hpp"
#include "e4/classes/E4Recv_6A87F0_e4.hpp"
#include "e4/classes/E4Recv_6A89E0_e4.hpp"
#include "e4/classes/E4Recv_6A93F0_e4.hpp"
#include "e4/classes/E4Recv_6AACE0_e4.hpp"
#include "e4/classes/E4Recv_6ABA60_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Count_e4.hpp"

// 0x6A6AF0
namespace gamemd {
int E4Recv_6A6AF0::sub_6A6AF0(ObjectClass * aP1, int a3)
{

  int v3; // eax
  unsigned int *v4; // ecx
  int v5; // eax
  int v6; // ecx
  unsigned int *v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v12; // [esp+0h] [ebp-8h]
  unsigned int *v14; // [esp+10h] [ebp+8h]

  v3 = a3; /*0x6a6af3*/
  if ( a3 == -1 ) /*0x6a6afe*/
    v3 = *((unsigned int *)this + 5351); /*0x6a6b00*/
  v4 = (unsigned int *)this + 997 * v3 + 1361; /*0x6a6b19*/
  v5 = 26; /*0x6a6b20*/
  v14 = v4; /*0x6a6b25*/
  v6 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13496); /*0x6a6b29*/
  if ( v6 ) /*0x6a6b31*/
    v5 = 18; /*0x6a6b33*/
  v12 = (*(unsigned int *)&stru_87C374.__pad_579C[21644] /*0x6a6b77*/
       - *(unsigned int *)&stru_B05488.__pad_579C[2260]
       - v5
       + *(unsigned int *)&stru_87C374.__pad_579C[21636]
       - 7)
      / 50;
  if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) ) /*0x6a6b7b*/
    v12 = 1; /*0x6a6b7d*/
  if ( !(unsigned char)aP1 ) /*0x6a6b8b*/
  {
    v9 = 26; /*0x6a6ba9*/
    if ( v6 ) /*0x6a6bae*/
      v9 = 18; /*0x6a6bb0*/
    v10 = *(unsigned int *)&stru_87C374.__pad_579C[21644] - *(unsigned int *)&stru_B05488.__pad_579C[2260] - v9; /*0x6a6bb5*/
    if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) ) /*0x6a6bd0*/
    {
      v7 = v14; /*0x6a6bdd*/
      if ( v14[17] + (v10 + *(unsigned int *)&stru_87C374.__pad_579C[21636] - 7) / 50 / 2 >= *(int *)&stru_87C374.__pad_579C[12776] ) /*0x6a6be8*/
        return 0; /*0x6a6be8*/
    }
    else
    {
      if ( 2 * ((v10 + *(unsigned int *)&stru_87C374.__pad_579C[21636] - 7) / 50 + v14[17]) >= v14[21] ) /*0x6a6bfc*/
        return 0; /*0x6a6bfc*/
      v7 = v14; /*0x6a6bfe*/
    }
    v8 = v12 + v7[18]; /*0x6a6c07*/
    goto LABEL_18; /*0x6a6c07*/
  }
  v7 = v14; /*0x6a6b8d*/
  if ( v14[17] ) /*0x6a6b91*/
  {
    v8 = v14[18] - v12; /*0x6a6ba3*/
LABEL_18:
    v7[18] = v8; /*0x6a6c09*/
    (*(void (**)(unsigned int *, unsigned int))(*(unsigned int **)this + 56))(this, 0); /*0x6a6c14*/
    return 1; /*0x6a6c20*/
  }
  return 0; /*0x6a6c1d*/

}
}
// 0x6A74A0
namespace gamemd {
int E4Recv_6A74A0::sub_6A74A0(int a2)
{

  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebp

  *((unsigned int *)this + 5351) = a2; /*0x6a74b6*/
  GadgetClass::Show((unsigned char *)&MEMORY[0xB07C48] + 96 * a2); /*0x6a74bc*/
  v3 = (int)((unsigned int *)this + 997 * *((unsigned int *)this + 5351) + 1361); /*0x6a74d4*/
  *((unsigned char *)this + 3988 * *((unsigned int *)this + 5351) + 5472) = 1; /*0x6a74db*/
  v4 = 26; /*0x6a74ed*/
  if ( *((unsigned int *)MEMORY[0xA8B230] + 3374) ) /*0x6a74e5*/
    v4 = 18; /*0x6a74f4*/
  v5 = 0; /*0x6a7507*/
  v6 = 2 * ((MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v4 + MEMORY[0x886F94] - 7) / 50); /*0x6a7527*/
  if ( v6 > 0 ) /*0x6a752b*/
  {
    do /*0x6a7570*/
    {
      Hash::Reset((unsigned int *)(56 * (v5 + 60 * *(unsigned int *)(v3 + 56)) + 11566720)); /*0x6a7545*/
      Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v5 + 60 * *(unsigned int *)(v3 + 56)) + 11566720); /*0x6a7568*/
      ++v5; /*0x6a756d*/
    }
    while ( v5 < v6 ); /*0x6a7570*/
  }
  MEMORY[0x884B8F] = 1; /*0x6a7574*/
  return Tactical::UpdateUIVisibility(this); /*0x6a7580*/

}
}
// 0x6A87F0
namespace gamemd {
int E4Recv_6A87F0::sub_6A87F0(int a2, int a3)
{

  int v4; // edx
  int v5; // ecx
  unsigned int *v6; // eax

  v4 = *((unsigned int *)this + 21); /*0x6a87f5*/
  if ( v4 > 75 ) /*0x6a87fb*/
    return 0; /*0x6a8857*/
  v5 = 0; /*0x6a8805*/
  if ( v4 > 0 ) /*0x6a8809*/
  {
    v6 = (unsigned int *)((char *)this + 88); /*0x6a880b*/
    while ( v6[1] != a2 || *v6 != a3 ) /*0x6a8815*/
    {
      ++v5; /*0x6a8817*/
      v6 += 13; /*0x6a8818*/
      if ( v5 >= v4 ) /*0x6a881d*/
        goto LABEL_7; /*0x6a881d*/
    }
    return 0; /*0x6a8815*/
  }
LABEL_7:
  if ( !MEMORY[0xA8E7AC] && a2 != 31 ) /*0x6a882b*/
    VoxClass::FindAndPlay(MEMORY[0x83FA64], -1); /*0x6a8837*/
  TabCameoListClass::AddCameo_ReplaceItAll((int *)this, a2, a3); /*0x6a8840*/
  *((unsigned char *)this + 60) = 1; /*0x6a8848*/
  MEMORY[0x884B8F] = 1; /*0x6a884c*/
  return 1; /*0x6a8847*/

}
}
// 0x6A89E0
namespace gamemd {
int E4Recv_6A89E0::sub_6A89E0(char a2)
{

  int v2; // eax
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // kr04_4
  unsigned int *v8; // eax
  int v10; // [esp+4h] [ebp-4h]

  v10 = *((unsigned int *)MEMORY[0xA8B230] + 3374); /*0x6a89f2*/
  v2 = 26; /*0x6a89f8*/
  if ( v10 ) /*0x6a89fd*/
    v2 = 18; /*0x6a89ff*/
  v3 = (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v2 + MEMORY[0x886F94] - 7) / 50; /*0x6a8a43*/
  if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a8a45*/
    v3 = 1; /*0x6a8a47*/
  if ( a2 ) /*0x6a8a52*/
  {
    if ( *((unsigned int *)this + 17) ) /*0x6a8a58*/
    {
      *((unsigned int *)this + 18) -= v3; /*0x6a8a72*/
      return 1; /*0x6a8a76*/
    }
    else
    {
      return 0; /*0x6a8a62*/
    }
  }
  else
  {
    v5 = 26; /*0x6a8a85*/
    if ( v10 ) /*0x6a8a8a*/
      v5 = 18; /*0x6a8a8c*/
    v6 = (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v5 + MEMORY[0x886F94] - 7) / 50; /*0x6a8aaa*/
    if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a8aac*/
    {
      v7 = v6; /*0x6a8ab7*/
      v8 = this; /*0x6a8ab9*/
      if ( *((unsigned int *)this + 17) + v7 / 2 >= MEMORY[0x884CF8] ) /*0x6a8ac4*/
        return 0; /*0x6a8acf*/
    }
    else
    {
      if ( 2 * (v6 + *((unsigned int *)this + 17)) >= *((unsigned int *)this + 21) ) /*0x6a8ae2*/
        return 0; /*0x6a8aed*/
      v8 = this; /*0x6a8af0*/
    }
    v8[18] += v3; /*0x6a8afb*/
    return 1; /*0x6a8aff*/
  }

}
}
// 0x6A93F0
namespace gamemd {
BombClass * * E4Recv_6A93F0::sub_6A93F0()
{

  int v2; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebp

  *((unsigned char *)this + 28) = 1; /*0x6a93f8*/
  v2 = 26; /*0x6a9408*/
  if ( *((unsigned int *)MEMORY[0xA8B230] + 3374) ) /*0x6a9400*/
    v2 = 18; /*0x6a940f*/
  v3 = 0; /*0x6a942f*/
  v4 = MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v2 + MEMORY[0x886F94] - 7; /*0x6a9431*/
  v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31; /*0x6a943c*/
  v6 = 2 * (v4 / 50); /*0x6a9443*/
  if ( v6 > 0 ) /*0x6a9447*/
  {
    do /*0x6a9494*/
    {
      Hash::Reset((unsigned int *)(56 * (v3 + 60 * *((unsigned int *)this + 14)) + 11566720)); /*0x6a9465*/
      LOBYTE(v5) = Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v3 + 60 * *((unsigned int *)this + 14)) + 11566720); /*0x6a948c*/
      ++v3; /*0x6a9491*/
    }
    while ( v3 < v6 ); /*0x6a9494*/
  }
  MEMORY[0x884B8F] = 1; /*0x6a9498*/
  return v5; /*0x6a9496*/

}
}
// 0x6ACBAE
namespace gamemd {
void* __inc_tmpoff()
{
  ++MEMORY[0x51D]; /*0x6acbae*/
}
}
// 0x6ADC20
namespace gamemd {
void SetupSkirmishSpawnLocationEntry(SessionClass * hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int ResourceIDCSF; // ebx
  int v8; // eax
  int v9; // ebx
  char *i; // edi
  int v11; // eax
  LRESULT v12; // eax
  HWND DlgItem; // ebx
  HWND v14; // ebp
  int nIDDlgItema; // [esp+10h] [ebp-10h]
  HWND hWnd; // [esp+14h] [ebp-Ch]
  HWND hWnda; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  uint8_t v20; // [esp+18h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v22; // [esp+1Ch] [ebp-4h]

  switch ( nIDDlgItem ) /*0x6adc31*/
  {
    case 1291: /*0x6adc31*/
      v4 = 0; /*0x6adc33*/
      break;
    case 1294: /*0x6adc31*/
      v4 = 1; /*0x6adc3f*/
      break;
    case 1302: /*0x6adc31*/
      v4 = 2; /*0x6adc4e*/
      break;
    case 1306: /*0x6adc31*/
      v4 = 3; /*0x6adc5d*/
      break;
    case 1307: /*0x6adc31*/
      v4 = 4; /*0x6adc6c*/
      break;
    case 1308: /*0x6adc31*/
      v4 = 5; /*0x6adc7b*/
      break;
    default:
      v5 = -(nIDDlgItem != 1309); /*0x6adc8b*/
      IDA_LOBYTE(v5) = v5 & 0xF9; /*0x6adc8d*/
      v4 = v5 + 6; /*0x6adc8f*/
      break;
  }
  v6 = v4 + 1; /*0x6adc92*/
  ResourceIDCSF = GetResourceIDCSF((void *)(v4 + 1)); /*0x6adc9c*/
  v19 = ResourceIDCSF; /*0x6adca0*/
  nIDDlgItema = GetResourceID2CSF((void *)v6); /*0x6adcab*/
  hWnd = (HWND)GetResourceID3CSF((void *)v6); /*0x6adcb6*/
  ResourceID4CSF = (HWND)GetResourceID4CSF((void *)v6); /*0x6adcc1*/
  if ( hDlg && dword_A8B23C ) /*0x6adcce*/
  {
    v8 = 1; /*0x6adcd2*/
    v9 = 8; /*0x6adcd7*/
    if ( v6 > 0 && v6 < 8 ) /*0x6adce0*/
    {
      v8 = v6; /*0x6adce2*/
      v9 = v6 + 1; /*0x6adce4*/
    }
    for ( i = (char *)v8; (int)i < v9; ++i ) /*0x6adceb*/
    {
      v11 = GetResourceID4CSF(i); /*0x6adcef*/
      if ( dword_A8B23C && *(unsigned char *)(dword_A8B23C + 60) ) /*0x6adcfe*/
        SetupLobbyPlayerSlots(hDlg, v11, 3); /*0x6add07*/
      else
        SetupLobbyPlayerSlots(hDlg, v11, -2); /*0x6add0f*/
    }
    ResourceIDCSF = v19; /*0x6add19*/
  }
  v12 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x6add2e*/
  if ( (unsigned int)SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v12, 0) <= 2 ) /*0x6add3e*/
  {
    v20 = 1; /*0x6addde*/
  }
  else
  {
    v20 = 0; /*0x6add5c*/
    SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x6add61*/
    SetupLobbyCountryCombo(hDlg, nIDDlgItema, -2); /*0x6add6e*/
    SetupLobbyFactionSlots(hDlg, (int)hWnd, -2); /*0x6add7b*/
  }
  DlgItem = GetDlgItem(hDlg, ResourceIDCSF); /*0x6add8a*/
  v14 = GetDlgItem(hDlg, nIDDlgItema); /*0x6add94*/
  hWnda = GetDlgItem(hDlg, (int)hWnd); /*0x6adda2*/
  v22 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6addb4*/
  EnableWindow(DlgItem, v20); /*0x6addc0*/
  EnableWindow(v14, v20); /*0x6addc4*/
  EnableWindow(hWnda, v20); /*0x6addcc*/
  return EnableWindow(v22, v20); /*0x6addd6*/
}
}
// 0x6AE080
namespace gamemd {
void HideSkirmishSpawnLocations(HWND hDlg, int a2)
{
  int v3; // esi
  int v4; // esi
  LRESULT v5; // ebp
  WPARAM v6; // ebx
  char *v7; // esi
  int nIDDlgItem; // [esp+10h] [ebp-18h]
  int nIDDlgItema; // [esp+10h] [ebp-18h]
  HWND nIDDlgItemb; // [esp+10h] [ebp-18h]
  HWND hWnda; // [esp+14h] [ebp-14h]
  HWND hWndb; // [esp+14h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+18h] [ebp-10h]
  HWND DlgItem; // [esp+18h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+1Ch] [ebp-Ch]
  HWND v17; // [esp+1Ch] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+20h] [ebp-8h]
  HWND v19; // [esp+20h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+24h] [ebp-4h]
  HWND v21; // [esp+24h] [ebp-4h]

  if ( a2 < 8 )
  {
    v3 = a2 - 1; /*0x6ae096*/
    for ( nIDDlgItem = a2 - 1; ; v3 = nIDDlgItem )
    {
      if ( v3 )
      {
        switch ( v3 )
        {
          case 1:
            v4 = 1294; /*0x6ae0b3*/
            break;
          case 2:
            v4 = 1302; /*0x6ae0bf*/
            break;
          case 3:
            v4 = 1306; /*0x6ae0cb*/
            break;
          case 4:
            v4 = 1307; /*0x6ae0d7*/
            break;
          case 5:
            v4 = 1308; /*0x6ae0e3*/
            break;
          default:
            v4 = v3 != 6 ? -1 : 1309;
            break;
        }
      }
      else
      {
        v4 = 1291; /*0x6ae0a7*/
      }
      v5 = SendDlgItemMessageA(hDlg, v4, 0x146u, 0, 0); /*0x6ae10e*/
      v6 = 0; /*0x6ae110*/
      if ( v5 > 0 ) /*0x6ae114*/
      {
        while ( SendDlgItemMessageA(hDlg, v4, 0x150u, v6, 0) != -1 ) /*0x6ae129*/
        {
          if ( (int)++v6 >= v5 ) /*0x6ae12e*/
            goto LABEL_22; /*0x6ae12e*/
        }
        SendDlgItemMessageA(hDlg, v4, 0x14Eu, v6, 0); /*0x6ae13c*/
      }
  LABEL_22:
      SetupSkirmishSpawnLocationEntry(hDlg, v4); /*0x6ae146*/
      if ( ++nIDDlgItem + 1 >= 8 ) /*0x6ae158*/
        break; /*0x6ae158*/
    }
    if ( a2 < 8 )
    {
      v7 = (char *)(a2 - 1); /*0x6ae177*/
      do
      {
        if ( v7 )
        {
          if ( v7 == (char *)1 )
          {
            nIDDlgItema = 1294; /*0x6ae18d*/
          }
          else if ( v7 == (char *)2 )
          {
            nIDDlgItema = 1302; /*0x6ae19c*/
          }
          else if ( v7 == (char *)3 )
          {
            nIDDlgItema = 1306; /*0x6ae1ab*/
          }
          else if ( v7 == (char *)4 )
          {
            nIDDlgItema = 1307; /*0x6ae1ba*/
          }
          else if ( v7 == (char *)5 )
          {
            nIDDlgItema = 1308; /*0x6ae1c9*/
          }
          else
          {
            nIDDlgItema = v7 != (char *)6 ? -1 : 1309;
          }
        }
        else
        {
          nIDDlgItema = 1291; /*0x6ae17e*/
        }
        hWnda = (HWND)GetResourceIDHardcodedCSF(++v7); /*0x6ae1f4*/
        ResourceID2CSF = (HWND)GetResourceID2CSF(v7); /*0x6ae1ff*/
        ResourceIDCSF = (HWND)GetResourceIDCSF(v7); /*0x6ae20a*/
        ResourceID3CSF = (HWND)GetResourceID3CSF(v7); /*0x6ae215*/
        ResourceID4CSF = (HWND)GetResourceID4CSF(v7); /*0x6ae21e*/
        nIDDlgItemb = GetDlgItem(hDlg, nIDDlgItema); /*0x6ae22e*/
        hWndb = GetDlgItem(hDlg, (int)hWnda); /*0x6ae23a*/
        DlgItem = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae242*/
        v17 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6ae252*/
        v19 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae25e*/
        v21 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae266*/
        ShowWindow(nIDDlgItemb, 0); /*0x6ae271*/
        ShowWindow(hWndb, 0); /*0x6ae27a*/
        ShowWindow(DlgItem, 0); /*0x6ae283*/
        ShowWindow(v17, 0); /*0x6ae28c*/
        ShowWindow(v19, 0); /*0x6ae295*/
        ShowWindow(v21, 0); /*0x6ae29e*/
      }
      while ( (int)(v7 + 1) < 8 );
    }
  }
}
}
// 0x6AE2C0
namespace gamemd {
void ShowSkirmishSetupScreen(void * a1, void * a2)
{
  int v2; // ebx
  ObjectClass *v3; // esi
  int i; // esi
  HWND Dialog; // esi
  LONG j; // eax
  TechnoTypeClass *v7; // ecx
  Skirmish *v8; // esi
  ObjectClass *v10; // [esp+0h] [ebp-8h]
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  v10 = v3; /*0x6ae2cc*/
  dwNewLong = -1; /*0x6ae2ce*/
  RulesClass::LoadCountries(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x6ae2d6*/
  RulesClass::ReadDataList(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x6ae2e8*/
  for ( i = 0; i < dword_A83CA8; ++i ) /*0x6ae2f6*/
    (*(void (**)(unsigned int, unsigned int))(**((unsigned int **)dword_A83C9C + i) + 100))( /*0x6ae30a*/
      *((unsigned int *)dword_A83C9C + i),
      *(unsigned int *)&DSurface_ViewBounds.__pad_34[116]);
  LoadingScreen::Init(); /*0x6ae317*/
  Dialog = (HWND)CreateDialog(0x102u, Skirmish::Setup_DlgProc, 0); /*0x6ae32d*/
  if ( Dialog ) /*0x6ae331*/
  {
    dword_B0B59C = (unsigned int)(Dialog);
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x6ae341*/
    Dialog::Show((Dialog *)Dialog); /*0x6ae349*/
    for ( j = dwNewLong; dwNewLong != 1559; j = dwNewLong ) /*0x6ae357*/
    {
      if ( j == 1472 ) /*0x6ae35e*/
        break; /*0x6ae35e*/
            if ( Dialog::PumpMessages() == 1 )
        break; /*0x6ae367*/
      IDA_LOBYTE(v7) = 0; /*0x6ae369*/
      ScreenSaver::Process(v7, v10); /*0x6ae36b*/
    }
    Dialog::Destroy((Dialog *)Dialog); /*0x6ae37d*/
    dword_B0B59C = 0; /*0x6ae382*/
  }
  v8 = (gamemd::Skirmish *)(g_UIControlState);
  if ( g_UIControlState ) /*0x6ae394*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x6ae398*/
    RA2_OPDEL(v8); /*0x6ae39e*/
    g_UIControlState = 0; /*0x6ae3a6*/
  }
  CleanupFileTree(v10); /*0x6ae3b0*/
  SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x6ae3ba*/
  if ( dwNewLong == 1472 ) /*0x6ae3c9*/
    Screen::Capture(1, 0, v2, a2); /*0x6ae3cf*/
  return dwNewLong == 1559; /*0x6ae3e0*/
}
}
// 0x6AFD60
namespace gamemd {
int TechnoClass::ProcessDeployAction()
{

  SlaveManagerClass *v2; // eax
  TechnoClass *v3; // edi
  int currentMission; // edi
  TechnoClass *v5; // edi
  int v6; // edi
  void *v7; // eax
  TechnoClass *v8; // edi
  IUnknown *v9; // eax
  TechnoClass *v10; // edi
  TechnoClass *v11; // edi
  TechnoClass *v12; // ecx
  TechnoClass *v13; // edi
  TechnoClass *v14; // ecx
  IUnknown *v15; // eax
  int v16; // edx
  double v17; // st7
  __int16 v18; // di
  __int16 *v19; // eax
  IUnknown *v20; // eax
  int v21; // edx
  double v22; // st7
  double v23; // st7
  __int16 v24; // cx
  int v25; // eax
  SlaveManagerClass *v27; // [esp+2Ch] [ebp-28h] BYREF
  __int16 v28[2]; // [esp+30h] [ebp-24h] BYREF
  int v29; // [esp+34h] [ebp-20h] BYREF
  int v30; // [esp+38h] [ebp-1Ch] BYREF
  int v31; // [esp+3Ch] [ebp-18h] BYREF
  int v32; // [esp+40h] [ebp-14h] BYREF
  unsigned char v33[8]; // [esp+44h] [ebp-10h] BYREF
  SlaveManagerClass *v34; // [esp+4Ch] [ebp-8h]

  v2 = (SlaveManagerClass *)*((unsigned int *)this + 23); /*0x6afd67*/
  switch ( (unsigned int)v2 )
  {
    case 0u:
      v3 = *((unsigned int *)this + 9); /*0x6afd7a*/
      if ( v3 ) /*0x6afd7f*/
      {
        v2 = (SlaveManagerClass *)(*(int (**)(unsigned int))(*(unsigned int *)v3->__pad_0 + 44))(*((unsigned int *)this + 9)); /*0x6afd89*/
        if ( v2 == (SlaveManagerClass *)6 ) /*0x6afd8f*/
        {
          currentMission = v3->currentMission; /*0x6afd95*/
          if ( currentMission != 19 && currentMission != 18 ) /*0x6afda7*/
          {
            *((unsigned int *)this + 23) = (TechnoClass *)5; /*0x6afdad*/
            *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6afdb4*/
          }
        }
      }
      break; /*0x6afdc0*/
    case 1u:
      v5 = *((unsigned int *)this + 9); /*0x6afdc1*/
      if ( v5 /*0x6afddc*/
        && (*(int (**)(unsigned int))(*(unsigned int *)v5->__pad_0 + 44))(*((unsigned int *)this + 9)) == 1
        && (v2 = *(SlaveManagerClass **)&v5[1].hasParachute) != 0 )
      {
        *((unsigned int *)this + 23) = (TechnoClass *)2; /*0x6afdde*/
        *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6afde5*/
      }
      else
      {
        v2 = *(SlaveManagerClass **)(*(int (**)(unsigned int, int *, int, int))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 /*0x6afe1c*/
                                                                                   + 824))(
                                      *((unsigned int *)this + 9),
                                      &v29,
                                      *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6024) / 256,
                                      1);
        *(unsigned int *)v28 = v2; /*0x6afe25*/
        v27 = v2; /*0x6afe29*/
        if ( (unsigned short)v2 == *(unsigned short *)&MEMORY[0xB077F8].__pad_14B0[10512] /*0x6afe57*/
          && v28[1] == *(unsigned short *)&MEMORY[0xB077F8].__pad_14B0[10514]
          || (v2 = (SlaveManagerClass *)*BuildingClass::FindPlacementCells2(this, (SlaveManagerClass *)&v30, v2),
              v27 = v2,
              v2 == *(SlaveManagerClass **)&MEMORY[0xB077F8].__pad_14B0[10512]) )
        {
          *((unsigned int *)this + 23) = 0; /*0x6afe67*/
          *((unsigned int *)this + 24) = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6afe74*/
        }
        else
        {
          v6 = *(unsigned int *)(*((unsigned int *)this + 9))->__pad_0; /*0x6afe87*/
          v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v27); /*0x6afe8e*/
          (*(void (**)(unsigned int, void *, int))(v6 + 1152))(*((unsigned int *)this + 9), v7, 1); /*0x6afe97*/
          LOBYTE(v2) = (*(int (**)(unsigned int, int, unsigned int))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 + 488))( /*0x6afea6*/
                         *((unsigned int *)this + 9),
                         2,
                         0);
          *((unsigned int *)this + 23) = (TechnoClass *)2; /*0x6afeac*/
          *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6afeb3*/
        }
      }
      break; /*0x6afdf1*/
    case 2u:
      v8 = *((unsigned int *)this + 9); /*0x6afec0*/
      if ( v8 /*0x6afed1*/
        && (v2 = (SlaveManagerClass *)(*(int (**)(unsigned int))(*(unsigned int *)v8->__pad_0 + 44))(*((unsigned int *)this + 9)),
            v2 == (SlaveManagerClass *)1) )
      {
        v2 = *(SlaveManagerClass **)&v8[1].hasParachute; /*0x6afee9*/
        if ( !v2 ) /*0x6afef1*/
        {
          LOBYTE(v2) = TechnoClass::Deploy((int *)v8->__pad_0); /*0x6afef9*/
          if ( (unsigned char)v2 ) /*0x6aff00*/
          {
            *((unsigned int *)this + 23) = (TechnoClass *)4; /*0x6aff02*/
            *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6aff09*/
          }
          else
          {
            v9 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff16*/
            *((unsigned int *)this + 23) = (TechnoClass *)3; /*0x6aff23*/
            *((unsigned int *)this + 20) = (TechnoClass *)v9; /*0x6aff2a*/
            v2 = v34; /*0x6aff2c*/
            *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6aff30*/
            *((unsigned int *)this + 21) = (TechnoClass *)v2; /*0x6aff38*/
            *((unsigned int *)this + 22) = (TechnoClass *)30; /*0x6aff3c*/
          }
        }
      }
      else
      {
        *((unsigned int *)this + 23) = 0; /*0x6afed3*/
        *((unsigned int *)this + 24) = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6afee0*/
      }
      break; /*0x6afee8*/
    case 3u:
      v10 = *((unsigned int *)this + 9); /*0x6aff43*/
      if ( v10 && (*(int (**)(unsigned int))(*(unsigned int *)v10->__pad_0 + 44))(*((unsigned int *)this + 9)) == 1 ) /*0x6aff54*/
      {
        LOBYTE(v2) = TechnoClass::Deploy((int *)v10->__pad_0); /*0x6aff6d*/
        if ( !(unsigned char)v2 ) /*0x6aff74*/
          goto LABEL_53; /*0x6aff74*/
        *((unsigned int *)this + 23) = (TechnoClass *)4; /*0x6aff7a*/
        *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6aff81*/
      }
      else
      {
        *((unsigned int *)this + 23) = 0; /*0x6aff56*/
        LOBYTE(v2) = MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff5d*/
        *((unsigned int *)this + 24) = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff62*/
      }
      break; /*0x6aff6a*/
    case 4u:
      v2 = (SlaveManagerClass *)(*(int (**)(unsigned int))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 + 44))(*((unsigned int *)this + 9)); /*0x6aff93*/
      if ( v2 == (SlaveManagerClass *)6
        && ((v11 = *((unsigned int *)this + 9)) != 0
          ? (v2 = (*(int (**)(unsigned int))(*(unsigned int *)v11->__pad_0 + 44))(*((unsigned int *)this + 9)) == 6
                ? (SlaveManagerClass *)v11
                : 0)
          : (v2 = 0),
            v2[13].NeedsSaveOrLink) )
      {
        *((unsigned int *)this + 23) = (TechnoClass *)5; /*0x6affc2*/
        *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6affc9*/
      }
      else
      {
        v12 = *((unsigned int *)this + 9); /*0x6affd6*/
        if ( v12 )
        {
          v2 = (SlaveManagerClass *)(*(int (**)(TechnoClass *))(*(unsigned int *)v12->__pad_0 + 44))(v12); /*0x6affe3*/
          if ( v2 == (SlaveManagerClass *)1 )
          {
            v13 = *((unsigned int *)this + 9); /*0x6affef*/
            v2 = v13
               ? ((*(int (**)(unsigned int))(*(unsigned int *)v13->__pad_0 + 44))(*((unsigned int *)this + 9)) == 1
                ? (SlaveManagerClass *)v13
                : 0)
               : 0;
            if ( !v2[16].__pad_48[4] && (*((unsigned int *)this + 9))->currentMission == 5 ) /*0x6b0022*/
            {
              *((unsigned int *)this + 23) = (TechnoClass *)2; /*0x6b0028*/
              *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6b002f*/
            }
          }
        }
      }
      break; /*0x6affd5*/
    case 5u:
      v14 = *((unsigned int *)this + 9); /*0x6b003c*/
      if ( v14 && (*(int (**)(TechnoClass *))(*(unsigned int *)v14->__pad_0 + 44))(v14) == 1 ) /*0x6b004b*/
      {
        *((unsigned int *)this + 23) = 0; /*0x6b004d*/
        LOBYTE(v2) = MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b0054*/
        *((unsigned int *)this + 24) = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b0059*/
      }
      else
      {
        v2 = *(SlaveManagerClass **)(*(int (**)(unsigned int, int *, int, unsigned int))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 /*0x6b008d*/
                                                                                      + 824))(
                                      *((unsigned int *)this + 9),
                                      &v29,
                                      *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6016) / 256,
                                      0);
        *(unsigned int *)v28 = v2; /*0x6b0096*/
        if ( (unsigned short)v2 == *(unsigned short *)&MEMORY[0xB077F8].__pad_14B0[10512] /*0x6b00ac*/
          && v28[1] == *(unsigned short *)&MEMORY[0xB077F8].__pad_14B0[10514] )
        {
          v27 = *(SlaveManagerClass **)(*(int (**)(unsigned int, int *, int, int))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 /*0x6b00e7*/
                                                                                      + 824))(
                                         *((unsigned int *)this + 9),
                                         &v29,
                                         *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6024) / 256,
                                         1);
          *(unsigned int *)v28 = *BuildingClass::FindPlacementCells2(this, (SlaveManagerClass *)&v31, v27); /*0x6b0100*/
          v15 = CellStruct::Sub(v28, (IUnknown *)&v32, (IUnknown *)&v27); /*0x6b0104*/
          v16 = SHIWORD(v15->field_0); /*0x6b0109*/
          v29 = SLOWORD(v15->field_0); /*0x6b011b*/
          v17 = Math::Sqrt((double)v29 * (double)v29 + (double)v16 * (double)v16); /*0x6b0134*/
          v18 = Math::RoundToInt(v17); /*0x6b0144*/
          v19 = (__int16 *)(*(int (**)(unsigned int, unsigned char *))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 + 440))( /*0x6b014d*/
                             *((unsigned int *)this + 9),
                             v33);
          v20 = CellStruct::Sub(v19, (IUnknown *)&v32, (IUnknown *)&v27); /*0x6b015f*/
          v21 = SLOWORD(v20->field_0); /*0x6b0168*/
          v29 = SHIWORD(v20->field_0); /*0x6b016b*/
          v22 = (double)v29; /*0x6b0172*/
          v29 = v21; /*0x6b0176*/
          v23 = Math::Sqrt((double)v21 * (double)v21 + v22 * v22); /*0x6b018f*/
          v24 = Math::RoundToInt(v23); /*0x6b01b8*/
          v2 = (SlaveManagerClass *)(v18 + *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6028) / 256); /*0x6b01bb*/
          if ( (int)v2 < v24 ) /*0x6b01bf*/
          {
            (*((unsigned int *)this + 9))->isVoiceOverride = 1; /*0x6b01c4*/
            v25 = (*(int (**)(unsigned int))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 + 444))(*((unsigned int *)this + 9)); /*0x6b01d0*/
            TechnoClass::SetFocus(*((unsigned int *)this + 9), v25); /*0x6b01da*/
            LOBYTE(v2) = (*(int (**)(unsigned int, int, unsigned int))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 + 488))( /*0x6b01e8*/
                           *((unsigned int *)this + 9),
                           19,
                           0);
            *((unsigned int *)this + 23) = (TechnoClass *)6; /*0x6b01ee*/
            *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6b01f5*/
          }
        }
        if ( *((unsigned int *)this + 23) != (TechnoClass *)6 ) /*0x6b0200*/
          LOBYTE(v2) = FactoryClass::PlaceExitUnits(this); /*0x6b0204*/
      }
      break; /*0x6b0061*/
    case 6u:
      v2 = (SlaveManagerClass *)(*(int (**)(unsigned int))(*(unsigned int *)(*((unsigned int *)this + 9))->__pad_0 + 44))(*((unsigned int *)this + 9)); /*0x6b0214*/
      if ( v2 == (SlaveManagerClass *)1 ) /*0x6b021a*/
      {
        LOBYTE(v2) = (unsigned __int8)Event_Process_6B0490(this); /*0x6b021e*/
LABEL_53:
        *((unsigned int *)this + 23) = (TechnoClass *)1; /*0x6b0223*/
        *((unsigned int *)this + 24) = (TechnoClass *)0x7FFFFFFF; /*0x6b022a*/
      }
      break; /*0x6b022a*/
    default:
      return (char)v2;
  }
  return (char)v2; /*0x6afdbb*/

}
} // namespace ra2

// 0x6A04C0
namespace gamemd {
char E4Recv_6A04C0::sub_6A04C0(IUnknown * aP1)
{

  int v2; // eax
  int *v4; // edi
  TechnoClass *v5; // eax
  IUnknown *v6; // eax
  unsigned int *v7; // eax
  AbstractClass *v9; // [esp-4h] [ebp-10h]

  v2 = MEMORY[0xB077F8].field_0; /*0x6a04c1*/
  v4 = (int *)((char *)this + 64); /*0x6a04cd*/
  if ( *((unsigned int *)this + 16) != MEMORY[0xB077F8].field_0 /*0x6a04ec*/
    || *((unsigned int *)this + 17) != MEMORY[0xB077F8].field_4
    || *((unsigned int *)this + 18) != MEMORY[0xB077F8].field_8 )
  {
    *v4 = MEMORY[0xB077F8].field_0; /*0x6a04f0*/
    *((unsigned int *)this + 17) = MEMORY[0xB077F8].field_4; /*0x6a04f8*/
    v5 = (TechnoClass *)MEMORY[0xB077F8].field_8; /*0x6a04fb*/
    *((unsigned char *)this + 99) = 0; /*0x6a0500*/
    *((unsigned int *)this + 18) = v5; /*0x6a0504*/
    v2 = MEMORY[0xB077F8].field_0; /*0x6a0507*/
  }
  if ( aP1->field_0 != v2 || aP1->field_4 != MEMORY[0xB077F8].field_4 || aP1->field_8 != MEMORY[0xB077F8].field_8 ) /*0x6a052d*/
  {
    *v4 = aP1->field_0; /*0x6a0535*/
    *((unsigned int *)this + 17) = aP1->field_4; /*0x6a053a*/
    v6 = (IUnknown *)aP1->field_8; /*0x6a053d*/
    *((unsigned char *)this + 99) = 1; /*0x6a0540*/
    *((unsigned int *)this + 18) = v6; /*0x6a0544*/
    v9 = *(AbstractClass **)((char *)this + 12); /*0x6a054a*/
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], aP1); /*0x6a0551*/
    if ( CrateClass::ProcessPickup(v7, v9) && !*(unsigned char *)(*((unsigned int *)this + 3) + 129) ) /*0x6a0564*/
    {
      WalkLocomotion::MoveTo(this, aP1, 1); /*0x6a0573*/
      return 1; /*0x6a057d*/
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 3) + 144) ) /*0x6a0583*/
    {
      *v4 = MEMORY[0xB077F8].field_0; /*0x6a0593*/
      *((unsigned int *)this + 17) = MEMORY[0xB077F8].field_4; /*0x6a059b*/
      *((unsigned int *)this + 18) = MEMORY[0xB077F8].field_8; /*0x6a05a3*/
      *((unsigned char *)this + 99) = 0; /*0x6a05a6*/
    }
  }
  return 0; /*0x6a0578*/

}
} // namespace gamemd

// 0x6A3DA0
namespace gamemd {
void nullsub_230()
{
  ; /*0x6a3da0*/
}
} // namespace gamemd

// 0x6A4360
namespace gamemd {
void sub_6A4360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a436c*/
  dbl_B07850 = Math::Sqrt(v0 + v0); /*0x6a437e*/
}
} // namespace gamemd

// 0x6A4390
namespace gamemd {
void sub_6A4390()
{
  dbl_B078A0 = dbl_B07850 / 60.0; /*0x6a439c*/
}
} // namespace gamemd

// 0x6A43B0
namespace gamemd {
void sub_6A43B0()
{
  dbl_B07888 = 1.0 / dbl_B078A0; /*0x6a43bc*/
}
} // namespace gamemd

// 0x6A43D0
namespace gamemd {
void sub_6A43D0()
{
  dbl_B07880 = 0.0174532925199433 * 45.0; /*0x6a43dc*/
}
} // namespace gamemd

// 0x6A43F0
namespace gamemd {
void sub_6A43F0()
{
  dbl_B07858 = 0.0174532925199433 * 60.0; /*0x6a43fc*/
}
} // namespace gamemd

// 0x6A4410
namespace gamemd {
void sub_6A4410()
{
  dbl_B07840 = 0.0174532925199433 * 90.0; /*0x6a441c*/
}
} // namespace gamemd

// 0x6A4430
namespace gamemd {
long long sub_6A4430()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B07840 - dbl_B07858); /*0x6a4442*/
  result = Math::RoundToInt(v0 * dbl_B07850 * 0.5); /*0x6a4456*/
  dword_B078A8 = result; /*0x6a445b*/
  return result; /*0x6a4460*/
}
} // namespace gamemd

// 0x6A4470
namespace gamemd {
void sub_6A4470()
{
  dbl_B07860 = Math::ArcTan((double)dword_B078A8 * 0.00390625); /*0x6a4487*/
}
} // namespace gamemd

// 0x6A44A0
namespace gamemd {
void sub_6A44A0()
{
  dbl_B07878 = Math::ArcTan((double)(2 * dword_B078A8) / dbl_B07850); /*0x6a44c2*/
}
} // namespace gamemd

// 0x6A44D0
namespace gamemd {
long long sub_6A44D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B078A8) + 0.5); /*0x6a44eb*/
  dword_B0789C = result; /*0x6a44f0*/
  return result; /*0x6a44f6*/
}
} // namespace gamemd

// 0x6A4500
namespace gamemd {
int sub_6A4500()
{
  word_B07848 = 0; /*0x6a4502*/
  word_B0784A = 0; /*0x6a4508*/
  return 0; /*0x6a450e*/
}
} // namespace gamemd

// 0x6A4510
namespace gamemd {
int sub_6A4510()
{
  dword_B07868 = 0; /*0x6a4512*/
  dword_B0786C = 0; /*0x6a4517*/
  dword_B07870 = 0; /*0x6a451c*/
  return 0; /*0x6a4521*/
}
} // namespace gamemd

// 0x6A4530
namespace gamemd {
int sub_6A4530()
{
  dword_B07898 = 0; /*0x6a4535*/
  dword_B07890 = 128; /*0x6a453f*/
  dword_B07894 = 128; /*0x6a4544*/
  return 128; /*0x6a4549*/
}
} // namespace gamemd

// 0x6A4A00
namespace gamemd {
int sub_6A4A00()
{
  dword_B07DC8 = 0; /*0x6a4a02*/
  dword_B07DCC = 0; /*0x6a4a07*/
  dword_B07DD0 = 0; /*0x6a4a0c*/
  dword_B07DD4 = 0; /*0x6a4a11*/
  return 0; /*0x6a4a16*/
}
} // namespace gamemd

// 0x6A4A20
namespace gamemd {
void sub_6A4A20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a4a2c*/
  dbl_B07DE0 = Math::Sqrt(v0 + v0); /*0x6a4a3e*/
}
} // namespace gamemd

// 0x6A4A50
namespace gamemd {
void sub_6A4A50()
{
  dbl_B0B398 = dbl_B07DE0 / 60.0; /*0x6a4a5c*/
}
} // namespace gamemd

// 0x6A4A70
namespace gamemd {
void sub_6A4A70()
{
  dbl_B0B320 = 1.0 / dbl_B0B398; /*0x6a4a7c*/
}
} // namespace gamemd

// 0x6A4A90
namespace gamemd {
void sub_6A4A90()
{
  dbl_B0B318 = 0.0174532925199433 * 45.0; /*0x6a4a9c*/
}
} // namespace gamemd

// 0x6A4AB0
namespace gamemd {
void sub_6A4AB0()
{
  dbl_B07DE8 = 0.0174532925199433 * 60.0; /*0x6a4abc*/
}
} // namespace gamemd

// 0x6A4AD0
namespace gamemd {
void sub_6A4AD0()
{
  dbl_B07BB8 = 0.0174532925199433 * 90.0; /*0x6a4adc*/
}
} // namespace gamemd

// 0x6A4AF0
namespace gamemd {
long long sub_6A4AF0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B07BB8 - dbl_B07DE8); /*0x6a4b02*/
  result = Math::RoundToInt(v0 * dbl_B07DE0 * 0.5); /*0x6a4b16*/
  dword_B0B400 = result; /*0x6a4b1b*/
  return result; /*0x6a4b20*/
}
} // namespace gamemd

// 0x6A4B30
namespace gamemd {
void sub_6A4B30()
{
  dbl_B07DF0 = Math::ArcTan((double)dword_B0B400 * 0.00390625); /*0x6a4b47*/
}
} // namespace gamemd

// 0x6A4B60
namespace gamemd {
void sub_6A4B60()
{
  dbl_B0B310 = Math::ArcTan((double)(2 * dword_B0B400) / dbl_B07DE0); /*0x6a4b82*/
}
} // namespace gamemd

// 0x6A4B90
namespace gamemd {
long long sub_6A4B90()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B400) + 0.5); /*0x6a4bab*/
  dword_B0B394 = result; /*0x6a4bb0*/
  return result; /*0x6a4bb6*/
}
} // namespace gamemd

// 0x6A4BC0
namespace gamemd {
int sub_6A4BC0()
{
  word_B07DD8 = 0; /*0x6a4bc2*/
  word_B07DDA = 0; /*0x6a4bc8*/
  return 0; /*0x6a4bce*/
}
} // namespace gamemd

// 0x6A4BD0
namespace gamemd {
int sub_6A4BD0()
{
  dword_B0B300 = 0; /*0x6a4bd2*/
  dword_B0B304 = 0; /*0x6a4bd7*/
  dword_B0B308 = 0; /*0x6a4bdc*/
  return 0; /*0x6a4be1*/
}
} // namespace gamemd

// 0x6A4BF0
namespace gamemd {
int sub_6A4BF0()
{
  dword_B0B390 = 0; /*0x6a4bf5*/
  dword_B0B388 = 128; /*0x6a4bff*/
  dword_B0B38C = 128; /*0x6a4c04*/
  return 128; /*0x6a4c09*/
}
} // namespace gamemd

// 0x6A4C10
namespace gamemd {
int sub_6A4C10()
{
  GadgetClass::Construct(&stru_B07E58, 0, 0, 1, 1, 8, 0); /*0x6a4c21*/
  stru_B07E58 = (int)&SidebarClass_SBGadgetClass_vftable; /*0x6a4c2b*/
  return atexit(sub_6A4C40); /*0x6a4c3b*/
}
} // namespace gamemd

// 0x6A4C40
namespace gamemd {
void sub_6A4C40()
{
  if ( (byte_B07BB0 & 1) == 0 ) /*0x6a4c4a*/
  {
    byte_B07BB0 |= 1u; /*0x6a4c4e*/
    GadgetClass::Dtor(&stru_B07E58); /*0x6a4c59*/
  }
}
} // namespace gamemd

// 0x6A4C60
namespace gamemd {
int sub_6A4C60()
{
  ShapeButtonClass::Init(stru_B07DF8); /*0x6a4c65*/
  return atexit(sub_6A4C80); /*0x6a4c75*/
}
} // namespace gamemd

// 0x6A4C80
namespace gamemd {
void sub_6A4C80()
{
  if ( (byte_B07BB1 & 1) == 0 ) /*0x6a4c8a*/
  {
    byte_B07BB1 |= 1u; /*0x6a4c8e*/
    ShapeButtonClass::Destructor((int)stru_B07DF8); /*0x6a4c99*/
  }
}
} // namespace gamemd

// 0x6A4CA0
namespace gamemd {
int sub_6A4CA0()
{
  ShapeButtonClass::Init(stru_B0B3A0); /*0x6a4ca5*/
  return atexit(sub_6A4CC0); /*0x6a4cb5*/
}
} // namespace gamemd

// 0x6A4CC0
namespace gamemd {
void sub_6A4CC0()
{
  if ( (byte_B07BB1 & 2) == 0 ) /*0x6a4cca*/
  {
    byte_B07BB1 |= 2u; /*0x6a4cce*/
    ShapeButtonClass::Destructor((int)stru_B0B3A0); /*0x6a4cd9*/
  }
}
} // namespace gamemd

// 0x6A4CE0
namespace gamemd {
int sub_6A4CE0()
{
  unsigned char *v0; // esi
  int v1; // edi

  v0 = &stru_B07C48; /*0x6a4ce2*/
  v1 = 4; /*0x6a4ce7*/
  do /*0x6a4cf7*/
  {
    ShapeButtonClass::Init(v0); /*0x6a4cee*/
    v0 += 96; /*0x6a4cf3*/
    --v1; /*0x6a4cf6*/
  }
  while ( v1 ); /*0x6a4cf7*/
  return atexit(sub_6A4D10); /*0x6a4d06*/
}
} // namespace gamemd

// 0x6A4D10
namespace gamemd {
void sub_6A4D10()
{
  int *v0; // esi
  int v1; // edi

  if ( (byte_B07BB1 & 4) == 0 ) /*0x6a4d1d*/
  {
    byte_B07BB1 |= 4u; /*0x6a4d23*/
    v0 = &dword_B07DC8; /*0x6a4d29*/
    v1 = 4; /*0x6a4d2e*/
    do /*0x6a4d3b*/
    {
      v0 -= 24; /*0x6a4d30*/
      ShapeButtonClass::Destructor((int)v0); /*0x6a4d35*/
      --v1; /*0x6a4d3a*/
    }
    while ( v1 ); /*0x6a4d3b*/
  }
}
} // namespace gamemd

// 0x6A4D40
namespace gamemd {
int sub_6A4D40()
{
  ShapeButtonClass::Init(stru_B0B328); /*0x6a4d45*/
  return atexit(sub_6A4D60); /*0x6a4d55*/
}
} // namespace gamemd

// 0x6A4D60
namespace gamemd {
void sub_6A4D60()
{
  if ( (byte_B07BB1 & 8) == 0 ) /*0x6a4d6a*/
  {
    byte_B07BB1 |= 8u; /*0x6a4d6e*/
    ShapeButtonClass::Destructor((int)stru_B0B328); /*0x6a4d79*/
  }
}
} // namespace gamemd

// 0x6A4D80
namespace gamemd {
int sub_6A4D80()
{
  ShapeButtonClass::Init(g_SidebarFlag); /*0x6a4d85*/
  return atexit(sub_6A4DA0); /*0x6a4d95*/
}
} // namespace gamemd

// 0x6A4DA0
namespace gamemd {
void sub_6A4DA0()
{
  if ( (byte_B07BB1 & 0x10) == 0 ) /*0x6a4daa*/
  {
    byte_B07BB1 |= 0x10u; /*0x6a4dae*/
    ShapeButtonClass::Destructor((int)g_SidebarFlag); /*0x6a4db9*/
  }
}
} // namespace gamemd

// 0x6A4DC0
namespace gamemd {
int sub_6A4DC0()
{
  unsigned int *v0; // esi
  int v1; // ebx

  v0 = &stru_B07E80; /*0x6a4dc3*/
  v1 = 240; /*0x6a4dc8*/
  do /*0x6a4df0*/
  {
    ControlClass::Construct(v0, 0, 0, 0, 60, 48, 25, 0); /*0x6a4ddb*/
    v0[11] = 0; /*0x6a4de0*/
    v0[12] = 0; /*0x6a4de3*/
    *v0 = (void*)&SidebarClass_StripClass_SelectClass_vftable; /*0x6a4de6*/
    v0 += 14; /*0x6a4dec*/
    --v1; /*0x6a4def*/
  }
  while ( v1 ); /*0x6a4df0*/
  return atexit(sub_6A4E10); /*0x6a4dff*/
}
} // namespace gamemd

// 0x6A4E10
namespace gamemd {
void sub_6A4E10()
{
  int *v0; // esi
  int v1; // edi

  if ( (byte_B07BB1 & 0x20) == 0 ) /*0x6a4e1a*/
  {
    byte_B07BB1 |= 0x20u; /*0x6a4e20*/
    v0 = &dword_B0B300; /*0x6a4e26*/
    v1 = 240; /*0x6a4e2b*/
    do /*0x6a4e3b*/
    {
      v0 -= 14; /*0x6a4e30*/
      GadgetClass::Dtor(v0); /*0x6a4e35*/
      --v1; /*0x6a4e3a*/
    }
    while ( v1 ); /*0x6a4e3b*/
  }
}
} // namespace gamemd

// 0x6A4FF0
namespace gamemd {
void nullsub_36(IUnknown * aP0)
{
  ; /*0x6a4ff0*/
}
} // namespace gamemd

// 0x6AACE0
namespace gamemd {
int E4Recv_6AACE0::sub_6AACE0(int a2, int a3)
{

  *((unsigned int *)this + 11) = a2; /*0x6aace8*/
  *((unsigned int *)this + 12) = a3; /*0x6aaceb*/
  return a2; /*0x6aacee*/

}
} // namespace gamemd

// 0x6ABA60
namespace gamemd {
char E4Recv_6ABA60::sub_6ABA60(int a2, int a3, int a4)
{

  int v4; // esi
  int v5; // eax
  unsigned int *i; // edx

  v4 = *((unsigned int *)this + 21); /*0x6aba62*/
  v5 = 0; /*0x6aba65*/
  if ( v4 <= 0 ) /*0x6aba6a*/
    return 0; /*0x6aba88*/
  for ( i = (unsigned int *)((char *)this + 88); i[1] != a3 || *i != a4; i += 13 ) /*0x6aba74*/
  {
    if ( ++v5 >= v4 ) /*0x6aba86*/
      return 0; /*0x6aba86*/
  }
  *(unsigned int *)((char *)this + 52 * v5 + 100) = a2; /*0x6aba9e*/
  *((unsigned char *)this + 61) = 1; /*0x6abaa2*/
  *((unsigned char *)this + 60) = 1; /*0x6abaa5*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6abaad*/
  return 1; /*0x6aba88*/

}
} // namespace gamemd

// 0x6ABCD0
namespace gamemd {
int sub_6ABCD0(int a1, int a2, int a3)
{
  switch ( a1 ) /*0x6abcd3*/
  {
    case 16: /*0x6abcd3*/
      return 2; /*0x6abcd5*/
    case 40: /*0x6abcd3*/
    case 3: /*0x6abcd3*/
      return 3; /*0x6abcfd*/
    case 7: /*0x6abcd3*/
      return a2 == 5; /*0x6abcf1*/
  }
  return -1; /*0x6abcda*/
}
} // namespace gamemd

// 0x6AC950
namespace gamemd {
int sub_6AC950()
{
  dword_B0B528 = 0; /*0x6ac952*/
  dword_B0B52C = 0; /*0x6ac957*/
  dword_B0B530 = 0; /*0x6ac95c*/
  dword_B0B534 = 0; /*0x6ac961*/
  return 0; /*0x6ac966*/
}
} // namespace gamemd

// 0x6AC970
namespace gamemd {
void sub_6AC970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ac97c*/
  dbl_B0B540 = Math::Sqrt(v0 + v0); /*0x6ac98e*/
}
} // namespace gamemd

// 0x6AC9A0
namespace gamemd {
void sub_6AC9A0()
{
  dbl_B0B590 = dbl_B0B540 / 60.0; /*0x6ac9ac*/
}
} // namespace gamemd

// 0x6AC9C0
namespace gamemd {
void sub_6AC9C0()
{
  dbl_B0B578 = 1.0 / dbl_B0B590; /*0x6ac9cc*/
}
} // namespace gamemd

// 0x6AC9E0
namespace gamemd {
void sub_6AC9E0()
{
  dbl_B0B570 = 0.0174532925199433 * 45.0; /*0x6ac9ec*/
}
} // namespace gamemd

// 0x6ACA00
namespace gamemd {
void sub_6ACA00()
{
  dbl_B0B548 = 0.0174532925199433 * 60.0; /*0x6aca0c*/
}
} // namespace gamemd

// 0x6ACA20
namespace gamemd {
void sub_6ACA20()
{
  dbl_B0B520 = 0.0174532925199433 * 90.0; /*0x6aca2c*/
}
} // namespace gamemd

// 0x6ACA40
namespace gamemd {
long long sub_6ACA40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B520 - dbl_B0B548); /*0x6aca52*/
  result = Math::RoundToInt(v0 * dbl_B0B540 * 0.5); /*0x6aca66*/
  dword_B0B598 = result; /*0x6aca6b*/
  return result; /*0x6aca70*/
}
} // namespace gamemd

// 0x6ACA80
namespace gamemd {
void sub_6ACA80()
{
  dbl_B0B550 = Math::ArcTan((double)dword_B0B598 * 0.00390625); /*0x6aca97*/
}
} // namespace gamemd

// 0x6ACAB0
namespace gamemd {
void sub_6ACAB0()
{
  dbl_B0B568 = Math::ArcTan((double)(2 * dword_B0B598) / dbl_B0B540); /*0x6acad2*/
}
} // namespace gamemd

// 0x6ACAE0
namespace gamemd {
long long sub_6ACAE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B598) + 0.5); /*0x6acafb*/
  dword_B0B58C = result; /*0x6acb00*/
  return result; /*0x6acb06*/
}
} // namespace gamemd

// 0x6ACB10
namespace gamemd {
int sub_6ACB10()
{
  word_B0B538 = 0; /*0x6acb12*/
  word_B0B53A = 0; /*0x6acb18*/
  return 0; /*0x6acb1e*/
}
} // namespace gamemd

// 0x6ACB20
namespace gamemd {
int sub_6ACB20()
{
  dword_B0B558 = 0; /*0x6acb22*/
  dword_B0B55C = 0; /*0x6acb27*/
  dword_B0B560 = 0; /*0x6acb2c*/
  return 0; /*0x6acb31*/
}
} // namespace gamemd

// 0x6ACB40
namespace gamemd {
int sub_6ACB40()
{
  dword_B0B588 = 0; /*0x6acb45*/
  dword_B0B580 = 128; /*0x6acb4f*/
  dword_B0B584 = 128; /*0x6acb54*/
  return 128; /*0x6acb59*/
}
} // namespace gamemd

// 0x6ACE80
namespace gamemd {
void sub_6ACE80(SessionClass * hDlg, int a2)
{
  int v3; // eax
  int v4; // ebx
  char *i; // esi
  int ResourceID4CSF; // edx

  if ( hDlg && dword_A8B23C ) /*0x6ace90*/
  {
    v3 = 1; /*0x6ace94*/
    v4 = 8; /*0x6ace99*/
    if ( a2 > 0 && a2 < 8 ) /*0x6acea2*/
    {
      v3 = a2; /*0x6acea4*/
      v4 = a2 + 1; /*0x6acea6*/
    }
    for ( i = (char *)v3; (int)i < v4; ++i ) /*0x6acead*/
    {
      ResourceID4CSF = GetResourceID4CSF(i); /*0x6aceb6*/
      if ( dword_A8B23C && *(unsigned char *)(dword_A8B23C + 60) ) /*0x6acec1*/
        SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, 3); /*0x6aceca*/
      else
        SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x6aced0*/
    }
  }
}
} // namespace gamemd

// 0x6AEF10
namespace gamemd {
void sub_6AEF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6aef1c*/
  dbl_B0B5C0 = Math::Sqrt(v0 + v0); /*0x6aef2e*/
}
} // namespace gamemd

// 0x6AEF40
namespace gamemd {
void sub_6AEF40()
{
  dbl_B0B628 = dbl_B0B5C0 / 60.0; /*0x6aef4c*/
}
} // namespace gamemd

// 0x6AEF60
namespace gamemd {
void sub_6AEF60()
{
  dbl_B0B610 = 1.0 / dbl_B0B628; /*0x6aef6c*/
}
} // namespace gamemd

// 0x6AEF80
namespace gamemd {
void sub_6AEF80()
{
  dbl_B0B608 = 0.0174532925199433 * 45.0; /*0x6aef8c*/
}
} // namespace gamemd

// 0x6AEFA0
namespace gamemd {
void sub_6AEFA0()
{
  dbl_B0B5C8 = 0.0174532925199433 * 60.0; /*0x6aefac*/
}
} // namespace gamemd

// 0x6AEFC0
namespace gamemd {
void sub_6AEFC0()
{
  dbl_B0B5A0 = 0.0174532925199433 * 90.0; /*0x6aefcc*/
}
} // namespace gamemd

// 0x6AEFE0
namespace gamemd {
long long sub_6AEFE0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B5A0 - dbl_B0B5C8); /*0x6aeff2*/
  result = Math::RoundToInt(v0 * dbl_B0B5C0 * 0.5); /*0x6af006*/
  dword_B0B630 = result; /*0x6af00b*/
  return result; /*0x6af010*/
}
} // namespace gamemd

// 0x6AF020
namespace gamemd {
void sub_6AF020()
{
  dbl_B0B5D0 = Math::ArcTan((double)dword_B0B630 * 0.00390625); /*0x6af037*/
}
} // namespace gamemd

// 0x6AF050
namespace gamemd {
void sub_6AF050()
{
  dbl_B0B5E8 = Math::ArcTan((double)(2 * dword_B0B630) / dbl_B0B5C0); /*0x6af072*/
}
} // namespace gamemd

// 0x6AF080
namespace gamemd {
long long sub_6AF080()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B630) + 0.5); /*0x6af09b*/
  dword_B0B624 = result; /*0x6af0a0*/
  return result; /*0x6af0a6*/
}
} // namespace gamemd

// 0x6AF0B0
namespace gamemd {
int sub_6AF0B0()
{
  dword_B0B5B8 = 0; /*0x6af0b2*/
  return 0; /*0x6af0be*/
}
} // namespace gamemd

// 0x6AF0C0
namespace gamemd {
int sub_6AF0C0()
{
  dword_B0B5D8 = 0; /*0x6af0c2*/
  dword_B0B5DC = 0; /*0x6af0c7*/
  dword_B0B5E0 = 0; /*0x6af0cc*/
  return 0; /*0x6af0d1*/
}
} // namespace gamemd

// 0x6AF0E0
namespace gamemd {
int sub_6AF0E0()
{
  dword_B0B620 = 0; /*0x6af0e5*/
  dword_B0B618 = 128; /*0x6af0ef*/
  dword_B0B61C = 128; /*0x6af0f4*/
  return 128; /*0x6af0f9*/
}
} // namespace gamemd

// 0x6AF100
namespace gamemd {
int sub_6AF100()
{
  dword_B0B5A8 = 0; /*0x6af102*/
  dword_B0B5AC = 0; /*0x6af107*/
  dword_B0B5B0 = 0; /*0x6af10c*/
  dword_B0B5B4 = 0; /*0x6af111*/
  return 0; /*0x6af116*/
}
} // namespace gamemd

// 0x6AF120
namespace gamemd {
int sub_6AF120()
{
  dword_B0B5F4 = 0; /*0x6af127*/
  dword_B0B5F8 = 0; /*0x6af12c*/
  byte_B0B5FC = 1; /*0x6af131*/
  byte_B0B5FD = 0; /*0x6af138*/
  SlaveManagerClass_Array = (int)&DynamicVectorClass_SlaveManagerClass___vftable; /*0x6af13d*/
  dword_B0B604 = 10; /*0x6af147*/
  dword_B0B600 = 0; /*0x6af151*/
  return atexit(sub_6AF160); /*0x6af15c*/
}
} // namespace gamemd

// 0x6AF160
namespace gamemd {
void sub_6AF160()
{
  SlaveManagerClass_Array = (int)&VectorClass_SlaveManagerClass___vftable; /*0x6af168*/
  if ( dword_B0B5F4 && byte_B0B5FD ) /*0x6af17c*/
  {
    RA2_OPDEL(dword_B0B5F4); /*0x6af17f*/
    dword_B0B5F4 = 0; /*0x6af187*/
  }
  byte_B0B5FD = 0; /*0x6af18d*/
  dword_B0B5F8 = 0; /*0x6af193*/
}
} // namespace gamemd
