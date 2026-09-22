// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x4810A0
char Input::OffsetToDirection()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Input_OffsetToDirection(_DWORD *this)
{
  int v1; // edi
  int v2; // esi
  double v3; // st7
  int v4; // eax

  v1 = (unsigned __int8)this->q004; /*0x4810aa*/
  v2 = (unsigned __int8)*this; /*0x4810b0*/
  v3 = Math::Sqrt((double)(v2 - 128) * (double)(v2 - 128) + (double)(v1 - 128) * (double)(v1 - 128)); /*0x4810e0*/
  if ( (int)Math::RoundToInt(v3) >= 60 ) /*0x4810f0*/
  {
    v4 = v2 > 128; /*0x481104*/
    if ( v1 > 128 ) /*0x48110f*/
      LOBYTE(v4) = v4 | 2; /*0x481111*/
    if ( v4 ) /*0x481115*/
      LOBYTE(v4) = v4 + 1; /*0x48111e*/
  }
  else
  {
    LOBYTE(v4) = 0; /*0x4810f3*/
  }
  return v4; /*0x4810f2*/
}
}
