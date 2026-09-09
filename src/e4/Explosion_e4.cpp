// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53DDA0
char Explosion::RemoveItem(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_53DDA0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x53dda0*/
  v3 = a2; /*0x53dda3*/
  if ( a2 >= v2 ) /*0x53dda9*/
    return 0; /*0x53ddcc*/
  v4 = v2 - 1; /*0x53ddab*/
  *(this + 4) = v4; /*0x53ddae*/
  if ( a2 < v4 ) /*0x53ddb1*/
  {
    do /*0x53ddc4*/
    {
      ++v3; /*0x53ddb7*/
      *(_DWORD *)(*(this + 1) + 4 * v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * v3); /*0x53ddbb*/
    }
    while ( v3 < *(this + 4) ); /*0x53ddc4*/
  }
  return 1; /*0x53ddc9*/
}
}
