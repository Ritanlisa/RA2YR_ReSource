// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_COMClass 1  // G57a3: e4 flat-carrier opt-in (suppress core utility_ext/stream_ext twin)
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
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/COM_e4.hpp"

// 0x767010
namespace gamemd {  // G42.18 ns repair
void * COMClass::lockServer(rc_ptr_base * Block, char a2)
{

  if ( (a2 & 2) != 0 ) /*0x76701b*/
  {
    int v3; // eax
    v3 = *((unsigned int *)Block - 1); /*0x76701d*/
    char *v4; // ebp
    v4 = (char *)Block - 4; /*0x767021*/
    ComPtr *v5; // esi
    v5 = (ComPtr *)((char *)Block + 8 * v3); /*0x767024*/
    int v6 = v3 - 1; // eax /*0x767027*/
    if ( v6 >= 0 ) /*0x767028*/
    {
      int v7 = v6 + 1; // edi /*0x76702b*/
      do /*0x76703f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x76702e*/
        *(unsigned int *)&v5->__pad_0 = &g_var_5878c0; /*0x767033*/
        ComPtr::Release(v5); /*0x767039*/
        --v7; /*0x76703e*/
      }
      while ( v7 ); /*0x76703f*/
    }
    if ( (a2 & 1) != 0 ) /*0x767045*/
      operator delete((v4)); /*0x767048*/
    return v4; /*0x767050*/
  }
  else
  {
    /* X11: ptr_0 install elided (implicit via rc_ptr virtuals 0x76705a) */
    ComPtr::Release((ComPtr *)Block); /*0x767060*/
    if ( (a2 & 1) != 0 ) /*0x767068*/
      operator delete((Block)); /*0x76706b*/
    return Block->ptr_0; /*0x767073*/
  }
}  // G42.18 ns repair
} // namespace gamemd
// 0x7669F0
namespace gamemd {
VectorCursor * COMClass::disconnectPoint(unsigned int * Block, char a2)
{
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_0f5bcb) */  /*0x7669f9*/
  if ( (a2 & 1) != 0 ) /*0x7669ff*/
    operator delete((Block)); /*0x766a02*/
  return Block->tail_0; /*0x766a0c*/
}
} // namespace gamemd