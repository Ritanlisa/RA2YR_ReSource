// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FootClass_e4.hpp"

// 0x4D0440
namespace gamemd {  // G42.18 ns repair
int ObjectVector::Construct(int aP1, int aP2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{
  
  this->q004 = 0; /*0x4d044b*/
  this->q008 = aP1; /*0x4d044e*/
  (this->q00C) = ((this->q00C) & ~0xFF) | ((1) & 0xFF); /*0x4d0451*/
  (this->q00C) = ((this->q00C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x4d0455*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
      this->q004 = aP2; /*0x4d0468*/
      return this->__pad_0; /*0x4d046e*/
    }
    this->q004 = __2_YAPAXI_Z(4 * aP1); /*0x4d047d*/
    (this->q00C) = ((this->q00C) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x4d0480*/
  }
  return this->__pad_0; /*0x4d046d*/
  
}
} // namespace gamemd