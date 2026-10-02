// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6F2070
namespace gamemd {
int Techno::GetOwnerHouse()
{

  int result; // eax

  result = *((unsigned int *)this + 49); /*0x6f2073*/
  if ( !result ) /*0x6f207b*/
  {
    if ( BuildingType::IsSpecialType(*(void **)((char *)this + 200)) ) /*0x6f2083*/
      return BuildingType::FindOwnerHouse(*(void **)((char *)this + 200)); /*0x6f2093*/
    else
      return 0; /*0x6f2098*/
  }
  return result; /*0x6f2092*/

}
}
// 0x70E360
namespace gamemd {
BuildingTypeClass * Techno::StartInvulnerability(int a2, int aP1, int a1)
{

  int v3; // eax

  v3 = TechnoClass::InvulnerabilityIntensity_SetContext(this, aP1); /*0x70e368*/
  return ((TechnoClass *)(int a1))->CalcFlashAlpha(v3) ; /*0x70e375*/

}
} // namespace gamemd
