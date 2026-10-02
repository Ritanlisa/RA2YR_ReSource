// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x4A2350
namespace gamemd {
unsigned int * TabClass::initStripClass()
{

  this->TabClass_field_0x0 = 0; /*0x4a2354*/
  this->TabClass_field_0x4 = 0; /*0x4a2356*/
  LOBYTE(this->TabClass_field_0x8[0]) = 0; /*0x4a2359*/
  BYTE1(this->TabClass_field_0x8[0]) = 0; /*0x4a235c*/
  BYTE2(this->TabClass_field_0x8[0]) = 0; /*0x4a235f*/
  this->TabClass_field_0xC = 0; /*0x4a2362*/
  return &this->TabClass_field_0x0; /*0x4a2365*/

}
} // namespace gamemd
// 0x658330
namespace gamemd {
int TabClass::DrawPower(void *a1)
{

  int v2; // ebp
  int v3; // edi
  Color *BuildingAnimByName; // eax
  int v5; // eax
  LPARAM v6; // esi
  HWND DlgItem; // edi
  int ResourceIDHardcodedCSF; // eax
  HWND v9; // eax
  int v10; // edx
  HWND Default; // eax
  HWND v12; // eax
  uint8_t IsAlliedWith; // al
  HWND v14; // eax
  HWND v15; // edi
  const wchar_t *v16; // eax
  unsigned int *v17; // ebx
  int v18; // ecx
  int v19; // edx
  HWND v20; // edi
  HWND v22; // eax
  HWND v23; // eax
  HWND hWnd; // [esp+10h] [ebp-D8h] BYREF
  int16_t v25; // [esp+14h] [ebp-D4h]
  uint8_t v26; // [esp+16h] [ebp-D2h]
  int nIDDlgItem; // [esp+1Ch] [ebp-CCh]
  wchar_t lParam[100]; // [esp+20h] [ebp-C8h] BYREF
  ObjectClass *v29; // [esp+F0h] [ebp+8h]
  #375 *other; // [esp+F4h] [ebp+Ch]

  v2 = *(&dword_83921C + (unsigned int)v29); /*0x658346*/
  v3 = *(&dword_8391FC + (unsigned int)v29); /*0x65834f*/
  nIDDlgItem = v2; /*0x658358*/
  lParam[0] = 0; /*0x65835c*/
  if ( other && *(unsigned char *)(*((unsigned int *)other + 13) + 421) ) /*0x65836c*/
  {
    wcscpy(lParam, (const wchar_t *)other + 45077); /*0x658386*/
    if ( other == (#375 *)HouseClass_Observer ) /*0x658395*/
    {
      BuildingAnimByName = (Color *)FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x6583a1*/
    }
    else if ( *((unsigned char *)other + 501) ) /*0x6583a8*/
    {
      BuildingAnimByName = (Color *)FindBuildingAnimByName(aGrey, 1); /*0x6583bc*/
    }
    else
    {
      BuildingAnimByName = (Color *)*((unsigned int *)dword_B054D4 + *((unsigned int *)other + 22549)); /*0x6583cf*/
    }
    v5 = ((Color *)(BuildingAnimByName + 194))->ConvertToRGB((int)&hWnd); /*0x6583dd*/
    v25 = *(unsigned short *)v5; /*0x6583e6*/
    v26 = *(unsigned char *)(v5 + 2); /*0x6583ee*/
    v6 = (uint8_t)v25 | ((HIBYTE(v25) | (v26 << 8)) << 8); /*0x65841f*/
    DlgItem = GetDlgItem((HWND)a1, v3); /*0x65842e*/
    SendMessageA(DlgItem, 0x498u, 0, v6); /*0x658438*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x658447*/
    ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(v29); /*0x658452*/
    v9 = GetDlgItem((HWND)a1, ResourceIDHardcodedCSF); /*0x658460*/
    v10 = *((unsigned int *)other + 13); /*0x658466*/
    hWnd = v9; /*0x658469*/
    Default = (HWND)BuildingType::FindDefault(*(BuildingType **)(v10 + 180)); /*0x658473*/
    if ( other == (#375 *)HouseClass_Observer ) /*0x65847e*/
      Default = (HWND)BuildingType::FindDefault((BuildingType *)0xFFFFFFFD); /*0x658485*/
    CacheDialogInvalidate(hWnd, Default); /*0x658490*/
    if ( *(&dword_83923C + (unsigned int)v29) != -1 ) /*0x65849f*/
    {
      v12 = GetDlgItem((HWND)a1, *(&dword_83923C + (unsigned int)v29)); /*0x6584ae*/
      hWnd = v12; /*0x6584ba*/
      if ( dword_A8B538[0] ) /*0x6584c0*/
      {
        EnableWindow(v12, 0); /*0x6584c5*/
        v12 = hWnd; /*0x6584cb*/
      }
      if ( *((unsigned char *)other + 501) ) /*0x6584cf*/
      {
        ShowWindow(v12, 0); /*0x6584dc*/
      }
      else
      {
        LOBYTE(v25) = ((HouseClass *)((HouseClass *)dword_A83D4C))->IsAlliedWith(); /*0x6584f4*/
        SendMessageA(hWnd, 0xF1u, (uint8_t)v25, 0); /*0x65850b*/
      }
      IsAlliedWith = ((HouseClass *)((HouseClass *)other))->IsAlliedWith(); /*0x658515*/
      globalHelper_003DD0(hWnd, IsAlliedWith); /*0x658520*/
    }
    if ( *((unsigned char *)other + 584) ) /*0x658525*/
    {
      v14 = GetDlgItem((HWND)a1, *(&dword_83925C + (unsigned int)v29)); /*0x65853f*/
      ShowWindow(v14, 0); /*0x658548*/
    }
    else if ( dword_A8B538[0] ) /*0x658557*/
    {
      v15 = GetDlgItem((HWND)a1, *(&dword_83925C + (unsigned int)v29)); /*0x658571*/
      SendMessageA(v15, 0xF1u, 1u, 0); /*0x65857b*/
      EnableWindow(v15, 0); /*0x658580*/
    }
    v16 = 0; /*0x658586*/
    v17 = (unsigned int *)((char *)other + 21476); /*0x658588*/
    v18 = 20; /*0x65858e*/
    do /*0x6585a0*/
    {
      v19 = *v17 + v17[21]; /*0x658598*/
      ++v17; /*0x65859a*/
      v16 = (const wchar_t *)((char *)v16 + v19); /*0x65859d*/
      --v18; /*0x65859f*/
    }
    while ( v18 ); /*0x6585a0*/
    swprintf(lParam, (const size_t)g_Str_Fmt_PctD, v16); /*0x6585ad*/
    v20 = GetDlgItem((HWND)a1, nIDDlgItem); /*0x6585c9*/
    SendMessageA(v20, 0x498u, 0, v6); /*0x6585d3*/
    return SendMessageA(v20, 0x4B2u, 0, (LPARAM)lParam); /*0x6585e2*/
  }
  else
  {
    v22 = GetDlgItem((HWND)a1, v3); /*0x658600*/
    SendMessageA(v22, 0x4B2u, 0, (LPARAM)lParam); /*0x658615*/
    v23 = GetDlgItem((HWND)a1, v2); /*0x658619*/
    return SendMessageA(v23, 0x4B2u, 0, (LPARAM)lParam); /*0x658628*/
  }

}
} // namespace gamemd