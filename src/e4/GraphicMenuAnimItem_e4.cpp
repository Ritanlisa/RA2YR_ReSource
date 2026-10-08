// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GraphicMenuAnimItem_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4F3FD0
namespace gamemd {
VectorCursor * GraphicMenuAnimItem::Constructor(std::locale::facet *a1, char a2, void *a3, void *a4, void *a5) 
{

  *(unsigned int *)a1->__pad_0 = (unsigned int)&vt_VectorCursorunsignedintDynamicVectorClass; /*0x4f3fd9*/
  if ( (a2 & 1) != 0 ) /*0x4f3fdf*/
    __3_YAXPAX_Z(a1); /*0x4f3fe2*/
  return (gamemd::VectorCursor *)((std::locale::facet *)a1); /*0x4f3fec*/

}
} // namespace gamemd