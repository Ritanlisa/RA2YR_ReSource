// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53DDA0
char Explosion::RemoveItem(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_53DDA0(_DWORD *this, int a2)
{

  AbstractClass *v2 = this->q010; /*0x53dda0*/
  int v3 = a2; /*0x53dda3*/
  if ( a2 >= v2 ) /*0x53dda9*/
    return 0; /*0x53ddcc*/
  int v4 = v2 - 1; /*0x53ddab*/
  this->q010 = v4; /*0x53ddae*/
  if ( a2 < v4 ) /*0x53ddb1*/
  {
    do /*0x53ddc4*/
    {
      ++v3; /*0x53ddb7*/
      *(_DWORD *)(this->q004 + 4 * v3 - 4) = *(_DWORD *)(this->q004 + 4 * v3); /*0x53ddbb*/
    }
    while ( v3 < this->q010 ); /*0x53ddc4*/
  }
  return 1; /*0x53ddc9*/
}
}
