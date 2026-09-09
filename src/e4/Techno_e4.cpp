// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Techno_e4.hpp"

// 0x6F2070
namespace gamemd {
int Techno::GetOwnerHouse()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Techno_GetOwnerHouse(int this)
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
// [IDA decompile] original pseudocode - translation pending (final goal)
BuildingTypeClass *__thiscall Techno::StartInvulnerability(_DWORD *this, BuildingTypeClass *aP1)
{
  BuildingTypeClass *v1; // eax

  v1 = TechnoClass::InvulnerabilityIntensity_SetContext(this, aP1); /*0x70e368*/
  return TechnoClass::CalcFlashAlpha(this, v1); /*0x70e375*/
}
}
} // namespace gamemd
