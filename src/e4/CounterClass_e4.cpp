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
namespace gamemd {  // G42.18 ns repair
CounterClass * CounterClass::QueryInterface(unsigned int * Block, char a2)
{
  void *count; // eax

  count = (void *)Block->count; /*0x49fce3*/
  Block->items = &vt_VectorClass; /*0x49fce6*/
  if ( count && *((unsigned char *)Block + 13) ) /*0x49fcf0*/
  {
    operator delete((void *)(count)); /*0x49fcf8*/
    Block->count = 0; /*0x49fd00*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x49fd0b*/
  *((unsigned int *)Block + 2) = 0; /*0x49fd11*/
  if ( (a2 & 1) != 0 ) /*0x49fd18*/
    operator delete((void *)(Block)); /*0x49fd1b*/
  return &Block->items; /*0x49fd25*/
}  // G42.18 ns repair
} // namespace gamemd
