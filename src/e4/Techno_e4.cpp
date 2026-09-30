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

  result = this->u32_C4; /*0x6f2073*/
  if ( !result ) /*0x6f207b*/
  {
    if ( BuildingType::IsSpecialType(*(void **)(&this->u32_500)) ) /*0x6f2083*/
// 0x510ed0
      return BuildingType::FindOwnerHouse(*(void **)(&this->u32_500)); /*0x6f2093*/
    else
      return 0; /*0x6f2098*/
  }
  return result; /*0x6f2092*/
}
}
// 0x70E360
namespace gamemd {
BuildingTypeClass * Techno::StartInvulnerability(BuildingTypeClass * aP1)
{
  int v3; // eax

  v3 = TechnoClass::InvulnerabilityIntensity_SetContext(this, aP1); /*0x70e368*/
// 0x70e4b0
  return TechnoClass::CalcFlashAlpha(v3); /*0x70e375*/
}
} // namespace gamemd
