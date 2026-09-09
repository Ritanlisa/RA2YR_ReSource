// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x46DC90
int Compare::Field96(const void * a1, const void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl Compare_Field96(const void *a1, const void *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)a1 + 96); /*0x46dc9c*/
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 96); /*0x46dc9f*/
  if ( v2 == v3 )
    return 0; /*0x46dca6*/
  else
    return v2 <= v3 ? 1 : -1;
}
}
