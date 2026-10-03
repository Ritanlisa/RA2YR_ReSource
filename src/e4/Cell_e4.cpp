// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/CenterTeamCommand_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/IsometricTileTypeClass_e4.hpp"
#include "e4/classes/Isometric_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"

// 0x419B00
namespace gamemd {
TechnoClass * * Cell::IsOccupied(short * a2, char a3)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x419B00)
}
}
// 0x42B1C0
namespace gamemd {
int Cell::PosToIndex()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42B1C0)
}
}
// 0x43B4C0
namespace gamemd {
int Cell::CanPlaceBuilding(unsigned int * a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x43B4C0)
}
}
// 0x481670
namespace gamemd {
void Cell::ApplyDamage(int aP1, int a3, int a4, char aP4)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x481670)
}
}
// 0x481810
namespace gamemd {  // G42.18c ns repair
int Cell::GetNeighbourContent(unsigned int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x481810)
}
}
// 0x4834A0
namespace gamemd {
int Cell::IsBuildable(int a2, char a3, char a4, int aP4, int aP5, int aP6, char aP7)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4834A0)
}
}
// 0x485060
namespace gamemd {
int Cell::IsValidHeight()
{

  int Cell_field_0x38; // eax

  Cell_field_0x38 = this->Cell_field_0x38; /*0x485060*/
  return Cell_field_0x38 >= g_CellPassabilityLUT && Cell_field_0x38 < g_CellPassabilityLUT + 14; /*0x485079*/

}
}
// 0x486380
namespace gamemd {
int Cell::IsEmpty()
{

  int result; // eax

  result = this->Cell_field_0x38; /*0x486380*/
  LOBYTE(result) = result == 0xFFFF || !result; /*0x486391*/
  return result; /*0x486390*/

}
}
// 0x4865D0
namespace gamemd {
int Cell::IsGroundTypeRange()
{

  int result; // eax

  result = this->Cell_field_0x38; /*0x4865d0*/
  LOBYTE(result) = result >= dword_ABAD28 && result < dword_ABAD28 + 42 /*0x4865e7*/
                || result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 14
                || result >= dword_AA073C && result < dword_AA073C + 4
                || result >= dword_ABB110 && result < dword_ABB110 + 4
                || result >= dword_AA1050 && result < dword_AA1050 + 4
                || result >= dword_AA10A0 && result < dword_AA10A0 + 4;
  return result; /*0x4865e6*/

}
}
// 0x486750
namespace gamemd {
int Cell::IsInRange()
{

  int result; // eax

  LOBYTE(result) = g_Cell_BuildabilityLUT != -1 /*0x48676c*/
                && (result = this->Cell_field_0x38, result >= g_Cell_BuildabilityLUT)
                && result < g_Cell_BuildabilityLUT + 16;
  return result; /*0x48676b*/

}
}
// 0x486770
namespace gamemd {
int Cell::IsInRange2()
{

  int result; // eax

  LOBYTE(result) = g_TerrainBridgeIndex != -1 /*0x48678c*/
                && (result = this->Cell_field_0x38, result >= g_TerrainBridgeIndex)
                && result < g_TerrainBridgeIndex + 16;
  return result; /*0x48678b*/

}
}
// 0x4867B0
namespace gamemd {
int Cell::IsShore()
{

  int result; // eax

  result = this->Cell_field_0x38; /*0x4867b0*/
  LOBYTE(result) = result == dword_AA0E18 || result >= dword_AA0748 && result < dword_AA0748 + 16; /*0x4867d1*/
  return result; /*0x4867d0*/

}
}
// 0x486FF0
namespace gamemd {
int Cell::IsBuildableAdvanced()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x486FF0)
}
}
// 0x4870B0
namespace gamemd {
int Cell::HasOccupierBit(char aP1)
{

  return ((1 << aP1) & *(unsigned int *)&this->__pad_70[8]) != 0; /*0x4870c8*/

}
}
// 0x487A10
namespace gamemd {
int Cell::SearchEnemies(IUnknown * aP1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x487A10)
}
}
// 0x487CB0
namespace gamemd {
long long Cell::GetTraversability()
{

  double v1; // st7

  v1 = (double)*((int *)dword_8871E0 + 1539); /*0x487cb5*/
  if ( *((unsigned int *)this + 30) < v1 ) /*0x487cc8*/
    v1 = *((unsigned int *)this + 30); /*0x487ccc*/
  return Math::RoundToInt(v1);

}
}
// 0x487D50
namespace gamemd {
int Cell::GetSlopeIndex()
{

  return *((char *)this + 283) + 4 * ((*((unsigned int *)this + 80) >> 7) & 1); /*0x487d66*/

}
}
// 0x487DF0
namespace gamemd {
int Cell::IsBridge2()
{

  int result; // eax

  LOBYTE(result) = *(unsigned int *)&this->__pad_E8[4] == 5; /*0x487df7*/
  return result; /*0x487dfa*/

}
}
// 0x4DCE80
namespace gamemd {
Coord * * Cell::IsValidDestination(short * a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4DCE80)
}
}
// 0x5657E0
namespace gamemd {
int Cell::Exists(MouseClass * aP1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5657E0)
}
}
// 0x56D430
namespace gamemd {
int Cell::CoordToIndex(int16_t *aP1)
{

  return *aP1 + aP1[1] * ((int)this->q0F8 + (unsigned int)this->q0F4 + 1); /*0x56d450*/

}
}
// 0x56D460
namespace gamemd {
int Cell::SetRadar(int16_t *aP1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56D460)
}
}
// 0x56E990
namespace gamemd {
AbstractClass * * Cell::UpdateTileType(IUnknown * aP0, IUnknown * aP1, int a3)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56E990)
}
}
// 0x56EB80
namespace gamemd {
ObjectClass * * Cell::SetTileType(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, int a5)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56EB80)
}
}
// 0x578AD0
namespace gamemd {
int Cell::IsPassableAllied(IUnknown * aP0, IUnknown * aP1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x578AD0)
}
}
// 0x579B70
namespace gamemd {
HouseClass * * Cell::GetAdjacencyFlags(MouseClass * aP0)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x579B70)
}
}
// 0x57B210
namespace gamemd {
int Cell::GetTerrainMask(int *aP1, int a3)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x57B210)
}
}
// 0x5A9940
namespace gamemd {
void * Cell::Clear(void *a1_1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5A9940)
}
}
// 0x6B5F80
namespace gamemd {
int Cell::IsWalkable(unsigned short * a2, char a3)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B5F80)
}
}
// 0x6D2790
namespace gamemd {
void* Cell::CreateCrater(void *a1, void *a2_1, void *a3_1, void *a4_1, void *a5_1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D2790)
}
}
// 0x6D8700
namespace gamemd {
CellStruct * * Cell::GetAdjacentPassableMask(IUnknown * aP0, int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D8700)
}
}
// 0x4265B0
namespace gamemd {
unsigned short * Cell::GetHeight(int *aP1, int *a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4265B0)
}
} // namespace gamemd

// 0x4870D0
namespace gamemd {
BOOL Cell::IsPassableOffset(int aP1)
{

  return *(unsigned short *)&this->__pad_70[2 * aP1 + 12] > 0; /*0x4870de*/

}
} // namespace gamemd

// 0x56BC50
namespace gamemd {
int Cell::PosToLinearIndex(IUnknown * aP0)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56BC50)
}
} // namespace gamemd

// 0x56CB80
namespace gamemd {
int Cell::DecodeFlags()
{

  return this->Cell_field_0x0 & 0xF | ((uint16_t)this->Cell_field_0x0 >> 12); /*0x56cb8f*/

}
} // namespace gamemd

// 0x578080
namespace gamemd {
int Cell_GetGroundHeight_free(unsigned int * a1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x578080)
}
} // namespace gamemd

// 0x586360
namespace gamemd {
bool Cell_IsPassable_free(void * aP0)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x586360)
}
} // namespace gamemd

// 0x68BD00
namespace gamemd {
unsigned int * Cell::GetWorldCoords(unsigned int *a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw body; truth = ida_cache)
}
} // namespace gamemd
