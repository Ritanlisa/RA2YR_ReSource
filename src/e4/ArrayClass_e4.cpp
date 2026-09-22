// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ArrayClass_e4.hpp"

// 0x636E60
namespace gamemd {
void ArrayClass::GetAt_Wrap(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = this->q014; /*0x636e62*/
  if ( !v2 ) /*0x636e67*/
    return 0; /*0x636e67*/
  int v3 = a2; /*0x636e69*/
  if ( a2 >= v2 ) /*0x636e6f*/
  {
    int v4 = this->q094; /*0x636e71*/
    if ( v4 < 0 ) /*0x636e79*/
      return 0; /*0x636e79*/
    v3 = v4 + (a2 - v4) % *(this + 36); /*0x636e88*/
  }
  if ( v3 >= 0 && v3 < v2 ) /*0x636e90*/
    return *(_DWORD *)(this->q008 + 4 * v3); /*0x636e9a*/
  return 0; /*0x636e95*/
}
}
} // namespace gamemd
