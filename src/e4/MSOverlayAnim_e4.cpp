// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSOverlayAnim_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5CEB50
namespace gamemd {  // G42.18 ns repair
void MSOverlayAnim::StubReturnFalse(int a1)
{
  ; /*0x5ceb50*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5CEB80
namespace gamemd {
MSShapeAnim * MSOverlayAnim::QueryInterface(unsigned int * Block, char a2)
{
  
  void *v3; // eax
  v3 = (void *)*((unsigned int *)Block + 7); /*0x5ceb83*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EE910) */  /*0x5ceb86*/
  if ( v3 && *((unsigned char *)Block + 60) ) /*0x5ceb90*/
  {
    operator delete((v3)); /*0x5ceb98*/
    *((unsigned int *)Block + 7) = 0; /*0x5ceba0*/
    *((unsigned char *)Block + 60) = 0; /*0x5ceba7*/
  }
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EE8E8) */  /*0x5cebaf*/
  if ( (a2 & 1) != 0 ) /*0x5cebb7*/
    operator delete((Block)); /*0x5cebba*/
  return Block->tail_0; /*0x5cebc4*/
}
} // namespace gamemd