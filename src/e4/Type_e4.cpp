// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_Type 1  // G57b: e4 flat-carrier opt-in (suppress core/aux twin)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x578540
namespace gamemd {
int Type::CheckAmbiguity(int a2, char a3)
{
  int v3; // edx
  int v4; // esi
  int v5; // edi
  int result; // eax
  int v7; // esi

  v3 = *(__int16 *)(a2 + 38); /*0x57854a*/
  v4 = 0; /*0x57854f*/
  v5 = *(__int16 *)(a2 + 36); /*0x578552*/
  if ( a3 ) /*0x578558*/
  {
    v4 = *(char *)(a2 + 283); /*0x578560*/
    if ( *(_BYTE *)(a2 + 284) ) /*0x57855a*/
    {
      if ( v3 + v5 < v4 + this->u32_F4 + 2 * this->u32_100 + 4 ) /*0x578582*/
        ++v4; /*0x578584*/
    }
  }
  result = this->u32_F4; /*0x57858b*/
  IDA_LOBYTE(result) = v3 + v5 > v4 + result + 2 * this->u32_100 /*0x5785e9*/
                && v3 + v5 <= v4 + result + 2 * (this->u32_100 + this->u32_108) + 2
                && (v7 = this->u32_FC, v5 - v3 < 2 * (v7 + this->u32_104) - result)
                && (result -= 2 * v7, v3 - v5 < result);
  return result; /*0x5785dd*/
}
} // namespace gamemd