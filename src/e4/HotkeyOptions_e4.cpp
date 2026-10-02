// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/HotkeyOptions_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12__e4.hpp"
#include "e4/classes/KeyboardConfig_e4.hpp"
#include "e4/classes/ParticleSystemClass_32_e4.hpp"

// 0x5FB320
namespace gamemd {
ObjectClass * * HotkeyOptions::DlgProc(int hWnd, unsigned int a2, unsigned int a3, int a4)
{

  int result; // eax
  HWND v5; // edi
  LRESULT v6; // eax
  LRESULT v7; // edi
  HWND v8; // ebx
  LPARAM v9; // eax
  signed int v10; // eax
  int v11; // ebx
  char v12; // dl
  void *v13; // ecx
  char v14; // al
  int16_t v15; // bx
  HWND v16; // eax
  HWND v17; // eax
  HWND (*v18)(HWND, int); // edi
  HWND v19; // ebx
  HWND v20; // ebx
  LPARAM v21; // edi
  const wchar_t *v22; // eax
  LPARAM v23; // eax
  LRESULT v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // eax
  int16_t v30; // ax
  int v31; // edi
  size_t v32; // eax
  unsigned int *v33; // edx
  int v34; // esi
  unsigned int *v35; // ebx
  int v36; // ecx
  int v37; // ecx
  unsigned int *v38; // ebx
  int v39; // esi
  unsigned int *v40; // eax
  wchar_t *v41; // esi
  HWND v42; // eax
  size_t v43; // eax
  int m; // esi
  char *v45; // eax
  HWND v46; // edi
  LRESULT v47; // eax
 ... [22198 chars total]
}
} // namespace gamemd

// 0x5FC120
namespace gamemd {
int sub_5FC120(int a1, int a2, int * a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x5fc125*/
  if ( a2 <= 0 ) /*0x5fc127*/
    return 0; /*0x5fc159*/
  v4 = *a3; /*0x5fc12d*/
  while ( 1 ) /*0x5fc136*/
  {
    v5 = *(unsigned int *)(a1 + 8 * (v3 / 2)); /*0x5fc136*/
    if ( v5 <= v4 ) /*0x5fc13e*/
      break; /*0x5fc13e*/
    v3 /= 2; /*0x5fc140*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x5fc152*/
      return 0; /*0x5fc152*/
  }
  if ( v5 != v4 ) /*0x5fc144*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x5fc146*/
    v3 += -1 - v3 / 2; /*0x5fc14e*/
    goto LABEL_7; /*0x5fc14e*/
  }
  return a1 + 8 * (v3 / 2); /*0x5fc154*/
}
}