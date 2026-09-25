// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4A2350
namespace gamemd {
unsigned int * TabClass::initStripClass()
{
  *(_DWORD *)this = 0; /*0x4a2354*/
  this->q004 = 0; /*0x4a2356*/
  this->u32_8 = 0; /*0x4a2359*/
  this->q024 = 0; /*0x4a235c*/
  this->u8_A = 0; /*0x4a235f*/
  this->q00C = 0; /*0x4a2362*/
  return this; /*0x4a2365*/
}
} // namespace gamemd
// 0x658330
namespace gamemd {
int TabClass::DrawPower(HWND hDlg, void * a1, AbstractClass * aP2)
{
  int v3; // ebp
  int v4; // edi
  int v5; // eax
  int v6; // eax
  LPARAM v7; // esi
  HWND DlgItem; // edi
  int ResourceID_Hardcoded; // eax
  HWND v10; // eax
  int v11; // edx
  HWND Default; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // edi
  const wchar_t *v16; // eax
  char *v17; // ebx
  int v18; // ecx
  int v19; // edx
  HWND v20; // edi
  HWND v22; // eax
  HWND v23; // eax
  HWND hWnd; // [esp+10h] [ebp-D8h] BYREF
  __int16 v25; // [esp+14h] [ebp-D4h]
  unsigned __int8 v26; // [esp+16h] [ebp-D2h]
  wchar_t lParam[100]; // [esp+20h] [ebp-C8h] BYREF

  v3 = *(&dword_83921C + (_DWORD)a1); /*0x658346*/
  v4 = *(&dword_8391FC + (_DWORD)a1); /*0x65834f*/
  v3 = v3; /*0x658358*/
  lParam[0] = 0; /*0x65835c*/
  if ( aP2 && *(_BYTE *)(*((_DWORD *)aP2 + 13) + 421) ) /*0x65836c*/
  {
    wcscpy(lParam, (const wchar_t *)aP2 + 45077); /*0x658386*/
    if ( aP2 == (void *)HouseClass_Observer ) /*0x658395*/
    {
      v5 = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x6583a1*/
    }
    else if ( *((_BYTE *)aP2 + 501) ) /*0x6583a8*/
    {
      v5 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x6583bc*/
    }
    else
    {
      v5 = *((_DWORD *)BuildingTypeClass_AnimTable + *((_DWORD *)aP2 + 22549)); /*0x6583cf*/
    }
    v6 = Color::ConvertToRGB((unsigned __int8 *)(v5 + 776), (int)&hWnd); /*0x6583dd*/
    v25 = *(_WORD *)v6; /*0x6583e6*/
    v26 = *(_BYTE *)(v6 + 2); /*0x6583ee*/
    v7 = (unsigned __int8)v25 | ((IDA_HIBYTE(v25) | (v26 << 8)) << 8); /*0x65841f*/
    DlgItem = GetDlgItem(hDlg, v4); /*0x65842e*/
    SendMessageA(DlgItem, 0x498u, 0, v7); /*0x658438*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x658447*/
    ResourceID_Hardcoded = GetResourceIDHardcodedCSF(a1); /*0x658452*/
    v10 = GetDlgItem(hDlg, ResourceID_Hardcoded); /*0x658460*/
    v11 = *((_DWORD *)aP2 + 13); /*0x658466*/
    hWnd = v10; /*0x658469*/
    Default = (HWND)BuildingType::FindDefault(*(void **)(v11 + 180)); /*0x658473*/
    if ( aP2 == (void *)HouseClass_Observer ) /*0x65847e*/
      Default = (HWND)BuildingType::FindDefault((void *)0xFFFFFFFD); /*0x658485*/
    CacheDialogInvalidate(hWnd, Default); /*0x658490*/
    if ( *(&dword_83923C + (_DWORD)a1) != -1 ) /*0x65849f*/
    {
      v13 = GetDlgItem(hDlg, *(&dword_83923C + (_DWORD)a1)); /*0x6584ae*/
      hWnd = v13; /*0x6584ba*/
      if ( MuteSWLaunches ) /*0x6584c0*/
      {
        EnableWindow(v13, 0); /*0x6584c5*/
        v13 = hWnd; /*0x6584cb*/
      }
      if ( *((_BYTE *)aP2 + 501) ) /*0x6584cf*/
      {
        ShowWindow(v13, 0); /*0x6584dc*/
      }
      else
      {
        IDA_LOBYTE(v25) = HouseClass::IsAlliedWith(HouseClass_Player, aP2); /*0x6584f4*/
        SendMessageA(hWnd, 0xF1u, (unsigned __int8)v25, 0); /*0x65850b*/
      }
      HouseClass::IsAlliedWith(aP2, HouseClass_Player); /*0x658515*/
      globalHelper_003DD0(hWnd); /*0x658520*/
    }
    if ( *((_BYTE *)aP2 + 584) ) /*0x658525*/
    {
      v14 = GetDlgItem(hDlg, *(&dword_83925C + (_DWORD)a1)); /*0x65853f*/
      ShowWindow(v14, 0); /*0x658548*/
    }
    else if ( MuteSWLaunches ) /*0x658557*/
    {
      v15 = GetDlgItem(hDlg, *(&dword_83925C + (_DWORD)a1)); /*0x658571*/
      SendMessageA(v15, 0xF1u, 1u, 0); /*0x65857b*/
      EnableWindow(v15, 0); /*0x658580*/
    }
    v16 = 0; /*0x658586*/
    v17 = (char *)aP2 + 21476; /*0x658588*/
    v18 = 20; /*0x65858e*/
    do /*0x6585a0*/
    {
      v19 = *(_DWORD *)v17 + *((_DWORD *)v17 + 21); /*0x658598*/
      v17 += 4; /*0x65859a*/
      v16 = (const wchar_t *)((char *)v16 + v19); /*0x65859d*/
      --v18; /*0x65859f*/
    }
    while ( v18 ); /*0x6585a0*/
    swprintf(lParam, (const size_t)g_Str_Fmt_PctD, v16); /*0x6585ad*/
    v20 = GetDlgItem(hDlg, v3); /*0x6585c9*/
    SendMessageA(v20, 0x498u, 0, v7); /*0x6585d3*/
    return SendMessageA(v20, 0x4B2u, 0, (LPARAM)lParam); /*0x6585e2*/
  }
  else
  {
    v22 = GetDlgItem(hDlg, v4); /*0x658600*/
    SendMessageA(v22, 0x4B2u, 0, (LPARAM)lParam); /*0x658615*/
    v23 = GetDlgItem(hDlg, v3); /*0x658619*/
    return SendMessageA(v23, 0x4B2u, 0, (LPARAM)lParam); /*0x658628*/
  }
}
} // namespace gamemd