// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7C3990
unsigned int MovieClass::ComputeTime()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7C3990(int this)
{

  unsigned int v1 = *(_DWORD *)(this + 120); /*0x7c3995*/
  return 60 * (*(int (__cdecl **)(int))(this + 80))(this) / v1 + *(_DWORD *)(this + 328); /*0x7c39ab*/
}
}
