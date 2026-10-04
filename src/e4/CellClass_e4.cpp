// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Carryall_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/CenterTeamCommand_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"

// 0x544C80
namespace gamemd {
int CellClass::EnsureFileLoaded()
{

  if ( !(&this->sensorsOfHouses)[10] && this->u32_2F4 ) /*0x544c8d*/
    ((MapClass*)(MapClass *)this)->LoadFileData(); /*0x544c97*/
  return (&this->sensorsOfHouses)[10] != 0; /*0x544ca9*/

}
}
// 0x56EF50
namespace gamemd {
int CellClass::UpdateVariant3(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56EF50)
}
}
// 0x56F2F0
namespace gamemd {
int CellClass::UpdateVariant4(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56F2F0)
}
}
// 0x56F8B0
namespace gamemd {
int CellClass::UpdateTerrain(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56F8B0)
}
}
// 0x56FC80
namespace gamemd {
int CellClass::UpdateTileVariant2(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56FC80)
}
}
// 0x572440
namespace gamemd {
int CellClass::UpdateVariant7(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x572440)
}
}
// 0x5727E0
namespace gamemd {
int CellClass::UpdateVariant8(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5727E0)
}
}
// 0x572DA0
namespace gamemd {
HouseClass * * CellClass::UpdateVariant5(IUnknown * aP0, IUnknown * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x572DA0)
}
}
// 0x573170
namespace gamemd {
HouseClass * * CellClass::UpdateVariant6(IUnknown * aP0, IUnknown * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x573170)
}
}
// 0x57BAA0
namespace gamemd {
int CellClass::CheckTilePassable2(IUnknown * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x57BAA0)
}
}
// 0x57CCF0
namespace gamemd {
int CellClass::CheckTilePassable(IUnknown * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x57CCF0)
}
}
// 0x65B510
namespace gamemd {
int CellClass::GetOccupiedRatio()
{

  int CellClass_field_6C; // esi

  CellClass_field_6C = this->CellClass_field_6C; /*0x65b511*/
  if ( CellClass_field_6C > 0 ) /*0x65b516*/
    return this->CellClass_field_4C * this->unknown70 / CellClass_field_6C; /*0x65b524*/
  else
    return 0; /*0x65b518*/

}
}
// 0x487E60
namespace gamemd {
int CellClass::StubReturn11()
{

  return 11; /*0x487e65*/

}
} // namespace gamemd

// 0x487E70
namespace gamemd {
int CellClass::StubReturn328()
{

  return 328; /*0x487e75*/

}
} // namespace gamemd

// 0x48BA80
namespace gamemd {
int CellClass::GetBridgeIndex()
{

  return (int)this->rubble; /*0x48ba83*/

}
} // namespace gamemd

// 0x56BCD0
namespace gamemd {
int CellClass::GetTileData(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56BCD0)
}
} // namespace gamemd

// 0x572B80
namespace gamemd {
char CellClass::SetTileType13(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x572B80)
}
} // namespace gamemd

// 0x572C90
namespace gamemd {
char CellClass::SetTileType14(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x572C90)
}
} // namespace gamemd

// 0x5865F0
namespace gamemd {
int CellClass::SpiralFindClosest(IUnknown * aP0, MouseClass * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5865F0)
}
} // namespace gamemd

// 0x6D6AD0
namespace gamemd {
int CellClass::GetByte284(IUnknown * aP0)
{

  return *((uint8_t *)((Coord *)(&dword_87F7E8))->To_Cell((unsigned int *)(aP0)) + 284); /*0x6d6ae9*/

}
} // namespace gamemd
