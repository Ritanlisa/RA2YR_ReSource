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
  v2 = (void *)*((unsigned int *)a1 + 5); /*0x552453*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7ECF44) */  /*0x552456*/
  operator delete((v2)); /*0x55245d*/
  void *v3; // ecx
  v3 = (void *)*((unsigned int *)a1 + 6); /*0x552462*/
  *((unsigned int *)a1 + 5) = 0; /*0x552465*/
  operator delete((v3)); /*0x55246d*/
  *((unsigned int *)a1 + 6) = 0; /*0x552477*/
  return ((Straw *)((Straw *)a1))->Dtor(); /*0x552483*/
}  // G42.18 ns repair
} // namespace gamemd