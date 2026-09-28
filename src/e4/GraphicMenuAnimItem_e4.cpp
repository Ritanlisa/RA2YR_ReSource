// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GraphicMenuAnimItem_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4F3FD0
namespace gamemd {
VectorCursor * GraphicMenuAnimItem::Constructor(char a2)
{
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorCursor_unsigned_int_DynamicVectorClass_unsigned_int_vftable; /*0x4f3fd9*/
  if ( (a2 & 1) != 0 ) /*0x4f3fdf*/
    RA2_OPDEL(); /*0x4f3fe2*/
  return (std::locale::facet *)this; /*0x4f3fec*/
}
} // namespace gamemd