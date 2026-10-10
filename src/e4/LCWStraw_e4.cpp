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
namespace gamemd {  // G42.18 ns repair
int LCWStraw::Dtor(void *a1)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((unsigned int *)a1 + 5); /*0x552453*/
  *(unsigned int *)a1->__pad_0 = &vt_LCWStraw; /*0x552456*/
  operator delete((void *)(v2)); /*0x55245d*/
  v3 = (void *)*((unsigned int *)a1 + 6); /*0x552462*/
  *((unsigned int *)a1 + 5) = 0; /*0x552465*/
  operator delete((void *)(v3)); /*0x55246d*/
  *((unsigned int *)a1 + 6) = 0; /*0x552477*/
  return ((Straw *)((Straw *)a1))->Dtor(); /*0x552483*/
}  // G42.18 ns repair
} // namespace gamemd