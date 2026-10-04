// G42.33 批 3: tree-universe marker (team/supplied_bodies 同款)
#define GAMEMD_TREE_UNIVERSE 1
// G42.33 批 3: tree-universe marker (team/supplied_bodies 同款)
#define GAMEMD_TREE_UNIVERSE 1
// G42.33 批 3: tree-universe marker (team/supplied_bodies 同款)
#define GAMEMD_TREE_UNIVERSE 1
// G42.33 批 3: tree-universe marker (team/supplied_bodies 同款)
#define GAMEMD_TREE_UNIVERSE 1
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/game_loop.hpp"
#include "e4/classes/Queue_e4.hpp"
#include "core/utility_ext.hpp"
#include "core/vector.hpp"
#include "entity/anim.hpp"
#include "entity/bullet.hpp"
#include "entity/particle_system.hpp"
#include "entity/terrain.hpp"
#include "house/house.hpp"
#include "house/house_type.hpp"
#include "misc/audio.hpp"
#include "misc/audio_ext.hpp"
#include "misc/misc_ext.hpp"
#include "misc/rules.hpp"
#include "network/session.hpp"
#include "object/abstract.hpp"
#include "object/bomb.hpp"
#include "object/foot.hpp"
#include "object/mission.hpp"
#include "object/object.hpp"
#include "object/radio.hpp"
#include "object/slave_manager.hpp"
#include "object/spawn_manager.hpp"
#include "object/techno.hpp"
#include "render/display.hpp"
#include "render/render_ext.hpp"
#include "render/surface.hpp"
#include "structure/building.hpp"
#include "type/building_type.hpp"
#include "fundamentals.hpp"
#include "type/building_type.hpp"
#include "fundamentals.hpp"
#include "type/building_type.hpp"
#include "fundamentals.hpp"
#include "structure/infantry.hpp"
#include "structure/unit.hpp"
#include "system/cell.hpp"
#include "system/factory.hpp"
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "system/scenario.hpp"
#include "team/team.hpp"
#include "team/trigger.hpp"
#include "type/anim_type.hpp"
#include "type/techno_type.hpp"
#include "ui/power.hpp"
#include "ui/sidebar.hpp"
#include "ui/ui_ext.hpp"
// G42.33 批 3: TU 本地载体块 (stream_ext 摘除后所需 -- 其 gamemd::IStream stub
// 会遮蔽 COM IStream 令 namespace gamemd 内全部 Load/Save override 失效 25x C3668)
namespace gamemd {
// StreamClass::Set/Set2 (stream_ext 原载体; 0x4d9325/0x4d957c/0x4df887 调用)
struct StreamClass_carrier {
    static void * Set(StreamClass_carrier *s, void *v);   // IDA StreamClass::Set
    static void * Set2(StreamClass_carrier *s, int v);    // 0x45AEA0
};
} // namespace gamemd
#define StreamClass StreamClass_carrier  // G42.33 批 3: 语料名桥接
// 缺席全局 (ida_globals 未覆盖)
extern unsigned int dword_87DE30;       // data: 0x87DE30 (AudioController ctor 真值槽)
extern unsigned int dword_87E294;       // data: 0x87E294
extern unsigned int dword_A8E7AC;       // data: 0xA8E7AC
extern unsigned char g_BuildingLoadQueue_Array[0x100];  // data: 0xB0E840 Rules blob (team TU 同款)
int EndFrameAudioMixer(void *a1, void *a2);  // 0x4010C0 (G42.33 W3: 全局作用域 -- ra2::game 块可见)
extern void *dword_8871E0;                 // data: 0x8871E0 (Rules 实例指针)
extern unsigned int dword_87F7E8;         // data: 0x87F7E8 (Map/Sidebar 域单例)
extern unsigned int dword_889EBC;         // data: 0x889EBC
extern unsigned int g_AircraftStatusFlag;  // data: aircraft flag
// G42.33 b4 W7: 缺席全局 + 静态族自由真形 (W6 同款)
extern int dword_A8E370;                   // data: 0x8E370 (unit 数组计数)
extern unsigned int dword_A8E364;          // data: 0x8E364 (unit 数组基址槽)
extern unsigned int * Array_Get(void *arr, int idx);   // 0x65AD40 (IDA: Array::Get)
extern int Cell_IsBuildable(void *cell, ...);          // 0x4857B0 (IDA: Cell::IsBuildable)
extern unsigned int * LayerClass_Pathfinding_Find(void *layer, ...);  // 0x51F730 (G42.33 b4 W7g: 指针形站点 *call)
// G42.33 b4 W7c: 缺席全局/原型 (ApplyDamageEffects/ComputeTargetAngle 区)
extern int g_TerrainBridgeIndex;             // data: 桥 tile 基索引
extern void * Return_HRESULT_Fail(int a1, int a2, int a3);     // (IDA: Return::HRESULT_Fail)
extern void * GetWarheadVersusMultiplier(unsigned int a1, unsigned int a2, int a3, int *a4);
extern int TerrainClass_ProcessSlope(void *self, ...);         // (IDA: TerrainClass::ProcessSlope)
extern int AudioFile_Stop(void *self);                         // (IDA: AudioFile::Stop)
extern int PlaySoundEffectAt(int *a1, unsigned int a2, unsigned int *a3, unsigned int a4, int a5, int a6);  // (IDA: PlaySoundEffectAt)
extern int World_ToScreen(void *a1, ...);                      // (IDA: World::ToScreen)
extern double BuildingLight_CalcIntensity(double a1);          // (IDA: BuildingLight::CalcIntensity)
struct AnimClass_shadow { void * ctor(void *a1, void *a2, int *a3, int a4, int a5, void *a6, void *a7, int a8); };  // AnimClass::ctor 影子
int StartAudioControllerAt(int aP0, unsigned int *a2, int **a1);  // 0x7509E0 真形
int IsCoordVisibleMap(void *a1, unsigned int *a2);  // 0x5785F0 真形
void ProcessTechnoMovementAction(void);              // 0x415C60 真形 (0 参)
void * LinkedList_Pop(void *list);                   // 0x473430 (IDA: LinkedList::Pop)
int Cell_GetGroundHeight(void *a1, int *a2);         // 0x578080 (IDA: Cell::GetGroundHeight)
void MapClass_RevealArea2(void *self, int *coords, int a3, int radius, int a5);  // 0x567DA0 (IDA: MapClass::RevealArea2)
void * CellClass_FindOpenNeighbor(void *self, int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x4AA440
struct DSurface_ViewBounds_flat {
    unsigned int field_0;
    unsigned int field_4;
    unsigned char __pad_8[0x34 - 0x8];
    unsigned char __pad_34[0xFC - 0x34];
    unsigned char __pad_FC[0x240 - 0xFC];   // 覆盖 __pad_FC[324] = +0x240 (team 同款)
};
extern DSurface_ViewBounds_flat DSurface_ViewBounds;  // data: 0x886FA0
struct stru_87F5F0_host {
    unsigned char __pad_0[0x58];
    unsigned char __pad_58[0x280 - 0x58];  // 覆盖 __pad_58[416] = +0x1F8 (team 同款)
};
extern stru_87F5F0_host stru_87F5F0;    // data: 0x87F5F0
// G42.34 W1: BuildingClass 迁移体词汇供给
extern int g_BuildingClassPool;                 // data: 0x89C848 (globals_core 同款裸 extern)
extern int FootClass_Array;                  // data: 0x8B3DC0  // G42.34 W2: e4_globals 同款裸 extern
int PlayAudioAt2(unsigned int a1, int *a2, int a3);            // 0x750e20 真形
int TimedCreateUnitAtCoords(int *a1, int a2, int a3, int a4);  // 0x6b5c90 真形
int StandardCreateUnitAtCoords(int *a1, int a2, int a3, int a4); // 0x6b59a0 真形
void * RandomCoordScatter(int a1, ...);          // 0x49f420 (5 参调用点变参兜底)
double Math_CalcAngle(double a1, double a2);     // (IDA: Math::CalcAngle) 真形 (0x43ebdd/0x43ee13 家族)
int ComputeMathFacingAngle(int a1, ...);         // (IDA: ComputeMathFacingAngle 0x43eca7 家族)
void MapClass_MarkForRedraw(void *self, int a2); // (IDA: MapClass::MarkForRedraw)
// Scenario 单例 @ 0xA8B230 旧 til 数组形态别名宿主 (team TU 同款)
struct dword_A8B230_elem {
    unsigned int vtable0;                    // +0x00 (idx*4 站点)
    unsigned int NeedsSaveOrLink;
    unsigned int referenceCount;
    unsigned int uniqueId;
};
#define dword_A8B230_arr ((dword_A8B230_elem *)&dword_A8B230)
// Random 真形载体 (0x65C7E0 Range / 0x65C780 State; team TU 同款 + State 补)
struct Random_shadow { int Range(int a1, int a2); int State(); };
// House::IsHumanPlayer 真形载体 (0x50B6F0; IDA 侧 House 已具名)
struct House { static int IsHumanPlayer(void *self); };
// VectorClass 原始 16B 栈形态载体 (ProcessDemolish v75; 0x441d6f)
struct VectorClass_base16 {
    void *vtable0;                    // 0x0
    void *Items;                      // 0x4
    int Capacity;                     // 0x8
    unsigned int IsAllocated;         // 0xC 家族
    static void *ConstructorWithVtable(VectorClass_base16 *self, int a2, int a3);  // 0x477be0 家族
};
struct CellCoord_shadow { void * To_CellObj(int a2); };  // 0x5657A0 影子 (G42.33 b4 W7: 返回 void* 站点形态)
struct Coord_shadow { unsigned char flags[8]; struct Coord_shadow *To_Cell(int *a2); };  // Coord::To_Cell 影子
int MapClass_RevealArea0(void *a, ...);   // 0x5673A0 (IDA: MapClass::RevealArea0)
int MapClass_RevealArea1(void *a, ...);   // 0x5678E0
int MapClass_RevealArea2(void *a, ...);   // 0x567DA0
int MapClass_GetTileIndex(void *a, ...);  // 0x56D230
int MapClass_FindPlacementCellsAlt(void *a, ...); // 0x703590
int MapClass_FillRevealBuffer(void *a, ...); // 0x5683C0
int MapClass_ApplyTerrainDamage(void *a, ...); // 0x574C20
int MapClass_ApplyOverlayReveal(void *a, ...); // 0x5687F0
int MapClass_MarkForRedraw(void *a, ...); // 0x5D81F0 区
int LayerClass_CoordinatesLegal(void *a, ...);  // 0x568300
int LayerClass_IsWithinUsableArea(void *a, ...); // 0x578460
int GScreenClass_MarkForRedraw(void *a, ...);   // 0x4F42F0
int Team_GetMember(void *a, ...);        // 0x65AD30
int Team_AllMembersValid(void *a, ...);  // 0x65AE30
int ScriptAction_ExecuteMissionCmd(void *a, ...); // 0x6FFBE0
int ScriptAction_DecrementRefCount(void *a, ...); // ScriptAction 族
int ScriptAction_GetScreenPos(void *a, ...);      // ScriptAction 族
void * Coord_Subtract(void *a, ...);     // 0x41C230 (IDA: Coord::Subtract)
void * Coord_To_Cell(void *a, ...);      // 0x565730
void * Coord_To_Screen(void *a, ...);    // 0x6D2140
void * Coord_To_ScreenRaw(void *a, ...); // 0x6D1F10
void * Coord_Divide(void *a, ...);       // 0x710700
void * Coord_WorldToScreen(void *a, ...); // 0x6557F0
int Coord_Length(void *a, ...);           // 0x41C380 (G42.33 b4 W7c: int 形站点)
int CellCoord_To_CellObj(void *a, ...);  // 0x5657A0 (107 站点)
int Math_RoundToInt(double a);           // 0x7C5F00 (G42.33 b4 W7: double 形)
double Math_Sqrt(double a);              // 0x4CAC40 (G42.33 b4 W7: double 形)
int Math_SinCos(void *a, ...);
int Math_ArcTan(void *a, ...);
int Math_CalcAngle(void *a, ...);
int Math_DistSq(void *a, ...);
extern unsigned int dword_817A78;        // data: 0x817A78
extern unsigned int g_DDrawSurfaceManager[];  // data: Scenario 域 (scenario 成员区)
int WinAPI_Wrapper(int a2);  // G42.33 W5: 全局自由形 (team WinAPI::Wrapper 同义)
void * MapClass_FindPlacementCellsAlt(void *self, int a1, int a2);  // 0x703590 (IDA: MapClass::FindPlacementCellsAlt)
void * Team_GetMember(void *self, int a2);                          // 0x65AD30 (IDA: Team::GetMember)
int CreateInstanceCOM(void *a1, void *a2, int a3, unsigned int a4);  // e4 语料同形 (IID 实例化)

// 0x401170
namespace ra2::game {
int ObjectClass::ClearFlags2() {
    *(unsigned int *)(char *)this = *(unsigned int *)(char *)this & ~2u; /*0x401179 vfptr+0 真值*/
    *(unsigned int *)((char *)this + 80) &= ~2u; /*0x401180 +0x50 真值*/
    *(unsigned int *)((char *)this + 40) &= ~2u; /*0x401188 +0x28 真值*/
    return -3; /*0x40118b*/
}
} // namespace ra2::game

// 0x402040
namespace ra2::game {
int * AudioController::Constructor()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402040.json)
}
} // namespace ra2::game

// 0x4022C0
namespace ra2::game {
int AudioController::AdvanceQueue()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004022C0.json)
}
} // namespace ra2::game

// 0x402330
namespace ra2::game {
int AudioController::UpdatePlayback()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402330.json)
}
} // namespace ra2::game

// 0x4023F0
namespace ra2::game {
int AudioController::CleanupStream()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004023F0.json)
}
} // namespace ra2::game

// 0x405BE0
namespace ra2::game {
int AudioController::Init()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00405BE0.json)
}
} // namespace ra2::game

// 0x408520
namespace ra2::game {
int AudioController::GetOffset() {
    return ((gamemd::Queue *)&this->AudioController_field_08)->GetNext();
}
} // namespace ra2::game

// 0x41BEA0
namespace ra2::game {
int ObjectClass::GetCellCoords_Alt() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041BEA0.json)
}
} // namespace ra2::game

// 0x41BEF0
namespace ra2::game {
int TechnoClass::selectTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041BEF0.json)
}
} // namespace ra2::game

// 0x41BFF0
namespace ra2::game {
int TechnoClass::vt_entry_434()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041BFF0.json)
}
} // namespace gamemd

// 0x41C0F0
namespace ra2::game {
void FootClass::vt_entry_514() {
    ; /*0x41c0f0*/
}
} // namespace ra2::game

// 0x41C110
namespace ra2::game {
void FootClass::StubReturnVoid() {
    ; /*0x41c110*/
}
} // namespace ra2::game

// 0x41C130
namespace ra2::game {
void FootClass::vt_entry_534(int a2) {
    ; /*0x41c130*/
}
} // namespace ra2::game

// 0x41C140
namespace ra2::game {
void FootClass::vt_entry_540() {
    ; /*0x41c140*/
}
} // namespace ra2::game

// 0x447F10
namespace gamemd {  // G42.33 批 3: BuildingClass 载体在 gamemd (structure/building.hpp)
int BuildingClass::GetFireError()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00447F10.json)
}
} // namespace ra2::game

// 0x452250
namespace ra2::game {
int FootClass::StubReturn0() {
    return 0; /*0x452252*/
}
} // namespace ra2::game

// 0x459D90
namespace ra2::game {
int TechnoClass::MissionStubReturnZero4()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459D90.json)
}
} // namespace ra2::game

// 0x459DD0
namespace ra2::game {
bool TechnoClass::StubReturnFalse2()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00459DD0.json)
}
} // namespace ra2::game

// 0x487150
namespace ra2::game {
int FootClass::checkTerrainSpeed(int a2) {
    ++*(unsigned short *)((char *)&this->q1F0 + 2 * a2); /*0x487154 真值 inc word [&this->q1F0+a2*2]*/
    return a2; /*0x487159*/
}
} // namespace ra2::game

// 0x487160
namespace ra2::game {
int FootClass::updateLocomotion(int a2) {
    --*(unsigned short *)((char *)&this->q1F0 + 2 * a2); /*0x487164 真值 dec word [&this->q1F0+a2*2]*/
    return a2; /*0x487169*/
}
} // namespace ra2::game

// 0x4DBA30
namespace ra2::game {
void FootClass::vt_entry_548() {
    ; /*0x4dba30*/
}
} // namespace ra2::game

// 0x4DBA40
namespace ra2::game {
void FootClass::vt_entry_54C() {
    ; /*0x4dba40*/
}
} // namespace ra2::game

// 0x4DBA50
namespace ra2::game {
int TechnoClass::GetTargetCellCenter(AbstractClass *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DBA50.json)
}
} // namespace ra2::game

// 0x4DEE50
namespace ra2::game {
int FootClass::vt_entry_530(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DEE50.json)
}
} // namespace ra2::game

// 0x4DF1C0
namespace ra2::game {
BOOL TechnoClass::vt_entry_4AC() {
    return this->u32_5C4 != -1; /*0x4df1ce*/
}
} // namespace ra2::game

// 0x4DF1D0
namespace ra2::game {
int TechnoClass::vt_entry_4B0() {
    return this->u32_5D1; /*0x4df1d6*/
}
} // namespace ra2::game

// 0x4DF310
namespace ra2::game {
BOOL TechnoClass::vt_entry_4C4() {
    return this->u32_5C4 == 29; /*0x4df31e*/
}
} // namespace ra2::game

// 0x522510
namespace ra2::game {
int TechnoClass::IsMission27to30() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522510.json)
}
} // namespace ra2::game

// 0x522CB0
namespace ra2::game {
int TechnoClass::IsEnteringOrCapturingStructure() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522CB0.json)
}
} // namespace ra2::game

// 0x556630
namespace ra2::game {
int ObjectClass::GetHeight() const {
    return *(int *)((char *)this + 8); /*0x556633 真值 [ecx+8]*/
}
} // namespace ra2::game

// 0x5B2E40
namespace ra2::game {
int TechnoClass::StubReturn450() {
    return 450; /*0x5b2e45*/
}
} // namespace ra2::game

// 0x5B2E70
namespace ra2::game {
int TechnoClass::CheckState1() const {
    return 450; /*0x5b2e75*/
}
} // namespace ra2::game

// 0x5B2E80
namespace ra2::game {
int TechnoClass::CheckState2() const {
    return 450; /*0x5b2e85*/
}
} // namespace ra2::game

// 0x5F6690
namespace ra2::game {
bool ObjectClass::IsActive() const {
    return *(unsigned char *)((char *)&this->attachedBomb4) == 0; /*0x5f669d 真值 [ecx+90h]*/
}
} // namespace ra2::game

// 0x6EF9E0
namespace ra2::game {
int TechnoClass::IsDeployed() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EF9E0.json)
}
} // namespace ra2::game

// 0x6F9DB0
namespace ra2::game {
int TechnoClass::GetID() const {
    return this->owner->relatedTagsCount; /*0x6f9db9*/
}
} // namespace ra2::game

// 0x6F9DC0
namespace ra2::game {
int TechnoClass::GetTarget() const {
    return (int)this->owner; /*0x6f9dc6*/
}
} // namespace ra2::game

// 0x708C10
namespace ra2::game {
int TechnoClass::GetGlobalValue(int *a2) const {
    unsigned int *v2; // [esp+8h] [ebp+8h]

    *a2 = *(unsigned int *)&g_BuildingLoadQueue_Array[24]; /*0x708c1a GetGlobalValue(int*)*/
    return 0; /*0x708c1e*/
}
} // namespace ra2::game

// 0x70DD90
namespace ra2::game {
int TechnoClass::vt_entry_3E8() {
    return 1; /*0x70dd95*/
}
} // namespace ra2::game

// 0x70EFD0
namespace ra2::game {
int TechnoClass::HasPassengers() const {
    return this->empLockRemaining > 0; /*0x70efdd*/
}
} // namespace ra2::game

// 0x70F010
namespace ra2::game {
int TechnoClass::COMStub_Return0_298()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F010.json)
}
} // namespace ra2::game

// 0x70F050
namespace ra2::game {
int TechnoClass::ProcessCellClearance()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F050.json)
}
} // namespace ra2::game

// 0x70F100
namespace ra2::game {
int TechnoClass::COMStub_Return0_307()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F100.json)
}
} // namespace ra2::game

// 0x711EB0
namespace ra2::game {
int TechnoClass::GetMember388() const {
    return *(unsigned int *)((char *)&this->gapRadius2); /*0x711eb6 真值 [ecx+610h]*/
}
} // namespace ra2::game

// 0x741490
namespace ra2::game {
int TechnoClass::checkTargetValidity() {
    return this->u32_6C4; /*0x741496*/
}
} // namespace ra2::game

// 0x746400
namespace ra2::game {
int TechnoClass::processParasiteAttachment() {
    return *(unsigned char *)(this->u32_6C4 + 3611) == 0; /*0x746415*/
}
} // namespace ra2::game

// 0x746DB0
namespace ra2::game {
int TechnoClass::HasDeployFlags() const {
    return this->u32_6E1 || this->u32_6E2; /*0x746dc6*/
}
} // namespace ra2::game

// 0x7500E0
namespace ra2::game {
int FootClass::SetField(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007500E0.json)
}
} // namespace ra2::game

// 0x7640B0
namespace ra2::game {
int AbstractClass::setSWCharge(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007640B0.json)
}
} // namespace ra2::game

// 0x402220
namespace ra2::game {
int ObjectClass::Cleanup()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402220.json)
}
} // namespace ra2::game

// 0x40DD20
namespace ra2::game {
void * AbstractClass::IsTechno()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040DD20.json)
}
} // namespace ra2::game

// 0x40DD70
namespace ra2::game {
void * AbstractClass::IsTechnoType()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040DD70.json)
}
} // namespace ra2::game

// 0x4155F0
namespace ra2::game {
int TechnoClass::ApplyIronCurtain()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004155F0.json)
}
} // namespace ra2::game

// 0x4157C0
namespace ra2::game {
int TechnoClass::ReturnToBase()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004157C0.json)
}
} // namespace ra2::game

// 0x4158E0
namespace ra2::game {
int TechnoClass::ReturnToBaseAndReload()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004158E0.json)
}
} // namespace ra2::game

// 0x415960
namespace ra2::game {
int TechnoClass::ScatterFromThreat()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00415960.json)
}
} // namespace ra2::game

// 0x416AF0
namespace ra2::game {
int FootClass::MissionMoveCarryallLand()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00416AF0.json)
}
} // namespace ra2::game

// 0x417CA0
namespace ra2::game {
int TechnoClass::ExecuteMissionCommand() {
    return ScriptAction_ExecuteMissionCmd((void *)this); /*0x417cb9 自由真形 0x6FFBE0*/
}
} // namespace ra2::game

// 0x4195A0
namespace ra2::game {
int TechnoClass::FindNearbyBuildCell(int a2, int16_t *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004195A0.json)
}
} // namespace ra2::game

// 0x41A160
namespace ra2::game {
void * TechnoClass::FindClosestPlacementCell()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041A160.json)
}
} // namespace ra2::game

// 0x41A570
namespace ra2::game {
unsigned int * TechnoClass::GetTurretFacing(unsigned int *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041A570.json)
}
} // namespace ra2::game

// 0x41B6A0
namespace ra2::game {
int TechnoClass::ComputeTeamAttackPriority()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041B6A0.json)
}
} // namespace ra2::game

// 0x41B760
namespace ra2::game {
int TechnoClass::GetAutoFireDirection()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041B760.json)
}
} // namespace ra2::game

// 0x41B7F0
namespace ra2::game {
unsigned int * TechnoClass::HasOnlyOneGarrisonSlot()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041B7F0.json)
}
} // namespace ra2::game

// 0x41BFE0
namespace ra2::game {
int TechnoClass::vt_entry_428()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041BFE0.json)
}
} // namespace ra2::game

// 0x41C080
namespace ra2::game {
char FootClass::vt_entry_4F8() {
    return 0; /*0x41c082*/
}
} // namespace ra2::game

// 0x41C100
namespace ra2::game {
bool FootClass::StubReturnFalse() { /*G42.33 b4 W7c: 载体 bool*/
    return 0; /*0x41c100*/
}
} // namespace ra2::game

// 0x41C1E0
namespace ra2::game {
unsigned int * TechnoClass::GetBodyFacing(unsigned int *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C1E0.json)
}
} // namespace ra2::game

// 0x438720
namespace ra2::game {
int TechnoClass::ApplyDamageEffects()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00438720.json)
}
} // namespace ra2::game

// 0x4390D0
namespace ra2::game {
int TechnoClass::RemoveFromDynamicVector(char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004390D0.json)
}
} // namespace ra2::game

// 0x43E940
namespace ra2::game {
int TechnoClass::ComputeTargetAngle()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043E940.json)
}
} // namespace ra2::game

// 0x43ED40
namespace gamemd {  // G42.34 归属正名: 真身 gamemd::BuildingClass (vt+1256)
int BuildingClass::GetTurretAngle()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0043ED40.json)
}
} // namespace gamemd

// 0x4415F0
namespace gamemd {  // G42.34 归属正名: 真身 gamemd::BuildingClass (vt+1260)
int BuildingClass::ProcessDemolish()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004415F0.json)
}
} // namespace gamemd

// 0x442C40
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
int BuildingClass::Update()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00442C40.json)
}
} // namespace gamemd

// 0x443B90
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
int BuildingClass::AssignTarget_SyncLog(int syncFlag)   // G42.34: [ebp+4h] 实参槽 (header (int) 同形)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00443B90.json)
}
} // namespace gamemd

// 0x4456D0
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (canon vt+1248/1264 归属正名)
int BuildingClass::UpdateSidebar()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004456D0.json)
}
} // namespace gamemd

// 0x448160
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (canon vt+1248/1264 归属正名)
int BuildingClass::ProcessPrimarySelect()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00448160.json)
}
} // namespace gamemd

// 0x44D6A0
namespace ra2::game {
int TechnoClass::StartOrResumeProduction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044D6A0.json)
}
} // namespace ra2::game

// 0x44EB10
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
int BuildingClass::GetCrew()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044EB10.json)
}
} // namespace gamemd

// 0x453A70
namespace ra2::game {
int TechnoClass::GetTurretScreenPos()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00453A70.json)
}
} // namespace ra2::game

// 0x4544A0
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
int BuildingClass::UpdatePowerDrain()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004544A0.json)
}
} // namespace gamemd

// 0x4556D0
namespace ra2::game {
void FootClass::ScanCircleForUnits()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004556D0.json)
}
} // namespace ra2::game

// 0x455820
namespace ra2::game {
void FootClass::ScanCircleForUnits2()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00455820.json)
}
} // namespace ra2::game

// 0x456F80
namespace ra2::game {
void TechnoClass::ProcessMissionDeploy()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00456F80.json)
}
} // namespace ra2::game

// 0x457770
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
void BuildingClass::UpdateCloak()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00457770.json)
}
} // namespace gamemd

// 0x457C90
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
int BuildingClass::IronCurtain()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00457C90.json)
}
} // namespace gamemd

// 0x458A80
namespace ra2::game {
int TechnoClass::EvacuateFootprintCells()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00458A80.json)
}
} // namespace ra2::game

// 0x46B270
namespace ra2::game {
int TechnoClass::updateHealthBar() {
    return (int)this->deployAnim; /*0x46b276*/
}
} // namespace ra2::game

// 0x473500
namespace ra2::game {
int TechnoClass::IndexOf()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00473500.json)
}
} // namespace ra2::game

// 0x487720
namespace ra2::game {
int TechnoClass::ApplySplashDamageToNeighbors()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00487720.json)
}
} // namespace ra2::game

// 0x48AB90
namespace ra2::game {
int TechnoClass::ComputeScanRange() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048AB90.json)
}
} // namespace ra2::game

// 0x4B5210
namespace ra2::game {
int TechnoClass::CopyStateFrom()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004B5210.json)
}
} // namespace ra2::game

// 0x4C1E10
namespace ra2::game {
int TechnoClass::ResetDamageAccumulator()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C1E10.json)
}
} // namespace ra2::game

// 0x4CBBA0
namespace ra2::game {
int FootClass::FindPathWithRetry()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CBBA0.json)
}
} // namespace ra2::game

// 0x4CC770
namespace ra2::game {
int TechnoClass::UpdateThunk()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CC770.json)
}
} // namespace ra2::game

// 0x4CD2A0
namespace ra2::game {
void FootClass::ProcessDeployMission()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CD2A0.json)
}
} // namespace ra2::game

// 0x4CE680
namespace ra2::game {
void FootClass::UpdateDeployMovement()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CE680.json)
}
} // namespace ra2::game

// 0x4CF950
namespace ra2::game {
int TechnoClass::GetData() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CF950.json)
}
} // namespace ra2::game

// 0x4D3540
namespace ra2::game {
int FootClass::PostLoadInit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D3540.json)
}
} // namespace ra2::game

// 0x4D3710
namespace ra2::game {
int FootClass::Destru_vt337()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D3710.json)
}
} // namespace ra2::game

// 0x4D3780
namespace ra2::game {
void FootClass::UpdateReveal()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D3780.json)
}
} // namespace ra2::game

// 0x4D3810
namespace ra2::game {
bool FootClass::CheckTileSeed(int* coords)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D3810.json)
}
} // namespace ra2::game

// 0x4D4B20
namespace ra2::game {
bool FootClass::CheckVoiceResponse() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D4B20.json)
}
} // namespace ra2::game

// 0x4D4CB0
namespace ra2::game {
void FootClass::ProcessMissionVoice()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D4CB0.json)
}
} // namespace ra2::game

// 0x4D55F0
namespace ra2::game {
int FootClass::Destru_vt319()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D55F0.json)
}
} // namespace ra2::game

// 0x4D5660
namespace ra2::game {
int FootClass::EnterAttackState()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D5660.json)
}
} // namespace ra2::game

// 0x4D8560
namespace ra2::game {
int FootClass::GetCoords() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D8560.json)
}
} // namespace ra2::game

// 0x4D8F40
namespace ra2::game {
int FootClass::OverrideMission_SyncLog()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D8F40.json)
}
} // namespace ra2::game

// 0x4D8F80
namespace ra2::game {
int FootClass::ConditionalAction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D8F80.json)
}
} // namespace ra2::game

// 0x4D9290
namespace ra2::game {
void FootClass::ProcessTeamAction()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D9290.json)
}
} // namespace ra2::game

// 0x4D94B0
namespace ra2::game {
int FootClass::AssignDestination()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D94B0.json)
}
} // namespace ra2::game

// 0x4D9720
namespace ra2::game {
int FootClass::DispatchSell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D9720.json)
}
} // namespace ra2::game

// 0x4D97A0
namespace ra2::game {
int TechnoClass::ComputeThreatLevel()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D97A0.json)
}
} // namespace ra2::game

// 0x4D9960
namespace ra2::game {
int FootClass::HandleTargetDestroyed()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D9960.json)
}
} // namespace ra2::game

// 0x4D9C00
namespace ra2::game {
void FootClass::vt_entry_524()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D9C00)
}
} // namespace ra2::game

// 0x4D9C10
namespace ra2::game {
int FootClass::Destru_vt107()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D9C10.json)
}
} // namespace ra2::game

// 0x4D9FF0
namespace ra2::game {
int FootClass::vt_entry_4F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D9FF0.json)
}
} // namespace ra2::game

// 0x4DA1C0
namespace ra2::game {
void FootClass::ClearSomeVector()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DA1C0.json)
}
} // namespace ra2::game

// 0x4DA1D0
namespace ra2::game {
bool FootClass::CanBeControlled() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DA1D0.json)
}
} // namespace ra2::game

// 0x4DA230
namespace ra2::game {
bool FootClass::CanBeRecruited() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DA230.json)
}
} // namespace ra2::game

// 0x4DA2A0
namespace ra2::game {
void FootClass::ClearSomeVector2()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DA2A0.json)
}
} // namespace ra2::game

// 0x4DA2C0
namespace ra2::game {
void FootClass::ProcessMovement()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DA2C0.json)
}
} // namespace ra2::game

// 0x4DA4E0
namespace ra2::game {
bool FootClass::CheckTargetValidity() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DA4E0.json)
}
} // namespace ra2::game

// 0x4DAFC0
namespace ra2::game {
int TechnoClass::ComputeSpeedFactor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DAFC0.json)
}
} // namespace ra2::game

// 0x4DB0A0
namespace ra2::game {
int FootClass::GetAttackSpeed() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DB0A0.json)
}
} // namespace ra2::game

// 0x4DB1A0
namespace ra2::game {
int TechnoClass::ComputeSpeedFactorEx()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DB1A0.json)
}
} // namespace ra2::game

// 0x4DB7E0
namespace ra2::game {
int FootClass::Destru_vt30()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DB7E0.json)
}
} // namespace ra2::game

// 0x4DB810
namespace ra2::game {
int TechnoClass::SetPositionAnimated()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DB810.json)
}
} // namespace ra2::game

// 0x4DBAD0
namespace ra2::game {
int FootClass::BeginPowerUpdate()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DBAD0.json)
}
} // namespace ra2::game

// 0x4DBDA0
namespace ra2::game {
bool FootClass::CanBeHunted() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DBDA0.json)
}
} // namespace ra2::game

// 0x4DBDF0
namespace ra2::game {
int TechnoClass::GetDeployCoords()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DBDF0.json)
}
} // namespace ra2::game

// 0x4DBFD0
namespace ra2::game {
int FootClass::vt_entry_4E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DBFD0.json)
}
} // namespace ra2::game

// 0x4DC030
namespace ra2::game {
int FootClass::vt_entry_4F4()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DC030.json)
}
} // namespace ra2::game

// 0x4DC060
namespace ra2::game {
int FootClass::CheckTargetCell() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DC060.json)
}
} // namespace ra2::game

// 0x4DC790
namespace ra2::game {
int FootClass::Destru_vt311()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DC790.json)
}
} // namespace ra2::game

// 0x4DC810
namespace ra2::game {
void FootClass::SetBuildingType()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DC810.json)
}
} // namespace ra2::game

// 0x4DCFE0
namespace ra2::game {
int FootClass::MoveToTiberium()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DCFE0.json)
}
} // namespace ra2::game

// 0x4DD0A0
namespace ra2::game {
int FootClass::FindMoveTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DD0A0.json)
}
} // namespace ra2::game

// 0x4DDB90
namespace ra2::game {
int FootClass::MoveToWeed()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DDB90.json)
}
} // namespace ra2::game

// 0x4DDC40
namespace ra2::game {
bool FootClass::CheckHeightDiff() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DDC40.json)
}
} // namespace ra2::game

// 0x4DDC60
namespace ra2::game {
int FootClass::ValidateTargetCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DDC60.json)
}
} // namespace ra2::game

// 0x4DDDE0
namespace ra2::game {
int FootClass::HandleCursorWithCheck()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DDDE0.json)
}
} // namespace ra2::game

// 0x4DDF90
namespace ra2::game {
void FootClass::ProcessMissionState()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DDF90.json)
}
} // namespace ra2::game

// 0x4DE5D0
namespace ra2::game {
int FootClass::PreDestroy()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DE5D0.json)
}
} // namespace ra2::game

// 0x4DE630
namespace ra2::game {
int FootClass::OnCompleteAction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DE630.json)
}
} // namespace ra2::game

// 0x4DE670
namespace ra2::game {
int FootClass::RemovePassenger()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DE670.json)
}
} // namespace ra2::game

// 0x4DE710
namespace ra2::game {
int FootClass::PopAndProcess()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DE710.json)
}
} // namespace ra2::game

// 0x4DE770
namespace ra2::game {
bool FootClass::IsTimerActive() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DE770.json)
}
} // namespace ra2::game

// 0x4DE7B0
namespace ra2::game {
bool FootClass::IsTargetInRange() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DE7B0.json)
}
} // namespace ra2::game

// 0x4DE940
namespace ra2::game {
int FootClass::CheckCellPassable() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DE940.json)
}
} // namespace ra2::game

// 0x4DEBB0
namespace ra2::game {
void FootClass::UpdateTeamAI()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DEBB0.json)
}
} // namespace ra2::game

// 0x4DED70
namespace ra2::game {
int TechnoClass::GetThreatValue() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DED70.json)
}
} // namespace ra2::game

// 0x4DF040
namespace ra2::game {
int TechnoClass::FindBestMatch()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DF040.json)
}
} // namespace ra2::game

// 0x4DF0D0
namespace ra2::game {
void FootClass::ClearPathIndex()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DF0D0.json)
}
} // namespace ra2::game

// 0x4DF0E0
namespace ra2::game {
int FootClass::MissionSell_Dispatch()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DF0E0.json)
}
} // namespace ra2::game

// 0x4DF1A0
namespace ra2::game {
int TechnoClass::vt_entry_4A8()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DF1A0.json)
}
} // namespace ra2::game

// 0x4DF320
namespace ra2::game {
int TechnoClass::vt_entry_4C8()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DF320.json)
}
} // namespace ra2::game

// 0x4DF3A0
namespace ra2::game {
void FootClass::UpdateAttackMove_SelectNewTarget()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DF3A0.json)
}
} // namespace ra2::game

// 0x4DF4B0
namespace ra2::game {
int TechnoClass::vt_entry_4D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DF4B0.json)
}
} // namespace ra2::game

// 0x4DF7F0
namespace ra2::game {
int FootClass::Destru_vt322()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DF7F0.json)
}
} // namespace ra2::game

// 0x4DFA50
namespace ra2::game {
bool FootClass::IsNotAttackAndPlayer() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DFA50.json)
}
} // namespace ra2::game

// 0x4DFA70
namespace ra2::game {
int TechnoClass::FindClosestInfantry()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DFA70.json)
}
} // namespace ra2::game

// 0x4DFB70
namespace ra2::game {
int TechnoClass::FindClosestUnit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DFB70.json)
}
} // namespace ra2::game

// 0x4DFF40
namespace ra2::game {
int TechnoClass::FindClosestBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DFF40.json)
}
} // namespace ra2::game

// 0x4E00B0
namespace ra2::game {
int FootClass::Jumpjet_OccupyCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E00B0.json)
}
} // namespace ra2::game

// 0x4E0150
namespace ra2::game {
int TechnoClass::GetAnimationValue() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0150.json)
}
} // namespace ra2::game

// 0x4E0170
namespace ra2::game {
int FootClass::Destru_vt08()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0170.json)
}
} // namespace ra2::game

// 0x4E0ED0
namespace ra2::game {
int FootClass::RemoveFromPointerArray()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E0ED0.json)
}
} // namespace ra2::game

// 0x50BD30
namespace ra2::game {
int TechnoClass::GetDamageMultiplier() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050BD30.json)
}
} // namespace ra2::game

// 0x50C050
namespace ra2::game {
int TechnoClass::GetTargetSpeedMultiplier() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050C050.json)
}
} // namespace ra2::game

// 0x50C920
namespace ra2::game {
int TechnoClass::FindDeployDestination()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050C920.json)
}
} // namespace ra2::game

// 0x50CAD0
namespace ra2::game {
bool TechnoClass::ProcessTarget(int a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050CAD0.json)
}
} // namespace ra2::game

// 0x50DAC0
namespace ra2::game {
int TechnoClass::MapHouseRelationIndex()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0050DAC0.json)
}
} // namespace ra2::game

// 0x5216C0
namespace ra2::game {
int GetThreatValue_0()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x005216C0.json)
}
} // namespace ra2::game

// 0x522910
namespace ra2::game {
int TechnoClass::GarrisonBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522910.json)
}
} // namespace ra2::game

// 0x522A60
namespace ra2::game {
int TechnoClass::HandleSpecialAction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522A60.json)
}
} // namespace ra2::game

// 0x547150
namespace ra2::game {
int TechnoClass::GetTileAnimationData() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00547150.json)
}
} // namespace ra2::game

// 0x586FC0
namespace ra2::game {
int FootClass::FindNearestApproachableCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00586FC0.json)
}
} // namespace ra2::game

// 0x5F3B50
namespace ra2::game {
void * ObjectClass::Init(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F3B50.json)
}
} // namespace ra2::game

// 0x5F5390
namespace ra2::game {
void TechnoClass::CreateDestructionEffect()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F5390.json)
}
} // namespace ra2::game

// 0x5FC570
namespace ra2::game {
int ObjectClass::FinalizeCellPlacement(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FC570.json)
}
} // namespace ra2::game

// 0x629E90
namespace ra2::game {
bool FootClass::CreateWakes()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00629E90.json)
}
} // namespace ra2::game

// 0x637840
namespace ra2::game {
int TechnoClass::IsProductionChainActive() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00637840.json)
}
} // namespace ra2::game

// 0x638840
namespace ra2::game {
int TechnoClass::RemoveBuildingFromScripts()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00638840.json)
}
} // namespace ra2::game

// 0x638A80
namespace ra2::game {
int TechnoClass::CreatePlanningNode()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00638A80.json)
}
} // namespace ra2::game

// 0x63BE60
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
void BuildingClass::DrawActionLines(Point2D* screen_pos, RectangleStruct* bounds) const
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0063BE60.json)
}
} // namespace gamemd

// 0x663030
namespace ra2::game {
int TechnoClass::CalculateDamage()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00663030.json)
}
} // namespace ra2::game

// 0x6A92E0
namespace ra2::game {
void * ObjectClass::GetSidebarTooltip(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006A92E0.json)
}
} // namespace ra2::game

// 0x6AC210
namespace ra2::game {
void * ObjectClass::GetTooltipText(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006AC210.json)
}
} // namespace ra2::game

// 0x6B0AE0
namespace ra2::game {
int TechnoClass::MutateAll()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B0AE0.json)
}
} // namespace ra2::game

// 0x6B0D10
namespace ra2::game {
int TechnoClass::RefreshDeployOccupierState()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B0D10.json)
}
} // namespace ra2::game

// 0x6B7D80
namespace ra2::game {
int TechnoClass::CountPassengers() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B7D80.json)
}
} // namespace ra2::game

// 0x6EB380
namespace ra2::game {
int FootClass::LinkToTransporter()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EB380.json)
}
} // namespace ra2::game

// 0x6EC300
namespace ra2::game {
int TechnoClass::IsWaypointHidden() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EC300.json)
}
} // namespace ra2::game

// 0x6F03B0
namespace ra2::game {
int FootClass::GetGameSpeedFromSession() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F03B0.json)
}
} // namespace ra2::game

// 0x6F18A0
namespace ra2::game {
int TechnoClass::GetWaypointCoords() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F18A0.json)
}
} // namespace ra2::game

// 0x6F1920
namespace ra2::game {
int TechnoClass::Create()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F1920.json)
}
} // namespace ra2::game

// 0x6F3280
namespace ra2::game {
int TechnoClass::IsNotAircraftOrBuilding() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F3280.json)
}
} // namespace ra2::game

// 0x6F32D0
namespace ra2::game {
int TechnoClass::CanInitiateSell() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F32D0.json)
}
} // namespace ra2::game

// 0x6F3950
namespace ra2::game {
BOOL TechnoClass::GetCrewCount()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F3950.json)
}
} // namespace ra2::game

// 0x6F3970
namespace ra2::game {
int TechnoClass::GetValue() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F3970.json)
}
} // namespace ra2::game

// 0x6F3AD0
namespace ra2::game {
int TechnoClass::ComputeTransform()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F3AD0.json)
}
} // namespace ra2::game

// 0x6F4960
namespace ra2::game {
int TechnoClass::SetHouseFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F4960.json)
}
} // namespace ra2::game

// 0x6F4A40
namespace ra2::game {
int TechnoClass::CheckPlayerOwned() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F4A40.json)
}
} // namespace ra2::game

// 0x6F4A70
namespace ra2::game {
int TechnoClass::UpdateProdWithSound()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F4A70.json)
}
} // namespace ra2::game

// 0x6F4EB0
namespace ra2::game {
int TechnoClass::PushNearbyUnits()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F4EB0.json)
}
} // namespace ra2::game

// 0x6F5090
namespace ra2::game {
int FootClass::CompleteProduction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F5090.json)
}
} // namespace ra2::game

// 0x6F5190
namespace ra2::game {
void TechnoClass::DrawHealthBar(Point2D* pLocation, RectangleStruct* pBounds, bool bUnk3) const
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F5190.json)
}
} // namespace ra2::game

// 0x6F60C0
namespace ra2::game {
void TechnoClass::vt_entry_448()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F60C0.json)
}
} // namespace ra2::game

// 0x6F64A0
namespace gamemd {  // G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
void BuildingClass::DrawHealthBar(Point2D* screen_pos, RectangleStruct* bounds) const
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F64A0.json)
}
} // namespace gamemd

// 0x6F6AC0
namespace ra2::game {
int TechnoClass::CleanupDeploy()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F6AC0.json)
}
} // namespace ra2::game

// 0x6F6F60
namespace ra2::game {
int TechnoClass::ComputeSlopeDifference()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F6F60.json)
}
} // namespace ra2::game

// 0x6F70E0
namespace ra2::game {
int TechnoClass::ComputeSlopePenalty()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F70E0.json)
}
} // namespace ra2::game

// 0x6F7220
namespace ra2::game {
int TechnoClass::CheckTargetLOS() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F7220.json)
}
} // namespace ra2::game

// 0x6F7660
namespace ra2::game {
int TechnoClass::IsInRange() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F7660.json)
}
} // namespace ra2::game

// 0x6F7780
namespace ra2::game {
int TechnoClass::CheckCellPassable2() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F7780.json)
}
} // namespace ra2::game

// 0x6F77B0
namespace ra2::game {
int TechnoClass::ValidateTarget(TechnoClass* target, int weapon_index) const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F77B0.json)
}
} // namespace ra2::game

// 0x6F78D0
namespace ra2::game {
int TechnoClass::CheckAndFireAtTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F78D0.json)
}
} // namespace ra2::game

// 0x6F7930
namespace ra2::game {
int TechnoClass::CheckCellPassable() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F7930.json)
}
} // namespace ra2::game

// 0x6F7970
namespace ra2::game {
int TechnoClass::CheckCellPassable3() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F7970.json)
}
} // namespace ra2::game

// 0x6F79A0
namespace ra2::game {
int TechnoClass::GetBridgeDamageMult() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F79A0.json)
}
} // namespace ra2::game

// 0x6F8C10
namespace ra2::game {
int TechnoClass::EvaluateBuildingTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F8C10.json)
}
} // namespace ra2::game

// 0x6F8DF0
namespace ra2::game {
int TechnoClass::SelectAutoTarget_Start_AU()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F8DF0.json)
}
} // namespace ra2::game

// 0x6F9DD0
namespace ra2::game {
int TechnoClass::SetTargetIfAllowed()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006F9DD0.json)
}
} // namespace ra2::game

// 0x6FB010
namespace ra2::game {
int TechnoClass::StepAnimFrame()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FB010.json)
}
} // namespace ra2::game

// 0x6FB080
namespace ra2::game {
int TechnoClass::CalcAnimDelay() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FB080.json)
}
} // namespace ra2::game

// 0x6FB740
namespace ra2::game {
void FootClass::UpdateLocomotion()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FB740.json)
}
} // namespace ra2::game

// 0x6FBC90
namespace ra2::game {
int TechnoClass::ShouldNotBeCloaked() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FBC90.json)
}
} // namespace ra2::game

// 0x6FBDC0
namespace ra2::game {
int TechnoClass::ShouldBeCloaked() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FBDC0.json)
}
} // namespace ra2::game

// 0x6FC030
namespace ra2::game {
int TechnoClass::CanMoveToCell() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FC030.json)
}
} // namespace ra2::game

// 0x6FCD40
namespace ra2::game {
int TechnoClass::ProcessDeploymentState()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FCD40.json)
}
} // namespace ra2::game

// 0x6FCDB0
namespace ra2::game {
int TechnoClass::AssignTarget_SyncLog(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FCDB0.json)
}
} // namespace ra2::game

// 0x6FCFA0
namespace ra2::game {
int TechnoClass::CalculateROF()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FCFA0.json)
}
} // namespace ra2::game

// 0x6FD210
namespace ra2::game {
int TechnoClass::CreateFireEffect()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FD210.json)
}
} // namespace ra2::game

// 0x6FD460
namespace ra2::game {
int TechnoClass::CreateRadarBlip()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FD460.json)
}
} // namespace ra2::game

// 0x6FD570
namespace ra2::game {
int TechnoClass::CreateFiringRadarBlip()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FD570.json)
}
} // namespace ra2::game

// 0x6FD620
namespace ra2::game {
int TechnoClass::CreateFireBeamEffect()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FD620.json)
}
} // namespace ra2::game

// 0x6FDB80
namespace ra2::game {
int TechnoClass::ComputeAudioFalloffDamage()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006FDB80.json)
}
} // namespace ra2::game

// 0x700600
namespace ra2::game {
int TechnoClass::HandleCursor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00700600.json)
}
} // namespace ra2::game

// 0x700C40
namespace ra2::game {
int TechnoClass::CanReceivePassengers() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00700C40.json)
}
} // namespace ra2::game

// 0x700D10
namespace ra2::game {
int TechnoClass::IsDeadOrInactive() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00700D10.json)
}
} // namespace ra2::game

// 0x700D50
namespace ra2::game {
int TechnoClass::CanAttack() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00700D50.json)
}
} // namespace ra2::game

// 0x701120
namespace ra2::game {
int TechnoClass::HasActiveParam() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00701120.json)
}
} // namespace ra2::game

// 0x7012C0
namespace ra2::game {
int TechnoClass::FindLowestDamage()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007012C0.json)
}
} // namespace ra2::game

// 0x7036C0
namespace ra2::game {
int TechnoClass::TransitionEffectState()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007036C0.json)
}
} // namespace ra2::game

// 0x703770
namespace ra2::game {
int TechnoClass::StartEffectAudio()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00703770.json)
}
} // namespace ra2::game

// 0x703850
namespace ra2::game {
int TechnoClass::Vt279Thunk0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00703850.json)
}
} // namespace ra2::game

// 0x703B10
namespace ra2::game {
int TechnoClass::CheckTargetCell() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00703B10.json)
}
} // namespace ra2::game

// 0x703E70
namespace ra2::game {
int TechnoClass::ScanNeighborCells()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00703E70.json)
}
} // namespace ra2::game

// 0x704000
namespace ra2::game {
int TechnoClass::IsValidBuildingPlacement()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00704000.json)
}
} // namespace ra2::game

// 0x704240
namespace ra2::game {
int TechnoClass::CheckAdjacencyFlags() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00704240.json)
}
} // namespace ra2::game

// 0x705D50
namespace ra2::game {
int TechnoClass::IsNotBusy() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00705D50.json)
}
} // namespace ra2::game

// 0x705D70
namespace ra2::game {
int TechnoClass::GetBuildAnim() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00705D70.json)
}
} // namespace ra2::game

// 0x706640
namespace ra2::game {
int TechnoClass::UpdateState()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00706640.json)
}
} // namespace ra2::game

// 0x707DD0
namespace ra2::game {
int TechnoClass::ComputeTotalPowerDrain()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00707DD0.json)
}
} // namespace ra2::game

// 0x707E60
namespace ra2::game {
int TechnoClass::ComputeScanDistance() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00707E60.json)
}
} // namespace ra2::game

// 0x707F60
namespace ra2::game {
int TechnoClass::CheckPlacementTileMatch() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00707F60.json)
}
} // namespace ra2::game

// 0x708080
namespace ra2::game {
int TechnoClass::EvaluateMission()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708080.json)
}
} // namespace ra2::game

// 0x708B40
namespace ra2::game {
int TechnoClass::GetCostMultiplier() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708B40.json)
}
} // namespace ra2::game

// 0x708BC0
namespace ra2::game {
int TechnoClass::ComputeAverageValue() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708BC0.json)
}
} // namespace ra2::game

// 0x708C30
namespace ra2::game {
int TechnoClass::GetAmmoCount() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708C30.json)
}
} // namespace ra2::game

// 0x708D70
namespace ra2::game {
int TechnoClass::Vt170()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708D70.json)
}
} // namespace ra2::game

// 0x708D90
namespace ra2::game {
int TechnoClass::SetMoveDestination()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708D90.json)
}
} // namespace ra2::game

// 0x708DC0
namespace ra2::game {
int TechnoClass::GetPrimaryTargetOrFallback() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708DC0.json)
}
} // namespace ra2::game

// 0x708E00
namespace ra2::game {
int TechnoClass::PickAlternateTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708E00.json)
}
} // namespace ra2::game

// 0x708EB0
namespace ra2::game {
int TechnoClass::SelectRandomTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708EB0.json)
}
} // namespace ra2::game

// 0x708FC0
namespace ra2::game {
int TechnoClass::ResponseMove_Pickup()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00708FC0.json)
}
} // namespace ra2::game

// 0x709020
namespace ra2::game {
int TechnoClass::GetSecondaryTargetOrFallback() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00709020.json)
}
} // namespace ra2::game

// 0x709060
namespace ra2::game {
int TechnoClass::GetTertiaryTargetOrFallback() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00709060.json)
}
} // namespace ra2::game

// 0x7090A0
namespace ra2::game {
int TechnoClass::VoiceAttack()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007090A0.json)
}
} // namespace ra2::game

// 0x709820
namespace ra2::game {
int TechnoClass::BeginFiringSequence()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00709820.json)
}
} // namespace ra2::game

// 0x7099E0
namespace ra2::game {
int TechnoClass::IsTimerExpired() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007099E0.json)
}
} // namespace ra2::game

// 0x709A40
namespace ra2::game {
int TechnoClass::CompleteFactoryProduction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00709A40.json)
}
} // namespace ra2::game

// 0x70AD50
namespace ra2::game {
int TechnoClass::GetCellCoordsV2() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070AD50.json)
}
} // namespace ra2::game

// 0x70ADA0
namespace ra2::game {
int TechnoClass::Vt46Thunk()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070ADA0.json)
}
} // namespace ra2::game

// 0x70ADC0
namespace ra2::game {
int TechnoClass::RevealAreaSmall()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070ADC0.json)
}
} // namespace ra2::game

// 0x70AF50
namespace ra2::game {
int TechnoClass::ScanForEnemies()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070AF50.json)
}
} // namespace ra2::game

// 0x70B1D0
namespace ra2::game {
int TechnoClass::RevealAreaConditional()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070B1D0.json)
}
} // namespace ra2::game

// 0x70B280
namespace ra2::game {
int TechnoClass::ComputeAimVector()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070B280.json)
}
} // namespace ra2::game

// 0x70B570
namespace ra2::game {
int TechnoClass::UpdateBodyTilt()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070B570.json)
}
} // namespace ra2::game

// 0x70BCB0
namespace ra2::game {
CoordStruct* TechnoClass::GetTargetCoords(CoordStruct* pCrd) const
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070BCB0.json)
}
} // namespace ra2::game

// 0x70BE50
namespace ra2::game {
int TechnoClass::CalcOffsetFacing() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070BE50.json)
}
} // namespace ra2::game

// 0x70BE80
namespace ra2::game {
int TechnoClass::ShouldSelfHealOneStep() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070BE80.json)
}
} // namespace ra2::game

// 0x70C610
namespace ra2::game {
int TechnoClass::SetFocus(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070C610.json)
}
} // namespace ra2::game

// 0x70C620
namespace ra2::game {
int TechnoClass::CheckCliffTransition() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070C620.json)
}
} // namespace ra2::game

// 0x70CC90
namespace ra2::game {
int TechnoClass::RadarUpdateOn()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070CC90.json)
}
} // namespace ra2::game

// 0x70CCC0
namespace ra2::game {
int TechnoClass::RadarUpdateOff()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070CCC0.json)
}
} // namespace ra2::game

// 0x70CCF0
namespace ra2::game {
int RevealOwnCell()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0070CCF0.json)
}
} // namespace ra2::game

// 0x70CD10
namespace ra2::game {
int TechnoClass::ComputeDamage()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070CD10.json)
}
} // namespace ra2::game

// 0x70D190
namespace ra2::game {
int TechnoClass::GetRangeModifier() const
{
    return 0; // TODO stub - quarantined G42 T9 (orphan body; truth = .omo/ida_cache/func_0x70D190.json)
}
} // namespace ra2::game

// 0x70D1D0
namespace ra2::game {
int TechnoClass::ShouldScanArea() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D1D0.json)
}
} // namespace ra2::game

// 0x70D420
namespace ra2::game {
int TechnoClass::IsPlayerCellPassable() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D420.json)
}
} // namespace ra2::game

// 0x70D460
namespace ra2::game {
int TechnoClass::IsCellPassableFor() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D460.json)
}
} // namespace ra2::game

// 0x70D590
namespace ra2::game {
int TechnoClass::IsCloseEnoughToBuilding() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D590.json)
}
} // namespace ra2::game

// 0x70D670
namespace ra2::game {
int TechnoClass::DecCounter()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D670.json)
}
} // namespace ra2::game

// 0x70D690
namespace ra2::game {
int TechnoClass::ComputeCombatDamage()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D690.json)
}
} // namespace ra2::game

// 0x70D7E0
namespace ra2::game {
int FootClass::ProcessEnterTransport()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D7E0.json)
}
} // namespace ra2::game

// 0x70D8F0
namespace ra2::game {
int TechnoClass::PlaceAtCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D8F0.json)
}
} // namespace ra2::game

// 0x70D990
namespace ra2::game {
int TechnoClass::OnEnterCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D990.json)
}
} // namespace ra2::game

// 0x70DC60
namespace ra2::game {
int TechnoClass::OwnerHasPower() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070DC60.json)
}
} // namespace ra2::game

// 0x70DD20
namespace ra2::game {
int TechnoClass::GetPoweredWeaponIndex() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070DD20.json)
}
} // namespace ra2::game

// 0x70DD50
namespace ra2::game {
int TechnoClass::GetVt252Byte() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070DD50.json)
}
} // namespace ra2::game

// 0x70DDD0
namespace ra2::game {
int TechnoClass::SetSpread()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070DDD0.json)
}
} // namespace ra2::game

// 0x70DE00
namespace ra2::game {
int TechnoClass::SetMember81()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070DE00.json)
}
} // namespace ra2::game

// 0x70DE40
namespace ra2::game {
int TechnoClass::GattlingValueRateDown_GattlingRateDownDelay()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070DE40.json)
}
} // namespace ra2::game

// 0x70DE70
namespace ra2::game {
int TechnoClass::GattlingRateUp_GattlingRateDownReset()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070DE70.json)
}
} // namespace ra2::game

// 0x70E280
namespace ra2::game {
int TechnoClass::ActivateEffect()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070E280.json)
}
} // namespace ra2::game

// 0x70E2B0
namespace ra2::game {
int TechnoClass::IronCurtain()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070E2B0.json)
}
} // namespace ra2::game

// 0x70E300
namespace ra2::game {
int TechnoClass::ResetTimer()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070E300.json)
}
} // namespace ra2::game

// 0x70E380
namespace ra2::game {
int TechnoClass::InvulnerabilityIntensity_SetContext()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070E380.json)
}
} // namespace ra2::game

// 0x70ED10
namespace ra2::game {
int TechnoClass::Update2()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070ED10.json)
}
} // namespace ra2::game

// 0x70ED80
namespace ra2::game {
int TechnoClass::GetAnimationFlags() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070ED80.json)
}
} // namespace ra2::game

// 0x70EE30
namespace ra2::game {
int TechnoClass::CheckFireCooldown() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070EE30.json)
}
} // namespace ra2::game

// 0x70EF00
namespace ra2::game {
int TechnoClass::CanDamageTarget() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070EF00.json)
}
} // namespace ra2::game

// 0x70EFE0
namespace ra2::game {
int TechnoClass::GetMaxSpeed() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070EFE0.json)
}
} // namespace ra2::game

// 0x70F070
namespace ra2::game {
int TechnoClass::GetTypeVt40() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F070.json)
}
} // namespace ra2::game

// 0x70F670
namespace ra2::game {
void FootClass::SetThreatBounds()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F670.json)
}
} // namespace ra2::game

// 0x70F6A0
namespace ra2::game {
int FootClass::ApplyThreatBounds()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F6A0.json)
}
} // namespace ra2::game

// 0x70F850
namespace ra2::game {
int TechnoClass::SetIdleState()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F850.json)
}
} // namespace ra2::game

// 0x70FB50
namespace ra2::game {
int TechnoClass::CanSelfRepair()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070FB50.json)
}
} // namespace ra2::game

// 0x70FBE0
namespace ra2::game {
int TechnoClass::Activate()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070FBE0.json)
}
} // namespace ra2::game

// 0x70FC90
namespace ra2::game {
int TechnoClass::Deactivate()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070FC90.json)
}
} // namespace ra2::game

// 0x70FD70
namespace ra2::game {
int TechnoClass::LinkToBridge()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070FD70.json)
}
} // namespace ra2::game

// 0x70FEE0
namespace ra2::game {
int TechnoClass::EjectPassengers()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070FEE0.json)
}
} // namespace ra2::game

// 0x710470
namespace ra2::game {
int TechnoClass::EnteredOpenTopped()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00710470.json)
}
} // namespace ra2::game

// 0x7104A0
namespace ra2::game {
int TechnoClass::ExitedOpenTopped()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007104A0.json)
}
} // namespace ra2::game

// 0x7104C0
namespace ra2::game {
int TechnoClass::MarkPassengersAsExited()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007104C0.json)
}
} // namespace ra2::game

// 0x7104F0
namespace ra2::game {
void FootClass::UpdatePassengerCoords()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007104F0.json)
}
} // namespace ra2::game

// 0x7106E0
namespace ra2::game {
int TechnoClass::ScalarDtor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007106E0.json)
}
} // namespace ra2::game

// 0x711EC0
namespace ra2::game {
int TechnoClass::GetBuildCost() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00711EC0.json)
}
} // namespace ra2::game

// 0x717800
namespace ra2::game {
int TechnoClass::GetSightRange() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717800.json)
}
} // namespace ra2::game

// 0x729480
namespace ra2::game {
void FootClass::Cleanup()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00729480.json)
}
} // namespace ra2::game

// 0x732580
namespace ra2::game {
int TechnoClass::IsOwnedByHuman() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00732580.json)
}
} // namespace ra2::game

// 0x7335F0
namespace ra2::game {
int TechnoClass::IsCapturableByPlayer() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007335F0.json)
}
} // namespace ra2::game

// 0x736CA0
namespace ra2::game {
int TechnoClass::UpdateUnitAnimation()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00736CA0.json)
}
} // namespace ra2::game

// 0x736D50
namespace ra2::game {
int TechnoClass::IsC4AnimationActive() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00736D50.json)
}
} // namespace ra2::game

// 0x737BA0
namespace ra2::game {
int TechnoClass::DispatchPlayerInput()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00737BA0.json)
}
} // namespace ra2::game

// 0x738890
namespace ra2::game {
int TechnoClass::ValidateMoveType()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00738890.json)
}
} // namespace ra2::game

// 0x738910
namespace ra2::game {
int TechnoClass::SpawnInfantryFromBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00738910.json)
}
} // namespace ra2::game

// 0x738970
namespace ra2::game {
int FootClass::RespondToDestruction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00738970.json)
}
} // namespace ra2::game

// 0x73EFC0
namespace ra2::game {
int TechnoClass::DeployIntoBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0073EFC0.json)
}
} // namespace ra2::game

// 0x7404B0
namespace ra2::game {
int TechnoClass::GetInfantryCursorAction() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007404B0.json)
}
} // namespace ra2::game

// 0x740810
namespace ra2::game {
int TechnoClass::ProcessAIDecision()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00740810.json)
}
} // namespace ra2::game

// 0x740A90
namespace ra2::game {
int TechnoClass::CheckRepairNeeded() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00740A90.json)
}
} // namespace ra2::game

// 0x740B60
namespace ra2::game {
int TechnoClass::FindBestMovementDirection()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00740B60.json)
}
} // namespace ra2::game

// 0x740E50
namespace ra2::game {
int TechnoClass::GetAmmoCount_0() const
{
    return 0; // TODO stub - quarantined G42 T9 (orphan body; truth = .omo/ida_cache/func_0x740E50.json)
}
} // namespace ra2::game

// 0x740EE0
namespace ra2::game {
int GetCrew_0()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00740EE0.json)
}
} // namespace ra2::game

// 0x740EF0
namespace ra2::game {
int TechnoClass::EnterRepairBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00740EF0.json)
}
} // namespace ra2::game

// 0x740F80
namespace ra2::game {
int TechnoClass::GetDeployProgressValue() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00740F80.json)
}
} // namespace ra2::game

// 0x740FD0
namespace ra2::game {
int TechnoClass::CheckUnitFireConstraints() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00740FD0.json)
}
} // namespace ra2::game

// 0x741340
namespace ra2::game {
int TechnoClass::FireWeaponBurst()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00741340.json)
}
} // namespace ra2::game

// 0x7414A0
namespace ra2::game {
int TechnoClass::GetAverageDamageScore() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007414A0.json)
}
} // namespace ra2::game

// 0x7416A0
namespace ra2::game {
int TechnoClass::ProcessSpecialUnitDeployCrush()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007416A0.json)
}
} // namespace ra2::game

// 0x7440B0
namespace ra2::game {
int TechnoClass::ReturnCapturedFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007440B0.json)
}
} // namespace ra2::game

// 0x744100
namespace ra2::game {
int TechnoClass::SelectAITarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00744100.json)
}
} // namespace ra2::game

// 0x744180
namespace ra2::game {
int TechnoClass::AreBuildingFlagsClear() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00744180.json)
}
} // namespace ra2::game

// 0x7441B0
namespace ra2::game {
int TechnoClass::MarkCellImpassable()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007441B0.json)
}
} // namespace ra2::game

// 0x744210
namespace ra2::game {
int TechnoClass::ClearCellImpassable()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00744210.json)
}
} // namespace ra2::game

// 0x744270
namespace ra2::game {
int TechnoClass::CanBeTargeted() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00744270.json)
}
} // namespace ra2::game

// 0x744720
namespace ra2::game {
int TechnoClass::NotifyTeamOnDestruction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00744720.json)
}
} // namespace ra2::game

// 0x7463A0
namespace ra2::game {
int TechnoClass::TransferSlavedUnit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007463A0.json)
}
} // namespace ra2::game

// 0x746420
namespace ra2::game {
int TechnoClass::CaptureTurret()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00746420.json)
}
} // namespace ra2::game

// 0x7464E0
namespace ra2::game {
int TechnoClass::TransferTurret()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007464E0.json)
}
} // namespace ra2::game

// 0x746670
namespace ra2::game {
int TechnoClass::ApplyObjectEffect()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00746670.json)
}
} // namespace ra2::game

// 0x746720
namespace ra2::game {
int TechnoClass::ClearAllTargets()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00746720.json)
}
} // namespace ra2::game

// 0x746750
namespace ra2::game {
int TechnoClass::IsGuardingTarget() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00746750.json)
}
} // namespace ra2::game

// 0x746B20
namespace ra2::game {
int TechnoClass::GetCommandTooltip() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00746B20.json)
}
} // namespace ra2::game

// 0x746CD0
namespace ra2::game {
int TechnoClass::SelectAttackWeapon()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00746CD0.json)
}
} // namespace ra2::game

// 0x750030
namespace ra2::game {
bool FootClass::CheckAccelLimit() const
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00750030.json)
}
} // namespace ra2::game

// 0x7500D0
namespace ra2::game {
int FootClass::GetField() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007500D0.json)
}
} // namespace ra2::game

// 0x773070
namespace ra2::game {
int TechnoClass::GetWeaponRange(int weapon_index) const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00773070.json)
}
} // namespace ra2::game

// 0x4DE580
namespace ra2::game {
int FootClass::ValidateFoundation()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DE580.json)
}
} // namespace ra2::game

