// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x76F000
int ComPtr::DestroyWrapper(int aP0, ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ComPtr::DestroyWrapper(int aP0, ObjectClass *aP1)
{
  int v2; // ecx

  FindTerritoryWOL((ObjectClass *)aP0, v2 + 44, (int)aP1); /*0x76f00f*/
  return aP0; /*0x76f016*/
}
}
