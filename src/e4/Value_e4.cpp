// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x486730
bool Value::InRange()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Value_InRange(int *this)
{
  int v1; // eax

  v1 = this->q038; /*0x486730*/
  return v1 >= unk_AA0E20 && v1 < unk_AA0E20 + 14; /*0x486746*/
}
}
