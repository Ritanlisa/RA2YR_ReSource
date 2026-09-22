// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x578540
int Type::CheckAmbiguity(int a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool result; // al

  int v3 = *(__int16 *)(a2 + 38); /*0x57854a*/
  int v4 = 0; /*0x57854f*/
  int v5 = *(__int16 *)(a2 + 36); /*0x578552*/
  if ( a3 ) /*0x578558*/
  {
    v4 = *(char *)(a2 + 283); /*0x578560*/
    if ( *(_BYTE *)(a2 + 284) ) /*0x57855a*/
    {
      if ( v3 + v5 < v4 + this->q0F4 + 2 * this->q100 + 4 ) /*0x578582*/
        ++v4; /*0x578584*/
    }
  }
  CampaignClass *v6 = this->q0F4; /*0x57858b*/
  result = 0; /*0x5785e9*/
  if ( v3 + v5 > v4 + v6 + 2 * this->q100 && v3 + v5 <= v4 + v6 + 2 * (this->q100 + this->q108) + 2 ) /*0x5785b6*/
  {
    BuildingTypeClass *v7 = this->q0FC; /*0x5785b8*/
    if ( v5 - v3 < 2 * (v7 + this->q104) - v6 && v3 - v5 < v6 - 2 * v7 ) /*0x5785db*/
      return 1; /*0x57859b*/
  }
  return result; /*0x5785dd*/
}
}
