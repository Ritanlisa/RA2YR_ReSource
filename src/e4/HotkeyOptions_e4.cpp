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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FB320)
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