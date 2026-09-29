// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingAnim_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4E12D0
namespace gamemd {
int BuildingAnim::GetType()
{
  int v0; // eax

  v0 = FindBuildingAnimByName(off_822724, 1); /*0x4e12db*/
  if ( v0 ) /*0x4e12e2*/
    return *(unsigned int *)v0; /*0x4e12e4*/
  else
    return 0; /*0x4e12e7*/
}
} // namespace gamemd