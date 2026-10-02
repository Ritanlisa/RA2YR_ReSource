// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LCWStraw_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Straw_e4.hpp"

// 0x552450
namespace gamemd {
int LCWStraw::Dtor(void *a1)
{

  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((unsigned int *)this + 5); /*0x552453*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_LCWStraw); /*0x552456*/
  __3_YAXPAX_Z(v2); /*0x55245d*/
  v3 = (void *)*((unsigned int *)this + 6); /*0x552462*/
  *((unsigned int *)this + 5) = 0; /*0x552465*/
  __3_YAXPAX_Z(v3); /*0x55246d*/
  *((unsigned int *)this + 6) = 0; /*0x552477*/
  return ((Straw*)(Straw *)this)->Dtor(); /*0x552483*/

}
} // namespace gamemd