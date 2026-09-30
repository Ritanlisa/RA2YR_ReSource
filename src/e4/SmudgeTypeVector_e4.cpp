// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SmudgeTypeVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x67C0B0
namespace gamemd {
VectorClass_flat * SmudgeTypeVector::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (unsigned int)((void *)*(Block + 1));
  *Block = &vt_VectorClass_SmudgeTypeClass_const; /*0x67c0b6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67c0c0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c0c8*/
    *(Block + 1) = 0; /*0x67c0d0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67c0db*/
  *(Block + 2) = 0; /*0x67c0e1*/
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    __3_YAXPAX_Z(Block); /*0x67c0eb*/
  return (VectorClass *)Block; /*0x67c0f5*/

}
} // namespace gamemd