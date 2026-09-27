// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/COMClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x767010
namespace gamemd {
void * COMClass::lockServer(char a2)
{
  int v3; // eax
  char *v4; // ebp
  unsigned int *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x76701b*/
  {
    v3 = (int)(*(this - 1));
    v4 = (char *)(this - 1); /*0x767021*/
    v5 = &this->q008 * v3; /*0x767024*/
    v6 = v3 - 1; /*0x767027*/
    if ( v6 >= 0 ) /*0x767028*/
    {
      v7 = v6 + 1; /*0x76702b*/
      do /*0x76703f*/
      {
        v5 -= 2; /*0x76702e*/
        ComPtr::Release(v5); /*0x767039*/
        --v7; /*0x76703e*/
      }
      while ( v7 ); /*0x76703f*/
    }
    if ( (a2 & 1) != 0 ) /*0x767045*/
      RA2_OPDEL(v4); /*0x767048*/
    return v4; /*0x767050*/
  }
  else
  {
    ComPtr::Release(); /*0x767060*/
    if ( (a2 & 1) != 0 ) /*0x767068*/
      RA2_OPDEL(); /*0x76706b*/
    return (char *)this; /*0x767073*/
  }
}
} // namespace gamemd
// 0x7669F0
namespace gamemd {
VectorCursor * COMClass::disconnectPoint(char a2)
{
  if ( (a2 & 1) != 0 ) /*0x7669ff*/
    RA2_OPDEL(); /*0x766a02*/
  return this; /*0x766a0c*/
}
} // namespace gamemd