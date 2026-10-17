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
#include "e4/classes/Math_e4.hpp"  // g57c5 W5d scope supply
#include "system/map.hpp"
struct AudioMixer;  // W13-C fwd (e4/classes/AudioMixer_e4.hpp 载体; (AudioMixer*) cast 用法)

// G57w10: q000 externs (truth e4_globals_decls)
extern unsigned char vt_DynamicVectorClass_AbstractClass[4];  // data: 0x7E91EC  // G57w10 vftable residue fix
extern unsigned char vt_DynamicVectorClass_ParticleSystemTypeClass_const[4];  // data: 0x7E4444  // G57w10 vftable residue fix
extern unsigned char vt_DynamicVectorClass_PlanningNodeClass[4];  // data: 0x7EFE44  // G57w10 vftable residue fix
extern unsigned char vt_DynamicVectorClass_TechnoClass[4];  // data: 0x7E17AC  // G57w10 vftable residue fix
extern unsigned char vt_VectorClass_ParticleSystemTypeClass_const[4];  // data: 0x7E4424  // G57w10 vftable residue fix
extern unsigned char vt_VectorClass_TechnoClass[4];  // data: 0x7E180C  // G57w10 vftable residue fix
// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----extern int AudioMixer;  // 词表 (canon 无条目, int 兜底) L880
// ---- g57c5 W5 vocab (declaration-only) ----
namespace ra2 {
class Math;  // g57c5 W5 fwd
int AudioController_GetOffset(AudioController *p_this);  // x4:ida@0x408520
int DListNode_InitEmpty(DListNode *p_this);  // x4:ida@0x4072d0
int Debug_Log();  // x4:empty@0x4068e0
int ObjectClass_ClearFlags2(ObjectClass *p_this);  // x4:ida@0x401170
int Queue_GetNext(Queue *p_this);  // x4:ida@0x407470
int TechnoClass_MapHouseRelationIndex(TechnoClass *p_this);  // x4:ida@0x50dac0
}
// ---- g57c5 W5 end ----
extern int CellCoord;  // 词表 (canon 无条目, int 兜底) L1335
extern int Coord;  // 词表 (canon 无条目, int 兜底) L1411
extern int Descriptor;  // 词表 (canon 无条目, int 兜底) L1327
extern int IFlyControl;  // 词表 (canon 无条目, int 兜底) L1327
extern int MapClass;  // 词表 (canon 无条目, int 兜底) L1263
extern int Queue;  // 词表 (canon 无条目, int 兜底) L298
// g57b5 W6audit: int 兜底移除 (member-access 用法会放大为 C2109 群; 还原为 C2065 债): extern int Type;  // 词表 (canon 无条目, int 兜底) L1327
// ---- g57b5 W6 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Cell_IsBuildable(int p0, char p1, char p2, int p3, int p4, int p5, char p6);  // x4:signals@0x4834a0
int LayerClass_Pathfinding_Find(int* p0, int p1, int* p2, int16_t* p3, int p4, int p5, int p6, int p7, int p8, int p9, char p10, char p11, char p12, char p13, int16_t* p14, char p15, char p16);  // x4:signals@0x56dc20
int Math_Sqrt(double p0);  // x4:signals@0x4cac40
int AudioController_GetOffset(AudioController *p_this);  // x4:ida@0x408520
int DListNode_InitEmpty(DListNode *p_this);  // x4:ida@0x4072d0
int Debug_Log();  // x4:empty@0x4068e0
int IsBuildable(int p0, char p1, char p2, int p3, int p4, int p5, char p6);  // x4:signals@0x4834a0
int ObjectClass_ClearFlags2(ObjectClass *p_this);  // x4:ida@0x401170
int Pathfinding_Find(int* p0, int p1, int* p2, int16_t* p3, int p4, int p5, int p6, int p7, int p8, int p9, char p10, char p11, char p12, char p13, int16_t* p14, char p15, char p16);  // x4:signals@0x56dc20
int Queue_GetNext(Queue *p_this);  // x4:ida@0x407470
int TechnoClass_MapHouseRelationIndex(TechnoClass *p_this);  // x4:ida@0x50dac0
int AudioController_GetOffset(AudioController *p_this);  // x4:ida@0x408520
int Cell_GetGroundHeight(int* p0);  // x4:signals@0x578080
int DListNode_InitEmpty(DListNode *p_this);  // x4:ida@0x4072d0
int Debug_Log(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 词表 (纯变参兜底)
int LayerClass_CoordinatesLegal(int16_t* p0);  // x4:signals@0x568300
int MapClass_FindPlacementCellsAlt(int* p0, int p1);  // x4:signals@0x703590
int ObjectClass_ClearFlags2(ObjectClass *p_this);  // x4:ida@0x401170
int ObjectClass_HasLocation(ObjectClass *p_this);  // x4:ida@0x70fec0
int Queue_GetNext(Queue *p_this);  // x4:ida@0x407470
int TechnoClass_MapHouseRelationIndex(TechnoClass *p_this);  // x4:ida@0x50dac0
int TriggerTypeClass_ReadINI(int* p0, int p1, uint8_t* p2, int p3, char p4);  // x4:signals@0x6fc0b0
int AddObject(int* p0);  // x4:signals@0x4733a0
int FindOpenNeighbor(int* p0, int p1, int p2, int p3, int p4, int p5, int p6);  // x4:signals@0x4aa440
int FindPlacementCellsAlt(int* p0, int p1);  // x4:signals@0x703590
int GetGroundHeight(int* p0);  // x4:signals@0x578080
int GetNext(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int Log(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
} // namespace gamemd
// ---- g57b5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) ----
namespace gamemd {
    void AudioMixer_Init(void *a1);                    // raw 0x402080 AudioMixer::Init;
    void sub_7DC720(int a1);                       // 0x7DC720 真形 (stream_ext.hpp:12 同形);
    void MapClass_RevealArea2(void *self, int *coords, int a3, int a4, int a5);  // 0x567DA0 真形;
    void *Coord_To_Cell(void *a1, void *a2);           // raw Coord::To_Cell 家族 (fn_42:3240);
    void *CellCoord_To_CellObj(void *a1, void *a2);    // 0x5657A0 真形 (core/cellcoord.hpp 单源);
    struct stru_87F5F0_host {                      // 0x87F5F0 宿主 (object/supplied_bodies:106 同款)
        unsigned char q000[0x58];
        unsigned char __pad_58[0x280 - 0x58];      // 覆盖 __pad_58[416] = +0x1F8
    };
    extern stru_87F5F0_host stru_87F5F0;          // data: 0x87F5F0
} // namespace gamemd
// ---- g57b5 W3 end ----
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
extern unsigned int dword_A8E370; // data: 0x8E370 (unit 数组计数)
extern unsigned int dword_A8E364;          // data: 0x8E364 (unit 数组基址槽)
extern unsigned int * Array_Get(void *arr, int idx);   // 0x65AD40 (IDA: Array::Get)
extern int Cell_IsBuildable(int p0, char p1, char p2, int p3, int p4, int p5, char p6);  // x4:signals@0x4834a0
extern unsigned int * LayerClass_Pathfinding_Find(int* p0, int p1, int* p2, int16_t* p3, int p4, int p5, int p6, int p7, int p8, int p9, char p10, char p11, char p12, char p13, int16_t* p14, char p15, char p16);  // x4:signals@0x56dc20
// G42.33 b4 W7c: 缺席全局/原型 (ApplyDamageEffects/ComputeTargetAngle 区)
extern int g_TerrainBridgeIndex;             // data: 桥 tile 基索引
extern void * Return_HRESULT_Fail(int a1, int a2, int a3);     // (IDA: Return::HRESULT_Fail)
extern void * GetWarheadVersusMultiplier(unsigned int a1, unsigned int a2, int a3, int *a4);
extern int TerrainClass_ProcessSlope(int16_t* p0);  // x4:signals@0x574000
extern int AudioFile_Stop(void *self);                         // (IDA: AudioFile::Stop)
extern int PlaySoundEffectAt(int *a1, unsigned int a2, unsigned int *a3, unsigned int a4, int a5, int a6);  // (IDA: PlaySoundEffectAt)
extern int World_ToScreen(int* p0, int* p1);  // x4:signals@0x6d2070
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
    unsigned int q004;
    unsigned char q008[0x34 - 0x8];
    unsigned char q034[0xFC - 0x34];
    unsigned char q0FC[0x240 - 0xFC];   // 覆盖 q0FC[324] = +0x240 (team 同款)
};
extern DSurface_ViewBounds_flat DSurface_ViewBounds;  // data: 0x886FA0
struct stru_87F5F0_host {
    unsigned char q000[0x58];
    unsigned char __pad_58[0x280 - 0x58];  // 覆盖 __pad_58[416] = +0x1F8 (team 同款)
};
extern stru_87F5F0_host stru_87F5F0;    // data: 0x87F5F0
// G42.34 W1: BuildingClass 迁移体词汇供给
extern int g_BuildingClassPool;                 // data: 0x89C848 (globals_core 同款裸 extern)
extern int FootClass_Array;                  // data: 0x8B3DC0  // G42.34 W2: e4_globals 同款裸 extern
int PlayAudioAt2(unsigned int a1, int *a2, int a3);            // 0x750e20 真形
int TimedCreateUnitAtCoords(int *a1, int a2, int a3, int a4);  // 0x6b5c90 真形
int StandardCreateUnitAtCoords(int *a1, int a2, int a3, int a4); // 0x6b59a0 真形
void * RandomCoordScatter(int* p0, int* p1, int p2, char p3);  // x4:signals@0x49f420
double Math_CalcAngle(double a1, double a2);     // (IDA: Math::CalcAngle) 真形 (0x43ebdd/0x43ee13 家族)
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
int MapClass_RevealArea0(int* p0, int p1, int* p2, char p3, char p4, char p5, char p6, char p7);  // x4:signals@0x5673a0
int MapClass_RevealArea1(int* p0, int p1, int* p2, char p3, int p4, char p5, char p6, char p7);  // x4:signals@0x5678e0
int MapClass_RevealArea2(int* p0, int p1, int p2, int p3);  // x4:signals@0x567da0
int MapClass_GetTileIndex(int16_t* p0, int p1, char p2);  // x4:signals@0x56d230
int MapClass_FindPlacementCellsAlt(int* p0, int p1);  // x4:signals@0x703590
int MapClass_FillRevealBuffer(uint16_t* p0, uint8_t* p1);  // x4:signals@0x5683c0
int MapClass_ApplyTerrainDamage(int16_t* p0);  // x4:signals@0x574c20
int MapClass_ApplyOverlayReveal(uint16_t* p0, char* p1);  // x4:signals@0x5687f0
int LayerClass_CoordinatesLegal(int16_t* p0);  // x4:signals@0x568300
int LayerClass_IsWithinUsableArea(int16_t* p0, char p1);  // x4:signals@0x578460
int GScreenClass_MarkForRedraw(int p0);  // x4:signals@0x4f42f0
int Team_AllMembersValid(Team *p_this);  // x4:ida@0x65ae30
int ScriptAction_ExecuteMissionCmd(TechnoClass *p_this);  // x4:ida@0x6ffbe0
int ScriptAction_DecrementRefCount(int p0);  // x4:signals@0x6351e0
int ScriptAction_GetScreenPos(int* p0);  // x4:signals@0x634400
void * Coord_Subtract(int p0, int p1, int p2);  // x4:signals@0x41c230
void * Coord_To_Cell(int* p0);  // x4:signals@0x565730
void * Coord_To_Screen(int* p0, int* p1);  // x4:signals@0x6d2140
void * Coord_To_ScreenRaw(int* p0, int* p1);  // x4:signals@0x6d1f10
void * Coord_Divide(int* p0, int p1);  // x4:signals@0x710700
void * Coord_WorldToScreen(int* p0, int* p1, char p2);  // x4:signals@0x6557f0
int Coord_Length(Coord *p_this);  // x4:ida@0x41c380
int CellCoord_To_CellObj(int16_t* p0);  // x4:signals@0x5657a0
int Math_RoundToInt(double a);           // 0x7C5F00 (G42.33 b4 W7: double 形)
double Math_Sqrt(double a);              // 0x4CAC40 (G42.33 b4 W7: double 形)
int Math_SinCos(double p0);  // x4:signals@0x4cacb0
int Math_ArcTan(double p0);  // x4:signals@0x4cade0
int Math_CalcAngle(double p0, double p1);  // x4:signals@0x4cae30
extern unsigned int dword_817A78;        // data: 0x817A78
extern unsigned int g_DDrawSurfaceManager[];  // data: Scenario 域 (scenario 成员区)
int sub_7DC720(int a2);  // G42.33 W5: 全局自由形 (team WinAPI::Wrapper 同义)
void * MapClass_FindPlacementCellsAlt(void *self, int a1, int a2);  // 0x703590 (IDA: MapClass::FindPlacementCellsAlt)
void * Team_GetMember(void *self, int a2);                          // 0x65AD30 (IDA: Team::GetMember)
int CreateInstanceCOM(void *a1, void *a2, int a3, unsigned int a4);  // e4 语料同形 (IID 实例化)

// 0x401170
namespace ra2::game {
int ObjectClass::ClearFlags2() {
  this->vfptr = (void *)((int)this->vfptr & ~2u); /*0x401179*/
  this->customSound_controller[0] &= ~2u; /*0x401180*/
  this->owningHouseIndex &= ~2u; /*0x401188*/
  return -3; /*0x40118b*/
}
} // namespace ra2::game

// 0x402040
namespace ra2::game {
int * AudioController::Constructor()
{
  int v2; // ebx

  v2 = operator new(0x1C0u); /*0x402055*/
  memset((void *)v2, 0, 0x1C0u); /*0x402060*/
  DListNode::InitEmpty((DListNode *)v2); /*0x402067*/
  v2->u32_A8 = 0; /*0x40206e*/
  v2->u32_A4 = 0; /*0x402074*/
  AudioMixer::Init(&v2->AudioMixer_D8); /*0x402080*/
  v2->u32_15C = AudioController::AdvanceQueue; /*0x402085*/
  v2->u32_160 = AudioController::UpdatePlayback; /*0x40208f*/
  v2->u32_164 = AudioController::CleanupStream; /*0x402099*/
  v2->u32_B0 = 0; /*0x4020a3*/
  v2->u32_B4 = 0; /*0x4020a9*/
  v2->u32_B8 = 0; /*0x4020af*/
  v2->u32_BC = 0; /*0x4020b5*/
  v2->u32_C0 = 0; /*0x4020bb*/
  v2->u32_C = 1; /*0x4020c1*/
  v2->u32_A8 = 0; /*0x4020c8*/
  v2->u32_A4 = 0; /*0x4020ce*/
  v2->u32_A0 = 0; /*0x4020d4*/
  v2->u32_94 = dword_87DE30; /*0x4020e2*/
  v2->u32_90 = 0; /*0x4020e8*/
  v2->u32_98 = 0; /*0x4020ee*/
  v2->u32_9C = 0; /*0x4020f4*/
  AudioMixer::Init(&v2->u32_10); /*0x4020fa*/
  v2->u32_168 = 0; /*0x402103*/
  v2->u32_AC = this; /*0x402109*/
  v2->u32_D4 = this->u32_1D0; /*0x402115*/
  memcpy(&v2->u32_17C, &this->q044, 0x20u); /*0x402129*/
  v2->u32_19C = 0; /*0x40212b*/
  v2->u32_1A0 = 0; /*0x402131*/
  if ( !this->u32_1D0->vt_slot_4(v2) ) /*0x40213f*/
    return (int *)v2; /*0x402168*/
  if ( v2 ) /*0x402148*/
  {
    v2->u32_D4->vt_slot_8(); /*0x402152*/
    operator delete(((void *)v2)); /*0x402156*/
  }
  return 0; /*0x40215e*/
}
} // namespace ra2::game

// 0x4022C0
namespace ra2::game {
int AudioController::AdvanceQueue()
{
  int (*v2)(void); // eax
  int result; // eax
  Queue *v4; // ecx
  int Next; // eax
  int v6; // eax

  v2 = (int (*)(void))this->u32_B0; /*0x4022c6*/
  if ( v2 ) /*0x4022ce*/
  {
    result = v2(); /*0x4022d0*/
    if ( result ) /*0x4022d4*/
    {
      this->u32_174 = 0; /*0x4022d6*/
      this->u32_178 = 0; /*0x4022dc*/
      this->u32_170 = 0; /*0x4022e2*/
      return result; /*0x4022ea*/
    }
  }
  else
  {
    v4 = (Queue *)this->u32_16C; /*0x4022eb*/
    if ( v4 ) /*0x4022f3*/
    {
      Next = Queue::GetNext(v4); /*0x4022f5*/
      this->u32_16C = Next; /*0x4022fc*/
      if ( Next ) /*0x402302*/
      {
        this->u32_170 = *(unsigned int *)(Next + 12); /*0x402308*/
        v6 = *(unsigned int *)(Next + 16); /*0x40230e*/
        this->u32_174 = v6; /*0x402311*/
        this->u32_178 = v6; /*0x402317*/
        return 0; /*0x402320*/
      }
    }
    this->u32_174 = 0; /*0x402321*/
  }
  return 0; /*0x4022e8*/
}
} // namespace ra2::game

// 0x402330
namespace ra2::game {
int AudioController::UpdatePlayback()
{
  unsigned int *v2; // edi
  int Offset; // eax
  int v4; // eax
  unsigned int *v5; // eax
  int v6; // eax
  void (__thiscall *v7)(AudioController *); // eax

  if ( this->u32_A8 ) /*0x402334*/
  {
    if ( this->u32_A8 != -1 ) /*0x402347*/
      --this->u32_A8; /*0x402350*/
    v2 = (unsigned int *)this->u32_168; /*0x402356*/
    if ( v2 ) /*0x40235e*/
    {
      Offset = AudioController::GetOffset(this->AudioController_D40)); /*0x402362*/
      this->u32_16C = Offset; /*0x402369*/
      if ( Offset ) /*0x40236f*/
      {
        this->u32_170 = *(unsigned int *)(Offset + 12); /*0x402374*/
        v4 = *(unsigned int *)(Offset + 16); /*0x40237a*/
        this->u32_174 = v4; /*0x40237d*/
        this->u32_178 = v4; /*0x402383*/
        *v2 = 0; /*0x402389*/
      }
      else
      {
        v5 = (unsigned int *)this->u32_168; /*0x402391*/
        this->u32_170 = *v5; /*0x402399*/
        v6 = v5[1]; /*0x40239f*/
        this->u32_174 = v6; /*0x4023a2*/
        this->u32_178 = v6; /*0x4023a8*/
      }
    }
  }
  else
  {
    this->u32_168 = 0; /*0x4023b0*/
  }
  v7 = (void (__thiscall *)(AudioController *))this->u32_B4; /*0x4023ba*/
  if ( v7 ) /*0x4023c2*/
    v7(this); /*0x4023c6*/
  if ( this->u32_168 ) /*0x4023c8*/
    this->u32_D4->vt_slot_36(); /*0x4023da*/
  return 0; /*0x4023dd*/
}
} // namespace ra2::game

// 0x4023F0
namespace ra2::game {
int AudioController::CleanupStream()
{
  int v2; // eax
  int (__thiscall *v3)(AudioController *); // eax

  this->u32_168 = 0; /*0x4023f3*/
  v2 = this->u32_A4; /*0x4023fd*/
  (*((unsigned char *)&(v2))) = v2 & 0xFA; /*0x402403*/
  this->u32_A4 = v2; /*0x402405*/
  this->u32_A8 = 0; /*0x40240b*/
  AudioMixer::Init((AudioMixer *)this->AudioController_field_10); /*0x402418*/
  v3 = (int (__thiscall *)(AudioController *))this->u32_B8; /*0x40241d*/
  if ( v3 ) /*0x402425*/
    return v3(this); /*0x40242a*/
  else
    return 0; /*0x40242c*/
}
} // namespace ra2::game

// 0x405BE0
namespace ra2::game {
int AudioController::Init()
{
  this->AudioController_field_0C = &dword_87E294; /*0x405be2*/
  this->AudioController_field_00[0] = 0; /*0x405be9*/
  this->AudioController_field_04 = 0; /*0x405beb*/
  this->AudioController_field_08 = 0; /*0x405bee*/
  return 0; /*0x405bf1*/
}
} // namespace ra2::game

// 0x408520
namespace ra2::game {
int AudioController::GetOffset() {
  return Queue::GetNext(&this->AudioController_field_08);
}
} // namespace ra2::game

// 0x41BEA0
namespace ra2::game {
int ObjectClass::GetCellCoords_Alt() const
{

  unsigned __int16 *v2; // [esp+0h] [ebp-4h]
  unsigned __int16 **v3; // [esp+8h] [ebp+4h]

  LOWORD(v2) = this->field_9C / 256; /*0x41beb3*/
  HIWORD(v2) = *(unsigned int *)this->__pad_A0 / 256; /*0x41beca*/
  *v3 = v2; /*0x41bed7*/
  return (int)v3; /*0x41beda*/

}
} // namespace ra2::game

// 0x41BEF0
namespace ra2::game {
int TechnoClass::selectTarget()
{
  int result; // eax

  (*((unsigned char *)&(result))) = 1; /*0x41bef0*/
  return result; /*0x41bef2*/
}
} // namespace ra2::game

// 0x41BFF0
namespace ra2::game {
int TechnoClass::vt_entry_434()
{
  int result; // eax

  (*((unsigned char *)&(result))) = 0; /*0x41bff0*/
  return result; /*0x41bff2*/
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
namespace gamemd {  
// G42.33 批 3: BuildingClass 载体在 gamemd (structure/building.hpp)
{
  BuildingTypeClass *Type; // eax
  int v4; // edx
  int INI; // ebp
  int v6; // edi
  int v7; // ebx
  unsigned int *Value; // eax
  int16_t v9; // dx
  unsigned char *v10; // [esp+10h] [ebp+4h]
  int v11; // [esp+14h] [ebp+8h]
  int v12; // [esp+18h] [ebp+Ch] BYREF

  Type = hpp->Type; /*0x447f15*/
  if ( Type->CanBeOccupied /*0x447f47*/
    && (!Type->CanOccupyFire || !(*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 258))(hpp))
    || (uint8_t)ObjectClass::HasLocation((ObjectClass *)hpp) )
  {
    return 5; /*0x447f47*/
  }
  if ( hpp->Type->EMPulseCannon ) /*0x447f5a*/
    return 6; /*0x447f6c*/
  if ( (*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 97))(hpp) == 19 /*0x447f8f*/
    || (*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 97))(hpp) == 18 )
  {
    return 5; /*0x44805c*/
  }
  if ( !(*((uint8_t (__thiscall **)(BuildingClass *))hpp->vfptr + 212))(hpp) ) /*0x447f99*/
    return 6; /*0x447fa5*/
  if ( hpp->DelayBeforeFiring ) /*0x447fae*/
    return 3; /*0x447fba*/
  INI = TriggerTypeClass::ReadINI((TechnoClass *)hpp, v4, v10, v11, v12); /*0x447fd9*/
  if ( INI ) /*0x447fdd*/
    return INI; /*0x447fdd*/
  if ( !(*((uint8_t (__thiscall **)(BuildingClass *))hpp->vfptr + 255))(hpp) ) /*0x447fe3*/
    return INI; /*0x447fe3*/
  v6 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *, unsigned char *))hpp->vfptr + 314))(hpp, &v12, v10); /*0x448004*/
  v7 = hpp->Type->TurretAnimIsVoxel != 0 ? 0 : 8;
  Value = ProgressTimer::GetValue((ProgressTimer *)hpp->primaryFacing, &v12); /*0x448021*/
  (*((unsigned char *)&(v9))) = 0; /*0x448029*/
  (*(((unsigned char *)&(v9)) + (sizeof(v9) - 1))) = v7; /*0x44802b*/
  if ( abs16(v9) >= (int)abs16(*(unsigned short *)Value - v6) ) /*0x448045*/
    return INI; /*0x448053*/
  else
    return 2; /*0x448049*/
}
  if ( hpp->Type->EMPulseCannon ) /*0x447f5a*/
    return 6; /*0x447f6c*/
  if ( (*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 97))(hpp) == 19 /*0x447f8f*/
    || (*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 97))(hpp) == 18 )
  {
    return 5; /*0x44805c*/
  }
  if ( !(*((uint8_t (__thiscall **)(BuildingClass *))hpp->vfptr + 212))(hpp) ) /*0x447f99*/
    return 6; /*0x447fa5*/
  if ( hpp->DelayBeforeFiring ) /*0x447fae*/
    return 3; /*0x447fba*/
  INI = TriggerTypeClass::ReadINI((TechnoClass *)hpp, v4, v10, v11, v12); /*0x447fd9*/
  if ( INI ) /*0x447fdd*/
    return INI; /*0x447fdd*/
  if ( !(*((uint8_t (__thiscall **)(BuildingClass *))hpp->vfptr + 255))(hpp) ) /*0x447fe3*/
    return INI; /*0x447fe3*/
  v6 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *, unsigned char *))hpp->vfptr + 314))(hpp, &v12, v10); /*0x448004*/
  v7 = hpp->Type->TurretAnimIsVoxel != 0 ? 0 : 8;
  Value = ProgressTimer::GetValue((ProgressTimer *)hpp->primaryFacing, &v12); /*0x448021*/
  v9 = ((v9) & 0xFFFFFF00u) | ((unsigned int)(0) & 0xFFu); /*0x448029*/
  v9 = ((v9) & 0xFFFF00FFu) | (((unsigned int)(v7) & 0xFFu) << 8); /*0x44802b*/
  if ( abs16(v9) >= (int)abs16(*(unsigned short *)Value - v6) ) /*0x448045*/
    return INI; /*0x448053*/
  else
    return 2; /*0x448049*/
}
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
  int result; // eax

  (*((unsigned char *)&(result))) = 1; /*0x459d90*/
  return result; /*0x459d92*/
}
} // namespace ra2::game

// 0x459DD0
namespace ra2::game {
bool TechnoClass::StubReturnFalse2()
{
  int result; // eax

  (*((unsigned char *)&(result))) = 0; /*0x459dd0*/
  return result; /*0x459dd2*/
}
} // namespace ra2::game

// 0x487150
namespace ra2::game {
int FootClass::checkTerrainSpeed(int a2) {
  ++this->visibilityFlags + a2); /*0x487154*/
  return a2; /*0x487159*/
}
} // namespace ra2::game

// 0x487160
namespace ra2::game {
int FootClass::updateLocomotion(int a2) {
  --this->visibilityFlags + a2); /*0x487164*/
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
  int *v3; // edi
  int v4; // kr04_4
  int v5; // eax
  int v6; // edx
  int (__thiscall **vtable0)(TechnoClass *, unsigned int *); // eax
  unsigned int v9[3]; // [esp+8h] [ebp-18h] BYREF
  unsigned char v10[12]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (int *)(*(int (__thiscall **)(int, unsigned char *, TechnoClass *))(a2->IsAllocated)(a2, v10, this); /*0x4dba66*/
  v4 = *v3; /*0x4dba73*/
  v5 = v3[1]; /*0x4dba75*/
  v9[2] = 0; /*0x4dba82*/
  v6 = (int16_t)(v5 / 256); /*0x4dba95*/
  vtable0 = (int (__thiscall **)(TechnoClass *, unsigned int *))this->vfptr; /*0x4dba98*/
  v9[0] = ((int16_t)(v4 / 256) << 8) + 128; /*0x4dbaa0*/
  v9[1] = (v6 << 8) + 128; /*0x4dbab4*/
  return vtable0[179](this, v9); /*0x4dbabe*/
}
} // namespace ra2::game

// 0x4DEE50
namespace ra2::game {
int FootClass::vt_entry_530(int a2, int a3, int a4)
{
  int (__thiscall **vtable0)(FootClass *, int, int, int, int *); // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this; /*0x4dee50*/
  vtable0 = (int (__thiscall **)(FootClass *, int, int, int, int *))this->vfptr; /*0x4dee55*/
  v6 = -1; /*0x4dee67*/
  return vtable0[331](this, a2, a3, a4, &v6); /*0x4dee76*/
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
  int v1; // eax

  v1 = this->u32_6C4; /*0x522510*/
  return v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30; /*0x52252c*/
}
} // namespace ra2::game

// 0x522CB0
namespace ra2::game {
int TechnoClass::IsEnteringOrCapturingStructure() const
{
  int v1; // eax

  v1 = this->u32_6C4; /*0x522cb0*/
  return v1 == 11 /*0x522cea*/
      || v1 == 12
      || v1 == 13
      || v1 == 14
      || v1 == 15
      || v1 == 34
      || v1 == 35
      || v1 == 36
      || v1 == 20
      || v1 == 21;
}
} // namespace ra2::game

// 0x556630
namespace ra2::game {
int ObjectClass::GetHeight() const {
  return (int)this->m_Prev->__pad_0; /*0x556633*/
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
  return this->isAliveFlag == 0; /*0x5f669d*/
}
} // namespace ra2::game

// 0x6EF9E0
namespace ra2::game {
int TechnoClass::IsDeployed() const
{
  int result; // eax

  (*((unsigned char *)&(result))) = this /*0x6efa08*/
                && this->isAliveFlag
                && (result = this->health) != 0
                && ((result = dword_A8E7AC) != 0 || (result = (uint8_t)this->inLimbo, !(unsigned char)result));
  return result; /*0x6efa0a*/
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

  *v2 = *(unsigned int *)&g_BuildingLoadQueue_Array.ImageFile[24]; /*0x708c1a*/
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
  int result; // eax

  return result; /*0x70f010*/
}
} // namespace ra2::game

// 0x70F050
namespace ra2::game {
int TechnoClass::ProcessCellClearance()
{
  unsigned int *v2; // [esp+Ch] [ebp+4h]

  *v2 = -1; /*0x70f05e*/
  v2[1] = -1; /*0x70f063*/
  v2[2] = -1; /*0x70f066*/
  return (int)v2; /*0x70f069*/
}
} // namespace ra2::game

// 0x70F100
namespace ra2::game {
int TechnoClass::COMStub_Return0_307()
{
  int result; // eax

  return result; /*0x70f100*/
}
} // namespace ra2::game

// 0x711EB0
namespace ra2::game {
int TechnoClass::GetMember388() const {
  return *&this->u32_14B0; /*0x711eb6*/
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
  int result; // eax

  *(float *)this = (double)a2 * 0.01; /*0x7500ea*/
  return result; /*0x7500ec*/
}
} // namespace ra2::game

// 0x7640B0
namespace ra2::game {
int AbstractClass::setSWCharge(int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  v2 = this->vtable3; /*0x7640bb*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x7640c0*/
  {
    v3 = 0; /*0x7640c2*/
    if ( v2 <= 0 ) /*0x7640c6*/
      return 1; /*0x764100*/
    v4 = *(unsigned int *)(a2 + 4); /*0x7640c8*/
    v5 = *&this->vtable2; /*0x7640cb*/
    v6 = (unsigned int *)(v4 + 8); /*0x7640ce*/
    v7 = v4 - (unsigned int)v5; /*0x7640d1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x7640ed*/
    {
      ++v3; /*0x7640ef*/
      v6 += 3; /*0x7640f0*/
      v5 += 3; /*0x7640f3*/
      if ( v3 >= v2 ) /*0x7640f8*/
        return 1; /*0x7640f8*/
    }
  }
  return 0; /*0x7640fa*/
}
} // namespace ra2::game

// 0x402220
namespace ra2::game {
int ObjectClass::Cleanup()
{
  int v2; // ebp
  int *v3; // edi
  unsigned int *v4; // edx
  unsigned int *lastLayer; // edx
  unsigned int *v6; // edx
  unsigned int *v7; // edx
  int result; // eax
  unsigned int *v9; // edx

  v2 = this->u32_AC; /*0x402226*/
  v3 = &this->q0D8; /*0x40222c*/
  AudioMixer::Init(&this->objectTypeFlags); /*0x402234*/
  EndFrameAudioMixer(v3, &this->uniqueId); /*0x402240*/
  ObjectClass::ClearFlags2(&this->uniqueId); /*0x402247*/
  v4 = *&this->isAliveFlag; /*0x40224c*/
  if ( v4 ) /*0x402254*/
  {
    EndFrameAudioMixer(v3, v4); /*0x402258*/
    ObjectClass::ClearFlags2(*&this->isAliveFlag); /*0x402263*/
  }
  lastLayer = (unsigned int *)this->lastLayer; /*0x402268*/
  if ( lastLayer ) /*0x402270*/
    EndFrameAudioMixer(v3, lastLayer); /*0x402274*/
  v6 = *&this->isInLogic; /*0x402279*/
  if ( v6 ) /*0x402281*/
    EndFrameAudioMixer(v3, v6); /*0x402285*/
  v7 = (unsigned int *)this->location[0]; /*0x40228a*/
  if ( v7 ) /*0x402292*/
    EndFrameAudioMixer(v3, v7); /*0x402296*/
  result = EndFrameAudioMixer(v3, (unsigned int *)(v2 + 104)); /*0x4022a0*/
  v9 = *(unsigned int **)(v2 + 232); /*0x4022a5*/
  if ( v9 ) /*0x4022ad*/
    return EndFrameAudioMixer(v3, v9); /*0x4022b1*/
  return result; /*0x4022b6*/
}
} // namespace ra2::game

// 0x40DD20
namespace ra2::game {
void * AbstractClass::IsTechno()
{
  void *result; // eax

  if ( !this ) /*0x40dd25*/
    return 0; /*0x40dd45*/
  switch ( (*((int (__thiscall **)(unsigned int))this->vfptr + 11))(this) ) /*0x40dd3a*/
  {
    case 1: /*0x40dd3a*/
    case 2: /*0x40dd3a*/
    case 6: /*0x40dd3a*/
    case 15: /*0x40dd3a*/
      result = this; /*0x40dd41*/
      break; /*0x40dd44*/
    default:
      return 0;
  }
  return result; /*0x40dd43*/
}
} // namespace ra2::game

// 0x40DD70
namespace ra2::game {
void * AbstractClass::IsTechnoType()
{
  void *result; // eax

  if ( !this ) /*0x40dd75*/
    return 0; /*0x40dd95*/
  switch ( (*((int (__thiscall **)(unsigned int))this->vfptr + 11))(this) ) /*0x40dd8a*/
  {
    case 1: /*0x40dd8a*/
    case 2: /*0x40dd8a*/
    case 6: /*0x40dd8a*/
    case 15: /*0x40dd8a*/
      result = this; /*0x40dd91*/
      break; /*0x40dd94*/
    default:
      return 0;
  }
  return result; /*0x40dd93*/
}
} // namespace ra2::game

// 0x4155F0
namespace ra2::game {
int TechnoClass::ApplyIronCurtain()
{
  double v1; // st7
  int v3; // ebx
  int target; // eax
  int vfptr; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  TechnoClass *owner; // ecx
  int *v11; // eax
  int v12; // edi
  void *v13; // eax
  int v15; // [esp+28h] [ebp-20h]
  int16_t v16[2]; // [esp+34h] [ebp-14h] BYREF
  int v17; // [esp+38h] [ebp-10h] BYREF
  int v18; // [esp+3Ch] [ebp-Ch] BYREF
  int v19; // [esp+40h] [ebp-8h]
  int v20; // [esp+44h] [ebp-4h]

  v3 = ObjectClass::ComputeDistance(this, this->target); /*0x415604*/
  target = this->target; /*0x415606*/
  if ( target ) /*0x41560e*/
  {
    if ( this->q5A4 ) /*0x415630*/
    {
      if ( v3 <= *(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(0) /*0x415660*/
                           + 180) )
      {
        this->RevealAreaConditional(0, 0, 0, 0); /*0x415672*/
        vfptr = this->vfptr; /*0x415678*/
        v6 = this->SelectVocOrSfx(0); /*0x41567e*/
        vfptr->ScanForEnemies(/*0x415697*/
          this, 0, 0, 0, 0, *(unsigned int *)(*(unsigned int *)v6 + 164));
        v18 = this->location[0]; /*0x4156a9*/
        v7 = this->lastSightRange + 3; /*0x4156b6*/
        v19 = this->location[1]; /*0x4156b9*/
        v20 = this->location[2]; /*0x4156cd*/
        MapClass::RevealArea2((MapClass *)&dword_87F7E8, &v18, 0, v7, 0); /*0x4156d1*/
        v8 = this->location[0]; /*0x4156d9*/
        v9 = this->location[2]; /*0x4156db*/
        v19 = this->location[1]; /*0x4156de*/
        v18 = v8; /*0x4156e7*/
        v20 = v9; /*0x4156eb*/
        StartAudioControllerAt(*&dword_8871E0->q280, &v18, 0); /*0x4156fb*/
      }
    }
    else
    {
      this->Stub(target, 1); /*0x415641*/
    }
  }
  else
  {
    this->Stub(0, 1); /*0x415617*/
    this->MissionDispatch(4, 0); /*0x415625*/
  }
  if ( v3 > 768 ) /*0x415706*/
    return *&dword_8871E0->u32_290; /*0x4157a0*/
  this->MissionDispatch(31, 0); /*0x415714*/
  owner = (TechnoClass *)this->owner; /*0x41571a*/
  this->u32_6D2 = 1; /*0x415720*/
  v11 = (int *)TechnoClass::MapHouseRelationIndex(owner); /*0x415727*/
  *(unsigned int *)v16 = *CellClass::FindOpenNeighbor( /*0x415755*/
                      (CellClass *)&v17,
                      v1,
                      v11,
                      (int)&g_AircraftStatusFlag,
                      (int)&g_AircraftStatusFlag,
                      4,
                      1,
                      0,
                      v15);
  if ( *(unsigned int *)v16 != g_AircraftStatusFlag ) /*0x415759*/
  {
    v12 = this->vfptr; /*0x415769*/
    v13 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v16); /*0x415777*/
    v12->Stub(this, v13, 1); /*0x41577f*/
  }
  return *&dword_8871E0->u32_290; /*0x41578a*/
}
} // namespace ra2::game

// 0x4157C0
namespace ra2::game {
int TechnoClass::ReturnToBase()
{
  double v1; // st7
  int v3; // edi
  int vfptr; // edi
  int v5; // eax
  int v6; // eax
  int *v7; // eax
  int v8; // edi
  void *v9; // eax
  int v11; // [esp+24h] [ebp-1Ch]
  int16_t v12[2]; // [esp+2Ch] [ebp-14h] BYREF
  int v13; // [esp+30h] [ebp-10h] BYREF
  int v14[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = ObjectClass::ComputeDistance(this, this->target); /*0x4157d9*/
  if ( v3 <= *(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(0) + 180) ) /*0x4157e9*/
  {
    this->RevealAreaConditional(0, 0, 0, 0); /*0x4157f7*/
    vfptr = this->vfptr; /*0x4157fd*/
    v5 = this->SelectVocOrSfx(0); /*0x415803*/
    vfptr->ScanForEnemies(/*0x41581c*/
      this, 0, 0, 0, 0, *(unsigned int *)(*(unsigned int *)v5 + 164));
    v14[0] = this->location[0]; /*0x41582c*/
    v6 = this->lastSightRange + 3; /*0x415839*/
    v14[1] = this->location[1]; /*0x41583c*/
    v14[2] = this->location[2]; /*0x415850*/
    MapClass::RevealArea2((MapClass *)&dword_87F7E8, v14, 0, v6, 0); /*0x415854*/
  }
  if ( !this->q5A4 ) /*0x415859*/
  {
    v7 = (int *)TechnoClass::MapHouseRelationIndex((TechnoClass *)this->owner); /*0x415869*/
    *(unsigned int *)v12 = *CellClass::FindOpenNeighbor( /*0x415897*/
                        (CellClass *)&v13,
                        v1,
                        v7,
                        (int)&g_AircraftStatusFlag,
                        (int)&g_AircraftStatusFlag,
                        4,
                        1,
                        0,
                        v11);
    if ( *(unsigned int *)v12 != g_AircraftStatusFlag ) /*0x41589b*/
    {
      v8 = this->vfptr; /*0x4158ab*/
      v9 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v12); /*0x4158b9*/
      v8->Stub(this, v9, 1); /*0x4158c1*/
    }
  }
  return 3; /*0x4158c7*/
}
} // namespace ra2::game

// 0x4158E0
namespace ra2::game {
int TechnoClass::ReturnToBaseAndReload()
{
  int target; // eax

  target = this->target; /*0x4158e3*/
  if ( target ) /*0x4158eb*/
  {
    if ( this->q5A4 ) /*0x41590e*/
    {
      if ( ObjectClass::ComputeDistance(this, target) <= *&dword_8871E0->BuildingTypeClass_54C ) /*0x415940*/
      {
        this->MissionDispatch(27, 0); /*0x41594a*/
        --this->u32_6D3; /*0x415950*/
      }
      return 3; /*0x415956*/
    }
    else
    {
      this->Stub(target, 1); /*0x41591f*/
      return 3; /*0x415925*/
    }
  }
  else
  {
    this->Stub(0, 1); /*0x4158f3*/
    this->MissionDispatch(4, 0); /*0x415901*/
    return 3; /*0x415907*/
  }
}
} // namespace ra2::game

// 0x415960
namespace ra2::game {
int TechnoClass::ScatterFromThreat()
{
  int target; // eax
  char v3; // al
  unsigned int v5[3]; // [esp+4h] [ebp-Ch] BYREF

  target = this->target; /*0x415966*/
  this->u32_6D2 = 1; /*0x41596c*/
  if ( !target || !this->passengers[1] ) /*0x41597b*/
  {
    this->u32_6D2 = 0; /*0x415a0a*/
  LABEL_9:
    this->AssignTarget_SyncLog(0); /*0x415a11*/
    this->Stub(0, 1); /*0x415a25*/
    this->MissionDispatch(4, 0); /*0x415a33*/
    return 5; /*0x415a33*/
  }
  if ( ObjectClass::ComputeDistance(this, target) > *&dword_8871E0->BuildingTypeClass_54C ) /*0x41599d*/
  {
    v3 = this->u32_6D3; /*0x41599f*/
    this->u32_6D2 = 0; /*0x4159a5*/
    if ( v3 > 0 ) /*0x4159ae*/
    {
      this->MissionDispatch(26, 0); /*0x4159b8*/
      return 5; /*0x4159c7*/
    }
    goto LABEL_9; /*0x4159ae*/
  }
  v5[0] = this->location[0]; /*0x4159d4*/
  v5[1] = this->location[1]; /*0x4159e0*/
  v5[2] = this->location[2]; /*0x4159e7*/
  if ( (uint8_t)IsCoordVisibleMap((ObjectClass *)&dword_87F7E8, v5) ) /*0x4159f0*/
  {
    ProcessTechnoMovementAction((char *)this); /*0x4159fb*/
    return 5; /*0x415a09*/
  }
  return 5; /*0x4159c3*/
}
} // namespace ra2::game

// 0x416AF0
namespace ra2::game {
int FootClass::MissionMoveCarryallLand()
{
  unsigned int *v2; // esi
  int v3; // eax
  int InstanceCOM; // eax
  LPVOID v5; // ebx
  LPVOID v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  void (__thiscall **vtable0)(FootClass *, void *, int); // esi
  void *v12; // eax
  LPVOID ppv; // [esp+4Ch] [ebp-20h] BYREF
  CellClass *passengers; // [esp+50h] [ebp-1Ch] BYREF
  unsigned int v15[2]; // [esp+54h] [ebp-18h] BYREF
  int GroundHeight; // [esp+5Ch] [ebp-10h]
  int v17[3]; // [esp+60h] [ebp-Ch] BYREF

  Debug::Log(); /*0x416afd*/
  passengers = (CellClass *)this->passengers; /*0x416b0b*/
  v2 = (unsigned int *)LinkedList::Pop((LinkedList *)this->passengers); /*0x416b1a*/
  v15[0] = this->location[0]; /*0x416b20*/
  v15[1] = this->location[1]; /*0x416b31*/
  GroundHeight = this->location[2]; /*0x416b38*/
  GroundHeight = Cell::GetGroundHeight(v15); /*0x416b4b*/
  if ( (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v15)->flags[0] & 0x100) != 0 ) /*0x416b5d*/
  {
    GroundHeight += dword_889EBC; /*0x416b6a*/
    v2->q08C = 1; /*0x416b6e*/
  }
  else
  {
    v2->q08C = 0; /*0x416b77*/
  }
  if ( !v2->u32_674 ) /*0x416b7e*/
    sub_7DC720(-2147467261); /*0x416b90*/
  (*(void (__stdcall **)(unsigned int))(*v2->Points + 8))(v2->u32_674); /*0x416b9e*/
  v2->u32_674 = 0; /*0x416ba1*/
  v3 = v2->GetSpecialValue(); /*0x416bab*/
  ppv = 0; /*0x416bbe*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)(v3 + 844), 0, 7u); /*0x416bc2*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x416bd0*/
    sub_7DC720(InstanceCOM); /*0x416bd3*/
  v5 = (LPVOID)v2[413]; /*0x416bd8*/
  v6 = ppv; /*0x416bde*/
  if ( v5 != ppv ) /*0x416be4*/
  {
    v2->u32_674 = ppv; /*0x416be8*/
    if ( v6 ) /*0x416bee*/
    {
      (*(void (__stdcall **)(LPVOID))(*&v6->u32_10))(v6); /*0x416bf3*/
      v6 = ppv; /*0x416bf6*/
    }
    if ( v5 ) /*0x416bfc*/
    {
      (*(void (__stdcall **)(LPVOID))(*&v5->u32_20))(v5); /*0x416c01*/
      v6 = ppv; /*0x416c04*/
    }
  }
  if ( v6 ) /*0x416c0b*/
    (*(void (__stdcall **)(LPVOID))(*&v6->u32_20))(v6); /*0x416c10*/
  if ( !v2->u32_674 ) /*0x416c13*/
    sub_7DC720(-2147467261); /*0x416c22*/
  (*(void (__stdcall **)(unsigned int, unsigned int *))(*v2->Points + 12))(v2->u32_674, v2); /*0x416c31*/
  if ( v2->COMStub_54(v15, 0) ) /*0x416c3f*/
  {
    v7 = *v2; /*0x416c5a*/
    v2->AuxSound1 = 0; /*0x416c66*/
    v2->vt_slot_1164(0, 0, 0, 0); /*0x416c6d*/
    v2->vt_slot_1160(0, 0, 0, 0, 0); /*0x416c81*/
    v8 = this->location[0]; /*0x416c8a*/
    v9 = this->location[1]; /*0x416c8d*/
    v17[2] = this->location[2]; /*0x416c90*/
    v10 = v2->q260; /*0x416c94*/
    v17[0] = v8; /*0x416c9a*/
    v17[1] = v9; /*0x416c9e*/
    MapClass::RevealArea2((MapClass *)&DataGlobal_87F7E8, v17, v10 - 3, v10 + 3, 0); /*0x416cb6*/
    ppv = (LPVOID)*MapClass::FindPlacementCellsAlt((char *)this, &passengers, 0); /*0x416ccd*/
    if ( (unsigned int *)Team::GetMember((Team *)this, 0) == v2 ) /*0x416cda*/
    {
      (*((void (__thiscall **)(FootClass *, int))this->vfptr + 157))(this, 25); /*0x416ce2*/
      (*((void (__thiscall **)(FootClass *, int))this->vfptr + 157))(this, 3); /*0x416cee*/
    }
    if ( ppv == (LPVOID)g_AircraftStatusFlag ) /*0x416d00*/
    {
      (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 288))(this, 0, 1); /*0x416d3b*/
    }
    else
    {
      vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->vfptr; /*0x416d10*/
      v12 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (int16_t *)&ppv); /*0x416d1e*/
      vtable0[288](this, v12, 1); /*0x416d26*/
    }
  }
  else
  {
    CellClass::AddObject(passengers, v2); /*0x416c4e*/
  }
}
} // namespace ra2::game

// 0x417CA0
namespace ra2::game {
int TechnoClass::ExecuteMissionCommand() {
  return ScriptAction::ExecuteMissionCmd(this); /*0x417cb9*/
}
} // namespace ra2::game

// 0x4195A0
namespace ra2::game {
int TechnoClass::FindNearbyBuildCell(int a2, int16_t *a3)
{
  unsigned int *v4; // eax
  int *v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int *v9; // eax
  int v10; // kr08_4
  int v11; // eax
  bool *v12; // eax
  int16_t v14; // [esp+12h] [ebp-Eh]
  unsigned char v15[12]; // [esp+14h] [ebp-Ch] BYREF
  int16_t *v16; // [esp+28h] [ebp+8h]

  *(unsigned int *)a3 = g_AircraftStatusFlag; /*0x4195b0*/
  v4 = (unsigned int *)this->GetCoords_0(v15); /*0x4195b9*/
  v5 = dword_817A78; /*0x4195be*/
  v6 = *v4 / 256; /*0x4195de*/
  v7 = v4[1] / 256; /*0x4195e1*/
  v14 = v7; /*0x4195e4*/
  while ( 1 ) /*0x4195ec*/
  {
    v8 = *v5 & 7; /*0x4195ec*/
    (*((unsigned short *)&(v16))) = v6 + (*((unsigned short *)&(dword_89F688[v8]))); /*0x419605*/
    (*(((unsigned short *)&(v16)) + 1)) = v7 + (*(((unsigned short *)&(dword_89F688[v8])) + 1)); /*0x41960d*/
    *(unsigned int *)a3 = v16; /*0x419616*/
    if ( (uint8_t)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, a3) ) /*0x41961d*/
      break; /*0x41961d*/
  LABEL_7:
    if ( (int)++v5 >= (int)0 ) /*0x419692*/
      return 0; /*0x419692*/
  }
  v9 = (int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)a2 + 72))(a2, v15); /*0x419631*/
  v10 = *v9; /*0x419641*/
  v11 = v9[1] / 256; /*0x419652*/
  if ( (uint16_t)(v10 / 256) != *a3 || (unsigned short)v11 != a3[1] ) /*0x41965e*/
  {
    v12 = (bool *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a3); /*0x419674*/
    if ( !(uint8_t)Cell::IsBuildable(v12, 0, 0, 0, -1, 0, -1, 1) ) /*0x41967b*/
    {
      (*((unsigned short *)&(v7))) = v14; /*0x419684*/
      goto LABEL_7; /*0x419684*/
    }
  }
  return 0; /*0x419698*/
}
} // namespace ra2::game

// 0x41A160
namespace ra2::game {
void * TechnoClass::FindClosestPlacementCell()
{
  double v1; // st7
  int v3; // eax
  int v4; // esi
  unsigned int *v5; // ebp
  unsigned int *v6; // eax
  int *v7; // eax
  int v8; // ebp
  int TileIndex; // eax
  int v10; // eax
  int vfptr; // eax
  int16_t *v12; // eax
  int64_t v13; // rax
  int v15; // eax
  TechnoClass *v16; // eax
  unsigned int *v18; // ebp
  unsigned int *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v26; // eax
  int v27; // eax
  int *location; // edi
  int v29; // [esp-20h] [ebp-90h]
  int v30; // [esp+20h] [ebp-50h]
  int v31; // [esp+24h] [ebp-4Ch]
  int v32; // [esp+24h] [ebp-4Ch]
  int16_t v33[2]; // [esp+28h] [ebp-48h] BYREF
  int16_t v34[2]; // [esp+2Ch] [ebp-44h] BYREF
  int16_t v35; // [esp+30h] [ebp-40h] BYREF
  int16_t v36; // [esp+32h] [ebp-3Eh]
  int16_t v37[2]; // [esp+34h] [ebp-3Ch] BYREF
  int v38; // [esp+38h] [ebp-38h] BYREF
  int v39; // [esp+3Ch] [ebp-34h] BYREF
  int v40; // [esp+40h] [ebp-30h] BYREF
  int v41; // [esp+44h] [ebp-2Ch]
  int v42; // [esp+48h] [ebp-28h]
  char v43[12]; // [esp+4Ch] [ebp-24h] BYREF
  unsigned char v44[12]; // [esp+58h] [ebp-18h] BYREF
  unsigned int v45[3]; // [esp+64h] [ebp-Ch] BYREF

  v34[0] = 0; /*0x41a171*/
  v34[1] = 0; /*0x41a176*/
  v30 = -1; /*0x41a189*/
  if ( *(int *)&this->u32_6C4->u32_3F8 > 0 ) /*0x41a197*/
  {
    v3 = 0; /*0x41a1a3*/
    v31 = 0; /*0x41a1a5*/
    *(unsigned int *)v37 = this->owner->bunkersCount; /*0x41a1ae*/
    if ( *(int *)v37 > 0 ) /*0x41a1b2*/
    {
      do /*0x41a2f9*/
      {
        v4 = *(unsigned int *)(this->owner->absorbersCount + 4 * v3); /*0x41a1c1*/
        if ( v4 && !v4->inLimbo ) /*0x41a1cc*/
        {
          v5 = (unsigned int *)v4->GetCoords_0(v43); /*0x41a1e6*/
          v6 = (unsigned int *)this->GetCoords_0(v44); /*0x41a1ef*/
          v7 = Coord::Subtract((Coord *)v45, *v6 - *v5, v6[1] - v5[1], v6[2] - v5[2]); /*0x41a210*/
          v40 = *v7; /*0x41a217*/
          v41 = v7->u32_4; /*0x41a222*/
          v42 = v7->u32_8; /*0x41a229*/
          v8 = Coord::Length((Coord *)&v40); /*0x41a238*/
          if ( v4->BuildingTypeClass_520 == **(unsigned int **)&this->u32_6C4->u32_3EC ) /*0x41a248*/
            v8 /= 4; /*0x41a255*/
          if ( v30 == -1 || v8 < v30 ) /*0x41a262*/
          {
            *(unsigned int *)v33 = *(unsigned int *)v4->GetCellCoords_Alt(&v38); /*0x41a287*/
            v35 = 0; /*0x41a2a0*/
            v36 = 0; /*0x41a2a5*/
            TileIndex = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, v33, 0, 0); /*0x41a2aa*/
            v10 = *LayerClass::Pathfinding_Find( /*0x41a2c5*/
                     (Type *)&dword_87F7E8,
                     (int)&v39,
                     &v39,
                     v33,
                     0,
                     TileIndex,
                     0,
                     0,
                     3,
                     3,
                     0,
                     0,
                     0,
                     1,
                     &v35,
                     0,
                     0);
            *(unsigned int *)v33 = v10; /*0x41a2ce*/
            if ( v10 != g_AircraftStatusFlag ) /*0x41a2d2*/
            {
              v30 = v8; /*0x41a2e2*/
              *(unsigned int *)v34 = v10; /*0x41a2e6*/
            }
          }
        }
        v3 = ++v31; /*0x41a2f2*/
      }
      while ( v31 < *(int *)v37 ); /*0x41a2f9*/
      if ( v30 != -1 ) /*0x41a306*/
      {
        if ( v30 < 256 ) /*0x41a311*/
        {
          vfptr = this->vfptr; /*0x41a327*/
          v35 = 0; /*0x41a334*/
          v36 = 0; /*0x41a339*/
          v12 = (int16_t *)vfptr->GetCellCoords_Alt(this, &v39); /*0x41a33e*/
          v29 = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, v12, 0, 0); /*0x41a351*/
          v13 = ((int64_t (__thiscall *)(TechnoClass *, int *))*(unsigned int *)&this->vfptr->airstrikeTintTimer)(this, &v38); /*0x41a35a*/
          *(unsigned int *)v37 = *LayerClass::Pathfinding_Find( /*0x41a37c*/
                              (Type *)&dword_87F7E8,
                              (*((signed int *)(((unsigned char *)&(v13)) + 4))),
                              v33,
                              (int16_t *)v13,
                              0,
                              v29,
                              0,
                              0,
                              1,
                              1,
                              0,
                              0,
                              0,
                              1,
                              &v35,
                              0,
                              0);
          return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v37); /*0x41a38c*/
        }
        return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v34); /*0x41a311*/
      }
    }
  }
  v15 = 0; /*0x41a3aa*/
  v32 = 0; /*0x41a3ae*/
  if ( dword_A8E370 > 0 ) /*0x41a3b2*/
  {
    do /*0x41a50f*/
    {
      v16 = (TechnoClass *)AbstractClass::IsTechnoType(*((AbstractClass **)dword_A8E364 + v15)); /*0x41a3c1*/
      v16 = v16; /*0x41a3c6*/
      if ( v16 ) /*0x41a3ca*/
      {
        if ( !v16->inLimbo[0] && v16->owner == this->owner && v16 != this ) /*0x41a3f2*/
        {
          v18 = (unsigned int *)v16->GetCoords_0(v45); /*0x41a406*/
          v19 = (unsigned int *)this->GetCoords_0(v44); /*0x41a40f*/
          v20 = *v19 - *v18; /*0x41a417*/
          v21 = v19[1]; /*0x41a419*/
          v22 = v19[2]; /*0x41a41c*/
          v40 = v20; /*0x41a41f*/
          v23 = v18[2]; /*0x41a42b*/
          v41 = v21 - v18[1]; /*0x41a42e*/
          v42 = v22 - v23; /*0x41a438*/
          Math::Sqrt((double)v40 * (double)v40 + (double)(v22 - v23) * (double)(v22 - v23) + (double)v41 * (double)v41); /*0x41a45d*/
          (*((unsigned short *)&(v24))) = Math::RoundToInt(v1); /*0x41a465*/
          v24 = v24; /*0x41a46a*/
          if ( v30 == -1 || v24 < v30 ) /*0x41a477*/
          {
            *(unsigned int *)v33 = *(unsigned int *)v16->GetCellCoords_Alt(&v39); /*0x41a49b*/
            v35 = 0; /*0x41a4b4*/
            v36 = 0; /*0x41a4b9*/
            v26 = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, v33, 0, 0); /*0x41a4be*/
            v27 = *LayerClass::Pathfinding_Find( /*0x41a4d9*/
                     (Type *)&dword_87F7E8,
                     (int)&v38,
                     &v38,
                     v33,
                     0,
                     v26,
                     0,
                     0,
                     1,
                     1,
                     0,
                     0,
                     0,
                     1,
                     &v35,
                     0,
                     0);
            *(unsigned int *)v33 = v27; /*0x41a4e2*/
            if ( v27 != g_AircraftStatusFlag ) /*0x41a4e6*/
            {
              v30 = v24; /*0x41a4f6*/
              *(unsigned int *)v34 = v27; /*0x41a4fa*/
            }
          }
        }
      }
      v15 = ++v32; /*0x41a508*/
    }
    while ( v32 < dword_A8E370 ); /*0x41a50f*/
    if ( v30 != -1 ) /*0x41a51a*/
      return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v34); /*0x41a532*/
  }
  location = this->location; /*0x41a533*/
  v40 = *location; /*0x41a53b*/
  v41 = location->Y; /*0x41a547*/
  v42 = location->Z; /*0x41a553*/
  return Coord::To_Cell((Coord *)&dword_87F7E8, &v40); /*0x41a385*/
}
} // namespace ra2::game

// 0x41A570
namespace ra2::game {
unsigned int * TechnoClass::GetTurretFacing(unsigned int *a2)
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x41a570*/
  v2 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &v4); /*0x41a581*/
  *a2 = v2; /*0x41a587*/
  return a2; /*0x41a58a*/
}
} // namespace ra2::game

// 0x41B6A0
namespace ra2::game {
int TechnoClass::ComputeTeamAttackPriority()
{
  unsigned int *v1; // edi
  int v2; // edi

  if ( *(unsigned char *)&this->vfptr1->qDFC ) /*0x41b6aa*/
  {
    if ( !*((unsigned int *)this - 362) ) /*0x41b6b4*/
    {
      if ( (uint8_t)Team::AllMembersValid((Team *)((char *)this - 1728)) ) /*0x41b6c6*/
      {
        v1 = (unsigned int *)Array::Get((Array *)((char *)this - 1728), 0); /*0x41b6dc*/
        if ( (*(int (__thiscall **)(char *))(*((unsigned int *)this - 432) + 388))((char *)this - 1728) == 7 ) /*0x41b6e7*/
        {
          if ( v1 ) /*0x41b6eb*/
          {
            if ( (*(int (__thiscall **)(unsigned int *))(*v1 + 44))(v1) == 6 ) /*0x41b6f7*/
            {
              v2 = v1[328]; /*0x41b6f9*/
              if ( *(unsigned char *)(v2 + 5801) || *(unsigned char *)(v2 + 5835) ) /*0x41b709*/
                return 0; /*0x41b709*/
            }
          }
        }
      }
    }
  }
  if ( (!(uint8_t)Team::AllMembersValid((Team *)((char *)this - 1728)) || !*(unsigned char *)&this->vfptr1->qDFC) /*0x41b73c*/
    && (!*((unsigned int *)this - 362) || !*(unsigned char *)&this->vfptr1->qDFC) )
  {
    return 0; /*0x41b753*/
  }
  else
  {
    return 100; /*0x41b748*/
  }
}
} // namespace ra2::game

// 0x41B760
namespace ra2::game {
int TechnoClass::GetAutoFireDirection()
{

  TechnoClass *v1; // edi
  Array *v2; // esi
  ProgressTimer *v3; // eax
  unsigned int *Value; // eax

  v1 = this; /*0x41b762*/
  v2 = (Array *)((char *)this - 1728); /*0x41b766*/
  if ( (unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 1728)) ) /*0x41b76e*/
  {
    v3 = (ProgressTimer *)Array::Get(v2, 0); /*0x41b77b*/
    Value = ProgressTimer::GetValue(&v3->ProgressTimer_388, &this); /*0x41b78b*/
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x41b7b4*/
  }
  if ( v1[-2].turretRotateSoundController[4] ) /*0x41b78d*/
  {
    Value = ProgressTimer::GetValue((ProgressTimer *)&v1[-1].reloadTimer[1], &this); /*0x41b7a2*/
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x41b7a2*/
  }
  return dword_8871E0->PoseDir; /*0x41b7a9*/

}
} // namespace ra2::game

// 0x41B7F0
namespace ra2::game {
unsigned int * TechnoClass::HasOnlyOneGarrisonSlot()
{
  unsigned int *result; // eax
  int v2; // eax

  result = (unsigned int *)(*(int (__thiscall **)(char *, unsigned int))(*((unsigned int *)this - 432) + 1016))((char *)this - 1728, 0); /*0x41b802*/
  if ( result ) /*0x41b80a*/
  {
    result = (unsigned int *)*result; /*0x41b80f*/
    if ( result ) /*0x41b813*/
    {
      v2 = result[40]; /*0x41b818*/
      return (unsigned int *)(*(int *)(v2 + 732) <= 1 && *(unsigned char *)(v2 + 670) == 0); /*0x41b839*/
    }
  }
  return result; /*0x41b80c*/
}
} // namespace ra2::game

// 0x41BFE0
namespace ra2::game {
int TechnoClass::vt_entry_428()
{
  int result; // eax

  return result; /*0x41bfe0*/
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
  ; /*0x41c100*/
}
} // namespace ra2::game

// 0x41C1E0
namespace ra2::game {
unsigned int * TechnoClass::GetBodyFacing(unsigned int *a2)
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x41c1e0*/
  v2 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &v4); /*0x41c1f1*/
  *a2 = v2; /*0x41c1f7*/
  return a2; /*0x41c1fa*/
}
} // namespace ra2::game

// 0x438720
namespace ra2::game {
int TechnoClass::ApplyDamageEffects()
{

  int result; // eax
  char v3; // cl
  int *v4; // edx
  AnimClass *v5; // edi
  int v6; // ebx
  void *WarheadVersusMultiplier; // eax
  int fallRate; // ecx
  int v9; // ebx
  int v10; // ebp
  unsigned short *v11; // eax
  int v12; // edi
  unsigned short *v13; // eax
  __int16 v14; // cx
  int v15; // eax
  __int16 *v16; // eax
  void *v17; // [esp-8h] [ebp-40h]
  char v18; // [esp+13h] [ebp-25h]
  unsigned __int16 *v19; // [esp+14h] [ebp-24h]
  unsigned __int16 *v20; // [esp+14h] [ebp-24h]
  __int16 v21[2]; // [esp+18h] [ebp-20h] BYREF
  __int16 v22[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 v23[2]; // [esp+20h] [ebp-18h] BYREF
  unsigned char v24[4]; // [esp+24h] [ebp-14h] BYREF
  unsigned char v25[4]; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+2Ch] [ebp-Ch] BYREF
  int v27; // [esp+30h] [ebp-8h]
  int v28; // [esp+34h] [ebp-4h]

  result = this->fallRate; /*0x43872b*/
  if ( result && !LOBYTE(this->customSound_controller[2]) ) /*0x438736*/
  {
    v3 = *(unsigned char *)(result + 129); /*0x438741*/
    *(unsigned int *)(result + 56) = 0; /*0x438747*/
    if ( v3 ) /*0x43874c*/
    {
      *(unsigned char *)(this->fallRate + 104) = 0; /*0x438751*/
      LOBYTE(this->customSound_controller[2]) = 1; /*0x438755*/
    }
    else
    {
      *(unsigned char *)(this->fallRate + 104) = 0; /*0x438764*/
      v4 = (int *)(this->fallRate + 156); /*0x43876b*/
      LOBYTE(this->customSound_controller[2]) = 1; /*0x438771*/
      v26 = *v4; /*0x438777*/
      v27 = v4[1]; /*0x438783*/
      v28 = v4[2]; /*0x43878a*/
      PlaySoundEffectAt( /*0x4387a3*/
        &v26,
        *&dword_8871E0->u32_FCC,
        (unsigned int *)this->occupant,
        *&dword_8871E0->u32_FC8,
        1,
        0);
      v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4387b2*/
      if ( v5 ) /*0x4387b9*/
      {
        LOWORD(v19) = v26 / 256; /*0x4387d9*/
        HIWORD(v19) = v27 / 256; /*0x4387ee*/
        *(unsigned int *)v21 = v19; /*0x4387f7*/
        v6 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v21) + 59); /*0x438800*/
        v17 = (void *)Return::HRESULT_Fail(v26, v27, v28); /*0x438825*/
        WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x43884a*/
                                            *&dword_8871E0->u32_FCC,
                                            *&dword_8871E0->u32_FC8,
                                            v6,
                                            &v26);
        AnimClass::ctor(v5, WarheadVersusMultiplier, &v26, 0, 1, (void *)0x2600, v17, 0); /*0x438852*/
      }
      fallRate = this->fallRate; /*0x438857*/
      if ( fallRate /*0x438879*/
        && (*(int (**)(int))(*(unsigned int *)fallRate + 44))(fallRate) == 6
        && *(unsigned char *)(*(unsigned int *)(this->fallRate + 1312) + 5814) )
      {
        v18 = 0; /*0x438887*/
        v9 = -2; /*0x43888c*/
        do /*0x438946*/
        {
          v10 = -2; /*0x438891*/
          do /*0x43893c*/
          {
            v11 = (unsigned short *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->fallRate + 440))(this->fallRate, v24); /*0x4388a0*/
            HIWORD(v20) = v9 + v11[1]; /*0x4388b3*/
            LOWORD(v20) = *v11 + v10; /*0x4388b8*/
            *(unsigned int *)v22 = v20; /*0x4388c5*/
            v12 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v22) + 14); /*0x4388d7*/
            v13 = (unsigned short *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->fallRate + 440))(this->fallRate, v25); /*0x4388e1*/
            v14 = *v13 + v10; /*0x4388ee*/
            v21[1] = v9 + v13[1]; /*0x4388f4*/
            v21[0] = v14; /*0x4388f9*/
            *(unsigned int *)v23 = *(unsigned int *)v21; /*0x438906*/
            v15 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23) + 17); /*0x43891b*/
            if ( v12 >= g_TerrainBridgeIndex && v12 < g_TerrainBridgeIndex + 16 || v15 >= 74 && v15 <= 101 ) /*0x438931*/
              v18 = 1; /*0x438933*/
            ++v10; /*0x438938*/
          }
          while ( v10 < 3 ); /*0x43893c*/
          ++v9; /*0x438942*/
        }
        while ( v9 < 3 ); /*0x438946*/
        v16 = (__int16 *)(*(int (**)(unsigned char *))(*(unsigned int *)this->fallRate + 440))(v25); /*0x43895e*/
        if ( v18 ) /*0x438957*/
          MapClass::ApplyTerrainDamage((MapClass *)&dword_87F7E8, v16); /*0x43896a*/
        else
          TerrainClass::ProcessSlope((TerrainClass *)&dword_87F7E8, v16); /*0x438982*/
      }
    }
    this->occupant = 0; /*0x43898c*/
    this->fallRate = 0; /*0x43898f*/
    this->owningHouseIndex = 0; /*0x438992*/
    result = AudioFile::Stop((AudioFile *)this->ambientSoundController); /*0x438995*/
    this->customSound_controller[1] = 0; /*0x43899a*/
  }
  return result; /*0x43899d*/

}
} // namespace ra2::game

// 0x4390D0
namespace ra2::game {
int TechnoClass::RemoveFromDynamicVector(char a2)
{
  int *p_nextArrayIndex; // esi
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  p_nextArrayIndex = &this->nextArrayIndex; /*0x4390d4*/
  result = this->nextArrayIndex.IsClean(&a2); /*0x4390de*/
  if ( result != -1 ) /*0x4390e4*/
  {
    v4 = p_nextArrayIndex[4]; /*0x4390e6*/
    if ( result < v4 ) /*0x4390eb*/
    {
      v5 = v4 - 1; /*0x4390ed*/
      for ( p_nextArrayIndex[4] = v5; /*0x4390f3*/
            result < p_nextArrayIndex[4];
            *(unsigned int *)(p_nextArrayIndex[1] + 4 * result - 4) = *(unsigned int *)(p_nextArrayIndex[1] + 4 * result) )
      {
        ++result; /*0x4390f8*/
      }
    }
  }
  return result; /*0x439107*/
}
} // namespace ra2::game

// 0x43E940
namespace ra2::game {
int TechnoClass::ComputeTargetAngle()
{

  int v1; // ebx
  int v2; // edi
  double v3; // st7
  int *TargetCoords; // eax
  int v6; // edi
  int vfptr; // edx
  int v8; // ebx
  unsigned int *v9; // eax
  int v10; // edx
  int *v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // eax
  int v19; // edi
  int v20; // ebx
  int v21; // esi
  int result; // eax
  unsigned int *v24; // eax
  int *v25; // eax
  int v26; // edx
  int *v27; // eax
  TechnoClass *v29; // eax
  int v30; // ebx
  int *v31; // eax
  int v32; // edx
  unsigned int *v33; // eax
  int v34; // edi
  int v36; // eax
  char IsCloseEnoughToBuilding; // al
  int v39; // eax
  char v40; // al
  int v41; // [esp+24h] [ebp-64h]
  int v42; // [esp+24h] [ebp-64h]
  double v43; // [esp+28h] [ebp-60h]
  double v44; // [esp+2Ch] [ebp-5Ch]
  double v45; // [esp+2Ch] [ebp-5Ch]
  double v46; // [esp+30h] [ebp-58h]
  double v47; // [esp+30h] [ebp-58h]
  double v48; // [esp+30h] [ebp-58h]
  double v49; // [esp+30h] [ebp-58h]
  int *v50; // [esp+38h] [ebp-50h]
  int v51; // [esp+3Ch] [ebp-4Ch]
  int v52[3]; // [esp+44h] [ebp-44h] BYREF
  double v53[2]; // [esp+50h] [ebp-38h] BYREF
  int v54; // [esp+64h] [ebp-24h]
  int v55; // [esp+68h] [ebp-20h]
  unsigned int v56; // [esp+6Ch] [ebp-1Ch]
  int v57; // [esp+70h] [ebp-18h] BYREF
  int v58; // [esp+74h] [ebp-14h]
  unsigned int v59; // [esp+78h] [ebp-10h]
  int v60[2]; // [esp+7Ch] [ebp-Ch] BYREF
  int v61; // [esp+84h] [ebp-4h]
  int savedregs; // [esp+88h] [ebp+0h] BYREF
  unsigned short *v63; // [esp+90h] [ebp+8h]
  int *v64; // [esp+94h] [ebp+Ch]

  if ( *(unsigned char *)(*(unsigned int *)(*(int (**)(TechnoClass *, unsigned int))&this->vfptr->barrelRecoil)(this, 0) + 329) ) /*0x43e95a*/
  {
    (*(void (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x43e96c*/
    if ( v64 ) /*0x43e977*/
    {
      TargetCoords = TechnoClass::GetTargetCoords(this, v60); /*0x43e984*/
      v6 = *TargetCoords; /*0x43e989*/
      vfptr = this->vfptr; /*0x43e98b*/
      v8 = TargetCoords[1]; /*0x43e98f*/
      v61 = TargetCoords[2]; /*0x43e995*/
      v9 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned int))(vfptr + 1016))(this, 0); /*0x43e99b*/
      v10 = this->vfptr; /*0x43e9a4*/
      v59 = v9[3]; /*0x43e9a6*/
      v11 = (int *)(*(int (**)(TechnoClass *, double *))(v10 + 172))(this, v53); /*0x43e9b1*/
      v12 = *v11; /*0x43e9b7*/
      v13 = v11[1]; /*0x43e9b9*/
      v14 = v11[2]; /*0x43e9bc*/
      v15 = this->BuildingTypeClass_520; /*0x43e9bf*/
      v58 = v13; /*0x43e9c9*/
      v16 = v15->u32_11E0; /*0x43e9cd*/
      v54 = v12; /*0x43e9d3*/
      v59 += v14; /*0x43e9d7*/
      v17 = v15->u32_11E4; /*0x43e9db*/
      v57 = v12; /*0x43e9e1*/
      *(unsigned long long *)&v53[0] = __PAIR64__(v17, v16); /*0x43e9f1*/
      v18 = (unsigned int *)World::ToScreen(&v52[1], v53, v50); /*0x43e9fd*/
      v19 = v6 - (v54 + *v18); /*0x43ea11*/
      v20 = v8 - (v18[1] + v58); /*0x43ea1d*/
      v54 = v19; /*0x43ea21*/
      v21 = v61 - v59; /*0x43ea25*/
      v55 = v20; /*0x43ea27*/
      v56 = v61 - v59; /*0x43ea2b*/
      if ( v61 == v59 ) /*0x43ea2f*/
      {
        *v63 = 0x4000; /*0x43ea34*/
        return (int)v63; /*0x43ea31*/
      }
      else
      {
        v52[1] = v19 * v19 + v20 * v20; /*0x43ea51*/
        __asm /*0x43ea55*/
        {
          fild [esp+58h+var_44+4]
          fstp [esp+58h+var_58]; double
        }
        Math::Sqrt(v46); /*0x43ea5c*/
        __asm /*0x43ea61*/
        {
          fstp [esp+58h+var_38]
          fild [esp+58h+var_20]
          fild [esp+58h+var_1C]
          fild [esp+58h+var_24]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fld st(3)
          fmul st, st(4)
          faddp st(1), st
          fstp [esp+58h+var_58]; double
          fstp st
          fstp st
          fstp st
        }
        Math::Sqrt(v47); /*0x43ea8a*/
        LOWORD(_EAX) = Math::RoundToInt(v3); /*0x43ea92*/
        v52[1] = _EAX; /*0x43ea97*/
        __asm /*0x43ea9b*/
        {
          fild [esp+50h+var_44+4]
          fdivr [esp+50h+var_38]
          fst [esp+50h+var_38]
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 ) /*0x43eab2*/
          v53[0] = 1.0; /*0x43eab4*/
        BuildingLight::CalcIntensity(v53[0]); /*0x43eace*/
        __asm { fmul ds:dbl_7E4418 } /*0x43ead3*/
        __asm { fmul ds:dbl_7E4410 }
        LOWORD(v52[1]) = Math::RoundToInt(v3); /*0x43eae9*/
        result = (int)v63; /*0x43eafb*/
        if ( v21 < 0 ) /*0x43eaee*/
          LOWORD(v52[1]) = 0x8000 - LOWORD(v52[1]); /*0x43eafe*/
        *(unsigned int *)v63 = v52[1]; /*0x43eb07*/
      }
    }
    else
    {
      *(unsigned int *)v63 = *ProgressTimer::GetValue((ProgressTimer *)this->barrelFacing, v53); /*0x43eb39*/
      return (int)v63; /*0x43eb36*/
    }
  }
  else if ( *(unsigned char *)(this->BuildingTypeClass_520 + 5827) ) /*0x43eb4a*/
  {
    v24 = (unsigned int *)(*(int (**)(int *, int *))(*v64 + 72))(v64, v60); /*0x43eb64*/
    Cell::GetGroundHeight(v24); /*0x43eb6d*/
    v25 = (int *)(*(int (**)(int *, int *))(*v64 + 72))(v64, &v57); /*0x43eb7b*/
    v26 = v25[1]; /*0x43eb80*/
    v54 = *v25; /*0x43eb8a*/
    v55 = v26; /*0x43eb90*/
    v27 = (int *)(*(int (**)(TechnoClass *, int *, unsigned int, unsigned int, unsigned int, unsigned int))&this->vfptr->suspendedMission)( /*0x43eba6*/
                   this,
                   v60,
                   0,
                   0,
                   0,
                   0);
    __asm { fild [esp+50h+var_24] } /*0x43ebac*/
    v57 = *v27; /*0x43ebb5*/
    __asm { fisub [esp+60h+var_18] } /*0x43ebbc*/
    v58 = v27[1]; /*0x43ebc3*/
    v59 = v27[2]; /*0x43ebca*/
    __asm /*0x43ebce*/
    {
      fstp [esp+60h+var_58]; double
      fild [esp+60h+var_14]
      fisub [esp+60h+var_20]
      fstp [esp+60h+var_64+4]; double
    }
    Math::CalcAngle(v43, v48); /*0x43ebdd*/
    _ECX = dword_8871E0; /*0x43ebe2*/
    __asm /*0x43ebeb*/
    {
      fstp st
      fild dword ptr [ecx+16B8h]
    }
    __asm { fstp [esp+58h+var_58]; double }
    v29 = (TechnoClass *)ObjectClass::DistanceTo((ObjectClass *)this, (int)v64); /*0x43ebf9*/
    v30 = TechnoClass::ComputeScanRange(v29, v49); /*0x43ec07*/
    v31 = (int *)(*(int (**)(TechnoClass *, int *, unsigned int))&this->vfptr->unitValue)(this, v60, 0); /*0x43ec12*/
    v54 = *v31; /*0x43ec1a*/
    v55 = v31[1]; /*0x43ec23*/
    v32 = *v64; /*0x43ec27*/
    v56 = v31[2]; /*0x43ec2c*/
    v33 = (unsigned int *)(*(int (**)(int *, int *))(v32 + 72))(v64, v60); /*0x43ec35*/
    v34 = v33[2] - v56; /*0x43ec50*/
    _ECX = dword_8871E0; /*0x43ec5c*/
    LODWORD(v53[0]) = (*v33 - v54) * (*v33 - v54) + (v33[1] - v55) * (v33[1] - v55); /*0x43ec64*/
    __asm { fild dword ptr [esp+50h+var_38] } /*0x43ec6c*/
    __asm
    {
      fstp [esp+5Ch+var_38]
      fild dword ptr [ecx+16B8h]
    }
    __asm { fstp qword ptr [esp]; double }
    Math::Sqrt(v53[0]); /*0x43ec8c*/
    LOWORD(v36) = Math::RoundToInt(v3); /*0x43ec94*/
    v41 = v36; /*0x43ec99*/
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x43ec9e*/
    if ( !(unsigned __int8)ComputeMathFacingAngle(IsCloseEnoughToBuilding, v30, v41, v34, v44, &v52[1]) ) /*0x43eca7*/
    {
      _EDX = dword_8871E0; /*0x43ecb0*/
      __asm { fild dword ptr [edx+16B8h] } /*0x43ecbe*/
      __asm { fstp qword ptr [esp]; double }
      Math::Sqrt(v53[0]); /*0x43ecd2*/
      LOWORD(v39) = Math::RoundToInt(v3); /*0x43ecda*/
      v42 = v39; /*0x43ecdf*/
      v40 = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x43ecf4*/
      ComputeMathFacingAngle(v40, 10 * v30 / 8, v42, v34, v45, &v52[1]); /*0x43ecfd*/
    }
    *(unsigned int *)v63 = v52[1]; /*0x43ed09*/
    return (int)v63; /*0x43ed02*/
  }
  else
  {
    *(unsigned int *)v63 = *TechnoClass::GetFiringAngle((TechnoClass *)v53, v1, (int)&savedregs, v2, v64, (int)v50, v51); /*0x43ed2b*/
    return (int)v63; /*0x43ed26*/
  }
  return result; /*0x43ea39*/

}
} // namespace ra2::game

// 0x43ED40
namespace gamemd {  
// G42.34 归属正名: 真身 gamemd::BuildingClass (vt+1256)
{
  double v1; // st7
  int v3; // esi
  BuildingTypeClass *Type; // ecx
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  unsigned int *v8; // eax
  int v9; // edx
  int *v10; // eax
  int *v12; // [esp+18h] [ebp-24h]
  int v13[3]; // [esp+24h] [ebp-18h] BYREF
  int v14; // [esp+30h] [ebp-Ch] BYREF
  int v15; // [esp+34h] [ebp-8h]
  int v16; // [esp+38h] [ebp-4h]
  int *v17; // [esp+40h] [ebp+4h]
  int v18; // [esp+44h] [ebp+8h]
  int v19; // [esp+44h] [ebp+8h]

  v16 = dword_89C850; /*0x43ed4b*/
  v3 = g_BuildingClassPool; /*0x43ed50*/
  Type = this->Type; /*0x43ed56*/
  v5 = dword_89C84C; /*0x43ed5d*/
  if ( Type->PrimaryFirePixelOffset[0] != 0xFFFF || Type->PrimaryFirePixelOffset[1] != 0xFFFF ) /*0x43ed7e*/
  {
    v6 = (int *)World::ToScreen(v13, Type->PrimaryFirePixelOffset, v12); /*0x43ed86*/
  LABEL_7:
    v3 = *v6; /*0x43edb9*/
    v5 = v6->vtable2; /*0x43edc0*/
    v16 = 0; /*0x43edc2*/
    goto LABEL_8; /*0x43edc2*/
  }
  v7 = *&Type->u32_11E4; /*0x43ed88*/
  v13[0] = *&Type->u32_11E0; /*0x43ed96*/
  v13[1] = v7; /*0x43ed9a*/
  if ( v13[0] || v7 ) /*0x43eda2*/
  {
    v6 = (int *)World::ToScreen(&v14, v13, v12); /*0x43edb4*/
    goto LABEL_7; /*0x43edb4*/
  }
  LABEL_8:
  v8 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vfptr + 18))(this, v13); /*0x43edc6*/
  v9 = v8->vtable2; /*0x43edd4*/
  v14 = v3 + *v8; /*0x43eddb*/
  v15 = v5 + v9; /*0x43ede3*/
  v10 = (int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v18 + 72))(v18, v13); /*0x43edee*/
  v19 = *v10; /*0x43edf6*/
  Math::CalcAngle((double)v15 - (double)v10[1], (double)*v10 - (double)v14); /*0x43ee13*/
  (*((unsigned short *)&(v19))) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x43ee2c*/
  *v17 = v19; /*0x43ee3b*/
  return (int)v17; /*0x43ee39*/
}
  v7 = *&Type->u32_11E4; /*0x43ed88*/
  v13[0] = *&Type->u32_11E0; /*0x43ed96*/
  v13[1] = v7; /*0x43ed9a*/
  if ( v13[0] || v7 ) /*0x43eda2*/
  {
    v6 = (int *)World::ToScreen(&v14, v13, v12); /*0x43edb4*/
    goto LABEL_7; /*0x43edb4*/
  }
  LABEL_8:
  v8 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vfptr + 18))(this, v13); /*0x43edc6*/
  v9 = v8[1]; /*0x43edd4*/
  v14 = v3 + *v8; /*0x43eddb*/
  v15 = v5 + v9; /*0x43ede3*/
  v10 = (int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v18 + 72))(v18, v13); /*0x43edee*/
  v19 = *v10; /*0x43edf6*/
  Math::CalcAngle((double)v15 - (double)v10[1], (double)*v10 - (double)v14); /*0x43ee13*/
  v19 = ((v19) & 0xFFFF0000u) | ((unsigned int)(Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427)) & 0xFFFFu); /*0x43ee2c*/
  *v17 = v19; /*0x43ee3b*/
  return (int)v17; /*0x43ee39*/
}
// 0x4415F0
namespace gamemd {  
// G42.34 归属正名: 真身 gamemd::BuildingClass (vt+1260)
{
  double v1; // st7
  int v3; // ebp
  int *DamageFireAnims; // edi
  BuildingTypeClass *Type; // ecx
  int v6; // edx
  int bunkersCount; // edi
  HouseClass *owner; // ecx
  int v9; // eax
  BuildingTypeClass *v10; // eax
  char CloakRadius; // cl
  void (__thiscall **vtable0)(BuildingClass *, int); // edx
  int FoundationWidth; // eax
  int FoundationHeight; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // edi
  unsigned short *v19; // edi
  unsigned int *v20; // ebp
  int16_t v21; // dx
  int16_t v22; // cx
  int v23; // edi
  int v24; // edi
  int *v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  AnimClass *v29; // ebp
  void *v30; // ebx
  int *Explosion; // edi
  unsigned int v32; // eax
  int *v33; // ebx
  int *v34; // eax
  AnimClass *v35; // ebp
  int v36; // edi
  int Index; // eax
  int FloatPositive; // edi
  int v39; // eax
  int *v40; // eax
  CellClass *v41; // eax
  int v42; // eax
  void *v43; // edi
  AnimClass *v44; // ebp
  int *v45; // eax
  void **v46; // edi
  const char *v47; // eax
  int (__thiscall **v48)(BuildingClass *); // edx
  int i; // ebx
  unsigned int *v50; // edi
  int v51; // eax
  unsigned int *v52; // eax
  int v53; // ebp
  int v54; // ebx
  int *v55; // edi
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  ParticleSystemClass *v59; // eax
  int result; // eax
  int v61; // [esp+4h] [ebp-68h]
  ObjectClass *v62; // [esp+8h] [ebp-64h]
  int v63; // [esp+18h] [ebp-54h] BYREF
  int v64; // [esp+1Ch] [ebp-50h]
  int v65; // [esp+20h] [ebp-4Ch]
  int v66; // [esp+24h] [ebp-48h] BYREF
  int v67; // [esp+28h] [ebp-44h]
  int v68; // [esp+2Ch] [ebp-40h]
  int v69; // [esp+30h] [ebp-3Ch]
  int v70; // [esp+34h] [ebp-38h]
  int v71; // [esp+38h] [ebp-34h]
  int v72[3]; // [esp+3Ch] [ebp-30h] BYREF
  int v73; // [esp+48h] [ebp-24h] BYREF
  int v74; // [esp+4Ch] [ebp-20h]
  VectorClass v75; // [esp+54h] [ebp-18h] BYREF
  int v76; // [esp+64h] [ebp-8h]
  int v77; // [esp+68h] [ebp-4h]
  int v78; // [esp+74h] [ebp+8h]
  char v79; // [esp+78h] [ebp+Ch]
  unsigned short *v80; // [esp+7Ch] [ebp+10h]

  v3 = 8; /*0x4415f9*/
  DamageFireAnims = this->DamageFireAnims; /*0x4415fe*/
  do /*0x44161a*/
  {
    if ( *DamageFireAnims ) /*0x441604*/
    {
      DamageFireAnims->ProcessCraterFormation(*DamageFireAnims); /*0x44160e*/
      *DamageFireAnims = 0; /*0x441614*/
    }
    ++DamageFireAnims; /*0x441616*/
    --v3; /*0x441619*/
  }
  while ( v3 ); /*0x44161a*/
  if ( this->displayProductionTo[0] ) /*0x44161c*/
  {
    Type = this->Type; /*0x441624*/
    this->displayProductionTo[0] = 0; /*0x44162a*/
    if ( Type->Radar ) /*0x441630*/
    {
      this->owner->radarVisibleTo[0] = 0; /*0x441640*/
      v6 = 0; /*0x44164c*/
      bunkersCount = this->owner->bunkersCount; /*0x44164e*/
      if ( bunkersCount > 0 ) /*0x441653*/
      {
        do /*0x441694*/
        {
          owner = this->owner; /*0x441655*/
          v9 = *(unsigned int *)(owner->absorbersCount + 4 * v6); /*0x44165e*/
          if ( v9 && !*(unsigned char *)(v9 + 129) && *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5796) ) /*0x441674*/
            owner->radarVisibleTo[0] |= *(unsigned int *)(v9 + 528); /*0x44168b*/
          ++v6; /*0x441691*/
        }
        while ( v6 < bunkersCount ); /*0x441694*/
      }
      MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 2); /*0x44169d*/
    }
  }
  v10 = this->Type; /*0x4416a2*/
  if ( v10->CloakGenerator ) /*0x4416a8*/
  {
    CloakRadius = this->CloakRadius; /*0x4416b2*/
    this->HasCloakingData = -1; /*0x4416b8*/
    if ( !CloakRadius ) /*0x4416c1*/
      this->CloakRadius = v10->CloakRadiusInCells; /*0x4416c9*/
    vtable0 = (void (__thiscall **)(BuildingClass *, int))this->vfptr; /*0x4416cf*/
    this->needsRedraw = 1; /*0x4416d5*/
    this->CloakRadius = 1; /*0x4416dc*/
    vtable0[260](this, 1); /*0x4416e3*/
  }
  if ( this->Type->LaserFencePost ) /*0x4416ef*/
    BuildingClass::DemolishBridgeCheck(this, 1); /*0x4416fd*/
  if ( this->Type->RevealToAll && !(uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x441718*/
    (*((void (__thiscall **)(BuildingClass *, unsigned int, unsigned int, int, Object *))this->vfptr + 291))( /*0x44172f*/
      this,
      0,
      0,
      1,
      dword_A83D4C);
  if ( !*(unsigned int *)((*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this) + 1312) ) /*0x44173f*/
  {
    v63 = this->location[0]; /*0x441757*/
    v64 = this->location[1]; /*0x441764*/
    v65 = this->location[2]; /*0x44176f*/
    PlayAudioAt2(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1768), &v63, 0); /*0x441779*/
  }
  if ( BuildingTypeClass::GetFoundationWidth(this->Type) >= 2 /*0x4417a1*/
    && BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) >= 2 )
  {
    if ( BuildingTypeClass::GetFoundationWidth(this->Type) > 2 ) /*0x4417b5*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(this->Type); /*0x4417bd*/
      Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, FoundationWidth - 2); /*0x4417d3*/
    }
    if ( BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) > 2 ) /*0x4417e7*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x4417f0*/
      Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, FoundationHeight - 2); /*0x441805*/
    }
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x441821*/
    {
      v65 = 0; /*0x441892*/
      v17 = this->location[0]; /*0x441896*/
      v18 = this->location[1]; /*0x441898*/
      v71 = this->location[2]; /*0x44189e*/
      v63 = ((int16_t)(v17 / 256) << 8) + 128; /*0x4418d6*/
      v64 = ((int16_t)(v18 / 256) << 8) + 128; /*0x4418da*/
      TimedCreateUnitAtCoords(&v63, 100, 100, 1); /*0x4418e7*/
    }
    else
    {
      v65 = 0; /*0x44182d*/
      v15 = this->location[1]; /*0x441833*/
      v16 = this->location[0]; /*0x441839*/
      v71 = this->location[2]; /*0x441840*/
      v63 = ((int16_t)(v16 / 256) << 8) + 128; /*0x44186f*/
      v64 = ((int16_t)(v15 / 256) << 8) + 128; /*0x44187d*/
      StandardCreateUnitAtCoords(&v63, 100, 100, 1); /*0x441881*/
    }
  }
  while ( *v80 != 0x7FFF || v80[1] != 0x7FFF ) /*0x4418fd*/
  {
    v19 = v80; /*0x441903*/
    v80 += 2; /*0x44190c*/
    v20 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vfptr + 43))(this, v72); /*0x44191b*/
    v21 = v20[1] / 256 + v19[1]; /*0x44193e*/
    v22 = *v19 + *v20 / 256; /*0x44194a*/
    if ( this->Type->Explosion[4] > 0 ) /*0x441955*/
    {
      v69 = this->location[0]; /*0x441972*/
      v23 = this->location[1]; /*0x441976*/
      v63 = (v22 << 8) + 128; /*0x44197f*/
      v64 = (v21 << 8) + 128; /*0x441983*/
      v70 = v23; /*0x441987*/
      v24 = this->location[2]; /*0x44198b*/
      v65 = 0; /*0x441998*/
      v25 = RandomCoordScatter(&v73, &v63, v1, 64, 0); /*0x44199c*/
      v26 = *v25; /*0x4419a1*/
      v27 = v25->vtable2; /*0x4419a3*/
      v28 = v24 + v25->vtable3; /*0x4419ae*/
      v66 = v26; /*0x4419b0*/
      v67 = v27; /*0x4419b4*/
      v68 = v28; /*0x4419b8*/
      v29 = (AnimClass *)operator new(0x1C8u); /*0x4419c1*/
      if ( v29 ) /*0x4419c8*/
      {
        v30 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 3); /*0x4419f3*/
        Explosion = this->Type->Explosion; /*0x4419f5*/
        v32 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x4419fb*/
        AnimClass::ctor(v29, *(void **)(Explosion[1] + 4 * (v32 % Explosion[4])), &v66, v30, 1, (void *)0x600, 0, 0); /*0x441a1f*/
      }
    }
  }
  if ( (this->u8_521) ) /*0x441a31*/
  {
    v33 = (int *)&unk_818CB8; /*0x441a3f*/
    do /*0x441b28*/
    {
      v66 = this->location[0]; /*0x441a50*/
      v61 = *v33; /*0x441a59*/
      v67 = this->location[1]; /*0x441a5a*/
      v68 = this->location[2]; /*0x441a69*/
      v34 = globalHelper_09F550(&v73, &v66, v61); /*0x441a6d*/
      v63 = *v34; /*0x441a74*/
      v64 = v34->u32_4; /*0x441a7b*/
      v65 = v34->u32_8; /*0x441a8c*/
      if ( *(unsigned int *)&Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v63)->__pad_28[28] != -1 ) /*0x441a99*/
      {
        if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array /*0x441aba*/
                                  + 4
                                  * *(unsigned int *)&Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v63)->__pad_28[28])
                      + 688) )
        {
          v35 = (AnimClass *)operator new(0x1C8u); /*0x441ace*/
          if ( v35 ) /*0x441ad5*/
          {
            v36 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x441af1*/
            Index = AnimTypeClass::FindIndex(&stru_818E00); /*0x441af3*/
            AnimClass::ctor( /*0x441b1a*/
              v35,
              *(void **)(FootClass_Array.primaryFacing[3] + 4 * Index),
              &v63,
              (void *)(v36 + 3),
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
      ++v33; /*0x441b1f*/
    }
    while ( (int)v33 < (int)dword_818CC8 ); /*0x441b28*/
  }
  Float4::Sum(&this->tiltSidewaysAngle); /*0x441b38*/
  while ( v1 >= 1.0 ) /*0x441b48*/
  {
    FloatPositive = FirstFloatPositive(&this->tiltSidewaysAngle); /*0x441b5b*/
    Float::SubtractClamped(&this->tiltSidewaysAngle, 1.0, FloatPositive); /*0x441b65*/
    Float::SubtractClamped(this->owner->ownedTiberium, 1.0, FloatPositive); /*0x441b7e*/
    v39 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 256, 768); /*0x441b9a*/
    v66 = this->location[0]; /*0x441ba6*/
    v67 = this->location[1]; /*0x441bad*/
    v68 = this->location[2]; /*0x441bb8*/
    v40 = RandomCoordScatter(&v73, &v66, v1, v39, 1); /*0x441bc0*/
    v63 = *v40; /*0x441bc9*/
    v64 = v40[1]; /*0x441bd1*/
    v65 = v40[2]; /*0x441be2*/
    v41 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v63); /*0x441be6*/
    Crate::FindPlacement((int)v41, FloatPositive, 1); /*0x441bed*/
    Float4::Sum(&this->tiltSidewaysAngle); /*0x441bf4*/
  }
  if ( (*((int (__thiscall **)(BuildingTypeClass *, HouseClass *))this->Type->vfptr + 33))(this->Type, this->owner) /*0x441c30*/
     / *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1480) > 0 )
    nullsub_51(v62); /*0x441c34*/
  if ( (*((int (__thiscall **)(BuildingClass *))this->vfptr + 97))(this) == 19 || (this->u8_521) ) /*0x441c4e*/
  {
    this->C4Timer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x441c83*/
    this->C4Timer[1] = v74; /*0x441c89*/
    this->C4Timer[2] = 0; /*0x441c8c*/
    v42 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x441c8f*/
    this->animation[5] = 0; /*0x441c9a*/
    this->animation[2] = v42; /*0x441ca0*/
    this->animation[3] = v74; /*0x441ca6*/
    this->animation[4] = 0; /*0x441ca9*/
  }
  else
  {
    this->C4Timer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x441c68*/
    this->C4Timer[1] = v74; /*0x441c6e*/
    this->C4Timer[2] = 8; /*0x441c71*/
  }
  if ( this->Type->DestroyAnim[4] > 0 ) /*0x441cb8*/
  {
    v43 = *(void **)(this->Type->DestroyAnim[1] /*0x441ce3*/
                   + 4
                   * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                    % this->Type->DestroyAnim[4]));
    if ( v43 ) /*0x441ce8*/
    {
      v44 = (AnimClass *)operator new(0x1C8u); /*0x441cf4*/
      if ( v44 ) /*0x441cfb*/
      {
        v45 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vfptr + 43))(this, &v73); /*0x441d10*/
        v46 = AnimClass::ctor(v44, v43, v45, 0, 1, (void *)0x600, 0, 0); /*0x441d1f*/
      }
      else
      {
        v46 = 0; /*0x441d23*/
      }
      if ( *(unsigned int *)((*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this) + 3568) ) /*0x441d2f*/
      {
        v46[53] = (void *)(*((int (__thiscall **)(BuildingClass *))this->vfptr + 121))(this); /*0x441d41*/
        v47 = &this->Type->__pad_DC8[8]; /*0x441d4d*/
        if ( *v47 ) /*0x441d52*/
          strncpy(&v46->PaletteName, v47, 0x20u); /*0x441d61*/
      }
    }
  }
  VectorClass::ConstructorWithVtable(&v75, 0, 0); /*0x441d6f*/
  v48 = (int (__thiscall **)(BuildingClass *))this->vfptr; /*0x441d74*/
  /* X11: vtable install elided (implicit via class virtuals 0x441d78) — binary-proven install, was 0 */
  v77 = 10; /*0x441d80*/
  v76 = 0; /*0x441d88*/
  for ( i = *(unsigned int *)(v48[33](this) + 1956) - 1; i >= 0; --i ) /*0x441d9e*/
  {
    if ( !*(unsigned int *)(*(unsigned int *)(*(unsigned int *)((*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this) + 1944) /*0x441dc3*/
                                + 4 * i)
                    + 692) )
    {
      v50 = (unsigned int *)(4 * i + *(unsigned int *)((*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this) + 1944)); /*0x441de6*/
      if ( v76 < v75.Capacity /*0x441e11*/
        || (v75.IsAllocated || !v75.Capacity)
        && v77 > 0
        && (*((uint8_t (__thiscall **)(VectorClass *, int, unsigned int))v75.vfptr + 2))(&v75, v77 + v75.Capacity, 0) )
      {
        v51 = v76++; /*0x441e20*/
        *((unsigned int *)v75.Items + v51) = *v50; /*0x441e29*/
      }
    }
  }
  if ( !this->ambientParticles_2 && v76 > 0 && (*((int (__thiscall **)(BuildingClass *))this->vfptr + 114))(this) > -10 ) /*0x441e5a*/
  {
    v52 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this); /*0x441e64*/
    v53 = v52[496]; /*0x441e6a*/
    v54 = v52[497]; /*0x441e70*/
    v71 = v52[498]; /*0x441e83*/
    v55 = (int *)operator new(0x100u); /*0x441e8c*/
    if ( v55 ) /*0x441e93*/
    {
      v56 = this->location[1]; /*0x441ea1*/
      v66 = v53 + this->location[0]; /*0x441ea4*/
      v57 = v71 + this->location[2]; /*0x441eb5*/
      v67 = v54 + v56; /*0x441eb7*/
      v68 = v57; /*0x441ecb*/
      v58 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v76 - 1); /*0x441ecf*/
      v59 = (ParticleSystemClass *)ParticleSystemClass::Constructor( /*0x441eed*/
                                     v55,
                                     *((unsigned int *)v75.Items + v58),
                                     &v66,
                                     0,
                                     this,
                                     &g_BuildingClassPool,
                                     0);
    }
    else
    {
      v59 = 0; /*0x441ef4*/
    }
    this->ambientParticles_2 = v59; /*0x441ef6*/
  }
  this->health = 0; /*0x441f00*/
  if ( v79 ) /*0x441f09*/
    this->NoCrew = 1; /*0x441f0b*/
  BuildingClass::EjectCrew(this, this->C4AppliedBy); /*0x441f1b*/
  TechnoClass::CleanupAll((TechnoClass *)this, v78); /*0x441f27*/
  result = (int)v75.Items; /*0x441f2c*/
  /* X11: vtable install elided (implicit via class virtuals 0x441f35) — binary-proven install, was 0 */
  if ( v75.Items && v75.IsAllocated ) /*0x441f46*/
    operator delete((void *)(v75.Items)); /*0x441f49*/
  return result; /*0x441f30*/
}
  while ( v3 ); /*0x44161a*/
  if ( this->displayProductionTo[0] ) /*0x44161c*/
  {
    Type = this->Type; /*0x441624*/
    this->displayProductionTo[0] = 0; /*0x44162a*/
    if ( Type->Radar ) /*0x441630*/
    {
      this->owner->radarVisibleTo[0] = 0; /*0x441640*/
      v6 = 0; /*0x44164c*/
      bunkersCount = this->owner->bunkersCount; /*0x44164e*/
      if ( bunkersCount > 0 ) /*0x441653*/
      {
        do /*0x441694*/
        {
          owner = this->owner; /*0x441655*/
          v9 = *(unsigned int *)(owner->absorbersCount + 4 * v6); /*0x44165e*/
          if ( v9 && !*(unsigned char *)(v9 + 129) && *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5796) ) /*0x441674*/
            owner->radarVisibleTo[0] |= *(unsigned int *)(v9 + 528); /*0x44168b*/
          ++v6; /*0x441691*/
        }
        while ( v6 < bunkersCount ); /*0x441694*/
      }
      MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 2); /*0x44169d*/
    }
  }
  v10 = this->Type; /*0x4416a2*/
  if ( v10->CloakGenerator ) /*0x4416a8*/
  {
    CloakRadius = this->CloakRadius; /*0x4416b2*/
    this->HasCloakingData = -1; /*0x4416b8*/
    if ( !CloakRadius ) /*0x4416c1*/
      this->CloakRadius = v10->CloakRadiusInCells; /*0x4416c9*/
    vtable0 = (void (__thiscall **)(BuildingClass *, int))this->vfptr; /*0x4416cf*/
    this->needsRedraw = 1; /*0x4416d5*/
    this->CloakRadius = 1; /*0x4416dc*/
    vtable0[260](this, 1); /*0x4416e3*/
  }
  if ( this->Type->LaserFencePost ) /*0x4416ef*/
    BuildingClass::DemolishBridgeCheck(this, 1); /*0x4416fd*/
  if ( this->Type->RevealToAll && !(uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x441718*/
    (*((void (__thiscall **)(BuildingClass *, unsigned int, unsigned int, int, Object *))this->vfptr + 291))( /*0x44172f*/
      this,
      0,
      0,
      1,
      dword_A83D4C);
  if ( !*(unsigned int *)((*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this) + 1312) ) /*0x44173f*/
  {
    v63 = this->location[0]; /*0x441757*/
    v64 = this->location[1]; /*0x441764*/
    v65 = this->location[2]; /*0x44176f*/
    PlayAudioAt2(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1768), &v63, 0); /*0x441779*/
  }
  if ( BuildingTypeClass::GetFoundationWidth(this->Type) >= 2 /*0x4417a1*/
    && BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) >= 2 )
  {
    if ( BuildingTypeClass::GetFoundationWidth(this->Type) > 2 ) /*0x4417b5*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(this->Type); /*0x4417bd*/
      Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, FoundationWidth - 2); /*0x4417d3*/
    }
    if ( BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) > 2 ) /*0x4417e7*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x4417f0*/
      Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, FoundationHeight - 2); /*0x441805*/
    }
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x441821*/
    {
      v65 = 0; /*0x441892*/
      v17 = this->location[0]; /*0x441896*/
      v18 = this->location[1]; /*0x441898*/
      v71 = this->location[2]; /*0x44189e*/
      v63 = ((int16_t)(v17 / 256) << 8) + 128; /*0x4418d6*/
      v64 = ((int16_t)(v18 / 256) << 8) + 128; /*0x4418da*/
      TimedCreateUnitAtCoords(&v63, 100, 100, 1); /*0x4418e7*/
    }
    else
    {
      v65 = 0; /*0x44182d*/
      v15 = this->location[1]; /*0x441833*/
      v16 = this->location[0]; /*0x441839*/
      v71 = this->location[2]; /*0x441840*/
      v63 = ((int16_t)(v16 / 256) << 8) + 128; /*0x44186f*/
      v64 = ((int16_t)(v15 / 256) << 8) + 128; /*0x44187d*/
      StandardCreateUnitAtCoords(&v63, 100, 100, 1); /*0x441881*/
    }
  }
  while ( *v80 != 0x7FFF || v80[1] != 0x7FFF ) /*0x4418fd*/
  {
    v19 = v80; /*0x441903*/
    v80 += 2; /*0x44190c*/
    v20 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vfptr + 43))(this, v72); /*0x44191b*/
    v21 = v20[1] / 256 + v19[1]; /*0x44193e*/
    v22 = *v19 + *v20 / 256; /*0x44194a*/
    if ( this->Type->Explosion[4] > 0 ) /*0x441955*/
    {
      v69 = this->location[0]; /*0x441972*/
      v23 = this->location[1]; /*0x441976*/
      v63 = (v22 << 8) + 128; /*0x44197f*/
      v64 = (v21 << 8) + 128; /*0x441983*/
      v70 = v23; /*0x441987*/
      v24 = this->location[2]; /*0x44198b*/
      v65 = 0; /*0x441998*/
      v25 = RandomCoordScatter(&v73, &v63, v1, 64, 0); /*0x44199c*/
      v26 = *v25; /*0x4419a1*/
      v27 = v25[1]; /*0x4419a3*/
      v28 = v24 + v25[2]; /*0x4419ae*/
      v66 = v26; /*0x4419b0*/
      v67 = v27; /*0x4419b4*/
      v68 = v28; /*0x4419b8*/
      v29 = (AnimClass *)new unsigned char[0x1C8u]; /*0x4419c1*/
      if ( v29 ) /*0x4419c8*/
      {
        v30 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 3); /*0x4419f3*/
        Explosion = this->Type->Explosion; /*0x4419f5*/
        v32 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x4419fb*/
        AnimClass::ctor(v29, *(void **)(Explosion[1] + 4 * (v32 % Explosion[4])), &v66, v30, 1, (void *)0x600, 0, 0); /*0x441a1f*/
      }
    }
  }
  if ( (unsigned char)((this->((unsigned int *)Type)[0]) >> 8) ) /*0x441a31*/
  {
    v33 = (int *)&unk_818CB8; /*0x441a3f*/
    do /*0x441b28*/
    {
      v66 = this->location[0]; /*0x441a50*/
      v61 = *v33; /*0x441a59*/
      v67 = this->location[1]; /*0x441a5a*/
      v68 = this->location[2]; /*0x441a69*/
      v34 = globalHelper_09F550(&v73, &v66, v61); /*0x441a6d*/
      v63 = *v34; /*0x441a74*/
      v64 = v34[1]; /*0x441a7b*/
      v65 = v34[2]; /*0x441a8c*/
      if ( *(unsigned int *)&Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v63)->q028[28] != -1 ) /*0x441a99*/
      {
        if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array /*0x441aba*/
                                  + 4
                                  * *(unsigned int *)&Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v63)->q028[28])
                      + 688) )
        {
          v35 = (AnimClass *)new unsigned char[0x1C8u]; /*0x441ace*/
          if ( v35 ) /*0x441ad5*/
          {
            v36 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x441af1*/
            Index = AnimTypeClass::FindIndex(&stru_818E00); /*0x441af3*/
            AnimClass::ctor( /*0x441b1a*/
              v35,
              *(void **)(FootClass_Array.primaryFacing[3] + 4 * Index),
              &v63,
              (void *)(v36 + 3),
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
      ++v33; /*0x441b1f*/
    }
    while ( (int)v33 < (int)dword_818CC8 ); /*0x441b28*/
  }
  Float4::Sum((int *)&this->tiltSidewaysAngle); /*0x441b38*/
  while ( v1 >= 1.0 ) /*0x441b48*/
  {
    FloatPositive = FirstFloatPositive(&this->tiltSidewaysAngle); /*0x441b5b*/
    Float::SubtractClamped((int *)&this->tiltSidewaysAngle, 1.0, FloatPositive); /*0x441b65*/
    Float::SubtractClamped(this->owner->ownedTiberium, 1.0, FloatPositive); /*0x441b7e*/
    v39 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 256, 768); /*0x441b9a*/
    v66 = this->location[0]; /*0x441ba6*/
    v67 = this->location[1]; /*0x441bad*/
    v68 = this->location[2]; /*0x441bb8*/
    v40 = RandomCoordScatter(&v73, &v66, v1, v39, 1); /*0x441bc0*/
    v63 = *v40; /*0x441bc9*/
    v64 = v40[1]; /*0x441bd1*/
    v65 = v40[2]; /*0x441be2*/
    v41 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v63); /*0x441be6*/
    Crate::FindPlacement((int)v41, FloatPositive, 1); /*0x441bed*/
    Float4::Sum(&this->Float4_218); /*0x441bf4*/
  }
  if ( (*((int (__thiscall **)(BuildingTypeClass *, HouseClass *))this->Type->vfptr + 33))(this->Type, this->owner) /*0x441c30*/
     / *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1480) > 0 )
    nullsub_51(v62); /*0x441c34*/
  if ( (*((int (__thiscall **)(BuildingClass *))this->vfptr + 97))(this) == 19 || (unsigned char)((this->((unsigned int *)Type)[0]) >> 8) ) /*0x441c4e*/
  {
    this->C4Timer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x441c83*/
    this->C4Timer[1] = v74; /*0x441c89*/
    this->C4Timer[2] = 0; /*0x441c8c*/
    v42 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x441c8f*/
    this->animation[5] = 0; /*0x441c9a*/
    this->animation[2] = v42; /*0x441ca0*/
    this->animation[3] = v74; /*0x441ca6*/
    this->animation[4] = 0; /*0x441ca9*/
  }
  else
  {
    this->C4Timer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x441c68*/
    this->C4Timer[1] = v74; /*0x441c6e*/
    this->C4Timer[2] = 8; /*0x441c71*/
  }
  if ( this->Type->DestroyAnim[4] > 0 ) /*0x441cb8*/
  {
    v43 = *(void **)(this->Type->DestroyAnim[1] /*0x441ce3*/
                   + 4
                   * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                    % this->Type->DestroyAnim[4]));
    if ( v43 ) /*0x441ce8*/
    {
      v44 = (AnimClass *)new unsigned char[0x1C8u]; /*0x441cf4*/
      if ( v44 ) /*0x441cfb*/
      {
        v45 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vfptr + 43))(this, &v73); /*0x441d10*/
        v46 = AnimClass::ctor(v44, v43, v45, 0, 1, (void *)0x600, 0, 0); /*0x441d1f*/
      }
      else
      {
        v46 = 0; /*0x441d23*/
      }
      if ( *(unsigned int *)((*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this) + 3568) ) /*0x441d2f*/
      {
        v46[53] = (void *)(*((int (__thiscall **)(BuildingClass *))this->vfptr + 121))(this); /*0x441d41*/
        v47 = &this->Type->__pad_DC8[8]; /*0x441d4d*/
        if ( *v47 ) /*0x441d52*/
          strncpy((char *)v46 + 220, v47, 0x20u); /*0x441d61*/
      }
    }
  }
  VectorClass::ConstructorWithVtable(&v75, 0, 0); /*0x441d6f*/
  v48 = (int (__thiscall **)(BuildingClass *))this->vfptr; /*0x441d74*/
  /* X11: vtable install elided (implicit via DynamicVectorClass_ParticleSystemTypeClass_const__ virtuals 0x441d78) */
  v77 = 10; /*0x441d80*/
  v76 = 0; /*0x441d88*/
  for ( i = *(unsigned int *)(v48[33](this) + 1956) - 1; i >= 0; --i ) /*0x441d9e*/
  {
    if ( !*(unsigned int *)(*(unsigned int *)(*(unsigned int *)((*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this) + 1944) /*0x441dc3*/
                                + 4 * i)
                    + 692) )
    {
      v50 = (unsigned int *)(4 * i + *(unsigned int *)((*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this) + 1944)); /*0x441de6*/
      if ( v76 < v75.Capacity /*0x441e11*/
        || (v75.IsAllocated || !v75.Capacity)
        && v77 > 0
        && (*((uint8_t (__thiscall **)(VectorClass *, int, unsigned int))v75.vfptr + 2))(&v75, v77 + v75.Capacity, 0) )
      {
        v51 = v76++; /*0x441e20*/
        *((unsigned int *)v75.Items + v51) = *v50; /*0x441e29*/
      }
    }
  }
  if ( !this->ambientParticles_2 && v76 > 0 && (*((int (__thiscall **)(BuildingClass *))this->vfptr + 114))(this) > -10 ) /*0x441e5a*/
  {
    v52 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *))this->vfptr + 33))(this); /*0x441e64*/
    v53 = v52[496]; /*0x441e6a*/
    v54 = v52[497]; /*0x441e70*/
    v71 = v52[498]; /*0x441e83*/
    v55 = (int *)new unsigned char[0x100u]; /*0x441e8c*/
    if ( v55 ) /*0x441e93*/
    {
      v56 = this->location[1]; /*0x441ea1*/
      v66 = v53 + this->location[0]; /*0x441ea4*/
      v57 = v71 + this->location[2]; /*0x441eb5*/
      v67 = v54 + v56; /*0x441eb7*/
      v68 = v57; /*0x441ecb*/
      v58 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v76 - 1); /*0x441ecf*/
      v59 = (ParticleSystemClass *)ParticleSystemClass::Constructor( /*0x441eed*/
                                     v55,
                                     *((unsigned int *)v75.Items + v58),
                                     &v66,
                                     0,
                                     this,
                                     &g_BuildingClassPool,
                                     0);
    }
    else
    {
      v59 = 0; /*0x441ef4*/
    }
    this->ambientParticles_2 = v59; /*0x441ef6*/
  }
  this->health = 0; /*0x441f00*/
  if ( v79 ) /*0x441f09*/
    this->NoCrew = 1; /*0x441f0b*/
  BuildingClass::EjectCrew(this, this->C4AppliedBy); /*0x441f1b*/
  TechnoClass::CleanupAll((TechnoClass *)this, v78); /*0x441f27*/
  result = (int)v75.Items; /*0x441f2c*/
  /* X11: vtable install elided (implicit via VectorClass_ParticleSystemTypeClass_const__ virtuals 0x441f35) */
  if ( v75.Items && v75.IsAllocated ) /*0x441f46*/
    delete[] (v75.Items); /*0x441f49*/
  return result; /*0x441f30*/
}
// 0x442C40
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
{
  int v1; // edi
  BuildingClass *owner; // ecx
  unsigned int *Type; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int result; // eax
  TechnoClass *v10; // [esp+0h] [ebp-4h]

  TechnoClass::Update(v10, v1); /*0x442c43*/
  owner = (BuildingClass *)hpp->owner; /*0x442c48*/
  if ( owner ) /*0x442c50*/
  {
    hpp->OwnerCountryIndex = *(unsigned int *)(owner->attachedTag + 184); /*0x442c5c*/
    BuildingClass::PowerUpdate(owner, hpp); /*0x442c62*/
  }
  Type = (unsigned int *)hpp->Type; /*0x442c67*/
  if ( Type ) /*0x442c6f*/
  {
    v5 = Type->Strength; /*0x442c75*/
    hpp->v5 = v5; /*0x442c7b*/
    hpp->v5 = v5; /*0x442c7e*/
    v6 = Type->InitialAmmo; /*0x442c81*/
    if ( v6 == -1 ) /*0x442c8a*/
      v6 = Type->Ammo; /*0x442c8c*/
    hpp->v6 = v6; /*0x442c92*/
    BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)hpp->primaryFacing, Type->ROT); /*0x442ca5*/
    if ( (*(int (__thiscall **)(int))(*(unsigned int *)hpp->Type + 192))(hpp->Type) ) /*0x442cb2*/
    {
      BuildingTypeClass::IsPowered((BuildingTypeClass *)hpp->Type); /*0x442cca*/
      hpp->BuildingClass_field_bool_6E9[0] = 1; /*0x442ccf*/
    }
    else
    {
      hpp->BuildingClass_field_bool_6DC[0] = 0; /*0x442cbc*/
    }
    v7 = hpp->owner; /*0x442cd6*/
    if ( v7 ) /*0x442cde*/
    {
      if ( v7->warFactoryInfiltrated ) /*0x442ce0*/
      {
        v8 = hpp->Type; /*0x442cea*/
        if ( !v8->Naval && v8->Trainable && v8->VoiceMove ) /*0x442d04*/
          Power::ChangedHouse((Power *)&hpp->veterancy, 1); /*0x442d16*/
      }
    }
  }
  result = hpp->Type; /*0x442d1b*/
  if ( result && result->SecretLab ) /*0x442d25*/
  {
    result = dword_8B41E8; /*0x442d2f*/
    if ( dword_8B41F0 < dword_8B41E8 /*0x442d6b*/
      || (byte_8B41ED || !dword_8B41E8)
      && dword_8B41F4 > 0
      && (result = dword_8B41E0.vt_slot_8(dword_8B41E8 + dword_8B41F4, 0),
          (unsigned char)result) )
    {
      result = dword_8B41F0++; /*0x442d73*/
      *((unsigned int *)dword_8B41E4 + result) = hpp; /*0x442d82*/
    }
  }
  return result; /*0x442d85*/
}
  Type = (unsigned int *)hpp->Type; /*0x442c67*/
  if ( Type ) /*0x442c6f*/
  {
    v5 = Type[40]; /*0x442c75*/
    hpp->v5 = v5; /*0x442c7b*/
    hpp->v5 = v5; /*0x442c7e*/
    v6 = Type[416]; /*0x442c81*/
    if ( v6 == -1 ) /*0x442c8a*/
      v6 = Type[417]; /*0x442c8c*/
    hpp->v6 = v6; /*0x442c92*/
    BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)hpp->primaryFacing, Type[455]); /*0x442ca5*/
    if ( (*(int (__thiscall **)(int))(*(unsigned int *)hpp->Type + 192))(hpp->Type) ) /*0x442cb2*/
    {
      BuildingTypeClass::IsPowered((BuildingTypeClass *)hpp->Type); /*0x442cca*/
      hpp->BuildingClass_field_bool_6E9[0] = 1; /*0x442ccf*/
    }
    else
    {
      hpp->BuildingClass_field_bool_6DC[0] = 0; /*0x442cbc*/
    }
    v7 = hpp->owner; /*0x442cd6*/
    if ( v7 ) /*0x442cde*/
    {
      if ( v7->warFactoryInfiltrated ) /*0x442ce0*/
      {
        v8 = hpp->Type; /*0x442cea*/
        if ( !v8->Naval && v8->qC8E && v8->VoiceMove ) /*0x442d04*/
          Power::ChangedHouse((Power *)&hpp->veterancy, 1); /*0x442d16*/
      }
    }
  }
  result = hpp->Type; /*0x442d1b*/
  if ( result && result->SecretLab ) /*0x442d25*/
  {
    result = dword_8B41E8; /*0x442d2f*/
    if ( dword_8B41F0 < dword_8B41E8 /*0x442d6b*/
      || (byte_8B41ED || !dword_8B41E8)
      && dword_8B41F4 > 0
      && (result = (*(int (__thiscall **)(Vector *, int, unsigned int))(*(unsigned int *)dword_8B41E0.q000 + 8))(
                     &dword_8B41E0,
                     dword_8B41E8 + dword_8B41F4,
                     0),
          result) )

    {
      result = dword_8B41F0++; /*0x442d73*/
      *((unsigned int *)dword_8B41E4 + result) = hpp; /*0x442d82*/
    }
  }
  return result; /*0x442d85*/
}
// 0x443B90
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+Ch] [ebp+4h]

  if ( hpp->currentMission == 19 || !hpp->IsPoweredActive() ) /*0x443b9f*/
  {
    v2 = 0; /*0x443ba9*/
    return TechnoClass::AssignTarget_SyncLog((TechnoClass *)hpp, v2); /*0x443bae*/
  }
  v2 = v4; /*0x443bb8*/
  if ( !v4 /*0x443bf4*/
    || !*(unsigned int *)hpp->SelectVocOrSfx(0)
    || *(unsigned char *)(*(unsigned int *)(*(unsigned int *)hpp->SelectVocOrSfx(0)
                            + 160)
                + 676)
    || hpp->CheckCellPassable2(v4) )
  {
    return TechnoClass::AssignTarget_SyncLog((TechnoClass *)hpp, v2); /*0x443bfc*/
  }
  TechnoClass::AssignTarget_SyncLog((TechnoClass *)hpp, 0); /*0x443c02*/
  result = hpp->Type; /*0x443c07*/
  if ( result->TickTank || result->Artillary ) /*0x443c17*/
  {
    result = House::IsCurrentPlayer((House *)hpp->owner); /*0x443c27*/
    if ( !(unsigned char)result ) /*0x443c2e*/
    {
      result = hpp->HasPassengers(); /*0x443c34*/
      if ( !(unsigned char)result ) /*0x443c3c*/
      {
        hpp->MissionDispatch(19, 0); /*0x443c4a*/
        return hpp->AdvanceState(); /*0x443c54*/
      }
    }
  }
  return result; /*0x443bb3*/
}
  v2 = v4; /*0x443bb8*/
  if ( !v4 /*0x443bf4*/
    || !*(unsigned int *)hpp->SelectVocOrSfx(0)
    || *(unsigned char *)(*(unsigned int *)(*(unsigned int *)hpp->SelectVocOrSfx(0)
                            + 160)
                + 676)
    || hpp->CheckCellPassable2(v4) )
  {
    return TechnoClass::AssignTarget_SyncLog((TechnoClass *)hpp, v2); /*0x443bfc*/
  }
  TechnoClass::AssignTarget_SyncLog((TechnoClass *)hpp, 0); /*0x443c02*/
  result = hpp->Type; /*0x443c07*/
  if ( result->TickTank || result->Artillary ) /*0x443c17*/
  {
    result = House::IsCurrentPlayer((House *)hpp->owner); /*0x443c27*/
    if ( !result ) /*0x443c2e*/

    {
      result = hpp->HasPassengers(); /*0x443c34*/
      if ( !result ) /*0x443c3c*/

      {
        hpp->MissionDispatch(19, 0); /*0x443c4a*/
        return hpp->AdvanceState(); /*0x443c54*/
      }
    }
  }
  return result; /*0x443bb3*/
}
// 0x4456D0
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (canon vt+1248/1264 归属正名)
{
  int result; // eax
  int j; // esi
  int m; // esi
  int k; // esi
  int i; // esi

  result = (int)this->owner; /*0x4456d0*/
  if ( (Object *)result == dword_A83D4C ) /*0x4456df*/
  {
    (*((unsigned char *)&(result))) = this->inLimbo; /*0x4456e5*/
    if ( !(unsigned char)result ) /*0x4456ed*/
    {
      (*((unsigned char *)&(result))) = this->isDiscoveredByCurrentPlayer; /*0x4456f3*/
      if ( (unsigned char)result ) /*0x4456fb*/
      {
        (*((unsigned char *)&(result))) = this->HasPower; /*0x445701*/
        if ( (unsigned char)result ) /*0x445709*/
        {
          result = this->Type->Factory[0] - 3; /*0x44571b*/
          switch ( this->Type->Factory[0] ) /*0x44572f*/
          {
            case 3: /*0x44572f*/
              result = dword_A8B228; /*0x445800*/
              for ( i = 0; i < dword_A8B228; ++i ) /*0x445809*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((unsigned int *)dword_A8B21C + i), 0, 1) ) /*0x44581e*/
                  SidebarClass::AddCameo((SidebarClass *)&DataGlobal_87F7E8, 3, i); /*0x44582f*/
                result = dword_A8B228; /*0x445834*/
              }
              break; /*0x44583c*/
            case 7: /*0x44572f*/
              result = dword_A83C78; /*0x445736*/
              for ( j = 0; j < dword_A83C78; ++j ) /*0x44573f*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((unsigned int *)dword_A83C6C + j), 0, 1) ) /*0x445758*/
                  SidebarClass::AddCameo((SidebarClass *)&DataGlobal_87F7E8, 7, j); /*0x445769*/
                result = dword_A83C78; /*0x44576e*/
              }
              break; /*0x445776*/
            case 0x10: /*0x44572f*/
              result = dword_A8E358; /*0x4457bf*/
              for ( k = 0; k < dword_A8E358; ++k ) /*0x4457c8*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((unsigned int *)dword_A8E34C + k), 0, 1) ) /*0x4457de*/
                  SidebarClass::AddCameo((SidebarClass *)&DataGlobal_87F7E8, 16, k); /*0x4457ef*/
                result = dword_A8E358; /*0x4457f4*/
              }
              break; /*0x4457fc*/
            case 0x28: /*0x44572f*/
              result = dword_A83CF0; /*0x44577a*/
              for ( m = 0; m < dword_A83CF0; ++m ) /*0x445783*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((unsigned int *)dword_A83CE4 + m), 0, 1) ) /*0x44579d*/
                  SidebarClass::AddCameo((SidebarClass *)&DataGlobal_87F7E8, 40, m); /*0x4457ae*/
                result = dword_A83CF0; /*0x4457b3*/
              }
              break; /*0x4457bb*/
            default:
              return result;
          }
        }
      }
    }
  }
  return result; /*0x445778*/
}
  return result; /*0x445778*/
}
// 0x448160
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (canon vt+1248/1264 归属正名)
{
  int v2; // ecx
  int result; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  BuildingTypeClass *Type; // eax
  HouseClass *owner; // ecx
  int bunkersCount; // [esp+4h] [ebp-4h]

  result = (int)this->Type; /*0x448164*/
  v2 = result->BuildingTypeClass_field_ED8; /*0x44816a*/
  (*((unsigned char *)&(result))) = this->isPrimaryFactory; /*0x448170*/
  if ( v2 ) /*0x448178*/
  {
    if ( (unsigned char)result ) /*0x448180*/
    {
      this->isPrimaryFactory = 0; /*0x448182*/
  LABEL_17:
      result = (*((int (__thiscall **)(BuildingClass *, int))this->vfptr + 73))(this, 2); /*0x448246*/
      (*((unsigned char *)&(result))) = this->isPrimaryFactory; /*0x448252*/
      return result; /*0x448252*/
    }
    v4 = 0; /*0x448195*/
    bunkersCount = this->owner->bunkersCount; /*0x44819c*/
    if ( bunkersCount <= 0 ) /*0x4481a0*/
    {
  LABEL_13:
      owner = this->owner; /*0x448205*/
      this->isPrimaryFactory = 1; /*0x44820b*/
      if ( (uint8_t)House::IsHumanPlayer((House *)owner) ) /*0x448212*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.ChargerBarrels[9], -1); /*0x448226*/
      if ( this->Type->Factory[0] == 7 ) /*0x448238*/
        House::ChooseHouseEnemy((House *)this->owner, (int)this); /*0x448241*/
      goto LABEL_17; /*0x448241*/
    }
    while ( 1 ) /*0x4481ac*/
    {
      v5 = *(unsigned int *)(this->owner->absorbersCount + 4 * v4); /*0x4481ac*/
      if ( *(unsigned char *)(v5 + 129) ) /*0x4481af*/
        goto LABEL_12; /*0x4481af*/
      v6 = *(unsigned int *)(v5 + 1312); /*0x4481b9*/
      Type = this->Type; /*0x4481bf*/
      if ( *(unsigned int *)(v6 + 3768) != Type->Factory[0] ) /*0x4481d1*/
        goto LABEL_12; /*0x4481d1*/
      if ( Type->vtable2 ) /*0x4481d3*/
        break; /*0x4481d3*/
      if ( !*(unsigned char *)(v6 + 3278) ) /*0x4481ea*/
        goto LABEL_11; /*0x4481f2*/
  LABEL_12:
      if ( ++v4 >= bunkersCount ) /*0x448202*/
        goto LABEL_13; /*0x448202*/
    }
    if ( !*(unsigned char *)(v6 + 3278) ) /*0x4481dd*/
      goto LABEL_12; /*0x4481e4*/
  LABEL_11:
    *(unsigned char *)(v5 + 979) = 0; /*0x4481f4*/
    goto LABEL_12; /*0x4481f4*/
  }
  return result; /*0x448258*/
}
  return result; /*0x448258*/
}
// 0x44D6A0
namespace ra2::game {
int TechnoClass::StartOrResumeProduction()
{
  int result; // eax
  char v3; // [esp+8h] [ebp+4h]

  if ( !v3 || dword_A8E7AC || byte_A8ED6B ) /*0x44d6bb*/
  {
    BuildingClass::StartProduction((BuildingClass *)this, 1); /*0x44d6e0*/
    result = this->MissionDispatch(5, 0); /*0x44d6f1*/
    (*((unsigned char *)&(result))) = 0; /*0x44d6f7*/
  }
  else
  {
    BuildingClass::StartProduction((BuildingClass *)this, 0); /*0x44d6bf*/
    result = this->MissionDispatch(18, 0); /*0x44d6d0*/
    (*((unsigned char *)&(result))) = 0; /*0x44d6d6*/
  }
  return result; /*0x44d6d8*/
}
} // namespace ra2::game

// 0x44EB10
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
{
  if ( hpp->HasBeenCaptured /*0x44eb43*/
    || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 25
    || hpp->Type->Factory[0] != 7 )
  {
    return TechnoClass::GetCrew((TechnoClass *)hpp); /*0x44eb55*/
  }
  else
  {
    return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3952); /*0x44eb4c*/
  }
}
  else
  {
    return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.q0FC[324] + 3952); /*0x44eb4c*/
  }
}
// 0x453A70
namespace ra2::game {
int TechnoClass::GetTurretScreenPos()
{
  int *v1; // ebp
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int vfptr; // edx
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v12; // ecx
  int *v13; // eax
  unsigned int *v14; // ecx
  int *TurretOffset; // eax
  int v16; // edi
  int v17; // esi
  int v18; // ebx
  int v19; // ebp
  int v20; // ecx
  unsigned int *v21; // eax
  int *v23; // [esp+0h] [ebp-20h]
  int v24[2]; // [esp+Ch] [ebp-14h] BYREF
  int v25[3]; // [esp+14h] [ebp-Ch] BYREF
  unsigned int *v26; // [esp+24h] [ebp+4h]
  int v27; // [esp+28h] [ebp+8h]

  if ( this->Type->CanBeOccupied /*0x453a94*/
    && this->MissionStubReturnZero6() > 0 )
  {
    v3 = (int *)World::ToScreen(v24, (unsigned int *)(this->Type + 8 * this->FiringOccupantIndex_d + 5512), v23); /*0x453ab5*/
    v4 = *v3; /*0x453aba*/
    v5 = v3->vtable2; /*0x453abc*/
    vfptr = this->vfptr; /*0x453abf*/
  LABEL_4:
    v7 = (int *)vfptr->GetCoordsThunk2(this, v25); /*0x453ac5*/
    v8 = *v7; /*0x453ace*/
    v9 = v7[1]; /*0x453ad4*/
    v10 = v7[2]; /*0x453ad7*/
    *v26 = v4 + v8; /*0x453ae0*/
    v26->vtable2 = v5 + v9; /*0x453ae2*/
    v26->vtable3 = v10; /*0x453ae5*/
    return (int)v26; /*0x453af0*/
  }
  v12 = this->Type; /*0x453af3*/
  if ( v12->PrimaryFirePixelOffset != 0xFFFF || v12->u32_E48 != 0xFFFF ) /*0x453b14*/
  {
    v13 = (int *)World::ToScreen(v24, &v12->PrimaryFirePixelOffset, v23); /*0x453b22*/
    v4 = *v13; /*0x453b27*/
    v5 = v13->vtable2; /*0x453b29*/
    vfptr = this->vfptr; /*0x453b2c*/
    goto LABEL_4; /*0x453b32*/
  }
  if ( v12->BarrelAnimIsVoxel ) /*0x453b34*/
  {
    v14 = BuildingClass::CalcBarrelFlashPosition((BuildingClass *)this, v25, v27, 0); /*0x453b51*/
    *v26 = *v14; /*0x453b5c*/
    v26->vtable2 = v14[1]; /*0x453b61*/
    v26->vtable3 = v14[2]; /*0x453b69*/
    return (int)v26; /*0x453b53*/
  }
  else
  {
    v1 = v1; /*0x453b76*/
    TurretOffset = TechnoClass::GetTurretOffset(this, v25, v27); /*0x453b7f*/
    v16 = *TurretOffset; /*0x453b84*/
    v17 = this->Type; /*0x453b86*/
    v18 = TurretOffset->vtable2; /*0x453b8c*/
    v19 = TurretOffset->vtable3; /*0x453b8f*/
    if ( v17->TurretAnimIsVoxel ) /*0x453b92*/
    {
      v20 = v17->VoicePrimaryWeaponAttack; /*0x453ba2*/
      v24[1] = v17->u32_11E4; /*0x453ba8*/
      v24[0] = v20; /*0x453bb4*/
      v21 = (unsigned int *)World::ToScreen(v25, v24, v1); /*0x453bc0*/
      v16 += *v21; /*0x453bca*/
      v18 += v21->vtable2; /*0x453bcc*/
    }
    *v26 = v16; /*0x453bd4*/
    v26->vtable2 = v18; /*0x453bd6*/
    v26->vtable3 = v19; /*0x453bd9*/
    return (int)v26; /*0x453bce*/
  }
}
} // namespace ra2::game

// 0x4544A0
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
{
  char Translucency; // al
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  Cell *v8; // eax
  int v10; // [esp-4h] [ebp-18h]
  int v11; // [esp+18h] [ebp+4h]
  int v12; // [esp+1Ch] [ebp+8h] BYREF

  Translucency = hpp->Translucency; /*0x4544a7*/
  if ( !Translucency ) /*0x4544af*/
    return TechnoClass::UpdatePowerDrain((char *)hpp, v11, v12); /*0x4545c3*/
  if ( Translucency <= 10 ) /*0x4544b7*/
    return (Translucency > 5) + 1; /*0x4545ae*/
  if ( (unsigned char)v11 ) /*0x4544c3*/
  {
    v3 = v12; /*0x4544c5*/
    if ( v12 ) /*0x4544cb*/
    {
      v4 = hpp->location[0]; /*0x4544d7*/
      v5 = hpp->location[1]; /*0x4544d9*/
      (*((unsigned short *)&(v12))) = v4 / 256; /*0x4544ef*/
      v6 = v5; /*0x4544f6*/
      v7 = *(unsigned int *)(v3 + 48); /*0x4544f7*/
      (*(((unsigned short *)&(v12)) + 1)) = v6 / 256; /*0x454509*/
      v10 = v7; /*0x454512*/
      v8 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (int16_t *)&v12); /*0x45451d*/
      if ( (uint8_t)Cell::IsPassableOffset(v8, v10) ) /*0x454524*/
        return 3; /*0x454537*/
    }
  }
  else if ( hpp->isOwnedByCurrentPlayer /*0x45458f*/
         || (*((uint8_t (__thiscall **)(BuildingClass *))hpp->vfptr + 202))(hpp)
         || !g_hWnd
         || *(unsigned int *)&dword_A8B238
         && hpp->owner
         && dword_A83D4C
         && (uint8_t)HouseClass::IsAlliedWith((void *)dword_A83D4C, (void *)hpp->owner)
         && (uint8_t)HouseClass::IsAlliedWith((void *)hpp->owner, (void *)dword_A83D4C) )
  {
    return 3; /*0x454596*/
  }
  return 5; /*0x45452d*/
}
  else if ( hpp->isOwnedByCurrentPlayer /*0x45458f*/
         || (*((uint8_t (__thiscall **)(BuildingClass *))hpp->vfptr + 202))(hpp)
         || !g_hWnd
         || *(unsigned int *)&dword_A8B238
         && hpp->owner
         && dword_A83D4C
         && (uint8_t)HouseClass::IsAlliedWith((void *)dword_A83D4C, (void *)hpp->owner)
         && (uint8_t)HouseClass::IsAlliedWith((void *)hpp->owner, (void *)dword_A83D4C) )
  {
    return 3; /*0x454596*/
  }
  return 5; /*0x45452d*/
}
// 0x4556D0
namespace ra2::game {
void FootClass::ScanCircleForUnits()
{

  int v1; // ebp
  int v2; // eax
  int v3; // esi
  unsigned int *v4; // eax
  int v5; // edi
  int result; // eax
  int v7; // ebx
  FootClass *v8; // esi
  unsigned int *j; // esi
  int v10; // eax
  unsigned __int16 *v11; // [esp+Ch] [ebp-24h]
  unsigned __int16 *v12; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  __int16 v14[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  unsigned char v18[12]; // [esp+24h] [ebp-Ch] BYREF
  unsigned __int16 *v19; // [esp+34h] [ebp+4h]

  v1 = *(char *)(this->Type + 5895); /*0x4556e1*/
  v2 = *(unsigned int *)&this->owner->relatedTagsCount; /*0x4556ea*/
  v3 = v1 * v1; /*0x4556ed*/
  v16 = v1 * v1; /*0x4556fd*/
  v15 = v2; /*0x455701*/
  if ( v19 == (unsigned __int16 *)g_TerrainTypeTable ) /*0x455705*/
  {
    v4 = (unsigned int *)(*(int (**)(BuildingClass *, unsigned char *))&this->vfptr->ThreatAvoidanceCoefficient)(this, v18); /*0x45571c*/
    LOWORD(v11) = *v4 / 256; /*0x45572f*/
    HIWORD(v11) = v4[1] / 256; /*0x455743*/
    v19 = v11; /*0x45574c*/
  }
  v5 = -v1; /*0x455752*/
  result = -v1; /*0x455754*/
  v17 = -v1; /*0x455756*/
  for ( i = -v1; result < v1; i = result ) /*0x455760*/
  {
    if ( v5 < v1 ) /*0x455769*/
    {
      v7 = result * result; /*0x455775*/
      HIWORD(v12) = result + HIWORD(v19); /*0x45577b*/
      do /*0x4557f8*/
      {
        LOWORD(v12) = v5 + (unsigned short)v19; /*0x455787*/
        *(unsigned int *)v14 = v12; /*0x455799*/
        if ( v7 + v5 * v5 < v3 ) /*0x45579d*/
        {
          v8 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v14); /*0x4557ae*/
          FootClass::updateLocomotion(v8, v15); /*0x4557b7*/
          for ( j = (unsigned int *)v8->radioLinks[1]; j; j = (unsigned int *)j[12] ) /*0x4557c4*/
          {
            v10 = (*(int (**)(unsigned int *))(*j + 44))(j); /*0x4557ca*/
            if ( v10 == 1 || v10 == 15 || v10 == 2 ) /*0x4557da*/
              (*(void (**)(unsigned int *))(*j + 1056))(j); /*0x4557e0*/
          }
          result = i; /*0x4557ed*/
          v3 = v16; /*0x4557f1*/
        }
        ++v5; /*0x4557f5*/
      }
      while ( v5 < v1 ); /*0x4557f8*/
      v5 = v17; /*0x4557fa*/
    }
    ++result; /*0x4557fe*/
  }
  return result; /*0x45580c*/

}
} // namespace ra2::game

// 0x455820
namespace ra2::game {
void FootClass::ScanCircleForUnits2()
{

  int result; // eax
  int v3; // ebp
  unsigned int *v4; // eax
  int v5; // edi
  int v6; // ebx
  FootClass *v7; // esi
  unsigned int *j; // esi
  int v9; // eax
  unsigned __int16 *v10; // [esp+Ch] [ebp-24h]
  unsigned __int16 *v11; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  __int16 v13[2]; // [esp+18h] [ebp-18h] BYREF
  int v14; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h]
  unsigned char v16[12]; // [esp+24h] [ebp-Ch] BYREF
  unsigned __int16 *v17; // [esp+34h] [ebp+4h]

  result = (*(int (**)(BuildingClass *))&this->vfptr->q350)(this); /*0x45582a*/
  if ( (unsigned char)result ) /*0x455832*/
  {
    v3 = *(unsigned int *)(this->Type + 1520); /*0x455844*/
    v14 = *(unsigned int *)&this->owner->relatedTagsCount; /*0x455862*/
    if ( v17 == (unsigned __int16 *)g_TerrainTypeTable ) /*0x455866*/
    {
      v4 = (unsigned int *)(*(int (**)(BuildingClass *, unsigned char *))&this->vfptr->ThreatAvoidanceCoefficient)(this, v16); /*0x45587f*/
      LOWORD(v10) = *v4 / 256; /*0x455892*/
      HIWORD(v10) = v4[1] / 256; /*0x4558a6*/
      v17 = v10; /*0x4558af*/
    }
    v5 = -v3; /*0x4558b5*/
    result = -v3; /*0x4558b7*/
    v15 = -v3; /*0x4558b9*/
    for ( i = -v3; result < v3; i = result ) /*0x4558c3*/
    {
      if ( v5 < v3 ) /*0x4558cc*/
      {
        v6 = result * result; /*0x4558d8*/
        HIWORD(v11) = result + HIWORD(v17); /*0x4558de*/
        do /*0x45595b*/
        {
          LOWORD(v11) = v5 + (unsigned short)v17; /*0x4558ea*/
          *(unsigned int *)v13 = v11; /*0x4558f8*/
          if ( v6 + v5 * v5 < v3 * v3 ) /*0x455904*/
          {
            v7 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x455919*/
            FootClass::checkTerrainSpeed(v7, v14); /*0x45591e*/
            for ( j = (unsigned int *)v7->radioLinks[1]; j; j = (unsigned int *)j[12] ) /*0x45592b*/
            {
              v9 = (*(int (**)(unsigned int *))(*j + 44))(j); /*0x455931*/
              if ( v9 == 1 || v9 == 15 || v9 == 2 ) /*0x455941*/
                (*(void (**)(unsigned int *))(*j + 1056))(j); /*0x455947*/
            }
            result = i; /*0x455954*/
          }
          ++v5; /*0x455958*/
        }
        while ( v5 < v3 ); /*0x45595b*/
        v5 = v15; /*0x45595d*/
      }
      ++result; /*0x455961*/
    }
  }
  return result; /*0x45596f*/

}
} // namespace ra2::game

// 0x456F80
namespace ra2::game {
void TechnoClass::ProcessMissionDeploy()
{
  int result; // eax
  int v2; // [esp+4h] [ebp+4h]

  result = v2; /*0x456f8b*/
  if ( (this->flashing[0] & 2) == 2 ) /*0x456f8f*/
  {
    if ( v2 <= 1500 ) /*0x456f96*/
      return v2 + 500; /*0x456fa0*/
    else
      return v2 - 500; /*0x456f98*/
  }
  return result; /*0x456f9d*/
}
} // namespace ra2::game

// 0x457770
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
{
  int result; // eax
  int *v3; // eax
  BuildingTypeClass *Type; // ecx
  int FoundationWidth; // eax
  int *v6; // ecx
  int v7; // ebx
  int v8; // edi
  int16_t v9; // si
  int16_t v10; // di
  int16_t v11; // si
  Object *v12; // eax
  BuildingClass *ClosestObjectCell; // eax
  WTFMode *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  int16_t v19[2]; // [esp+20h] [ebp-20h] BYREF
  int16_t v20[2]; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-18h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  unsigned int v24[2]; // [esp+38h] [ebp-8h] BYREF

  if ( TechnoClass::ShouldBeCloaked((TechnoClass *)hpp) ) /*0x457779*/
  {
    v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))hpp->vfptr + 110))(hpp, &v22); /*0x457790*/
    Type = hpp->Type; /*0x457798*/
    v23 = *v3; /*0x45779e*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x4577a2*/
    v6 = (int *)hpp->Type; /*0x4577a7*/
    v7 = FoundationWidth; /*0x4577ad*/
    v22 = FoundationWidth; /*0x4577b1*/
    result = BuildingTypeClass::GetFoundationHeight(v6, 0); /*0x4577b5*/
    v8 = -1; /*0x4577ba*/
    v21 = result; /*0x4577c0*/
    v18 = -1; /*0x4577c4*/
    if ( v7 < -1 ) /*0x4577c8*/
    {
  LABEL_13:
      (*((unsigned char *)&(result))) = 1; /*0x4578a3*/
      return result; /*0x4578ac*/
    }
    while ( 1 ) /*0x4577ce*/
    {
      v9 = -1; /*0x4577ce*/
      v17 = -1; /*0x4577d4*/
      if ( result >= -1 ) /*0x4577d8*/
        break; /*0x4577d8*/
  LABEL_12:
      v18 = ++v8; /*0x457899*/
      if ( v8 > v7 ) /*0x45789d*/
        goto LABEL_13; /*0x45789d*/
    }
    v10 = v23 + v8; /*0x4577e2*/
    while ( 1 ) /*0x4577eb*/
    {
      v24[0] = 0; /*0x4577eb*/
      v24[1] = 0; /*0x4577ef*/
      v11 = (*(((unsigned short *)&(v23)) + 1)) + v9; /*0x4577f4*/
      (*((unsigned short *)&(v15))) = v10; /*0x4577fe*/
      (*(((unsigned short *)&(v15)) + 1)) = v11; /*0x457803*/
      *(unsigned int *)v19 = v15; /*0x457813*/
      v12 = (Object *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v19); /*0x457817*/
      ClosestObjectCell = (BuildingClass *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45781e*/
      if ( ClosestObjectCell == hpp ) /*0x457825*/
      {
        (*((unsigned short *)&(v16))) = v10; /*0x457827*/
        (*(((unsigned short *)&(v16)) + 1)) = v11; /*0x45782c*/
        *(unsigned int *)v20 = v16; /*0x457841*/
        v14 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v20); /*0x457845*/
        ClosestObjectCell = (BuildingClass *)WTFMode::FindObjectByType(v14, 0); /*0x45784c*/
      }
      if ( ClosestObjectCell ) /*0x457853*/
      {
        if ( ClosestObjectCell->owner != hpp->owner ) /*0x457863*/
        {
          result = (*((int (__thiscall **)(BuildingClass *))ClosestObjectCell->vfptr + 33))(ClosestObjectCell); /*0x457869*/
          if ( result->Sensors ) /*0x45786f*/
            break; /*0x45786f*/
        }
      }
      result = v21; /*0x45787d*/
      v9 = ++v17; /*0x457881*/
      if ( v17 > v21 ) /*0x457888*/
      {
        v7 = v22; /*0x45788e*/
        v8 = v18; /*0x457892*/
        goto LABEL_12; /*0x457892*/
      }
    }
  }
  (*((unsigned char *)&(result))) = 0; /*0x4578b0*/
  return result; /*0x4578a3*/
}
  result = ((result) & 0xFFFFFF00u) | ((unsigned int)(0) & 0xFFu); /*0x4578b0*/
  return result; /*0x4578a3*/
}
// 0x457C90
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  char v6; // [esp+18h] [ebp+Ch]

  if ( hpp->C4Applied ) /*0x457c90*/
  {
    hpp->C4Applied = 0; /*0x457ca0*/
    v1 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x457ca6*/
    hpp->C4AppliedBy = 0; /*0x457cb1*/
    hpp->C4Timer[0] = v1; /*0x457cb7*/
    hpp->C4Timer[1] = v3; /*0x457cbd*/
    hpp->C4Timer[2] = 0; /*0x457cc0*/
  }
  return TechnoClass::IronCurtain((TechnoClass *)hpp, v4, v5, v6); /*0x457cd8*/
}
  return TechnoClass::IronCurtain((TechnoClass *)hpp, v4, v5, v6); /*0x457cd8*/
}
// 0x458A80
namespace ra2::game {
int TechnoClass::EvacuateFootprintCells()
{

  TechnoClass *v1; // esi
  int vfptr; // eax
  unsigned short *v3; // ebp
  unsigned short *v4; // eax
  __int16 v5; // dx
  unsigned int *v6; // edi
  unsigned char *v7; // esi
  int v8; // eax
  int i; // edi
  unsigned int *v10; // esi
  int j; // edi
  unsigned int *v12; // esi
  int result; // eax
  int k; // edi
  int *v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // eax
  int v19; // ebx
  int v20; // eax
  int *v21; // [esp+0h] [ebp-44h]
  int v22; // [esp+4h] [ebp-40h]
  __int16 v23; // [esp+10h] [ebp-34h]
  __int16 v24; // [esp+12h] [ebp-32h]
  int v25; // [esp+14h] [ebp-30h] BYREF
  TechnoClass *v26; // [esp+18h] [ebp-2Ch] BYREF
  __int16 v27[2]; // [esp+1Ch] [ebp-28h] BYREF
  int v28; // [esp+20h] [ebp-24h] BYREF
  __int16 v29[2]; // [esp+24h] [ebp-20h] BYREF
  int v30; // [esp+28h] [ebp-1Ch] BYREF
  void **v31; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v33; // [esp+34h] [ebp-10h]
  unsigned __int8 *v34; // [esp+38h] [ebp-Ch]
  int v35; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]
  unsigned int *v37; // [esp+48h] [ebp+4h]
  int v38; // [esp+4Ch] [ebp+8h]
  int v39; // [esp+50h] [ebp+Ch] BYREF
  int v40; // [esp+54h] [ebp+10h] BYREF

  v1 = this; /*0x458a86*/
  vfptr = this->vfptr; /*0x458a8b*/
  v26 = this; /*0x458a8e*/
  v3 = (unsigned short *)(*(int (**)(unsigned int))(vfptr + 264))(0); /*0x458a9c*/
  v23 = *v37 / 256; /*0x458aae*/
  v24 = v37[1] / 256; /*0x458ac6*/
  EventClass::resetEvent((EventClass *)&v31, 0, 0); /*0x458acb*/
  v31 = &vt_DynamicVectorClass_TechnoClass; /*0x458ad0*/
  v36 = 10; /*0x458ad8*/
  v35 = 0; /*0x458ae0*/
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x458af8*/
  {
    v4 = v3; /*0x458afe*/
    v3 += 2; /*0x458b00*/
    v5 = v24 + v4[1]; /*0x458b0f*/
    LOWORD(v25) = v23 + *v4; /*0x458b14*/
    HIWORD(v25) = v5; /*0x458b1d*/
    *(unsigned int *)v27 = v25; /*0x458b2c*/
    v6 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v27); /*0x458b35*/
    if ( v6->u32_44 != -1 ) /*0x458b3d*/
    {
      v6->u32_44 = -1; /*0x458b3f*/
      v6->u32_11E = 0; /*0x458b42*/
      v6->q040 = 0; /*0x458b48*/
    }
    v7 = v6->u32_39; /*0x458b4b*/
    if ( v7 ) /*0x458b53*/
    {
      while ( (v7[20] & 1) != 0 && (*(int (**)(unsigned char *))(*(unsigned int *)v7 + 44))(v7) != 6 ) /*0x458b65*/
      {
        if ( v35 < v33 /*0x458b91*/
          || (BYTE1(v34) || !v33)
          && v36 > 0
          && ((unsigned __int8 (*)(void ***, int, unsigned int))v31[2])(&v31, v36 + v33, 0) )
        {
          v8 = v35++; /*0x458b9c*/
          *((unsigned int *)Block + v8) = v7; /*0x458ba7*/
        }
        (*(void (**)(unsigned char *))(*(unsigned int *)v7 + 212))(v7); /*0x458bae*/
        v7 = v6->u32_39; /*0x458bb4*/
        if ( !v7 ) /*0x458bbc*/
          goto LABEL_2; /*0x458bbc*/
      }
      for ( i = v35 - 1; i >= 0; --i ) /*0x458bcc*/
      {
        v10 = (unsigned int *)*((unsigned int *)Block + i); /*0x458bd7*/
        v28 = v10[39]; /*0x458be6*/
        *(unsigned int *)v29 = v10[40]; /*0x458bed*/
        v30 = v10[41]; /*0x458bf9*/
        if ( !(*(unsigned __int8 (**)(unsigned int *, int *, unsigned int))(*v10 + 216))(v10, &v28, 0) ) /*0x458c01*/
          (*(void (**)(unsigned int *))(*v10 + 248))(v10); /*0x458c0f*/
      }
      goto LABEL_28; /*0x458c16*/
    }
LABEL_2:
    v1 = v26; /*0x458ae6*/
  }
  if ( !(*(unsigned __int8 (**)(TechnoClass *, unsigned int *, int))(v1->vfptr + 216))(v1, v37, v38) ) /*0x458c28*/
  {
    (*(void (**)(TechnoClass *))(v1->vfptr + 248))(v1); /*0x458c3a*/
    for ( j = v35 - 1; j >= 0; --j ) /*0x458c49*/
    {
      v12 = (unsigned int *)*((unsigned int *)Block + j); /*0x458c50*/
      v28 = v12[39]; /*0x458c5f*/
      *(unsigned int *)v29 = v12[40]; /*0x458c68*/
      v30 = v12[41]; /*0x458c6f*/
      if ( !(*(unsigned __int8 (**)(unsigned int *, int *, unsigned int))(*v12 + 216))(v12, &v28, 0) ) /*0x458c7a*/
        (*(void (**)(unsigned int *))(*v12 + 248))(v12); /*0x458c88*/
    }
LABEL_28:
    result = (int)Block; /*0x458c91*/
    v35 = 0; /*0x458c95*/
    if ( Block && BYTE1(v34) ) /*0x458ca1*/
      __3_YAXPAX_Z(Block); /*0x458ca4*/
    LOBYTE(result) = 0; /*0x458caf*/
    return result; /*0x458cb5*/
  }
  for ( k = v35 - 1; k >= 0; --k ) /*0x458cc1*/
  {
    v15 = (int *)*((unsigned int *)Block + k); /*0x458cd9*/
    v40 = *(unsigned int *)(*(int (**)(int *, int *, int *, int))(*v15 + 440))(v15, &v25, v21, v22); /*0x458cfb*/
    v16 = *v15; /*0x458cff*/
    v39 = 0; /*0x458d07*/
    v17 = (*(int (**)(int *))(v16 + 132))(v15); /*0x458d11*/
    *(unsigned int *)v29 = *LayerClass::Pathfinding_Find( /*0x458d38*/
                        (Type *)&dword_87F7E8,
                        (int)&v40,
                        &v26,
                        (__int16 *)&v40,
                        *(unsigned int *)(v17 + 1660),
                        -1,
                        0,
                        0,
                        1,
                        1,
                        0,
                        0,
                        0,
                        1,
                        (__int16 *)&v39,
                        0,
                        0);
    v18 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v29); /*0x458d42*/
    v22 = 0; /*0x458d4d*/
    v19 = *v18; /*0x458d4e*/
    v21 = &v30; /*0x458d50*/
    v28 = *v15; /*0x458d53*/
    v20 = (*(int (**)(int *))(v19 + 72))(v18); /*0x458d57*/
    if ( !(*(unsigned __int8 (**)(int *, int))(*(unsigned int *)v27 + 216))(v15, v20) ) /*0x458d61*/
      (*(void (**)(int *))(*v15 + 248))(v15); /*0x458d6f*/
  }
  result = (int)Block; /*0x458d7e*/
  v31 = &vt_VectorClass_TechnoClass; /*0x458d82*/
  if ( Block && BYTE1(v34) ) /*0x458d92*/
    __3_YAXPAX_Z(Block); /*0x458d95*/
  LOBYTE(result) = 1; /*0x458da0*/
  return result; /*0x458cac*/

}
} // namespace ra2::game

// 0x46B270
namespace ra2::game {
int TechnoClass::updateHealthBar() {
  return this->deployAnim; /*0x46b276*/
}
} // namespace ra2::game

// 0x473500
namespace ra2::game {
int TechnoClass::IndexOf()
{
  unsigned int *vtable1; // ecx
  int result; // eax
  int v4; // edx

  vtable1 = this->vfptr1; /*0x473500*/
  result = 0; /*0x473503*/
  if ( !vtable1 ) /*0x473508*/
    return 0; /*0x47352c*/
  while ( 1 ) /*0x47350e*/
  {
    ++result; /*0x47350e*/
    if ( vtable1 == (unsigned int *)a2 ) /*0x473511*/
      break; /*0x473511*/
    v4 = vtable1->ptr_30; /*0x473513*/
    if ( v4 ) /*0x473518*/
    {
      if ( (v4->abstractFlags & 4) == 0 ) /*0x47351e*/
        return 0; /*0x47351e*/
      vtable1 = vtable1->nextObject; /*0x473520*/
    }
    if ( !vtable1 ) /*0x473524*/
      return 0; /*0x473524*/
  }
  return result; /*0x47352e*/
}
} // namespace ra2::game

// 0x487720
namespace ra2::game {
int TechnoClass::ApplySplashDamageToNeighbors()
{

  TechnoClass *v1; // edi
  char result; // al
  int v3; // ecx
  __int16 v4; // ax
  TechnoClass *v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // esi
  int v9; // edx
  int v10; // [esp+58h] [ebp-2Ch]
  int v11; // [esp+58h] [ebp-2Ch]
  int v12; // [esp+5Ch] [ebp-28h]
  unsigned __int16 *v13; // [esp+60h] [ebp-24h]
  int v15; // [esp+68h] [ebp-1Ch]
  __int16 v16[2]; // [esp+6Ch] [ebp-18h] BYREF
  int v17; // [esp+70h] [ebp-14h] BYREF
  TechnoClass *v18; // [esp+74h] [ebp-10h] BYREF
  int v19; // [esp+78h] [ebp-Ch] BYREF
  int v20; // [esp+7Ch] [ebp-8h]
  int v21; // [esp+80h] [ebp-4h]

  v1 = this; /*0x487727*/
  result = this->secondaryTurretIndex; /*0x48772d*/
  if ( result ) /*0x487735*/
  {
    v3 = SHIWORD(this->occupant) << 8; /*0x48774d*/
    v19 = (SLOWORD(v1->occupant) << 8) + 128; /*0x487756*/
    v20 = v3 + 128; /*0x48775e*/
    v21 = 0; /*0x487768*/
    v12 = -2; /*0x487777*/
    v21 = dword_89E7B4 + Cell::GetGroundHeight(&v19); /*0x487781*/
    do /*0x487934*/
    {
      v4 = -2; /*0x487785*/
      v15 = -2; /*0x48778a*/
      do /*0x487922*/
      {
        HIWORD(v13) = v4 + HIWORD(v1->occupant); /*0x48779e*/
        LOWORD(v13) = v12 + LOWORD(v1->occupant); /*0x4877a3*/
        *(unsigned int *)v16 = v13; /*0x4877b0*/
        v5 = (TechnoClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v16); /*0x4877ba*/
        v18 = v5; /*0x4877c1*/
        if ( v5 != v1 ) /*0x4877c5*/
        {
          v6 = v5->radioLinks[2]; /*0x4877cb*/
          if ( v6 ) /*0x4877d3*/
          {
            do /*0x487864*/
            {
              v10 = v6->ptr_30; /*0x4877de*/
              if ( v6 && (*(unsigned char *)(v6 + 20) & 4) != 0 ) /*0x4877f0*/
              {
                if ( !v6->u32_674 ) /*0x4877f2*/
                  sub_7DC720(-2147467261); /*0x48780d*/
                if ( (*(unsigned __int8 (**)(unsigned int, int, int, int))(*v6->u32_674 + 160))( /*0x487828*/
                       v6->u32_674,
                       v19,
                       v20,
                       v21) )
                {
                  v7 = *(unsigned int *)v6; /*0x487835*/
                  v17 = v6->u32_6C; /*0x487837*/
                  (*(void (**)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v7 + 364))( /*0x487858*/
                    v6,
                    &v17,
                    0,
                    *&dword_8871E0->u32_FA8,
                    0,
                    1,
                    1,
                    0);
                }
              }
              v6 = v10; /*0x48785e*/
            }
            while ( v10 ); /*0x487864*/
            v5 = v18; /*0x48786a*/
            v1 = this; /*0x48786e*/
          }
          v8 = v5->radioLinks[1]; /*0x487872*/
          if ( v8 ) /*0x48787a*/
          {
            do /*0x48790c*/
            {
              v11 = v8->ptr_30; /*0x487885*/
              if ( v8 && (*(unsigned char *)(v8 + 20) & 4) != 0 ) /*0x487898*/
              {
                if ( !v8->u32_674 ) /*0x48789a*/
                  sub_7DC720(-2147467261); /*0x4878b5*/
                if ( (*(unsigned __int8 (**)(unsigned int, int, int, int))(*v8->u32_674 + 160))( /*0x4878d0*/
                       v8->u32_674,
                       v19,
                       v20,
                       v21) )
                {
                  v9 = *(unsigned int *)v8; /*0x4878dd*/
                  v18 = v8->u32_6C; /*0x4878df*/
                  (*(void (**)(int, TechnoClass **, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v9 + 364))( /*0x487900*/
                    v8,
                    &v18,
                    0,
                    *&dword_8871E0->u32_FA8,
                    0,
                    1,
                    1,
                    0);
                }
              }
              v8 = v11; /*0x487906*/
            }
            while ( v11 ); /*0x48790c*/
            v1 = this; /*0x487912*/
          }
        }
        v4 = ++v15; /*0x48791a*/
      }
      while ( v15 < 3 ); /*0x487922*/
      result = ++v12; /*0x48792c*/
    }
    while ( v12 < 3 ); /*0x487934*/
  }
  return result; /*0x48793a*/

}
} // namespace ra2::game

// 0x48AB90
namespace ra2::game {
int TechnoClass::ComputeScanRange() const
{
  double v2; // st7
  int64_t result; // rax
  int v4; // kr00_4
  double v5; // [esp+0h] [ebp-Ch]
  TechnoClass *v6; // [esp+8h] [ebp-4h]

  v6 = this; /*0x48ab91*/
  __asm /*0x48ab98*/
  {
    fild [esp+0Ch+var_4]
    fmul [esp+0Ch+arg_0]
    fmul ds:dbl_7E5190
    fstp [esp+0Ch+var_C]; double
  }
  Math::Sqrt(v5); /*0x48aba9*/
  v4 = Math::RoundToInt(v2); /*0x48abae*/
  (((unsigned short *)&(result))[2]) = (*(((unsigned short *)&(v4)) + 1)); /*0x48abae*/
  (*((unsigned short *)&(result))) = v4; /*0x48abae*/
  return result; /*0x48abb6*/
}
} // namespace ra2::game

// 0x4B5210
namespace ra2::game {
int TechnoClass::CopyStateFrom()
{
  if ( this == (TechnoClass *)a2 ) /*0x4b521a*/
    return (int)this; /*0x4b521c*/
  LinkedList::MoveNode((LinkedList *)this, (void *)a2); /*0x4b5228*/
  this->vfptr3 = *(void **)(a2 + 12); /*0x4b5236*/
  this->uniqueId = *(unsigned int *)(a2 + 16); /*0x4b523c*/
  this->abstractFlags = *(unsigned int *)(a2 + 20); /*0x4b5242*/
  this->nextArrayIndex = *(unsigned int *)(a2 + 24); /*0x4b5248*/
  (this->referenceCount) = *(unsigned char *)(a2 + 28); /*0x4b524e*/
  (this->u32_1D) = *(unsigned char *)(a2 + 29); /*0x4b5254*/
  (this->q01E) = *(unsigned char *)(a2 + 30); /*0x4b525a*/
  this->NeedsSaveOrLink = *(void **)(a2 + 32); /*0x4b5260*/
  this->occupant = *(unsigned int *)(a2 + 36); /*0x4b5266*/
  this->owningHouseIndex = *(unsigned int *)(a2 + 40); /*0x4b526c*/
  this->fallRate = *(unsigned int *)(a2 + 44); /*0x4b5272*/
  this->nextObject = *(ObjectClass **)(a2 + 48); /*0x4b5278*/
  this->attachedTag = *(TagClass **)(a2 + 52); /*0x4b527e*/
  this->attachedBomb = *(BombClass **)(a2 + 56); /*0x4b5284*/
  this->ambientSoundController[0] = *(unsigned int *)(a2 + 60); /*0x4b528a*/
  this->ambientSoundController[1] = *(unsigned int *)(a2 + 64); /*0x4b5290*/
  this->ambientSoundController[2] = *(unsigned int *)(a2 + 68); /*0x4b529c*/
  sub_4B5780((int)&this->suspendedMission, a2 + 176); /*0x4b52a2*/
  this->lastCommands[0] = *(unsigned int *)(a2 + 212); /*0x4b52aa*/
  this->lastCommands[1] = *(unsigned int *)(a2 + 216); /*0x4b52b0*/
  this->lastCommands[2] = *(unsigned int *)(a2 + 220); /*0x4b52b6*/
  this->radioLinks[0] = *(unsigned int *)(a2 + 224); /*0x4b52c3*/
  sub_4B5830this->flashing, (unsigned int *)(a2 + 228)); /*0x4b52c6*/
  this->flashing[1] = *(unsigned int *)(a2 + 244); /*0x4b52ce*/
  this->animation[0] = *(unsigned int *)(a2 + 248); /*0x4b52d4*/
  this->animation[1] = *(unsigned int *)(a2 + 252); /*0x4b52da*/
  this->animation[2] = *(unsigned int *)(a2 + 256); /*0x4b52e0*/
  (this->currentTurretNumber) = *(unsigned char *)(a2 + 260); /*0x4b52e9*/
  BlitterList::CopyEntry((int)&this->animation[4], a2 + 264); /*0x4b52f0*/
  BlitterList::CopyEntry((int)this->idleActionTimer, a2 + 360); /*0x4b5302*/
  sub_4B56E0((int)&this->airstrikeTintStage_2, a2 + 456); /*0x4b5314*/
  this->owner = *(HouseClass **)(a2 + 540); /*0x4b531f*/
  this->cloakState = *(unsigned int *)(a2 + 544); /*0x4b532b*/
  (this->spawnStatus) = *(unsigned char *)(a2 + 72); /*0x4b5334*/
  this->ambientSoundController[4] = *(unsigned int *)(a2 + 76); /*0x4b5343*/
  sub_4B5780((int)this->customSound_controller, a2 + 80); /*0x4b5346*/
  *&this->isOnMap = *(unsigned int *)(a2 + 116); /*0x4b534f*/
  this->spawnStatus = *(unsigned int *)(a2 + 120); /*0x4b5355*/
  (this->visibilityFlags) = *(unsigned char *)(a2 + 124); /*0x4b535b*/
  (this->q07D) = *(unsigned char *)(a2 + 125); /*0x4b5361*/
  *&this->needsRedraw = *(unsigned int *)(a2 + 128); /*0x4b5367*/
  this->hasParachute = *(unsigned char *)(a2 + 132); /*0x4b536d*/
  this->parachute = *(AnimClass **)(a2 + 136); /*0x4b5373*/
  *&this->onBridge = *(unsigned int *)(a2 + 140); /*0x4b5379*/
  this->isAliveFlag = *(unsigned char *)(a2 + 144); /*0x4b537f*/
  this->lastLayer = *(unsigned int *)(a2 + 148); /*0x4b5385*/
  *&this->isInLogic = *(unsigned int *)(a2 + 152); /*0x4b538b*/
  (this->location) = *(unsigned char *)(a2 + 156); /*0x4b5391*/
  this->location[1] = *(unsigned int *)(a2 + 160); /*0x4b5397*/
  (this->queuedMission) = *(unsigned char *)(a2 + 164); /*0x4b539d*/
  (this->u8_B5) = *(unsigned char *)(a2 + 165); /*0x4b53a3*/
  this->lineTrailer = *(void **)(a2 + 168); /*0x4b53a9*/
  (this->currentMission) = *(unsigned char *)(a2 + 172); /*0x4b53af*/
  this->suspendedMission.Vt34Thunk(this); /*0x4b53b7*/
  this->customSound_controller->Vt34Thunk(/*0x4b53c2*/
    this->customSound_controller, this);
  return (int)this; /*0x4b521e*/
}
} // namespace ra2::game

// 0x4C1E10
namespace ra2::game {
int TechnoClass::ResetDamageAccumulator()
{
  this->vfptr = 0; /*0x4c1e1a*/
  this->nextArrayIndex = 0; /*0x4c1e1e*/
  this->owningHouseIndex = 0x10000; /*0x4c1e21*/
  this->vfptr1 = 0; /*0x4c1e28*/
  (this->fallRate) = 0; /*0x4c1e2b*/
  this->referenceCount = 0; /*0x4c1e2e*/
  this->NeedsSaveOrLink = 0; /*0x4c1e31*/
  this->vfptr2 = 0; /*0x4c1e34*/
  this->occupant = 0; /*0x4c1e3a*/
  this->vfptr3 = 0; /*0x4c1e3d*/
  this->uniqueId = 0; /*0x4c1e3f*/
  this->abstractFlags = 0; /*0x4c1e42*/
  return &this->vfptr; /*0x4c1e45*/
}
} // namespace ra2::game

// 0x4CBBA0
namespace ra2::game {
int FootClass::FindPathWithRetry()
{

  unsigned int *v8; // eax
  int v9; // edi
  unsigned __int16 *v11; // [esp+8h] [ebp-14h] BYREF
  unsigned __int16 *v12; // [esp+Ch] [ebp-10h]
  unsigned char v13[12]; // [esp+10h] [ebp-Ch] BYREF

  v8 = (unsigned int *)(*(int (**)(FootClass *, unsigned char *, unsigned int))&this->vfptr->u32_4C)(this, v13, 0); /*0x4cbbb2*/
  v9 = a3; /*0x4cbbb7*/
  LOWORD(v12) = *v8 / 256; /*0x4cbbc9*/
  HIWORD(v12) = v8[1] / 256; /*0x4cbbdd*/
  v11 = v12; /*0x4cbbe8*/
  if ( !a3 ) /*0x4cbbec*/
    return 0; /*0x4cbbef*/
  v11 = (unsigned __int16 *)*WalkPathClassPath(&a3, (int *)&v11, a6, this->pathDirections); /*0x4cbc20*/
  return FindPathWithRetry((int)&stru_87E8B8, (__int16 *)&v11, a2, (char *)this, v9, -1, -1, a7); /*0x4cbbee*/

}
} // namespace ra2::game

// 0x4CC770
namespace ra2::game {
int TechnoClass::UpdateThunk()
{
  char *v1; // eax

  if ( !this->vfptr ) /*0x4cc770*/
    return 0; /*0x4cc788*/
  v1 = (char *)this->vfptr - 1; /*0x4cc776*/
  (this->vtable2) = 0; /*0x4cc777*/
  this->vfptr = v1; /*0x4cc77d*/
  if ( ((uint8_t)v1 & 1) != 0 ) /*0x4cc77f*/
    (this->vtable2) = 1; /*0x4cc781*/
  return 1; /*0x4cc787*/
}
} // namespace ra2::game

// 0x4CD2A0
namespace ra2::game {
void FootClass::ProcessDeployMission()
{
  unsigned int *vtable3; // edi
  void *v3; // ecx
  int v4; // eax
  int *v6; // ecx
  int v7; // edi
  int *v8; // eax
  int v9; // edi
  CellClass *v10; // eax
  unsigned char *v11; // eax
  int *v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  void *v16; // ecx
  unsigned int *v17; // eax
  Team *v18; // eax
  unsigned int *v19; // edi
  int v20; // [esp+34h] [ebp-Ch] BYREF
  int v21; // [esp+38h] [ebp-8h]
  int v22; // [esp+3Ch] [ebp-4h]

  vtable3 = this->vfptr3; /*0x4cd2a7*/
  if ( vtable3 && vtable3->ReturnZeroPos(this->vfptr3) == 2 && !*(unsigned char *)(vtable3[433] + 3594) ) /*0x4cd2c0*/
  {
    v3 = this->vfptr3; /*0x4cd2ca*/
    (this->onBridge) = 1; /*0x4cd2cd*/
    (this->q051) = 0; /*0x4cd2d1*/
    (this->customSound_controller) = 0; /*0x4cd2d5*/
    v4 = v3->GetSpecialValue(); /*0x4cd2db*/
    this->attachedBomb = (BombClass *)(*(int (__thiscall **)(int))(*(unsigned int *)v4 + 188))(v4); /*0x4cd2eb*/
    return 0; /*0x4cd2ef*/
  }
  else
  {
    v6 = (int *)this->vfptr3; /*0x4cd2f6*/
    if ( v6->health > 0 && ((this->q051) || (this->customSound_controller)) ) /*0x4cd30b*/
    {
      v7 = v6->Stub11(); /*0x4cd320*/
      this->vtable4->UpdateReveal(0); /*0x4cd324*/
      RemoveTarget((int)this->vfptr3); /*0x4cd333*/
      if ( (this->q051) ) /*0x4cd338*/
        DropPod::ProcessLanding((DropPod *)this); /*0x4cd341*/
      if ( (this->customSound_controller) ) /*0x4cd346*/
        FootClass::UpdateDeployMovement(this); /*0x4cd34f*/
      if ( v7 != this->vtable4->Destru_vt30() ) /*0x4cd35e*/
      {
        if ( this->vtable4->Destru_vt30() != 2 /*0x4cd3b6*/
          || (this->customSound_controller)
          || (v8 = (int *)this->vfptr3,
              v20 = v8[39],
              v21 = v8[40],
              v22 = v8[41],
              v9 = *v8,
              v10 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v20),
              (*(uint8_t (__thiscall **)(void *, CellClass *))(v9 + 1360))(this->vfptr3, v10)) )
        {
          v15 = this->vtable4->Destru_vt30(); /*0x4cd40a*/
          v16 = this->vfptr3; /*0x4cd40d*/
          if ( v15 == 2 ) /*0x4cd413*/
          {
            v16->vt_slot_1152(0, 1); /*0x4cd41f*/
            this->vtable4->ThunkTo159x4(24); /*0x4cd42c*/
            this->vtable4->RevealAreaConditional(/*0x4cd43f*/
              this->vfptr3, 0, 0, 0, 0);
            this->vtable4->ScanForEnemies(/*0x4cd454*/
              this->vfptr3, 0, 0, 0, 0, 0);
            v17 = this->vfptr3; /*0x4cd45a*/
            v20 = v17->location; /*0x4cd46b*/
            v21 = v17[40]; /*0x4cd472*/
            v22 = v17[41]; /*0x4cd479*/
            MapClass::RevealArea2((MapClass *)&DataGlobal_87F7E8, &v20, v17[152] - 3, v17[152] + 3, 0); /*0x4cd495*/
          }
          else
          {
            v16->vt_slot_628(25); /*0x4cd4a0*/
            if ( (uint8_t)Team::AllMembersValid((Team *)this->vfptr3) ) /*0x4cd4a9*/
            {
              v18 = (Team *)this->vfptr3; /*0x4cd4b2*/
              if ( *(unsigned int *)&v18[6].__pad_0[28] ) /*0x4cd4b5*/
              {
                v19 = this->vfptr3; /*0x4cd4bf*/
                if ( v19->q5A4 != Team::GetMember(v18, 0) ) /*0x4cd4d0*/
                  v19->vt_slot_628(3); /*0x4cd4d8*/
              }
            }
          }
        }
        else
        {
          v11 = this->vfptr3; /*0x4cd3c0*/
          (this->customSound_controller) = 1; /*0x4cd3c3*/
          v11->onBridge = 0; /*0x4cd3c9*/
          this->vtable4->UpdateReveal(0); /*0x4cd3d5*/
          v12 = (int *)this->vfptr3; /*0x4cd3db*/
          v13 = *v12; /*0x4cd3de*/
          v14 = v12->GetZAboveGround(); /*0x4cd3e0*/
          v12->SetZ(this->vfptr3, v14 + 10); /*0x4cd3ed*/
          this->vtable4->UpdateReveal(1); /*0x4cd3fa*/
        }
      }
      Targeting::Readd((unsigned int *)this->vfptr3); /*0x4cd4e7*/
      this->vtable4->UpdateReveal(1); /*0x4cd4f3*/
    }
    return 0; /*0x4cd4fa*/
  }
}
} // namespace ra2::game

// 0x4CE680
namespace ra2::game {
void FootClass::UpdateDeployMovement()
{
  double v1; // st7
  int v3; // edi
  char *vtable3; // eax
  unsigned int *v5; // eax
  int (__stdcall ***v6)(void *, void *, int *); // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  unsigned short *WeaponType; // eax
  int *v13; // eax
  int v14; // ecx
  char *v15; // ecx
  int v17; // [esp+28h] [ebp-1Ch] BYREF
  int referenceCount; // [esp+2Ch] [ebp-18h] BYREF
  int v19; // [esp+30h] [ebp-14h]
  int v20; // [esp+34h] [ebp-10h] BYREF
  unsigned int v21[3]; // [esp+38h] [ebp-Ch] BYREF

  v3 = this->vtable4->GetZAboveGround(); /*0x4ce694*/
  vtable3 = (char *)this->vfptr3; /*0x4ce696*/
  if ( !vtable3[140] ) /*0x4ce699*/
  {
    v5 = vtable3 + 156; /*0x4ce6a3*/
    v21[0] = *v5; /*0x4ce6aa*/
    v21[1] = v5[1]; /*0x4ce6b6*/
    v21[2] = v5[2]; /*0x4ce6c2*/
    if ( (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v21)->flags[0] & 0x100) != 0 && v3 >= dword_8B3CAC ) /*0x4ce6dd*/
      v3 -= dword_8B3CAC; /*0x4ce6df*/
  }
  v6 = (int (__stdcall ***)(void *, void *, int *))this->vfptr3; /*0x4ce6e1*/
  v7 = 0; /*0x4ce6e4*/
  v17 = 0; /*0x4ce6e8*/
  if ( v6 ) /*0x4ce6ec*/
  {
    v8 = (**v6)(v6, &unk_822410, &referenceCount); /*0x4ce6fd*/
    if ( v8 >= 0 ) /*0x4ce701*/
      v7 = referenceCount; /*0x4ce70e*/
    Release3COM((ObjectClass *)&v17); /*0x4ce707*/
    v17 = v7; /*0x4ce71d*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4ce729*/
      sub_7DC720(v8); /*0x4ce72c*/
  }
  v9 = 0; /*0x4ce735*/
  if ( v7 ) /*0x4ce739*/
  {
    v9 = (*(int (__stdcall **)(int))(*(unsigned int *)v7 + 12))(v7); /*0x4ce73f*/
    v7 = v17; /*0x4ce742*/
  }
  v10 = v3 - v9; /*0x4ce749*/
  v11 = (int)this->attachedBomb - v9; /*0x4ce74b*/
  (this->customSound_controller) = 0; /*0x4ce756*/
  (this->q051) = 0; /*0x4ce763*/
  if ( v10 <= v11 - v11 / 3 ) /*0x4ce769*/
  {
    if ( v10 <= v11 / 2 ) /*0x4ce79b*/
      goto LABEL_18; /*0x4ce79b*/
    v13 = (int *)this->vtable4->GetCoords_0(v21); /*0x4ce7ab*/
    v14 = *v13; /*0x4ce7b1*/
    referenceCount = this->referenceCount; /*0x4ce7b3*/
    v19 = v14; /*0x4ce7b7*/
    Math::CalcAngle((double)v13[1] - (double)(int)this->NeedsSaveOrLink, (double)referenceCount - (double)v14); /*0x4ce7d6*/
    (*((unsigned short *)&(v19))) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x4ce7f3*/
    v15 = (char *)this->vfptr3; /*0x4ce7fd*/
    v20 = v19; /*0x4ce800*/
    FacingClass::Update(v15 + 904, &v20); /*0x4ce80a*/
    this->ambientSoundController[1] = 0; /*0x4ce80f*/
    this->ambientSoundController[2] = 1072693248; /*0x4ce816*/
  }
  else
  {
    WeaponType = TechnoClass::GetWeaponType((TechnoClass *)((char *)this->vfptr3 + 904), &v20); /*0x4ce779*/
    FacingClass::Update((char *)this->vfptr3 + 928, WeaponType); /*0x4ce788*/
  }
  v7 = v17; /*0x4ce81d*/
  LABEL_18:
  if ( v7 ) /*0x4ce823*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x4ce829*/
  return 1; /*0x4ce82c*/
}
} // namespace ra2::game

// 0x4CF950
namespace ra2::game {
int TechnoClass::GetData() const
{

  int result; // eax
  int vfptr3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int *WeaponType; // eax
  unsigned int *v8; // ecx
  unsigned int *v9; // eax
  int v10; // [esp+4h] [ebp-10h] BYREF
  unsigned int v11[3]; // [esp+8h] [ebp-Ch] BYREF

  result = (*(int (**)(int))(*(unsigned int *)this->vfptr3 + 892))(this->vfptr3); /*0x4cf95b*/
  if ( !(unsigned char)result ) /*0x4cf963*/
  {
    result = (*(int (**)(int))(*(unsigned int *)this->vfptr3 + 896))(this->vfptr3); /*0x4cf96e*/
    if ( !(unsigned char)result ) /*0x4cf976*/
    {
      result = (*(int (**)(int))(*(unsigned int *)this->vfptr3 + 468))(this->vfptr3); /*0x4cf981*/
      if ( !(unsigned char)result ) /*0x4cf989*/
      {
        result = (*(int (**)(int))(*(unsigned int *)this->vfptr3 + 472))(this->vfptr3); /*0x4cf994*/
        if ( !(unsigned char)result ) /*0x4cf99c*/
        {
          vfptr3 = this->vfptr3; /*0x4cf9a2*/
          BYTE1(this->customSound_controller[0]) = 0; /*0x4cf9a5*/
          LOBYTE(this->customSound_controller[0]) = 1; /*0x4cf9a8*/
          if ( *(unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)vfptr3 + 756))(vfptr3, &v10) == dword_8B3C58 ) /*0x4cf9c3*/
            GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, this->vfptr3); /*0x4cf9db*/
          v4 = (*(int (**)(int))(*(unsigned int *)this->vfptr3 + 132))(this->vfptr3); /*0x4cf9e5*/
          v5 = (*(int (**)(int))(*(unsigned int *)v4 + 188))(v4); /*0x4cf9ef*/
          v6 = this->vfptr3; /*0x4cf9f5*/
          this->attachedBomb = v5; /*0x4cf9f8*/
          if ( !(*(int (**)(int))(*(unsigned int *)v6 + 456))(v6) ) /*0x4cf9fd*/
          {
            WeaponType = TechnoClass::GetWeaponType(&this->vtable4, &v10); /*0x4cfa15*/
            FacingClass::Set_SyncLog(&this->vtable4, WeaponType); /*0x4cfa24*/
          }
          v8 = (unsigned int *)this->vfptr3; /*0x4cfa29*/
          v11[0] = v8[39]; /*0x4cfa3e*/
          v11[1] = v8[40]; /*0x4cfa45*/
          v11[2] = v8[41]; /*0x4cfa4c*/
          v9 = (unsigned int *)(*(int (**)(unsigned int *))(*v8 + 132))(v8); /*0x4cfa52*/
          return (int)StartAudioControllerAt(v9[331], v11, 0); /*0x4cfa60*/
        }
      }
    }
  }
  return result; /*0x4cfa65*/

}
} // namespace ra2::game

// 0x4D3540
namespace ra2::game {
int FootClass::PostLoadInit()
{
  TechnoClass::Constructor((TechnoClass *)this, a2); /*0x4d3548*/
  this->unknownAbstractArray588[0] = (int)0; /*0x4d3552*/
  this->FootClass_field_abstract_array_5AC[0] = (int)0; /*0x4d3558*/
  this->locomotor[0] = 0; /*0x4d355e*/
  /* X11: vtable install elided (implicit via class virtuals 0x4d3568) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x4d356e) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x4d3575) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x4d357c) — binary-proven install, was 0 */
  return &this->vfptr; /*0x4d3585*/
}
} // namespace ra2::game

// 0x4D3710
namespace ra2::game {
int FootClass::Destru_vt337()
{
  if ( a2 < 1.0 ) /*0x4d371f*/
  {
    if ( a2 > 0.0 ) /*0x4d3747*/
    {
      *(double *)this->currentSpeed_percentage = a2; /*0x4d3768*/
    }
    else
    {
      this->currentSpeed_percentage[0] = 0; /*0x4d3749*/
      this->currentSpeed_percentage[1] = 0; /*0x4d3753*/
    }
  }
  else
  {
    this->currentSpeed_percentage[0] = 0; /*0x4d3721*/
    this->currentSpeed_percentage[1] = 1072693248; /*0x4d372b*/
  }
}
} // namespace ra2::game

// 0x4D3780
namespace ra2::game {
void FootClass::UpdateReveal()
{
  int v2; // edi
  unsigned char v5[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x4d3783*/
  if ( a2 == 2 ) /*0x4d378c*/
    return 1; /*0x4d3793*/
  if ( !(uint8_t)TechnoClass::UpdateProdWithSound((TechnoClass *)this, a2) ) /*0x4d3799*/
    return 0; /*0x4d3803*/
  if ( (*((int (__thiscall **)(FootClass *))this->vfptr + 30))(this) == 2 ) /*0x4d37ac*/
  {
    a2 = *(unsigned int *)(*((int (__thiscall **)(FootClass *, unsigned char *))this->vfptr + 110))(this, v5); /*0x4d37c4*/
    if ( v2 ) /*0x4d37c8*/
    {
      if ( v2 == 1 || v2 == 3 ) /*0x4d37d0*/
      {
        MapClass::FillRevealBuffer((MapClass *)&DataGlobal_87F7E8, &a2, this); /*0x4d37dd*/
        return 1; /*0x4d37e7*/
      }
    }
    else
    {
      MapClass::ApplyOverlayReveal((MapClass *)&DataGlobal_87F7E8, &a2, (char *)this); /*0x4d37f5*/
    }
  }
  return 1; /*0x4d378e*/
}
} // namespace ra2::game

// 0x4D3810
namespace ra2::game {
bool FootClass::CheckTileSeed(int* coords)
{

  int v3; // ebx
  int v5; // ecx
  int v6; // eax
  unsigned int *v7; // eax
  int vfptr; // eax
  int v9; // edx
  char v10; // al
  int v11; // [esp-8h] [ebp-28h]
  __int16 v12; // [esp+4h] [ebp-1Ch] BYREF
  unsigned __int16 *v13; // [esp+8h] [ebp-18h]
  __int16 v14[2]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v15; // [esp+10h] [ebp-10h] BYREF
  char v16; // [esp+14h] [ebp-Ch] BYREF
  unsigned __int16 *v17; // [esp+1Ch] [ebp-4h]
  unsigned int *v18; // [esp+24h] [ebp+4h]

  v3 = *(unsigned int *)((*(int (**)(FootClass *))&this->vfptr->q084)(this) + 1460); /*0x4d381f*/
  if ( v3 == -1 ) /*0x4d3828*/
    return 1; /*0x4d382b*/
  v5 = *coords / 256; /*0x4d3853*/
  v6 = coords[1] / 256; /*0x4d3856*/
  LOWORD(v18) = v5; /*0x4d3860*/
  HIWORD(v18) = v6; /*0x4d3865*/
  *(unsigned int *)v14 = v18; /*0x4d386e*/
  if ( __PAIR32__(v6, v5) == g_FootClass_Pool ) /*0x4d3872*/
    return 0; /*0x4d387e*/
  v7 = (unsigned int *)(*(int (**)(FootClass *))&this->vfptr->u32_4C)(this); /*0x4d3892*/
  LOWORD(v17) = *v7 / 256; /*0x4d38a5*/
  HIWORD(v17) = v7[1] / 256; /*0x4d38bb*/
  vfptr = this->vfptr; /*0x4d38c4*/
  v13 = v17; /*0x4d38c6*/
  v11 = (*(int (**)(FootClass *))(vfptr + 800))(this); /*0x4d38d4*/
  v9 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, &v12) + 80) >> 8; /*0x4d38e8*/
  LOBYTE(v9) = v9 & 1; /*0x4d38eb*/
  v10 = (*(int (**)(FootClass *, unsigned int, int, int))&this->vfptr->ChargerTurrets)(this, 0, v9, v11); /*0x4d38f3*/
  return MapSeed::CheckTileMatch((MapSeed *)&dword_87F7E8, &v15, v14, v3, v10, (char)&v16, 0); /*0x4d382a*/

}
} // namespace ra2::game

// 0x4D4B20
namespace ra2::game {
bool FootClass::CheckVoiceResponse() const
{
  int *v2; // edi
  AbstractClass *target; // ecx
  unsigned char *v4; // edi
  unsigned int *v5; // eax
  CellClass *v6; // eax
  char *MissionControl; // eax
  int v8; // eax
  char v10[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this )
    v2 = (*((int (__thiscall **)(FootClass *))this->vfptr + 11))(this) == 15 ? (int *)this : 0;
  else
    v2 = 0; /*0x4d4b2b*/
  target = this->target; /*0x4d4b43*/
  if ( target && (*((int (__thiscall **)(AbstractClass *))target->vfptr + 11))(target) == 6 ) /*0x4d4b55*/
  {
    if ( this->movementDestination ) /*0x4d4b57*/
      goto LABEL_18; /*0x4d4b5f*/
    if ( v2 ) /*0x4d4b67*/
    {
      if ( *(unsigned char *)(v2[432] + 3778) /*0x4d4baa*/
        || (uint8_t)TechnoTypeClass::HasVoiceResponse(v2, 14)
        || (v4 = (unsigned char *)v2[432], v4[3779])
        || v4[3764]
        || v4[3765]
        || v4[3774] )
      {
        (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->vfptr + 288))(this, this->target, 1); /*0x4d4bc1*/
      }
    }
  }
  if ( !this->movementDestination ) /*0x4d4bc7*/
  {
    (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 289))(this, 0, 1); /*0x4d4bd9*/
    v5 = (unsigned int *)(*((int (__thiscall **)(FootClass *, char *))this->vfptr + 18))(this, v10); /*0x4d4be8*/
    v6 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v5); /*0x4d4bf1*/
    if ( Cell::IsBridge((Cell *)v6) ) /*0x4d4bf8*/
      (*((void (__thiscall **)(FootClass *, int *, int, unsigned int))this->vfptr + 93))(this, &dword_8B3DA8, 1, 0); /*0x4d4c0e*/
  }
  LABEL_18:
  if ( !this->target /*0x4d4c3f*/
    && !(uint8_t)House::IsCurrentPlayer((House *)this->owner)
    && ((*((int (__thiscall **)(FootClass *))this->vfptr + 11))(this) != 15
     || !*(unsigned char *)(this->u32_6C0 + 3764)) )
  {
    (*((void (__thiscall **)(FootClass *, unsigned int))this->vfptr + 242))(this, 0); /*0x4d4c4f*/
    (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 288))(this, 0, 1); /*0x4d4c5d*/
    (*((void (__thiscall **)(FootClass *, int, unsigned int))this->vfptr + 122))(this, 15, 0); /*0x4d4c6b*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4c73*/
  (*((unsigned short *)&(v8))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4c81*/
  return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4c9e*/
}
} // namespace ra2::game

// 0x4D4CB0
namespace ra2::game {
void FootClass::ProcessMissionVoice()
{
  int *v2; // edi
  AbstractClass *target; // ecx
  unsigned int *v4; // eax
  CellClass *v5; // eax
  char *MissionControl; // eax
  int v7; // eax
  char v9[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this )
    v2 = (*((int (__thiscall **)(FootClass *))this->vfptr + 11))(this) == 15 ? (int *)this : 0;
  else
    v2 = 0; /*0x4d4cbb*/
  target = this->target; /*0x4d4cd3*/
  if ( target && (*((int (__thiscall **)(AbstractClass *))target->vfptr + 11))(target) == 6 ) /*0x4d4ce5*/
  {
    if ( this->movementDestination ) /*0x4d4ce7*/
      goto LABEL_15; /*0x4d4cef*/
    if ( v2 /*0x4d4d1c*/
      && (*(unsigned char *)(v2[432] + 3778)
       || (uint8_t)TechnoTypeClass::HasVoiceResponse(v2, 14)
       || *(unsigned char *)(v2[432] + 3779)) )
    {
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->vfptr + 288))(this, this->target, 1); /*0x4d4d33*/
    }
  }
  if ( !this->movementDestination ) /*0x4d4d39*/
  {
    (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 289))(this, 0, 1); /*0x4d4d4b*/
    v4 = (unsigned int *)(*((int (__thiscall **)(FootClass *, char *))this->vfptr + 18))(this, v9); /*0x4d4d5a*/
    v5 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v4); /*0x4d4d63*/
    if ( Cell::IsBridge((Cell *)v5) ) /*0x4d4d6a*/
      (*((void (__thiscall **)(FootClass *, int *, int, unsigned int))this->vfptr + 93))(this, &dword_8B3DA8, 1, 0); /*0x4d4d80*/
  }
  LABEL_15:
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4d86*/
  (*((unsigned short *)&(v7))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4d96*/
  return v7 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4db3*/
}
} // namespace ra2::game

// 0x4D55F0
namespace ra2::game {
int FootClass::Destru_vt319()
{
  if ( !this->locomotor[0] ) /*0x4d5602*/
    sub_7DC720(-2147467261); /*0x4d5611*/
  (*(void (__stdcall **)(int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this->locomotor[0] + 68))( /*0x4d562c*/
    this->locomotor[0],
    *a2,
    a2[1],
    a2[2]);
  if ( !this->locomotor[0] ) /*0x4d562f*/
    sub_7DC720(-2147467261); /*0x4d563e*/
  return (*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) != 0; /*0x4d5651*/
}
} // namespace ra2::game

// 0x4D5660
namespace ra2::game {
int FootClass::EnterAttackState()
{
  void (__thiscall **vtable0)(FootClass *); // edx

  (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 288))(this, 0, 1); /*0x4d5669*/
  vtable0 = (void (__thiscall **)(FootClass *))this->vfptr; /*0x4d566f*/
  this->pathDirections[0] = -1; /*0x4d5673*/
  vtable0[320](this); /*0x4d567d*/
  return TechnoClass::ProcessDeploymentState((TechnoClass *)this); /*0x4d568a*/
}
} // namespace ra2::game

// 0x4D8560
namespace ra2::game {
int FootClass::GetCoords() const
{
  AbstractClass *FootClass_field_5A0; // ecx
  unsigned int *BridgeAwareCoords; // eax
  unsigned char v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*((int (__thiscall **)(FootClass *))this->vfptr + 97))(this) != 1 /*0x4d8591*/
    && ((FootClass_field_5A0 = (AbstractClass *)this->FootClass_field_5A0) != 0
     || (FootClass_field_5A0 = this->movementDestination) != 0) )
  {
    BridgeAwareCoords = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, unsigned char *))FootClass_field_5A0->vfptr + 22))( /*0x4d8584*/
                                    FootClass_field_5A0,
                                    v6);
  }
  else
  {
    BridgeAwareCoords = (unsigned int *)BuildingClass::GetBridgeAwareCoords((TechnoClass *)this); /*0x4d85a6*/
  }
  *a2 = *BridgeAwareCoords; /*0x4d85b5*/
  a2[1] = BridgeAwareCoords[1]; /*0x4d85ba*/
  a2[2] = BridgeAwareCoords[2]; /*0x4d85c1*/
  return a2; /*0x4d85bd*/
}
} // namespace ra2::game

// 0x4D8F40
namespace ra2::game {
int FootClass::OverrideMission_SyncLog()
{
  this->lastDestination = this->movementDestination; /*0x4d8f5b*/
  MissionClass::OverrideMission_SyncLog((TechnoClass *)this); /*0x4d8f61*/
  return (*((int (__thiscall **)(FootClass *, int, int))this->vfptr + 288))(this, a4, 1); /*0x4d8f73*/
}
} // namespace ra2::game

// 0x4D8F80
namespace ra2::game {
int FootClass::ConditionalAction()
{
  if ( !(uint8_t)BuildingClass::CheckOccupantState((TechnoClass *)this) ) /*0x4d8f83*/
    return 0; /*0x4d8fa3*/
  (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->vfptr + 288))(this, this->lastDestination, 1); /*0x4d8f99*/
  return 1; /*0x4d8fa1*/
}
} // namespace ra2::game

// 0x4D9290
namespace ra2::game {
void FootClass::ProcessTeamAction()
{
  void *Member; // eax
  int v3; // ecx
  int *locomotor; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  void (__thiscall **vtable0)(FootClass *, AbstractClass *, int); // edx
  AbstractClass *v12; // ecx
  char *MissionControl; // eax
  int v14; // eax
  AbstractClass *movementDestination; // [esp+14h] [ebp-10h]
  int v17; // [esp+20h] [ebp-4h] BYREF

  Member = (void *)Team::GetMember((Team *)this, 0); /*0x4d9296*/
  if ( Member || (Member = AbstractClass::IsTechnoType(this->focus)) != 0 ) /*0x4d92ac*/
  {
    if ( (*((int (__thiscall **)(FootClass *, int, void *))this->vfptr + 158))(this, 14, Member) == 1 || this->isTether ) /*0x4d92c4*/
    {
      if ( this->movementDestination || *&this->q598 <= 0 ) /*0x4d9303*/
      {
        if ( *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 3284) ) /*0x4d93f2*/
        {
          vtable0 = (void (__thiscall **)(FootClass *, AbstractClass *, int))this->vfptr; /*0x4d9402*/
          movementDestination = this->movementDestination; /*0x4d9406*/
          this->FootClass_field_5A0 = 0; /*0x4d9409*/
          this->movementDestination = 0; /*0x4d9413*/
          vtable0[288](this, movementDestination, 1); /*0x4d941d*/
        }
      }
      else
      {
        v3 = this->locomotor[0]; /*0x4d9309*/
        locomotor = this->locomotor; /*0x4d9310*/
        v5 = 0; /*0x4d9316*/
        v17 = 0; /*0x4d931a*/
        if ( v3 ) /*0x4d931e*/
        {
          v6 = StreamClass::Set((StreamClass *)&v17, this->locomotor); /*0x4d9325*/
          if ( v6 < 0 && v6 != -2147467262 ) /*0x4d9333*/
            sub_7DC720(v6); /*0x4d9336*/
          v5 = v17; /*0x4d933b*/
          if ( v17 ) /*0x4d9341*/
          {
            if ( (*(uint8_t (__stdcall **)(int))(*(unsigned int *)v17 + 20))(v17) ) /*0x4d9346*/
            {
              if ( *locomotor ) /*0x4d934d*/
                (*(void (__stdcall **)(int))(*(unsigned int *)*locomotor + 8))(*locomotor); /*0x4d9356*/
              v7 = v17; /*0x4d9359*/
              *locomotor = 0; /*0x4d935d*/
              if ( !v7 ) /*0x4d9365*/
                sub_7DC720(-2147467261); /*0x4d936c*/
              (*(void (__stdcall **)(int, int *))(*(unsigned int *)v7 + 16))(v7, this->locomotor); /*0x4d9379*/
            }
            v5 = v17; /*0x4d937c*/
          }
        }
        if ( *&this->q598 > 0 ) /*0x4d9389*/
        {
          (*((void (__thiscall **)(FootClass *, unsigned int, unsigned int))this->vfptr + 288))( /*0x4d939a*/
            this,
            **(unsigned int **)this->__pad_58C,
            0);
          v8 = *&this->q598; /*0x4d93a0*/
          if ( v8 > 0 ) /*0x4d93a8*/
          {
            v9 = v8 - 1; /*0x4d93aa*/
            v10 = 0; /*0x4d93ad*/
            for ( *&this->q598 = v9; /*0x4d93b7*/
                  v10 < *&this->q598;
                  *(unsigned int *)(*(unsigned int *)this->__pad_58C + 4 * v10 - 4) = *(unsigned int *)(*(unsigned int *)this->__pad_58C
                                                                                    + 4 * v10) )
            {
              ++v10; /*0x4d93bf*/
            }
          }
          v5 = v17; /*0x4d93d1*/
        }
        if ( v5 ) /*0x4d93d7*/
          (*(void (__stdcall **)(int))(*(unsigned int *)v5 + 8))(v5); /*0x4d93e0*/
      }
    }
    else
    {
      (*((void (__thiscall **)(FootClass *, int))this->vfptr + 157))(this, 3); /*0x4d92d4*/
      (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 289))(this, 0, 1); /*0x4d92e2*/
    }
  }
  else
  {
    if ( !TechnoClass::PlaceAtCell((TechnoClass *)this) ) /*0x4d9427*/
    {
      v12 = this->movementDestination; /*0x4d9430*/
      if ( !v12 /*0x4d9452*/
        || (*((int (__thiscall **)(AbstractClass *))v12->vfptr + 11))(v12) != 1
        && (*((int (__thiscall **)(AbstractClass *))this->movementDestination->vfptr + 11))(this->movementDestination) != 2 )
      {
        (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 289))(this, 0, 1); /*0x4d945c*/
      }
    }
    (*((void (__thiscall **)(FootClass *))this->vfptr + 123))(this); /*0x4d9466*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d946e*/
  (*((unsigned short *)&(v14))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d947c*/
  return v14 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d9499*/
}
} // namespace ra2::game

// 0x4D94B0
namespace ra2::game {
int FootClass::AssignDestination()
{
  AbstractClass *v4; // esi
  char result; // al
  FootClass *locomotorSource; // eax
  ParticleSystemClass *fireParticles; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int *pathDelayTimer; // ebp
  int v17; // [esp+10h] [ebp-1Ch] BYREF
  int v18; // [esp+14h] [ebp-18h]
  unsigned char v19[16]; // [esp+1Ch] [ebp-10h] BYREF

  v4 = (AbstractClass *)a2; /*0x4d94ba*/
  result = this->isAttackedByLocomotor; /*0x4d94be*/
  this->FootClass_field_5A0 = 0; /*0x4d94c7*/
  if ( !result || !v4 ) /*0x4d94d1*/
  {
    result = this->inOpenToppedTransport; /*0x4d94d7*/
    if ( (!result || !v4) && (!this->bunkerLinkedUnit || !v4) ) /*0x4d94f3*/
    {
      if ( this->locomotorTarget && v4 ) /*0x4d9503*/
        TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x4d9509*/
      this->movementDestination = v4; /*0x4d9510*/
      if ( !v4 ) /*0x4d9516*/
      {
        if ( this->isAttackedByLocomotor ) /*0x4d9518*/
        {
          locomotorSource = this->locomotorSource; /*0x4d9522*/
          if ( locomotorSource ) /*0x4d952a*/
          {
            locomotorSource->locomotorTarget = 0; /*0x4d952c*/
            this->locomotorSource = 0; /*0x4d9532*/
            this->isLetGoByLocomotor = 1; /*0x4d9538*/
          }
        }
      }
      if ( !this->movementDestination ) /*0x4d9545*/
      {
        if ( (*((int (__thiscall **)(FootClass *))this->vfptr + 11))(this) != 2 /*0x4d9696*/
          || this->currentMission != 1 && this->queuedMission != 1
          || !this->target )
        {
          if ( !this->locomotor[0] ) /*0x4d969e*/
            sub_7DC720(-2147467261); /*0x4d96ab*/
          (*(void (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 72))(this->locomotor[0]); /*0x4d96b9*/
          this->movementDestination = v4; /*0x4d96bc*/
        }
        goto LABEL_43; /*0x4d96bc*/
      }
      fireParticles = this->fireParticles; /*0x4d954b*/
      if ( fireParticles ) /*0x4d9553*/
      {
        (*((void (__thiscall **)(ParticleSystemClass *))fireParticles->vfptr + 62))(fireParticles); /*0x4d9557*/
        this->fireParticles = 0; /*0x4d955d*/
      }
      v8 = this->locomotor[0]; /*0x4d9563*/
      a2 = 0; /*0x4d9571*/
      if ( !v8 ) /*0x4d9575*/
        goto LABEL_22; /*0x4d9575*/
      v9 = StreamClass::Set2((StreamClass *)&a2, this->locomotor); /*0x4d957c*/
      if ( v9 < 0 && v9 != -2147467262 ) /*0x4d958a*/
        sub_7DC720(v9); /*0x4d958d*/
      if ( !a2 ) /*0x4d9598*/
  LABEL_22:
        sub_7DC720(-2147467261); /*0x4d959f*/
      (*(void (__stdcall **)(int, unsigned char *))(*(unsigned int *)a2 + 12))(a2, v19); /*0x4d95b0*/
      if ( !memcmp(v19, &stru_7E9A40, 0x10u) ) /*0x4d95c3*/
      {
        v10 = this->pathDelayTimer[0]; /*0x4d95c7*/
        v11 = this->pathDelayTimer[2]; /*0x4d95cd*/
        if ( v10 != -1 ) /*0x4d95dc*/
        {
          if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v10 >= v11 ) /*0x4d95e4*/
          {
  LABEL_28:
            v12 = v18; /*0x4d95ec*/
            this->pathDelayTimer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4d95f5*/
            this->pathDelayTimer[1] = v12; /*0x4d95fb*/
            this->pathDelayTimer[2] = 1; /*0x4d9601*/
            goto LABEL_29; /*0x4d9601*/
          }
          v11 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v10; /*0x4d95e6*/
        }
        if ( !v11 ) /*0x4d95ea*/
          goto LABEL_28; /*0x4d95ea*/
      }
  LABEL_29:
      if ( this->FootClass_field_bool_6AC ) /*0x4d9607*/
      {
        this->FootClass_field_bool_6AC = 0; /*0x4d9611*/
      }
      else
      {
        v13 = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))this->movementDestination->vfptr /*0x4d9628*/
                         + 19))(
                          this->movementDestination,
                          &v17,
                          this);
        if ( !this->locomotor[0] ) /*0x4d9633*/
          sub_7DC720(-2147467261); /*0x4d9642*/
        (*(void (__stdcall **)(int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this->locomotor[0] + 68))( /*0x4d965d*/
          this->locomotor[0],
          *v13,
          v13[1],
          v13[2]);
      }
      if ( a2 ) /*0x4d9668*/
        (*(void (__stdcall **)(int))(*(unsigned int *)a2 + 8))(a2); /*0x4d966d*/
  LABEL_43:
      this->FootClass_field_bool_6B7 = 0; /*0x4d96c2*/
      v14 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5992); /*0x4d96d4*/
      this->blockagePathTimer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4d96e0*/
      this->blockagePathTimer[1] = v18; /*0x4d96ea*/
      this->blockagePathTimer[2] = v14; /*0x4d96ed*/
      result = ((unsigned int *)&stru_A8EB00)[416]; /*0x4d96f0*/
      v15 = v18; /*0x4d96f5*/
      pathDelayTimer = this->pathDelayTimer; /*0x4d96fb*/
      *pathDelayTimer = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4d9701*/
      pathDelayTimer[1] = v15; /*0x4d9704*/
      pathDelayTimer[2] = 0; /*0x4d9707*/
    }
  }
  return result; /*0x4d970a*/
}
} // namespace ra2::game

// 0x4D9720
namespace ra2::game {
int FootClass::DispatchSell()
{
  int *team; // ecx
  int Member; // eax

  if ( a2 ) /*0x4d972a*/
  {
    team = (int *)this->team; /*0x4d972c*/
    if ( team ) /*0x4d9734*/
    {
      if ( !dword_A8E7AC ) /*0x4d973d*/
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4d9744*/
    }
    (*((void (__thiscall **)(FootClass *, int))this->vfptr + 157))(this, 3); /*0x4d974f*/
    return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d974f*/
  }
  Member = Team::GetMember((Team *)this, 0); /*0x4d9766*/
  if ( !Member || (uint8_t)Object::IsAlliedWithObjectHouse((Object *)this->owner, Member) ) /*0x4d9776*/
    return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d975f*/
  (*((void (__thiscall **)(FootClass *, int))this->vfptr + 157))(this, 3); /*0x4d9785*/
  return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d975d*/
}
} // namespace ra2::game

// 0x4D97A0
namespace ra2::game {
int TechnoClass::ComputeThreatLevel()
{
  AbstractClass *target; // ecx
  int v5; // eax
  bool v6; // cl
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx

  if ( a2 ) /*0x4d97aa*/
  {
    target = this->target; /*0x4d97b0*/
    if ( target == (AbstractClass *)a2 ) /*0x4d97b8*/
      return -(*((int (__thiscall **)(TechnoClass *))this->vfptr + 176))(this); /*0x4d97c8*/
    if ( !target /*0x4d97d7*/
      || (target->abstractFlags & 1) == 0
      || !(*((uint8_t (__thiscall **)(AbstractClass *))target->vfptr + 171))(target) )
    {
      v5 = this->FootClass_field_5D4; /*0x4d97e5*/
      v6 = v5 && *(unsigned char *)(*(unsigned int *)(v5 + 36) + 246); /*0x4d97fc*/
      if ( (!v5 || v6) /*0x4d9825*/
        && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this) != 10
        && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 176))(this) )
      {
        v7 = ObjectClass::DistanceTo((ObjectClass *)this, a2); /*0x4d983e*/
        v8 = v7 - (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 90))(this, 0); /*0x4d9846*/
        v9 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 176))(this) << 10; /*0x4d9854*/
        if ( v8 <= 0 ) /*0x4d9859*/
          return v9; /*0x4d98a1*/
        if ( (unsigned int)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 227))(this) <= 1 ) /*0x4d9868*/
        {
          v10 = 1; /*0x4d98a4*/
        }
        else
        {
          v10 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 227))(this); /*0x4d9874*/
          if ( v10 <= 0 ) /*0x4d9878*/
          {
  LABEL_19:
            v11 = 1; /*0x4d9886*/
  LABEL_20:
            v9 /= v11; /*0x4d988b*/
            if ( v9 <= 1 ) /*0x4d9895*/
              return 1; /*0x4d9897*/
            return v9; /*0x4d9897*/
          }
        }
        v11 = v8 / v10; /*0x4d9882*/
        if ( v11 > 1 ) /*0x4d9884*/
          goto LABEL_20; /*0x4d9884*/
        goto LABEL_19; /*0x4d9884*/
      }
    }
  }
  return 0; /*0x4d97c4*/
}
} // namespace ra2::game

// 0x4D9960
namespace ra2::game {
int FootClass::HandleTargetDestroyed()
{

  char v3; // bl
  int *v4; // edi
  int parasiteEatingMe; // eax
  int v7; // eax
  int nextTeamMember; // eax
  bool v9; // bl
  unsigned int *v10; // eax
  CellClass *v11; // eax
  int movementDestination; // ecx
  int FootClass_field_5CC; // ecx
  unsigned int *v14; // eax
  int i; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int result; // eax
  int j; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  unsigned int v24[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (char)a3; /*0x4d9964*/
  v4 = a2; /*0x4d996b*/
  ObjectClass::NotifyExpired((TechnoClass *)this, a2, a3); /*0x4d9973*/
  if ( (int *)this->team == v4 ) /*0x4d997e*/
    this->team = 0; /*0x4d9982*/
  parasiteEatingMe = this->parasiteEatingMe; /*0x4d998c*/
  if ( (int *)parasiteEatingMe == v4 && (!*(unsigned int *)(parasiteEatingMe + 108) || !stru_A8E960.random[488]) ) /*0x4d99a2*/
    this->parasiteEatingMe = 0; /*0x4d99a4*/
  v7 = this->parasiteEatingMe; /*0x4d99aa*/
  if ( v7 && *(int *)(v7 + 108) > 0 ) /*0x4d99b7*/
    (*(void (**)(unsigned int, int *, int))(**(unsigned int **)(v7 + 1692) + 40))(*(unsigned int *)(v7 + 1692), v4, 1); /*0x4d99c6*/
  if ( v4 == (int *)this ) /*0x4d99cb*/
    this->parasiteEatingMe = 0; /*0x4d99cd*/
  nextTeamMember = this->nextTeamMember; /*0x4d99d3*/
  if ( (int *)nextTeamMember == v4 && v3 && v4 ) /*0x4d99e3*/
    this->nextTeamMember = *(unsigned int *)(nextTeamMember + 1496); /*0x4d99eb*/
  if ( (int *)this->focus == v4 ) /*0x4d99f7*/
    TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d99fc*/
  if ( (int *)this->lastDestination == v4 ) /*0x4d9a07*/
    this->lastDestination = 0; /*0x4d9a09*/
  if ( (int *)this->movementDestination == v4 ) /*0x4d9a15*/
  {
    v9 = 1; /*0x4d9a1f*/
    if ( !(unsigned char)a3 ) /*0x4d9a23*/
    {
      if ( v4 ) /*0x4d9a27*/
      {
        LOBYTE(a3) = v4->abstractFlags & 1; /*0x4d9a2e*/
        if ( (unsigned char)a3 ) /*0x4d9a32*/
        {
          v10 = (unsigned int *)v4->GetInvalidCoord(v24); /*0x4d9a3d*/
          v11 = Coord::To_Cell((Coord *)&dword_87F7E8, v10); /*0x4d9a46*/
          v9 = (unsigned __int8)Cell::IsPassableOffset((Cell *)v11, *(unsigned int *)&this->owner->relatedTagsCount) == 0; /*0x4d9a60*/
        }
      }
    }
    if ( ((*(int (**)(FootClass *))&this->vfptr->q184)(this) != 8 /*0x4d9abb*/
       || (*(int (**)(FootClass *))&this->vfptr->ChargerBarrels_0x12)(this) != 15
       || !*(unsigned char *)(this->u32_6C0 + 3764)
       || (movementDestination = this->movementDestination) == 0
       || (*(unsigned char *)(movementDestination + 20) & 2) == 0
       || !*(unsigned char *)(movementDestination + 144)
       || *(int *)(movementDestination + 108) <= 0
       || (*(int (**)(int))(*(unsigned int *)movementDestination + 388))(movementDestination) == 19)
      && v9 )
    {
      this->FootClass_field_5A0 = 0; /*0x4d9abd*/
      this->movementDestination = 0; /*0x4d9ac3*/
    }
  }
  FootClass_field_5CC = this->FootClass_field_5CC; /*0x4d9ac9*/
  if ( (int *)FootClass_field_5CC == v4 ) /*0x4d9ad1*/
  {
    if ( FootClass_field_5CC ) /*0x4d9ad5*/
    {
      v14 = (unsigned int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)FootClass_field_5CC + 72))( /*0x4d9ade*/
                        FootClass_field_5CC,
                        v24);
      LOWORD(a3) = *v14 / 256; /*0x4d9af1*/
      HIWORD(a3) = v14[1] / 256; /*0x4d9b0a*/
      a2 = a3; /*0x4d9b18*/
      this->FootClass_field_5C8 = (int)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x4d9b21*/
    }
    else
    {
      this->FootClass_field_5C8 = 0; /*0x4d9b29*/
    }
    this->FootClass_field_5CC = 0; /*0x4d9b2f*/
  }
  if ( (int *)this->FootClass_field_5C8 == v4 ) /*0x4d9b3b*/
    this->FootClass_field_5C8 = 0; /*0x4d9b3d*/
  for ( i = 0; i < *&this->q5BC; ++i ) /*0x4d9b4d*/
  {
    if ( *(int **)(*(unsigned int *)this->q_5B0 + 4 * i) == v4 ) /*0x4d9b58*/
    {
      v16 = *&this->q5BC; /*0x4d9b5a*/
      if ( i < v16 ) /*0x4d9b62*/
      {
        v17 = v16 - 1; /*0x4d9b64*/
        v18 = i; /*0x4d9b67*/
        for ( *&this->q5BC = v17; /*0x4d9b71*/
              v18 < *&this->q5BC;
              *(unsigned int *)(*(unsigned int *)this->q_5B0 + 4 * v18 - 4) = *(unsigned int *)(*(unsigned int *)this->q_5B0 + 4 * v18) )
        {
          ++v18; /*0x4d9b79*/
        }
      }
      --i; /*0x4d9b8b*/
    }
  }
  result = *&this->q598; /*0x4d9b97*/
  for ( j = 0; j < result; ++j ) /*0x4d9ba1*/
  {
    if ( *(int **)(*(unsigned int *)this->__pad_58C + 4 * j) == v4 ) /*0x4d9bac*/
    {
      v21 = *&this->q598; /*0x4d9bae*/
      if ( j < v21 ) /*0x4d9bb6*/
      {
        v22 = v21 - 1; /*0x4d9bb8*/
        v23 = j; /*0x4d9bbb*/
        for ( *&this->q598 = v22; /*0x4d9bc5*/
              v23 < *&this->q598;
              *(unsigned int *)(*(unsigned int *)this->__pad_58C + 4 * v23 - 4) = *(unsigned int *)(*(unsigned int *)this->__pad_58C + 4 * v23) )
        {
          ++v23; /*0x4d9bcd*/
        }
      }
      --j; /*0x4d9bdf*/
    }
    result = *&this->q598; /*0x4d9be0*/
  }
  return result; /*0x4d9beb*/

}
} // namespace ra2::game

// 0x4D9C00
namespace ra2::game {
int FootClass::vt_entry_524() {
  return 0; /*0x4d9c02*/
}
} // namespace ra2::game

// 0x4D9C10
namespace ra2::game {
int FootClass::Destru_vt107(int a2, int a3, int a4, int a5, char a6) {
  if ( !this->locomotor[0] || !a6 ) /*0x4d9c23*/
    return 0; /*0x4d9c53*/
  if ( !this->locomotor[0] ) /*0x4d9c2d*/
    sub_7DC720(-2147467261); /*0x4d9c3c*/
  return (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)this->locomotor[0] + 28))( /*0x4d9c4f*/
           this->locomotor[0],
           a2->objectTypeFlags);
}
} // namespace ra2::game

// 0x4D9FF0
namespace ra2::game {
unsigned int * FootClass::vt_entry_4F0(unsigned int *a2) {
  unsigned int *v2; // ecx
  unsigned char v4[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (unsigned int *)(*((int (__thiscall **)(FootClass *, unsigned char *))this->vfptr + 41))(this, v4); /*0x4da001*/
  *a2 = *v2; /*0x4da00b*/
  a2[1] = v2[1]; /*0x4da010*/
  a2[2] = v2[2]; /*0x4da017*/
  return a2; /*0x4da013*/
}
} // namespace ra2::game

// 0x4DA1C0
namespace ra2::game {
int FootClass::ClearSomeVector() {
  return this->vt_entry_68(this->FootClass_field_abstract_array_5AC);
}
} // namespace ra2::game

// 0x4DA1D0
namespace ra2::game {
char FootClass::CanBeControlled() {
  TeamClass *team; // ecx

  if ( !this->isInPlayfield ) /*0x4da1d3*/
    return 0; /*0x4da1dd*/
  if ( *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 3220) ) /*0x4da1eb*/
    return 1; /*0x4da1eb*/
  if ( this->isALoaner ) /*0x4da1f5*/
    return 1; /*0x4da1f5*/
  if ( (*((int (__thiscall **)(FootClass *))this->vfptr + 97))(this) == 4 ) /*0x4da20c*/
    return 1; /*0x4da20c*/
  team = this->team; /*0x4da20e*/
  if ( team ) /*0x4da216*/
  {
    if ( (uint8_t)TechnoClass::IsWaypointHidden((TechnoClass *)team) ) /*0x4da218*/
      return 1; /*0x4da225*/
  }
  return 0; /*0x4da1df*/
}
} // namespace ra2::game

// 0x4D9C10
namespace ra2::game {
int FootClass::Destru_vt107()
{
  if ( !this->locomotor[0] || !a6 ) /*0x4d9c23*/
    return 0; /*0x4d9c53*/
  if ( !this->locomotor[0] ) /*0x4d9c2d*/
    sub_7DC720(-2147467261); /*0x4d9c3c*/
  return (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)this->locomotor[0] + 28))( /*0x4d9c4f*/
           this->locomotor[0],
           a2->u32_24);
}
} // namespace ra2::game

// 0x4D9FF0
namespace ra2::game {
int FootClass::vt_entry_4F0()
{
  unsigned int *v2; // ecx
  unsigned char v4[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (unsigned int *)(*((int (__thiscall **)(FootClass *, unsigned char *))this->vfptr + 41))(this, v4); /*0x4da001*/
  *a2 = *v2; /*0x4da00b*/
  a2[1] = v2[1]; /*0x4da010*/
  a2[2] = v2[2]; /*0x4da017*/
  return a2; /*0x4da013*/
}
} // namespace ra2::game


// 0x4DA1D0
namespace ra2::game {
bool FootClass::CanBeControlled() const
{
  TeamClass *team; // ecx

  if ( !this->isInPlayfield ) /*0x4da1d3*/
    return 0; /*0x4da1dd*/
  if ( *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 3220) ) /*0x4da1eb*/
    return 1; /*0x4da1eb*/
  if ( this->isALoaner ) /*0x4da1f5*/
    return 1; /*0x4da1f5*/
  if ( (*((int (__thiscall **)(FootClass *))this->vfptr + 97))(this) == 4 ) /*0x4da20c*/
    return 1; /*0x4da20c*/
  team = this->team; /*0x4da20e*/
  if ( team ) /*0x4da216*/
  {
    if ( (uint8_t)TechnoClass::IsWaypointHidden((TechnoClass *)team) ) /*0x4da218*/
      return 1; /*0x4da225*/
  }
  return 0; /*0x4da1df*/
}
} // namespace ra2::game

// 0x4DA230
namespace ra2::game {
bool FootClass::CanBeRecruited() const
{
  int result; // eax
  int v4; // eax

  result = a2; /*0x4da230*/
  if ( a2 ) /*0x4da239*/
  {
    if ( (HouseClass *)a2 == this->owner ) /*0x4da247*/
    {
      if ( this->inLimbo ) /*0x4da24f*/
      {
        (*((unsigned char *)&(result))) = 0; /*0x4da259*/
      }
      else
      {
        result = (int)this->team; /*0x4da25f*/
        if ( result ) /*0x4da267*/
        {
          (*((unsigned char *)&(result))) = 0; /*0x4da269*/
        }
        else
        {
          v4 = (*((int (__thiscall **)(FootClass *))this->vfptr + 97))(this); /*0x4da273*/
          (*((unsigned char *)&(result))) = IPersistStream::SetField(v4); /*0x4da27b*/
          if ( (unsigned char)result ) /*0x4da282*/
            (*((unsigned char *)&(result))) = this->isRecruitableByAlly != 0; /*0x4da291*/
        }
      }
    }
    else
    {
      (*((unsigned char *)&(result))) = 0; /*0x4da249*/
    }
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x4da23b*/
  }
  return result; /*0x4da23d*/
}
} // namespace ra2::game

// 0x4DA2A0
namespace ra2::game {
void FootClass::ClearSomeVector2()
{
  int result; // eax

  result = (*((int (__thiscall **)(FootClass *))this->vfptr + 97))(this); /*0x4da2a2*/
  (*((unsigned char *)&(result))) = result == 7; /*0x4da2ab*/
  return result; /*0x4da2ae*/
}
} // namespace ra2::game

// 0x4DA2C0
namespace ra2::game {
void FootClass::ProcessMovement()
{

  double v1; // st7
  int missionStatus; // eax
  int team; // eax
  unsigned int *v5; // eax
  int vfptr; // edx
  int *v7; // eax
  unsigned int *v8; // eax
  int v9; // edx
  int *v10; // eax
  int v11; // ebx
  void *v12; // eax
  char *MissionControl; // eax
  int v14; // eax
  unsigned int *WaypointCoords; // [esp-10h] [ebp-50h]
  int v17; // [esp-8h] [ebp-48h]
  int v18; // [esp-8h] [ebp-48h]
  int v19; // [esp+4h] [ebp-3Ch]
  __int16 v20[2]; // [esp+8h] [ebp-38h] BYREF
  unsigned __int16 *v21; // [esp+Ch] [ebp-34h]
  int v22; // [esp+10h] [ebp-30h] BYREF
  int v23; // [esp+14h] [ebp-2Ch] BYREF
  int v24; // [esp+18h] [ebp-28h] BYREF
  int v25; // [esp+1Ch] [ebp-24h] BYREF
  int v26; // [esp+20h] [ebp-20h] BYREF
  int v27; // [esp+24h] [ebp-1Ch] BYREF
  unsigned char v28[12]; // [esp+28h] [ebp-18h] BYREF
  unsigned char v29[12]; // [esp+34h] [ebp-Ch] BYREF

  missionStatus = this->missionStatus; /*0x4da2c6*/
  if ( missionStatus ) /*0x4da2cf*/
  {
    if ( missionStatus == 1 && !this->movementDestination ) /*0x4da2d8*/
      this->missionStatus = 0; /*0x4da2e6*/
  }
  else if ( this->movementDestination ) /*0x4da2f5*/
  {
    this->missionStatus = 1; /*0x4da2ff*/
  }
  else
  {
    team = this->team; /*0x4da30e*/
    v20[0] = 0; /*0x4da314*/
    v20[1] = 0; /*0x4da31d*/
    if ( team && *TechnoClass::GetWaypointCoords(*(TechnoClass **)(team + 36), &v24) != g_FootClass_Pool ) /*0x4da341*/
    {
      v5 = (unsigned int *)(*(int (**)(FootClass *, unsigned char *))&this->vfptr->ThreatAvoidanceCoefficient)(this, v28); /*0x4da35d*/
      LOWORD(v21) = *v5 / 256; /*0x4da374*/
      vfptr = this->vfptr; /*0x4da385*/
      HIWORD(v21) = v5[1] / 256; /*0x4da38a*/
      v22 = (int)v21; /*0x4da393*/
      v17 = *(unsigned int *)((*(int (**)(FootClass *))(vfptr + 132))(this) + 1660); /*0x4da3a9*/
      WaypointCoords = TechnoClass::GetWaypointCoords(*(TechnoClass **)(this->team + 36), &v25); /*0x4da3c4*/
      v7 = (int *)FootClass::checkTurning((FootClass *)this->owner); /*0x4da3c5*/
      *(unsigned int *)v20 = *CellClass::FindOpenNeighbor( /*0x4da3dc*/
                          (CellClass *)&v26,
                          v1,
                          v7,
                          (int)WaypointCoords,
                          (int)&v22,
                          v17,
                          1,
                          0,
                          v19);
    }
    if ( *(unsigned int *)v20 == g_FootClass_Pool ) /*0x4da3eb*/
    {
      v8 = (unsigned int *)(*(int (**)(FootClass *, unsigned char *))&this->vfptr->ThreatAvoidanceCoefficient)(this, v29); /*0x4da408*/
      LOWORD(v21) = *v8 / 256; /*0x4da41f*/
      v9 = this->vfptr; /*0x4da430*/
      HIWORD(v21) = v8[1] / 256; /*0x4da435*/
      v23 = (int)v21; /*0x4da43e*/
      v18 = *(unsigned int *)((*(int (**)(FootClass *))(v9 + 132))(this) + 1660); /*0x4da454*/
      v10 = (int *)FootClass::checkTurning((FootClass *)this->owner); /*0x4da461*/
      *(unsigned int *)v20 = *CellClass::FindOpenNeighbor( /*0x4da478*/
                          (CellClass *)&v27,
                          v1,
                          v10,
                          (int)&g_FootClass_Pool,
                          (int)&v23,
                          v18,
                          1,
                          0,
                          v19);
    }
    v11 = this->vfptr; /*0x4da47d*/
    v12 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v20); /*0x4da48b*/
    (*(void (**)(FootClass *, void *, int))(v11 + 1152))(this, v12, 1); /*0x4da493*/
    this->missionStatus = 1; /*0x4da499*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4da4a6*/
  LOWORD(v14) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4da4b4*/
  return v14 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4da4d2*/

}
} // namespace ra2::game

// 0x4DA4E0
namespace ra2::game {
bool FootClass::CheckTargetValidity() const
{
  int result; // eax

  if ( !this->locomotor[0] ) /*0x4da4e8*/
    return TechnoClass::UpdatePowerDrain((char *)this, a2, a3); /*0x4da4e8*/
  result = (*(int (__stdcall **)(int, int))(*(unsigned int *)this->locomotor[0] + 52))(this->locomotor[0], a2); /*0x4da50a*/
  if ( !result ) /*0x4da50f*/
    return TechnoClass::UpdatePowerDrain((char *)this, a2, a3); /*0x4da519*/
  return result; /*0x4da51e*/
}
} // namespace ra2::game

// 0x4DAFC0
namespace ra2::game {
int TechnoClass::ComputeSpeedFactor()
{

  unsigned int *v2; // edi
  signed int v3; // edi
  unsigned int *v4; // ebx
  signed int v5; // ebx
  unsigned int *v6; // ebp
  signed int v7; // ebp
  signed int v8; // eax
  int v10; // [esp+8h] [ebp-8h]

  v10 = 0; /*0x4dafc7*/
  if ( this->q674 ) /*0x4dafcf*/
    v10 = (*(int (**)(unsigned int))(*this->q674 + 56))(this->q674); /*0x4daff3*/
  v2 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x4db005*/
  v3 = TechnoClass::ScanNeighborCells(this) * v2[881]; /*0x4db014*/
  v4 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x4db021*/
  v5 = TechnoClass::IsValidBuildingPlacement(this) * v4[882]; /*0x4db032*/
  v6 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x4db03d*/
  v7 = TechnoClass::CheckAdjacencyFlags(this) * v6[880]; /*0x4db04c*/
  if ( TechnoClass::CheckTargetCell(this) ) /*0x4db057*/
    v8 = *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 3532); /*0x4db06a*/
  else
    v8 = 0; /*0x4db072*/
  if ( v3 <= v5 ) /*0x4db078*/
    v3 = v5; /*0x4db07a*/
  if ( v3 <= v7 ) /*0x4db07e*/
    v3 = v7; /*0x4db080*/
  if ( v3 <= v8 ) /*0x4db086*/
    v3 = v8; /*0x4db088*/
  return v10 + v3 + TechnoClass::GetDrawHeight(this); /*0x4db097*/

}
} // namespace ra2::game

// 0x4DB0A0
namespace ra2::game {
int FootClass::GetAttackSpeed() const
{
  if ( this->locomotor[0] ) /*0x4db0a3*/
    return (*(int (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 60))(this->locomotor[0]); /*0x4db0c4*/
  else
    return 2; /*0x4db0c9*/
}
} // namespace ra2::game

// 0x4DB1A0
namespace ra2::game {
int TechnoClass::ComputeSpeedFactorEx()
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v9; // [esp+8h] [ebp-Ch]
  double TargetSpeedMultiplier; // [esp+Ch] [ebp-8h]

  v2 = (*(int (__thiscall **)(double *))(*&this->hasParachute))(this); /*0x4db1a9*/
  TargetSpeedMultiplier = TechnoClass::GetTargetSpeedMultiplier((unsigned int *)this->owner, v2); /*0x4db1bf*/
  v3 = (*(int (__thiscall **)(double *))(*&this->targetLaserOpacity))(this); /*0x4db1c3*/
  (*((unsigned short *)&(v4))) = Math::RoundToInt((double)v3 * TargetSpeedMultiplier * this->locomotorTarget); /*0x4db1db*/
  v9 = v4; /*0x4db1e4*/
  if ( (uint8_t)TechnoTypeClass::HasVoiceResponse((int *)this, 0) ) /*0x4db1e8*/
  {
    (*((unsigned short *)&(v5))) = Math::RoundToInt((double)v9 * *&dword_8871E0->PlayerJoined); /*0x4db200*/
    v9 = v5; /*0x4db205*/
  }
  (*((unsigned short *)&(v6))) = Math::RoundToInt((double)v9 * this->rockerLinkedUnit); /*0x4db213*/
  v6 = v6; /*0x4db21c*/
  if ( (*(int (__thiscall **)(double *))(*&this->q578))(this) != 1 ) /*0x4db224*/
  result = v6; /*0x4db22f*/
  if ( this->u32_6CC != -1 ) /*0x4db231*/
    return v6 / 2; /*0x4db237*/
  return result; /*0x4db236*/
}
} // namespace ra2::game

// 0x4DB7E0
namespace ra2::game {
int FootClass::Destru_vt30()
{
  if ( !this->locomotor[0] ) /*0x4db7e3*/
    sub_7DC720(-2147467261); /*0x4db7f2*/
  return (*(int (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 116))(this->locomotor[0]); /*0x4db803*/
}
} // namespace ra2::game

// 0x4DB810
namespace ra2::game {
int TechnoClass::SetPositionAnimated(unsigned int *a2)  // g57w10 raw: int(this,unsigned int*)
{
  int *location; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  bool v7; // bl
  int result; // eax

  location = this->location; /*0x4db821*/
  v4 = this->location[0]; /*0x4db823*/
  v5 = this->location[1]; /*0x4db827*/
  v6 = location->u32_8; /*0x4db82a*/
  v7 = *a2 != v4 || a2[1] != v5 || a2[2] != v6; /*0x4db83d*/
  if ( this->isOnMap ) /*0x4db83f*/
  {
    (*((void (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 73))(this, 0); /*0x4db84c*/
    ObjectClass::SetPosition((IUnknown *)this); /*0x4db855*/
    result = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 73))(this, 1); /*0x4db860*/
  }
  else
  {
    result = ObjectClass::SetPosition((IUnknown *)this); /*0x4db86b*/
  }
  if ( v7 ) /*0x4db872*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x4db878*/
    if ( result->u8_5E4 ) /*0x4db87e*/
      return FootClass::UpdatePassengerCoords((FootClass *)this); /*0x4db88a*/
  }
  return result; /*0x4db88f*/
}
} // namespace ra2::game

// 0x4DBAD0
namespace ra2::game {
int FootClass::BeginPowerUpdate()
{
  double v2; // st7
  int16_t v4; // ax
  int v5; // eax
  AbstractClass *movementDestination; // eax
  int v7; // eax
  AbstractClass *lastDestination; // eax
  int v9; // eax
  TeamClass *team; // eax
  int v11; // eax
  FootClass *nextTeamMember; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  double v34; // [esp+10h] [ebp-18h]
  double v35; // [esp+10h] [ebp-18h]
  double v36; // [esp+10h] [ebp-18h]
  int v37; // [esp+24h] [ebp-4h]
  int v38; // [esp+24h] [ebp-4h]

  _ESI = this; /*0x4dbade*/
  House::PowerBeginUpdate((TechnoClass *)this, (int)a2); /*0x4dbae1*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->unknown530, _ESI->unknown534); /*0x4dbaf6*/
  v37 = (*((signed short *)(_ESI->FootClass_field_558 + 2))); /*0x4dbb09*/
  __asm { fild [esp+18h+var_4] } /*0x4dbb10*/
  v38 = (_ESI->FootClass_field_558); /*0x4dbb14*/
  __asm /*0x4dbb18*/
  {
    fild [esp+18h+var_4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v34); /*0x4dbb2d*/
  v4 = Math::RoundToInt(v2); /*0x4dbb35*/
  Checksummer::Add_WORD((Checksummer *)a2, v4); /*0x4dbb3d*/
  __asm /*0x4dbb42*/
  {
    fild dword ptr [esi+570h]
    fild dword ptr [esi+56Ch]
    fild dword ptr [esi+568h]
  }
  __asm
  {
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v35); /*0x4dbb70*/
  (*((unsigned short *)&(v5))) = Math::RoundToInt(v2); /*0x4dbb78*/
  Power::TimerProcess(v5); /*0x4dbb80*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->currentSpeed_percentage[0], _ESI->currentSpeed_percentage[1]); /*0x4dbb95*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->currentSpeed_multiplier[0], _ESI->currentSpeed_multiplier[1]); /*0x4dbbaa*/
  movementDestination = _ESI->movementDestination; /*0x4dbbaf*/
  if ( movementDestination ) /*0x4dbbb7*/
  {
    v7 = (*((int (__stdcall **)(void **))movementDestination->vfptr1 + 4))(&movementDestination->vfptr1); /*0x4dbbc0*/
    Power::TimerProcess(v7); /*0x4dbbc6*/
  }
  lastDestination = _ESI->lastDestination; /*0x4dbbcb*/
  if ( lastDestination ) /*0x4dbbd3*/
  {
    v9 = (*((int (__stdcall **)(void **))lastDestination->vfptr1 + 4))(&lastDestination->vfptr1); /*0x4dbbdc*/
    Power::TimerProcess(v9); /*0x4dbbe2*/
  }
  team = _ESI->team; /*0x4dbbe7*/
  if ( team ) /*0x4dbbef*/
  {
    v11 = (*((int (__stdcall **)(void **))team->vfptr1 + 4))(&team->vfptr1); /*0x4dbbf8*/
    Power::TimerProcess(v11); /*0x4dbbfe*/
  }
  nextTeamMember = _ESI->nextTeamMember; /*0x4dbc03*/
  if ( nextTeamMember ) /*0x4dbc0b*/
  {
    v13 = (*((int (__stdcall **)(void **))nextTeamMember->vfptr1 + 4))(&nextTeamMember->vfptr1); /*0x4dbc14*/
    Power::TimerProcess(v13); /*0x4dbc1a*/
  }
  v14 = _ESI->pathDelayTimer[0]; /*0x4dbc1f*/
  v15 = _ESI->pathDelayTimer[2]; /*0x4dbc25*/
  if ( v14 != -1 ) /*0x4dbc2e*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v14 >= v15 ) /*0x4dbc3a*/
      v15 = 0; /*0x4dbc40*/
    else
      v15 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v14; /*0x4dbc3c*/
  }
  Power::TimerProcess(v15); /*0x4dbc45*/
  Power::TimerProcess(_ESI->FootClass_field_int_64C); /*0x4dbc53*/
  v16 = _ESI->FootClass_field_timer_650[0]; /*0x4dbc58*/
  v17 = _ESI->FootClass_field_timer_650[2]; /*0x4dbc5e*/
  if ( v16 != -1 ) /*0x4dbc67*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v16 >= v17 ) /*0x4dbc73*/
      v17 = 0; /*0x4dbc79*/
    else
      v17 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v16; /*0x4dbc75*/
  }
  Power::TimerProcess(v17); /*0x4dbc7e*/
  __asm /*0x4dbc83*/
  {
    fild dword ptr [esi+680h]
    fild dword ptr [esi+67Ch]
    fild dword ptr [esi+678h]
  }
  __asm
  {
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v36); /*0x4dbcb1*/
  (*((unsigned short *)&(v18))) = Math::RoundToInt(v2); /*0x4dbcb9*/
  v19 = Power::TimerProcess(v18); /*0x4dbcc1*/
  (*((unsigned char *)&(v19))) = _ESI->tubeIndex; /*0x4dbcc6*/
  Power::FinalizeDrain((Power *)a2, v19); /*0x4dbccf*/
  (*((unsigned char *)&(v20))) = _ESI->unknownBool685; /*0x4dbcd4*/
  Power::FinalizeDrain((Power *)a2, v20); /*0x4dbcdd*/
  (*((unsigned char *)&(v21))) = _ESI->unknownBool688; /*0x4dbce2*/
  v22 = Power::FlagProcess((Power *)a2, v21); /*0x4dbceb*/
  (*((unsigned char *)&(v22))) = _ESI->isTeamLeader; /*0x4dbcf0*/
  Power::FlagProcess((Power *)a2, v22); /*0x4dbcf9*/
  (*((unsigned char *)&(v23))) = _ESI->shouldScanForTarget; /*0x4dbcfe*/
  Power::FlagProcess((Power *)a2, v23); /*0x4dbd07*/
  (*((unsigned char *)&(v24))) = _ESI->FootClass_field_bool_68B; /*0x4dbd0c*/
  v25 = Power::FlagProcess((Power *)a2, v24); /*0x4dbd15*/
  (*((unsigned char *)&(v25))) = _ESI->FootClass_field_bool_68C; /*0x4dbd1a*/
  Power::FlagProcess((Power *)a2, v25); /*0x4dbd23*/
  (*((unsigned char *)&(v26))) = _ESI->unknownBool68D; /*0x4dbd28*/
  Power::FlagProcess((Power *)a2, v26); /*0x4dbd31*/
  (*((unsigned char *)&(v27))) = _ESI->FootClass_field_bool_6AF; /*0x4dbd36*/
  v28 = Power::FlagProcess((Power *)a2, v27); /*0x4dbd3f*/
  (*((unsigned char *)&(v28))) = _ESI->FootClass_field_bool_6B0; /*0x4dbd44*/
  Power::FlagProcess((Power *)a2, v28); /*0x4dbd4d*/
  (*((unsigned char *)&(v29))) = _ESI->FootClass_field_bool_6B1; /*0x4dbd52*/
  Power::FlagProcess((Power *)a2, v29); /*0x4dbd5b*/
  (*((unsigned char *)&(v30))) = _ESI->FootClass_field_bool_6B2; /*0x4dbd60*/
  v31 = Power::FlagProcess((Power *)a2, v30); /*0x4dbd69*/
  (*((unsigned char *)&(v31))) = _ESI->FootClass_field_bool_6B3; /*0x4dbd6e*/
  Power::FlagProcess((Power *)a2, v31); /*0x4dbd77*/
  (*((unsigned char *)&(v32))) = _ESI->FootClass_field_bool_6B4; /*0x4dbd7c*/
  return Power::FinalizeDrain((Power *)a2, v32); /*0x4dbd8a*/
}
} // namespace ra2::game

// 0x4DBDA0
namespace ra2::game {
bool FootClass::CanBeHunted() const
{
  if ( !(uint8_t)BuildingClass::CheckCellPassability((TechnoClass *)this) ) /*0x4dbda3*/
    return 0; /*0x4dbda3*/
  if ( !*(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 3219) ) /*0x4dbdb6*/
    return 1; /*0x4dbdb6*/
  if ( !this->locomotor[0] ) /*0x4dbdc0*/
    sub_7DC720(-2147467261); /*0x4dbdcf*/
  return !this->COMStub_Return0_32(this->locomotor[0]); /*0x4dbdeb*/
}
} // namespace ra2::game

// 0x4DBDF0
namespace ra2::game {
int TechnoClass::GetDeployCoords()
{

  char v4; // al
  unsigned __int16 *v5; // eax
  int v6; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  unsigned int *v12; // edx
  __int16 v13; // [esp+Ah] [ebp-Eh]
  unsigned char v14[12]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = this->tubeIndex[0]; /*0x4dbdf7*/
  if ( v4 < 0 ) /*0x4dbdff*/
  {
    if ( !this->locomotor ) /*0x4dbe46*/
      sub_7DC720(-2147467261); /*0x4dbe55*/
    v8 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->locomotor + 24))(this->locomotor, v14); /*0x4dbe68*/
    v9 = *v8; /*0x4dbe6b*/
    v10 = v8[1]; /*0x4dbe6d*/
    v11 = v8[2]; /*0x4dbe70*/
    if ( *v8 == dword_8B3DA8 && v10 == dword_8B3DAC && v11 == dword_8B3DB0 ) /*0x4dbe8a*/
    {
      v12 = (unsigned int *)(*(int (**)(FootClass *, unsigned char *))&this->vfptr->u32_48)(this, v14); /*0x4dbeae*/
      *a2 = *v12; /*0x4dbeb9*/
      a2[1] = v12[1]; /*0x4dbebe*/
      a2[2] = v12[2]; /*0x4dbec5*/
      return a2; /*0x4dbeb0*/
    }
    else
    {
      *a2 = v9; /*0x4dbe92*/
      a2[1] = v10; /*0x4dbe94*/
      a2[2] = v11; /*0x4dbe97*/
      return a2; /*0x4dbe8c*/
    }
  }
  else
  {
    v5 = *(unsigned __int16 **)(*((unsigned int *)dword_8B413C + v4) + 40); /*0x4dbe0d*/
    v6 = (__int16)v5; /*0x4dbe10*/
    v13 = HIWORD(v5); /*0x4dbe13*/
    *a2 = (v6 << 8) + 128; /*0x4dbe2e*/
    a2[1] = (v13 << 8) + 128; /*0x4dbe38*/
    a2[2] = 0; /*0x4dbe3b*/
    return a2; /*0x4dbe17*/
  }

}
} // namespace ra2::game

// 0x4DBFD0
namespace ra2::game {
int FootClass::vt_entry_4E0()
{
  if ( !(*((int (__thiscall **)(FootClass *, unsigned int))this->vfptr + 254))(this, 0) ) /*0x4dbfd7*/
    return 1; /*0x4dbfe1*/
  if ( *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 1588) == -1 ) /*0x4dbff6*/
    return 1; /*0x4dbff8*/
  if ( *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 1028) ) /*0x4dc006*/
    return 1; /*0x4dc010*/
  return *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 1656) <= 13; /*0x4dbfe3*/
}
} // namespace ra2::game

// 0x4DC030
namespace ra2::game {
int FootClass::vt_entry_4F4()
{
  int result; // eax

  result = (*((int (__thiscall **)(FootClass *))this->vfptr + 97))(this); /*0x4dc035*/
  if ( result == 15 ) /*0x4dc03e*/
  {
    (*((void (__thiscall **)(FootClass *, unsigned int))this->vfptr + 242))(this, 0); /*0x4dc046*/
    return (*((int (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 288))(this, 0, 1); /*0x4dc054*/
  }
  return result; /*0x4dc05a*/
}
} // namespace ra2::game

// 0x4DC060
namespace ra2::game {
int FootClass::CheckTargetCell() const
{
  AbstractClass *target; // edi
  int result; // eax
  int *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int *TargetCoords; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // eax
  int *v15; // eax
  char *v16; // edi
  int v17; // edx
  int v18; // [esp-Ch] [ebp-40h]
  int v19; // [esp-Ch] [ebp-40h]
  int v20; // [esp+10h] [ebp-24h] BYREF
  int v21; // [esp+14h] [ebp-20h]
  char *v22; // [esp+18h] [ebp-1Ch]
  int v23; // [esp+1Ch] [ebp-18h] BYREF
  int v24; // [esp+24h] [ebp-10h]
  int v25[3]; // [esp+28h] [ebp-Ch] BYREF

  target = this->target; /*0x4dc069*/
  if ( target || (result = (int)this->movementDestination) != 0 ) /*0x4dc07b*/
  {
    if ( (unsigned char)a2 ) /*0x4dc087*/
      goto LABEL_8; /*0x4dc087*/
    result = g_BuildingLoadQueue_Array.VoxelCaches[1]; /*0x4dc08f*/
    if ( g_BuildingLoadQueue_Array.LineTrailColorDecrement != -1 ) /*0x4dc097*/
    {
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - g_BuildingLoadQueue_Array.LineTrailColorDecrement >= g_BuildingLoadQueue_Array.VoxelCaches[1] ) /*0x4dc0a3*/
        return result; /*0x4dc0a3*/
      result = g_BuildingLoadQueue_Array.VoxelCaches[1] /*0x4dc0a9*/
             - (*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]
              - g_BuildingLoadQueue_Array.LineTrailColorDecrement);
    }
    if ( result > 0 ) /*0x4dc0ad*/
    {
  LABEL_8:
      if ( target ) /*0x4dc0b5*/
      {
        v6 = (int *)(*((int (__thiscall **)(FootClass *, int *, unsigned int))this->vfptr + 192))(this, &v23, 0); /*0x4dc0c6*/
        v7 = *v6; /*0x4dc0cc*/
        v8 = v6[1]; /*0x4dc0d0*/
        v24 = v6[2]; /*0x4dc0db*/
        TargetCoords = TechnoClass::GetTargetCoords((TechnoClass *)this, v25); /*0x4dc0df*/
        v20 = *TargetCoords; /*0x4dc0e8*/
        v21 = TargetCoords[1]; /*0x4dc0ef*/
        v22 = (char *)TargetCoords[2]; /*0x4dc0f6*/
        v10 = *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372); /*0x4dc106*/
        if ( *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x4dc10c*/
          (*((unsigned short *)&(v11))) = *(uint8_t *)(v10 + 8); /*0x4dc113*/
        else
          v11 = *(uint16_t *)(v10 + 16); /*0x4dc119*/
        (*((unsigned char *)&(a2))) = (uint8_t)((uint16_t)v11 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4dc13c*/
        (((unsigned char *)&(a2))[1]) = (uint8_t)((uint16_t)v11 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4dc154*/
        (*(((unsigned char *)&(v18)) + (sizeof(v18) - 1))) = (*(((unsigned char *)&(g_BitMask_Red)) + (sizeof(g_BitMask_Red) - 1))); /*0x4dc168*/
        (*((unsigned short *)&(v18))) = a2; /*0x4dc170*/
        (((unsigned char *)&(v18))[2]) = (uint8_t)((uint16_t)v11 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4dc173*/
        (*((unsigned char *)&(result))) = DrawTacticalMapLine(v7, v8, v24, *TargetCoords, TargetCoords[1], TargetCoords[2], v18, 0, 0); /*0x4dc19b*/
      }
      else
      {
        v12 = this->location[0]; /*0x4dc1b0*/
        v13 = this->location[1]; /*0x4dc1b6*/
        v14 = *&this->q598; /*0x4dc1bc*/
        v24 = this->location[2]; /*0x4dc1c4*/
        if ( v14 ) /*0x4dc1c8*/
          v15 = (int *)(*(int (__stdcall **)(int *))(**(unsigned int **)(*(unsigned int *)this->__pad_58C + 4 * v14 - 4) + 72))(v25); /*0x4dc1ec*/
        else
          v15 = (int *)(*((int (__stdcall **)(int *))this->movementDestination->vfptr + 18))(v25); /*0x4dc1d7*/
        v20 = *v15; /*0x4dc1f3*/
        v21 = v15[1]; /*0x4dc1fa*/
        v22 = (char *)v15[2]; /*0x4dc201*/
        (*((unsigned short *)&(a2))) = v20 / 256; /*0x4dc211*/
        (*(((unsigned short *)&(a2)) + 1)) = v21 / 256; /*0x4dc229*/
        if ( (uint8_t)LayerClass::CoordinatesLegal((LayerClass *)&DataGlobal_87F7E8, (int16_t *)&a2) /*0x4dc25c*/
          && (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v20)->flags[0] & 0x100) != 0 )
        {
          v16 = (char *)FootClass_Array.attachedTag + Cell::GetGroundHeight(&v20); /*0x4dc274*/
          v22 = v16; /*0x4dc276*/
        }
        else
        {
          v16 = v22; /*0x4dc27c*/
        }
        if ( *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x4dc289*/
          v17 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 3); /*0x4dc293*/
        else
          (*((unsigned short *)&(v17))) = *(unsigned short *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 6); /*0x4dc2a0*/
        (*((unsigned char *)&(a2))) = (uint8_t)((uint16_t)v17 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4dc2c1*/
        (((unsigned char *)&(a2))[1]) = (uint8_t)((uint16_t)v17 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4dc2e2*/
        (*(((unsigned char *)&(v19)) + (sizeof(v19) - 1))) = (*(((unsigned char *)&(a3)) + (sizeof(a3) - 1))); /*0x4dc2ed*/
        (*((unsigned short *)&(v19))) = a2; /*0x4dc2f8*/
        (((unsigned char *)&(v19))[2]) = (uint8_t)((uint16_t)v17 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4dc2ff*/
        (*((unsigned char *)&(result))) = DrawTacticalMapLine(v12, v13, v24, v20, v21, (int)v16, v19, a3, 0); /*0x4dc323*/
      }
    }
  }
  return result; /*0x4dc1a0*/
}
} // namespace ra2::game

// 0x4DC790
namespace ra2::game {
int FootClass::Destru_vt311()
{
  bool result; // al
  TeamClass *team; // ecx
  AbstractClass *movementDestination; // ecx
  unsigned int *v5; // eax
  unsigned char v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !this->isInPlayfield ) /*0x4dc796*/
    return 0; /*0x4dc7a0*/
  team = this->team; /*0x4dc7a7*/
  if ( !team || (result = TechnoClass::IsWaypointHidden((TechnoClass *)team)) ) /*0x4dc7b1*/
  {
    result = 1; /*0x4dc7f6*/
    if ( *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 3220) ) /*0x4dc7c9*/
    {
      movementDestination = this->movementDestination; /*0x4dc7d3*/
      if ( movementDestination ) /*0x4dc7db*/
      {
        v5 = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, unsigned char *))movementDestination->vfptr + 18))( /*0x4dc7e4*/
                         movementDestination,
                         v6);
        if ( (uint8_t)IsCoordVisibleMap((ObjectClass *)&DataGlobal_87F7E8, v5) ) /*0x4dc7ed*/
          return 0; /*0x4dc7d1*/
      }
    }
  }
  return result; /*0x4dc7a2*/
}
} // namespace ra2::game

// 0x4DC810
namespace ra2::game {
void FootClass::SetBuildingType()
{

  int result; // eax
  unsigned int *Element; // eax
  unsigned __int16 *v6; // [esp+10h] [ebp+8h]

  result = a2; /*0x4dc810*/
  if ( a2 == -1 ) /*0x4dc81d*/
  {
    this->planningPathIdx = -1; /*0x4dc888*/
    this->waypointIndex[0] = 0; /*0x4dc892*/
    *(unsigned int *)this->unknownShort528 = 0; /*0x4dc898*/
  }
  else
  {
    this->planningPathIdx = a2; /*0x4dc823*/
    this->waypointIndex[0] = a3; /*0x4dc829*/
    Element = (unsigned int *)Array::GetElement( /*0x4dc840*/
                          *(Array **)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 4 * a2 + 528),
                          a3);
    LOWORD(v6) = *Element / 256; /*0x4dc855*/
    HIWORD(v6) = Element->Array_field_0x4 / 256; /*0x4dc869*/
    result = (int)v6; /*0x4dc86e*/
    *(unsigned int *)this->unknownShort528 = v6; /*0x4dc872*/
  }
  *(unsigned int *)this->unknownShort524 = 0; /*0x4dc8ac*/
  return result; /*0x4dc8b2*/

}
} // namespace ra2::game

// 0x4DCFE0
namespace ra2::game {
int FootClass::MoveToTiberium()
{
  unsigned int *v4; // eax
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v7; // eax
  unsigned char v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !this->movementDestination ) /*0x4dcfe7*/
  {
    a3 = *(unsigned int *)(*((int (__thiscall **)(FootClass *, int *, int, int))this->vfptr + 206))(this, &a2, a2, a3); /*0x4dd017*/
    if ( a3 != g_FootClass_Pool ) /*0x4dd01b*/
    {
      v4 = (unsigned int *)(*((int (__thiscall **)(FootClass *, unsigned char *))this->vfptr + 18))(this, v8); /*0x4dd034*/
      if ( a3 == (((unsigned int)(unsigned short)(*v4 / 256)) | ((unsigned int)(unsigned short)(v4[1] / 256) << 16)) ) /*0x4dd05d*/
        return 1; /*0x4dd06d*/
      vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->vfptr; /*0x4dd070*/
      v7 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (int16_t *)&a3); /*0x4dd07e*/
      vtable0[288](this, v7, 1); /*0x4dd086*/
    }
  }
  return 0; /*0x4dd066*/
}
} // namespace ra2::game

// 0x4DD0A0
namespace ra2::game {
int FootClass::FindMoveTarget()
{

  unsigned int *v5; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  unsigned __int16 *v10; // eax
  Building *v11; // eax
  int NthOfType; // eax
  Building *v13; // eax
  int v14; // eax
  Building *v15; // eax
  int v16; // eax
  Building *v17; // eax
  int v18; // eax
  __int16 v19[2]; // [esp+4h] [ebp-38h] BYREF
  int v20; // [esp+8h] [ebp-34h]
  unsigned __int16 *v21; // [esp+Ch] [ebp-30h]
  unsigned __int16 *v22; // [esp+10h] [ebp-2Ch]
  int i; // [esp+14h] [ebp-28h]
  unsigned __int16 *v24; // [esp+18h] [ebp-24h]
  unsigned __int16 *v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  unsigned __int16 *v27; // [esp+24h] [ebp-18h]
  __int16 v28[3]; // [esp+28h] [ebp-14h] BYREF
  int v29; // [esp+2Eh] [ebp-Eh] BYREF
  unsigned __int16 *v30; // [esp+32h] [ebp-Ah]

  v20 = g_FootClass_Pool; /*0x4dd0ab*/
  v5 = (unsigned int *)(*(int (**)(FootClass *, char *))&this->vfptr->ThreatAvoidanceCoefficient)(this, (char *)&v29 + 2); /*0x4dd0b6*/
  v19[0] = *v5 / 256; /*0x4dd0c9*/
  v19[1] = v5[1] / 256; /*0x4dd0e1*/
  *(unsigned int *)v28 = *(unsigned int *)v19; /*0x4dd0ea*/
  if ( *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v28) + 59) == 5 ) /*0x4dd100*/
  {
    *a2 = *(unsigned int *)v28; /*0x4dd10b*/
    return a2; /*0x4dd102*/
  }
  else
  {
    v7 = 1; /*0x4dd119*/
    v8 = -1; /*0x4dd11e*/
    if ( a3 > 1 ) /*0x4dd123*/
    {
      v9 = -1; /*0x4dd12a*/
      v26 = -1; /*0x4dd12d*/
      do /*0x4dd131*/
      {
        if ( v9 <= v7 ) /*0x4dd133*/
        {
          v10 = (unsigned __int16 *)-v7; /*0x4dd13b*/
          for ( i = -v7; ; LOWORD(v10) = i ) /*0x4dd13d*/
          {
            LOWORD(v30) = (unsigned short)v10; /*0x4dd14f*/
            LOWORD(v21) = v9 + v28[0]; /*0x4dd15d*/
            HIWORD(v21) = (unsigned short)v10 + v28[1]; /*0x4dd162*/
            *(unsigned int *)v19 = v21; /*0x4dd16f*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd176*/
            {
              v11 = (Building *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v19); /*0x4dd189*/
              NthOfType = Building::GetNthOfType(v11); /*0x4dd190*/
              if ( NthOfType > v8 ) /*0x4dd197*/
              {
                v8 = NthOfType; /*0x4dd199*/
                v20 = *(unsigned int *)v19; /*0x4dd19f*/
              }
            }
            LOWORD(v22) = v9 + v28[0]; /*0x4dd1b1*/
            HIWORD(v22) = v28[1] + v7; /*0x4dd1b6*/
            *(unsigned int *)v19 = v22; /*0x4dd1c6*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd1ca*/
            {
              v13 = (Building *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v19); /*0x4dd1dd*/
              v14 = Building::GetNthOfType(v13); /*0x4dd1e4*/
              if ( v14 > v8 ) /*0x4dd1eb*/
              {
                v8 = v14; /*0x4dd1f1*/
                v20 = *(unsigned int *)v19; /*0x4dd1f3*/
              }
            }
            LOWORD(v27) = i; /*0x4dd200*/
            LOWORD(v24) = v28[0] + i; /*0x4dd20f*/
            HIWORD(v24) = v9 + v28[1]; /*0x4dd21b*/
            *(unsigned int *)v19 = v24; /*0x4dd227*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd22b*/
            {
              v15 = (Building *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v19); /*0x4dd23e*/
              v16 = Building::GetNthOfType(v15); /*0x4dd245*/
              if ( v16 > v8 ) /*0x4dd24c*/
              {
                v8 = v16; /*0x4dd252*/
                v20 = *(unsigned int *)v19; /*0x4dd254*/
              }
            }
            LOWORD(v25) = v28[0] + v7; /*0x4dd266*/
            HIWORD(v25) = v9 + v28[1]; /*0x4dd26b*/
            *(unsigned int *)v19 = v25; /*0x4dd278*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd27f*/
            {
              v17 = (Building *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v19); /*0x4dd292*/
              v18 = Building::GetNthOfType(v17); /*0x4dd299*/
              if ( v18 > v8 ) /*0x4dd2a0*/
              {
                v8 = v18; /*0x4dd2a6*/
                v20 = *(unsigned int *)v19; /*0x4dd2a8*/
              }
            }
            if ( ++v9 > v7 ) /*0x4dd2af*/
              break; /*0x4dd2af*/
          }
          if ( v8 != -1 ) /*0x4dd2b8*/
            break; /*0x4dd2b8*/
          v9 = v26; /*0x4dd2ba*/
        }
        ++v7; /*0x4dd2c2*/
        v26 = --v9; /*0x4dd2c6*/
      }
      while ( v7 < a3 ); /*0x4dd131*/
    }
    *a2 = v20; /*0x4dd2d1*/
    return a2; /*0x4dd2d1*/
  }

}
} // namespace ra2::game

// 0x4DDB90
namespace ra2::game {
int FootClass::MoveToWeed()
{
  unsigned int *v3; // eax
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v6; // eax
  int v7; // [esp+8h] [ebp-10h] BYREF
  unsigned char v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !this->movementDestination ) /*0x4ddb97*/
  {
    a2 = *BuildingClass::Validate((BuildingClass *)this, &v7, a2); /*0x4ddbbf*/
    if ( a2 != g_FootClass_Pool ) /*0x4ddbc3*/
    {
      v3 = (unsigned int *)(*((int (__thiscall **)(FootClass *, unsigned char *))this->vfptr + 18))(this, v8); /*0x4ddbdc*/
      if ( a2 == (((unsigned int)(unsigned short)(*v3 / 256)) | ((unsigned int)(unsigned short)(v3[1] / 256) << 16)) ) /*0x4ddc05*/
        return 1; /*0x4ddc15*/
      vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->vfptr; /*0x4ddc18*/
      v6 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (int16_t *)&a2); /*0x4ddc26*/
      vtable0[288](this, v6, 1); /*0x4ddc2e*/
    }
  }
  return 0; /*0x4ddc0e*/
}
} // namespace ra2::game

// 0x4DDC40
namespace ra2::game {
bool FootClass::CheckHeightDiff() const
{
  if ( this->tubeIndex < 0 ) /*0x4ddc48*/
    return ObjectClass::CheckGroundHeightDiff((IUnknown *)this); /*0x4ddc54*/
  else
    return 0; /*0x4ddc4a*/
}
} // namespace ra2::game

// 0x4DDC60
namespace ra2::game {
int FootClass::ValidateTargetCell()
{
  int v2; // edi
  bool result; // al
  unsigned int *v5; // eax
  Object *v6; // eax
  FootClass *ClosestObjectCell; // eax
  FootClass *v8; // esi
  bool *v9; // eax
  int v10; // ecx
  FootClass **i; // edx
  FootClass *v12; // eax
  unsigned int v13[2]; // [esp+Ch] [ebp-14h] BYREF
  unsigned char v14[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2; /*0x4ddc66*/
  if ( !a2 ) /*0x4ddc6e*/
    return 0; /*0x4ddc78*/
  v5 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)a2 + 72))(a2, v14); /*0x4ddc84*/
  (*((unsigned short *)&(v13[0]))) = *v5 / 256; /*0x4ddc99*/
  (*(((unsigned short *)&(v13[0])) + 1)) = v5[1] / 256; /*0x4ddcb2*/
  a2 = v13[0]; /*0x4ddcbf*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, (int16_t *)&a2, 1); /*0x4ddcc4*/
  if ( result ) /*0x4ddccb*/
  {
    v13[0] = 0; /*0x4ddce9*/
    v13[1] = 0; /*0x4ddcf1*/
    v6 = (Object *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (int16_t *)&a2); /*0x4ddcf9*/
    ClosestObjectCell = (FootClass *)Object::FindClosestObjectCell(v6, v13, 0, 0); /*0x4ddd00*/
    v8 = ClosestObjectCell; /*0x4ddd05*/
    if ( ClosestObjectCell ) /*0x4ddd09*/
      return this == ClosestObjectCell /*0x4ddd51*/
          || (FootClass *)Array::Get((Array *)this, 0) == ClosestObjectCell
          || *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 3412)
          && (v8->spawnManager || *(unsigned char *)((*((int (__thiscall **)(FootClass *))v8->vfptr + 33))(v8) + 3412));
    v9 = (bool *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (int16_t *)&a2); /*0x4ddd7e*/
    if ( (uint8_t)Cell::IsBuildable(v9, 1, 0, 0, -1, 0, -1, 1) ) /*0x4ddd85*/
    {
      v10 = 0; /*0x4ddd9f*/
      if ( dword_A8E3A0 <= 0 ) /*0x4ddda3*/
        return 1; /*0x4dddd5*/
      for ( i = (FootClass **)dword_A8E394; ; ++i ) /*0x4ddda5*/
      {
        v12 = *i; /*0x4dddab*/
        if ( (*i)->isAliveFlag ) /*0x4dddad*/
        {
          if ( !v12->inLimbo && v12->movementDestination == (AbstractClass *)v2 && v12 != this ) /*0x4dddc9*/
            break; /*0x4dddc9*/
        }
        if ( ++v10 >= dword_A8E3A0 ) /*0x4dddd1*/
          return 1; /*0x4dddd1*/
      }
    }
    return 0; /*0x4ddd90*/
  }
  return result; /*0x4ddc70*/
}
} // namespace ra2::game

// 0x4DDDE0
namespace ra2::game {
int FootClass::HandleCursorWithCheck()
{
  int v5; // ebx
  int v6; // eax
  unsigned int v8[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v5 = TechnoClass::HandleCursor((TechnoClass *)this, a2, a3, a4); /*0x4dde01*/
  v6 = (a2[1] << 8) + 128; /*0x4dde17*/
  v8[0] = (*a2 << 8) + 128; /*0x4dde22*/
  v8[1] = v6; /*0x4dde26*/
  GroundHeight = 0; /*0x4dde2a*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x4dde41*/
  if ( (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v8)->flags[0] & 0x100) != 0 ) /*0x4dde53*/
    GroundHeight += (int)FootClass_Array.attachedTag; /*0x4dde60*/
  if ( (uint8_t)Cell::IsPassable(v8) && v5 ) /*0x4dde79*/
  {
    if ( !*(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 3213) /*0x4dde97*/
      || !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, a2, 1) )
    {
      return 2; /*0x4ddebe*/
    }
    if ( v5 != 51 ) /*0x4ddea3*/
      return 1; /*0x4ddeb0*/
  }
  return v5; /*0x4ddea5*/
}
} // namespace ra2::game

// 0x4DDF90
namespace ra2::game {
void FootClass::ProcessMissionState()
{

  double v1; // st7
  int missionStatus; // eax
  CellClass *v4; // eax
  int focus; // ecx
  int vfptr; // edi
  int v7; // eax
  int v8; // ebx
  unsigned int *v9; // edi
  unsigned int *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned __int16 *v14; // eax
  unsigned __int16 *v15; // edx
  int v16; // kr00_4
  int v17; // eax
  HouseClass *owner; // ecx
  int v20; // edi
  void *v21; // eax
  char *MissionControl; // eax
  int v23; // eax
  __int16 v24[2]; // [esp+2Ch] [ebp-44h] BYREF
  int v25; // [esp+30h] [ebp-40h] BYREF
  double v26; // [esp+34h] [ebp-3Ch]
  int v27; // [esp+3Ch] [ebp-34h]
  unsigned int v28[3]; // [esp+40h] [ebp-30h] BYREF
  unsigned char v29[12]; // [esp+4Ch] [ebp-24h] BYREF
  unsigned char v30[12]; // [esp+58h] [ebp-18h] BYREF
  unsigned char v31[12]; // [esp+64h] [ebp-Ch] BYREF

  missionStatus = this->missionStatus; /*0x4ddf97*/
  if ( missionStatus ) /*0x4ddfa0*/
  {
    if ( missionStatus == 1 && !this->movementDestination ) /*0x4ddfa9*/
    {
      TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4ddfb9*/
      (*(void (**)(FootClass *, int, unsigned int))&this->vfptr->NoSpawnAlt_2)(this, 11, 0); /*0x4ddfc6*/
      (*(void (**)(FootClass *))&this->vfptr->MaxDimension)(this); /*0x4ddfd0*/
    }
  }
  else if ( this->target ) /*0x4ddfdb*/
  {
    (*(void (**)(FootClass *, unsigned int))&this->vfptr->AirRangeBonus)(this, 0); /*0x4ddfeb*/
  }
  else
  {
    if ( !this->focus ) /*0x4ddff6*/
    {
      v28[0] = this->location[0]; /*0x4de00c*/
      v28[1] = this->location[1]; /*0x4de018*/
      v28[2] = this->location[2]; /*0x4de01f*/
      v4 = Coord::To_Cell((Coord *)&dword_87F7E8, v28); /*0x4de028*/
      TechnoClass::SetFocus((TechnoClass *)this, (int)v4); /*0x4de030*/
    }
    focus = this->focus; /*0x4de035*/
    vfptr = this->vfptr; /*0x4de03b*/
    this->unknownBool688[0] = 0; /*0x4de03e*/
    v7 = (*(int (**)(int, unsigned char *, unsigned int))(*(unsigned int *)focus + 72))(focus, v29, 0); /*0x4de04e*/
    v8 = (*(int (**)(FootClass *, unsigned int, int))(vfptr + 964))(this, 0, v7); /*0x4de05c*/
    if ( v8 ) /*0x4de060*/
    {
      v9 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->focus + 72))(this->focus, v30); /*0x4de07a*/
      v10 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v8 + 72))(v8, v31); /*0x4de081*/
      v11 = v10[1]; /*0x4de08a*/
      LODWORD(v26) = *v10 - *v9; /*0x4de08d*/
      v12 = v10[2]; /*0x4de096*/
      v13 = v9[2]; /*0x4de099*/
      HIDWORD(v26) = v11 - v9[1]; /*0x4de09c*/
      v27 = v12 - v13; /*0x4de0a9*/
      Math::Sqrt( /*0x4de0ce*/
        (double)SLODWORD(v26) * (double)SLODWORD(v26)
      + (double)(v12 - v13) * (double)(v12 - v13)
      + (double)SHIDWORD(v26) * (double)SHIDWORD(v26));
      v16 = Math::RoundToInt(v1); /*0x4de0d6*/
      LOWORD(v15) = HIWORD(v16); /*0x4de0d6*/
      LOWORD(v14) = v16; /*0x4de0d6*/
      *(unsigned int *)v24 = v14; /*0x4de0db*/
      v17 = this->vfptr; /*0x4de0df*/
      v26 = (double)*(int *)v24; /*0x4de0e9*/
      *(unsigned int *)v24 = (*(int (__fastcall **)(FootClass *, unsigned __int16 *, int))(v17 + 796))(this, v15, 1); /*0x4de0f3*/
      if ( (double)*(int *)v24 * 1.5 > v26 ) /*0x4de10a*/
        (*(void (**)(FootClass *, int))&this->vfptr->DeployTime)(this, v8); /*0x4de111*/
    }
    if ( this->target ) /*0x4de117*/
      return 1; /*0x4de12c*/
    owner = (HouseClass *)this->owner; /*0x4de12d*/
    this->missionStatus = 1; /*0x4de139*/
    *(unsigned int *)v24 = *BuildingPlacement::FindPosition(owner, &v25, this); /*0x4de151*/
    if ( *(unsigned int *)v24 == g_FootClass_Pool ) /*0x4de155*/
    {
      (*(void (**)(FootClass *, unsigned int, int))&this->vfptr->VoiceSecondaryWeaponAttack)(this, 0, 1); /*0x4de18b*/
    }
    else
    {
      v20 = this->vfptr; /*0x4de165*/
      v21 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24); /*0x4de173*/
      (*(void (**)(FootClass *, void *, int))(v20 + 1152))(this, v21, 1); /*0x4de17b*/
    }
    TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4de195*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4de19c*/
  LOWORD(v23) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4de1aa*/
  return v23 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4de122*/

}
} // namespace ra2::game

// 0x4DE5D0
namespace ra2::game {
int FootClass::PreDestroy()
{
  CaptureManagerClass *captureManager; // ecx
  int *team; // ecx

  captureManager = this->captureManager; /*0x4de5d3*/
  if ( captureManager ) /*0x4de5db*/
    CaptureManager::FreeAll((CaptureManager *)captureManager); /*0x4de5dd*/
  if ( this->locomotorTarget ) /*0x4de5e2*/
    TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x4de5f0*/
  team = (int *)this->team; /*0x4de5f5*/
  if ( team ) /*0x4de5fd*/
    TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4de604*/
  return ObjectClass::Destroy((ObjectClass *)this); /*0x4de610*/
}
} // namespace ra2::game

// 0x4DE630
namespace ra2::game {
int FootClass::OnCompleteAction()
{
  int result; // eax

  BuildingClass::OnCellPlacementComplete((TechnoClass *)this); /*0x4de639*/
  result = (*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this); /*0x4de642*/
  if ( result->u8_805 ) /*0x4de648*/
  {
    if ( this->passengers[0] == 1 ) /*0x4de659*/
      return (*((int (__thiscall **)(FootClass *, int))this->vfptr + 309))(this, a2); /*0x4de660*/
  }
  return result; /*0x4de666*/
}
} // namespace ra2::game

// 0x4DE670
namespace ra2::game {
int FootClass::RemovePassenger()
{
  int *passengers; // edi
  int (__thiscall **vtable0)(FootClass *); // edx
  int v5; // eax
  int result; // eax
  unsigned int v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  passengers = this->passengers; /*0x4de67d*/
  FootClass::updateMovementAnimation((FootClass *)this->passengers, a2); /*0x4de685*/
  if ( a2 && *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 1384) != -1 ) /*0x4de69f*/
  {
    v7[0] = this->location[0]; /*0x4de6b0*/
    vtable0 = (int (__thiscall **)(FootClass *))this->vfptr; /*0x4de6b4*/
    v7[1] = this->location[1]; /*0x4de6b9*/
    v7[2] = this->location[2]; /*0x4de6c0*/
    v5 = vtable0[33](this); /*0x4de6c6*/
    PlayAudioAt2(*(unsigned int *)(v5 + 1384), v7, 0); /*0x4de6d4*/
  }
  result = (*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this); /*0x4de6de*/
  if ( result->u8_805 ) /*0x4de6e4*/
  {
    if ( !*passengers ) /*0x4de6ee*/
      return (*((int (__thiscall **)(FootClass *, int))this->vfptr + 310))(this, a2); /*0x4de6f8*/
  }
  return result; /*0x4de6fe*/
}
} // namespace ra2::game

// 0x4DE710
namespace ra2::game {
int FootClass::PopAndProcess()
{
  int *passengers; // edi
  int v3; // ebx

  passengers = this->passengers; /*0x4de715*/
  v3 = LinkedList::Pop((LinkedList *)this->passengers); /*0x4de722*/
  if ( *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->vfptr + 33))(this) + 2053) && !*passengers ) /*0x4de738*/
    (*((void (__thiscall **)(FootClass *, int))this->vfptr + 310))(this, v3); /*0x4de742*/
  return v3; /*0x4de748*/
}
} // namespace ra2::game

// 0x4DE770
namespace ra2::game {
bool FootClass::IsTimerActive() const
{
  int v1; // edx
  int v2; // eax

  v1 = this->paralysisTimer[0]; /*0x4de770*/
  v2 = this->paralysisTimer[2]; /*0x4de776*/
  if ( v1 != -1 ) /*0x4de77f*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v1 < v2 ) /*0x4de78b*/
      return v2 != *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v1; /*0x4de798*/
    v2 = 0; /*0x4de799*/
  }
  return v2 != 0; /*0x4de798*/
}
} // namespace ra2::game

// 0x4DE7B0
namespace ra2::game {
bool FootClass::IsTargetInRange() const
{

  int v3; // edi
  unsigned int *v4; // eax
  int v5; // ebp
  int result; // eax
  int v7; // ebx
  FootClass *v8; // edi
  unsigned int *j; // esi
  int v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // esi
  unsigned __int16 *v13; // [esp+Ch] [ebp-28h]
  int i; // [esp+Ch] [ebp-28h]
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h]
  int v17; // [esp+18h] [ebp-1Ch]
  __int16 v18[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  char v21[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = *(unsigned int *)((*(int (**)(FootClass *))&this->vfptr->q084)(this) + 1520); /*0x4de7c0*/
  v16 = v3; /*0x4de7ce*/
  v17 = v3 * v3; /*0x4de7d8*/
  v19 = *(unsigned int *)&this->owner->relatedTagsCount; /*0x4de7e1*/
  if ( a2 == g_FootClass_Pool ) /*0x4de7ec*/
  {
    v4 = (unsigned int *)(*(int (**)(FootClass *, char *))&this->vfptr->ThreatAvoidanceCoefficient)(this, v21); /*0x4de805*/
    LOWORD(v13) = *v4 / 256; /*0x4de818*/
    HIWORD(v13) = v4[1] / 256; /*0x4de82c*/
    a2 = (int)v13; /*0x4de835*/
  }
  v5 = -v3; /*0x4de83b*/
  result = -v3; /*0x4de83d*/
  v20 = -v3; /*0x4de83f*/
  for ( i = -v3; result < v3; i = result ) /*0x4de849*/
  {
    if ( v5 < v3 ) /*0x4de852*/
    {
      v7 = result * result; /*0x4de85e*/
      HIWORD(v15) = result + HIWORD(a2); /*0x4de864*/
      do /*0x4de91b*/
      {
        LOWORD(v15) = a2 + v5; /*0x4de870*/
        *(unsigned int *)v18 = v15; /*0x4de87e*/
        if ( v7 + v5 * v5 < v17 ) /*0x4de88a*/
        {
          v8 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v18); /*0x4de89f*/
          FootClass::checkTerrainSpeed(v8, v19); /*0x4de8a8*/
          for ( j = (unsigned int *)v8->radioLinks[1]; j; j = (unsigned int *)j[12] ) /*0x4de8b5*/
          {
            v10 = (*(int (**)(unsigned int *))(*j + 44))(j); /*0x4de8bb*/
            if ( v10 == 1 || v10 == 15 || v10 == 2 ) /*0x4de8cb*/
              (*(void (**)(unsigned int *))(*j + 1056))(j); /*0x4de8d1*/
          }
          v11 = Cell::IsBridge((Cell *)v8); /*0x4de8e0*/
          v12 = v11; /*0x4de8e5*/
          if ( v11 && v11->u32_21C != *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x4de8f8*/
          {
            if ( v11->vt_slot_104(0, 0) ) /*0x4de902*/
              v12->u32_80 = 1; /*0x4de909*/
          }
          v3 = v16; /*0x4de910*/
          result = i; /*0x4de914*/
        }
        ++v5; /*0x4de918*/
      }
      while ( v5 < v3 ); /*0x4de91b*/
      v5 = v20; /*0x4de921*/
    }
    ++result; /*0x4de925*/
  }
  return result; /*0x4de933*/

}
} // namespace ra2::game

// 0x4DE940
namespace ra2::game {
int FootClass::CheckCellPassable() const
{

  int v3; // edi
  int owner; // ecx
  int v5; // eax
  unsigned int *v6; // eax
  int v7; // ebp
  int v8; // esi
  int v9; // ebx
  Cell *v10; // edi
  unsigned int *j; // esi
  int v12; // eax
  unsigned char *v13; // esi
  int v14; // ecx
  unsigned __int16 *v16; // [esp+Ch] [ebp-28h]
  int i; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  int v19; // [esp+14h] [ebp-20h]
  int v20; // [esp+18h] [ebp-1Ch]
  __int16 v21[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v22; // [esp+20h] [ebp-14h]
  int v23; // [esp+24h] [ebp-10h]
  unsigned char v24[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = *(unsigned int *)((*(int (**)(FootClass *))&this->vfptr->q084)(this) + 1520); /*0x4de950*/
  owner = this->owner; /*0x4de956*/
  v22 = v3; /*0x4de95e*/
  v20 = v3 * v3; /*0x4de968*/
  LOWORD(v5) = a2; /*0x4de96c*/
  v19 = owner->relatedTagsCount; /*0x4de971*/
  if ( a2 == g_FootClass_Pool ) /*0x4de97c*/
  {
    v6 = (unsigned int *)(*(int (**)(FootClass *, unsigned char *))&this->vfptr->ThreatAvoidanceCoefficient)(this, v24); /*0x4de995*/
    LOWORD(v16) = *v6 / 256; /*0x4de9a8*/
    v5 = v6[1] / 256; /*0x4de9b9*/
    HIWORD(v16) = v5; /*0x4de9bc*/
    a2 = (int)v16; /*0x4de9c5*/
  }
  v7 = -v3; /*0x4de9cb*/
  v8 = -v3; /*0x4de9cd*/
  v23 = -v3; /*0x4de9cf*/
  for ( i = -v3; v8 < v3; i = v8 ) /*0x4de9d9*/
  {
    if ( v7 < v3 ) /*0x4de9e2*/
    {
      v9 = v8 * v8; /*0x4de9ee*/
      HIWORD(v18) = v8 + HIWORD(a2); /*0x4de9f4*/
      do /*0x4deabb*/
      {
        LOWORD(v18) = a2 + v7; /*0x4dea05*/
        *(unsigned int *)v21 = v18; /*0x4dea0e*/
        LOWORD(v5) = v20; /*0x4dea12*/
        if ( v9 + v7 * v7 < v20 ) /*0x4dea1a*/
        {
          v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v21); /*0x4dea2f*/
          LOWORD(v5) = Cell::IsPassableOffset(v10, v19); /*0x4dea38*/
          if ( (unsigned char)v5 ) /*0x4dea3f*/
          {
            FootClass::updateLocomotion((FootClass *)v10, v19); /*0x4dea48*/
            for ( j = (unsigned int *)v10->Cell_field_0xE4; j; j = (unsigned int *)j[12] ) /*0x4dea55*/
            {
              v12 = (*(int (**)(unsigned int *))(*j + 44))(j); /*0x4dea5b*/
              if ( v12 == 1 || v12 == 15 || v12 == 2 ) /*0x4dea6b*/
                (*(void (**)(unsigned int *))(*j + 1056))(j); /*0x4dea71*/
            }
            v5 = (int)Cell::IsBridge(v10); /*0x4dea80*/
            v13 = (unsigned char *)v5; /*0x4dea85*/
            if ( v5 ) /*0x4dea89*/
            {
              v14 = v5->u32_21C; /*0x4dea8b*/
              LOWORD(v5) = *(unsigned short *)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x4dea91*/
              if ( v14 != *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x4dea98*/
              {
                v5 = (*(int (**)(unsigned char *, unsigned int, unsigned int))(*(unsigned int *)v13 + 104))(v13, 0, 0); /*0x4deaa2*/
                if ( v5 ) /*0x4deaa7*/
                  v13->u32_80 = 1; /*0x4deaa9*/
              }
            }
            v8 = i; /*0x4deab0*/
          }
        }
        v3 = v22; /*0x4deab4*/
        ++v7; /*0x4deab8*/
      }
      while ( v7 < v22 ); /*0x4deabb*/
      v7 = v23; /*0x4deac1*/
    }
    ++v8; /*0x4deac5*/
  }
  return v5; /*0x4dead3*/

}
} // namespace ra2::game

// 0x4DEBB0
namespace ra2::game {
void FootClass::UpdateTeamAI()
{

  TeamClass *attachedTag; // ecx
  TeamClass *v4; // ecx
  TeamClass *v5; // ecx
  int vfptr; // edx
  unsigned __int8 *v8; // edx

  if ( (*(int (**)(FootClass *))&this->vfptr->u32_1C8)(this) <= 0 ) /*0x4debbe*/
    return 0; /*0x4ded5c*/
  if ( this->health > 0 ) /*0x4debcd*/
  {
    if ( a2 ) /*0x4debd5*/
    {
      attachedTag = (TeamClass *)this->attachedTag; /*0x4debd7*/
      if ( attachedTag ) /*0x4debdc*/
        TeamClass::Update_0(attachedTag, 38, (int)this, g_FootClass_Pool, 0, 0); /*0x4debec*/
    }
    v4 = (TeamClass *)this->attachedTag; /*0x4debf1*/
    if ( v4 && this->isAliveFlag[0] ) /*0x4debf8*/
      TeamClass::Update_0(v4, 41, (int)this, g_FootClass_Pool, 0, 0); /*0x4dec0f*/
    v5 = (TeamClass *)this->attachedTag; /*0x4dec14*/
    if ( v5 ) /*0x4dec19*/
    {
      if ( !this->isAliveFlag[0] ) /*0x4dec23*/
        return 1; /*0x4dec49*/
      if ( a2 ) /*0x4dec27*/
        TeamClass::Update_0(v5, 41, (int)this, g_FootClass_Pool, 0, a2); /*0x4dec36*/
    }
    if ( !this->isAliveFlag[0] ) /*0x4dec3b*/
      return 1; /*0x4dec43*/
    (*(void (**)(FootClass *, int))&this->vfptr->FootClass_E0)(this, a2); /*0x4dec51*/
    if ( !this->isAliveFlag[0] ) /*0x4dec57*/
      return 1; /*0x4dec65*/
    if ( !this->isAttackedByLocomotor[0] ) /*0x4dec68*/
      this->health = 0; /*0x4dec72*/
  }
  vfptr = this->vfptr; /*0x4dec79*/
  this->isCrashing[0] = 1; /*0x4dec7f*/
  (*(void (**)(FootClass *, int))(vfptr + 628))(this, 3); /*0x4dec86*/
  (*(void (**)(FootClass *))&this->vfptr->RollAngle)(this); /*0x4dec90*/
  TechnoClass::CleanupAll((TechnoClass *)this, a2); /*0x4dec99*/
  if ( (*(int (**)(FootClass *))&this->vfptr->ChargerBarrels_0x12)(this) != 15 && !dword_A8E7AC ) /*0x4decb5*/
  {
    *&this->auxParticles2 = (double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) /*0x4decf0*/
                                   * 4.656612877414201e-10
                                   * 0.15
                                   + 0.1;
    if ( !Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) ) /*0x4ded02*/
      *&this->auxParticles2 = -*&this->auxParticles2; /*0x4ded13*/
    *&this->firingParticles = (double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) /*0x4ded45*/
                                     * 4.656612877414201e-10
                                     * 0.1;
  }
  LOBYTE(v8) = 0; /*0x4ded4b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, (int)v8); /*0x4ded4f*/
  return 1; /*0x4dec45*/

}
} // namespace ra2::game

// 0x4DED70
namespace ra2::game {
int TechnoClass::GetThreatValue() const
{

  unsigned int *v2; // eax
  HouseClass *v3; // edi
  unsigned __int16 *v5; // [esp+8h] [ebp-14h]
  __int16 v6[2]; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v7[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->u32_48)(this, v7); /*0x4ded80*/
  LOWORD(v5) = *v2 / 256; /*0x4ded93*/
  HIWORD(v5) = v2[1] / 256; /*0x4dedac*/
  *(unsigned int *)v6 = v5; /*0x4dedb9*/
  v3 = (HouseClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v6); /*0x4dedc9*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) /*0x4dedf4*/
    && (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->missionData)(this)
    && !(unsigned __int8)HouseClass::HasType(v3, *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48)) )
  {
    return *(unsigned int *)((*(int (**)(TechnoClass *, unsigned int))&this->vfptr->q0CC)(this, 0) + 164); /*0x4dee09*/
  }
  if ( (*(unsigned __int8 (**)(TechnoClass *, unsigned int))&this->vfptr->currentTargetThreatValues)( /*0x4dee20*/
         this,
         *(int *)((char *)&stru_A83CD9.estimatedHealth + 3)) )
  {
    return ObjectClass::HasC4((ObjectClass *)this); /*0x4dee44*/
  }
  return *(unsigned int *)((*(int (**)(TechnoClass *, int))&this->vfptr->q0CC)(this, 1) + 164); /*0x4dee0f*/

}
} // namespace ra2::game

// 0x4DF040
namespace ra2::game {
int TechnoClass::FindBestMatch()
{

  unsigned int *v4; // ebx
  int v5; // ebp
  signed int v6; // edi
  int vfptr; // eax
  unsigned int v9; // edx
  int v10; // eax
  int i; // [esp+10h] [ebp-4h]

  v4 = (unsigned int *)a2; /*0x4df042*/
  v5 = 0; /*0x4df04c*/
  v6 = 0; /*0x4df04e*/
  for ( i = -1; v6 < (int)v4[4]; ++v6 ) /*0x4df05c*/
  {
    vfptr = this->vfptr; /*0x4df066*/
    v9 = v4[1]; /*0x4df06e*/
    a2 = -1; /*0x4df071*/
    v10 = (*(int (**)(TechnoClass *, unsigned int, int, int, int *))(vfptr + 1324))( /*0x4df080*/
            this,
            *(unsigned int *)(v9 + 4 * v6),
            a3,
            a4,
            &a2);
    if ( v10 && (!v5 || a2 < i || i == -1 || *(unsigned char *)(v10 + 979)) ) /*0x4df09f*/
    {
      v5 = v10; /*0x4df0a9*/
      i = a2; /*0x4df0ab*/
    }
  }
  return v5; /*0x4df0b7*/

}
} // namespace ra2::game

// 0x4DF0D0
namespace ra2::game {
void FootClass::ClearPathIndex()
{
  this->FootClass_field_5A0 = 0; /*0x4df0d2*/
  this->movementDestination = 0; /*0x4df0d8*/
  return 0; /*0x4df0de*/
}
} // namespace ra2::game

// 0x4DF0E0
namespace ra2::game {
int FootClass::MissionSell_Dispatch()
{
  int v4; // ebp
  char v5; // dl
  bool v6; // bl
  bool v8; // [esp+14h] [ebp+4h]

  v4 = a2[12]; /*0x4df0ea*/
  if ( v4 == 29 ) /*0x4df0f1*/
  {
    v5 = a2[18]; /*0x4df0fa*/
    v8 = a2[23] != 0; /*0x4df101*/
    v6 = v5 != 0; /*0x4df108*/
    if ( (*((uint8_t (__thiscall **)(FootClass *))this->vfptr + 304))(this) ) /*0x4df10b*/
    {
      this->FootClass_field_bool_5D1 = 0; /*0x4df129*/
      this->FootClass_field_int_5C4 = 29; /*0x4df132*/
      if ( v8 ) /*0x4df13c*/
      {
        this->FootClass_field_5C8 = (int)BuildingLoadQueue::GetNext((BuildingLoadQueue *)(a2 + 19)); /*0x4df146*/
        return 2; /*0x4df14f*/
      }
      else if ( v6 ) /*0x4df15a*/
      {
        this->FootClass_field_5CC = (int)BuildingLoadQueue::GetNext((BuildingLoadQueue *)(a2 + 14)); /*0x4df164*/
        return 1; /*0x4df16d*/
      }
      else
      {
        (*((void (__thiscall **)(FootClass *))this->vfptr + 298))(this); /*0x4df17a*/
        return 29; /*0x4df181*/
      }
    }
    else
    {
      return 2 - v6; /*0x4df11e*/
    }
  }
  else
  {
    (*((void (__thiscall **)(FootClass *))this->vfptr + 298))(this); /*0x4df18d*/
    return v4; /*0x4df194*/
  }
}
} // namespace ra2::game

// 0x4DF1A0
namespace ra2::game {
int TechnoClass::vt_entry_4A8()
{
  this->FootClass_field_5C4 = -1; /*0x4df1a2*/
  this->FootClass_field_5C8 = 0; /*0x4df1ac*/
  this->FootClass_field_5CC = 0; /*0x4df1b2*/
  this->FootClass_field_bool_5D1 = 0; /*0x4df1b8*/
  return 0; /*0x4df1be*/
}
} // namespace ra2::game

// 0x4DF320
namespace ra2::game {
int TechnoClass::vt_entry_4C8()
{
  int v2; // eax
  void (__thiscall **vtable0)(TechnoClass *, int, int); // edx

  v2 = this->FootClass_field_5C8; /*0x4df326*/
  this->FootClass_field_bool_5D1 = 0; /*0x4df32c*/
  if ( v2 ) /*0x4df335*/
  {
    (*((void (__thiscall **)(TechnoClass *, int, int))this->vfptr + 122))(this, 2, 1); /*0x4df33d*/
    (*((void (__thiscall **)(TechnoClass *, unsigned int, int))this->vfptr + 288))(this, this->FootClass_field_5C8, 1); /*0x4df350*/
    return 1; /*0x4df356*/
  }
  else
  {
    vtable0 = (void (__thiscall **)(TechnoClass *, int, int))this->vfptr; /*0x4df361*/
    if ( this->FootClass_field_5CC ) /*0x4df35b*/
    {
      vtable0[122](this, 1, 1); /*0x4df36d*/
      (*((void (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 242))(this, this->FootClass_field_5CC); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      ((void (__thiscall *)(TechnoClass *))vtable0[298])(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
} // namespace ra2::game

// 0x4DF3A0
namespace ra2::game {
void FootClass::UpdateAttackMove_SelectNewTarget()
{
  int result; // eax
  int (__thiscall **vtable0)(FootClass *, int *, int); // eax
  uint8_t (__thiscall **v4)(FootClass *, int *, int); // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( this->FootClass_field_5C8 ) /*0x4df3a6*/
  {
    if ( this->FootClass_field_bool_5D1 ) /*0x4df3b0*/
    {
      result = (*((int (__thiscall **)(FootClass *, AbstractClass *))this->vfptr + 237))(this, this->target); /*0x4df3c5*/
      if ( (unsigned char)result ) /*0x4df3cd*/
        return result; /*0x4df3cd*/
      this->target = 0; /*0x4df3d3*/
    }
    v5 = this->location[0]; /*0x4df3e7*/
    vtable0 = (int (__thiscall **)(FootClass *, int *, int))this->vfptr; /*0x4df3eb*/
    v6 = this->location[1]; /*0x4df3f0*/
    v7 = this->location[2]; /*0x4df3fe*/
    result = vtable0[231](this, &v5, 1); /*0x4df402*/
    if ( (unsigned char)result ) /*0x4df40a*/
      goto LABEL_6; /*0x4df40a*/
  }
  else if ( !this->FootClass_field_5CC /*0x4df441*/
         || (result = (*((int (__thiscall **)(FootClass *, int))this->vfptr + 237))(this, this->FootClass_field_5CC),
             !(unsigned char)result) )
  {
    if ( !this->FootClass_field_bool_5D1 /*0x4df460*/
      || (result = (*((int (__thiscall **)(FootClass *, AbstractClass *))this->vfptr + 237))(this, this->target),
          !(unsigned char)result) )
    {
      this->target = 0; /*0x4df46a*/
      v5 = this->location[0]; /*0x4df476*/
      v4 = (uint8_t (__thiscall **)(FootClass *, int *, int))this->vfptr; /*0x4df47a*/
      v6 = this->location[1]; /*0x4df47f*/
      v7 = this->location[2]; /*0x4df48d*/
      if ( v4[231](this, &v5, 1) ) /*0x4df491*/
      {
  LABEL_6:
        result = (*((int (__thiscall **)(FootClass *, int, int))this->vfptr + 122))(this, 1, 1); /*0x4df410*/
        this->FootClass_field_bool_5D1 = 1; /*0x4df41e*/
        return result; /*0x4df429*/
      }
      result = this->FootClass_field_5CC; /*0x4df49f*/
      this->target = (AbstractClass *)result; /*0x4df4a5*/
    }
  }
  return result; /*0x4df425*/
}
} // namespace ra2::game

// 0x4DF4B0
namespace ra2::game {
int TechnoClass::vt_entry_4D0()
{
  char result; // al

  result = 0; /*0x4df4b3*/
  if ( this->FootClass_field_5C4 == 29 ) /*0x4df4bc*/
  {
    if ( this->FootClass_field_bool_5D1 ) /*0x4df4be*/
    {
      this->FootClass_field_bool_5D1 = 0; /*0x4df4c8*/
    }
    else if ( (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this) != 5 /*0x4df4f7*/
           && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this) != 5 )
    {
      (*((void (__thiscall **)(TechnoClass *))this->vfptr + 298))(this); /*0x4df4fd*/
      return 0; /*0x4df503*/
    }
    return (*((char (__thiscall **)(TechnoClass *))this->vfptr + 306))(this); /*0x4df4d3*/
  }
  return result; /*0x4df4d9*/
}
} // namespace ra2::game

// 0x4DF7F0
namespace ra2::game {
int FootClass::Destru_vt322()
{
  int InstanceCOM; // eax
  int v6; // eax
  void (__thiscall **vtable0)(FootClass *, CellClass *, int); // edi
  CellClass *v8; // eax
  LPVOID v9; // edi
  LPVOID v10; // eax
  int v11; // ecx
  int v12; // edx
  void (__thiscall **v13)(FootClass *, CellClass *, int); // edi
  int v14; // ecx
  CellClass *v15; // eax
  LPVOID ppv; // [esp+54h] [ebp-8h] BYREF
  int v18; // [esp+58h] [ebp-4h] BYREF

  if ( (*((uint8_t (__thiscall **)(FootClass *))this->vfptr + 21))(this) /*0x4df83c*/
    || (*((uint8_t (__thiscall **)(FootClass *))this->vfptr + 88))(this)
    || this->isImmobilized
    || (*((uint8_t (__thiscall **)(FootClass *))this->vfptr + 117))(this)
    || (*((uint8_t (__thiscall **)(FootClass *))this->vfptr + 118))(this) )
  {
    return 0; /*0x4dfa40*/
  }
  ppv = 0; /*0x4df858*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x4df85c*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x4df86a*/
    sub_7DC720(InstanceCOM); /*0x4df86d*/
  v18 = 0; /*0x4df876*/
  if ( ppv ) /*0x4df87c*/
  {
    v6 = StreamClass::Set((StreamClass *)&v18, &ppv); /*0x4df887*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x4df895*/
      sub_7DC720(v6); /*0x4df898*/
  }
  if ( (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &a2)->flags[0] & 0x100) != 0 ) /*0x4df8b5*/
    a4 += (int)FootClass_Array.attachedTag; /*0x4df8c3*/
  if ( (*((int (__thiscall **)(FootClass *))this->vfptr + 11))(this) == 1 ) /*0x4df8d1*/
  {
    if ( !this->locomotor[0] ) /*0x4df8d3*/
      sub_7DC720(-2147467261); /*0x4df8e0*/
    this->HasValidWeapon(this->locomotor[0], 0); /*0x4df8ef*/
    if ( !this->locomotor[0] ) /*0x4df8f5*/
      sub_7DC720(-2147467261); /*0x4df910*/
    (*(void (__stdcall **)(int, int, int, int, int))(*(unsigned int *)this->locomotor[0] + 112))( /*0x4df92d*/
      this->locomotor[0],
      -1,
      a2,
      a3,
      a4);
    (*((void (__thiscall **)(FootClass *, int *))this->vfptr + 61))(this, &a2); /*0x4df939*/
    this->frozenStill = 1; /*0x4df93f*/
  }
  vtable0 = (void (__thiscall **)(FootClass *, CellClass *, int))this->vfptr; /*0x4df946*/
  v8 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &a2); /*0x4df954*/
  vtable0[288](this, v8, 1); /*0x4df95c*/
  (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 288))(this, 0, 1); /*0x4df96a*/
  if ( !ppv ) /*0x4df976*/
    sub_7DC720(-2147467261); /*0x4df97d*/
  ppv->vt_slot_12(this); /*0x4df98a*/
  if ( !v18 ) /*0x4df999*/
    sub_7DC720(-2147467261); /*0x4df9a0*/
  (*(void (__stdcall **)(int, int))(*(unsigned int *)v18 + 12))(v18, this->locomotor[0]); /*0x4df9ad*/
  v9 = (LPVOID)this->locomotor[0]; /*0x4df9b0*/
  v10 = ppv; /*0x4df9b6*/
  if ( v9 != ppv ) /*0x4df9bc*/
  {
    this->locomotor[0] = (int)ppv; /*0x4df9c0*/
    if ( v10 ) /*0x4df9c6*/
      (*(void (__stdcall **)(LPVOID))(*(unsigned int *)v10 + 4))(v10); /*0x4df9cb*/
    if ( v9 ) /*0x4df9d0*/
      (*(void (__stdcall **)(LPVOID))(*(unsigned int *)v9 + 8))(v9); /*0x4df9d5*/
  }
  v11 = a2; /*0x4df9d8*/
  v12 = a3; /*0x4df9dc*/
  v13 = (void (__thiscall **)(FootClass *, CellClass *, int))this->vfptr; /*0x4df9e6*/
  this->isImmobilized = 1; /*0x4df9ea*/
  this->chronoDestCoords[0] = v11; /*0x4df9f1*/
  v14 = a4; /*0x4df9f3*/
  this->chronoDestCoords[1] = v12; /*0x4df9f7*/
  this->chronoDestCoords[2] = v14; /*0x4df9ff*/
  v15 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &a2); /*0x4dfa07*/
  v13[288](this, v15, 1); /*0x4dfa0f*/
  if ( v18 ) /*0x4dfa1b*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v18 + 8))(v18); /*0x4dfa20*/
  if ( ppv ) /*0x4dfa29*/
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 8))(ppv); /*0x4dfa2e*/
  return 1; /*0x4dfa33*/
}
} // namespace ra2::game

// 0x4DFA50
namespace ra2::game {
bool FootClass::IsNotAttackAndPlayer() const
{
  if ( this->isAttackedByLocomotor ) /*0x4dfa50*/
    return 0; /*0x4dfa5a*/
  else
    return ObjectClass::IsPlayerOwnedAndCheck((IUnknown *)this); /*0x4dfa5d*/
}
} // namespace ra2::game

// 0x4DFA70
namespace ra2::game {
int TechnoClass::FindClosestInfantry()
{
  double v1; // st7
  int v3; // ebp
  int v4; // ebx
  unsigned int *v5; // edi
  unsigned int *v6; // eax
  int v7; // eax
  int v9; // [esp+24h] [ebp-2Ch]
  int v10; // [esp+28h] [ebp-28h]
  int v11; // [esp+30h] [ebp-20h]
  int v12; // [esp+34h] [ebp-1Ch]
  unsigned char v13[12]; // [esp+38h] [ebp-18h] BYREF
  unsigned char v14[12]; // [esp+44h] [ebp-Ch] BYREF

  v10 = 0; /*0x4dfa7f*/
  v9 = 0x7FFFFFFF; /*0x4dfa8d*/
  v3 = this->owner->psychicDetectionCount - 1; /*0x4dfa9b*/
  if ( v3 < 0 ) /*0x4dfa9c*/
    return 0; /*0x4dfa9c*/
  do /*0x4dfb31*/
  {
    v4 = *(unsigned int *)(this->owner->secretLabsCount + 4 * v3); /*0x4dfab3*/
    v5 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v4 + 72))(v4, v13); /*0x4dfabf*/
    v6 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v14); /*0x4dfac8*/
    v11 = v6[1] - v5[1]; /*0x4dfae6*/
    v12 = v6[2] - v5[2]; /*0x4dfaf0*/
    Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v12 * (double)v12 + (double)v11 * (double)v11); /*0x4dfb15*/
    (*((unsigned short *)&(v7))) = Math::RoundToInt(v1); /*0x4dfb1d*/
    if ( v7 < v9 ) /*0x4dfb26*/
    {
      v9 = v7; /*0x4dfb28*/
      v10 = v4; /*0x4dfb2c*/
    }
    --v3; /*0x4dfb30*/
  }
  while ( v3 >= 0 ); /*0x4dfb31*/
  if ( !v10 ) /*0x4dfb3d*/
    return 0; /*0x4dfb3f*/
  (*((void (__thiscall **)(TechnoClass *, int, int))this->vfptr + 288))(this, v10, 1); /*0x4dfb50*/
  (*((void (__thiscall **)(TechnoClass *, int, unsigned int))this->vfptr + 122))(this, 9, 0); /*0x4dfb5e*/
  return 1; /*0x4dfb41*/
}
} // namespace ra2::game

// 0x4DFB70
namespace ra2::game {
int TechnoClass::FindClosestUnit()
{
  double v1; // st7
  int v3; // ebp
  int v4; // eax
  TechnoClass *v5; // edi
  unsigned int *v6; // ebx
  unsigned int *v7; // eax
  int v8; // eax
  TechnoClass *v11; // [esp+30h] [ebp-28h]
  int v12; // [esp+38h] [ebp-20h]
  int v13; // [esp+3Ch] [ebp-1Ch]
  unsigned char v14[12]; // [esp+40h] [ebp-18h] BYREF
  unsigned char v15[12]; // [esp+4Ch] [ebp-Ch] BYREF

  v11 = 0; /*0x4dfb7f*/
  v3 = 0x7FFFFFFF; /*0x4dfb8d*/
  v4 = this->owner->countResourceDestinations - 1; /*0x4dfb98*/
  v4 = v4; /*0x4dfb99*/
  if ( v4 < 0 ) /*0x4dfb9d*/
    goto LABEL_7; /*0x4dfb9d*/
  do /*0x4dfc48*/
  {
    v5 = *(TechnoClass **)(this->owner->productionFactory_plants_count + 4 * v4); /*0x4dfbb1*/
    if ( (*((int (__thiscall **)(TechnoClass *, int, TechnoClass *))this->vfptr + 158))(this, 15, v5) == 1 ) /*0x4dfbc2*/
    {
      v6 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))v5->vfptr + 18))(v5, v14); /*0x4dfbd2*/
      v7 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v15); /*0x4dfbdb*/
      v12 = v7[1] - v6[1]; /*0x4dfbf9*/
      v13 = v7[2] - v6[2]; /*0x4dfc03*/
      Math::Sqrt((double)(*v7 - *v6) * (double)(*v7 - *v6) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x4dfc28*/
      (*((unsigned short *)&(v8))) = Math::RoundToInt(v1); /*0x4dfc30*/
      if ( v8 < v3 ) /*0x4dfc37*/
      {
        v3 = v8; /*0x4dfc39*/
        v11 = v5; /*0x4dfc3b*/
      }
    }
    v4 = --v4; /*0x4dfc43*/
  }
  while ( v4 >= 0 ); /*0x4dfc48*/
  if ( v11 ) /*0x4dfc54*/
  {
    this->shouldEnterAbsorber = 1; /*0x4dfc6b*/
    if ( (TechnoClass *)Team::GetMember((Team *)this, 0) != v11 && this->queueUpToEnter != v11 ) /*0x4dfc81*/
    {
      (*((void (__thiscall **)(TechnoClass *, int, unsigned int))this->vfptr + 122))(this, 7, 0); /*0x4dfc8b*/
      (*((void (__thiscall **)(TechnoClass *, TechnoClass *, int))this->vfptr + 288))(this, v11, 1); /*0x4dfc98*/
    }
    return 1; /*0x4dfc9f*/
  }
  else
  {
  LABEL_7:
    this->shouldEnterAbsorber = 0; /*0x4dfc56*/
    return 0; /*0x4dfc5d*/
  }
}
} // namespace ra2::game

// 0x4DFF40
namespace ra2::game {
int TechnoClass::FindClosestBuilding()
{
  double v1; // st7
  char result; // al
  int v4; // ebp
  int v5; // esi
  unsigned int *v6; // ebx
  unsigned int *v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // [esp+24h] [ebp-2Ch]
  int v11; // [esp+28h] [ebp-28h]
  int v12; // [esp+30h] [ebp-20h]
  int v13; // [esp+34h] [ebp-1Ch]
  unsigned char v14[12]; // [esp+38h] [ebp-18h] BYREF
  unsigned char v15[12]; // [esp+44h] [ebp-Ch] BYREF

  result = TechnoClass::CanSelfRepair(this); /*0x4dff4f*/
  if ( result ) /*0x4dff56*/
  {
    v11 = 0; /*0x4dff66*/
    v10 = 0x7FFFFFFF; /*0x4dff6e*/
    v4 = this->owner->startingUnitsCapacity - 1; /*0x4dff7c*/
    if ( v4 < 0 ) /*0x4dff7d*/
      return 0; /*0x4dff7d*/
    do /*0x4e002d*/
    {
      v5 = *(unsigned int *)(this->owner->unitsSelfHeal + 4 * v4); /*0x4dff94*/
      v6 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(v5->turretChargeTimer_d)(v5, v14); /*0x4dffa0*/
      v7 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v15); /*0x4dffa9*/
      v12 = v7[1] - v6[1]; /*0x4dffc7*/
      v13 = v7[2] - v6[2]; /*0x4dffd1*/
      Math::Sqrt((double)(*v7 - *v6) * (double)(*v7 - *v6) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x4dfff6*/
      (*((unsigned short *)&(v8))) = Math::RoundToInt(v1); /*0x4dfffe*/
      v8 = v8; /*0x4e0003*/
      if ( v8 < v10 && !Team::GetMember((Team *)v5, 0) && !v5->bunkerLinkedUnit ) /*0x4e001a*/
      {
        v10 = v8; /*0x4e0024*/
        v11 = v5; /*0x4e0028*/
      }
      --v4; /*0x4e002c*/
    }
    while ( v4 >= 0 ); /*0x4e002d*/
    if ( v11 ) /*0x4e0039*/
    {
      (*((void (__thiscall **)(TechnoClass *, int, int))this->vfptr + 288))(this, v11, 1); /*0x4e004c*/
      (*((void (__thiscall **)(TechnoClass *, int, int))this->vfptr + 158))(this, 2, v11); /*0x4e0059*/
      (*((void (__thiscall **)(TechnoClass *, int, int))this->vfptr + 122))(this, 7, 1); /*0x4e0067*/
      return 1; /*0x4e006e*/
    }
    else
    {
      return 0; /*0x4e003b*/
    }
  }
  return result; /*0x4dff58*/
}
} // namespace ra2::game

// 0x4E00B0
namespace ra2::game {
int FootClass::Jumpjet_OccupyCell()
{
  unsigned int *result; // eax
  int *currentJumpjetMapCoords; // esi

  result = (unsigned int *)g_FootClass_Pool; /*0x4e00b0*/
  currentJumpjetMapCoords = this->currentJumpjetMapCoords; /*0x4e00c8*/
  if ( this->currentJumpjetMapCoords[0] == g_FootClass_Pool ) /*0x4e00ce*/
  {
    *currentJumpjetMapCoords = a2; /*0x4e011b*/
    return (unsigned int *)a2; /*0x4e0116*/
  }
  else
  {
    if ( a2 != g_FootClass_Pool ) /*0x4e00dd*/
    {
      result = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (int16_t *)this->currentJumpjetMapCoords); /*0x4e00ec*/
      if ( result->FootClass_E0 == this ) /*0x4e00f7*/
      {
        result = CellCoord::To_CellObj( /*0x4e00ff*/
                   (CellCoord *)&DataGlobal_87F7E8,
                   (int16_t *)this->currentJumpjetMapCoords);
        result->u32_E0 = 0; /*0x4e0104*/
      }
    }
    *currentJumpjetMapCoords = a2; /*0x4e010e*/
  }
  return result; /*0x4e0110*/
}
} // namespace ra2::game

// 0x4E0150
namespace ra2::game {
int TechnoClass::GetAnimationValue() const
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x4e0150*/
  v2 = *ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v4); /*0x4e0161*/
  *a2 = v2; /*0x4e0167*/
  return a2; /*0x4e016a*/
}
} // namespace ra2::game

// 0x4E0170
namespace ra2::game {
int FootClass::Destru_vt08()
{
  FootClass::Destruct(this); /*0x4e0173*/
  if ( (a2 & 1) != 0 ) /*0x4e017d*/
    operator delete((this)); /*0x4e0180*/
  return this; /*0x4e018a*/
}
} // namespace ra2::game

// 0x4E0ED0
namespace ra2::game {
int FootClass::RemoveFromPointerArray()
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->uniqueId; /*0x4e0ed0*/
  v3 = a2; /*0x4e0ed3*/
  if ( a2 >= uniqueId ) /*0x4e0ed9*/
    return 0; /*0x4e0efc*/
  v4 = uniqueId - 1; /*0x4e0edb*/
  this->uniqueId = v4; /*0x4e0ede*/
  if ( a2 < v4 ) /*0x4e0ee1*/
  {
    do /*0x4e0ef4*/
    {
      ++v3; /*0x4e0ee7*/
      *((unsigned int *)this->vfptr1 + v3 - 1) = *((unsigned int *)this->vfptr1 + v3); /*0x4e0eeb*/
    }
    while ( v3 < this->uniqueId ); /*0x4e0ef4*/
  }
  return 1; /*0x4e0ef9*/
}
} // namespace ra2::game

// 0x50BD30
namespace ra2::game {
int TechnoClass::GetDamageMultiplier() const
{
  double result; // st7

  switch ( (*(int (__thiscall **)(unsigned int *))(*a2 + 44))(a2) ) /*0x50bd4f*/
  {
    case 3: /*0x50bd4f*/
      result = *&this->u32_44.firstTrigger; /*0x50bd77*/
      break; /*0x50bd7d*/
    case 7: /*0x50bd4f*/
      if ( a2[898] == 5 ) /*0x50bd87*/
        result = *(float *)this->attachedTag[4].defaultCoords; /*0x50bd8e*/
      else
        result = *&this->u32_44.instanceCount; /*0x50bd9c*/
      break; /*0x50bd94*/
    case 16: /*0x50bd4f*/
      result = *&this->u32_44.NeedsSaveOrLink; /*0x50bd5b*/
      break; /*0x50bd61*/
    case 40: /*0x50bd4f*/
      result = *&this->u32_44.buildingType; /*0x50bd69*/
      break; /*0x50bd6f*/
    default:
      result = 1.0; /*0x50bda5*/
      break; /*0x50bda5*/
  }
  return result; /*0x50bdab*/
}
} // namespace ra2::game

// 0x50C050
namespace ra2::game {
int TechnoClass::GetTargetSpeedMultiplier() const
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int))(*(unsigned int *)a2 + 44))(a2); /*0x50c059*/
  switch ( v3 ) /*0x50c05f*/
  {
    case 3: /*0x50c05f*/
      return *&this->u32_48.nextArrayIndex; /*0x50c093*/
    case 16: /*0x50c05f*/
      return *&this->u32_48.uniqueId; /*0x50c086*/
    case 40: /*0x50c05f*/
      return *&this->u32_48.abstractFlags; /*0x50c079*/
  }
  return 1.0; /*0x50c071*/
}
} // namespace ra2::game

// 0x50C920
namespace ra2::game {
int TechnoClass::FindDeployDestination()
{

  int v1; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // edx
  int v6; // eax
  int *v7; // esi
  int v8; // ebx
  void *v9; // eax
  __int16 v11[2]; // [esp+Ch] [ebp-10h] BYREF
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h] BYREF

  v1 = *(unsigned int *)&MEMORY[0xA8EB00].?[164]; /*0x50c924*/
  v13 = *(unsigned int *)&MEMORY[0xA8EB00].?[164]; /*0x50c92e*/
  if ( this->u32_5494 == *(unsigned short *)&MEMORY[0xA8EB00].?[948] /*0x50c950*/
    && this->u32_5496 == *(unsigned short *)&MEMORY[0xA8EB00].?[950] )
  {
    v3 = this->u32_5490; /*0x50c952*/
  }
  else
  {
    v3 = this->u32_5494; /*0x50c95a*/
  }
  v4 = 0; /*0x50c960*/
  *(unsigned int *)v11 = v3; /*0x50c968*/
  v12 = 0; /*0x50c98f*/
  v5 = *LayerClass::Pathfinding_Find( /*0x50c99e*/
          &DataGlobal_87F7E8,
          (int)&v12,
          &v14,
          v11,
          0,
          -1,
          0,
          0,
          4,
          4,
          0,
          0,
          0,
          1,
          (__int16 *)&v12,
          0,
          0);
  LOWORD(v6) = v5; /*0x50c9a0*/
  *(unsigned int *)v11 = v5; /*0x50c9a3*/
  if ( (unsigned short)v5 != *(unsigned short *)&MEMORY[0xA8EB00].?[948] || v11[1] != *(unsigned short *)&MEMORY[0xA8EB00].?[950] ) /*0x50c9bc*/
  {
    ++v11[0]; /*0x50c9c2*/
    ++v11[1]; /*0x50c9c7*/
    if ( v1 > 0 ) /*0x50c9ce*/
    {
      do /*0x50cab7*/
      {
        v7 = *(int **)(*(unsigned int *)&MEMORY[0xA8EB00].?[152] + 4 * v4); /*0x50c9db*/
        if ( v7 ) /*0x50c9e0*/
        {
          if ( v7->owner == this ) /*0x50c9ec*/
          {
            v6 = v7->getAltitude(*(unsigned int *)(*(unsigned int *)&MEMORY[0xA8EB00].?[152] + 4 * v4)); /*0x50c9f6*/
            if ( v6 != 6 ) /*0x50c9fc*/
            {
              v6 = v7->getAltitude(); /*0x50ca06*/
              if ( v6 != 2 ) /*0x50ca0c*/
              {
                if ( !*(unsigned int *)(v7->Vt34Thunk() + 1028) /*0x50ca36*/
                  || (v6 = *(unsigned int *)(v7->Vt34Thunk() + 1028), !*(unsigned char *)(v6 + 5817)) )
                {
                  if ( this->u32_5494 == *(unsigned short *)&MEMORY[0xA8EB00].?[948] /*0x50ca5d*/
                    && this->u32_5496 == *(unsigned short *)&MEMORY[0xA8EB00].?[950] )
                  {
                    v6 = this->u32_5490; /*0x50ca5f*/
                  }
                  else
                  {
                    v6 = this->u32_5494; /*0x50ca67*/
                  }
                  v12 = v6; /*0x50ca70*/
                  if ( v6 != *(unsigned int *)&MEMORY[0xA8EB00].?[948] ) /*0x50ca74*/
                  {
                    v8 = *v7; /*0x50ca7d*/
                    v9 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v11); /*0x50ca8b*/
                    (*(void (**)(int *, void *, int))(v8 + 1152))(v7, v9, 1); /*0x50ca93*/
                    TechnoClass::SetFocus((TechnoClass *)v7, 0); /*0x50ca9d*/
                    LOWORD(v6) = v7->MissionDispatch(2, 0); /*0x50caaa*/
                    v1 = v13; /*0x50cab0*/
                  }
                }
              }
            }
          }
        }
        ++v4; /*0x50cab4*/
      }
      while ( v4 < v1 ); /*0x50cab7*/
    }
  }
  return v6; /*0x50cabe*/

}
} // namespace ra2::game

// 0x50CAD0
namespace ra2::game {
bool TechnoClass::ProcessTarget(int a2)
{

  int v3; // eax
  unsigned __int8 *v5; // esi
  unsigned int v6; // esi
  Cell *v7; // eax
  Cell *NeighbourContent; // eax
  unsigned int *v9; // eax

  v3 = *(unsigned int *)a2; /*0x50cad9*/
  if ( *(int *)a2 < 0 ) /*0x50cadd*/
    return 1; /*0x50cae4*/
  if ( v3 >= dword_A83C78 ) /*0x50caed*/
    return 0; /*0x50caf1*/
  v5 = (unsigned __int8 *)*((unsigned int *)dword_A83C6C + v3); /*0x50cafd*/
  if ( v5[1517] && v5[1516] ) /*0x50cb0a*/
    return this->armorMultiplier[0] < *(unsigned int *)(*&dword_8871E0->q1340 + 4 * this->targetingTimer[1]); /*0x50cb32*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x50cb40*/
    return 1; /*0x50cb44*/
  if ( !v5 ) /*0x50cb4c*/
    return 0; /*0x50cb50*/
  if ( *(unsigned int *)TechnoClass::GetAudioEntry((TechnoClass *)v5, 0) ) /*0x50cb5f*/
    return 1; /*0x50cb66*/
  if ( v5[5489] ) /*0x50cb6c*/
  {
    v6 = 0; /*0x50cb76*/
    while ( 1 ) /*0x50cb81*/
    {
      v7 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)(a2 + 4)); /*0x50cb81*/
      NeighbourContent = (Cell *)Cell::GetNeighbourContent(v7, v6); /*0x50cb89*/
      v9 = Cell::IsBridge(NeighbourContent); /*0x50cb90*/
      if ( v9 ) /*0x50cb97*/
      {
        if ( v9->u32_21C == this ) /*0x50cb9f*/
          break; /*0x50cb9f*/
      }
      if ( (int)++v6 >= 8 ) /*0x50cba9*/
        return 0; /*0x50cbb0*/
    }
    return 1; /*0x50cb9f*/
  }
  return *((int *)v5 + 952) > 0 /*0x50cadf*/
      || *&dword_8871E0->u32_DF0 + this->u32_54D8 <= *(unsigned int *)&stru_A8E960.random[528];

}
} // namespace ra2::game

// 0x50DAC0
namespace ra2::game {
int TechnoClass::MapHouseRelationIndex()
{
  int result; // eax

  switch ( this->u32_577C ) /*0x50dacb*/
  {
    case 0: /*0x50dacb*/
      result = 2; /*0x50dad2*/
      break; /*0x50dad7*/
    case 1: /*0x50dacb*/
      result = 3; /*0x50dad8*/
      break; /*0x50dadd*/
    case 3: /*0x50dacb*/
      result = 1; /*0x50dade*/
      break; /*0x50dae3*/
    default:
      result = 0; /*0x50dae4*/
      break; /*0x50dae4*/
  }
  return result; /*0x50dad7*/
}
} // namespace ra2::game

// 0x5216C0
namespace ra2::game {
int TechnoClass::GetThreatValue_0()
{
  return TechnoClass::GetThreatValue(this);
}
} // namespace ra2::game

// 0x522910
namespace ra2::game {
int TechnoClass::GarrisonBuilding()
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  unsigned int *v7; // edx
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  int vfptr; // ebx
  int v11; // eax
  unsigned char v12[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = this->q6C0; /*0x52291a*/
  if ( v3->Occupier_d ) /*0x522920*/
  {
    (*(void (**)(TechnoClass *))&this->vfptr->lastCommands)(this); /*0x522931*/
    v4 = a2[419]; /*0x52293b*/
    if ( a2[421] < v4 /*0x522969*/
      || (*((unsigned char *)a2 + 1681) || !v4)
      && (v5 = a2[422], v5 > 0)
      && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(a2[417] + 8))(a2 + 417, v4 + v5, 0) )
    {
      v6 = a2[421]; /*0x522970*/
      v7 = (unsigned int *)a2[418]; /*0x522973*/
      a2[421] = v6 + 1; /*0x522979*/
      v7[v6] = (unsigned int)this; /*0x52297c*/
    }
    v8 = (unsigned int *)(*(int (**)(unsigned int *))(*a2 + 444))(a2); /*0x522984*/
    BuildingClass::UpdateThreatBounds((BuildingClass *)a2, v8); /*0x52298d*/
    if ( a2[421] == 1 ) /*0x522999*/
    {
      (*(void (**)(unsigned int *, int))(*a2 + 292))(a2, 2); /*0x5229a2*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x5229ae*/
      {
        VoxClass::FindAndPlay(&stru_8255B0, -1); /*0x5229c1*/
        v9 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->u32_48)(this, v12); /*0x5229d0*/
        StartAudioControllerAt(dword_8871E0->PsychicDominatorActivateSound, v9, 0); /*0x5229e0*/
      }
    }
    if ( *(unsigned char *)&this->owner->currentPlayer ) /*0x5229ec*/
    {
      this->q691 = 0; /*0x5229f4*/
      this->q690 = 0; /*0x5229fa*/
    }
  }
  else if ( v3->Assaulter_2 ) /*0x522a09*/
  {
    BuildingClass::AnimateUnloadUnits((BuildingClass *)a2, (int)this); /*0x522a18*/
    (*(void (**)(TechnoClass *, unsigned int, int))&this->vfptr->__pad_480)(this, 0, 1); /*0x522a24*/
    vfptr = this->vfptr; /*0x522a2c*/
    v11 = (*(int (**)(unsigned int *, unsigned char *, int, int))(*a2 + 72))(a2, v12, 1, 1); /*0x522a39*/
    (*(void (**)(TechnoClass *, int))(vfptr + 372))(this, v11); /*0x522a3f*/
  }

}
} // namespace ra2::game

// 0x522A60
namespace ra2::game {
int TechnoClass::HandleSpecialAction()
{
  int v4; // eax
  char *v5; // esi
  int v6; // eax
  char *v8; // esi
  unsigned int *v9; // eax
  int16_t v10[2]; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v11[12]; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+20h] [ebp+4h]

  v4 = this->u32_6B8; /*0x522a6c*/
  if ( (*(unsigned char *)(v4 + 3434) || *(unsigned char *)(v4 + 3476)) /*0x522a93*/
    && a2 == 4475
    && (v5 = (char *)this - 8, (uint8_t)Team::AllMembersValid((Team *)((char *)this - 8))) )
  {
    v5->vt_slot_628((char *)this - 8, 8); /*0x522aa2*/
    v6 = this->displayProductionTo[0]; /*0x522aa8*/
    if ( !v6 || v6 == this->u32_59C ) /*0x522ab8*/
    {
      FootClass::ClearPathIndex((FootClass *)((char *)this - 8)); /*0x522ad4*/
      (*(void (__thiscall **)(char *, unsigned char *, int, unsigned int))(*&v5->u32_5D0))( /*0x522ae6*/
        (char *)this - 8,
        &((unsigned int *)&stru_A8EB00)[1564],
        1,
        0);
      return 1; /*0x522aee*/
    }
    else
    {
      v5->vt_slot_1152((char *)this - 8, v6, 1); /*0x522ac1*/
      return 1; /*0x522ac9*/
    }
  }
  else if ( *(unsigned char *)(this->u32_6B8 + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = (char *)this - 8; /*0x522b1a*/
    v9 = (unsigned int *)(*(int (__thiscall **)(char *, unsigned char *))(*((unsigned int *)this - 2) + 72))((char *)this - 8, v11); /*0x522b24*/
    (*((unsigned short *)&(v12))) = *v9 / 256; /*0x522b37*/
    (*(((unsigned short *)&(v12)) + 1)) = v9[1] / 256; /*0x522b4f*/
    *(unsigned int *)v12 = v12; /*0x522b58*/
    if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v12) + 80) & 0x100) != 0 ) /*0x522b70*/
      v8->vt_slot_460((char *)this - 8, *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1616]); /*0x522b7d*/
    else
      v8->vt_slot_460((char *)this - 8, 0); /*0x522b8b*/
    v8->vt_slot_1368((char *)this - 8, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
} // namespace ra2::game

// 0x547150
namespace ra2::game {
int TechnoClass::GetTileAnimationData() const
{
  unsigned int *v4; // eax
  int v5; // edx
  int v6; // ecx

  v4 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 39))(this); /*0x547152*/
  if ( !v4 ) /*0x54715c*/
    return 0; /*0x5471a0*/
  v5 = v4[a2 % (*v4 * v4[1]) + 4]; /*0x547174*/
  *a3 = v4[2]; /*0x547178*/
  v6 = v4[3]; /*0x54717e*/
  *a4 = v6; /*0x547183*/
  if ( v5 ) /*0x547185*/
  {
    if ( (*(unsigned char *)(v5 + 36) & 1) != 0 ) /*0x54718b*/
      *a4 = v6 + *(unsigned int *)(v5 + 4) - *(unsigned int *)(v5 + 24); /*0x547197*/
  }
  return 1; /*0x54719d*/
}
} // namespace ra2::game

// 0x586FC0
namespace ra2::game {
int FootClass::FindNearestApproachableCell()
{

  unsigned int v4; // eax
  CellClass *v5; // eax
  CellClass *v6; // ebx
  int v7; // eax
  unsigned int *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // edi
  int v17; // edx
  int v18; // edx
  double v20; // [esp+0h] [ebp-48h]
  __int16 v21[2]; // [esp+18h] [ebp-30h] BYREF
  int v22; // [esp+1Ch] [ebp-2Ch]
  unsigned __int16 *v23; // [esp+20h] [ebp-28h]
  int v24; // [esp+24h] [ebp-24h]
  int v25; // [esp+28h] [ebp-20h]
  int v26; // [esp+2Ch] [ebp-1Ch]
  LayerClass *v27; // [esp+30h] [ebp-18h]
  int v28; // [esp+34h] [ebp-14h]
  __int16 v29; // [esp+38h] [ebp-10h]
  __int16 i; // [esp+3Ah] [ebp-Eh]
  double v31; // [esp+40h] [ebp-8h]

  v25 = dword_ABD480; /*0x586fd4*/
  v27 = (LayerClass *)this; /*0x586fd8*/
  v31 = 10000.0; /*0x586fdc*/
  v4 = *a3 + (a3[1] << 9); /*0x586fee*/
  if ( v4 < 0x40000 && (v5 = *(CellClass **)(dword_87F924 + 4 * v4)) != 0 ) /*0x58700c*/
  {
    v6 = v5; /*0x58700e*/
  }
  else
  {
    v6 = &unk_ABDC50; /*0x587014*/
    dword_ABDC74 = *(unsigned int *)a3; /*0x587019*/
  }
  v7 = *(unsigned int *)&v6->__pad_28[16]; /*0x58701e*/
  if ( v7 >= 0 ) /*0x587023*/
  {
    v9 = *(unsigned int **)(*(unsigned int *)&stru_A8E960.random[440] + 4 * v7); /*0x58703b*/
    v10 = (*(int (**)(unsigned int *))(*v9 + 156))(v9); /*0x587042*/
    v11 = v9[186]; /*0x58704e*/
    v22 = v9[185]; /*0x587054*/
    v12 = (unsigned __int8)v6->height[0]; /*0x58705a*/
    v26 = v10; /*0x587060*/
    v24 = v11; /*0x587066*/
    LOWORD(v11) = v12 % v22; /*0x58706b*/
    v13 = v12; /*0x58706f*/
    v14 = v22; /*0x587071*/
    v15 = 0; /*0x587081*/
    v29 = *a3 - v11; /*0x587083*/
    for ( i = a3[1] - v13 / v22; v15 < v24; ++v15 ) /*0x58709a*/
    {
      v16 = 0; /*0x5870a0*/
      if ( v14 > 0 ) /*0x5870a4*/
      {
        HIWORD(v23) = v15 + i; /*0x5870b1*/
        do /*0x587151*/
        {
          v17 = v15 * v9[185]; /*0x5870c3*/
          LOWORD(v23) = v16 + v29; /*0x5870c6*/
          *(unsigned int *)v21 = v23; /*0x5870d5*/
          if ( *(unsigned int *)(v26 + 4 * (v16 + v17) + 16) && (unsigned __int8)LayerClass::IsWithinUsableArea(v27, v21, 1) ) /*0x5870ec*/
          {
            v18 = v21[1] - a4[1]; /*0x587110*/
            v28 = (v21[0] - *a4) * (v21[0] - *a4) + v18 * v18; /*0x58711c*/
            __asm /*0x587120*/
            {
              fild [esp+48h+var_14]
              fstp [esp+48h+var_48]; double
            }
            Math::Sqrt(v20); /*0x587127*/
            __asm { fcom [esp+48h+var_8] } /*0x58712c*/
            __asm { fnstsw ax }
            if ( (_AX & 0x100) != 0 ) /*0x587138*/
            {
              __asm { fstp [esp+40h+var_8] } /*0x58713e*/
              v25 = *(unsigned int *)v21; /*0x587142*/
            }
            else
            {
              __asm { fstp st } /*0x587148*/
            }
          }
          v14 = v22; /*0x58714a*/
          ++v16; /*0x58714e*/
        }
        while ( v16 < v22 ); /*0x587151*/
      }
    }
    *a2 = v25; /*0x58716d*/
    return a2; /*0x587164*/
  }
  else
  {
    *a2 = *(unsigned int *)a3; /*0x58702a*/
    return a2; /*0x587025*/
  }

}
} // namespace ra2::game

// 0x5F3B50
namespace ra2::game {
void * ObjectClass::Init(int a2)
{
  AbstractClass::InitVtables((AbstractClass *)this, a2); /*0x5f3b58*/
  /* X11: vtable install elided (implicit via class virtuals 0x5f3b5d) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x5f3b63) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x5f3b6a) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x5f3b71) — binary-proven install, was 0 */
  return &this->vfptr; /*0x5f3b7a*/
}
} // namespace ra2::game

// 0x5F5390
namespace ra2::game {
void TechnoClass::CreateDestructionEffect()
{

  int v2; // ebp
  unsigned int *v3; // eax
  unsigned __int16 *v4; // eax
  unsigned __int16 *v5; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  AnimClass *v10; // eax
  int v11; // eax
  int vfptr; // edx
  int v13; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v15; // ecx
  TeamClass *v16; // ecx
  TeamClass *v17; // ecx
  TeamClass *v18; // ecx
  TeamClass *v19; // ecx
  TeamClass *v20; // ecx
  int v21; // ecx
  TeamClass *v22; // ecx
  TeamClass *v23; // ecx
  int v24; // [esp+10h] [ebp-14h]
  int health; // [esp+14h] [ebp-10h]
  int v26[3]; // [esp+18h] [ebp-Ch] BYREF
  unsigned __int16 **v27; // [esp+28h] [ebp+4h]
  int v28; // [esp+2Ch] [ebp+8h]
  int v29; // [esp+30h] [ebp+Ch]
  int v30; // [esp+34h] [ebp+10h]
  char v31; // [esp+38h] [ebp+14h]
  int v32; // [esp+38h] [ebp+14h]
  int v33; // [esp+40h] [ebp+1Ch]

  v24 = 0; /*0x5f5399*/
  health = this->health; /*0x5f53a6*/
  if ( health <= 0 /*0x5f53cd*/
    || !*v27
    || !v31 && *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->parachute)(this) + 563) )
  {
    return v24; /*0x5f583b*/
  }
  v2 = *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->parachute)(this) + 160); /*0x5f53e5*/
  if ( !v31 ) /*0x5f53f1*/
  {
    v3 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->parachute)(this); /*0x5f53fc*/
    *v27 = (unsigned __int16 *)ComputeTechnoClassDamageFalloff(*v27, v29, v3[39], v28); /*0x5f5414*/
  }
  if ( this
    && (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 6
    && !*(unsigned char *)(((*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 6 ? &this->vtable2 : (TechnoClass *)1312)->vfptr
                 + 5495) )
  {
    v4 = *v27; /*0x5f5448*/
    if ( (int)*v27 < 1 ) /*0x5f544d*/
      v4 = (unsigned __int16 *)1; /*0x5f544f*/
    *v27 = v4; /*0x5f5454*/
  }
  v5 = *v27; /*0x5f5456*/
  if ( !*v27 ) /*0x5f5456*/
    return 0; /*0x5f5465*/
  if ( (int)*v27 >= 0 ) /*0x5f5468*/
  {
    v24 = 1; /*0x5f549c*/
    if ( health <= (int)v5 ) /*0x5f54a6*/
    {
      *v27 = (unsigned __int16 *)health; /*0x5f54c2*/
    }
    else if ( health >= v2 >> 1 && health - (int)v5 < v2 >> 1 ) /*0x5f54b6*/
    {
      v24 = 2; /*0x5f54b8*/
    }
    v8 = (double)v2 * *(double *)dword_8871E0->RefundPercent; /*0x5f54cd*/
    if ( (double)health > v8 && (double)(health - (int)*v27) < v8 ) /*0x5f54f7*/
      v24 = 3; /*0x5f54f9*/
    v9 = health - (unsigned int)*v27; /*0x5f5509*/
    this->health = v9; /*0x5f550d*/
    if ( v9 > 0 /*0x5f5542*/
      || (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) != 15
      || v31
      || !*(unsigned char *)(this->q6C0 + 3756)
      || this->u8_6DB )
    {
      v13 = v24; /*0x5f55ea*/
    }
    else
    {
      v10 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x5f5555*/
      if ( v10 ) /*0x5f555f*/
      {
        v26[0] = this->location[0]; /*0x5f5574*/
        v26[1] = this->location[1]; /*0x5f557d*/
        v26[2] = this->location[2]; /*0x5f5589*/
        AnimClass::ctor(v10, (void *)dword_8871E0->Behind, v26, 0, 1, (void *)0x600, 0, 0); /*0x5f559c*/
      }
      LOWORD(v11) = Math::RoundToInt((double)*(int *)(this->q6C0 + 160) * 0.25); /*0x5f55b3*/
      this->health = v11; /*0x5f55bb*/
      if ( v11 <= 1 ) /*0x5f55be*/
        v11 = 1; /*0x5f55c0*/
      vfptr = this->vfptr; /*0x5f55c5*/
      this->health = v11; /*0x5f55cf*/
      this->u8_6DB = 1; /*0x5f55d2*/
      (*(void (**)(TechnoClass *, int, int, unsigned int))(vfptr + 1368))(this, 6, 1, 0); /*0x5f55d9*/
      v13 = 3; /*0x5f55df*/
      v24 = 3; /*0x5f55e4*/
    }
    v32 = this->health; /*0x5f55f8*/
    if ( v13 == 2 ) /*0x5f55fc*/
    {
      if ( v30 ) /*0x5f5600*/
      {
        attachedTag = (TeamClass *)this->attachedTag; /*0x5f5602*/
        if ( attachedTag ) /*0x5f5607*/
          TeamClass::Update_0(attachedTag, 39, (int)this, dword_AC1360, 0, 0); /*0x5f5617*/
      }
      if ( !this->isAliveFlag[0] ) /*0x5f5624*/
        return 5; /*0x5f5624*/
      v15 = (TeamClass *)this->attachedTag; /*0x5f562a*/
      if ( v15 ) /*0x5f562f*/
        TeamClass::Update_0(v15, 42, (int)this, dword_AC1360, 0, 0); /*0x5f563e*/
    }
    if ( this->isAliveFlag[0] ) /*0x5f5643*/
    {
      if ( v13 == 3 ) /*0x5f5654*/
      {
        if ( v30 ) /*0x5f5658*/
        {
          v16 = (TeamClass *)this->attachedTag; /*0x5f565a*/
          if ( v16 ) /*0x5f565f*/
            TeamClass::Update_0(v16, 40, (int)this, dword_AC1360, 0, 0); /*0x5f566f*/
        }
        if ( !this->isAliveFlag[0] ) /*0x5f567c*/
          return 5; /*0x5f567c*/
        v17 = (TeamClass *)this->attachedTag; /*0x5f5682*/
        if ( v17 ) /*0x5f5687*/
          TeamClass::Update_0(v17, 43, (int)this, dword_AC1360, 0, 0); /*0x5f5696*/
      }
      if ( this->isAliveFlag[0] ) /*0x5f569b*/
      {
        if ( this->health != health /*0x5f56d6*/
          && (*(int (**)(TechnoClass *))&this->vfptr->parachute)(this)
          && health == *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->parachute)(this) + 160) )
        {
          if ( v30 ) /*0x5f56da*/
          {
            v18 = (TeamClass *)this->attachedTag; /*0x5f56dc*/
            if ( v18 ) /*0x5f56e1*/
              TeamClass::Update_0(v18, 38, (int)this, dword_AC1360, 0, 0); /*0x5f56f1*/
          }
          v19 = (TeamClass *)this->attachedTag; /*0x5f56f6*/
          if ( v19 && this->isAliveFlag[0] ) /*0x5f56fd*/
            TeamClass::Update_0(v19, 41, (int)this, dword_AC1360, 0, 0); /*0x5f5714*/
          v20 = (TeamClass *)this->attachedTag; /*0x5f5719*/
          if ( v20 ) /*0x5f571e*/
          {
            if ( !this->isAliveFlag[0] ) /*0x5f5728*/
              return 5; /*0x5f5728*/
            if ( v30 ) /*0x5f5730*/
              TeamClass::Update_0(v20, 41, (int)this, dword_AC1360, 0, v30); /*0x5f573f*/
          }
        }
        if ( this->isAliveFlag[0] && (v32 <= 0 || this->health > 0) ) /*0x5f575f*/
        {
          v21 = 0; /*0x5f5768*/
          if ( !this->health ) /*0x5f5765*/
          {
            if ( v30 ) /*0x5f5770*/
              v21 = v30->u32_21C; /*0x5f5772*/
            if ( !v33 || v30 && v33 == v21 ) /*0x5f5786*/
              (*(void (**)(TechnoClass *, int))&this->vfptr->radioLinks)(this, v30); /*0x5f579a*/
            else
              (*(void (**)(TechnoClass *, int))&this->vfptr->flashing)(this, v33); /*0x5f578d*/
            v13 = 4; /*0x5f57a2*/
            v24 = 4; /*0x5f57ab*/
            (*(void (**)(TechnoClass *, int))&this->vfptr->q0DC)(this, 1); /*0x5f57af*/
          }
          if ( this->isAliveFlag[0] ) /*0x5f57b5*/
          {
            if ( v30 ) /*0x5f57c1*/
            {
              v22 = (TeamClass *)this->attachedTag; /*0x5f57c3*/
              if ( v22 ) /*0x5f57c8*/
              {
                if ( v13 != 4 ) /*0x5f57cd*/
                  TeamClass::Update_0(v22, 6, (int)this, dword_AC1360, 0, v30); /*0x5f57db*/
              }
            }
            if ( this->isAliveFlag[0] ) /*0x5f57e0*/
            {
              if ( v30 ) /*0x5f57ec*/
              {
                v23 = (TeamClass *)this->attachedTag; /*0x5f57ee*/
                if ( v23 ) /*0x5f57f3*/
                {
                  if ( v13 != 4 ) /*0x5f57f8*/
                    TeamClass::Update_0(v23, 44, (int)this, dword_AC1360, 0, v30); /*0x5f5807*/
                }
              }
              if ( this->isAliveFlag[0] && this->isSelected[0] ) /*0x5f581a*/
                (*(void (**)(TechnoClass *, int))&this->vfptr->currentTurretNumber_2)(this, 2); /*0x5f582a*/
            }
          }
          return v24; /*0x5f582a*/
        }
      }
    }
    return 5; /*0x5f5841*/
  }
  v7 = this->health; /*0x5f546a*/
  this->health = v7 - (unsigned int)v5; /*0x5f5473*/
  if ( v7 - (int)v5 > v2 ) /*0x5f5476*/
    this->health = v2; /*0x5f5478*/
  if ( v7 != this->health ) /*0x5f547e*/
    (*(void (**)(TechnoClass *, int))&this->vfptr->gattlingValue)(this, 7); /*0x5f5486*/
  return 0; /*0x5f545c*/

}
} // namespace ra2::game

// 0x5FC570
namespace ra2::game {
int ObjectClass::FinalizeCellPlacement(int a2)
{

  int v2; // esi
  char *v4; // eax
  int v5; // edx
  int currentMission; // ecx
  int v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // eax
  signed int i; // esi
  unsigned int *NeighbourContent; // eax
  VeinholeMonsterClass *v13; // eax
  int v14; // eax
  signed int j; // esi
  unsigned char *v16; // eax
  int v18; // ecx
  int v19; // esi
  __int16 v20; // bp
  __int16 v21; // ax
  char v22; // bl
  unsigned short *v23; // edi
  __int16 v24; // dx
  bool v25; // zf
  int v26; // ebx
  unsigned int *v27; // eax
  __int16 v28; // ax
  int v29; // esi
  char v30; // bl
  int v31; // edx
  __int16 v32; // cx
  unsigned short *v33; // edi
  unsigned int *v34; // eax
  __int16 v35; // ax
  char v36; // si
  int v37; // eax
  __int16 v38; // di
  int v39; // ecx
  signed int v40; // eax
  int v41; // ebp
  int v42; // ebx
  unsigned short *v43; // edi
  __int16 v44; // dx
  unsigned int *v45; // esi
  __int16 v46; // dx
  int v47; // esi
  __int16 v48; // bp
  __int16 v49; // ax
  char v50; // bl
  unsigned short *v51; // edi
  __int16 v52; // dx
  int v53; // ebx
  unsigned int *v54; // eax
  __int16 v55; // ax
  int v56; // esi
  char v57; // bl
  int v58; // edx
  __int16 v59; // cx
  unsigned short *v60; // edi
  unsigned int *v61; // eax
  __int16 v62; // ax
  char v63; // si
  int v64; // eax
  __int16 v65; // di
  int v66; // eax
  int v67; // ecx
  signed int v68; // eax
  int v69; // ebp
  int v70; // ebx
  unsigned short *v71; // edi
  __int16 v72; // dx
  unsigned int *v73; // esi
  __int16 v74; // dx
  bool *v75; // ecx
  char IsBuildable; // al
  int v77; // ecx
  TechnoClass *v78; // eax
  int v79; // esi
  int v80; // edi
  int v81; // edx
  int v82; // eax
  int GroundHeight; // ebx
  AnimClass *v84; // eax
  int v85; // edx
  void **v86; // esi
  int v87; // eax
  int v88; // eax
  TechnoClass *v89; // ecx
  int vtable0; // edx
  int v91; // [esp-1Ch] [ebp-58h]
  char v92; // [esp-18h] [ebp-54h]
  char v93; // [esp-14h] [ebp-50h]
  __int16 v94[2]; // [esp+10h] [ebp-2Ch] BYREF
  TechnoClass *v95; // [esp+14h] [ebp-28h]
  int v96; // [esp+18h] [ebp-24h]
  int v97; // [esp+1Ch] [ebp-20h]
  int v98; // [esp+20h] [ebp-1Ch]
  __int16 v99[2]; // [esp+24h] [ebp-18h] BYREF
  __int16 v100[2]; // [esp+28h] [ebp-14h] BYREF
  int v101; // [esp+2Ch] [ebp-10h]
  int v102; // [esp+30h] [ebp-Ch] BYREF
  int v103; // [esp+34h] [ebp-8h]
  int v104; // [esp+38h] [ebp-4h]

  v2 = a2; /*0x5fc576*/
  v95 = this; /*0x5fc57e*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay(this) || v2 != 1 && v2 != 3 ) /*0x5fc597*/
    return 0; /*0x5fc597*/
  *(unsigned int *)v94 = *(unsigned int *)(*(int (**)(TechnoClass *, int *))(this->vfptr.vfptr.vfptr.vfptr.vfptr + 440))( /*0x5fc5b8*/
                                this,
                                &a2);
  v4 = (char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v94); /*0x5fc5bc*/
  currentMission = this->vfptr.vfptr.currentMission; /*0x5fc5c1*/
  v7 = (int)v4; /*0x5fc5c7*/
  v101 = (int)v4; /*0x5fc5c9*/
  v8 = currentMission->LandType; /*0x5fc5d3*/
  if ( (unsigned __int8)v4[284] > 4u && v8 != 178 ) /*0x5fc5e3*/
    return 0; /*0x5fc5e3*/
  switch ( v8 ) /*0x5fc5f1*/
  {
    case 24: /*0x5fc5f1*/
      UpdateCellClassNeighborTerrain((int)v4, v5, 0, 1); /*0x5fc60a*/
      break;
    case 25: /*0x5fc5f1*/
      UpdateCellClassNeighborTerrain((int)v4, v5, 6u, 1); /*0x5fc5fe*/
      break;
    case 237: /*0x5fc5f1*/
      SetCellClassOccupancyFlags((int)v4, v5, 0, 1); /*0x5fc62c*/
      break;
    case 238: /*0x5fc5f1*/
      SetCellClassOccupancyFlags((int)v4, v5, 6u, 1); /*0x5fc625*/
      break;
    case 167: /*0x5fc5f1*/
      if ( ObjectClass::IsCellSuitableForPlacement(&v4->ptr_24) ) /*0x5fc66a*/
      {
        for ( i = 0; i < 8; ++i ) /*0x5fc677*/
        {
          NeighbourContent = Cell::GetNeighbourContent((Cell *)v7, i); /*0x5fc67c*/
          NeighbourContent->u32_44 = 178; /*0x5fc682*/
          NeighbourContent->u32_11E = 0; /*0x5fc68c*/
        }
        *(unsigned int *)(v7 + 68) = 167; /*0x5fc69a*/
        *(unsigned char *)(v7 + 286) = 0; /*0x5fc6a1*/
        v13 = (VeinholeMonsterClass *)__2_YAPAXI_Z(0x108u); /*0x5fc6a8*/
        if ( v13 ) /*0x5fc6b2*/
          VeinholeMonsterClass::Constructor(v13, (ObjectClass *)(v7 + 36)); /*0x5fc6bb*/
      }
      goto LABEL_131; /*0x5fc6c0*/
    default:
      if ( v8 == 126 && !dword_A8E7AC ) /*0x5fc6d4*/
      {
        BuildingClass::VisualizePlacement((BuildingClass *)v4); /*0x5fc6dc*/
        goto LABEL_131; /*0x5fc6e1*/
      }
      break;
  }
  v9 = v95->vfptr.vfptr.currentMission; /*0x5fc635*/
  if ( *(unsigned int *)(v9 + 664) != 9 ) /*0x5fc642*/
  {
    if ( *(unsigned char *)(v9 + 680) ) /*0x5fc6e6*/
    {
      if ( (unsigned __int8)CellClass::IsPassable((int *)v7, 1, 0, 0) ) /*0x5fc6fa*/
      {
        v14 = *(unsigned int *)(v95->vfptr.vfptr.currentMission + 660); /*0x5fc711*/
        *(unsigned char *)(v7 + 286) = 0; /*0x5fc717*/
        *(unsigned int *)(v7 + 68) = v14; /*0x5fc71e*/
        BuildingClass::ValidatePlacement((BuildingClass *)v7, 1); /*0x5fc721*/
        if ( !dword_A8E7AC ) /*0x5fc72c*/
        {
          CellClass::DetermineTileConnectivity((CellClass *)&dword_87F7E8, (__int16 *)(v7 + 36)); /*0x5fc737*/
          Radar::Update((Radar *)&dword_87F7E8, (__int16 *)(v7 + 36)); /*0x5fc742*/
        }
        if ( dword_8333BC != -1 ) /*0x5fc74d*/
          *(unsigned int *)(v7 + 80) = dword_880994; /*0x5fc755*/
        for ( j = 0; j < 8; ++j ) /*0x5fc758*/
        {
          v16 = Cell::GetNeighbourContent((Cell *)v7, j); /*0x5fc75d*/
          ++v16[290]; /*0x5fc773*/
        }
        goto LABEL_131; /*0x5fc775*/
      }
      (*(void (**)(TechnoClass *))(v95->vfptr.vfptr.vfptr.vfptr.vfptr + 248))(v95); /*0x5fc77e*/
      return 0; /*0x5fc78d*/
    }
    v18 = *(unsigned int *)(v9 + 660); /*0x5fc790*/
    if ( v18 >= 122 && v18 <= 125 ) /*0x5fc7a2*/
    {
      v19 = v18 - 122; /*0x5fc7af*/
      if ( (byte_AC1548 & 1) == 0 ) /*0x5fc7b4*/
      {
        byte_AC1548 |= 1u; /*0x5fc7d7*/
        dword_AC154C[0] = -65536; /*0x5fc7eb*/
        a2 = 0xFFFF; /*0x5fc7f0*/
        dword_AC1550 = -65536; /*0x5fc803*/
        dword_AC1554 = 0xFFFF; /*0x5fc809*/
        dword_AC1558 = 0xFFFF; /*0x5fc80f*/
        atexit(nullsub_211); /*0x5fc814*/
      }
      if ( (byte_AC1548 & 2) == 0 ) /*0x5fc826*/
      {
        byte_AC1548 |= 2u; /*0x5fc83e*/
        dword_AC1588 = 0xFFFF; /*0x5fc857*/
        dword_AC158C = 0; /*0x5fc86b*/
        dword_AC1590 = 1; /*0x5fc87f*/
        dword_AC1594 = -65536; /*0x5fc893*/
        v96 = 0x10000; /*0x5fc899*/
        dword_AC1598 = 0; /*0x5fc8ac*/
        dword_AC159C = 0x10000; /*0x5fc8b2*/
        atexit(nullsub_210); /*0x5fc8b8*/
      }
      v20 = LOWORD(dword_AC154C[v19]) + v94[0]; /*0x5fc8cd*/
      v21 = v94[1] + HIWORD(dword_AC154C[v19]); /*0x5fc8d5*/
      v22 = 1; /*0x5fc8da*/
      v98 = 3; /*0x5fc8dc*/
      LOWORD(v96) = v20; /*0x5fc8e4*/
      HIWORD(v96) = v21; /*0x5fc8e9*/
      a2 = v96; /*0x5fc8f2*/
      v23 = (unsigned short *)(4 * (dword_8333C0[v19] & 7) + 9041544); /*0x5fc900*/
      do /*0x5fc94a*/
      {
        if ( *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2) + 17) != -1 ) /*0x5fc91a*/
          v22 = 0; /*0x5fc91c*/
        v24 = a2 + *v23; /*0x5fc92a*/
        HIWORD(v97) = v23[1] + HIWORD(a2); /*0x5fc92f*/
        LOWORD(v97) = v24; /*0x5fc938*/
        v25 = v98 == 1; /*0x5fc941*/
        a2 = v97; /*0x5fc942*/
        --v98; /*0x5fc946*/
      }
      while ( !v25 ); /*0x5fc94a*/
      a2 = v96; /*0x5fc952*/
      if ( v22 ) /*0x5fc956*/
      {
        v26 = 0; /*0x5fc95c*/
        do /*0x5fc9ad*/
        {
          v27 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fc968*/
          v27->u32_44 = dword_8333D0[v19]; /*0x5fc976*/
          v27->u32_11E = v26; /*0x5fc97b*/
          House::AnnounceUpgrade((int)v27, -1); /*0x5fc981*/
          v28 = v23[1] + HIWORD(a2); /*0x5fc993*/
          ++v26; /*0x5fc997*/
          LOWORD(v98) = *v23 + a2; /*0x5fc998*/
          HIWORD(v98) = v28; /*0x5fc99d*/
          a2 = v98; /*0x5fc9a9*/
        }
        while ( v26 < 3 ); /*0x5fc9ad*/
        v29 = dword_8333E0[v19]; /*0x5fc9af*/
        v30 = 0; /*0x5fc9b6*/
        v31 = v29 & 7; /*0x5fc9ba*/
        v32 = v94[1] + HIWORD(dword_89F688[v31]); /*0x5fc9d2*/
        v33 = (unsigned short *)(4 * v31 + 9041544); /*0x5fc9d7*/
        LOWORD(v98) = v94[0] + LOWORD(dword_89F688[v31]); /*0x5fc9de*/
        HIWORD(v98) = v32; /*0x5fc9e3*/
        a2 = v98; /*0x5fc9ee*/
        v97 = dword_8333F8[v29 / 2]; /*0x5fca08*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fca0c*/
        {
          while ( !v30 ) /*0x5fca1b*/
          {
            v34 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fca27*/
            if ( v34->u32_44 == v97 && v34->u32_11E == 1 ) /*0x5fca3e*/
            {
              v30 = 1; /*0x5fca40*/
            }
            else
            {
              v35 = v33[1]; /*0x5fca47*/
              LOWORD(v98) = a2 + *v33; /*0x5fca55*/
              HIWORD(v98) = HIWORD(a2) + v35; /*0x5fca5a*/
              a2 = v98; /*0x5fca63*/
            }
            if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fca71*/
            {
              if ( !v30 ) /*0x5fca7c*/
                goto LABEL_131; /*0x5fca7c*/
              break; /*0x5fca7c*/
            }
          }
          v36 = (v29 - 4) & 7; /*0x5fca82*/
          v37 = v36 & 7; /*0x5fca8a*/
          v38 = dword_89F688[v37]; /*0x5fca92*/
          *(unsigned int *)v100 = 4 * v37 + 9041544; /*0x5fcaa1*/
          LOWORD(v37) = HIWORD(a2) + HIWORD(dword_89F688[v37]); /*0x5fcaae*/
          LOWORD(v98) = a2 + v38; /*0x5fcab3*/
          HIWORD(v98) = v37; /*0x5fcab8*/
          a2 = v98; /*0x5fcac6*/
          v39 = abs32((__int16)v37 - SHIWORD(v96)); /*0x5fcacf*/
          v40 = abs32((__int16)v98 - v20); /*0x5fcadc*/
          if ( v40 > v39 ) /*0x5fcae0*/
            v39 = v40; /*0x5fcae2*/
          if ( v39 > 0 ) /*0x5fcae6*/
          {
            v96 = v39; /*0x5fcafd*/
            v41 = (v36 & 3) / 2; /*0x5fcb03*/
            do /*0x5fcbae*/
            {
              v42 = 0; /*0x5fcb09*/
              v43 = (unsigned short *)(12 * v41 + 11277704); /*0x5fcb0b*/
              do /*0x5fcb7c*/
              {
                v44 = HIWORD(a2) + v43[1]; /*0x5fcb1e*/
                LOWORD(v98) = a2 + *v43; /*0x5fcb23*/
                HIWORD(v98) = v44; /*0x5fcb2c*/
                *(unsigned int *)v99 = v98; /*0x5fcb3b*/
                v45 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v99); /*0x5fcb4a*/
                v45[17] = dword_8333F0[v41] + (Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) & 3); /*0x5fcb67*/
                *((unsigned char *)v45 + 286) = v42; /*0x5fcb6a*/
                House::AnnounceUpgrade((int)v45, -1); /*0x5fcb70*/
                ++v42; /*0x5fcb75*/
                v43 += 2; /*0x5fcb76*/
              }
              while ( v42 < 3 ); /*0x5fcb7c*/
              v46 = *(unsigned short *)(*(unsigned int *)v100 + 2); /*0x5fcb87*/
              LOWORD(v97) = **(unsigned short **)v100 + a2; /*0x5fcb93*/
              HIWORD(v97) = HIWORD(a2) + v46; /*0x5fcb98*/
              a2 = v97; /*0x5fcba1*/
              --v96; /*0x5fcbaa*/
            }
            while ( v96 ); /*0x5fcbae*/
          }
        }
      }
      goto LABEL_131; /*0x5fcbae*/
    }
    if ( v18 >= 233 && v18 <= 236 ) /*0x5fcbcb*/
    {
      v47 = *(unsigned int *)(v9 + 660) - 233; /*0x5fcbdc*/
      if ( (byte_AC1548 & 4) == 0 ) /*0x5fcbe4*/
      {
        byte_AC1548 |= 4u; /*0x5fcbf9*/
        dword_AC155C[0] = -65536; /*0x5fcc1b*/
        a2 = 0xFFFF; /*0x5fcc21*/
        dword_AC1560 = -65536; /*0x5fcc34*/
        dword_AC1564 = 0xFFFF; /*0x5fcc3a*/
        dword_AC1568 = 0xFFFF; /*0x5fcc3f*/
        atexit(nullsub_209); /*0x5fcc45*/
      }
      if ( (byte_AC1548 & 8) == 0 ) /*0x5fcc54*/
      {
        byte_AC1548 |= 8u; /*0x5fcc69*/
        dword_AC15A4 = 0; /*0x5fcc86*/
        dword_AC15A0 = 0xFFFF; /*0x5fcc99*/
        dword_AC15A8 = 1; /*0x5fccad*/
        dword_AC15AC = -65536; /*0x5fccc1*/
        v98 = 0x10000; /*0x5fccc7*/
        dword_AC15B0 = 0; /*0x5fccda*/
        dword_AC15B4 = 0x10000; /*0x5fcce0*/
        atexit(nullsub_208); /*0x5fcce6*/
      }
      v48 = v94[0] + LOWORD(dword_AC155C[v47]); /*0x5fccfe*/
      v49 = v94[1] + HIWORD(dword_AC155C[v47]); /*0x5fcd03*/
      v50 = 1; /*0x5fcd08*/
      v97 = 3; /*0x5fcd0a*/
      LOWORD(v96) = v48; /*0x5fcd12*/
      HIWORD(v96) = v49; /*0x5fcd17*/
      a2 = v96; /*0x5fcd20*/
      v51 = (unsigned short *)(4 * (dword_833408[v47] & 7) + 9041544); /*0x5fcd2e*/
      do /*0x5fcd78*/
      {
        if ( *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2) + 17) != -1 ) /*0x5fcd48*/
          v50 = 0; /*0x5fcd4a*/
        v52 = a2 + *v51; /*0x5fcd58*/
        HIWORD(v98) = v51[1] + HIWORD(a2); /*0x5fcd5d*/
        LOWORD(v98) = v52; /*0x5fcd66*/
        v25 = v97 == 1; /*0x5fcd6f*/
        a2 = v98; /*0x5fcd70*/
        --v97; /*0x5fcd74*/
      }
      while ( !v25 ); /*0x5fcd78*/
      a2 = v96; /*0x5fcd80*/
      if ( v50 ) /*0x5fcd84*/
      {
        v53 = 0; /*0x5fcd8a*/
        do /*0x5fcddb*/
        {
          v54 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fcd96*/
          v54[17] = dword_833418[v47]; /*0x5fcda4*/
          *((unsigned char *)v54 + 286) = v53; /*0x5fcda9*/
          House::AnnounceUpgrade((int)v54, -1); /*0x5fcdaf*/
          v55 = v51[1] + HIWORD(a2); /*0x5fcdc1*/
          ++v53; /*0x5fcdc5*/
          LOWORD(v98) = *v51 + a2; /*0x5fcdc6*/
          HIWORD(v98) = v55; /*0x5fcdcb*/
          a2 = v98; /*0x5fcdd7*/
        }
        while ( v53 < 3 ); /*0x5fcddb*/
        v56 = dword_833428[v47]; /*0x5fcddd*/
        v57 = 0; /*0x5fcde4*/
        v58 = v56 & 7; /*0x5fcde8*/
        v59 = v94[1] + HIWORD(dword_89F688[v58]); /*0x5fce00*/
        v60 = (unsigned short *)(4 * v58 + 9041544); /*0x5fce05*/
        LOWORD(v98) = v94[0] + LOWORD(dword_89F688[v58]); /*0x5fce0c*/
        HIWORD(v98) = v59; /*0x5fce11*/
        a2 = v98; /*0x5fce1c*/
        *(unsigned int *)v100 = dword_833440[v56 / 2]; /*0x5fce36*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fce3a*/
        {
          while ( !v57 ) /*0x5fce49*/
          {
            v61 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x5fce55*/
            if ( v61[17] == *(unsigned int *)v100 && *((unsigned char *)v61 + 286) == 1 ) /*0x5fce6c*/
            {
              v57 = 1; /*0x5fce6e*/
            }
            else
            {
              v62 = v60[1]; /*0x5fce75*/
              LOWORD(v98) = a2 + *v60; /*0x5fce83*/
              HIWORD(v98) = HIWORD(a2) + v62; /*0x5fce88*/
              a2 = v98; /*0x5fce91*/
            }
            if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&a2) ) /*0x5fce9f*/
            {
              if ( !v57 ) /*0x5fceaa*/
                goto LABEL_131; /*0x5fceaa*/
              break; /*0x5fceaa*/
            }
          }
          v63 = (v56 - 4) & 7; /*0x5fceb0*/
          v64 = v63 & 7; /*0x5fcebd*/
          v65 = LOWORD(dword_89F688[v64]) + a2; /*0x5fcec5*/
          *(unsigned int *)v99 = 4 * v64 + 9041544; /*0x5fced4*/
          LOWORD(v64) = HIWORD(dword_89F688[v64]); /*0x5fced8*/
          LOWORD(v98) = v65; /*0x5fcedc*/
          HIWORD(v98) = HIWORD(a2) + v64; /*0x5fcee6*/
          v66 = (__int16)(HIWORD(a2) + v64) - SHIWORD(v96); /*0x5fcef2*/
          a2 = v98; /*0x5fcef4*/
          v67 = abs32(v66); /*0x5fcefd*/
          v68 = abs32(v65 - v48); /*0x5fcf0a*/
          if ( v68 > v67 ) /*0x5fcf0e*/
            v67 = v68; /*0x5fcf10*/
          if ( v67 > 0 ) /*0x5fcf14*/
          {
            v96 = v67; /*0x5fcf2b*/
            v69 = (v63 & 3) / 2; /*0x5fcf31*/
            do /*0x5fcfdc*/
            {
              v70 = 0; /*0x5fcf37*/
              v71 = (unsigned short *)(12 * v69 + 11277728); /*0x5fcf39*/
              do /*0x5fcfaa*/
              {
                v72 = HIWORD(a2) + v71[1]; /*0x5fcf4c*/
                LOWORD(v98) = a2 + *v71; /*0x5fcf51*/
                HIWORD(v98) = v72; /*0x5fcf5a*/
                *(unsigned int *)v100 = v98; /*0x5fcf69*/
                v73 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v100); /*0x5fcf78*/
                v73[17] = dword_833438[v69] + (Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) & 3); /*0x5fcf95*/
                *((unsigned char *)v73 + 286) = v70; /*0x5fcf98*/
                House::AnnounceUpgrade((int)v73, -1); /*0x5fcf9e*/
                ++v70; /*0x5fcfa3*/
                v71 += 2; /*0x5fcfa4*/
              }
              while ( v70 < 3 ); /*0x5fcfaa*/
              v74 = *(unsigned short *)(*(unsigned int *)v99 + 2); /*0x5fcfb5*/
              LOWORD(v97) = **(unsigned short **)v99 + a2; /*0x5fcfc1*/
              HIWORD(v97) = HIWORD(a2) + v74; /*0x5fcfc6*/
              a2 = v97; /*0x5fcfcf*/
              --v96; /*0x5fcfd8*/
            }
            while ( v96 ); /*0x5fcfdc*/
          }
        }
      }
      goto LABEL_131; /*0x5fcfdc*/
    }
    if ( dword_A8E7AC ) /*0x5fcfed*/
    {
      IsBuildable = 1; /*0x5fd077*/
    }
    else
    {
      if ( v9 == dword_8871E0->GUIOpenSound ) /*0x5fcfff*/
      {
        v93 = 0; /*0x5fd006*/
        v92 = 0; /*0x5fd007*/
        v91 = 5; /*0x5fd008*/
        v75 = (bool *)v7; /*0x5fd00a*/
LABEL_97:
        IsBuildable = Cell::IsBuildable(v75, v91, v92, v93, -1, 0, -1, 1); /*0x5fd00c*/
        goto LABEL_110; /*0x5fd011*/
      }
      if ( v9 == dword_8871E0->GUITabSound || v9 == dword_8871E0->GUIBuildSound ) /*0x5fd021*/
      {
        IsBuildable = Cell::IsBuildable((bool *)v7, 1, 0, 0, -1, 0, -1, 1); /*0x5fd070*/
      }
      else
      {
        if ( v18 == 24 || v18 == 25 || v18 == 237 || v18 == 238 ) /*0x5fd03b*/
        {
          IsBuildable = 1; /*0x5fd061*/
          goto LABEL_111; /*0x5fd063*/
        }
        v93 = 1; /*0x5fd042*/
        v25 = v18 == 102; /*0x5fd044*/
        v92 = 1; /*0x5fd047*/
        v91 = 1; /*0x5fd049*/
        v75 = (bool *)v7; /*0x5fd04b*/
        if ( !v25 ) /*0x5fd04d*/
          goto LABEL_97; /*0x5fd04d*/
        IsBuildable = Cell::IsBuildable((bool *)v7, 1, 1, 1, -1, 0, -1, 1); /*0x5fd04f*/
        if ( *(unsigned char *)(v7 + 284) > 4u ) /*0x5fd05b*/
          IsBuildable = 0; /*0x5fd05d*/
      }
    }
LABEL_110:
    if ( dword_A8E7AC ) /*0x5fd07f*/
    {
LABEL_113:
      if ( IsBuildable ) /*0x5fd09d*/
      {
        v78 = v95; /*0x5fd09f*/
        *(unsigned int *)(v7 + 68) = *(unsigned int *)(v95->vfptr.vfptr.currentMission + 660); /*0x5fd0b2*/
        if ( v8 != 24 && v8 != 25 && v8 != 237 && v8 != 238 ) /*0x5fd0ca*/
          *(unsigned char *)(v7 + 286) = 0; /*0x5fd0cc*/
        if ( *(unsigned int *)(v78->vfptr.vfptr.currentMission + 664) == 5 ) /*0x5fd0e0*/
        {
          *(unsigned char *)(v7 + 286) = 1; /*0x5fd0e5*/
          ObjectClass::UpdateTiberiumGrowth(v7, 0); /*0x5fd0ec*/
          v78 = v95; /*0x5fd0f1*/
        }
        if ( *(unsigned char *)(v78->vfptr.vfptr.currentMission + 682) ) /*0x5fd0fb*/
          *(unsigned char *)(v7 + 286) = -1; /*0x5fd105*/
        goto LABEL_124; /*0x5fd10c*/
      }
LABEL_123:
      v78 = v95; /*0x5fd10e*/
LABEL_124:
      if ( *(unsigned int *)(v78->vfptr.vfptr.currentMission + 668) ) /*0x5fd118*/
      {
        v79 = v95->vfptr.vfptr.vfptr.location[0]; /*0x5fd12f*/
        v80 = v95->vfptr.vfptr.vfptr.location[1]; /*0x5fd131*/
        v81 = v95->vfptr.vfptr.vfptr.location[2]; /*0x5fd134*/
        v102 = v79; /*0x5fd139*/
        v104 = v81; /*0x5fd13d*/
        v82 = v95->vfptr.vfptr.vfptr.location[2]; /*0x5fd144*/
        v103 = v95->vfptr.vfptr.vfptr.location[1]; /*0x5fd14b*/
        v104 = v82; /*0x5fd155*/
        GroundHeight = Cell::GetGroundHeight(&v102); /*0x5fd163*/
        v84 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x5fd165*/
        if ( v84 ) /*0x5fd16f*/
        {
          v102 = v79 + 384; /*0x5fd181*/
          v103 = v80 + 384; /*0x5fd189*/
          v85 = v95->vfptr.vfptr.currentMission; /*0x5fd19b*/
          v104 = GroundHeight; /*0x5fd1a1*/
          v86 = AnimClass::ctor(v84, *(void **)(v85 + 668), &v102, 0, 1, (void *)0x600, 0, 0); /*0x5fd1b3*/
        }
        else
        {
          v86 = 0; /*0x5fd1b7*/
        }
        v87 = BuildingClass::FindByCellHash((BuildingClass *)v7); /*0x5fd1bb*/
        if ( v87 != -1 ) /*0x5fd1c3*/
        {
          v88 = *(&dword_B0F4EC->vfptr.vfptr.vfptr.vfptr.vfptr.vfptr + v87); /*0x5fd1cb*/
          if ( v88 ) /*0x5fd1d0*/
          {
            v86[53] = *(void **)(*((unsigned int *)dword_B054D4 + *(unsigned int *)(v88 + 192)) + 780); /*0x5fd1e7*/
            v86[63] = (void *)*(__int16 *)(v7 + 266); /*0x5fd1f4*/
          }
        }
      }
      goto LABEL_131; /*0x5fd1f4*/
    }
LABEL_111:
    v77 = *(unsigned int *)(v7 + 68); /*0x5fd081*/
    if ( v77 != -1 && *(unsigned char *)(*(&MEMORY[0xA83D84]->vfptr.vfptr.vfptr.vfptr.vfptr + v77) + 690) ) /*0x5fd091*/
      goto LABEL_123; /*0x5fd099*/
    goto LABEL_113; /*0x5fd099*/
  }
  v10 = *(unsigned int *)(v9 + 660); /*0x5fc648*/
  *(unsigned char *)(v7 + 286) = 0; /*0x5fc64e*/
  *(unsigned int *)(v7 + 68) = v10; /*0x5fc655*/
LABEL_131:
  House::AnnounceUpgrade(v101, -1); /*0x5fd1fa*/
  v89 = v95; /*0x5fd205*/
  vtable0 = v95->vfptr.vfptr.vfptr.vfptr.vfptr; /*0x5fd209*/
  v95->vfptr.vfptr.vfptr.isOnMap[0] = 0; /*0x5fd20b*/
  v89->vfptr.vfptr.vfptr.inLimbo[0] = 1; /*0x5fd20f*/
  (*(void (**)(void))(vtable0 + 248))(); /*0x5fd216*/
  return 1; /*0x5fc784*/

}
} // namespace ra2::game

// 0x629E90
namespace ra2::game {
bool FootClass::CreateWakes()
{
  double v4; // st7
  double v5; // rdi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  AnimClass *v9; // eax
  int result; // eax
  int v11; // [esp+Ch] [ebp-34h]
  int v12; // [esp+Ch] [ebp-34h]
  double v13; // [esp+10h] [ebp-30h] BYREF
  int v17[3]; // [esp+34h] [ebp-Ch] BYREF

  v11 = *(int16_t *)ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v13) - 0x3FFF; /*0x629eb5*/
  __asm /*0x629eb9*/
  {
    fild [esp+40h+var_34]
    fmul ds:dbl_7E2810
    fchs
    fstp qword ptr [esp+40h+var_30]
  }
  v5 = v13; /*0x629ecd*/
  Math::ArcTan2(v13); /*0x629ed3*/
  __asm { fstp [esp+48h+var_18] } /*0x629ed8*/
  Math::SinCos(v5); /*0x629ede*/
  __asm { fstp [esp+50h+var_20] } /*0x629ee3*/
  v12 = 3; /*0x629ef0*/
  do /*0x629fba*/
  {
    (*((unsigned int *)&(v13))) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -180, 180); /*0x629f13*/
    __asm { fild [esp+40h+var_30] } /*0x629f1c*/
    __asm { fstp [esp+48h+var_28] }
    (*((unsigned int *)&(v13))) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -64, 64); /*0x629f33*/
    __asm /*0x629f37*/
    {
      fild [esp+40h+var_30]
      fld [esp+40h+var_28]
      fmul [esp+40h+var_18]
      fld st(1)
      fmul [esp+40h+var_20]
      fsubp st(1), st
    }
    (*((unsigned short *)&(v6))) = Math::RoundToInt(v4); /*0x629f4b*/
    __asm /*0x629f50*/
    {
      fld [esp+40h+var_28]
      fmul [esp+40h+var_20]
      fxch st(1)
      fmul [esp+40h+var_18]
    }
    v7 = v6; /*0x629f5e*/
    __asm { faddp st(1), st } /*0x629f60*/
    (*((unsigned short *)&(v8))) = Math::RoundToInt(v4); /*0x629f62*/
    v17[0] = v7 + a2; /*0x629f73*/
    v17[1] = a3 + v8; /*0x629f77*/
    v17[2] = a4; /*0x629f7b*/
    v9 = (AnimClass *)operator new(0x1C8u); /*0x629f7f*/
    if ( v9 ) /*0x629f89*/
      AnimClass::ctor( /*0x629fac*/
        v9,
        *(void **)(*(unsigned int *)&g_RulesClass_Instance + 148),
        v17,
        0,
        1,
        (void *)0x600,
        0,
        0);
    result = --v12; /*0x629fb5*/
  }
  while ( v12 ); /*0x629fba*/
  return result; /*0x629fc0*/
}
} // namespace ra2::game

// 0x637840
namespace ra2::game {
int TechnoClass::IsProductionChainActive() const
{

  int Type; // eax
  int v2; // ecx
  unsigned int *v3; // edi
  signed int v4; // ebx
  signed int i; // esi
  unsigned int *v6; // edx

  LOBYTE(Type) = stru_AC4B48.__pad_194[26]; /*0x637840*/
  if ( !stru_AC4B48.__pad_194[26] ) /*0x637847*/
  {
    LOBYTE(Type) = stru_AC4B48.__pad_194[24]; /*0x637849*/
    stru_AC4B48.__pad_194[26] = 1; /*0x637853*/
    if ( stru_AC4B48.__pad_194[24] ) /*0x63785a*/
    {
      Type = BuildingClass::GetType((BuildingClass *)this); /*0x63785c*/
      if ( Type ) /*0x637863*/
      {
        v2 = *(unsigned int *)(Type + 20) - 1; /*0x637868*/
        if ( v2 >= 0 ) /*0x637869*/
        {
          Type = *(unsigned int *)(Type + 8); /*0x63786b*/
          v3 = *(unsigned int **)(Type + 4 * v2); /*0x63786e*/
          if ( v3 ) /*0x637873*/
          {
            v4 = v3[4]; /*0x637875*/
            for ( i = 0; i < v4; ++i ) /*0x63787c*/
            {
              v6 = *(unsigned int **)(v3[1] + 4 * i); /*0x637881*/
              LOBYTE(Type) = *(unsigned char *)(*v6 + 131); /*0x637886*/
              if ( !(unsigned char)Type ) /*0x63788e*/
                LOBYTE(Type) = (*(int (**)(unsigned int))(*(unsigned int *)*v6 + 332))(*v6); /*0x637892*/
            }
          }
        }
      }
    }
    stru_AC4B48.__pad_194[26] = 0; /*0x63789f*/
  }
  return Type; /*0x6378a7*/

}
} // namespace ra2::game

// 0x638840
namespace ra2::game {
int TechnoClass::RemoveBuildingFromScripts()
{

  int result; // eax
  int v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int Value; // eax
  int v7; // ebp
  int v8; // eax
  unsigned int *v9; // edi
  unsigned int v10; // eax
  int v11; // eax
  unsigned int *v12; // ecx
  unsigned int v13; // esi
  int v14; // eax
  bool v15; // [esp+7h] [ebp-Dh]
  void *Block; // [esp+8h] [ebp-Ch] BYREF
  int i; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h] BYREF

  result = BuildingClass::GetType((BuildingClass *)this); /*0x638844*/
  v2 = result; /*0x638849*/
  if ( result ) /*0x63884d*/
  {
    v3 = *(unsigned int *)(result + 20); /*0x638853*/
    v15 = v3 == 0; /*0x638859*/
    v4 = 0; /*0x63885e*/
    v18 = v3; /*0x638860*/
    for ( i = 0; i < v18; ++i ) /*0x63886a*/
    {
      v5 = *(unsigned int *)(*(unsigned int *)(v2 + 8) + 4 * v4); /*0x638875*/
      Value = Array::FindValue((Array *)v5, *(unsigned int *)v2); /*0x63887d*/
      if ( Value == -1 ) /*0x638885*/
        v7 = 0; /*0x638887*/
      else
        v7 = *(unsigned int *)(*(unsigned int *)(v5 + 4) + 4 * Value); /*0x63888e*/
      Block = (void *)v7; /*0x638893*/
      if ( v7 ) /*0x638897*/
      {
        if ( *(unsigned char *)(v7 + 12) ) /*0x63889d*/
          ScriptAction::DecrementRefCount((ScriptAction *)v5, v7); /*0x6388a7*/
        v8 = *(unsigned int *)(v7 + 8); /*0x6388ac*/
        if ( v8 != -1 ) /*0x6388b2*/
        {
          v9 = *(unsigned int **)(*(unsigned int *)(v5 + 36) + 4 * v8); /*0x6388b9*/
          v9[29] = -1; /*0x6388be*/
          TeamClass::Reset((TeamClass *)v5, 0); /*0x6388c5*/
          v10 = v9[28] - 1; /*0x6388cd*/
          v9[28] = v10; /*0x6388ce*/
          if ( !v10 ) /*0x6388d1*/
            ScriptQueue::PushEntry((ScriptQueue *)v5); /*0x6388d5*/
        }
        *(unsigned int *)(v7 + 8) = -1; /*0x6388da*/
        __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6388e9*/
        v11 = (*(int (**)(int, void **))(*(unsigned int *)v5 + 16))(v5, &Block); /*0x6388fa*/
        if ( v11 != -1 ) /*0x638900*/
          Vector4::EraseAt_Copy((Vector4 *)v5, v11); /*0x638905*/
        __3_YAXPAX_Z(Block); /*0x63890f*/
        if ( !*(unsigned int *)(v5 + 16) && v5 ) /*0x638920*/
        {
          TechnoClass::ClearScriptPlanningData((TechnoClass *)v5); /*0x638924*/
          __3_YAXPAX_Z((void *)v5); /*0x63892a*/
        }
      }
      v4 = i + 1; /*0x63893a*/
    }
    if ( !v15 ) /*0x63894f*/
    {
      v18 = *(unsigned int *)v2; /*0x638957*/
      v12 = *(unsigned int **)(v18 + 540); /*0x63895b*/
      v13 = v12[12]; /*0x638961*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v12) && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x638974*/
        v13 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x638976*/
      if ( v13 < 0x18 ) /*0x63897b*/
        *(&stru_AC4B48.SidebarClass_field_0x3C + v13) = (*(&stru_AC4B48.SidebarClass_field_0x3C + v13) - 1) /*0x638995*/
                                                      & ((*(&stru_AC4B48.SidebarClass_field_0x3C + v13) - 1 < 0) - 1);
      v14 = (*(int (**)(char *, int *))(*(unsigned int *)&stru_AC4B48.__pad_B8[64] + 16))( /*0x6389ac*/
              &stru_AC4B48.__pad_B8[64],
              &v18);
      if ( v14 != -1 && v14 < *(int *)&stru_AC4B48.__pad_B8[80] ) /*0x6389be*/
      {
        --*(unsigned int *)&stru_AC4B48.__pad_B8[80]; /*0x6389c3*/
        for ( ; /*0x6389c9*/
              v14 < *(int *)&stru_AC4B48.__pad_B8[80];
              *(unsigned int *)(*(unsigned int *)&stru_AC4B48.__pad_B8[68] + 4 * v14 - 4) = *(unsigned int *)(*(unsigned int *)&stru_AC4B48.__pad_B8[68]
                                                                                          + 4 * v14) )
        {
          ++v14; /*0x6389d1*/
        }
      }
    }
    result = (*(int (**)(int))(*(unsigned int *)(v2 + 4) + 12))(v2 + 4); /*0x6389ee*/
    *(unsigned int *)(v2 + 140) = -1; /*0x6389f1*/
    *(unsigned int *)(v2 + 144) = -1; /*0x6389f7*/
    *(unsigned int *)(v2 + 148) = -1; /*0x6389fd*/
    *(unsigned char *)(v2 + 152) = 0; /*0x638a03*/
    *(unsigned char *)(v2 + 153) = 0; /*0x638a0a*/
  }
  return result; /*0x638a12*/

}
} // namespace ra2::game

// 0x638A80
namespace ra2::game {
int TechnoClass::CreatePlanningNode()
{
  int v2; // eax
  int v3; // esi
  int v4; // eax

  v2 = operator new(0x9Cu); /*0x638a89*/
  if ( v2 ) /*0x638a95*/
  {
    *(unsigned int *)(v2 + 8) = 0; /*0x638a97*/
    this->vtable4 = 0; /*0x638a9a*/
    this->uniqueId = 1; /*0x638a9d*/
    this->u32_11 = 0; /*0x638aa1*/
    /* X11: vtable install elided (implicit via class virtuals 0x638aa4) — binary-proven install, was 0 */
    this->nextArrayIndex = 10; /*0x638aab*/
    this->abstractFlags = 0; /*0x638ab2*/
    this->referenceCount = 0; /*0x638ab5*/
    this->isOnMap = 0; /*0x638abb*/
    this->onBridge = -1; /*0x638abe*/
    this->isAliveFlag = -1; /*0x638ac4*/
    this->lastLayer = -1; /*0x638aca*/
    this->isInLogic = 0; /*0x638ad0*/
    this->isVisible = 0; /*0x638ad6*/
    *(unsigned int *)this = this; /*0x638adc*/
    v3 = this; /*0x638ade*/
  }
  else
  {
    v3 = 0; /*0x638ae2*/
  }
  if ( *(int *)&DataGlobal_AC4C88 < *(int *)&DataGlobal_AC4C80 /*0x638b17*/
    || (DataGlobal_AC4C85 || !*(unsigned int *)&DataGlobal_AC4C80)
    && *(int *)&DataGlobal_AC4C8C > 0
    && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*(unsigned int *)&DataGlobal_AC4C78 + 8))(
         &DataGlobal_AC4C78,
         *(unsigned int *)&DataGlobal_AC4C80 + *(unsigned int *)&DataGlobal_AC4C8C,
         0) )
  {
    v4 = (*(unsigned int *)&DataGlobal_AC4C88)++; /*0x638b24*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_AC4C7C + 4 * v4) = v3; /*0x638b33*/
  }
  BuildingClass::SetType((BuildingClass *)this, v3); /*0x638b39*/
  return v3; /*0x638b40*/
}
} // namespace ra2::game

// 0x63BE60
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
  ArrayClass *Type; // esi
  int (__thiscall **vtable0)(BuildingClass *, Coord3D *); // eax
  unsigned int *v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  void *v8; // eax
  int (__thiscall **v9)(BuildingClass *); // edx
  int v10; // edi
  int v11; // eax
  int isSelected; // ecx
  char *v13; // esi
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  int q008; // eax
  int v17; // esi
  char *v18; // edi
  Coord3D *Viewport; // eax
  int *v20; // eax
  ObjectClass *v21; // ebp
  unsigned int v22; // eax
  Coord3D *v23; // eax
  int *v24; // eax
  char v25; // al
  int (__thiscall **v26)(BuildingClass *); // edx
  int v27; // esi
  char *v28; // edi
  Coord3D *v29; // eax
  int *v30; // eax
  Coord3D *v31; // eax
  int *v32; // eax
  unsigned int v33; // eax
  Coord3D *v34; // eax
  int *v35; // eax
  int *v36; // eax
  int v37; // ebx
  unsigned int v38; // eax
  ArrayClass *v39; // edi
  int *ScreenPos; // eax
  const void *TypeEntry; // eax
  const void *v42; // edi
  int *v43; // eax
  int v44; // esi
  ObjectClass *v45; // ebx
  int v46; // esi
  unsigned int updated; // eax
  bool v48; // [esp+23h] [ebp-165h]
  char v49; // [esp+23h] [ebp-165h]
  int v50; // [esp+24h] [ebp-164h] BYREF
  int v51; // [esp+28h] [ebp-160h]
  ObjectClass *v52; // [esp+2Ch] [ebp-15Ch]
  int v53; // [esp+30h] [ebp-158h] BYREF
  int v54; // [esp+34h] [ebp-154h]
  int v55; // [esp+38h] [ebp-150h]
  int v56; // [esp+3Ch] [ebp-14Ch]
  int v57; // [esp+40h] [ebp-148h]
  int v58; // [esp+44h] [ebp-144h] BYREF
  int v59; // [esp+48h] [ebp-140h]
  int v60; // [esp+4Ch] [ebp-13Ch]
  Coord3D v61; // [esp+54h] [ebp-134h] BYREF
  int v62; // [esp+60h] [ebp-128h]
  int v63; // [esp+64h] [ebp-124h] BYREF
  int v64; // [esp+68h] [ebp-120h]
  Coord3D v65; // [esp+74h] [ebp-114h] BYREF
  ArrayClass *v66; // [esp+84h] [ebp-104h]
  int v67; // [esp+88h] [ebp-100h] BYREF
  int q004; // [esp+8Ch] [ebp-FCh]
  int v69; // [esp+90h] [ebp-F8h]
  ObjectClass *v70; // [esp+98h] [ebp-F0h]
  unsigned int v71[3]; // [esp+9Ch] [ebp-ECh] BYREF
  unsigned short v72[56]; // [esp+A8h] [ebp-E0h] BYREF
  char v73[112]; // [esp+118h] [ebp-70h] BYREF

  Type = (ArrayClass *)BuildingClass::GetType(hpp); /*0x63be75*/
  vtable0 = (int (__thiscall **)(BuildingClass *, Coord3D *))hpp->vfptr; /*0x63be77*/
  v66 = Type; /*0x63be7d*/
  v4 = vtable0->q058(hpp, &v65); /*0x63be81*/
  v71[0] = *v4; /*0x63be86*/
  v71[1] = v4[1]; /*0x63be90*/
  v71[2] = v4[2]; /*0x63bead*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v71, &v58); /*0x63beb4*/
  v5 = DSurface_ViewBounds.field_0 + v58; /*0x63becd*/
  v59 += (int)g_Map_VisibleRect; /*0x63bed3*/
  v63 = DSurface_ViewBounds.field_0 + v58; /*0x63bed7*/
  v64 = v59; /*0x63bedb*/
  v6 = *((unsigned int *)stru_A80220.vfptr3 + TeamClass::GetLeaderIndex((TeamClass *)hpp)) + 22265; /*0x63beef*/
  v50 = ((v50) & 0xFFFF0000u) | ((unsigned int)(*(unsigned short *)v6) & 0xFFFFu); /*0x63bef7*/
  v50 = ((v50) & 0xFF00FFFFu) | (((unsigned int)(*(unsigned char *)(v6 + 2)) & 0xFFu) << 16); /*0x63bf03*/
  v52 = (ObjectClass *)ColorLerpAndPack((HouseClass *)&v50, &byte_A83CD9, 0x50u); /*0x63bf13*/
  v7 = *((unsigned int *)stru_A80220.vfptr3 + TeamClass::GetLeaderIndex((TeamClass *)hpp)) + 22265; /*0x63bf27*/
  v50 = ((v50) & 0xFFFF0000u) | ((unsigned int)(*(unsigned short *)v7) & 0xFFFFu); /*0x63bf30*/
  v50 = ((v50) & 0xFF00FFFFu) | (((unsigned int)(*(unsigned char *)(v7 + 2)) & 0xFFu) << 16); /*0x63bf3d*/
  v70 = (ObjectClass *)ColorLerpAndPack((HouseClass *)&v50, (uint8_t *)&stru_A80220, 0x64u); /*0x63bf4c*/
  if ( Type ) /*0x63bf53*/
    v8 = Type->abstractFlags; /*0x63bf59*/
  else
    v8 = 0; /*0x63bf55*/
  v9 = (int (__thiscall **)(BuildingClass *))hpp->vfptr; /*0x63bf5c*/
  v51 = ((v51) & 0xFFFF00FFu) | (((unsigned int)((int)v8 > 0) & 0xFFu) << 8); /*0x63bf63*/
  v48 = v9[97](hpp) != 5 && !BuildingClass::IsIdleWithNoCaptives(hpp) && ((unsigned char)((v51) >> 8) || hpp->isSelected); /*0x63bf97*/
  v67 = 4; /*0x63bfb3*/
  v10 = PackRGB565(byte_A83CD9, word_A83CDA, g_abs_A83CDB); /*0x63bfc2*/
  if ( !hpp ) /*0x63bfc4*/
    goto LABEL_15; /*0x63bfc4*/
  v11 = PackRGBFromBytes(&stru_A80220); /*0x63bfcb*/
  v50 = v11; /*0x63bfd6*/
  if ( *(unsigned int *)&g_ScriptActionPool ) /*0x63bfdc*/
  {
    if ( Array::FindValue(*(Array **)&g_ScriptActionPool, (int)hpp) != -1 ) /*0x63bfe7*/
      goto LABEL_16; /*0x63bfe7*/
    goto LABEL_15; /*0x63bfe7*/
  }
  isSelected = (uint8_t)hpp->isSelected; /*0x63bff3*/
  v50 = v11; /*0x63bff9*/
  if ( !(unsigned char)isSelected ) /*0x63bfff*/
  LABEL_15:
    v50 = v10; /*0x63c001*/
  LABEL_16:
  if ( Type && (*(unsigned int *)(*(unsigned int *)Type->vtable1 + 172) == 28 || *(unsigned int *)(*(unsigned int *)Type->vtable1 + 180) == 28) ) /*0x63c022*/
  {
    v13 = &Type->q01D; /*0x63c028*/
    memcpy(v72, v13, 0x6Cu); /*0x63c03e*/
    v13 += 108; /*0x63c03e*/
    v72[54] = *(unsigned short *)v13; /*0x63c040*/
    v72[55] = ((v72[55]) & 0xFFFFFF00u) | ((unsigned int)(v13[2]) & 0xFFu); /*0x63c046*/
    v65 = *(Coord3D *)GetScenarioClassActionCoords(&v63, v72); /*0x63c04e*/
    v14 = Coord3D::Set(&v61, -1, -1, -1); /*0x63c06a*/
    if ( (uint8_t)Coord3D::Equals(&v65, v14) && hpp ) /*0x63c07f*/
    {
      v15 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))hpp->vfptr + 22))(hpp, &v53); /*0x63c08b*/
      *(unsigned int *)v65.__pad_000 = *v15; /*0x63c090*/
      v65.u32_4 = v15[1]; /*0x63c097*/
      q008 = v15[2]; /*0x63c09b*/
    }
    else
    {
      q008 = v65.u32_8; /*0x63c0a0*/
    }
    v69 = q008; /*0x63c0ac*/
    v67 = *(unsigned int *)v65.__pad_000; /*0x63c0b3*/
    q004 = v65.u32_4; /*0x63c0c7*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v67, &v63); /*0x63c0ce*/
    v17 = DSurface_ViewBounds.field_0 + v63; /*0x63c0e6*/
    v18 = (char *)g_Map_VisibleRect + v64; /*0x63c0ec*/
    Viewport = (Coord3D *)Display::GetViewport((int *)v65.q000); /*0x63c0ee*/
    v61 = *Viewport; /*0x63c0f5*/
    v62 = *Viewport->Coord3D_field_0x04.q000; /*0x63c119*/
    v20 = ComputeBounds(&v65, 6, v5, v59); /*0x63c11d*/
    v53 = *v20; /*0x63c124*/
    v54 = v20[1]; /*0x63c12b*/
    v55 = v20[2]; /*0x63c136*/
    v56 = v20[3]; /*0x63c140*/
    ShrinkRect(&v53, -1); /*0x63c144*/
    v21 = v52; /*0x63c149*/
    DSurface_Composite->vt_slot_16(/*0x63c160*/
      DSurface_Composite, &v61, &v53, v52);
    DrawTacticalLine2D(0, (int)v21, v5, v59, v17, (int)v18, 1); /*0x63c171*/
    if ( ((signed char)(v72[6])) == 11 ) /*0x63c181*/
    {
      v22 = Memory::Alloc76(); /*0x63c183*/
    }
    else
    {
      if ( ((signed char)(v72[6])) != 29 ) /*0x63c18d*/
      {
  LABEL_29:
        v23 = (Coord3D *)Display::GetViewport((int *)v65.q000); /*0x63c1ad*/
        v61 = *v23; /*0x63c1b8*/
        v62 = *v23->Coord3D_field_0x04.q000; /*0x63c1d3*/
        v24 = ComputeBounds(&v65, 6, v17, (int)v18); /*0x63c1dc*/
        v53 = *v24; /*0x63c1e3*/
        v54 = v24[1]; /*0x63c1ea*/
        v55 = v24[2]; /*0x63c1f1*/
        v56 = v24[3]; /*0x63c1fc*/
        ShrinkRect(&v53, -1); /*0x63c203*/
        (*(void (__thiscall **)(AudioStream *, Coord3D *, int *, ObjectClass *))(*(unsigned int *)DSurface_Composite->q000 /*0x63c21b*/
                                                                               + 16))(
          DSurface_Composite,
          &v61,
          &v53,
          v21);
        return; /*0x63c228*/
      }
      v22 = Factory::IdleHandler(); /*0x63c18f*/
    }
    if ( v22 != -1 ) /*0x63c197*/
      DrawTacticalWaypoint((int)v21, v50, v5, v59, v17, (int)v18, v22); /*0x63c1a8*/
    goto LABEL_29; /*0x63c1a8*/
  }
  if ( !v48 ) /*0x63c22f*/
  {
    if ( !(unsigned char)((v51) >> 8) ) /*0x63c56f*/
      return; /*0x63c56f*/
    goto LABEL_49; /*0x63c56f*/
  }
  v25 = (*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 299))(hpp); /*0x63c23a*/
  v26 = (int (__thiscall **)(BuildingClass *))hpp->vfptr; /*0x63c240*/
  v57 = ((v57) & 0xFFFF00FFu) | (((unsigned int)(v25) & 0xFFu) << 8); /*0x63c245*/
  v49 = v26[300](hpp); /*0x63c253*/
  v65 = *(Coord3D *)(*((int (__thiscall **)(BuildingClass *, int *))hpp->vfptr + 267))(hpp, &v53); /*0x63c265*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v65, &v67); /*0x63c287*/
  v27 = DSurface_ViewBounds.field_0 + v67; /*0x63c2a6*/
  v28 = (char *)g_Map_VisibleRect + q004; /*0x63c2a8*/
  if ( hpp->inLimbo ) /*0x63c2a0*/
  {
    v29 = (Coord3D *)Display::GetViewport(&v63); /*0x63c2b6*/
    v61 = *v29; /*0x63c2bd*/
    v62 = *v29->Coord3D_field_0x04.q000; /*0x63c2dd*/
    v30 = ComputeBounds(&v63, 6, v27, (int)v28); /*0x63c2e1*/
    v53 = *v30; /*0x63c2e8*/
    v54 = v30[1]; /*0x63c2ef*/
    v55 = v30[2]; /*0x63c2f6*/
    v56 = v30[3]; /*0x63c301*/
    ShrinkRect(&v53, -1); /*0x63c308*/
    DSurface_Composite->vt_slot_16(/*0x63c324*/
      DSurface_Composite, &v61, &v53, v52);
    return; /*0x63c331*/
  }
  v31 = (Coord3D *)Display::GetViewport(&v67); /*0x63c336*/
  v61 = *v31; /*0x63c33d*/
  v62 = *v31->Coord3D_field_0x04.q000; /*0x63c35a*/
  v32 = ComputeBounds(&v67, 6, v5, v59); /*0x63c365*/
  v53 = *v32; /*0x63c36c*/
  v54 = v32[1]; /*0x63c373*/
  v55 = v32[2]; /*0x63c37a*/
  v56 = v32[3]; /*0x63c385*/
  ShrinkRect(&v53, -1); /*0x63c38c*/
  DSurface_Composite->vt_slot_16(/*0x63c3a8*/
    DSurface_Composite, &v61, &v53, v52);
  DrawTacticalLine2D(0, (int)v52, v5, v59, v27, (int)v28, 1); /*0x63c3bb*/
  if ( !(unsigned char)((v57) >> 8) || v49 ) /*0x63c3ce*/
  {
    if ( (*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 97))(hpp) == 11 ) /*0x63c3f5*/
    {
      v33 = Memory::Alloc76(); /*0x63c3f7*/
  LABEL_39:
      if ( v33 != -1 ) /*0x63c3ff*/
        DrawTacticalWaypoint((int)v52, v50, v5, v59, v27, (int)v28, v33); /*0x63c412*/
    }
  }
  else if ( (*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 301))(hpp) == 29 ) /*0x63c3de*/
  {
    v33 = Factory::IdleHandler(); /*0x63c3e0*/
    goto LABEL_39; /*0x63c3e5*/
  }
  v34 = (Coord3D *)Display::GetViewport(&v58); /*0x63c417*/
  v61 = *v34; /*0x63c422*/
  v62 = *v34->Coord3D_field_0x04.q000; /*0x63c43d*/
  v35 = ComputeBounds(&v58, 6, v27, (int)v28); /*0x63c446*/
  v53 = *v35; /*0x63c44d*/
  v54 = v35[1]; /*0x63c454*/
  v55 = v35[2]; /*0x63c45b*/
  v56 = v35[3]; /*0x63c466*/
  ShrinkRect(&v53, -1); /*0x63c46d*/
  DSurface_Composite->vt_slot_16(/*0x63c489*/
    DSurface_Composite, &v61, &v53, v52);
  if ( v49 ) /*0x63c492*/
  {
    v36 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))hpp->vfptr + 302))(hpp, &v53); /*0x63c4a2*/
    v58 = *v36; /*0x63c4aa*/
    v59 = v36[1]; /*0x63c4b1*/
    v60 = v36[2]; /*0x63c4c8*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v58, &v63); /*0x63c4cc*/
    v37 = DSurface_ViewBounds.field_0 + v63; /*0x63c4e0*/
    v64 += (int)g_Map_VisibleRect; /*0x63c4f4*/
    DrawTacticalLine2D(0, (int)v52, v27, (int)v28, DSurface_ViewBounds.field_0 + v63, v64, 1); /*0x63c4f8*/
    if ( (*((int (__thiscall **)(BuildingClass *))hpp->vfptr + 301))(hpp) == 29 ) /*0x63c50b*/
    {
      v38 = Factory::IdleHandler(); /*0x63c50d*/
      if ( v38 != -1 ) /*0x63c515*/
        DrawTacticalWaypoint((int)v52, v50, v27, (int)v28, v37, v64, v38); /*0x63c528*/
    }
    DrawActionLineSegment(v52, v37, v64); /*0x63c537*/
    return; /*0x63c546*/
  }
  if ( !(unsigned char)((v51) >> 8) ) /*0x63c54d*/
    return; /*0x63c54d*/
  v63 = v27; /*0x63c553*/
  Type = v66; /*0x63c557*/
  v64 = (int)v28; /*0x63c55b*/
  v67 = 3; /*0x63c55f*/
  LABEL_49:
  v39 = (ArrayClass *)ArrayClass::GetAt_Wrap(Type, 0); /*0x63c575*/
  v66 = v39; /*0x63c587*/
  ScreenPos = ScriptAction::GetScreenPos((ScriptAction *)v39, &v65); /*0x63c58b*/
  v58 = *ScreenPos; /*0x63c592*/
  v59 = ScreenPos[1]; /*0x63c59c*/
  TypeEntry = (const void *)BuildingClass::GetTypeEntry((BuildingClass *)v39, (int)hpp); /*0x63c5a0*/
  v42 = TypeEntry; /*0x63c5a5*/
  if ( TypeEntry ) /*0x63c5a9*/
  {
    v43 = ActionScenarioClassCoordToScreen((int *)v65.q000, TypeEntry, (int)hpp); /*0x63c5b2*/
    v58 = *v43; /*0x63c5b9*/
    v59 = v43[1]; /*0x63c5c0*/
  }
  v44 = *(unsigned int *)&Type->q018[116]; /*0x63c5c4*/
  if ( v44 == -1 || (v45 = v70, v44 > 0) ) /*0x63c5dd*/
    v45 = v52; /*0x63c5df*/
  v46 = v63; /*0x63c5e7*/
  DrawActionLineSegment(v45, v63, v64); /*0x63c5ef*/
  globalHelper_03D960(v67, (int)v45, v46, v64, v58, v59); /*0x63c60a*/
  if ( v42 ) /*0x63c611*/
    DrawActionLineSegment(v45, v58, v59); /*0x63c61f*/
  memcpy(v72, (const void *)BuildingClass::CopyTypeDataForRender((BuildingClass *)v66, (int)v73, (int)hpp), 0x6Fu); /*0x63c644*/
  updated = BuildingClass::updateAnimationState((char *)v72); /*0x63c650*/
  if ( updated != -1 ) /*0x63c658*/
    DrawTacticalWaypoint((int)v45, v50, v63, v64, v58, v59, updated); /*0x63c675*/
}
// 0x663030
namespace ra2::game {
int TechnoClass::CalculateDamage()
{

  double v1; // st7
  unsigned int *vtable3; // edx
  int v4; // ecx
  int v5; // ecx
  int *v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  void *WarheadVersusMultiplier; // eax
  double v16; // [esp+0h] [ebp-68h]
  double v17; // [esp+0h] [ebp-68h]
  __int64 v18; // [esp+0h] [ebp-68h]
  int v19; // [esp+18h] [ebp-50h]
  unsigned int *v20; // [esp+1Ch] [ebp-4Ch]
  int v21; // [esp+20h] [ebp-48h]
  int v22; // [esp+20h] [ebp-48h]
  double v23; // [esp+20h] [ebp-48h]
  int v24; // [esp+28h] [ebp-40h]
  double v25; // [esp+28h] [ebp-40h]
  AnimClass *v26; // [esp+28h] [ebp-40h]
  __int16 v27[2]; // [esp+30h] [ebp-38h] BYREF
  int v28; // [esp+34h] [ebp-34h] BYREF
  int v30; // [esp+40h] [ebp-28h]
  int v32; // [esp+50h] [ebp-18h] BYREF
  int v33; // [esp+54h] [ebp-14h]
  unsigned int v34; // [esp+58h] [ebp-10h]
  int v35; // [esp+5Ch] [ebp-Ch]
  int v36; // [esp+60h] [ebp-8h]
  int v37; // [esp+64h] [ebp-4h]

  _ESI = this; /*0x66303b*/
  GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, (int)this->vfptr3); /*0x663047*/
  vtable3 = _ESI->vfptr3; /*0x66304c*/
  v4 = vtable3[433]; /*0x663054*/
  if ( v4 == *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x663062*/
  {
    v20 = (unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1200); /*0x66306a*/
    if ( BYTE1(_ESI->customSound_controller[0]) ) /*0x66306e*/
    {
      v19 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4024); /*0x66307b*/
      goto LABEL_13; /*0x66307f*/
    }
    v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4016); /*0x663081*/
  }
  else if ( v4 == *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x66308f*/
  {
    v20 = (unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1304); /*0x663097*/
    if ( BYTE1(_ESI->customSound_controller[0]) ) /*0x66309b*/
    {
      v19 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4036); /*0x6630a8*/
      goto LABEL_13; /*0x6630ac*/
    }
    v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4032); /*0x6630ae*/
  }
  else
  {
    v20 = (unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1252); /*0x6630bc*/
    if ( BYTE1(_ESI->customSound_controller[0]) ) /*0x6630c0*/
    {
      v19 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4028); /*0x6630cd*/
      goto LABEL_13; /*0x6630d1*/
    }
    v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4020); /*0x6630d3*/
  }
  v19 = v5; /*0x6630d9*/
LABEL_13:
  v6 = vtable3 + 39; /*0x6630dd*/
  v21 = v20[10]; /*0x6630ef*/
  v35 = *v6; /*0x6630f3*/
  __asm { fild dword ptr [esp+68h+var_48] } /*0x6630f7*/
  v36 = v6[1]; /*0x6630fe*/
  __asm /*0x663102*/
  {
    fstp [esp+68h+var_20]
    fld dword ptr [esi+54h]
  }
  __asm { fstp [esp+68h+var_68]; double }
  v37 = v6[2]; /*0x66310f*/
  Math::ArcTan2(v16); /*0x663113*/
  __asm { fmul [esp+68h+var_20] } /*0x663118*/
  LOWORD(v7) = Math::RoundToInt(v1); /*0x66311f*/
  v24 = v7; /*0x663127*/
  v22 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)_ESI->vfptr3 + 904), &v28) - 0x3FFF; /*0x663144*/
  __asm /*0x663148*/
  {
    fild dword ptr [esp+60h+var_48]
    fmul ds:dbl_7E2810
    fstp [esp+60h+var_48]
    fild [esp+60h+var_40]
  }
  __asm
  {
    fstp [esp+68h+var_30]
    fild [esp+68h+var_8]
    fstp qword ptr [esp+68h+var_40]
  }
  Math::SinCos(v23); /*0x663170*/
  __asm /*0x663175*/
  {
    fmul [esp+68h+var_30]
    fsubr qword ptr [esp+68h+var_40]
  }
  LOWORD(v8) = Math::RoundToInt(v1); /*0x66317d*/
  LODWORD(v25) = v8; /*0x663184*/
  Math::ArcTan2(v23); /*0x663188*/
  __asm /*0x66318d*/
  {
    fmul [esp+70h+var_30]
    fiadd [esp+70h+var_C]
  }
  LOWORD(v9) = Math::RoundToInt(v1); /*0x663195*/
  __asm { fld dword ptr [esi+54h] } /*0x66319a*/
  __asm { fstp [esp+70h+var_68]; double }
  v10 = v9; /*0x6631ac*/
  v30 = v37; /*0x6631ae*/
  Math::SinCos(v17); /*0x6631b2*/
  __asm { fmul [esp+68h+var_20] } /*0x6631b7*/
  __asm { fiadd [esp+60h+var_4] }
  LOWORD(v11) = Math::RoundToInt(v1); /*0x6631c2*/
  v34 = v11; /*0x6631c7*/
  v32 = v10; /*0x6631d4*/
  v33 = LODWORD(v25); /*0x6631da*/
  LOWORD(v23) = v10 / 256; /*0x6631e1*/
  WORD1(v23) = SLODWORD(v25) / 256; /*0x6631f4*/
  *(unsigned int *)v27 = LODWORD(v23); /*0x6631fd*/
  if ( BYTE1(_ESI->customSound_controller[0]) ) /*0x663201*/
    v12 = v20[9]; /*0x66320c*/
  else
    v12 = v20[8]; /*0x663215*/
  v26 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x663225*/
  if ( v26 ) /*0x66322b*/
  {
    v13 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v27) + 59); /*0x663240*/
    v18 = v34; /*0x66325a*/
    LODWORD(v18) = Return::HRESULT_Fail(v32, v33, v34); /*0x663266*/
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v12, v19, v13, &v32); /*0x66327d*/
    AnimClass::ctor(v26, WarheadVersusMultiplier, &v32, 0, 1, (void *)0x2600, (void *)v18, SBYTE4(v18)); /*0x663287*/
  }
  CreateSmokeEffectAt(v12, v19, v32, v33, v34, 0, 0); /*0x6632af*/
  PlaySoundEffectAt(&v32, v12, (unsigned int *)_ESI->vfptr3, v19, 1, 0); /*0x6632c7*/
  return (*(int (**)(void *))(*(unsigned int *)_ESI->vfptr3 + 248))(_ESI->vfptr3); /*0x6632d9*/

}
} // namespace ra2::game

// 0x6A92E0
namespace ra2::game {
void * ObjectClass::GetSidebarTooltip(int a2)
{

  int v2; // eax
  int v3; // edx
  char *v4; // eax
  int v5; // ecx
  unsigned int *v7; // eax
  unsigned int *v8; // esi
  int v9; // edx
  wchar_t *StringCSF; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // ecx
  const wchar_t *v14; // [esp-8h] [ebp-Ch]
  const wchar_t *v15; // [esp-4h] [ebp-8h]
  int v16; // [esp-4h] [ebp-8h]

  v2 = a2 + 2 * this->ambientSoundController[2]; /*0x6a92e8*/
  if ( !MEMORY[0xA8E9A0] ) /*0x6a92f3*/
    return 0; /*0x6a92f3*/
  v3 = this->customSound_controller[1]; /*0x6a92f9*/
  if ( v2 >= v3 || v3 >= 75 ) /*0x6a9307*/
    return 0; /*0x6a9307*/
  v4 = (char *)this + 52 * v2; /*0x6a9313*/
  v5 = *((unsigned int *)v4 + 23); /*0x6a9316*/
  if ( v5 == 31 ) /*0x6a931c*/
    return *(wchar_t **)(*((unsigned int *)dword_A8E334 + *((unsigned int *)v4 + 22)) + 96); /*0x6a932e*/
  v7 = (unsigned int *)TechnoTypeClass::GetByTypeAndIndex(v5, *((unsigned int *)v4 + 22)); /*0x6a9334*/
  v8 = v7; /*0x6a9339*/
  if ( !v7 ) /*0x6a933d*/
    return 0; /*0x6a93e2*/
  v9 = *v7; /*0x6a9348*/
  if ( byte_884B8C ) /*0x6a9354*/
  {
    v15 = (const wchar_t *)(*(int (**)(unsigned int *, Object *))(v9 + 132))(v7, MEMORY[0xA83D4C]); /*0x6a935c*/
    StringCSF = GetStringCSF((wchar_t *)stru_83FA64.Type, 0, MEMORY[0x83FAC4], 3180); /*0x6a936e*/
    swprintf(&SidebarClass_TooltipBuffer, (const size_t)StringCSF, v15); /*0x6a9379*/
  }
  else
  {
    v16 = (*(int (**)(unsigned int *, Object *))(v9 + 132))(v7, MEMORY[0xA83D4C]); /*0x6a938c*/
    v14 = v8->ptr_30; /*0x6a938d*/
    v11 = GetStringCSF((wchar_t *)&stru_83FA64.RussianVoice[3], 0, MEMORY[0x83FAC4], 3182); /*0x6a939f*/
    swprintf(&SidebarClass_TooltipBuffer, (const size_t)v11, v14, v16); /*0x6a93aa*/
  }
  v12 = wcslen(&SidebarClass_TooltipBuffer); /*0x6a93b7*/
  if ( v12 > 0 ) /*0x6a93c1*/
  {
    v13 = &SidebarClass_TooltipBuffer; /*0x6a93c3*/
    do /*0x6a93d7*/
    {
      if ( *v13 == 32 ) /*0x6a93cc*/
        *v13 = 10; /*0x6a93ce*/
      ++v13; /*0x6a93d3*/
      --v12; /*0x6a93d6*/
    }
    while ( v12 ); /*0x6a93d7*/
  }
  return &SidebarClass_TooltipBuffer; /*0x6a9327*/

}
} // namespace ra2::game

// 0x6AC210
namespace ra2::game {
void * ObjectClass::GetTooltipText(int a2)
{
  wchar_t *Available; // edi
  ShapeButtonClass *v4; // ecx
  wchar_t *v5; // eax
  wchar_t *StringCSF; // eax

  Available = PowerClass::getAvailable((PowerClass *)this, a2); /*0x6ac21f*/
  if ( !Available ) /*0x6ac223*/
  {
    if ( a2 == 200 ) /*0x6ac22f*/
    {
      Available = GetStringCSF(aTipScrollup, 0, g_Str_File_Sidebar_CPP, 5069); /*0x6ac247*/
      v4 = &g_SidebarFlag; /*0x6ac249*/
      goto LABEL_4; /*0x6ac249*/
    }
    if ( a2 == 201 ) /*0x6ac29b*/
    {
      Available = GetStringCSF(aTipScrolldown, 0, g_Str_File_Sidebar_CPP, 5075); /*0x6ac2b3*/
      v4 = &stru_B0B328; /*0x6ac2b5*/
      goto LABEL_4; /*0x6ac2ba*/
    }
    if ( a2 >= 203 && a2 < 207 ) /*0x6ac2ce*/
    {
      switch ( a2 ) /*0x6ac2d8*/
      {
        case 203: /*0x6ac2d8*/
          StringCSF = GetStringCSF((char *)aTipTab1, 0, g_Str_File_Sidebar_CPP, 5083); /*0x6ac2eb*/
          break;
        case 204: /*0x6ac2d8*/
          StringCSF = GetStringCSF((char *)aTipTab2, 0, g_Str_File_Sidebar_CPP, 5085); /*0x6ac303*/
          break;
        case 205: /*0x6ac2d8*/
          StringCSF = GetStringCSF(word_83FBD8, 0, g_Str_File_Sidebar_CPP, 5087); /*0x6ac31b*/
          break;
        default:
          StringCSF = GetStringCSF(&aTipTab4, 0, g_Str_File_Sidebar_CPP, 5089); /*0x6ac333*/
          break;
      }
      Available = StringCSF; /*0x6ac338*/
      v4 = &stru_B07C48 + 8 * a2 - 1624; /*0x6ac340*/
  LABEL_4:
      if ( !(uint8_t)DialogControl::IsHidden((DialogControl *)v4) ) /*0x6ac24e*/
      {
        v5 = GetStringCSF(aTipDisabled, 0, g_Str_File_Sidebar_CPP, 5108); /*0x6ac271*/
        swprintf(&word_B079B0, (const size_t)aSS_0, Available, v5); /*0x6ac282*/
        return &word_B079B0; /*0x6ac292*/
      }
      return Available; /*0x6ac25a*/
    }
    v8 = 26; /*0x6ac356*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6ac350*/
      v8 = 18; /*0x6ac35f*/
    if ( a2 >= 1000 /*0x6ac3a0*/
      && a2 < 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v8 + g_DSurface_SidebarBounds - 7) / 50) + 1000 )
    {
      return ObjectClass::GetSidebarTooltip( /*0x6ac3cb*/
               (ObjectClass *)&this->__pad_CD2[3988 * this->u32_539C + 2162],
               a2 - 1000);
    }
  }
  return Available; /*0x6ac28f*/
}
} // namespace ra2::game

// 0x6B0AE0
namespace ra2::game {
int TechnoClass::MutateAll()
{

  TechnoClass *v3; // ebx
  int result; // eax
  int nextArrayIndex; // esi
  int v6; // ecx
  char *vtable3; // edx
  int *v8; // edi
  int v9; // ebp
  int v10; // ebx
  int *v11; // esi
  char v12; // al
  int v13; // eax
  int v14; // edx
  unsigned int *v15; // edi
  int v16; // [esp+18h] [ebp-14h]
  unsigned int v18[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = this; /*0x6b0ae4*/
  result = this->occupant; /*0x6b0aea*/
  if ( result ) /*0x6b0aef*/
  {
    nextArrayIndex = stru_A80220.nextArrayIndex; /*0x6b0af7*/
    v16 = 0; /*0x6b0b03*/
    result = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x6b0b0b*/
    v6 = 0; /*0x6b0b10*/
    if ( nextArrayIndex > 0 ) /*0x6b0b14*/
    {
      vtable3 = (char *)stru_A80220.vfptr3; /*0x6b0b1c*/
      while ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)vtable3 + 52) + 188) != result ) /*0x6b0b29*/
      {
        ++v6; /*0x6b0b2b*/
        vtable3 += 4; /*0x6b0b2c*/
        if ( v6 >= nextArrayIndex ) /*0x6b0b31*/
          goto LABEL_8; /*0x6b0b31*/
      }
      result = *((unsigned int *)stru_A80220.vfptr3 + v6); /*0x6b0b35*/
      v16 = result; /*0x6b0b38*/
    }
LABEL_8:
    v8 = 0; /*0x6b0b3c*/
    v9 = v3->ambientSoundController[3] - 1; /*0x6b0b41*/
    if ( v9 >= 0 ) /*0x6b0b42*/
    {
      v10 = a2; /*0x6b0b48*/
      while ( 1 ) /*0x6b0b53*/
      {
        result = *(unsigned int *)(this->ambientSoundController[0] + 4 * v9); /*0x6b0b53*/
        v11 = *(int **)result; /*0x6b0b56*/
        if ( *(unsigned int *)result && MEMORY[0xA8E9A0] ) /*0x6b0b67*/
        {
          v12 = *((unsigned char *)v11 + 129); /*0x6b0b6d*/
          v11[183] = 0; /*0x6b0b73*/
          if ( v12 ) /*0x6b0b7f*/
          {
            (*(void (**)(int *, int))(*v11 + 224))(v11, v10); /*0x6b0b86*/
            result = (*(int (**)(int *))(*v11 + 248))(v11); /*0x6b0b90*/
          }
          else
          {
            if ( v10 ) /*0x6b0b9a*/
            {
              v13 = *(unsigned int *)(v10 + 540); /*0x6b0b9c*/
LABEL_18:
              (*(void (**)(int *, int, int))(*v11 + 980))(v11, v13, 1); /*0x6b0bb4*/
              (*(void (**)(int *))(*v11 + 976))(v11); /*0x6b0bc5*/
              result = (*(int (**)(int *, int))(*v11 + 904))(v11, 1); /*0x6b0bd1*/
              if ( !v8 ) /*0x6b0bd9*/
                v8 = v11; /*0x6b0bdb*/
              goto LABEL_21; /*0x6b0bdd*/
            }
            v13 = a3; /*0x6b0ba4*/
            if ( a3 ) /*0x6b0baa*/
              goto LABEL_18; /*0x6b0baa*/
            v13 = v16; /*0x6b0bac*/
            if ( v16 ) /*0x6b0bb2*/
              goto LABEL_18; /*0x6b0bb2*/
            v14 = *v11; /*0x6b0be2*/
            a2 = v11[27]; /*0x6b0be4*/
            result = (*(int (**)(int *, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(v14 + 364))( /*0x6b0c05*/
                       v11,
                       &a2,
                       0,
                       *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                       0,
                       0,
                       0,
                       0);
          }
        }
LABEL_21:
        if ( --v9 < 0 ) /*0x6b0c0c*/
        {
          v3 = this; /*0x6b0c12*/
          break; /*0x6b0c12*/
        }
      }
    }
    LOBYTE(result) = MEMORY[0xA8E9A0]; /*0x6b0c16*/
    if ( MEMORY[0xA8E9A0] ) /*0x6b0c1d*/
    {
      if ( v8 ) /*0x6b0c21*/
      {
        result = dword_A8E7AC; /*0x6b0c23*/
        if ( !dword_A8E7AC ) /*0x6b0c2a*/
        {
          result = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6b0c2c*/
          if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 564) != -1 ) /*0x6b0c38*/
          {
            v15 = v8 + 39; /*0x6b0c3a*/
            v18[0] = *v15; /*0x6b0c44*/
            v18[1] = v15[1]; /*0x6b0c4b*/
            v18[2] = v15[2]; /*0x6b0c56*/
            result = (int)StartAudioControllerAt( /*0x6b0c60*/
                            *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 564),
                            v18,
                            0);
          }
        }
      }
    }
    v3->occupant = 0; /*0x6b0c67*/
  }
  return result; /*0x6b0c6f*/

}
} // namespace ra2::game

// 0x6B0D10
namespace ra2::game {
int TechnoClass::RefreshDeployOccupierState()
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = (int *)this->customSound_controller[3]; /*0x6b0d14*/
  if ( !result ) /*0x6b0d19*/
  {
    this->customSound_controller[3] = 4; /*0x6b0d1b*/
    this->customSound_controller[4] = 0x7FFFFFFF; /*0x6b0d22*/
    for ( i = this->ambientSoundController[3] - 1; i >= 0; --i ) /*0x6b0d2d*/
    {
      result = *(int **)(this->ambientSoundController[0] + 4 * i); /*0x6b0d32*/
      v4 = *result; /*0x6b0d38*/
      if ( result[1] != 6 ) /*0x6b0d3d*/
      {
        if ( v4 ) /*0x6b0d41*/
          result = (int *)(*(int (__thiscall **)(int))(*(unsigned int *)v4 + 976))(v4); /*0x6b0d45*/
      }
    }
  }
  return result; /*0x6b0d4e*/
}
} // namespace ra2::game

// 0x6B7D80
namespace ra2::game {
int TechnoClass::CountPassengers() const
{
  int v2; // ebx
  int i; // esi
  int v4; // eax
  int v5; // ecx
  unsigned char *v6; // ecx

  v2 = 0; /*0x6b7d85*/
  for ( i = 0; i < this->ambientSoundController[3]; ++i ) /*0x6b7d8e*/
  {
    v4 = *(unsigned int *)(this->ambientSoundController[0] + 4 * i); /*0x6b7d93*/
    v5 = *(unsigned int *)(v4 + 4); /*0x6b7d96*/
    if ( v5 == 1 ) /*0x6b7d9c*/
      ++v2; /*0x6b7d9e*/
    if ( v5 == 2 ) /*0x6b7da2*/
    {
      v6 = *(unsigned char **)v4; /*0x6b7da4*/
      if ( *(unsigned int *)v4 ) /*0x6b7da4*/
      {
        if ( !v6[129] && *(unsigned char *)((*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 132))(v6) + 3432) ) /*0x6b7dbc*/
          ++v2; /*0x6b7dc6*/
      }
    }
  }
  return v2; /*0x6b7dcf*/
}
} // namespace ra2::game

// 0x6EB380
namespace ra2::game {
int FootClass::LinkToTransporter()
{
  int v5; // ecx
  AbstractClass *abstractFlags; // eax
  AbstractClass *v7; // ecx
  int *v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  char v13[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a4 && a3 && !*(unsigned char *)(this->objectTypeFlags + 175) ) /*0x6eb3a3*/
  {
    if ( this->reloadTimer ) /*0x6eb3b1*/
    {
      v5 = this->initialOwner; /*0x6eb3d0*/
      abstractFlags = *&this->AbstractClass_590; /*0x6eb3d3*/
      if ( abstractFlags ) /*0x6eb3d7*/
      {
        while ( abstractFlags != a4 ) /*0x6eb3db*/
        {
          abstractFlags = abstractFlags->u32_A4.abstractFlags; /*0x6eb3e1*/
          if ( !abstractFlags ) /*0x6eb3e9*/
            goto LABEL_9; /*0x6eb3e9*/
        }
      }
      else
      {
  LABEL_9:
        if ( v5 ) /*0x6eb3ed*/
        {
          if ( (*(int (__thiscall **)(int))(this->reloadTimer)(v5) != 2 ) /*0x6eb3fb*/
          {
            if ( *(unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int))(**&this->q590 + 1016))( /*0x6eb40a*/
                              this->initialOwner,
                              0) )
            {
              v7 = *&this->q590; /*0x6eb40f*/
              if ( v7 != a4 ) /*0x6eb414*/
              {
                if ( *(unsigned char *)(this->objectTypeFlags + 166) ) /*0x6eb419*/
                {
                  this->attachedTag = 0; /*0x6eb425*/
                  this->alignmentPadding75 = 1; /*0x6eb42c*/
                  this->disguiseBlinkTimer = 1; /*0x6eb42f*/
                }
                if ( !v7 /*0x6eb468*/
                  || (v8 = (int *)AbstractClass::IsTechnoType(v7), (v9 = v8) == 0)
                  || !*(unsigned int *)(*(int (__thiscall **)(int *, unsigned int))(*v8 + 1016))(v8, 0)
                  || (v10 = this->attachedTag) != 0
                  && (v11 = *v9,
                      v12 = (*(int (__thiscall **)(int, char *))(*(unsigned int *)v10 + 72))(v10, v13),
                      !(*(uint8_t (__thiscall **)(int *, int))(v11 + 944))(v9, v12)) )
                {
                  a4->getAltitude(); /*0x6eb477*/
                }
              }
            }
          }
        }
      }
    }
    else
    {
      this->attachedTag = 0; /*0x6eb3ba*/
      this->alignmentPadding75 = 1; /*0x6eb3c1*/
      this->disguiseBlinkTimer = 1; /*0x6eb3c4*/
    }
  }
}
} // namespace ra2::game

// 0x6EC300
namespace ra2::game {
int TechnoClass::IsWaypointHidden() const
{
  int result; // eax
  int *Entry; // ecx
  int v4; // ecx
  int16_t *Waypoint_Location; // eax
  unsigned int v6[2]; // [esp+4h] [ebp-8h] BYREF

  (*((unsigned char *)&(result))) = (*(this->visibilityFlags + (sizeof(this->visibilityFlags) - 1))) /*0x6ec354*/
                && (result = SessionClass::SetField((SessionClass *)this->owningHouseIndex), (unsigned char)result)
                && (Entry = SessionClass::GetEntry((SessionClass *)this->owningHouseIndex, v6),
                    result = *Entry,
                    v4 = Entry[1],
                    result == 3)
                && (Waypoint_Location = (int16_t *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v6, v4),
                    result = LayerClass::IsWithinUsableArea(
                               (LayerClass *)&DataGlobal_87F7E8,
                               Waypoint_Location,
                               1),
                    !(unsigned char)result);
  return result; /*0x6ec356*/
}
} // namespace ra2::game

// 0x6F03B0
namespace ra2::game {
int FootClass::GetGameSpeedFromSession() const
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-8h] BYREF

  v1 = *SessionClass::GetEntry((SessionClass *)this->owningHouseIndex, &v3); /*0x6f03c0*/
  if ( v1 == 54 || v1 == 53 ) /*0x6f03ca*/
    return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5920); /*0x6f03e2*/
  else
    return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5916); /*0x6f03d2*/
}
} // namespace ra2::game

// 0x6F18A0
namespace ra2::game {
int TechnoClass::GetWaypointCoords() const
{
  int v2; // eax
  int v4; // ecx
  TechnoClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x6f18a0*/
  v2 = this->lastCommands[0]; /*0x6f18a1*/
  if ( v2 == -1 ) /*0x6f18aa*/
  {
    *a2 = *(unsigned int *)&DataGlobal_B0E9C8; /*0x6f18b6*/
    return a2; /*0x6f18ac*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v5, v2); /*0x6f18cd*/
    *a2 = v4; /*0x6f18d3*/
    return a2; /*0x6f18cf*/
  }
}
} // namespace ra2::game

// 0x6F1920
namespace ra2::game {
int TechnoClass::Create()
{
  int v2; // esi
  TeamTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f193c*/
    return 0; /*0x6f199f*/
  v2 = 0; /*0x6f194d*/
  if ( *(int *)&((unsigned int *)&stru_A8EB00)[204] <= 0 ) /*0x6f1951*/
  {
  LABEL_6:
    v3 = (TeamTypeClass *)operator new(0xF8u); /*0x6f1976*/
    if ( v3 ) /*0x6f1985*/
      return TechnoTypeClass::LoadBase(v3, Source); /*0x6f1991*/
    return 0; /*0x6f1985*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * v2) + 36), Source) ) /*0x6f196a*/
  {
    if ( ++v2 >= *(int *)&((unsigned int *)&stru_A8EB00)[204] ) /*0x6f1974*/
      goto LABEL_6; /*0x6f1974*/
  }
  return *(unsigned int **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * v2); /*0x6f198f*/
}
} // namespace ra2::game

// 0x6F3280
namespace ra2::game {
int TechnoClass::IsNotAircraftOrBuilding() const
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this); /*0x6f3285*/
  (*((unsigned char *)&(result))) = result /*0x6f32c5*/
                && (result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this), result != 6)
                && (result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this), result != 16)
                && (result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this), !result->u8_C94);
  return result; /*0x6f32c3*/
}
} // namespace ra2::game

// 0x6F32D0
namespace ra2::game {
int TechnoClass::CanInitiateSell() const
{
  int result; // eax

  result = this->health; /*0x6f32d3*/
  if ( result > 0 /*0x6f330c*/
    && !this->inLimbo
    && this->isInPlayfield
    && (result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this), result != 6)
    && this->isDiscoveredByCurrentPlayer
    && (result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this), result->u8_230) )
  {
    result = House::IsHumanPlayer((House *)this->owner); /*0x6f331c*/
    (*((unsigned char *)&(result))) = (unsigned char)result != 0; /*0x6f3323*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x6f3328*/
  }
  return result; /*0x6f3326*/
}
} // namespace ra2::game

// 0x6F3950
namespace ra2::game {
BOOL TechnoClass::GetCrewCount()
{
  return *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3277) != 0; /*0x6f3967*/
}
} // namespace ra2::game

// 0x6F3970
namespace ra2::game {
int TechnoClass::GetValue() const
{
  int v2; // edi
  int v4; // ebx
  HouseClass *v5; // eax
  int *v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // edi
  int v10; // edi

  v2 = 0; /*0x6f3977*/
  if ( a2 == -1 ) /*0x6f397e*/
  {
    v4 = 0; /*0x6f3986*/
    v5 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x6f3988*/
    if ( !(uint8_t)HouseClass::HasPower(v5) /*0x6f39a3*/
      || *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3285) )
    {
      if ( *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 254))(this, 0) ) /*0x6f3a00*/
      {
        v8 = *(unsigned int *)(*(unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 254))(this, 0) + 164); /*0x6f3a17*/
        v4 = 1; /*0x6f3a27*/
        v2 = *(unsigned int *)(*(unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 254))(this, 0) + 152) /*0x6f3a2c*/
           + v8;
      }
      if ( *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, 1) ) /*0x6f3a3e*/
      {
        v9 = *(unsigned int *)(*(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, 1) + 164) + v2; /*0x6f3a5b*/
        v2 = *(unsigned int *)(*(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, 1) + 152) + v9; /*0x6f3a6d*/
        ++v4; /*0x6f3a6f*/
      }
      if ( v4 <= 0 ) /*0x6f3a72*/
        return 0; /*0x6f3a72*/
      return v2 / v4; /*0x6f3a7c*/
    }
    else
    {
      v6 = (int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, this->currentWeaponSlot); /*0x6f39b8*/
      if ( !v6 ) /*0x6f39c0*/
        return 0; /*0x6f39c7*/
      result = *v6; /*0x6f39ca*/
      if ( result ) /*0x6f39ce*/
        return result->u32_98 + *(unsigned int *)(result + 164); /*0x6f39ed*/
    }
  }
  else
  {
    if ( *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, a2) ) /*0x6f3a8e*/
    {
      v10 = *(unsigned int *)(*(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, a2) + 164); /*0x6f3aa3*/
      return *(unsigned int *)(*(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, a2) + 152) /*0x6f3ab3*/
           + v10;
    }
    return v2; /*0x6f3ab9*/
  }
  return result; /*0x6f39c2*/
}
} // namespace ra2::game

// 0x6F3AD0
namespace ra2::game {
int TechnoClass::ComputeTransform()
{

  int v7; // ecx
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  unsigned int *v11; // eax
  int v12; // ebp
  const void *v13; // eax
  int vfptr; // eax
  unsigned int *v15; // esi
  int v16; // eax
  float *v17; // eax
  float v18; // edx
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // edi
  unsigned __int16 *v23; // eax
  unsigned __int16 *v24; // edx
  int v25; // kr00_4
  unsigned __int16 *v26; // ebp
  int *v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  float v32; // [esp+8h] [ebp-E4h]
  float v33; // [esp+8h] [ebp-E4h]
  float v34; // [esp+Ch] [ebp-E0h]
  float v35; // [esp+10h] [ebp-DCh]
  float v36; // [esp+10h] [ebp-DCh]
  int v37; // [esp+28h] [ebp-C4h]
  double v38; // [esp+2Ch] [ebp-C0h] BYREF
  float v39; // [esp+34h] [ebp-B8h]
  int v40; // [esp+38h] [ebp-B4h]
  int *v41; // [esp+3Ch] [ebp-B0h]
  float v42[3]; // [esp+40h] [ebp-ACh] BYREF
  unsigned char v43[4]; // [esp+4Ch] [ebp-A0h] BYREF
  float v44[3]; // [esp+50h] [ebp-9Ch] BYREF
  Matrix3x4 v45; // [esp+5Ch] [ebp-90h] BYREF
  Transform v46[12]; // [esp+8Ch] [ebp-60h] BYREF
  unsigned char v47[48]; // [esp+BCh] [ebp-30h] BYREF

  v41 = (int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x6f3aeb*/
  v7 = 0; /*0x6f3aef*/
  v8 = 0; /*0x6f3af1*/
  v9 = 0; /*0x6f3af3*/
  if ( a3 >= 0 ) /*0x6f3af7*/
  {
    v11 = (unsigned int *)(*(int (**)(TechnoClass *, int))&this->vfptr->barrelRecoil)(this, a3); /*0x6f3b28*/
    v7 = v11[1]; /*0x6f3b2e*/
    v8 = v11[2]; /*0x6f3b31*/
    v9 = v11[3]; /*0x6f3b34*/
  }
  else if ( -a3 <= 5 ) /*0x6f3afe*/
  {
    v10 = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x6f3b04*/
    v7 = *(unsigned int *)(v10 - 12 * a3 + 2128); /*0x6f3b14*/
    v8 = *(unsigned int *)(v10 - 12 * a3 + 2132); /*0x6f3b1b*/
    v9 = *(unsigned int *)(v10 - 12 * a3 + 2136); /*0x6f3b1e*/
  }
  v12 = a5 + v8; /*0x6f3b47*/
  v40 = a4 + v7; /*0x6f3b49*/
  v37 = a6 + v9; /*0x6f3b58*/
  if ( this && (this->abstractFlags & 4) != 0 && this->q674 ) /*0x6f3b6c*/
  {
    v13 = (const void *)(*(int (**)(unsigned int, unsigned char *, unsigned int))(*this->q674 + 36))( /*0x6f3b9b*/
                          this->q674,
                          v47,
                          0);
    Transform::Copy(v46, v13); /*0x6f3ba3*/
    vfptr = this->vfptr; /*0x6f3ba8*/
    qmemcpy(&v45, v46, sizeof(v45)); /*0x6f3bb7*/
    v15 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))(vfptr + 680))(this, v43); /*0x6f3bd1*/
    v38 = (double)(int)((((unsigned int)((*v15 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621 /*0x6f3c12*/
        - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v38) >> 10) + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  else
  {
    Matrix3x4::Identity(&v45); /*0x6f3c1e*/
    v38 = (double)(int)((((unsigned int)((*(unsigned int *)(*(int (**)(TechnoClass *, double *))&this->vfptr->rockerLinkedUnit)( /*0x6f3c4e*/
                                                       this,
                                                       &v38) >> 10)
                                       + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  v32 = (float)v41[456]; /*0x6f3c65*/
  Vector::MatrixMulVectorMath(v45.m_Data, v32, 0.0, 0.0); /*0x6f3c68*/
  v35 = v38; /*0x6f3c76*/
  Matrix2D::Rotate(v45.m_Data, v35); /*0x6f3c79*/
  v16 = -(this->currentBurstIndex % 2 != 0); /*0x6f3c9a*/
  LOBYTE(v16) = v16 & 0xFE; /*0x6f3c9d*/
  v34 = (float)(v12 * (v16 + 1)); /*0x6f3cab*/
  v33 = (float)v40; /*0x6f3cb7*/
  v36 = (float)v37; /*0x6f3c8e*/
  Vector::MatrixMulVectorMath(v45.m_Data, v33, v34, v36); /*0x6f3cba*/
  memset(v42, 0, sizeof(v42)); /*0x6f3ccc*/
  v17 = TransformMatrix3x4Point(v44, (float *)v45.m_Data, v42); /*0x6f3ce4*/
  *(float *)&v38 = *v17; /*0x6f3ceb*/
  v18 = v17[2]; /*0x6f3cf6*/
  *((float *)&v38 + 1) = v17[1]; /*0x6f3cf9*/
  v39 = v18; /*0x6f3cfd*/
  LOWORD(v19) = Math::RoundToInt(*(float *)&v38); /*0x6f3d01*/
  v20 = v19; /*0x6f3d0c*/
  LOWORD(v21) = Math::RoundToInt(-*((float *)&v38 + 1)); /*0x6f3d0e*/
  v22 = v21; /*0x6f3d17*/
  v25 = Math::RoundToInt(v39); /*0x6f3d19*/
  LOWORD(v24) = HIWORD(v25); /*0x6f3d19*/
  LOWORD(v23) = v25; /*0x6f3d19*/
  v26 = v23; /*0x6f3d22*/
  v27 = (int *)(*(int (__fastcall **)(TechnoClass *, unsigned __int16 *, float *))&this->vfptr->currentMission)(this, v24, v44); /*0x6f3d29*/
  v28 = *v27; /*0x6f3d2f*/
  v29 = v27[1]; /*0x6f3d31*/
  v30 = v27[2]; /*0x6f3d34*/
  *a2 = v20 + v28; /*0x6f3d46*/
  a2[1] = v22 + v29; /*0x6f3d48*/
  a2[2] = (char *)v26 + v30; /*0x6f3d4b*/
  return a2; /*0x6f3d50*/

}
} // namespace ra2::game

// 0x6F4960
namespace ra2::game {
int TechnoClass::SetHouseFlag()
{
  HouseClass *owner; // eax
  TeamClass *attachedTag; // ecx

  if ( a2 == dword_A83D4C ) /*0x6f4972*/
  {
    if ( this->isDiscoveredByCurrentPlayer ) /*0x6f4974*/
      return 0; /*0x6f4983*/
  }
  else
  {
    if ( this->isDiscoveredByComputer ) /*0x6f4986*/
      return 0; /*0x6f498e*/
    this->isDiscoveredByComputer = 1; /*0x6f4990*/
  }
  if ( !(uint8_t)AbstractClass::IsNotNull((ObjectClass *)this) ) /*0x6f49a0*/
    return 0; /*0x6f49a0*/
  if ( !(uint8_t)House::IsCurrentPlayer((House *)a2) /*0x6f49ba*/
    && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this) == 14 )
  {
    (*((void (__thiscall **)(TechnoClass *, int, unsigned int))this->vfptr + 122))(this, 15, 0); /*0x6f49c4*/
  }
  if ( a2 != dword_A83D4C ) /*0x6f49d0*/
  {
    this->isDiscoveredByComputer = 1; /*0x6f4a31*/
    return 1; /*0x6f4a31*/
  }
  owner = this->owner; /*0x6f49d2*/
  this->isDiscoveredByCurrentPlayer = 1; /*0x6f49d8*/
  (owner->HouseClass_field_timer_D) = 1; /*0x6f49de*/
  (((unsigned char *)&(this->owner->HouseClass_field_timer_B[2]))[1]) = 1; /*0x6f49ea*/
  if ( this->isOwnedByCurrentPlayer ) /*0x6f49f0*/
    return 1; /*0x6f4a38*/
  if ( !dword_A8E7AC ) /*0x6f4a01*/
  {
    attachedTag = (TeamClass *)this->attachedTag; /*0x6f4a03*/
    if ( attachedTag ) /*0x6f4a08*/
      TeamClass::Update_0(attachedTag, 4, (int)this, *(int *)&g_BuildingLoadQueue_Array.ImageFile[24], 0, 0); /*0x6f4a18*/
  }
  this->owner->isDiscoveredByPlayer = 1; /*0x6f4a25*/
  return 1; /*0x6f497e*/
}
} // namespace ra2::game

// 0x6F4A40
namespace ra2::game {
int TechnoClass::CheckPlayerOwned() const
{
  int result; // eax

  (*((unsigned char *)&(result))) = this->isDiscoveredByCurrentPlayer; /*0x6f4a43*/
  if ( (unsigned char)result ) /*0x6f4a4b*/
  {
    result = House::IsCurrentPlayer((House *)this->owner); /*0x6f4a53*/
    if ( !(unsigned char)result ) /*0x6f4a5a*/
      this->isDiscoveredByCurrentPlayer = 0; /*0x6f4a5c*/
  }
  return result; /*0x6f4a62*/
}
} // namespace ra2::game

// 0x6F4A70
namespace ra2::game {
int TechnoClass::UpdateProdWithSound()
{
  int result; // eax

  result = ObjectClass::UpdateProductionDisplay((ObjectClass *)this); /*0x6f4a78*/
  if ( (unsigned char)result ) /*0x6f4a7f*/
  {
    if ( this->isTether ) /*0x6f4a81*/
      result = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 157))(this, 13); /*0x6f4a91*/
    (*((unsigned char *)&(result))) = 1; /*0x6f4a97*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x6f4a9d*/
  }
  return result; /*0x6f4a99*/
}
} // namespace ra2::game

// 0x6F4EB0
namespace ra2::game {
int TechnoClass::PushNearbyUnits()
{

  unsigned int *v2; // eax
  Cell *v3; // edi
  int result; // eax
  int i; // ebx
  TechnoClass **v6; // edi
  unsigned int *v7; // eax
  CellClass *v8; // eax
  int v9; // eax
  int j; // edi
  int nextObject; // [esp-8h] [ebp-3Ch]
  unsigned __int16 *v12; // [esp+8h] [ebp-2Ch]
  __int16 v13[2]; // [esp+Ch] [ebp-28h] BYREF
  unsigned int v14[3]; // [esp+10h] [ebp-24h] BYREF
  void **v15; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  int v17; // [esp+24h] [ebp-10h]
  unsigned __int8 *v18; // [esp+28h] [ebp-Ch]
  int v19; // [esp+2Ch] [ebp-8h]
  int v20; // [esp+30h] [ebp-4h]

  v2 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned int *))&this->vfptr->u32_48)(this, v14); /*0x6f4ec0*/
  LOWORD(v12) = *v2 / 256; /*0x6f4ed3*/
  HIWORD(v12) = v2[1] / 256; /*0x6f4eec*/
  *(unsigned int *)v13 = v12; /*0x6f4ef9*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x6f4f03*/
  if ( this->cloakState == 2 /*0x6f4f27*/
    && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3)
    && this->owner != *(int *)((char *)&stru_A83CD9.estimatedHealth + 3)
    && !(unsigned __int8)Cell::IsPassableOffset(
                           v3,
                           *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48)) )
  {
    (*(void (**)(TechnoClass *))&this->vfptr->initialOwner)(this); /*0x6f4f34*/
  }
  result = Cell::HasOccupierBit(v3, *(unsigned int *)&this->owner->relatedTagsCount); /*0x6f4f46*/
  if ( (unsigned char)result ) /*0x6f4f4d*/
  {
    result = (*(int (**)(TechnoClass *))&this->vfptr->sprayOffsetIndex)(this); /*0x6f4f57*/
    if ( (unsigned char)result ) /*0x6f4f5f*/
    {
      EventClass::resetEvent((EventClass *)&v15, 0, 0); /*0x6f4f6e*/
      v15 = &vt_DynamicVectorClass_TechnoClass; /*0x6f4f78*/
      v20 = 10; /*0x6f4f80*/
      v19 = 0; /*0x6f4f88*/
      for ( i = *(unsigned int *)&stru_A8E960.random[276] - 1; i >= 0; --i ) /*0x6f4f95*/
      {
        v6 = *(TechnoClass ***)(*(unsigned int *)&stru_A8E960.random[264] + 4 * i); /*0x6f4fa1*/
        if ( v6[173] == this ) /*0x6f4faa*/
        {
          nextObject = v6[135]->nextObject; /*0x6f4fbd*/
          v7 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned int *))&this->vfptr->u32_48)(this, v14); /*0x6f4fc3*/
          v8 = Coord::To_Cell((Coord *)&dword_87F7E8, v7); /*0x6f4fcc*/
          if ( ((unsigned __int8)Cell::IsPassableOffset((Cell *)v8, nextObject) || v6[135] == (TechnoClass *)this->owner) /*0x6f5019*/
            && (v19 < v17
             || (BYTE1(v18) || !v17)
             && v20 > 0
             && ((unsigned __int8 (*)(void ***, int, unsigned int))v15[2])(&v15, v20 + v17, 0)) )
          {
            v9 = v19++; /*0x6f5024*/
            *((unsigned int *)Block + v9) = v6; /*0x6f502f*/
          }
        }
      }
      (*(void (**)(TechnoClass *, unsigned int))&this->vfptr->audioController3)(this, 0); /*0x6f503f*/
      for ( j = v19 - 1; j >= 0; --j ) /*0x6f504f*/
        (*(void (**)(unsigned int, TechnoClass *))(**((unsigned int **)Block + j) + 968))(*((unsigned int *)Block + j), this); /*0x6f505b*/
      result = (int)Block; /*0x6f5064*/
      v15 = &vt_VectorClass_TechnoClass; /*0x6f5068*/
      if ( Block ) /*0x6f5072*/
      {
        if ( BYTE1(v18) ) /*0x6f507a*/
          __3_YAXPAX_Z(Block); /*0x6f507d*/
      }
    }
  }
  return result; /*0x6f5085*/

}
} // namespace ra2::game

// 0x6F5090
namespace ra2::game {
int FootClass::CompleteProduction()
{

  int result; // eax
  FactoryClass *temporalUsing; // ecx
  unsigned int *v4; // eax
  int vfptr; // eax
  TeamClass *attachedTag; // ecx
  BuildingClass *v7; // eax
  unsigned __int16 *v8; // [esp+4h] [ebp-10h]
  unsigned char v9[12]; // [esp+8h] [ebp-Ch] BYREF
  unsigned __int16 *v10; // [esp+18h] [ebp+4h] BYREF

  result = (int)v10; /*0x6f5090*/
  if ( v10 == (unsigned __int16 *)2 ) /*0x6f509d*/
  {
    temporalUsing = (FactoryClass *)this->temporalUsing; /*0x6f50a3*/
    if ( temporalUsing && temporalUsing->production[1] ) /*0x6f50ad*/
      FactoryClass::CompleteItem(temporalUsing); /*0x6f50b4*/
    v4 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->ThreatAvoidanceCoefficient)(this, v9); /*0x6f50c2*/
    LOWORD(v8) = *v4 / 256; /*0x6f50d5*/
    HIWORD(v8) = v4[1] / 256; /*0x6f50eb*/
    vfptr = this->vfptr; /*0x6f50f4*/
    v10 = v8; /*0x6f50f6*/
    (*(void (**)(TechnoClass *))(vfptr + 1056))(this); /*0x6f50fa*/
    attachedTag = (TeamClass *)this->attachedTag; /*0x6f5100*/
    if ( attachedTag ) /*0x6f5105*/
      TeamClass::Update_0(attachedTag, 34, (int)this, dword_B0EA50, 0, 0); /*0x6f5115*/
    if ( !this->isInPlayfield[0] /*0x6f5130*/
      && (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (__int16 *)&v10, 1) )
    {
      this->isInPlayfield[0] = 1; /*0x6f5139*/
    }
    if ( !this->isDiscoveredByCurrentPlayer[0] /*0x6f5160*/
      && (*((unsigned char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v10) + 300) & 0x10) != 0 )
    {
      (*(void (**)(TechnoClass *, unsigned int))&this->vfptr->q198)( /*0x6f516c*/
        this,
        *(int *)((char *)&stru_A83CD9.estimatedHealth + 3));
    }
    v7 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v10); /*0x6f517c*/
    BuildingClass::CreateIdleAnim(v7); /*0x6f5183*/
  }
  return result; /*0x6f5188*/

}
} // namespace ra2::game

// 0x6F5190
namespace ra2::game {
void TechnoClass::DrawHealthBar(Point2D* pLocation, RectangleStruct* pBounds, bool bUnk3) const
{
    int result; // eax
    TechnoClass *v2; // ebp
    int16_t *v3; // eax
    CellClass *v4; // eax
    unsigned int *v5; // eax
    Iostream_init *CurrentFrame; // eax
    int16_t *v7; // eax
    CellClass *v8; // eax
    unsigned int *v9; // eax
    int v10; // ecx
    int *v11; // esi
    int v12; // eax
    int *v13; // eax
    int v14; // ebx
    int v15; // kr04_4
    int v16; // esi
    int v17; // edi
    unsigned int *v18; // eax
    int v19; // edx
    int (__thiscall **vtable0)(TechnoClass *); // eax
    int *v21; // eax
    int *v22; // eax
    int v23; // ebp
    int *v24; // eax
    int *v25; // eax
    int *v26; // eax
    Coord3D *v27; // eax
    Coord3D *v28; // eax
    Coord *v29; // eax
    int v30; // edx
    int *v31; // eax
    int *v32; // eax
    Coord3D *v33; // eax
    Coord3D *v34; // eax
    Coord *v35; // eax
    int *v36; // eax
    int v37; // eax
    bool v38; // cc
    int v39; // eax
    int *v40; // eax
    int *v41; // eax
    Coord3D *v42; // eax
    Coord3D *v43; // eax
    Coord *v44; // eax
    int *v45; // eax
    int v46; // edx
    int *v47; // eax
    Coord3D *v48; // eax
    Coord3D *v49; // eax
    Coord *v50; // eax
    int *v51; // eax
    int v52; // edx
    int *v53; // eax
    int *v54; // eax
    Coord3D *v55; // eax
    Coord3D *v56; // eax
    Coord *v57; // eax
    int *v58; // eax
    int v59; // edx
    int v60; // edi
    int *v61; // eax
    int *v62; // eax
    Coord3D *v63; // eax
    Coord3D *v64; // eax
    Coord *v65; // eax
    int *v66; // eax
    int v67; // edx
    int *v68; // eax
    int *v69; // eax
    int *v70; // edi
    char v71; // al
    int (__thiscall **v72)(TechnoClass *, int, unsigned int); // edx
    int q004; // [esp+50h] [ebp-98h]
    int v74; // [esp+54h] [ebp-94h]
    int v75; // [esp+60h] [ebp-88h]
    int v76; // [esp+60h] [ebp-88h]
    Coord3D v77; // [esp+64h] [ebp-84h] BYREF
    Coord3D v78; // [esp+70h] [ebp-78h] BYREF
    int v79; // [esp+7Ch] [ebp-6Ch] BYREF
    int v80; // [esp+80h] [ebp-68h]
    int q008; // [esp+84h] [ebp-64h] BYREF
    Coord3D v82; // [esp+88h] [ebp-60h] BYREF
    int v83; // [esp+94h] [ebp-54h] BYREF
    int v84; // [esp+98h] [ebp-50h]
    int v85; // [esp+9Ch] [ebp-4Ch] BYREF
    int v86; // [esp+A0h] [ebp-48h] BYREF
    int v87; // [esp+A4h] [ebp-44h]
    int v88; // [esp+A8h] [ebp-40h] BYREF
    int v89; // [esp+ACh] [ebp-3Ch] BYREF
    int v90; // [esp+B0h] [ebp-38h]
    int v91; // [esp+B4h] [ebp-34h] BYREF
    int v92; // [esp+B8h] [ebp-30h] BYREF
    int v93; // [esp+BCh] [ebp-2Ch]
    int v94; // [esp+C0h] [ebp-28h] BYREF
    int v95[2]; // [esp+C4h] [ebp-24h] BYREF
    int v96; // [esp+CCh] [ebp-1Ch] BYREF
    unsigned int v97[2]; // [esp+D0h] [ebp-18h] BYREF
    int v98; // [esp+D8h] [ebp-10h] BYREF
    unsigned int v99[2]; // [esp+DCh] [ebp-Ch] BYREF
    TechnoClass *v100; // [esp+E4h] [ebp-4h] BYREF
    TechnoClass *retaddr; // [esp+E8h] [ebp+0h]
    int *v102; // [esp+ECh] [ebp+4h]
    int *v103; // [esp+F0h] [ebp+8h]
    int *v104; // [esp+F4h] [ebp+Ch]

    v2 = this; /*0x6f5197*/
    result = this->isSinking; /*0x6f519b*/
    v100 = this; /*0x6f51a1*/
    if ( !result )

    {
      if ( this->vtable1 ) /*0x6f51b0*/
      {
        if ( this->vtable1 ) /*0x6f51bb*/
        {
          v3 = (int16_t *)(*((int (__thiscall **)(TechnoClass *, int *))this->vtable1 + 110))( /*0x6f51d0*/
                            this,
                            &q008);
          v4 = (CellClass *)CellCoord_To_CellObj((CellCoord *)&DataGlobal_87F7E8, v3); /*0x6f51dc*/
          if ( !(uint8_t)CellClass::QuickPassable(v4) ) /*0x6f51e3*/
          {
            v5 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, int *))v2->vtable1 + 43))(v2, &v85); /*0x6f51fb*/
            Coord::To_Screen((Coord *)g_TacticalClass_Instance, v5, &q008); /*0x6f5208*/
            CurrentFrame = BombClass::GetCurrentFrame(v2->vtable1); /*0x6f5230*/
            DrawToSurfaceSHP( /*0x6f524e*/
              (int)g_DSurface_Hidden_2,
              *(int *)&DataGlobal_87F6C8,
              *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4064),
              (unsigned int)CurrentFrame,
              &q008,
              &DSurface_ViewBounds.field_0,
              3584,
              0,
              0,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
          }
        }
      }
      if ( v2
        && (*((int (__thiscall **)(TechnoClass *))v2->vtable1 + 11))(v2) == 6
        && *((*((int (__thiscall **)(TechnoClass *))v2->vtable1 + 11))(v2) == 6 ? &v2[1].__pad_1C4[4] : (char *)1768)
        && (v7 = (int16_t *)(*((int (__thiscall **)(TechnoClass *, int *))v2->vtable1 + 110))(v2, &q008),
            v8 = (CellClass *)CellCoord_To_CellObj((CellCoord *)&DataGlobal_87F7E8, v7),
            !(uint8_t)CellClass::QuickPassable(v8)) )
      {
        v9 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, int *))v2->vtable1 + 43))(v2, &v85); /*0x6f52c6*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, &q008); /*0x6f52d3*/
        v10 = (int)Rules::GetProductionTimeMult((Rules *)&stru_A8EB00.ObjectTypeClass[24], 14) / 4; /*0x6f52ec*/
        if ( v10 < 2 ) /*0x6f52f2*/
          v10 = 2; /*0x6f52f4*/
        v11 = v103; /*0x6f52fe*/
        DrawToSurfaceSHP( /*0x6f5340*/
          (int)g_DSurface_Hidden_2,
          *(int *)&DataGlobal_87F6C8,
          FileSystem_WRENCH_SHP,
          6 * (*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] % v10) / (v10 - 1),
          &q008,
          v103,
          3584,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
      else
      {
        v11 = v103; /*0x6f5347*/
      }
      result = (*((int (__thiscall **)(TechnoClass *, Object *))v2->vtable1 + 50))(v2, dword_A83D4C); /*0x6f5359*/
      if ( !result ) /*0x6f5361*/

      {
        result = (*((int (__thiscall **)(TechnoClass *, unsigned int, unsigned int))v2->vtable1 + 26))(v2, 0, 0); /*0x6f536c*/
        if ( result != 5 ) /*0x6f5372*/
          result = (*((int (__thiscall **)(TechnoClass *, int *, int *))v2->vtable1 + 277))(v2, v102, v11); /*0x6f5382*/
      }
      if ( v2->vtable1 ) /*0x6f5388*/
      {
        if ( (*((int (__thiscall **)(TechnoClass *))v2->vtable1 + 11))(v2) == 6 ) /*0x6f53a2*/
        {
          v75 = 15; /*0x6f53ad*/
          if ( (*((int (__thiscall **)(TechnoClass *))v2->vtable1 + 114))(v2) < -4 ) /*0x6f53be*/
            v75 = 12; /*0x6f53c0*/
          v12 = (*((int (__thiscall **)(TechnoClass *))v2->vtable1 + 33))(v2); /*0x6f53cd*/
          v13 = (int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v12 + 124))(v12, &v86); /*0x6f53dc*/
          v14 = v13[2]; /*0x6f53e6*/
          v15 = *v13; /*0x6f53ec*/
          v16 = *v13 / 2; /*0x6f53fa*/
          v17 = v13[1] / 2; /*0x6f53ff*/
          if ( *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x6f5404*/
            v76 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + v75); /*0x6f5415*/
          else
            v76 = *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 2 * v75); /*0x6f542b*/
          v18 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, int *))v2->vtable1 + 18))(v2, &v86); /*0x6f5439*/
          *(unsigned int *)v77.__pad_000 = *v18; /*0x6f543e*/
          v77.u32_4 = v18[1]; /*0x6f5445*/
          v19 = v18[2]; /*0x6f544b*/
          vtable0 = (int (__thiscall **)(TechnoClass *))v2->RadioClass; /*0x6f544e*/
          v77.u32_8 = v19; /*0x6f5451*/
          if ( vtable0[11](v2) != 15 ) /*0x6f545b*/
          {
            v79 = *(unsigned int *)v77.__pad_000 - v16; /*0x6f5472*/
            q008 = v77.u32_8; /*0x6f547a*/
            v80 = v17 + v77.u32_4; /*0x6f5487*/
            v78 = *(Coord3D *)Coord::Subtract( /*0x6f5498*/
                                (Coord *)&v86,
                                v16 + *(unsigned int *)v77.__pad_000,
                                v17 + v77.u32_4,
                                v77.u32_8);
            DrawTacticalLine3D(&v78, &v79, v76); /*0x6f54b7*/
            *(unsigned int *)v82.__pad_000 = -v17; /*0x6f54c9*/
            v21 = Coord::Subtract( /*0x6f54db*/
                    (Coord *)&v86,
                    v16 + *(unsigned int *)v77.__pad_000,
                    v77.u32_4 - v17,
                    v77.u32_8);
            v79 = *v21; /*0x6f54e2*/
            v80 = v21->u32_4; /*0x6f54ee*/
            q008 = v21->u32_8; /*0x6f54fb*/
            v78 = *(Coord3D *)Coord::Subtract( /*0x6f5512*/
                                (Coord *)&v86,
                                v16 + *(unsigned int *)v77.__pad_000,
                                v17 + v77.u32_4,
                                v77.u32_8);
            DrawTacticalLine3D(&v78, &v79, v76); /*0x6f5531*/
            v78 = *(Coord3D *)Coord::Subtract( /*0x6f5557*/
                                (Coord *)&v86,
                                *(unsigned int *)v77.__pad_000 - v16,
                                v17 + v77.u32_4,
                                v14 + v77.u32_8);
            Coord::Subtract((Coord *)&v79, -v16, v17, 0); /*0x6f5571*/
            v22 = Coord::Subtract( /*0x6f559b*/
                    (Coord *)&v86,
                    *(unsigned int *)v77.__pad_000 + v79,
                    v80 + v77.u32_4,
                    q008 + v77.u32_8);
            v83 = *v22; /*0x6f55a2*/
            v84 = v22->u32_4; /*0x6f55ae*/
            v85 = v22->u32_8; /*0x6f55bd*/
            DrawTacticalLine3D(&v83, (int *)v78.__pad_000, v76); /*0x6f55c1*/
            v23 = *(unsigned int *)v82.__pad_000; /*0x6f55ce*/
            v24 = Coord::Subtract( /*0x6f55e3*/
                    (Coord *)&v86,
                    v16 + *(unsigned int *)v77.__pad_000,
                    *(unsigned int *)v82.__pad_000 + v77.u32_4,
                    v14 + v77.u32_8);
            v83 = *v24; /*0x6f55ea*/
            v84 = v24->u32_4; /*0x6f55f1*/
            v85 = v24->u32_8; /*0x6f5600*/
            v25 = Coord::Subtract( /*0x6f5613*/
                    (Coord *)&v86,
                    v16 + *(unsigned int *)v77.__pad_000,
                    v23 + v77.u32_4,
                    v77.u32_8);
            v79 = *v25; /*0x6f561a*/
            v80 = v25->u32_4; /*0x6f5626*/
            q008 = v25->u32_8; /*0x6f5635*/
            DrawTacticalLine3D(&v79, &v83, v76); /*0x6f5639*/
            v2 = retaddr; /*0x6f563e*/
          }
          if ( v2->vtable1 > 0 /*0x6f5667*/
            && ((uint8_t)HouseClass::IsAlliedWith((void *)v2->owner, (void *)dword_A83D4C)
             || *(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 6118)) )
          {
            (*((void (__thiscall **)(TechnoClass *, int *, int *))v2->vtable1 + 274))(v2, v103, v104); /*0x6f5686*/
          }
          if ( (*((int (__thiscall **)(TechnoClass *))v2->vtable1 + 11))(v2) == 15 ) /*0x6f5697*/
          {
            Coord::Subtract((Coord *)&v89, v15 / 2, v17, 0); /*0x6f5a06*/
            v47 = Coord::Subtract( /*0x6f5a30*/
                    (Coord *)&v92,
                    *(unsigned int *)v77.__pad_000 + v89,
                    v90 + v77.u32_4,
                    v91 + v77.u32_8);
            v86 = *v47; /*0x6f5a39*/
            v87 = v47[1]; /*0x6f5a45*/
            v88 = v47[2]; /*0x6f5a4c*/
            *(unsigned int *)v82.__pad_000 = v15 / -2; /*0x6f5a55*/
            Coord::Subtract((Coord *)&v83, v15 / -2, v17, 0); /*0x6f5a59*/
            v78 = *(Coord3D *)Coord::Subtract( /*0x6f5a8c*/
                                (Coord *)&v92,
                                *(unsigned int *)v77.__pad_000 + v83,
                                v84 + v77.u32_4,
                                v85 + v77.u32_8);
            v48 = (Coord3D *)Coord3D::Add(&v78, v95, &v78); /*0x6f5ace*/
            v49 = (Coord3D *)Coord3D::Add(v48, v99, &v78); /*0x6f5ad5*/
            v50 = (Coord *)Coord3D::Add(v49, v97, &v86); /*0x6f5adc*/
            v51 = Coord::Divide(v50, &v92, 4); /*0x6f5ae3*/
            v79 = *v51; /*0x6f5aea*/
            v80 = v51[1]; /*0x6f5af1*/
            q008 = v51[2]; /*0x6f5afc*/
            v52 = (int)*g_TacticalClass_Instance; /*0x6f5b0e*/
            if ( v78.u32_8 <= q008 ) /*0x6f5b11*/
              (*(void (__stdcall **)(int *, Coord3D *, int, unsigned int, int, int))(v52 + 96))( /*0x6f5b28*/
                &v79,
                &v78,
                v76,
                0,
                q004,
                v74);
            else
              (*(void (__stdcall **)(Coord3D *, int *, int, unsigned int, int, int))(v52 + 96))( /*0x6f5b1c*/
                &v78,
                &v79,
                v76,
                0,
                q004,
                v74);
            Coord::Subtract((Coord *)&v88, v82.u32_8, v17, v14); /*0x6f5b36*/
            v53 = Coord::Subtract( /*0x6f5b63*/
                    (Coord *)&v96,
                    v77.u32_8 + v88,
                    v89 + *(unsigned int *)v78.__pad_000,
                    v90 + v78.u32_4);
            v85 = *v53; /*0x6f5b6c*/
            v86 = v53[1]; /*0x6f5b74*/
            v87 = v53[2]; /*0x6f5b84*/
            Coord::Subtract((Coord *)&v91, v82.u32_8, v17, 0); /*0x6f5b88*/
            v54 = Coord::Subtract( /*0x6f5bb2*/
                    (Coord *)&v96,
                    v77.u32_8 + v91,
                    v92 + *(unsigned int *)v78.__pad_000,
                    v93 + v78.u32_4);
            v78.u32_8 = *v54; /*0x6f5bbb*/
            v79 = v54[1]; /*0x6f5bc7*/
            v80 = v54[2]; /*0x6f5bd3*/
            v55 = (Coord3D *)Coord3D::Add((Coord3D *)&v78.u32_8, &v100, &v78.u32_8); /*0x6f5bfa*/
            v56 = (Coord3D *)Coord3D::Add(v55, &v98, &v78.u32_8); /*0x6f5c01*/
            v57 = (Coord *)Coord3D::Add(v56, &v94, &v85); /*0x6f5c08*/
            v58 = Coord::Divide(v57, &v96, 4); /*0x6f5c0f*/
            q008 = *v58; /*0x6f5c16*/
            *(unsigned int *)v82.__pad_000 = v58[1]; /*0x6f5c1d*/
            v82.u32_4 = v58[2]; /*0x6f5c30*/
            v59 = (int)*g_TacticalClass_Instance; /*0x6f5c38*/
            if ( v80 <= v82.u32_4 ) /*0x6f5c3d*/
              (*(void (__stdcall **)(int *, int *, int, unsigned int))(v59 + 96))( /*0x6f5c54*/
                &q008,
                &v78.u32_8,
                v77.u32_4,
                0);
            else
              (*(void (__stdcall **)(int *, int *, int, unsigned int))(v59 + 96))( /*0x6f5c48*/
                &v78.u32_8,
                &q008,
                v77.u32_4,
                0);
            v60 = -v17; /*0x6f5c57*/
            Coord::Subtract((Coord *)&v88, v15 / 2, v60, 0); /*0x6f5c61*/
            v61 = Coord::Subtract( /*0x6f5c8b*/
                    (Coord *)&v96,
                    v77.u32_8 + v88,
                    v89 + *(unsigned int *)v78.__pad_000,
                    v90 + v78.u32_4);
            v85 = *v61; /*0x6f5c93*/
            v86 = v61[1]; /*0x6f5c9c*/
            v87 = v61[2]; /*0x6f5ca7*/
            Coord::Subtract((Coord *)&v91, v15 / 2, v60, v14); /*0x6f5cab*/
            v62 = Coord::Subtract( /*0x6f5cd5*/
                    (Coord *)&v96,
                    v77.u32_8 + v91,
                    v92 + *(unsigned int *)v78.__pad_000,
                    v93 + v78.u32_4);
            v78.u32_8 = *v62; /*0x6f5cde*/
            v79 = v62[1]; /*0x6f5cea*/
            v80 = v62[2]; /*0x6f5cf6*/
            v63 = (Coord3D *)Coord3D::Add((Coord3D *)&v78.u32_8, &v100, &v78.u32_8); /*0x6f5d1d*/
            v64 = (Coord3D *)Coord3D::Add(v63, &v98, &v78.u32_8); /*0x6f5d24*/
            v65 = (Coord *)Coord3D::Add(v64, &v94, &v85); /*0x6f5d2b*/
            v66 = Coord::Divide(v65, &v96, 4); /*0x6f5d32*/
            q008 = *v66; /*0x6f5d39*/
            *(unsigned int *)v82.__pad_000 = v66[1]; /*0x6f5d40*/
            v82.u32_4 = v66[2]; /*0x6f5d4b*/
            v74 = 0; /*0x6f5d5b*/
            v67 = (int)*g_TacticalClass_Instance; /*0x6f5d5d*/
            q004 = v77.u32_4; /*0x6f5d5f*/
            if ( v80 <= v82.u32_4 ) /*0x6f5d60*/
              (*(void (__stdcall **)(int *, int *))(v67 + 96))(&q008, &v78.u32_8); /*0x6f5d77*/
            else
              (*(void (__stdcall **)(int *, int *))(v67 + 96))(&v78.u32_8, &q008); /*0x6f5d6b*/
            Coord::Subtract((Coord *)&v86, *(int *)v82.__pad_000, v60, v14); /*0x6f5d85*/
            v68 = Coord::Subtract( /*0x6f5db2*/
                    (Coord *)v95,
                    *(unsigned int *)v77.__pad_000 + v86,
                    v87 + v77.u32_4,
                    v88 + v77.u32_8);
            v89 = *v68; /*0x6f5dba*/
            v90 = v68[1]; /*0x6f5dc3*/
            v91 = v68[2]; /*0x6f5dce*/
            Coord::Subtract((Coord *)&v79, v15 / 2, v60, v14); /*0x6f5dd2*/
            v69 = Coord3D::Add(&v77, &v92, &v79); /*0x6f5de5*/
            v83 = *v69; /*0x6f5dec*/
            v84 = v69[1]; /*0x6f5df3*/
            v85 = v69[2]; /*0x6f5dfe*/
            globalHelper_0F6030(&v83, &v89, v76); /*0x6f5e0b*/
          }
          else
          {
            Coord::Subtract((Coord *)&v83, v15 / 2, v17, v14); /*0x6f56a4*/
            v26 = Coord::Subtract( /*0x6f56ce*/
                    (Coord *)&v86,
                    *(unsigned int *)v77.__pad_000 + v83,
                    v84 + v77.u32_4,
                    v85 + v77.u32_8);
            v79 = *v26; /*0x6f56d5*/
            v80 = v26[1]; /*0x6f56e1*/
            q008 = v26[2]; /*0x6f56ee*/
            v82 = *(Coord3D *)Coord::Subtract( /*0x6f5707*/
                                (Coord *)&v86,
                                v16 + *(unsigned int *)v77.__pad_000,
                                v17 + v77.u32_4,
                                v77.u32_8);
            v27 = (Coord3D *)Coord3D::Add(&v82, v97, &v82); /*0x6f5746*/
            v28 = (Coord3D *)Coord3D::Add(v27, v99, &v82); /*0x6f574d*/
            v29 = (Coord *)Coord3D::Add(v28, &v89, &v79); /*0x6f5754*/
            v78 = *(Coord3D *)Coord::Divide(v29, &v86, 4); /*0x6f5764*/
            v30 = (int)*g_TacticalClass_Instance; /*0x6f5786*/
            if ( v82.u32_8 <= v78.u32_8 ) /*0x6f5789*/
              (*(void (__stdcall **)(Coord3D *, Coord3D *, int, unsigned int, int, int))(v30 + 96))( /*0x6f57a0*/
                &v78,
                &v82,
                v76,
                0,
                q004,
                v74);
            else
              (*(void (__stdcall **)(Coord3D *, Coord3D *, int, unsigned int, int, int))(v30 + 96))( /*0x6f5794*/
                &v82,
                &v78,
                v76,
                0,
                q004,
                v74);
            Coord::Subtract((Coord *)&v85, v15 / 2, v17, v14); /*0x6f57aa*/
            v31 = Coord::Subtract( /*0x6f57d7*/
                    (Coord *)&v98,
                    v77.u32_8 + v85,
                    v86 + *(unsigned int *)v78.__pad_000,
                    v87 + v78.u32_4);
            v91 = *v31; /*0x6f57df*/
            v92 = v31[1]; /*0x6f57ea*/
            v93 = v31[2]; /*0x6f57f7*/
            Coord::Subtract((Coord *)&q008, v15 / 2, -v17, v14); /*0x6f57fb*/
            v32 = Coord::Subtract( /*0x6f5828*/
                    (Coord *)&v98,
                    v77.u32_8 + q008,
                    *(unsigned int *)v82.__pad_000 + *(unsigned int *)v78.__pad_000,
                    v82.u32_4 + v78.u32_4);
            v82.u32_8 = *v32; /*0x6f5831*/
            v83 = v32[1]; /*0x6f5838*/
            v84 = v32[2]; /*0x6f584a*/
            v33 = (Coord3D *)Coord3D::Add((Coord3D *)&v82.u32_8, &v94, &v82.u32_8); /*0x6f5873*/
            v34 = (Coord3D *)Coord3D::Add(v33, &v88, &v82.u32_8); /*0x6f587a*/
            v35 = (Coord *)Coord3D::Add(v34, &v100, &v91); /*0x6f5881*/
            v36 = Coord::Divide(v35, &v98, 4); /*0x6f5888*/
            v78.u32_8 = *v36; /*0x6f588f*/
            v79 = v36[1]; /*0x6f5896*/
            v37 = v36[2]; /*0x6f589a*/
            v38 = v84 <= v37; /*0x6f58a5*/
            v80 = v37; /*0x6f58ad*/
            v39 = (int)*g_TacticalClass_Instance; /*0x6f58b4*/
            if ( v38 ) /*0x6f58b6*/
              (*(void (__stdcall **)(int *, int *, int, unsigned int))(v39 + 96))( /*0x6f58cd*/
                &v78.u32_8,
                &v82.u32_8,
                v77.u32_4,
                0);
            else
              (*(void (__stdcall **)(int *, int *, int, unsigned int))(v39 + 96))( /*0x6f58c1*/
                &v82.u32_8,
                &v78.u32_8,
                v77.u32_4,
                0);
            Coord::Subtract((Coord *)&v91, v15 / 2, v17, v14); /*0x6f58d7*/
            v40 = Coord::Subtract( /*0x6f5901*/
                    (Coord *)&v94,
                    v77.u32_8 + v91,
                    v92 + *(unsigned int *)v78.__pad_000,
                    v93 + v78.u32_4);
            q008 = *v40; /*0x6f5909*/
            *(unsigned int *)v82.__pad_000 = v40[1]; /*0x6f5915*/
            v82.u32_4 = v40[2]; /*0x6f591f*/
            Coord::Subtract((Coord *)&v85, v15 / -2, v17, v14); /*0x6f5923*/
            v41 = Coord::Subtract( /*0x6f594d*/
                    (Coord *)&v94,
                    v77.u32_8 + v85,
                    v86 + *(unsigned int *)v78.__pad_000,
                    v87 + v78.u32_4);
            v82.u32_8 = *v41; /*0x6f5956*/
            v83 = v41[1]; /*0x6f5962*/
            v84 = v41[2]; /*0x6f596e*/
            v42 = (Coord3D *)Coord3D::Add((Coord3D *)&v82.u32_8, &v88, &v82.u32_8); /*0x6f5995*/
            v43 = (Coord3D *)Coord3D::Add(v42, &v100, &v82.u32_8); /*0x6f599c*/
            v44 = (Coord *)Coord3D::Add(v43, &v98, &q008); /*0x6f59a3*/
            v45 = Coord::Divide(v44, &v94, 4); /*0x6f59aa*/
            v78.u32_8 = *v45; /*0x6f59b1*/
            v79 = v45[1]; /*0x6f59b8*/
            v80 = v45[2]; /*0x6f59c3*/
            v74 = 0; /*0x6f59d3*/
            v46 = (int)*g_TacticalClass_Instance; /*0x6f59d5*/
            q004 = v77.u32_4; /*0x6f59d7*/
            if ( v84 <= v80 ) /*0x6f59d8*/
              (*(void (__stdcall **)(int *, int *))(v46 + 96))(&v78.u32_8, &v82.u32_8); /*0x6f59f6*/
            else
              (*(void (__stdcall **)(int *, int *))(v46 + 96))(&v82.u32_8, &v78.u32_8); /*0x6f59e4*/
          }
          v11 = v104; /*0x6f5e10*/
        }
        v70 = v103; /*0x6f5e17*/
        result = (*((int (__thiscall **)(TechnoClass *, int *, int *))v2->vtable1 + 275))(v2, v103, v11); /*0x6f5e27*/
      }
      else
      {
        v70 = v102; /*0x6f5e30*/
      }
      result = ((result) & 0xFFFFFF00u) | ((unsigned int)(v2->isMouseHovering) & 0xFFu); /*0x6f5e37*/
      if ( result ) /*0x6f5e3f*/

      {
        result = ((result) & 0xFFFFFF00u) | ((unsigned int)(v2->vtable1) & 0xFFu); /*0x6f5e41*/
        if ( !result ) /*0x6f5e49*/

        {
          v71 = (*((int (__thiscall **)(TechnoClass *, Object *, int))v2->vtable1 + 50))( /*0x6f5e57*/
                  v2,
                  dword_A83D4C,
                  q004);
          v72 = (int (__thiscall **)(TechnoClass *, int, unsigned int))v2->RadioClass; /*0x6f5e5d*/
          if ( v71 ) /*0x6f5e64*/
          {
            result = v72[52](v2, 1, v74); /*0x6f5e68*/
            if ( result ) /*0x6f5e70*/
              result = (*((int (__thiscall **)(TechnoClass *, int *, int *, int))v2->vtable1 + 275))(v2, v70, v11, 1); /*0x6f5e7b*/
          }
          else
          {
            result = ((int (__thiscall **)(TechnoClass *, int, int *))v72)[275](v2, (int)v70, v11); /*0x6f5e87*/
          }
        }
      }
      if ( (TechnoClass *)((char *)&g_BuildingLoadQueue_Array) == v2 ) /*0x6f5e93*/
      {
        result = *(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 504); /*0x6f5e95*/
        if ( *(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 504) > 0 ) /*0x6f5e9c*/
        {
          result = Timer::GetRemainingMs((Timer *)&((char *)&g_BuildingLoadQueue_Array)); /*0x6f5ea3*/
          if ( result > 0 ) /*0x6f5eaa*/
            return DrawToSurfaceSHP( /*0x6f5ede*/
                     (int)g_DSurface_Hidden_2,
                     *(int *)&g_FileSystem_THEATER_PAL,
                     FileSystem_TALKBUBL_SHP,
                     ((unsigned int *)&g_BuildingLoadQueue_Array)[0] - 1,
                     v70,
                     v11,
                     1536,
                     0,
                     0,
                     0,
                     1000,
                     0,
                     0,
                     0,
                     0,
                     0);
        }
      }
    }
    return result; /*0x6f5ee3*/
}
} // namespace ra2::game

// 0x6F60C0
namespace ra2::game {
void TechnoClass::vt_entry_448()
{
  int result; // eax

  return result; /*0x6f60c0*/
}
} // namespace ra2::game

// 0x6F64A0
namespace gamemd {  
// G42.34: BuildingClass 载体在 gamemd (structure/building.hpp)
{
  double v1; // st7
  int v3; // eax
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  unsigned int *v8; // eax
  int v9; // ebx
  int *v10; // eax
  int v11; // edi
  int *v12; // eax
  int v13; // ebx
  int *v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebp
  unsigned int *v18; // edi
  int v19; // ebp
  int v20; // ecx
  bool v21; // zf
  int v22; // ebp
  int v23; // ecx
  char v24; // bl
  int result; // eax
  int v26; // ecx
  int (__thiscall **vtable0)(TechnoClass *, int *, unsigned int *, int *); // eax
  char isSelected; // al
  unsigned int *v29; // edi
  int v30; // edx
  int v31; // ebx
  int v32; // ebp
  int v33; // edx
  int v34; // eax
  int i; // ebx
  int v40; // eax
  int v41; // eax
  int v42; // [esp+10h] [ebp-3Ch]
  unsigned int v43; // [esp+14h] [ebp-38h]
  unsigned int v44; // [esp+14h] [ebp-38h]
  int v45; // [esp+18h] [ebp-34h]
  int v46; // [esp+18h] [ebp-34h]
  int v47; // [esp+18h] [ebp-34h]
  int v48; // [esp+1Ch] [ebp-30h]
  int v49; // [esp+1Ch] [ebp-30h]
  int v50; // [esp+20h] [ebp-2Ch]
  int v51; // [esp+24h] [ebp-28h]
  int v52; // [esp+28h] [ebp-24h]
  int v53; // [esp+2Ch] [ebp-20h] BYREF
  int v54; // [esp+30h] [ebp-1Ch]
  int v55; // [esp+34h] [ebp-18h] BYREF
  int v56; // [esp+38h] [ebp-14h]
  int v57; // [esp+40h] [ebp-Ch] BYREF
  int v58; // [esp+44h] [ebp-8h]
  int v59; // [esp+48h] [ebp-4h]
  unsigned int *v60; // [esp+50h] [ebp+4h]
  int v61; // [esp+50h] [ebp+4h]
  int v62; // [esp+50h] [ebp+4h]
  int v63; // [esp+50h] [ebp+4h]
  int v64; // [esp+50h] [ebp+4h]
  int *v65; // [esp+54h] [ebp+8h]

  if ( (*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 11))(hpp) == 6 )
  {
    (*((void (__thiscall **)(TechnoClass *))hpp->vfptr + 114))(hpp); /*0x6f64bb*/
    v3 = (*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp); /*0x6f64c5*/
    v4 = (int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v3 + 124))(v3, &v55); /*0x6f64d4*/
    v5 = *v4; /*0x6f64d7*/
    v6 = v4[1]; /*0x6f64dd*/
    v7 = v4[2]; /*0x6f64e0*/
    v8 = Coord::Subtract((Coord *)&v55, *v4 / 2, v6 / 2, v7 / 2); /*0x6f64fb*/
    v9 = v6 - v8->u32_4; /*0x6f650b*/
    v57 = *v8 - v5; /*0x6f6523*/
    v58 = v9; /*0x6f652e*/
    v59 = v7; /*0x6f6532*/
    v10 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f6536*/
    v48 = *v10; /*0x6f6541*/
    v11 = v10[1]; /*0x6f6549*/
    v50 = v11; /*0x6f6564*/
    v58 = -v58; /*0x6f656a*/
    v12 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f656e*/
    v53 = *v12; /*0x6f6579*/
    v13 = v12[1]; /*0x6f6581*/
    v59 = 0; /*0x6f6592*/
    v58 = -v58; /*0x6f659a*/
    v14 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f659e*/
    v51 = *v14; /*0x6f65a5*/
    v52 = v14[1]; /*0x6f65c0*/
    v58 = -v58; /*0x6f65cb*/
    v15 = (v11 - v13) / 2; /*0x6f65cf*/
    v45 = v15; /*0x6f65d3*/
    BuildingClass::GetHealthRatio((BuildingClass *)hpp); /*0x6f65d7*/
    __asm { fimul [esp+4Ch+var_34] } /*0x6f65dc*/
    (*((unsigned short *)&(v16))) = Math::RoundToInt(v1); /*0x6f65e0*/
    v17 = v16; /*0x6f65e5*/
    v42 = v16; /*0x6f65ee*/
    if ( v16 <= 1 ) /*0x6f65f2*/
    {
      v42 = 1; /*0x6f65f4*/
      v17 = 1; /*0x6f65f8*/
    }
    if ( v17 >= v15 ) /*0x6f65fc*/
    {
      v42 = v15; /*0x6f65fe*/
      v17 = v15; /*0x6f6602*/
    }
    v43 = 1; /*0x6f6606*/
    if ( ObjectClass::IsYellowHP((ObjectClass *)hpp) ) /*0x6f660a*/
    {
      v43 = 2; /*0x6f6613*/
    }
    else if ( (uint8_t)BuildingClass::IsHealthLow((BuildingClass *)hpp) ) /*0x6f661f*/
    {
      v43 = 4; /*0x6f6628*/
    }
    v18 = v60; /*0x6f6630*/
    v56 = 2 - 2 * v15; /*0x6f6640*/
    if ( v17 > 0 ) /*0x6f6644*/
    {
      v19 = 0; /*0x6f664e*/
      v61 = 0; /*0x6f6650*/
      v46 = v42; /*0x6f6654*/
      do /*0x6f66d6*/
      {
        v20 = v50 + v18[1]; /*0x6f666b*/
        v53 = v48 + *v18 + 4 * v15 + 3 - v19; /*0x6f6673*/
        v54 = v56 + v20 + 2 - v61; /*0x6f6698*/
        DrawToSurfaceSHP( /*0x6f66ba*/
          (int)g_DSurface_Hidden_2,
          *(int *)&g_FileSystem_THEATER_PAL,
          FileSystem_PIPS_SHP,
          v43,
          &v53,
          v65,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v19 += 4; /*0x6f66c7*/
        v21 = v46 == 1; /*0x6f66cd*/
        v61 -= 2; /*0x6f66ce*/
        --v46; /*0x6f66d2*/
      }
      while ( !v21 ); /*0x6f66d6*/
      v17 = v42; /*0x6f66d8*/
    }
    if ( v17 < v15 ) /*0x6f66de*/
    {
      v22 = -2 * v17; /*0x6f66ec*/
      v62 = 4 * v42; /*0x6f66f7*/
      v47 = v15 - v42; /*0x6f66fb*/
      do /*0x6f677b*/
      {
        v23 = v50 + v18[1] + v56 + 2; /*0x6f6718*/
        v53 = v48 + *v18 + 4 * v15 + 3 - v62; /*0x6f6728*/
        v54 = v23 - v22; /*0x6f6741*/
        DrawToSurfaceSHP( /*0x6f675f*/
          (int)g_DSurface_Hidden_2,
          *(int *)&g_FileSystem_THEATER_PAL,
          FileSystem_PIPS_SHP,
          0,
          &v53,
          v65,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v22 -= 2; /*0x6f676f*/
        v21 = v47 == 1; /*0x6f6772*/
        v62 += 4; /*0x6f6773*/
        --v47; /*0x6f6777*/
      }
      while ( !v21 ); /*0x6f677b*/
    }
    v24 = 0; /*0x6f6789*/
    if ( (uint8_t)HouseClass::IsAlliedWith((void *)hpp->owner, (void *)dword_A83D4C) /*0x6f67b0*/
      || ((1 << *((unsigned int *)dword_A83D4C->relatedTagsCapacity + 46)) & hpp->displayProductionTo[0]) != 0 )
    {
      v24 = 1; /*0x6f67b2*/
    }
    if ( hpp
      && (*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 11))(hpp) == 6
      && *((unsigned char *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 11))(hpp) == 6
                   ? hpp + 1
                   : (TechnoClass *)1312)->vfptr
         + 5499) )
    {
      v24 = 1; /*0x6f67e6*/
    }
    result = (*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp); /*0x6f67ec*/
    if ( result->u8_3D8 || v24 ) /*0x6f67fe*/
    {
      v26 = v18[1]; /*0x6f6810*/
      v55 = v51 + *v18; /*0x6f6813*/
      vtable0 = (int (__thiscall **)(TechnoClass *, int *, unsigned int *, int *))hpp->vfptr; /*0x6f6817*/
      v56 = v52 + v26; /*0x6f681b*/
      return vtable0[276](hpp, &v55, v18, v65); /*0x6f682c*/
    }
  }
  else
  {
    v21 = (*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 11))(hpp) == 15; /*0x6f6843*/
    isSelected = hpp->isSelected; /*0x6f6846*/
    if ( v21 ) /*0x6f684c*/
    {
      v29 = v60; /*0x6f6852*/
      if ( isSelected ) /*0x6f6858*/
      {
        v30 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp) + 992) - 25 + v60[1]; /*0x6f6884*/
        v55 = *v60 + 11; /*0x6f688b*/
        v56 = v30; /*0x6f6899*/
        DrawToSurfaceSHP( /*0x6f68b4*/
          (int)g_DSurface_Hidden_2,
          *(int *)&g_FileSystem_THEATER_PAL,
          FileSystem_PIPBRD_SHP,
          1u,
          &v55,
          v65,
          3584,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
      v49 = -5; /*0x6f68c3*/
      v31 = 8; /*0x6f68db*/
      v32 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp) + 992) - 24; /*0x6f68e0*/
    }
    else
    {
      v29 = v60; /*0x6f68e8*/
      if ( isSelected ) /*0x6f68ee*/
      {
        v33 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp) + 992) - 26 + v60[1]; /*0x6f6918*/
        v55 = *v60 + 1; /*0x6f691f*/
        v56 = v33; /*0x6f692d*/
        DrawToSurfaceSHP( /*0x6f6947*/
          (int)g_DSurface_Hidden_2,
          *(int *)&g_FileSystem_THEATER_PAL,
          FileSystem_PIPBRD_SHP,
          0,
          &v55,
          v65,
          3584,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
      v49 = -15; /*0x6f6956*/
      v31 = 17; /*0x6f696e*/
      v32 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp) + 992) - 25; /*0x6f6973*/
    }
    v63 = v31; /*0x6f6978*/
    BuildingClass::GetHealthRatio((BuildingClass *)hpp); /*0x6f697c*/
    __asm { fimul [esp+4Ch+arg_0] } /*0x6f6981*/
    (*((unsigned short *)&(v34))) = Math::RoundToInt(v1); /*0x6f6985*/
    v64 = v34; /*0x6f698d*/
    if ( v34 <= 1 ) /*0x6f6991*/
    {
      v64 = 1; /*0x6f6993*/
      v34 = 1; /*0x6f699b*/
    }
    if ( v34 >= v31 ) /*0x6f69a1*/
      v64 = v31; /*0x6f69a3*/
    v44 = 16; /*0x6f69a9*/
    BuildingClass::GetHealthRatio((BuildingClass *)hpp); /*0x6f69b1*/
    _ECX = *(unsigned int *)&g_RulesClass_Instance; /*0x6f69b6*/
    __asm /*0x6f69bc*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x6f69c7*/
      v44 = 17; /*0x6f69c9*/
    BuildingClass::GetHealthRatio((BuildingClass *)hpp); /*0x6f69d3*/
    _EDX = *(unsigned int *)&g_RulesClass_Instance; /*0x6f69d8*/
    __asm /*0x6f69de*/
    {
      fcomp qword ptr [edx+1708h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x6f69e9*/
      v44 = 18; /*0x6f69eb*/
    for ( i = 0; i < v64; ++i ) /*0x6f69fb*/
    {
      v40 = v49 + *v29 + 2 * i; /*0x6f6a0e*/
      v56 = v32 + v29[1]; /*0x6f6a11*/
      v55 = v40; /*0x6f6a15*/
      DrawToSurfaceSHP( /*0x6f6a4a*/
        (int)g_DSurface_Hidden_2,
        *(int *)&g_FileSystem_THEATER_PAL,
        FileSystem_PIPS_SHP,
        v44,
        &v55,
        v65,
        1536,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
    if ( (uint8_t)HouseClass::IsAlliedWith((void *)hpp->owner, (void *)dword_A83D4C) /*0x6f6a8c*/
      || (result = hpp->displayProductionTo[0], ((1 << *((unsigned int *)dword_A83D4C->relatedTagsCapacity + 46)) & result) != 0) )
    {
      v41 = *v29 - 10; /*0x6f6a96*/
      v56 = v29[1] + 10; /*0x6f6a99*/
      v55 = v41; /*0x6f6aa1*/
      return (*((int (__thiscall **)(TechnoClass *, int *, unsigned int *, int *))hpp->vfptr + 276))(hpp, &v55, v29, v65); /*0x6f6ab0*/
    }
  }
  return result; /*0x6f6832*/
}
  else
  {
    v21 = (*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 11))(hpp) == 15; /*0x6f6843*/
    isSelected = hpp->isSelected; /*0x6f6846*/
    if ( v21 ) /*0x6f684c*/
    {
      v29 = v60; /*0x6f6852*/
      if ( isSelected ) /*0x6f6858*/
      {
        v30 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp) + 992) - 25 + v60[1]; /*0x6f6884*/
        v55 = *v60 + 11; /*0x6f688b*/
        v56 = v30; /*0x6f6899*/
        DrawToSurfaceSHP( /*0x6f68b4*/
          (int)g_DSurface_Hidden_2,
          *(int *)&g_FileSystem_THEATER_PAL,
          FileSystem_PIPBRD_SHP,
          1u,
          &v55,
          v65,
          3584,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
      v49 = -5; /*0x6f68c3*/
      v31 = 8; /*0x6f68db*/
      v32 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp) + 992) - 24; /*0x6f68e0*/
    }
    else
    {
      v29 = v60; /*0x6f68e8*/
      if ( isSelected ) /*0x6f68ee*/
      {
        v33 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp) + 992) - 26 + v60[1]; /*0x6f6918*/
        v55 = *v60 + 1; /*0x6f691f*/
        v56 = v33; /*0x6f692d*/
        DrawToSurfaceSHP( /*0x6f6947*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPBRD_SHP,
          0,
          &v55,
          v65,
          3584,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
      v49 = -15; /*0x6f6956*/
      v31 = 17; /*0x6f696e*/
      v32 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))hpp->vfptr + 33))(hpp) + 992) - 25; /*0x6f6973*/
    }
    v63 = v31; /*0x6f6978*/
    BuildingClass::GetHealthRatio((BuildingClass *)hpp); /*0x6f697c*/
    __asm { fimul [esp+4Ch+arg_0] } /*0x6f6981*/
    v34 = ((v34) & 0xFFFF0000u) | ((unsigned int)(Math::RoundToInt(v1)) & 0xFFFFu); /*0x6f6985*/
    v64 = v34; /*0x6f698d*/
    if ( v34 <= 1 ) /*0x6f6991*/
    {
      v64 = 1; /*0x6f6993*/
      v34 = 1; /*0x6f699b*/
    }
    if ( v34 >= v31 ) /*0x6f69a1*/
      v64 = v31; /*0x6f69a3*/
    v44 = 16; /*0x6f69a9*/
    BuildingClass::GetHealthRatio((BuildingClass *)hpp); /*0x6f69b1*/
    _ECX = *(unsigned int *)&g_RulesClass_Instance; /*0x6f69b6*/
    __asm /*0x6f69bc*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x6f69c7*/
      v44 = 17; /*0x6f69c9*/
    BuildingClass::GetHealthRatio((BuildingClass *)hpp); /*0x6f69d3*/
    _EDX = *(unsigned int *)&g_RulesClass_Instance; /*0x6f69d8*/
    __asm /*0x6f69de*/
    {
      fcomp qword ptr [edx+1708h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x6f69e9*/
      v44 = 18; /*0x6f69eb*/
    for ( i = 0; i < v64; ++i ) /*0x6f69fb*/
    {
      v40 = v49 + *v29 + 2 * i; /*0x6f6a0e*/
      v56 = v32 + v29[1]; /*0x6f6a11*/
      v55 = v40; /*0x6f6a15*/
      DrawToSurfaceSHP( /*0x6f6a4a*/
        (int)g_DSurface_Hidden_2,
        *(int *)&g_FileSystem_THEATER_PAL,
        FileSystem_PIPS_SHP,
        v44,
        &v55,
        v65,
        1536,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
    if ( (uint8_t)HouseClass::IsAlliedWith((void *)hpp->owner, (void *)dword_A83D4C) /*0x6f6a8c*/
      || (result = hpp->displayProductionTo[0], ((1 << *((unsigned int *)dword_A83D4C->relatedTagsCapacity + 46)) & result) != 0) )
    {
      v41 = *v29 - 10; /*0x6f6a96*/
      v56 = v29[1] + 10; /*0x6f6a99*/
      v55 = v41; /*0x6f6aa1*/
      return (*((int (__thiscall **)(TechnoClass *, int *, unsigned int *, int *))hpp->vfptr + 276))(hpp, &v55, v29, v65); /*0x6f6ab0*/
    }
  }
  return result; /*0x6f6832*/
}
// 0x6F6AC0
namespace ra2::game {
int TechnoClass::CleanupDeploy()
{
  int DB; // edi
  CellClass *v3; // edi
  int v4; // eax
  int v6; // [esp+0h] [ebp-1Ch]
  int v7[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->inLimbo || !(*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) ) /*0x6f6ad7*/
    return RadioClass::ProcessCmd((RadioClass *)this); /*0x6f6adf*/
  if ( *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1518) ) /*0x6f6aef*/
    (*((void (__thiscall **)(TechnoClass *, unsigned int, unsigned int, int, Object *))this->vfptr + 291))( /*0x6f6b06*/
      this,
      0,
      0,
      1,
      dword_A83D4C);
  else
    (*((void (__thiscall **)(TechnoClass *, unsigned int, unsigned int, unsigned int, unsigned int))this->vfptr + 291))(this, 0, 0, 0, 0); /*0x6f6b16*/
  v7[0] = this->location[0]; /*0x6f6b25*/
  v7[1] = this->location[1]; /*0x6f6b2c*/
  v7[2] = this->location[2]; /*0x6f6b37*/
  MapClass::RevealArea2( /*0x6f6b4f*/
    (MapClass *)&DataGlobal_87F7E8,
    v7,
    this->lastSightRange - 3,
    this->lastSightRange + 3,
    0);
  if ( *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3281) ) /*0x6f6b5e*/
    (*((void (__thiscall **)(TechnoClass *))this->vfptr + 262))(this); /*0x6f6b6a*/
  if ( *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1528) ) /*0x6f6b7a*/
    TechnoClass::RemoveFromDynamicVector((TechnoClass *)&stru_87F5D8, (char)this); /*0x6f6b88*/
  if ( *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1508) ) /*0x6f6b98*/
  {
    DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x6f6bab*/
    if ( DB ) /*0x6f6baf*/
    {
      do /*0x6f6bc7*/
      {
        (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)DB + 968))(DB, 0); /*0x6f6bb6*/
        DB = *(unsigned int *)(DB + 48); /*0x6f6bbc*/
      }
      while ( DB && (*(unsigned char *)(DB + 20) & 4) != 0 ); /*0x6f6bc7*/
    }
  }
  HouseClass::RegisterGain((int)this->owner, (int)this, 0); /*0x6f6bd1*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->vfptr + 176))(this) > 0 ) /*0x6f6be2*/
  {
    if ( this && (this->abstractFlags & 4) != 0 ) /*0x6f6bec*/
    {
      v3 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, &this->unknown_short_3C8); /*0x6f6bff*/
      if ( v3 ) /*0x6f6c03*/
        goto LABEL_20; /*0x6f6c03*/
    }
    else
    {
      v3 = (CellClass *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 111))(this); /*0x6f6c11*/
      if ( v3 ) /*0x6f6c15*/
      {
  LABEL_20:
        v6 = -this->threatPosed; /*0x6f6c17*/
        v4 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 14))(this); /*0x6f6c24*/
        CellClass::SetThreatBounds(v3, v4, v6); /*0x6f6c2a*/
        this->threatPosed = 0; /*0x6f6c2f*/
      }
    }
  }
  if ( this->isRadarTracked ) /*0x6f6c35*/
    (*((void (__thiscall **)(TechnoClass *))this->vfptr + 294))(this); /*0x6f6c44*/
  Mixer::ReleaseChannel((Mixer *)this->turretRotateSoundController); /*0x6f6c50*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f6c5b*/
  this->turretIsRotating = 0; /*0x6f6c65*/
  Mixer::ReleaseChannel((Mixer *)this->gattlingSoundController); /*0x6f6c6b*/
  this->isGattlingSoundPlaying = 0; /*0x6f6c76*/
  this->unknown_4BC = 0; /*0x6f6c7c*/
  Mixer::ReleaseChannel((Mixer *)this->unusedGattlingSoundController); /*0x6f6c82*/
  this->isUnusedGattlingSoundPlaying = 0; /*0x6f6c87*/
  this->unknown_4D8 = 0; /*0x6f6c8d*/
  return RadioClass::ProcessCmd((RadioClass *)this); /*0x6f6c9a*/
}
} // namespace ra2::game

// 0x6F6F60
namespace ra2::game {
int TechnoClass::ComputeSlopeDifference()
{

  double v2; // st7
  unsigned int *v5; // eax
  int v6; // eax
  unsigned int *v7; // eax
  void *v8; // esi
  void *v9; // edi
  int SlopeIndex; // ebx
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // eax
  int result; // eax
  __int16 v16[2]; // [esp+18h] [ebp-14h] BYREF
  __int16 v17[2]; // [esp+1Ch] [ebp-10h] BYREF
  unsigned char v18[12]; // [esp+20h] [ebp-Ch] BYREF
  int *v19; // [esp+30h] [ebp+4h]

  if ( !(*((unsigned __int8 (**)(TechnoClass *))this->vfptr + 20))(this) /*0x6f6f7c*/
    || !(*(unsigned __int8 (**)(int *))(*a2 + 80))(a2) )
  {
    return 0; /*0x6f70c8*/
  }
  v5 = (unsigned int *)(*((int (**)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v18); /*0x6f6f91*/
  LOWORD(v19) = *v5 / 256; /*0x6f6fa4*/
  HIWORD(v19) = v5[1] / 256; /*0x6f6fbd*/
  v6 = *a2; /*0x6f6fc6*/
  *(unsigned int *)v16 = v19; /*0x6f6fca*/
  v7 = (unsigned int *)(*(int (**)(int *, unsigned char *))(v6 + 72))(a2, v18); /*0x6f6fce*/
  LOWORD(v19) = *v7 / 256; /*0x6f6fe1*/
  HIWORD(v19) = v7[1] / 256; /*0x6f6ffa*/
  *(unsigned int *)v17 = v19; /*0x6f7007*/
  v8 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v16); /*0x6f7015*/
  v9 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v17); /*0x6f7022*/
  SlopeIndex = Cell::GetSlopeIndex((int)v9); /*0x6f702d*/
  if ( Cell::GetSlopeIndex((int)v8) - SlopeIndex >= 0 ) /*0x6f7037*/
  {
    v12 = Cell::GetSlopeIndex((int)v9); /*0x6f7046*/
    v11 = Cell::GetSlopeIndex((int)v8) - v12; /*0x6f704f*/
  }
  else
  {
    v11 = 0; /*0x6f7039*/
  }
  v13 = v11 * g_BuildingLoadQueue_Array.ThreatAvoidanceCoefficient[1]; /*0x6f708d*/
  LOWORD(v14) = Math::RoundToInt(v2); /*0x6f7090*/
  Math::Sqrt((double)(v13 * v13 + (v14 << 8) * (v14 << 8))); /*0x6f70b2*/
  LOWORD(result) = Math::RoundToInt(v2); /*0x6f70ba*/
  return result; /*0x6f70bf*/

}
} // namespace ra2::game

// 0x6F70E0
namespace ra2::game {
int TechnoClass::ComputeSlopePenalty()
{

  unsigned int *v4; // eax
  int v5; // eax
  unsigned int *v6; // eax
  void *v7; // esi
  void *v8; // edi
  int SlopeIndex; // ebx
  int v10; // eax
  int v11; // edi
  double v12; // st7
  int v13; // eax
  __int16 v15[2]; // [esp+8h] [ebp-14h] BYREF
  __int16 v16[2]; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v17[12]; // [esp+10h] [ebp-Ch] BYREF
  int *v18; // [esp+20h] [ebp+4h]

  if ( !(*((unsigned __int8 (**)(TechnoClass *))this->vfptr + 20))(this) /*0x6f70fc*/
    || !(*(unsigned __int8 (**)(int *))(*a2 + 80))(a2) )
  {
    return 0; /*0x6f7214*/
  }
  v4 = (unsigned int *)(*((int (**)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v17); /*0x6f7111*/
  LOWORD(v18) = *v4 / 256; /*0x6f7124*/
  HIWORD(v18) = v4[1] / 256; /*0x6f713d*/
  v5 = *a2; /*0x6f7146*/
  *(unsigned int *)v15 = v18; /*0x6f714a*/
  v6 = (unsigned int *)(*(int (**)(int *, unsigned char *))(v5 + 72))(a2, v17); /*0x6f714e*/
  LOWORD(v18) = *v6 / 256; /*0x6f7161*/
  HIWORD(v18) = v6[1] / 256; /*0x6f717a*/
  *(unsigned int *)v16 = v18; /*0x6f7187*/
  v7 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v15); /*0x6f7195*/
  v8 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v16); /*0x6f71a2*/
  SlopeIndex = Cell::GetSlopeIndex((int)v8); /*0x6f71ad*/
  if ( Cell::GetSlopeIndex((int)v7) - SlopeIndex >= 0 ) /*0x6f71b7*/
  {
    v11 = Cell::GetSlopeIndex((int)v8); /*0x6f71c6*/
    v10 = Cell::GetSlopeIndex((int)v7) - v11; /*0x6f71cd*/
  }
  else
  {
    v10 = 0; /*0x6f71b9*/
  }
  v12 = (double)(v10 / *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6200)) /*0x6f71e4*/
      * *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6208);
  if ( v12 >= *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6216) ) /*0x6f71f9*/
    v12 = *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6216); /*0x6f71fd*/
  LOWORD(v13) = Math::RoundToInt(v12); /*0x6f7203*/
  return v13 << 8; /*0x6f7208*/

}
} // namespace ra2::game

// 0x6F7220
namespace ra2::game {
int TechnoClass::CheckTargetLOS() const
{

  double v4; // st7
  TechnoClass *v6; // edi
  TechnoClass *v8; // ebx
  int *v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  TechnoClass *v18; // ebx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  double v26; // [esp+4h] [ebp-40h]
  double v27; // [esp+4h] [ebp-40h]
  double v28; // [esp+4h] [ebp-40h]
  unsigned __int8 *v30; // [esp+1Ch] [ebp-28h]
  double v31; // [esp+1Ch] [ebp-28h]
  int v32; // [esp+24h] [ebp-20h]
  int v33; // [esp+24h] [ebp-20h]
  int FoundationHeight; // [esp+24h] [ebp-20h]
  int v35; // [esp+24h] [ebp-20h]
  int v36; // [esp+28h] [ebp-1Ch]
  int v37; // [esp+2Ch] [ebp-18h] BYREF
  int v38; // [esp+30h] [ebp-14h]
  int GroundHeight; // [esp+34h] [ebp-10h]
  int v40; // [esp+38h] [ebp-Ch] BYREF
  int v41; // [esp+3Ch] [ebp-8h]
  int v42; // [esp+40h] [ebp-4h]

  if ( !a3 || !a4 ) /*0x6f7242*/
    return 0; /*0x6f7242*/
  v6 = (TechnoClass *)a4[45]; /*0x6f7248*/
  if ( v6 == (TechnoClass *)-512 ) /*0x6f7254*/
    return 1; /*0x6f725e*/
  if ( (*(unsigned __int8 (**)(void))(*a3 + 84))() ) /*0x6f7263*/
    v6 = (TechnoClass *)((char *)v6 /*0x6f7274*/
                       + *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1676));
  if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->q400)(this) ) /*0x6f727e*/
    v6 = (TechnoClass *)((*&dword_8871E0->u32_F48 /*0x6f729f*/
                        + (*(int (**)(TechnoClass *))&this->vfptr->q404)(this)) << 8);
  if ( this->bunkerLinkedUnit && (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) != 6 ) /*0x6f72b6*/
    v6 = (TechnoClass *)((char *)v6 + 256 * *&dword_8871E0->WeaponStruct_F54); /*0x6f72c6*/
  if ( this->inOpenToppedTransport[0] ) /*0x6f72c8*/
    v6 = (TechnoClass *)((char *)v6 + 256 * *&dword_8871E0->WeaponStruct_F5C); /*0x6f72e1*/
  v8 = v6; /*0x6f72e9*/
  v30 = (unsigned __int8 *)a4[40]; /*0x6f72eb*/
  if ( v30[663] ) /*0x6f72ef*/
    v8 = (TechnoClass *)((char *)v6 + TechnoClass::ComputeSlopeDifference(this, a3)); /*0x6f7306*/
  v9 = (int *)(*(int (**)(int *, int *))(*a3 + 72))(a3, &v40); /*0x6f7314*/
  v37 = *v9; /*0x6f7319*/
  v38 = v9[1]; /*0x6f7322*/
  v10 = *a3; /*0x6f7326*/
  GroundHeight = v9[2]; /*0x6f732b*/
  if ( (*(unsigned __int8 (**)(int *))(v10 + 80))(a3) /*0x6f7361*/
    && (GroundHeight = Cell::GetGroundHeight(&v37), (Coord::To_Cell((Coord *)&dword_87F7E8, &v37)->flags & 0x100) != 0) )
  {
    v11 = *(unsigned int *)&stru_B0EA70.__pad_1C[152] + GroundHeight; /*0x6f736d*/
    GroundHeight += *(unsigned int *)&stru_B0EA70.__pad_1C[152]; /*0x6f736f*/
  }
  else
  {
    v11 = GroundHeight; /*0x6f7375*/
  }
  v32 = a4[46]; /*0x6f7387*/
  if ( v32 ) /*0x6f738b*/
  {
    v12 = a2[1]; /*0x6f7395*/
    v40 = *a2 - v37; /*0x6f7398*/
    v13 = a2[2]; /*0x6f73a2*/
    v41 = v12 - v38; /*0x6f73a5*/
    __asm { fild [esp+38h+var_8] } /*0x6f73ab*/
    v42 = v13 - v11; /*0x6f73af*/
    __asm /*0x6f73b6*/
    {
      fild [esp+40h+var_4]
      fild [esp+40h+var_C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fld st(3)
      fmul st, st(4)
      faddp st(1), st
      fstp [esp+40h+var_44+4]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v26); /*0x6f73d7*/
    LOWORD(v14) = Math::RoundToInt(v4); /*0x6f73df*/
    if ( v14 < v32 ) /*0x6f73e8*/
      return 0; /*0x6f73e8*/
    v11 = GroundHeight; /*0x6f73ee*/
  }
  if ( v30[667] ) /*0x6f73f6*/
  {
    v15 = a2[1]; /*0x6f740a*/
    v40 = v37 - *a2; /*0x6f7413*/
    v16 = a2[2]; /*0x6f7419*/
    v41 = v38 - v15; /*0x6f741c*/
    __asm /*0x6f7423*/
    {
      fild [esp+40h+var_8]
      fild [esp+40h+var_C]
    }
    v42 = v11 - v16; /*0x6f742d*/
    __asm /*0x6f7431*/
    {
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+40h+var_44+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v27); /*0x6f7442*/
    LOWORD(v17) = Math::RoundToInt(v4); /*0x6f744a*/
    v33 = v17; /*0x6f744f*/
    v18 = v6; /*0x6f7457*/
    if ( v30[663] ) /*0x6f7459*/
      v18 = (TechnoClass *)((char *)v6 + TechnoClass::ComputeSlopePenalty(this, a3)); /*0x6f7472*/
    if ( v33 <= (int)v18 ) /*0x6f7478*/
    {
      if ( *(unsigned char *)(a4[40] + 661) ) /*0x6f7487*/
      {
        RulesClass::GetFiringDistance(); /*0x6f7491*/
      }
      else
      {
        _ECX = dword_8871E0; /*0x6f7498*/
        __asm { fild dword ptr [ecx+16B8h] } /*0x6f749e*/
      }
      __asm { fstp qword ptr [esp+38h+var_2C+4] } /*0x6f74a4*/
      v20 = TechnoClass::ComputeScanRange(v18, v31); /*0x6f74b4*/
      if ( globalHelper_08ABC0(v20, v33, v42, v31) /*0x6f7504*/
        && ((Coord::To_Cell((Coord *)&dword_87F7E8, &v37)->flags & 0x100) == 0
         || GroundHeight - a2[2] < 3 * *(unsigned int *)&stru_B0EA70.__pad_1C[168]) )
      {
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f7652*/
      }
    }
  }
  else
  {
    if ( (*(int (**)(int *))(*a3 + 44))(a3) == 6 ) /*0x6f752b*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)a3[328], 0); /*0x6f7542*/
      v8 = (TechnoClass *)((char *)v8 /*0x6f7554*/
                         + 64 * (BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a3[328]) + FoundationHeight));
    }
    v21 = (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 3; /*0x6f7561*/
    v22 = *a2; /*0x6f7564*/
    if ( v21 ) /*0x6f7566*/
    {
      v35 = v22 - v37; /*0x6f75c1*/
      v36 = a2[1] - v38; /*0x6f75c5*/
      __asm /*0x6f75cc*/
      {
        fild [esp+40h+var_1C]
        fild [esp+40h+var_20]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+40h+var_44+4]; double
      }
    }
    else
    {
      v23 = a2[2]; /*0x6f7577*/
      v41 = a2[1] - v38; /*0x6f757a*/
      __asm { fild [esp+38h+var_8] } /*0x6f7582*/
      v40 = v22 - v37; /*0x6f7588*/
      v42 = v23 - GroundHeight; /*0x6f758c*/
      __asm /*0x6f7593*/
      {
        fild [esp+40h+var_4]
        fild [esp+40h+var_C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+40h+var_44+4]
        fstp st
      }
    }
    __asm /*0x6f75e1*/
    {
      fstp st
      fstp st
    }
    Math::Sqrt(v28); /*0x6f75e5*/
    LOWORD(v24) = Math::RoundToInt(v4); /*0x6f75ed*/
    if ( v24 <= (int)v8 ) /*0x6f75f9*/
    {
      if ( (Coord::To_Cell((Coord *)&dword_87F7E8, a2)->flags & 0x100) == 0 ) /*0x6f760f*/
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f760f*/
      v25 = *(unsigned int *)&stru_B0EA70.__pad_1C[152] + Cell::GetGroundHeight(a2); /*0x6f7625*/
      if ( a2[2] >= v25 || GroundHeight < v25 ) /*0x6f762f*/
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f762f*/
    }
  }
  return 0; /*0x6f7258*/

}
} // namespace ra2::game

// 0x6F7660
namespace ra2::game {
int TechnoClass::IsInRange() const
{
  int result; // eax
  double v3; // st7
  unsigned int *v4; // eax
  unsigned int *v5; // eax
  char v6; // fps^1
  double v7; // st7
  bool v8; // c0
  char v9; // c2
  bool v10; // c3
  float v11; // [esp+14h] [ebp-24h]
  int16_t v12; // [esp+18h] [ebp-20h]
  int16_t v13; // [esp+1Ah] [ebp-1Eh]
  int16_t v14; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+22h] [ebp-16h]
  unsigned char v16[12]; // [esp+2Ch] [ebp-Ch] BYREF
  int v17; // [esp+3Ch] [ebp+4h]

  result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 248))(this); /*0x6f7668*/
  if ( !(unsigned char)result ) /*0x6f7670*/
    goto LABEL_5; /*0x6f7670*/
  result = *(unsigned int *)(*(unsigned int *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 252))(this) + 172); /*0x6f7682*/
  if ( !result ) /*0x6f768a*/
    goto LABEL_5; /*0x6f768a*/
  v3 = *(float *)(result + 292) - result->u8_128; /*0x6f769a*/
  v11 = v3; /*0x6f76a5*/
  v4 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, int16_t *))this->vfptr + 18))(this, &v14); /*0x6f76a9*/
  v12 = *v4 / 256; /*0x6f76bc*/
  v13 = v4[1] / 256; /*0x6f76d6*/
  v5 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v17 + 72))(v17, v16); /*0x6f76e0*/
  v14 = *v5 / 256; /*0x6f76f6*/
  (*((unsigned short *)&(v15))) = v5[1] / 256; /*0x6f770e*/
  Math::Sqrt( /*0x6f774a*/
    (double)(int16_t)(v12 - v14) * (double)(int16_t)(v12 - v14)
  + (double)(int16_t)(v13 - v15) * (double)(int16_t)(v13 - v15));
  result = (int16_t)Math::RoundToInt(v3); /*0x6f7757*/
  v7 = (double)(int16_t)result; /*0x6f775e*/
  v8 = v7 < v11; /*0x6f7762*/
  v9 = 0; /*0x6f7762*/
  v10 = v7 == v11; /*0x6f7762*/
  (((unsigned char *)&(result))[1]) = v6; /*0x6f7766*/
  if ( v7 <= v11 ) /*0x6f776b*/
    (*((unsigned char *)&(result))) = 1; /*0x6f776d*/
  else
  LABEL_5:
    (*((unsigned char *)&(result))) = 0; /*0x6f7776*/
  return result; /*0x6f776f*/
}
} // namespace ra2::game

// 0x6F7780
namespace ra2::game {
int TechnoClass::CheckCellPassable2() const
{
  int (__thiscall **vtable0)(TechnoClass *, unsigned int, int); // edi
  int v3; // eax
  int v5; // [esp+10h] [ebp+4h]

  vtable0 = (int (__thiscall **)(TechnoClass *, unsigned int, int))this->vfptr; /*0x6f778a*/
  v3 = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 185))(this, v5); /*0x6f778c*/
  return vtable0[234](this, v5, v3); /*0x6f779c*/
}
} // namespace ra2::game

// 0x6F77B0
namespace ra2::game {
int TechnoClass::ValidateTarget(TechnoClass* target, int weapon_index) const
{

  int result; // eax
  int *v2; // ebx
  int *v4; // eax
  int v5; // edx
  int vfptr; // eax
  unsigned int *v7; // edi
  unsigned int *v8; // eax
  void *v9; // eax
  int *v10; // eax
  char v11; // cl
  int v12; // eax
  int v13; // [esp+14h] [ebp-24h] BYREF
  int v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  unsigned char v16[12]; // [esp+20h] [ebp-18h] BYREF
  unsigned char v17[12]; // [esp+2Ch] [ebp-Ch] BYREF
  int *v18; // [esp+3Ch] [ebp+4h]
  int *v19; // [esp+3Ch] [ebp+4h]
  int *v20; // [esp+40h] [ebp+8h] BYREF

  v2 = v18; /*0x6f77b4*/
  if ( v18 ) /*0x6f77bd*/
  {
    v4 = (int *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->u32_48)(this, v16); /*0x6f77d3*/
    v13 = *v4; /*0x6f77d8*/
    v14 = v4[1]; /*0x6f77df*/
    v5 = v4[2]; /*0x6f77e7*/
    vfptr = this->vfptr; /*0x6f77ea*/
    v15 = v5; /*0x6f77ef*/
    v7 = *(unsigned int **)(*(int (**)(TechnoClass *, int *))(vfptr + 1016))(this, v20); /*0x6f77f9*/
    if ( v7 ) /*0x6f77fd*/
    {
      if ( v7->inAirFlag ) /*0x6f7803*/
      {
        v8 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->u32_48)(this, v16); /*0x6f781a*/
        LOWORD(v19) = *v8 / 256; /*0x6f782d*/
        HIWORD(v19) = v8[1] / 256; /*0x6f7845*/
        v20 = v19; /*0x6f784e*/
        v9 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v20); /*0x6f7858*/
        v10 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v9 + 72))(v9, v17); /*0x6f7866*/
        v13 = *v10; /*0x6f786b*/
        v14 = v10[1]; /*0x6f7872*/
        v11 = this->onBridge[0]; /*0x6f7876*/
        v12 = v10[2]; /*0x6f787c*/
        v15 = v12; /*0x6f7881*/
        if ( v11 ) /*0x6f7885*/
          v15 = *(unsigned int *)&stru_B0EA70.__pad_1C[152] + v12; /*0x6f788d*/
      }
    }
    if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->u32_54)(this) ) /*0x6f7895*/
      v15 = *(unsigned int *)((*(int (**)(int *, unsigned char *))(*v2 + 72))(v2, v17) + 8); /*0x6f78ab*/
    LOBYTE(result) = TechnoClass::CheckTargetLOS(this, &v13, v2, v7); /*0x6f78b8*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x6f77c0*/
  }
  return result; /*0x6f77bf*/

}
} // namespace ra2::game

// 0x6F78D0
namespace ra2::game {
int TechnoClass::CheckAndFireAtTarget()
{

  int v2; // edi
  unsigned __int8 **v3; // eax
  unsigned __int8 *v4; // eax
  int v6; // [esp+Ch] [ebp+4h]

  v2 = (*(int (**)(TechnoClass *))&this->vfptr->isOnCarryall)(this); /*0x6f78de*/
  v3 = (unsigned __int8 **)(*(int (**)(TechnoClass *, int))&this->vfptr->barrelRecoil)(this, v2); /*0x6f78e3*/
  if ( v3 && (v4 = *v3) != 0 && v4[310] ) /*0x6f78f3*/
    return (*(int (**)(TechnoClass *, int, int))(this->vfptr + 936))(this, v6, v2); /*0x6f7907*/
  else
    return (*(int (**)(TechnoClass *, int))&this->vfptr->u32_3AC)(this, v6); /*0x6f791b*/

}
} // namespace ra2::game

// 0x6F7930
namespace ra2::game {
int TechnoClass::CheckCellPassable() const
{
  CellClass *v2; // eax
  int (__thiscall **vtable0)(TechnoClass *, unsigned int, int); // ebx
  CellClass *v4; // edi
  int v5; // eax
  unsigned int *v7; // [esp+10h] [ebp+4h]

  v2 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v7); /*0x6f793f*/
  vtable0 = (int (__thiscall **)(TechnoClass *, unsigned int, int))this->vfptr; /*0x6f7944*/
  v4 = v2; /*0x6f7946*/
  v5 = (*((int (__thiscall **)(TechnoClass *, CellClass *))this->vfptr + 185))(this, v2); /*0x6f794b*/
  return ((int (__thiscall **)(TechnoClass *, CellClass *, int))vtable0)[234](this, v4, v5); /*0x6f795b*/
}
} // namespace ra2::game

// 0x6F7970
namespace ra2::game {
int TechnoClass::CheckCellPassable3() const
{
  int (__thiscall **vtable0)(TechnoClass *, CellClass *, unsigned int); // edi
  CellClass *v3; // eax
  unsigned int *v5; // [esp+Ch] [ebp+4h]
  int v6; // [esp+10h] [ebp+8h]

  vtable0 = (int (__thiscall **)(TechnoClass *, CellClass *, unsigned int))this->vfptr; /*0x6f797d*/
  v3 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v5); /*0x6f7985*/
  return vtable0[234](this, v3, v6); /*0x6f7993*/
}
} // namespace ra2::game

// 0x6F79A0
namespace ra2::game {
int TechnoClass::GetBridgeDamageMult() const
{

  int *v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  __int16 v8; // cx
  int v9; // eax
  __int16 v10; // ax
  Cell *v11; // eax
  unsigned int *v12; // eax
  __int16 v13; // ax
  Cell *v14; // eax
  unsigned int *v15; // eax
  int v16; // edi
  __int16 v17; // cx
  int v18; // eax
  __int16 v19; // ax
  Cell *v20; // eax
  unsigned int *v21; // eax
  Cell *v22; // eax
  unsigned int *v23; // eax
  __int16 v26[2]; // [esp+10h] [ebp-30h] BYREF
  int v27; // [esp+14h] [ebp-2Ch]
  unsigned __int16 *v28; // [esp+18h] [ebp-28h]
  unsigned __int16 *v29; // [esp+1Ch] [ebp-24h]
  unsigned __int16 *v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+24h] [ebp-1Ch]
  int v32; // [esp+28h] [ebp-18h]
  unsigned __int16 *v33; // [esp+2Ch] [ebp-14h]
  unsigned __int16 *v34; // [esp+32h] [ebp-Eh]
  double v35; // [esp+38h] [ebp-8h]

  v2 = (int *)(*(int (__fastcall **)(TechnoClass *))&this->vfptr->isChronoImmuneFlag)(this); /*0x6f79b2*/
  if ( !v2 ) /*0x6f79ba*/
    return 1.0; /*0x6f79ba*/
  v3 = *v2; /*0x6f79c0*/
  if ( !v3 || !*(unsigned char *)(v3 + 326) ) /*0x6f79ca*/
    return 1.0; /*0x6f7c8a*/
  v4 = 1; /*0x6f79de*/
  v35 = 1.0; /*0x6f79e3*/
  v32 = *&dword_8871E0->WeaponStruct_1430 / 256; /*0x6f7a07*/
  v5 = v32; /*0x6f7a02*/
  if ( v32 > 1 ) /*0x6f7a0b*/
  {
    v6 = -1; /*0x6f7a11*/
    v27 = -1; /*0x6f7a14*/
    do /*0x6f7c77*/
    {
      v7 = v6; /*0x6f7a1a*/
      if ( v6 <= v4 ) /*0x6f7a1c*/
      {
        do /*0x6f7b35*/
        {
          v8 = *a2; /*0x6f7a25*/
          v9 = v7 + *a2; /*0x6f7a31*/
          if ( v9 >= dword_87F90C && v9 < dword_87F90C + dword_87F914 ) /*0x6f7a45*/
          {
            v10 = a2[1]; /*0x6f7a4e*/
            if ( v10 - v4 >= dword_87F910 ) /*0x6f7a5d*/
            {
              LOWORD(v34) = -(__int16)v4; /*0x6f7a65*/
              LOWORD(v28) = v7 + v8; /*0x6f7a6a*/
              HIWORD(v28) = v10 - v4; /*0x6f7a7a*/
              *(unsigned int *)v26 = v28; /*0x6f7a87*/
              v11 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v26); /*0x6f7a8c*/
              v12 = Cell::IsBridge(v11); /*0x6f7a93*/
              if ( v12 ) /*0x6f7a9a*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v12) ) /*0x6f7aa7*/
                  v35 = v35 * 0.5; /*0x6f7aba*/
              }
            }
            v13 = a2[1]; /*0x6f7abe*/
            if ( v4 + v13 < dword_87F910 + dword_87F918 ) /*0x6f7ad7*/
            {
              HIWORD(v29) = v4 + v13; /*0x6f7ade*/
              LOWORD(v29) = v7 + *a2; /*0x6f7aee*/
              *(unsigned int *)v26 = v29; /*0x6f7afc*/
              v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v26); /*0x6f7b00*/
              v15 = Cell::IsBridge(v14); /*0x6f7b07*/
              if ( v15 ) /*0x6f7b0e*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v15) ) /*0x6f7b1b*/
                  v35 = v35 * 0.5; /*0x6f7b2e*/
              }
            }
          }
          ++v7; /*0x6f7b32*/
        }
        while ( v7 <= v4 ); /*0x6f7b35*/
        v6 = v27; /*0x6f7b3b*/
        v5 = v32; /*0x6f7b3f*/
      }
      v16 = v6 + 1; /*0x6f7b43*/
      if ( v6 + 1 < v4 ) /*0x6f7b48*/
      {
        do /*0x6f7c61*/
        {
          v17 = a2[1]; /*0x6f7b51*/
          v18 = v16 + v17; /*0x6f7b5e*/
          if ( v18 >= dword_87F910 && v18 < dword_87F910 + dword_87F918 ) /*0x6f7b72*/
          {
            v19 = *a2; /*0x6f7b7b*/
            if ( *a2 - v4 >= dword_87F90C ) /*0x6f7b89*/
            {
              LOWORD(v33) = -(__int16)v4; /*0x6f7b91*/
              HIWORD(v30) = v16 + v17; /*0x6f7b9c*/
              LOWORD(v30) = v19 - v4; /*0x6f7ba5*/
              *(unsigned int *)v26 = v30; /*0x6f7bb4*/
              v20 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v26); /*0x6f7bb8*/
              v21 = Cell::IsBridge(v20); /*0x6f7bbf*/
              if ( v21 ) /*0x6f7bc6*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v21) ) /*0x6f7bd3*/
                  v35 = v35 * 0.5; /*0x6f7be6*/
              }
            }
            if ( v4 + *a2 < dword_87F90C + dword_87F914 ) /*0x6f7c02*/
            {
              LOWORD(v31) = v4 + *a2; /*0x6f7c09*/
              HIWORD(v31) = a2[1] + v16; /*0x6f7c1a*/
              *(unsigned int *)v26 = v31; /*0x6f7c27*/
              v22 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v26); /*0x6f7c2c*/
              v23 = Cell::IsBridge(v22); /*0x6f7c33*/
              if ( v23 ) /*0x6f7c3a*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v23) ) /*0x6f7c47*/
                  v35 = v35 * 0.5; /*0x6f7c5a*/
              }
            }
          }
          ++v16; /*0x6f7c5e*/
        }
        while ( v16 < v4 ); /*0x6f7c61*/
        v6 = v27; /*0x6f7c67*/
        v5 = v32; /*0x6f7c6b*/
      }
      ++v4; /*0x6f7c6f*/
      v27 = --v6; /*0x6f7c73*/
    }
    while ( v4 < v5 ); /*0x6f7c77*/
  }
  return v35; /*0x6f7c81*/

}
} // namespace ra2::game

// 0x6F8C10
namespace ra2::game {
int TechnoClass::EvaluateBuildingTarget()
{

  double v2; // st7
  unsigned int *v4; // edi
  int v5; // eax
  int vfptr; // ebp
  void *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned int **v11; // eax
  unsigned int *v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // eax
  int v15; // edi
  int v16; // ebx
  unsigned int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  unsigned __int16 *v22; // edx
  int kr00_4_14; // kr00_4
  int v24; // [esp+24h] [ebp-18h] BYREF
  int v25; // [esp+28h] [ebp-14h]
  int v26; // [esp+2Ch] [ebp-10h]
  unsigned char v27[12]; // [esp+30h] [ebp-Ch] BYREF

  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x6f8c1e*/
    return 0; /*0x6f8c1e*/
  if ( !dword_8871E0->__pad_13BC[80 * *(unsigned int *)(this->owner + 388) + 453] ) /*0x6f8c43*/
    return 0; /*0x6f8c43*/
  v4 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x6f8c61*/
  v5 = v4->u32_44; /*0x6f8c63*/
  if ( v5 == -1 ) /*0x6f8c69*/
    return 0; /*0x6f8c69*/
  if ( !*(unsigned char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v5) + 680) ) /*0x6f8c78*/
    return 0; /*0x6f8c78*/
  vfptr = this->vfptr; /*0x6f8c87*/
  v7 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x6f8c8f*/
  v8 = (*(int (**)(TechnoClass *, void *))(vfptr + 740))(this, v7); /*0x6f8c97*/
  v9 = *a2 << 8; /*0x6f8ca7*/
  v25 = (a2[1] << 8) + 128; /*0x6f8cb7*/
  v10 = this->vfptr; /*0x6f8cbb*/
  v24 = v9 + 128; /*0x6f8cc1*/
  v26 = 0; /*0x6f8cc8*/
  if ( !(*(unsigned __int8 (**)(TechnoClass *, int *, int))(v10 + 356))(this, &v24, v8) ) /*0x6f8cd0*/
    return 0; /*0x6f8cd0*/
  v11 = (unsigned int **)(*(int (**)(TechnoClass *))&this->vfptr->isChronoImmuneFlag)(this); /*0x6f8ce3*/
  if ( !v11 ) /*0x6f8ceb*/
    return 0; /*0x6f8ceb*/
  v12 = *v11; /*0x6f8cf1*/
  if ( !v12 ) /*0x6f8cf5*/
    return 0; /*0x6f8cf5*/
  v13 = (unsigned __int8 *)v12[43]; /*0x6f8cfb*/
  if ( !v13 ) /*0x6f8d03*/
    return 0; /*0x6f8d03*/
  v14 = (unsigned __int8 *)v12[40]; /*0x6f8d09*/
  if ( v14 ) /*0x6f8d11*/
  {
    if ( !v14[677] ) /*0x6f8d13*/
      return 0; /*0x6f8d13*/
  }
  if ( !v13[324] || v4->u32_50 == -1 || (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) ) /*0x6f8d4b*/
    return 0; /*0x6f8de5*/
  v15 = (*a2 << 8) + 128; /*0x6f8d6e*/
  v16 = (a2[1] << 8) + 128; /*0x6f8d74*/
  v17 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->u32_48)(this, v27); /*0x6f8d7a*/
  v18 = v17[1] - v16; /*0x6f8d84*/
  v24 = *v17 - v15; /*0x6f8d86*/
  v19 = v17[2]; /*0x6f8d8a*/
  v25 = v18; /*0x6f8d8d*/
  v26 = v19; /*0x6f8d91*/
  Math::Sqrt((double)v24 * (double)v24 + (double)v19 * (double)v19 + (double)v18 * (double)v18); /*0x6f8dbd*/
  kr00_4_14 = Math::RoundToInt(v2); /*0x6f8dc5*/
  LOWORD(v22) = HIWORD(kr00_4_14); /*0x6f8dc5*/
  LOWORD(v20) = kr00_4_14; /*0x6f8dc5*/
  return (*(int (__fastcall **)(TechnoClass *, unsigned __int16 *, unsigned int))&this->vfptr->firepowerMultiplier_d)(this, v22, 0) - v20; /*0x6f8dda*/

}
} // namespace ra2::game

// 0x6F8DF0
namespace ra2::game {
int TechnoClass::SelectAutoTarget_Start_AU()
{

  double v5; // st7
  int vfptr; // eax
  int v9; // ebx
  unsigned int *v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int transporter; // ecx
  int v18; // edi
  int v19; // eax
  HouseClass *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // edx
  void *v25; // eax
  unsigned int j; // ebp
  Object *v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  unsigned int *v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  unsigned int *v35; // edx
  int v36; // edi
  int v37; // ebx
  int v38; // eax
  int v39; // ebp
  int v40; // ecx
  int v41; // eax
  unsigned int *v42; // edx
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  unsigned int *v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // ebp
  int v50; // ecx
  int v51; // eax
  unsigned int *v52; // edx
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  unsigned int *v56; // edx
  int v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // ebp
  int v61; // ecx
  int v62; // eax
  unsigned int *v63; // edx
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  unsigned int *v67; // edx
  int v68; // eax
  int v69; // eax
  int v70; // ebp
  int v71; // ecx
  int v72; // eax
  unsigned int *v73; // edx
  int v74; // ecx
  int v75; // eax
  int v76; // eax
  unsigned int *v77; // edx
  int v78; // eax
  int v79; // edi
  char v80; // bl
  int i; // ebp
  Object *owner; // ecx
  void *v83; // edi
  int v84; // eax
  int v85; // ebx
  int v86; // ebp
  Object *v87; // ecx
  int v88; // edi
  unsigned int *v89; // [esp+4Ch] [ebp-6Ch]
  bool v90; // [esp+5Fh] [ebp-59h]
  int v91; // [esp+60h] [ebp-58h]
  int v92; // [esp+64h] [ebp-54h] BYREF
  int v93; // [esp+68h] [ebp-50h]
  void *v94; // [esp+6Ch] [ebp-4Ch]
  int v95; // [esp+70h] [ebp-48h]
  __int16 v96[2]; // [esp+74h] [ebp-44h] BYREF
  int v97; // [esp+78h] [ebp-40h]
  int v98; // [esp+7Ch] [ebp-3Ch]
  __int16 v99[2]; // [esp+80h] [ebp-38h] BYREF
  int v100; // [esp+84h] [ebp-34h]
  int *TileIndex; // [esp+88h] [ebp-30h]
  int v102; // [esp+8Ch] [ebp-2Ch]
  int v103; // [esp+90h] [ebp-28h]
  int v104; // [esp+94h] [ebp-24h]
  int *v105; // [esp+98h] [ebp-20h]
  __int16 v106[2]; // [esp+9Ch] [ebp-1Ch] BYREF
  __int16 v107; // [esp+A0h] [ebp-18h]
  __int16 v108[4]; // [esp+A4h] [ebp-14h] BYREF
  char v109[4]; // [esp+ACh] [ebp-Ch] BYREF

  v94 = 0; /*0x6f8e05*/
  ++*(unsigned int *)&stru_A8E960.random[192]; /*0x6f8e09*/
  vfptr = this->vfptr; /*0x6f8e0f*/
  v93 = -1; /*0x6f8e11*/
  TileIndex = (int *)-1; /*0x6f8e15*/
  if ( *(unsigned char *)((*(int (**)(TechnoClass *))(vfptr + 132))(this) + 3360) /*0x6f8e2f*/
    && (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) )
  {
    return 0; /*0x6f8e41*/
  }
  LOWORD(v9) = a3; /*0x6f8e44*/
  if ( (a3 & 1) == 0 /*0x6f8e63*/
    && (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) != 6
    && (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) != 2 )
  {
    v10 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->u32_48)(this); /*0x6f8e6e*/
    LOWORD(TileIndex) = *v10 / 256; /*0x6f8e83*/
    v11 = this->vfptr; /*0x6f8e94*/
    HIWORD(TileIndex) = v10[1] / 256; /*0x6f8e99*/
    v105 = TileIndex; /*0x6f8ea2*/
    v12 = (*(int (**)(TechnoClass *, int))(v11 + 132))(this, 1); /*0x6f8ea8*/
    TileIndex = (int *)MapClass::GetTileIndex((MapClass *)&dword_87F7E8, v106, *(unsigned int *)(v12 + 1460), (char)v109); /*0x6f8ec4*/
  }
  if ( (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 15 ) /*0x6f8ed2*/
  {
    if ( TechnoClass::GetValue(this, -1) < 0 ) /*0x6f8ede*/
    {
      v9 = a3 & 3 | 0x4008; /*0x6f8ee3*/
LABEL_16:
      a3 = v9; /*0x6f8f25*/
      goto LABEL_17; /*0x6f8f25*/
    }
    if ( *(unsigned char *)&this->q6C0->u8_EC3 ) /*0x6f8ef1*/
    {
      LOWORD(v9) = a3 & 0xFFE7; /*0x6f8efb*/
      a3 &= 0xFFFFFFE7; /*0x6f8efe*/
    }
  }
  else if ( (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 1 && TechnoClass::GetValue(this, -1) < 0 ) /*0x6f8f1a*/
  {
    v9 = a3 & 3 | 0x4010; /*0x6f8f1f*/
    goto LABEL_16; /*0x6f8f1f*/
  }
LABEL_17:
  v91 = 0; /*0x6f8f29*/
  if ( (v9 & 0x100) != 0 ) /*0x6f8f30*/
    v91 = 32834; /*0x6f8f32*/
  v13 = v9 & 4; /*0x6f8f3a*/
  if ( v13 ) /*0x6f8f3d*/
  {
    v14 = v91; /*0x6f8f3f*/
    LOBYTE(v14) = v91 | 4; /*0x6f8f43*/
    v91 = v14; /*0x6f8f45*/
  }
  if ( (a3 & 0x1BA60) != 0 ) /*0x6f8f52*/
    v91 |= 0x40u; /*0x6f8f54*/
  if ( (a3 & 8) != 0 ) /*0x6f8f5b*/
  {
    v15 = v91; /*0x6f8f5d*/
    BYTE1(v15) = BYTE1(v91) | 0x80; /*0x6f8f61*/
    v91 = v15; /*0x6f8f64*/
  }
  if ( (a3 & 0x50) != 0 ) /*0x6f8f6a*/
  {
    v16 = v91; /*0x6f8f6c*/
    LOBYTE(v16) = v91 | 2; /*0x6f8f70*/
    v91 = v16; /*0x6f8f72*/
  }
  if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1712) ) /*0x6f8f80*/
  {
    (*(void (**)(int *))(this->currentTargets[0] + 12))(this->currentTargets); /*0x6f8f96*/
    (*(void (**)(int *))(this->currentTargetThreatValues[0] + 12))(this->currentTargetThreatValues); /*0x6f8fa5*/
  }
  transporter = this->transporter; /*0x6f8fa8*/
  v90 = 0; /*0x6f8fae*/
  if ( transporter && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)transporter + 132))(transporter) + 1508) ) /*0x6f8fbf*/
    v90 = *(unsigned int *)&this->transporter->mindControlledBy != 0; /*0x6f8fd7*/
  if ( (a3 & 3) == 0 )
  {
    v80 = a5; /*0x6f9b72*/
    if ( (v91 & 4) != 0 ) /*0x6f9b78*/
    {
      for ( i = 0; i < dword_A8E3A0; ++i ) /*0x6f9b87*/
      {
        owner = (Object *)this->owner; /*0x6f9b93*/
        v83 = (void *)*((unsigned int *)dword_A8E394 + i); /*0x6f9b99*/
        *(unsigned int *)v106 = 0; /*0x6f9b9c*/
        if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse(owner, (int)v83) /*0x6f9c3e*/
           || *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1728)
           || this->isBerserk[0]
           || v90)
          && (!v80 || *(unsigned int *)(v83->q21C + 48) == *(unsigned int *)&this->owner->enemyHouseIndex)
          && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner))
          && TechnoClass::EvaluateTarget(
               (TechnoClass *)a3,
               v5,
               v91,
               -1,
               (int)v83,
               (int)v106,
               (int *)-1,
               (int)&stru_B0EA70.__pad_1C[4],
               v89)
          && *(int *)v106 > v93 )
        {
          v94 = v83; /*0x6f9c40*/
          v93 = *(unsigned int *)v106; /*0x6f9c44*/
        }
      }
    }
    if ( (a3 & 0x10) != 0 ) /*0x6f9c5b*/
    {
      v84 = v91; /*0x6f9c5d*/
      LOBYTE(v84) = v91 | 4; /*0x6f9c61*/
      v91 = v84; /*0x6f9c63*/
    }
    v85 = 0; /*0x6f9c6c*/
    if ( *(int *)&stru_A8E960.random[276] > 0 )
    {
      v86 = a4; /*0x6f9c76*/
      do
      {
        v87 = (Object *)this->owner; /*0x6f9c80*/
        v88 = *(unsigned int *)(*(unsigned int *)&stru_A8E960.random[264] + 4 * v85); /*0x6f9c86*/
        a4 = 0; /*0x6f9c89*/
        if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse(v87, v88)
           || TechnoClass::GetValue(this, -1) < 0
           || !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
           && this
           && (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 15
           && *(unsigned char *)(((*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 15
                        ? &this->q6C0
                        : (TechnoClass *)1728)->vfptr
                       + 3779)
           || *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1728)
           || this->isBerserk[0]
           || v90)
          && v88->u32_94 == 2
          && (!a5 || *(unsigned int *)(v88->q21C + 48) == *(unsigned int *)&this->owner->enemyHouseIndex)
          && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner))
          && TechnoClass::EvaluateTarget((TechnoClass *)a3, v5, v91, -1, v88, (int)&a4, TileIndex, v86, v89)
          && a4 > v93 )
        {
          v94 = (void *)v88; /*0x6f9d8b*/
          v93 = a4; /*0x6f9d8f*/
        }
        ++v85; /*0x6f9d98*/
      }
      while ( v85 < *(int *)&stru_A8E960.random[276] );
    }
    return v94; /*0x6f9d9b*/
  }
  v18 = 0; /*0x6f8fe8*/
  v97 = 0; /*0x6f8fec*/
  if ( (a3 & 1) != 0 ) /*0x6f8ff0*/
  {
    v19 = (*(int (**)(TechnoClass *, unsigned int))&this->vfptr->sparkParticles_d)(this, 0); /*0x6f8ff5*/
LABEL_39:
    v18 = v19; /*0x6f901e*/
    v97 = v19; /*0x6f9020*/
    goto LABEL_40; /*0x6f9020*/
  }
  if ( (a3 & 2) != 0 ) /*0x6f8ff9*/
  {
    if ( this->currentMission == 25 ) /*0x6f9002*/
      v19 = (*(int (**)(TechnoClass *, int))&this->vfptr->sparkParticles_d)(this, 2); /*0x6f900a*/
    else
      v19 = (*(int (**)(TechnoClass *, int))&this->vfptr->sparkParticles_d)(this, 1); /*0x6f9018*/
    goto LABEL_39; /*0x6f9010*/
  }
LABEL_40:
  if ( TechnoClass::GetValue(this, -1) < 0 && this->currentMission == 5 ) /*0x6f9037*/
  {
    v18 = 512; /*0x6f9039*/
    v97 = 512; /*0x6f903e*/
  }
  v100 = v18 / 256; /*0x6f9052*/
  if ( !v18 ) /*0x6f9056*/
  {
    v20 = (HouseClass *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x6f9060*/
    if ( !(unsigned __int8)HouseClass::HasPower(v20) /*0x6f907b*/
      || *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 3285) )
    {
      if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 3433) /*0x6f90c2*/
        && *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 3479)
        && *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 3348) )
      {
        v21 = *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1464); /*0x6f90d6*/
      }
      else
      {
        v22 = (*(int (**)(TechnoClass *, int))&this->vfptr->firepowerMultiplier_d)(this, 1); /*0x6f90ea*/
        if ( (*(int (**)(TechnoClass *, unsigned int))&this->vfptr->firepowerMultiplier_d)(this, 0) <= v22 ) /*0x6f90fa*/
          v21 = (*(int (**)(TechnoClass *, int))&this->vfptr->firepowerMultiplier_d)(this, 1); /*0x6f9110*/
        else
          v21 = (*(int (**)(TechnoClass *, unsigned int))&this->vfptr->firepowerMultiplier_d)(this, 0); /*0x6f9102*/
      }
    }
    else
    {
      v21 = (*(int (**)(TechnoClass *, int))&this->vfptr->firepowerMultiplier_d)(this, this->currentWeaponSlot); /*0x6f908e*/
    }
    v100 = v21 / 256 + *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1676) / 256 + 1; /*0x6f9144*/
  }
  v23 = a4; /*0x6f9148*/
  LOWORD(a4) = *(unsigned int *)a4 / 256; /*0x6f915a*/
  v24 = this->vfptr; /*0x6f916b*/
  HIWORD(a4) = *(unsigned int *)(v23 + 4) / 256; /*0x6f9170*/
  *(unsigned int *)v108 = a4; /*0x6f9179*/
  if ( (*(unsigned __int8 (**)(TechnoClass *))(v24 + 1024))(this) ) /*0x6f917f*/
    v100 = (*(int (**)(TechnoClass *))&this->vfptr->q404)(this) /*0x6f91a3*/
         + *&dword_8871E0->u32_F48
         + 1;
  if ( v13 ) /*0x6f91a9*/
  {
    v25 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v108); /*0x6f91c8*/
    AircraftTrackerClass::FillCurrentVector((int)&g_CellClassManager, (int)v25, v100); /*0x6f91d3*/
    for ( j = VectorClass::RemoveObjectById(&g_CellClassManager); j; j = VectorClass::RemoveObjectById(&g_CellClassManager) ) /*0x6f91e6*/
    {
      v27 = (Object *)this->owner; /*0x6f91ec*/
      a4 = 0; /*0x6f91f3*/
      if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse(v27, j) /*0x6f92ac*/
         || *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1728)
         || this->isBerserk[0]
         || v90)
        && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner))
        && *(unsigned char *)(j + 116)
        && (*(int (**)(unsigned int))(*(unsigned int *)j + 120))(j) != 2
        && (!a5 || *(unsigned int *)(*(unsigned int *)(j + 540) + 48) == *(unsigned int *)&this->owner->enemyHouseIndex)
        && TechnoClass::EvaluateTarget(
             (TechnoClass *)a3,
             v5,
             v91 | 0x8002,
             v97,
             j,
             (int)&a4,
             (int *)-1,
             (int)&stru_B0EA70.__pad_1C[4],
             v89) )
      {
        if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1712) ) /*0x6f92c3*/
        {
          v28 = this->currentTargets[2]; /*0x6f92d1*/
          if ( this->currentTargets[4] < v28 /*0x6f9302*/
            || (BYTE1(this->currentTargets[3]) || !v28)
            && (v29 = this->currentTargets[5], v29 > 0)
            && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargets[0] + 8))(
                 this->currentTargets,
                 v28 + v29,
                 0) )
          {
            v30 = this->currentTargets[4]; /*0x6f9309*/
            v31 = (unsigned int *)this->currentTargets[1]; /*0x6f930c*/
            this->currentTargets[4] = v30 + 1; /*0x6f9312*/
            v31[v30] = j; /*0x6f9315*/
          }
          v32 = this->currentTargetThreatValues[2]; /*0x6f9318*/
          if ( this->currentTargetThreatValues[4] < v32 /*0x6f9349*/
            || (BYTE1(this->currentTargetThreatValues[3]) || !v32)
            && (v33 = this->currentTargetThreatValues[5], v33 > 0)
            && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargetThreatValues[0] + 8))(
                 this->currentTargetThreatValues,
                 v32 + v33,
                 0) )
          {
            v34 = this->currentTargetThreatValues[4]; /*0x6f9350*/
            v35 = (unsigned int *)this->currentTargetThreatValues[1]; /*0x6f9353*/
            this->currentTargetThreatValues[4] = v34 + 1; /*0x6f9359*/
            v35[v34] = a4; /*0x6f9360*/
          }
        }
        if ( a4 > v93 ) /*0x6f936d*/
        {
          v94 = (void *)j; /*0x6f936f*/
          v93 = a4; /*0x6f9373*/
        }
      }
    }
  }
  if ( (a3 & 0x10) != 0 ) /*0x6f9391*/
    v91 |= 4u; /*0x6f9393*/
  if ( a3 == 5 ) /*0x6f9398*/
    return v94; /*0x6f9398*/
  v99[0] = 0; /*0x6f93a9*/
  v99[1] = 0; /*0x6f93ae*/
  v98 = 0; /*0x6f93b3*/
  v95 = 0; /*0x6f93b7*/
  if ( v100 <= 0 ) /*0x6f93bb*/
    return v94; /*0x6f9da1*/
  while ( 1 ) /*0x6f93c7*/
  {
    v36 = -v95; /*0x6f93c7*/
    v102 = -v95; /*0x6f93cb*/
    if ( -v95 <= v95 ) /*0x6f93cf*/
    {
      *(unsigned short *)&v109[2] = -(__int16)v95; /*0x6f93d7*/
      while ( 1 ) /*0x6f93f2*/
      {
        HIWORD(v103) = *(unsigned short *)&v109[2] + v108[1]; /*0x6f93f2*/
        LOWORD(v103) = v36 + v108[0]; /*0x6f93f7*/
        *(unsigned int *)v96 = v103; /*0x6f940a*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v96) ) /*0x6f940e*/
        {
          v37 = a3; /*0x6f941f*/
          if ( SelectTechnoClassAreaTarget( /*0x6f9490*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)a3,
                 v91,
                 v96,
                 v97,
                 (void **)&a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(unsigned int *)(*(unsigned int *)(a4 + 540) + 48) == *(unsigned int *)&this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner)) )
          {
            if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1712) ) /*0x6f94a7*/
            {
              v38 = this->currentTargets[2]; /*0x6f94b5*/
              v39 = a4; /*0x6f94c1*/
              if ( this->currentTargets[4] < v38 /*0x6f94ea*/
                || (BYTE1(this->currentTargets[3]) || !v38)
                && (v40 = this->currentTargets[5], v40 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v38 + v40,
                     0) )
              {
                v41 = this->currentTargets[4]; /*0x6f94f1*/
                v42 = (unsigned int *)this->currentTargets[1]; /*0x6f94f4*/
                this->currentTargets[4] = v41 + 1; /*0x6f94fa*/
                v42[v41] = v39; /*0x6f94fd*/
              }
              v43 = this->currentTargetThreatValues[2]; /*0x6f9500*/
              if ( this->currentTargetThreatValues[4] < v43 /*0x6f9531*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v43)
                && (v44 = this->currentTargetThreatValues[5], v44 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v43 + v44,
                     0) )
              {
                v45 = this->currentTargetThreatValues[4]; /*0x6f9538*/
                v46 = (unsigned int *)this->currentTargetThreatValues[1]; /*0x6f953b*/
                this->currentTargetThreatValues[4] = v45 + 1; /*0x6f9541*/
                v46[v45] = v92; /*0x6f9548*/
              }
            }
            if ( v93 < v92 ) /*0x6f9555*/
            {
              v93 = v92; /*0x6f955b*/
              v94 = (void *)a4; /*0x6f955f*/
            }
          }
          if ( !v94 ) /*0x6f9569*/
          {
            v47 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9572*/
            v92 = v47; /*0x6f957b*/
            if ( v98 < v47 ) /*0x6f9581*/
            {
              v98 = v47; /*0x6f9587*/
              *(unsigned int *)v99 = *(unsigned int *)v96; /*0x6f958b*/
            }
          }
          LOWORD(v36) = v102; /*0x6f958f*/
        }
        else
        {
          v37 = a3; /*0x6f9b0e*/
        }
        HIWORD(v104) = v95 + v108[1]; /*0x6f95a3*/
        LOWORD(v104) = v36 + v108[0]; /*0x6f95a8*/
        *(unsigned int *)v96 = v104; /*0x6f95bb*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v96) ) /*0x6f95bf*/
        {
          if ( SelectTechnoClassAreaTarget( /*0x6f963d*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)v37,
                 v91,
                 v96,
                 v97,
                 (void **)&a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(unsigned int *)(*(unsigned int *)(a4 + 540) + 48) == *(unsigned int *)&this->owner->enemyHouseIndex)
            && ((v37 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner)) )
          {
            if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1712) ) /*0x6f9654*/
            {
              v48 = this->currentTargets[2]; /*0x6f9662*/
              v49 = a4; /*0x6f966e*/
              if ( this->currentTargets[4] < v48 /*0x6f9697*/
                || (BYTE1(this->currentTargets[3]) || !v48)
                && (v50 = this->currentTargets[5], v50 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v48 + v50,
                     0) )
              {
                v51 = this->currentTargets[4]; /*0x6f969e*/
                v52 = (unsigned int *)this->currentTargets[1]; /*0x6f96a1*/
                this->currentTargets[4] = v51 + 1; /*0x6f96a7*/
                v52[v51] = v49; /*0x6f96aa*/
              }
              v53 = this->currentTargetThreatValues[2]; /*0x6f96ad*/
              if ( this->currentTargetThreatValues[4] < v53 /*0x6f96de*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v53)
                && (v54 = this->currentTargetThreatValues[5], v54 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v53 + v54,
                     0) )
              {
                v55 = this->currentTargetThreatValues[4]; /*0x6f96e5*/
                v56 = (unsigned int *)this->currentTargetThreatValues[1]; /*0x6f96e8*/
                this->currentTargetThreatValues[4] = v55 + 1; /*0x6f96ee*/
                v56[v55] = v92; /*0x6f96f5*/
              }
            }
            if ( v93 < v92 ) /*0x6f9702*/
            {
              v93 = v92; /*0x6f9708*/
              v94 = (void *)a4; /*0x6f970c*/
            }
          }
          if ( !v94 ) /*0x6f9716*/
          {
            v57 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f971f*/
            v92 = v57; /*0x6f9728*/
            if ( v98 < v57 ) /*0x6f972e*/
            {
              v98 = v57; /*0x6f9734*/
              *(unsigned int *)v99 = *(unsigned int *)v96; /*0x6f9738*/
            }
          }
        }
        if ( ++v102 > v95 ) /*0x6f974b*/
          break; /*0x6f974b*/
        LOWORD(v36) = v102; /*0x6f93de*/
      }
    }
    v58 = 1 - v95; /*0x6f975a*/
    if ( 1 - v95 < v95 ) /*0x6f975e*/
    {
      v107 = -(__int16)v95; /*0x6f9768*/
      do /*0x6f9adc*/
      {
        LOWORD(v105) = v108[0] + v107; /*0x6f977b*/
        HIWORD(v105) = v58 + v108[1]; /*0x6f9786*/
        *(unsigned int *)v96 = v105; /*0x6f9795*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v96) ) /*0x6f9799*/
        {
          if ( SelectTechnoClassAreaTarget( /*0x6f9822*/
                 this,
                 a3,
                 v5,
                 (TechnoClass *)a3,
                 v91,
                 v96,
                 v97,
                 (void **)&a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(unsigned int *)(*(unsigned int *)(a4 + 540) + 48) == *(unsigned int *)&this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner)) )
          {
            if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1712) ) /*0x6f9839*/
            {
              v59 = this->currentTargets[2]; /*0x6f9847*/
              v60 = a4; /*0x6f9853*/
              if ( this->currentTargets[4] < v59 /*0x6f987c*/
                || (BYTE1(this->currentTargets[3]) || !v59)
                && (v61 = this->currentTargets[5], v61 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v59 + v61,
                     0) )
              {
                v62 = this->currentTargets[4]; /*0x6f9883*/
                v63 = (unsigned int *)this->currentTargets[1]; /*0x6f9886*/
                this->currentTargets[4] = v62 + 1; /*0x6f988c*/
                v63[v62] = v60; /*0x6f988f*/
              }
              v64 = this->currentTargetThreatValues[2]; /*0x6f9892*/
              if ( this->currentTargetThreatValues[4] < v64 /*0x6f98c3*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v64)
                && (v65 = this->currentTargetThreatValues[5], v65 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v64 + v65,
                     0) )
              {
                v66 = this->currentTargetThreatValues[4]; /*0x6f98ca*/
                v67 = (unsigned int *)this->currentTargetThreatValues[1]; /*0x6f98cd*/
                this->currentTargetThreatValues[4] = v66 + 1; /*0x6f98d3*/
                v67[v66] = v92; /*0x6f98da*/
              }
            }
            if ( v93 < v92 ) /*0x6f98e7*/
            {
              v93 = v92; /*0x6f98ed*/
              v94 = (void *)a4; /*0x6f98f1*/
            }
          }
          if ( !v94 ) /*0x6f98fb*/
          {
            v68 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9904*/
            v92 = v68; /*0x6f990d*/
            if ( v98 < v68 ) /*0x6f9913*/
            {
              v98 = v68; /*0x6f9919*/
              *(unsigned int *)v99 = *(unsigned int *)v96; /*0x6f991d*/
            }
          }
        }
        v106[0] = v108[0] + v95; /*0x6f9931*/
        v106[1] = v58 + v108[1]; /*0x6f9936*/
        *(unsigned int *)v96 = *(unsigned int *)v106; /*0x6f9949*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v96) ) /*0x6f994d*/
        {
          if ( SelectTechnoClassAreaTarget( /*0x6f99d6*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)a3,
                 v91,
                 v96,
                 v97,
                 (void **)&a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(unsigned int *)(*(unsigned int *)(a4 + 540) + 48) == *(unsigned int *)&this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner)) )
          {
            if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1712) ) /*0x6f99ed*/
            {
              v69 = this->currentTargets[2]; /*0x6f99fb*/
              v70 = a4; /*0x6f9a07*/
              if ( this->currentTargets[4] < v69 /*0x6f9a30*/
                || (BYTE1(this->currentTargets[3]) || !v69)
                && (v71 = this->currentTargets[5], v71 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v69 + v71,
                     0) )
              {
                v72 = this->currentTargets[4]; /*0x6f9a37*/
                v73 = (unsigned int *)this->currentTargets[1]; /*0x6f9a3a*/
                this->currentTargets[4] = v72 + 1; /*0x6f9a40*/
                v73[v72] = v70; /*0x6f9a43*/
              }
              v74 = this->currentTargetThreatValues[2]; /*0x6f9a46*/
              if ( this->currentTargetThreatValues[4] < v74 /*0x6f9a77*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v74)
                && (v75 = this->currentTargetThreatValues[5], v75 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v74 + v75,
                     0) )
              {
                v76 = this->currentTargetThreatValues[4]; /*0x6f9a7e*/
                v77 = (unsigned int *)this->currentTargetThreatValues[1]; /*0x6f9a81*/
                this->currentTargetThreatValues[4] = v76 + 1; /*0x6f9a87*/
                v77[v76] = v92; /*0x6f9a8e*/
              }
            }
            if ( v93 < v92 ) /*0x6f9a9b*/
            {
              v93 = v92; /*0x6f9aa1*/
              v94 = (void *)a4; /*0x6f9aa5*/
            }
          }
          if ( !v94 ) /*0x6f9aaf*/
          {
            v78 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9ab8*/
            v92 = v78; /*0x6f9ac1*/
            if ( v98 < v78 ) /*0x6f9ac7*/
            {
              v98 = v78; /*0x6f9acd*/
              *(unsigned int *)v99 = *(unsigned int *)v96; /*0x6f9ad1*/
            }
          }
        }
        ++v58; /*0x6f9ad9*/
      }
      while ( v58 < v95 ); /*0x6f9adc*/
    }
    if ( v94 ) /*0x6f9aec*/
    {
      v79 = v95; /*0x6f9af0*/
      if ( v95 == v100 / 4 || v95 == v100 / 2 ) /*0x6f9b0a*/
        return v94; /*0x6f9b52*/
    }
    else
    {
      v79 = v95; /*0x6f9b17*/
    }
    if ( *(unsigned int *)v99 != dword_B0EA50 ) /*0x6f9b27*/
      break; /*0x6f9b27*/
    v95 = v79 + 1; /*0x6f9b3a*/
    if ( v79 + 1 >= v100 ) /*0x6f9b3e*/
      return v94; /*0x6f9b3e*/
  }
  return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v99); /*0x6f8e38*/

}
} // namespace ra2::game

// 0x6F9DD0
namespace ra2::game {
int TechnoClass::SetTargetIfAllowed()
{
  int result; // eax

  if ( !(*((uint8_t (__thiscall **)(TechnoClass *, Object *))this->vfptr + 50))(this, dword_A83D4C) /*0x6f9df6*/
    || (result = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 52))(this, 1)) != 0 )
  {
    this->flashing[0] = a2; /*0x6f9dfc*/
    return a2; /*0x6f9df8*/
  }
  return result; /*0x6f9e02*/
}
} // namespace ra2::game

// 0x6FB010
namespace ra2::game {
int TechnoClass::StepAnimFrame()
{
  int result; // eax
  int ammo; // edi
  int v4; // edx
  void (__thiscall **vtable0)(TechnoClass *, int); // edx

  result = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1668); /*0x6fb01c*/
  if ( result != -1 ) /*0x6fb025*/
  {
    ammo = this->ammo; /*0x6fb027*/
    if ( ammo < result ) /*0x6fb02f*/
    {
      v4 = this->reloadTimer[0]; /*0x6fb031*/
      result = this->reloadTimer[2]; /*0x6fb037*/
      if ( v4 != -1 ) /*0x6fb040*/
      {
        if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4 >= result ) /*0x6fb04c*/
        {
  LABEL_7:
          vtable0 = (void (__thiscall **)(TechnoClass *, int))this->vfptr; /*0x6fb054*/
          this->ammo = ammo + 1; /*0x6fb05b*/
          vtable0[73](this, 2); /*0x6fb061*/
          return TechnoClass::CalcAnimDelay(this); /*0x6fb069*/
        }
        result -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4; /*0x6fb04e*/
      }
      if ( result ) /*0x6fb052*/
        return result; /*0x6fb052*/
      goto LABEL_7; /*0x6fb052*/
    }
  }
  return result; /*0x6fb06e*/
}
} // namespace ra2::game

// 0x6FB080
namespace ra2::game {
int TechnoClass::CalcAnimDelay() const
{
  int result; // eax
  int ammo; // ecx
  int *v4; // esi
  int v5; // ebx
  int v6; // edi
  int *reloadTimer; // esi
  int v8; // [esp+8h] [ebp-8h]

  result = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1668); /*0x6fb08e*/
  ammo = this->ammo; /*0x6fb094*/
  if ( ammo < result ) /*0x6fb09c*/
  {
    if ( ammo || *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1692) == -1 ) /*0x6fb0b7*/
    {
      if ( *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 996) ) /*0x6fb0f2*/
        v5 = this->ammo / *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 996); /*0x6fb11c*/
      else
        v5 = 1; /*0x6fb0fc*/
      v6 = v5 * v5 * *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1696); /*0x6fb135*/
      result = v6 + *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1688); /*0x6fb14a*/
      reloadTimer = this->reloadTimer; /*0x6fb14c*/
      *reloadTimer = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6fb154*/
      reloadTimer[1] = v8; /*0x6fb15a*/
      reloadTimer[2] = result; /*0x6fb15d*/
    }
    else
    {
      result = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1692); /*0x6fb0c9*/
      v4 = this->reloadTimer; /*0x6fb0cf*/
      *v4 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6fb0d5*/
      v4[1] = v8; /*0x6fb0db*/
      v4[2] = result; /*0x6fb0de*/
    }
  }
  return result; /*0x6fb0e1*/
}
} // namespace ra2::game

// 0x6FB740
namespace ra2::game {
void FootClass::UpdateLocomotion()
{

  double v3; // st7
  int v5; // edi
  unsigned int *Member; // edi
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int *v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int vfptr; // edx
  int v27; // ebp
  TechnoClass **v28; // edi
  unsigned int *v29; // eax
  CellClass *v30; // eax
  int v31; // eax
  int j; // edi
  int nextObject; // [esp+4h] [ebp-38h]
  int v35; // [esp+18h] [ebp-24h] BYREF
  int v36; // [esp+1Ch] [ebp-20h]
  void **v37; // [esp+24h] [ebp-18h] BYREF
  void *Block; // [esp+28h] [ebp-14h]
  int v39; // [esp+2Ch] [ebp-10h]
  char v40; // [esp+30h] [ebp-Ch]
  char v41; // [esp+31h] [ebp-Bh]
  int i; // [esp+34h] [ebp-8h]
  int v43; // [esp+38h] [ebp-4h]

  if ( this->cloakState ) /*0x6fb74b*/
  {
    v11 = &this->cloakProgress[2]; /*0x6fb8ea*/
    if ( Locomotor::GetSpeed(&this->u32_238) || (v12 = this->cloakProgress[5]) == 0 ) /*0x6fb903*/
    {
      LOBYTE(this->cloakProgress[1]) = 0; /*0x6fb934*/
    }
    else
    {
      v13 = this->cloakProgress[6]; /*0x6fb905*/
      v14 = this->cloakProgress[0]; /*0x6fb90b*/
      LOBYTE(this->cloakProgress[1]) = 1; /*0x6fb913*/
      this->cloakProgress[0] = v13 + v14; /*0x6fb91a*/
      v15 = v36; /*0x6fb926*/
      *v11 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6fb92a*/
      this->cloakProgress[3] = v15; /*0x6fb92c*/
      this->cloakProgress[4] = v12; /*0x6fb92f*/
    }
    if ( this->cloakProgress[0] < 0 ) /*0x6fb940*/
      this->cloakProgress[0] = 0; /*0x6fb942*/
    switch ( this->cloakState ) /*0x6fb94f*/
    {
      case 1: /*0x6fb94f*/
        (*(void (**)(TechnoClass *, int))&this->vfptr->q124)(this, 2); /*0x6fba49*/
        if ( !this->cloakProgress[5] ) /*0x6fba4f*/
        {
          this->cloakProgress[2] = *(unsigned int *)&stru_A8E960.random[528]; /*0x6fba67*/
          v22 = v36; /*0x6fba69*/
          this->cloakProgress[5] = 1; /*0x6fba6d*/
          this->cloakProgress[3] = v22; /*0x6fba73*/
          this->cloakProgress[4] = 1; /*0x6fba76*/
        }
        v23 = (*(int (**)(TechnoClass *, int, unsigned int))&this->vfptr->q068)(this, 1, 0) - 2; /*0x6fba83*/
        if ( v23 ) /*0x6fba86*/
        {
          v24 = v23 - 1; /*0x6fba8c*/
          if ( !v24 || v24 == 2 ) /*0x6fba92*/
          {
            this->cloakState = 2; /*0x6fba98*/
            v25 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6fbaa2*/
            this->cloakProgress[5] = 0; /*0x6fbaaf*/
            this->cloakProgress[2] = v25; /*0x6fbab7*/
            this->cloakProgress[3] = v36; /*0x6fbabd*/
            this->cloakProgress[4] = 0; /*0x6fbac0*/
            vfptr = this->vfptr; /*0x6fbac3*/
            this->cloakProgress[0] = 0; /*0x6fbac7*/
            (*(void (**)(TechnoClass *, int))(vfptr + 292))(this, 2); /*0x6fbacd*/
            if ( (*(int (**)(TechnoClass *))&this->vfptr->ChargerBarrels_0x12)(this) != 1 || this->u32_6CC == -1 ) /*0x6fbae6*/
            {
              Block = 0; /*0x6fbafc*/
              v39 = 0; /*0x6fbb00*/
              v40 = 1; /*0x6fbb04*/
              v27 = *(unsigned int *)&stru_A8E960.random[276] - 1; /*0x6fbb09*/
              v41 = 0; /*0x6fbb0c*/
              v37 = &vt_DynamicVectorClass_TechnoClass; /*0x6fbb12*/
              v43 = 10; /*0x6fbb1a*/
              for ( i = 0; v27 >= 0; --v27 ) /*0x6fbb26*/
              {
                v28 = *(TechnoClass ***)(*(unsigned int *)&stru_A8E960.random[264] + 4 * v27); /*0x6fbb32*/
                if ( v28[173] == this ) /*0x6fbb3b*/
                {
                  nextObject = v28[135]->nextObject; /*0x6fbb4a*/
                  v29 = (unsigned int *)(*(int (**)(TechnoClass *, int *))&this->vfptr->ThreatAvoidanceCoefficient)(this, &v35); /*0x6fbb50*/
                  v30 = Coord::To_Cell((Coord *)&dword_87F7E8, v29); /*0x6fbb59*/
                  if ( ((unsigned __int8)Cell::IsPassableOffset((Cell *)v30, nextObject) /*0x6fbba3*/
                     || v28[135] == (TechnoClass *)this->owner)
                    && (i < v39
                     || (v41 || !v39)
                     && v43 > 0
                     && ((unsigned __int8 (*)(void ***, int, unsigned int))v37[2])(&v37, v43 + v39, 0)) )
                  {
                    v31 = i++; /*0x6fbbae*/
                    *((unsigned int *)Block + v31) = v28; /*0x6fbbb9*/
                  }
                }
              }
              (*(void (**)(TechnoClass *, unsigned int))&this->vfptr->u32_DC)(this, 0); /*0x6fbbc8*/
              for ( j = i - 1; j >= 0; --j ) /*0x6fbbd7*/
                (*(void (**)(unsigned int, TechnoClass *))(**((unsigned int **)Block + j) + 968))( /*0x6fbbe3*/
                  *((unsigned int *)Block + j),
                  this);
              v37 = &vt_VectorClass_TechnoClass; /*0x6fbbf0*/
              if ( Block && v41 ) /*0x6fbc00*/
                __3_YAXPAX_Z(Block); /*0x6fbc03*/
            }
            else
            {
              (*(void (**)(TechnoClass *))&this->vfptr->q0FC)(this); /*0x6fbaec*/
            }
            if ( (*(int (**)(TechnoClass *))&this->vfptr->ChargerBarrels_0x12)(this) == 1 /*0x6fbc1d*/
              && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) )
            {
              (*(void (**)(TechnoClass *, char *, int, unsigned int))&this->vfptr->q174)( /*0x6fbc32*/
                this,
                &stru_B0EA70.__pad_1C[4],
                1,
                0);
            }
          }
        }
        else
        {
          BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6fbc44*/
          _EAX = dword_8871E0; /*0x6fbc49*/
          __asm /*0x6fbc4e*/
          {
            fcomp qword ptr [eax+1708h]
            fnstsw ax
          }
          if ( (BYTE1(_EAX) & 0x41) != 0 && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 10 ) /*0x6fbc72*/
            (*(void (**)(TechnoClass *, int))&this->vfptr->EnterTransportSound)(this, 1); /*0x6fbc7a*/
        }
        break;
      case 2: /*0x6fb94f*/
        if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->eliteWeapon1)(this) ) /*0x6fba20*/
          (*(void (**)(TechnoClass *, unsigned int))&this->vfptr->EnterTransportSound)(this, 0); /*0x6fba33*/
        break;
      case 3: /*0x6fb94f*/
        (*(void (**)(TechnoClass *, int))&this->vfptr->q124)(this, 2); /*0x6fb969*/
        v16 = (*(int (**)(TechnoClass *, int, unsigned int))&this->vfptr->q068)(this, 1, 0); /*0x6fb976*/
        if ( v16 ) /*0x6fb97b*/
        {
          if ( v16 == 1 && (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->weapon2)(this) ) /*0x6fb988*/
            (*(void (**)(TechnoClass *, int))&this->vfptr->LeaveTransportSound)(this, 1); /*0x6fb99c*/
        }
        else
        {
          v17 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6fb9ac*/
          this->cloakProgress[5] = 0; /*0x6fb9b9*/
          this->cloakProgress[2] = v17; /*0x6fb9bf*/
          this->cloakProgress[3] = v36; /*0x6fb9c5*/
          this->cloakProgress[4] = 0; /*0x6fb9c8*/
          this->cloakProgress[0] = 0; /*0x6fb9cb*/
          this->cloakState = 0; /*0x6fb9d1*/
          _ECX = dword_8871E0; /*0x6fb9d7*/
          v19 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6fb9dd*/
          __asm /*0x6fb9e3*/
          {
            fld qword ptr [ecx+1410h]
            fmul ds:dbl_7E27F8
          }
          LOWORD(v20) = Math::RoundToInt(v3); /*0x6fb9ef*/
          v21 = v36; /*0x6fb9f4*/
          this->cloakDelayTimer[0] = v19; /*0x6fba00*/
          this->cloakDelayTimer[1] = v21; /*0x6fba02*/
          this->cloakDelayTimer[2] = v20; /*0x6fba07*/
          (*(void (**)(TechnoClass *, int))&this->vfptr->q124)(this, 2); /*0x6fba0c*/
        }
        break;
    }
  }
  else if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->q288)(this) /*0x6fb7f1*/
         && !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->__pad_37C)(this)
         && !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->Size)(this)
         && !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->q1D4)(this)
         && !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->q1D8)(this)
         || ((unsigned __int8)Audio::IsMediumVolume(&this->veterancy) || (unsigned __int8)Audio::IsLoud(&this->veterancy))
         && ((v5 = (*(int (**)(TechnoClass *))&this->vfptr->q084)(this),
              (unsigned __int8)Audio::IsMediumVolume(&this->veterancy))
          && *(unsigned char *)(v5 + 674)
          || (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(unsigned char *)(v5 + 674) || *(unsigned char *)(v5 + 692))) )
  {
    Member = (unsigned int *)Team::GetMember((Team *)this, 0); /*0x6fb805*/
    if ( !Member || Member->ReturnZeroPos() != 6 || !Member->q520->WeaponsFactory ) /*0x6fb81d*/
    {
      if ( Locomotor::GetSpeed(&this->u32_238) || (v7 = this->cloakProgress[5]) == 0 ) /*0x6fb842*/
      {
        LOBYTE(this->cloakProgress[1]) = 0; /*0x6fb873*/
      }
      else
      {
        v8 = this->cloakProgress[6]; /*0x6fb844*/
        v9 = this->cloakProgress[0]; /*0x6fb84a*/
        LOBYTE(this->cloakProgress[1]) = 1; /*0x6fb852*/
        this->cloakProgress[0] = v8 + v9; /*0x6fb859*/
        this->cloakProgress[2] = *(unsigned int *)&stru_A8E960.random[528]; /*0x6fb865*/
        this->cloakProgress[3] = v36; /*0x6fb86b*/
        this->cloakProgress[4] = v7; /*0x6fb86e*/
      }
      if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->weapon2)(this) ) /*0x6fb87d*/
      {
        BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6fb88d*/
        _EAX = dword_8871E0; /*0x6fb892*/
        __asm /*0x6fb897*/
        {
          fcomp qword ptr [eax+1708h]
          fnstsw ax
        }
        if ( (BYTE1(_EAX) & 0x41) == 0 || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 4 ) /*0x6fb8cf*/
          (*(void (**)(TechnoClass *, unsigned int))&this->vfptr->LeaveTransportSound)(this, 0); /*0x6fb8a9*/
      }
    }
  }

}
} // namespace ra2::game

// 0x6FBC90
namespace ra2::game {
int TechnoClass::ShouldNotBeCloaked() const
{

  unsigned __int8 *v2; // edi
  unsigned int *v3; // eax
  int v4; // eax
  Cell *v5; // eax
  int v7; // [esp-4h] [ebp-24h]
  int v8; // [esp+Ch] [ebp-14h]
  __int16 v9[2]; // [esp+10h] [ebp-10h] BYREF
  unsigned char v10[12]; // [esp+14h] [ebp-Ch] BYREF

  if ( ((*(unsigned __int8 (**)(float *))(*&this->u32_A20))(this) || this->u32_3D2) /*0x6fbcdc*/
    && !(*(unsigned __int8 (**)(float *))(*&this->qDF0))(this)
    && !(*(unsigned __int8 (**)(float *))(*&this->qE00))(this)
    && !(*(unsigned __int8 (**)(float *))(*&this->u32_750))(this)
    && !(*(unsigned __int8 (**)(float *))(*&this->q760))(this) )
  {
    return 0; /*0x6fbcdc*/
  }
  if ( (unsigned __int8)Audio::IsMediumVolume(&this->initialOwner) || (unsigned __int8)Audio::IsLoud(&this->initialOwner) ) /*0x6fbcfd*/
  {
    v2 = (unsigned __int8 *)(*(int (**)(float *))(*&this->displayProductionTo))(this); /*0x6fbd12*/
    if ( (unsigned __int8)Audio::IsMediumVolume(&this->initialOwner) ) /*0x6fbd14*/
    {
      if ( v2[674] ) /*0x6fbd1d*/
        return 0; /*0x6fbd1d*/
    }
    if ( (unsigned __int8)Audio::IsLoud(&this->initialOwner) && (v2[674] || v2[692]) ) /*0x6fbd40*/
      return 0; /*0x6fbd40*/
  }
  v3 = (unsigned int *)(*(int (**)(float *, unsigned char *))(*&this->turretChargeTimer_d))(this, v10); /*0x6fbd53*/
  LOWORD(v8) = *v3 / 256; /*0x6fbd66*/
  HIWORD(v8) = v3[1] / 256; /*0x6fbd7a*/
  v4 = this->owner; /*0x6fbd83*/
  *(unsigned int *)v9 = v8; /*0x6fbd89*/
  v7 = v4->relatedTagsCount; /*0x6fbd94*/
  v5 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v9); /*0x6fbd9b*/
  return !(unsigned __int8)Cell::HasOccupierBit(v5, v7); /*0x6fbdb6*/

}
} // namespace ra2::game

// 0x6FBDC0
namespace ra2::game {
int TechnoClass::ShouldBeCloaked() const
{
  int v2; // edi
  unsigned int *v3; // eax
  HouseClass *owner; // eax
  Cell *v5; // eax
  int v7; // edx
  int v8; // eax
  int v10; // eax
  int relatedTagsCount; // [esp-4h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-14h]
  int16_t v13[2]; // [esp+10h] [ebp-10h] BYREF
  unsigned char v14[12]; // [esp+14h] [ebp-Ch] BYREF

  if ( !(*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 162))(this) ) /*0x6fbdca*/
  {
    if ( !(uint8_t)Audio::IsMediumVolume(this->veterancy) && !(uint8_t)Audio::IsLoud(this->veterancy) /*0x6fbe2e*/
      || ((v2 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this),
           !(uint8_t)Audio::IsMediumVolume(this->veterancy))
       || !*(unsigned char *)(v2 + 674))
      && (!(uint8_t)Audio::IsLoud(this->veterancy) || !*(unsigned char *)(v2 + 674) && !*(unsigned char *)(v2 + 692)) )
    {
      v3 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v14); /*0x6fbe41*/
      (*((unsigned short *)&(v12))) = *v3 / 256; /*0x6fbe54*/
      (*(((unsigned short *)&(v12)) + 1)) = v3[1] / 256; /*0x6fbe68*/
      owner = this->owner; /*0x6fbe71*/
      *(unsigned int *)v12 = v12; /*0x6fbe77*/
      relatedTagsCount = owner->relatedTagsCount; /*0x6fbe82*/
      v5 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v12); /*0x6fbe89*/
      if ( !(uint8_t)Cell::HasOccupierBit(v5, relatedTagsCount) && !this->isCloakableFlag ) /*0x6fbe99*/
        return 0; /*0x6fbeab*/
    }
  }
  if ( this->cloakState == 2 ) /*0x6fbeb3*/
    return 0; /*0x6fbebd*/
  v7 = this->diskLaserTimer[0]; /*0x6fbebe*/
  v8 = this->diskLaserTimer[2]; /*0x6fbec4*/
  if ( v7 != -1 ) /*0x6fbecd*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v7 >= v8 ) /*0x6fbed9*/
      goto LABEL_19; /*0x6fbed9*/
    v8 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v7; /*0x6fbedb*/
  }
  if ( v8 ) /*0x6fbedf*/
    return 0; /*0x6fbee9*/
  LABEL_19:
  if ( this->target /*0x6fbef9*/
    && (*((uint8_t (__thiscall **)(TechnoClass *, AbstractClass *))this->vfptr + 235))(this, this->target) )
  {
    return 0; /*0x6fbf0b*/
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) != 6 && this->cloakProgress[0] ) /*0x6fbf18*/
    return 0; /*0x6fbf2a*/
  v9 = this->cloakDelayTimer[0]; /*0x6fbf2b*/
  v10 = this->cloakDelayTimer[2]; /*0x6fbf31*/
  if ( v9 != -1 ) /*0x6fbf3a*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v9 >= v10 ) /*0x6fbf46*/
      return (!this->locomotorSource || !this || (this->abstractFlags & 4) == 0 || !this->u32_6AD) /*0x6fbf46*/
          && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 114))(this) <= 0;
    v10 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v9; /*0x6fbf48*/
  }
  if ( v10 ) /*0x6fbf4c*/
    return 0; /*0x6fbf56*/
  return (!this->locomotorSource || !this || (this->abstractFlags & 4) == 0 || !this->u32_6AD) /*0x6fbea3*/
      && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 114))(this) <= 0;
}
} // namespace ra2::game

// 0x6FC030
namespace ra2::game {
int TechnoClass::CanMoveToCell() const
{
  Cell *v3; // eax

  if ( this->slaveOwner ) /*0x6fc033*/
    return 0; /*0x6fc03d*/
  if ( this->airstrikeTintStage_2 ) /*0x6fc041*/
    return 0; /*0x6fc04b*/
  if ( this->bunkerLinkedUnit ) /*0x6fc04f*/
    return 0; /*0x6fc059*/
  if ( this->isTether ) /*0x6fc05d*/
  {
    v3 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 111))(this); /*0x6fc06b*/
    if ( Cell::IsBridge(v3) ) /*0x6fc073*/
      return 0; /*0x6fc07c*/
  }
  return AbstractClass::COMStub_79((ObjectClass *)this); /*0x6fc03f*/
}
} // namespace ra2::game

// 0x6FCD40
namespace ra2::game {
int TechnoClass::ProcessDeploymentState()
{
  SpawnManagerClass *spawnManager; // ecx

  (*((void (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 242))(this, 0); /*0x6fcd47*/
  (*((void (__thiscall **)(TechnoClass *, unsigned int, int))this->vfptr + 288))(this, 0, 1); /*0x6fcd55*/
  (*((void (__thiscall **)(TechnoClass *, int))this->vfptr + 160))(this, 3); /*0x6fcd61*/
  if ( !this || (this->abstractFlags & 4) == 0 || !this->u32_6AD ) /*0x6fcd71*/
  {
    spawnManager = this->spawnManager; /*0x6fcd7b*/
    if ( spawnManager ) /*0x6fcd83*/
    {
      TaskManager::Update((TaskManager *)spawnManager); /*0x6fcd85*/
      UnitClass::ProcessIdleOrders((UnitClass *)this->spawnManager); /*0x6fcd90*/
    }
    (*((void (__thiscall **)(TechnoClass *, int))this->vfptr + 55))(this, 1); /*0x6fcd9b*/
  }
  return (*((int (__thiscall **)(TechnoClass *))this->vfptr + 84))(this); /*0x6fcdab*/
}
} // namespace ra2::game

// 0x6FCDB0
namespace ra2::game {
int TechnoClass::AssignTarget_SyncLog(int a2)
{

  int v3; // edi
  int result; // eax
  int airstrike; // ecx
  int *v6; // ebp
  unsigned int *v7; // eax
  unsigned __int8 *v8; // eax
  TechnoClass *v9; // ebp
  SpawnManagerClass *spawnManager; // ecx
  unsigned int v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x6fcdb8*/
  result = this->target; /*0x6fcdbe*/
  LOBYTE(this->shouldLoseTarget) = 0; /*0x6fcdc4*/
  if ( a2 == result ) /*0x6fcdcc*/
    return result; /*0x6fcdcc*/
  airstrike = this->airstrike; /*0x6fcdd2*/
  if ( airstrike && *(TechnoClass **)(airstrike + 76) == this ) /*0x6fcddf*/
    WTFMode::ResetUnitFlags((WTFMode *)airstrike); /*0x6fcde1*/
  result = (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this); /*0x6fcdeb*/
  if ( result == 2 ) /*0x6fcdf1*/
  {
    if ( !a2 ) /*0x6fcdf5*/
      goto LABEL_38; /*0x6fcdf5*/
    result = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x6fcdff*/
    if ( *(unsigned char *)(result + 3412) ) /*0x6fce05*/
    {
      result = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x6fce11*/
      if ( !*(unsigned char *)(result + 3432) ) /*0x6fce17*/
      {
        if ( this->ammo ) /*0x6fce1f*/
        {
          if ( this->currentMission == 1 ) /*0x6fce2e*/
          {
            result = this->missionStatus; /*0x6fce30*/
            if ( result > 4 && result < 10 ) /*0x6fce3e*/
            {
              this->ammo = 0; /*0x6fce40*/
              goto LABEL_38; /*0x6fce46*/
            }
          }
        }
      }
    }
  }
  if ( a2 ) /*0x6fce4d*/
  {
    if ( (*(unsigned char *)(a2 + 20) & 1) != 0 ) /*0x6fce57*/
    {
      result = a2->u32_2E4; /*0x6fce59*/
      v6 = &a2->u32_2E4; /*0x6fce5f*/
      if ( result ) /*0x6fce67*/
      {
        result = (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2); /*0x6fce6d*/
        if ( result != 6 ) /*0x6fce73*/
        {
          if ( this->temporalUsing ) /*0x6fce75*/
            v3 = *v6; /*0x6fce7d*/
          v7 = *(unsigned int **)(*(int (**)(TechnoClass *, unsigned int))&this->vfptr->barrelRecoil)(this, 0); /*0x6fce8b*/
          if ( v7 ) /*0x6fce8f*/
          {
            v8 = (unsigned __int8 *)v7[43]; /*0x6fce91*/
            if ( v8 ) /*0x6fce99*/
            {
              if ( v8[347] ) /*0x6fce9b*/
                v3 = *v6; /*0x6fcea3*/
            }
          }
          result = this->airstrike; /*0x6fcea6*/
          if ( result && *(TechnoClass **)(result + 76) == this ) /*0x6fceb3*/
            v3 = *v6; /*0x6fceb5*/
        }
      }
    }
    if ( (TechnoClass *)v3 == this ) /*0x6fceba*/
    {
      v11[0] = this->location[0]; /*0x6fcec8*/
      v11[1] = this->location[1]; /*0x6fced4*/
      v11[2] = this->location[2]; /*0x6fcedb*/
      result = (int)Coord::To_Cell((Coord *)&dword_87F7E8, v11); /*0x6fcee4*/
      v3 = result; /*0x6fcee9*/
      goto LABEL_39; /*0x6fceeb*/
    }
    if ( !v3 ) /*0x6fceef*/
      goto LABEL_39; /*0x6fceef*/
    LOBYTE(result) = v3->abstractFlags; /*0x6fcef1*/
    if ( (result & 2) == 0 ) /*0x6fcef6*/
      goto LABEL_39; /*0x6fcef6*/
    if ( *(unsigned char *)(v3 + 144) && v3->HouseClass_6C ) /*0x6fcf00*/
    {
      LOBYTE(result) = (result & 4) != 0; /*0x6fcf08*/
      if ( !(unsigned char)result ) /*0x6fcf0e*/
        goto LABEL_39; /*0x6fcf0e*/
      v9 = (TechnoClass *)v3; /*0x6fcf16*/
      if ( v3->u8_3CD ) /*0x6fcf10*/
        v3 = 0; /*0x6fcf1c*/
      result = (*(int (**)(TechnoClass *))(v9->vfptr + 44))(v9); /*0x6fcf23*/
      if ( result != 15 ) /*0x6fcf29*/
        goto LABEL_39; /*0x6fcf29*/
      result = TechnoClass::IsEnteringOrCapturingStructure(v9); /*0x6fcf2d*/
      if ( !(unsigned char)result ) /*0x6fcf34*/
        goto LABEL_39; /*0x6fcf34*/
    }
  }
LABEL_38:
  v3 = 0; /*0x6fcf36*/
LABEL_39:
  spawnManager = (SpawnManagerClass *)this->spawnManager; /*0x6fcf38*/
  this->target = v3; /*0x6fcf3e*/
  if ( spawnManager && !v3 ) /*0x6fcf4b*/
    result = SpawnManagerClass::SetTarget(spawnManager, 0); /*0x6fcf4e*/
  if ( !this->target ) /*0x6fcf53*/
    this->currentBurstIndex = 0; /*0x6fcf5b*/
  if ( this->fireParticles ) /*0x6fcf61*/
  {
    result = (*(int (**)(TechnoClass *, int))&this->vfptr->u32_3AC)(this, v3); /*0x6fcf6e*/
    if ( !(unsigned char)result ) /*0x6fcf76*/
    {
      result = (*(int (**)(int))(*(unsigned int *)this->fireParticles + 248))(this->fireParticles); /*0x6fcf80*/
      this->fireParticles = 0; /*0x6fcf86*/
    }
  }
  return result; /*0x6fcf8c*/

}
} // namespace ra2::game

// 0x6FCFA0
namespace ra2::game {
int TechnoClass::CalculateROF()
{
  int v3; // edi
  TechnoClass *v4; // eax
  int currentBurstIndex; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]
  int v15; // [esp+Ch] [ebp+4h]

  if ( (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 6 && this->ammo > 1 ) /*0x6fcfb5*/
    return 1; /*0x6fcfb8*/
  v3 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, v14); /*0x6fcfd0*/
  if ( !v3 ) /*0x6fcfd4*/
    return 1; /*0x6fcfd7*/
  if ( *(unsigned char *)(v3 + 304) /*0x6fd028*/
    || *(unsigned char *)(v3 + 298) && this->sparkParticles
    || *(unsigned char *)(v3 + 297) && this->fireParticles
    || *(unsigned char *)(v3 + 301) && this->railgunParticles )
  {
    return *(unsigned int *)(v3 + 176); /*0x6fd1fa*/
  }
  if ( this )
    v4 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 1 ? this : 0;
  else
    v4 = 0; /*0x6fd03a*/
  currentBurstIndex = this->currentBurstIndex; /*0x6fd04e*/
  if ( currentBurstIndex >= *(unsigned int *)(v3 + 156) ) /*0x6fd05c*/
  {
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x6fd0b0*/
    (*((unsigned short *)&(v8))) = Math::RoundToInt((double)*(int *)(v3 + 176) * *&this->owner[108] + (double)v7); /*0x6fd0cf*/
    v9 = v8; /*0x6fd0da*/
    v15 = v8; /*0x6fd0de*/
    if ( (uint8_t)Audio::IsMediumVolume(this->veterancy) || (uint8_t)Audio::IsLoud(this->veterancy) ) /*0x6fd0ed*/
    {
      if ( (v10 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this), /*0x6fd12c*/
            (uint8_t)Audio::IsMediumVolume(this->veterancy))
        && *(unsigned char *)(v10 + 672)
        || (uint8_t)Audio::IsLoud(this->veterancy) && (*(unsigned char *)(v10 + 672) || *(unsigned char *)(v10 + 690)) )
      {
        (*((unsigned short *)&(v11))) = Math::RoundToInt((double)v15 * *(double *)(*(unsigned int *)&g_RulesClass_Instance + 1680)); /*0x6fd145*/
        v9 = v11; /*0x6fd14a*/
        v15 = v11; /*0x6fd14c*/
      }
    }
    if ( (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 256))(this) ) /*0x6fd154*/
    {
      if ( (*((int (__thiscall **)(TechnoClass *))this->vfptr + 258))(this) > 0 ) /*0x6fd16a*/
      {
        v9 /= (*((int (__thiscall **)(TechnoClass *))this->vfptr + 258))(this); /*0x6fd17d*/
        v15 = v9; /*0x6fd17f*/
      }
      if ( *(float *)(*(unsigned int *)&g_RulesClass_Instance + 3908) > 0.0 ) /*0x6fd19a*/
      {
        (*((unsigned short *)&(v12))) = Math::RoundToInt((double)v15 / *(float *)(*(unsigned int *)&g_RulesClass_Instance + 3908)); /*0x6fd1a6*/
        v9 = v12; /*0x6fd1ab*/
        v15 = v12; /*0x6fd1ad*/
      }
    }
    if ( this->bunkerLinkedUnit /*0x6fd1de*/
      && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) != 6
      && *(float *)(*(unsigned int *)&g_RulesClass_Instance + 3920) != 0.0 )
    {
      (*((unsigned short *)&(v13))) = Math::RoundToInt((double)v15 / *(float *)(*(unsigned int *)&g_RulesClass_Instance + 3920)); /*0x6fd1ea*/
      return v13; /*0x6fd1ef*/
    }
    return v9; /*0x6fd1f1*/
  }
  else
  {
    if ( currentBurstIndex <= 0 ) /*0x6fd060*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd060*/
    if ( currentBurstIndex > 4 ) /*0x6fd065*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd065*/
    if ( !v4 ) /*0x6fd069*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd069*/
    v6 = *(unsigned int *)(v4[1].ironTintTimer[2] + 4 * currentBurstIndex + 3652); /*0x6fd071*/
    if ( v6 == -1 ) /*0x6fd07b*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd094*/
    else
      return v6; /*0x6fd07e*/
  }
}
} // namespace ra2::game

// 0x6FD210
namespace ra2::game {
int TechnoClass::CreateFireEffect()
{

  char v6; // cl
  int *v7; // edi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  int v14; // edx
  int (**vtable0)(TechnoClass *); // eax
  int *v16; // eax
  int (**v17)(TechnoClass *, unsigned int *); // edx
  int v18; // ebp
  unsigned int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int v22; // esi
  int v23; // ebp
  int v24; // ebx
  int v25; // ecx
  char v26; // al
  char v27; // dl
  char *result; // eax
  int **v29; // [esp-18h] [ebp-68h]
  int *v30; // [esp-14h] [ebp-64h] BYREF
  int v31[5]; // [esp-10h] [ebp-60h] BYREF
  int v32; // [esp+4h] [ebp-4Ch]
  __int16 v33; // [esp+18h] [ebp-38h] BYREF
  char v34; // [esp+1Ah] [ebp-36h]
  int v35; // [esp+1Ch] [ebp-34h] BYREF
  __int16 *v36; // [esp+24h] [ebp-2Ch]
  int v37; // [esp+28h] [ebp-28h]
  int v38[3]; // [esp+2Ch] [ebp-24h] BYREF
  int v39; // [esp+38h] [ebp-18h] BYREF
  int v40; // [esp+3Ch] [ebp-14h]
  int v41; // [esp+40h] [ebp-10h]
  unsigned int v42[3]; // [esp+44h] [ebp-Ch] BYREF
  int *v43; // [esp+60h] [ebp+10h]

  v37 = *(char *)(a4 + 334); /*0x6fd224*/
  v6 = *(unsigned char *)(a4 + 333); /*0x6fd228*/
  v33 = 0; /*0x6fd230*/
  v34 = 0; /*0x6fd23a*/
  if ( v6 ) /*0x6fd23f*/
  {
    v7 = &this->owner->base[5]; /*0x6fd247*/
    v8 = BYTE1(this->owner->base[5]); /*0x6fd24f*/
    v9 = BYTE2(this->owner->base[5]); /*0x6fd252*/
    LOBYTE(v33) = *(unsigned char *)v7 >> 1; /*0x6fd257*/
    HIBYTE(v33) = v8 >> 1; /*0x6fd263*/
    v34 = v9 >> 1; /*0x6fd267*/
    v36 = &v33; /*0x6fd26b*/
  }
  else
  {
    v7 = (int *)(a4 + 288); /*0x6fd271*/
    v36 = (__int16 *)(a4 + 291); /*0x6fd27c*/
  }
  v10 = *a5; /*0x6fd28c*/
  v35 = 0; /*0x6fd28e*/
  if ( v10 == g_BuildingLoadQueue_Array.VoxelCaches[3] /*0x6fd2ae*/
    && a5[1] == g_BuildingLoadQueue_Array.VoxelCaches[4]
    && a5[2] == g_BuildingLoadQueue_Array.VoxelCaches[5] )
  {
    v13 = (int *)(*((int (**)(TechnoClass *, int *, int, unsigned int, unsigned int, unsigned int))this->vfptr + 44))( /*0x6fd2e9*/
                   this,
                   v38,
                   a3,
                   0,
                   0,
                   0);
    v39 = *v13; /*0x6fd2f1*/
    v40 = v13[1]; /*0x6fd2f8*/
    v14 = v13[2]; /*0x6fd2fe*/
    vtable0 = (int (**)(TechnoClass *))this->vfptr; /*0x6fd301*/
    v41 = v14; /*0x6fd303*/
    if ( vtable0[11](this) == 6 ) /*0x6fd30d*/
    {
      v16 = Coord::To_ScreenRaw(&v35, &v39); /*0x6fd31f*/
      v17 = (int (**)(TechnoClass *, unsigned int *))this->vfptr; /*0x6fd326*/
      v38[0] = *v16; /*0x6fd328*/
      v18 = v16[1]; /*0x6fd32e*/
      v19 = v17->currentMission(this, v42); /*0x6fd336*/
      v20 = Coord::To_ScreenRaw(v38, v19); /*0x6fd348*/
      v35 = *v20; /*0x6fd34f*/
      v35 = v18 - v20[1]; /*0x6fd358*/
      if ( v35 > 0 ) /*0x6fd35c*/
        v35 = 0; /*0x6fd35e*/
    }
  }
  else
  {
    v11 = a5[1]; /*0x6fd2b2*/
    v39 = *a5; /*0x6fd2b5*/
    v12 = a5[2]; /*0x6fd2b9*/
    v40 = v11; /*0x6fd2bc*/
    v41 = v12; /*0x6fd2c0*/
  }
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd372*/
    v21 = (int *)(*(int (**)(unsigned int *))(*(unsigned int *)a2 + 164))(v42); /*0x6fd37b*/
  else
    v21 = (int *)(*(int (**)(unsigned int *))(*(unsigned int *)a2 + 88))(v42); /*0x6fd38a*/
  v22 = *v21; /*0x6fd38d*/
  v32 = 92; /*0x6fd38f*/
  v23 = v21[1]; /*0x6fd391*/
  v24 = v21[2]; /*0x6fd394*/
  v43 = (int *)__2_YAPAXI_Z(0x5Cu); /*0x6fd39f*/
  if ( !v43 ) /*0x6fd3a5*/
    return 0; /*0x6fd453*/
  v32 = 0; /*0x6fd3af*/
  v31[4] = 1065353216; /*0x6fd3b1*/
  v31[3] = 1; /*0x6fd3b6*/
  v31[2] = 0; /*0x6fd3b8*/
  v31[1] = v37; /*0x6fd3ba*/
  v31[0] = v25; /*0x6fd3bf*/
  v26 = *(unsigned char *)(a4 + 296); /*0x6fd3c9*/
  LOWORD(v31[0]) = *(unsigned short *)(a4 + 294); /*0x6fd3cf*/
  v30 = v31; /*0x6fd3d6*/
  BYTE2(v31[0]) = v26; /*0x6fd3d7*/
  v27 = v36->u32_2; /*0x6fd3dd*/
  LOWORD(v30) = *v36; /*0x6fd3e2*/
  v29 = &v30; /*0x6fd3e5*/
  BYTE2(v30) = v27; /*0x6fd3e6*/
  LOWORD(v29) = *(unsigned short *)v7; /*0x6fd3f3*/
  BYTE2(v29) = *((unsigned char *)v7 + 2); /*0x6fd3f6*/
  result = TimerClass::Construct( /*0x6fd42b*/
             (char *)v43,
             v39,
             v40,
             v41,
             v22,
             v23,
             v24,
             v35,
             1,
             (int)v29,
             (int)v30,
             v31[0],
             v37,
             0,
             1,
             1065353216,
             0);
  if ( result ) /*0x6fd432*/
  {
    if ( *(unsigned char *)(a4 + 333) ) /*0x6fd438*/
      result[32] = 1; /*0x6fd442*/
  }
  return result; /*0x6fd446*/

}
} // namespace ra2::game

// 0x6FD460
namespace ra2::game {
int TechnoClass::CreateRadarBlip()
{
  int v5; // esi
  TechnoClass *v6; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // esi
  int (__thiscall **vtable0)(TechnoClass *, unsigned char *); // eax
  unsigned int *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int *v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  TechnoClass *v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch] BYREF
  int v21; // [esp+1Ch] [ebp-14h] BYREF
  unsigned char v22[12]; // [esp+24h] [ebp-Ch] BYREF

  v5 = 0; /*0x6fd46b*/
  v6 = (TechnoClass *)operator new(0x30u); /*0x6fd46d*/
  if ( !v6 ) /*0x6fd477*/
    return 0; /*0x6fd477*/
  v19 = (TechnoClass *)TechnoClass::ResetDamageAccumulator(v6); /*0x6fd482*/
  if ( !v19 ) /*0x6fd486*/
    return 0; /*0x6fd488*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 6 ) /*0x6fd4a2*/
  {
    v8 = Coord::To_ScreenRaw(&v20, a4); /*0x6fd4b0*/
    v9 = *v8; /*0x6fd4b5*/
    v10 = v8[1]; /*0x6fd4be*/
    vtable0 = (int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr; /*0x6fd4c1*/
    v21 = v9; /*0x6fd4c3*/
    v12 = vtable0->currentMission(this, v22); /*0x6fd4c7*/
    v13 = Coord::To_ScreenRaw(&v21, v12); /*0x6fd4d9*/
    v20 = *v13; /*0x6fd4e0*/
    v5 = v10 - v13[1]; /*0x6fd4e4*/
    if ( v5 > 0 ) /*0x6fd4e9*/
      v5 = 0; /*0x6fd4eb*/
  }
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd4f9*/
    v14 = (int *)(*(int (__stdcall **)(unsigned char *))(*(unsigned int *)a2 + 164))(v22); /*0x6fd502*/
  else
    v14 = (int *)(*(int (__stdcall **)(unsigned char *))(*(unsigned int *)a2 + 88))(v22); /*0x6fd511*/
  v15 = v14; /*0x6fd514*/
  v16 = *v14; /*0x6fd516*/
  v17 = v15[1]; /*0x6fd518*/
  v18 = v15[2]; /*0x6fd51b*/
  if ( a3 ) /*0x6fd524*/
    (v19->fallRate) = *(unsigned char *)(a3 + 339); /*0x6fd530*/
  TechnoClass::CreateTrailParticle(v19, *a4, a4[1], a4[2], v16, v17, v18, v5); /*0x6fd55a*/
  return (int)v19; /*0x6fd48a*/
}
} // namespace ra2::game

// 0x6FD570
namespace ra2::game {
int TechnoClass::CreateFiringRadarBlip()
{
  int v3; // ebx
  int v4; // ebp
  unsigned int *v5; // eax
  TechnoClass *RadarBlip; // edi
  unsigned int v8[3]; // [esp+1Ch] [ebp-18h] BYREF
  unsigned char v9[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 185))(this, a2); /*0x6fd588*/
  v4 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, v3); /*0x6fd593*/
  v5 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *, int, unsigned int, unsigned int, unsigned int))this->vfptr + 44))( /*0x6fd5ae*/
                   this,
                   v9,
                   v3,
                   0,
                   0,
                   0);
  v8[0] = *v5; /*0x6fd5b6*/
  v8[1] = v5[1]; /*0x6fd5c2*/
  v8[2] = v5[2]; /*0x6fd5cd*/
  RadarBlip = (TechnoClass *)TechnoClass::CreateRadarBlip(this, a2, v4, v8); /*0x6fd5d6*/
  if ( RadarBlip /*0x6fd5f2*/
    && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 1
    && this->isAliveFlag
    && !this->u32_6DC )
  {
    this->u32_6DC = RadarBlip; /*0x6fd600*/
    TechnoClass::updateSightRange(RadarBlip, this, v3); /*0x6fd606*/
  }
  return RadarBlip; /*0x6fd60d*/
}
} // namespace ra2::game

// 0x6FD620
namespace ra2::game {
int TechnoClass::CreateFireBeamEffect()
{

  TechnoClass *v4; // eax
  int vfptr; // ebx
  TechnoClass *v6; // esi
  int *v7; // eax
  int v8; // edx
  int *v9; // eax
  int *v10; // eax
  int v11; // edi
  int *v12; // eax
  int v13; // ebx
  unsigned int *v14; // eax
  int v15; // eax
  int *v16; // ecx
  __int16 v18; // [esp+1Ch] [ebp-3Ch] BYREF
  char v19; // [esp+1Eh] [ebp-3Ah]
  int v20; // [esp+20h] [ebp-38h] BYREF
  int v21[3]; // [esp+28h] [ebp-30h] BYREF
  unsigned int v22[3]; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+40h] [ebp-18h] BYREF
  int v24; // [esp+44h] [ebp-14h]
  int v25; // [esp+48h] [ebp-10h]
  int v26; // [esp+4Ch] [ebp-Ch] BYREF
  int v27; // [esp+50h] [ebp-8h]
  int v28; // [esp+54h] [ebp-4h]

  v4 = (TechnoClass *)RadBeam::Create((RadBeam *)1); /*0x6fd62e*/
  vfptr = this->vfptr; /*0x6fd636*/
  v6 = v4; /*0x6fd638*/
  v20 = 0; /*0x6fd650*/
  v7 = (int *)(*(int (**)(TechnoClass *, int *, unsigned int, unsigned int, unsigned int, unsigned int))(vfptr + 176))( /*0x6fd657*/
                this,
                v21,
                0,
                0,
                0,
                0);
  v23 = *v7; /*0x6fd65f*/
  v24 = v7[1]; /*0x6fd668*/
  v8 = this->vfptr; /*0x6fd66c*/
  v25 = v7[2]; /*0x6fd671*/
  v9 = (int *)(*(int (**)(TechnoClass *, int *))(v8 + 172))(this, v21); /*0x6fd67a*/
  v26 = *v9; /*0x6fd684*/
  v27 = v9[1]; /*0x6fd68b*/
  v28 = v9[2]; /*0x6fd692*/
  if ( v24 == v27 ) /*0x6fd69c*/
  {
    v13 = v20; /*0x6fd6de*/
  }
  else
  {
    v10 = Coord::To_ScreenRaw(&v20, &v23); /*0x6fd6ae*/
    v21[0] = *v10; /*0x6fd6b9*/
    v11 = v10[1]; /*0x6fd6c3*/
    v12 = Coord::To_ScreenRaw(v21, &v26); /*0x6fd6cc*/
    v20 = *v12; /*0x6fd6d3*/
    v13 = v11 - v12[1]; /*0x6fd6da*/
  }
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd6ee*/
    v14 = (unsigned int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)a2 + 164))(a2, v21); /*0x6fd707*/
  else
    v14 = (unsigned int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)a2 + 88))(a2, v21); /*0x6fd6f9*/
  v22[0] = *v14; /*0x6fd713*/
  v22[1] = v14[1]; /*0x6fd71a*/
  v15 = v14[2]; /*0x6fd71e*/
  v18 = 0; /*0x6fd721*/
  v22[2] = v15; /*0x6fd726*/
  v19 = 0; /*0x6fd732*/
  if ( a3 == 1 ) /*0x6fd737*/
  {
    v16 = (int *)((char *)&dword_8871E0[1].DetailMinFrameRateMovie + 2); /*0x6fd758*/
  }
  else if ( a3 == 2 ) /*0x6fd740*/
  {
    v16 = (int *)((char *)&dword_8871E0[1].DetailBufferZoneWidth + 1); /*0x6fd74a*/
  }
  else
  {
    v16 = &dword_8871E0->ColorAdd[7]; /*0x6fd742*/
  }
  v18 = *(unsigned short *)v16; /*0x6fd761*/
  v19 = *((unsigned char *)v16 + 2); /*0x6fd770*/
  TechnoClass::drawPipScale(v6, &v23); /*0x6fd774*/
  TechnoClass::drawSpawnPips(v6, v22); /*0x6fd780*/
  TechnoClass::drawAmmoPips(v6, 15); /*0x6fd789*/
  TechnoClass::drawTiberiumPips(v6, 0, 1078198272); /*0x6fd797*/
  TechnoClass::drawSelectionBox((char *)v6, (int)&v18); /*0x6fd7a3*/
  TechnoClass::drawHealthBar(v6, v13); /*0x6fd7ab*/
  if ( a3 == 2 )
  {
    TechnoClass::drawMindControlPips(v6, 1); /*0x6fd7b9*/
    TechnoClass::drawPassengerPips(v6, 1); /*0x6fd7c2*/
    if ( a2 )
    {
      if ( (a2[20] & 1) != 0 )
      {
        v6->vfptr1 = (int)a2; /*0x6fd7d1*/
        *((a2[20] & 1) != 0 ? (unsigned int *)(a2 + 1296) : (unsigned int *)1296) = v6;
      }
    }
  }
  return (char *)v6; /*0x6fd7e7*/

}
} // namespace ra2::game

// 0x6FDB80
namespace ra2::game {
int TechnoClass::ComputeAudioFalloffDamage()
{
  int result; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  unsigned int *v9; // eax
  double DamageMultiplier; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // [esp+14h] [ebp+4h]
  int v17; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x6fdb8d*/
    return 0; /*0x6fdb8d*/
  result = *(unsigned int *)(a3 + 164); /*0x6fdb9d*/
  if ( *(unsigned char *)(a3 + 304) || *(unsigned char *)(a3 + 297) ) /*0x6fdbaf*/
    return 0; /*0x6fdd38*/
  if ( result > 0 ) /*0x6fdbbf*/
  {
    (*((unsigned short *)&(v6))) = Math::RoundToInt( /*0x6fdbdd*/
                   *&this->owner[76]
                 * *(double *)this->firepowerMultiplier
                 * (double)*(int *)(a3 + 164));
    v16 = v6; /*0x6fdbe8*/
    if ( (uint8_t)Audio::IsMediumVolume(this->veterancy) || (uint8_t)Audio::IsLoud(this->veterancy) ) /*0x6fdbf9*/
    {
      if ( (v7 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this), /*0x6fdc38*/
            (uint8_t)Audio::IsMediumVolume(this->veterancy))
        && *(unsigned char *)(v7 + 670)
        || (uint8_t)Audio::IsLoud(this->veterancy) && (*(unsigned char *)(v7 + 670) || *(unsigned char *)(v7 + 688)) )
      {
        (*((unsigned short *)&(v8))) = Math::RoundToInt((double)v16 * *(double *)(*(unsigned int *)&g_RulesClass_Instance + 1648)); /*0x6fdc51*/
        v16 = v8; /*0x6fdc56*/
      }
    }
    v9 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x6fdc66*/
    DamageMultiplier = TechnoClass::GetDamageMultiplier((TechnoClass *)*(unsigned int *)(a2 + 540), v9); /*0x6fdc73*/
    (*((unsigned short *)&(v11))) = Math::RoundToInt((double)v16 / (DamageMultiplier * *(double *)this->armorMultiplier)); /*0x6fdc82*/
    v12 = v11; /*0x6fdc8d*/
    v17 = v11; /*0x6fdc91*/
    if ( (uint8_t)Audio::IsMediumVolume((int *)(a2 + 336)) || (uint8_t)Audio::IsLoud((int *)(a2 + 336)) ) /*0x6fdca0*/
    {
      if ( (v13 = (*(int (__thiscall **)(int))(*(unsigned int *)a2 + 132))(a2), /*0x6fdcdf*/
            (uint8_t)Audio::IsMediumVolume((int *)(a2 + 336)))
        && *(unsigned char *)(v13 + 669)
        || (uint8_t)Audio::IsLoud((int *)(a2 + 336)) && (*(unsigned char *)(v13 + 669) || *(unsigned char *)(v13 + 687)) )
      {
        (*((unsigned short *)&(v14))) = Math::RoundToInt((double)v17 / *(double *)(*(unsigned int *)&g_RulesClass_Instance + 1672)); /*0x6fdcf9*/
        v12 = v14; /*0x6fdcfe*/
      }
    }
    if ( v12 < 1 ) /*0x6fdd03*/
      v12 = 1; /*0x6fdd05*/
    v15 = (*(int (__thiscall **)(int))(*(unsigned int *)a2 + 136))(a2); /*0x6fdd10*/
    return ComputeTechnoClassDamageFalloff(v12, *(unsigned int *)(a3 + 172), *(unsigned int *)(v15 + 156), 0); /*0x6fdd29*/
  }
  return result; /*0x6fdd30*/
}
} // namespace ra2::game

// 0x700600
namespace ra2::game {
int TechnoClass::HandleCursor()
{

  unsigned int *v6; // ebp
  int v7; // eax
  int v8; // ebx
  TechnoClass *v9; // edi
  int nextObject; // eax
  int v11; // eax
  char v12; // bl
  unsigned int *v14; // eax
  int vfptr; // ebx
  void *v16; // eax
  int v17; // ebp
  CellClass *v18; // eax
  char IsActiveOrNext; // bl
  unsigned __int8 *v20; // edi
  int v21; // eax
  bool v22; // bl
  int v23; // eax
  bool v24; // al
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // ebx
  void *v30; // eax
  int v31; // ebx
  void *v32; // eax
  char v33; // [esp+11h] [ebp-1Bh]
  char v34; // [esp+12h] [ebp-1Ah]
  char v35; // [esp+13h] [ebp-19h]
  int v36; // [esp+14h] [ebp-18h]
  int occupant; // [esp+18h] [ebp-14h]
  unsigned int *v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]
  int v41; // [esp+28h] [ebp-4h]
  char v42; // [esp+38h] [ebp+Ch]

  if ( this->isBerserk[0] /*0x700629*/
    || this->rockerLinkedUnit && !*(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1682) )
  {
    return 0; /*0x700631*/
  }
  v6 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x70064a*/
  v38 = v6; /*0x70064e*/
  v36 = 0; /*0x700652*/
  if ( !a4 /*0x70067d*/
    && ((unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[140])
     || (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[144])) )
  {
    v42 = 1; /*0x700686*/
  }
  else
  {
    v42 = 0; /*0x70068f*/
    if ( a4 ) /*0x700694*/
      goto LABEL_12; /*0x700694*/
  }
  if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[148]) /*0x7006be*/
    && !(unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[152]) )
  {
LABEL_12:
    v33 = 0; /*0x7006c7*/
    if ( a4 ) /*0x7006ce*/
      goto LABEL_16; /*0x7006ce*/
    goto LABEL_13; /*0x7006ce*/
  }
  v33 = 1; /*0x7006c0*/
LABEL_13:
  if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[132]) /*0x7006f1*/
    || (unsigned __int8)Mouse::IsButtonDown(stru_A8E960.random[136]) )
  {
    v34 = 1; /*0x7006fa*/
    goto LABEL_17; /*0x7006ff*/
  }
LABEL_16:
  v34 = 0; /*0x700701*/
LABEL_17:
  if ( v33 && v42 ) /*0x700714*/
  {
    v33 = 0; /*0x700716*/
    v42 = 0; /*0x70071b*/
  }
  occupant = -1; /*0x700724*/
  v35 = 0; /*0x70072c*/
  if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->drainAnim)(this) /*0x700743*/
    || (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->isDisguisedFlag)(this) )
  {
    return 0; /*0x700743*/
  }
  if ( (dword_A8B230->vfptr & 0x1000) == 0 ) /*0x70075c*/
    goto LABEL_38; /*0x70075c*/
  if ( !a3 ) /*0x700768*/
    goto LABEL_38; /*0x700768*/
  v7 = v6[10]; /*0x70076e*/
  if ( !v7 ) /*0x700773*/
    goto LABEL_38; /*0x700773*/
  v8 = 0; /*0x70077c*/
  if ( *(int *)(v7 + 16) <= 0 ) /*0x700780*/
    goto LABEL_38; /*0x700780*/
  do /*0x7007e4*/
  {
    v9 = *(TechnoClass **)(*(unsigned int *)(v7 + 4) + 4 * v8); /*0x700785*/
    if ( v9->isOnMap[0] ) /*0x700788*/
    {
      nextObject = v9->nextObject; /*0x70078f*/
      if ( nextObject == 20 ) /*0x700795*/
      {
        occupant = v9->occupant; /*0x70079a*/
      }
      else if ( nextObject == 6 /*0x7007ce*/
             && (!v9->owningHouseIndex
              || !(unsigned __int8)HouseClass::IsAlliedWith(*(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3)))
             && (!TechnoClass::recalcThreat(v9) || *(unsigned char *)(TechnoClass::recalcThreat(v9) + 561)) )
      {
        v35 = 1; /*0x7007d8*/
      }
    }
    v7 = v6[10]; /*0x7007dd*/
    ++v8; /*0x7007e0*/
  }
  while ( v8 < *(unsigned int *)(v7 + 16) ); /*0x7007e4*/
  if ( occupant != -1 ) /*0x7007ed*/
  {
    v36 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * occupant); /*0x7007fa*/
  }
  else
  {
LABEL_38:
    v11 = v6[17]; /*0x700800*/
    if ( v11 != -1 ) /*0x700806*/
      v36 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v11); /*0x700811*/
  }
  v12 = (*(int (**)(TechnoClass *))&this->vfptr->auxParticles2)(this); /*0x700825*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x700868*/
    && (v42 && v34 || this->isGrindingInProgress[0])
    && (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->locationY)(this)
    && ((*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->location)(this) || v12) )
  {
    if ( Waypoint::FindByCell(*(char **)((char *)&stru_A83CD9.estimatedHealth + 3), a2) || this->isGrindingInProgress[0] ) /*0x70087e*/
      return 51; /*0x70089a*/
    else
      return 26; /*0x70088b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x7008ac*/
  {
    v14 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->isChronoImmuneFlag)(this); /*0x7008bd*/
    if ( v14 ) /*0x7008c5*/
    {
      if ( *v14 ) /*0x7008cb*/
      {
        vfptr = this->vfptr; /*0x7008d8*/
        v16 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x7008e0*/
        v17 = (*(int (**)(TechnoClass *, void *))(vfptr + 740))(this, v16); /*0x7008f4*/
        v18 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x7008f6*/
        IsActiveOrNext = CellClass::IsActiveOrNext(v18); /*0x700902*/
        if ( IsActiveOrNext /*0x70091a*/
          && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->isChronoImmuneFlag)(this) + 172)
                      + 332) )
        {
          IsActiveOrNext = 0; /*0x700924*/
        }
        if ( v42 || v36 && *(unsigned char *)(v36 + 561) || IsActiveOrNext || v35 ) /*0x70094a*/
        {
          v20 = *(unsigned __int8 **)(*(unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->isChronoImmuneFlag)(this) + 172); /*0x700960*/
          v21 = v38[20]; /*0x700966*/
          v22 = v21 != -1 /*0x700960*/
             && (unsigned __int8)HouseClass::IsAlliedWith(dword_A8022C->vtable1 + v21)) == 0;
          v23 = ObjectClass::processDeath((ObjectClass *)a2); /*0x700990*/
          v24 = v23 && !*(unsigned char *)(v23 + 256) && *(int *)(v23 + 108) > 0; /*0x7009ae*/
          if ( v42 /*0x7009f1*/
            || !v36
            || v24
            || v22 && *(unsigned char *)(v36 + 680) && (v20[324] || v20[327] && v36->location == 6) )
          {
            if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->locationY)(this) ) /*0x7009f7*/
              return 5; /*0x7009f7*/
            v41 = 0; /*0x700a0a*/
            v25 = a2[1]; /*0x700a15*/
            v26 = this->vfptr; /*0x700a19*/
            v39 = (*a2 << 8) + 128; /*0x700a24*/
            v40 = (v25 << 8) + 128; /*0x700a38*/
            if ( (*(unsigned __int8 (**)(TechnoClass *, int *, int))(v26 + 356))(this, &v39, v17) ) /*0x700a3c*/
              return 5; /*0x700a3c*/
          }
        }
        if ( (*(unsigned __int8 (**)(TechnoClass *, unsigned int *))&this->vfptr->isSpawned)(this, v38) ) /*0x700a4f*/
        {
          if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->locationY)(this) ) /*0x700a5d*/
            return 5; /*0x700a5d*/
          v41 = 0; /*0x700a6c*/
          v27 = a2[1]; /*0x700a77*/
          v28 = this->vfptr; /*0x700a7b*/
          v39 = (*a2 << 8) + 128; /*0x700a86*/
          v40 = (v27 << 8) + 128; /*0x700a9a*/
          if ( (*(unsigned __int8 (**)(TechnoClass *, int *, int))(v28 + 356))(this, &v39, v17) ) /*0x700a9e*/
            return 5; /*0x700ab4*/
        }
      }
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x700adc*/
    || !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->locationY)(this)
    && !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->chronoLockRemaining)(this) )
  {
    return 0; /*0x700c29*/
  }
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, a2, 1) ) /*0x700af6*/
    return 2; /*0x700af6*/
  if ( v33 ) /*0x700b09*/
    return 1; /*0x700b17*/
  if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->chronoLockRemaining)(this) && v34 ) /*0x700b2e*/
    return 1; /*0x700b3c*/
  if ( !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->locationY)(this) ) /*0x700b43*/
    return 2; /*0x700b43*/
  if ( a3 ) /*0x700b57*/
    return 1; /*0x700b57*/
  v29 = this->vfptr; /*0x700b5d*/
  v30 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x700b6d*/
  if ( (*(int (**)(TechnoClass *, void *, int, int, unsigned int, int))(v29 + 428))(this, v30, -1, -1, 0, 1) <= 1 ) /*0x700b7e*/
    return 1; /*0x700b7e*/
  if ( this /*0x700bb8*/
    && (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 6
    && *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1032)
    && *(unsigned char *)(*(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1032) + 1516) )
  {
    return 1; /*0x700bce*/
  }
  if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 3372) /*0x700c06*/
    && (v31 = this->vfptr,
        v32 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2),
        (*(int (**)(TechnoClass *, void *, int, int, unsigned int, unsigned int))(v31 + 428))(this, v32, -1, -1, 0, 0) <= 1) )
  {
    return 1; /*0x700c0b*/
  }
  else
  {
    return 2; /*0x700c1a*/
  }

}
} // namespace ra2::game

// 0x700C40
namespace ra2::game {
int TechnoClass::CanReceivePassengers() const
{
  char result; // al
  TechnoClass *spawnManager; // ecx
  int v4; // edi

  result = House::IsHumanPlayer((House *)this->owner); /*0x700c49*/
  if ( result ) /*0x700c50*/
  {
    if ( (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 223))(this) ) /*0x700c58*/
    {
      return 0; /*0x700c62*/
    }
    else if ( this->bunkerLinkedUnit ) /*0x700c66*/
    {
      return 0; /*0x700c70*/
    }
    else if ( *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3412) ) /*0x700c7e*/
    {
      return 0; /*0x700c88*/
    }
    else if ( (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 224))(this) ) /*0x700c90*/
    {
      return 0; /*0x700c9a*/
    }
    else
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 120))(this); /*0x700ca2*/
      if ( result ) /*0x700caa*/
      {
        if ( this->slaveOwner ) /*0x700cae*/
        {
          return 0; /*0x700cb8*/
        }
        else if ( this->airstrikeTintStage_2 ) /*0x700cbc*/
        {
          return 0; /*0x700cc6*/
        }
        else
        {
          spawnManager = (TechnoClass *)this->spawnManager; /*0x700cca*/
          result = 1; /*0x700d00*/
          if ( spawnManager ) /*0x700cd2*/
          {
            if ( TechnoClass::CountPassengers(spawnManager) > 0 ) /*0x700cdb*/
            {
              v4 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x700cee*/
              if ( TechnoClass::CountPassengers((TechnoClass *)this->spawnManager) < *(unsigned int *)(v4 + 3420) ) /*0x700cfe*/
                return 0; /*0x700cd2*/
            }
          }
        }
      }
    }
  }
  return result; /*0x700c52*/
}
} // namespace ra2::game

// 0x700D10
namespace ra2::game {
int TechnoClass::IsDeadOrInactive() const
{
  int result; // eax

  (*((unsigned char *)&(result))) = !this /*0x700d47*/
                || (result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this), result != 1)
                || (this->u32_684 < 0
                 || (result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 313))(this), !(unsigned char)result))
                && (result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 223))(this), !(unsigned char)result);
  return result; /*0x700d49*/
}
} // namespace ra2::game

// 0x700D50
namespace ra2::game {
int TechnoClass::CanAttack() const
{

  InfantryClass *v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int *v8; // ecx
  int v9; // ebp
  unsigned int *v10; // edi
  unsigned int *v11; // ebx
  Cell *v12; // eax
  Cell *v13; // eax
  __int16 v14[2]; // [esp+10h] [ebp-24h] BYREF
  int v15; // [esp+14h] [ebp-20h]
  __int16 v16[2]; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v17[2]; // [esp+1Ch] [ebp-18h] BYREF
  __int16 v18[2]; // [esp+20h] [ebp-14h] BYREF
  __int16 v19[2]; // [esp+24h] [ebp-10h] BYREF
  __int16 v20[2]; // [esp+28h] [ebp-Ch] BYREF
  unsigned int *v21; // [esp+2Ch] [ebp-8h] BYREF
  char v22[4]; // [esp+30h] [ebp-4h] BYREF

  *(unsigned int *)v16 = *(unsigned int *)(*(int (**)(TechnoClass *, unsigned int **))&this->vfptr->airstrikeTintTimer)(this, &v21); /*0x700d74*/
  v2 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v16); /*0x700d78*/
  if ( v2 && InfantryClass::ValidateAttackPosition(v2) ) /*0x700d83*/
    goto LABEL_8; /*0x700d8a*/
  v4 = (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) - 1; /*0x700d93*/
  if ( v4 ) /*0x700d94*/
  {
    v5 = v4 - 5; /*0x700d9a*/
    if ( !v5 ) /*0x700d9d*/
    {
      LOBYTE(result) = ReturnFalse_465D30(); /*0x700e3a*/
      return result; /*0x700e46*/
    }
    if ( v5 != 9 ) /*0x700da6*/
    {
      result = (*(int (**)(TechnoClass *))&this->vfptr->currentBurstIndex)(this); /*0x700dac*/
      if ( (unsigned char)result ) /*0x700db4*/
        goto LABEL_8; /*0x700db4*/
      result = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x700dba*/
      if ( !result->q5E0 ) /*0x700dc0*/
        goto LABEL_8; /*0x700dc8*/
      goto LABEL_46; /*0x700dc8*/
    }
    if ( TechnoClass::updateTurretRotation(this) ) /*0x700dda*/
    {
      result = TechnoClass::IsMission27to30(this); /*0x700de5*/
      if ( (unsigned char)result || this->u32_6C4 == 31 ) /*0x700df5*/
        goto LABEL_8; /*0x700df5*/
    }
    if ( TechnoClass::updateTurretRotation(this) ) /*0x700df9*/
    {
      v6 = this->diskLaserTimer[0]; /*0x700e02*/
      result = this->diskLaserTimer[2]; /*0x700e08*/
      if ( v6 == -1 ) /*0x700e11*/
        goto LABEL_16; /*0x700e11*/
      if ( *(unsigned int *)&stru_A8E960.random[528] - v6 < result ) /*0x700e1d*/
      {
        result -= *(unsigned int *)&stru_A8E960.random[528] - v6; /*0x700e1f*/
LABEL_16:
        if ( result ) /*0x700e23*/
        {
LABEL_8:
          LOBYTE(result) = 0; /*0x700dce*/
          return result; /*0x700dd7*/
        }
      }
    }
    LOBYTE(result) = TechnoClass::GetTypeFlag(this); /*0x700e25*/
    return result; /*0x700e33*/
  }
  result = (*(int (**)(TechnoClass *))&this->vfptr->currentBurstIndex)(this); /*0x700e4b*/
  if ( (unsigned char)result ) /*0x700e53*/
    goto LABEL_8; /*0x700e53*/
  if ( this->u32_684 >= 0 ) /*0x700e61*/
    goto LABEL_8; /*0x700e61*/
  v7 = this->u32_6C4; /*0x700e67*/
  if ( !*(unsigned int *)(v7 + 1028) /*0x700e97*/
    && !*(unsigned int *)(v7 + 1504)
    && !*(unsigned char *)(v7 + 3603)
    && !this->bunkerLinkedUnit
    && !TechnoClass::updateSpawnManager(this) )
  {
    goto LABEL_8; /*0x700e97*/
  }
  v8 = (unsigned int *)this->u32_6C4; /*0x700ea4*/
  result = v8[257]; /*0x700eaa*/
  if ( result ) /*0x700eb2*/
  {
    if ( this->u32_694 ) /*0x700eb4*/
      goto LABEL_8; /*0x700eb4*/
    if ( result->u32_16B9 ) /*0x700ec6*/
    {
      result = this->mindControlledBy; /*0x700ed0*/
      if ( result ) /*0x700ed8*/
        goto LABEL_8; /*0x700ed8*/
    }
  }
  result = v8[376]; /*0x700ede*/
  if ( result > 0 ) /*0x700ee6*/
  {
    if ( this->onBridge[0] ) /*0x700eec*/
      goto LABEL_8; /*0x700eec*/
    *(unsigned int *)v14 = *(unsigned int *)(*(int (**)(TechnoClass *, char *))&this->vfptr->airstrikeTintTimer)(this, v22); /*0x700f0f*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v14); /*0x700f19*/
    v9 = result; /*0x700f1e*/
    if ( result ) /*0x700f22*/
    {
      LOWORD(v15) = v14[0] + dword_89F698; /*0x700f40*/
      HIWORD(v15) = *(&dword_89F698 + 1) + v14[1]; /*0x700f49*/
      *(unsigned int *)v17 = v15; /*0x700f58*/
      v10 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17); /*0x700f71*/
      HIWORD(v15) = HIWORD(dword_89F688[0]) + v14[1]; /*0x700f7a*/
      LOWORD(v15) = v14[0] + LOWORD(dword_89F688[0]); /*0x700f7f*/
      *(unsigned int *)v18 = v15; /*0x700f92*/
      v21 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v18); /*0x700fa5*/
      LOWORD(v15) = v14[0] + dword_89F690; /*0x700fb7*/
      HIWORD(v15) = *(&dword_89F690 + 1) + v14[1]; /*0x700fc0*/
      *(unsigned int *)v19 = v15; /*0x700fc9*/
      v11 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v19); /*0x700fea*/
      HIWORD(v15) = *(&dword_89F6A0 + 1) + v14[1]; /*0x700ff2*/
      LOWORD(v15) = v14[0] + dword_89F6A0; /*0x700ff7*/
      *(unsigned int *)v20 = v15; /*0x701004*/
      result = (int)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v20); /*0x70100e*/
      if ( (*(unsigned int *)(v9 + 320) & 0x100) != 0 || v10 && (v10->u32_140 & 0x100) != 0 ) /*0x701030*/
        goto LABEL_8; /*0x701030*/
      if ( result && (*(unsigned int *)(result + 320) & 0x100) != 0 ) /*0x701040*/
        goto LABEL_8; /*0x701040*/
      if ( v11 && (v11->u32_140 & 0x100) != 0 ) /*0x701050*/
        goto LABEL_8; /*0x701050*/
      result = (int)v21; /*0x701056*/
      if ( v21 ) /*0x70105c*/
      {
        if ( (v21[80] & 0x100) != 0 ) /*0x701064*/
          goto LABEL_8; /*0x701064*/
      }
    }
    if ( *(unsigned char *)(this->owner + 492) && *(unsigned int *)(v9 + 236) == 2 ) /*0x701081*/
      goto LABEL_8; /*0x701081*/
    v12 = (Cell *)(*(int (**)(TechnoClass *))&this->vfptr->airstrikeTintTimer_d)(this); /*0x70108b*/
    result = (int)Cell::IsBridge(v12); /*0x701093*/
    if ( result ) /*0x70109a*/
    {
      v13 = (Cell *)(*(int (**)(TechnoClass *))&this->vfptr->airstrikeTintTimer_d)(this); /*0x7010a0*/
      result = Cell::IsBridge(v13)[328]; /*0x7010ad*/
      if ( !result->u32_16AB ) /*0x7010b3*/
        goto LABEL_8; /*0x7010bb*/
    }
  }
LABEL_46:
  LOBYTE(result) = 1; /*0x7010c1*/
  return result; /*0x700dce*/

}
} // namespace ra2::game

// 0x701120
namespace ra2::game {
int TechnoClass::HasActiveParam() const
{
  unsigned int *v1; // eax

  v1 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 253))(this); /*0x701122*/
  return v1 && *v1; /*0x701136*/
}
} // namespace ra2::game

// 0x7012C0
namespace ra2::game {
int TechnoClass::FindLowestDamage()
{

  unsigned int *v2; // eax
  int v3; // ebx
  int *passengers; // ebp
  int v5; // edi
  int DB; // esi
  unsigned int *v7; // eax
  signed int v8; // eax
  int v10; // edi
  int v11; // esi
  unsigned int *v12; // eax
  signed int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]

  v2 = *(unsigned int **)(*(int (**)(TechnoClass *, int))&this->vfptr->barrelRecoil)(this, v14); /*0x7012d3*/
  if ( !v2 ) /*0x7012d7*/
    return 0; /*0x701397*/
  v3 = v2[45]; /*0x7012df*/
  if ( !*(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1508) ) /*0x7012ed*/
    return v3; /*0x70138f*/
  passengers = this->passengers; /*0x7012fc*/
  v5 = 0x7FFFFFFF; /*0x701305*/
  DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x70130f*/
  if ( DB ) /*0x701313*/
  {
    do /*0x70133c*/
    {
      v7 = *(unsigned int **)(*(int (**)(int))(*(unsigned int *)DB + 1012))(DB); /*0x70131f*/
      if ( v7 ) /*0x701323*/
      {
        v8 = v7[45]; /*0x701325*/
        if ( v8 < v5 ) /*0x70132d*/
          v5 = v8; /*0x70132f*/
      }
      DB = *(unsigned int *)(DB + 48); /*0x701331*/
    }
    while ( DB && (*(unsigned char *)(DB + 20) & 4) != 0 ); /*0x70133c*/
  }
  if ( v3 < v5 ) /*0x701340*/
    return v3; /*0x701344*/
  v10 = 0x7FFFFFFF; /*0x70134d*/
  v11 = CCINIClass::GetDB((CCINIClass *)passengers); /*0x701357*/
  if ( v11 ) /*0x70135b*/
  {
    do /*0x701384*/
    {
      v12 = *(unsigned int **)(*(int (**)(int))(*(unsigned int *)v11 + 1012))(v11); /*0x701367*/
      if ( v12 ) /*0x70136b*/
      {
        v13 = v12[45]; /*0x70136d*/
        if ( v13 < v10 ) /*0x701375*/
          v10 = v13; /*0x701377*/
      }
      v11 = *(unsigned int *)(v11 + 48); /*0x701379*/
    }
    while ( v11 && (*(unsigned char *)(v11 + 20) & 4) != 0 ); /*0x701384*/
  }
  return v10; /*0x701346*/

}
} // namespace ra2::game

// 0x7036C0
namespace ra2::game {
int TechnoClass::TransitionEffectState()
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  int v5; // ecx
  int *location; // esi
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  char v10; // [esp+14h] [ebp+4h]

  result = this->cloakState; /*0x7036c6*/
  if ( result == 2 || result == 1 ) /*0x7036d4*/
  {
    this->cloakState = 3; /*0x7036da*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->vfptr; /*0x7036e9*/
    this->cloakProgress[0] = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1576) - 1; /*0x7036f2*/
    v4 = vtable0[33](this); /*0x7036fa*/
    v5 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x703700*/
    result = *(unsigned int *)(v4 + 784); /*0x703706*/
    this->cloakProgress[5] = result; /*0x703712*/
    this->cloakProgress[2] = v5; /*0x703718*/
    this->cloakProgress[3] = v8; /*0x70371e*/
    this->cloakProgress[4] = result; /*0x703721*/
    (*((unsigned char *)&(result))) = v10; /*0x703724*/
    this->cloakProgress[6] = -1; /*0x70372a*/
    if ( !v10 ) /*0x703734*/
    {
      location = this->location; /*0x703736*/
      v7 = *location; /*0x703740*/
      v8 = location->Y; /*0x70374b*/
      v9 = location->Z; /*0x703757*/
      return (int)StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1696), &v7, 0); /*0x703761*/
    }
  }
  return result; /*0x703766*/
}
} // namespace ra2::game

// 0x703770
namespace ra2::game {
int TechnoClass::StartEffectAudio()
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]
  char v10; // [esp+14h] [ebp+4h]

  result = this->cloakState; /*0x703776*/
  if ( !result || result == 3 ) /*0x703783*/
  {
    (*((void (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 55))(this, 0); /*0x70378f*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->vfptr; /*0x703795*/
    this->cloakState = 1; /*0x703799*/
    this->cloakProgress[0] = 0; /*0x7037a3*/
    v4 = vtable0[33](this); /*0x7037ad*/
    v5 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x7037b3*/
    v6 = *(unsigned int *)(v4 + 784); /*0x7037b9*/
    this->cloakProgress[5] = v6; /*0x7037c5*/
    this->cloakProgress[2] = v5; /*0x7037cb*/
    this->cloakProgress[3] = v8; /*0x7037d1*/
    this->cloakProgress[4] = v6; /*0x7037d4*/
    this->cloakProgress[6] = 1; /*0x7037dd*/
    if ( !v10 ) /*0x7037e7*/
    {
      v7 = this->location[0]; /*0x7037f3*/
      v8 = this->location[1]; /*0x7037ff*/
      v9 = this->location[2]; /*0x703806*/
      StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1696), &v7, 0); /*0x703814*/
    }
    result = (int)dword_A83D4C; /*0x70381f*/
    if ( (Object *)this->owner != dword_A83D4C ) /*0x703826*/
    {
      (*((unsigned char *)&(result))) = this->isSelected; /*0x703828*/
      if ( (unsigned char)result ) /*0x703830*/
        return (*((int (__thiscall **)(TechnoClass *))this->vfptr + 84))(this); /*0x703836*/
    }
  }
  return result; /*0x70383c*/
}
} // namespace ra2::game

// 0x703850
namespace ra2::game {
int TechnoClass::Vt279Thunk0()
{
  return (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 279))(this, 0); /*0x70385a*/
}
} // namespace ra2::game

// 0x703B10
namespace ra2::game {
int TechnoClass::CheckTargetCell() const
{
  unsigned int *v2; // esi
  unsigned int *v3; // edi
  unsigned int *v4; // ebp
  unsigned int *v5; // ebx
  unsigned int *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  int16_t v12[2]; // [esp+10h] [ebp-14h] BYREF
  int16_t v13[2]; // [esp+14h] [ebp-10h] BYREF
  int16_t v14[2]; // [esp+18h] [ebp-Ch] BYREF
  int16_t v15[2]; // [esp+1Ch] [ebp-8h] BYREF
  int16_t v16[2]; // [esp+20h] [ebp-4h] BYREF

  *(unsigned int *)v12 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int16_t *))this->vfptr + 110))(this, v16); /*0x703b34*/
  v2 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v12); /*0x703b3d*/
  if ( !v2 || this->onBridge ) /*0x703b47*/
    return 0; /*0x703b47*/
  v13[0] = v12[0] + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[86]))); /*0x703b6c*/
  v13[1] = v12[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[86])) + 1)); /*0x703b71*/
  *(unsigned int *)v14 = *(unsigned int *)v13; /*0x703b7e*/
  v3 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v14); /*0x703b9f*/
  v13[1] = v12[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[82])) + 1)); /*0x703ba7*/
  v13[0] = v12[0] + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[82]))); /*0x703bac*/
  *(unsigned int *)v15 = *(unsigned int *)v13; /*0x703bb9*/
  v4 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v15); /*0x703bd8*/
  v13[1] = v12[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[84])) + 1)); /*0x703be1*/
  v13[0] = v12[0] + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[84]))); /*0x703be6*/
  *(unsigned int *)v16 = *(unsigned int *)v13; /*0x703bf9*/
  v5 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v16); /*0x703c0c*/
  v13[0] = v12[0] + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[88]))); /*0x703c1b*/
  v13[1] = v12[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[88])) + 1)); /*0x703c24*/
  v6 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v13); /*0x703c37*/
  if ( (v2[80] & 0x100) != 0 ) /*0x703c45*/
    return 1; /*0x703c45*/
  if ( v3 ) /*0x703c49*/
  {
    v7 = v3->u32_140; /*0x703c4b*/
    if ( (v7 & 0x100) != 0 && (v7 & 0x800) != 0 ) /*0x703c5f*/
      return 1; /*0x703c5f*/
  }
  if ( v6 ) /*0x703c63*/
  {
    v8 = v6->u32_140; /*0x703c65*/
    if ( (v8 & 0x100) != 0 && (v8 & 0x800) == 0 ) /*0x703c73*/
      return 1; /*0x703c73*/
  }
  if ( v5 ) /*0x703c77*/
  {
    v9 = v5[80]; /*0x703c79*/
    if ( (v9 & 0x100) != 0 && (v9 & 0x800) == 0 ) /*0x703c87*/
      return 1; /*0x703c87*/
  }
  if ( v4 && (v10 = v4[80], (v10 & 0x100) != 0) && (v10 & 0x800) != 0 ) /*0x703ca1*/
    return 1; /*0x703ca6*/
  else
    return 0; /*0x703cb0*/
}
} // namespace ra2::game

// 0x703E70
namespace ra2::game {
int TechnoClass::ScanNeighborCells()
{
  int v2; // ebx
  unsigned int *v3; // esi
  unsigned int *v4; // edi
  unsigned int *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int16_t v13[2]; // [esp+Ch] [ebp-10h] BYREF
  int16_t v14[2]; // [esp+10h] [ebp-Ch] BYREF
  int16_t v15[2]; // [esp+14h] [ebp-8h] BYREF
  int16_t v16[2]; // [esp+18h] [ebp-4h] BYREF

  *(unsigned int *)v13 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int16_t *))this->vfptr + 110))(this, v16); /*0x703e93*/
  v2 = 0; /*0x703e97*/
  if ( CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v13) /*0x703eb3*/
    && (TechnoClass::CheckTargetCell(this) || TechnoClass::ScanAdjacentCells(this)) )
  {
    v14[0] = v13[0] + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[86]))); /*0x703ed7*/
    v14[1] = v13[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[86])) + 1)); /*0x703edc*/
    *(unsigned int *)v15 = *(unsigned int *)v14; /*0x703ee9*/
    v3 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v15); /*0x703f0a*/
    v14[1] = v13[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[84])) + 1)); /*0x703f12*/
    v14[0] = v13[0] + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[84]))); /*0x703f17*/
    *(unsigned int *)v16 = *(unsigned int *)v14; /*0x703f24*/
    v4 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v16); /*0x703f43*/
    v14[1] = v13[1] + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[85])) + 1)); /*0x703f4c*/
    v14[0] = v13[0] + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[85]))); /*0x703f51*/
    v5 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v14); /*0x703f68*/
    if ( v3 ) /*0x703f6f*/
    {
      if ( v4 && v5 ) /*0x703f77*/
      {
        v6 = v3->u32_38; /*0x703f79*/
        if ( v6 != 0xFFFF && v6 != 255 ) /*0x703f90*/
        {
          v7 = v6 - g_Cell_BuildabilityLUT + 1; /*0x703f94*/
          if ( v7 >= 7 && v7 <= 16 ) /*0x703f9d*/
            v2 = 1; /*0x703f9f*/
        }
        v8 = v4->u32_38; /*0x703fa4*/
        if ( v8 != 0xFFFF && v8 != 255 ) /*0x703fb5*/
        {
          v9 = v8 - g_Cell_BuildabilityLUT + 1; /*0x703fb9*/
          if ( v9 >= 7 && v9 <= 16 ) /*0x703fc2*/
            v2 = 1; /*0x703fc4*/
        }
        v10 = v5->q038; /*0x703fc9*/
        if ( v10 != 0xFFFF && v10 != 255 ) /*0x703fd8*/
        {
          v11 = v10 - g_Cell_BuildabilityLUT + 1; /*0x703fdc*/
          if ( v11 >= 7 && v11 <= 16 ) /*0x703fe5*/
            ++v2; /*0x703fe7*/
        }
      }
    }
  }
  return v2; /*0x703fe8*/
}
} // namespace ra2::game

// 0x704000
namespace ra2::game {
int TechnoClass::IsValidBuildingPlacement()
{

  int vfptr; // eax
  int *v3; // eax
  char v4; // cl
  int v5; // eax
  InfantryClass *v6; // edi
  InfantryClass *v7; // eax
  unsigned __int16 *occupant; // esi
  InfantryClass *v9; // ebx
  InfantryClass *v10; // eax
  InfantryClass *v11; // ebp
  __int16 v12; // di
  unsigned int *v13; // ebx
  unsigned int *v14; // eax
  unsigned int *v15; // esi
  int v16; // ebx
  InfantryClass *v17; // edi
  int v18; // eax
  InfantryClass *v19; // eax
  __int16 v21[2]; // [esp+10h] [ebp-14h] BYREF
  unsigned __int16 *v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+18h] [ebp-Ch]
  __int16 v24[2]; // [esp+1Ch] [ebp-8h] BYREF
  unsigned __int16 *v25; // [esp+20h] [ebp-4h] BYREF

  vfptr = this->vfptr; /*0x70400d*/
  v23 = 0; /*0x704012*/
  v3 = (int *)(*(int (**)(TechnoClass *, unsigned __int16 **))(vfptr + 440))(this, &v25); /*0x70401a*/
  v4 = this->onBridge[0]; /*0x704020*/
  v5 = *v3; /*0x704026*/
  *(unsigned int *)v21 = v5; /*0x70402a*/
  if ( v4 ) /*0x70402e*/
    return v23; /*0x70402e*/
  LOWORD(v22) = LOWORD(dword_89F688[0]) + v5; /*0x704040*/
  HIWORD(v22) = v21[1] + HIWORD(dword_89F688[0]); /*0x704051*/
  *(unsigned int *)v24 = v22; /*0x70405a*/
  v6 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24); /*0x70407a*/
  LOWORD(v22) = dword_89F6A0 + v21[0]; /*0x704086*/
  HIWORD(v22) = v21[1] + *(&dword_89F6A0 + 1); /*0x70408b*/
  v25 = v22; /*0x70409a*/
  v7 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v25); /*0x70409e*/
  LOWORD(occupant) = dword_B0EA50; /*0x7040a3*/
  v9 = v7; /*0x7040b3*/
  v22 = (unsigned __int16 *)dword_B0EA50; /*0x7040b5*/
  v10 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v21); /*0x7040b9*/
  v11 = v10; /*0x7040c0*/
  if ( !v6 || !v9 ) /*0x7040ca*/
    return v23; /*0x7040ca*/
  if ( (unsigned __int8)InfantryClass::IsInBounds(v10) ) /*0x7040d2*/
  {
    occupant = (unsigned __int16 *)v11->occupant; /*0x7040db*/
LABEL_10:
    v22 = occupant; /*0x7040fe*/
    goto LABEL_11; /*0x7040fe*/
  }
  if ( (unsigned __int8)InfantryClass::IsInBounds(v6) ) /*0x7040e2*/
  {
    occupant = (unsigned __int16 *)v6->occupant; /*0x7040eb*/
    goto LABEL_10; /*0x7040ee*/
  }
  if ( (unsigned __int8)InfantryClass::IsInBounds(v9) ) /*0x7040f2*/
  {
    occupant = (unsigned __int16 *)v9->occupant; /*0x7040fb*/
    goto LABEL_10; /*0x7040fb*/
  }
LABEL_11:
  v12 = HIWORD(v22); /*0x704102*/
  if ( __PAIR32__(HIWORD(v22), (unsigned __int16)occupant) != dword_B0EA50 ) /*0x70410e*/
  {
    LOWORD(v22) = (unsigned short)occupant + LOWORD(dword_89F688[0]); /*0x70412e*/
    HIWORD(v22) += HIWORD(dword_89F688[0]); /*0x704137*/
    v25 = v22; /*0x704146*/
    v13 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v25); /*0x70415e*/
    LOWORD(v22) = (unsigned short)occupant + dword_89F6A0; /*0x704160*/
    HIWORD(v22) = *(&dword_89F6A0 + 1) + v12; /*0x704165*/
    *(unsigned int *)v24 = v22; /*0x704178*/
    v14 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24); /*0x70417c*/
    v15 = v14; /*0x704183*/
    if ( v13 ) /*0x704185*/
    {
      if ( v14 ) /*0x70418d*/
      {
        v16 = v13->u32_24; /*0x704193*/
        LOWORD(v22) = LOWORD(dword_89F688[0]) + v16; /*0x7041b2*/
        HIWORD(v22) = HIWORD(dword_89F688[0]) + HIWORD(v16); /*0x7041b7*/
        v25 = v22; /*0x7041c6*/
        v17 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v25); /*0x7041d5*/
        v18 = v15->u32_24; /*0x7041d7*/
        LOWORD(v22) = dword_89F6A0 + v18; /*0x7041e0*/
        HIWORD(v22) = *(&dword_89F6A0 + 1) + HIWORD(v18); /*0x7041f6*/
        v25 = v22; /*0x7041ff*/
        v19 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v25); /*0x704208*/
        if ( v17 ) /*0x70420f*/
        {
          if ( v19 /*0x704222*/
            && ((unsigned __int8)InfantryClass::IsInBounds(v19) || (unsigned __int8)InfantryClass::IsInBounds(v17)) )
          {
            return 1; /*0x70422b*/
          }
        }
      }
    }
  }
  return v23; /*0x704237*/

}
} // namespace ra2::game

// 0x704240
namespace ra2::game {
int TechnoClass::CheckAdjacencyFlags() const
{

  int v2; // ebx
  char *v3; // edi
  unsigned short *v4; // eax
  unsigned int *v5; // eax
  int v6; // eax
  char *v7; // eax
  bool v8; // cc
  int result; // eax
  unsigned __int16 *v10; // [esp+Ch] [ebp-10h]
  unsigned __int16 *v11; // [esp+Ch] [ebp-10h]
  __int16 v12[2]; // [esp+10h] [ebp-Ch] BYREF
  unsigned __int16 *v13; // [esp+14h] [ebp-8h] BYREF
  unsigned char v14[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x70424c*/
  *(unsigned int *)v12 = *(unsigned int *)(*(int (**)(TechnoClass *, unsigned __int16 **))&this->vfptr->airstrikeTintTimer)( /*0x704265*/
                                this,
                                &v13);
  v3 = (char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v12); /*0x70426e*/
  if ( this->onBridge[0] ) /*0x704270*/
    return v2; /*0x704270*/
  v4 = (unsigned short *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->airstrikeTintTimer)(this, v14); /*0x704287*/
  LOWORD(v10) = dword_89F694 + *v4; /*0x7042a2*/
  HIWORD(v10) = *(&dword_89F694 + 1) + v4[1]; /*0x7042ab*/
  v13 = v10; /*0x7042ba*/
  v5 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v13); /*0x7042be*/
  if ( !v5 ) /*0x7042c5*/
    return v2; /*0x7042c5*/
  if ( *(&v5->u32_11B) - v3->u32_11B >= 4 ) /*0x7042da*/
    v2 = 2; /*0x7042dc*/
  v6 = v5->ptr_24; /*0x7042e1*/
  LOWORD(v11) = v6 + dword_89F694; /*0x7042f6*/
  HIWORD(v11) = HIWORD(v6) + *(&dword_89F694 + 1); /*0x704305*/
  v13 = v11; /*0x70430e*/
  v7 = (char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v13); /*0x704317*/
  if ( !v7 ) /*0x70431e*/
    return v2; /*0x70431e*/
  v8 = v7[283] - v3->u32_11B < 4; /*0x704330*/
  result = 1; /*0x704333*/
  if ( v8 ) /*0x704338*/
    return v2; /*0x70433a*/
  return result; /*0x70433c*/

}
} // namespace ra2::game

// 0x705D50
namespace ra2::game {
int TechnoClass::IsNotBusy() const
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 118))(this); /*0x705d52*/
  (*((unsigned char *)&(result))) = (unsigned char)result == 0; /*0x705d5a*/
  return result; /*0x705d5d*/
}
} // namespace ra2::game

// 0x705D70
namespace ra2::game {
int TechnoClass::GetBuildAnim() const
{
  int v2; // eax
  int v3; // edi

  v2 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3568); /*0x705d82*/
  v3 = this->owner->startingCell[0]; /*0x705d8a*/
  if ( v2 ) /*0x705d90*/
    return *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v2 + 4) + 4 * v3) + 780); /*0x705d9a*/
  if ( (*((uint8_t (__thiscall **)(TechnoClass *, Object *))this->vfptr + 272))(this, dword_A83D4C) /*0x705dbb*/
    || !(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 52))(this, 1) )
  {
    return *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable + 4 * v3) + 780); /*0x705df3*/
  }
  return *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable /*0x705d98*/
                               + 4
                               * *(unsigned int *)((*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 52))(this, 1)
                                           + 90196))
                   + 780);
}
} // namespace ra2::game

// 0x706640
namespace ra2::game {
int TechnoClass::UpdateState()
{
  int v1; // edi
  int v3; // esi
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *, unsigned int); // eax
  int v6; // edi
  int v7; // eax
  SortedStateVector *v8; // ebx
  unsigned int *v9; // eax
  int v10; // eax
  int16_t **v11; // eax
  int16_t *v12; // eax
  void *v13; // eax
  int (__thiscall **v14)(TechnoClass *); // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // esi
  int *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  unsigned int *v27; // edx
  int v28; // eax
  int *v29; // eax
  int v30; // ebp
  int v31; // edi
  int v32; // ebp
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  unsigned int *v37; // edx
  SortedStateVector v38; // eax
  SortedStateVector v39; // eax
  unsigned char v40[4]; // [esp+10h] [ebp-40h] BYREF
  int v41; // [esp+14h] [ebp-3Ch]
  int v42; // [esp+18h] [ebp-38h]
  int v44[4]; // [esp+28h] [ebp-28h] BYREF
  int v45[6]; // [esp+38h] [ebp-18h] BYREF
  unsigned int *v46; // [esp+54h] [ebp+4h]
  unsigned int v47; // [esp+58h] [ebp+8h]
  int v48; // [esp+5Ch] [ebp+Ch] BYREF
  SortedStateVector *v49; // [esp+60h] [ebp+10h]
  int *v50; // [esp+64h] [ebp+14h]
  unsigned int *appended; // [esp+68h] [ebp+18h]
  const void *v52; // [esp+6Ch] [ebp+1Ch]
  int v53; // [esp+70h] [ebp+20h]
  int v54; // [esp+74h] [ebp+24h]
  int v55; // [esp+78h] [ebp+28h]

  v55 = v55; /*0x706647*/
  v3 = 0x2000; /*0x70664f*/
  if ( !v55 ) /*0x706654*/
  {
    result = (*((int (__thiscall **)(TechnoClass *, unsigned int, unsigned int))this->vfptr + 26))(this, 0, 0) - 1; /*0x70665e*/
    switch ( result ) /*0x706664*/
    {
      case 0: /*0x706664*/
        v3 = 8194; /*0x706683*/
        goto LABEL_8; /*0x706688*/
      case 1: /*0x706664*/
      case 2: /*0x706664*/
        v3 = 8196; /*0x70668a*/
        goto LABEL_8; /*0x70668a*/
      case 3: /*0x706664*/
        if ( this->cloakProgress[0] ) /*0x70666b*/
          v3 = 8204; /*0x70667c*/
        else
          v3 = 8202; /*0x706675*/
        goto LABEL_8; /*0x70667a*/
      case 4: /*0x706664*/
        return result;
      default:
        goto LABEL_8;
    }
    return result;
  }
  LABEL_8:
  if ( ((*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 117))(this)
     || (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 118))(this))
    && ((*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) != 1 || !this->u32_6D3) )
  {
    if ( this
      && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 6
      && *((unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 6
                   ? &this->vtable2
                   : (TechnoClass *)1312)->vfptr
         + 5809) )
    {
      v3 |= 0x2006u; /*0x7066f8*/
    }
    else
    {
      v3 |= 0x2004u; /*0x706700*/
    }
  }
  if ( (uint8_t)House::IsHumanPlayer((House *)this->owner) /*0x706731*/
    && (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 49))(this)
    && ((*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) != 1 || !this->u32_6D3) )
  {
    v3 = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 271))(this, v3); /*0x706747*/
  }
  v44[0] = *v50; /*0x706759*/
  v55 = ~v55 & (v3 | 0x800); /*0x70675d*/
  v44[1] = v50[1]; /*0x706764*/
  v44[2] = v50[2]; /*0x70676b*/
  vtable0 = (int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr; /*0x706776*/
  v44[3] = v50[3]; /*0x70677c*/
  v6 = vtable0[281](this, v53); /*0x70678b*/
  if ( (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 88))(this)
    || this
    && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 6
    && this->airstrike
    && this->airstrike->AirstrikeClass_field_50 == ((*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 6
                                                  ? (unsigned int)this
                                                  : 0) )
  {
    v7 = TechnoClass::InvulnerabilityIntensity_SetContext(this, v6); /*0x7067d5*/
    v6 = TechnoClass::CalcFlashAlpha(this, v7); /*0x7067e2*/
  }
  v8 = v49; /*0x7067e8*/
  if ( v48 != -1 ) /*0x7067f1*/
  {
    if ( !v49 || *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3518) ) /*0x706806*/
    {
      v48 = -1; /*0x706875*/
      goto LABEL_41; /*0x706875*/
    }
    if ( v8[1] ) /*0x706810*/
    {
      v9 = v8->u32_10; /*0x706817*/
      if ( v9 && *v9 == v48 ) /*0x706826*/
        goto LABEL_36; /*0x706826*/
      v10 = SortedStateVector::BinarySearch(v8, &v48); /*0x70682f*/
      if ( v10 ) /*0x706836*/
      {
        v8[4] = (SortedStateVector)v10; /*0x706838*/
  LABEL_36:
        v11 = (int16_t **)(*(unsigned int *)&v8[4] + 4); /*0x70683b*/
        goto LABEL_38; /*0x706841*/
      }
    }
    v11 = (int16_t **)&unk_B78824; /*0x706843*/
  LABEL_38:
    v12 = *v11; /*0x706848*/
    if ( v12 ) /*0x70684c*/
    {
      Surface::BlitTechnoTo((Surface *)this, v12, appended, v44, v55, v6, v54); /*0x706866*/
      return result; /*0x706872*/
    }
  }
  LABEL_41:
  result = (int)v46; /*0x706879*/
  if ( !*v46 || !v46[1] ) /*0x706886*/
    return result; /*0x706886*/
  v13 = RenderTechnoClassVoxel((int *)this, (int)v40, v40, v46, v52, (int)appended, v44, v47, v55, v6, v54); /*0x7068bb*/
  v14 = (int (__thiscall **)(TechnoClass *))this->vfptr; /*0x7068c0*/
  memcpy(v45, v13, sizeof(v45)); /*0x7068ce*/
  v15 = v45[4]; /*0x7068d0*/
  v55 = v45[4]; /*0x7068da*/
  v54 = v45[5]; /*0x7068de*/
  result = v14[11](this); /*0x7068e2*/
  if ( result == 1 ) /*0x7068e8*/
  {
    v16 = v45[1] + appended[1]; /*0x7068ff*/
    v17 = v45[0] + *appended; /*0x706907*/
    if ( result <= 0 || v19 <= 0 ) /*0x706919*/
    {
      v18 = v45[0] + *appended; /*0x7069d7*/
      result = v15; /*0x7069d9*/
      v19 = v54; /*0x7069db*/
    }
    else if ( v15 <= 0 || v54 <= 0 ) /*0x70692d*/
    {
      v18 = v18; /*0x7069c1*/
      v16 = v16; /*0x7069c7*/
      v19 = v19; /*0x7069cd*/
      result = result; /*0x7069d3*/
    }
    else
    {
      v18 = v18; /*0x706933*/
      v42 = result; /*0x70693f*/
      v41 = v16; /*0x70694b*/
      v19 = v19; /*0x70694f*/
      if ( v18 > v17 ) /*0x706953*/
      {
        v18 = v17; /*0x70695d*/
        v42 += v18 - v17; /*0x70695f*/
      }
      if ( v16 > v16 ) /*0x706965*/
      {
        v41 = v16; /*0x70696f*/
        v19 += v16 - v16; /*0x706973*/
      }
      if ( v18 + v42 < v17 + v55 ) /*0x706985*/
        v42 = v17 - v18 + v55 + 1; /*0x706991*/
      v19 = v19; /*0x706995*/
      if ( v19 + v41 < v16 + v54 ) /*0x7069a7*/
        v19 = v16 - v41 + v54 + 1; /*0x7069b3*/
      v16 = v41; /*0x7069b7*/
      result = v42; /*0x7069bb*/
    }
    v18 = v18; /*0x7069df*/
    v16 = v16; /*0x7069e5*/
    result = result; /*0x7069eb*/
    v19 = v19; /*0x7069f0*/
  }
  if ( v48 == -1 ) /*0x7069fb*/
    return result; /*0x7069fb*/
  v20 = Miles::DriverGet(); /*0x706a06*/
  appended = (unsigned int *)Buffer::AppendCellData(&stru_887460, v20, (int)v45); /*0x706a18*/
  if ( appended ) /*0x706a1c*/
  {
    v21 = (int)v8[2]; /*0x706a25*/
    if ( *(unsigned int *)&v8[1] + 1 <= v21 ) /*0x706a2b*/
    {
  LABEL_70:
      *(unsigned int *)(*(unsigned int *)v8 + 8 * *(unsigned int *)&v8[1]) = v48; /*0x706ab7*/
      *(unsigned int *)(*(unsigned int *)v8 + 8 * *(unsigned int *)&v8[1] + 4) = appended; /*0x706acc*/
  LABEL_82:
      v39 = v8[1]; /*0x706ba2*/
      v8[3].__tail_0[0] = 0; /*0x706ba5*/
      result = *(unsigned int *)&v39 + 1; /*0x706ba9*/
      v8[1] = (SortedStateVector)result; /*0x706baa*/
      return result; /*0x706baa*/
    }
    if ( v21 ) /*0x706a33*/
    {
      v54 = (int)v8[2]; /*0x706a41*/
      if ( v21 < 0 ) /*0x706a45*/
        goto LABEL_71; /*0x706a45*/
    }
    else
    {
      v54 = 10; /*0x706a35*/
    }
    v22 = v21 + v54; /*0x706a4f*/
    v23 = operator new(8 * (v21 + v54)); /*0x706a5f*/
    if ( v23 ) /*0x706a66*/
    {
      v24 = (int)v8[1]; /*0x706a68*/
      v25 = 0; /*0x706a6c*/
      v55 = v22 - 1; /*0x706a6e*/
      if ( v24 > 0 ) /*0x706a74*/
      {
        do /*0x706a95*/
        {
          v26 = 8 * v25; /*0x706a78*/
          v27 = (unsigned int *)(*(unsigned int *)v8 + 8 * v25++); /*0x706a81*/
          *(unsigned int *)(v26 + v23) = *v27; /*0x706a86*/
          *(unsigned int *)(v26 + v23 + 4) = v27[1]; /*0x706a8c*/
        }
        while ( v25 < *(unsigned int *)&v8[1] ); /*0x706a95*/
      }
      operator delete((*(void **)v8)); /*0x706a9a*/
      v28 = v54 + *(unsigned int *)&v8[2]; /*0x706aa9*/
      *v8 = (SortedStateVector)v23; /*0x706aab*/
      v8[2] = (SortedStateVector)v28; /*0x706aad*/
      v8[4] = 0; /*0x706ab0*/
      goto LABEL_70; /*0x706ab0*/
    }
  }
  LABEL_71:
  (*((void (__thiscall **)(TechnoClass *))this->vfptr + 34))(this); /*0x706ad5*/
  TechnoClass::ClearArrays(); /*0x706ae0*/
  result = (int)appended; /*0x706ae5*/
  if ( !appended ) /*0x706aeb*/
  {
    v29 = Miles::DriverGet(); /*0x706af2*/
    result = Buffer::AppendCellData(&stru_887460, v29, (int)v45); /*0x706afd*/
    appended = (unsigned int *)result; /*0x706b02*/
  }
  v30 = (int)v8[2]; /*0x706b09*/
  if ( *(unsigned int *)&v8[1] + 1 <= v30 ) /*0x706b0f*/
    goto LABEL_81; /*0x706b0f*/
  if ( v30 ) /*0x706b13*/
  {
    v31 = (int)v8[2]; /*0x706b1c*/
    if ( v30 < 0 ) /*0x706b20*/
      return result; /*0x706b20*/
  }
  else
  {
    v31 = 10; /*0x706b15*/
  }
  v32 = v31 + v30; /*0x706b26*/
  result = operator new(8 * v32); /*0x706b30*/
  result = result; /*0x706b35*/
  if ( result ) /*0x706b3c*/
  {
    v34 = (int)v8[1]; /*0x706b3e*/
    v35 = 0; /*0x706b42*/
    v54 = v32 - 1; /*0x706b44*/
    if ( v34 > 0 ) /*0x706b4a*/
    {
      do /*0x706b6b*/
      {
        v36 = 8 * v35; /*0x706b4e*/
        v37 = (unsigned int *)(*(unsigned int *)v8 + 8 * v35++); /*0x706b57*/
        *(unsigned int *)(v36 + result) = *v37; /*0x706b5c*/
        *(unsigned int *)(v36 + result + 4) = v37[1]; /*0x706b62*/
      }
      while ( v35 < *(unsigned int *)&v8[1] ); /*0x706b6b*/
    }
    operator delete((*(void **)v8)); /*0x706b70*/
    v38 = v8[2]; /*0x706b75*/
    *v8 = (SortedStateVector)result; /*0x706b7d*/
    v8[2] = (SortedStateVector)(v31 + *(unsigned int *)&v38); /*0x706b7f*/
    v8[4] = 0; /*0x706b82*/
  LABEL_81:
    *(unsigned int *)(*(unsigned int *)v8 + 8 * *(unsigned int *)&v8[1]) = v48; /*0x706b89*/
    *(unsigned int *)(*(unsigned int *)v8 + 8 * *(unsigned int *)&v8[1] + 4) = appended; /*0x706b9e*/
    goto LABEL_82; /*0x706b9e*/
  }
  return result; /*0x70686b*/
}
} // namespace ra2::game

// 0x707DD0
namespace ra2::game {
int TechnoClass::ComputeTotalPowerDrain()
{
  int v2; // ebx
  HouseClass *owner; // ecx
  unsigned int *i; // esi
  int v5; // eax
  int v6; // esi

  v2 = 0; /*0x707dd5*/
  owner = this->owner; /*0x707dd7*/
  if ( *(unsigned char *)(80 * *&owner->u32_184 + *(unsigned int *)&g_RulesClass_Instance + 5506) /*0x707e05*/
    || owner->iqLevel2 >= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5200) )
  {
    if ( this->passengers[1] ) /*0x707e07*/
    {
      for ( i = (unsigned int *)CCINIClass::GetDB((CCINIClass *)this->passengers); i; v2 += v5 ) /*0x707e20*/
      {
        v5 = (*(int (__thiscall **)(unsigned int *))(*i + 384))(i); /*0x707e26*/
        i = (unsigned int *)i[12]; /*0x707e2c*/
      }
    }
  }
  v6 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x707e43*/
  return v2 + (*((int (__thiscall **)(TechnoClass *))this->vfptr + 176))(this) + *(unsigned int *)(v6 + 1652); /*0x707e55*/
}
} // namespace ra2::game

// 0x707E60
namespace ra2::game {
int TechnoClass::ComputeScanDistance() const
{
  int result; // eax
  char v3; // bl
  int v4; // eax
  int v5; // ebx
  int v6; // [esp+10h] [ebp+4h]

  if ( v6 == -1 ) /*0x707e6c*/
    return -1; /*0x707e73*/
  if ( !v6 ) /*0x707e78*/
  {
    v3 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 204))(this); /*0x707e88*/
    if ( *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1464) && !v3 ) /*0x707ea0*/
      return *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1464); /*0x707eb9*/
    return 0; /*0x707ea0*/
  }
  v4 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1464); /*0x707ec6*/
  if ( !v4 ) /*0x707ece*/
  {
    v5 = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 90))(this, 1); /*0x707ee2*/
    if ( (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 90))(this, 0) <= v5 ) /*0x707eec*/
      v4 = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 90))(this, 1); /*0x707f02*/
    else
      v4 = (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 90))(this, 0); /*0x707ef4*/
  }
  result = 2 * v4; /*0x707f08*/
  if ( v6 == 2 ) /*0x707f0d*/
  {
    if ( result >= 1792 ) /*0x707f14*/
    {
      if ( result > 4096 ) /*0x707f26*/
        return 4096; /*0x707f2a*/
    }
    else
    {
      return 1792; /*0x707f18*/
    }
  }
  else
  {
    if ( result < 0 ) /*0x707f35*/
      return 0; /*0x707f3c*/
    if ( result > 4096 ) /*0x707f44*/
      return 4096; /*0x707f46*/
  }
  return result; /*0x707e70*/
}
} // namespace ra2::game

// 0x707F60
namespace ra2::game {
int TechnoClass::CheckPlacementTileMatch() const
{

  int result; // eax
  int v3; // edi
  int *v4; // ecx
  int vfptr; // edx
  unsigned int *v6; // eax
  int v7; // edx
  int v8; // ecx
  char v9; // al
  int v10; // [esp-Ch] [ebp-2Ch]
  __int16 v11; // [esp+4h] [ebp-1Ch] BYREF
  unsigned __int16 *v12; // [esp+8h] [ebp-18h]
  __int16 v13[2]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v14; // [esp+10h] [ebp-10h] BYREF
  char v15; // [esp+14h] [ebp-Ch] BYREF
  unsigned __int16 *v16; // [esp+1Ch] [ebp-4h]
  int *v17; // [esp+24h] [ebp+4h]
  unsigned __int16 *v18; // [esp+24h] [ebp+4h]

  result = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x707f6a*/
  v3 = *(unsigned int *)(result + 1460); /*0x707f70*/
  if ( v3 == -1 /*0x707fa7*/
    || (v4 = v17, result = *v17, *v17 == *(unsigned int *)&stru_B0EA70.__pad_1C[4])
    && v17[1] == *(unsigned int *)&stru_B0EA70.__pad_1C[8]
    && v17[2] == *(unsigned int *)&stru_B0EA70.__pad_1C[12] )
  {
    LOBYTE(result) = 1; /*0x70806d*/
  }
  else
  {
    LOWORD(v18) = result / 256; /*0x707fbb*/
    vfptr = this->vfptr; /*0x707fce*/
    HIWORD(v18) = v4[1] / 256; /*0x707fd3*/
    *(unsigned int *)v13 = v18; /*0x707fdc*/
    v6 = (unsigned int *)(*(int (**)(TechnoClass *))(vfptr + 76))(this); /*0x707fe5*/
    LOWORD(v16) = *v6 / 256; /*0x707ff8*/
    v7 = this->vfptr; /*0x708009*/
    HIWORD(v16) = v6[1] / 256; /*0x70800e*/
    v12 = v16; /*0x708017*/
    v10 = (*(int (**)(TechnoClass *))(v7 + 800))(this); /*0x708023*/
    v8 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, &v11) + 80) >> 8; /*0x70803b*/
    LOBYTE(v8) = v8 & 1; /*0x70803e*/
    v9 = (*(int (**)(TechnoClass *, unsigned int, int, int))&this->vfptr->missionStatus)(this, 0, v8, v10); /*0x708046*/
    LOBYTE(result) = MapSeed::CheckTileMatch((MapSeed *)&dword_87F7E8, &v14, v13, v3, v9, (char)&v15, 0); /*0x70805d*/
  }
  return result; /*0x708062*/

}
} // namespace ra2::game

// 0x708080
namespace ra2::game {
int TechnoClass::EvaluateMission()
{

  int v3; // ebp
  int v4; // eax
  int v5; // edi
  int v6; // edx
  TechnoClass *v7; // esi
  int v8; // edi
  int queuedMission; // eax
  bool v10; // cl
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  char v13; // al
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // edx
  int v18; // ebp
  TechnoClass *v19; // esi
  int v20; // edi
  int v21; // eax
  bool v22; // cl
  unsigned int *v23; // eax
  unsigned int *v24; // eax
  char v25; // al
  int v26; // eax
  bool v27; // sf
  int v28; // ecx
  int v29; // edi
  int v30; // edx
  int v31; // edi
  int v32; // esi
  int v33; // edx
  int *v34; // eax
  int v35; // ecx
  int v36; // ebx
  int v37; // ebx
  int v38; // ecx
  int v39; // ebp
  unsigned int *v40; // edi
  unsigned int *v41; // esi
  int v42; // eax
  bool v43; // bl
  int v44; // ebx
  TechnoClass *v45; // ecx
  int v46; // esi
  int v47; // ecx
  unsigned int *v48; // ebx
  int v50; // [esp+46h] [ebp-70h]
  int v51; // [esp+4Ah] [ebp-6Ch]
  int v52; // [esp+4Eh] [ebp-68h]
  int i; // [esp+52h] [ebp-64h]
  int v54; // [esp+52h] [ebp-64h]
  TechnoClass *v55; // [esp+56h] [ebp-60h]
  TechnoClass *v56; // [esp+62h] [ebp-54h]
  __int16 v57[2]; // [esp+66h] [ebp-50h] BYREF
  __int16 v58[2]; // [esp+6Ah] [ebp-4Ch] BYREF
  char v59; // [esp+6Eh] [ebp-48h] BYREF
  char v60[8]; // [esp+72h] [ebp-44h] BYREF
  char v61[4]; // [esp+7Ah] [ebp-3Ch] BYREF
  int v62; // [esp+7Eh] [ebp-38h]
  unsigned int v63[6]; // [esp+86h] [ebp-30h] BYREF
  unsigned int v64[6]; // [esp+9Eh] [ebp-18h] BYREF

  v3 = 0; /*0x70809b*/
  memset(v64, 0, sizeof(v64)); /*0x70809d*/
  memset(v63, 0, sizeof(v63)); /*0x7080a8*/
  v56 = this; /*0x7080ae*/
  v50 = 0; /*0x7080b2*/
  v52 = 0; /*0x7080b6*/
  v4 = (*(int (**)(int))(*(unsigned int *)a2 + 704))(a2); /*0x7080ba*/
  v55 = 0; /*0x7080c8*/
  v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2840) * v4; /*0x7080cc*/
  v51 = v5; /*0x7080d5*/
  if ( a2 ) /*0x7080d9*/
  {
    LOBYTE(v4) = Object::IsAlliedWithObjectHouse((Object *)this->owner, a2); /*0x7080e6*/
    if ( !(unsigned char)v4 ) /*0x7080ed*/
    {
      LOBYTE(v4) = House::IsCurrentPlayer((House *)this->owner); /*0x7080f9*/
      if ( !(unsigned char)v4 ) /*0x708100*/
      {
        LOBYTE(v4) = *(unsigned char *)(a2 + 129); /*0x708106*/
        if ( !(unsigned char)v4 ) /*0x70810e*/
        {
          if ( *(unsigned int *)&dword_A8B238 /*0x708128*/
            || (LOBYTE(v4) = (*((int (**)(TechnoClass *))this->vfptr + 171))(this), !(unsigned char)v4) )
          {
            if ( (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2) == 15 /*0x708144*/
              || (v4 = (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2), v4 == 1) )
            {
              v4 = (*((int (**)(TechnoClass *))this->vfptr + 33))(this); /*0x70814e*/
              if ( !*(unsigned char *)(v4 + 562) ) /*0x708154*/
              {
                if ( (*(unsigned char *)(a2 + 20) & 4) == 0 ) /*0x70816f*/
                  goto LABEL_15; /*0x70816f*/
                v6 = *(unsigned int *)(a2 + 1616); /*0x708171*/
                v4 = *(unsigned int *)(a2 + 1624); /*0x708177*/
                if ( v6 != -1 ) /*0x708180*/
                {
                  if ( *(unsigned int *)&MEMORY[0xA8EB00].?[416] - v6 >= v4 ) /*0x70818c*/
                    goto LABEL_15; /*0x70818c*/
                  v4 -= *(unsigned int *)&MEMORY[0xA8EB00].?[416] - v6; /*0x70818e*/
                }
                if ( v4 ) /*0x708192*/
                  return v4; /*0x708192*/
LABEL_15:
                globalHelper_0EC250(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5344), (int)this->owner); /*0x708198*/
                for ( i = 0; i < *(int *)&MEMORY[0xA83D50].__pad_80[40]; ++i ) /*0x7081b9*/
                {
                  if ( v5 <= 0 ) /*0x7081c1*/
                    break; /*0x7081c1*/
                  v7 = *(TechnoClass **)(*(unsigned int *)&MEMORY[0xA83D50].__pad_80[28] + 4 * i); /*0x7081d1*/
                  if ( v7 ) /*0x7081d6*/
                  {
                    if ( v7->isAliveFlag ) /*0x7081dc*/
                    {
                      v8 = (*((int (**)(unsigned int))v7->vfptr + 14))(*(unsigned int *)(*(unsigned int *)&MEMORY[0xA83D50].__pad_80[28] /*0x7081f5*/
                                                                                      + 4 * i));
                      if ( v8 == (*((int (**)(TechnoClass *))this->vfptr + 14))(this) ) /*0x7081fc*/
                      {
                        queuedMission = v7[1].queuedMission; /*0x708202*/
                        v10 = queuedMission && *(unsigned char *)(*(unsigned int *)(queuedMission + 36) + 246); /*0x708219*/
                        if ( (!queuedMission || v10) /*0x70828b*/
                          && v7->isRecruitableByAlly
                          && (*((unsigned __int8 (**)(TechnoClass *))v7->vfptr + 171))(v7)
                          && v7->isRecruitableByEnemy
                          && (MissionClass::GetMissionControlv7->nextArrayIndex || *(unsigned int *)&dword_A8B238)
                          && (*((int (**)(TechnoClass *, int, unsigned int))v7->vfptr + 239))(v7, a2, 0) != 5 )
                        {
                          v11 = (unsigned int *)(*((int (**)(TechnoClass *))this->vfptr + 19))(this); /*0x70829c*/
                          LOWORD(i) = *v11 / 256; /*0x7082b1*/
                          HIWORD(i) = v11[1] / 256; /*0x7082c7*/
                          v12 = (unsigned int *)(*((int (**)(TechnoClass *, char *, unsigned int))v7->vfptr + 19))( /*0x7082db*/
                                            v7,
                                            v60,
                                            0);
                          LOWORD(v55) = *v12 / 256; /*0x7082f4*/
                          HIWORD(v55) = v12[1] / 256; /*0x70830a*/
                          v56 = v55; /*0x708313*/
                          v13 = (*((int (**)(TechnoClass *, unsigned int, unsigned int, unsigned int))v7->vfptr + 47))( /*0x708319*/
                                  v7,
                                  0,
                                  0,
                                  0);
                          if ( MapSeed::CheckTileMatch( /*0x70833c*/
                                 (MapSeed *)&DataGlobal_87F7E8,
                                 v58,
                                 v57,
                                 *(unsigned int *)(v7[1].ironTintTimer[1] + 1460),
                                 v13,
                                 (char)&v59,
                                 0) )
                          {
                            v14 = TechnoClass::ComputeThreatLevel(v7, a2); /*0x708348*/
                            if ( v14 ) /*0x70834f*/
                            {
                              if ( (TechnoClass *)this->focus == this ) /*0x708357*/
                                v14 *= 100; /*0x70835f*/
                              if ( v14 >= 0 ) /*0x708364*/
                              {
                                if ( v3 >= 6 ) /*0x70836f*/
                                {
                                  if ( v14 > v52 ) /*0x70838b*/
                                  {
                                    v15 = 0; /*0x70838d*/
                                    v16 = v14; /*0x70838f*/
                                    do /*0x7083b6*/
                                    {
                                      v17 = v63[v15]; /*0x708395*/
                                      if ( v17 == v52 ) /*0x70839d*/
                                      {
                                        v63[v15] = v14; /*0x70839f*/
                                        v64[v15] = v7; /*0x7083a3*/
                                      }
                                      else if ( v17 < v16 ) /*0x7083ab*/
                                      {
                                        v16 = v63[v15]; /*0x7083ad*/
                                      }
                                      ++v15; /*0x7083b3*/
                                    }
                                    while ( v15 < v50 ); /*0x7083b6*/
                                    v52 = v16; /*0x7083b8*/
                                  }
                                }
                                else
                                {
                                  v64[v3] = v7; /*0x708375*/
                                  v63[v3] = v14; /*0x70837a*/
                                  ++v50; /*0x70837e*/
                                  ++v3; /*0x708382*/
                                }
                              }
                              else
                              {
                                v51 += v14; /*0x708366*/
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  v5 = v51; /*0x7083c6*/
                }
                v54 = 0; /*0x7083de*/
                if ( FootClass_Array.storedTiberium[2] <= 0 ) /*0x7083e4*/
                {
LABEL_89:
                  if ( v5 > 0 ) /*0x708641*/
                  {
                    if ( v50 - 1 > 0 ) /*0x708650*/
                    {
                      v31 = 1; /*0x708652*/
                      v32 = 0; /*0x708657*/
                      do /*0x7086ad*/
                      {
                        v33 = v31; /*0x70865d*/
                        if ( v31 < v50 ) /*0x708661*/
                        {
                          v34 = &v63[v32]; /*0x708663*/
                          do /*0x7086a2*/
                          {
                            v35 = v63[v33]; /*0x708667*/
                            if ( *v34 < v35 ) /*0x70866f*/
                            {
                              v36 = v35 ^ *v34; /*0x708673*/
                              *v34 = v36; /*0x708675*/
                              v37 = v36 ^ v63[v33]; /*0x70867d*/
                              v63[v33] = v37; /*0x70867f*/
                              v38 = v64[v32]; /*0x708689*/
                              *v34 ^= v37; /*0x70868d*/
                              v64[v32] = v64[v33]; /*0x708693*/
                              v64[v33] = v38; /*0x708697*/
                            }
                            ++v33; /*0x70869f*/
                          }
                          while ( v33 < v50 ); /*0x7086a2*/
                        }
                        ++v31; /*0x7086a4*/
                        ++v32; /*0x7086a5*/
                      }
                      while ( v31 - 1 < v50 - 1 ); /*0x7086ad*/
                    }
                    v39 = 0; /*0x7086b3*/
                    if ( v50 > 0 ) /*0x7086b7*/
                    {
                      v40 = v64; /*0x7086bd*/
                      while ( 1 ) /*0x7086c1*/
                      {
                        v41 = (unsigned int *)*v40; /*0x7086c1*/
                        v42 = *(unsigned int *)(*v40 + 1492); /*0x7086c3*/
                        v43 = v42 && *(unsigned char *)(*(unsigned int *)(v42 + 36) + 246); /*0x7086da*/
                        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 66 || v43 ) /*0x7086fc*/
                          (*(void (**)(unsigned int *, int, unsigned int))(*v41 + 488))(v41, 11, 0); /*0x70870e*/
                        else
                          (*(void (**)(unsigned int *, int, unsigned int))(*v41 + 488))(v41, 21, 0); /*0x708704*/
                        v44 = a2; /*0x708718*/
                        v41[134] = v56; /*0x70871f*/
                        (*(void (**)(unsigned int *, int))(*v41 + 968))(v41, a2); /*0x70872a*/
                        v45 = (TechnoClass *)((char *)v55 + (*(int (**)(unsigned int *))(*v41 + 704))(v41)); /*0x70873e*/
                        LOBYTE(v4) = v51; /*0x708740*/
                        v55 = v45; /*0x708746*/
                        if ( (int)v45 > v51 ) /*0x70874a*/
                          break; /*0x70874a*/
                        ++v39; /*0x708750*/
                        ++v40; /*0x708751*/
                        if ( v39 >= v50 ) /*0x708756*/
                          goto LABEL_110; /*0x708756*/
                      }
LABEL_112:
                      if ( (*(unsigned char *)(v44 + 20) & 4) != 0 ) /*0x70877c*/
                      {
                        v46 = *(unsigned int *)&MEMORY[0xA8EB00].?[416]; /*0x708783*/
                        LOWORD(v4) = Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5336) * 900.0); /*0x708795*/
                        v47 = v62; /*0x70879a*/
                        v48 = (unsigned int *)(v44 + 1616); /*0x70879e*/
                        *v48 = v46; /*0x7087a4*/
                        v48[1] = v47; /*0x7087a6*/
                        v48[2] = v4; /*0x7087a9*/
                      }
                      return v4; /*0x7087a9*/
                    }
                  }
                }
                else
                {
                  v18 = v50; /*0x7083ee*/
                  while ( v5 > 0 ) /*0x7083f7*/
                  {
                    v19 = *(TechnoClass **)(FootClass_Array.hijackerInfantryType + 4 * v54); /*0x708407*/
                    if ( v19 ) /*0x70840c*/
                    {
                      if ( v19->isAliveFlag ) /*0x708412*/
                      {
                        v20 = (*((int (**)(unsigned int))v19->vfptr + 14))(*(unsigned int *)(FootClass_Array.hijackerInfantryType /*0x708427*/
                                                                                          + 4 * v54));
                        if ( v20 == (*((int (**)(TechnoClass *))this->vfptr + 14))(this) ) /*0x708432*/
                        {
                          v21 = v19[1].queuedMission; /*0x708438*/
                          v22 = v21 && *(unsigned char *)(*(unsigned int *)(v21 + 36) + 246); /*0x70844f*/
                          if ( (!v21 || v22) /*0x7084db*/
                            && v19->isRecruitableByAlly
                            && (*((unsigned __int8 (**)(TechnoClass *))v19->vfptr + 171))(v19)
                            && v19->isRecruitableByEnemy
                            && (MissionClass::GetMissionControlv19->nextArrayIndex || *(unsigned int *)&dword_A8B238)
                            && (*((int (**)(TechnoClass *, int, unsigned int))v19->vfptr + 239))(v19, a2, 0) != 5
                            && !*(unsigned char *)(v19[1].ironTintTimer[2] + 1516)
                            && !v19->bunkerLinkedUnit )
                          {
                            v23 = (unsigned int *)(*((int (**)(TechnoClass *))this->vfptr + 19))(this); /*0x7084f4*/
                            LOWORD(v55) = *v23 / 256; /*0x708509*/
                            HIWORD(v55) = v23[1] / 256; /*0x70851f*/
                            v56 = v55; /*0x70852c*/
                            v24 = (unsigned int *)(*((int (**)(TechnoClass *, __int16 *, unsigned int))v19->vfptr + 19))( /*0x708533*/
                                              v19,
                                              v57,
                                              0);
                            LOWORD(v54) = *v24 / 256; /*0x70854c*/
                            HIWORD(v54) = v24[1] / 256; /*0x708562*/
                            v25 = (*((int (**)(TechnoClass *, unsigned int, unsigned int, unsigned int))v19->vfptr + 47))( /*0x708571*/
                                    v19,
                                    0,
                                    0,
                                    0);
                            if ( MapSeed::CheckTileMatch( /*0x708594*/
                                   (MapSeed *)&DataGlobal_87F7E8,
                                   v57,
                                   v58,
                                   *(unsigned int *)(v19[1].ironTintTimer[2] + 1460),
                                   v25,
                                   (char)v61,
                                   0) )
                            {
                              v26 = TechnoClass::ComputeThreatLevel(v19, a2); /*0x7085a4*/
                              if ( v26 ) /*0x7085ab*/
                              {
                                if ( !this->slaveOwner ) /*0x7085ad*/
                                {
                                  v27 = v26 < 0; /*0x7085b7*/
                                  if ( v26 > 0 ) /*0x7085b9*/
                                  {
                                    if ( (TechnoClass *)this->focus == this ) /*0x7085c1*/
                                      v26 *= 10; /*0x7085c6*/
                                    v27 = v26 < 0; /*0x7085c8*/
                                  }
                                  if ( v27 ) /*0x7085ca*/
                                  {
                                    v51 += v26; /*0x7085cc*/
                                  }
                                  else if ( v18 >= 6 ) /*0x7085d5*/
                                  {
                                    if ( v26 > v52 ) /*0x7085f1*/
                                    {
                                      v28 = 0; /*0x7085f3*/
                                      v29 = v26; /*0x7085f5*/
                                      do /*0x70861c*/
                                      {
                                        v30 = v63[v28]; /*0x7085fb*/
                                        if ( v30 == v52 ) /*0x708603*/
                                        {
                                          v63[v28] = v26; /*0x708605*/
                                          v64[v28] = v19; /*0x708609*/
                                        }
                                        else if ( v30 < v29 ) /*0x708611*/
                                        {
                                          v29 = v63[v28]; /*0x708613*/
                                        }
                                        ++v28; /*0x708619*/
                                      }
                                      while ( v28 < v50 ); /*0x70861c*/
                                      v52 = v29; /*0x70861e*/
                                    }
                                  }
                                  else
                                  {
                                    v64[v18] = v19; /*0x7085db*/
                                    v63[v18] = v26; /*0x7085e0*/
                                    ++v50; /*0x7085e4*/
                                    ++v18; /*0x7085e8*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    v5 = v51; /*0x70862c*/
                    if ( ++v54 >= FootClass_Array.storedTiberium[2] ) /*0x708637*/
                      goto LABEL_89; /*0x708637*/
                  }
                }
LABEL_110:
                LOBYTE(v4) = (unsigned char)v55; /*0x70875c*/
                if ( (int)v55 <= v51 ) /*0x708766*/
                  return v4; /*0x708766*/
                v44 = a2; /*0x708768*/
                goto LABEL_112; /*0x708768*/
              }
            }
          }
        }
      }
    }
  }
  return v4; /*0x7087ac*/

}
} // namespace ra2::game

// 0x708B40
namespace ra2::game {
int TechnoClass::GetCostMultiplier() const
{

  unsigned int *v2; // edi
  int v3; // edi
  int bunkerLinkedUnit; // ecx

  v2 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x708b4c*/
  if ( !v2 ) /*0x708b50*/
    return 0; /*0x708bad*/
  if ( (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) != 6 ) /*0x708b5c*/
    return v2[412]; /*0x708b5c*/
  if ( (*(int (**)(TechnoClass *))&this->vfptr->q408)(this) > 0 ) /*0x708b6a*/
  {
    v3 = *&dword_8871E0->u32_DF4; /*0x708b74*/
    return v3 * (*(int (**)(TechnoClass *))&this->vfptr->q408)(this); /*0x708b87*/
  }
  bunkerLinkedUnit = this->bunkerLinkedUnit; /*0x708b88*/
  if ( bunkerLinkedUnit ) /*0x708b90*/
    return *(unsigned int *)((*(int (**)(int))(*(unsigned int *)bunkerLinkedUnit + 132))(bunkerLinkedUnit) + 1648); /*0x708b9a*/
  else
    return v2[412]; /*0x708ba3*/

}
} // namespace ra2::game

// 0x708BC0
namespace ra2::game {
int TechnoClass::ComputeAverageValue() const
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708bc8*/
  if ( result->u32_800 ) /*0x708bce*/
  {
    Float4::Sum(&this->tiltSidewaysAngle); /*0x708bde*/
    return (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708beb*/
  }
  return result; /*0x708bfc*/
}
} // namespace ra2::game

// 0x708C30
namespace ra2::game {
int TechnoClass::GetAmmoCount() const
{
  double v1; // st7
  int v3; // eax
  double v4; // st7
  TechnoClass *captureManager; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  BOOL v10; // ecx
  int result; // eax
  double ammo; // [esp+8h] [ebp-10h]

  switch ( *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 980) ) /*0x708c4e*/
  {
    case 1: /*0x708c4e*/
      ammo = (double)this->ammo; /*0x708c5f*/
      v3 = (*((int (__usercall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708c63*/
      v4 = (double)(*(int (__thiscall **)(int))(*(unsigned int *)v3 + 116))(v3); /*0x708c74*/
      goto LABEL_7; /*0x708c78*/
    case 2: /*0x708c4e*/
      Float4::Sum(&this->tiltSidewaysAngle); /*0x708cdf*/
      ammo = v1; /*0x708ce8*/
      v4 = (double)*(int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 2048); /*0x708cf2*/
      goto LABEL_7; /*0x708cf2*/
    case 3: /*0x708c4e*/
      ammo = (double)this->passengers[0]; /*0x708cbe*/
      v7 = (*((int (__usercall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708cc2*/
      v4 = (double)(*(int (__thiscall **)(int))(*(unsigned int *)v7 + 116))(v7); /*0x708cd3*/
      goto LABEL_7; /*0x708cd7*/
    case 5: /*0x708c4e*/
      captureManager = (TechnoClass *)this->captureManager; /*0x708c7a*/
      if ( !captureManager ) /*0x708c82*/
        goto LABEL_10; /*0x708c82*/
      ammo = (double)TechnoClass::processPowerDrain(captureManager); /*0x708c99*/
      v6 = (*((int (__usercall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708c9d*/
      v4 = (double)(*(int (__thiscall **)(int))(*(unsigned int *)v6 + 116))(v6); /*0x708cae*/
  LABEL_7:
      v8 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708cf8*/
      v8->HandleCursorClick(); /*0x708d0a*/
      (*((unsigned short *)&(v9))) = Math::RoundToInt(v4); /*0x708d25*/
      v10 = v9; /*0x708d2a*/
      if ( !v9 ) /*0x708d2e*/
        v10 = ammo > 0.0; /*0x708d41*/
      result = v10; /*0x708d46*/
      break; /*0x708d4c*/
    default:
  LABEL_10:
      result = 0; /*0x708d4d*/
      break; /*0x708d4d*/
  }
  return result; /*0x708d48*/
}
} // namespace ra2::game

// 0x708D70
namespace ra2::game {
int TechnoClass::Vt170()
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x708d70*/
  v2 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, TechnoClass **))this->vfptr + 170))(this, &v4); /*0x708d7e*/
  *a2 = v2; /*0x708d84*/
  return a2; /*0x708d87*/
}
} // namespace ra2::game

// 0x708D90
namespace ra2::game {
int TechnoClass::SetMoveDestination(int a1)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp+4h]

  (*((unsigned char *)&(result))) = g_MoveFeedback; /*0x708d90*/
  if ( g_MoveFeedback && v3 != -1 ) /*0x708da4*/
  {
    result = House::IsHumanPlayer((House *)a1->owner); /*0x708dac*/
    if ( (unsigned char)result ) /*0x708db3*/
      a1->queuedVoiceIndex = v3; /*0x708db5*/
  }
  return result; /*0x708dbb*/
}
} // namespace ra2::game

// 0x708DC0
namespace ra2::game {
int TechnoClass::GetPrimaryTargetOrFallback() const
{

  int vfptr; // edi
  unsigned int *v3; // eax

  if ( *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1372) == -1 ) /*0x708dd2*/
    return (*(int (**)(TechnoClass *))&this->vfptr->u32_358)(this); /*0x708df5*/
  vfptr = this->vfptr; /*0x708dd5*/
  v3 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x708dd9*/
  return (*(int (**)(TechnoClass *, unsigned int))(vfptr + 852))(this, v3[343]); /*0x708def*/

}
} // namespace ra2::game

// 0x708E00
namespace ra2::game {
int TechnoClass::PickAlternateTarget()
{

  int v2; // eax
  int vfptr; // edi
  unsigned int *v4; // eax
  int v5; // edi
  unsigned int *v6; // eax

  if ( !this->unknown_bool_4F8[0] )
  {
    if ( this
      && (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) == 15
      && (v2 = (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this),
          (unsigned __int8)TechnoClass::IsMission27to30(v2 == 15 ? this : 0)) )
    {
      if ( *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1428) != -1 ) /*0x708e4f*/
      {
        vfptr = this->vfptr; /*0x708e51*/
        v4 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x708e55*/
        (*(void (**)(TechnoClass *, unsigned int))(vfptr + 852))(this, v4[357]); /*0x708e64*/
        this->unknown_bool_4F8[0] = 0; /*0x708e6a*/
        return; /*0x708e73*/
      }
    }
    else if ( *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1424) != -1 ) /*0x708e85*/
    {
      v5 = this->vfptr; /*0x708e87*/
      v6 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x708e8b*/
      (*(void (**)(TechnoClass *, unsigned int))(v5 + 852))(this, v6[356]); /*0x708e9a*/
    }
  }
  this->unknown_bool_4F8[0] = 0; /*0x708ea0*/

}
} // namespace ra2::game

// 0x708EB0
namespace ra2::game {
int TechnoClass::SelectRandomTarget()
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ecx

  if ( this->slaveOwner ) /*0x708eb5*/
  {
    v2 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708ec1*/
    v3 = *(unsigned int *)(v2 + 1088); /*0x708ec7*/
    result = v2 + 1072; /*0x708ecd*/
    if ( !v3 ) /*0x708ed4*/
      return result; /*0x708ed4*/
    v5 = Random::State(&Randomizer_Global); /*0x708ee8*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1072; /*0x708ef2*/
    return (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 213))( /*0x708fa7*/
             this,
             *(unsigned int *)(*(unsigned int *)(v6 + 4) + 4 * (v5 % *(unsigned int *)(v6 + 16))));
  }
  if ( !this->airstrikeTintStage_2 ) /*0x708f05*/
  {
    v11 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708f62*/
    v12 = *(unsigned int *)(v11 + 1060); /*0x708f68*/
    result = v11 + 1044; /*0x708f6e*/
    if ( !v12 ) /*0x708f75*/
      return result; /*0x708f75*/
    v5 = Random::State(&Randomizer_Global); /*0x708f85*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1044; /*0x708f8f*/
    return (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 213))( /*0x708f8f*/
             this,
             *(unsigned int *)(*(unsigned int *)(v6 + 4) + 4 * (v5 % *(unsigned int *)(v6 + 16))));
  }
  v7 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708f0b*/
  v8 = *(unsigned int *)(v7 + 1116); /*0x708f11*/
  result = v7 + 1100; /*0x708f17*/
  if ( v8 ) /*0x708f1e*/
  {
    v9 = Random::State(&Randomizer_Global); /*0x708f2e*/
    v10 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708f34*/
    return (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 213))( /*0x708f54*/
             this,
             *(unsigned int *)(*(unsigned int *)(v10 + 1104) + 4 * (v9 % *(unsigned int *)(v10 + 1116))));
  }
  return result; /*0x708f5a*/
}
} // namespace ra2::game

// 0x708FC0
namespace ra2::game {
int TechnoClass::ResponseMove_Pickup()
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edi
  int v6; // eax

  v2 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708fc5*/
  v3 = *(unsigned int *)(v2 + 1144); /*0x708fcb*/
  result = v2 + 1128; /*0x708fd1*/
  if ( v3 ) /*0x708fd8*/
  {
    v5 = Random::State(&Randomizer_Global); /*0x708fea*/
    v6 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x708fec*/
    return (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 213))( /*0x70900c*/
             this,
             *(unsigned int *)(*(unsigned int *)(v6 + 1132) + 4 * (v5 % *(unsigned int *)(v6 + 1144))));
  }
  return result; /*0x709014*/
}
} // namespace ra2::game

// 0x709020
namespace ra2::game {
int TechnoClass::GetSecondaryTargetOrFallback() const
{

  int vfptr; // edi
  unsigned int *v3; // eax

  if ( *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1368) == -1 ) /*0x709032*/
    return (*(int (**)(TechnoClass *))&this->vfptr->q368)(this); /*0x709055*/
  vfptr = this->vfptr; /*0x709035*/
  v3 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x709039*/
  return (*(int (**)(TechnoClass *, unsigned int))(vfptr + 852))(this, v3[342]); /*0x70904f*/

}
} // namespace ra2::game

// 0x709060
namespace ra2::game {
int TechnoClass::GetTertiaryTargetOrFallback() const
{

  int vfptr; // edi
  unsigned int *v3; // eax

  if ( *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1404) == -1 ) /*0x709072*/
    return (*(int (**)(TechnoClass *))&this->vfptr->q368)(this); /*0x709095*/
  vfptr = this->vfptr; /*0x709075*/
  v3 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x709079*/
  return (*(int (**)(TechnoClass *, unsigned int))(vfptr + 852))(this, v3[351]); /*0x70908f*/

}
} // namespace ra2::game

// 0x7090A0
namespace ra2::game {
int TechnoClass::VoiceAttack()
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int result; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // [esp+Ch] [ebp+4h]

  v2 = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 185))(this, v10); /*0x7090b5*/
  v3 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, v2); /*0x7090c0*/
  if ( v3 /*0x7090d7*/
    && *(int *)(v3 + 164) < 0
    && (uint8_t)ObjectClass::StepCleanup((ObjectClass *)this, g_INI_Key_TRUCKA.Size) )
  {
    v4 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 560); /*0x7090e5*/
  }
  else if ( (uint8_t)Audio::IsLoud(this->veterancy) ) /*0x7090f3*/
  {
    if ( v2 ) /*0x7090fe*/
      v4 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1420); /*0x70911c*/
    else
      v4 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1412); /*0x70910a*/
  }
  else if ( v2 ) /*0x709126*/
  {
    v4 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1416); /*0x709144*/
  }
  else
  {
    v4 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1408); /*0x709132*/
  }
  v5 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70914e*/
  v6 = *(unsigned int *)(v5 + 1172); /*0x709154*/
  result = v5 + 1156; /*0x70915a*/
  if ( !v6 ) /*0x709161*/
  {
    if ( v4 == -1 ) /*0x709166*/
      return result; /*0x709166*/
    return (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 213))(this, v4); /*0x709166*/
  }
  if ( v4 != -1 ) /*0x70917b*/
    return (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 213))(this, v4); /*0x709175*/
  v8 = Random::State(&Randomizer_Global); /*0x70919c*/
  v9 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70919e*/
  return (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 213))( /*0x709173*/
           this,
           *(unsigned int *)(*(unsigned int *)(v9 + 1160) + 4 * (v8 % *(unsigned int *)(v9 + 1172))));
}
} // namespace ra2::game

// 0x709820
namespace ra2::game {
int TechnoClass::BeginFiringSequence()
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  UnitClass *spawnManager; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  TechnoClass *v10; // [esp+0h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+18h] [ebp+4h]
  char v13; // [esp+1Ch] [ebp+8h]

  this->unknown_4FC = (int)dword_A8ED84; /*0x70982e*/
  if ( this->currentMission == 11 ) /*0x70983f*/
    v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2) + *&dword_8871E0->u32_E04; /*0x709864*/
  else
    v2 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2) + *&dword_8871E0->u32_E08; /*0x70989a*/
  this->targetingTimer[0] = (int)dword_A8ED84; /*0x70986c*/
  this->targetingTimer[1] = v11; /*0x7098b0*/
  this->targetingTimer[2] = v2; /*0x7098b6*/
  if ( this->target && (this->shouldLoseTarget) ) /*0x7098c3*/
  {
    v3 = this->SelectWeapon(this->target); /*0x7098d2*/
    v4 = this->ReadINI_3(this->target, v3, 1); /*0x7098e6*/
    if ( v4 == 6 ) /*0x7098ef*/
    {
      spawnManager = (UnitClass *)this->spawnManager; /*0x7098f1*/
      if ( spawnManager ) /*0x7098f9*/
      {
        UnitClass::ProcessIdleOrders(spawnManager); /*0x7098fb*/
        goto LABEL_12; /*0x709900*/
      }
      goto LABEL_11; /*0x7098f9*/
    }
    if ( v4 == 5 || v4 == 8 ) /*0x70990a*/
  LABEL_11:
      this->AssignTarget_SyncLog(0); /*0x70990c*/
  }
  LABEL_12:
  if ( !this->target )
  {
    v6 = this->SelectAutoTarget_Start_AU(v13 & 3, v12, 0); /*0x70993c*/
    if ( *(unsigned char *)(this->Vt34Thunk() + 1712) )
    {
      SelectTargetByWeight(v10, (int)this); /*0x709950*/
    }
    else
    {
      if ( v6 ) /*0x709959*/
        this->AssignTarget_SyncLog(v6); /*0x709960*/
      v7 = this->SelectWeapon(this->target); /*0x709971*/
      if ( v6 )
        v6 = (*(unsigned char *)(v6 + 20) & 1) != 0 ? v6 : 0;
      v8 = *(unsigned int *)this->SelectVocOrSfx(v7); /*0x709992*/
      if ( v6 && v8 && !*(unsigned char *)(*(unsigned int *)(v8 + 160) + 674) ) /*0x7099a2*/
        *(unsigned int *)(v6 + 112) -= TechnoClass::ComputeAudioFalloffDamage(this, v6, v8); /*0x7099b5*/
    }
  }
  return this->target != 0; /*0x7099c2*/
}
} // namespace ra2::game

// 0x7099E0
namespace ra2::game {
int TechnoClass::IsTimerExpired() const
{
  int v1; // edx
  int result; // eax

  v1 = this->idleActionTimer[0]; /*0x7099e0*/
  result = this->idleActionTimer[2]; /*0x7099e6*/
  if ( v1 != -1 ) /*0x7099ef*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v1 < result ) /*0x7099fb*/
    {
      result -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v1; /*0x7099fd*/
      (*((unsigned char *)&(result))) = result == 0; /*0x709a06*/
      return result; /*0x709a08*/
    }
    result = 0; /*0x709a09*/
  }
  (*((unsigned char *)&(result))) = result == 0; /*0x709a12*/
  return result; /*0x709a08*/
}
} // namespace ra2::game

// 0x709A40
namespace ra2::game {
int TechnoClass::CompleteFactoryProduction()
{
  FactoryClass *temporalUsing; // ecx

  temporalUsing = (FactoryClass *)this->temporalUsing; /*0x709a43*/
  if ( temporalUsing && temporalUsing->production[1] ) /*0x709a4d*/
    FactoryClass::CompleteItem(temporalUsing); /*0x709a54*/
  if ( !(*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 308))(this) /*0x709a6b*/
    && (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 268))(this) )
  {
    BuildingClass::GetObjectData((BuildingClass *)this); /*0x709a77*/
  }
  return 0; /*0x709a7e*/
}
} // namespace ra2::game

// 0x70AD50
namespace ra2::game {
int TechnoClass::GetCellCoordsV2() const
{

  unsigned int *v1; // eax
  unsigned char v3[12]; // [esp+0h] [ebp-Ch] BYREF
  unsigned __int16 **v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  unsigned __int16 *v6; // [esp+14h] [ebp+8h]

  v1 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *, int))&this->vfptr->lineTrailer)(this, v3, v5); /*0x70ad5f*/
  LOWORD(v6) = *v1 / 256; /*0x70ad75*/
  HIWORD(v6) = v1[1] / 256; /*0x70ad89*/
  *v4 = v6; /*0x70ad96*/
  return (int)v4; /*0x70ad98*/

}
} // namespace ra2::game

// 0x70ADA0
namespace ra2::game {
int TechnoClass::Vt46Thunk()
{
  int v2; // eax

  v2 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70ada5*/
  return (*(int (__thiscall **)(int, HouseClass *, unsigned int))(*(unsigned int *)v2 + 184))(v2, this->owner, 0); /*0x70adbe*/
}
} // namespace ra2::game

// 0x70ADC0
namespace ra2::game {
int TechnoClass::RevealAreaSmall()
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]
  char v14; // [esp+1Ch] [ebp+4h]
  char v15; // [esp+20h] [ebp+8h]

  (*((unsigned char *)&(result))) = this->isInPlayfield; /*0x70adc7*/
  if ( (unsigned char)result ) /*0x70adcf*/
  {
    if ( !*(unsigned char *)(this->owner->relatedTagsCapacity + 422) || (result = *(unsigned int *)&dword_A8B238) == 0 ) /*0x70adef*/
    {
      v11 = this->location[0]; /*0x70adff*/
      v12 = this->location[1]; /*0x70ae06*/
      v3 = 10 * (this->location[2] / *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5820)); /*0x70ae24*/
      if ( v3 > this->sightRangeBonus ) /*0x70ae28*/
        v14 = 0; /*0x70ae2a*/
      this->sightRangeBonus = v3; /*0x70ae2f*/
      v4 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70ae3b*/
      (*((unsigned short *)&(v5))) = Math::RoundToInt((double)*(int *)(v4 + 1512) * ((double)this->sightRangeBonus * 0.01 + 1.0)); /*0x70ae64*/
      v10 = v5; /*0x70ae6f*/
      if ( (uint8_t)Audio::IsMediumVolume(this->veterancy) || (uint8_t)Audio::IsLoud(this->veterancy) ) /*0x70ae80*/
      {
        if ( (v6 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this), /*0x70aebf*/
              (uint8_t)Audio::IsMediumVolume(this->veterancy))
          && *(unsigned char *)(v6 + 673)
          || (uint8_t)Audio::IsLoud(this->veterancy) && (*(unsigned char *)(v6 + 673) || *(unsigned char *)(v6 + 691)) )
        {
          if ( *(double *)(*(unsigned int *)&g_RulesClass_Instance + 1664) != 0.0 ) /*0x70aee0*/
          {
            (*((unsigned short *)&(v7))) = Math::RoundToInt((double)v10 * *(double *)(*(unsigned int *)&g_RulesClass_Instance + 1664)); /*0x70aeec*/
            v10 = v7; /*0x70aef1*/
          }
        }
      }
      result = v10; /*0x70aef5*/
      if ( v10 ) /*0x70aefd*/
      {
        v8 = this->location[1]; /*0x70af01*/
        v11 = this->location[0]; /*0x70af04*/
        v9 = this->location[2]; /*0x70af08*/
        v12 = v8; /*0x70af0b*/
        v13 = v9; /*0x70af17*/
        return MapClass::RevealArea0((MapClass *)&DataGlobal_87F7E8, &v11, v10, this->owner, v14, v15, 0, 1, 1); /*0x70af35*/
      }
    }
  }
  return result; /*0x70af3a*/
}
} // namespace ra2::game

// 0x70AF50
namespace ra2::game {
int TechnoClass::ScanForEnemies()
{
  int result; // eax
  int *location; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-14h]
  int v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]
  char v19; // [esp+24h] [ebp+4h]
  int v20; // [esp+28h] [ebp+8h]
  char v21; // [esp+2Ch] [ebp+Ch]
  void *v22; // [esp+30h] [ebp+10h]
  int v23; // [esp+34h] [ebp+14h]

  (*((unsigned char *)&(result))) = this->isInPlayfield; /*0x70af58*/
  if ( (unsigned char)result ) /*0x70af60*/
  {
    result = (int)this->owner; /*0x70af66*/
    (*((unsigned char *)&(result))) = *(unsigned char *)(result->relatedTagsCapacity + 422); /*0x70af6f*/
    if ( !(unsigned char)result /*0x70af97*/
      && (*(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1512) || (result = v23) != 0) )
    {
      location = this->location; /*0x70af9d*/
      v16 = this->location[0]; /*0x70afa7*/
      v17 = this->location[1]; /*0x70afb4*/
      v4 = 10 * (this->location[2] / *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5820)); /*0x70afcc*/
      if ( v4 > this->v4 ) /*0x70afd0*/
        v19 = 0; /*0x70afd2*/
      this->v4 = v4; /*0x70afd7*/
      v5 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70afe2*/
      (*((unsigned short *)&(v6))) = Math::RoundToInt((double)*(int *)(v5 + 1512) * ((double)this->v4 * 0.01 + 1.0)); /*0x70b00b*/
      v7 = v6; /*0x70b016*/
      v6 = v6; /*0x70b01a*/
      if ( (uint8_t)Audio::IsMediumVolume(this->veterancy) || (uint8_t)Audio::IsLoud(this->veterancy) ) /*0x70b029*/
      {
        if ( (v14 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this), /*0x70b072*/
              (uint8_t)Audio::IsMediumVolume(this->veterancy))
          && *(unsigned char *)(v14 + 673)
          || (uint8_t)Audio::IsLoud(this->veterancy) && (*(unsigned char *)(v14 + 673) || *(unsigned char *)(v14 + 691)) )
        {
          if ( *(double *)(*(unsigned int *)&g_RulesClass_Instance + 1664) != 0.0 ) /*0x70b093*/
          {
            (*((unsigned short *)&(v8))) = Math::RoundToInt((double)v6 * *(double *)(*(unsigned int *)&g_RulesClass_Instance + 1664)); /*0x70b09f*/
            v7 = v8; /*0x70b0a4*/
          }
        }
      }
      result = v23; /*0x70b0a6*/
      if ( v23 ) /*0x70b0ad*/
        v7 = v23; /*0x70b0af*/
      if ( !this->isChronosphereImmune ) /*0x70b0b1*/
      {
        v9 = *location; /*0x70b0c9*/
        this->isChronosphereImmune = 1; /*0x70b0cb*/
        this->lastSightCoords[0] = v9; /*0x70b0d2*/
        this->v7 = v7; /*0x70b0d4*/
        result = this->location[1]; /*0x70b0da*/
        this->lastSightCoords[1] = result; /*0x70b0dd*/
        this->lastSightCoords[2] = this->location[2]; /*0x70b0e3*/
        if ( !v7 ) /*0x70b0e6*/
          return result; /*0x70b0e6*/
        if ( !v21 || !v22 ) /*0x70b0fa*/
        {
          v10 = this->location[1]; /*0x70b13c*/
          v11 = this->location[2]; /*0x70b13f*/
          v16 = *location; /*0x70b142*/
          v17 = v10; /*0x70b14c*/
          v18 = v11; /*0x70b156*/
          return MapClass::RevealArea1((MapClass *)&DataGlobal_87F7E8, &v16, v7, this->owner, v19, v20, 0, 1, 0); /*0x70b17b*/
        }
        goto LABEL_26; /*0x70b0fa*/
      }
      (*((unsigned char *)&(result))) = v21; /*0x70b17e*/
      if ( v21 ) /*0x70b184*/
      {
        if ( v7 ) /*0x70b188*/
        {
          result = (int)v22; /*0x70b18a*/
          if ( v22 ) /*0x70b190*/
          {
  LABEL_26:
            v12 = this->location[1]; /*0x70b192*/
            v16 = *location; /*0x70b197*/
            v13 = this->location[2]; /*0x70b19b*/
            v17 = v12; /*0x70b19e*/
            v18 = v13; /*0x70b1a8*/
            return MapClass::RevealArea1((MapClass *)&DataGlobal_87F7E8, &v16, v7, v22, v19, v20, 0, 1, 0); /*0x70b1c2*/
          }
        }
      }
    }
  }
  return result; /*0x70b131*/
}
} // namespace ra2::game

// 0x70B1D0
namespace ra2::game {
int TechnoClass::RevealAreaConditional()
{
  int result; // eax
  HouseClass *owner; // esi
  void *v3; // edx
  char v4; // [esp+8h] [ebp+4h]
  int v5; // [esp+Ch] [ebp+8h]
  char v6; // [esp+10h] [ebp+Ch]
  void *v7; // [esp+14h] [ebp+10h]

  (*((unsigned char *)&(result))) = this->isInPlayfield; /*0x70b1d0*/
  if ( (unsigned char)result ) /*0x70b1d9*/
  {
    owner = this->owner; /*0x70b1df*/
    result = owner->relatedTagsCapacity; /*0x70b1e5*/
    if ( !this->u32_3C2 ) /*0x70b1e8*/
    {
      if ( this->isChronosphereImmune ) /*0x70b1f2*/
      {
        result = this->v7; /*0x70b1fc*/
        this->isChronosphereImmune = 0; /*0x70b202*/
        if ( !result ) /*0x70b20b*/
          return result; /*0x70b20b*/
        if ( !v6 ) /*0x70b213*/
          return MapClass::RevealArea1( /*0x70b213*/
                   (MapClass *)&DataGlobal_87F7E8,
                   this->lastSightCoords,
                   result,
                   owner,
                   v4,
                   v5,
                   0,
                   1,
                   1);
        v3 = v7; /*0x70b215*/
        if ( !v7 ) /*0x70b21b*/
          return MapClass::RevealArea1( /*0x70b232*/
                   (MapClass *)&DataGlobal_87F7E8,
                   this->lastSightCoords,
                   result,
                   owner,
                   v4,
                   v5,
                   0,
                   1,
                   1);
        return MapClass::RevealArea1( /*0x70b21b*/
                 (MapClass *)&DataGlobal_87F7E8,
                 this->lastSightCoords,
                 result,
                 v3,
                 v4,
                 v5,
                 0,
                 1,
                 1);
      }
      (*((unsigned char *)&(result))) = v6; /*0x70b234*/
      if ( v6 ) /*0x70b23a*/
      {
        result = this->lastSightRange; /*0x70b23c*/
        if ( result ) /*0x70b244*/
        {
          v3 = v7; /*0x70b246*/
          if ( v7 ) /*0x70b24c*/
            return MapClass::RevealArea1( /*0x70b24e*/
                     (MapClass *)&DataGlobal_87F7E8,
                     this->lastSightCoords,
                     result,
                     v3,
                     v4,
                     v5,
                     0,
                     1,
                     1);
        }
      }
    }
  }
  return result; /*0x70b271*/
}
} // namespace ra2::game

// 0x70B280
namespace ra2::game {
int TechnoClass::ComputeAimVector()
{

  int result; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // ebx
  float v11; // eax
  double v14; // [esp+0h] [ebp-60h]
  double v15; // [esp+0h] [ebp-60h]
  double v16; // [esp+0h] [ebp-60h]
  float v18; // [esp+18h] [ebp-48h]
  double v20; // [esp+28h] [ebp-38h] BYREF
  float v21; // [esp+30h] [ebp-30h]
  double v22; // [esp+3Ch] [ebp-24h]
  float v23; // [esp+44h] [ebp-1Ch]
  double v24; // [esp+48h] [ebp-18h]
  float v25; // [esp+50h] [ebp-10h]
  unsigned int *v27; // [esp+68h] [ebp+8h]
  char v29; // [esp+70h] [ebp+10h]

  result = (*((int (**)(TechnoClass *))this->vfptr + 33))(this); /*0x70b290*/
  if ( result->u32_B0 ) /*0x70b296*/
  {
    result = *(unsigned int *)((*((int (**)(TechnoClass *))this->vfptr + 33))(this) + 176); /*0x70b2ae*/
    if ( !*(unsigned char *)result ) /*0x70b2b4*/
    {
      v3 = this->location[1]; /*0x70b2ce*/
      LODWORD(v20) = this->location[0] - *v27; /*0x70b2d1*/
      __asm { fild dword ptr [esp+58h+var_38] } /*0x70b2d5*/
      v4 = this->location[2]; /*0x70b2dc*/
      v5 = v27[1] - v3; /*0x70b2df*/
      v6 = v27[2]; /*0x70b2e1*/
      __asm { fstp [esp+58h+var_24] } /*0x70b2e4*/
      LODWORD(v20) = v5; /*0x70b2e8*/
      __asm { fild dword ptr [esp+58h+var_38] } /*0x70b2ee*/
      LODWORD(v20) = v4 - v6; /*0x70b2f2*/
      __asm /*0x70b302*/
      {
        fstp [esp+58h+var_20]
        fild dword ptr [esp+58h+var_38]
      }
      v24 = v22; /*0x70b315*/
      __asm { fstp [esp+5Ch+var_1C] } /*0x70b319*/
      v25 = v23; /*0x70b321*/
      LODWORD(v20) = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v20) - 0x3FFF; /*0x70b333*/
      __asm /*0x70b337*/
      {
        fild dword ptr [esp+58h+var_38]
        fmul ds:dbl_7E2810
        fstp [esp+58h+var_38]
      }
      v7 = HIDWORD(v20); /*0x70b345*/
      v8 = LODWORD(v20); /*0x70b34d*/
      Math::SinCos(v20); /*0x70b34f*/
      __asm { fstp [esp+60h+var_3C] } /*0x70b354*/
      Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v7, v8))); /*0x70b35a*/
      __asm /*0x70b35f*/
      {
        fstp [esp+68h+var_C]
        fld [esp+68h+var_1C]
        fld [esp+68h+var_20]
        fld [esp+68h+var_24]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
      }
      __asm
      {
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+60h+var_60]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v14); /*0x70b38b*/
      __asm /*0x70b390*/
      {
        fst dword ptr [esp+60h+var_38]
        fmul ds:flt_7F4E58
      }
      __asm
      {
        fsubr ds:flt_7F4E54
        fmul [ebp+arg_4]
        fstp qword ptr [esp+58h+var_48]
      }
      result = (*((int (**)(TechnoClass *))this->vfptr + 33))(this); /*0x70b3ae*/
      __asm /*0x70b3b4*/
      {
        fld qword ptr [esp+58h+var_48]
        fdiv qword ptr [eax+370h]
        fstp [esp+58h+var_48]
        fld dword ptr [esp+58h+var_38]
        fabs
        fcomp ds:dbl_7EC0B0
        fnstsw ax
      }
      if ( (result & 0x100) == 0 ) /*0x70b3d3*/
      {
        __asm /*0x70b3d9*/
        {
          fld [esp+58h+var_48]
          fcomp ds:flt_7F4E34
          fnstsw ax
        }
        if ( (result & 0x100) == 0 ) /*0x70b3e8*/
        {
          __asm /*0x70b3ee*/
          {
            fld [esp+58h+var_48]
            fcomp ds:flt_7F4E50
            fnstsw ax
          }
          if ( (_AX & 0x4100) == 0 ) /*0x70b3fd*/
            v18 = 0.050000001; /*0x70b3ff*/
          __asm /*0x70b407*/
          {
            fld [esp+58h+var_14]
            fmul [esp+58h+var_14]
            fld [esp+58h+var_18]
            fmul [esp+58h+var_18]
          }
          v25 = 0.0; /*0x70b41a*/
          __asm /*0x70b422*/
          {
            faddp st(1), st
            fstp [esp+60h+var_60]; double
          }
          Math::Sqrt(v15); /*0x70b427*/
          __asm { fcom ds:dbl_7E2800 } /*0x70b42c*/
          __asm { fnstsw ax }
          if ( (_AX & 0x4000) != 0 ) /*0x70b43a*/
          {
            v11 = v25; /*0x70b478*/
            v22 = v24; /*0x70b47c*/
            __asm { fstp st } /*0x70b480*/
          }
          else
          {
            __asm /*0x70b43c*/
            {
              fld [esp+58h+var_18]
              fdiv st, st(1)
              fstp dword ptr [esp+58h+var_38]
              fld [esp+58h+var_14]
              fdiv st, st(1)
            }
            __asm { fstp dword ptr [esp+58h+var_38+4] }
            __asm { fdivr ds:dbl_7E2800 }
            v22 = v20; /*0x70b462*/
            __asm { fstp [esp+58h+var_30] } /*0x70b466*/
            v11 = v21; /*0x70b46a*/
          }
          __asm /*0x70b486*/
          {
            fld [esp+58h+var_24]
            fmul [esp+58h+var_C]
            fld [esp+58h+var_20]
            fmul [esp+58h+var_3C]
          }
          v23 = v11; /*0x70b496*/
          __asm /*0x70b49d*/
          {
            faddp st(1), st
            fstp dword ptr [esp+60h+var_38]
            fld [esp+60h+var_1C]
            fmul [esp+60h+var_3C]
            fchs
            fstp [esp+60h+var_18]
            fld [esp+60h+var_1C]
            fmul [esp+60h+var_C]
            fstp [esp+60h+var_14]
            fld [esp+60h+var_24]
            fmul [esp+60h+var_3C]
            fld [esp+60h+var_20]
            fmul [esp+60h+var_C]
            fsubp st(1), st
            fld [esp+60h+var_14]
            fld [esp+60h+var_18]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+60h+var_60]; double
            fstp st
            fstp st
            fstp st
          }
          result = Math::Sqrt(v16); /*0x70b4f0*/
          __asm /*0x70b4f5*/
          {
            fld [esp+60h+var_C]
            fmul dword ptr [esp+60h+var_38]
            fld [esp+60h+var_3C]
            fmul st, st(2)
          }
          __asm
          {
            fsubp st(1), st
            fsub [esp+58h+var_24]
            fabs
            fcomp ds:dbl_7EC0A8
            fnstsw ax
          }
          if ( (result & 0x4100) == 0 ) /*0x70b519*/
            goto LABEL_12; /*0x70b519*/
          __asm /*0x70b51b*/
          {
            fld [esp+58h+var_C]
            fmul st, st(1)
            fld [esp+58h+var_3C]
            fmul dword ptr [esp+58h+var_38]
            faddp st(1), st
            fsub [esp+58h+var_20]
            fabs
            fcomp ds:dbl_7EC0A8
            fnstsw ax
          }
          if ( (result & 0x4100) == 0 ) /*0x70b53c*/
LABEL_12:
            __asm { fchs } /*0x70b53e*/
          LOBYTE(result) = v29; /*0x70b540*/
          __asm /*0x70b543*/
          {
            fld dword ptr [esp+58h+var_38]
            fmul [esp+58h+var_48]
          }
          if ( !v29 ) /*0x70b54d*/
            __asm { fmul ds:flt_7E5168 } /*0x70b54f*/
          __asm { fstp dword ptr [esi+334h] } /*0x70b555*/
          this->firingParticles = _ET1; /*0x70b555*/
          __asm /*0x70b55b*/
          {
            fmul [esp+58h+var_48]
            fchs
            fstp dword ptr [esi+330h]
          }
          this->auxParticles2 = _ET1; /*0x70b561*/
        }
      }
    }
  }
  return result; /*0x70b567*/

}
} // namespace ra2::game

// 0x70B570
namespace ra2::game {
int TechnoClass::UpdateBodyTilt()
{

  int result; // eax
  bool v3; // dl
  __int16 v4; // fps
  double v5; // st7
  char v6; // c0
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  int vfptr; // edx
  double v11; // st7
  double v12; // st7
  __int16 v13; // fps
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  bool v17; // cl
  double v18; // st7
  unsigned __int8 v20; // c0
  unsigned __int8 v21; // c3
  double v22; // st7
  double v23; // st7
  bool v24; // dl
  bool v25; // cl
  double v26; // st7
  double v27; // st7
  double v28; // st7
  __int16 v29; // fps
  double v30; // st7
  bool v31; // c0
  char v32; // c2
  bool v33; // c3
  float *v34; // eax
  int v35; // edx
  bool v36; // [esp+Ah] [ebp-Eh]
  bool v37; // [esp+Ah] [ebp-Eh]
  int railgunParticles_2; // [esp+Ch] [ebp-Ch]
  int v39; // [esp+Ch] [ebp-Ch]
  float v40; // [esp+10h] [ebp-8h]
  float v41; // [esp+14h] [ebp-4h] BYREF

  v3 = *&this->railgunParticles_d > 0.00002; /*0x70b58a*/
  v36 = *&this->railgunParticles_d < -0.00002; /*0x70b5aa*/
  if ( this->isSinking[0] ) /*0x70b5ae*/
  {
    v5 = *&this->auxParticles1; /*0x70b5c6*/
    if ( v6 ) /*0x70b5d1*/
      v5 = -v5; /*0x70b5d3*/
    v7 = v5 < 0.78539819; /*0x70b5d5*/
    v8 = 0; /*0x70b5d5*/
    v9 = v5 == 0.78539819; /*0x70b5d5*/
    LOWORD(result) = v4; /*0x70b5db*/
    if ( v5 < 0.78539819 ) /*0x70b5e0*/
    {
      result = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v41) >> 12) + 1) >> 1) /*0x70b5fe*/
             & 7;
      if ( result && result <= 5 ) /*0x70b606*/
        *&this->auxParticles1 = *&this->auxParticles1 + 0.01; /*0x70b619*/
      else
        *&this->auxParticles1 = *&this->auxParticles1 - 0.01; /*0x70b631*/
    }
    return result; /*0x70b624*/
  }
  if ( this->isCrashing[0] ) /*0x70b63d*/
  {
    vfptr = this->vfptr; /*0x70b655*/
    *&this->auxParticles1 = *&this->firingParticles + *&this->auxParticles1; /*0x70b659*/
    *&this->railgunParticles_d = *&this->auxParticles2 + *&this->railgunParticles_d; /*0x70b66b*/
    result = (*(int (**)(TechnoClass *))(vfptr + 132))(this); /*0x70b671*/
    if ( result->u8_D6A ) /*0x70b677*/
    {
      if ( *&this->auxParticles1 <= -0.78539819 ) /*0x70b694*/
        v11 = -0.78539819; /*0x70b69e*/
      else
        v11 = *&this->auxParticles1; /*0x70b696*/
      *&this->auxParticles1 = v11; /*0x70b6a4*/
      if ( *&this->railgunParticles_d <= -0.78539819 ) /*0x70b6bb*/
        v12 = -0.78539819; /*0x70b6c5*/
      else
        v12 = *&this->railgunParticles_d; /*0x70b6bd*/
      *&this->railgunParticles_d = v12; /*0x70b6cb*/
      v14 = v12 < 0.78539819; /*0x70b6d3*/
      v15 = 0; /*0x70b6d3*/
      v16 = v12 == 0.78539819; /*0x70b6d3*/
      LOWORD(result) = v13; /*0x70b6d9*/
      if ( v12 >= 0.78539819 ) /*0x70b6de*/
        *&this->railgunParticles_d = 0.78539819; /*0x70b6f4*/
      else
        *&this->railgunParticles_d = v12; /*0x70b6e0*/
    }
    return result; /*0x70b6eb*/
  }
  v17 = *&this->railgunParticles_d > 1.5707964; /*0x70b715*/
  if ( *&this->railgunParticles_d < -1.5707964 ) /*0x70b728*/
    v17 = 1; /*0x70b72a*/
  if ( *&this->auxParticles2 == 0.0 ) /*0x70b73d*/
  {
    this->railgunParticles_2 = 0; /*0x70b921*/
    goto LABEL_61; /*0x70b921*/
  }
  v18 = *&this->auxParticles2 + *&this->railgunParticles_d; /*0x70b749*/
  railgunParticles_2 = this->railgunParticles_2; /*0x70b755*/
  *&this->railgunParticles_d = v18; /*0x70b75f*/
  if ( !(v20 | v21) && !this->rockerLinkedUnit && !v17 && *(float *)&railgunParticles_2 < 0.78539819 ) /*0x70b787*/
  {
    this->railgunParticles_2 = 1061752795; /*0x70b78b*/
LABEL_33:
    this->auxParticles2 = 0; /*0x70b7cb*/
    goto LABEL_34; /*0x70b7cb*/
  }
  if ( v18 < -0.78539819 && !this->rockerLinkedUnit && !v17 && *(float *)&railgunParticles_2 > -0.78539819 ) /*0x70b7bf*/
  {
    this->railgunParticles_2 = -1085730853; /*0x70b7c1*/
    goto LABEL_33; /*0x70b7c1*/
  }
LABEL_34:
  v22 = *&this->auxParticles2; /*0x70b7d1*/
  if ( !v3 ) /*0x70b7e1*/
  {
    result = this->rockerLinkedUnit; /*0x70b882*/
    if ( v22 >= 0.0 ) /*0x70b888*/
    {
      if ( result ) /*0x70b8cf*/
      {
        if ( !v17 ) /*0x70b8d3*/
        {
          *&this->auxParticles2 = *(float *)&dword_8871E0[1].RadarEventColorSpeed * 0.0020000001 /*0x70b8ed*/
                                         + *&this->auxParticles2;
          goto LABEL_63; /*0x70b8f3*/
        }
      }
      else if ( !v17 ) /*0x70b8f7*/
      {
        *&this->auxParticles2 = *&this->auxParticles2 + 0.005000000237487257; /*0x70b919*/
        goto LABEL_63; /*0x70b91f*/
      }
    }
    else if ( result ) /*0x70b88c*/
    {
      if ( !v17 ) /*0x70b890*/
      {
        *&this->auxParticles2 = *(float *)&dword_8871E0[1].RadarEventColorSpeed * 0.0020000001 /*0x70b8aa*/
                                       + *&this->auxParticles2;
        goto LABEL_63; /*0x70b8b0*/
      }
    }
    else if ( !v17 ) /*0x70b8b7*/
    {
      *&this->auxParticles2 = *&this->auxParticles2 + 0.0020000001; /*0x70b8c5*/
      goto LABEL_63; /*0x70b8cb*/
    }
    *&this->auxParticles2 = *&this->auxParticles2 - 0.0020000001; /*0x70b905*/
    goto LABEL_63; /*0x70b90b*/
  }
  result = this->rockerLinkedUnit; /*0x70b7ea*/
  if ( v22 <= 0.0 ) /*0x70b7f0*/
  {
    if ( result ) /*0x70b851*/
    {
      if ( !v17 ) /*0x70b855*/
      {
        HIWORD(result) = HIWORD(dword_8871E0); /*0x70b857*/
        v23 = *(float *)&dword_8871E0[1].RadarEventColorSpeed; /*0x70b85c*/
        goto LABEL_39; /*0x70b862*/
      }
    }
    else if ( !v17 ) /*0x70b866*/
    {
      *&this->auxParticles2 = *&this->auxParticles2 - 0.005000000237487257; /*0x70b874*/
      goto LABEL_61; /*0x70b87a*/
    }
    goto LABEL_41; /*0x70b855*/
  }
  if ( !result ) /*0x70b7f4*/
  {
    if ( !v17 ) /*0x70b81f*/
    {
      *&this->auxParticles2 = *&this->auxParticles2 - 0.0020000001; /*0x70b844*/
      goto LABEL_61; /*0x70b84a*/
    }
    goto LABEL_41; /*0x70b81f*/
  }
  if ( v17 ) /*0x70b7f8*/
  {
LABEL_41:
    *&this->auxParticles2 = *&this->auxParticles2 + 0.0020000001; /*0x70b821*/
    goto LABEL_61; /*0x70b833*/
  }
  v23 = *(float *)&dword_8871E0[1].RadarEventColorSpeed; /*0x70b800*/
LABEL_39:
  *&this->auxParticles2 = *&this->auxParticles2 - v23 * 0.0020000001; /*0x70b806*/
LABEL_61:
  if ( v3 && *&this->railgunParticles_d < 0.00002 ) /*0x70b93c*/
    goto LABEL_65; /*0x70b93c*/
LABEL_63:
  if ( v36 && *&this->railgunParticles_d > -0.00002 ) /*0x70b955*/
  {
LABEL_65:
    this->auxParticles2 = 0; /*0x70b957*/
    this->railgunParticles_2 = 0; /*0x70b95d*/
  }
  v24 = *&this->auxParticles1 > 0.00002; /*0x70b963*/
  v37 = *&this->auxParticles1 < -0.00002; /*0x70b994*/
  v25 = *&this->auxParticles1 > 1.5707964; /*0x70b9ad*/
  if ( *&this->auxParticles1 < -1.5707964 ) /*0x70b9c0*/
    v25 = 1; /*0x70b9c2*/
  if ( *&this->firingParticles == 0.0 ) /*0x70b9d5*/
  {
    this->auxParticles1 = 0; /*0x70bbe1*/
    goto LABEL_110; /*0x70bbe1*/
  }
  v26 = *&this->firingParticles + *&this->auxParticles1; /*0x70b9e1*/
  v41 = *&this->auxParticles1; /*0x70b9ef*/
  v40 = v26; /*0x70b9f3*/
  *&this->auxParticles1 = v26; /*0x70b9f7*/
  v27 = 0.78539819; /*0x70b9fd*/
  if ( this && (this->abstractFlags & 4) != 0 && this->u32_6B5 ) /*0x70ba13*/
    v27 = 0.31415927; /*0x70ba1d*/
  if ( v40 > v27 && !this->rockerLinkedUnit && !v25 && v41 < v27 ) /*0x70ba47*/
  {
    *&this->auxParticles1 = v27; /*0x70ba49*/
LABEL_83:
    this->firingParticles = 0; /*0x70ba8b*/
    goto LABEL_84; /*0x70ba8b*/
  }
  *(float *)&v39 = -v27; /*0x70ba53*/
  if ( v40 < (double)*(float *)&v39 && !this->rockerLinkedUnit && !v25 && v41 > (double)*(float *)&v39 ) /*0x70ba7f*/
  {
    this->auxParticles1 = v39; /*0x70ba85*/
    goto LABEL_83; /*0x70ba85*/
  }
LABEL_84:
  v28 = *&this->firingParticles; /*0x70ba91*/
  if ( !v24 ) /*0x70baa1*/
  {
    result = this->rockerLinkedUnit; /*0x70bb57*/
    if ( v28 >= 0.0 ) /*0x70bb5d*/
    {
      if ( result ) /*0x70bb8f*/
      {
        if ( !v25 ) /*0x70bb93*/
        {
          *&this->firingParticles = *(float *)&dword_8871E0[1].RadarEventColorSpeed * 0.0020000001 /*0x70bbad*/
                                           + *&this->firingParticles;
          goto LABEL_112; /*0x70bbb3*/
        }
        goto LABEL_107; /*0x70bb93*/
      }
      if ( v25 ) /*0x70bbb7*/
        goto LABEL_107; /*0x70bbb7*/
    }
    else
    {
      if ( result ) /*0x70bb61*/
      {
        if ( !v25 ) /*0x70bb65*/
        {
          *&this->firingParticles = *(float *)&dword_8871E0[1].RadarEventColorSpeed * 0.0020000001 /*0x70bb7f*/
                                           + *&this->firingParticles;
          goto LABEL_112; /*0x70bb85*/
        }
LABEL_107:
        *&this->firingParticles = *&this->firingParticles - 0.0020000001; /*0x70bbb9*/
        goto LABEL_112; /*0x70bbcb*/
      }
      if ( v25 ) /*0x70bb89*/
        goto LABEL_107; /*0x70bb89*/
    }
    *&this->firingParticles = *&this->firingParticles + 0.005000000237487257; /*0x70bbd9*/
    goto LABEL_112; /*0x70bbdf*/
  }
  result = this->rockerLinkedUnit; /*0x70baaa*/
  if ( v28 <= 0.0 ) /*0x70bab0*/
  {
    if ( result ) /*0x70bafa*/
    {
      if ( !v25 ) /*0x70bafe*/
      {
        HIWORD(result) = HIWORD(dword_8871E0); /*0x70bb00*/
        *&this->firingParticles = *&this->firingParticles /*0x70bb17*/
                                         - *(float *)&dword_8871E0[1].RadarEventColorSpeed * 0.0020000001;
        goto LABEL_110; /*0x70bb1d*/
      }
LABEL_95:
      *&this->firingParticles = *&this->firingParticles + 0.0020000001; /*0x70bb26*/
      goto LABEL_110; /*0x70bb38*/
    }
    if ( v25 ) /*0x70bb24*/
      goto LABEL_95; /*0x70bb24*/
LABEL_96:
    *&this->firingParticles = *&this->firingParticles - 0.005000000237487257; /*0x70bb3d*/
    goto LABEL_110; /*0x70bb4f*/
  }
  if ( !result ) /*0x70bab4*/
  {
    if ( v25 ) /*0x70badf*/
    {
      *&this->firingParticles = *&this->firingParticles + 0.0020000001; /*0x70baed*/
      goto LABEL_110; /*0x70baf3*/
    }
    goto LABEL_96; /*0x70badf*/
  }
  if ( v25 ) /*0x70bab8*/
    goto LABEL_95; /*0x70bab8*/
  *&this->firingParticles = *&this->firingParticles /*0x70bad2*/
                                   - *(float *)&dword_8871E0[1].RadarEventColorSpeed * 0.0020000001;
LABEL_110:
  if ( v24 && *&this->auxParticles1 < 0.00002 ) /*0x70bbfc*/
    goto LABEL_114; /*0x70bbfc*/
LABEL_112:
  if ( v37 && *&this->auxParticles1 > -0.00002 ) /*0x70bc15*/
  {
LABEL_114:
    this->firingParticles = 0; /*0x70bc17*/
    this->auxParticles1 = 0; /*0x70bc1d*/
  }
  if ( *&this->u32_18B8 > 3.1415927 /*0x70bc6d*/
    || *(float *)&this->railgunParticles_2 < -3.1415927
    || *&this->auxParticles1 > 3.1415927
    || (v30 = *&this->auxParticles1,
        v31 = v30 < -3.1415927,
        v32 = 0,
        v33 = v30 == -3.1415927,
        LOWORD(result) = v29,
        v30 < -3.1415927) )
  {
    v34 = (float *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x70bc73*/
    v35 = this->vfptr; /*0x70bc84*/
    v41 = v34[40]; /*0x70bc87*/
    return (*(int (**)(TechnoClass *, float *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v35 + 364))( /*0x70bc9e*/
             this,
             &v41,
             0,
             *&dword_8871E0->u32_FA8,
             0,
             1,
             0,
             0);
  }
  return result; /*0x70b61f*/

}
} // namespace ra2::game

// 0x70BCB0
namespace ra2::game {
CoordStruct* TechnoClass::GetTargetCoords(CoordStruct* pCrd) const
{
  double v2; // st7
  int v3; // ebp
  int v5; // edi
  AbstractClass *target; // ecx
  int *v7; // eax
  AbstractClass *v8; // ecx
  AbstractClass *v9; // ebx
  TechnoClass **v10; // eax
  TechnoClass *v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  void *v16; // [esp+10h] [ebp-30h]
  int WeaponRange; // [esp+10h] [ebp-30h]
  int v18; // [esp+10h] [ebp-30h]
  int v20; // [esp+18h] [ebp-28h]
  int v21; // [esp+18h] [ebp-28h]
  double v22; // [esp+18h] [ebp-28h]
  double v23; // [esp+20h] [ebp-20h] BYREF
  double v24; // [esp+28h] [ebp-18h] BYREF
  int v25; // [esp+34h] [ebp-Ch]
  int v26; // [esp+38h] [ebp-8h]

  v3 = g_BuildingLoadQueue_Array.VoxelCaches[4]; /*0x70bcba*/
  v5 = g_BuildingLoadQueue_Array.VoxelCaches[5]; /*0x70bcc4*/
  target = this->target; /*0x70bcca*/
  v25 = g_BuildingLoadQueue_Array.VoxelCaches[3]; /*0x70bcd0*/
  if ( target ) /*0x70bcd6*/
  {
    v7 = (int *)(*((int (__thiscall **)(AbstractClass *, double *))target->vfptr + 22))(target, &v24); /*0x70bce3*/
    v25 = *v7; /*0x70bce8*/
    v8 = this->target; /*0x70bcec*/
    v3 = v7[1]; /*0x70bcf2*/
    v5 = v7[2]; /*0x70bcf7*/
    v26 = v3; /*0x70bcfa*/
    if ( v8 ) /*0x70bcfe*/
    {
      if ( (*((int (__thiscall **)(AbstractClass *))v8->vfptr + 11))(v8) == 1 ) /*0x70bd0c*/
      {
        v9 = this->target; /*0x70bd12*/
        if ( v9 ) /*0x70bd1a*/
        {
          if ( !v9[45].NeedsSaveOrLink ) /*0x70bd20*/
            sub_7DC720(-2147467261); /*0x70bd2f*/
          if ( (*(uint8_t (__stdcall **)(void *))(*(unsigned int *)v9[45].NeedsSaveOrLink + 16))(v9[45].NeedsSaveOrLink) ) /*0x70bd3d*/
          {
            v20 = (*((int (__thiscall **)(AbstractClass *))v9->vfptr + 334))(v9); /*0x70bd52*/
            v16 = (void *)ObjectClass::DistanceTo((ObjectClass *)this, (int)this->target); /*0x70bd68*/
            v10 = (TechnoClass **)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 253))(this); /*0x70bd6c*/
            if ( v10 ) /*0x70bd74*/
            {
              v11 = *v10; /*0x70bd7a*/
              if ( *v10 ) /*0x70bd7a*/
              {
                __asm { fild [esp+40h+var_30] } /*0x70bd84*/
                __asm { fstp qword ptr [esp+44h+var_20] }
                WeaponRange = TechnoClass::GetWeaponRange(v11, v16); /*0x70bd96*/
                __asm /*0x70bd9a*/
                {
                  fild [esp+40h+var_30]
                  fmul ds:dbl_7F4E80
                  fdivr qword ptr [esp+40h+var_20]
                  fimul dword ptr [esp+40h+var_28]
                }
                (*((unsigned short *)&(v12))) = Math::RoundToInt(v2); /*0x70bdac*/
                v18 = v12; /*0x70bdb5*/
                v21 = *(int16_t *)ProgressTimer::GetValue((ProgressTimer *)&v9[25].vfptr1, &v23) - 0x3FFF; /*0x70bdce*/
                __asm /*0x70bdd2*/
                {
                  fild dword ptr [esp+40h+var_28]
                  fmul ds:dbl_7E2810
                  fstp [esp+40h+var_28]
                  fild [esp+40h+var_30]
                }
                __asm
                {
                  fstp qword ptr [esp+48h+var_30]
                  fild [esp+48h+var_8]
                  fstp [esp+48h+var_18]
                }
                Math::SinCos(v22); /*0x70bdfa*/
                __asm /*0x70bdff*/
                {
                  fmul qword ptr [esp+48h+var_30]
                  fsubr [esp+48h+var_18]
                }
                (*((unsigned short *)&(v13))) = Math::RoundToInt(v2); /*0x70be07*/
                v3 = v13; /*0x70be0e*/
                Math::ArcTan2(v22); /*0x70be10*/
                __asm { fmul qword ptr [esp+50h+var_30] } /*0x70be15*/
                __asm { fiadd [esp+40h+var_C] }
                (*((unsigned short *)&(v14))) = Math::RoundToInt(v2); /*0x70be20*/
                v25 = v14; /*0x70be25*/
              }
            }
          }
        }
      }
    }
  }
  *pCrd = v25; /*0x70be33*/
  pCrd[1] = v3; /*0x70be35*/
  pCrd[2] = v5; /*0x70be38*/
  return pCrd; /*0x70be3b*/
}
} // namespace ra2::game

// 0x70BE50
namespace ra2::game {
int TechnoClass::CalcOffsetFacing() const
{
  int v2; // edi
  int v3; // eax

  v2 = (*((int (__stdcall **)(void **))this->vfptr1 + 4))(&this->vfptr1); /*0x70be64*/
  (*((unsigned short *)&(v3))) = Math::RoundToInt(this->warpFactor); /*0x70be66*/
  return (v2 + v3) % 400; /*0x70be75*/
}
} // namespace ra2::game

// 0x70BE80
namespace ra2::game {
int TechnoClass::ShouldSelfHealOneStep() const
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // et2
  int health; // edi

  if ( *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3348) /*0x70bee9*/
    || ((uint8_t)Audio::IsMediumVolume(this->veterancy)
     || (result = Audio::IsLoud(this->veterancy), (unsigned char)result))
    && ((v3 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this),
         (uint8_t)Audio::IsMediumVolume(this->veterancy))
     && *(unsigned char *)(v3 + 677)
     || (result = Audio::IsLoud(this->veterancy), (unsigned char)result) && (*(unsigned char *)(v3 + 677) || *(unsigned char *)(v3 + 695))) )
  {
    (*((unsigned short *)&(v4))) = Math::RoundToInt(*(double *)(*(unsigned int *)&g_RulesClass_Instance + 5856) * 900.0); /*0x70bf0a*/
    v5 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] % v4; /*0x70bf17*/
    result = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] / v4; /*0x70bf17*/
    if ( v5 ) /*0x70bf1b*/
    {
      (*((unsigned char *)&(result))) = 0; /*0x70bf1f*/
    }
    else
    {
      health = this->health; /*0x70bf25*/
      result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70bf2a*/
      (*((unsigned char *)&(result))) = health != result->u32_A0 && health != 0; /*0x70bf3a*/
    }
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x70bef5*/
  }
  return result; /*0x70bef3*/
}
} // namespace ra2::game

// 0x70C610
namespace ra2::game {
int TechnoClass::SetFocus(int a2)
{

  this->focus = (AbstractClass *)a2; /*0x70c614*/
  return a2; /*0x70c61a*/

}
} // namespace ra2::game

// 0x70C620
namespace ra2::game {
int TechnoClass::CheckCliffTransition() const
{
  int v2; // edi
  int (__thiscall **vtable0)(TechnoClass *, unsigned char *); // eax
  unsigned int *v4; // eax
  int v6; // [esp+8h] [ebp-14h] BYREF
  unsigned char v7[4]; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v8[0] = this->location[0]; /*0x70c633*/
  v8[1] = this->location[1]; /*0x70c645*/
  v8[2] = this->location[2]; /*0x70c651*/
  v2 = *Terrain::ClimbCheck(&v6, v8); /*0x70c65a*/
  vtable0 = (int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr; /*0x70c65c*/
  v6 = v2; /*0x70c662*/
  v4 = vtable0->airstrikeTintTimer(this, v7); /*0x70c669*/
  return (((unsigned int)(unsigned short)(v2)) | ((unsigned int)(unsigned short)((*(((unsigned short *)&(v6)) + 1))) << 16)) != *v4; /*0x70c672*/
}
} // namespace ra2::game

// 0x70CC90
namespace ra2::game {
int TechnoClass::RadarUpdateOn()
{
  int result; // eax

  BuildingClass::ProcessFogCellOccupancy( /*0x70cca7*/
    (int)&DataGlobal_87F7E8,
    (int)this,
    this->currentBurstCount,
    this->currentBarrelIndex);
  this->isRadarTracked = 1; /*0x70ccac*/
  return result; /*0x70ccb3*/
}
} // namespace ra2::game

// 0x70CCC0
namespace ra2::game {
int TechnoClass::RadarUpdateOff()
{
  int result; // eax

  BuildingClass::RemoveGapCellCoverage( /*0x70ccd7*/
    (int)&DataGlobal_87F7E8,
    (int)this,
    this->currentBurstCount,
    this->currentBarrelIndex);
  this->isRadarTracked = 0; /*0x70ccdc*/
  return result; /*0x70cce3*/
}
} // namespace ra2::game

// 0x70CCF0
namespace ra2::game {
int TechnoClass::RevealOwnCell()
{
  FogOfWar::RevealCell((int)&DataGlobal_87F7E8, &this->currentBurstCount); /*0x70ccfc*/
}
} // namespace ra2::game

// 0x70CD10
namespace ra2::game {
int TechnoClass::ComputeDamage()
{

  double v3; // st7
  unsigned int *v5; // ebx
  int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int *v22; // eax
  double *v23; // eax
  double v24; // st6
  int v25; // eax
  double v26; // st7
  int v27; // eax
  unsigned int *v28; // eax
  int v29; // edi
  int v30; // esi
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  unsigned int *v34; // esi
  int *v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // [esp+2Ch] [ebp-4Ch]
  int v43; // [esp+2Ch] [ebp-4Ch]
  double v44; // [esp+30h] [ebp-48h]
  double v45; // [esp+38h] [ebp-40h]
  double v46; // [esp+40h] [ebp-38h] BYREF
  double v47[2]; // [esp+50h] [ebp-28h] BYREF
  double v48; // [esp+60h] [ebp-18h]
  int v49; // [esp+68h] [ebp-10h]
  double v50; // [esp+70h] [ebp-8h]

  v5 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x70cd29*/
  if ( !(*(int (**)(int *))(*a2 + 136))(a2) ) /*0x70cd2f*/
    return 0.0; /*0x70cd39*/
  if ( *(unsigned char *)&this->owner->hasThreatNode ) /*0x70cd4e*/
  {
    v7 = v5[179]; /*0x70cd5e*/
    v8 = v5[180]; /*0x70cd64*/
    LODWORD(v47[0]) = v5[178]; /*0x70cd6a*/
    v9 = v5[181]; /*0x70cd6e*/
    HIDWORD(v47[0]) = v7; /*0x70cd74*/
    v45 = COERCE_DOUBLE(__PAIR64__(v9, v8)); /*0x70cd7e*/
    v10 = v5[183]; /*0x70cd82*/
    v11 = v5[184]; /*0x70cd8c*/
    LODWORD(v46) = v5[182]; /*0x70cd92*/
    v12 = v5[185]; /*0x70cd96*/
    HIDWORD(v46) = v10; /*0x70cd9c*/
    v13 = v5[186]; /*0x70cda0*/
    v48 = COERCE_DOUBLE(__PAIR64__(v12, v11)); /*0x70cda6*/
    v50 = COERCE_DOUBLE(__PAIR64__(v5[187], v13)); /*0x70cdb4*/
  }
  else
  {
    v14 = *&dword_8871E0->u32_106C; /*0x70cdc9*/
    LODWORD(v47[0]) = *&dword_8871E0->q1068; /*0x70cdcf*/
    v15 = *&dword_8871E0->u32_1070; /*0x70cdd3*/
    HIDWORD(v47[0]) = v14; /*0x70cdd9*/
    LODWORD(v45) = v15; /*0x70cde3*/
    HIDWORD(v45) = *&dword_8871E0->q1074; /*0x70cded*/
    v46 = *&dword_8871E0->q1078; /*0x70cdf7*/
    v16 = *&dword_8871E0->q1084; /*0x70ce05*/
    LODWORD(v48) = *&dword_8871E0->u32_1080; /*0x70ce0b*/
    v17 = *&dword_8871E0->q1088; /*0x70ce0f*/
    v18 = *&dword_8871E0->u32_108C; /*0x70ce15*/
    HIDWORD(v48) = v16; /*0x70ce1b*/
    v50 = COERCE_DOUBLE(__PAIR64__(v18, v17)); /*0x70ce1f*/
  }
  v19 = (*(int (**)(TechnoClass *, int *))&this->vfptr->bunkerLinkedUnit)(this, a2); /*0x70ce2c*/
  v42 = *(unsigned int *)(*(int (**)(TechnoClass *, int))&this->vfptr->barrelRecoil)(this, v19); /*0x70ce43*/
  v44 = 0.0; /*0x70ce47*/
  v20 = (*(int (**)(int *))(*a2 + 44))(a2); /*0x70ce57*/
  if ( (v20 == 6 || v20 == 15 || v20 == 1 || v20 == 2) && a2 ) /*0x70ce74*/
  {
    v21 = (*(int (__usercall **)@<eax>(int *@<ecx>, TechnoClass *))(*a2 + 740))(a2, this); /*0x70ce7f*/
    v22 = *(unsigned int **)(*(int (**)(int *, int))(*a2 + 1016))(a2, v21); /*0x70ce90*/
    if ( v22 ) /*0x70ce94*/
    {
      v23 = (double *)v22[43]; /*0x70ce96*/
      if ( v23 ) /*0x70ce9e*/
      {
        if ( (TechnoClass *)a2[173] == this ) /*0x70cea6*/
          v3 = -(v45 * v23[v5[39] + 20]); /*0x70ceb9*/
        else
          v3 = v45 * v23[v5[39] + 20]; /*0x70cec7*/
        v44 = v3; /*0x70cece*/
      }
    }
    v24 = v46 * *(double *)((*(int (**)(int *))(*a2 + 132))(a2) + 704) + v44; /*0x70ceec*/
    v25 = *(unsigned int *)&this->owner->enemyHouseIndex; /*0x70cef0*/
    v44 = v24; /*0x70cef9*/
    if ( v25 != -1 && v25 == *(unsigned int *)(a2[135] + 48) ) /*0x70cf08*/
      v44 = v24 + *&dword_8871E0->u32_1090; /*0x70cf19*/
  }
  if ( v42 && *(unsigned int *)(v42 + 172) ) /*0x70cf25*/
    v44 = v47[0] /*0x70cf54*/
        * *(double *)(*(unsigned int *)(v42 + 172)
                    + 8 * *(unsigned int *)((*(int (**)(int *))(*a2 + 136))(a2) + 156)
                    + 160)
        + v44;
  BuildingClass::GetHealthRatio((BuildingClass *)a2); /*0x70cf5a*/
  v26 = v3 * v48 + v44; /*0x70cf65*/
  if ( v42 ) /*0x70cf6d*/
    v27 = *(unsigned int *)(v42 + 180); /*0x70cf6f*/
  else
    v27 = *(unsigned int *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 1464); /*0x70cf81*/
  v43 = v27 / 256; /*0x70cf9c*/
  if ( *a3 == *(unsigned int *)&stru_B0EA70.__pad_1C[4] /*0x70cfbc*/
    && a3[1] == *(unsigned int *)&stru_B0EA70.__pad_1C[8]
    && a3[2] == *(unsigned int *)&stru_B0EA70.__pad_1C[12] )
  {
    v34 = (unsigned int *)(*(int (**)(int *, double *))(*a2 + 72))(a2, v47); /*0x70d031*/
    v35 = (int *)(*(int (**)(TechnoClass *, double *))&this->vfptr->u32_48)(this, &v46); /*0x70d03a*/
    v36 = *v35; /*0x70d03d*/
    v37 = v35[1]; /*0x70d041*/
    v38 = v34[1]; /*0x70d044*/
    v39 = v35[2]; /*0x70d047*/
    LODWORD(v48) = v36 - *v34; /*0x70d04c*/
    v40 = v39 - v34[2]; /*0x70d055*/
    HIDWORD(v48) = v37 - v38; /*0x70d057*/
    v49 = v40; /*0x70d05b*/
    Math::Sqrt( /*0x70d087*/
      (double)SLODWORD(v48) * (double)SLODWORD(v48)
    + (double)v40 * (double)v40
    + (double)(v37 - v38) * (double)(v37 - v38));
    LOWORD(v41) = Math::RoundToInt(v26); /*0x70d08f*/
    v33 = v41 / 256; /*0x70d09d*/
  }
  else
  {
    v28 = (unsigned int *)(*(int (**)(int *, double *))(*a2 + 72))(a2, v47); /*0x70cfc7*/
    v29 = v28[1]; /*0x70cfce*/
    v30 = v28[2]; /*0x70cfd1*/
    v31 = a3[1]; /*0x70cfd6*/
    LODWORD(v48) = *a3 - *v28; /*0x70cfd9*/
    v32 = a3[2] - v30; /*0x70cfe2*/
    HIDWORD(v48) = v31 - v29; /*0x70cfe4*/
    v49 = v32; /*0x70cfe8*/
    Math::Sqrt( /*0x70d014*/
      (double)SLODWORD(v48) * (double)SLODWORD(v48)
    + (double)v32 * (double)v32
    + (double)(v31 - v29) * (double)(v31 - v29));
    LOWORD(v33) = Math::RoundToInt(v26); /*0x70d01c*/
  }
  return (double)((v33 - v43) & ((v33 - v43 < 0) - 1)) * v50 + v26 + 100000.0; /*0x70cd3f*/

}
} // namespace ra2::game

// 0x70D190
namespace ra2::game {
int TechnoClass::GetRangeModifier() const
{
  if ( (this->flashing[0] & 2) == 2 )
    return a2 <= 1500 ? 2000 : 500;
  else
    return a2; /*0x70d1ba*/
}
} // namespace ra2::game

// 0x70D1D0
namespace ra2::game {
int TechnoClass::ShouldScanArea() const
{

  unsigned int *v4; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // ecx
  int v8; // edx
  char v9; // bl
  char v10; // [esp+12h] [ebp-16h]
  char v11; // [esp+13h] [ebp-15h]
  unsigned __int16 *v12; // [esp+14h] [ebp-14h]
  __int16 v13[2]; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  if ( *(unsigned char *)((*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this) + 3226) /*0x70d20b*/
    || this->isSinking[0]
    || !this->isAliveFlag[0]
    || this->inLimbo[0] )
  {
    return 0; /*0x70d20b*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x70d21f*/
    return this->isDiscoveredByCurrentPlayer[0] != 0; /*0x70d23a*/
  v4 = (unsigned int *)(*(int (**)(TechnoClass *, int *))&this->vfptr->u32_48)(this, &v14); /*0x70d246*/
  LOWORD(v12) = *v4 / 256; /*0x70d25b*/
  HIWORD(v12) = v4[1] / 256; /*0x70d273*/
  *(unsigned int *)v13 = v12; /*0x70d27c*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v13, 1) ) /*0x70d286*/
    return 0; /*0x70d40a*/
  v5 = (*(int (**)(TechnoClass *))&this->vfptr->airstrikeTintStage_2)(this); /*0x70d2a3*/
  if ( !(unsigned __int8)Audio::IsMediumVolume(&this->veterancy) && !(unsigned __int8)Audio::IsLoud(&this->veterancy) ) /*0x70d2b9*/
    goto LABEL_17; /*0x70d2b9*/
  v6 = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x70d2c7*/
  if ( !(unsigned __int8)Audio::IsMediumVolume(&this->veterancy) || !*(unsigned char *)(v6 + 679) ) /*0x70d2d2*/
  {
    if ( (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(unsigned char *)(v6 + 679) || *(unsigned char *)(v6 + 697)) ) /*0x70d2f8*/
    {
      v10 = 1; /*0x70d302*/
      goto LABEL_18; /*0x70d307*/
    }
LABEL_17:
    v10 = 0; /*0x70d309*/
    goto LABEL_18; /*0x70d309*/
  }
  v10 = 1; /*0x70d2dc*/
LABEL_18:
  v14 = this->location[0]; /*0x70d30e*/
  v15 = this->location[1]; /*0x70d329*/
  v16 = this->location[2]; /*0x70d330*/
  if ( !(unsigned __int8)Cell::IsPassable(&v14) || (v11 = 1, !g_hWnd) ) /*0x70d349*/
    v11 = 0; /*0x70d34b*/
  if ( (dword_A8B230->vfptr & 0x1000) != 0 /*0x70d37b*/
    && (v7 = this->location[1],
        v8 = this->location[2],
        v14 = this->location[0],
        v15 = v7,
        v16 = v8,
        (unsigned __int8)Game::Stub3((int)&v14)) )
  {
    v9 = 1; /*0x70d384*/
  }
  else
  {
    v9 = 0; /*0x70d3df*/
    if ( this->cloakState != 2 && v5 >= -20 && !v10 && !v11 ) /*0x70d3f9*/
      return 1; /*0x70d404*/
  }
  if ( !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->railgunParticles_d)(this) ) /*0x70d392*/
    return 0; /*0x70d392*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3)) /*0x70d3bc*/
    && !v10
    && !v9
    && !v11 )
  {
    *a2 = (v5 < -20) + 1; /*0x70d3cb*/
  }
  return 1; /*0x70d22e*/

}
} // namespace ra2::game

// 0x70D420
namespace ra2::game {
int TechnoClass::IsPlayerCellPassable() const
{
  int result; // eax
  unsigned int *v2; // eax
  CellClass *v3; // eax
  unsigned char v4[12]; // [esp+0h] [ebp-Ch] BYREF

  result = (int)dword_A83D4C; /*0x70d420*/
  if ( dword_A83D4C ) /*0x70d42a*/
  {
    v2 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v4); /*0x70d433*/
    v3 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v2); /*0x70d43c*/
    return Cell::IsPassableOffset((Cell *)v3, (int)dword_A83D4C->relatedTagsCount); /*0x70d44d*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x70d456*/
  }
  return result; /*0x70d452*/
}
} // namespace ra2::game

// 0x70D460
namespace ra2::game {
int TechnoClass::IsCellPassableFor() const
{
  unsigned int *v1; // eax
  CellClass *v2; // eax
  int result; // eax
  unsigned char v4[12]; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+14h] [ebp+4h]

  if ( v5 ) /*0x70d46a*/
  {
    v1 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v4); /*0x70d473*/
    v2 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v1); /*0x70d47c*/
    return Cell::IsPassableOffset((Cell *)v2, *(unsigned int *)(v5 + 48)); /*0x70d487*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x70d493*/
  }
  return result; /*0x70d48c*/
}
} // namespace ra2::game

// 0x70D590
namespace ra2::game {
int TechnoClass::IsCloseEnoughToBuilding() const
{

  double v2; // st7
  unsigned __int8 *v4; // eax
  int target; // ecx
  int *location; // esi
  int v8; // ebx
  int v9; // edi
  unsigned int *v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  unsigned char v17[12]; // [esp+2Ch] [ebp-Ch] BYREF
  unsigned __int8 v18; // [esp+3Ch] [ebp+4h]

  v4 = *(unsigned __int8 **)(*(int (**)(TechnoClass *, int))&this->vfptr->barrelRecoil)(this, a2); /*0x70d5a6*/
  if ( !v4 ) /*0x70d5aa*/
    return 1; /*0x70d5ac*/
  v18 = v4[302]; /*0x70d5bf*/
  if ( !v18 ) /*0x70d5c3*/
  {
    target = this->target; /*0x70d5c9*/
    if ( target ) /*0x70d5d1*/
    {
      location = this->location; /*0x70d5d7*/
      v14 = this->location[0]; /*0x70d5e2*/
      v15 = this->location[1]; /*0x70d5e9*/
      v8 = this->location[2]; /*0x70d5f1*/
      v9 = *(unsigned int *)((*(int (**)(int, int *))(*(unsigned int *)target + 72))(target, &v14) + 8) - v8; /*0x70d5fd*/
      if ( v9 > 0 ) /*0x70d602*/
      {
        v10 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->target + 72))(this->target, v17); /*0x70d611*/
        v11 = v10[1]; /*0x70d614*/
        v12 = *location - *v10; /*0x70d620*/
        v15 = location[1] - v11; /*0x70d622*/
        v14 = v12; /*0x70d626*/
        v16 = location->Z; /*0x70d638*/
        Math::Sqrt((double)v12 * (double)v12 + (double)v15 * (double)v15); /*0x70d64d*/
        LOWORD(v13) = Math::RoundToInt(v2); /*0x70d655*/
        return v13 < v9; /*0x70d65e*/
      }
    }
  }
  return v18; /*0x70d5ae*/

}
} // namespace ra2::game

// 0x70D670
namespace ra2::game {
int TechnoClass::DecCounter()
{
  int result; // eax

  result = this->ammo; /*0x70d670*/
  if ( result > 0 ) /*0x70d678*/
    this->ammo = --result; /*0x70d67b*/
  return result; /*0x70d681*/
}
} // namespace ra2::game

// 0x70D690
namespace ra2::game {
int TechnoClass::ComputeCombatDamage()
{

  unsigned int *v3; // eax
  int vfptr; // edx
  int v5; // edi
  int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // ebp
  Function *UIObjectCOM; // eax
  char *v13; // ebx
  int *v14; // eax
  unsigned char v15[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x70d69a*/
  vfptr = this->vfptr; /*0x70d6a6*/
  if ( v3[838] ) /*0x70d6a0*/
  {
    v5 = *(unsigned int *)((*(int (**)(TechnoClass *))(vfptr + 132))(this) + 3352); /*0x70d6b4*/
    v6 = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x70d6be*/
LABEL_6:
    LOWORD(v8) = Math::RoundToInt((double)*(int *)(v5 + 164) * *(float *)(v6 + 3356)); /*0x70d6eb*/
    goto LABEL_8; /*0x70d6fc*/
  }
  v7 = (unsigned int *)(*(int (**)(TechnoClass *))(vfptr + 1012))(this); /*0x70d6c6*/
  if ( v7 && *v7 ) /*0x70d6d0*/
  {
    v5 = *(unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->isChronoImmuneFlag)(this); /*0x70d6e1*/
    v6 = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x70d6e5*/
    goto LABEL_6; /*0x70d6e5*/
  }
  v5 = *&dword_8871E0->u32_FDC; /*0x70d707*/
  v9 = (*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x70d70d*/
  LOWORD(v8) = Math::RoundToInt((double)*(int *)(v9 + 160) * 0.5); /*0x70d71f*/
LABEL_8:
  if ( !v5 ) /*0x70d728*/
    return 0; /*0x70d72c*/
  v11 = a2 + v8; /*0x70d747*/
  UIObjectCOM = (Function *)CreateUIObjectCOM( /*0x70d756*/
                              *(unsigned int *)(v5 + 160),
                              (int)this,
                              (int)this,
                              a2 + v8,
                              *(unsigned int *)(v5 + 172),
                              0,
                              *(unsigned char *)(v5 + 303));
  v13 = (char *)UIObjectCOM; /*0x70d75b*/
  if ( UIObjectCOM ) /*0x70d75f*/
  {
    Function::Method_46B260(UIObjectCOM, v5); /*0x70d764*/
    (*(void (**)(char *))(*(unsigned int *)v13 + 212))(v13); /*0x70d76d*/
    v14 = (int *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->u32_48)(this, v15); /*0x70d77c*/
    Warhead::ApplyDamage(v13, v14); /*0x70d782*/
    (*(void (**)(char *))(*(unsigned int *)v13 + 8))(v13); /*0x70d78a*/
  }
  return v11; /*0x70d72a*/

}
} // namespace ra2::game

// 0x70D7E0
namespace ra2::game {
int FootClass::ProcessEnterTransport()
{
  TechnoClass *queueUpToEnter; // edi
  bool v3; // zf
  void (__thiscall **v4)(FootClass *, int, int); // eax
  void (__thiscall **v6)(FootClass *, int, TechnoClass *); // eax
  unsigned char *vtable0; // eax

  queueUpToEnter = this->queueUpToEnter; /*0x70d7e4*/
  if ( !queueUpToEnter ) /*0x70d7ec*/
    return 0; /*0x70d7ec*/
  if ( !queueUpToEnter->isAliveFlag ) /*0x70d7fa*/
  {
    this->queueUpToEnter = 0; /*0x70d8d8*/
    return 0; /*0x70d8d8*/
  }
  if ( (queueUpToEnter->abstractFlags & 1) == 0 ) /*0x70d80c*/
    return 0; /*0x70d8e3*/
  if ( (*((int (__thiscall **)(FootClass *, int, TechnoClass *))this->vfptr + 158))(this, 2, this->queueUpToEnter) != 1 ) /*0x70d820*/
  {
    if ( (*((int (__thiscall **)(TechnoClass *))queueUpToEnter->vfptr + 11))(queueUpToEnter) == 6 /*0x70d8aa*/
      && (*((int (__thiscall **)(FootClass *))this->vfptr + 11))(this) == 2 )
    {
      vtable0 = queueUpToEnter[1].vfptr; /*0x70d8ac*/
      if ( vtable0[5802] ) /*0x70d8b2*/
      {
        if ( !vtable0[5801] ) /*0x70d8bc*/
        {
          (*((void (__thiscall **)(FootClass *, int, TechnoClass *))this->vfptr + 158))(this, 14, queueUpToEnter); /*0x70d8cd*/
          return 0; /*0x70d8d7*/
        }
      }
    }
    return 0; /*0x70d8c4*/
  }
  v3 = (*((int (__thiscall **)(FootClass *, int, TechnoClass *))this->vfptr + 158))(this, 15, queueUpToEnter) == 1; /*0x70d82f*/
  v4 = (void (__thiscall **)(FootClass *, int, int))this->vfptr; /*0x70d832*/
  if ( v3 ) /*0x70d834*/
  {
    v4[122](this, 7, 1); /*0x70d83c*/
    (*((void (__thiscall **)(FootClass *, TechnoClass *, int))this->vfptr + 288))(this, queueUpToEnter, 1); /*0x70d849*/
    this->queueUpToEnter = 0; /*0x70d84f*/
  }
  else
  {
    v4[122](this, -1, 0); /*0x70d864*/
    (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vfptr + 288))(this, 0, 1); /*0x70d872*/
    v6 = (void (__thiscall **)(FootClass *, int, TechnoClass *))this->vfptr; /*0x70d878*/
    this->queueUpToEnter = 0; /*0x70d87f*/
    v6[158](this, 3, queueUpToEnter); /*0x70d889*/
  }
  return 1; /*0x70d859*/
}
} // namespace ra2::game

// 0x70D8F0
namespace ra2::game {
int TechnoClass::PlaceAtCell()
{
  TechnoClass *queueUpToEnter; // eax
  void (__thiscall **vtable0)(TechnoClass *, void *, int); // edi
  void *v4; // eax
  int16_t v6[2]; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h] BYREF

  queueUpToEnter = this->queueUpToEnter; /*0x70d8f6*/
  if ( queueUpToEnter ) /*0x70d8fe*/
  {
    if ( (queueUpToEnter->abstractFlags & 1) != 0 && queueUpToEnter->isAliveFlag ) /*0x70d906*/
    {
      *(unsigned int *)v6 = *MapClass::FindPlacementCellsAlt((char *)this, &v7, (int)queueUpToEnter); /*0x70d926*/
      if ( v6[0] != *(unsigned short *)&g_BuildingLoadQueue_Array.ImageFile[24] /*0x70d938*/
        || v6[1] != *(unsigned short *)&g_BuildingLoadQueue_Array.ArcticArtInUse )
      {
        vtable0 = (void (__thiscall **)(TechnoClass *, void *, int))this->vfptr; /*0x70d93b*/
        v4 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v6); /*0x70d949*/
        vtable0[288](this, v4, 1); /*0x70d951*/
        (*((void (__thiscall **)(TechnoClass *, int, unsigned int))this->vfptr + 122))(this, 2, 0); /*0x70d95f*/
        return 1; /*0x70d96c*/
      }
    }
    else
    {
      this->queueUpToEnter = 0; /*0x70d96d*/
    }
  }
  return 0; /*0x70d968*/
}
} // namespace ra2::game

// 0x70D990
namespace ra2::game {
int TechnoClass::OnEnterCell()
{

  unsigned int *v2; // eax
  int currentBarrelIndex; // edx
  int *v4; // eax
  int vfptr; // eax
  char v6; // bl
  int *v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int *v14; // eax
  char v15; // al
  int result; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // et2
  int v21; // [esp+Ch] [ebp-2Ch] BYREF
  int currentBurstCount; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  int v24[2]; // [esp+18h] [ebp-20h] BYREF
  int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h] BYREF
  int v28; // [esp+2Ch] [ebp-Ch]
  int v29; // [esp+30h] [ebp-8h]
  char v30; // [esp+3Ch] [ebp+4h]
  unsigned __int16 *v31; // [esp+3Ch] [ebp+4h]

  if ( !this->isDiscoveredByCurrentPlayer[0] && !*(unsigned int *)&dword_A8B238 ) /*0x70d9a8*/
  {
    v2 = (unsigned int *)(*(int (**)(TechnoClass *, int *))&this->vfptr->u32_48)(this, &v27); /*0x70d9b3*/
    this->isDiscoveredByCurrentPlayer[0] = (unsigned __int8)Cell::IsPassable(v2) == 0; /*0x70d9c6*/
  }
  if ( (*(int (**)(TechnoClass *))&this->vfptr->fallRate)(this) != 6 || v30 ) /*0x70d9de*/
  {
    v27 = this->location[0]; /*0x70d9fc*/
    v28 = this->location[1]; /*0x70da08*/
    v29 = this->location[2]; /*0x70da19*/
    v4 = Coord::WorldToScreen((Coord *)&dword_87F7E8, v24, &v27, 0); /*0x70da1d*/
    currentBurstCount = *v4; /*0x70da24*/
    currentBarrelIndex = v4->m_ScrollY; /*0x70da28*/
  }
  else
  {
    currentBarrelIndex = this->currentBarrelIndex; /*0x70d9e6*/
    currentBurstCount = this->currentBurstCount; /*0x70d9ec*/
  }
  vfptr = this->vfptr; /*0x70da2b*/
  v23 = currentBarrelIndex; /*0x70da36*/
  v21 = 0; /*0x70da3a*/
  v6 = (*(int (**)(TechnoClass *, int *))(vfptr + 804))(this, &v21); /*0x70da4e*/
  v7 = (int *)(*(int (**)(int, int *))(*(unsigned int *)dword_880A04 + 120))(dword_880A04, &v27); /*0x70da57*/
  v8 = *v7; /*0x70da5a*/
  v9 = v7[1]; /*0x70da5c*/
  v25 = v7[2]; /*0x70da62*/
  v26 = v7[3]; /*0x70da6f*/
  if ( v21 && v6 && (!this || (this->abstractFlags & 4) == 0 || this->u32_684 < 0) ) /*0x70da93*/
  {
    v10 = this->location[0]; /*0x70da9d*/
    v11 = this->location[1]; /*0x70da9f*/
    v29 = this->location[2]; /*0x70daa5*/
    LOWORD(v31) = v10 / 256; /*0x70dab5*/
    HIWORD(v31) = v11 / 256; /*0x70dacd*/
    CreateTriggerClassIfFarEnough(5, (unsigned __int8)(v11 >> 31), (int)v31); /*0x70dad7*/
  }
  if ( currentBurstCount < v8 || currentBurstCount >= v8 + v25 ) /*0x70daec*/
  {
    v12 = v23; /*0x70db02*/
  }
  else
  {
    v12 = v23; /*0x70daee*/
    if ( v23 >= v9 && v23 < v26 + v9 ) /*0x70dafe*/
      goto LABEL_23; /*0x70dafe*/
  }
  if ( v6 ) /*0x70db08*/
  {
    v13 = (*(int (**)(TechnoClass *))&this->vfptr->airstrikeTintStage_d)(this); /*0x70db10*/
    v6 = Type::CheckAmbiguity((Type *)&dword_87F7E8, v13, 1); /*0x70db21*/
    if ( v6 ) /*0x70db25*/
    {
      v27 = this->location[0]; /*0x70db31*/
      v28 = this->location[1]; /*0x70db3d*/
      v29 = this->location[2]; /*0x70db49*/
      v14 = Coord::WorldToScreen((Coord *)&dword_87F7E8, v24, &v27, 1); /*0x70db52*/
      currentBurstCount = *v14; /*0x70db59*/
      v23 = v14->m_ScrollY; /*0x70db60*/
      v12 = v23; /*0x70db64*/
    }
  }
LABEL_23:
  if ( this->inLimbo[0] && v6 ) /*0x70db72*/
    v6 = 0; /*0x70db74*/
  if ( this->isRadarTracked[0] /*0x70db98*/
    && (currentBurstCount != this->currentBurstCount || v12 != this->currentBarrelIndex || !v6) )
  {
    (*(void (**)(TechnoClass *))&this->vfptr->q498)(this); /*0x70db9e*/
  }
  this->currentBurstCount = currentBurstCount; /*0x70dba8*/
  v15 = this->isRadarTracked[0]; /*0x70dbae*/
  this->currentBarrelIndex = v12; /*0x70dbb6*/
  if ( !v15 && v6 ) /*0x70dbc0*/
    (*(void (**)(TechnoClass *))&this->vfptr->q494)(this); /*0x70dbc6*/
  result = this->owner; /*0x70dbcc*/
  if ( result == *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x70dbdc*/
  {
    v17 = this->radarFlashTimer[0]; /*0x70dbde*/
    result = this->radarFlashTimer[2]; /*0x70dbe4*/
    if ( v17 != -1 ) /*0x70dbf3*/
    {
      if ( *(unsigned int *)&stru_A8E960.random[528] - v17 >= result ) /*0x70dbfb*/
        return result; /*0x70dbfb*/
      result -= *(unsigned int *)&stru_A8E960.random[528] - v17; /*0x70dbfd*/
    }
    if ( result > 0 ) /*0x70dc01*/
    {
      v18 = this->radarFlashTimer[0]; /*0x70dc03*/
      v19 = this->radarFlashTimer[2]; /*0x70dc09*/
      if ( v18 != -1 ) /*0x70dc12*/
      {
        if ( *(unsigned int *)&stru_A8E960.random[528] - v18 >= v19 ) /*0x70dc1a*/
          v19 = 0; /*0x70dc20*/
        else
          v19 -= *(unsigned int *)&stru_A8E960.random[528] - v18; /*0x70dc1c*/
      }
      v20 = v19 % dword_8871E0->InfantryHeadPop; /*0x70dc29*/
      result = v19 / dword_8871E0->InfantryHeadPop; /*0x70dc29*/
      if ( !v20 ) /*0x70dc31*/
        return (*(int (**)(TechnoClass *))&this->vfptr->isTurretRotateSoundPlaying)(this); /*0x70dc37*/
    }
  }
  return result; /*0x70dc3d*/

}
} // namespace ra2::game

// 0x70DC60
namespace ra2::game {
int TechnoClass::OwnerHasPower() const
{
  HouseClass *v1; // eax

  v1 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70dc62*/
  return HouseClass::HasPower(v1);
}
} // namespace ra2::game

// 0x70DD20
namespace ra2::game {
int TechnoClass::GetPoweredWeaponIndex() const
{
  HouseClass *v2; // eax

  v2 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70dd25*/
  if ( (uint8_t)HouseClass::HasPower(v2) ) /*0x70dd2d*/
    return this->currentWeaponSlot; /*0x70dd36*/
  else
    return 0; /*0x70dd3e*/
}
} // namespace ra2::game

// 0x70DD50
namespace ra2::game {
int TechnoClass::GetVt252Byte() const
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 252))(this); /*0x70dd52*/
  if ( result && (result = *(unsigned int *)result) != 0 ) /*0x70dd60*/
    (*((unsigned char *)&(result))) = result->u8_150; /*0x70dd62*/
  else
    (*((unsigned char *)&(result))) = 0; /*0x70dd69*/
  return result; /*0x70dd68*/
}
} // namespace ra2::game

// 0x70DDD0
namespace ra2::game {
int TechnoClass::SetSpread()
{
  int result; // eax

  result = a2; /*0x70ddd0*/
  if ( a2 >= 0 ) /*0x70ddd6*/
    this->gattlingStage = a2; /*0x70ddd8*/
  return result; /*0x70ddde*/
}
} // namespace ra2::game

// 0x70DE00
namespace ra2::game {
int TechnoClass::SetMember81()
{
  int result; // eax

  result = a2; /*0x70de00*/
  if ( a2 >= 0 ) /*0x70de06*/
    this->gattlingValue = a2; /*0x70de08*/
  return result; /*0x70de0e*/
}
} // namespace ra2::game

// 0x70DE40
namespace ra2::game {
int TechnoClass::GattlingValueRateDown_GattlingRateDownDelay()
{
  int result; // eax
  int v3; // edx

  result = a2; /*0x70de40*/
  v3 = this->gattlingValue - a2; /*0x70de4a*/
  this->gattlingValue = v3; /*0x70de4c*/
  if ( v3 < 0 || !a2 ) /*0x70de56*/
    this->gattlingValue = 0; /*0x70de58*/
  return result; /*0x70de62*/
}
} // namespace ra2::game

// 0x70DE70
namespace ra2::game {
int TechnoClass::GattlingRateUp_GattlingRateDownReset()
{

  int v3; // ebx
  int v4; // eax
  int v5; // edi
  unsigned int *v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v13; // [esp+10h] [ebp-10h]
  unsigned int v14[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = *(unsigned int *)((*(int (**)(float *))(*&this->displayProductionTo))(this) + 3288); /*0x70de81*/
  if ( (unsigned __int8)Audio::IsLoud(&this->initialOwner) ) /*0x70de8d*/
    v4 = *(unsigned int *)((*(int (**)(float *))(*&this->displayProductionTo))(this) + 4 * v3 + 3312); /*0x70dea0*/
  else
    v4 = *(unsigned int *)((*(int (**)(float *))(*&this->displayProductionTo))(this) + 4 * v3 + 3288); /*0x70deb3*/
  v13 = this->gattlingStage; /*0x70dec2*/
  if ( v13 < v4 ) /*0x70dec6*/
    this->gattlingStage += a2 * *(unsigned int *)((*(int (**)(float *))(*&this->displayProductionTo))(this) + 3340); /*0x70dee5*/
  v5 = this->currentRank; /*0x70deeb*/
  v6 = *(unsigned int **)(*(int (**)(float *, int))(*&this->u32_FE0))(this, 2 * v5); /*0x70deff*/
  AudioController::Stop(&this->deployAnim); /*0x70df07*/
  this->isUnusedGattlingSoundPlaying = 0; /*0x70df0e*/
  if ( v5 >= 0 && v5 < v3 - 1 )
  {
    v7 = (unsigned __int8)Audio::IsLoud(&this->initialOwner)
       ? *(unsigned int *)((*(int (**)(float *))(*&this->displayProductionTo))(this) + 4 * v5 + 3316)
       : *(unsigned int *)((*(int (**)(float *))(*&this->displayProductionTo))(this) + 4 * v5 + 3292);
    if ( v13 >= v7 ) /*0x70df53*/
    {
      v8 = v5 + 1; /*0x70df55*/
      if ( v8 >= 0 ) /*0x70df56*/
        this->currentRank = v8; /*0x70df58*/
      v6 = *(unsigned int **)(*(int (**)(float *, int))(*&this->u32_FE0))(this, 2 * v8); /*0x70df6c*/
      AudioController::Stop(&this->q129); /*0x70df74*/
      this->isGattlingSoundPlaying = 0; /*0x70df79*/
    }
  }
  LOBYTE(v9) = this->isGattlingSoundPlaying; /*0x70df80*/
  if ( !(unsigned char)v9 ) /*0x70df88*/
  {
    v9 = v6[51]; /*0x70df8a*/
    if ( v9 > 0 ) /*0x70df92*/
    {
      AudioController::Stop(&this->q129); /*0x70df9c*/
      v10 = v6[51]; /*0x70dfa7*/
      *(float *)v14 = this->location; /*0x70dfaf*/
      *(float *)&v14[1] = this->vtable2; /*0x70dfb6*/
      *(float *)&v14[2] = this->vtable3; /*0x70dfbd*/
      v11 = Random::State(&Randomizer_Global); /*0x70dfc6*/
      LOBYTE(v9) = (unsigned __int8)StartAudioControllerAt( /*0x70dfdd*/
                                      *(unsigned int *)(v6[48] + 4 * (v11 % v10)),
                                      v14,
                                      &this->gattlingSoundController);
      this->isGattlingSoundPlaying = 1; /*0x70dfe2*/
    }
  }
  return v9; /*0x70dfe9*/

}
} // namespace ra2::game

// 0x70E280
namespace ra2::game {
int TechnoClass::ActivateEffect()
{
  int v2; // [esp+4h] [ebp+4h]

  if ( v2 ) /*0x70e286*/
  {
    this->isDisguisedFlag = 1; /*0x70e288*/
    this->disguiseCreationFrame = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x70e294*/
  }
  return (*((int (__thiscall **)(TechnoClass *))this->vfptr + 295))(this); /*0x70e2a2*/
}
} // namespace ra2::game

// 0x70E2B0
namespace ra2::game {
int TechnoClass::IronCurtain()
{
  int result; // eax
  int v5; // [esp+8h] [ebp-8h]

  *(unsigned int *)this->q18C = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x70e2c3*/
  this->ironCurtainTimer[0] = v5; /*0x70e2cd*/
  result = 0; /*0x70e2d0*/
  this->ironTintTimer[2] = 0; /*0x70e2d2*/
  this->ironCurtainTimer[1] = a2; /*0x70e2d8*/
  if ( a4 ) /*0x70e2e2*/
    *(unsigned int *)this->airstrikeTintStage_d = 1; /*0x70e2e4*/
  else
    *(unsigned int *)this->airstrikeTintStage_d = 0; /*0x70e2f4*/
  return result; /*0x70e2e1*/
}
} // namespace ra2::game

// 0x70E300
namespace ra2::game {
int TechnoClass::ResetTimer()
{
  int v1; // eax
  int v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+14h] [ebp+4h]

  v1 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x70e300*/
  this->airstrikeTintTimer[2] = 0; /*0x70e30c*/
  this->ironTintStage = v1; /*0x70e31d*/
  this->airstrikeTimer[0] = v3; /*0x70e327*/
  this->airstrikeTimer[1] = v4; /*0x70e32a*/
  return v3; /*0x70e32d*/
}
} // namespace ra2::game

// 0x70E380
namespace ra2::game {
int TechnoClass::InvulnerabilityIntensity_SetContext()
{
  int v2; // edx
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int result; // eax

  v2 = this->ironTintTimer[1]; /*0x70e380*/
  v3 = this->ironCurtainTimer[2]; /*0x70e387*/
  if ( v3 != -1 ) /*0x70e390*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v3 >= v2 ) /*0x70e39b*/
      v2 = 0; /*0x70e3a1*/
    else
      v2 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v3; /*0x70e39d*/
  }
  switch ( this->ironTintTimer[2] ) /*0x70e3b6*/
  {
    case 1: /*0x70e3b6*/
      v4 = (12 - v2) << 8; /*0x70e3c4*/
      goto LABEL_13; /*0x70e3c7*/
    case 2: /*0x70e3b6*/
    case 8: /*0x70e3b6*/
      v5 = 512; /*0x70e3c9*/
      goto LABEL_15; /*0x70e3ce*/
    case 3: /*0x70e3b6*/
      v6 = (uint64_t)(1717986919LL * (461 * v2 + 1020)) >> 32; /*0x70e3ea*/
      v5 = ((unsigned int)v6 >> 31) + (v6 >> 3); /*0x70e3f6*/
      goto LABEL_15; /*0x70e3f8*/
    case 4: /*0x70e3b6*/
      v5 = (1024 - 77 * v2) / 8; /*0x70e40a*/
      goto LABEL_15; /*0x70e40d*/
    case 5: /*0x70e3b6*/
      v5 = (77 * v2 + 816) / 16; /*0x70e41f*/
      goto LABEL_15; /*0x70e422*/
    case 6: /*0x70e3b6*/
      v5 = 51; /*0x70e424*/
      goto LABEL_15; /*0x70e429*/
    case 7: /*0x70e3b6*/
      v4 = 3072 - 461 * v2; /*0x70e440*/
  LABEL_13:
      v5 = v4 / 6; /*0x70e442*/
      goto LABEL_15; /*0x70e452*/
    case 9: /*0x70e3b6*/
      v5 = ((v2 + 20) << 8) / 20; /*0x70e46b*/
  LABEL_15:
      result = (a2 * v5) >> 8; /*0x70e46d*/
      if ( result > 2000 ) /*0x70e47a*/
        result = 2000; /*0x70e47c*/
      break; /*0x70e481*/
    default:
      result = a2; /*0x70e484*/
      break; /*0x70e484*/
  }
  return result; /*0x70e3a9*/
}
} // namespace ra2::game

// 0x70ED10
namespace ra2::game {
int TechnoClass::Update2()
{
  int result; // eax
  double v2; // st7
  int v3; // esi
  int v4; // eax
  int v5; // eax

  result = this->nextArrayIndex; /*0x70ed10*/
  if ( result ) /*0x70ed17*/
  {
    v2 = *&this->uniqueId + *&this->abstractFlags; /*0x70ed1c*/
    v3 = this->referenceCount - 1; /*0x70ed23*/
    this->referenceCount = v3; /*0x70ed24*/
    *&this->abstractFlags = v2; /*0x70ed29*/
    if ( v3 <= 0 ) /*0x70ed2d*/
    {
      v4 = result - 1; /*0x70ed2f*/
      if ( v4 ) /*0x70ed30*/
      {
        v5 = v4 - 1; /*0x70ed32*/
        if ( v5 ) /*0x70ed33*/
        {
          result = v5 - 1; /*0x70ed35*/
          if ( !result ) /*0x70ed36*/
          {
            this->nextArrayIndex = 0; /*0x70ed38*/
            this->abstractFlags = 0; /*0x70ed3b*/
          }
          return result; /*0x70ed3e*/
        }
      }
      else
      {
        result = (int)this->vfptr3; /*0x70ed3f*/
        this->nextArrayIndex = 2; /*0x70ed42*/
        this->referenceCount = result; /*0x70ed4c*/
        this->uniqueId = 0; /*0x70ed4f*/
        if ( result > 1 ) /*0x70ed52*/
          return result; /*0x70ed52*/
      }
      result = (int)this->vfptr2; /*0x70ed54*/
      this->nextArrayIndex = 3; /*0x70ed57*/
      this->referenceCount = result; /*0x70ed61*/
      if ( result < 1 ) /*0x70ed64*/
        this->referenceCount = 1; /*0x70ed66*/
      *&this->uniqueId = -((double)(int)this->vfptr / (double)this->referenceCount); /*0x70ed74*/
    }
  }
  return result; /*0x70ed3e*/
}
} // namespace ra2::game

// 0x70ED80
namespace ra2::game {
int TechnoClass::GetAnimationFlags() const
{
  int v1; // esi
  int v2; // eax
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+10h] [ebp+4h]

  v1 = v8; /*0x70ed82*/
  v2 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x70ed86*/
  v4 = this->disguiseBlinkTimer[0]; /*0x70ed8e*/
  v5 = this->disguiseBlinkTimer[2]; /*0x70ed94*/
  if ( v4 != -1 ) /*0x70ed9d*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4 >= v5 ) /*0x70eda5*/
      goto LABEL_7; /*0x70eda5*/
    v5 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4; /*0x70eda7*/
  }
  if ( v5 ) /*0x70edab*/
  {
    if ( !(uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x70edba*/
      return v1; /*0x70edba*/
    v2 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x70edbc*/
  }
  LABEL_7:
  v6 = (v2 - this->disguiseCreationFrame + 64) % 256; /*0x70edc1*/
  if ( v6 >= 64 ) /*0x70eddb*/
  {
    if ( v6 < 68 ) /*0x70ede0*/
      return v8 | 2; /*0x70ede0*/
    if ( v6 < 76 ) /*0x70ede5*/
      return v8 | 4; /*0x70edef*/
    if ( v6 < 80 ) /*0x70edf5*/
      return v8 | 2; /*0x70edf5*/
    if ( v6 >= 112 ) /*0x70edfa*/
    {
      if ( v6 < 116 ) /*0x70edff*/
        return v8 | 2; /*0x70edff*/
      if ( v6 < 124 ) /*0x70ee04*/
        return v8 | 4; /*0x70ee0e*/
      if ( v6 < 128 ) /*0x70ee16*/
        return v8 | 2; /*0x70ee18*/
    }
  }
  return v1; /*0x70edea*/
}
} // namespace ra2::game

// 0x70EE30
namespace ra2::game {
int TechnoClass::CheckFireCooldown() const
{
  int v2; // edx
  int v3; // eax
  int result; // eax
  HouseClass *v5; // edi
  int v6; // [esp+Ch] [ebp+4h]

  v2 = this->disguiseBlinkTimer[0]; /*0x70ee34*/
  v3 = this->disguiseBlinkTimer[2]; /*0x70ee3a*/
  if ( v2 != -1 ) /*0x70ee43*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v2 >= v3 ) /*0x70ee4f*/
      goto LABEL_6; /*0x70ee4f*/
    v3 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v2; /*0x70ee51*/
  }
  if ( v3 ) /*0x70ee55*/
  {
    result = House::IsHumanPlayer((House *)this->owner); /*0x70ee5d*/
    if ( !(unsigned char)result ) /*0x70ee64*/
      goto LABEL_14; /*0x70ee64*/
  }
  LABEL_6:
  if ( (uint8_t)House::IsHumanPlayer((House *)this->owner) /*0x70ee7d*/
    && (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 49))(this) )
  {
    result = (*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - this->disguiseCreationFrame + 64) % 256; /*0x70eea4*/
    if ( result >= 72 && result <= 119 ) /*0x70eead*/
    {
      (*((unsigned char *)&(result))) = 0; /*0x70eeb0*/
      return result; /*0x70eeb3*/
    }
    goto LABEL_14; /*0x70eead*/
  }
  v5 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 111))(this); /*0x70eec0*/
  result = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 49))(this); /*0x70eec6*/
  if ( !(unsigned char)result || !v5 || (result = HouseClass::HasType(v5, *(unsigned int *)(v6 + 48)), (unsigned char)result) ) /*0x70eee5*/
  LABEL_14:
    (*((unsigned char *)&(result))) = 1; /*0x70eeec*/
  return result; /*0x70eeaf*/
}
} // namespace ra2::game

// 0x70EF00
namespace ra2::game {
int TechnoClass::CanDamageTarget() const
{
  int (__thiscall **vtable0)(TechnoClass *, int); // ebx
  int v3; // eax
  int result; // eax
  int v5; // esi
  int v6; // [esp+10h] [ebp+4h]

  vtable0 = (int (__thiscall **)(TechnoClass *, int))this->vfptr; /*0x70ef09*/
  v3 = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 185))(this, v6); /*0x70ef0c*/
  result = vtable0[254](this, v3); /*0x70ef15*/
  v5 = *(unsigned int *)result; /*0x70ef1b*/
  if ( *(unsigned int *)result ) /*0x70ef1b*/
  {
    result = (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 44))(v6); /*0x70ef29*/
    if ( result == 36 ) /*0x70ef2f*/
    {
      if ( *(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 6121) || v5->startingEdge ) /*0x70ef41*/
      {
        (*((unsigned char *)&(result))) = 1; /*0x70ef4d*/
        return result; /*0x70ef50*/
      }
    }
    else if ( *(unsigned char *)(v5 + 312) ) /*0x70ef53*/
    {
      result = (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 44))(v6); /*0x70ef61*/
      if ( result == 11 ) /*0x70ef67*/
      {
        result = *(unsigned int *)(v6 + 68); /*0x70ef69*/
        if ( result != -1 ) /*0x70ef6f*/
        {
          if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * result) + 693) ) /*0x70ef7a*/
          {
            (*((unsigned char *)&(result))) = 1; /*0x70ef86*/
            return result; /*0x70ef89*/
          }
        }
      }
      if ( v6 ) /*0x70ef8e*/
      {
        if ( (*(unsigned char *)(v6 + 20) & 2) != 0 ) /*0x70ef94*/
        {
          result = (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 196))(v6); /*0x70ef9a*/
          if ( (unsigned char)result ) /*0x70efa2*/
          {
            result = (*(int (__thiscall **)(int, int))(*(unsigned int *)v6 + 208))(v6, 1); /*0x70efaa*/
            if ( !result ) /*0x70efb2*/
              return 1; /*0x70efb9*/
          }
        }
      }
    }
  }
  (*((unsigned char *)&(result))) = 0; /*0x70efbe*/
  return result; /*0x70ef4b*/
}
} // namespace ra2::game

// 0x70EFE0
namespace ra2::game {
int TechnoClass::GetMaxSpeed() const
{

  unsigned int *v1; // eax

  v1 = (unsigned int *)(*(int (**)(TechnoClass *))&this->vfptr->hasParachute)(this); /*0x70efe2*/
  if ( v1 ) /*0x70efea*/
    return v1[414]; /*0x70efec*/
  else
    return 0; /*0x70eff3*/

}
} // namespace ra2::game

// 0x70F070
namespace ra2::game {
int TechnoClass::GetTypeVt40() const
{
  int v1; // eax

  v1 = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70f072*/
  return (*(int (__thiscall **)(int))(*(unsigned int *)v1 + 160))(v1);
}
} // namespace ra2::game

// 0x70F670
namespace ra2::game {
void FootClass::SetThreatBounds()
{
  int v3; // eax
  int (__thiscall **vtable0)(FootClass *); // edx
  int v5; // eax
  int v6; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f67a*/
  {
    v3 = (*((int (__thiscall **)(FootClass *))this->vfptr + 176))(this); /*0x70f67e*/
    vtable0 = (int (__thiscall **)(FootClass *))this->vfptr; /*0x70f684*/
    v6 = v3; /*0x70f686*/
    this->threatPosed = v3; /*0x70f689*/
    v5 = vtable0[14](this); /*0x70f68f*/
    CellClass::SetThreatBounds((CellClass *)a2, v5, v6); /*0x70f695*/
  }
}
} // namespace ra2::game

// 0x70F6A0
namespace ra2::game {
int FootClass::ApplyThreatBounds()
{
  int v3; // eax
  int v4; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x70f6aa*/
  {
    v4 = -this->threatPosed; /*0x70f6b6*/
    v3 = (*((int (**)(void))this->vfptr + 14))(); /*0x70f6b7*/
    CellClass::SetThreatBounds((CellClass *)a2, v3, v4); /*0x70f6bd*/
    this->threatPosed = 0; /*0x70f6c2*/
  }
}
} // namespace ra2::game

// 0x70F850
namespace ra2::game {
int TechnoClass::SetIdleState()
{
  int (__thiscall **vtable0)(TechnoClass *, int); // eax

  (*((void (__thiscall **)(TechnoClass *, unsigned int, int))this->vfptr + 288))(this, 0, 1); /*0x70f859*/
  (*((void (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 242))(this, 0); /*0x70f865*/
  vtable0 = (int (__thiscall **)(TechnoClass *, int))this->vfptr; /*0x70f86b*/
  this->focus = 0; /*0x70f871*/
  return vtable0[124](this, 5); /*0x70f881*/
}
} // namespace ra2::game

// 0x70FB50
namespace ra2::game {
int TechnoClass::CanSelfRepair()
{
  unsigned int *v3; // eax

  if ( !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3374) ) /*0x70fb5b*/
    return 0; /*0x70fb65*/
  if ( !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3233) ) /*0x70fb73*/
    return 0; /*0x70fb7d*/
  v3 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 253))(this); /*0x70fb85*/
  if ( !v3 || !*v3 ) /*0x70fb8f*/
    return 0; /*0x70fb94*/
  if ( *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1660) == 3 ) /*0x70fba9*/
    return 0; /*0x70fbab*/
  return !this || (this->abstractFlags & 4) == 0 || !this->u32_694; /*0x70fbb9*/
}
} // namespace ra2::game

// 0x70FBE0
namespace ra2::game {
int TechnoClass::Activate()
{

  int v2; // eax
  int (**vtable0)(TechnoClass *); // edx
  int v4; // eax
  unsigned int v6[3]; // [esp+4h] [ebp-Ch] BYREF

  (*((void (**)(TechnoClass *))this->vfptr + 244))(this); /*0x70fbe8*/
  if ( this && (this->abstractFlags & 4) != 0 ) /*0x70fbf6*/
  {
    if ( !this->q674 ) /*0x70fbf8*/
      sub_7DC720(-2147467261); /*0x70fc07*/
    (*(void (**)(unsigned int))(*this->q674 + 88))(this->q674); /*0x70fc15*/
  }
  LOBYTE(v2) = this->airstrikeTintStage_2; /*0x70fc18*/
  if ( !(unsigned char)v2 /*0x70fc33*/
    || (v2 = (*((int (**)(TechnoClass *))this->vfptr + 33))(this), *(unsigned int *)(v2 + 1448) == -1) )
  {
    this->airstrikeTintStage_2 = 0; /*0x70fc7a*/
  }
  else
  {
    v6[0] = this->location[0]; /*0x70fc44*/
    v6[1] = this->location[1]; /*0x70fc4d*/
    vtable0 = (int (**)(TechnoClass *))this->vfptr; /*0x70fc51*/
    v6[2] = this->location[2]; /*0x70fc56*/
    v4 = vtable0[33](this); /*0x70fc5a*/
    LOBYTE(v2) = (unsigned __int8)StartAudioControllerAt(*(unsigned int *)(v4 + 1448), v6, 0); /*0x70fc68*/
    this->airstrikeTintStage_2 = 0; /*0x70fc6d*/
  }
  return v2; /*0x70fc75*/

}
} // namespace ra2::game

// 0x70FC90
namespace ra2::game {
int TechnoClass::Deactivate()
{
  Cell *v2; // eax
  unsigned int *v3; // edi
  int Member; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v6; // eax
  unsigned int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !this->isTether /*0x70fcca*/
    || !Team::GetMember((Team *)this, 0)
    || (v2 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 111))(this),
        v3 = Cell::IsBridge(v2),
        Member = Team::GetMember((Team *)this, 0),
        v3 != (unsigned int *)Member) )
  {
    (*((void (__thiscall **)(TechnoClass *))this->vfptr + 244))(this); /*0x70fcd4*/
    (*((void (__thiscall **)(TechnoClass *))this->vfptr + 84))(this); /*0x70fcde*/
    if ( this && (this->abstractFlags & 4) != 0 ) /*0x70fcec*/
    {
      if ( !this->q674 ) /*0x70fcee*/
        sub_7DC720(-2147467261); /*0x70fcfd*/
      (*(void (__stdcall **)(unsigned int))(*this->unknown_short_3C8) + 92))(this->q674); /*0x70fd0b*/
    }
    (*((unsigned char *)&(Member))) = this->airstrikeTintStage_2; /*0x70fd0e*/
    if ( !(unsigned char)Member ) /*0x70fd16*/
    {
      Member = (*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x70fd1c*/
      if ( *(unsigned int *)(Member + 1452) != -1 ) /*0x70fd29*/
      {
        v8[0] = this->location[0]; /*0x70fd39*/
        v8[1] = this->location[1]; /*0x70fd42*/
        vtable0 = (int (__thiscall **)(TechnoClass *))this->vfptr; /*0x70fd46*/
        v8[2] = this->location[2]; /*0x70fd4b*/
        v6 = vtable0[33](this); /*0x70fd4f*/
        (*((unsigned char *)&(Member))) = (uint8_t)StartAudioControllerAt(*(unsigned int *)(v6 + 1452), v8, 0); /*0x70fd5d*/
      }
    }
    this->airstrikeTintStage_2 = 1; /*0x70fd62*/
  }
  return Member; /*0x70fd69*/
}
} // namespace ra2::game

// 0x70FD70
namespace ra2::game {
int TechnoClass::LinkToBridge()
{
  Cell *v3; // eax
  CaptureManager *v4; // ecx
  AnimClass *v5; // edi
  int *v6; // eax
  AnimClass *v7; // eax
  int *v8; // ecx
  unsigned char v9[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( a2 ) /*0x70fd7d*/
  {
    v3 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 111))(this); /*0x70fd85*/
    if ( Cell::IsBridge(v3) == a2 ) /*0x70fd94*/
    {
      a2[116] = this; /*0x70fd9a*/
      this->drainTarget = (TechnoClass *)a2; /*0x70fda0*/
      *(unsigned char *)(a2[135] + 22392) = 1; /*0x70fdac*/
      v4 = (CaptureManager *)a2[175]; /*0x70fdb3*/
      if ( v4 ) /*0x70fdbb*/
        CaptureManager::FreeAll(v4); /*0x70fdbd*/
      v5 = (AnimClass *)operator new(0x1C8u); /*0x70fdcc*/
      if ( v5 ) /*0x70fdd3*/
      {
        v6 = (int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 18))(this, v9); /*0x70fdeb*/
        v7 = (AnimClass *)AnimClass::ctor( /*0x70fdfe*/
                            v5,
                            *(void **)(*(unsigned int *)&g_RulesClass_Instance + 796),
                            v6,
                            0,
                            1,
                            (void *)0x600,
                            0,
                            0);
      }
      else
      {
        v7 = 0; /*0x70fe05*/
      }
      this->v7 = v7; /*0x70fe09*/
      if ( v7 ) /*0x70fe0f*/
        BuildingClass::AimTurret((BuildingClass *)v7, this); /*0x70fe14*/
      if ( this && (this->abstractFlags & 4) != 0 ) /*0x70fe21*/
      {
        v8 = (int *)this->u32_5D4; /*0x70fe23*/
        if ( v8 ) /*0x70fe2b*/
          TeamClass::LiberateMember_Start(v8, (int)this, 0xFFFFFFFF, 1); /*0x70fe32*/
      }
    }
  }
}
} // namespace ra2::game

// 0x70FEE0
namespace ra2::game {
int TechnoClass::EjectPassengers()
{
  int result; // eax
  FootClass *locomotorTarget; // ecx
  int v5; // eax
  FootClass *v6; // ecx
  FootClass *v7; // eax

  result = (int)this->locomotorTarget; /*0x70fee3*/
  if ( result )
  {
    result->u32_2B0 = 0; /*0x70fef1*/
    locomotorTarget = this->locomotorTarget; /*0x70fefb*/
    if ( locomotorTarget && (locomotorTarget->abstractFlags & 4) != 0 )
    {
      v5 = (*((int (__thiscall **)(FootClass *))locomotorTarget->vfptr + 114))(locomotorTarget); /*0x70ff15*/
      v6 = this->locomotorTarget; /*0x70ff1b*/
      if ( v5 > 0 ) /*0x70ff23*/
      {
        v6->isCrashing = 1; /*0x70ff25*/
        this->locomotorTarget->isBeingManipulated = 1; /*0x70ff32*/
        this->locomotorTarget->this = this; /*0x70ff3f*/
        this->locomotorTarget->chronoWarpedByHouse = this->owner; /*0x70ff51*/
        (*((void (__thiscall **)(FootClass *))this->locomotorTarget->vfptr + 232))(this->locomotorTarget); /*0x70ff5f*/
        result = (*((int (__thiscall **)(FootClass *, unsigned int, int))this->locomotorTarget->vfptr + 288))( /*0x70ff71*/
                   this->locomotorTarget,
                   0,
                   1);
        (*((unsigned char *)&(result))) = a2; /*0x70ff77*/
        this->locomotorTarget = 0; /*0x70ff7b*/
        if ( !a2 ) /*0x70ff87*/
          return result; /*0x70ff87*/
        return (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 242))(this, 0); /*0x70ffec*/
      }
      (*((void (__thiscall **)(FootClass *, unsigned int, int))v6->vfptr + 288))(v6, 0, 1); /*0x70ff9f*/
      v7 = this->locomotorTarget; /*0x70ffa5*/
      if ( v7 )
        v7 = (v7->abstractFlags & 4) != 0 ? v7 : 0;
      v7->isLetGoByLocomotor = 1; /*0x70ffbb*/
      result = (*((int (__thiscall **)(FootClass *, unsigned int, int))this->locomotorTarget->vfptr + 288))( /*0x70ffce*/
                 this->locomotorTarget,
                 0,
                 1);
    }
    (*((unsigned char *)&(result))) = a2; /*0x70ffd4*/
    this->locomotorTarget = 0; /*0x70ffd8*/
    if ( !a2 ) /*0x70ffe4*/
      return result; /*0x70ffe4*/
    return (*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 242))(this, 0); /*0x70ffe4*/
  }
  return result; /*0x70ff95*/
}
} // namespace ra2::game

// 0x710470
namespace ra2::game {
int TechnoClass::EnteredOpenTopped()
{
  int v1; // eax
  char result; // al

  if ( a1 ) /*0x710477*/
  {
    v1 = *(unsigned int *)a1; /*0x710479*/
    *(unsigned char *)(a1 + 130) = 1; /*0x71047d*/
    (*(void (__thiscall **)(int))(v1 + 976))(a1); /*0x710484*/
    return ObjectClass::SetDeployState(a1, 0); /*0x710492*/
  }
  return result; /*0x710497*/
}
} // namespace ra2::game

// 0x7104A0
namespace ra2::game {
int TechnoClass::ExitedOpenTopped()
{
  int result; // eax

  result = a1; /*0x7104a0*/
  if ( a1 ) /*0x7104a6*/
    *(unsigned char *)(a1 + 130) = 0; /*0x7104a8*/
  return result; /*0x7104af*/
}
} // namespace ra2::game

// 0x7104C0
namespace ra2::game {
int TechnoClass::MarkPassengersAsExited()
{
  int result; // eax

  result = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x7104c6*/
  if ( result ) /*0x7104cf*/
  {
    do /*0x7104e7*/
    {
      result->u8_82 = 0; /*0x7104d7*/
      result = result->u32_30; /*0x7104dd*/
    }
    while ( result && (result->AudioBuffer_14 & 4) != 0 ); /*0x7104e7*/
  }
  return result; /*0x7104e9*/
}
} // namespace ra2::game

// 0x7104F0
namespace ra2::game {
void FootClass::UpdatePassengerCoords()
{
  int *location; // edi
  int DB; // esi
  int result; // eax
  unsigned int v4[3]; // [esp+8h] [ebp-Ch] BYREF

  location = this->location; /*0x710502*/
  DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x710508*/
  result = *location; /*0x71050c*/
  v4[0] = *location; /*0x71050e*/
  v4[1] = location->Y; /*0x710515*/
  v4[2] = location->Z; /*0x71051c*/
  if ( DB ) /*0x710520*/
  {
    do /*0x71053c*/
    {
      result = (*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)DB + 436))(DB, v4); /*0x71052b*/
      DB = *(unsigned int *)(DB + 48); /*0x710531*/
    }
    while ( DB && (*(unsigned char *)(DB + 20) & 4) != 0 ); /*0x71053c*/
  }
  return result; /*0x71053e*/
}
} // namespace ra2::game

// 0x7106E0
namespace ra2::game {
int TechnoClass::ScalarDtor()
{
  TechnoClass::DTOR((int)this); /*0x7106e3*/
  if ( (a2 & 1) != 0 ) /*0x7106ed*/
    operator delete((this)); /*0x7106f0*/
  return this; /*0x7106fa*/
}
} // namespace ra2::game

// 0x711EC0
namespace ra2::game {
int TechnoClass::GetBuildCost() const
{
  int result; // eax

  if ( !this->u32_2ED4 ) /*0x711ec0*/
    return *&this->q17A0; /*0x711ec0*/
  result = 0x7FFFFFFF; /*0x711ed1*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x711ed6*/
    return *&this->q17A0; /*0x711ed8*/
  return result; /*0x711ede*/
}
} // namespace ra2::game

// 0x717800
namespace ra2::game {
int TechnoClass::GetSightRange() const
{
  int result; // eax

  result = *&this->u32_14D0; /*0x717800*/
  if ( result == -1 ) /*0x717809*/
    return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1972); /*0x717810*/
  return result; /*0x717816*/
}
} // namespace ra2::game

// 0x729480
namespace ra2::game {
void FootClass::Cleanup()
{
  TagClass *attachedTag; // edi
  ObjectClass *nextObject; // eax
  int owningHouseIndex; // esi

  attachedTag = this->attachedTag; /*0x729484*/
  if ( !attachedTag ) /*0x72948d*/
    goto LABEL_7; /*0x72948d*/
  nextObject = this->nextObject; /*0x72948f*/
  owningHouseIndex = this->owningHouseIndex; /*0x729493*/
  if ( owningHouseIndex != -1 ) /*0x729499*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - owningHouseIndex >= (int)nextObject ) /*0x7294a5*/
      nextObject = 0; /*0x7294ab*/
    else
      nextObject = (ObjectClass *)((char *)nextObject - (*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - owningHouseIndex)); /*0x7294a7*/
  }
  if ( (double)((char *)attachedTag - (char *)nextObject) / (double)(int)this->attachedTag == 1.0 ) /*0x7294c7*/
  {
  LABEL_7:
    this->nextArrayIndex = 0; /*0x7294c9*/
    FootClass::ClearPathIndex((FootClass *)this->vfptr3); /*0x7294d3*/
  }
}
} // namespace ra2::game

// 0x732580
namespace ra2::game {
int TechnoClass::IsOwnedByHuman() const
{
  int result; // eax

  result = 0; /*0x7325b4*/
  if ( this && this->isAliveFlag )
  {
    if ( *(unsigned int *)&dword_A8B238 ? House::IsHumanPlayer((House *)this->owner) : this->owner->playerControl )
      return 1; /*0x73258c*/
  }
  return result; /*0x7325b9*/
}
} // namespace ra2::game

// 0x7335F0
namespace ra2::game {
int TechnoClass::IsCapturableByPlayer() const
{
  char v2; // al
  BOOL result; // eax

  result = 0; /*0x733633*/
  if ( this && this->isAliveFlag )
  {
    v2 = *(unsigned int *)&dword_A8B238 ? House::IsHumanPlayer((House *)this->owner) : this->owner->playerControl;
    if ( v2 && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) != 6 ) /*0x733631*/
      return 1; /*0x7335ff*/
  }
  return result; /*0x733638*/
}
} // namespace ra2::game

// 0x736CA0
namespace ra2::game {
int TechnoClass::UpdateUnitAnimation()
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v7; // [esp+Ch] [ebp-8h]

  if ( !*(unsigned char *)(this->u32_6C4 + 1710) ) /*0x736cad*/
  {
    if ( !this->Locomotor ) /*0x736cbb*/
      sub_7DC720(-2147467261); /*0x736cca*/
    if ( (*(uint8_t (__stdcall **)(unsigned int))(*this->unknown_short_3C8) + 16))(this->Locomotor) ) /*0x736cd8*/
    {
      v2 = this->reloadTimer[0]; /*0x736cdf*/
      v3 = this->reloadTimer[2]; /*0x736ce5*/
      if ( v2 != -1 ) /*0x736cf4*/
      {
        if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v2 >= v3 ) /*0x736cfc*/
          return TechnoClass::StepAnimFrame(this); /*0x736cfc*/
        v3 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v2; /*0x736cfe*/
      }
      if ( v3 > 0 ) /*0x736d02*/
      {
        v4 = this->reloadTimer[0]; /*0x736d04*/
        v5 = this->reloadTimer[2]; /*0x736d0a*/
        if ( v4 != -1 ) /*0x736d13*/
        {
          if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4 >= v5 ) /*0x736d1b*/
            v5 = 0; /*0x736d21*/
          else
            v5 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4; /*0x736d1d*/
        }
        this->reloadTimer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x736d2a*/
        this->reloadTimer[1] = v7; /*0x736d30*/
        this->reloadTimer[2] = v5 + 1; /*0x736d36*/
      }
    }
  }
  return TechnoClass::StepAnimFrame(this); /*0x736d43*/
}
} // namespace ra2::game

// 0x736D50
namespace ra2::game {
int TechnoClass::IsC4AnimationActive() const
{

  int v2; // eax
  unsigned __int8 *v4; // eax
  int target; // eax
  int *location; // esi
  CellClass *v7; // eax
  unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this->u32_6C4; /*0x736d56*/
  if ( *(unsigned char *)(v2 + 3602) ) /*0x736d5c*/
    return 1; /*0x736d66*/
  v4 = *(unsigned __int8 **)(v2 + 1028); /*0x736d6d*/
  if ( !v4 ) /*0x736d75*/
    return 0; /*0x736d75*/
  if ( !v4[5828] ) /*0x736d77*/
    return 0; /*0x736d77*/
  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x736d87*/
    return 0; /*0x736d87*/
  target = this->target; /*0x736d90*/
  if ( !target || (*(int (**)(int))(*(unsigned int *)(target + 4) + 12))(target + 4) != 1 ) /*0x736da5*/
    return 0; /*0x736daf*/
  location = this->location; /*0x736db6*/
  v8[0] = *location; /*0x736dbe*/
  v8[1] = location->Y; /*0x736dca*/
  v8[2] = location->Z; /*0x736dd1*/
  v7 = Coord::To_Cell((Coord *)&dword_87F7E8, v8); /*0x736dda*/
  return (unsigned __int8)BuildingClass::CheckC4Active((BuildingClass *)v7) != 0; /*0x736d68*/

}
} // namespace ra2::game

// 0x737BA0
namespace ra2::game {
int TechnoClass::DispatchPlayerInput()
{

  char v3; // bl
  __int16 v5; // cx
  unsigned __int8 *v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // [esp+Ch] [ebp-8h]

  v3 = a3; /*0x737ba8*/
  if ( !FootClass::DispatchInput(&this->vtable1, a2, a3) ) /*0x737bb1*/
    return 0; /*0x737c7f*/
  LOBYTE(v5) = 0; /*0x737bbe*/
  HIBYTE(v5) = v3; /*0x737bc4*/
  LOWORD(a3) = v5; /*0x737bc7*/
  FacingClass::Set_SyncLog((char *)this->secondaryFacing, &a3); /*0x737bd2*/
  if ( this->isCloakableFlag[0] && !this->isInPlayfield[0] ) /*0x737be3*/
    this->cloakState = 2; /*0x737beb*/
  v6 = (unsigned __int8 *)this->u32_6C4; /*0x737bf5*/
  if ( v6[3608] || v6[3609] ) /*0x737c03*/
  {
    this->animation[0] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 29); /*0x737c4c*/
    v9 = *(unsigned int *)&stru_A8E960.random[528]; /*0x737c52*/
    this->animation[5] = 1; /*0x737c62*/
    this->animation[2] = v9; /*0x737c69*/
    this->animation[3] = v10; /*0x737c70*/
    this->animation[4] = 1; /*0x737c75*/
    return 1; /*0x737c73*/
  }
  else
  {
    this->animation[0] = 0; /*0x737c0b*/
    v7 = *(unsigned int *)&stru_A8E960.random[528]; /*0x737c11*/
    this->animation[5] = 0; /*0x737c1c*/
    this->animation[2] = v7; /*0x737c24*/
    this->animation[3] = v10; /*0x737c2a*/
    this->animation[4] = 0; /*0x737c2f*/
    return 1; /*0x737c2d*/
  }

}
} // namespace ra2::game

// 0x738890
namespace ra2::game {
int TechnoClass::ValidateMoveType()
{
  int v5; // eax
  int v6; // ecx

  v5 = (*((int (__thiscall **)(TechnoClass *, int *, int))this->vfptr + 29))(this, a3, a4); /*0x7388a1*/
  v6 = a2; /*0x7388a4*/
  if ( a2 != v5 ) /*0x7388aa*/
  {
    v6 = v5; /*0x7388af*/
    if ( v5 == 3 ) /*0x7388b1*/
    {
      v6 = 1; /*0x7388bf*/
      goto LABEL_10; /*0x7388c4*/
    }
    if ( v5 == 9 || v5 == 16 ) /*0x7388bb*/
      goto LABEL_9; /*0x7388bb*/
  }
  if ( v6 == 27 || v6 == 29 ) /*0x7388ce*/
  LABEL_9:
    v6 = 5; /*0x7388d0*/
  LABEL_10:
  if ( a3 == (int *)this && (v6 == 2 || v6 == 5) ) /*0x7388e1*/
    return 0; /*0x7388e5*/
  if ( this->isBerserk ) /*0x7388eb*/
    return 0; /*0x7388f7*/
  return FootClass::ValidateMove((FootClass *)this, v6, a3, a4); /*0x7388e3*/
}
} // namespace ra2::game

// 0x738910
namespace ra2::game {
int TechnoClass::SpawnInfantryFromBuilding()
{
  if ( this->airstrikeTintTimer /*0x738933*/
    && this->HandleCursor(a3, 0, a5) == 2 )
  {
    return 0; /*0x738937*/
  }
  if ( this->isBerserk[0] ) /*0x73893d*/
    return 0; /*0x738949*/
  return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5); /*0x738935*/
}
} // namespace ra2::game

// 0x738970
namespace ra2::game {
int FootClass::RespondToDestruction()
{

  int v4; // ebp
  char v5; // bl
  char v7; // al
  int v8; // edx
  __int16 *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ebp
  unsigned __int8 *v13; // eax
  int v14; // eax
  unsigned int *Member; // edi
  Cell *v16; // eax
  int v17; // eax
  int v19; // [esp+0h] [ebp-1Ch]
  unsigned int v20[3]; // [esp+10h] [ebp-Ch] BYREF

  v5 = a2; /*0x738978*/
  v7 = FootClass::ValidatePlacement((FootClass *)a2, a2, v4, (int)a3, v19); /*0x738983*/
  v8 = *(unsigned int *)this; /*0x738988*/
  LOBYTE(a3) = v7; /*0x73898c*/
  if ( (*(unsigned __int8 (**)(Class_7F5C70 *))(v8 + 1196))(this) /*0x7389ab*/
    || (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 28 )
  {
    return (char)a3; /*0x7389ab*/
  }
  if ( this->isBerserk ) /*0x7389b1*/
    TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x7389bf*/
  if ( (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 2 && !this->FootClass_field_5A4 ) /*0x7389d3*/
  {
    v9 = (__int16 *)(*(int (**)(Class_7F5C70 *, int *))(*&this->q6E0))(this, &a2); /*0x7389e6*/
    v10 = (*v9 << 8) + 128; /*0x738a01*/
    v11 = (v9[1] << 8) + 128; /*0x738a0d*/
    if ( this->location == v10 && this->locationY == v11 && !this->locationZ ) /*0x738a14*/
      (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x738a27*/
  }
  InfantryClass::ProcessExitQueue((InfantryClass *)this); /*0x738a2f*/
  if ( this->FootClass_field_5A4 )
  {
    v12 = 2; /*0x738a3e*/
  }
  else
  {
    v13 = (unsigned __int8 *)this->u32_6C4; /*0x738a48*/
    if ( v13[3598] || v13[3599] )
    {
      if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x738bda*/
        return (char)a3; /*0x738bda*/
      v12 = 10; /*0x738bf1*/
      if ( (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 10 || this->queuedMission == 10 ) /*0x738c04*/
        return (char)a3; /*0x738c04*/
      if ( !v5 )
      {
        if ( (unsigned __int8)House::IsCurrentPlayer(this->owner) )
        {
          v20[0] = this->location; /*0x738c29*/
          v20[1] = this->locationY; /*0x738c3a*/
          v20[2] = this->locationZ; /*0x738c41*/
          if ( Coord::To_Cell((Coord *)&dword_87F7E8, v20)->landType != (*(unsigned char *)(this->u32_6C4 + 3598) != 0
                                                                       ? 5
                                                                       : 11) )
            v12 = 5; /*0x738c6a*/
        }
      }
      (*(void (**)(Class_7F5C70 *, unsigned int))(*&this->q_F20))(this, 0); /*0x738c75*/
      (*(void (**)(Class_7F5C70 *, unsigned int, int))(*&this->q_1200))(this, 0, 1); /*0x738c83*/
    }
    else if ( (*(unsigned __int8 (**)(Class_7F5C70 *))(*&this->u32_AB0))(this) ) /*0x738a6e*/
    {
      if ( (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 5 /*0x738b5c*/
        || (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 11
        || (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) != -1
        && (MissionClass::GetMissionControlthis->referenceCount
         || MissionClass::GetMissionControlthis->abstractFlags) )
      {
        return (char)a3; /*0x738b61*/
      }
      if ( *(unsigned int *)&this->owner->iqLevel2 < *&dword_8871E0->GuardArea_d /*0x738c8e*/
        && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 16)
        && !*(unsigned char *)(this->u32_6C4 + 3385)
        || this->FootClass_field_5D4
        || this->mindControlRingAnim
        || this->mindControlledBy_a_unit
        || (v12 = 11, this->spawnManager) )
      {
        v12 = 5; /*0x738c98*/
      }
    }
    else if ( this->isALoaner /*0x738aa0*/
           && *(int *)(this->u32_6C4 + 1504) > 0
           && this->q118
           && !this->FootClass_field_5D4 )
    {
      v12 = 16; /*0x738aaa*/
    }
    else
    {
      if ( this->FootClass_field_bool_68C ) /*0x738ab4*/
        return (char)a3; /*0x738ab4*/
      v14 = this->currentMission; /*0x738ac2*/
      if ( v14 == 16 ) /*0x738acb*/
      {
        if ( *(unsigned int *)(this->u32_6C4 + 1028) ) /*0x738ad3*/
          return (char)a3; /*0x738ad3*/
      }
      if ( v14 == 11 ) /*0x738ae4*/
        return (char)a3; /*0x738ae4*/
      v12 = 5; /*0x738af0*/
      (*(void (**)(Class_7F5C70 *, unsigned int))(*&this->q_F20))(this, 0); /*0x738af5*/
      (*(void (**)(Class_7F5C70 *, unsigned int, int))(*&this->q_1200))(this, 0, 1); /*0x738b03*/
    }
  }
  Member = (unsigned int *)Team::GetMember((Team *)this, 0); /*0x738ca6*/
  if ( this->currentMission != 7
    || !Member
    || Member->ReturnZeroPos() != 6
    || !*(unsigned char *)(*(Member->ReturnZeroPos() == 6 ? Member + 328 : (unsigned int *)1312)
                 + 5803)
    || (v16 = (Cell *)(*(int (**)(Class_7F5C70 *))(*&this->q6F0))(this),
        Cell::IsBridge(v16) == Member) )
  {
    v17 = this->currentMission; /*0x738cfa*/
    if ( v17 != 25 && v17 != 11 && v17 != 16 && v17 != 9 ) /*0x738d12*/
      (*(void (**)(Class_7F5C70 *, int, unsigned int))(*&this->q7A0))(this, v12, 0); /*0x738d1b*/
  }
  return (char)a3; /*0x738d25*/

}
} // namespace ra2::game

// 0x73EFC0
namespace ra2::game {
int TechnoClass::DeployIntoBuilding()
{
  double v1; // st7
  int v3; // edi
  int v4; // eax
  int IvanIconFlickerRate; // edx
  unsigned int *IvanDamage; // ecx
  int missionStatus; // eax
  int v9; // eax
  TechnoClass *v11; // [esp+0h] [ebp-8h]

  v3 = this->Type->VoiceSelectDeactivated; /*0x73efca*/
  if ( !v3 ) /*0x73efd2*/
    return InfantryClass::ProcessDeploy((FootClass *)this); /*0x73efd2*/
  v4 = 0; /*0x73efde*/
  IvanIconFlickerRate = dword_8871E0->IvanIconFlickerRate; /*0x73efe0*/
  if ( IvanIconFlickerRate > 0 ) /*0x73efe8*/
  {
    IvanDamage = (unsigned int *)dword_8871E0->IvanDamage; /*0x73efea*/
    while ( *IvanDamage != v3 ) /*0x73eff2*/
    {
      ++v4; /*0x73eff4*/
      ++IvanDamage; /*0x73eff5*/
      if ( v4 >= IvanIconFlickerRate ) /*0x73effa*/
        goto LABEL_6; /*0x73effa*/
    }
    goto LABEL_8; /*0x73eff2*/
  }
  LABEL_6:
  if ( !this->target && !(uint8_t)House::IsCurrentPlayer((House *)this->owner) ) /*0x73f00c*/
    return InfantryClass::ProcessDeploy((FootClass *)this); /*0x73f08c*/
  LABEL_8:
  missionStatus = this->missionStatus; /*0x73f015*/
  if ( missionStatus ) /*0x73f01e*/
  {
    if ( missionStatus == 1 && !this->FootClass_field_bool_68C[0] ) /*0x73f023*/
      this->missionStatus = 0; /*0x73f02d*/
  }
  else if ( UnitClass::DeployToBuilding(this) && TechnoClass::Deploy(v11, v1) ) /*0x73f046*/
  {
    this->missionStatus = 1; /*0x73f04f*/
  }
  _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x73f05b*/
  __asm /*0x73f060*/
  {
    fld qword ptr [eax+10h]
    fmul ds:dbl_7E27F8
  }
  (*((unsigned short *)&(v9))) = Math::RoundToInt(v1); /*0x73f069*/
  return v9 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x73f087*/
}
} // namespace ra2::game

// 0x7404B0
namespace ra2::game {
int TechnoClass::GetInfantryCursorAction() const
{

  unsigned int *v7; // edi
  int v8; // ebp
  int v9; // ebp
  int v10; // eax
  int v11; // edx
  int *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int8 *v16; // eax
  InfantryClass *v17; // eax
  unsigned __int8 *v18; // eax
  int v19; // eax
  int v20; // ecx
  int vfptr; // edx
  unsigned int v22[2]; // [esp+14h] [ebp-18h] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-10h]
  unsigned int v24[3]; // [esp+20h] [ebp-Ch] BYREF
  int v25; // [esp+30h] [ebp+4h]

  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x7404bf*/
    return 0; /*0x7404d1*/
  v7 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x7404e7*/
  v8 = FootClass::HandleCursorWithCheck((FootClass *)this, a2, a3, a4); /*0x7404fb*/
  v25 = v8; /*0x740501*/
  if ( TechnoClass::GetValue(this, -1) < 0 && (unsigned __int8)House::IsHumanPlayer((House *)this->owner) && v8 == 5 ) /*0x740520*/
    v25 = 59; /*0x740522*/
  v9 = -1; /*0x74052e*/
  if ( a3 ) /*0x740533*/
  {
    if ( (dword_A8B230->vfptr & 0x1000) != 0 ) /*0x740540*/
    {
      v10 = v7->u32_28; /*0x740542*/
      if ( v10 ) /*0x740547*/
      {
        v11 = *(unsigned int *)(v10 + 16); /*0x740549*/
        if ( v11 > 0 ) /*0x74054e*/
        {
          v12 = *(int **)(v10 + 4); /*0x740550*/
          do /*0x74056c*/
          {
            v13 = *v12; /*0x740558*/
            if ( *(unsigned char *)(*v12 + 116) && v13->nextObject == 20 ) /*0x740563*/
              v9 = v13->objectTypeFlags; /*0x740565*/
            ++v12; /*0x740568*/
            --v11; /*0x74056b*/
          }
          while ( v11 ); /*0x74056c*/
        }
      }
    }
  }
  v14 = (*a2 << 8) + 128; /*0x740585*/
  v22[1] = (a2[1] << 8) + 128; /*0x74058a*/
  v22[0] = v14; /*0x740596*/
  GroundHeight = 0; /*0x74059a*/
  GroundHeight = Cell::GetGroundHeight(v22); /*0x7405a3*/
  if ( (Coord::To_Cell((Coord *)&dword_87F7E8, v22)->flags & 0x100) != 0 ) /*0x7405bf*/
    GroundHeight += dword_B1D0AC; /*0x7405cd*/
  if ( (unsigned __int8)Cell::IsPassable(v22) ) /*0x7405db*/
  {
    if ( v25 != 1 ) /*0x7406c9*/
      goto LABEL_46; /*0x7406c9*/
  }
  else
  {
    if ( v25 != 1 ) /*0x7405ef*/
      goto LABEL_46; /*0x7405ef*/
    v15 = v7->u32_EC; /*0x7405ff*/
    if ( (v15 == 5 /*0x740629*/
       || v9 != -1 && *(unsigned char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v9) + 681) && a3)
      && *(unsigned char *)&this->u32_6C4->u32_E0E )
    {
      return 6; /*0x74063e*/
    }
    if ( (v15 == 11 || v9 == 126 && v7->u32_11E >= 0x30u && a3) && *(unsigned char *)(this->u32_6C4 + 3599) ) /*0x740666*/
      return 6; /*0x74067b*/
    if ( v15 == 5 /*0x74069b*/
      || v9 != -1 && *(unsigned char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v9) + 681) && a3 )
    {
      v16 = (unsigned __int8 *)this->u32_6C4; /*0x74069d*/
      if ( v16[1517] ) /*0x7406a3*/
      {
        if ( v16[1516] ) /*0x7406ad*/
          return 6; /*0x7406c3*/
      }
    }
  }
  v17 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x7406d5*/
  if ( (unsigned __int8)InfantryClass::IsInBounds(v17) ) /*0x7406dc*/
  {
    CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x7406ec*/
    return 36 - (globalHelper_084F10((int)this) != 0); /*0x740706*/
  }
  if ( this->u32_6E0 || this->u32_6E1 || this->u32_6E2 ) /*0x74071d*/
    v25 = 0; /*0x740727*/
LABEL_46:
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x740731*/
  {
    v18 = (unsigned __int8 *)this->u32_6C4; /*0x74073e*/
    if ( v18[3603] ) /*0x740744*/
    {
      if ( this->u32_6E0 ) /*0x740752*/
      {
        if ( v25 == 1 ) /*0x740767*/
          return 2; /*0x74077c*/
        if ( v25 != 5 ) /*0x740782*/
          return v25; /*0x740782*/
        if ( !v18[1708] ) /*0x740784*/
          return 2; /*0x740784*/
        v19 = (*(int (**)(TechnoClass *, unsigned int))&this->vfptr->bunkerLinkedUnit)(this, 0); /*0x740793*/
        v20 = *a2 << 8; /*0x7407a3*/
        v24[1] = (a2[1] << 8) + 128; /*0x7407b3*/
        vfptr = this->vfptr; /*0x7407b7*/
        v24[0] = v20 + 128; /*0x7407bd*/
        v24[2] = 0; /*0x7407c4*/
        if ( !(*(unsigned __int8 (**)(TechnoClass *, unsigned int *, int))(vfptr + 356))(this, v24, v19) ) /*0x7407c8*/
          return 2; /*0x7407e5*/
        goto LABEL_56; /*0x7407d0*/
      }
    }
  }
  if ( v25 == 5 ) /*0x7407ed*/
  {
LABEL_56:
    if ( !(*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->damageParticles)(this) ) /*0x7407f3*/
      return 0; /*0x7407fd*/
  }
  return v25; /*0x7404c8*/

}
} // namespace ra2::game

// 0x740810
namespace ra2::game {
int TechnoClass::ProcessAIDecision()
{
  SlaveManagerClass *slaveManager; // ecx
  int Type; // eax
  int v4; // eax
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int IvanIconFlickerRate; // edx
  unsigned int *IvanDamage; // ecx
  Cell *v10; // ebx
  unsigned int v11; // edi
  Cell *NeighbourContent; // eax
  unsigned int *v13; // eax
  House *owner; // ecx
  char *MissionControl; // eax
  int v17; // eax
  int vfptr; // edx

  slaveManager = (SlaveManagerClass *)this->slaveManager; /*0x740815*/
  if ( slaveManager /*0x74083b*/
    && this->missionStartTime + *(unsigned int *)dword_8871E0->Paranoid < (int)dword_A8ED84
    && SlaveManagerClass::ShouldWakeUpNow(slaveManager) )
  {
    BuildingClass::InitBuildLimit((BuildingClass *)this->slaveManager); /*0x74084a*/
  LABEL_34:
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x740a1f*/
    (*((unsigned short *)&(v17))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x740a2f*/
    return v17 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x740a4f*/
  }
  Type = this->Type; /*0x740854*/
  if ( *(unsigned char *)(Type + 3598) || Type->Weeder_2 ) /*0x740864*/
  {
    if ( (uint8_t)House::IsCurrentPlayer((House *)this->owner) ) /*0x740874*/
    {
      if ( this->Type->Teleporter ) /*0x740949*/
      {
        v10 = (Cell *)this->GetCellCoords(); /*0x740961*/
        v11 = 0; /*0x740963*/
        while ( 1 ) /*0x740968*/
        {
          NeighbourContent = (Cell *)Cell::GetNeighbourContent(v10, v11); /*0x740968*/
          v13 = Cell::IsBridge(NeighbourContent); /*0x74096f*/
          if ( v13 ) /*0x740976*/
          {
            if ( *(unsigned char *)(v13[328] + 5819) && v13->u32_21C == this->owner ) /*0x740996*/
              goto LABEL_30; /*0x740996*/
          }
          if ( (int)++v11 >= 8 ) /*0x74099c*/
          {
            if ( ((double (__thiscall *)(UnitClass *))*(unsigned int *)&this->vfptr->target)(this) != 1.0 ) /*0x7409b3*/
              break; /*0x7409b3*/
            if ( !this->locomotor ) /*0x7409b9*/
              sub_7DC720(-2147467261); /*0x7409c8*/
            if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor + 16))(this->locomotor) ) /*0x7409d6*/
              break; /*0x7409db*/
            goto LABEL_30; /*0x7409db*/
          }
        }
      }
    }
    else
    {
      v4 = this->Type; /*0x740881*/
      v5 = 0; /*0x740887*/
      if ( v4->PoweredUnit > 0 ) /*0x740891*/
      {
        while ( DynamicVector::GetOrGrow( /*0x7408b6*/
                  (DynamicVector *)&this->owner->ownedBuildingTypes,
                  *(unsigned int *)(*(unsigned int *)(v4->DeploysInto + 4 * v5) + 3576)) <= 0 )
        {
          v4 = this->Type; /*0x7408b8*/
          if ( ++v5 >= v4->PoweredUnit ) /*0x7408c5*/
            goto LABEL_11; /*0x7408c5*/
        }
        if ( !this->Type->Harvester_2 || !this->owner->unknownBool242 ) /*0x740922*/
        {
  LABEL_30:
          this->vt_slot_488(10, 0); /*0x7409e1*/
          return 1; /*0x7409f7*/
        }
      }
    }
  }
  LABEL_11:
  v6 = this->Type->VoiceSelectDeactivated; /*0x7408c7*/
  if ( v6 ) /*0x7408d5*/
  {
    v7 = 0; /*0x7408e1*/
    IvanIconFlickerRate = dword_8871E0->IvanIconFlickerRate; /*0x7408e3*/
    if ( IvanIconFlickerRate > 0 ) /*0x7408eb*/
    {
      IvanDamage = (unsigned int *)dword_8871E0->IvanDamage; /*0x7408f1*/
      while ( *IvanDamage != v6 ) /*0x7408f9*/
      {
        ++v7; /*0x7408ff*/
        ++IvanDamage; /*0x740900*/
        if ( v7 >= IvanIconFlickerRate ) /*0x740905*/
          goto LABEL_35; /*0x740905*/
      }
      owner = (House *)this->owner; /*0x7409f8*/
      if ( owner->__pad_1F0[3] ) /*0x7409fe*/
      {
        if ( !(uint8_t)House::IsCurrentPlayer(owner) ) /*0x740a08*/
        {
          this->vt_slot_488(16, 0); /*0x740a19*/
          goto LABEL_34; /*0x740a19*/
        }
      }
    }
  }
  LABEL_35:
  if ( this->Type->Weeder_2 ) /*0x740a56*/
  {
    if ( this->FootClass_field_bool_6B8[0] ) /*0x740a60*/
    {
      vfptr = this->vfptr; /*0x740a6a*/
      this->FootClass_field_bool_6B8[0] = 0; /*0x740a72*/
      vfptr->MissionDispatch(this, 10, 0); /*0x740a79*/
    }
  }
  return FootClass::FindMovePosition((FootClass *)this); /*0x74093a*/
}
} // namespace ra2::game

// 0x740A90
namespace ra2::game {
int TechnoClass::CheckRepairNeeded() const
{
  char v2; // al

  v2 = this->u32_6E0; /*0x740a93*/
  this->u32_6D2 = 0; /*0x740a99*/
  if ( v2 || this->u32_6E1 || this->u32_6E2 ) /*0x740aae*/
  {
    (*((void (__thiscall **)(TechnoClass *, int, unsigned int))this->vfptr + 122))(this, 5, 0); /*0x740af7*/
    return 1; /*0x740afd*/
  }
  else
  {
    if ( !(uint8_t)Flag::CheckNone((Flag *)this->storedTiberium) ) /*0x740ac1*/
      Timer::StartDouble((Timer *)this->storedTiberium, *(double *)&this->u32_6C4->AudioController_3C8); /*0x740ae0*/
    return FootClass::Destru_vt139((FootClass *)this); /*0x740ae7*/
  }
}
} // namespace ra2::game

// 0x740B60
namespace ra2::game {
int TechnoClass::FindBestMovementDirection()
{

  int *v3; // ebx
  int v4; // ebp
  int v6; // eax
  int *v7; // eax
  int *v8; // eax
  unsigned short *v9; // eax
  int v10; // ecx
  int v11; // esi
  void *v12; // eax
  int **v13; // eax
  int v14; // ecx
  Object *v15; // esi
  char v16; // al
  int ClosestObjectCell; // eax
  __int64 v18; // rax
  int v19; // ecx
  int **v20; // esi
  unsigned int result; // eax
  unsigned short *v22; // eax
  int v23; // ecx
  __int16 v24; // bx
  int LandHeight; // [esp+0h] [ebp-54h]
  int v26; // [esp+1Ch] [ebp-38h]
  int *v27; // [esp+20h] [ebp-34h]
  int v28; // [esp+24h] [ebp-30h]
  __int16 v29[2]; // [esp+28h] [ebp-2Ch] BYREF
  unsigned int v30; // [esp+2Ch] [ebp-28h]
  int v31; // [esp+30h] [ebp-24h]
  char v32[4]; // [esp+34h] [ebp-20h] BYREF
  int v33; // [esp+38h] [ebp-1Ch] BYREF
  unsigned int v34[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v35[3]; // [esp+48h] [ebp-Ch] BYREF

  v3 = a2; /*0x740b64*/
  v4 = 0; /*0x740b69*/
  if ( a2 ) /*0x740b71*/
  {
    v6 = (*(int (**)(int *))(*a2 + 72))(a2); /*0x740b7c*/
    v7 = (int *)(*(int (**)(TechnoClass *, int *, int))&this->vfptr->u32_48)(this, &v33, v6); /*0x740b89*/
    v8 = *(int **)Cell::GetHeight((Cell *)&a2, v7, v35); /*0x740b96*/
  }
  else
  {
    LOWORD(a2) = *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &a2) + 0x7FFF; /*0x740bb2*/
    v8 = a2; /*0x740bb7*/
  }
  v28 = 0; /*0x740bbf*/
  v26 = -1; /*0x740bca*/
  v31 = (char)((((unsigned int)v8 >> 7) + 1) >> 1); /*0x740bd5*/
  do /*0x740d53*/
  {
    v9 = (unsigned short *)(*(int (**)(TechnoClass *, char *))&this->vfptr->airstrikeTintTimer)(this, v32); /*0x740be2*/
    v10 = v4 & 7; /*0x740bed*/
    LOWORD(v27) = LOWORD(dword_89F688[v10]) + *v9; /*0x740c03*/
    HIWORD(v27) = v9[1] + HIWORD(dword_89F688[v10]); /*0x740c0e*/
    a2 = v27; /*0x740c17*/
    if ( v3 ) /*0x740c1b*/
    {
      v11 = *v3; /*0x740c1d*/
      LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x740c2a*/
      v12 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a2); /*0x740c36*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(v3, v12, v4, LandHeight, 0, 1) /*0x740c5f*/
        || (v13 = (int **)(*(int (**)(int *, int *))(*v3 + 440))(v3, &v33), *v13 == a2) )
      {
        v14 = 128; /*0x740c74*/
        goto LABEL_16; /*0x740c79*/
      }
    }
    else
    {
      *(unsigned int *)v29 = v27; /*0x740c82*/
      v15 = (Object *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v29); /*0x740c91*/
      if ( flt_89EA40[9 * *(unsigned int *)v15->__pad_EC] != 0.0 ) /*0x740cae*/
      {
        v16 = v15->__pad_EC[56]; /*0x740cb0*/
        if ( (v16 & 0xE0) == 0 && (v16 & 0x1F) != 0x1F ) /*0x740cbe*/
        {
          v34[0] = 0; /*0x740ccb*/
          v34[1] = 0; /*0x740ccf*/
          if ( !Object::FindClosestObjectCell(v15, v34, 0, 0) /*0x740cfb*/
            || (v35[0] = 0,
                v35[1] = 0,
                ClosestObjectCell = Object::FindClosestObjectCell(v15, v35, 0, 0),
                (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, ClosestObjectCell)) )
          {
            v14 = 128; /*0x740d04*/
            goto LABEL_16; /*0x740d09*/
          }
        }
      }
    }
    v14 = -128; /*0x740d0b*/
LABEL_16:
    LOWORD(v30) = (unsigned short)v4 << 13; /*0x740d10*/
    v18 = (char)(((v30 >> 7) + 1) >> 1) - v31; /*0x740d2b*/
    v19 = v14 - ((HIDWORD(v18) ^ v18) - HIDWORD(v18)); /*0x740d30*/
    if ( v4 == 4 ) /*0x740d35*/
      v19 -= 100; /*0x740d37*/
    if ( v26 == -1 || v19 > v26 ) /*0x740d45*/
    {
      v26 = v19; /*0x740d47*/
      v28 = v4; /*0x740d4b*/
    }
    ++v4; /*0x740d4f*/
  }
  while ( v4 < 8 ); /*0x740d53*/
  v20 = a3; /*0x740d59*/
  result = 4; /*0x740d63*/
  *a3 = (int *)g_UnitSelectionState; /*0x740d68*/
  if ( v26 > 0 ) /*0x740d70*/
  {
    v22 = (unsigned short *)(*(int (**)(TechnoClass *, int ***))&this->vfptr->airstrikeTintTimer)(this, &a3); /*0x740d7b*/
    v23 = v28 & 7; /*0x740d87*/
    v24 = dword_89F688[v23]; /*0x740d8a*/
    LOWORD(v23) = v22[1] + HIWORD(dword_89F688[v23]); /*0x740da0*/
    LOWORD(a2) = *v22 + v24; /*0x740da4*/
    HIWORD(a2) = v23; /*0x740da9*/
    *v20 = a2; /*0x740db2*/
    result = dword_8458D0[v28]; /*0x740db4*/
  }
  if ( *(unsigned char *)&this->u32_6C4->qC94 ) /*0x740dc1*/
    return ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &a2) >> 12) + 1) >> 1) & 7; /*0x740de3*/
  return result; /*0x740de6*/

}
} // namespace ra2::game

// 0x740E50
namespace ra2::game {
int TechnoClass::GetAmmoCount_0() const
{
  return TechnoClass::GetAmmoCount(this);
}
} // namespace ra2::game

// 0x740EE0
namespace ra2::game {
int GetCrew_0()
{
  return TechnoClass::GetCrew(this);
}
} // namespace ra2::game

// 0x740EF0
namespace ra2::game {
int TechnoClass::EnterRepairBuilding()
{
  int v2; // eax
  int (__thiscall **vtable0)(TechnoClass *, int, unsigned int, int); // edx
  char *MissionControl; // eax
  int result; // eax

  v2 = (*((int (__thiscall **)(TechnoClass *, int, unsigned int, unsigned int))this->vfptr + 330))( /*0x740f08*/
         this,
         *(unsigned int *)&g_RulesClass_Instance + 2128,
         0,
         0);
  vtable0 = (int (__thiscall **)(TechnoClass *, int, unsigned int, int))this->vfptr; /*0x740f0e*/
  this->u32_6D2 = 0; /*0x740f10*/
  if ( !v2 ) /*0x740f19*/
  {
    if ( vtable0[330](this, *(unsigned int *)&g_RulesClass_Instance + 2128, 0, 1) ) /*0x740f2c*/
      (*((void (__thiscall **)(TechnoClass *, unsigned int, int))this->vfptr + 289))(this, 0, 1); /*0x740f3e*/
    goto LABEL_4; /*0x740f3e*/
  }
  if ( ((int (__thiscall *)(TechnoClass *, int, int))vtable0[158])(this, 2, v2) != 1 ) /*0x740f69*/
  {
  LABEL_4:
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x740f44*/
    (*((unsigned short *)&(result))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x740f54*/
    return result; /*0x740f5a*/
  }
  (*((void (__thiscall **)(TechnoClass *, int, unsigned int))this->vfptr + 122))(this, 7, 0); /*0x740f73*/
  return 1; /*0x740f59*/
}
} // namespace ra2::game

// 0x740F80
namespace ra2::game {
int TechnoClass::GetDeployProgressValue() const
{
  int v2; // ecx

  if ( *(unsigned char *)(this->u32_6C4 + 3233) ) /*0x740f87*/
    v2 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &this); /*0x740fa1*/
  else
    v2 = *TechnoClass::Vt170(this, &this); /*0x740fb7*/
  *v2 = v2; /*0x740fa7*/
}
} // namespace ra2::game

// 0x740FD0
namespace ra2::game {
int TechnoClass::CheckUnitFireConstraints() const
{

  int result; // eax
  TechnoClass *spawnManager; // ecx
  int v8; // edi
  CellClass *v9; // eax
  char v10; // bl
  int v11; // eax
  unsigned __int8 *v12; // ebx
  BuildingClass *v13; // eax
  BuildingClass *v14; // edi
  unsigned __int8 *v16; // eax
  unsigned char *v17; // eax
  int *Value; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  __int16 v22; // cx
  unsigned int v23[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->u32_6D8 >= 0 ) /*0x740fe1*/
    return 6; /*0x740fef*/
  spawnManager = (TechnoClass *)this->spawnManager; /*0x740ff2*/
  if ( spawnManager && TechnoClass::CountPassengers(spawnManager) ) /*0x740ffc*/
    return 10; /*0x741011*/
  if ( this->rockerLinkedUnit ) /*0x741014*/
    return 5; /*0x74102a*/
  v8 = a4; /*0x741031*/
  result = TriggerTypeClass::ReadINI(this, a2, a3, a4, a5); /*0x74103e*/
  a5 = result; /*0x741045*/
  if ( !result || result == 2 ) /*0x74104e*/
  {
    v23[0] = this->location[0]; /*0x74105c*/
    v23[1] = this->location[1]; /*0x741068*/
    v23[2] = this->location[2]; /*0x74106f*/
    v9 = Coord::To_Cell((Coord *)&dword_87F7E8, v23); /*0x741078*/
    v10 = BuildingClass::CheckC4Active((BuildingClass *)v9); /*0x741084*/
    if ( *(unsigned char *)(this->u32_6C4 + 3602) /*0x7410a6*/
      && (*(unsigned __int8 (**)(TechnoClass *))(this->vfptr + 1252))(this)
      && !v10 )
    {
      return 11; /*0x7410b4*/
    }
    result = a5; /*0x7410b7*/
  }
  if ( !result )
  {
    if ( !this->isTether[0]
      || (v11 = Array::Get((Array *)this, 0),
          result = (*(int (**)(int))(*(unsigned int *)v11 + 44))(v11),
          result != 6) )
    {
      v12 = *(unsigned __int8 **)(*(int (**)(TechnoClass *, int))&this->vfptr->barrelRecoil)(this, v8); /*0x7410f7*/
      if ( TechnoClass::GetValue(this, -1) < 0 ) /*0x741104*/
      {
        v13 = (BuildingClass *)AbstractClass::IsTechno((AbstractClass *)a3); /*0x741108*/
        v14 = v13; /*0x74110d*/
        if ( !v13 ) /*0x741111*/
          return 5; /*0x741111*/
        if ( !(*(unsigned __int8 (**)(BuildingClass *))(v13->vfptr + 128))(v13) ) /*0x741117*/
          return 5; /*0x741117*/
        BuildingClass::GetHealthRatio(v14); /*0x741123*/
        _EAX = dword_8871E0; /*0x741128*/
        __asm /*0x74112d*/
        {
          fcomp qword ptr [eax+16F8h]
          fnstsw ax
        }
        if ( (BYTE1(_EAX) & 1) == 0 ) /*0x741138*/
          return 5; /*0x741146*/
      }
      v16 = (unsigned __int8 *)this->u32_6C4; /*0x741149*/
      if ( !v16[1710] && this->q5A4 ) /*0x741159*/
        return 7; /*0x74116f*/
      if ( !v12[321] ) /*0x741172*/
      {
        if ( v16[3434] ) /*0x74117c*/
        {
          if ( !this->q674 ) /*0x7411a3*/
            sub_7DC720(-2147467261); /*0x7411b2*/
          if ( (*(unsigned __int8 (**)(unsigned int))(*this->q674 + 128))(this->q674) ) /*0x7411c0*/
            return 7; /*0x7411d6*/
        }
        else if ( this->q5A4 ) /*0x741186*/
        {
          return 7; /*0x74119c*/
        }
      }
      if ( (v12[298] || v12[297]) && this->q5A4 )
      {
        return 7; /*0x7411fa*/
      }
      else if ( this->temporalUsing && this->q5A4 )
      {
        return 7; /*0x74121d*/
      }
      else if ( this->u32_68D || !this->u32_6AF || *(unsigned int *)(*((unsigned int *)v12 + 40) + 732) )
      {
        if ( v12[299]
          || (v17 = (unsigned char *)this->u32_6C4, v17[3609])
          || v17[3608]
          || (!v17[3233]
            ? (Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &a4))
            : (Value = ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &a4)),
              v19 = *Value,
              v20 = *(unsigned int *)(*((unsigned int *)v12 + 40) + 732) != 0 ? 16 : 8,
              v21 = ObjectClass::CalcTargetFacing((ObjectClass *)this, &a4, (int)a3),
              LOBYTE(v22) = 0,
              HIBYTE(v22) = v20,
              abs16(v22) >= (int)abs16(v19 - *(unsigned short *)v21)) )
        {
          if ( !this->q674 ) /*0x741300*/
            sub_7DC720(-2147467261); /*0x74130f*/
          result = (*(int (**)(unsigned int))(*this->q674 + 140))(this->q674); /*0x74131d*/
          if ( !result ) /*0x741325*/
            return a5; /*0x741327*/
        }
        else
        {
          return 2; /*0x7412f4*/
        }
      }
      else
      {
        return 4; /*0x741250*/
      }
    }
  }
  return result; /*0x740fe3*/

}
} // namespace ra2::game

// 0x741340
namespace ra2::game {
int TechnoClass::FireWeaponBurst()
{

  unsigned int *v5; // ecx
  bool v7; // bl
  int v8; // edx
  int v9; // edx
  BulletClass *v10; // edi
  int v11; // ecx
  int v12; // eax
  char v13; // al
  int *disguiseBlinkTimer; // esi
  int v15; // ecx
  int v16; // [esp+18h] [ebp-8h]
  unsigned int *v17; // [esp+28h] [ebp+8h]

  v5 = *(unsigned int **)(*(int (**)(TechnoClass *, int))&this->vfptr->barrelRecoil)(this, a3); /*0x74135c*/
  v17 = v5; /*0x741360*/
  if ( !v5 ) /*0x741364*/
    return 0; /*0x74136d*/
  v7 = 0; /*0x741371*/
  if ( !a3 ) /*0x741376*/
  {
    v8 = this->currentBurstIndex % (int)v5[39]; /*0x74137f*/
    if ( v8 >= 2 ) /*0x741388*/
      v9 = -1; /*0x741399*/
    else
      v9 = *(unsigned int *)(this->u32_6C4 + 4 * v8 + 3648); /*0x741390*/
    v7 = this->q6C0 != -1 && v9 != -1; /*0x7413ae*/
  }
  if ( (*(int (**)(TechnoClass *, int, int, int))&this->vfptr->q3C0)(this, a2, a3, 1) ) /*0x7413bc*/
    return 0; /*0x74147b*/
  v10 = (BulletClass *)TechnoClass::FireWeapon(this); /*0x7413d3*/
  if ( v10 ) /*0x7413d7*/
  {
    v11 = this->u32_6C4; /*0x7413dd*/
    v12 = *(unsigned int *)(v11 + 1668); /*0x7413e3*/
    if ( v12 > 0 && this->ammo < v12 && !*(unsigned char *)(v11 + 3364) ) /*0x7413f5*/
      TechnoClass::CalcAnimDelay(this); /*0x741401*/
    if ( !v7 ) /*0x741408*/
    {
      v13 = *(unsigned char *)(this->u32_6C4 + 3677); /*0x741410*/
      if ( v13 > 0 ) /*0x741418*/
        this->q6C0 = 2 * v13 - 1; /*0x741421*/
    }
    if ( *(unsigned char *)(v10->BulletClass_field_0xAC + 748) ) /*0x74142d*/
      BulletClass::InitScalable(v10); /*0x741439*/
    if ( *(unsigned char *)(this->u32_6C4 + 3378) ) /*0x741444*/
    {
      disguiseBlinkTimer = this->disguiseBlinkTimer; /*0x741457*/
      v15 = v17[79]; /*0x74145e*/
      *disguiseBlinkTimer = *(unsigned int *)&stru_A8E960.random[528]; /*0x741465*/
      disguiseBlinkTimer[1] = v16; /*0x74146b*/
      disguiseBlinkTimer[2] = v15; /*0x741471*/
      return (int)v10->__pad_0; /*0x741478*/
    }
  }
  return (int)v10->__pad_0; /*0x741366*/

}
} // namespace ra2::game

// 0x7414A0
namespace ra2::game {
int TechnoClass::GetAverageDamageScore() const
{

  unsigned __int8 *v2; // eax
  double result; // st7

  v2 = (unsigned __int8 *)this->u32_6C4; /*0x7414a3*/
  if ( v2[3598] || v2[3599] ) /*0x7414b3*/
  {
    Float4::Sum(&this->tiltSidewaysAngle); /*0x7414cb*/
    _EAX = this->u32_6C4; /*0x7414d0*/
    __asm { fidiv dword ptr [eax+800h] } /*0x7414d7*/
  }
  else
  {
    __asm { fld ds:dbl_7E2800 } /*0x7414bd*/
  }
  return result; /*0x7414c3*/

}
} // namespace ra2::game

// 0x7416A0
namespace ra2::game {
int TechnoClass::ProcessSpecialUnitDeployCrush()
{

  TechnoClass *v4; // ebp
  char *v6; // esi
  char v7; // bl
  unsigned int *v8; // eax
  TechnoClass *v9; // esi
  unsigned int *v10; // eax
  int vfptr; // eax
  TechnoClass *nextObject; // ebp
  TechnoClass *v13; // ebp
  int v14; // edx
  unsigned int *v15; // eax
  TechnoClass *v16; // [esp-4h] [ebp-2Ch]
  __int16 v17[2]; // [esp+Ch] [ebp-1Ch] BYREF
  int v18; // [esp+10h] [ebp-18h] BYREF
  unsigned int v19[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v20[3]; // [esp+1Ch] [ebp-Ch] BYREF
  Math *v21; // [esp+2Ch] [ebp+4h]
  char v22; // [esp+30h] [ebp+8h]

  v6 = (char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)a2->__pad_0); /*0x7416b7*/
  v7 = 0; /*0x7416b9*/
  if ( (*(&v6->u32_140) & 0x100) != 0 ) /*0x7416c4*/
  {
    if ( this->onBridge[0] /*0x74172f*/
      || (v8 = (unsigned int *)(*(int (**)(TechnoClass *, int *))&this->vfptr->u32_48)(this, &v18),
          LOWORD(v21) = *v8 / 256,
          HIWORD(v21) = v8[1] / 256,
          *(unsigned int *)v17 = v21,
          *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17) + 283) == v6[283] + 4) )
    {
      v7 = 1; /*0x741731*/
    }
  }
  if ( *(unsigned char *)(this->u32_6C4 + 3368) /*0x741747*/
    || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(&this->vfptr, 17) )
  {
    if ( (unsigned char)a3 ) /*0x74175a*/
    {
      if ( v7 ) /*0x74175e*/
      {
        if ( (v6->q128 & 0x1F) != 0 ) /*0x741767*/
          Cell::ApplyDamage((Cell *)v6, (int)&dword_B1CFE8, 1, 0, 1); /*0x74177a*/
      }
      else if ( (v6->q124 & 0x1F) != 0 ) /*0x74178f*/
      {
        Cell::ApplyDamage((Cell *)v6, (int)&dword_B1CFE8, 1, 0, 0); /*0x741797*/
      }
    }
    else
    {
      if ( v7 ) /*0x74179b*/
        v9 = (TechnoClass *)v6->q0E8; /*0x74179d*/
      else
        v9 = (TechnoClass *)v6->u32_E4; /*0x7417a5*/
      v22 = 0; /*0x7417ad*/
      if ( v9 ) /*0x7417b7*/
      {
        v16 = v4; /*0x7417bd*/
        do /*0x74191f*/
        {
          if ( !ObjectClass::IsCrushable(v9, this) /*0x741811*/
            || (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v9)
            && !*(unsigned char *)&this->u32_6C4->qC94
            || (v10 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned int *))(v9->vfptr + 72))(v9, v20),
                Math::DistSq2D((Math *)this, v10) >= 0x4000)
            || v9->isFallingDown[0] )
          {
            v9 = (TechnoClass *)v9->nextObject; /*0x74191a*/
          }
          else if ( (*(int (**)(TechnoClass *, TechnoClass *))(v9->vfptr + 44))(v9, v16) == 15 /*0x741849*/
                 && *(unsigned char *)(v9[1].ironTintTimer[1] + 3782)
                 && *v9->vtable2.hasParachute == this
                 && !*(unsigned char *)&this->u32_6C4->qC94 )
          {
            vfptr = this->vfptr; /*0x741859*/
            nextObject = (TechnoClass *)v9->nextObject; /*0x74185b*/
            v16 = 0; /*0x74185e*/
            this->isOwnedByCurrentPlayer[0] = v9->isOwnedByCurrentPlayer[0]; /*0x741862*/
            (*(void (**)(TechnoClass *))(vfptr + 220))(this); /*0x741868*/
            (*(void (**)(TechnoClass *, int, int))&this->vfptr->isALoaner)(this, v9->owner, 1); /*0x74187b*/
            (*(void (**)(TechnoClass *))(v9->vfptr + 248))(v9); /*0x741885*/
            v9 = nextObject; /*0x74188b*/
          }
          else
          {
            v13 = (TechnoClass *)v9->nextObject; /*0x741894*/
            if ( (*(int (**)(TechnoClass *))(v9->vfptr + 44))(v9) == 1 ) /*0x7418a4*/
              v22 = 1; /*0x7418a6*/
            v19[0] = this->location[0]; /*0x7418b8*/
            v14 = v9->vfptr; /*0x7418bc*/
            v19[1] = this->location[1]; /*0x7418c1*/
            v20[0] = this->location[2]; /*0x7418c8*/
            v15 = (unsigned int *)(*(int (**)(TechnoClass *))(v14 + 136))(v9); /*0x7418ce*/
            StartAudioControllerAt(v15[124], v19, 0); /*0x7418dc*/
            (*(void (**)(TechnoClass *))(v9->vfptr + 368))(v9); /*0x7418e5*/
            v16 = this; /*0x7418ed*/
            (*(void (**)(TechnoClass *))(v9->vfptr + 224))(v9); /*0x7418f0*/
            (*(void (**)(TechnoClass *, unsigned int))(v9->vfptr + 292))(v9, 0); /*0x7418fc*/
            (*(void (**)(TechnoClass *))(v9->vfptr + 212))(v9); /*0x741906*/
            (*(void (**)(TechnoClass *))(v9->vfptr + 248))(v9); /*0x741910*/
            v9 = v13; /*0x741916*/
          }
        }
        while ( v9 ); /*0x74191f*/
        if ( v22 ) /*0x74192c*/
          (*(void (**)(TechnoClass *, unsigned int))&this->vfptr->attackedTargets)(this, 0); /*0x741933*/
      }
    }
  }

}
} // namespace ra2::game

// 0x7440B0
namespace ra2::game {
int TechnoClass::ReturnCapturedFlag()
{
  int v2; // eax
  HouseClass **v3; // edi
  int16_t *v4; // eax
  unsigned char v6[4]; // [esp+4h] [ebp-4h] BYREF

  if ( !(uint8_t)TechnoClass::CleanupDirection((FootClass *)this) ) /*0x7440b4*/
    return 0; /*0x7440fb*/
  v2 = this->u32_6CC; /*0x7440bd*/
  if ( v2 != -1 ) /*0x7440c6*/
  {
    v3 = (HouseClass **)((char *)stru_A80220.vfptr3 + 4 * v2); /*0x7440d3*/
    v4 = (int16_t *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->vfptr + 110))(this, v6); /*0x7440dd*/
    HouseClass::DroppedFlag(*v3, v4, 0); /*0x7440e6*/
    this->u32_6CC = -1; /*0x7440eb*/
  }
  return 1; /*0x7440f8*/
}
} // namespace ra2::game

// 0x744100
namespace ra2::game {
int TechnoClass::SelectAITarget()
{
  SlaveManagerClass *slaveManager; // ecx
  char *MissionControl; // eax
  int v4; // eax

  slaveManager = this->slaveManager; /*0x744103*/
  if ( !slaveManager /*0x744129*/
    || this->missionStartTime + *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6032) >= *(int *)&((unsigned int *)&stru_A8EB00)[416]
    || !SlaveManagerClass::ShouldWakeUpNow(slaveManager) )
  {
    return FootClass::FindAITarget((FootClass *)this); /*0x74416e*/
  }
  BuildingClass::InitBuildLimit((BuildingClass *)this->slaveManager); /*0x744138*/
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x74413f*/
  (*((unsigned short *)&(v4))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x74414d*/
  return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x74416a*/
}
} // namespace ra2::game

// 0x744180
namespace ra2::game {
int TechnoClass::AreBuildingFlagsClear() const
{
  int *storedTiberium; // esi

  storedTiberium = this->storedTiberium; /*0x744181*/
  return !(uint8_t)Window::IsVisible((Window *)this->storedTiberium) /*0x7441aa*/
      && !(uint8_t)BuildingClass::CheckFlag24((BuildingClass *)storedTiberium)
      && !(uint8_t)BuildingClass::CheckPowerFlags((BuildingClass *)storedTiberium);
}
} // namespace ra2::game

// 0x7441B0
namespace ra2::game {
int TechnoClass::MarkCellImpassable()
{
  CellClass *v1; // edi
  int result; // eax

  v1 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, this); /*0x7441c7*/
  if ( (signed int)(dword_B1D0AC + Cell::GetGroundHeight(this)) <= (int)this->vfptr2 && (v1->flags[0] & 0x100) != 0 ) /*0x7441e6*/
  {
    result = v1->altOccupationFlags; /*0x7441e8*/
    (*((unsigned char *)&(result))) = result | 0x20; /*0x7441ee*/
    v1->altOccupationFlags = result; /*0x7441f0*/
  }
  else
  {
    result = v1->occupationFlags; /*0x7441fb*/
    (*((unsigned char *)&(result))) = result | 0x20; /*0x744201*/
    v1->occupationFlags = result; /*0x744203*/
  }
  return result; /*0x7441f6*/
}
} // namespace ra2::game

// 0x744210
namespace ra2::game {
int TechnoClass::ClearCellImpassable()
{
  CellClass *v1; // edi
  int occupationFlags; // eax

  v1 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, this); /*0x744227*/
  if ( (signed int)(dword_B1D0AC + Cell::GetGroundHeight(this)) > (int)this->vfptr2 ) /*0x74423b*/
  {
    occupationFlags = v1->occupationFlags; /*0x744250*/
    (*((unsigned char *)&(occupationFlags))) = occupationFlags & 0xDF; /*0x744256*/
    v1->occupationFlags = occupationFlags; /*0x744258*/
  }
  else
  {
    occupationFlags = v1->altOccupationFlags; /*0x74423d*/
    (*((unsigned char *)&(occupationFlags))) = occupationFlags & 0xDF; /*0x744243*/
    v1->altOccupationFlags = occupationFlags; /*0x744245*/
  }
  return occupationFlags; /*0x74424b*/
}
} // namespace ra2::game

// 0x744270
namespace ra2::game {
int TechnoClass::CanBeTargeted() const
{
  int currentMission; // eax
  unsigned int *v3; // edi
  int queuedMission; // esi
  int *location; // esi
  CellClass *v7; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int16_t v14; // cx
  unsigned int v15[2]; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  currentMission = this->currentMission; /*0x744277*/
  if ( currentMission == 6 /*0x7442ab*/
    || currentMission == 21
    || this->u32_6E1
    || this->u32_6E2
    || this->u32_6D1 )
  {
    return 0; /*0x7442ab*/
  }
  if ( this->queuedMission != 7 ) /*0x7442c0*/
  {
    if ( !this->q674 ) /*0x7442c2*/
      sub_7DC720(-2147467261); /*0x7442d1*/
    if ( (*(uint8_t (__stdcall **)(unsigned int))(*this->unknown_short_3C8) + 128))(this->q674) /*0x74431f*/
      && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 114))(this) >= 0
      && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this) != 5
      && ((*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this) != 1 || this->target)
      && !this->missionQueued )
    {
      return 0; /*0x74431f*/
    }
  }
  if ( !(uint8_t)Flag::CheckNone((Flag *)this->storedTiberium) ) /*0x74432f*/
    return 0; /*0x744336*/
  v3 = (unsigned int *)Array::Get((Array *)this, 0); /*0x744341*/
  if ( v3 ) /*0x744345*/
  {
    if ( (*(int (__thiscall **)(unsigned int *))(*v3 + 44))(v3) == 6 ) /*0x744351*/
    {
      if ( *(unsigned char *)(v3[328] + 5821) ) /*0x74435d*/
      {
        queuedMission = this->queuedMission; /*0x74436b*/
        if ( queuedMission != 2 && queuedMission != 7 ) /*0x74437d*/
          return 0; /*0x74438a*/
      }
    }
  }
  else
  {
    location = this->location; /*0x74438b*/
    v15[0] = *location; /*0x744395*/
    v15[1] = location->Y; /*0x7443a1*/
    v16 = location->Z; /*0x7443ad*/
    v7 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v15); /*0x7443b1*/
    v8 = Cell::IsBridge((Cell *)v7); /*0x7443b8*/
    if ( v8 ) /*0x7443bf*/
    {
      if ( *(unsigned char *)(v8[328] + 5821) ) /*0x7443cb*/
      {
        v9 = v8 + 39; /*0x7443de*/
        v10 = v8[39]; /*0x7443e0*/
        v11 = v9[1]; /*0x7443e2*/
        v16 = v9[2]; /*0x7443e8*/
        (*((unsigned short *)&(v15[0]))) = v10 / 256; /*0x7443f8*/
        v11 = v11; /*0x7443fd*/
        v13 = location->Y; /*0x744406*/
        (*(((unsigned short *)&(v15[0])) + 1)) = v11 / 256; /*0x744411*/
        v14 = v13 / 256 - (*(((unsigned short *)&(v15[0])) + 1)); /*0x744452*/
        if ( (uint16_t)(*location / 256) == (*((unsigned short *)&(v15[0]))) && v14 == 1 ) /*0x74445d*/
          return 0; /*0x74445d*/
      }
    }
  }
  return 1; /*0x744383*/
}
} // namespace ra2::game

// 0x744720
namespace ra2::game {
int TechnoClass::NotifyTeamOnDestruction()
{
  TechnoClass *attachedTag; // ecx
  TeamClass *v4; // ecx
  TeamClass *v5; // ecx

  attachedTag = (TechnoClass *)this->attachedTag; /*0x744728*/
  if ( attachedTag && (this->waveEffect == (WaveClass *)-1 || !(uint8_t)TechnoClass::HasAnyMission(attachedTag)) ) /*0x744738*/
  {
    if ( a2 ) /*0x744743*/
      TeamClass::Update_0((TeamClass *)this->attachedTag, 7, (int)this, g_UnitSelectionState, 0, 0); /*0x744755*/
    v4 = (TeamClass *)this->attachedTag; /*0x74475a*/
    if ( v4 ) /*0x74475f*/
      TeamClass::Update_0(v4, 48, (int)this, g_UnitSelectionState, 0, 0); /*0x74476f*/
    v5 = (TeamClass *)this->attachedTag; /*0x744774*/
    if ( v5 ) /*0x744779*/
      TeamClass::Update_0(v5, 29, (int)this, g_UnitSelectionState, 0, 0); /*0x744788*/
  }
  return TechnoClass::RegisterKill(this); /*0x744795*/
}
} // namespace ra2::game

// 0x7463A0
namespace ra2::game {
int TechnoClass::TransferSlavedUnit()
{
  int v3; // esi
  unsigned char *v5; // esi
  int v7; // [esp-4h] [ebp-Ch]

  if ( (HouseClass *)a2 == this->owner ) /*0x7463ae*/
    return 0; /*0x7463ed*/
  v3 = v3; /*0x7463b0*/
  v5 = (unsigned char *)this->u32_6C8; /*0x7463b1*/
  this->u32_6D0 = 0; /*0x7463b9*/
  if ( v5 ) /*0x7463c0*/
  {
    v5->vt_slot_980(a2, 1); /*0x7463c9*/
    this->u32_6C8 = v5; /*0x7463cf*/
    v5[1744] = 1; /*0x7463d5*/
  }
  return FootClass::LiberateMember((FootClass *)a2, (int)this, 1, v3); /*0x7463e7*/
}
} // namespace ra2::game

// 0x746420
namespace ra2::game {
int TechnoClass::CaptureTurret()
{
  TemporalClass *v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // ebp
  int (__thiscall **vtable0)(TechnoClass *, int); // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  v3 = (TemporalClass *)a2[157]; /*0x74642c*/
  if ( !v3 ) /*0x746434*/
    goto LABEL_9; /*0x746434*/
  v4 = a2[187]; /*0x74643a*/
  v5 = a2[189]; /*0x746440*/
  v6 = 0; /*0x746447*/
  if ( v4 == -1 ) /*0x74644c*/
    goto LABEL_5; /*0x74644c*/
  if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4 < v5 ) /*0x746458*/
  {
    v5 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4; /*0x74645a*/
  LABEL_5:
    if ( v5 ) /*0x74645e*/
      v6 = 1; /*0x746460*/
  }
  this->temporalUsing = v3; /*0x746465*/
  v3->creationFrame = (int)this; /*0x74646b*/
  a2[157] = 0; /*0x746472*/
  UnitClass::SetTurret((UnitClass *)this, 7u); /*0x74647c*/
  if ( v6 ) /*0x746484*/
  {
    vtable0 = (int (__thiscall **)(TechnoClass *, int))this->vfptr; /*0x74648c*/
    ++this->currentBurstIndex; /*0x746493*/
    v8 = vtable0[198](this, 7); /*0x746499*/
    this->diskLaserTimer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x7464ab*/
    this->diskLaserTimer[1] = v11; /*0x7464b5*/
    this->diskLaserTimer[2] = v8; /*0x7464b8*/
  }
  LABEL_9:
  v9 = (*(int (__thiscall **)(unsigned int *))(*a2 + 132))(a2); /*0x7464bb*/
  return UnitClass::SetTurret((UnitClass *)this, *(unsigned int *)(v9 + 1672)); /*0x7464d3*/
}
} // namespace ra2::game

// 0x7464E0
namespace ra2::game {
int TechnoClass::TransferTurret()
{
  TemporalClass *temporalUsing; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // ebp
  FactoryClass *v7; // ecx
  int v8; // edx
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  if ( !a2 ) /*0x7464ee*/
    return UnitClass::SetTurret((UnitClass *)this, 0); /*0x7464ee*/
  temporalUsing = this->temporalUsing; /*0x7464f4*/
  if ( !temporalUsing ) /*0x7464fc*/
    return UnitClass::SetTurret((UnitClass *)this, 0); /*0x7464fc*/
  v4 = this->diskLaserTimer[0]; /*0x746502*/
  v5 = this->diskLaserTimer[2]; /*0x746508*/
  v6 = 0; /*0x74650f*/
  if ( v4 == -1 ) /*0x746514*/
    goto LABEL_6; /*0x746514*/
  if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4 < v5 ) /*0x746520*/
  {
    v5 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4; /*0x746522*/
  LABEL_6:
    if ( v5 ) /*0x746526*/
      v6 = 1; /*0x746528*/
  }
  a2[157] = (int)temporalUsing; /*0x74652d*/
  this->temporalUsing->creationFrame = (int)a2; /*0x746539*/
  this->temporalUsing = 0; /*0x74653c*/
  v7 = (FactoryClass *)a2[157]; /*0x746546*/
  if ( v7 && v7->production[1] ) /*0x746550*/
    FactoryClass::CompleteItem(v7); /*0x746557*/
  if ( v6 ) /*0x74655f*/
  {
    v8 = *a2; /*0x746567*/
    ++a2[238]; /*0x74656c*/
    v9 = (*(int (__thiscall **)(int *, unsigned int))(v8 + 792))(a2, 0); /*0x746574*/
    a2[187] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x746586*/
    a2[188] = v11; /*0x74658c*/
    a2[189] = v9; /*0x74658f*/
  }
  return UnitClass::SetTurret((UnitClass *)this, 0); /*0x74659b*/
}
} // namespace ra2::game

// 0x746670
namespace ra2::game {
int TechnoClass::ApplyObjectEffect()
{
  int v3; // eax
  int v4; // eax
  ObjectTypeClass *v5; // eax

  if ( a2 ) /*0x74667a*/
  {
    v3 = (*(int (__thiscall **)(unsigned int *))(*a2 + 44))(a2) - 1; /*0x746687*/
    if ( v3 ) /*0x746688*/
    {
      v4 = v3 - 10; /*0x74668a*/
      if ( v4 ) /*0x74668d*/
      {
        if ( v4 != 25 ) /*0x746692*/
          return; /*0x746692*/
        v5 = (ObjectTypeClass *)(*(int (__thiscall **)(unsigned int *))(*a2 + 136))(a2); /*0x746698*/
        goto LABEL_6; /*0x746698*/
      }
      if ( (*((uint8_t (__thiscall **)(TechnoClass *, unsigned int *))this->vfptr + 230))(this, a2) ) /*0x7466c0*/
      {
        v5 = *(ObjectTypeClass **)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * a2[17]); /*0x7466d3*/
  LABEL_6:
        this->disguiseAsType = v5; /*0x74669e*/
        this->disguisedAsHouse = 0; /*0x7466a7*/
        TechnoClass::ActivateEffect(this); /*0x7466b1*/
      }
    }
    else if ( (*(uint8_t (__thiscall **)(unsigned int *))(*a2 + 196))(a2) ) /*0x7466dc*/
    {
      this->disguiseAsType = (ObjectTypeClass *)(*(int (__thiscall **)(unsigned int *, int))(*a2 + 204))(a2, 1); /*0x7466f2*/
      this->disguisedAsHouse = (HouseClass *)(*(int (__thiscall **)(unsigned int *, int))(*a2 + 208))(a2, 1); /*0x746707*/
      TechnoClass::ActivateEffect(this); /*0x74670d*/
    }
  }
}
} // namespace ra2::game

// 0x746720
namespace ra2::game {
int TechnoClass::ClearAllTargets()
{
  int (**vtable0)(void); // eax
  int result; // eax

  vtable0 = (int (**)(void))this->vfptr; /*0x746723*/
  this->isDisguisedFlag = 0; /*0x746725*/
  result = vtable0[295](); /*0x74672c*/
  this->disguiseAsType = 0; /*0x746732*/
  this->disguisedAsHouse = 0; /*0x74673c*/
  return result; /*0x746746*/
}
} // namespace ra2::game

// 0x746750
namespace ra2::game {
int TechnoClass::IsGuardingTarget() const
{

  unsigned int *v2; // eax
  HouseClass *v3; // ebx
  int disguisedAsHouse; // esi
  bool result; // al
  unsigned __int16 *v6; // [esp+Ch] [ebp-14h]
  __int16 v7[2]; // [esp+10h] [ebp-10h] BYREF
  unsigned char v8[12]; // [esp+14h] [ebp-Ch] BYREF
  HouseClass *other; // [esp+24h] [ebp+4h]

  result = 0; /*0x746800*/
  if ( (*(unsigned __int8 (**)(TechnoClass *))&this->vfptr->missionData)(this) ) /*0x74675a*/
  {
    v2 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))&this->vfptr->u32_48)(this, v8); /*0x746771*/
    LOWORD(v6) = *v2 / 256; /*0x746784*/
    HIWORD(v6) = v2[1] / 256; /*0x74679c*/
    *(unsigned int *)v7 = v6; /*0x7467a5*/
    v3 = (HouseClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x7467bf*/
    if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) /*0x7467d0*/
      && !(unsigned __int8)HouseClass::HasType(v3, other->relatedTagsCount) )
    {
      disguisedAsHouse = this->disguisedAsHouse; /*0x7467d9*/
      if ( (HouseClass *)disguisedAsHouse == other /*0x7467ea*/
        || !disguisedAsHouse
        || (unsigned __int8)HouseClass::IsAlliedWith(other) )
      {
        return 1; /*0x746762*/
      }
    }
  }
  return result; /*0x7467f3*/

}
} // namespace ra2::game

// 0x746B20
namespace ra2::game {
int TechnoClass::GetCommandTooltip() const
{
  int result; // eax
  unsigned int *DB; // edi
  bool v4; // bl
  int v5; // eax
  wchar_t *StringCSF; // eax

  if ( !(*((uint8_t (__thiscall **)(TechnoClass *, Object *))this->vfptr + 50))(this, dword_A83D4C) /*0x746b3e*/
    || !(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 51))(this, 1) )
  {
    if ( !(uint8_t)TechnoClass::OwnerHasPower(this) || !TechnoClass::processEMPulse(this) ) /*0x746b7c*/
      return *(unsigned int *)&this->u32_6C4->q060; /*0x746c81*/
    DB = (unsigned int *)CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x746b96*/
    if ( !DB || (*(int (__thiscall **)(unsigned int *))(*DB + 44))(DB) != 15 ) /*0x746baa*/
      goto LABEL_20; /*0x746baa*/
    v4 = *(unsigned char *)(DB[432] + 3786) != 0; /*0x746bc2*/
    v5 = TechnoClass::applyEMPulseDamage(this); /*0x746bc6*/
    switch ( v5 ) /*0x746bcd*/
    {
      case 0: /*0x746bcd*/
        StringCSF = GetStringCSF(aTipRocket, 0, g_Str_File_Unit_CPP, 11408); /*0x746be0*/
        goto LABEL_19; /*0x746be5*/
      case 1: /*0x746bcd*/
        if ( !v4 ) /*0x746bee*/
        {
          StringCSF = GetStringCSF(aTipMachinegun, 0, g_Str_File_Unit_CPP, 11412); /*0x746c01*/
          goto LABEL_19; /*0x746c06*/
        }
        break;
      case 2: /*0x746bcd*/
        StringCSF = GetStringCSF(aTipRepair, 0, g_Str_File_Unit_CPP, 11416); /*0x746c1e*/
        goto LABEL_19; /*0x746c23*/
      default:
        if ( v5 != 3 && !v4 ) /*0x746c2c*/
          goto LABEL_20; /*0x746c2c*/
        break;
    }
    StringCSF = *(wchar_t **)((*(int (__thiscall **)(unsigned int *))(*DB + 136))(DB) + 96); /*0x746c38*/
  LABEL_19:
    if ( StringCSF ) /*0x746c3d*/
    {
  LABEL_21:
      swprintf( /*0x746c55*/
        (wchar_t *const)&this->facing,
        (const size_t)&off_826960,
        StringCSF,
        *(unsigned int *)&this->u32_6C4->q060);
      return (int)&this->unknown_short_3C88; /*0x746c79*/
    }
  LABEL_20:
    StringCSF = GetStringCSF(aTipRocket, 0, g_Str_File_Unit_CPP, 11454); /*0x746c3f*/
    goto LABEL_21; /*0x746c50*/
  }
  result = (*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 52))(this, 1); /*0x746b4e*/
  if ( result ) /*0x746b56*/
    return *(unsigned int *)((*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 51))(this, 1) + 96); /*0x746b66*/
  return result; /*0x746b58*/
}
} // namespace ra2::game

// 0x746CD0
namespace ra2::game {
int TechnoClass::SelectAttackWeapon()
{
  int v2; // eax

  if ( this->airstrikeTintTimer && (v2 = this->u32_6C4, *(unsigned char *)(v2 + 1708)) ) /*0x746ce0*/
    return *(unsigned int *)(v2 + 1704); /*0x746cea*/
  else
    return TechnoClass::SelectWeapon(this); /*0x746cf8*/
}
} // namespace ra2::game

// 0x750030
namespace ra2::game {
bool FootClass::CheckAccelLimit() const
{
  int result; // eax

  if ( *(float *)this < 2.0 ) /*0x75003d*/
    JUMPOUT(0x75004C); /*0x75004c*/
  nullsub_52(); /*0x750040*/
  return result;
}
} // namespace ra2::game

// 0x7500D0
namespace ra2::game {
int FootClass::GetField() const
{
  int result; // eax

  (*((unsigned short *)&(result))) = Math::RoundToInt(*(float *)this * 100.0); /*0x7500d8*/
  return result;
}
} // namespace ra2::game

// 0x773070
namespace ra2::game {
int TechnoClass::GetWeaponRange(int weapon_index) const
{
  int v2; // eax
  double FiringDistance; // st7

  v2 = this->location[1]; /*0x773070*/
  if ( !v2 || v2->slaveOwner ) /*0x77307d*/
    return (int)this->lineTrailer; /*0x7730c0*/
  if ( v2->q295 ) /*0x773087*/
    FiringDistance = RulesClass::GetFiringDistance(); /*0x773091*/
  else
    FiringDistance = (double)*(int *)(*(unsigned int *)&g_RulesClass_Instance + 5816); /*0x77309d*/
  return TechnoClass::ComputeScanRange((TechnoClass *)weapon_index, FiringDistance); /*0x7730ba*/
}
} // namespace ra2::game

// 0x4DE580
namespace ra2::game {
int FootClass::ValidateFoundation()
{
    int planningPathIdx; // eax
    int Element; // eax
    int *v4; // eax

    planningPathIdx = this->planningPathIdx; /*0x4de583*/
    if ( planningPathIdx != -1 ) /*0x4de58c*/
    {
      Element = Array::GetElement(*(Array **)&dword_A83D4C->q140[4 * planningPathIdx + 208], this->waypointIndex[0]); /*0x4de5a3*/
      v4 = (int *)VectorClass::GetAtChecked( /*0x4de5bc*/
                    *(VectorClass **)&dword_A83D4C->q140[4 * this->planningPathIdx + 208],
                    Element);
      BuildingClass::ValidateFoundation_0(this, v4); /*0x4de5c4*/
    }
}
} // namespace ra2::game
