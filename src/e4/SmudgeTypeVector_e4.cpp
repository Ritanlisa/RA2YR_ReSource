// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SmudgeTypeVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x67C0B0
namespace gamemd {
VectorClass_flat * SmudgeTypeVector::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x67c0b3*/
  if ( v3 && this->IsAllocated ) /*0x67c0c0*/
  {
    RA2_OPDEL(v3); /*0x67c0c8*/
    this->q004 = 0; /*0x67c0d0*/
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
  this->q008 = (unsigned char)((gamemd::VectorClass_flat *)(0));
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    RA2_OPDEL(); /*0x67c0eb*/
  return this; /*0x67c0f5*/
}
} // namespace gamemd