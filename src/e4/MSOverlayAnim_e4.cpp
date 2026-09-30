// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSOverlayAnim_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5CEB50
namespace gamemd {
void MSOverlayAnim::StubReturnFalse(int a1)
{
  ; /*0x5ceb50*/
}
} // namespace gamemd
// 0x5CEB80
namespace gamemd {
MSShapeAnim * MSOverlayAnim::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)this->u32_1C));
  *(unsigned int *)this->__pad_0 = (void*)&MSShapeAnim_vftable; /*0x5ceb86*/
    if ( v3 && *((unsigned char *)Block + 60) )
  {
    RA2_OPDEL(v3); /*0x5ceb98*/
        *(Block + 7) = 0;
        *((unsigned char *)Block + 60) = 0;
  }
  *(unsigned int *)this->__pad_0 = (void*)&MSAnim_vftable; /*0x5cebaf*/
  if ( (a2 & 1) != 0 ) /*0x5cebb7*/
    RA2_OPDEL(); /*0x5cebba*/
  return this; /*0x5cebc4*/
}
} // namespace gamemd