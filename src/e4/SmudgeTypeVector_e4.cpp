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

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_SmudgeTypeClass_const);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67c0c0*/
  {
    RA2_OPDEL(v3); /*0x67c0c8*/
    *(Block + 1) = 0; /*0x67c0d0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67c0db*/
  *(Block + 2) = 0; /*0x67c0e1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x67c0e8*/
    RA2_OPDEL(Block); /*0x67c0eb*/
  return (VectorClass *)Block; /*0x67c0f5*/

}
} // namespace gamemd