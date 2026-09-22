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

// 0x6A6AF0
namespace gamemd {
char E4Recv_6A6AF0::sub_6A6AF0(ObjectClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6A6AF0(_DWORD *this, ObjectClass *aP1, int a3)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v12; // [esp+0h] [ebp-8h]
  _DWORD *v14; // [esp+10h] [ebp+8h]

  v3 = a3; /*0x6a6af3*/
  if ( a3 == -1 ) /*0x6a6afe*/
    v3 = *(this + 5351); /*0x6a6b00*/
  v4 = this + 997 * v3 + 1361; /*0x6a6b19*/
  v5 = 26; /*0x6a6b20*/
  v14 = v4; /*0x6a6b25*/
  v6 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496); /*0x6a6b29*/
  if ( v6 ) /*0x6a6b31*/
    v5 = 18; /*0x6a6b33*/
  v12 = (*(_DWORD *)&stru_87C374.__pad_579C[21644] /*0x6a6b77*/
       - *(_DWORD *)&stru_B05488.__pad_579C[2260]
       - v5
       + *(_DWORD *)&stru_87C374.__pad_579C[21636]
       - 7)
      / 50;
  if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) ) /*0x6a6b7b*/
    v12 = 1; /*0x6a6b7d*/
  if ( !(_BYTE)aP1 ) /*0x6a6b8b*/
  {
    v9 = 26; /*0x6a6ba9*/
    if ( v6 ) /*0x6a6bae*/
      v9 = 18; /*0x6a6bb0*/
    v10 = *(_DWORD *)&stru_87C374.__pad_579C[21644] - *(_DWORD *)&stru_B05488.__pad_579C[2260] - v9; /*0x6a6bb5*/
    if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) ) /*0x6a6bd0*/
    {
      v7 = v14; /*0x6a6bdd*/
      if ( v14[17] + (v10 + *(_DWORD *)&stru_87C374.__pad_579C[21636] - 7) / 50 / 2 >= *(int *)&stru_87C374.__pad_579C[12776] ) /*0x6a6be8*/
        return 0; /*0x6a6be8*/
    }
    else
    {
      if ( 2 * ((v10 + *(_DWORD *)&stru_87C374.__pad_579C[21636] - 7) / 50 + v14[17]) >= v14[21] ) /*0x6a6bfc*/
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
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 56))(this, 0); /*0x6a6c14*/
    return 1; /*0x6a6c20*/
  }
  return 0; /*0x6a6c1d*/
}
}
} // namespace gamemd

// 0x6A74A0
namespace gamemd {
int E4Recv_6A74A0::sub_6A74A0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6A74A0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebp

  *(this + 5351) = a2; /*0x6a74b6*/
  GadgetClass::Show((_BYTE *)&MEMORY[0xB07C48] + 96 * a2); /*0x6a74bc*/
  v3 = (int)(this + 997 * *(this + 5351) + 1361); /*0x6a74d4*/
  *((_BYTE *)this + 3988 * *(this + 5351) + 5472) = 1; /*0x6a74db*/
  v4 = 26; /*0x6a74ed*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a74e5*/
    v4 = 18; /*0x6a74f4*/
  v5 = 0; /*0x6a7507*/
  v6 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v4 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7527*/
  if ( v6 > 0 ) /*0x6a752b*/
  {
    do /*0x6a7570*/
    {
      Hash::Reset((_DWORD *)(56 * (v5 + 60 * *(_DWORD *)(v3 + 56)) + 11566720)); /*0x6a7545*/
      Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v5 + 60 * *(_DWORD *)(v3 + 56)) + 11566720); /*0x6a7568*/
      ++v5; /*0x6a756d*/
    }
    while ( v5 < v6 ); /*0x6a7570*/
  }
  g_CameoRenderFlag = 1; /*0x6a7574*/
  return Tactical::UpdateUIVisibility(this); /*0x6a7580*/
}
}
} // namespace gamemd

// 0x6A87F0
namespace gamemd {
char E4Recv_6A87F0::sub_6A87F0(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6A87F0(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // eax

  v4 = this->M84; /*0x6a87f5*/
  if ( v4 > 75 ) /*0x6a87fb*/
    return 0; /*0x6a8857*/
  v5 = 0; /*0x6a8805*/
  if ( v4 > 0 ) /*0x6a8809*/
  {
    v6 = (_DWORD *)(this + 88); /*0x6a880b*/
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
  if ( !g_IKnowWhatImDoing && a2 != 31 ) /*0x6a882b*/
    VoxClass::FindAndPlay(MEMORY[0x83FA64], -1); /*0x6a8837*/
  TabCameoListClass::AddCameo_ReplaceItAll((int *)this, a2, a3); /*0x6a8840*/
  *(_BYTE *)(this + 60) = 1; /*0x6a8848*/
  g_CameoRenderFlag = 1; /*0x6a884c*/
  return 1; /*0x6a8847*/
}
}
} // namespace gamemd

// 0x6A89E0
namespace gamemd {
char E4Recv_6A89E0::sub_6A89E0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6A89E0(_DWORD *this, char a2)
{
  int v2; // eax
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // kr04_4
  _DWORD *v8; // eax
  int v10; // [esp+4h] [ebp-4h]

  v10 = *((_DWORD *)g_ScenarioClass_Instance + 3374); /*0x6a89f2*/
  v2 = 26; /*0x6a89f8*/
  if ( v10 ) /*0x6a89fd*/
    v2 = 18; /*0x6a89ff*/
  v3 = (g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a8a43*/
  if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a8a45*/
    v3 = 1; /*0x6a8a47*/
  if ( a2 ) /*0x6a8a52*/
  {
    if ( *(this + 17) ) /*0x6a8a58*/
    {
      *(this + 18) -= v3; /*0x6a8a72*/
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
    v6 = (g_DSurface_ViewBounds - g_SidebarBounds - v5 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a8aaa*/
    if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a8aac*/
    {
      v7 = v6; /*0x6a8ab7*/
      v8 = this; /*0x6a8ab9*/
      if ( *(this + 17) + v7 / 2 >= MEMORY[0x884CF8] ) /*0x6a8ac4*/
        return 0; /*0x6a8acf*/
    }
    else
    {
      if ( 2 * (v6 + *(this + 17)) >= *(this + 21) ) /*0x6a8ae2*/
        return 0; /*0x6a8aed*/
      v8 = this; /*0x6a8af0*/
    }
    v8[18] += v3; /*0x6a8afb*/
    return 1; /*0x6a8aff*/
  }
}
}
} // namespace gamemd

// 0x6A93F0
namespace gamemd {
char E4Recv_6A93F0::sub_6A93F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6A93F0(int this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebp

  *(_BYTE *)(this + 28) = 1; /*0x6a93f8*/
  v2 = 26; /*0x6a9408*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a9400*/
    v2 = 18; /*0x6a940f*/
  v3 = 0; /*0x6a942f*/
  v4 = g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7; /*0x6a9431*/
  v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31; /*0x6a943c*/
  v6 = 2 * (v4 / 50); /*0x6a9443*/
  if ( v6 > 0 ) /*0x6a9447*/
  {
    do /*0x6a9494*/
    {
      Hash::Reset((_DWORD *)(56 * (v3 + 60 * this->M56) + 11566720)); /*0x6a9465*/
      LOBYTE(v5) = Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v3 + 60 * this->M56) + 11566720); /*0x6a948c*/
      ++v3; /*0x6a9491*/
    }
    while ( v3 < v6 ); /*0x6a9494*/
  }
  g_CameoRenderFlag = 1; /*0x6a9498*/
  return v5; /*0x6a9496*/
}
}
} // namespace gamemd

// 0x6ACBAE
namespace gamemd {
void __inc_tmpoff()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __inc_tmpoff()
{
  ++MEMORY[0x51D]; /*0x6acbae*/
}
}
} // namespace gamemd

// 0x6ADC20
namespace gamemd {
BOOL SetupSkirmishSpawnLocationEntry(SessionClass * hDlg, int nIDDlgItem)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall SetupSkirmishSpawnLocationEntry(SessionClass *hDlg, int nIDDlgItem)
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
  unsigned __int8 v20; // [esp+18h] [ebp-8h]
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
      LOBYTE(v5) = v5 & 0xF9; /*0x6adc8d*/
      v4 = v5 + 6; /*0x6adc8f*/
      break;
  }
  v6 = v4 + 1; /*0x6adc92*/
  ResourceIDCSF = GetResourceIDCSF((void *)(v4 + 1)); /*0x6adc9c*/
  v19 = ResourceIDCSF; /*0x6adca0*/
  nIDDlgItema = GetResourceID2CSF((void *)v6); /*0x6adcab*/
  hWnd = (HWND)GetResourceID3CSF((void *)v6); /*0x6adcb6*/
  ResourceID4CSF = (HWND)GetResourceID4CSF((void *)v6); /*0x6adcc1*/
  if ( hDlg && *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x6adcce*/
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
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] /*0x6adcfe*/
        && *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8072] + 60) )
      {
        SetupLobbyPlayerSlots(hDlg, v11, 3); /*0x6add07*/
      }
      else
      {
        SetupLobbyPlayerSlots(hDlg, v11, -2); /*0x6add0f*/
      }
    }
    ResourceIDCSF = v19; /*0x6add19*/
  }
  v12 = SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x6add2e*/
  if ( (unsigned int)SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x150u, v12, 0) <= 2 ) /*0x6add3e*/
  {
    v20 = 1; /*0x6addde*/
  }
  else
  {
    v20 = 0; /*0x6add5c*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, -2); /*0x6add61*/
    SetupLobbyCountryCombo((SkirmishDialog *)hDlg, nIDDlgItema, -2); /*0x6add6e*/
    SetupLobbyFactionSlots(hDlg, (int)hWnd, -2); /*0x6add7b*/
  }
  DlgItem = GetDlgItem((HWND)hDlg, ResourceIDCSF); /*0x6add8a*/
  v14 = GetDlgItem((HWND)hDlg, nIDDlgItema); /*0x6add94*/
  hWnda = GetDlgItem((HWND)hDlg, (int)hWnd); /*0x6adda2*/
  v22 = GetDlgItem((HWND)hDlg, (int)ResourceID4CSF); /*0x6addb4*/
  EnableWindow(DlgItem, v20); /*0x6addc0*/
  EnableWindow(v14, v20); /*0x6addc4*/
  EnableWindow(hWnda, v20); /*0x6addcc*/
  return EnableWindow(v22, v20); /*0x6addd6*/
}
}
} // namespace gamemd

// 0x6AE080
namespace gamemd {
void HideSkirmishSpawnLocations(HWND hDlg, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall HideSkirmishSpawnLocations(HWND hDlg, int a2)
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
} // namespace gamemd

// 0x6AE2C0
namespace gamemd {
int ShowSkirmishSetupScreen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __usercall Skirmish_Setup_Screen@<al>(int a1@<ebx>, int a2@<ebp>)
{
  int i; // esi
  HWND v3; // esi
  LONG j; // eax
  int v5; // ecx
  void *v6; // esi
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x6ae2ce*/
  RulesClass::LoadCountries(MEMORY[0x887048]); /*0x6ae2d6*/
  RulesClass::ReadDataList(MEMORY[0x887048]); /*0x6ae2e8*/
  for ( i = 0; i < g_SuperWeaponTypeArray; ++i ) /*0x6ae2f6*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_SuperWeaponTypeCount + i) + 100))( /*0x6ae30a*/
      *((_DWORD *)g_SuperWeaponTypeCount + i),
      MEMORY[0x887048]);
  LoadingScreen::Init(); /*0x6ae317*/
  v3 = (HWND)CreateDialog(0x102u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Skirmish::Setup_DlgProc, 0); /*0x6ae32d*/
  if ( v3 ) /*0x6ae331*/
  {
    MEMORY[0xB0B59C] = v3; /*0x6ae337*/
    SetWindowLongA(v3, 8, (LONG)&dwNewLong); /*0x6ae341*/
    Dialog::Show(v3); /*0x6ae349*/
    for ( j = dwNewLong; dwNewLong != 1559; j = dwNewLong ) /*0x6ae357*/
    {
      if ( j == 1472 ) /*0x6ae35e*/
        break; /*0x6ae35e*/
      if ( Dialog::PumpMessages() == 1 ) /*0x6ae367*/
        break; /*0x6ae367*/
      LOBYTE(v5) = 0; /*0x6ae369*/
      ScreenSaver::Process(v5); /*0x6ae36b*/
    }
    Dialog::Destroy(v3); /*0x6ae37d*/
    MEMORY[0xB0B59C] = 0; /*0x6ae382*/
  }
  v6 = MEMORY[0xAC1154]; /*0x6ae38c*/
  if ( MEMORY[0xAC1154] ) /*0x6ae394*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x6ae398*/
    __3_YAXPAX_Z(v6); /*0x6ae39e*/
    MEMORY[0xAC1154] = 0; /*0x6ae3a6*/
  }
  CleanupFileTree(); /*0x6ae3b0*/
  SaveConfigWOL(&g_GameMode_Current); /*0x6ae3ba*/
  if ( dwNewLong == 1472 ) /*0x6ae3c9*/
    Screen::Capture(1, 0, a1, a2); /*0x6ae3cf*/
  return dwNewLong == 1559; /*0x6ae3e0*/
}
}
} // namespace gamemd

// 0x6AFD60
namespace ra2 {
namespace game {
char TechnoClass::ProcessDeployAction()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ProcessDeployAction(TechnoClass **this)
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
  _BYTE v33[8]; // [esp+44h] [ebp-10h] BYREF
  SlaveManagerClass *v34; // [esp+4Ch] [ebp-8h]

  v2 = (SlaveManagerClass *)this->q017; /*0x6afd67*/
  switch ( (unsigned int)v2 )
  {
    case 0u:
      v3 = this->objectTypeFlags; /*0x6afd7a*/
      if ( v3 ) /*0x6afd7f*/
      {
        v2 = (SlaveManagerClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3->__pad_0 + 44))(this->objectTypeFlags); /*0x6afd89*/
        if ( v2 == (SlaveManagerClass *)6 ) /*0x6afd8f*/
        {
          currentMission = v3->currentMission; /*0x6afd95*/
          if ( currentMission != 19 && currentMission != 18 ) /*0x6afda7*/
          {
            this->q017 = (TechnoClass *)5; /*0x6afdad*/
            this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6afdb4*/
          }
        }
      }
      break; /*0x6afdc0*/
    case 1u:
      v5 = this->objectTypeFlags; /*0x6afdc1*/
      if ( v5 /*0x6afddc*/
        && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5->__pad_0 + 44))(this->objectTypeFlags) == 1
        && (v2 = *(SlaveManagerClass **)&v5[1].hasParachute) != 0 )
      {
        this->q017 = (TechnoClass *)2; /*0x6afdde*/
        this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6afde5*/
      }
      else
      {
        v2 = *(SlaveManagerClass **)(*(int (__thiscall **)(_DWORD, int *, int, int))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 /*0x6afe1c*/
                                                                                   + 824))(
                                      this->objectTypeFlags,
                                      &v29,
                                      *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6024) / 256,
                                      1);
        *(_DWORD *)v28 = v2; /*0x6afe25*/
        v27 = v2; /*0x6afe29*/
        if ( (_WORD)v2 == *(_WORD *)&g_OverlayTypeConfig.__pad_14B0[10512] /*0x6afe57*/
          && v28[1] == *(_WORD *)&g_OverlayTypeConfig.__pad_14B0[10514]
          || (v2 = (SlaveManagerClass *)*BuildingClass::FindPlacementCells2(this, (SlaveManagerClass *)&v30, v2),
              v27 = v2,
              v2 == *(SlaveManagerClass **)&g_OverlayTypeConfig.__pad_14B0[10512]) )
        {
          this->q017 = 0; /*0x6afe67*/
          this->nextArrayIndex = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6afe74*/
        }
        else
        {
          v6 = *(_DWORD *)(this->objectTypeFlags)->__pad_0; /*0x6afe87*/
          v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v27); /*0x6afe8e*/
          (*(void (__thiscall **)(_DWORD, void *, int))(v6 + 1152))(this->objectTypeFlags, v7, 1); /*0x6afe97*/
          LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 + 488))( /*0x6afea6*/
                         this->objectTypeFlags,
                         2,
                         0);
          this->q017 = (TechnoClass *)2; /*0x6afeac*/
          this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6afeb3*/
        }
      }
      break; /*0x6afdf1*/
    case 2u:
      v8 = this->objectTypeFlags; /*0x6afec0*/
      if ( v8 /*0x6afed1*/
        && (v2 = (SlaveManagerClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8->__pad_0 + 44))(this->objectTypeFlags),
            v2 == (SlaveManagerClass *)1) )
      {
        v2 = *(SlaveManagerClass **)&v8[1].hasParachute; /*0x6afee9*/
        if ( !v2 ) /*0x6afef1*/
        {
          LOBYTE(v2) = TechnoClass::Deploy((int *)v8->__pad_0); /*0x6afef9*/
          if ( (_BYTE)v2 ) /*0x6aff00*/
          {
            this->q017 = (TechnoClass *)4; /*0x6aff02*/
            this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6aff09*/
          }
          else
          {
            v9 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff16*/
            this->q017 = (TechnoClass *)3; /*0x6aff23*/
            this->abstractFlags = (TechnoClass *)v9; /*0x6aff2a*/
            v2 = v34; /*0x6aff2c*/
            this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6aff30*/
            this->q054 = (TechnoClass *)v2; /*0x6aff38*/
            this->q058 = (TechnoClass *)30; /*0x6aff3c*/
          }
        }
      }
      else
      {
        this->q017 = 0; /*0x6afed3*/
        this->nextArrayIndex = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6afee0*/
      }
      break; /*0x6afee8*/
    case 3u:
      v10 = this->objectTypeFlags; /*0x6aff43*/
      if ( v10 && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10->__pad_0 + 44))(this->objectTypeFlags) == 1 ) /*0x6aff54*/
      {
        LOBYTE(v2) = TechnoClass::Deploy((int *)v10->__pad_0); /*0x6aff6d*/
        if ( !(_BYTE)v2 ) /*0x6aff74*/
          goto LABEL_53; /*0x6aff74*/
        this->q017 = (TechnoClass *)4; /*0x6aff7a*/
        this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6aff81*/
      }
      else
      {
        this->q017 = 0; /*0x6aff56*/
        LOBYTE(v2) = MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff5d*/
        this->nextArrayIndex = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff62*/
      }
      break; /*0x6aff6a*/
    case 4u:
      v2 = (SlaveManagerClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 + 44))(this->objectTypeFlags); /*0x6aff93*/
      if ( v2 == (SlaveManagerClass *)6
        && ((v11 = this->objectTypeFlags) != 0
          ? (v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11->__pad_0 + 44))(this->objectTypeFlags) == 6
                ? (SlaveManagerClass *)v11
                : 0)
          : (v2 = 0),
            v2[13].NeedsSaveOrLink) )
      {
        this->q017 = (TechnoClass *)5; /*0x6affc2*/
        this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6affc9*/
      }
      else
      {
        v12 = this->objectTypeFlags; /*0x6affd6*/
        if ( v12 )
        {
          v2 = (SlaveManagerClass *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 44))(v12); /*0x6affe3*/
          if ( v2 == (SlaveManagerClass *)1 )
          {
            v13 = this->objectTypeFlags; /*0x6affef*/
            v2 = v13
               ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v13->__pad_0 + 44))(this->objectTypeFlags) == 1
                ? (SlaveManagerClass *)v13
                : 0)
               : 0;
            if ( !v2[16].__pad_48[4] && (this->objectTypeFlags)->currentMission == 5 ) /*0x6b0022*/
            {
              this->q017 = (TechnoClass *)2; /*0x6b0028*/
              this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6b002f*/
            }
          }
        }
      }
      break; /*0x6affd5*/
    case 5u:
      v14 = this->objectTypeFlags; /*0x6b003c*/
      if ( v14 && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v14->__pad_0 + 44))(v14) == 1 ) /*0x6b004b*/
      {
        this->q017 = 0; /*0x6b004d*/
        LOBYTE(v2) = MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b0054*/
        this->nextArrayIndex = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b0059*/
      }
      else
      {
        v2 = *(SlaveManagerClass **)(*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 /*0x6b008d*/
                                                                                      + 824))(
                                      this->objectTypeFlags,
                                      &v29,
                                      *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6016) / 256,
                                      0);
        *(_DWORD *)v28 = v2; /*0x6b0096*/
        if ( (_WORD)v2 == *(_WORD *)&g_OverlayTypeConfig.__pad_14B0[10512] /*0x6b00ac*/
          && v28[1] == *(_WORD *)&g_OverlayTypeConfig.__pad_14B0[10514] )
        {
          v27 = *(SlaveManagerClass **)(*(int (__thiscall **)(_DWORD, int *, int, int))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 /*0x6b00e7*/
                                                                                      + 824))(
                                         this->objectTypeFlags,
                                         &v29,
                                         *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6024) / 256,
                                         1);
          *(_DWORD *)v28 = *BuildingClass::FindPlacementCells2(this, (SlaveManagerClass *)&v31, v27); /*0x6b0100*/
          v15 = CellStruct::Sub(v28, (IUnknown *)&v32, (IUnknown *)&v27); /*0x6b0104*/
          v16 = SHIWORD(v15->field_0); /*0x6b0109*/
          v29 = SLOWORD(v15->field_0); /*0x6b011b*/
          v17 = Math::Sqrt((double)v29 * (double)v29 + (double)v16 * (double)v16); /*0x6b0134*/
          v18 = Math::RoundToInt(v17); /*0x6b0144*/
          v19 = (__int16 *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 + 440))( /*0x6b014d*/
                             this->objectTypeFlags,
                             v33);
          v20 = CellStruct::Sub(v19, (IUnknown *)&v32, (IUnknown *)&v27); /*0x6b015f*/
          v21 = SLOWORD(v20->field_0); /*0x6b0168*/
          v29 = SHIWORD(v20->field_0); /*0x6b016b*/
          v22 = (double)v29; /*0x6b0172*/
          v29 = v21; /*0x6b0176*/
          v23 = Math::Sqrt((double)v21 * (double)v21 + v22 * v22); /*0x6b018f*/
          v24 = Math::RoundToInt(v23); /*0x6b01b8*/
          v2 = (SlaveManagerClass *)(v18 + *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6028) / 256); /*0x6b01bb*/
          if ( (int)v2 < v24 ) /*0x6b01bf*/
          {
            (this->objectTypeFlags)->isVoiceOverride = 1; /*0x6b01c4*/
            v25 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 + 444))(this->objectTypeFlags); /*0x6b01d0*/
            TechnoClass::SetFocus(this->objectTypeFlags, v25); /*0x6b01da*/
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 + 488))( /*0x6b01e8*/
                           this->objectTypeFlags,
                           19,
                           0);
            this->q017 = (TechnoClass *)6; /*0x6b01ee*/
            this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6b01f5*/
          }
        }
        if ( this->q017 != (TechnoClass *)6 ) /*0x6b0200*/
          LOBYTE(v2) = FactoryClass::PlaceExitUnits(this); /*0x6b0204*/
      }
      break; /*0x6b0061*/
    case 6u:
      v2 = (SlaveManagerClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)(this->objectTypeFlags)->__pad_0 + 44))(this->objectTypeFlags); /*0x6b0214*/
      if ( v2 == (SlaveManagerClass *)1 ) /*0x6b021a*/
      {
        LOBYTE(v2) = (unsigned __int8)Event_Process_6B0490(this); /*0x6b021e*/
LABEL_53:
        this->q017 = (TechnoClass *)1; /*0x6b0223*/
        this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6b022a*/
      }
      break; /*0x6b022a*/
    default:
      return (char)v2;
  }
  return (char)v2; /*0x6afdbb*/
}
}
} // namespace game
} // namespace ra2

// 0x6A04C0
namespace gamemd {
char E4Recv_6A04C0::sub_6A04C0(IUnknown * aP1)
{
{
    int v2;
    int *v4;
    TechnoClass *v5;
    IUnknown *v6;
    int *v7;
    AbstractClass *v9;
    v2 = g_OverlayTypeConfig.field_0;
    v4 = (int *)(this + 64);
    if ( this->M64 != g_OverlayTypeConfig.field_0 || this->M68 != g_OverlayTypeConfig.field_4 || this->M72 != g_OverlayTypeConfig.field_8 )
  {
    *v4 = g_OverlayTypeConfig.field_0;
    this->M68 = g_OverlayTypeConfig.field_4;
    v5 = (TechnoClass *)g_OverlayTypeConfig.field_8;
    this->M99 = 0;
    this->M72 = v5;
    v2 = g_OverlayTypeConfig.field_0;
  }
    if ( aP1->field_0 != v2 || aP1->field_4 != g_OverlayTypeConfig.field_4 || aP1->field_8 != g_OverlayTypeConfig.field_8 )
  {
    *v4 = aP1->field_0;
    this->M68 = aP1->field_4;
    v6 = (IUnknown *)aP1->field_8;
    this->M99 = 1;
    this->M72 = v6;
    v9 = *(AbstractClass **)(this + 12);
    v7 = Coord::To_Cell(&DataGlobal_87F7E8, aP1);
    if ( CrateClass::ProcessPickup(v7, v9) && !*(char *)(this->M12 + 129) )
    {
    WalkLocomotion::MoveTo(this, aP1, 1);
    return 1;
    }
    if ( *(char *)(this->M12 + 144) )
    {
    *v4 = g_OverlayTypeConfig.field_0;
    this->M68 = g_OverlayTypeConfig.field_4;
    this->M72 = g_OverlayTypeConfig.field_8;
    this->M99 = 0;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6A3DA0
namespace gamemd {
void nullsub_230()
{
  ;
}
} // namespace gamemd

// 0x6A4360
namespace gamemd {
void sub_6A4360()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B07850 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6A4390
namespace gamemd {
void sub_6A4390()
{
{
    DataGlobal_B078A0 = DataGlobal_B07850 / 60.0;
}
}
} // namespace gamemd

// 0x6A43B0
namespace gamemd {
void sub_6A43B0()
{
{
    DataGlobal_B07888 = 1.0 / DataGlobal_B078A0;
}
}
} // namespace gamemd

// 0x6A43D0
namespace gamemd {
void sub_6A43D0()
{
{
    DataGlobal_B07880 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6A43F0
namespace gamemd {
void sub_6A43F0()
{
{
    DataGlobal_B07858 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6A4410
namespace gamemd {
void sub_6A4410()
{
{
    DataGlobal_B07840 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6A4430
namespace gamemd {
long long sub_6A4430()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B07840 - DataGlobal_B07858);
    result = Math::RoundToInt(v0 * DataGlobal_B07850 * 0.5);
    DataGlobal_B078A8 = result;
    return result;
}
}
} // namespace gamemd

// 0x6A4470
namespace gamemd {
void sub_6A4470()
{
{
    DataGlobal_B07860 = Math::ArcTan((double)DataGlobal_B078A8 * 0.00390625);
}
}
} // namespace gamemd

// 0x6A44A0
namespace gamemd {
void sub_6A44A0()
{
{
    DataGlobal_B07878 = Math::ArcTan((double)(2 * DataGlobal_B078A8) / DataGlobal_B07850);
}
}
} // namespace gamemd

// 0x6A44D0
namespace gamemd {
long long sub_6A44D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B078A8) + 0.5);
    DataGlobal_B0789C = result;
    return result;
}
}
} // namespace gamemd

// 0x6A4500
namespace gamemd {
int sub_6A4500()
{
{
    DataGlobal_B07848 = 0;
    DataGlobal_B0784A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6A4510
namespace gamemd {
int sub_6A4510()
{
{
    DataGlobal_B07868 = 0;
    DataGlobal_B0786C = 0;
    DataGlobal_B07870 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6A4530
namespace gamemd {
int sub_6A4530()
{
{
    DataGlobal_B07898 = 0;
    DataGlobal_B07890 = 128;
    DataGlobal_B07894 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6A4A00
namespace gamemd {
int sub_6A4A00()
{
{
    DataGlobal_B07DC8 = 0;
    DataGlobal_B07DCC = 0;
    DataGlobal_B07DD0 = 0;
    DataGlobal_B07DD4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6A4A20
namespace gamemd {
void sub_6A4A20()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B07DE0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6A4A50
namespace gamemd {
void sub_6A4A50()
{
{
    DataGlobal_B0B398 = DataGlobal_B07DE0 / 60.0;
}
}
} // namespace gamemd

// 0x6A4A70
namespace gamemd {
void sub_6A4A70()
{
{
    DataGlobal_B0B320 = 1.0 / DataGlobal_B0B398;
}
}
} // namespace gamemd

// 0x6A4A90
namespace gamemd {
void sub_6A4A90()
{
{
    DataGlobal_B0B318 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6A4AB0
namespace gamemd {
void sub_6A4AB0()
{
{
    DataGlobal_B07DE8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6A4AD0
namespace gamemd {
void sub_6A4AD0()
{
{
    DataGlobal_B07BB8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6A4AF0
namespace gamemd {
long long sub_6A4AF0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B07BB8 - DataGlobal_B07DE8);
    result = Math::RoundToInt(v0 * DataGlobal_B07DE0 * 0.5);
    DataGlobal_B0B400 = result;
    return result;
}
}
} // namespace gamemd

// 0x6A4B30
namespace gamemd {
void sub_6A4B30()
{
{
    DataGlobal_B07DF0 = Math::ArcTan((double)DataGlobal_B0B400 * 0.00390625);
}
}
} // namespace gamemd

// 0x6A4B60
namespace gamemd {
void sub_6A4B60()
{
{
    DataGlobal_B0B310 = Math::ArcTan((double)(2 * DataGlobal_B0B400) / DataGlobal_B07DE0);
}
}
} // namespace gamemd

// 0x6A4B90
namespace gamemd {
long long sub_6A4B90()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0B400) + 0.5);
    DataGlobal_B0B394 = result;
    return result;
}
}
} // namespace gamemd

// 0x6A4BC0
namespace gamemd {
int sub_6A4BC0()
{
{
    DataGlobal_B07DD8 = 0;
    DataGlobal_B07DDA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6A4BD0
namespace gamemd {
int sub_6A4BD0()
{
{
    DataGlobal_B0B300 = 0;
    DataGlobal_B0B304 = 0;
    DataGlobal_B0B308 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6A4BF0
namespace gamemd {
int sub_6A4BF0()
{
{
    DataGlobal_B0B390 = 0;
    DataGlobal_B0B388 = 128;
    DataGlobal_B0B38C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6A4C10
namespace gamemd {
int sub_6A4C10()
{
{
    GadgetClass::Construct(&DataGlobal_B07E58, 0, 0, 1, 1, 8, 0);
    DataGlobal_B07E58 = (int)&vt_SidebarClass_SBGadgetClass;
    return atexit(sub_6A4C40);
}
}
} // namespace gamemd

// 0x6A4C40
namespace gamemd {
void sub_6A4C40()
{
{
    if ( (DataGlobal_B07BB0 & 1) == 0 )
  {
    DataGlobal_B07BB0 |= 1u;
    GadgetClass::Dtor(&DataGlobal_B07E58);
  }
}
}
} // namespace gamemd

// 0x6A4C60
namespace gamemd {
int sub_6A4C60()
{
{
    ShapeButtonClass::Init(DataGlobal_B07DF8);
    return atexit(sub_6A4C80);
}
}
} // namespace gamemd

// 0x6A4C80
namespace gamemd {
void sub_6A4C80()
{
{
    if ( (DataGlobal_B07BB1 & 1) == 0 )
  {
    DataGlobal_B07BB1 |= 1u;
    ShapeButtonClass::Destructor((int)DataGlobal_B07DF8);
  }
}
}
} // namespace gamemd

// 0x6A4CA0
namespace gamemd {
int sub_6A4CA0()
{
{
    ShapeButtonClass::Init(DataGlobal_B0B3A0);
    return atexit(sub_6A4CC0);
}
}
} // namespace gamemd

// 0x6A4CC0
namespace gamemd {
void sub_6A4CC0()
{
{
    if ( (DataGlobal_B07BB1 & 2) == 0 )
  {
    DataGlobal_B07BB1 |= 2u;
    ShapeButtonClass::Destructor((int)DataGlobal_B0B3A0);
  }
}
}
} // namespace gamemd

// 0x6A4CE0
namespace gamemd {
int sub_6A4CE0()
{
{
    char *v0;
    int v1;
    v0 = &DataGlobal_B07C48;
    v1 = 4;
    do
  {
    ShapeButtonClass::Init(v0);
    v0 += 96;
    --v1;
  }
    while ( v1 );
    return atexit(sub_6A4D10);
}
}
} // namespace gamemd

// 0x6A4D10
namespace gamemd {
void sub_6A4D10()
{
{
    int *v0;
    int v1;
    if ( (DataGlobal_B07BB1 & 4) == 0 )
  {
    DataGlobal_B07BB1 |= 4u;
    v0 = &DataGlobal_B07DC8;
    v1 = 4;
    do
    {
    v0 -= 24;
    ShapeButtonClass::Destructor((int)v0);
    --v1;
    }
    while ( v1 );
  }
}
}
} // namespace gamemd

// 0x6A4D40
namespace gamemd {
int sub_6A4D40()
{
{
    ShapeButtonClass::Init(DataGlobal_B0B328);
    return atexit(sub_6A4D60);
}
}
} // namespace gamemd

// 0x6A4D60
namespace gamemd {
void sub_6A4D60()
{
{
    if ( (DataGlobal_B07BB1 & 8) == 0 )
  {
    DataGlobal_B07BB1 |= 8u;
    ShapeButtonClass::Destructor((int)DataGlobal_B0B328);
  }
}
}
} // namespace gamemd

// 0x6A4D80
namespace gamemd {
int sub_6A4D80()
{
{
    ShapeButtonClass::Init(g_SidebarFlag);
    return atexit(sub_6A4DA0);
}
}
} // namespace gamemd

// 0x6A4DA0
namespace gamemd {
void sub_6A4DA0()
{
{
    if ( (DataGlobal_B07BB1 & 0x10) == 0 )
  {
    DataGlobal_B07BB1 |= 0x10u;
    ShapeButtonClass::Destructor((int)g_SidebarFlag);
  }
}
}
} // namespace gamemd

// 0x6A4DC0
namespace gamemd {
int sub_6A4DC0()
{
{
    int *v0;
    int v1;
    v0 = &DataGlobal_B07E80;
    v1 = 240;
    do
  {
    ControlClass::Construct(v0, 0, 0, 0, 60, 48, 25, 0);
    v0[11] = 0;
    v0[12] = 0;
    *v0 = &vt_SidebarClass_StripClass_SelectClass;
    v0 += 14;
    --v1;
  }
    while ( v1 );
    return atexit(sub_6A4E10);
}
}
} // namespace gamemd

// 0x6A4E10
namespace gamemd {
void sub_6A4E10()
{
{
    int *v0;
    int v1;
    if ( (DataGlobal_B07BB1 & 0x20) == 0 )
  {
    DataGlobal_B07BB1 |= 0x20u;
    v0 = &DataGlobal_B0B300;
    v1 = 240;
    do
    {
    v0 -= 14;
    GadgetClass::Dtor(v0);
    --v1;
    }
    while ( v1 );
  }
}
}
} // namespace gamemd

// 0x6A4FF0
namespace gamemd {
void nullsub_36(IUnknown * aP0)
{
  ;
}
} // namespace gamemd

// 0x6AACE0
namespace gamemd {
int E4Recv_6AACE0::sub_6AACE0(int a2, int a3)
{
{
    this->M44 = a2;
    this->M48 = a3;
    return a2;
}
}
} // namespace gamemd

// 0x6ABA60
namespace gamemd {
char E4Recv_6ABA60::sub_6ABA60(int a2, int a3, int a4)
{
{
    int v4;
    int v5;
    int *i;
    v4 = this->M84;
    v5 = 0;
    if ( v4 <= 0 )
    return 0;
    for ( i = (int *)(this + 88); i[1] != a3 || *i != a4; i += 13 )
  {
    if ( ++v5 >= v4 )
    return 0;
  }
    *(int *)(this + 52 * v5 + 100) = a2;
    this->M61 = 1;
    this->M60 = 1;
    MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
    return 1;
}
}
} // namespace gamemd

// 0x6ABCD0
namespace gamemd {
int sub_6ABCD0(int a1, int a2, int a3)
{
{
    switch ( a1 )
  {
    case 16: return 2;
    case 40: case 3: return 3;
    case 7: return a2 == 5;
  }
    return -1;
}
}
} // namespace gamemd

// 0x6AC950
namespace gamemd {
int sub_6AC950()
{
{
    DataGlobal_B0B528 = 0;
    DataGlobal_B0B52C = 0;
    DataGlobal_B0B530 = 0;
    DataGlobal_B0B534 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6AC970
namespace gamemd {
void sub_6AC970()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0B540 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6AC9A0
namespace gamemd {
void sub_6AC9A0()
{
{
    DataGlobal_B0B590 = DataGlobal_B0B540 / 60.0;
}
}
} // namespace gamemd

// 0x6AC9C0
namespace gamemd {
void sub_6AC9C0()
{
{
    DataGlobal_B0B578 = 1.0 / DataGlobal_B0B590;
}
}
} // namespace gamemd

// 0x6AC9E0
namespace gamemd {
void sub_6AC9E0()
{
{
    DataGlobal_B0B570 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6ACA00
namespace gamemd {
void sub_6ACA00()
{
{
    DataGlobal_B0B548 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6ACA20
namespace gamemd {
void sub_6ACA20()
{
{
    DataGlobal_B0B520 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6ACA40
namespace gamemd {
long long sub_6ACA40()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0B520 - DataGlobal_B0B548);
    result = Math::RoundToInt(v0 * DataGlobal_B0B540 * 0.5);
    DataGlobal_B0B598 = result;
    return result;
}
}
} // namespace gamemd

// 0x6ACA80
namespace gamemd {
void sub_6ACA80()
{
{
    DataGlobal_B0B550 = Math::ArcTan((double)DataGlobal_B0B598 * 0.00390625);
}
}
} // namespace gamemd

// 0x6ACAB0
namespace gamemd {
void sub_6ACAB0()
{
{
    DataGlobal_B0B568 = Math::ArcTan((double)(2 * DataGlobal_B0B598) / DataGlobal_B0B540);
}
}
} // namespace gamemd

// 0x6ACAE0
namespace gamemd {
long long sub_6ACAE0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0B598) + 0.5);
    DataGlobal_B0B58C = result;
    return result;
}
}
} // namespace gamemd

// 0x6ACB10
namespace gamemd {
int sub_6ACB10()
{
{
    DataGlobal_B0B538 = 0;
    DataGlobal_B0B53A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6ACB20
namespace gamemd {
int sub_6ACB20()
{
{
    DataGlobal_B0B558 = 0;
    DataGlobal_B0B55C = 0;
    DataGlobal_B0B560 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6ACB40
namespace gamemd {
int sub_6ACB40()
{
{
    DataGlobal_B0B588 = 0;
    DataGlobal_B0B580 = 128;
    DataGlobal_B0B584 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6ACE80
namespace gamemd {
void sub_6ACE80(SessionClass * hDlg, int a2)
{
{
    int v3;
    int v4;
    char *i;
    int ResourceID4CSF;
    if ( hDlg && *(int *)&HouseClass_Player.__pad_5568[8072] )
  {
    v3 = 1;
    v4 = 8;
    if ( a2 > 0 && a2 < 8 )
    {
    v3 = a2;
    v4 = a2 + 1;
    }
    for ( i = (char *)v3; (int)i < v4; ++i )
    {
    ResourceID4CSF = GetResourceID4CSF(i);
    if ( *(int *)&HouseClass_Player.__pad_5568[8072] && *(char *)(*(int *)&HouseClass_Player.__pad_5568[8072] + 60) )
      {
    SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, 3);
      }
    else
      {
    SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2);
      }
    }
  }
}
}
} // namespace gamemd

// 0x6AEF10
namespace gamemd {
void sub_6AEF10()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0B5C0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6AEF40
namespace gamemd {
void sub_6AEF40()
{
{
    DataGlobal_B0B628 = DataGlobal_B0B5C0 / 60.0;
}
}
} // namespace gamemd

// 0x6AEF60
namespace gamemd {
void sub_6AEF60()
{
{
    DataGlobal_B0B610 = 1.0 / DataGlobal_B0B628;
}
}
} // namespace gamemd

// 0x6AEF80
namespace gamemd {
void sub_6AEF80()
{
{
    DataGlobal_B0B608 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6AEFA0
namespace gamemd {
void sub_6AEFA0()
{
{
    DataGlobal_B0B5C8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6AEFC0
namespace gamemd {
void sub_6AEFC0()
{
{
    DataGlobal_B0B5A0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6AEFE0
namespace gamemd {
long long sub_6AEFE0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0B5A0 - DataGlobal_B0B5C8);
    result = Math::RoundToInt(v0 * DataGlobal_B0B5C0 * 0.5);
    DataGlobal_B0B630 = result;
    return result;
}
}
} // namespace gamemd

// 0x6AF020
namespace gamemd {
void sub_6AF020()
{
{
    DataGlobal_B0B5D0 = Math::ArcTan((double)DataGlobal_B0B630 * 0.00390625);
}
}
} // namespace gamemd

// 0x6AF050
namespace gamemd {
void sub_6AF050()
{
{
    DataGlobal_B0B5E8 = Math::ArcTan((double)(2 * DataGlobal_B0B630) / DataGlobal_B0B5C0);
}
}
} // namespace gamemd

// 0x6AF080
namespace gamemd {
long long sub_6AF080()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0B630) + 0.5);
    DataGlobal_B0B624 = result;
    return result;
}
}
} // namespace gamemd

// 0x6AF0B0
namespace gamemd {
int sub_6AF0B0()
{
{
    DataGlobal_B0B5B8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6AF0C0
namespace gamemd {
int sub_6AF0C0()
{
{
    DataGlobal_B0B5D8 = 0;
    DataGlobal_B0B5DC = 0;
    DataGlobal_B0B5E0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6AF0E0
namespace gamemd {
int sub_6AF0E0()
{
{
    DataGlobal_B0B620 = 0;
    DataGlobal_B0B618 = 128;
    DataGlobal_B0B61C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6AF100
namespace gamemd {
int sub_6AF100()
{
{
    DataGlobal_B0B5A8 = 0;
    DataGlobal_B0B5AC = 0;
    DataGlobal_B0B5B0 = 0;
    DataGlobal_B0B5B4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6AF120
namespace gamemd {
int sub_6AF120()
{
{
    DataGlobal_B0B5F4 = 0;
    DataGlobal_B0B5F8 = 0;
    DataGlobal_B0B5FC = 1;
    DataGlobal_B0B5FD = 0;
    SlaveManagerClass_Array = (int)&vt_DynamicVectorClass_SlaveManagerClass;
    DataGlobal_B0B604 = 10;
    DataGlobal_B0B600 = 0;
    return atexit(sub_6AF160);
}
}
} // namespace gamemd

// 0x6AF160
namespace gamemd {
void sub_6AF160()
{
{
    SlaveManagerClass_Array = (int)&vt_VectorClass_SlaveManagerClass;
    if ( DataGlobal_B0B5F4 && DataGlobal_B0B5FD )
  {
    __3_YAXPAX_Z(DataGlobal_B0B5F4);
    DataGlobal_B0B5F4 = 0;
  }
    DataGlobal_B0B5FD = 0;
    DataGlobal_B0B5F8 = 0;
}
}
} // namespace gamemd
