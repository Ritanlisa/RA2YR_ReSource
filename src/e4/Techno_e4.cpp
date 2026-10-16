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
namespace gamemd {  // G42.18 ns repair
int Techno::GetOwnerHouse()
{

  int result = this->u32_C4; // eax /*0x6f2073*/
  if ( !result ) /*0x6f207b*/
  {
    if ( BuildingType::IsSpecialType(*(unsigned int *)this->q296 + 138)) ) /*0x6f2083*/
      return ((BuildingType *)(*(unsigned int *)this->q296 + 138)))->FindOwnerHouse(); /*0x6f2093*/
    else
      return 0; /*0x6f2098*/
  }
  return result; /*0x6f2092*/
}
}  // G42.18 ns repair
// 0x70E360
namespace gamemd {
BuildingTypeClass * Techno::StartInvulnerability(int a2, int aP1, int a1)
{

  int v3; // eax
  v3 = TechnoClass::InvulnerabilityIntensity_SetContext(this, a2); /*0x70e368*/
  return (v3)->CalcFlashAlpha(); /*0x70e375*/
}
} // namespace gamemd
