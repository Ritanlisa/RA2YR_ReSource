// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"

// 0x6F2070
namespace gamemd {
int Techno::GetOwnerHouse()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = *(_DWORD *)(this + 196); /*0x6f2073*/
  if ( !result ) /*0x6f207b*/
  {
    if ( BuildingType::IsSpecialType(*(void **)(this + 200)) ) /*0x6f2083*/
      return BuildingType::FindOwnerHouse(*(void **)(this + 200)); /*0x6f2093*/
    else
      return 0; /*0x6f2098*/
  }
  return result; /*0x6f2092*/
}
}
} // namespace gamemd

// 0x70E360
namespace gamemd {
BuildingTypeClass * Techno::StartInvulnerability(BuildingTypeClass * aP1)
{
{
    BuildingTypeClass *v1;
    v1 = TechnoClass::InvulnerabilityIntensity_SetContext(this, aP1);
    return TechnoClass::CalcFlashAlpha(this, v1);
}
}
} // namespace gamemd
