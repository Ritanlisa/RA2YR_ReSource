// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LCWStraw_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x552450
namespace gamemd {
int LCWStraw::Dtor()
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)((unsigned int)((void *)this->u32_14));
  *(unsigned int *)this->__pad_0 = (void*)&LCWStraw_vftable; /*0x552456*/
  RA2_OPDEL(v2); /*0x55245d*/
    v3 = (void *)*((unsigned int *)this + 24);
    *((unsigned int *)this + 20) = 0;
  RA2_OPDEL(v3); /*0x55246d*/
    *((unsigned int *)this + 24) = 0;
// 0x6c9850
  return Straw::Dtor(); /*0x552483*/
}
} // namespace gamemd