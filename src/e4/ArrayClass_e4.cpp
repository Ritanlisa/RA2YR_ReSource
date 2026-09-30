// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x636E60
namespace gamemd {
int ArrayClass::GetAt_Wrap(int a2)
{
  void *v2; // edi
  int v3; // eax
  void *v4; // esi

  v2 = (void *)(this->field_14);
  if ( !v2 ) /*0x636e67*/
    return 0; /*0x636e67*/
  v3 = a2; /*0x636e69*/
  if ( a2 >= (int)v2 ) /*0x636e6f*/
  {
    v4 = (void *)(this->field_94);
    if ( (int)v4 < 0 ) /*0x636e79*/
      return 0; /*0x636e79*/
        v3 = v4 + (a2 - v4) % *((unsigned int *)this + 144);
  }
  if ( v3 >= 0 && v3 < (int)v2 ) /*0x636e90*/
        return *(unsigned int *)(*((unsigned int *)this + 8) + 4 * v3);
  return 0; /*0x636e95*/
}
}