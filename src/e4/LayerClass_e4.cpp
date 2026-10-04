// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LightSourceClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/LCWStraw_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/FogOfWar_e4.hpp"  // G42.36 C2027 supply

// 0x568300
namespace gamemd {
int LayerClass::CoordinatesLegal(int16_t *aP1)
{

  int v2; // edx
  int v3; // esi
  int result; // eax
  int v5; // edi

  v2 = (int)(this->u32_F4);
  v3 = (int)(*aP1);
  result = (int)(aP1[1]);
  v5 = result + v3; /*0x568313*/
  LOBYTE(result) = result + v3 > v2 /*0x56833f*/
                && v3 - result < v2
                && (result -= v3, result < v2)
                && (result = this->u32_F8, v5 <= v2 + 2 * result);
  return result; /*0x568337*/

}
}
// 0x56DC20
namespace gamemd {
int LayerClass::Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56DC20)
}
}
// 0x577D90
namespace gamemd {
void * LayerClass::Reveal(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x577D90)
}
}
// 0x578290
namespace gamemd {
int LayerClass::CellIteratorNext()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x578290)
}
}
// 0x578350
namespace gamemd {
int LayerClass::CellIteratorReset()
{

  int v1; // eax
  int result; // eax

  v1 = this->u32_F4; /*0x578350*/
  this->u32_10C = 1; /*0x578356*/
  this->u32_110 = v1; /*0x578360*/
  this->u32_114 = v1 - 1; /*0x578369*/
  result = (v1 << 11) + this->u32_13C + 4; /*0x578378*/
  this->u32_118 = result; /*0x57837c*/
  return result; /*0x578382*/

}
}
// 0x578460
namespace gamemd {
int LayerClass::IsWithinUsableArea(int16_t *aP1, char aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x578460)
}
}
// 0x581140
namespace gamemd {
void* LayerClass::DestroyCliff(int * a1, int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x581140)
}
} // namespace gamemd
