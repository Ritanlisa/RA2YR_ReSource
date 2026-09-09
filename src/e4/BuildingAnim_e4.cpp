// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E12D0
int BuildingAnim::GetType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int BuildingAnim_GetType()
{
  int v0; // eax

  v0 = FindBuildingAnimByName(off_822724, 1); /*0x4e12db*/
  if ( v0 ) /*0x4e12e2*/
    return *(_DWORD *)v0; /*0x4e12e4*/
  else
    return 0; /*0x4e12e7*/
}
}
