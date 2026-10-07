// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
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

  void *count; // eax

  count = (void *)this->count; /*0x49fce3*/
  this->items = (unsigned int)&vt_VectorClass; /*0x49fce6*/
  if ( count && *((unsigned char *)this + 13) ) /*0x49fcf0*/
  {
    __3_YAXPAX_Z(count); /*0x49fcf8*/
    this->count = 0; /*0x49fd00*/
  }
  *((unsigned char *)this + 13) = 0; /*0x49fd0b*/
  *((unsigned int *)this + 2) = 0; /*0x49fd11*/
  if ( (a2 & 1) != 0 ) /*0x49fd18*/
    __3_YAXPAX_Z(this); /*0x49fd1b*/
  return &this->items; /*0x49fd25*/

}
} // namespace gamemd
