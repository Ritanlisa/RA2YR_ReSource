// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Input_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4810A0
namespace gamemd {  // G42.18 ns repair
int Input::OffsetToDirection(void *a1)
{

  int v2; // edi
  v2 = (uint8_t)this->u32_4; /*0x4810aa*/
  int Input_field_00; // esi
  Input_field_00 = (uint8_t)this->Input_field_00; /*0x4810b0*/
  int v8; // [esp+14h] [ebp-4h]
  v8 = v2 - 128; /*0x4810bf*/
  int v7; // [esp+10h] [ebp-8h]
  v7 = Input_field_00 - 128; /*0x4810c3*/
  __asm /*0x4810c7*/
  {
    fild [esp+18h+var_4]
    fild [esp+18h+var_8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
  }
  double v6; // [esp+0h] [ebp-18h]
  Math::Sqrt(v6); /*0x4810e0*/
  double v1; // st7
  int v4; // eax
  (*((unsigned short *)&(v4))) = Math::RoundToInt(v1); /*0x4810e8*/
  if ( v4 < 60 ) /*0x4810f0*/
    return 0; /*0x4810f3*/
  int result; // eax
  result = Input_field_00 > 128; /*0x481104*/
  if ( v2 > 128 ) /*0x48110f*/
    (*((unsigned char *)&(result))) = result | 2; /*0x481111*/
  if ( result ) /*0x481115*/
    ++result; /*0x48111e*/
  return result; /*0x4810f2*/
}  // G42.18 ns repair
} // namespace gamemd