// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Explosion_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/House_e4.hpp"

// 0x7D7C31
namespace gamemd {
int sub_7D7C31(int a1, int a2)
{
  return _ld12cvt(a1, a2, &unk_87D3D8); /*0x7d7c46*/
}
} // namespace gamemd

// 0x7D7CC1
namespace gamemd {
int sub_7D7CC1(int a1, int a2)
{
  unsigned char v3[12]; // [esp+0h] [ebp-Ch] BYREF

  __strgtold12(v3, &a2, a2, 0, 0, 0, 0); /*0x7d7cd8*/
  return Fltin2_Helper((int)v3, a1); /*0x7d7cec*/
}
} // namespace gamemd

// 0x7D7D1C
namespace gamemd {
int sub_7D7D1C(int a1, int a2)
{
  unsigned char v3[12]; // [esp+0h] [ebp-Ch] BYREF

  __strgtold12(v3, &a2, a2, 0, 0, 0, 0); /*0x7d7d33*/
  return Fassign_Helper_7D7D1C_Helper((int)v3, a1); /*0x7d7d47*/
}
} // namespace gamemd
