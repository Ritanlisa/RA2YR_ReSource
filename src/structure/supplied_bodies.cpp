// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/game_loop.hpp"
// G42.35a: stream_ext removed -- gamemd::IStream shadowed ::IStream and broke
// 18 Load/Save override signatures across class headers (C3668), plus a
// gamemd::Buffer double-supply (C2011). This TU uses none of its symbols.
#include "core/utility_ext.hpp"
#include "entity/anim.hpp"
#include "entity/particle_system.hpp"
#include "house/house.hpp"
#include "misc/audio.hpp"
#include "misc/misc_ext.hpp"
#include "misc/movement_ext.hpp"
#include "misc/super_weapon.hpp"
#include "object/abstract.hpp"
#include "object/foot.hpp"
#include "object/mission.hpp"
#include "object/object.hpp"
#include "object/radio.hpp"
#include "object/techno.hpp"
#include "render/display.hpp"
#include "render/light_source.hpp"
#include "structure/aircraft.hpp"
#include "structure/building.hpp"
#include "structure/building_light.hpp"
#include "structure/infantry.hpp"
#include "structure/unit.hpp"
#include "system/cell.hpp"
#include "system/convert_class.hpp"
#include "system/factory.hpp"
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "system/scenario.hpp"
#include "system/tactical.hpp"
#include "team/team.hpp"
#include "type/anim_type.hpp"
#include "type/techno_type.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"

// 0x41C170
namespace gamemd {
int AircraftClass::MissionStubReturnZero2() {
    return 1752; /*0x41c175*/
}
} // namespace gamemd

// 0x41C180
namespace gamemd {
int AircraftClass::MissionStubReturnZero3() {
    return 2; /*0x41c185*/
}
} // namespace gamemd

// 0x4494C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CanBeSold()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004494C0.json)
}
} // namespace gamemd

// 0x44D5D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CaptureBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044D5D0.json)
}
} // namespace gamemd

// 0x44D700
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetAmmoCountScaled()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044D700.json)
}
} // namespace gamemd

// 0x44E3A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
char BuildingClass::CheckOverlapWithOthers()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044E3A0.json)
}
} // namespace gamemd

// 0x44F640
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetFactoryPosition() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044F640.json)
}
} // namespace gamemd

// 0x451750
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::PlayUpgradeAnim(int a2, int a3, int a4, void *a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00451750.json)
}
} // namespace gamemd

// 0x452170
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SetConnectedBuildingMission(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452170.json)
}
} // namespace gamemd

// 0x4525F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::IsPoweredOn()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004525F0.json)
}
} // namespace gamemd

// 0x452630
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CheckHealthForRepair()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452630.json)
}
} // namespace gamemd

// 0x452670
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CanAcceptType(int,int)
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452670.json)
}
} // namespace gamemd

// 0x4566B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetPowerFrame()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004566B0.json)
}
} // namespace gamemd

// 0x457620
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::IsFactorySelectable()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00457620.json)
}
} // namespace gamemd

// 0x457630
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SWAvailable()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00457630.json)
}
} // namespace gamemd

// 0x4578C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::IsFootprintBlocked()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004578C0.json)
}
} // namespace gamemd

// 0x4581F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero6() {
    return 0; /*0x4581f6*/ // G42.35a: was this->Audio8[2] -- member is an AudioController object now
}
} // namespace gamemd

// 0x459870
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero() {
    return *(unsigned int *)&this->Type->__pad_F70[1460]; /*0x45987c*/
}
} // namespace gamemd

// 0x459880
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero2() {
    return *(unsigned int *)&this->Type->__pad_F70[1464]; /*0x45988c*/
}
} // namespace gamemd

// 0x459890
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero3() {
    return *(unsigned int *)&this->Type->__pad_F70[1468]; /*0x45989c*/
}
} // namespace gamemd

// 0x459C00
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsMassSelectable()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459C00.json)
}
} // namespace gamemd

// 0x459D80
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459D80.json)
}
} // namespace gamemd

// 0x459DA0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero5() {
    return 2; /*0x459da5*/
}
} // namespace gamemd

// 0x459DF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse3()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459DF0.json)
}
} // namespace gamemd

// 0x459E00
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse4()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459E00.json)
}
} // namespace gamemd

// 0x459E10
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse10()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459E10.json)
}
} // namespace gamemd

// 0x459E20
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse11()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459E20.json)
}
} // namespace gamemd

// 0x459E30
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse12()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459E30.json)
}
} // namespace gamemd

// 0x459E40
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse13()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459E40.json)
}
} // namespace gamemd

// 0x459E50
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse14()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459E50.json)
}
} // namespace gamemd

// 0x459ED0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
const wchar_t *BuildingClass::GetTypeField60() {
    return nullptr; /*0x459ed9*/ // TODO stub - quarantined G42: IDA shows Type->UIName@+0x60
}
} // namespace gamemd

// 0x459EE0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
BuildingTypeClass *BuildingClass::GetTypePtr() {
    return this->Type; /*0x459ee6*/
}
} // namespace gamemd

// 0x483620
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsTiberiumCollectorEligible()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00483620.json)
}
} // namespace gamemd

// 0x487C10
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckC4Active()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00487C10.json)
}
} // namespace gamemd

// 0x4A5130
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckFlag24()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A5130.json)
}
} // namespace gamemd

// 0x4A51B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckPowerFlags()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A51B0.json)
}
} // namespace gamemd

// 0x4C2C10
namespace gamemd {
UnitClass* UnitClass::updateHarvesting()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2C10.json)
}
} // namespace gamemd

// 0x5F43B0
namespace gamemd {
bool AircraftClass::StubReturnFalse3()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F43B0.json)
}
} // namespace gamemd

// 0x5F43C0
namespace gamemd {
bool AircraftClass::StubReturnTrue()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F43C0.json)
}
} // namespace gamemd

// 0x5F43F0
namespace gamemd {
bool AircraftClass::StubReturnFalse4()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F43F0.json)
}
} // namespace gamemd

// 0x5F5DD0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetSellPriority()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F5DD0.json)
}
} // namespace gamemd

// 0x5F6500
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SquaredDistanceTo(ObjectClass* target) const
{
    return 0; (void)target; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6500.json)
}
} // namespace gamemd

// 0x6B0300
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::FindPlacementCells2(int* outCell, int inCell)
{
    (void)outCell; (void)inCell;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B0300.json)
}
} // namespace gamemd

// 0x6B4F30
namespace gamemd {
int UnitClass::StubReturn176() {
    return 176; /*0x6b4f35*/
}
} // namespace gamemd

// 0x6B4F40
namespace gamemd {
int UnitClass::StubReturn29() {
    return 29; /*0x6b4f45*/
}
} // namespace gamemd

// 0x7105E0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsBeingRepairedOrCaptured()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007105E0.json)
}
} // namespace gamemd

// 0x414290
namespace gamemd {
HRESULT __stdcall AircraftClass::QueryInterface(const IID& iid, void** ppvObject)
{
    return 0; (void)iid; (void)ppvObject; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00414290.json)
}
} // namespace gamemd

// 0x4142F0
namespace gamemd {
ULONG __stdcall AircraftClass::AddRef() {
    return this->AbstractClass::COMStub_AddRef(); /*0x4142fa*/
}
} // namespace gamemd

// 0x414300
namespace gamemd {
ULONG __stdcall AircraftClass::Release() {
    return this->AbstractClass::COMStub_Release(); /*0x41430a*/
}
} // namespace gamemd

// 0x4151E0
namespace gamemd {
int UnitClass::Mission_Harvest()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004151E0.json)
}
} // namespace gamemd

// 0x41B910
namespace gamemd {
int AircraftClass::MissionStubReturnZero()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041B910.json)
}
} // namespace gamemd

// 0x424B50
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::AimTurret()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00424B50.json)
}
} // namespace gamemd

// 0x4260F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsCellPlaceable(int cell_x, int cell_y) const
{
    return false; (void)cell_x; (void)cell_y; return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004260F0.json)
}
} // namespace gamemd

// 0x429A90
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdatePowerAnimation()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00429A90.json)
}
} // namespace gamemd

// 0x42A460
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::AddRectToDrawList(RectangleStruct* rect) const
{
    (void)rect;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042A460.json)
}
} // namespace gamemd

// 0x42ACF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdatePowerAnim()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042ACF0.json)
}
} // namespace gamemd

// 0x43C2D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionController()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043C2D0.json)
}
} // namespace gamemd

// 0x43CEA0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawFactoryProduction(Point2D* screen_pos, RectangleStruct* bounds, int frame) const
{
    (void)screen_pos; (void)bounds; (void)frame;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043CEA0.json)
}
} // namespace gamemd

// 0x43D030
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DisplayProductionFrame()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043D030.json)
}
} // namespace gamemd

// 0x43E7B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawVisible(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos; (void)bounds;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043E7B0.json)
}
} // namespace gamemd

// 0x43E900
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetZDrawOffset() const
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043E900.json)
}
} // namespace gamemd

// 0x43EF90
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetProductionFrame() const
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043EF90.json)
}
} // namespace gamemd

// 0x440580
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::Unlimbo_UnitDeliveryFix()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00440580.json)
}
} // namespace gamemd

// 0x442230
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessAttack()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00442230.json)
}
} // namespace gamemd

// 0x445E50
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetFacingToTarget()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00445E50.json)
}
} // namespace gamemd

// 0x445F00
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SelectTargetTypeFlags()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00445F00.json)
}
} // namespace gamemd

// 0x447110
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ToggleSellMode()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00447110.json)
}
} // namespace gamemd

// 0x447540
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::HandleRepairCursor()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00447540.json)
}
} // namespace gamemd

// 0x447780
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::StartProduction(int type_index)
{
    return 0; (void)type_index; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00447780.json)
}
} // namespace gamemd

// 0x447AC0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct *BuildingClass::GetExitCoords(CoordStruct *out, uint32_t unknown) const
{
    (void)unknown;
    return out; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00447AC0.json)
}
} // namespace gamemd

// 0x447B20
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CalculateTurretAngle()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00447B20.json)
}
} // namespace gamemd

// 0x447E90
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::TogglePrimaryFactory()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00447E90.json)
}
} // namespace gamemd

// 0x44ACF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessActiveUpdate()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044ACF0.json)
}
} // namespace gamemd

// 0x44C980
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessSuperWeaponEffects()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044C980.json)
}
} // namespace gamemd

// 0x44D7D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetTargetFacing()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044D7D0.json)
}
} // namespace gamemd

// 0x44D880
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ClearFactoryBib()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044D880.json)
}
} // namespace gamemd

// 0x44E440
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessPowerPlantEffect()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044E440.json)
}
} // namespace gamemd

// 0x44E880
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetPowerDrain()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044E880.json)
}
} // namespace gamemd

// 0x44EBF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::Disappear_PrismForward()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044EBF0.json)
}
} // namespace gamemd

// 0x4500A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::GetAdjustedExitCoords(CoordStruct* out) const
{
    return nullptr; (void)out; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004500A0.json)
}
} // namespace gamemd

// 0x4503F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdatePrism()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004503F0.json)
}
} // namespace gamemd

// 0x4513D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::ProductionCheck()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004513D0.json)
}
} // namespace gamemd

// 0x451890
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::PlayAnim(int a2, void* a3, int a4, int a5, int a6, void* a7)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00451890.json)
}
} // namespace gamemd

// 0x451B40
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::StopAnim(int anim_index)
{
    (void)anim_index;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00451B40.json)
}
} // namespace gamemd

// 0x451E40
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::ClearAnims(int a2)
{
    return 0; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00451E40.json)
}
} // namespace gamemd

// 0x4521C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DisableTemporal()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004521C0.json)
}
} // namespace gamemd

// 0x452210
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::EnableTogglePower()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452210.json)
}
} // namespace gamemd

// 0x452360
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::PowerOff()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452360.json)
}
} // namespace gamemd

// 0x452410
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::EnableStuff()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452410.json)
}
} // namespace gamemd

// 0x452540
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::MakeTraversable()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452540.json)
}
} // namespace gamemd

// 0x4527D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::HasOccupantAudio()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004527D0.json)
}
} // namespace gamemd

// 0x452A40
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
unsigned int * BuildingClass::DemolishBridgeCheck(int a2)
{
    return nullptr; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452A40.json)
}
} // namespace gamemd

// 0x452BB0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::FindBridgeSegment()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452BB0.json)
}
} // namespace gamemd

// 0x452DC0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DemolishBridge()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00452DC0.json)
}
} // namespace gamemd

// 0x453060
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DemolishBridgeAnim()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00453060.json)
}
} // namespace gamemd

// 0x453240
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::TraverseBridgeSegments()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00453240.json)
}
} // namespace gamemd

// 0x4533A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::RepairPlacement(char a2)
{
    return 0; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004533A0.json)
}
} // namespace gamemd

// 0x453BF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CalcBarrelFlashPosition()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00453BF0.json)
}
} // namespace gamemd

// 0x453D60
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::MarkCellOccupied(int cell_x, int cell_y)
{
    (void)cell_x; (void)cell_y;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00453D60.json)
}
} // namespace gamemd

// 0x453DC0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ClearCellOccupied(int cell_x, int cell_y)
{
    (void)cell_x; (void)cell_y;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00453DC0.json)
}
} // namespace gamemd

// 0x454260
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::PowerDrainUpdate(int a2)
{
    return 0; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00454260.json)
}
} // namespace gamemd

// 0x4545D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessAnimationStates()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004545D0.json)
}
} // namespace gamemd

// 0x454730
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateIdleAnims()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00454730.json)
}
} // namespace gamemd

// 0x4547C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateAnimationSlots()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004547C0.json)
}
} // namespace gamemd

// 0x454930
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessDamageAnim()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00454930.json)
}
} // namespace gamemd

// 0x4555D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsPoweredActive()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004555D0.json)
}
} // namespace gamemd

// 0x455980
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ScanCircleForTiberium()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00455980.json)
}
} // namespace gamemd

// 0x455A80
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateTerrainEffect()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00455A80.json)
}
} // namespace gamemd

// 0x456580
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateRevealField()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00456580.json)
}
} // namespace gamemd

// 0x4565E0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateGapGeneratorField()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004565E0.json)
}
} // namespace gamemd

// 0x456750
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawDeployCircle(Point2D* screen_pos) const
{
    (void)screen_pos;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00456750.json)
}
} // namespace gamemd

// 0x457690
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::SW2Available()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00457690.json)
}
} // namespace gamemd

// 0x4576F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DestroyOnBridgeCollapse()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004576F0.json)
}
} // namespace gamemd

// 0x457DE0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UnloadUnits()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00457DE0.json)
}
} // namespace gamemd

// 0x4585C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::AnimateUnloadUnits()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004585C0.json)
}
} // namespace gamemd

// 0x4593A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RemoveLimpet()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004593A0.json)
}
} // namespace gamemd

// 0x459470
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateDamageAnim()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459470.json)
}
} // namespace gamemd

// 0x4595C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::EmptyBunker()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004595C0.json)
}
} // namespace gamemd

// 0x459900
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::SpawnParticles()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459900.json)
}
} // namespace gamemd

// 0x459EF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::GetBuildCoordsAdjusted(CoordStruct* out) const
{
    return nullptr; (void)out; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459EF0.json)
}
} // namespace gamemd

// 0x45EE70
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ApplyFoundationDamage()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045EE70.json)
}
} // namespace gamemd

// 0x45F160
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetPlacementCoords(int* out, unsigned int* a3)
{
    return 0; (void)out; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0045F160.json)
}
} // namespace gamemd

// 0x47F6A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::Draw_0(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos; (void)bounds;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0047F6A0.json)
}
} // namespace gamemd

// 0x47FDE0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int* BuildingClass::GetPlacementRect(int* out)
{
    return nullptr; (void)out; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0047FDE0.json)
}
} // namespace gamemd

// 0x483C80
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::DetermineVisualState() const
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00483C80.json)
}
} // namespace gamemd

// 0x485010
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
BuildingClass* BuildingClass::FindByCellHash(uint32_t hash)
{
    return nullptr; (void)hash; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00485010.json)
}
} // namespace gamemd

// 0x4852D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CreateDestructionCrater()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004852D0.json)
}
} // namespace gamemd

// 0x485AF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::VisualizePlacement()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00485AF0.json)
}
} // namespace gamemd

// 0x486920
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CreateIdleAnim()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00486920.json)
}
} // namespace gamemd

// 0x486E70
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CreatePlacementCrater()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00486E70.json)
}
} // namespace gamemd

// 0x490B90
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetSHPFrame() const
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00490B90.json)
}
} // namespace gamemd

// 0x4A17C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::BeginCrumblingTimer()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A17C0.json)
}
} // namespace gamemd

// 0x4A18F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CreateCraterAtCell(int cell_x, int cell_y)
{
    (void)cell_x; (void)cell_y;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A18F0.json)
}
} // namespace gamemd

// 0x4AC660
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::TogglePower()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AC660.json)
}
} // namespace gamemd

// 0x4DB9B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::vt_entry_504()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DB9B0.json)
}
} // namespace gamemd

// 0x4DD890
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int* BuildingClass::Validate(int* a2, int a3)
{
    return nullptr; (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DD890.json)
}
} // namespace gamemd

// 0x4DD9F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::ValidateCell(int cell_x, int cell_y)
{
    return false; (void)cell_x; (void)cell_y; return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DD9F0.json)
}
} // namespace gamemd

// 0x4DE750
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::vt_entry_4D4() {
    return false; /*0x4de750*/
}
} // namespace gamemd

// 0x4DE760
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::vt_entry_4D8() {
    return false; /*0x4de760*/
}
} // namespace gamemd

// 0x4DEE80
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::ValidatePlacementEx()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DEE80.json)
}
} // namespace gamemd

// 0x4FD150
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::CalcExitCoords(CoordStruct* out, int dir) const
{
    return nullptr; (void)out; (void)dir; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004FD150.json)
}
} // namespace gamemd

// 0x4FF700
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::PowerUpdate()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004FF700.json)
}
} // namespace gamemd

// 0x4FF980
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DecrementTypeCounter()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004FF980.json)
}
} // namespace gamemd

// 0x4FFA50
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::IncrementOccupantTypeCounter()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004FFA50.json)
}
} // namespace gamemd

// 0x505310
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
BuildingClass* BuildingClass::FindBySWType(int sw_type)
{
    return nullptr; (void)sw_type; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00505310.json)
}
} // namespace gamemd

// 0x5F5CD0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsHealthLow()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F5CD0.json)
}
} // namespace gamemd

// 0x62D2A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateFloatPosition()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0062D2A0.json)
}
} // namespace gamemd

// 0x634310
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CopyTypeDataForRender()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00634310.json)
}
} // namespace gamemd

// 0x6347B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetTypeEntry()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006347B0.json)
}
} // namespace gamemd

// 0x6385C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetObjectData()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006385C0.json)
}
} // namespace gamemd

// 0x6395B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::SetProduction(int type_index)
{
    (void)type_index;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006395B0.json)
}
} // namespace gamemd

// 0x63AC70
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckBuildability()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063AC70.json)
}
} // namespace gamemd

// 0x63BE10
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsIdleWithNoCaptives()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063BE10.json)
}
} // namespace gamemd

// 0x63D560
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawSelectionBlip(Point2D* screen_pos) const
{
    (void)screen_pos;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063D560.json)
}
} // namespace gamemd

// 0x6B0690
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::GetRallyPointCoord(CoordStruct* out) const
{
    return nullptr; (void)out; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B0690.json)
}
} // namespace gamemd

// 0x6B0CC0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::InitBuildLimit()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B0CC0.json)
}
} // namespace gamemd

// 0x6B0D60
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RefreshOccupierCache()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B0D60.json)
}
} // namespace gamemd

// 0x6B0DB0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessEnterUnit()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B0DB0.json)
}
} // namespace gamemd

// 0x6B4BE0
namespace gamemd {
int UnitClass::UnloadPassengers(int placementType)
{
    return 0; (void)placementType; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B4BE0.json)
}
} // namespace gamemd

// 0x6B7230
namespace gamemd {
int UnitClass::ProcessExitQueue()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B7230.json)
}
} // namespace gamemd

// 0x6DA5C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessOccupancy()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DA5C0.json)
}
} // namespace gamemd

// 0x6F60D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawSelectionBox(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos; (void)bounds;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F60D0.json)
}
} // namespace gamemd

// 0x6F9E10
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsInvisible()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F9E10.json)
}
} // namespace gamemd

// 0x6FB170
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RevealShroud(int radius)
{
    (void)radius;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FB170.json)
}
} // namespace gamemd

// 0x6FB470
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RemoveShroud()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FB470.json)
}
} // namespace gamemd

// 0x7013E0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckOccupantState()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007013E0.json)
}
} // namespace gamemd

// 0x705CA0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::GetBridgeAwareCoords(CoordStruct* out) const
{
    return nullptr; (void)out; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00705CA0.json)
}
} // namespace gamemd

// 0x705D60
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
BuildingTypeClass *BuildingClass::GetType_Thunk() {
    return this->GetTypePtr(); /*0x705d60*/
}
} // namespace gamemd

// 0x70C5A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckCellPassability()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070C5A0.json)
}
} // namespace gamemd

// 0x70F6E0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateThreatBounds()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F6E0.json)
}
} // namespace gamemd

// 0x70F8F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::FindBridgeCell()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F8F0.json)
}
} // namespace gamemd

// 0x722240
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ClearFactoryData()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00722240.json)
}
} // namespace gamemd

// 0x722770
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RebuildOccupancyTracking()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00722770.json)
}
} // namespace gamemd

// 0x722AF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::AddOccupancy()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00722AF0.json)
}
} // namespace gamemd

// 0x722D00
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ClearOccupancyData()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00722D00.json)
}
} // namespace gamemd

// 0x723260
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RebuildOccupancyTracking2()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00723260.json)
}
} // namespace gamemd

// 0x7233A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RebuildOccupancy2()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007233A0.json)
}
} // namespace gamemd

// 0x73D450
namespace gamemd {
int UnitClass::ProcessResourceHarvesting()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0073D450.json)
}
} // namespace gamemd

