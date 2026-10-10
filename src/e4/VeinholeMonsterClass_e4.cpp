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
namespace gamemd {  // G42.18 ns repair
char VeinholeMonsterClass_Update(MouseClass * aP0, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  CellClass *v10; // eax
  int v12; // [esp+14h] [ebp+4h]

  v3 = (int)(aP0[1]);
  v4 = a2 + v3; /*0x5862d2*/
  v5 = v3 - a2; /*0x5862d4*/
  if ( v5 > v4 ) /*0x5862d8*/
    return 0; /*0x58633f*/
  while ( 1 ) /*0x5862e3*/
  {
    v6 = (int)(*aP0);
    v7 = a2 + v6; /*0x5862e5*/
    v8 = v6 - a2; /*0x5862e7*/
    if ( v8 <= v7 ) /*0x5862eb*/
      break; /*0x5862eb*/
  LABEL_9:
    if ( ++v5 > a2 + aP0[1] ) /*0x58633d*/
      return 0; /*0x58633d*/
  }
  (*(((unsigned short *)&(v12)) + 1)) = v5; /*0x5862f0*/
  while ( 1 ) /*0x5862fb*/
  {
    v9 = ((int16_t)v5 << 9) + (int16_t)v8; /*0x5862fb*/
    (*((unsigned short *)&(v12))) = v8; /*0x5862fd*/
    if ( v9 >= 0x40000 || (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) == 0 ) /*0x586311*/
    {
      dword_ABDC74 = (gamemd::CellClass *)(v12);
      v10 = (gamemd::CellClass *)(&unk_ABDC50); /*0x58631c*/
    }
    if ( v10->firstObject ) /*0x586321*/
      return 1; /*0x58633f*/
    if ( ++v8 > a2 + *aP0 ) /*0x586332*/
      goto LABEL_9; /*0x586332*/
  }
}
}  // G42.18 ns repair
// 0x74EEE0
namespace gamemd {  // G42.18c ns repair
int VeinholeMonsterClass::Update(TechnoTypeClass * aP0, int * a1, int aP2, void *a4)
{
  return AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x74eef4*/
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
  DestroyVeinholeMonster(Block); /*0x74f343*/
  if ( (a2 & 1) != 0 ) /*0x74f34d*/
    operator delete((void *)(Block)); /*0x74f350*/
  return (void **)Block; /*0x74f35a*/
}