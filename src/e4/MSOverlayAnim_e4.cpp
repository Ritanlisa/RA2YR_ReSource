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
MSShapeAnim * MSOverlayAnim::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 7); /*0x5ceb83*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_MSShapeAnim;
  if ( v3 && *((unsigned char *)this + 60) ) /*0x5ceb90*/
  {
    __3_YAXPAX_Z(v3); /*0x5ceb98*/
    *((unsigned int *)this + 7) = 0; /*0x5ceba0*/
    *((unsigned char *)this + 60) = 0; /*0x5ceba7*/
  }
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_MSAnim;
  if ( (a2 & 1) != 0 ) /*0x5cebb7*/
    __3_YAXPAX_Z(this); /*0x5cebba*/
  return this->__pad_0; /*0x5cebc4*/

}
} // namespace gamemd