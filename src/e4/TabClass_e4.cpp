// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4A2350
unsigned int * TabClass::initStripClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4A2350(_DWORD *this)
{
  *this = 0; /*0x4a2354*/
  *(this + 1) = 0; /*0x4a2356*/
  *((_BYTE *)this + 8) = 0; /*0x4a2359*/
  *((_BYTE *)this + 9) = 0; /*0x4a235c*/
  *((_BYTE *)this + 10) = 0; /*0x4a235f*/
  *(this + 3) = 0; /*0x4a2362*/
  return this; /*0x4a2365*/
}
}

// 0x658330
LRESULT TabClass::DrawPower(HWND hDlg, void * a1, AbstractClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __stdcall TabClass::DrawPower(HWND hDlg, void *a1, AbstractClass *aP2)
{
  int v3; // ebp
  int v4; // edi
  int BuildingAnimByName; // eax
  int v6; // eax
  LPARAM v7; // esi
  HWND DlgItem; // edi
  int ResourceIDHardcodedCSF; // eax
  wchar_t *v10; // eax
  int uniqueId; // edx
  HWND Default; // eax
  wchar_t *v13; // eax
  unsigned __int8 IsAlliedWith; // al
  HWND eax18; // eax
  IUnknown *v15; // edi
  const wchar_t *v17; // eax
  int *p_abstractFlags; // ebx
  int v19; // ecx
  int edx22; // edx
  wchar_t *v20; // edi
  HWND v23; // eax
  HWND v24; // eax
  CampaignScore *v25; // [esp+0h] [ebp-E8h]
  wchar_t *hWnd; // [esp+10h] [ebp-D8h] BYREF
  __int16 v27; // [esp+14h] [ebp-D4h]
  unsigned __int8 v28; // [esp+16h] [ebp-D2h]
  int nIDDlgItem; // [esp+1Ch] [ebp-CCh]
  wchar_t lParam[100]; // [esp+20h] [ebp-C8h] BYREF

  v3 = *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13408]; /*0x658346*/
  v4 = *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13376]; /*0x65834f*/
  nIDDlgItem = v3; /*0x658358*/
  lParam[0] = 0; /*0x65835c*/
  if ( aP2 && *(_BYTE *)(aP2[1].uniqueId + 421) ) /*0x65836c*/
  {
    wcscpy(lParam, (const wchar_t *)&aP2[2504].__pad_0[10]); /*0x658386*/
    if ( aP2 == (AbstractClass *)*(&g_MatrixTransformState + 2274) ) /*0x658395*/
    {
      BuildingAnimByName = FindBuildingAnimByName((AbstractClass *)&stru_830620.__pad_579C[4368], 1); /*0x6583a1*/
    }
    else if ( BYTE1(aP2[13].NeedsSaveOrLink) ) /*0x6583a8*/
    {
      BuildingAnimByName = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x6583bc*/
    }
    else
    {
      BuildingAnimByName = *(_DWORD *)(stru_B05488.field_4C + 4 * aP2[2505].uniqueId); /*0x6583cf*/
    }
    v6 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)&hWnd); /*0x6583dd*/
    v27 = *(_WORD *)v6; /*0x6583e6*/
    v28 = *(_BYTE *)(v6 + 2); /*0x6583ee*/
    v7 = (unsigned __int8)v27 | ((HIBYTE(v27) | (v28 << 8)) << 8); /*0x65841f*/
    DlgItem = GetDlgItem(hDlg, v4); /*0x65842e*/
    SendMessageA(DlgItem, 0x498u, 0, v7); /*0x658438*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x658447*/
    ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(a1); /*0x658452*/
    v10 = (wchar_t *)GetDlgItem(hDlg, ResourceIDHardcodedCSF); /*0x658460*/
    uniqueId = aP2[1].uniqueId; /*0x658466*/
    hWnd = v10; /*0x658469*/
    Default = (HWND)BuildingType::FindDefault(*(void **)(uniqueId + 180)); /*0x658473*/
    if ( aP2 == (AbstractClass *)*(&g_MatrixTransformState + 2274) ) /*0x65847e*/
      Default = (HWND)BuildingType::FindDefault((void *)0xFFFFFFFD); /*0x658485*/
    CacheDialogInvalidate((HWND)hWnd, Default); /*0x658490*/
    if ( *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13440] != -1 ) /*0x65849f*/
    {
      v13 = (wchar_t *)GetDlgItem(hDlg, *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13440]); /*0x6584ae*/
      hWnd = v13; /*0x6584ba*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8836] ) /*0x6584c0*/
      {
        EnableWindow((HWND)v13, 0); /*0x6584c5*/
        v13 = hWnd; /*0x6584cb*/
      }
      if ( BYTE1(aP2[13].NeedsSaveOrLink) ) /*0x6584cf*/
      {
        ShowWindow((HWND)v13, 0); /*0x6584dc*/
      }
      else
      {
        LOBYTE(v27) = HouseClass::IsAlliedWith((void *)HouseClass_Player.field_0, (IUnknown *)aP2); /*0x6584f4*/
        SendMessageA((HWND)hWnd, 0xF1u, (unsigned __int8)v27, 0); /*0x65850b*/
      }
      IsAlliedWith = HouseClass::IsAlliedWith(aP2, (IUnknown *)HouseClass_Player.field_0); /*0x658515*/
      globalHelper_003DD0((HWND)hWnd, IsAlliedWith); /*0x658520*/
    }
    if ( aP2[16].__pad_0[8] ) /*0x658525*/
    {
      eax18 = GetDlgItem(hDlg, *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13472]); /*0x65853f*/
      ShowWindow(eax18, 0); /*0x658548*/
    }
    else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8836] ) /*0x658557*/
    {
      v15 = (IUnknown *)GetDlgItem(hDlg, *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)a1 + 13472]); /*0x658571*/
      SendMessageA((HWND)v15, 0xF1u, 1u, 0); /*0x65857b*/
      EnableWindow((HWND)v15, 0); /*0x658580*/
    }
    v17 = 0; /*0x658586*/
    p_abstractFlags = &aP2[596].abstractFlags; /*0x658588*/
    v19 = 20; /*0x65858e*/
    do /*0x6585a0*/
    {
      edx22 = *p_abstractFlags + p_abstractFlags[21]; /*0x658598*/
      ++p_abstractFlags; /*0x65859a*/
      v17 = (const wchar_t *)((char *)v17 + edx22); /*0x65859d*/
      --v19; /*0x65859f*/
    }
    while ( v19 ); /*0x6585a0*/
    swprintf(lParam, (const size_t)&g_Str_Fmt_PctD, v17, v25); /*0x6585ad*/
    v20 = (wchar_t *)GetDlgItem(hDlg, nIDDlgItem); /*0x6585c9*/
    SendMessageA((HWND)v20, 0x498u, 0, v7); /*0x6585d3*/
    return SendMessageA((HWND)v20, 0x4B2u, 0, (LPARAM)lParam); /*0x6585e2*/
  }
  else
  {
    v23 = GetDlgItem(hDlg, v4); /*0x658600*/
    SendMessageA(v23, 0x4B2u, 0, (LPARAM)lParam); /*0x658615*/
    v24 = GetDlgItem(hDlg, v3); /*0x658619*/
    return SendMessageA(v24, 0x4B2u, 0, (LPARAM)lParam); /*0x658628*/
  }
}
}
