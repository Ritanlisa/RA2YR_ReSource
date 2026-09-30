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
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/COM_e4.hpp"

// 0x767010
namespace gamemd {
void * COMClass::lockServer(rc_ptr_base * Block, char a2)
{

  int v3; // eax
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( ((unsigned int)(Block)& 2) != 0 ) /*0x76701b*/
  {
    v3 = *((unsigned int *)Block - 1); /*0x76701d*/
    v4 = Block - 1; /*0x767021*/
    v5 = Block + 2 * v3; /*0x767024*/
    v6 = v3 - 1; /*0x767027*/
    if ( v6 >= 0 ) /*0x767028*/
    {
      v7 = v6 + 1; /*0x76702b*/
      do /*0x76703f*/
      {
        v5 -= 2; /*0x76702e*/
        v5->vfptr = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x767033*/
        ComPtr::Release(v5); /*0x767039*/
        --v7; /*0x76703e*/
      }
      while ( v7 ); /*0x76703f*/
    }
    if ( ((unsigned int)(Block)& 1) != 0 ) /*0x767045*/
      RA2_OPDEL(v4); /*0x767048*/
    return v4; /*0x767050*/
  }
  else
  {
    Block->vfptr = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76705a*/
    ComPtr::Release(Block); /*0x767060*/
    if ( ((unsigned int)(Block)& 1) != 0 ) /*0x767068*/
      RA2_OPDEL(Block); /*0x76706b*/
    return Block; /*0x767073*/
  }

}
} // namespace gamemd
// 0x7669F0
namespace gamemd {
VectorCursor * COMClass::disconnectPoint(unsigned int * Block, char a2)
{

  *Block = &vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x7669f9*/
  if ( (a2 & 1) != 0 ) /*0x7669ff*/
    __3_YAXPAX_Z(Block); /*0x766a02*/
  return (VectorCursor *)Block; /*0x766a0c*/

}
} // namespace gamemd