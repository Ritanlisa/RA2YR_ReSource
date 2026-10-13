// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SmudgeTypeVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x67C0B0
namespace gamemd {  // G42.18 ns repair
VectorClass_flat * SmudgeTypeVector::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x67c0b3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x67c0b6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x67c0c0*/
  {
    operator delete((void *)(v3)); /*0x67c0c8*/
    *&Block->__pad_004 = 0; /*0x67c0d0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x67c0db*/
  *&Block->u32_8 = 0; /*0x67c0e1*/
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    operator delete((void *)(Block)); /*0x67c0eb*/
  return Block->tail_0; /*0x67c0f5*/
}  // G42.18 ns repair
} // namespace gamemd