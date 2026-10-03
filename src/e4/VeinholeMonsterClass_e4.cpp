// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/VeinholeMonsterClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/EnumConnectionPointsClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_BuildChoiceClass_int_ouseClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_ColorScheme_e4.hpp"
#include "e4/classes/VectorClass_Ptr_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorClass_e_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"

// 0x5862C0
namespace gamemd {
char VeinholeMonsterClass_Update(MouseClass * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5862C0)
}
}
// 0x74EEE0
namespace gamemd {  // G42.18c ns repair
int VeinholeMonsterClass::Update(TechnoTypeClass * aP0, int * a1, int aP2, void *a4)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0->__pad_0), (gamemd::ObjectTypeClass *)a1, (gamemd::ObjectTypeClass *)aP2); /*0x74eef4*/

}
}  // G42.18c ns repair
// 0x74EF00
namespace gamemd {  // G42.18c ns repair
int VeinholeMonsterClass::CheckStatus()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4084); /*0x74ef0b*/

}
}  // G42.18c ns repair
// 0x74F2D0
namespace gamemd {  // G42.18c ns repair
int VeinholeMonsterClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x74f2d6*/
    return -2147467261; /*0x74f2d8*/
  *a2 = 1368576106; /*0x74f2e6*/
  a2[1] = 299025970; /*0x74f2ee*/
  a2[2] = 1610615737; /*0x74f2f7*/
  a2[3] = -318126072; /*0x74f300*/
  return 0; /*0x74f2dd*/

}
}  // G42.18c ns repair
// 0x74F310
namespace gamemd {  // G42.18c ns repair
int VeinholeMonsterClass::StubReturn63()
{

  return 63; /*0x74f315*/

}
}  // G42.18c ns repair
// 0x74F320
namespace gamemd {  // G42.18c ns repair
int VeinholeMonsterClass::StubReturn264()
{

  return 264; /*0x74f325*/

}
}  // G42.18c ns repair
// 0x74F340
VeinholeMonsterClass * VeinholeMonsterClass::SpreadTiberium(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74F340)
}