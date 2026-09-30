// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CounterClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x49FCE0
namespace gamemd {
CounterClass * CounterClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_int);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x49fcf0*/
  {
    __3_YAXPAX_Z(v3); /*0x49fcf8*/
    *(Block + 1) = 0; /*0x49fd00*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x49fd0b*/
  *(Block + 2) = 0; /*0x49fd11*/
  if ( (a2 & 1) != 0 ) /*0x49fd18*/
    __3_YAXPAX_Z(Block); /*0x49fd1b*/
  return (CounterClass *)Block; /*0x49fd25*/

}
} // namespace gamemd
