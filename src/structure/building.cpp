#include "structure/building.hpp"
#include "team/tag.hpp"  // g57w20m20b: TagClass 完整定义 (ProcessUpgradeEffects 附件链)
#include "entity/anim.hpp"  // AnimClass::SetField95/8 pending blocks (owner-fixed 2026-09-07)
#include "entity/terrain.hpp"  // g57w20m13: TerrainClass::ProcessUpdate (ExecuteTriggers 0x726605 站)
#include "house/house.hpp"
#include "structure/globals_structure.hpp"
#include "ui/message_list.hpp"
#include "core/globals_core.hpp"
#include "misc/audio_ext.hpp"
#include "system/map.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "type/building_type.hpp"
#include "core/reverse_marker.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"
#include "object/techno.hpp"

// ---- g57w20m13 TU vocab (hollow-body restoration truth) ----
namespace gamemd {
extern unsigned int dword_A8ED84;  // data 0xA8ED84 (ida_globals.h 同址; ProcessUpgradeEffects 0x726431/0x726488 存储)
} // namespace gamemd
// ---- g57w20m13 TU vocab end ----
#include "structure/infantry.hpp"
#include "type/infantry_type.hpp"
#include "misc/super_weapon.hpp"
#include "misc/rules.hpp"
#include "system/game_systems.hpp"

#include "system/cell.hpp"
#include "system/scenario.hpp"
#include <cstring>
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/ScriptAction_e4.hpp"  // G42.33c2: GetWaypointCoords 0x6E6AB0 (2-param w/ default)
int PlayVocClass(int a1, int a2, int a3, int a4);  // 0x750920
int StartAudioControllerAt(int a1, int a2, int a3);  // 0x7509e0
int PlayAudioAt2(int a1, int a2, int a3);  // 0x750e20
void globalHelper_051EE0(int a1, int a2, int a3);  // 0x451ee0
#include <mmsystem.h>  // G42.33c2: timeGetTime
// G42.33c14: global_funcs.hpp NOT included wholesale -- its CRT-named
// decls (_toupper/_tolower, lines 5701/5752) collide with ctype macros
// predefined via windows.h (forced /FI ida_compat.h) -> C2062. Declare
// the five fns this TU actually needs instead:
int PlayVocClass(int a1, int a2, int a3, int a4);  // 0x750920
int StartAudioControllerAt(int a1, int a2, int a3);  // 0x7509e0
int PlayAudioAt2(int a1, int a2, int a3);  // 0x750e20
void globalHelper_051EE0(int a1, int a2, int a3);  // 0x451ee0
#include "e4/classes/FacingClass_e4.hpp"  // gB C2027 supply
#include "e4/classes/Math_e4.hpp"  // gB C2027 supply

// ---- G57W20M26 vocab (ProcessRepair transplant) ----
extern char aEvaUnitrepaire[];  // raw 0x44b96e
extern char aEvaInsufficien[];  // raw 0x44bfe5
extern gamemd::VoxClass aEvaRepairing;    // raw 0x44c502 (VoxClass 实例形: thiscall this=名字表项)
extern char aEvaUnitsold[];     // raw 0x4d9f8f
extern gamemd::RulesClass *dword_8871E0;  // 0x8871E0 Rules 实例指针 (til 全成员命中)
int StartAudioControllerAt(int a1, void *a2, int a3);  // W20M26 overload (0x701494)
int PlayAudioAt2(int a1, void *a2, int a3);  // W20M26 overload (0x750e20)

// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----
extern int globalHelper_005F80;  // 词表 (canon 无条目, int 兜底) L5928
// ---- g57b5 W6 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Random_Range(int p0, int p1);  // x4:signals@0x65c7e0
void sub_7DC720(int aP1);   // g57w11 r4: misc_ext.hpp:53 同形 (TU 未载 misc_ext; raw 0x44c1ef 调用形)
int PlayHealthDependentBuildingAnim(TechnoClass *p_this);  // x4:ida@0x458330
int To_Cell(int* p0);  // x4:signals@0x565730
int Subtract(int p0, int p1, int p2);  // x4:signals@0x41c230
int StartInvulnerability(int p0);  // x4:signals@0x70e360
int Set2(int* p0);  // x4:signals@0x45aea0
int FacingClass_Set_SyncLog(int* p0);  // x4:signals@0x4c9300
int LayerClass_Pathfinding_Find(int* p0, int p1, int* p2, int16_t* p3, int p4, int p5, int p6, int p7, int p8, int p9, char p10, char p11, char p12, char p13, int16_t* p14, char p15, char p16);  // x4:signals@0x56dc20
int AllMembersValid(Team *p_this);  // x4:ida@0x65ae30
int ContainsValue(int p0);  // x4:signals@0x65adf0
int IonSensitivesShouldBeOffline(void);  // g57b5 W6: 0 参调用修正   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
} // namespace gamemd
// ---- g57b5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) ----
namespace gamemd {
    int *World_ToScreen(int* p0, int* p1);  // x4:signals@0x6d2070
    // ---- g57w11 r4 item3: raw IDA 渲染词汇壳 (调用形; 真实 this 链留证) ----
    struct Team { static bool AllMembersValid(void *a1); static int GetMember(void *a1, int a2); };   // raw 0x444177/0x44bb1b
    struct Locomotor { static int GetSpeed(void *a1); };            // raw 0x44b8ae
    struct LinkedList { static void *Pop(void *a1); };              // raw 0x44b9f0/0x44bb4c
    struct Power { unsigned int q000; static void ChangedHouse(void *a1, int a2); };  // raw 0x44bb30
    struct Timer { static void SetFlag(void *a1, int a2); };        // raw 0x44bb37
    struct VeinholeClass { static int GetState(float *a1); };       // raw 0x44bb23
    int globalHelper_088570(int a1, int a2, int a3);                // raw 0x4453a9 调用形
    struct Array { static bool ContainsValue(void *a1, int a2); };  // raw 0x443cf6 调用形
    int ScanBuildingPlacementCells(void *a1, int a2, int a3);       // raw 0x445408 调用形
    int CreateTriggerClassIfFarEnough(int a1, int a2, int a3);      // raw 0x44b960 调用形
} // namespace gamemd
// ---- g57b5 W3 end ----


// TacticalMap globals from render/globals_render.hpp

// 0x6d2140 — TacticalMap::Coord_To_Screen (thiscall: ecx=this, CoordStruct&, Point2D*)
extern gamemd::CoordStruct* Coord_To_Screen(void* pThis, const gamemd::CoordStruct& world, gamemd::Point2D* out);  // thiscall ABI, free-fn declaration

// 0x6d2790 — Cell::CreateCrater (__stdcall: int x, int y, int w, int h, char flags)
// 0x6d2790 -- Cell::CreateCrater etc: IDA global fns used via raw static-call
// form X::Fn(recv, args). Local pseudo-class structs supply exact raw arity
// (G42.33 ph2; _fwd_e4 struct fwd-decls removed with the Vector_e4.hpp include
// because MSVC lets them shadow same-name namespace/struct stubs).
namespace gamemd {

class CellClass;
class HouseClass;

// 0x5657A0 CellCoord::To_CellObj is the real member from core/cellcoord.hpp
struct CellCoord {
// p->To_CellObj(coord)).
};

// raw static-call receivers keep their raw cast targets; signatures mirror
// the raw call sites exactly (receiver-first).
struct Cell {
    static char __stdcall CreateCrater(int x, int y, int w, int h, char flags);  // 0x6d2790
    static int SetRadar(void* map, int16_t* cell);   // mis-attributed (this=map)
    static void* IsBridge(void* cell);               // 0x47c520
    static int IsPassable(void* cell);
    static int IsBuildable(void* cell);              // 0x6B25C0
    static int HasOccupierBit(void* cell, char bit);
    static void* GetNeighbourContent(void* cell, int dir);  // 0x481810
    static int GetGroundHeight(void* cell);
};

struct Radar {
    static int Update(void* map, int16_t* cell);
};

struct Tactical {
    static int AddCellToDrawList(void* tactical, int cell);  // 0x6DA7D0
};

struct House {
    static int AnnounceUpgrade(void* self, int a2);      // 0x47d2b0
    static int* GetStartCoords(void* self, void* out);  // 0x50DF30
    static int IsHumanPlayer(void* self);                // 0x50b6f0
    static int IsCurrentPlayer(void* self);              // 0x50b730
};

struct Rect_site {   // g57a5 W2e: TU-local 站点壳改名（C2011 vs utility_ext Rect）
    int left; int top; int right; int bottom;  // raw local vars (v31/v61/v69)
    static int* Construct(void* self, int x, int y, int w);
    static int Union(const void* a, const void* b, const void* out);
    static void Set(void* self, int a, int b, int c, int d);
};
#define Rect Rect_site

struct Coord2D {
    unsigned char q000[4];
    unsigned int q004;
    static int* Sub(void* self, void* a, void* b);
};

struct BuildingPlacement_site {   // g57a5 W2e: TU-local 站点壳改名（C2011 vs render_ext BuildingPlacement）
    static void *FindPosition(void *a1, void *a2);  // g57w11 r4: raw 0x500200
    static int ValidateType(void* self, int type, int mode);
};
#define BuildingPlacement BuildingPlacement_site

struct DynamicVector {
    static int GetOrGrow(gamemd::DynamicVectorClass<gamemd::SuperClass*>* vec, int index);
};

struct Vector {
    int RemoveAt(int idx);  // raw member-call on overlay vectors (0x45AE10)
};

// tree CellStruct = Vector2D<short> typedef, no Add/Set/Copy; raw bodies call
// them static-style -> free fns at raw arity.
int* CellStruct_Add(void* self, void* a, void* b);
int* CellStruct_Set(void* self, int x, int y);
int* CellStruct_Copy(void* self, void* src);
// 0x5785F0 free-fn shim (canon models it as E4Recv class method)
int IsCoordVisibleMap(void* map, void* coords);

struct RawCoord {
    static CellClass* To_Cell(void* map, void* coords);
};

// 0x50AF10 free fn (building.hpp nests the decl inside class SuperWeapon -- raw artifact)
int UpdateSuperWeaponsOwnedHouseClass(HouseClass* ownerHouse);

// ---- raw data-block overlays (flat member names as seen in raw bodies) ----
struct RawBlock_87F5F0 { unsigned char __pad_58[2048]; };
extern RawBlock_87F5F0 stru_87F5F0_raw;             // data: 0x87F5F0
struct RawBlock_A8EB00 {
    unsigned int gapE4[512];
    unsigned int ObjectTypeClass[64];
    unsigned int parent_gap[16];
};
extern RawBlock_A8EB00 stru_A8EB00_raw;             // data: 0xA8EB00
struct RawBlock_A83D50 { unsigned int q034[64]; };
extern RawBlock_A83D50 stru_A83D50_raw;             // data: 0xA83D50
struct RawBlock_AC4B30 { unsigned int __pad_EC[256]; };
extern RawBlock_AC4B30 stru_AC4B30_raw;             // data: 0xAC4B30
struct RawBlock_A80220 { unsigned int lineTrailer[16]; };
extern RawBlock_A80220 stru_A80220_raw;             // data: 0xA80220
struct RawBlock_81926C { unsigned int Type[8]; };
extern RawBlock_81926C stru_81926C_raw;             // data: 0x81926C
struct RawBlock_818E00 {
    unsigned int TiberiumSpawnType;
    unsigned int ChargerBarrels[8];
    unsigned int RunningFrames;
    unsigned int Next;
    unsigned int MinZVel[4];
    unsigned int Flamer;
};
extern RawBlock_818E00 stru_818E00_raw;             // data: 0x818E00
struct RawBlock_8A0390 {
    unsigned int bombVisible;
    unsigned int alignmentPadding69;
};
extern RawBlock_8A0390 stru_8A0390_raw;             // data: 0x8A0390


// ============================================================
// Section 1: Construction/Destruction
// ============================================================

BuildingClass::BuildingClass() noexcept
    : Type(nullptr)
    , Factory(nullptr)
    , C4Timer{}
    , BuildingClass_field_int_534(0)
    , BuildingClass_field_int_538(0)
    , OwnerCountryIndex(0)
    , C4AppliedBy(nullptr)
    , BuildingClass_field_544(0)
    , FirestormAnim(nullptr)
    , PsiWarnAnim(nullptr)
    , BuildingClass_field_timer_550{}
    , RequiresDamageFires(false)
    , FiringSWType(-1)
    , SuperWeaponToken(0)
    , Spotlight(nullptr)
    , GateTimer{}
    , LightSource(nullptr)
    , LaserFenceFrame(0)
    , FirestormWallFrame(0)
    , RepairProgress{}
    , BuildingClass_field_rect_63C{}
    , BuildingClass_field_coord_64C{}
    , BuildingClass_field_int_658(0)
    , BuildingClass_field_65C(0)
    , HasPower(false)
    , IsOverpowered(false)
    , RegisteredAsPoweredUnitSource(false)
    , SupportingPrisms(0)
    , HasExtraPowerBonus(false)
    , HasExtraPowerDrain(false)
    , FiringOccupantIndex(-1)
    , Audio7{}
    , Audio8{}
    , WasOnline(false)
    , ShowRealName(false)
    , BeingProduced(false)
    , ShouldRebuild(false)
    , HasEngineer(false)
    , CashProductionTimer{}
    , BuildingClass_field_bool_6DC(false)
    , BuildingClass_field_bool_6DD(false)
    , NeedsRepairs(false)
    , C4Applied(false)
    , NoCrew(false)
    , BuildingClass_field_bool_6E1(false)
    , BuildingClass_field_bool_6E2(false)
    , HasBeenCaptured(false)
    , ActuallyPlacedOnMap(false)
    , BuildingClass_field_bool_6E5(false)
    , IsDamaged(false)
    , IsFogged(false)
    , IsBeingRepaired(false)
    , BuildingClass_field_bool_6E9(false)
    , StuffEnabled(false)
    , HasCloakingData(0)
    , CloakRadius(0)
    , Translucency(0)
    , StorageFilledSlots(0)
    , SecretProduction(nullptr)
    , ColorAdd{}
    , BuildingClass_field_int_6FC(0)
    , BuildingClass_field_short_700(0)
    , UpgradeLevel(0)
    , GateStage(0)
    , PrismStage((PrismChargeState)(0))
    , PrismTargetCoords{}
    , DelayBeforeFiring(0)
    , BunkerState(0)
    , ProductionTimer(0)
    , PlacementAllowed(false)
    , ProductionBlocked(0)
    , padProd1(0)
    , padProd2(0)
    , ProductionAccum(0)
    , ProductionFrame(0)
    , ProductionRate(0)
    , ProductionSpeed(0)
    , CostAccumulator(0.0)
    , PipelineStep(0)
{
    padProd3[0] = padProd3[1] = padProd3[2] = 0;
    std::memset(Anims, 0, sizeof(Anims));
    std::memset(AnimStates, 0, sizeof(AnimStates));
    std::memset(DamageFireAnims, 0, sizeof(DamageFireAnims));
    std::memset(Upgrades, 0, sizeof(Upgrades));
}

// IDA 0x43b740
// 0x43b740
int BuildingClass::Construct(int a2, int a3)
{

  int v4; // edx
  int v5; // edx
  __int16 v6; // cx
  BuildingTypeClass *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  void *v12; // edi
  signed int v13; // eax
  unsigned int *v14; // ecx
  BuildingTypeClass *v15; // eax
  int v16; // eax
  int Vtable3; // [esp+18h] [ebp+4h]

  TechnoClass::TechnoClass((TechnoClass *)this, a3); /*0x43b74b*/
  this->Type = a2; /*0x43b756*/
  this->Factory = 0; /*0x43b75c*/
  this->C4Timer = *(unsigned int *)&stru_A8E960.random[528]; /*0x43b76b*/
  this->q530 = 0; /*0x43b771*/
  this->BuildingClass_field_int_534 = -1; /*0x43b777*/
  this->BuildingClass_field_int_538 = -1; /*0x43b77d*/
  this->OwnerCountryIndex = 0; /*0x43b783*/
  this->C4AppliedBy = 0; /*0x43b789*/
  this->BuildingClass_field_544 = 0; /*0x43b78f*/
  this->FirestormAnim = 0; /*0x43b795*/
  this->PsiWarnAnim = 0; /*0x43b79b*/
  this->BuildingClass_field_timer_550 = *(unsigned int *)&stru_A8E960.random[528]; /*0x43b7a7*/
  this->q558 = 0; /*0x43b7ad*/
  this->RequiresDamageFires = 0; /*0x43b7b3*/
  this->FiringSWType = -1; /*0x43b7b9*/
  this->BuildingClass_field_5FC = -1; /*0x43b7bf*/
  this->Spotlight = 0; /*0x43b7c5*/
  v4 = *(unsigned int *)&stru_A8E960.random[528]; /*0x43b7cb*/
  this->u32_60C = 0; /*0x43b7d1*/
  this->GateTimer = v4; /*0x43b7d7*/
  this->q_610 = 0; /*0x43b7dd*/
  this->LightSource = 0; /*0x43b7e3*/
  this->LaserFenceFrame = 0; /*0x43b7e9*/
  this->FirestormWallFrame = 0; /*0x43b7ef*/
  this->RepairProgress = 0; /*0x43b7f5*/
  this->q624 = 0; /*0x43b7fb*/
  this->__pad_628 = *(unsigned int *)&stru_A8E960.random[528]; /*0x43b807*/
  this->q630 = 0; /*0x43b80d*/
  this->q634 = 0; /*0x43b813*/
  this->q638 = 1; /*0x43b819*/
  this->BuildingClass_field_rect_63C = dword_89C808; /*0x43b82f*/
  this->q640 = dword_89C80C; /*0x43b83b*/
  this->chronoLockRemaining = dword_89C810; /*0x43b844*/
  this->q648 = dword_89C814; /*0x43b84d*/
  this->BuildingClass_field_coord_64C = g_BuildingClassPool; /*0x43b85c*/
  this->q650 = dword_89C84C; /*0x43b868*/
  this->q654 = dword_89C850; /*0x43b871*/
  this->BuildingClass_field_int_658 = 0; /*0x43b876*/
  this->BuildingClass_field_65C = 0; /*0x43b87c*/
  this->HasPower = 1; /*0x43b882*/
  this->IsOverpowered = 0; /*0x43b889*/
  this->RegisteredAsPoweredUnitSource = 0; /*0x43b88f*/
  this->SupportingPrisms = 0; /*0x43b895*/
  this->HasExtraPowerBonus = 0; /*0x43b89b*/
  this->HasExtraPowerDrain = 0; /*0x43b8ab*/
  this->Occupants = 0; /*0x43b8b1*/
  this->FiringOccupantIndex = 0; /*0x43b8b7*/
  this->Audio7 = 1; /*0x43b8bd*/
  this->q679 = 0; /*0x43b8c4*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E43C8) */  /*0x43b8ca*/
  this->q680 = 10; /*0x43b8d0*/
  this->q67C = 0; /*0x43b8d6*/
  this->locomotorSource = 0; /*0x43b8dc*/
  this->Audio8 = 0; /*0x43b8e2*/
  this->q690 = 1; /*0x43b8e8*/
  this->u32_691 = 0; /*0x43b8ef*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E43C8) */  /*0x43b8f5*/
  this->q698 = 10; /*0x43b8fb*/
  this->q694 = 0; /*0x43b901*/
  this->FiringOccupantIndex_d = 0; /*0x43b907*/
  this->WasOnline = 0; /*0x43b90d*/
  this->q6C9 = 0; /*0x43b913*/
  this->q6CA = 0; /*0x43b919*/
  this->q6CB = 0; /*0x43b91f*/
  this->__pad_6CC = 0; /*0x43b925*/
  v5 = *(unsigned int *)&stru_A8E960.random[528]; /*0x43b92b*/
  this->q6D8 = 0; /*0x43b931*/
  this->q6D0 = v5; /*0x43b937*/
  this->BuildingClass_field_bool_6DC = 1; /*0x43b93d*/
  this->BuildingClass_field_bool_6DD = 0; /*0x43b944*/
  this->NeedsRepairs = 0; /*0x43b94d*/
  this->C4Applied = 0; /*0x43b953*/
  this->NoCrew = 0; /*0x43b95a*/
  this->BuildingClass_field_bool_6E1 = 0; /*0x43b960*/
  this->BuildingClass_field_bool_6E2 = 0; /*0x43b966*/
  this->HasBeenCaptured = 0; /*0x43b96c*/
  this->ActuallyPlacedOnMap = 0; /*0x43b972*/
  this->BuildingClass_field_bool_6E5 = 0; /*0x43b978*/
  this->IsDamaged = 0; /*0x43b97e*/
  this->IsFogged = 0; /*0x43b984*/
  this->IsBeingRepaired = 0; /*0x43b98a*/
  this->BuildingClass_field_bool_6E9 = 0; /*0x43b990*/
  this->StuffEnabled = 1; /*0x43b996*/
  this->HasCloakingData = 0; /*0x43b99d*/
  this->CloakRadius = 0; /*0x43b9a3*/
  this->Translucency = 0; /*0x43b9a9*/
  this->StorageFilledSlots = 0; /*0x43b9af*/
  this->SecretProduction = 0; /*0x43b9b5*/
  this->ColorAdd = 0; /*0x43b9bb*/
  this->u8_6F9 = 0; /*0x43b9c1*/
  this->u8_6FA = 0; /*0x43b9c7*/
  this->BuildingClass_field_int_6FC = 0; /*0x43b9cd*/
  this->BuildingClass_field_short_700 = 1000; /*0x43b9d3*/
  this->UpgradeLevel = 0; /*0x43b9dc*/
  this->GateStage = -1; /*0x43b9e2*/
  this->PrismStage = 0; /*0x43b9e8*/
  this->DelayBeforeFiring = 0; /*0x43b9ee*/
  this->BunkerState = 0; /*0x43b9f4*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS BuildingClass_Vtable) */  /*0x43b9fa*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS BuildingClass_Vtable2) */  /*0x43ba00*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS BuildingClass_Vtable3) */  /*0x43ba07*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS BuildingClass_Vtable4) */  /*0x43ba0e*/
  AbstractClass::GenerateUniqueID(&this->ptr_4); /*0x43ba15*/
  this->Upgrades[0] = 0; /*0x43ba22*/
  (v6) = ((v6) & ~0xFF) | ((0) & 0xFF); /*0x43ba28*/
  this->q5F0 = 0; /*0x43ba2a*/
  this->q5F4 = 0; /*0x43ba30*/
  this->PrismTargetCoords = 0; /*0x43ba36*/
  v7 = this->Type; /*0x43ba38*/
  this->q70C = 0; /*0x43ba3e*/
  this->u32_710 = 0; /*0x43ba43*/
  if ( v7 ) /*0x43ba46*/
  {
    HIBYTE(v6) = v7->BarrelStartPitch; /*0x43ba48*/
    (a3) = ((a3) & ~0xFFFF) | ((v6) & 0xFFFF); /*0x43ba52*/
    ((FacingClass *)this->barrelFacing).Update((unsigned short *)&a3); /*0x43ba5e*/
  }
  memset(&this->Anims, 0, 0x54u); /*0x43ba70*/
  memset(&this->DamageFireAnims, 0, 0x20u); /*0x43ba7d*/
  this->AnimStates[0] = 0; /*0x43ba7f*/
  this->q5B4 = 0; /*0x43ba8b*/
  this->u32_5B8 = 0; /*0x43ba91*/
  this->u32_5BC = 0; /*0x43ba97*/
  this->q5C0 = 0; /*0x43ba9d*/
  this->q5C4 = 0; /*0x43baa3*/
  ((AudioController *)&this->Audio7_d)->Init(); /*0x43baa9*/
  ((AudioController *)&this->__pad_6B4)->Init(); /*0x43bab4*/
  (a3) = ((a3) & ~0xFFFF) | ((0x4000) & 0xFFFF); /*0x43babd*/
  ((FacingClass *)this->barrelFacing).Update((unsigned short *)&a3); /*0x43bacb*/
  this->RepairProgress = 0; /*0x43bad0*/
  if ( *(int *)&stru_A8E960.altNextScenario[236] < *(int *)&stru_A8E960.altNextScenario[228] /*0x43bb08*/
    || (stru_A8E960.altNextScenario[233] || !*(unsigned int *)&stru_A8E960.altNextScenario[228])
    && *(int *)&stru_A8E960.altNextScenario[240] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A8E960.altNextScenario[220] + 8))(
         &stru_A8E960.altNextScenario[220],
         *(unsigned int *)&stru_A8E960.altNextScenario[240] + *(unsigned int *)&stru_A8E960.altNextScenario[228],
         0) )
  {
    v8 = (*(unsigned int *)&stru_A8E960.altNextScenario[236])++; /*0x43bb15*/
    *(void **)(*(unsigned int *)&stru_A8E960.altNextScenario[224] + 4 * v8) = this; /*0x43bb24*/
  }
  this->Update(); /*0x43bb29*/
  if ( dword_B0F650 < dword_B0F648 /*0x43bb62*/
    || (byte_B0F64D || !dword_B0F648)
    && dword_B0F654 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(stru_B0F618.DynamicVector_field_0x28 + 8))(
         &stru_B0F618.DynamicVector_field_0x28,
         dword_B0F654 + dword_B0F648,
         0) )
  {
    v9 = dword_B0F650++; /*0x43bb6f*/
    *((void **)dword_B0F644 + v9) = this; /*0x43bb7e*/
  }
  if ( stru_B0F5B8.Count < stru_B0F5B8.Capacity /*0x43bbb5*/
    || (stru_B0F5B8.IsAllocated[0] || !stru_B0F5B8.Capacity)
    && stru_B0F5B8.CapacityIncrement > 0
    && (*(unsigned __int8 (**)(DynamicVectorClass<BuildingClass *> *, int, unsigned int))(stru_B0F5B8.ptr_0 + 8))(
         &stru_B0F5B8,
         stru_B0F5B8.CapacityIncrement + stru_B0F5B8.Capacity,
         0) )
  {
    v10 = stru_B0F5B8.Count++; /*0x43bbc2*/
    *(unsigned int *)(stru_B0F5B8.Items + 4 * v10) = this; /*0x43bbd1*/
  }
  Vtable3 = AbstractClass::GetVtable3(&this->ptr_4); /*0x43bbe0*/
  if ( (int)(NumOfElements + 1) <= dword_B0E848 ) /*0x43bbec*/
    goto LABEL_29; /*0x43bbec*/
  if ( dword_B0E848 ) /*0x43bbf4*/
  {
    v11 = dword_B0E848; /*0x43bbfd*/
    if ( dword_B0E848 < 0 ) /*0x43bc01*/
      goto LABEL_30; /*0x43bc01*/
  }
  else
  {
    v11 = 10; /*0x43bbf6*/
  }
  a3 = v11 + dword_B0E848; /*0x43bc09*/
  v12 = __2_YAPAXI_Z(8 * (v11 + dword_B0E848)); /*0x43bc16*/
  if ( v12 ) /*0x43bc1d*/
  {
    v13 = 0; /*0x43bc27*/
    --a3; /*0x43bc2a*/
    if ( (int)NumOfElements > 0 ) /*0x43bc36*/
    {
      do /*0x43bc57*/
      {
        v14 = (unsigned int *)(g_BuildingLoadQueue_Array.ptr_0 + 8 * v13++); /*0x43bc3e*/
        *(unsigned int *)(v12 + 8 * v13 - 8) = *v14; /*0x43bc44*/
        *(unsigned int *)(v12 + 8 * v13 - 4) = v14[1]; /*0x43bc4b*/
      }
      while ( v13 < (int)NumOfElements ); /*0x43bc57*/
    }
    __3_YAXPAX_Z((void *)g_BuildingLoadQueue_Array.ptr_0); /*0x43bc60*/
    g_BuildingLoadQueue_Array.ptr_0 = v12; /*0x43bc6f*/
    dword_B0E848 += v11; /*0x43bc75*/
    dword_B0E850 = 0; /*0x43bc7a*/
LABEL_29:
    *(unsigned int *)(g_BuildingLoadQueue_Array.ptr_0 + 8 * NumOfElements) = Vtable3; /*0x43bc80*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.ptr_0 + 8 * NumOfElements + 4) = this; /*0x43bc9e*/
    byte_B0E84C = 0; /*0x43bca8*/
    ++NumOfElements; /*0x43bcae*/
  }
LABEL_30:
  v15 = this->Type; /*0x43bcb3*/
  if ( v15 ) /*0x43bcbb*/
  {
    v16 = v15->NumberOfDocks; /*0x43bcbd*/
    if ( v16 < 1 ) /*0x43bcc6*/
      v16 = 1; /*0x43bcc8*/
    this->SetLinkCount(v16); /*0x43bcd0*/
    return this; /*0x43bcd5*/
  }
  else
  {
    this->SetLinkCount(1); /*0x43bce2*/
    return this; /*0x43bce7*/
  }

}
// 0x43bcf0
int BuildingClass::Dtor()
{

  int *p_Audio8_2; // edi
  unsigned __int8 *v3; // edx
  LightSourceClass *LightSource; // ecx
  LightSourceClass *v5; // ecx
  int v6; // eax
  int v7; // eax
  AnimClass **DamageFireAnims; // edi
  int v9; // ebx
  BuildingTypeClass *Type; // eax
  char v11; // cl
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  HouseClass *owner; // ecx
  FactoryClass *Factory; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  signed int v22; // ecx
  size_t i; // eax
  unsigned int *v24; // eax
  int FiringOccupantIndex; // edi
  int v26; // ebx
  void *v27; // eax
  void *Occupants; // eax
  int Vtable3; // [esp+18h] [ebp-4h] BYREF

  p_Audio8_2 = &this->Audio8_2; /*0x43bcf7*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS BuildingClass_Vtable) */  /*0x43bcfd*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS BuildingClass_Vtable2) */  /*0x43bd05*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS BuildingClass_Vtable3) */  /*0x43bd0c*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS BuildingClass_Vtable4) */  /*0x43bd13*/
  ((Mixer *)&this->__pad_6B4)->ReleaseChannel(); /*0x43bd1a*/
  ((Mixer *)this->WasOnline)->ReleaseChannel(); /*0x43bd27*/
  ((AudioFileClass *)p_Audio8_2)->Release(); /*0x43bd2e*/
  ((AudioFileClass *)this->WasOnline)->Release(); /*0x43bd35*/
  LightSource = this->LightSource; /*0x43bd3a*/
  if ( LightSource ) /*0x43bd44*/
  {
    ((MapClass *)LightSource)->ScrollOnce(0); /*0x43bd47*/
    v5 = this->LightSource; /*0x43bd4c*/
    if ( v5 ) /*0x43bd54*/
      (*(void (**)(void *, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x43bd5a*/
    this->LightSource = 0; /*0x43bd5d*/
  }
  LOBYTE(v3) = 1; /*0x43bd63*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, (int)v3); /*0x43bd67*/
  this->Sell(); /*0x43bd6e*/
  Vtable3 = (int)this; /*0x43bd83*/
  v6 = (*(int (**)(char *, int *))(*(unsigned int *)&stru_A8E960.altNextScenario[220] + 16))( /*0x43bd87*/
         &stru_A8E960.altNextScenario[220],
         &Vtable3);
  if ( v6 != -1 ) /*0x43bd8d*/
    Vector::RemoveAt((Vector *)&stru_A8E960.altNextScenario[220], v6); /*0x43bd95*/
  Vtable3 = (int)this; /*0x43bdaa*/
  v7 = (*(int (**)(void *, int *))(*(unsigned int *)DataGlobal_8B41E0 + 16))(&dword_8B41E0, &Vtable3); /*0x43bdae*/
  if ( v7 != -1 ) /*0x43bdb4*/
    (&dword_8B41E0)->RemoveAt(v7); /*0x43bdbc*/
  this->ClearAnims(-2); /*0x43bdc5*/
  this->Type->IsPowered(); /*0x43bdd0*/
  DamageFireAnims = this->DamageFireAnims; /*0x43bdd5*/
  v9 = 8; /*0x43bddb*/
  do /*0x43bdf4*/
  {
    if ( *DamageFireAnims ) /*0x43bde0*/
    {
      (*(void (**)(void *))(*(unsigned int *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43bde8*/
      *DamageFireAnims = 0; /*0x43bdee*/
    }
    ++DamageFireAnims; /*0x43bdf0*/
    --v9; /*0x43bdf3*/
  }
  while ( v9 ); /*0x43bdf4*/
  if ( stru_A8E960.nextScenario[64] ) /*0x43bdfd*/
  {
    Type = this->Type; /*0x43bdff*/
    if ( Type ) /*0x43be07*/
    {
      if ( Type->CloakGenerator ) /*0x43be09*/
      {
        v11 = this->CloakRadius; /*0x43be13*/
        this->HasCloakingData = -1; /*0x43be19*/
        if ( !v11 ) /*0x43be22*/
          this->CloakRadius = Type->CloakRadiusInCells; /*0x43be2a*/
        this->needsRedraw = 1; /*0x43be34*/
        this->CloakRadius = 1; /*0x43be3b*/
        this->CleanupOccupation(); /*0x43be42*/
      }
    }
  }
  v12 = *(unsigned int *)&this->Type->SuperWeapon; /*0x43be50*/
  if ( (v12 == -1 /*0x43bee8*/
     || (v13 = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)dword_A83CBC + v12) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow(&this->owner, *(unsigned int *)(v13 + 3576)))
    && *(unsigned int *)&this->Type->SuperWeapon != -1
    || ((v14 = *(unsigned int *)&this->Type->SuperWeapon2, v14 == -1)
     || (v15 = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)dword_A83CBC + v14) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow(&this->owner, *(unsigned int *)(v15 + 3576)))
    && *(unsigned int *)&this->Type->SuperWeapon2 != -1 )
  {
    UpdateSuperWeaponsOwnedHouseClass(this->owner); /*0x43bef0*/
  }
  if ( stru_A8E960.nextScenario[64] ) /*0x43befc*/
  {
    if ( this->health != this->BuildingClass_field_544 ) /*0x43bf09*/
      *(unsigned char *)&this->owner->u32_5778 = 1; /*0x43bf11*/
    if ( stru_A8E960.nextScenario[64] && this->Type ) /*0x43bf21*/
    {
      owner = (HouseClass *)this->owner; /*0x43bf29*/
      if ( owner ) /*0x43bf31*/
        owner->DecrementUnitCount(this); /*0x43bf34*/
      this->Sell(); /*0x43bf3b*/
    }
  }
  Factory = this->Factory; /*0x43bf40*/
  if ( Factory ) /*0x43bf48*/
    (*(void (**)(void *, int))(*(unsigned int *)Factory + 32))(Factory, 1); /*0x43bf4e*/
  this->Factory = 0; /*0x43bf51*/
  Vtable3 = (int)this; /*0x43bf67*/
  v18 = (*(int (**)(DynamicVectorClass<BuildingClass *> *, int *))(stru_B0F5B8.ptr_0 + 16))(&stru_B0F5B8, &Vtable3); /*0x43bf6b*/
  if ( v18 != -1 ) /*0x43bf70*/
    ((DynamicVectorClass<BuildingClass *> *)&stru_B0F5B8)->RemoveItem(v18); /*0x43bf78*/
  Vtable3 = (int)this; /*0x43bf8d*/
  v19 = (*(int (**)(int *, int *))(stru_B0F618.DynamicVector_field_0x28 + 16))( /*0x43bf91*/
          &stru_B0F618.DynamicVector_field_0x28,
          &Vtable3);
  if ( v19 != -1 ) /*0x43bf96*/
    DynamicVector::RemoveItem((DynamicVector *)&stru_B0F618.DynamicVector_field_0x28, v19); /*0x43bf9e*/
  Vtable3 = AbstractClass::GetVtable3(&this->ptr_4); /*0x43bfac*/
  v20 = ((BuildingTypeClass *)&g_BuildingLoadQueue_Array)->Dequeue(&Vtable3); /*0x43bfba*/
  if ( v20 ) /*0x43bfc1*/
  {
    v21 = (v20 - g_BuildingLoadQueue_Array.ptr_0) >> 3; /*0x43bfc9*/
    if ( v21 != -1 ) /*0x43bfce*/
    {
      v22 = v21 + 1; /*0x43bfd0*/
      for ( i = NumOfElements; v22 < (int)NumOfElements; i = NumOfElements ) /*0x43bfda*/
      {
        v24 = (unsigned int *)(g_BuildingLoadQueue_Array.ptr_0 + 8 * v22++); /*0x43bfe2*/
        *(v24 - 2) = *v24; /*0x43bfe8*/
        *(v24 - 1) = v24[1]; /*0x43bfee*/
      }
      NumOfElements = i - 1; /*0x43c003*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.ptr_0 + 8 * NumOfElements) = 0; /*0x43c008*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.ptr_0 + 8 * NumOfElements + 4) = 0; /*0x43c018*/
      dword_B0E850 = 0; /*0x43c01c*/
    }
  }
  this->Type = 0; /*0x43c022*/
  *(bool *)&this->isAliveFlag = 0; /*0x43c02e*/
  FiringOccupantIndex = this->FiringOccupantIndex; /*0x43c03a*/
  (*(void (**)(int *))&this->Overpowerers.IsInitialized)(&this->Overpowerers); /*0x43c03d*/
  (*(void (**)(int *, int, unsigned int))&this->Overpowerers.Capacity)(&this->Overpowerers, FiringOccupantIndex, 0); /*0x43c048*/
  v26 = this->Audio8[0]; /*0x43c051*/
  (*(void (**)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x43c05f*/
  (*(void (**)(int *, int, unsigned int))(this->Audio7[3] + 8))(&this->Audio7[3], v26, 0); /*0x43c069*/
  v27 = (void *)this->Audio7[4]; /*0x43c06c*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E43E8) */  /*0x43c073*/
  if ( v27 && BYTE1(this->Audio8[1]) ) /*0x43c07b*/
  {
    __3_YAXPAX_Z(v27); /*0x43c083*/
    this->Audio7[4] = 0; /*0x43c08b*/
  }
  BYTE1(this->Audio8[1]) = 0; /*0x43c08e*/
  this->Audio8[0] = 0; /*0x43c092*/
  Occupants = (void *)this->Occupants; /*0x43c095*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E43E8) */  /*0x43c098*/
  if ( Occupants && BYTE1(this->Audio7[0]) ) /*0x43c0a3*/
  {
    __3_YAXPAX_Z(Occupants); /*0x43c0ab*/
    this->Occupants = 0; /*0x43c0b3*/
  }
  BYTE1(this->Audio7[0]) = 0; /*0x43c0b8*/
  this->FiringOccupantIndex = 0; /*0x43c0bc*/
  return TechnoClass::DTOR((int)this); /*0x43c0c4*/

}
// 0x459f20
int BuildingClass::ScalarDtor()
{
  char v3; // [esp+8h] [ebp+4h]

  (this)->Dtor(); /*0x459f23*/
  if ( (v3 & 1) != 0 ) /*0x459f2d*/
    operator delete((this)); /*0x459f30*/
  return (int)this; /*0x459f3a*/
}
// Inherited from TechnoClass::Activate (IDA 0x70fbe0) — BuildingClass does not override
int BuildingClass::Activate()
{
    WasOnline = true;
    StuffEnabled = true;
    return 0;
}

// IDA 0x452480: deactivate building power
// 0x452480
int BuildingClass::Deactivate()
{
  LightSourceClass *LightSource; // ecx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // cl
  int v5; // esi
  int *Anims; // ebx

  LightSource = this->LightSource; /*0x452485*/
  this->StuffEnabled = 0; /*0x45248b*/
  if ( LightSource ) /*0x452494*/
    ((int)LightSource)->ScrollOnce(0); /*0x452498*/
  Type = this->Type; /*0x45249d*/
  if ( Type->CloakGenerator ) /*0x4524a3*/
  {
    CloakRadius = this->CloakRadius; /*0x4524ad*/
    this->HasCloakingData = -1; /*0x4524b3*/
    if ( !CloakRadius ) /*0x4524bc*/
      this->CloakRadius = Type->CloakRadiusInCells; /*0x4524c4*/
    this->needsRedraw = 1; /*0x4524ca*/
  }
  if ( Type->Naval && this->isGeneratingGap ) /*0x4524db*/
    (*((void (__thiscall **)(BuildingClass *))this->ptr_0 + 262))(this); /*0x4524e9*/
  if ( this->Type->LaserFencePost ) /*0x4524f5*/
    this->RepairPlacement(0); /*0x452503*/
  v5 = 0; /*0x452508*/
  Anims = this->Anims; /*0x45250a*/
  do /*0x452538*/
  {
    if ( this->Type->__pad_F70[v5 + 28] ) /*0x452516*/
    {
      if ( *Anims ) /*0x452521*/
        ((AnimClass *)*Anims)->SetField8(); /*0x452527*/
    }
    v5 += 68; /*0x45252c*/
    ++Anims; /*0x45252f*/
  }
  while ( v5 < 1428 ); /*0x452538*/
}
// 0x459e80
void BuildingClass::Destroyed(ObjectClass* killer)
{
  unsigned int *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x459e86*/
    return; /*0x459e88*/
  *v2 = 237448646; /*0x459e96*/
  v2[1] = 298949647; /*0x459e9e*/
  v2[2] = -1610610249; /*0x459ea7*/
  v2[3] = unk_7E96AC; /*0x459eb0*/
  return; /*0x459e8d*/
}
/* ASM:
mov     eax, [esp+arg_4]
test    eax, eax
jnz     short loc_459E90
mov     eax, 80004003h
retn    8
; ---------------------------------------------------------------------------

loc_459E90:                             ; CODE XREF: BuildingClass__Destroyed+6↑j
mov     ecx, dword ptr ds:stru_7E96A0
mov     [eax], ecx
mov     edx, dword ptr ds:stru_7E96A0+4
mov     [eax+4], edx
mov     ecx, dword ptr ds:stru_7E96A0+8
mov     [eax+8], ecx
mov     edx, dword ptr ds:stru_7E96A0+0Ch
mov     [eax+0Ch], edx
xor     eax, eax
retn    8
*/

// IDA 0x43bd40: after destruction cleanup
// 0x441f60
int BuildingClass::AfterDestruction()
{

  BuildingClass *v1; // ebx
  BuildingClass *Type; // ecx
  int result; // eax
  unsigned short *v4; // ebp
  unsigned int *v5; // eax
  unsigned short *v6; // eax
  __int16 v7; // dx
  void *v8; // esi
  BuildingClass *v9; // edi
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int *v19; // eax
  void *v20; // eax
  unsigned int *v21; // eax
  BuildingTypeClass *v22; // edx
  __int16 v23[2]; // [esp+10h] [ebp-40h] BYREF
  int v24; // [esp+14h] [ebp-3Ch]
  __int16 v25[2]; // [esp+18h] [ebp-38h] BYREF
  int v26; // [esp+1Ch] [ebp-34h]
  unsigned int v27[2]; // [esp+20h] [ebp-30h] BYREF
  char v28[4]; // [esp+28h] [ebp-28h] BYREF
  char v29[4]; // [esp+2Ch] [ebp-24h] BYREF
  int v30[4]; // [esp+30h] [ebp-20h] BYREF
  Rect v31; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x441f65*/
  Type = (BuildingClass *)this->Type; /*0x441f73*/
  ((void **)v27)[0] = v1; /*0x441f79*/
  result = Type->GetPlacementCoords((int *)v29, v28); /*0x441f7d*/
  if ( (unsigned char)result ) /*0x441f84*/
  {
    v4 = (unsigned short *)(*(int (**)(BuildingClass *, unsigned int))(v1->ptr_0 + 264))(v1, 0); /*0x441f9a*/
    v5 = (unsigned int *)(*(int (**)(BuildingClass *, int *))(v1->ptr_0 + 172))(v1, v30); /*0x441fa1*/
    (v24) = ((v24) & ~0xFFFF) | ((*v5 / 256) & 0xFFFF); /*0x441fb7*/
    HIWORD(v24) = v5[1] / 256; /*0x441fcb*/
    *(unsigned int *)v23 = v24; /*0x441fd4*/
    while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x441fe6*/
    {
      v6 = v4; /*0x441fe8*/
      v4 += 2; /*0x441fea*/
      v7 = v23[1] + v6[1]; /*0x441ff9*/
      (v24) = ((v24) & ~0xFFFF) | ((v23[0] + *v6) & 0xFFFF); /*0x441ffe*/
      (v24) = ((v24) & ~(0xFFFF << 16)) | (((v7) & 0xFFFF) << 16); /*0x442007*/
      *(unsigned int *)v25 = v24; /*0x442016*/
      v8 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v25); /*0x44201f*/
      BuildingClass::CreatePlacementCrater((BuildingClass *)v8); /*0x442023*/
      v8->u32_44 = 239; /*0x44202c*/
      v8->q040 = 0; /*0x442033*/
      House::AnnounceUpgrade((int)v8, -1); /*0x44203a*/
      Cell::SetRadar((Cell *)&dword_87F7E8, &v8->u32_48); /*0x442048*/
      Radar::Update((Radar *)&dword_87F7E8, &v8->u32_48); /*0x442053*/
      AbstractClass::ClearTargetToMeClearManagerTarget((int)v8); /*0x44205a*/
    }
    v9 = (BuildingClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v23); /*0x442077*/
    v9->ambientSoundController[1] = v1->Type; /*0x442082*/
    PlacementRect = BuildingClass::GetPlacementRect(v9, v30); /*0x442091*/
    StartCoords = House::GetStartCoords((House *)v9, &v31); /*0x442093*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4420a8*/
    {
      v12 = *PlacementRect; /*0x44212e*/
      v14 = PlacementRect[1]; /*0x442130*/
      v18 = PlacementRect[2]; /*0x442133*/
      v16 = PlacementRect[3]; /*0x442136*/
    }
    else
    {
      v24 = PlacementRect[2]; /*0x4420b3*/
      if ( v24 <= 0 || (v26 = PlacementRect[3], v26 <= 0) ) /*0x4420c2*/
      {
        v12 = *StartCoords; /*0x442121*/
        v14 = StartCoords[1]; /*0x442123*/
        v18 = StartCoords[2]; /*0x442126*/
        v16 = StartCoords[3]; /*0x442129*/
      }
      else
      {
        v12 = *StartCoords; /*0x4420c4*/
        v13 = *PlacementRect; /*0x4420c6*/
        v14 = StartCoords[1]; /*0x4420c8*/
        v15 = StartCoords[2]; /*0x4420cb*/
        v16 = StartCoords[3]; /*0x4420ce*/
        if ( v12 > *PlacementRect ) /*0x4420d3*/
        {
          v15 += v12 - v13; /*0x4420d7*/
          v12 = *PlacementRect; /*0x4420d9*/
        }
        v17 = PlacementRect[1]; /*0x4420db*/
        *(unsigned int *)v25 = v17; /*0x4420e0*/
        if ( v14 > v17 ) /*0x4420e4*/
        {
          v16 += v14 - v17; /*0x4420e8*/
          v14 = v17; /*0x4420ea*/
        }
        if ( v12 + v15 < v13 + v24 ) /*0x4420f7*/
          v15 = v13 - v12 + v24 + 1; /*0x4420ff*/
        if ( v16 + v14 < v26 + *(unsigned int *)v25 ) /*0x442112*/
          v16 = v26 + *(unsigned int *)v25 - v14 + 1; /*0x442117*/
        v1 = (BuildingClass *)v27[0]; /*0x442119*/
        v18 = v15; /*0x44211d*/
      }
    }
    v27[0] = v12 - DSurface_ViewBounds.field_0; /*0x442150*/
    v27[1] = v14 - dword_886FA4; /*0x44215a*/
    v19 = Rect::Construct(&v31, v27, v18, v16); /*0x44215e*/
    Cell::CreateCrater(*v19, v19->Y, v19->Width, v19->Height, 0); /*0x442184*/
    v20 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v23); /*0x442193*/
    result = Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v20); /*0x44219f*/
  }
  (result) = ((result) & ~0xFF) | ((*(unsigned char *)(v1->Type + 5991)) & 0xFF); /*0x4421aa*/
  if ( (unsigned char)result ) /*0x4421b2*/
  {
    v21 = (unsigned int *)(*(int (**)(BuildingClass *, int *))(v1->ptr_0 + 172))(v1, v30); /*0x4421bd*/
    v23[0] = *v21 / 256; /*0x4421d3*/
    v22 = v1->Type; /*0x4421e4*/
    v23[1] = v21[1] / 256; /*0x4421ed*/
    if ( v22->CrateBeneathIsMoney ) /*0x4421f2*/
      return BuildingClass::SearchPlacement((BuildingClass *)&dword_87F7E8, *(int *)v23, 0); /*0x442208*/
    else
      return BuildingClass::SearchPlacement((BuildingClass *)&dword_87F7E8, *(int *)v23, 20); /*0x442221*/
  }
  return result; /*0x44220d*/

}
// 0x43eeb0
void BuildingClass::Cleanup(int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  char v5[64]; // [esp+8h] [ebp-40h] BYREF

  if ( a2 != this->SuperWeaponToken && !this->Type->TurretAnimIsVoxel ) /*0x43eecd*/
  {
    BuildingClass::ClearAnims(this, 9); /*0x43eedf*/
    if ( a2 != -1 ) /*0x43eee7*/
    {
      strcpy(v5, (const char *)&this->Type->ImageFile); /*0x43ef17*/
      v3 = strlen(asc_818D7C) + 1; /*0x43ef38*/
      memcpy(&v5[strlen(v5)], asc_818D7C, v3); /*0x43ef45*/
      v4 = strlen(v5); /*0x43ef5f*/
      v5[v4] = a2 + 66; /*0x43ef62*/
      v5[v4 + 1] = 0; /*0x43ef66*/
      BuildingClass::PlayAnim(this, v3, (AnimTypeClass *)v5, 9, 0, 0, 0); /*0x43ef72*/
      this->SuperWeaponToken = a2; /*0x43ef78*/
    }
  }
}
// IDA 0x43bcf0: Place building on map
void BuildingClass::Place(bool bUnk)
{
    ActuallyPlacedOnMap = true;
    BeingProduced = false;
    if (Type && Type->CloakGenerator) {
        HasCloakingData = 1;
        CloakRadius = Type->CloakRadiusInCells;
    }
}

// IDA 0x453e20: Load from save stream  [43bfa0 is inside BuildingClass::Dtor]
void BuildingClass::LoadFromStream(void* stream)
{
    // IStream* pStm = (IStream*)(stream);
    // if (pStm)
    //     ObjectClass::LoadFromStream_Common(pStm); // removed in hpp rewrite
}

// IDA 0x454190: return sizeof(BuildingClass)
// 0x454190
int BuildingClass::Size()
{

  int SizeMax; // ebp
  unsigned int v2; // edx
  int result; // eax
  int v4; // ebx
  unsigned int v5; // edx
  int v6; // ebx
  TechnoClass *v7; // [esp+38h] [ebp+4h]
  unsigned int *v8; // [esp+3Ch] [ebp+8h]
  int v9; // [esp+40h] [ebp+Ch] BYREF

  SizeMax = IPersistStream::GetSizeMax(v7, (int)v8, v9); /*0x4541a8*/
  if ( SizeMax < 0 ) /*0x4541ac*/
    return SizeMax; /*0x4541ac*/
  v2 = *v8; /*0x4541b8*/
  v9 = v7[1].armorMultiplier[1]; /*0x4541c4*/
  result = (*(int (**)(unsigned int *, int *, int, unsigned int))(v2 + 16))(v8, &v9, 4, 0); /*0x4541c8*/
  if ( result < 0 ) /*0x4541cd*/
    return result; /*0x4541cd*/
  v4 = 0; /*0x4541d3*/
  if ( v9 <= 0 ) /*0x4541d7*/
  {
LABEL_6:
    v5 = *v8; /*0x4541fa*/
    v9 = v7[1].radarFlashTimer[0]; /*0x45420c*/
    result = (*(int (**)(unsigned int *, int *, int, unsigned int))(v5 + 16))(v8, &v9, 4, 0); /*0x454210*/
    if ( result < 0 ) /*0x454215*/
      return result; /*0x454215*/
    v6 = 0; /*0x45421b*/
    if ( v9 > 0 ) /*0x45421f*/
    {
      while ( 1 ) /*0x454232*/
      {
        result = (*(int (**)(unsigned int *, int, int, unsigned int))(*v8 + 16))( /*0x454232*/
                   v8,
                   v7[1].idleActionTimer[0] + 4 * v6,
                   4,
                   0);
        if ( result < 0 ) /*0x454237*/
          break; /*0x454237*/
        if ( ++v6 >= v9 ) /*0x454240*/
          return SizeMax; /*0x454240*/
      }
      return result; /*0x454237*/
    }
    return SizeMax; /*0x454242*/
  }
  while ( 1 ) /*0x4541ea*/
  {
    result = (*(int (**)(unsigned int *, int, int, unsigned int))(*v8 + 16))(v8, v7[1].veterancy + 4 * v4, 4, 0); /*0x4541ea*/
    if ( result < 0 ) /*0x4541ef*/
      return result; /*0x454244*/
    if ( ++v4 >= v9 ) /*0x4541f8*/
      goto LABEL_6; /*0x4541f8*/
  }

}
// 0x480630
void BuildingClass::ValidatePlacement(char a2) {

  int *v2; // edi
  int v3; // eax
  char *v4; // esi
  int *StartCoords; // edi
  int *PlacementRect; // eax
  int v7; // ebx
  int v8; // eax
  int *v9; // edi
  int v10; // eax
  char v11; // bl
  int v12; // ecx
  int *v13; // eax
  int *v14; // eax
  char *v15; // edi
  int v16; // eax
  int *v17; // ebp
  BuildingPlacement *v18; // eax
  int v19; // eax
  __int16 v20; // dx
  unsigned __int8 *v21; // edx
  char v22; // bl
  char v23; // al
  int v24; // ecx
  char v25; // al
  char v26; // bl
  int v27; // eax
  char v28; // al
  unsigned int i; // esi
  int v30; // eax
  __int16 v31; // dx
  unsigned char *v32; // eax
  int v33; // [esp-Ch] [ebp-E8h]
  struct tagRECT *v34; // [esp-8h] [ebp-E4h]
  int v35; // [esp-8h] [ebp-E4h]
  const RECT *v36; // [esp-4h] [ebp-E0h]
  LPRECT v37; // [esp-4h] [ebp-E0h]
  __int16 *v38; // [esp-4h] [ebp-E0h]
  const RECT *v39; // [esp+0h] [ebp-DCh]
  const RECT *v40; // [esp+0h] [ebp-DCh]
  const RECT *v41; // [esp+4h] [ebp-D8h]
  __int16 v42[2]; // [esp+10h] [ebp-CCh] BYREF
  __int16 v43[2]; // [esp+14h] [ebp-C8h] BYREF
  char *v44; // [esp+18h] [ebp-C4h]
  unsigned __int16 *v45; // [esp+1Ch] [ebp-C0h]
  unsigned __int16 *v46; // [esp+20h] [ebp-BCh]
  int occupant; // [esp+24h] [ebp-B8h] BYREF
  __int16 v48[2]; // [esp+28h] [ebp-B4h] BYREF
  BuildingClass *v49; // [esp+2Ch] [ebp-B0h]
  Coord2D v50; // [esp+30h] [ebp-ACh] BYREF
  unsigned int v51[2]; // [esp+38h] [ebp-A4h] BYREF
  int v52; // [esp+40h] [ebp-9Ch] BYREF
  char v53[8]; // [esp+44h] [ebp-98h] BYREF
  int v54; // [esp+4Ch] [ebp-90h]
  int v55; // [esp+50h] [ebp-8Ch]
  int v56[4]; // [esp+5Ch] [ebp-80h] BYREF
  char v57[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v58[4]; // [esp+7Ch] [ebp-60h] BYREF
  int v59[4]; // [esp+9Ch] [ebp-40h] BYREF
  int v60[4]; // [esp+BCh] [ebp-20h] BYREF
  Rect v61; // [esp+CCh] [ebp-10h] BYREF

  v2 = (int *)&unk_81CC70; /*0x48063a*/
  v49 = this; /*0x48063f*/
  v44 = (char *)&unk_81CC70; /*0x480643*/
  while ( 1 ) /*0x48064d*/
  {
    v3 = *v2; /*0x48064d*/
    if ( (unsigned int)*v2 < 8 ) /*0x480652*/
    {
      occupant = this->occupant; /*0x48065e*/
      *(unsigned int *)v48 = *((CellStruct *)&occupant)->Add( &v52, (unsigned short *)(4 * (v3 & 7) + 9041544)); /*0x480684*/
      v4 = (char *)((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x48068d*/
    }
    else
    {
      v4 = (char *)this; /*0x480654*/
    }
    if ( !a2 || *v2 != -1 ) /*0x48069d*/
    {
      StartCoords = House::GetStartCoords((House *)v4, v58); /*0x4806ab*/
      PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v4, v56); /*0x4806b4*/
      if ( StartCoords[2] > 0 && StartCoords[3] > 0 && PlacementRect[2] > 0 && PlacementRect[3] > 0 ) /*0x4806d3*/
      {
        v7 = StartCoords[1]; /*0x4806d9*/
        if ( *StartCoords > *PlacementRect ) /*0x4806e4*/
          v54 = *PlacementRect; /*0x4806e8*/
        v8 = PlacementRect[1]; /*0x4806ee*/
        if ( v7 > v8 ) /*0x4806f3*/
          v55 = v8; /*0x4806f7*/
      }
    }
    v36 = (const RECT *)BuildingClass::GetPlacementRect((BuildingClass *)v4, v60); /*0x480713*/
    v34 = (struct tagRECT *)House::GetStartCoords((House *)v4, v59); /*0x48071c*/
    CellClass::GetScreenRect((CellClass *)v4, (int *)v57); /*0x480724*/
    Rect::Union(v34, v36, v39); /*0x480732*/
    v9 = (int *)Rect::Union(v37, v40, v41); /*0x480745*/
    v51[1] = dword_886FA4; /*0x480753*/
    v10 = *v9; /*0x480757*/
    v11 = 0; /*0x480759*/
    v51[0] = DSurface_ViewBounds.field_0; /*0x48075c*/
    v12 = v9[1]; /*0x480760*/
    *(unsigned int *)v50.__pad_0 = v10; /*0x480763*/
    v50.q004 = v12; /*0x480767*/
    v35 = v9[3]; /*0x480775*/
    v33 = v9[2]; /*0x480776*/
    v13 = Coord2D::Sub(&v50, (int *)v53, v51); /*0x480781*/
    v14 = Rect::Construct(&v61, v13, v33, v35); /*0x48078e*/
    Cell::CreateCrater(*v14, v14->Y, v14->Width, v14->Height, 0); /*0x4807b4*/
    v15 = v4 + 36; /*0x4807b9*/
    BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)(v4 + 36)); /*0x4807c2*/
    v16 = v4->q044; /*0x4807c7*/
    if ( v16 != -1 && *(unsigned char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v16) + 680) ) /*0x4807dc*/
    {
      *(unsigned int *)v42 = 0; /*0x4807ea*/
      v17 = (int *)&unk_81CC70; /*0x4807ee*/
      do /*0x48086e*/
      {
        if ( (unsigned int)*v17 < 8 ) /*0x4807f9*/
        {
          v19 = *v17 & 7; /*0x480801*/
          *(unsigned int *)v43 = *(unsigned int *)v15; /*0x480804*/
          v20 = dword_89F688[v19]; /*0x480808*/
          LOWORD(v19) = HIWORD(dword_89F688[v19]); /*0x48081a*/
          LOWORD(v46) = v43[0] + v20; /*0x48081e*/
          HIWORD(v46) = v43[1] + v19; /*0x48082d*/
          *(unsigned int *)v43 = v46; /*0x480836*/
          v18 = (BuildingPlacement *)((CellCoord *)&dword_87F7E8)->To_CellObj(v43); /*0x48083f*/
        }
        else
        {
          v18 = (BuildingPlacement *)v4; /*0x4807fb*/
        }
        if ( (unsigned __int8)BuildingPlacement::ValidateType(v18, v4->q044, *v17) ) /*0x48084e*/
          *(unsigned int *)v42 |= 1 << v11; /*0x480860*/
        ++v17; /*0x480864*/
        ++v11; /*0x480867*/
      }
      while ( v17 < &dword_81CC80 ); /*0x48086e*/
      v22 = v42[0]; /*0x480879*/
      v23 = v4[286] & 0xF0; /*0x48087d*/
      *(unsigned int *)v42 = v4->u32_4C; /*0x48087f*/
      v24 = v4->q044; /*0x480883*/
      v25 = v22 | v23; /*0x480886*/
      v26 = 0; /*0x480888*/
      v4->u32_11E = v25; /*0x48088d*/
      if ( (v24 == 2 || v24 == 26) && (v25 == 48 || v25 == 32) ) /*0x4808a0*/
      {
        LOBYTE(v21) = 1; /*0x4808a5*/
        v4->q044 = -1; /*0x4808a9*/
        v4->u32_11E = 0; /*0x4808ac*/
        AbstractClass::AnnounceExpiredPointer((AbstractClass *)v4, (int)v21); /*0x4808b3*/
        v26 = 1; /*0x4808b8*/
      }
      if ( !v4->q044 ) /*0x4808bf*/
      {
        v27 = (unsigned __int8)v4[286]; /*0x4808c6*/
        if ( (unsigned char)v27 == 16 || (unsigned char)v27 == 32 ) /*0x4808d2*/
        {
          LOBYTE(v21) = 1; /*0x4808d4*/
          v4->q044 = -1; /*0x4808d8*/
          v4->u32_11E = 0; /*0x4808db*/
          v4->customSound_controller = -1; /*0x4808e2*/
          AbstractClass::AnnounceExpiredPointer((AbstractClass *)v4, (int)v21); /*0x4808e5*/
          v26 = 1; /*0x4808ea*/
        }
      }
      if ( v4->q044 == 1 && v4->u32_11E == 32 ) /*0x4808f9*/
      {
        LOBYTE(v21) = 1; /*0x4808fb*/
        v4->q044 = -1; /*0x4808ff*/
        v4->u32_11E = 0; /*0x480902*/
        v4->customSound_controller = -1; /*0x480909*/
        AbstractClass::AnnounceExpiredPointer((AbstractClass *)v4, (int)v21); /*0x48090c*/
        v26 = 1; /*0x480911*/
      }
      if ( v4->q044 == 22 ) /*0x480917*/
      {
        v28 = v4->u32_11E; /*0x480919*/
        if ( v28 == 16 || v28 == 32 ) /*0x480925*/
        {
          LOBYTE(v21) = 1; /*0x480927*/
          v4->q044 = -1; /*0x48092b*/
          v4->u32_11E = 0; /*0x48092e*/
          v4->customSound_controller = -1; /*0x480935*/
          AbstractClass::AnnounceExpiredPointer((AbstractClass *)v4, (int)v21); /*0x480938*/
          v26 = 1; /*0x48093d*/
        }
      }
      if ( v4->q044 == 3 && v4->u32_11E == 16 ) /*0x48094c*/
      {
        LOBYTE(v21) = 1; /*0x48094e*/
        v4->q044 = -1; /*0x480952*/
        v4->u32_11E = 0; /*0x480955*/
        v4->customSound_controller = -1; /*0x48095c*/
        AbstractClass::AnnounceExpiredPointer((AbstractClass *)v4, (int)v21); /*0x48095f*/
        v26 = 1; /*0x480964*/
      }
      House::AnnounceUpgrade((int)v4, -1); /*0x480969*/
      if ( v4->u32_4C != *(unsigned int *)v42 ) /*0x480977*/
      {
        v38 = (__int16 *)(v4 + 36); /*0x48097f*/
        if ( v26 ) /*0x480985*/
        {
          Cell::SetRadar((Cell *)&dword_87F7E8, v38); /*0x480987*/
          Radar::Update((Radar *)&dword_87F7E8, &v4->q048); /*0x480992*/
          for ( i = 0; i < 8; ++i ) /*0x480997*/
          {
            v30 = i & 7; /*0x48099e*/
            v31 = *(&v15->ptr_2) + HIWORD(dword_89F688[v30]); /*0x4809b1*/
            LOWORD(v45) = LOWORD(dword_89F688[v30]) + *(unsigned short *)v15; /*0x4809bc*/
            HIWORD(v45) = v31; /*0x4809c5*/
            *(unsigned int *)v42 = v45; /*0x4809d4*/
            v32 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v42); /*0x4809d8*/
            --v32[290]; /*0x4809e9*/
          }
        }
        else
        {
          CellClass::DetermineTileConnectivity((CellClass *)&dword_87F7E8, v38); /*0x4809f3*/
          Radar::Update((Radar *)&dword_87F7E8, &v4->q048); /*0x4809fe*/
        }
      }
    }
    v2 = (int *)(v44 + 4); /*0x480a07*/
    v44 += 4; /*0x480a10*/
    if ( v44 >= byte_81CC84 ) /*0x480a14*/
      break; /*0x480a14*/
    this = v49; /*0x480649*/
  }

}
// 0x44efb0
bool BuildingClass::ValidateFoundation(int a1, int a2, int a3)  // raw body 0x44efb0 follows
{

  int *v2; // eax
  BuildingTypeClass *Type; // edx
  int v4; // ebp
  int *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v9; // edi
  void *v10; // eax
  int v11; // edi
  void *v12; // eax
  BuildingTypeClass *v13; // eax
  unsigned int *v14; // eax
  int v15; // edi
  void *v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // edi
  void *v20; // eax
  int v21; // edi
  void *v22; // eax
  BuildingTypeClass *v23; // ecx
  unsigned short *v24; // edi
  unsigned short *v25; // eax
  int v26; // ebp
  void *v27; // eax
  __int16 FoundationHeight; // ax
  BuildingTypeClass *v29; // ecx
  int v30; // ebp
  __int16 v31; // di
  __int16 v32; // di
  int v33; // ebp
  void *v34; // eax
  int v35; // edi
  void *v36; // eax
  BuildingTypeClass *v37; // ecx
  __int16 FoundationWidth; // ax
  int *v39; // ecx
  int v40; // ebp
  __int16 v41; // di
  __int16 v42; // di
  int v43; // ebp
  void *v44; // eax
  int v45; // edi
  void *v46; // eax
  int *v47; // ecx
  __int16 v48[2]; // [esp+50h] [ebp-20h] BYREF
  int v49; // [esp+54h] [ebp-1Ch]
  int v50; // [esp+58h] [ebp-18h] BYREF
  int v51; // [esp+5Ch] [ebp-14h]
  int v52[3]; // [esp+64h] [ebp-Ch] BYREF
  unsigned int *v53; // [esp+74h] [ebp+4h]
  int *v54; // [esp+78h] [ebp+8h]
  unsigned __int16 *v55; // [esp+78h] [ebp+8h]
  unsigned __int16 *v56; // [esp+78h] [ebp+8h]
  unsigned __int16 *v57; // [esp+78h] [ebp+8h]
  __int16 v58; // [esp+78h] [ebp+8h]
  unsigned __int16 *v59; // [esp+78h] [ebp+8h]
  unsigned __int16 *v60; // [esp+78h] [ebp+8h]
  unsigned __int16 *v61; // [esp+78h] [ebp+8h]
  int v62; // [esp+7Ch] [ebp+Ch] BYREF

  v2 = (int *)this->GetCellCoords_Alt( &v50); /*0x44efc2*/
  Type = this->Type; /*0x44efc8*/
  v4 = *v2; /*0x44efce*/
  v5 = v54; /*0x44efd0*/
  v51 = *v2; /*0x44efd4*/
  if ( Type->GDIBarracks ) /*0x44efd8*/
  {
    LOWORD(v55) = v4 + 1; /*0x44efec*/
    HIWORD(v55) = (((v51) >> 16) & 0xFFFF) + 2; /*0x44eff1*/
    *(unsigned int *)v48 = v55; /*0x44f004*/
    if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f008*/
    {
      v6 = *v5; /*0x44f011*/
      v7 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f025*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v6 + 428))(v5, v7, -1, -1, 0, 1) ) /*0x44f02d*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f042*/
        return (int)v53; /*0x44f048*/
      }
    }
  }
  if ( *(unsigned char *)&this->Type->NODBarracks ) /*0x44f051*/
  {
    LOWORD(v56) = v4 + 2; /*0x44f062*/
    HIWORD(v56) = (((v51) >> 16) & 0xFFFF) + 2; /*0x44f06e*/
    *(unsigned int *)v48 = v56; /*0x44f07d*/
    if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f081*/
    {
      v9 = *v5; /*0x44f08a*/
      v10 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f09e*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v9 + 428))(v5, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f0bb*/
        return (int)v53; /*0x44f0c1*/
      }
    }
  }
  if ( *(unsigned char *)&this->Type->YuriBarracks ) /*0x44f0ca*/
  {
    LOWORD(v57) = v4 + 2; /*0x44f0dc*/
    HIWORD(v57) = (((v51) >> 16) & 0xFFFF) + 1; /*0x44f0e1*/
    *(unsigned int *)v48 = v57; /*0x44f0f4*/
    if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f0f8*/
    {
      v11 = *v5; /*0x44f101*/
      v12 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f115*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(v5, v12, -1, -1, 0, 1) ) /*0x44f11d*/
      {
LABEL_12:
        *v53 = *(unsigned int *)v48; /*0x44f127*/
        return (int)v53; /*0x44f138*/
      }
    }
  }
  v13 = this->Type; /*0x44f13b*/
  if ( *(unsigned char *)(v13 + 3278) && v13->WeaponsFactory ) /*0x44f14f*/
  {
    v14 = (unsigned int *)this->GetCoords_Alt( v52, v5); /*0x44f167*/
    v58 = *v14 / 256; /*0x44f17d*/
    v48[1] = v14[1] / 256; /*0x44f1a3*/
    ++v48[1]; /*0x44f1a8*/
    v48[0] = v58 + 1; /*0x44f1ae*/
    if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f1b3*/
    {
      v15 = *v5; /*0x44f1bc*/
      v16 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f1d0*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v15 + 428))(v5, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f1ed*/
        return (int)v53; /*0x44f1f3*/
      }
    }
    --v48[1]; /*0x44f1f6*/
    if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f205*/
    {
      v17 = *v5; /*0x44f20e*/
      v18 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f222*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v17 + 428))(v5, v18, -1, -1, 0, 0) ) /*0x44f22a*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f23f*/
        return (int)v53; /*0x44f245*/
      }
    }
    ++v48[1]; /*0x44f248*/
    --v48[0]; /*0x44f24d*/
    if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f25c*/
    {
      v19 = *v5; /*0x44f265*/
      v20 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f279*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v19 + 428))(v5, v20, -1, -1, 0, 0) ) /*0x44f281*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f296*/
        return (int)v53; /*0x44f29c*/
      }
    }
  }
  if ( v62 != g_TerrainTypeTable ) /*0x44f2ab*/
  {
    if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( (__int16 *)&v62) ) /*0x44f2c5*/
    {
      v21 = *v5; /*0x44f2ce*/
      v22 = ((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&v62); /*0x44f2e2*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v21 + 428))(v5, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
      {
        *v53 = v62; /*0x44f2ff*/
        return (int)v53; /*0x44f305*/
      }
    }
  }
  v23 = this->Type; /*0x44f308*/
  v24 = v23->Height; /*0x44f30e*/
  if ( v24 && !v23->Hospital ) /*0x44f31c*/
  {
    while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
    {
      v25 = v24; /*0x44f344*/
      v24 += 2; /*0x44f346*/
      LOWORD(v59) = v4 + *v25; /*0x44f358*/
      HIWORD(v59) = (((v51) >> 16) & 0xFFFF) + v25[1]; /*0x44f361*/
      *(unsigned int *)v48 = v59; /*0x44f36a*/
      if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f374*/
      {
        v26 = *v5; /*0x44f37d*/
        v27 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f391*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v26 + 428))(v5, v27, -1, -1, 0, 0) ) /*0x44f399*/
          goto LABEL_36; /*0x44f3a1*/
        (v4) = ((v4) & ~0xFFFF) | ((v51) & 0xFFFF); /*0x44f331*/
      }
    }
    goto LABEL_53; /*0x44f33e*/
  }
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)v23, 0); /*0x44f3b9*/
  v29 = (BuildingTypeClass *)this->Type; /*0x44f3be*/
  v30 = -1; /*0x44f3c4*/
  v31 = FoundationHeight; /*0x44f3c7*/
  v50 = -1; /*0x44f3c9*/
  if ( BuildingTypeClass::GetFoundationWidth(v29) >= -1 ) /*0x44f3d5*/
  {
    HIWORD(v60) = (((v51) >> 16) & 0xFFFF) + v31; /*0x44f3e1*/
    do /*0x44f3ef*/
    {
      v32 = v51 + v30; /*0x44f3ef*/
      LOWORD(v60) = v51 + v30; /*0x44f3f2*/
      *(unsigned int *)v48 = v60; /*0x44f3fb*/
      if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f404*/
      {
        v33 = *v5; /*0x44f40d*/
        v34 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f421*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v33 + 428))(v5, v34, -1, -1, 0, 1) ) /*0x44f431*/
          goto LABEL_12; /*0x44f431*/
        v30 = v50; /*0x44f437*/
      }
      (v49) = ((v49) & ~0xFFFF) | ((v32) & 0xFFFF); /*0x44f43f*/
      (v49) = ((v49) & ~(0xFFFF << 16)) | ((((((v51) >> 16) & 0xFFFF) - 1) & 0xFFFF) << 16); /*0x44f449*/
      *(unsigned int *)v48 = v49; /*0x44f458*/
      if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f45c*/
      {
        v35 = *v5; /*0x44f465*/
        v36 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f479*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v35 + 428))(v5, v36, -1, -1, 0, 1) ) /*0x44f481*/
          goto LABEL_36; /*0x44f489*/
      }
      v37 = (BuildingTypeClass *)this->Type; /*0x44f48f*/
      v50 = ++v30; /*0x44f496*/
    }
    while ( v30 <= BuildingTypeClass::GetFoundationWidth(v37) ); /*0x44f3ef*/
  }
  FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)this->Type); /*0x44f4a7*/
  v39 = (int *)this->Type; /*0x44f4b2*/
  v40 = -1; /*0x44f4b8*/
  v41 = FoundationWidth; /*0x44f4bd*/
  v49 = -1; /*0x44f4bf*/
  if ( BuildingTypeClass::GetFoundationHeight(v39, 0) >= -1 ) /*0x44f4cb*/
  {
    LOWORD(v61) = v51 + v41; /*0x44f4d7*/
    while ( 1 ) /*0x44f4e5*/
    {
      v42 = (((v51) >> 16) & 0xFFFF) + v40; /*0x44f4e5*/
      HIWORD(v61) = (((v51) >> 16) & 0xFFFF) + v40; /*0x44f4e8*/
      *(unsigned int *)v48 = v61; /*0x44f4f1*/
      if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f4fa*/
      {
        v43 = *v5; /*0x44f503*/
        v44 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f517*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v43 + 428))(v5, v44, -1, -1, 0, 1) ) /*0x44f527*/
          goto LABEL_12; /*0x44f527*/
        v40 = v49; /*0x44f52d*/
      }
      (v50) = ((v50) & ~(0xFFFF << 16)) | (((v42) & 0xFFFF) << 16); /*0x44f535*/
      (v50) = ((v50) & ~0xFFFF) | ((v51 - 1) & 0xFFFF); /*0x44f53f*/
      *(unsigned int *)v48 = v50; /*0x44f54e*/
      if ( (unsigned __int8)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v48) ) /*0x44f552*/
      {
        v45 = *v5; /*0x44f55b*/
        v46 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44f56f*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v45 + 428))(v5, v46, -1, -1, 0, 1) ) /*0x44f577*/
          break; /*0x44f577*/
      }
      v47 = (int *)this->Type; /*0x44f585*/
      v49 = ++v40; /*0x44f58e*/
      if ( v40 > BuildingTypeClass::GetFoundationHeight(v47, 0) ) /*0x44f599*/
        goto LABEL_53; /*0x44f599*/
    }
LABEL_36:
    *v53 = *(unsigned int *)v48; /*0x44f3a3*/
    return (int)v53; /*0x44f3b4*/
  }
LABEL_53:
  *v53 = g_TerrainTypeTable; /*0x44f59f*/
  return (int)v53; /*0x44f03f*/

}
// 0x710670
void BuildingClass::OnCellPlacementComplete(ObjectClass *a2) {

  int result; // eax
  int (**ptr_0)(TechnoClass *); // edx
  int v4; // eax
  unsigned int v5[3]; // [esp+8h] [ebp-Ch] BYREF
  unsigned int *v6; // [esp+18h] [ebp+4h]

  CellClass::AddObject((CellClass *)this->passengers, v6); /*0x710682*/
  if ( v6 ) /*0x710689*/
  {
    result = (*((int (**)(TechnoClass *))this->ptr_0 + 33))(this); /*0x71068f*/
    if ( *(unsigned int *)(result + 1380) != -1 ) /*0x71069c*/
    {
      v5[0] = this->location[0]; /*0x7106ac*/
      ptr_0 = (int (**)(TechnoClass *))this->ptr_0; /*0x7106b0*/
      v5[1] = this->location[1]; /*0x7106b5*/
      v5[2] = this->location[2]; /*0x7106bc*/
      v4 = ptr_0[33](this); /*0x7106c2*/
      return (int)PlayAudioAt2(*(unsigned int *)(v4 + 1380), v5, 0); /*0x7106d0*/
    }
  }
  return result; /*0x7106d5*/

}
void BuildingClass::SetRallyPoint(CoordStruct* target)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  char v7; // di
  int v8; // eax
  int v9; // ecx
  int TileIndex; // eax
  unsigned int *v11; // eax
  unsigned char *WaypointCoords; // eax
  unsigned char *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // ebp
  unsigned int *v17; // eax
  CellClass *v18; // eax
  unsigned char *v19; // eax
  unsigned char *v20; // eax
  int v21; // eax
  char *v22; // eax
  int v23; // [esp-10h] [ebp-B4h]
  int v24; // [esp-10h] [ebp-B4h]
  char v25; // [esp-Ch] [ebp-B0h]
  char v26; // [esp-Ch] [ebp-B0h]
  int v27; // [esp-8h] [ebp-ACh]
  int v28; // [esp-8h] [ebp-ACh]
  char v29; // [esp-4h] [ebp-A8h]
  char v30; // [esp-4h] [ebp-A8h]
  int16_t v31[4]; // [esp+10h] [ebp-94h] BYREF
  char v32[8]; // [esp+18h] [ebp-8Ch] BYREF
  int v33; // [esp+20h] [ebp-84h]
  int16_t v34[2]; // [esp+24h] [ebp-80h] BYREF
  unsigned char v35[8]; // [esp+28h] [ebp-7Ch] BYREF
  int v36; // [esp+30h] [ebp-74h]
  char v37[112]; // [esp+34h] [ebp-70h] BYREF
  char a3; // raw param 3 (truth 0x443860: this + int16_t *a2 + char a3; hpp decl 1-param -- decl gap)

  v33 = 0; /*0x44387b*/
  v4 = 0; /*0x44387f*/
  v5 = *((unsigned int *)((CellCoord *)&stru_87F5F0_raw.__pad_58[416])->To_CellObj((int16_t *)target) + 80); /*0x443886*/
  v6 = this->gattlingValue; /*0x44388c*/
  v32[0] = (((v5) >> 8) & 0xFF) & 1; /*0x443898*/
  if ( ((BuildingTypeClass *)v6)->BuildingTypeClass_field_ED8 == 3 ) /*0x4438a5*/
  {
    v33 = 4; /*0x4438a7*/
    v4 = 9; /*0x4438af*/
  }
  if ( ((BuildingTypeClass *)v6)->Naval ) /*0x4438b4*/
  {
    v33 = 6; /*0x4438bc*/
    v4 = 4; /*0x4438c4*/
  }
  v7 = v32[0]; /*0x4438cf*/
  v8 = this->location.X; /*0x4438d5*/
  v9 = this->location.Y; /*0x4438d7*/
  v36 = this->location.Z; /*0x4438dd*/
  v31[0] = v8 / 256; /*0x4438ed*/
  v31[1] = v9 / 256; /*0x443905*/
  TileIndex = ((MapClass *)&stru_87F5F0_raw.__pad_58[416])->GetTileIndex((int)v31, v4, v32[0]); /*0x443917*/
  v31[0] = 0; /*0x44391d*/
  v31[1] = 0; /*0x443922*/
  *(unsigned int *)v34 = *(unsigned int *)((LayerClass *)&stru_87F5F0_raw.__pad_58[416])->Pathfinding_Find( /*0x443965*/
                      v33,
                      (void *)v32,
                      (int16_t *)target,
                      v33,
                      TileIndex,
                      v4,
                      v7,
                      1,
                      1,
                      0,
                      0,
                      0,
                      1,
                      v31,
                      0,
                      0);
  if ( *(unsigned int *)v34 != g_TerrainTypeTable ) /*0x443969*/
  {
    v11 = (unsigned int *)((CellCoord *)&stru_87F5F0_raw.__pad_58[416])->To_CellObj(v34); /*0x443987*/
    WaypointCoords = ((ScriptAction *)v32)->GetWaypointCoords(v11); /*0x443991*/
    v27 = *(unsigned int *)WaypointCoords; /*0x4439a1*/
    v29 = WaypointCoords->ptr_4; /*0x4439a3*/
    v13 = ((ScriptAction *)v31)->GetWaypointCoords((unsigned int *)this); /*0x4439aa*/
    v23 = *(unsigned int *)v13; /*0x4439bb*/
    v25 = v13->ptr_4; /*0x4439c0*/
    v14 = this->GetID(); /*0x4439c5*/

    v15 = (char *)((ScenarioClass *)v37)->SetEvent(v14, 30, v23, v25, v27, v29); /*0x4439cd*/
    if ( (int)stru_A80220_raw.lineTrailer < 128 ) /*0x4439dc*/
    {
      memcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v15, 0x6Fu); /*0x4439f8*/
      (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x443a09*/
      dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x443a20*/
      ++stru_A80220_raw.lineTrailer; /*0x443a26*/
    }
    goto LABEL_8; /*0x443a26*/
  }
  if ( !*(unsigned char *)(this->gattlingValue + 5817) /*0x443ab0*/
    || !(uint8_t)((HouseClass *)this->owner)->IsCurrentPlayer() /*0x443ab0*/
    || !*(unsigned int *)&dword_A8B238
    || !dword_A8B320
    || this->mindControlledBy )
  {
  LABEL_8:
    if ( a3 ) /*0x443a34*/
    {
      if ( (uint8_t)((HouseClass *)this->owner)->IsHumanPlayer() ) /*0x443a3c*/
      {
        v16 = this->gattlingValue; /*0x443a45*/
        if ( !this->u32_5ED && !this->u32_735 ) /*0x443a55*/
          ((VoxClass *)&((unsigned int *)&stru_818E00)[27])->FindAndPlay(-1); /*0x443a69*/
      }
    }
    return; /*0x443a69*/
  }
  v17 = (unsigned int *)(*((int (**)(BuildingClass *, unsigned char *))this->ptr_0 + 18))(this, v35); /*0x443ac8*/
  v18 = RawCoord::To_Cell(&stru_87F5F0_raw.__pad_58[416], v17); /*0x443ad1*/
  v19 = ((ScriptAction *)v32)->GetWaypointCoords(v18); /*0x443adb*/
  v28 = *(unsigned int *)v19; /*0x443aeb*/
  v30 = v19->ptr_4; /*0x443aed*/
  v20 = ((ScriptAction *)v31)->GetWaypointCoords((unsigned int *)this); /*0x443af4*/
  v24 = *(unsigned int *)v20; /*0x443b05*/
  v26 = v20->ptr_4; /*0x443b0a*/
  v21 = this->GetID(); /*0x443b0f*/

  v22 = (char *)((ScenarioClass *)v37)->SetEvent(v21, 30, v24, v26, v28, v30); /*0x443b17*/
  if ( (int)stru_A80220_raw.lineTrailer < 128 ) /*0x443b26*/
  {
    memcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v22, 0x6Fu); /*0x443b46*/
    (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x443b5a*/
    dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x443b71*/
    ++stru_A80220_raw.lineTrailer; /*0x443b77*/
  }
}
// 0x4a9650
int BuildingClass::MarkExitPath(unsigned short *a2, int a3) {
  CellClass *result; // eax
  unsigned short *v4; // ebp
  int16_t *v6; // esi
  char v7; // bl
  int16_t v9; // dx
  int v10; // ecx

  a3 = a3; /*0x4a9652*/
  (*((unsigned short *)&(result))) = *a3; /*0x4a965a*/
  if ( *a3 != *(unsigned short *)&stru_8A0390.bombVisible || a3[1] != *(unsigned short *)&stru_8A0390.alignmentPadding69[1] ) /*0x4a9672*/
  {
    v6 = (int16_t *)this->u32_118C; /*0x4a9674*/
    v7 = (char)a3; /*0x4a967a*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a968b*/
    {
      v6 = v6; /*0x4a968d*/
      v6 += 2; /*0x4a968f*/
      v9 = *v6; /*0x4a9692*/
      (*((unsigned short *)&(v6))) = a3[1] + v6[1]; /*0x4a969d*/
      (*((unsigned short *)&(a3))) = *a3 + v9; /*0x4a96a1*/
      (*(((unsigned short *)&(a3)) + 1)) = (unsigned short)v6; /*0x4a96a6*/
      a3 = a3; /*0x4a96b3*/
      result = ((LayerClass *)this)->CoordinatesLegal( (int16_t *)&a3); /*0x4a96ba*/
      if ( (unsigned char)result ) /*0x4a96c1*/
      {
        result = (int)((CellCoord *)this)->To_CellObj((int16_t *)&a3); /*0x4a96ca*/
        v10 = result->copyFlags; /*0x4a96cf*/
        if ( v7 ) /*0x4a96d7*/
          result->copyFlags = v10 | 4; /*0x4a96dc*/
        else
          result->copyFlags = v10 & 0xFFFFFFFB; /*0x4a96e7*/
      }
    }
  }
  return result; /*0x4a96ef*/
}
// 0x639cb0
bool BuildingClass::CheckExitPath()
{

  int result; // eax
  unsigned int *v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ebp
  unsigned int *v6; // edi
  int v7; // ebx
  int v8; // esi
  unsigned int *v9; // edx
  int v10; // edx
  int v11; // esi
  int v12; // ecx
  unsigned int *v13; // edx
  signed int v14; // esi
  signed int i; // ecx
  unsigned __int8 *v16; // eax
  int v17; // [esp+10h] [ebp-8h]
  unsigned int *v18; // [esp+14h] [ebp-4h]

  result = BuildingClass::GetType(this); /*0x639cb7*/
  v2 = (unsigned int *)result; /*0x639cbc*/
  v3 = 0; /*0x639cbe*/
  v18 = (unsigned int *)result; /*0x639cc0*/
  v4 = *(unsigned int *)(result + 20); /*0x639cc4*/
  v5 = *(unsigned int *)(result + 148); /*0x639cc7*/
  v17 = v4; /*0x639ccf*/
  if ( v4 /*0x639cf0*/
    && (v4 > 0 || v5 >= 0 && (result = -v5 / *(unsigned int *)(result + 144), v3 = v5 + -v5 % (int)v2[36], v3 >= 0) && v3 < v4) )
  {
    result = v2[2]; /*0x639cf2*/
    v6 = *(unsigned int **)(result + 4 * v3); /*0x639cf5*/
  }
  else
  {
    v6 = 0; /*0x639cfa*/
  }
  v7 = v6[4]; /*0x639cfc*/
  v8 = 0; /*0x639cff*/
  if ( v7 > 0 ) /*0x639d03*/
  {
    while ( 1 ) /*0x639d0c*/
    {
      v9 = *(unsigned int **)(v6[1] + 4 * v8); /*0x639d0c*/
      result = (*(int (**)(unsigned int))(*(unsigned int *)*v9 + 1216))(*v9); /*0x639d13*/
      if ( (unsigned char)result ) /*0x639d1b*/
        break; /*0x639d1b*/
      if ( ++v8 >= v7 ) /*0x639d20*/
        return result; /*0x639d20*/
    }
    if ( v5 < v17 ) /*0x639d2e*/
    {
      while ( 1 ) /*0x639d36*/
      {
        v10 = v5; /*0x639d36*/
        v11 = v18[5]; /*0x639d38*/
        if ( !v11 ) /*0x639d3d*/
          break; /*0x639d3d*/
        if ( v5 >= v11 ) /*0x639d41*/
        {
          v12 = v18[37]; /*0x639d43*/
          if ( v12 < 0 ) /*0x639d4b*/
            break; /*0x639d4b*/
          v10 = v12 + (v5 - v12) % v18[36]; /*0x639d5a*/
        }
        if ( v10 < 0 || v10 >= v11 ) /*0x639d62*/
          break; /*0x639d62*/
        v13 = *(unsigned int **)(v18[2] + 4 * v10); /*0x639d67*/
LABEL_21:
        v14 = v13[4]; /*0x639d6e*/
        for ( i = 0; i < v14; ++i ) /*0x639d75*/
        {
          v16 = *(unsigned __int8 **)(*(unsigned int *)(v13[1] + 4 * i) + 4); /*0x639d7d*/
          if ( v16[12] == 2 ) /*0x639d83*/
            v16[12] = 29; /*0x639d85*/
        }
        result = v17; /*0x639d8e*/
        if ( ++v5 >= v17 ) /*0x639d95*/
          return result; /*0x639d95*/
      }
      v13 = 0; /*0x639d6c*/
      goto LABEL_21; /*0x639d6c*/
    }
  }
  return result; /*0x639d22*/

}
// 0x453840
int BuildingClass::RenderExitPosition()
{
  int *v2; // eax
  int v3; // edi
  int v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BuildingTypeClass *Type; // ecx
  int *v11; // eax
  int v12; // edi
  int v13; // ebx
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // esi
  int v23; // ecx
  unsigned int *v24; // ecx
  int *v25; // eax
  int v26; // edi
  BuildingTypeClass *v27; // esi
  int v28; // ebx
  int v29; // ebp
  int v30; // ecx
  unsigned int *v31; // eax
  int *PrimaryFirePixelOffset; // [esp-4h] [ebp-28h]
  int *v33; // [esp+0h] [ebp-24h]
  int v34[2]; // [esp+10h] [ebp-14h] BYREF
  int v35[3]; // [esp+18h] [ebp-Ch] BYREF
  unsigned int *cell; // [esp+28h] [ebp+4h]
  int v37; // [esp+2Ch] [ebp+8h]

  if ( this->Type->CanBeOccupied && (*((int (__thiscall **)(BuildingClass *))this->ptr_0 + 258))(this) > 0 ) /*0x453865*/
  {
    v2 = (int *)World::ToScreen(v34, &this->Type->__pad_1584[8 * this->Audio8[4] + 4], v33); /*0x453886*/
    v3 = *v2; /*0x45388b*/
    v4 = v2->ptr_4; /*0x45388d*/
    v5 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->ptr_0 + 43))(this, v35); /*0x453899*/
    v6 = *v5; /*0x45389f*/
    v7 = v5[1]; /*0x4538a5*/
    v8 = v5[2]; /*0x4538a8*/
    *cell = v3 + v6; /*0x4538b1*/
    cell->ptr_2 = v4 + v7; /*0x4538b3*/
    cell->ptr_3 = v8; /*0x4538b6*/
    return (int)cell; /*0x4538b9*/
  }
  else
  {
    Type = this->Type; /*0x4538c5*/
    if ( Type->PrimaryFirePixelOffset[0] == 0xFFFF && Type->PrimaryFirePixelOffset[1] == 0xFFFF ) /*0x4538e6*/
    {
      if ( Type->BarrelAnimIsVoxel ) /*0x4539a1*/
      {
        v24 = BuildingClass::CalcBarrelFlashPosition(this, v35, v37, 1); /*0x4539be*/
        *cell = *v24; /*0x4539c8*/
        cell->ptr_2 = v24[1]; /*0x4539cd*/
        cell->ptr_3 = v24[2]; /*0x4539d3*/
        return (int)cell; /*0x4539c0*/
      }
      else
      {
        v25 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x4539ff*/
        v26 = *v25; /*0x453a04*/
        v27 = this->Type; /*0x453a06*/
        v28 = v25->ptr_4; /*0x453a0c*/
        v29 = v25->ptr_8; /*0x453a0f*/
        if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
        {
          v30 = *&v27->u32_11E0; /*0x453a22*/
          v34[1] = *&v27->u32_11E4; /*0x453a28*/
          v34[0] = v30; /*0x453a34*/
          v31 = (unsigned int *)World::ToScreen(v35, v34, v33); /*0x453a40*/
          v26 += *v31; /*0x453a4a*/
          v28 += v31->ptr_4; /*0x453a4c*/
        }
        *cell = v26; /*0x453a54*/
        cell->ptr_2 = v28; /*0x453a58*/
        cell->ptr_3 = v29; /*0x453a5b*/
        return (int)cell; /*0x453a4e*/
      }
    }
    else
    {
      PrimaryFirePixelOffset = Type->PrimaryFirePixelOffset; /*0x4538f2*/
      if ( Type->PrimaryFireDualOffset ) /*0x4538ec*/
      {
        v11 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453902*/
        v12 = *v11; /*0x453907*/
        v13 = v11->ptr_4; /*0x453909*/
        v14 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x45392c*/
        v15 = *v14; /*0x453931*/
        v16 = v14->ptr_4; /*0x453937*/
        v17 = v14->ptr_8; /*0x45393a*/
        *cell = v12 + v15; /*0x453943*/
        cell->ptr_2 = v13 + v16; /*0x453945*/
      }
      else
      {
        v18 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453962*/
        v19 = *v18; /*0x453967*/
        v20 = v18->ptr_4; /*0x453969*/
        v21 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->ptr_0 + 43))(this, v35); /*0x453975*/
        v22 = *v21; /*0x45397b*/
        v23 = v21[1]; /*0x453981*/
        v17 = v21[2]; /*0x453984*/
        *cell = v22 + v19; /*0x45398d*/
        cell->ptr_2 = v20 + v23; /*0x45398f*/
      }
      cell->ptr_3 = v17; /*0x453948*/
      return (int)cell; /*0x45394b*/
    }
  }
}
// IDA 0x459ec0: returns 6 (wait timer constant)
// 0x443c60
int BuildingClass::UpdateConstruction()
{

  double v1; // st7
  int v3; // eax
  ObjectClass *v4; // ebp
  unsigned __int8 *v5; // eax
  DynamicVector *v6; // edx
  __int16 v7; // di
  int v8; // edx
  unsigned int *v9; // eax
  Random *p_NeedsSaveOrLink; // ecx
  __int16 v11; // ax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  void *v15; // eax
  int *PlacementCellsAlt; // eax
  int v17; // esi
  int Field9; // eax
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // esi
  unsigned char *Type; // eax
  int result; // eax
  BuildingTypeClass *v27; // eax
  int v28; // eax
  BuildingTypeClass *v29; // eax
  unsigned int *v30; // eax
  int focus; // ecx
  unsigned int *v32; // eax
  int v33; // ebp
  int v34; // ebx
  __int16 *v35; // eax
  int v36; // ecx
  int v37; // edx
  unsigned int v38; // ebp
  Cell *v39; // eax
  unsigned short *v40; // ebp
  __int16 v41; // ax
  Cell *v42; // eax
  int v43; // edx
  unsigned int *v44; // eax
  int v45; // kr14_4
  int v46; // eax
  int v47; // eax
  void *v48; // eax
  int v49; // ebx
  int v50; // eax
  int v51; // esi
  int v52; // esi
  CellClass *v53; // eax
  int *Coords; // eax
  int v55; // ebx
  int v56; // eax
  BuildingClass *v57; // ebp
  int Factory; // ebx
  int v59; // ebp
  int v60; // eax
  int v61; // ebp
  int v62; // eax
  int v63; // edx
  int v64; // edx
  __int16 v65; // ax
  __int16 v66; // cx
  int v67; // edx
  int *v68; // eax
  int v69; // eax
  unsigned int v70; // ebx
  BuildingTypeClass *v71; // ecx
  __int16 v72; // bp
  int *v73; // ecx
  int v74; // ecx
  __int16 v75; // ax
  int v76; // ecx
  int v77; // edx
  int v78; // eax
  int v79; // ebp
  int v80; // ebx
  int v81; // ecx
  int v82; // edx
  int v83; // ebp
  int v84; // ecx
  int v85; // eax
  int v86; // ebx
  void *v87; // eax
  int ptr_0; // edx
  int v89; // eax
  int *v90; // ecx
  DynamicVector *owner; // eax
  int v92; // ebx
  int v93; // edx
  unsigned int *v94; // ebp
  int v95; // eax
  int *v96; // eax
  int v97; // eax
  unsigned int v98; // ebp
  BuildingTypeClass *v99; // ecx
  __int16 v100; // bx
  int *v101; // ecx
  int FoundationHeight; // eax
  __int16 v103; // cx
  int v104; // eax
  unsigned int *v105; // edx
  int v106; // ecx
  int v107; // ebp
  unsigned int *v108; // ebx
  int v109; // edx
  int v110; // edx
  int v111; // ebp
  int v112; // eax
  int v113; // ecx
  int v114; // ebx
  void *v115; // eax
  void *v116; // eax
  void *v117; // eax
  unsigned int *v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  unsigned int *v122; // ecx
  __int16 *v123; // ebx
  unsigned int *v124; // eax
  int v125; // ecx
  int v126; // ebp
  int v127; // ecx
  int v128; // ebp
  int v129; // ebp
  int v130; // eax
  unsigned int *v131; // ebx
  int v132; // edx
  int v133; // eax
  unsigned int *v134; // eax
  int v135; // edx
  int v136; // eax
  int v137; // edx
  int v138; // eax
  int v139; // edx
  BuildingClass *v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // eax
  int v144; // eax
  int v145; // esi
  int v146; // ecx
  int v147; // ecx
  int v148; // edx
  int v149; // eax
  int v150; // ecx
  unsigned int *v151; // edi
  unsigned int *v152; // ecx
  BuildingClass *v153; // ecx
  int v154; // eax
  int v155; // ecx
  int v156; // eax
  int v157; // eax
  int v158; // esi
  int v159; // ecx
  int v160; // ebx
  int v161; // esi
  int *i; // eax
  int v163; // eax
  int v164; // edi
  int v165; // eax
  int v166; // ecx
  int v167; // ecx
  int v168; // edx
  int v169; // edi
  int v170; // eax
  int v171; // ebx
  int v172; // ecx
  bool v173; // zf
  int v174; // ecx
  int v175; // esi
  int v176; // ecx
  int v177; // ecx
  int v178; // edx
  int v179; // eax
  int v180; // ecx
  unsigned int *v181; // edi
  unsigned int *v182; // ecx
  int FreeSlot; // eax
  int v184; // esi
  int v185; // ecx
  int v186; // ecx
  int v187; // edx
  int v188; // eax
  int v189; // ecx
  unsigned int *v190; // edi
  unsigned int *v191; // ecx
  void *v192; // [esp-Ch] [ebp-178h]
  __int16 v193[4]; // [esp+0h] [ebp-16Ch] BYREF
  __int16 v194[4]; // [esp+8h] [ebp-164h] BYREF
  double v195; // [esp+10h] [ebp-15Ch] BYREF
  __int16 v196[2]; // [esp+18h] [ebp-154h] BYREF
  int v197; // [esp+1Ch] [ebp-150h]
  int *v198; // [esp+20h] [ebp-14Ch]
  int v199; // [esp+24h] [ebp-148h]
  int v200; // [esp+28h] [ebp-144h]
  unsigned int *v201; // [esp+2Ch] [ebp-140h]
  __int16 v202[2]; // [esp+30h] [ebp-13Ch] BYREF
  __int16 v203[2]; // [esp+34h] [ebp-138h] BYREF
  unsigned int v204; // [esp+38h] [ebp-134h]
  int v205; // [esp+3Ch] [ebp-130h]
  unsigned int *v206; // [esp+40h] [ebp-12Ch]
  int v207; // [esp+44h] [ebp-128h] BYREF
  unsigned int *v208; // [esp+48h] [ebp-124h]
  int v209; // [esp+4Ch] [ebp-120h]
  int v210; // [esp+50h] [ebp-11Ch] BYREF
  int v211; // [esp+54h] [ebp-118h]
  int v212; // [esp+58h] [ebp-114h] BYREF
  int v213; // [esp+5Ch] [ebp-110h] BYREF
  int v214; // [esp+60h] [ebp-10Ch]
  int v215; // [esp+64h] [ebp-108h] BYREF
  int v216; // [esp+68h] [ebp-104h]
  int v217; // [esp+6Ch] [ebp-100h] BYREF
  int v218; // [esp+70h] [ebp-FCh]
  __int16 v219[6]; // [esp+74h] [ebp-F8h] BYREF
  int v220; // [esp+80h] [ebp-ECh] BYREF
  int v221[3]; // [esp+84h] [ebp-E8h] BYREF
  int v222; // [esp+90h] [ebp-DCh] BYREF
  int v223; // [esp+94h] [ebp-D8h] BYREF
  unsigned int v224[3]; // [esp+98h] [ebp-D4h] BYREF
  unsigned int v225[4]; // [esp+A4h] [ebp-C8h] BYREF
  int v226; // [esp+B4h] [ebp-B8h] BYREF
  unsigned int v227[2]; // [esp+B8h] [ebp-B4h] BYREF
  int v228; // [esp+C0h] [ebp-ACh] BYREF
  char v229[4]; // [esp+C4h] [ebp-A8h] BYREF
  unsigned int v230[2]; // [esp+C8h] [ebp-A4h] BYREF
  int v231; // [esp+D0h] [ebp-9Ch] BYREF
  char v232[8]; // [esp+D4h] [ebp-98h] BYREF
  unsigned int v233; // [esp+DCh] [ebp-90h] BYREF
  unsigned int v234; // [esp+E4h] [ebp-88h] BYREF
  char v235[8]; // [esp+ECh] [ebp-80h] BYREF
  char v236[12]; // [esp+F4h] [ebp-78h] BYREF
  char v237[4]; // [esp+100h] [ebp-6Ch] BYREF
  char v238[8]; // [esp+104h] [ebp-68h] BYREF
  unsigned char v239[16]; // [esp+10Ch] [ebp-60h] BYREF
  int v240[2]; // [esp+11Ch] [ebp-50h] BYREF
  char v241[12]; // [esp+124h] [ebp-48h] BYREF
  char v242[48]; // [esp+130h] [ebp-3Ch] BYREF
  char v243[12]; // [esp+160h] [ebp-Ch] BYREF
  char *v244; // [esp+170h] [ebp+4h]
  int v245; // [esp+174h] [ebp+8h]

  if ( !v244 ) /*0x443c77*/
    return 0; /*0x443c77*/
  v3 = *(unsigned int *)v244; /*0x443c7d*/
  v244[981] = 1; /*0x443c81*/
  v4 = 0; /*0x443c88*/
  if ( (*(int (**)(char *))(v3 + 44))(v244) == 2 ) /*0x443c90*/
    v4 = (ObjectClass *)v244; /*0x443c92*/
  v5 = (unsigned __int8 *)((*(int (**)(char *))(*(unsigned int *)v244 + 44))(v244) - 1); /*0x443c9b*/
  if ( (unsigned int)v5 > 0xE ) /*0x443c9f*/
    return 0; /*0x445696*/
  switch ( v5[4478648] ) /*0x443cad*/
  {
    case 0u: /*0x443cad*/
      Type = (unsigned char *)this->Type; /*0x444096*/
      if ( !Type->Hospital && !Type->Armory && !Type->WeaponsFactory && !RadioClass::HasFreeLink((RadioClass *)this) ) /*0x4440bc*/
        return 1; /*0x4440d4*/
      v27 = this->Type; /*0x4440d7*/
      if ( !*(unsigned char *)(v27 + 5825) && !v27->Armory ) /*0x4440ea*/
      {
        v28 = (*(int (**)(char *))(*(unsigned int *)v244 + 44))(v244); /*0x4440f8*/
        HouseClass::UpdateBuildState(this->owner, v28); /*0x444102*/
        if ( (*(int (**)(char *))(*(unsigned int *)v244 + 44))(v244) == 1 ) /*0x444111*/
          *(unsigned int *)&this->owner->ratioTeamBuildings = -1; /*0x444119*/
        if ( (*(int (**)(char *))(*(unsigned int *)v244 + 44))(v244) == 15 ) /*0x444129*/
          *(unsigned int *)&this->owner->baseDefenseTeamCount = -1; /*0x444131*/
      }
      v29 = this->Type; /*0x444137*/
      if ( *(unsigned char *)(v29 + 5819) || v29->Weeder ) /*0x44414b*/
      {
        if ( (*(int (**)(char *))(*(unsigned int *)v244 + 44))(v244) != 1 ) /*0x444dee*/
        {
          (*(void (**)(char *, unsigned int *, int, unsigned int))(*(unsigned int *)v244 + 372))( /*0x444f04*/
            v244,
            &g_BuildingClassPool,
            1,
            0);
          return 0; /*0x444f16*/
        }
        v118 = (unsigned int *)this->GetInvalidCoord( v243); /*0x444e00*/
        v199 = 160; /*0x444e05*/
        LOWORD(v208) = *v118 / 256; /*0x444e18*/
        v119 = v118[1]; /*0x444e1d*/
        v225[2] = 0; /*0x444e27*/
        LOWORD(v208) = dword_89F69C + (unsigned short)v208; /*0x444e4a*/
        HIWORD(v208) = v119 / 256 + (((dword_89F69C) >> 16) & 0xFFFF); /*0x444e5a*/
        ++dword_A8E7AC; /*0x444e63*/
        v204 = (unsigned int)v208; /*0x444e6f*/
        v120 = *(unsigned int *)v244; /*0x444e87*/
        v225[0] = ((__int16)((unsigned short)v208 + dword_89F698) << 8) + 128; /*0x444e8f*/
        v225[1] = ((__int16)(HIWORD(v208) + *(&dword_89F698 + 1)) << 8) + 128; /*0x444ea9*/
        if ( (*(unsigned __int8 (**)(char *, unsigned int *, int))(v120 + 216))(v244, v225, 160) ) /*0x444eb0*/
        {
          v219[0] = 0x8000; /*0x444ec5*/
          FacingClass::Set_SyncLog(v244 + 904, v219); /*0x444ecc*/
          (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v244 + 488))(v244, 10, 0); /*0x444ed8*/
        }
        goto LABEL_146; /*0x444ed8*/
      }
      if ( !v29->WeaponsFactory ) /*0x444161*/
      {
        if ( *(unsigned int *)(v29 + 3768) == 16 || *(unsigned char *)(v29 + 5825) || *(unsigned char *)(v29 + 5826) || *(unsigned char *)(v29 + 5804) ) /*0x44462a*/
        {
          TechnoClass::SetFocus((TechnoClass *)v244, this->focus); /*0x444997*/
          ptr_0 = this->ptr_0; /*0x4449a1*/
          v200 = g_TerrainTypeTable; /*0x4449a3*/
          v199 = (int)v244; /*0x4449ab*/
          v198 = &v228; /*0x4449ac*/
          *(unsigned int *)v202 = *(unsigned int *)(*(int (**)(BuildingClass *))(ptr_0 + 1236))(this); /*0x4449ba*/
          if ( *(unsigned int *)v202 == g_TerrainTypeTable ) /*0x4449c5*/
            return 0; /*0x4449c5*/
          v89 = this->Type; /*0x4449d9*/
          if ( *(unsigned int *)(v89 + 3768) == 16 && !*(unsigned char *)(v89 + 5804) ) /*0x4449e7*/
          {
            v90 = (int *)(*(int (**)(char *))(*(unsigned int *)v244 + 132))(v244); /*0x4449fb*/
            owner = this->owner; /*0x4449fd*/
            v92 = 0; /*0x444a03*/
            v215 = (int)v90; /*0x444a05*/
            if ( *(int *)(owner + 264) > 0 ) /*0x444a11*/
            {
              while ( 1 ) /*0x444a1f*/
              {
                v93 = *v90; /*0x444a1f*/
                v94 = *(unsigned int **)(*(unsigned int *)(owner + 252) + 4 * v92); /*0x444a21*/
                v197 = v94[135]; /*0x444a2a*/
                v95 = (*(int (**)(int *))(v93 + 140))(v90); /*0x444a2b*/
                (*(void (**)(unsigned int *, int, int))(*v94 + 256))(v94, v95, g_TerrainTypeTable); /*0x444a3e*/
                owner = this->owner; /*0x444a44*/
                if ( ++v92 >= *(unsigned int *)(owner + 264) ) /*0x444a51*/
                  break; /*0x444a51*/
                v90 = (int *)v212; /*0x444a15*/
              }
            }
          }
          v204 = ((short)(((v199) >> 16) & 0xFFFF) << 8) + 128; /*0x444a6e*/
          *(unsigned int *)v203 = ((__int16)v199 << 8) + 128; /*0x444a72*/
          v96 = (int *)this->GetInvalidCoord( v242); /*0x444a82*/
          v211 = *v96; /*0x444a8e*/
          Math::CalcAngle((double)v96[1] - (double)*(int *)v203, (double)*(int *)v202 - (double)v211); /*0x444aa7*/
          (v211) = ((v211) & ~0xFFFF) | ((Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427)) & 0xFFFF); /*0x444ac0*/
          v211 = (unsigned __int8)((((unsigned int)v211 >> 7) + 1) >> 1); /*0x444adf*/
          v97 = this->ptr_0; /*0x444ae3*/
          *(unsigned int *)v202 = v198; /*0x444ae8*/
          v98 = *(unsigned int *)(*(int (**)(BuildingClass *, char *))(v97 + 440))(this, v232); /*0x444af2*/
          v99 = (BuildingTypeClass *)this->Type; /*0x444af4*/
          v204 = v98; /*0x444afd*/
          v198 = (int *)(__int16)v98; /*0x444b01*/
          v100 = (__int16)v201; /*0x444b0c*/
          if ( (__int16)v201 < (__int16)v98 + BuildingTypeClass::GetFoundationWidth(v99) ) /*0x444b16*/
          {
            if ( (__int16)v201 < (__int16)v98 ) /*0x444b1f*/
              v100 = (unsigned short)v201 + 1; /*0x444b21*/
          }
          else
          {
            v100 = (unsigned short)v201 - 1; /*0x444b18*/
          }
          v101 = (int *)this->Type; /*0x444b28*/
          v200 = (short)(((v204) >> 16) & 0xFFFF); /*0x444b30*/
          FoundationHeight = BuildingTypeClass::GetFoundationHeight(v101, 0); /*0x444b34*/
          v103 = HIWORD(v201); /*0x444b39*/
          if ( SHIWORD(v201) < (short)(((v204) >> 16) & 0xFFFF) + FoundationHeight ) /*0x444b45*/
          {
            if ( SHIWORD(v201) < (short)(((v204) >> 16) & 0xFFFF) ) /*0x444b50*/
              v103 = HIWORD(v201) + 1; /*0x444b52*/
          }
          else
          {
            v103 = HIWORD(v201) - 1; /*0x444b47*/
          }
          v104 = (v100 << 8) + 128; /*0x444b62*/
          v105 = (unsigned int *)((v103 << 8) + 128); /*0x444b67*/
          v209 = 0; /*0x444b6d*/
          v106 = this->Type; /*0x444b71*/
          v107 = v104; /*0x444b77*/
          v108 = v105; /*0x444b79*/
          v207 = v104; /*0x444b7b*/
          v208 = v105; /*0x444b7f*/
          if ( *(unsigned char *)(v106 + 5860) ) /*0x444b83*/
          {
            if ( (int *)(__int16)v197 == (int *)((char *)v198 + 1) && (v197) = ((v197) & ~(0xFFFF << 16)) | (((= v200 + 2) & 0xFFFF) << 16)) /*0x444ba8*/
            {
              v108 = (unsigned int *)((char *)v105 + *(unsigned int *)(v106 + 3788)); /*0x444bb8*/
              v109 = *(unsigned int *)(v106 + 3792); /*0x444bba*/
              v107 = *(unsigned int *)(v106 + 3784) + v104; /*0x444bc0*/
              v208 = v108; /*0x444bc2*/
              v207 = v107; /*0x444bc6*/
              v209 = v109; /*0x444bca*/
            }
            else
            {
              v108 = v208; /*0x444bd0*/
              v107 = v207; /*0x444bd4*/
            }
          }
          if ( *(unsigned char *)(v106 + 5861) && (int *)(__int16)v197 == (int *)((char *)v198 + 2) && (v197) = ((v197) & ~(0xFFFF << 16)) | (((= v200 + 2) & 0xFFFF) << 16)) /*0x444c00*/
          {
            v110 = *(unsigned int *)(v106 + 3792); /*0x444c08*/
            v107 += *(unsigned int *)(v106 + 3784); /*0x444c0e*/
            v108 = (unsigned int *)((char *)v108 + *(unsigned int *)(v106 + 3788)); /*0x444c1e*/
            v207 = v107; /*0x444c20*/
            v208 = v108; /*0x444c24*/
            v209 += v110; /*0x444c28*/
          }
          if ( *(unsigned char *)(v106 + 5862) && (int *)(__int16)v197 == (int *)((char *)v198 + 2) && (v197) = ((v197) & ~(0xFFFF << 16)) | (((= v200 + 1) & 0xFFFF) << 16)) /*0x444c52*/
          {
            v111 = *(unsigned int *)(v106 + 3784) + v107; /*0x444c5e*/
            v112 = *(unsigned int *)(v106 + 3788); /*0x444c60*/
            v113 = *(unsigned int *)(v106 + 3792); /*0x444c66*/
            v207 = v111; /*0x444c70*/
            v208 = (unsigned int *)((char *)v108 + v112); /*0x444c74*/
            v209 += v113; /*0x444c78*/
          }
          ++dword_A8E7AC; /*0x444c8a*/
          if ( (*(unsigned __int8 (**)(char *, int *, int))(*(unsigned int *)v244 + 216))(v244, &v207, v210) ) /*0x444c95*/
          {
            if ( *((unsigned int *)v244 + 361) /*0x444ccb*/
              && !*(unsigned char *)((*(int (**)(char *))(*(unsigned int *)v244 + 132))(v244) + 3476)
              && !*(unsigned char *)((*(int (**)(char *))(*(unsigned int *)v244 + 132))(v244) + 3284) )
            {
              if ( *((unsigned int *)v244 + 361) ) /*0x444cd5*/
                TechnoClass::SetFocus((TechnoClass *)v244, *((unsigned int *)v244 + 361)); /*0x444ce2*/
              (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v244 + 488))(v244, 2, 0); /*0x444cef*/
              v114 = *(unsigned int *)v244; /*0x444cf5*/
              v115 = ((CellCoord *)&dword_87F7E8)->To_CellObj(&v194[2]); /*0x444d03*/
              (*(void (**)(char *, void *, int))(v114 + 1152))(v244, v115, 1); /*0x444d0b*/
            }
            if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) || *(unsigned char *)&this->Type->Hospital ) /*0x444d26*/
            {
              (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v244 + 488))(v244, 11, 0); /*0x444d3c*/
              *(unsigned int *)v193 = *BuildingPlacement::FindPosition((HouseClass *)this->owner, &v223, v244); /*0x444d5f*/
              if ( *(unsigned int *)v193 == g_TerrainTypeTable || !*(unsigned int *)&this->Type->BuildingTypeClass_field_ED8 ) /*0x444d79*/
              {
                TechnoClass::SetFocus((TechnoClass *)v244, 0); /*0x444db7*/
              }
              else
              {
                v116 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v193); /*0x444d8d*/
                TechnoClass::SetFocus((TechnoClass *)v244, (int)v116); /*0x444d95*/
                v117 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v193); /*0x444da4*/
                BuildingClass::AddToProductionQueue((int)v244, (int)v117); /*0x444dac*/
              }
            }
            if ( this->vt_slot_632(this, 2, v244) == 1 ) /*0x444dcc*/
              this->vt_slot_632(this, 9, v244); /*0x444dd9*/
            goto LABEL_99; /*0x444ddf*/
          }
        }
        else
        {
          v63 = this->ptr_0; /*0x44463f*/
          v200 = v245; /*0x444641*/
          v64 = *(unsigned int *)(*(int (**)(BuildingClass *, char *, char *))(v63 + 1236))(this, v229, v244); /*0x444653*/
          v65 = v64; /*0x444655*/
          *(unsigned int *)v202 = v64; /*0x444658*/
          v66 = (((v64) >> 16) & 0xFFFF); /*0x444663*/
          if ( v64 == g_TerrainTypeTable ) /*0x444668*/
            return 0; /*0x444668*/
          v67 = this->ptr_0; /*0x44467d*/
          v215 = (v65 << 8) + 128; /*0x44468a*/
          v216 = (v66 << 8) + 128; /*0x44469b*/
          v68 = (int *)(*(int (**)(BuildingClass *, char *))(v67 + 72))(this, v241); /*0x4446a2*/
          v205 = *v68; /*0x4446ae*/
          Math::CalcAngle((double)v68[1] - (double)v215, (double)v214 - (double)v205); /*0x4446c7*/
          (v205) = ((v205) & ~0xFFFF) | ((Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427)) & 0xFFFF); /*0x4446e0*/
          v214 = (unsigned __int8)((((unsigned int)v205 >> 7) + 1) >> 1); /*0x4446ff*/
          v69 = this->ptr_0; /*0x444703*/
          v208 = v201; /*0x444708*/
          v70 = *(unsigned int *)(*(int (**)(BuildingClass *, unsigned int *))(v69 + 440))(this, v227); /*0x444712*/
          v71 = (BuildingTypeClass *)this->Type; /*0x444714*/
          v204 = v70; /*0x44471d*/
          v201 = (unsigned int *)(__int16)v70; /*0x444721*/
          v72 = v207; /*0x44472c*/
          if ( (__int16)v207 < (__int16)v70 + BuildingTypeClass::GetFoundationWidth(v71) ) /*0x444736*/
          {
            if ( (__int16)v207 < (__int16)v70 ) /*0x44473f*/
              v72 = v207 + 1; /*0x444741*/
          }
          else
          {
            v72 = v207 - 1; /*0x444738*/
          }
          v73 = (int *)this->Type; /*0x444748*/
          *(unsigned int *)v203 = (short)(((v204) >> 16) & 0xFFFF); /*0x444750*/
          v74 = BuildingTypeClass::GetFoundationHeight(v73, 0); /*0x444759*/
          v75 = (((v207) >> 16) & 0xFFFF); /*0x44475b*/
          if ( (short)(((v207) >> 16) & 0xFFFF) < (short)(((v204) >> 16) & 0xFFFF) + v74 ) /*0x444767*/
          {
            if ( (short)(((v207) >> 16) & 0xFFFF) < (short)(((v204) >> 16) & 0xFFFF) ) /*0x444772*/
              v75 = (((v207) >> 16) & 0xFFFF) + 1; /*0x444774*/
          }
          else
          {
            v75 = (((v207) >> 16) & 0xFFFF) - 1; /*0x444769*/
          }
          v76 = (v72 << 8) + 128; /*0x444784*/
          v77 = (v75 << 8) + 128; /*0x44478a*/
          v212 = 0; /*0x444790*/
          v78 = this->Type; /*0x444794*/
          v79 = v76; /*0x44479a*/
          v80 = v77; /*0x44479c*/
          v210 = v76; /*0x44479e*/
          v211 = v77; /*0x4447a2*/
          if ( *(unsigned char *)(v78 + 5860) ) /*0x4447a6*/
          {
            if ( (unsigned int *)(__int16)v200 == (unsigned int *)((char *)v201 + 1) && (short)(((v200) >> 16) & 0xFFFF) == *(unsigned int *)v203 + 2 ) /*0x4447cb*/
            {
              v79 = v76 + *(unsigned int *)(v78 + 3784); /*0x4447d9*/
              v81 = *(unsigned int *)(v78 + 3792); /*0x4447db*/
              v80 = v77 + *(unsigned int *)(v78 + 3788); /*0x4447e1*/
              v210 = v79; /*0x4447e3*/
              v211 = v80; /*0x4447e7*/
              v212 = v81; /*0x4447eb*/
            }
            else
            {
              v80 = v211; /*0x4447f1*/
              v79 = v210; /*0x4447f5*/
            }
          }
          if ( *(unsigned char *)(v78 + 5861) /*0x444821*/
            && (unsigned int *)(__int16)v200 == (unsigned int *)((char *)v201 + 2)
            && (short)(((v200) >> 16) & 0xFFFF) == *(unsigned int *)v203 + 2 )
          {
            v82 = v80 + *(unsigned int *)(v78 + 3788); /*0x444835*/
            v79 += *(unsigned int *)(v78 + 3784); /*0x44483f*/
            v206 = (unsigned int *)(v212 + *(unsigned int *)(v78 + 3792)); /*0x444841*/
            v80 = v82; /*0x444849*/
            v210 = v79; /*0x44484b*/
            v211 = v82; /*0x44484f*/
            v212 = (int)v206; /*0x444853*/
          }
          if ( *(unsigned char *)(v78 + 5862) /*0x44487d*/
            && (unsigned int *)(__int16)v200 == (unsigned int *)((char *)v201 + 2)
            && (short)(((v200) >> 16) & 0xFFFF) == *(unsigned int *)v203 + 1 )
          {
            v83 = *(unsigned int *)(v78 + 3784) + v79; /*0x444889*/
            v84 = *(unsigned int *)(v78 + 3788); /*0x44488b*/
            v85 = *(unsigned int *)(v78 + 3792); /*0x444891*/
            v210 = v83; /*0x44489b*/
            v211 = v80 + v84; /*0x44489f*/
            v212 += v85; /*0x4448a3*/
          }
          ++dword_A8E7AC; /*0x4448b1*/
          if ( (*(unsigned __int8 (**)(char *, int *, int))(*(unsigned int *)v244 + 216))(v244, &v210, v213) ) /*0x4448c0*/
          {
            (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v244 + 488))(v244, 2, 0); /*0x4448d6*/
            v86 = *(unsigned int *)v244; /*0x4448dc*/
            v87 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v196); /*0x4448ea*/
            (*(void (**)(char *, void *, int))(v86 + 1152))(v244, v87, 1); /*0x4448f2*/
            if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x4448fe*/
            {
              (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v244 + 488))(v244, 11, 0); /*0x44490f*/
              *(unsigned int *)v196 = *BuildingPlacement::FindPosition((HouseClass *)this->owner, &v226, v244); /*0x444932*/
              if ( *(unsigned int *)v196 == g_TerrainTypeTable || !*(unsigned int *)&this->Type->BuildingTypeClass_field_ED8 ) /*0x44494c*/
              {
                TechnoClass::SetFocus((TechnoClass *)v244, 0); /*0x44496c*/
              }
              else
              {
                v192 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v196); /*0x444965*/
                TechnoClass::SetFocus((TechnoClass *)v244, (int)v192); /*0x444966*/
              }
            }
            goto LABEL_99; /*0x444966*/
          }
        }
        goto LABEL_146; /*0x4448c8*/
      }
      if ( !v29->Naval ) /*0x44416f*/
      {
        TechnoClass::SetFocus((TechnoClass *)v244, this->focus); /*0x44449b*/
        if ( this->processStateUpdate() == 16 ) /*0x4444ad*/
        {
          v55 = 0; /*0x4444b9*/
          v209 = *(unsigned int *)&this->owner->bunkersCount; /*0x4444c0*/
          v56 = v209; /*0x4444bb*/
          if ( v209 <= 0 ) /*0x4444c4*/
            return 1; /*0x4444c4*/
          while ( 1 ) /*0x4444d3*/
          {
            v57 = *(BuildingClass **)(*(unsigned int *)(this->owner + 108) + 4 * v55); /*0x4444d3*/
            if ( v57->Type == this->Type && v57 != this ) /*0x4444e8*/
            {
              if ( (*(int (**)(unsigned int))(v57->ptr_0 + 388))(*(unsigned int *)(*(unsigned int *)&this->owner->absorbersCount /*0x444502*/
                                                                                + 4 * v55)) == 5
                && !v57->Factory )
              {
                Factory = this->Factory; /*0x44451f*/
                v57->Factory = Factory; /*0x444525*/
                this->Factory = 0; /*0x44452b*/
                result = (*(int (**)(BuildingClass *, char *, int))(v57->ptr_0 + 256))( /*0x444542*/
                           v57,
                           v244,
                           g_TerrainTypeTable);
                v57->Factory = 0; /*0x444548*/
                this->Factory = Factory; /*0x444552*/
                return result; /*0x444562*/
              }
              v56 = v209; /*0x444504*/
            }
            if ( ++v55 >= v56 ) /*0x44450b*/
              return 1; /*0x44451c*/
          }
        }
        v200 = 64; /*0x44456b*/
        ++dword_A8E7AC; /*0x444575*/
        v59 = *(unsigned int *)v244; /*0x44457d*/
        v60 = this->vt_slot_180(this, v237, 0, 64); /*0x444583*/
        if ( (*(unsigned __int8 (**)(char *, int))(v59 + 216))(v244, v60) ) /*0x44458c*/
        {
          (*(void (**)(char *, unsigned int))(*(unsigned int *)v244 + 292))(v244, 0); /*0x44459f*/
          v61 = *(unsigned int *)v244; /*0x4445a7*/
          v62 = this->GetCoordsThunk3( v238, 0); /*0x4445b4*/
          (*(void (**)(char *, int))(v61 + 436))(v244, v62); /*0x4445bd*/
          (*(void (**)(char *, int))(*(unsigned int *)v244 + 292))(v244, 1); /*0x4445c9*/
          this->vt_slot_632(this, 2, v244); /*0x4445d6*/
          this->vt_slot_632(this, 24, v244); /*0x4445e3*/
          this->MissionDispatch( 16, 0); /*0x4445f0*/
          goto LABEL_99; /*0x4445f6*/
        }
        goto LABEL_146; /*0x444594*/
      }
      if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x444177*/
        this->MissionDispatch( 16, 0); /*0x444187*/
      v30 = (unsigned int *)this->GetInvalidCoord( &v213); /*0x444196*/
      v203[0] = *v30 / 256; /*0x4441a9*/
      focus = this->focus; /*0x4441b2*/
      v203[1] = v30[1] / 256; /*0x4441c3*/
      v205 = *(unsigned int *)v203; /*0x4441ce*/
      if ( focus ) /*0x4441d2*/
      {
        v32 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)focus + 72))(focus, &v212); /*0x4441df*/
        v33 = *v32 / 256; /*0x44420b*/
        v34 = v32[1] / 256; /*0x44420e*/
        v35 = (__int16 *)this->GetCellCoords_Alt( v230); /*0x444211*/
        v36 = *v35; /*0x444220*/
        v204 = (__int16)v33; /*0x444223*/
        v37 = v35[1]; /*0x44422e*/
        v204 = (__int16)v34; /*0x44424b*/
        Math::CalcAngle((double)v37 - (double)(__int16)v34, (double)(__int16)v33 - (double)v36); /*0x444258*/
        (v204) = ((v204) & ~0xFFFF) | ((Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427)) & 0xFFFF); /*0x444271*/
        v38 = (((v204 >> 12) + 1) >> 1) & 7; /*0x44428a*/
        v39 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj(v203); /*0x44428d*/
        if ( Cell::IsBridge(v39) == (unsigned int *)this ) /*0x44429b*/
        {
          v40 = (unsigned short *)(4 * (v38 & 7) + 9041544); /*0x4442a0*/
          do /*0x4442e3*/
          {
            v41 = v203[1] + v40[1]; /*0x4442b4*/
            LOWORD(v201) = *v40 + v203[0]; /*0x4442b9*/
            HIWORD(v201) = v41; /*0x4442be*/
            *(unsigned int *)v203 = v201; /*0x4442cb*/
            v42 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj(v203); /*0x4442d5*/
          }
          while ( Cell::IsBridge(v42) == (unsigned int *)this ); /*0x4442e3*/
        }
      }
      if ( this->focus && *((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v203) + 59) == 2 ) /*0x444307*/
      {
        v195 = 0.0; /*0x44430e*/
        *(unsigned int *)&v194[2] = &v220; /*0x444313*/
        v220 = 0; /*0x44431a*/
        v221[0] = 0; /*0x44431e*/
        ((CellCoord *)&dword_87F7E8)->To_CellObj(v203); /*0x444322*/
        JUMPOUT(0x444329); /*0x444329*/
      }
      v43 = this->ptr_0; /*0x44434b*/
      v216 = 0; /*0x44434f*/
      v44 = (unsigned int *)(*(int (**)(BuildingClass *, int *))(v43 + 72))(this, &v210); /*0x444367*/
      LODWORD(v195) = 0; /*0x44436c*/
      *(unsigned int *)&v194[2] = 0; /*0x44436e*/
      (v200) = ((v200) & ~0xFFFF) | ((*v44 / 256) & 0xFFFF); /*0x44437e*/
      v45 = v44[1]; /*0x44438d*/
      *(unsigned int *)v194 = &v215; /*0x444393*/
      *(unsigned int *)&v193[2] = 1; /*0x444394*/
      *(unsigned int *)v193 = 0; /*0x444395*/
      (v200) = ((v200) & ~(0xFFFF << 16)) | (((v45 / 256) & 0xFFFF) << 16); /*0x44439e*/
      v46 = *(unsigned int *)v244; /*0x4443a7*/
      v217 = v200; /*0x4443ad*/
      v47 = (*(int (**)(char *))(v46 + 132))(v244); /*0x4443ba*/
      *(unsigned int *)v202 = *LayerClass::Pathfinding_Find( /*0x4443e3*/
                           (Type *)&dword_87F7E8,
                           (int)&v217,
                           v230,
                           (__int16 *)&v217,
                           *(unsigned int *)(v47 + 1660),
                           -1,
                           0,
                           0,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           (__int16 *)&v215,
                           0,
                           0);
      v48 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v202); /*0x4443f1*/
      v49 = *(unsigned int *)v244; /*0x4443f8*/
      v50 = (*(int (**)(void *, unsigned char *, int))(*(unsigned int *)v48 + 72))(v48, v239, 64); /*0x444406*/
      if ( (*(unsigned __int8 (**)(char *, int))(v49 + 216))(v244, v50) ) /*0x44440c*/
      {
        v51 = this->focus; /*0x44441a*/
        if ( v51 ) /*0x444422*/
        {
          (*(void (**)(char *, int, int))(*(unsigned int *)v244 + 1152))(v244, v51, 1); /*0x44442b*/
          (*(void (**)(char *, int, unsigned int))(*(unsigned int *)v244 + 488))(v244, 2, 0); /*0x444439*/
        }
        (*(void (**)(char *, unsigned int))(*(unsigned int *)v244 + 292))(v244, 0); /*0x444445*/
        v52 = *(unsigned int *)v244; /*0x44444b*/
        v53 = (CellClass *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&v195); /*0x44445f*/
        Coords = CellClass::GetCoords(v53, v240); /*0x444466*/
        (*(void (**)(char *, int *))(v52 + 436))(v244, Coords); /*0x44446e*/
        (*(void (**)(char *, int))(*(unsigned int *)v244 + 292))(v244, 1); /*0x44447a*/
        return 2; /*0x44448f*/
      }
      return 0; /*0x444414*/
    case 1u: /*0x443cad*/
      HouseClass::UpdateBuildState(this->owner, 2); /*0x443cbc*/
      v6 = this->owner; /*0x443cc1*/
      v200 = (int)v244; /*0x443cc7*/
      v6->u32_5658 = -1; /*0x443cca*/
      if ( (unsigned __int8)Array::ContainsValue((Array *)this, v200) /*0x443cf6*/
        || HouseClass::IonSensitivesShouldBeOffline() && !*(unsigned char *)(v4[10].ptr_C + 3597) )
      {
        ObjectClass::SetAnim(v4, 0); /*0x443f57*/
        ++dword_A8E7AC; /*0x443f63*/
        if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x443f6f*/
        {
          PlacementCellsAlt = MapClass::FindPlacementCellsAlt((char *)v4, &v231, (int)this); /*0x443f83*/
          v17 = v4->ptr_0; /*0x443f8a*/
          v209 = *PlacementCellsAlt; /*0x443f90*/
          v227[1] = 0; /*0x443f94*/
          v226 = ((__int16)v209 << 8) + 128; /*0x443fac*/
          v227[0] = ((short)(((v209) >> 16) & 0xFFFF) << 8) + 128; /*0x443fbb*/
          Field9 = AbstractClass::GetField9(); /*0x443fc2*/
          if ( (*(unsigned __int8 (**)(ObjectClass *, int *, int))(v17 + 216))(v4, &v226, Field9) ) /*0x443fd2*/
          {
LABEL_99:
            --dword_A8E7AC; /*0x444971*/
            return 2; /*0x44498b*/
          }
        }
        else
        {
          v19 = v4->ptr_0; /*0x443fe5*/
          v20 = AbstractClass::GetField9(); /*0x443fea*/
          v21 = this->vt_slot_168( /*0x443ffd*/
                  this,
                  v239,
                  v4,
                  v20);
          if ( (*(unsigned __int8 (**)(ObjectClass *, int))(v19 + 216))(v4, v21) ) /*0x444006*/
          {
            this->vt_slot_632(this, 2, v4); /*0x44401b*/
            this->vt_slot_632(this, 24, v4); /*0x444028*/
            v22 = v4->ptr_0; /*0x444030*/
            v23 = this->GetCoords_Alt( v240, v4); /*0x44403e*/
            (*(void (**)(ObjectClass *, int))(v22 + 436))(v4, v23); /*0x444047*/
            v4[10].abstractFlags = (int)this; /*0x44404d*/
            v24 = this->focus; /*0x444053*/
            if ( v24 && !*(unsigned char *)(v4[10].ptr_C + 3597) ) /*0x444067*/
            {
              (*(void (**)(ObjectClass *, int, int))(v4->ptr_0 + 1152))(v4, v24, 1); /*0x44407d*/
              (*(void (**)(ObjectClass *, int, unsigned int))(v4->ptr_0 + 488))(v4, 2, 0); /*0x44408b*/
            }
            goto LABEL_99; /*0x444091*/
          }
        }
      }
      else
      {
        if ( *(unsigned char *)(v4[10].ptr_C + 3597) ) /*0x443d0a*/
          return 0; /*0x443d12*/
        (v212) = ((v212) & ~0xFFFF) | ((dword_87F8E8) & 0xFFFF); /*0x443d24*/
        (v212) = ((v212) & ~(0xFFFF << 16)) | (((dword_87F8E8) & 0xFFFF) << 16); /*0x443d29*/
        HIWORD(v206) = dword_87F8DC; /*0x443d33*/
        (v218) = ((v218) & ~0xFFFF) | ((dword_87F8E4) & 0xFFFF); /*0x443d3c*/
        HIWORD(v218) = -(__int16)dword_87F8E4; /*0x443d43*/
        (v209) = ((v209) & ~0xFFFF) | ((dword_87F8E4 + 1) & 0xFFFF); /*0x443d53*/
        (v209) = ((v209) & ~(0xFFFF << 16)) | (((dword_87F8DC - dword_87F8E4) & 0xFFFF) << 16); /*0x443d5c*/
        LOWORD(v206) = dword_87F8E8 + dword_87F8E4 + 1; /*0x443d6f*/
        v7 = dword_87F8DC - dword_87F8E4 + dword_87F8E8; /*0x443d76*/
        v8 = this->ptr_0; /*0x443d79*/
        HIWORD(v206) = v7; /*0x443d82*/
        v9 = (unsigned int *)(*(int (**)(BuildingClass *, char *))(v8 + 72))(this, v236); /*0x443d88*/
        (v217) = ((v217) & ~0xFFFF) | ((*v9 / 256) & 0xFFFF); /*0x443d9b*/
        HIWORD(v217) = v9[1] / 256; /*0x443db3*/
        if ( (__int16)(v217 - v205) - (__int16)((((v217) >> 16) & 0xFFFF) - (((v205) >> 16) & 0xFFFF)) <= dword_87F8EC ) /*0x443dd7*/
        {
          v199 = dword_87F8F0; /*0x443e31*/
          (v205) = ((v205) & ~0xFFFF) | ((v205 - 1) & 0xFFFF); /*0x443e37*/
          (v205) = ((v205) & ~(0xFFFF << 16)) | (((v7) & 0xFFFF) << 16); /*0x443e3c*/
          v198 = 0; /*0x443e45*/
          v204 = v205; /*0x443e46*/
          p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x443e4a*/
        }
        else
        {
          LOWORD(v208) = dword_87F8EC; /*0x443dd9*/
          (v217) = ((v217) & ~(0xFFFF << 16)) | (((v7) & 0xFFFF) << 16); /*0x443dde*/
          HIWORD(v208) = -(__int16)dword_87F8EC; /*0x443dea*/
          (v217) = ((v217) & ~0xFFFF) | ((v205 - 1) & 0xFFFF); /*0x443def*/
          (v205) = ((v205) & ~0xFFFF) | ((dword_87F8EC + v205 - 1) & 0xFFFF); /*0x443e04*/
          (v205) = ((v205) & ~(0xFFFF << 16)) | (((v7 - dword_87F8EC) & 0xFFFF) << 16); /*0x443e09*/
          v204 = v205; /*0x443e18*/
          p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x443e21*/
          v199 = dword_87F8F0; /*0x443e27*/
          v198 = 0; /*0x443e28*/
        }
        v11 = Random::Range(p_NeedsSaveOrLink, (int)v198, v199); /*0x443e50*/
        (v204) = ((v204) & ~0xFFFF) | ((v11 + v204) & 0xFFFF); /*0x443e55*/
        HIWORD(v204) += v11; /*0x443e5a*/
        v199 = 0; /*0x443e6e*/
        v224[0] = ((__int16)v204 << 8) + 128; /*0x443e79*/
        ++dword_A8E7AC; /*0x443e84*/
        v12 = v4->ptr_0; /*0x443e89*/
        v224[1] = ((short)(((v204) >> 16) & 0xFFFF) << 8) + 128; /*0x443e95*/
        v224[2] = 0; /*0x443e99*/
        if ( (*(unsigned __int8 (**)(ObjectClass *, unsigned int *, unsigned int))(v12 + 216))(v4, v224, 0) ) /*0x443ea0*/
        {
          v13 = this->focus; /*0x443eae*/
          if ( v13 ) /*0x443eb6*/
          {
            (*(void (**)(ObjectClass *, int, int))(v4->ptr_0 + 1152))(v4, v13, 1); /*0x443ec0*/
            (*(void (**)(ObjectClass *, int))(v4->ptr_0 + 496))(v4, 2); /*0x443ecd*/
          }
          else
          {
            *(unsigned int *)v203 = *MapClass::FindPlacementCellsAlt((char *)v4, &v228, (int)this); /*0x443ef1*/
            if ( *(unsigned int *)v203 == g_TerrainTypeTable ) /*0x443ef5*/
            {
              (*(void (**)(ObjectClass *, unsigned int, int))(v4->ptr_0 + 1152))(v4, 0, 1); /*0x443f3c*/
              (*(void (**)(ObjectClass *, int))(v4->ptr_0 + 496))(v4, 2); /*0x443f49*/
            }
            else
            {
              v14 = v4->ptr_0; /*0x443f05*/
              v15 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v203); /*0x443f14*/
              (*(void (**)(ObjectClass *, void *, int))(v14 + 1152))(v4, v15, 1); /*0x443f1c*/
              (*(void (**)(ObjectClass *, int))(v4->ptr_0 + 496))(v4, 2); /*0x443f29*/
            }
          }
          goto LABEL_99; /*0x443ed3*/
        }
      }
LABEL_146:
      --dword_A8E7AC; /*0x444ede*/
      result = 0; /*0x444eec*/
      break; /*0x444ef5*/
    case 2u: /*0x443cad*/
      if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x444f1f*/
        return 0; /*0x444f26*/
      HouseClass::UpdateBuildState(this->owner, 6); /*0x444f34*/
      *(unsigned int *)&this->owner->ratioTeamInfantry = -1; /*0x444f3f*/
      v121 = BuildingQueue::AllocSlot( /*0x444f62*/
               (BuildingQueue *)&this->owner->u32_5700,
               *(unsigned int *)(*((unsigned int *)v244 + 328) + 3576));
      v122 = (unsigned int *)*((unsigned int *)v244 + 328); /*0x444f67*/
      v206 = (unsigned int *)v121; /*0x444f6f*/
      v212 = 0; /*0x444f73*/
      v213 = 0; /*0x444f77*/
      v214 = 0; /*0x444f7b*/
      v208 = v122; /*0x444f7f*/
      if ( v121 && ((v123 = (__int16 *)(v121 + 4), *(unsigned short *)(v121 + 4)) || *(unsigned short *)(v121 + 6)) ) /*0x444f95*/
      {
        if ( *((unsigned char *)v208 + 3720) || BuildingTypeClass::ProcessData((BuildingTypeClass *)this->owner, v208, v123) ) /*0x444fba*/
        {
          v132 = v123[1]; /*0x445068*/
          v133 = *v123; /*0x44506c*/
          v131 = v206; /*0x44506f*/
          v130 = (v133 << 8) + 128; /*0x44507f*/
          v129 = (v132 << 8) + 128; /*0x445086*/
          v212 = v130; /*0x445088*/
          v213 = v129; /*0x44508c*/
          v214 = 0; /*0x445090*/
        }
        else
        {
          v124 = HouseClass::ScanBuildLocation((HouseClass *)this->owner, &v234, (int)v208, globalHelper_005F80, -1); /*0x444fe1*/
          v125 = *(__int16 *)v124; /*0x444fe6*/
          v126 = *((__int16 *)v124 + 1); /*0x444fe9*/
          v214 = 0; /*0x444ff5*/
          v127 = (v125 << 8) + 128; /*0x444ffe*/
          v128 = (v126 << 8) + 128; /*0x445004*/
          v212 = v127; /*0x44500c*/
          v213 = v128; /*0x445010*/
          if ( v127 == g_BuildingClassPool && v128 == dword_89C84C && !dword_89C850 ) /*0x445025*/
            return 0; /*0x445025*/
          (v209) = ((v209) & ~0xFFFF) | ((v127 / 256) & 0xFFFF); /*0x445039*/
          (v209) = ((v209) & ~(0xFFFF << 16)) | (((v128 / 256) & 0xFFFF) << 16); /*0x44504c*/
          *(unsigned int *)v123 = v209; /*0x445055*/
          v129 = v213; /*0x445057*/
          v130 = v212; /*0x44505b*/
          v131 = v206; /*0x44505f*/
        }
      }
      else
      {
        if ( *((unsigned char *)v208 + 3720) ) /*0x44509d*/
        {
          v136 = *HouseClass::FindBestProductionBuilding((HouseClass *)this->owner, v235, (int)v208); /*0x445103*/
          v218 = v136; /*0x44510c*/
          if ( v136 == g_TerrainTypeTable ) /*0x445115*/
          {
            v129 = v213; /*0x445149*/
            v130 = v212; /*0x44514d*/
          }
          else
          {
            v137 = ((short)(((v136) >> 16) & 0xFFFF) << 8) + 128; /*0x44512c*/
            v130 = ((__int16)v136 << 8) + 128; /*0x445132*/
            v129 = v137; /*0x445139*/
            v212 = v130; /*0x44513b*/
            v213 = v137; /*0x44513f*/
            v214 = 0; /*0x445143*/
          }
        }
        else
        {
          v134 = HouseClass::ScanBuildLocation((HouseClass *)this->owner, &v233, (int)v208, globalHelper_005F80, -1); /*0x4450bd*/
          v135 = (*((__int16 *)v134 + 1) << 8) + 128; /*0x4450d5*/
          v130 = (*(__int16 *)v134 << 8) + 128; /*0x4450dd*/
          v129 = v135; /*0x4450df*/
          v212 = v130; /*0x4450e1*/
          v213 = v135; /*0x4450e5*/
          v214 = 0; /*0x4450e9*/
        }
        v131 = v206; /*0x445151*/
        if ( v206 && (v130 != g_BuildingClassPool || v129 != dword_89C84C || v214 != dword_89C850) ) /*0x445175*/
        {
          (v209) = ((v209) & ~0xFFFF) | ((v130 / 256) & 0xFFFF); /*0x445183*/
          (v209) = ((v209) & ~(0xFFFF << 16)) | (((v129 / 256) & 0xFFFF) << 16); /*0x445196*/
          v206[1] = v209; /*0x44519f*/
          v129 = v213; /*0x4451a2*/
          v130 = v212; /*0x4451a6*/
        }
      }
      if ( v130 == g_BuildingClassPool && v129 == dword_89C84C && v214 == dword_89C850 ) /*0x4451c6*/
      {
        if ( *((unsigned char *)v208 + 3720) ) /*0x445618*/
        {
          if ( (unsigned int *)BuildingQueue::AllocSlot(&this->owner, -1) == v131 ) /*0x445637*/
          {
            FreeSlot = BuildingQueue::FindFreeSlot(&this->owner, -1); /*0x445647*/
            v184 = this->owner + 22276; /*0x445652*/
            v185 = *(unsigned int *)(v184 + 16); /*0x445658*/
            if ( FreeSlot < v185 ) /*0x44565d*/
            {
              v186 = v185 - 1; /*0x44565f*/
              v187 = FreeSlot; /*0x445660*/
              *(unsigned int *)(v184 + 16) = v186; /*0x445664*/
              if ( FreeSlot < v186 ) /*0x445667*/
              {
                v188 = 16 * FreeSlot; /*0x445669*/
                do /*0x445694*/
                {
                  v189 = *(unsigned int *)(v184 + 4); /*0x44566c*/
                  v190 = (unsigned int *)(v189 + v188 + 16); /*0x44566f*/
                  v191 = (unsigned int *)(v188 + v189); /*0x445673*/
                  ++v187; /*0x445675*/
                  v188 += 16; /*0x445676*/
                  *v191 = *v190; /*0x44567b*/
                  v191[1] = v190[1]; /*0x445680*/
                  v191[2] = v190[2]; /*0x445686*/
                  v191[3] = v190[3]; /*0x44568c*/
                }
                while ( v187 < *(unsigned int *)(v184 + 16) ); /*0x445694*/
              }
            }
          }
        }
        return 0; /*0x445694*/
      }
      (v209) = ((v209) & ~0xFFFF) | ((v130 / 256) & 0xFFFF); /*0x4451dc*/
      (v209) = ((v209) & ~(0xFFFF << 16)) | (((v129 / 256) & 0xFFFF) << 16); /*0x4451ef*/
      v138 = this->owner; /*0x4451f8*/
      v222 = v209; /*0x4451fe*/
      v139 = *(unsigned int *)v244; /*0x445202*/
      v200 = v138; /*0x445204*/
      v199 = (int)&v222; /*0x445205*/
      v140 = (BuildingClass *)(*(int (**)(char *))(v139 + 136))(v244); /*0x445208*/
      v141 = BuildingClass::ApplyFoundationDamage(v140, &v222, (void *)v200); /*0x445210*/
      if ( v141 ) /*0x445218*/
      {
        v142 = v141 - 1; /*0x44521e*/
        if ( !v142 ) /*0x44521f*/
        {
          v143 = HouseClass::FailedToPlaceNode(v131); /*0x445244*/
          if ( *(unsigned int *)&dword_A8B238 ) /*0x445251*/
          {
            if ( v143 > *&dword_8871E0->Color_E48 ) /*0x44525f*/
            {
              if ( v131 ) /*0x445263*/
              {
                v144 = (*(int (**)(int, unsigned int *))(*(unsigned int *)(this->owner + 22276) + 20))( /*0x445278*/
                         this->owner + 22276,
                         v131);
                v145 = this->owner + 22276; /*0x445281*/
                v146 = *(unsigned int *)(v145 + 16); /*0x445287*/
                if ( v144 < v146 ) /*0x44528c*/
                {
                  v147 = v146 - 1; /*0x44528e*/
                  v148 = v144; /*0x44528f*/
                  *(unsigned int *)(v145 + 16) = v147; /*0x445293*/
                  if ( v144 < v147 ) /*0x445296*/
                  {
                    v149 = 16 * v144; /*0x445298*/
                    do /*0x4452c3*/
                    {
                      v150 = *(unsigned int *)(v145 + 4); /*0x44529b*/
                      v151 = (unsigned int *)(v150 + v149 + 16); /*0x44529e*/
                      v152 = (unsigned int *)(v149 + v150); /*0x4452a2*/
                      ++v148; /*0x4452a4*/
                      v149 += 16; /*0x4452a5*/
                      *v152 = *v151; /*0x4452aa*/
                      v152[1] = v151[1]; /*0x4452af*/
                      v152[2] = v151[2]; /*0x4452b5*/
                      v152[3] = v151[3]; /*0x4452bb*/
                    }
                    while ( v148 < *(unsigned int *)(v145 + 16) ); /*0x4452c3*/
                  }
                }
              }
            }
          }
          return 1; /*0x4452d4*/
        }
        if ( v142 != 1 ) /*0x445222*/
          return 0; /*0x445234*/
      }
      else if ( (*(unsigned __int8 (**)(char *, int *, unsigned int))(*(unsigned int *)v244 + 216))(v244, &v212, 0) ) /*0x4452e2*/
      {
        v153 = (BuildingClass *)*((unsigned int *)v244 + 182); /*0x4452f0*/
        if ( v153 ) /*0x4452f8*/
          BuildingClass::RefreshOccupierCache(v153); /*0x4452fa*/
        if ( v131 ) /*0x445301*/
        {
          v154 = this->owner; /*0x445309*/
          if ( *(unsigned int *)(*((unsigned int *)v244 + 328) + 3576) == *(unsigned int *)(v154 + 22092) ) /*0x44531d*/
            *(unsigned int *)(v154 + 22092) = -1; /*0x44531f*/
        }
        if ( *((unsigned int *)v244 + 43) == -1 && *((unsigned int *)v244 + 45) == 18 ) /*0x445339*/
          (*(void (**)(char *))(*(unsigned int *)v244 + 492))(v244); /*0x44533f*/
        if ( (*(int (**)(char *))(*(unsigned int *)v244 + 44))(v244) == 6 ) /*0x44534f*/
        {
          v155 = *((unsigned int *)v244 + 328); /*0x445355*/
          if ( *(unsigned char *)(v155 + 5824) ) /*0x44535b*/
          {
            v198 = (int *)*((unsigned int *)v244 + 328); /*0x445369*/
            (v207) = ((v207) & ~0xFFFF) | ((v210 / 256) & 0xFFFF); /*0x44537a*/
            (v207) = ((v207) & ~(0xFFFF << 16)) | (((v211 / 256) & 0xFFFF) << 16); /*0x44538f*/
            v197 = this->owner; /*0x44539e*/
            v221[0] = v207; /*0x4453a5*/
            globalHelper_088570((int)v221, v197, (int)v198); /*0x4453a9*/
          }
          else
          {
            v156 = *(unsigned int *)(v155 + 3668); /*0x4453b0*/
            if ( v156 && *(unsigned char *)(v156 + 680) ) /*0x4453ba*/
            {
              v198 = (int *)*((unsigned int *)v244 + 328); /*0x4453c8*/
              (v207) = ((v207) & ~0xFFFF) | ((v210 / 256) & 0xFFFF); /*0x4453d9*/
              (v207) = ((v207) & ~(0xFFFF << 16)) | (((v211 / 256) & 0xFFFF) << 16); /*0x4453ee*/
              v197 = this->owner; /*0x4453fd*/
              v220 = v207; /*0x445404*/
              ScanBuildingPlacementCells(&v220, v197, v198); /*0x445408*/
            }
          }
        }
        if ( *((unsigned int *)v244 + 328) == dword_8871E0->NukeDown ) /*0x44541e*/
        {
          v157 = (*(int (**)(int, unsigned int *))(*(unsigned int *)(this->owner + 22276) + 20))( /*0x445437*/
                   this->owner + 22276,
                   v131);
          v158 = this->owner; /*0x44543a*/
          v159 = v157 + 1; /*0x445442*/
          v160 = *(unsigned int *)(v158 + 22292); /*0x445443*/
          if ( v157 + 1 < v160 ) /*0x44544b*/
          {
            v161 = *(unsigned int *)(v158 + 22280); /*0x445451*/
            for ( i = (int *)(v161 + 16 * v159); *i < 0 || !*(unsigned char *)(*((unsigned int *)dword_A83C6C + *i) + 5894); i += 4 ) /*0x445462*/
            {
              if ( ++v159 >= v160 ) /*0x44547d*/
                return 2; /*0x44548e*/
            }
            v163 = *((unsigned int *)v244 + 39); /*0x445499*/
            v164 = *((unsigned int *)v244 + 40); /*0x44549b*/
            v214 = *((unsigned int *)v244 + 41); /*0x4454a1*/
            LOWORD(v206) = v163 / 256; /*0x4454b1*/
            HIWORD(v206) = v164 / 256; /*0x4454c4*/
            *(unsigned int *)(16 * v159 + v161 + 4) = v206; /*0x4454d0*/
          }
        }
        return 2; /*0x4454e3*/
      }
      if ( !v131 ) /*0x4454ea*/
        return 0; /*0x4454ea*/
      v165 = (*(int (**)(int, unsigned int *))(*(unsigned int *)(this->owner + 22276) + 20))(this->owner + 22276, v131); /*0x445503*/
      v166 = *((unsigned int *)dword_A83C6C + *v131); /*0x44550e*/
      if ( !*(unsigned char *)(v166 + 5489) && !*(unsigned char *)(v166 + 5815) ) /*0x44551f*/
      {
        v167 = this->owner; /*0x445531*/
        v168 = 0; /*0x445555*/
        v169 = v211 / 256; /*0x445557*/
        v170 = v212 / 256; /*0x44555a*/
        if ( *(int *)(v167 + 22292) <= 0 ) /*0x44555f*/
          return 0; /*0x44555f*/
        v171 = 0; /*0x445565*/
        do /*0x4455a2*/
        {
          v172 = *(unsigned int *)(v167 + 22280); /*0x44556b*/
          v173 = *(unsigned short *)(v172 + v171 + 4) == (unsigned __int16)v169; /*0x445571*/
          v174 = v172 + v171 + 4; /*0x445576*/
          if ( v173 && *(unsigned short *)(v174 + 2) == (unsigned short)v170 ) /*0x445580*/
          {
            v208 = 0; /*0x445582*/
            *(unsigned int *)v174 = 0; /*0x445590*/
          }
          v167 = this->owner; /*0x445592*/
          ++v168; /*0x445598*/
          v171 += 16; /*0x445599*/
        }
        while ( v168 < *(unsigned int *)(v167 + 22292) ); /*0x4455a2*/
        return 0; /*0x4455b0*/
      }
      v175 = this->owner + 22276; /*0x4455b9*/
      v176 = *(unsigned int *)(v175 + 16); /*0x4455bf*/
      if ( v165 < v176 ) /*0x4455c4*/
      {
        v177 = v176 - 1; /*0x4455ca*/
        v178 = v165; /*0x4455cb*/
        *(unsigned int *)(v175 + 16) = v177; /*0x4455cf*/
        if ( v165 < v177 ) /*0x4455d2*/
        {
          v179 = 16 * v165; /*0x4455d8*/
          do /*0x445603*/
          {
            v180 = *(unsigned int *)(v175 + 4); /*0x4455db*/
            v181 = (unsigned int *)(v180 + v179 + 16); /*0x4455de*/
            v182 = (unsigned int *)(v179 + v180); /*0x4455e2*/
            ++v178; /*0x4455e4*/
            v179 += 16; /*0x4455e5*/
            *v182 = *v181; /*0x4455ea*/
            v182[1] = v181[1]; /*0x4455ef*/
            v182[2] = v181[2]; /*0x4455f5*/
            v182[3] = v181[3]; /*0x4455fb*/
          }
          while ( v178 < *(unsigned int *)(v175 + 16) ); /*0x445603*/
          return 0; /*0x445611*/
        }
      }
      return 0; /*0x4455d2*/
    case 3u: /*0x443cad*/
      return 0;
  }
  return result; /*0x4440c5*/

}
// 0x445880
int BuildingClass::Sell()
{
  int *location; // edx
  int v3; // eax
  int v4; // ecx
  int *DamageFireAnims; // edi
  int v6; // ebp
  DynamicVector *owner; // eax
  BuildingTypeClass *Type; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int *Upgrades; // ecx
  char v17; // bl
  RulesClass *v18; // eax
  int i; // ebp
  int v20; // edx
  BuildingClass *v21; // edi
  int v22; // eax
  int v23; // ecx
  BuildingClass *v25; // eax
  BuildingClass *v26; // eax
  int v27; // ecx
  int16_t v28; // di
  BuildingClass *v30; // eax
  BuildingClass *v31; // eax
  BuildingTypeClass *v32; // ecx
  int FoundationWidth; // ebp
  int FoundationHeight; // edi
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // ebp
  int v39; // edi
  int16_t v40; // bx
  unsigned char *v41; // eax
  int *v42; // eax
  int Spotlight; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int result; // eax
  char v48; // [esp+13h] [ebp-2Dh]
  int v49; // [esp+14h] [ebp-2Ch]
  int v50; // [esp+14h] [ebp-2Ch]
  int v51; // [esp+14h] [ebp-2Ch]
  int v52; // [esp+14h] [ebp-2Ch]
  int16_t v53[2]; // [esp+18h] [ebp-28h] BYREF
  int16_t v52[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v55; // [esp+20h] [ebp-20h] BYREF
  int16_t v56; // [esp+28h] [ebp-18h]
  int16_t v57; // [esp+2Ah] [ebp-16h]
  unsigned int v58[4]; // [esp+30h] [ebp-10h] BYREF

  v48 = 0; /*0x445889*/
  location = this->location; /*0x445894*/
  v3 = this->location[0]; /*0x445896*/
  v4 = this->location[1]; /*0x445898*/
  v58[2] = location->Z; /*0x44589e*/
  (*((unsigned short *)&(v55))) = v3 / 256; /*0x4458ae*/
  (*(((unsigned short *)&(v55)) + 1)) = v4 / 256; /*0x4458c1*/
  if ( !this->inLimbo[0] && this->Type ) /*0x4458d4*/
  {
    DamageFireAnims = this->DamageFireAnims; /*0x4458e4*/
    v6 = 8; /*0x4458ea*/
    do /*0x445903*/
    {
      if ( *DamageFireAnims ) /*0x4458ef*/
      {
        DamageFireAnims->ProcessCraterFormation(*DamageFireAnims); /*0x4458f7*/
        *DamageFireAnims = 0; /*0x4458fd*/
      }
      ++DamageFireAnims; /*0x4458ff*/
      --v6; /*0x445902*/
    }
    while ( v6 ); /*0x445903*/
    if ( this->Type->OrePurifier ) /*0x44590b*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x445915*/
      {
        --*(unsigned int *)&this->owner->numOrePurifiers; /*0x44592c*/
        owner = this->owner; /*0x445932*/
        if ( this->u32_55A8 < 0 ) /*0x44593e*/
          this->u32_55A8 = 0; /*0x445940*/
      }
    }
    Type = this->Type; /*0x445946*/
    if ( Type->Helipad ) /*0x44594c*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x445956*/
      {
        *(unsigned int *)(this->owner + 724) -= Type->NumberOfDocks; /*0x445974*/
        v9 = this->owner; /*0x44597a*/
        if ( this->queuedVoiceIndex < 0 ) /*0x445986*/
          this->queuedVoiceIndex = 0; /*0x445988*/
      }
    }
    v10 = this->Type->InfantryGainSelfHeal; /*0x445994*/
    if ( v10 ) /*0x44599c*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x44599e*/
      {
        *(unsigned int *)(this->owner + 356) -= v10; /*0x4459b6*/
        v11 = this->owner; /*0x4459bc*/
        if ( this->radioLinks < 0 ) /*0x4459c8*/
          this->radioLinks = 0; /*0x4459ca*/
      }
    }
    v12 = this->Type->UnitsGainSelfHeal; /*0x4459d6*/
    if ( v12 ) /*0x4459de*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x4459e0*/
      {
        *(unsigned int *)(this->owner + 360) -= v12; /*0x4459f8*/
        v13 = this->owner; /*0x4459fe*/
        if ( this->u32_384 < 0 ) /*0x445a0a*/
          this->u32_384 = 0; /*0x445a0c*/
      }
    }
    if ( this->Type->LaserFencePost ) /*0x445a18*/
      BuildingClass::DemolishBridgeCheck(this, 0); /*0x445a25*/
    if ( !dword_A8E7AC ) /*0x445a30*/
    {
      if ( this->Type->SensorArray ) /*0x445a38*/
        this->ScanCircleForUnits(g_TerrainTypeTable); /*0x445a4c*/
      if ( *(unsigned char *)&this->Type->qD31 ) /*0x445a58*/
        this->ScanCircleForTiberium(g_TerrainTypeTable); /*0x445a6c*/
      v14 = this->Type; /*0x445a72*/
      if ( (!this->BuildingClass_field_timer_550 || !this->CostAccumulator) /*0x445a8e*/
        && !this->IsFactorySelectable() )
      {
        RecalculateBuildingFoundation((TechnoClass *)this); /*0x445a9a*/
      }
    }
    v15 = 0; /*0x445a9f*/
    Upgrades = this->Upgrades; /*0x445aa1*/
    while ( !*Upgrades || !*(unsigned char *)(*Upgrades + 5987) ) /*0x445ab4*/
    {
      ++v15; /*0x445ab6*/
      ++Upgrades; /*0x445ab7*/
      if ( v15 >= 3 ) /*0x445abd*/
        goto LABEL_40; /*0x445abd*/
    }
    v48 = 1; /*0x445ac1*/
  LABEL_40:
    if ( !byte_A8E9A0 ) /*0x445acd*/
    {
      v17 = 1; /*0x445acf*/
      goto LABEL_75; /*0x445ad1*/
    }
    v18 = dword_8871E0; /*0x445ad6*/
    if ( this->Type == dword_8871E0->NukeDown ) /*0x445ae7*/
    {
      for ( i = 0; i < 8; i += 2 ) /*0x445aed*/
      {
        v20 = i & 7; /*0x445af3*/
        (*((unsigned short *)&(v49))) = v55 + (*((unsigned short *)&(dword_89F688[v20]))); /*0x445b13*/
        (*(((unsigned short *)&(v49)) + 1)) = (*(((unsigned short *)&(v55)) + 1)) + (*(((unsigned short *)&(dword_89F688[v20])) + 1)); /*0x445b1c*/
        *(unsigned int *)v53 = v49; /*0x445b2b*/
        v21 = (BuildingClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v53); /*0x445b34*/
        BuildingClass::ValidatePlacement(v21, 0); /*0x445b3a*/
        v22 = v21->ambientSoundController[2]; /*0x445b3f*/
        if ( v22 != -1 && *(unsigned char *)(*(&dword_A83D84->ptr_0 + v22) + 680) && (v21->u8_FE) < 0x10u ) /*0x445b60*/
          BuildingClass::SellEffects((int)v21, 200); /*0x445b69*/
      }
      v18 = dword_8871E0; /*0x445b7a*/
    }
    v23 = this->Type; /*0x445b81*/
    if ( v23 == v18->FlameDamage || v23 == v18->NukeWarhead ) /*0x445b97*/
    {
      v55 = v55; /*0x445b9d*/
      (*(((unsigned short *)&(v50)) + 1)) = (*(((unsigned short *)&(v55)) + 1)); /*0x445ba2*/
      (*((unsigned short *)&(v50))) = v55 - 1; /*0x445baf*/
      *(unsigned int *)v53 = v50; /*0x445bbe*/
      v25 = (BuildingClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v53); /*0x445bc2*/
      BuildingClass::ValidatePlacement(v25, 0); /*0x445bc9*/
      (*(((unsigned short *)&(v50)) + 1)) = (*(((unsigned short *)&(v55)) + 1)); /*0x445bd1*/
      (*((unsigned short *)&(v50))) = v55 + 3; /*0x445bd6*/
      *(unsigned int *)v53 = v50; /*0x445be3*/
      v26 = (BuildingClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v53); /*0x445bee*/
      BuildingClass::ValidatePlacement(v26, 0); /*0x445bf5*/
      v18 = dword_8871E0; /*0x445bfa*/
    }
    v27 = this->Type; /*0x445bff*/
    if ( v27 == v18->FlameDamage2 || v27 == v18->NukeProjectile ) /*0x445c15*/
    {
      v28 = (*(((unsigned short *)&(v55)) + 1)); /*0x445c17*/
      v55 = v55; /*0x445c1b*/
      *(unsigned int *)v53 = v55 - 0x10000; /*0x445c36*/
      v30 = (BuildingClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v53); /*0x445c40*/
      BuildingClass::ValidatePlacement(v30, 0); /*0x445c47*/
      (*((unsigned short *)&(v51))) = v55; /*0x445c53*/
      (*(((unsigned short *)&(v51)) + 1)) = v28 + 3; /*0x445c58*/
      *(unsigned int *)v53 = v51; /*0x445c68*/
      v31 = (BuildingClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v53); /*0x445c6c*/
      BuildingClass::ValidatePlacement(v31, 0); /*0x445c73*/
    }
    v32 = (BuildingTypeClass *)this->Type; /*0x445c78*/
    if ( !v32->ToTile ) /*0x445c7e*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(v32); /*0x445c97*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x445ca0*/
      v35 = *(unsigned int *)this->GetCellCoords_Alt(&v55); /*0x445caf*/
      v36 = 0; /*0x445cb1*/
      v58[0] = v35; /*0x445cb3*/
      v37 = FoundationHeight + 2; /*0x445cb7*/
      *(unsigned int *)v53 = 0; /*0x445cbc*/
      v55 = FoundationHeight + 2; /*0x445cc0*/
      if ( FoundationHeight + 2 > 0 ) /*0x445cc4*/
      {
        v38 = FoundationWidth + 2; /*0x445cc6*/
        do /*0x445d33*/
        {
          v39 = 0; /*0x445cc9*/
          if ( v38 > 0 ) /*0x445ccd*/
          {
            v56 = (*((unsigned short *)&(v58[0]))) - 1; /*0x445cd9*/
            v57 = (*(((unsigned short *)&(v58[0])) + 1)) - 1; /*0x445cde*/
            v40 = (*((unsigned short *)&(v58[0]))) - 1; /*0x445ce7*/
            (*(((unsigned short *)&(v52)) + 1)) = v36 + (*(((unsigned short *)&(v58[0])) + 1)) - 1; /*0x445ced*/
            do /*0x445d22*/
            {
              (*((unsigned short *)&(v52))) = v40 + v39; /*0x445cf9*/
              *(unsigned int *)v52 = v52; /*0x445d02*/
              v41 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v52); /*0x445d0c*/
              ++v39; /*0x445d19*/
              --v41[290]; /*0x445d1c*/
            }
            while ( v39 < v38 ); /*0x445d22*/
            v37 = v55; /*0x445d24*/
            v36 = *(unsigned int *)v53; /*0x445d28*/
          }
          *(unsigned int *)v53 = ++v36; /*0x445d2f*/
        }
        while ( v36 < v37 ); /*0x445d33*/
      }
    }
    if ( g_TacticalClass_Instance ) /*0x445d3d*/
    {
      v42 = (int *)this->GetScreenCoords(v58); /*0x445d49*/
      Cell::CreateCrater(*v42, v42[1], v42[2], v42[3], 0); /*0x445d70*/
    }
    Spotlight = this->Spotlight; /*0x445d75*/
    if ( Spotlight ) /*0x445d7d*/
      Spotlight->Destroy_0(); /*0x445d81*/
    BuildingClass::DecrementTypeCounter((BuildingClass *)this->owner, this); /*0x445d8e*/
    *(unsigned char *)&this->owner->recheckTechTree = 1; /*0x445d99*/
    BuildingClass::CalcExitCoords((BuildingClass *)this->owner); /*0x445da6*/
    if ( (Object *)this->owner == dword_A83D4C ) /*0x445db8*/
    {
      byte_880CF4 = 1; /*0x445dc0*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x445dc7*/
    }
    HouseClass::RecordCratePlacement((HouseClass *)this->owner, this); /*0x445dd3*/
  }
  v17 = TechnoClass::CleanupDeploy((TechnoClass *)this); /*0x445ddf*/
  if ( v48 ) /*0x445de7*/
    HouseClass::AcquiredThreatNode((HouseClass *)this->owner); /*0x445def*/
  v45 = this->Type; /*0x445df4*/
  v46 = this->u32_13D8; /*0x445dfa*/
  if ( v46 ) /*0x445e02*/
  {
    (*((unsigned char *)&(v44))) = this->u32_11EE; /*0x445e04*/
    HouseClass::UpdateProduction(this->owner, v46, v44, 0); /*0x445e14*/
  }
  LABEL_75:
  result = this->Type; /*0x445e19*/
  if ( this->u32_1BDE ) /*0x445e1f*/
  {
    result = dword_A8E7AC; /*0x445e29*/
    if ( !dword_A8E7AC ) /*0x445e30*/
      this->LaserFenceFrame = 0; /*0x445e32*/
  }
  (*((unsigned char *)&(result))) = v17; /*0x445e3e*/
  return result; /*0x445e3c*/
}
  v17 = TechnoClass::CleanupDeploy((TechnoClass *)this); /*0x445ddf*/
  if ( v48 ) /*0x445de7*/
    HouseClass::AcquiredThreatNode((HouseClass *)this->owner); /*0x445def*/
  v45 = this->Type; /*0x445df4*/
  v46 = this->qEB8; /*0x445dfa*/
  if ( v46 ) /*0x445e02*/
  {
    v44 = ((v44) & 0xFFFFFF00u) | ((unsigned int)(this->u32_CCE) & 0xFFu); /*0x445e04*/
    HouseClass::UpdateProduction(this->owner, v46, v44, 0); /*0x445e14*/
  }
  LABEL_75:
  result = this->Type; /*0x445e19*/
  if ( this->u32_1BDE ) /*0x445e1f*/
  {
    result = dword_A8E7AC; /*0x445e29*/
    if ( !dword_A8E7AC ) /*0x445e30*/
      this->LaserFenceFrame = 0; /*0x445e32*/
  }
  result = ((result) & 0xFFFFFF00u) | ((unsigned int)(v17) & 0xFFu); /*0x445e3e*/
  return result; /*0x445e3c*/
// 0x701410
void BuildingClass::HandleSellOrRepair()
{
  double v1; // st7
  int v3; // eax
  int result; // eax
  int v5; // edx
  unsigned int *v6; // eax
  unsigned char v7[12]; // [esp+8h] [ebp-Ch] BYREF

  (*((void (__thiscall **)(TechnoClass *, int))this->ptr_0 + 73))(this, 2); /*0x70141a*/
  v3 = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this) + 160); /*0x70142a*/
  this->health = v3; /*0x701432*/
  this->estimatedHealth = v3; /*0x701435*/
  result = (*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 11))(this); /*0x70143a*/
  if ( result == 6 ) /*0x701440*/
  {
    (*((void (__thiscall **)(TechnoClass *, unsigned int))this->ptr_0 + 103))(this, 0); /*0x701448*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x701450*/
    globalHelper_051EE0((int)this, v5, v1 <= *(double *)(*(unsigned int *)&g_RulesClass_Instance + 5888)); /*0x701473*/
    v6 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->ptr_0 + 18))(this, v7); /*0x701483*/
    return (int)StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 452), v6, 0); /*0x701494*/
  }
  return result; /*0x701499*/
}
// IDA 0x44f450: repair mission
int BuildingClass::Mission_Repair()
{
    double v1; // st7
    int v3; // eax
    int result; // eax
    int v5; // edx
    unsigned int *v6; // eax
    unsigned char v7[12]; // [esp+8h] [ebp-Ch] BYREF

    this->ProductionDisplayUpdate( 2); /*0x70141a*/

    v3 = *(unsigned int *)(this->Vt34Thunk() + 160); /*0x70142a*/

    this->ptr_0 = v3; /*0x701432*/
    this->ptr_0 = v3; /*0x701435*/
    result = this->Mission_Construction(); /*0x70143a*/

    if ( result == 6 ) /*0x701440*/
    {
      this->ToggleRepairMode( 0); /*0x701448*/

      this->GetHealthRatio(); /*0x701450*/
      globalHelper_051EE0((int)this, v5, v1 <= *(double *)(*(unsigned int *)&g_RulesClass_Instance + 5888)); /*0x701473*/
      v6 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))this->ptr_0 + 18))(this, v7); /*0x701483*/
      return (int)StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 452),(int)(v6), 0); /*0x701494*/
    }
    return result; /*0x701499*/
}

// 0x44b780
int BuildingClass::ProcessRepair()
{
  double v1; // st7

  BuildingTypeClass *Type; // eax

  int missionStatus; // eax

  int result; // eax

  int v6; // edx

  int v8; // ecx

  char *v9; // eax

  int v10; // eax

  int v11; // eax

  int v12; // ecx

  int v13; // edx


  int v17; // eax

  int v18; // eax

  CoordStruct *v19; // eax

  void *v21; // eax

  void *v23; // eax


  int v25; // eax

  int v26; // eax

  int v27; // eax

  int v28; // ecx

  int v29; // edx


  Power *v32; // esi

  void *v34; // eax


  int v36; // eax

  int v37; // eax

  int v38; // eax

  int v41; // ecx

  char *v42; // eax

  int v43; // edx

  int v45; // ecx

  char *v46; // eax

  int v47; // eax

  int v48; // ecx

  int v49; // edx


  int v53; // eax

  bool v54; // zf

  char isOwnedByCurrentPlayer; // al

  int v59; // ecx

  char *v60; // eax

  int v61; // edx

  int v63; // ecx

  char *v64; // eax

  TechnoClass *Member; // eax

  TechnoClass *v66; // esi

  int v67; // eax

  unsigned int **v68; // eax

  AbstractClass *focus; // ecx

  unsigned int *v70; // eax

  void *v72; // eax

  int v75; // ecx

  char *v76; // eax

  int v77; // edx

  int v79; // ecx

  char *v80; // eax

  AnimClass *v81; // eax

  int v82; // edx

  int v85; // ecx

  char *v86; // eax

  int v89; // ecx

  char *v90; // eax

  TechnoClass *v92; // eax


  TechnoClass *v95; // eax

  int v96; // eax

  FootClass *v97; // eax

  TechnoClass *v98; // esi

  bool v100; // bl

  int v101; // eax

  bool v102; // cl

  bool v103; // al

  TechnoClass *v105; // eax

  TechnoClass *v106; // esi

  TechnoClass *v108; // eax

  unsigned int **v109; // eax

  AbstractClass *v110; // ecx

  unsigned int *v111; // eax

  void *v113; // eax

  int v114; // edx

  int v117; // ecx

  char *v118; // eax


  unsigned int *v120; // esi

  unsigned int *v121; // esi

  int v122; // edx

  int v124; // ecx

  char *v125; // eax

  int v126; // edx

  int v129; // ecx

  char *v130; // eax

  IUnknown *v131; // eax

  unsigned int *v132; // ebx

  int v133; // eax

  TechnoClass *v135; // eax

  int v136; // eax

  ILocomotion *v137; // eax

  int v139; // ebx

  TechnoClass *v140; // eax







  BuildingClass *v148; // [esp+20h] [ebp-38h]

  char v149; // [esp+33h] [ebp-25h]

  char v150; // [esp+33h] [ebp-25h]

  StreamClass v151; // [esp+34h] [ebp-24h] BYREF

  int v152; // [esp+48h] [ebp-10h] BYREF

  int v153; // [esp+4Ch] [ebp-Ch]

  int v154; // [esp+50h] [ebp-8h]



    int _EAX; int _EDX; int _ECX;  // fnstsw ax (W20M26)
    int fildTmp;  // fild scratch (W20M26)
  if ( this->Type->Bunker ) /*0x44b797*/

    this->UpdateBunker(v1); /*0x44b7a3*/

  Type = this->Type; /*0x44b7a8*/

  if ( Type->ConstructionYard ) /*0x44b7ae*/

  {

    missionStatus = this->missionStatus; /*0x44b7bc*/

    if ( missionStatus ) /*0x44b7c4*/

    {

      if ( missionStatus == 2 && !(uint8_t)Team::AllMembersValid((Team *)this) ) /*0x44b7d1*/

      {

        this->MissionDispatch(5, 0); /*0x44b7e6*/

        this->ClearAnims(7); /*0x44b7f0*/

        return 1; /*0x44b801*/

      }

    }

    else

    {

      this->StartProduction(2); /*0x44b806*/

      this->GetHealthRatio(); /*0x44b80d*/

      _EAX = dword_8871E0; /*0x44b812*/

    fildTmp = this->RepairProgress.Value;
      __asm /*0x44b817*/

      {

        fcomp qword ptr [eax+1700h]

        fnstsw ax

      }

      if ( (_EAX & 0x4100) != 0 ) /*0x44b822*/

      {

        v8 = 1; /*0x44b82a*/

        v9 = this->Type->q1138; /*0x44b82f*/

      }

      else

      {

        v8 = 0; /*0x44b83c*/

        v9 = this->Type->q1128; /*0x44b83e*/

      }

      if ( v9 && *v9 ) /*0x44b847*/

        this->PlayAnim(v6, v9, 7, v8, 0, 0); /*0x44b854*/

      this->missionStatus = 2; /*0x44b859*/

    }

    return 1; /*0x44b86f*/

  }

  if ( Type->Hospital )

  {

    v10 = this->missionStatus; /*0x44b87e*/

    if ( v10 )

    {

      if ( v10 == 2 ) /*0x44b88f*/

      {

        if ( (v11 = this->q634) == 0 ) /*0x44b8ae*/

        {

          *&this->RepairProgress.Timer = 0; /*0x44b8df*/

        }

        else

        {

          v12 = this->q638; /*0x44b8b0*/

          v13 = this->RepairProgress.Value; /*0x44b8b6*/

          *&this->RepairProgress.Timer = 1; /*0x44b8be*/

          this->RepairProgress.Value = v12 + v13; /*0x44b8c5*/

          v153 = v153; /*0x44b8d1*/

          this->__pad_628 = dword_A8ED84; /*0x44b8d5*/

          this->q62C = v153; /*0x44b8d7*/

          this->q630 = v11; /*0x44b8da*/

        }

        _EAX = dword_8871E0; /*0x44b8e6*/

        __asm /*0x44b8eb*/

        {

          fild    dword ptr [fildTmp]

          fld qword ptr [eax+16F0h]

          fmul ds:dbl_7E27F8

          fcompp

          fnstsw ax

        }

        if ( (_EAX & 0x4100) == 0 ) /*0x44b904*/

          return 1; /*0x44b904*/

        this->BuildingClass_field_bool_6DD = 0; /*0x44b911*/

        this->RepairProgress.Value = 0; /*0x44b918*/

        v17 = this->ThunkTo159x4(28) - 10; /*0x44b924*/

        if ( v17 ) /*0x44b927*/

        {

          v18 = v17 - 22; /*0x44b929*/

          if ( !v18 ) /*0x44b92c*/

          {

            g_TerrainTypeTable = g_TerrainTypeTable; /*0x44b9e9*/

            v23 = LinkedList::Pop(&this->inAirFlag); /*0x44b9f0*/

            this->sub_44B9F8(v23, g_TerrainTypeTable); /*0x44b9f8*/

            return 1; /*0x44ba0a*/

          }

          if ( v18 != 1 ) /*0x44b933*/

            return 1; /*0x44b9df*/

          if ( (uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x44b93f*/

          {

            v19 = this->GetCellCoords_Alt(&v151.m_Data); /*0x44b952*/

            if ( (uint8_t)CreateTriggerClassIfFarEnough(8, v19->X, v19->X) ) /*0x44b960*/

              ((VoxClass *)aEvaUnitrepaire)->FindAndPlay(-1); /*0x44b973*/

            v152 = this->location.X; /*0x44b981*/

            v153 = this->location.Y; /*0x44b98e*/

            v154 = this->location.Z; /*0x44b999*/

            StartAudioControllerAt(dword_8871E0->q718, &v152, 0); /*0x44b9a3*/

          }

        }

        g_TerrainTypeTable = g_TerrainTypeTable; /*0x44b9b0*/

        v21 = LinkedList::Pop(&this->inAirFlag); /*0x44b9b7*/

        this->sub_44B9BF(v21, g_TerrainTypeTable); /*0x44b9bf*/

        this->MissionDispatch(5, 0); /*0x44b9cd*/

        return 1; /*0x44b9cd*/

      }

    }

    else

    {

      this->missionStatus = 2; /*0x44ba0b*/

      this->BuildingClass_field_bool_6DD = 0; /*0x44ba15*/

      this->RepairProgress.Value = 0; /*0x44ba1c*/

      dword_A8ED84 = dword_A8ED84; /*0x44ba22*/

      this->q634 = 1; /*0x44ba32*/

      this->__pad_628 = dword_A8ED84; /*0x44ba38*/

      this->q62C = v153; /*0x44ba3e*/

      this->q630 = 1; /*0x44ba41*/

      if ( this->Type->q684 != -1 )

      {

        v25 = this->pitchAngle - 1; /*0x44ba5f*/

        this->pitchAngle = v25; /*0x44ba62*/

        this->pitchAngle = v25 <= 0 ? 0 : v25;

      }

    }

LABEL_231:

    _EAX = MissionClass::GetMissionControl(this); /*0x44c819*/

    __asm /*0x44c820*/

    {

      fld qword ptr [eax+10h]

      fmul ds:dbl_7E27F8

    }

    result = Math::RoundToInt(v1); /*0x44c829*/

    return result; /*0x44c835*/

  }

  if ( Type->Armory )

  {

    v26 = this->missionStatus; /*0x44ba87*/

    if ( v26 )

    {

      if ( v26 == 2 ) /*0x44ba98*/

      {

        if ( (v27 = this->q634) == 0 ) /*0x44bab7*/

        {

          *&this->RepairProgress.Timer = 0; /*0x44bae8*/

        }

        else

        {

          v28 = this->q638; /*0x44bab9*/

          v29 = this->RepairProgress.Value; /*0x44babf*/

          *&this->RepairProgress.Timer = 1; /*0x44bac7*/

          this->RepairProgress.Value = v28 + v29; /*0x44bace*/

          v153 = v153; /*0x44bada*/

          this->__pad_628 = dword_A8ED84; /*0x44bade*/

          this->q62C = v153; /*0x44bae0*/

          this->q630 = v27; /*0x44bae3*/

        }

        _EAX = dword_8871E0; /*0x44baef*/

        __asm /*0x44baf4*/

        {

          fild    dword ptr [fildTmp]

          fld qword ptr [eax+16F0h]

          fmul ds:dbl_7E27F8

          fcompp

          fnstsw ax

        }

        if ( (_EAX & 0x4100) != 0 ) /*0x44bb0d*/

        {

          v32 = (Power *)(this->GetVecTechnoMember(0) + 336); /*0x44bb1b*/

          if ( VeinholeClass::GetState(&v32->Fla_ph) ) /*0x44bb23*/

            Power::ChangedHouse(v32, 1); /*0x44bb30*/

          else

            Timer::SetFlag((Timer *)v32, 1); /*0x44bb37*/

          g_TerrainTypeTable = g_TerrainTypeTable; /*0x44bb45*/

          v34 = LinkedList::Pop(&this->inAirFlag); /*0x44bb4c*/

          this->sub_44BB54(v34, g_TerrainTypeTable); /*0x44bb54*/

          this->MissionDispatch(5, 0); /*0x44bb62*/

        }

      }

    }

    else

    {

      this->missionStatus = 2; /*0x44bb6d*/

      this->BuildingClass_field_bool_6DD = 0; /*0x44bb77*/

      this->RepairProgress.Value = 0; /*0x44bb7e*/

      dword_A8ED84 = dword_A8ED84; /*0x44bb84*/

      this->q634 = 1; /*0x44bb94*/

      this->__pad_628 = dword_A8ED84; /*0x44bb9a*/

      this->q62C = v153; /*0x44bba0*/

      this->q630 = 1; /*0x44bba3*/

      v36 = this->pitchAngle - 1; /*0x44bbac*/

      this->pitchAngle = v36; /*0x44bbb1*/

      this->pitchAngle = v36 <= 0 ? 0 : v36;

    }

    goto LABEL_231; /*0x44bb68*/

  }

  if ( Type->UnitRepair )

  {

    v37 = this->missionStatus; /*0x44bbd6*/

    if ( v37 )

    {

      v38 = v37 - 1; /*0x44bbe4*/

      if ( v38 )

      {

        if ( v38 == 1 )

        {

          if ( (uint8_t)Team::AllMembersValid((Team *)this) )

          {

            if ( !this->q634 ) /*0x44bcc7*/

              this->q634 = 1; /*0x44bcd6*/

            if ( (v47 = this->q634) == 0 ) /*0x44bcf5*/

            {

              *&this->RepairProgress.Timer = 0; /*0x44bd26*/

            }

            else

            {

              v48 = this->q638; /*0x44bcf7*/

              v49 = this->RepairProgress.Value; /*0x44bcfd*/

              *&this->RepairProgress.Timer = 1; /*0x44bd05*/

              this->RepairProgress.Value = v48 + v49; /*0x44bd0c*/

              v153 = v153; /*0x44bd18*/

              this->__pad_628 = dword_A8ED84; /*0x44bd1c*/

              this->q62C = v153; /*0x44bd1e*/

              this->q630 = v47; /*0x44bd21*/

            }

            _EAX = dword_8871E0; /*0x44bd2d*/

            __asm /*0x44bd32*/

            {

              fild    dword ptr [fildTmp]

              fld qword ptr [eax+16E8h]

              fmul ds:dbl_7E27F8

              fcompp

              fnstsw ax

            }

            if ( (_EAX & 0x4100) != 0
 && this->ThunkTo159x4(19) == 1 )
            {

              this->BuildingClass_field_bool_6DD = 0; /*0x44bd6d*/

              this->RepairProgress.Value = 0; /*0x44bd74*/

              v53 = this->ThunkTo159x4(28) - 1; /*0x44bd80*/

              if ( v53 )

              {

                v54 = v53 == 31; /*0x44bd87*/

                isOwnedByCurrentPlayer = this->isOwnedByCurrentPlayer; /*0x44bd8a*/

                if ( v54 )

                {

                  if ( isOwnedByCurrentPlayer /*0x44bfd9*/
 && !(this->owner->FindItemIndex_0()) )
                  {

                    ((VoxClass *)aEvaInsufficien)->FindAndPlay(-1); /*0x44bfea*/

                  }

                  this->ClearAnims(8); /*0x44bff3*/

                  this->ClearAnims(11); /*0x44bffc*/

                  this->GetHealthRatio(); /*0x44c003*/

                  _EDX = dword_8871E0; /*0x44c008*/

                  __asm /*0x44c00e*/

                  {

                    fcomp qword ptr [edx+1700h]

                    fnstsw ax

                  }

                  if ( (_EAX & 0x4100) != 0 ) /*0x44c019*/

                  {

                    v75 = 1; /*0x44c021*/

                    v76 = this->Type->q128C; /*0x44c023*/

                  }

                  else

                  {

                    v75 = 0; /*0x44c030*/

                    v76 = this->Type->q127C; /*0x44c032*/

                  }

                  if ( v76 && *v76 ) /*0x44c03b*/

                    this->PlayAnim(dword_8871E0, v76, 12, v75, 0, 0); /*0x44c048*/

                  this->GetHealthRatio(); /*0x44c04f*/

                  _EAX = dword_8871E0; /*0x44c054*/

                  __asm /*0x44c059*/

                  {

                    fcomp qword ptr [eax+1700h]

                    fnstsw ax

                  }

                  if ( (_EAX & 0x4100) != 0 ) /*0x44c064*/

                  {

                    v79 = 1; /*0x44c06c*/

                    v80 = this->Type->q1028; /*0x44c06e*/

                  }

                  else

                  {

                    v79 = 0; /*0x44c07b*/

                    v80 = this->Type->q1018; /*0x44c07d*/

                  }

                  if ( v80 && *v80 ) /*0x44c086*/

                    this->PlayAnim(v77, v80, 3, v79, 0, 0); /*0x44c093*/

                  this->missionStatus = 1; /*0x44c098*/

                }

                else

                {

                  if ( isOwnedByCurrentPlayer ) /*0x44bd98*/

                  {

                    v19 = this->GetCellCoords_Alt(&v151.m_Position);
                    if ( (uint8_t)CreateTriggerClassIfFarEnough(8, v19->X, v19->X) ) /*0x44bdb2*/

                      ((VoxClass *)aEvaUnitrepaire)->FindAndPlay(-1); /*0x44bdc5*/

                  }

                  this->ClearAnims(8); /*0x44bdce*/

                  this->ClearAnims(11); /*0x44bdd7*/

                  this->GetHealthRatio(); /*0x44bdde*/

                  _EDX = dword_8871E0; /*0x44bde3*/

                  __asm /*0x44bde9*/

                  {

                    fcomp qword ptr [edx+1700h]

                    fnstsw ax

                  }

                  if ( (_EAX & 0x4100) != 0 ) /*0x44bdf4*/

                  {

                    v59 = 1; /*0x44bdfc*/

                    v60 = this->Type->q128C; /*0x44bdfe*/

                  }

                  else

                  {

                    v59 = 0; /*0x44be0b*/

                    v60 = this->Type->q127C; /*0x44be0d*/

                  }

                  if ( v60 && *v60 ) /*0x44be16*/

                    this->PlayAnim(dword_8871E0, v60, 12, v59, 0, 0); /*0x44be23*/

                  this->GetHealthRatio(); /*0x44be2a*/

                  _EAX = dword_8871E0; /*0x44be2f*/

                  __asm /*0x44be34*/

                  {

                    fcomp qword ptr [eax+1700h]

                    fnstsw ax

                  }

                  if ( (_EAX & 0x4100) != 0 ) /*0x44be3f*/

                  {

                    v63 = 1; /*0x44be47*/

                    v64 = this->Type->q1028; /*0x44be49*/

                  }

                  else

                  {

                    v63 = 0; /*0x44be56*/

                    v64 = this->Type->q1018; /*0x44be58*/

                  }

                  if ( v64 && *v64 ) /*0x44be61*/

                    this->PlayAnim(v61, v64, 3, v63, 0, 0); /*0x44be6e*/

                  this->missionStatus = 1; /*0x44be76*/

                  Member = this->GetVecTechnoMember(0); /*0x44be7c*/

                  if ( Member )

                    v66 = (Member->abstractFlags & 4) != 0 ? (TechnoClass *)Member : 0;

                  else

                    v66 = 0; /*0x44be85*/

                  if ( v66->focus && !(uint8_t)House::IsCurrentPlayer((House *)v66->owner) ) /*0x44bea5*/

                  {

                    v66->MissionDispatch(2, 0); /*0x44beb5*/

                    v66->Stub(v66->focus, 1);
                    v66->SetFocus(0); /*0x44bed0*/

                    this->ThunkTo159x4(3); /*0x44bedc*/

                    v66->queueUpToEnter = 0; /*0x44bee2*/

                    return 1; /*0x44bef1*/

                  }

                  g_TerrainTypeTable = g_TerrainTypeTable; /*0x44befa*/

                  v67 = this->GetVecTechnoMember(0); /*0x44bf02*/

                  v68 = (unsigned int **)(*((int (__thiscall **)(BuildingClass *, int *, int, int))v151.m_Data + 309))( /*0x44bf13*/
 this, &v151.m_Size, v67, g_TerrainTypeTable);
                  focus = this->owner; /*0x44bf19*/

                  v70 = *v68; /*0x44bf1f*/

                  *(unsigned int *)&v151.m_Data = *(unsigned int *)&v70; /*0x44bf23*/

                  if ( focus ) /*0x44bf27*/

                  {

                    v70 = (unsigned int *)focus->GetInvalidCoord(&v152); /*0x44bf30*/

                    *(unsigned int *)&v151.m_Data = ((*v70 / 256) & 0xFFFF) | ((v70[1] / 256) << 16);
                     /*0x44bf60*/

                  }

                  if ( (uint16_t)(*(unsigned int *)&v151.m_Data) != (*(unsigned int *)&g_TerrainTypeTable & 0xFFFF) || (uint16_t)(*(unsigned int *)&v151.m_Data >> 16) != (*(unsigned int *)&g_TerrainTypeTable >> 16) ) /*0x44bf6b*/

                  {

                    v66->MissionDispatch(2, 0); /*0x44bf87*/

                    v72 = ((CellCoord *)&dword_87F7E8)->To_CellObj((uint16_t *)&v151.m_Data); /*0x44bf9a*/

                    v66->Stub(v72, 1); /*0x44bfa2*/

                    this->ThunkTo159x4(3); /*0x44bfaf*/

                    v66->queueUpToEnter = 0; /*0x44bfb5*/

                    return 1; /*0x44bfc8*/

                  }

                }

              }

            }

            return 1; /*0x44c09e*/

          }

          else

          {

            this->ClearAnims(8); /*0x44bc05*/

            this->ClearAnims(11); /*0x44bc0e*/

            this->GetHealthRatio(); /*0x44bc15*/

            _EDX = dword_8871E0; /*0x44bc1a*/

            __asm /*0x44bc20*/

            {

              fcomp qword ptr [edx+1700h]

              fnstsw ax

            }

            if ( (_EAX & 0x4100) != 0 ) /*0x44bc2b*/

            {

              v41 = 1; /*0x44bc33*/

              v42 = this->Type->q128C; /*0x44bc38*/

            }

            else

            {

              v41 = 0; /*0x44bc45*/

              v42 = this->Type->q127C; /*0x44bc47*/

            }

            if ( v42 && *v42 ) /*0x44bc50*/

              this->PlayAnim(dword_8871E0, v42, 12, v41, 0, 0); /*0x44bc5d*/

            this->GetHealthRatio(); /*0x44bc64*/

            _EAX = dword_8871E0; /*0x44bc69*/

            __asm /*0x44bc6e*/

            {

              fcomp qword ptr [eax+1700h]

              fnstsw ax

            }

            if ( (_EAX & 0x4100) != 0 ) /*0x44bc79*/

            {

              v45 = 1; /*0x44bc81*/

              v46 = this->Type->q1028; /*0x44bc86*/

            }

            else

            {

              v45 = 0; /*0x44bc93*/

              v46 = this->Type->q1018; /*0x44bc95*/

            }

            if ( v46 && *v46 ) /*0x44bc9e*/

              this->PlayAnim(v43, v46, 3, v45, 0, 0); /*0x44bcab*/

            this->missionStatus = 1; /*0x44bcb0*/

            return 1; /*0x44bcba*/

          }

        }

      }

      else

      {

        v54 = (uint8_t)Team::AllMembersValid((Team *)this) == 0; /*0x44c0af*/

        v81 = this->Anims[8]; /*0x44c0b1*/

        if ( v54 ) /*0x44c0b7*/

        {

          if ( v81 || this->Anims[11] ) /*0x44c0c1*/

          {

            this->GetHealthRatio(); /*0x44c0cf*/

            _ECX = dword_8871E0; /*0x44c0d4*/

            __asm /*0x44c0da*/

            {

              fcomp qword ptr [ecx+1700h]

              fnstsw ax

            }

            if ( (_EAX & 0x4100) != 0 ) /*0x44c0e5*/

            {

              v85 = 1; /*0x44c0ed*/

              v86 = this->Type->q128C; /*0x44c0f2*/

            }

            else

            {

              v85 = 0; /*0x44c0ff*/

              v86 = this->Type->q127C; /*0x44c101*/

            }

            if ( v86 && *v86 ) /*0x44c10a*/

              this->PlayAnim(v82, v86, 12, v85, 0, 0); /*0x44c117*/

            this->GetHealthRatio(); /*0x44c11e*/

            _EDX = dword_8871E0; /*0x44c123*/

            __asm /*0x44c129*/

            {

              fcomp qword ptr [edx+1700h]

              fnstsw ax

            }

            if ( (_EAX & 0x4100) != 0 ) /*0x44c134*/

            {

              v89 = 1; /*0x44c13c*/

              v90 = this->Type->q1028; /*0x44c141*/

            }

            else

            {

              v89 = 0; /*0x44c14e*/

              v90 = this->Type->q1018; /*0x44c150*/

            }

            if ( v90 && *v90 ) /*0x44c159*/

              this->PlayAnim(dword_8871E0, v90, 3, v89, 0, 0); /*0x44c166*/

            this->ClearAnims(8); /*0x44c16f*/

            this->ClearAnims(11); /*0x44c178*/

          }

          if ( !this->Anims[12] ) /*0x44c17d*/

          {

            this->BuildingClass_field_bool_6DD = 1; /*0x44c18e*/

            this->MissionDispatch(5, 1); /*0x44c195*/

          }

          return 1; /*0x44c1a7*/

        }

        if ( v81 ) /*0x44c1aa*/

          return 1; /*0x44c1b8*/

        v92 = this->GetVecTechnoMember(0); /*0x44c1bc*/

        v92 = v92; /*0x44c1c7*/

        v95 = this->GetVecTechnoMember(0); /*0x44c1c9*/

        if ( this->initAnimation(v95) < 200 ) /*0x44c1dc*/

        {

          if ( !v92->Locomotor_m ) /*0x44c1e2*/

            sub_7DC720(-2147467261); /*0x44c1ef*/

          v54 = (*(uint8_t (__stdcall **)(unsigned int))v92->Locomotor_m->Is_Powered() == 0; /*0x44c200*/

          v96 = v92->Locomotor_m; /*0x44c202*/

          if ( !v54 ) /*0x44c208*/

          {

            if ( !v96 ) /*0x44c20c*/

              sub_7DC720(-2147467261); /*0x44c213*/

            if ( !(*(uint8_t (__stdcall **)(unsigned int))v92->Locomotor_m->Is_Moving() ) /*0x44c221*/

            {

              if ( !v92->Locomotor_m ) /*0x44c228*/

                sub_7DC720(-2147467261); /*0x44c235*/

              (*(void (__stdcall **)(unsigned int))v92->Locomotor_m->Power_Off(); /*0x44c243*/

            }

            return 1; /*0x44c252*/

          }

          if ( !v96 ) /*0x44c255*/

            sub_7DC720(-2147467261); /*0x44c25c*/

          if ( !(*(uint8_t (__stdcall **)(unsigned int))v92->Locomotor_m->Is_Powered() /*0x44c279*/
 && *(unsigned int *)(this->GetVecTechnoMember(0) + 1444) )
          {

            v97 = (FootClass *)this->GetVecTechnoMember(0); /*0x44c284*/

            v97->ClearPathIndex(); /*0x44c28b*/

          }

        }

        if ( this->ThunkTo159x4(19) == 1 )

        {

          v98 = this->GetVecTechnoMember(0); /*0x44c2ae*/

          BuildingClass::GetHealthRatio((BuildingClass *)v98); /*0x44c2b2*/

          _EAX = dword_8871E0; /*0x44c2b7*/

          __asm /*0x44c2bc*/

          {

            fcomp qword ptr [eax+16F8h]

            fnstsw ax

          }

          v100 = (_EAX & 0x100) != 0; /*0x44c2c7*/

          v149 = *(unsigned char *)((*(int (__thiscall **)(int))(v98->hasParachute)(v98) + 3364); /*0x44c2e6*/

          v101 = this->ThunkTo159x4(28); /*0x44c2ea*/

          v102 = v101 == 1; /*0x44c2f3*/

          v103 = v101 == 33; /*0x44c2f9*/

          if ( (v100 || v149) && (v102 || v103) )

          {

            if ( !v98->isUseless || (uint8_t)House::IsCurrentPlayer(v98->owner) ) /*0x44c4cc*/

            {

              if ( this->isOwnedByCurrentPlayer ) /*0x44c4f3*/

                aEvaRepairing.FindAndPlay(-1); /*0x44c507*/

              this->missionStatus = 2; /*0x44c50e*/

              this->GetHealthRatio(); /*0x44c518*/

              _ECX = dword_8871E0; /*0x44c51d*/

              __asm /*0x44c523*/

              {

                fcomp qword ptr [ecx+1700h]

                fnstsw ax

              }

              if ( (_EAX & 0x4100) != 0 ) /*0x44c52e*/

              {

                v117 = 1; /*0x44c536*/

                v118 = this->Type->q1204; /*0x44c53b*/

              }

              else

              {

                v117 = 0; /*0x44c548*/

                v118 = this->Type->q11F4; /*0x44c54a*/

              }

              if ( v118 && *v118 ) /*0x44c553*/

                this->PlayAnim(v114, v118, 10, v117, 0, 0); /*0x44c560*/

              this->ClearAnims(3); /*0x44c569*/

              this->ClearAnims(18); /*0x44c572*/

              this->BuildingClass_field_bool_6DD = 0; /*0x44c577*/

              this->RepairProgress.Value = 0; /*0x44c57e*/

              this->__pad_628 = dword_A8ED84; /*0x44c594*/

              v153 = v153; /*0x44c596*/

              this->q634 = 1; /*0x44c59a*/

              this->q62C = v153; /*0x44c5a0*/

              this->q630 = 1; /*0x44c5a3*/

            }

            else

            {

              (*(void (__thiscall **)(int, int))(v98->ironTintTimer_d)(v98, 1); /*0x44c4db*/

              this->missionStatus = 0; /*0x44c4e1*/

              this->BuildingClass_field_bool_6DD = 1; /*0x44c4e7*/

            }

          }

          else

          {

            BuildingClass::GetHealthRatio((BuildingClass *)v98); /*0x44c31a*/

            _EAX = dword_8871E0; /*0x44c31f*/

            __asm /*0x44c324*/

            {

              fcomp qword ptr [eax+16F8h]

              fnstsw ax

            }

            if ( (_EAX & 0x4000) != 0 )

            {

              if ( !v98->Locomotor_m ) /*0x44c335*/

                sub_7DC720(-2147467261); /*0x44c342*/

              if ( !(*(uint8_t (__stdcall **)(unsigned int))v98->Locomotor_m->Is_Powered() )

              {

                v105 = this->GetVecTechnoMember(0); /*0x44c35e*/

                if ( v105 )

                  v106 = (v105->abstractFlags & 4) != 0 ? (TechnoClass *)v105 : 0;

                else

                  v106 = 0; /*0x44c367*/

                if ( !v106->Locomotor_m ) /*0x44c379*/

                  sub_7DC720(-2147467261); /*0x44c386*/

                (*(void (__stdcall **)(int))(*(unsigned int *)v106->Locomotor_m + 88))(v106->Locomotor_m); /*0x44c394*/

                if ( !v106->focus || (uint8_t)House::IsCurrentPlayer((House *)v106->owner) ) /*0x44c3a5*/

                {

                  g_TerrainTypeTable = g_TerrainTypeTable; /*0x44c3f6*/

                  v108 = this->GetVecTechnoMember(0); /*0x44c3fa*/

                  v109 = (unsigned int **)this->ValidateFoundation_1(&v151.StreamClass_field_0C, v108, g_TerrainTypeTable); /*0x44c407*/

                  v110 = this->Owner; /*0x44c40d*/

                  v111 = *v109; /*0x44c413*/

                  v151.m_Data = v111; /*0x44c417*/

                  if ( v110 ) /*0x44c41b*/

                  {

                    v111 = (unsigned int *)v110->GetInvalidCoord(&v152); /*0x44c424*/

                    *(unsigned int *)&v151.m_Data = ((*v111 / 256) & 0xFFFF) | ((v111[1] / 256) << 16);
                     /*0x44c454*/

                  }

                  if ( (uint16_t)v111 != (*(unsigned int *)&g_TerrainTypeTable & 0xFFFF) || (uint16_t)(*(unsigned int *)&v151.m_Data >> 16) != (*(unsigned int *)&g_TerrainTypeTable >> 16) ) /*0x44c45f*/

                  {

                    v106->MissionDispatch(2, 0); /*0x44c47a*/

                    v113 = ((CellCoord *)&dword_87F7E8)->To_CellObj((uint16_t *)&v151.m_Data); /*0x44c48e*/

                    v106->Stub(v113, 1); /*0x44c496*/

                    v106->SetFocus(0); /*0x44c49f*/

                    this->ThunkTo159x4(3); /*0x44c4ab*/

                    v106->queueUpToEnter = 0; /*0x44c4b1*/

                  }

                }

                else

                {

                  v106->MissionDispatch(2, 0); /*0x44c3b5*/

                  v106->Stub(v106->focus, 1);
                  v106->SetFocus(0); /*0x44c3d1*/

                  v106->queueUpToEnter = 0; /*0x44c3d6*/

                  this->ThunkTo159x4(3); /*0x44c3e3*/

                }

              }

            }

          }

        }

        else if ( !HouseClass::IonSensitivesShouldBeOffline() ) /*0x44c5b1*/

        {

          v120 = &this->GetVecTechnoMember(0)->Locomotor_m; /*0x44c5ce*/

          if ( !*v120 ) /*0x44c5c8*/

            sub_7DC720(-2147467261); /*0x44c5dd*/

          if ( !(*(uint8_t (__stdcall **)(unsigned int))(*v120)->Is_Powered() ) /*0x44c5e7*/

          {

            v121 = &this->GetVecTechnoMember(0)->Locomotor_m; /*0x44c602*/

            if ( !*v121 ) /*0x44c5fc*/

              sub_7DC720(-2147467261); /*0x44c611*/

            (*(void (__stdcall **)(unsigned int))(*v121)->Power_On(); /*0x44c61b*/

          }

        }

      }

    }

    else

    {

      if ( !(uint8_t)Team::AllMembersValid((Team *)this) ) /*0x44c625*/

      {

        this->ClearAnims(8); /*0x44c636*/

        this->ClearAnims(11); /*0x44c63f*/

        this->GetHealthRatio(); /*0x44c646*/

        _EAX = dword_8871E0; /*0x44c64b*/

        __asm /*0x44c650*/

        {

          fcomp qword ptr [eax+1700h]

          fnstsw ax

        }

        if ( (_EAX & 0x4100) != 0 ) /*0x44c65b*/

        {

          v124 = 1; /*0x44c663*/

          v125 = this->Type->q128C; /*0x44c668*/

        }

        else

        {

          v124 = 0; /*0x44c675*/

          v125 = this->Type->q127C; /*0x44c677*/

        }

        if ( v125 && *v125 ) /*0x44c680*/

          this->PlayAnim(v122, v125, 12, v124, 0, 0); /*0x44c68d*/

        this->GetHealthRatio(); /*0x44c694*/

        _ECX = dword_8871E0; /*0x44c699*/

        __asm /*0x44c69f*/

        {

          fcomp qword ptr [ecx+1700h]

          fnstsw ax

        }

        if ( (_EAX & 0x4100) != 0 ) /*0x44c6aa*/

        {

          v129 = 1; /*0x44c6b2*/

          v130 = this->Type->q1028; /*0x44c6b7*/

        }

        else

        {

          v129 = 0; /*0x44c6c4*/

          v130 = this->Type->q1018; /*0x44c6c6*/

        }

        if ( v130 && *v130 ) /*0x44c6cf*/

          this->PlayAnim(v126, v130, 3, v129, 0, 0); /*0x44c6dc*/

        this->MissionDispatch(5, 1); /*0x44c6ea*/

        return 1; /*0x44c6fc*/

      }

      this->BuildingClass_field_bool_6DD = 0; /*0x44c700*/

      v151.m_Data = (void *)100; /*0x44c707*/

      v131 = this->GetVecTechnoMember(0); /*0x44c70f*/

      v132 = (unsigned int *)&v131->Locomotor_m; /*0x44c714*/

      v151.m_Data = 0; /*0x44c71a*/

      if ( !v131->Locomotor_m ) /*0x44c71e*/

        goto LABEL_215; /*0x44c71e*/

      v133 = v151.Set2((unsigned int *)&v131->Locomotor_m); /*0x44c727*/

      if ( v133 < 0 && v133 != -2147467262 ) /*0x44c735*/

        sub_7DC720(v133); /*0x44c738*/

      if ( !v151.m_Data ) /*0x44c743*/

LABEL_215:

        sub_7DC720(-2147467261); /*0x44c74a*/

      ((ILocomotion *)v151.m_Data)->Link_To_Object(&v152); /*0x44c75b*/

      if ( !memcmp(&v152, &stru_7E9A40, 0x10u) ) /*0x44c76e*/

        v151.m_Data = (void *)200; /*0x44c777*/

      if ( !memcmp(&v152, &g_CLSID_DriveLocomotion2, 0x10u) ) /*0x44c78b*/

        v151.m_Data = (void *)200; /*0x44c78f*/

      if ( this->ThunkTo159x4(19) == 1 ) /*0x44c7a3*/

      {

        v135 = this->GetVecTechnoMember(0); /*0x44c7ac*/

        v136 = this->initAnimation(v135); /*0x44c7b4*/

        if ( v136 < (int)v151.m_Data ) /*0x44c7be*/

        {

          v137 = (ILocomotion *)v151.m_Data; /*0x44c7c0*/

          this->missionStatus = 1; /*0x44c7c4*/

          if ( v137 ) /*0x44c7d0*/

            v137->Release(); /*0x44c7d5*/

          return 3; /*0x44c7e4*/

        }

      }

      if ( !HouseClass::IonSensitivesShouldBeOffline() ) /*0x44c7eb*/

      {

        if ( !*v132 ) /*0x44c7f4*/

          sub_7DC720(-2147467261); /*0x44c7fe*/

        (*(void (__stdcall **)(unsigned int))(*(unsigned int *)*v132 + 88))(*v132); /*0x44c808*/

      }

      if ( v151.m_Data ) /*0x44c811*/

        ((ILocomotion *)v151.m_Data)->Release(); /*0x44c816*/

    }

    goto LABEL_231; /*0x44bbec*/

  }

  if ( !Type->UnitReload ) /*0x44c83e*/

    return 15; /*0x44c971*/

  v139 = 0; /*0x44c84a*/

  v150 = 0; /*0x44c84e*/

  if ( this->q0E8[2] <= 0 ) /*0x44c853*/

    goto LABEL_247; /*0x44c853*/

  do /*0x44c929*/

  {

    v140 = this->GetVecTechnoMember(v139); /*0x44c85c*/

    v140 = v140; /*0x44c861*/

    if ( !v140 ) /*0x44c865*/

      goto LABEL_244; /*0x44c865*/

    if ( this->ThunkTo636(29, v140) == 1 /*0x44c893*/
 && v140->health == v140->Vt34Thunk()->Strength )
    {

      goto LABEL_243; /*0x44c893*/

    }

    if ( v140->processStateUpdate() != 7 /*0x44c8b5*/
 && this->ThunkTo636(19, v140) == 1 )
    {

      v150 = 1; /*0x44c8bb*/

      if ( v140->processStateUpdate() ) /*0x44c8bf*/

      {

        v140->MissionDispatch( 0, 0); /*0x44c8cf*/

        goto LABEL_244; /*0x44c8d5*/

      }

      if ( this->ThunkTo636(31, v140) != 1 /*0x44c8fb*/
 && this->ThunkTo636(28, v140) != 1 )
      {

LABEL_243:

        v140->CompleteFactoryProduction( 0, 1); /*0x44c904*/

        v140->SetState( 5); /*0x44c910*/

        v140->COMStub_Return0_205(); /*0x44c91a*/

      }

    }

LABEL_244:

    ++v139; /*0x44c920*/

  }

  while ( v139 < this->q0E8[2] ); /*0x44c929*/

  if ( v150 ) /*0x44c935*/

  {

    _EAX = dword_8871E0; /*0x44c937*/

    __asm /*0x44c93c*/

    {

      fld qword ptr [eax+1508h]

      fmul ds:dbl_7E27F8

    }

    result = Math::RoundToInt(v1); /*0x44c948*/

    return result; /*0x44c954*/

  }

LABEL_247:

  this->MissionDispatch(5, 0); /*0x44c955*/

  return 3; /*0x44b7fa*/
}
/*
    // IDA disasm 0x44B780..0x44C97F (W20M26)
    44B780 push    ebp
    44B781 mov     ebp, esp
    44B783 and     esp, 0FFFFFFF8h
    44B786 sub     esp, 28h
    44B789 push    ebx
    44B78A push    ebp
    44B78B mov     ebp, ecx
    44B78D push    esi
    44B78E push    edi; this
    44B78F xor     edi, edi
    44B791 mov     eax, [ebp+520h]
    44B797 mov     cl, [eax+16ABh]
    44B79D test    cl, cl
    44B79F jz      short loc_44B7A8
    44B7A1 mov     ecx, ebp
    44B7A3 call    BuildingClass__UpdateBunker
    44B7A8 mov     eax, [ebp+520h]
    44B7AE mov     cl, [eax+16B9h]
    44B7B4 test    cl, cl
    44B7B6 jz      loc_44B870
    44B7BC mov     eax, [ebp+0BCh]
    44B7C2 sub     eax, edi
    44B7C4 jz      short loc_44B802
    44B7C6 sub     eax, 2
    44B7C9 jnz     loc_44B863
    44B7CF mov     ecx, ebp; this
    44B7D1 call    Team__AllMembersValid
    44B7D6 test    al, al
    44B7D8 jnz     loc_44B863
    44B7DE mov     edx, [ebp+0]
    44B7E1 push    edi
    44B7E2 push    5
    44B7E4 mov     ecx, ebp
    44B7E6 call    dword ptr [edx+1E8h]
    44B7EC push    7; int
    44B7EE mov     ecx, ebp; this
    44B7F0 call    BuildingClass__ClearAnims
    44B7F5 mov     eax, 1
    44B7FA pop     edi
    44B7FB pop     esi
    44B7FC pop     ebp
    44B7FD pop     ebx
    44B7FE mov     esp, ebp
    44B800 pop     ebp
    44B801 retn
    44B802 push    2; int
    44B804 mov     ecx, ebp; this
    44B806 call    BuildingClass__StartProduction
    44B80B mov     ecx, ebp; this
    44B80D call    BuildingClass__GetHealthRatio
    44B812 mov     eax, dword_8871E0
    44B817 fcomp   qword ptr [eax+1700h]
    44B81D fnstsw  ax
    44B81F test    ah, 41h
    44B822 jz      short loc_44B836
    44B824 mov     eax, [ebp+520h]
    44B82A mov     ecx, 1
    44B82F add     eax, 1138h
    44B834 jmp     short loc_44B843
    44B836 mov     eax, [ebp+520h]
    44B83C xor     ecx, ecx
    44B83E add     eax, 1128h
    44B843 cmp     eax, edi
    44B845 jz      short loc_44B859
    44B847 cmp     byte ptr [eax], 0
    44B84A jz      short loc_44B859
    44B84C push    edi; int
    44B84D push    edi; int
    44B84E push    ecx; int
    44B84F push    7; int
    44B851 push    eax; void *
    44B852 mov     ecx, ebp
    44B854 call    BuildingClass__PlayAnim
    44B859 mov     dword ptr [ebp+0BCh], 2
    44B863 mov     eax, 1
    44B868 pop     edi
    44B869 pop     esi
    44B86A pop     ebp
    44B86B pop     ebx
    44B86C mov     esp, ebp
    44B86E pop     ebp
    44B86F retn
    44B870 mov     cl, [eax+16C1h]
    44B876 test    cl, cl
    44B878 jz      loc_44BA79
    44B87E mov     eax, [ebp+0BCh]
    44B884 sub     eax, edi
    44B886 jz      loc_44BA0B
    44B88C sub     eax, 2
    44B88F jnz     loc_44C819
    44B895 lea     esi, [ebp+628h]
    44B89B mov     ecx, esi; this
    44B89D call    Locomotor__GetSpeed
    44B8A2 test    eax, eax
    44B8A4 jnz     short loc_44B8DF
    44B8A6 mov     eax, [ebp+634h]
    44B8AC cmp     eax, edi
    44B8AE jz      short loc_44B8DF
    44B8B0 mov     ecx, [ebp+638h]
    44B8B6 mov     edx, [ebp+620h]
    44B8BC add     edx, ecx
    44B8BE mov     byte ptr [ebp+624h], 1
    44B8C5 mov     [ebp+620h], edx
    44B8CB mov     ecx, dword_A8ED84
    44B8D1 mov     edx, [esp+38h+var_C]
    44B8D5 mov     [esi], ecx
    44B8D7 mov     [esi+4], edx
    44B8DA mov     [esi+8], eax
    44B8DD jmp     short loc_44B8E6
    44B8DF mov     byte ptr [ebp+624h], 0
    44B8E6 mov     eax, dword_8871E0
    44B8EB fild    dword ptr [ebp+620h]
    44B8F1 fld     qword ptr [eax+16F0h]
    44B8F7 fmul    ds:dbl_7E27F8
    44B8FD fcompp
    44B8FF fnstsw  ax
    44B901 test    ah, 41h
    44B904 jz      loc_44B9D3
    44B90A mov     edx, [ebp+0]
    44B90D push    1Ch
    44B90F mov     ecx, ebp
    44B911 mov     byte ptr [ebp+6DDh], 0
    44B918 mov     [ebp+620h], edi
    44B91E call    dword ptr [edx+274h]
    44B924 sub     eax, 0Ah
    44B927 jz      short loc_44B9A8
    44B929 sub     eax, 16h
    44B92C jz      loc_44B9E0
    44B932 dec     eax
    44B933 jnz     loc_44B9D3
    44B939 mov     ecx, [ebp+21Ch]; this
    44B93F call    House__IsHumanPlayer
    44B944 test    al, al
    44B946 jz      short loc_44B9A8
    44B948 mov     eax, [ebp+0]
    44B94B lea     ecx, [esp+38h+var_24.m_Data]
    44B94F push    ecx
    44B950 mov     ecx, ebp
    44B952 call    dword ptr [eax+1B8h]
    44B958 mov     edx, [eax]; int
    44B95A mov     ecx, 8; int
    44B95F push    edx; int
    44B960 call    CreateTriggerClassIfFarEnough
    44B965 test    al, al
    44B967 jz      short loc_44B978
    44B969 push    0FFFFFFFFh; int
    44B96B or      edx, 0FFFFFFFFh
    44B96E mov     ecx, offset aEvaUnitrepaire; this
    44B973 call    VoxClass__FindAndPlay
    44B978 lea     eax, [ebp+9Ch]
    44B97E push    edi
    44B97F mov     ecx, [eax]
    44B981 mov     [esp+3Ch+var_10], ecx
    44B985 mov     ecx, dword_8871E0
    44B98B mov     edx, [eax+4]
    44B98E mov     [esp+3Ch+var_C], edx
    44B992 lea     edx, [esp+3Ch+var_10]
    44B996 mov     eax, [eax+8]
    44B999 mov     [esp+3Ch+var_8], eax
    44B99D mov     ecx, [ecx+718h]
    44B9A3 call    StartAudioControllerAt
    44B9A8 mov     eax, g_TerrainTypeTable
    44B9AD mov     esi, [ebp+0]
    44B9B0 push    eax
    44B9B1 lea     ecx, [ebp+114h]; this
    44B9B7 call    LinkedList__Pop
    44B9BC push    eax
    44B9BD mov     ecx, ebp
    44B9BF call    dword ptr [esi+100h]
    44B9C5 mov     edx, [ebp+0]
    44B9C8 push    edi
    44B9C9 push    5
    44B9CB mov     ecx, ebp
    44B9CD call    dword ptr [edx+1E8h]
    44B9D3 mov     eax, 1
    44B9D8 pop     edi
    44B9D9 pop     esi
    44B9DA pop     ebp
    44B9DB pop     ebx
    44B9DC mov     esp, ebp
    44B9DE pop     ebp
    44B9DF retn
    44B9E0 mov     edx, g_TerrainTypeTable
    44B9E6 mov     esi, [ebp+0]
    44B9E9 push    edx
    44B9EA lea     ecx, [ebp+114h]; this
    44B9F0 call    LinkedList__Pop
    44B9F5 push    eax
    44B9F6 mov     ecx, ebp
    44B9F8 call    dword ptr [esi+100h]
    44B9FE mov     eax, 1
    44BA03 pop     edi
    44BA04 pop     esi
    44BA05 pop     ebp
    44BA06 pop     ebx
    44BA07 mov     esp, ebp
    44BA09 pop     ebp
    44BA0A retn
    44BA0B mov     dword ptr [ebp+0BCh], 2
    44BA15 mov     byte ptr [ebp+6DDh], 0
    44BA1C mov     [ebp+620h], edi
    44BA22 mov     eax, dword_A8ED84
    44BA27 lea     edx, [ebp+628h]
    44BA2D mov     ecx, 1
    44BA32 mov     [ebp+634h], ecx
    44BA38 mov     [edx], eax
    44BA3A mov     eax, [esp+38h+var_C]
    44BA3E mov     [edx+4], eax
    44BA41 mov     [edx+8], ecx
    44BA44 mov     ecx, [ebp+520h]
    44BA4A cmp     dword ptr [ecx+684h], 0FFFFFFFFh
    44BA51 jz      loc_44C819
    44BA57 mov     eax, [ebp+2FCh]
    44BA5D xor     edx, edx
    44BA5F dec     eax
    44BA60 cmp     eax, edi
    44BA62 mov     [ebp+2FCh], eax
    44BA68 setle   dl
    44BA6B dec     edx
    44BA6C and     eax, edx
    44BA6E mov     [ebp+2FCh], eax
    44BA74 jmp     loc_44C819
    44BA79 mov     cl, [eax+16C2h]
    44BA7F test    cl, cl
    44BA81 jz      loc_44BBC8
    44BA87 mov     eax, [ebp+0BCh]
    44BA8D sub     eax, edi
    44BA8F jz      loc_44BB6D
    44BA95 sub     eax, 2
    44BA98 jnz     loc_44C819
    44BA9E lea     esi, [ebp+628h]
    44BAA4 mov     ecx, esi; this
    44BAA6 call    Locomotor__GetSpeed
    44BAAB test    eax, eax
    44BAAD jnz     short loc_44BAE8
    44BAAF mov     eax, [ebp+634h]
    44BAB5 cmp     eax, edi
    44BAB7 jz      short loc_44BAE8
    44BAB9 mov     ecx, [ebp+638h]
    44BABF mov     edx, [ebp+620h]
    44BAC5 add     edx, ecx
    44BAC7 mov     byte ptr [ebp+624h], 1
    44BACE mov     [ebp+620h], edx
    44BAD4 mov     ecx, dword_A8ED84
    44BADA mov     edx, [esp+38h+var_C]
    44BADE mov     [esi], ecx
    44BAE0 mov     [esi+4], edx
    44BAE3 mov     [esi+8], eax
    44BAE6 jmp     short loc_44BAEF
    44BAE8 mov     byte ptr [ebp+624h], 0
    44BAEF mov     eax, dword_8871E0
    44BAF4 fild    dword ptr [ebp+620h]
    44BAFA fld     qword ptr [eax+16F0h]
    44BB00 fmul    ds:dbl_7E27F8
    44BB06 fcompp
    44BB08 fnstsw  ax
    44BB0A test    ah, 41h
    44BB0D jz      loc_44C819
    44BB13 push    edi; int
    44BB14 mov     ecx, ebp; this
    44BB16 call    Team__GetMember
    44BB1B lea     esi, [eax+150h]
    44BB21 mov     ecx, esi
    44BB23 call    VeinholeClass__GetState
    44BB28 test    al, al
    44BB2A push    1; char
    44BB2C mov     ecx, esi; this
    44BB2E jz      short loc_44BB37
    44BB30 call    Power__ChangedHouse
    44BB35 jmp     short loc_44BB3C
    44BB37 call    Timer__SetFlag
    44BB3C mov     ecx, g_TerrainTypeTable
    44BB42 mov     esi, [ebp+0]
    44BB45 push    ecx
    44BB46 lea     ecx, [ebp+114h]; this
    44BB4C call    LinkedList__Pop
    44BB51 push    eax
    44BB52 mov     ecx, ebp
    44BB54 call    dword ptr [esi+100h]
    44BB5A mov     edx, [ebp+0]
    44BB5D push    edi
    44BB5E push    5
    44BB60 mov     ecx, ebp
    44BB62 call    dword ptr [edx+1E8h]
    44BB68 jmp     loc_44C819
    44BB6D mov     dword ptr [ebp+0BCh], 2
    44BB77 mov     byte ptr [ebp+6DDh], 0
    44BB7E mov     [ebp+620h], edi
    44BB84 mov     eax, dword_A8ED84
    44BB89 lea     edx, [ebp+628h]
    44BB8F mov     ecx, 1
    44BB94 mov     [ebp+634h], ecx
    44BB9A mov     [edx], eax
    44BB9C mov     eax, [esp+38h+var_C]
    44BBA0 mov     [edx+4], eax
    44BBA3 mov     [edx+8], ecx
    44BBA6 mov     eax, [ebp+2FCh]
    44BBAC dec     eax
    44BBAD xor     ecx, ecx
    44BBAF cmp     eax, edi
    44BBB1 mov     [ebp+2FCh], eax
    44BBB7 setle   cl
    44BBBA dec     ecx
    44BBBB and     eax, ecx
    44BBBD mov     [ebp+2FCh], eax
    44BBC3 jmp     loc_44C819
    44BBC8 mov     cl, [eax+16A9h]
    44BBCE test    cl, cl
    44BBD0 jz      loc_44C836
    44BBD6 mov     eax, [ebp+0BCh]
    44BBDC sub     eax, edi
    44BBDE jz      loc_44C623
    44BBE4 dec     eax
    44BBE5 jz      loc_44C0A8
    44BBEB dec     eax
    44BBEC jnz     loc_44C819
    44BBF2 mov     ecx, ebp; this
    44BBF4 call    Team__AllMembersValid
    44BBF9 test    al, al
    44BBFB jnz     loc_44BCC7
    44BC01 push    8; int
    44BC03 mov     ecx, ebp; this
    44BC05 call    BuildingClass__ClearAnims
    44BC0A push    0Bh; int
    44BC0C mov     ecx, ebp; this
    44BC0E call    BuildingClass__ClearAnims
    44BC13 mov     ecx, ebp; this
    44BC15 call    BuildingClass__GetHealthRatio
    44BC1A mov     edx, dword_8871E0
    44BC20 fcomp   qword ptr [edx+1700h]
    44BC26 fnstsw  ax
    44BC28 test    ah, 41h
    44BC2B jz      short loc_44BC3F
    44BC2D mov     eax, [ebp+520h]
    44BC33 mov     ecx, 1
    44BC38 add     eax, 128Ch
    44BC3D jmp     short loc_44BC4C
    44BC3F mov     eax, [ebp+520h]
    44BC45 xor     ecx, ecx
    44BC47 add     eax, 127Ch
    44BC4C cmp     eax, edi
    44BC4E jz      short loc_44BC62
    44BC50 cmp     byte ptr [eax], 0
    44BC53 jz      short loc_44BC62
    44BC55 push    edi; int
    44BC56 push    edi; int
    44BC57 push    ecx; int
    44BC58 push    0Ch; int
    44BC5A push    eax; void *
    44BC5B mov     ecx, ebp
    44BC5D call    BuildingClass__PlayAnim
    44BC62 mov     ecx, ebp; this
    44BC64 call    BuildingClass__GetHealthRatio
    44BC69 mov     eax, dword_8871E0
    44BC6E fcomp   qword ptr [eax+1700h]
    44BC74 fnstsw  ax
    44BC76 test    ah, 41h
    44BC79 jz      short loc_44BC8D
    44BC7B mov     eax, [ebp+520h]
    44BC81 mov     ecx, 1
    44BC86 add     eax, 1028h
    44BC8B jmp     short loc_44BC9A
    44BC8D mov     eax, [ebp+520h]
    44BC93 xor     ecx, ecx
    44BC95 add     eax, 1018h
    44BC9A cmp     eax, edi
    44BC9C jz      short loc_44BCB0
    44BC9E cmp     byte ptr [eax], 0
    44BCA1 jz      short loc_44BCB0
    44BCA3 push    edi; int
    44BCA4 push    edi; int
    44BCA5 push    ecx; int
    44BCA6 push    3; int
    44BCA8 push    eax; void *
    44BCA9 mov     ecx, ebp
    44BCAB call    BuildingClass__PlayAnim
    44BCB0 mov     dword ptr [ebp+0BCh], 1
    44BCBA mov     eax, 1
    44BCBF pop     edi
    44BCC0 pop     esi
    44BCC1 pop     ebp
    44BCC2 pop     ebx
    44BCC3 mov     esp, ebp
    44BCC5 pop     ebp
    44BCC6 retn
    44BCC7 mov     eax, [ebp+634h]
    44BCCD mov     ebx, 1
    44BCD2 cmp     eax, edi
    44BCD4 jnz     short loc_44BCDC
    44BCD6 mov     [ebp+634h], ebx
    44BCDC lea     esi, [ebp+628h]
    44BCE2 mov     ecx, esi; this
    44BCE4 call    Locomotor__GetSpeed
    44BCE9 test    eax, eax
    44BCEB jnz     short loc_44BD26
    44BCED mov     eax, [ebp+634h]
    44BCF3 cmp     eax, edi
    44BCF5 jz      short loc_44BD26
    44BCF7 mov     ecx, [ebp+638h]
    44BCFD mov     edx, [ebp+620h]
    44BD03 add     edx, ecx
    44BD05 mov     byte ptr [ebp+624h], 1
    44BD0C mov     [ebp+620h], edx
    44BD12 mov     ecx, dword_A8ED84
    44BD18 mov     edx, [esp+38h+var_C]
    44BD1C mov     [esi], ecx
    44BD1E mov     [esi+4], edx
    44BD21 mov     [esi+8], eax
    44BD24 jmp     short loc_44BD2D
    44BD26 mov     byte ptr [ebp+624h], 0
    44BD2D mov     eax, dword_8871E0
    44BD32 fild    dword ptr [ebp+620h]
    44BD38 fld     qword ptr [eax+16E8h]
    44BD3E fmul    ds:dbl_7E27F8
    44BD44 fcompp
    44BD46 fnstsw  ax
    44BD48 test    ah, 41h
    44BD4B jz      loc_44C09E
    44BD51 mov     edx, [ebp+0]
    44BD54 push    13h
    44BD56 mov     ecx, ebp
    44BD58 call    dword ptr [edx+274h]
    44BD5E cmp     eax, ebx
    44BD60 jnz     loc_44C09E
    44BD66 mov     eax, [ebp+0]
    44BD69 push    1Ch
    44BD6B mov     ecx, ebp
    44BD6D mov     byte ptr [ebp+6DDh], 0
    44BD74 mov     [ebp+620h], edi
    44BD7A call    dword ptr [eax+274h]
    44BD80 dec     eax
    44BD81 jz      loc_44C09E
    44BD87 sub     eax, 1Fh
    44BD8A mov     al, [ebp+41Ah]
    44BD90 jz      loc_44BFC9
    44BD96 test    al, al
    44BD98 jz      short loc_44BDCA
    44BD9A mov     edx, [ebp+0]
    44BD9D lea     eax, [esp+38h+var_24.m_Position]
    44BDA1 push    eax
    44BDA2 mov     ecx, ebp
    44BDA4 call    dword ptr [edx+1B8h]
    44BDAA mov     ecx, [eax]
    44BDAC push    ecx; int
    44BDAD mov     ecx, 8; int
    44BDB2 call    CreateTriggerClassIfFarEnough
    44BDB7 test    al, al
    44BDB9 jz      short loc_44BDCA
    44BDBB push    0FFFFFFFFh; int
    44BDBD or      edx, 0FFFFFFFFh
    44BDC0 mov     ecx, offset aEvaUnitrepaire; this
    44BDC5 call    VoxClass__FindAndPlay
    44BDCA push    8; int
    44BDCC mov     ecx, ebp; this
    44BDCE call    BuildingClass__ClearAnims
    44BDD3 push    0Bh; int
    44BDD5 mov     ecx, ebp; this
    44BDD7 call    BuildingClass__ClearAnims
    44BDDC mov     ecx, ebp; this
    44BDDE call    BuildingClass__GetHealthRatio
    44BDE3 mov     edx, dword_8871E0
    44BDE9 fcomp   qword ptr [edx+1700h]
    44BDEF fnstsw  ax
    44BDF1 test    ah, 41h
    44BDF4 jz      short loc_44BE05
    44BDF6 mov     eax, [ebp+520h]
    44BDFC mov     ecx, ebx
    44BDFE add     eax, 128Ch
    44BE03 jmp     short loc_44BE12
    44BE05 mov     eax, [ebp+520h]
    44BE0B xor     ecx, ecx
    44BE0D add     eax, 127Ch
    44BE12 cmp     eax, edi
    44BE14 jz      short loc_44BE28
    44BE16 cmp     byte ptr [eax], 0
    44BE19 jz      short loc_44BE28
    44BE1B push    edi; int
    44BE1C push    edi; int
    44BE1D push    ecx; int
    44BE1E push    0Ch; int
    44BE20 push    eax; void *
    44BE21 mov     ecx, ebp
    44BE23 call    BuildingClass__PlayAnim
    44BE28 mov     ecx, ebp; this
    44BE2A call    BuildingClass__GetHealthRatio
    44BE2F mov     eax, dword_8871E0
    44BE34 fcomp   qword ptr [eax+1700h]
    44BE3A fnstsw  ax
    44BE3C test    ah, 41h
    44BE3F jz      short loc_44BE50
    44BE41 mov     eax, [ebp+520h]
    44BE47 mov     ecx, ebx
    44BE49 add     eax, 1028h
    44BE4E jmp     short loc_44BE5D
    44BE50 mov     eax, [ebp+520h]
    44BE56 xor     ecx, ecx
    44BE58 add     eax, 1018h
    44BE5D cmp     eax, edi
    44BE5F jz      short loc_44BE73
    44BE61 cmp     byte ptr [eax], 0
    44BE64 jz      short loc_44BE73
    44BE66 push    edi; int
    44BE67 push    edi; int
    44BE68 push    ecx; int
    44BE69 push    3; int
    44BE6B push    eax; void *
    44BE6C mov     ecx, ebp
    44BE6E call    BuildingClass__PlayAnim
    44BE73 push    edi; int
    44BE74 mov     ecx, ebp; this
    44BE76 mov     [ebp+0BCh], ebx
    44BE7C call    Team__GetMember
    44BE81 cmp     eax, edi
    44BE83 jnz     short loc_44BE89
    44BE85 xor     esi, esi
    44BE87 jmp     short loc_44BE97
    44BE89 mov     cl, [eax+14h]
    44BE8C and     cl, 4
    44BE8F neg     cl
    44BE91 sbb     ecx, ecx
    44BE93 and     ecx, eax
    44BE95 mov     esi, ecx
    44BE97 cmp     [esi+218h], edi
    44BE9D jz      short loc_44BEF2
    44BE9F mov     ecx, [esi+21Ch]; this
    44BEA5 call    House__IsCurrentPlayer
    44BEAA test    al, al
    44BEAC jnz     short loc_44BEF2
    44BEAE mov     edx, [esi]
    44BEB0 push    edi
    44BEB1 push    2
    44BEB3 mov     ecx, esi
    44BEB5 call    dword ptr [edx+1E8h]
    44BEBB mov     ecx, [esi+218h]
    44BEC1 mov     eax, [esi]
    44BEC3 push    ebx
    44BEC4 push    ecx
    44BEC5 mov     ecx, esi
    44BEC7 call    dword ptr [eax+480h]
    44BECD push    edi; int
    44BECE mov     ecx, esi; this
    44BED0 call    TechnoClass__SetFocus
    44BED5 mov     edx, [ebp+0]
    44BED8 push    3
    44BEDA mov     ecx, ebp
    44BEDC call    dword ptr [edx+274h]
    44BEE2 mov     [esi+500h], edi
    44BEE8 mov     eax, ebx
    44BEEA pop     edi
    44BEEB pop     esi
    44BEEC pop     ebp
    44BEED pop     ebx
    44BEEE mov     esp, ebp
    44BEF0 pop     ebp
    44BEF1 retn
    44BEF2 mov     eax, g_TerrainTypeTable
    44BEF7 mov     edx, [ebp+0]
    44BEFA push    eax
    44BEFB push    edi; int
    44BEFC mov     ecx, ebp; this
    44BEFE mov     [esp+40h+var_24.m_Data], edx
    44BF02 call    Team__GetMember
    44BF07 mov     edx, [esp+3Ch+var_24.m_Data]
    44BF0B lea     ecx, [esp+3Ch+var_24.m_Size]
    44BF0F push    eax
    44BF10 push    ecx
    44BF11 mov     ecx, ebp
    44BF13 call    dword ptr [edx+4D4h]
    44BF19 mov     ecx, [ebp+218h]
    44BF1F mov     eax, [eax]
    44BF21 test    ecx, ecx
    44BF23 mov     dword ptr [esp+38h+var_24.q000], eax
    44BF27 jz      short loc_44BF64
    44BF29 mov     eax, [ecx]
    44BF2B lea     edx, [esp+38h+var_10]
    44BF2F push    edx
    44BF30 call    dword ptr [eax+48h]
    44BF33 mov     ecx, eax
    44BF35 mov     eax, [ecx]
    44BF37 cdq
    44BF38 and     edx, 0FFh
    44BF3E add     eax, edx
    44BF40 sar     eax, 8
    44BF43 mov     word ptr [esp+38h+var_24.m_Data], ax
    44BF48 mov     eax, [ecx+4]
    44BF4B cdq
    44BF4C and     edx, 0FFh
    44BF52 add     eax, edx
    44BF54 sar     eax, 8
    44BF57 mov     word ptr [esp+38h+var_24.m_Data+2], ax
    44BF5C mov     eax, [esp+38h+var_24.m_Data]
    44BF60 mov     dword ptr [esp+38h+var_24.q000], eax
    44BF64 cmp     ax, word ptr g_TerrainTypeTable
    44BF6B jnz     short loc_44BF7F
    44BF6D mov     ax, word ptr [esp+38h+var_24.q000+2]
    44BF72 cmp     ax, word ptr g_TerrainTypeTable+2
    44BF79 jz      loc_44C09E
    44BF7F mov     edx, [esi]
    44BF81 push    0
    44BF83 push    2
    44BF85 mov     ecx, esi
    44BF87 call    dword ptr [edx+1E8h]
    44BF8D mov     edi, [esi]
    44BF8F lea     eax, [esp+38h+var_24]
    44BF93 push    ebx
    44BF94 push    eax; int16_t *
    44BF95 mov     ecx, offset dword_87F7E8; this
    44BF9A call    CellCoord__To_CellObj
    44BF9F push    eax
    44BFA0 mov     ecx, esi
    44BFA2 call    dword ptr [edi+480h]
    44BFA8 mov     edx, [ebp+0]
    44BFAB push    3
    44BFAD mov     ecx, ebp
    44BFAF call    dword ptr [edx+274h]
    44BFB5 mov     dword ptr [esi+500h], 0
    44BFBF mov     eax, ebx
    44BFC1 pop     edi
    44BFC2 pop     esi
    44BFC3 pop     ebp
    44BFC4 pop     ebx
    44BFC5 mov     esp, ebp
    44BFC7 pop     ebp
    44BFC8 retn
    44BFC9 test    al, al
    44BFCB jz      short loc_44BFEF
    44BFCD mov     eax, [ebp+21Ch]
    44BFD3 add     eax, 24h ; '$'
    44BFD6 push    eax
    44BFD7 mov     ecx, [eax]
    44BFD9 call    dword ptr [ecx+18h]
    44BFDC test    eax, eax
    44BFDE jnz     short loc_44BFEF
    44BFE0 push    0FFFFFFFFh; int
    44BFE2 or      edx, 0FFFFFFFFh
    44BFE5 mov     ecx, offset aEvaInsufficien; this
    44BFEA call    VoxClass__FindAndPlay
    44BFEF push    8; int
    44BFF1 mov     ecx, ebp; this
    44BFF3 call    BuildingClass__ClearAnims
    44BFF8 push    0Bh; int
    44BFFA mov     ecx, ebp; this
    44BFFC call    BuildingClass__ClearAnims
    44C001 mov     ecx, ebp; this
    44C003 call    BuildingClass__GetHealthRatio
    44C008 mov     edx, dword_8871E0
    44C00E fcomp   qword ptr [edx+1700h]
    44C014 fnstsw  ax
    44C016 test    ah, 41h
    44C019 jz      short loc_44C02A
    44C01B mov     eax, [ebp+520h]
    44C021 mov     ecx, ebx
    44C023 add     eax, 128Ch
    44C028 jmp     short loc_44C037
    44C02A mov     eax, [ebp+520h]
    44C030 xor     ecx, ecx
    44C032 add     eax, 127Ch
    44C037 cmp     eax, edi
    44C039 jz      short loc_44C04D
    44C03B cmp     byte ptr [eax], 0
    44C03E jz      short loc_44C04D
    44C040 push    edi; int
    44C041 push    edi; int
    44C042 push    ecx; int
    44C043 push    0Ch; int
    44C045 push    eax; void *
    44C046 mov     ecx, ebp
    44C048 call    BuildingClass__PlayAnim
    44C04D mov     ecx, ebp; this
    44C04F call    BuildingClass__GetHealthRatio
    44C054 mov     eax, dword_8871E0
    44C059 fcomp   qword ptr [eax+1700h]
    44C05F fnstsw  ax
    44C061 test    ah, 41h
    44C064 jz      short loc_44C075
    44C066 mov     eax, [ebp+520h]
    44C06C mov     ecx, ebx
    44C06E add     eax, 1028h
    44C073 jmp     short loc_44C082
    44C075 mov     eax, [ebp+520h]
    44C07B xor     ecx, ecx
    44C07D add     eax, 1018h
    44C082 cmp     eax, edi
    44C084 jz      short loc_44C098
    44C086 cmp     byte ptr [eax], 0
    44C089 jz      short loc_44C098
    44C08B push    edi; int
    44C08C push    edi; int
    44C08D push    ecx; int
    44C08E push    3; int
    44C090 push    eax; void *
    44C091 mov     ecx, ebp
    44C093 call    BuildingClass__PlayAnim
    44C098 mov     [ebp+0BCh], ebx
    44C09E mov     eax, ebx
    44C0A0 pop     edi
    44C0A1 pop     esi
    44C0A2 pop     ebp
    44C0A3 pop     ebx
    44C0A4 mov     esp, ebp
    44C0A6 pop     ebp
    44C0A7 retn
    44C0A8 mov     ecx, ebp; this
    44C0AA call    Team__AllMembersValid
    44C0AF test    al, al
    44C0B1 mov     eax, [ebp+57Ch]
    44C0B7 jnz     loc_44C1A8
    44C0BD cmp     eax, edi
    44C0BF jnz     short loc_44C0CD
    44C0C1 cmp     [ebp+588h], edi
    44C0C7 jz      loc_44C17D
    44C0CD mov     ecx, ebp; this
    44C0CF call    BuildingClass__GetHealthRatio
    44C0D4 mov     ecx, dword_8871E0
    44C0DA fcomp   qword ptr [ecx+1700h]
    44C0E0 fnstsw  ax
    44C0E2 test    ah, 41h
    44C0E5 jz      short loc_44C0F9
    44C0E7 mov     eax, [ebp+520h]
    44C0ED mov     ecx, 1
    44C0F2 add     eax, 128Ch
    44C0F7 jmp     short loc_44C106
    44C0F9 mov     eax, [ebp+520h]
    44C0FF xor     ecx, ecx
    44C101 add     eax, 127Ch
    44C106 cmp     eax, edi
    44C108 jz      short loc_44C11C
    44C10A cmp     byte ptr [eax], 0
    44C10D jz      short loc_44C11C
    44C10F push    edi; int
    44C110 push    edi; int
    44C111 push    ecx; int
    44C112 push    0Ch; int
    44C114 push    eax; void *
    44C115 mov     ecx, ebp
    44C117 call    BuildingClass__PlayAnim
    44C11C mov     ecx, ebp; this
    44C11E call    BuildingClass__GetHealthRatio
    44C123 mov     edx, dword_8871E0
    44C129 fcomp   qword ptr [edx+1700h]
    44C12F fnstsw  ax
    44C131 test    ah, 41h
    44C134 jz      short loc_44C148
    44C136 mov     eax, [ebp+520h]
    44C13C mov     ecx, 1
    44C141 add     eax, 1028h
    44C146 jmp     short loc_44C155
    44C148 mov     eax, [ebp+520h]
    44C14E xor     ecx, ecx
    44C150 add     eax, 1018h
    44C155 cmp     eax, edi
    44C157 jz      short loc_44C16B
    44C159 cmp     byte ptr [eax], 0
    44C15C jz      short loc_44C16B
    44C15E push    edi; int
    44C15F push    edi; int
    44C160 push    ecx; int
    44C161 push    3; int
    44C163 push    eax; void *
    44C164 mov     ecx, ebp
    44C166 call    BuildingClass__PlayAnim
    44C16B push    8; int
    44C16D mov     ecx, ebp; this
    44C16F call    BuildingClass__ClearAnims
    44C174 push    0Bh; int
    44C176 mov     ecx, ebp; this
    44C178 call    BuildingClass__ClearAnims
    44C17D cmp     [ebp+58Ch], edi
    44C183 jnz     short loc_44C19B
    44C185 mov     eax, [ebp+0]
    44C188 push    1
    44C18A push    5
    44C18C mov     ecx, ebp
    44C18E mov     byte ptr [ebp+6DDh], 1
    44C195 call    dword ptr [eax+1E8h]
    44C19B mov     eax, 1
    44C1A0 pop     edi
    44C1A1 pop     esi
    44C1A2 pop     ebp
    44C1A3 pop     ebx
    44C1A4 mov     esp, ebp
    44C1A6 pop     ebp
    44C1A7 retn
    44C1A8 cmp     eax, edi
    44C1AA jz      short loc_44C1B9
    44C1AC mov     eax, 1
    44C1B1 pop     edi
    44C1B2 pop     esi
    44C1B3 pop     ebp
    44C1B4 pop     ebx
    44C1B5 mov     esp, ebp
    44C1B7 pop     ebp
    44C1B8 retn
    44C1B9 push    edi; int
    44C1BA mov     ecx, ebp; this
    44C1BC call    Team__GetMember
    44C1C1 mov     ebx, [ebp+0]
    44C1C4 push    edi; int
    44C1C5 mov     ecx, ebp; this
    44C1C7 mov     esi, eax
    44C1C9 call    Team__GetMember
    44C1CE push    eax
    44C1CF mov     ecx, ebp
    44C1D1 call    dword ptr [ebx+4D8h]
    44C1D7 cmp     eax, 0C8h
    44C1DC jge     loc_44C290
    44C1E2 cmp     [esi+674h], edi
    44C1E8 jnz     short loc_44C1F4
    44C1EA push    80004003h
    44C1EF call    sub_7DC720
    44C1F4 mov     eax, [esi+674h]
    44C1FA push    eax
    44C1FB mov     ecx, [eax]
    44C1FD call    dword ptr [ecx+60h]
    44C200 test    al, al
    44C202 mov     eax, [esi+674h]
    44C208 jz      short loc_44C253
    44C20A cmp     eax, edi
    44C20C jnz     short loc_44C218
    44C20E push    80004003h
    44C213 call    sub_7DC720
    44C218 mov     eax, [esi+674h]
    44C21E push    eax
    44C21F mov     edx, [eax]
    44C221 call    dword ptr [edx+10h]
    44C224 test    al, al
    44C226 jnz     short loc_44C246
    44C228 cmp     [esi+674h], edi
    44C22E jnz     short loc_44C23A
    44C230 push    80004003h
    44C235 call    sub_7DC720
    44C23A mov     esi, [esi+674h]
    44C240 push    esi
    44C241 mov     eax, [esi]
    44C243 call    dword ptr [eax+5Ch]
    44C246 mov     eax, 1
    44C24B pop     edi
    44C24C pop     esi
    44C24D pop     ebp
    44C24E pop     ebx
    44C24F mov     esp, ebp
    44C251 pop     ebp
    44C252 retn
    44C253 cmp     eax, edi
    44C255 jnz     short loc_44C261
    44C257 push    80004003h
    44C25C call    sub_7DC720
    44C261 mov     esi, [esi+674h]
    44C267 push    esi
    44C268 mov     ecx, [esi]
    44C26A call    dword ptr [ecx+60h]
    44C26D test    al, al
    44C26F jnz     short loc_44C290
    44C271 push    edi; int
    44C272 mov     ecx, ebp; this
    44C274 call    Team__GetMember
    44C279 cmp     [eax+5A4h], edi
    44C27F jz      short loc_44C290
    44C281 push    edi; int
    44C282 mov     ecx, ebp; this
    44C284 call    Team__GetMember
    44C289 mov     ecx, eax; this
    44C28B call    FootClass__ClearPathIndex
    44C290 mov     edx, [ebp+0]
    44C293 push    13h
    44C295 mov     ecx, ebp
    44C297 call    dword ptr [edx+274h]
    44C29D cmp     eax, 1
    44C2A0 jnz     loc_44C5AB
    44C2A6 push    edi; int
    44C2A7 mov     ecx, ebp; this
    44C2A9 call    Team__GetMember
    44C2AE mov     esi, eax
    44C2B0 mov     ecx, esi; this
    44C2B2 call    BuildingClass__GetHealthRatio
    44C2B7 mov     eax, dword_8871E0
    44C2BC fcomp   qword ptr [eax+16F8h]
    44C2C2 fnstsw  ax
    44C2C4 test    ah, 1
    44C2C7 jz      short loc_44C2CD
    44C2C9 mov     bl, 1
    44C2CB jmp     short loc_44C2CF
    44C2CD xor     bl, bl
    44C2CF mov     edx, [esi]
    44C2D1 mov     ecx, esi
    44C2D3 call    dword ptr [edx+84h]
    44C2D9 mov     al, [eax+0D24h]
    44C2DF mov     edx, [ebp+0]
    44C2E2 push    1Ch
    44C2E4 mov     ecx, ebp
    44C2E6 mov     byte ptr [esp+3Ch+var_28+3], al
    44C2EA call    dword ptr [edx+274h]
    44C2F0 cmp     eax, 1
    44C2F3 setz    cl
    44C2F6 cmp     eax, 21h ; '!'
    44C2F9 setz    al
    44C2FC test    bl, bl
    44C2FE jnz     short loc_44C308
    44C300 mov     dl, byte ptr [esp+38h+var_28+3]
    44C304 test    dl, dl
    44C306 jz      short loc_44C318
    44C308 test    cl, cl
    44C30A jnz     loc_44C4BC
    44C310 test    al, al
    44C312 jnz     loc_44C4BC
    44C318 mov     ecx, esi; this
    44C31A call    BuildingClass__GetHealthRatio
    44C31F mov     eax, dword_8871E0
    44C324 fcomp   qword ptr [eax+16F8h]
    44C32A fnstsw  ax
    44C32C test    ah, 40h
    44C32F jz      loc_44C819
    44C335 cmp     [esi+674h], edi
    44C33B jnz     short loc_44C347
    44C33D push    80004003h
    44C342 call    sub_7DC720
    44C347 mov     esi, [esi+674h]
    44C34D push    esi
    44C34E mov     ecx, [esi]
    44C350 call    dword ptr [ecx+60h]
    44C353 test    al, al
    44C355 jnz     loc_44C819
    44C35B push    edi; int
    44C35C mov     ecx, ebp; this
    44C35E call    Team__GetMember
    44C363 cmp     eax, edi
    44C365 jnz     short loc_44C36B
    44C367 xor     esi, esi
    44C369 jmp     short loc_44C379
    44C36B mov     dl, [eax+14h]
    44C36E and     dl, 4
    44C371 neg     dl
    44C373 sbb     edx, edx
    44C375 and     edx, eax
    44C377 mov     esi, edx
    44C379 cmp     [esi+674h], edi
    44C37F jnz     short loc_44C38B
    44C381 push    80004003h
    44C386 call    sub_7DC720
    44C38B mov     eax, [esi+674h]
    44C391 push    eax
    44C392 mov     ecx, [eax]
    44C394 call    dword ptr [ecx+58h]
    44C397 cmp     [esi+218h], edi
    44C39D jz      short loc_44C3EE
    44C39F mov     ecx, [esi+21Ch]; this
    44C3A5 call    House__IsCurrentPlayer
    44C3AA test    al, al
    44C3AC jnz     short loc_44C3EE
    44C3AE mov     edx, [esi]
    44C3B0 push    edi
    44C3B1 push    2
    44C3B3 mov     ecx, esi
    44C3B5 call    dword ptr [edx+1E8h]
    44C3BB mov     ecx, [esi+218h]
    44C3C1 mov     eax, [esi]
    44C3C3 push    1
    44C3C5 push    ecx
    44C3C6 mov     ecx, esi
    44C3C8 call    dword ptr [eax+480h]
    44C3CE push    edi; int
    44C3CF mov     ecx, esi; this
    44C3D1 call    TechnoClass__SetFocus
    44C3D6 mov     [esi+500h], edi
    44C3DC mov     edx, [ebp+0]
    44C3DF push    3
    44C3E1 mov     ecx, ebp
    44C3E3 call    dword ptr [edx+274h]
    44C3E9 jmp     loc_44C819
    44C3EE mov     eax, g_TerrainTypeTable
    44C3F3 mov     ebx, [ebp+0]
    44C3F6 push    eax
    44C3F7 push    edi; int
    44C3F8 mov     ecx, ebp; this
    44C3FA call    Team__GetMember
    44C3FF lea     ecx, [esp+3Ch+var_24.StreamClass_field_0C]
    44C403 push    eax
    44C404 push    ecx
    44C405 mov     ecx, ebp
    44C407 call    dword ptr [ebx+4D4h]
    44C40D mov     ecx, [ebp+218h]
    44C413 mov     eax, [eax]
    44C415 cmp     ecx, edi
    44C417 mov     dword ptr [esp+38h+var_24.q000], eax
    44C41B jz      short loc_44C458
    44C41D mov     edx, [ecx]
    44C41F lea     eax, [esp+38h+var_10]
    44C423 push    eax
    44C424 call    dword ptr [edx+48h]
    44C427 mov     ecx, eax
    44C429 mov     eax, [ecx]
    44C42B cdq
    44C42C and     edx, 0FFh
    44C432 add     eax, edx
    44C434 sar     eax, 8
    44C437 mov     word ptr [esp+38h+var_24.m_Data], ax
    44C43C mov     eax, [ecx+4]
    44C43F cdq
    44C440 and     edx, 0FFh
    44C446 add     eax, edx
    44C448 sar     eax, 8
    44C44B mov     word ptr [esp+38h+var_24.m_Data+2], ax
    44C450 mov     eax, [esp+38h+var_24.m_Data]
    44C454 mov     dword ptr [esp+38h+var_24.q000], eax
    44C458 cmp     ax, word ptr g_TerrainTypeTable
    44C45F jnz     short loc_44C473
    44C461 mov     cx, word ptr [esp+38h+var_24.q000+2]
    44C466 cmp     cx, word ptr g_TerrainTypeTable+2
    44C46D jz      loc_44C819
    44C473 mov     edx, [esi]
    44C475 push    edi
    44C476 push    2
    44C478 mov     ecx, esi
    44C47A call    dword ptr [edx+1E8h]
    44C480 mov     ebx, [esi]
    44C482 lea     eax, [esp+38h+var_24]
    44C486 push    1
    44C488 push    eax; int16_t *
    44C489 mov     ecx, offset dword_87F7E8; this
    44C48E call    CellCoord__To_CellObj
    44C493 push    eax
    44C494 mov     ecx, esi
    44C496 call    dword ptr [ebx+480h]
    44C49C push    edi; int
    44C49D mov     ecx, esi; this
    44C49F call    TechnoClass__SetFocus
    44C4A4 mov     edx, [ebp+0]
    44C4A7 push    3
    44C4A9 mov     ecx, ebp
    44C4AB call    dword ptr [edx+274h]
    44C4B1 mov     [esi+500h], edi
    44C4B7 jmp     loc_44C819
    44C4BC mov     al, [esi+3D0h]
    44C4C2 test    al, al
    44C4C4 jz      short loc_44C4F3
    44C4C6 mov     ecx, [esi+21Ch]; this
    44C4CC call    House__IsCurrentPlayer
    44C4D1 test    al, al
    44C4D3 jnz     short loc_44C4F3
    44C4D5 mov     eax, [esi]
    44C4D7 push    1
    44C4D9 mov     ecx, esi
    44C4DB call    dword ptr [eax+1A0h]
    44C4E1 mov     [ebp+0BCh], edi
    44C4E7 mov     byte ptr [ebp+6DDh], 1
    44C4EE jmp     loc_44C819
    44C4F3 mov     al, [ebp+41Ah]
    44C4F9 test    al, al
    44C4FB jz      short loc_44C50C
    44C4FD push    0FFFFFFFFh; int
    44C4FF or      edx, 0FFFFFFFFh
    44C502 mov     ecx, offset aEvaRepairing; this
    44C507 call    VoxClass__FindAndPlay
    44C50C mov     ecx, ebp; this
    44C50E mov     dword ptr [ebp+0BCh], 2
    44C518 call    BuildingClass__GetHealthRatio
    44C51D mov     ecx, dword_8871E0
    44C523 fcomp   qword ptr [ecx+1700h]
    44C529 fnstsw  ax
    44C52B test    ah, 41h
    44C52E jz      short loc_44C542
    44C530 mov     eax, [ebp+520h]
    44C536 mov     ecx, 1
    44C53B add     eax, 1204h
    44C540 jmp     short loc_44C54F
    44C542 mov     eax, [ebp+520h]
    44C548 xor     ecx, ecx
    44C54A add     eax, 11F4h
    44C54F cmp     eax, edi
    44C551 jz      short loc_44C565
    44C553 cmp     byte ptr [eax], 0
    44C556 jz      short loc_44C565
    44C558 push    edi; int
    44C559 push    edi; int
    44C55A push    ecx; int
    44C55B push    0Ah; int
    44C55D push    eax; void *
    44C55E mov     ecx, ebp
    44C560 call    BuildingClass__PlayAnim
    44C565 push    3; int
    44C567 mov     ecx, ebp; this
    44C569 call    BuildingClass__ClearAnims
    44C56E push    12h; int
    44C570 mov     ecx, ebp; this
    44C572 call    BuildingClass__ClearAnims
    44C577 mov     byte ptr [ebp+6DDh], 0
    44C57E mov     [ebp+620h], edi
    44C584 mov     eax, dword_A8ED84
    44C589 lea     edx, [ebp+628h]
    44C58F mov     ecx, 1
    44C594 mov     [edx], eax
    44C596 mov     eax, [esp+38h+var_C]
    44C59A mov     [ebp+634h], ecx
    44C5A0 mov     [edx+4], eax
    44C5A3 mov     [edx+8], ecx
    44C5A6 jmp     loc_44C819
    44C5AB mov     ecx, [ebp+21Ch]
    44C5B1 call    HouseClass__IonSensitivesShouldBeOffline
    44C5B6 test    al, al
    44C5B8 jnz     loc_44C819
    44C5BE push    edi; int
    44C5BF mov     ecx, ebp; this
    44C5C1 call    Team__GetMember
    44C5C6 mov     esi, eax
    44C5C8 mov     eax, [esi+674h]
    44C5CE add     esi, 674h
    44C5D4 cmp     eax, edi
    44C5D6 jnz     short loc_44C5E2
    44C5D8 push    80004003h
    44C5DD call    sub_7DC720
    44C5E2 mov     esi, [esi]
    44C5E4 push    esi
    44C5E5 mov     ecx, [esi]
    44C5E7 call    dword ptr [ecx+60h]
    44C5EA test    al, al
    44C5EC jnz     loc_44C819
    44C5F2 push    edi; int
    44C5F3 mov     ecx, ebp; this
    44C5F5 call    Team__GetMember
    44C5FA mov     esi, eax
    44C5FC mov     eax, [esi+674h]
    44C602 add     esi, 674h
    44C608 cmp     eax, edi
    44C60A jnz     short loc_44C616
    44C60C push    80004003h
    44C611 call    sub_7DC720
    44C616 mov     esi, [esi]
    44C618 push    esi
    44C619 mov     edx, [esi]
    44C61B call    dword ptr [edx+58h]
    44C61E jmp     loc_44C819
    44C623 mov     ecx, ebp; this
    44C625 call    Team__AllMembersValid
    44C62A test    al, al
    44C62C jnz     loc_44C6FD
    44C632 push    8; int
    44C634 mov     ecx, ebp; this
    44C636 call    BuildingClass__ClearAnims
    44C63B push    0Bh; int
    44C63D mov     ecx, ebp; this
    44C63F call    BuildingClass__ClearAnims
    44C644 mov     ecx, ebp; this
    44C646 call    BuildingClass__GetHealthRatio
    44C64B mov     eax, dword_8871E0
    44C650 fcomp   qword ptr [eax+1700h]
    44C656 fnstsw  ax
    44C658 test    ah, 41h
    44C65B jz      short loc_44C66F
    44C65D mov     eax, [ebp+520h]
    44C663 mov     ecx, 1
    44C668 add     eax, 128Ch
    44C66D jmp     short loc_44C67C
    44C66F mov     eax, [ebp+520h]
    44C675 xor     ecx, ecx
    44C677 add     eax, 127Ch
    44C67C cmp     eax, edi
    44C67E jz      short loc_44C692
    44C680 cmp     byte ptr [eax], 0
    44C683 jz      short loc_44C692
    44C685 push    edi; int
    44C686 push    edi; int
    44C687 push    ecx; int
    44C688 push    0Ch; int
    44C68A push    eax; void *
    44C68B mov     ecx, ebp
    44C68D call    BuildingClass__PlayAnim
    44C692 mov     ecx, ebp; this
    44C694 call    BuildingClass__GetHealthRatio
    44C699 mov     ecx, dword_8871E0
    44C69F fcomp   qword ptr [ecx+1700h]
    44C6A5 fnstsw  ax
    44C6A7 test    ah, 41h
    44C6AA jz      short loc_44C6BE
    44C6AC mov     eax, [ebp+520h]
    44C6B2 mov     ecx, 1
    44C6B7 add     eax, 1028h
    44C6BC jmp     short loc_44C6CB
    44C6BE mov     eax, [ebp+520h]
    44C6C4 xor     ecx, ecx
    44C6C6 add     eax, 1018h
    44C6CB cmp     eax, edi
    44C6CD jz      short loc_44C6E1
    44C6CF cmp     byte ptr [eax], 0
    44C6D2 jz      short loc_44C6E1
    44C6D4 push    edi; int
    44C6D5 push    edi; int
    44C6D6 push    ecx; int
    44C6D7 push    3; int
    44C6D9 push    eax; void *
    44C6DA mov     ecx, ebp
    44C6DC call    BuildingClass__PlayAnim
    44C6E1 mov     edx, [ebp+0]
    44C6E4 push    1
    44C6E6 push    5
    44C6E8 mov     ecx, ebp
    44C6EA call    dword ptr [edx+1E8h]
    44C6F0 mov     eax, 1
    44C6F5 pop     edi
    44C6F6 pop     esi
    44C6F7 pop     ebp
    44C6F8 pop     ebx
    44C6F9 mov     esp, ebp
    44C6FB pop     ebp
    44C6FC retn
    44C6FD push    edi; int
    44C6FE mov     ecx, ebp; this
    44C700 mov     byte ptr [ebp+6DDh], 0
    44C707 mov     [esp+3Ch+var_24.m_Data], 64h ; 'd'
    44C70F call    Team__GetMember
    44C714 lea     ebx, [eax+674h]
    44C71A mov     dword ptr [esp+38h+var_24.q000], edi
    44C71E cmp     [ebx], edi
    44C720 jz      short loc_44C745
    44C722 push    ebx; unsigned int *
    44C723 lea     ecx, [esp+3Ch+var_24]; this
    44C727 call    StreamClass__Set2
    44C72C cmp     eax, edi
    44C72E jge     short loc_44C73D
    44C730 cmp     eax, 80004002h
    44C735 jz      short loc_44C73D
    44C737 push    eax
    44C738 call    sub_7DC720
    44C73D mov     eax, dword ptr [esp+38h+var_24.q000]
    44C741 cmp     eax, edi
    44C743 jnz     short loc_44C753
    44C745 push    80004003h
    44C74A call    sub_7DC720
    44C74F mov     eax, dword ptr [esp+38h+var_24.q000]
    44C753 mov     ecx, [eax]
    44C755 lea     edx, [esp+38h+var_10]
    44C759 push    edx
    44C75A push    eax
    44C75B call    dword ptr [ecx+0Ch]
    44C75E mov     ecx, 4
    44C763 mov     edi, offset stru_7E9A40
    44C768 lea     esi, [esp+38h+var_10]
    44C76C xor     eax, eax
    44C76E repe cmpsd
    44C770 mov     eax, 0C8h
    44C775 jnz     short loc_44C77B
    44C777 mov     [esp+38h+var_24.m_Data], eax
    44C77B mov     ecx, 4
    44C780 mov     edi, offset g_CLSID_DriveLocomotion2
    44C785 lea     esi, [esp+38h+var_10]
    44C789 xor     edx, edx
    44C78B repe cmpsd
    44C78D jnz     short loc_44C793
    44C78F mov     [esp+38h+var_24.m_Data], eax
    44C793 mov     eax, [ebp+0]
    44C796 push    13h
    44C798 mov     ecx, ebp
    44C79A call    dword ptr [eax+274h]
    44C7A0 cmp     eax, 1
    44C7A3 jnz     short loc_44C7E5
    44C7A5 mov     esi, [ebp+0]
    44C7A8 push    0; int
    44C7AA mov     ecx, ebp; this
    44C7AC call    Team__GetMember
    44C7B1 push    eax
    44C7B2 mov     ecx, ebp
    44C7B4 call    dword ptr [esi+4D8h]
    44C7BA cmp     eax, [esp+38h+var_24.m_Data]
    44C7BE jge     short loc_44C7E5
    44C7C0 mov     eax, dword ptr [esp+38h+var_24.q000]
    44C7C4 mov     dword ptr [ebp+0BCh], 1
    44C7CE test    eax, eax
    44C7D0 jz      short loc_44C7D8
    44C7D2 mov     ecx, [eax]
    44C7D4 push    eax
    44C7D5 call    dword ptr [ecx+8]
    44C7D8 mov     eax, 3
    44C7DD pop     edi
    44C7DE pop     esi
    44C7DF pop     ebp
    44C7E0 pop     ebx
    44C7E1 mov     esp, ebp
    44C7E3 pop     ebp
    44C7E4 retn
    44C7E5 mov     ecx, [ebp+21Ch]
    44C7EB call    HouseClass__IonSensitivesShouldBeOffline
    44C7F0 test    al, al
    44C7F2 jnz     short loc_44C80B
    44C7F4 cmp     dword ptr [ebx], 0
    44C7F7 jnz     short loc_44C803
    44C7F9 push    80004003h
    44C7FE call    sub_7DC720
    44C803 mov     ebx, [ebx]
    44C805 push    ebx
    44C806 mov     edx, [ebx]
    44C808 call    dword ptr [edx+58h]
    44C80B mov     eax, dword ptr [esp+38h+var_24.q000]
    44C80F test    eax, eax
    44C811 jz      short loc_44C819
    44C813 mov     ecx, [eax]
    44C815 push    eax
    44C816 call    dword ptr [ecx+8]
    44C819 mov     ecx, ebp; this
    44C81B call    MissionClass__GetMissionControl
    44C820 fld     qword ptr [eax+10h]
    44C823 fmul    ds:dbl_7E27F8
    44C829 call    Math__RoundToInt
    44C82E pop     edi
    44C82F pop     esi
    44C830 pop     ebp
    44C831 pop     ebx
    44C832 mov     esp, ebp
    44C834 pop     ebp
    44C835 retn
    44C836 mov     cl, [eax+16AAh]
    44C83C test    cl, cl
    44C83E jz      loc_44C970
    44C844 mov     eax, [ebp+0E8h]
    44C84A xor     ebx, ebx
    44C84C cmp     eax, edi
    44C84E mov     byte ptr [esp+38h+var_28+3], 0
    44C853 jle     loc_44C955
    44C859 push    ebx; int
    44C85A mov     ecx, ebp; this
    44C85C call    Team__GetMember
    44C861 mov     esi, eax
    44C863 cmp     esi, edi
    44C865 jz      loc_44C920
    44C86B mov     edx, [ebp+0]
    44C86E push    esi
    44C86F push    1Dh
    44C871 mov     ecx, ebp
    44C873 call    dword ptr [edx+278h]
    44C879 cmp     eax, 1
    44C87C jnz     short loc_44C895
    44C87E mov     eax, [esi]
    44C880 mov     ecx, esi
    44C882 call    dword ptr [eax+84h]
    44C888 mov     ecx, [esi+6Ch]
    44C88B mov     edx, [eax+0A0h]
    44C891 cmp     ecx, edx
    44C893 jz      short loc_44C8FD
    44C895 mov     edx, [esi]
    44C897 mov     ecx, esi
    44C899 call    dword ptr [edx+184h]
    44C89F cmp     eax, 7
    44C8A2 jz      short loc_44C920
    44C8A4 mov     eax, [ebp+0]
    44C8A7 push    esi
    44C8A8 push    13h
    44C8AA mov     ecx, ebp
    44C8AC call    dword ptr [eax+278h]
    44C8B2 cmp     eax, 1
    44C8B5 jnz     short loc_44C920
    44C8B7 mov     edx, [esi]
    44C8B9 mov     ecx, esi
    44C8BB mov     byte ptr [esp+38h+var_28+3], al
    44C8BF call    dword ptr [edx+184h]
    44C8C5 test    eax, eax
    44C8C7 jz      short loc_44C8D7
    44C8C9 mov     eax, [esi]
    44C8CB push    edi
    44C8CC push    edi
    44C8CD mov     ecx, esi
    44C8CF call    dword ptr [eax+1E8h]
    44C8D5 jmp     short loc_44C920
    44C8D7 mov     edx, [ebp+0]
    44C8DA push    esi
    44C8DB push    1Fh
    44C8DD mov     ecx, ebp
    44C8DF call    dword ptr [edx+278h]
    44C8E5 cmp     eax, 1
    44C8E8 jz      short loc_44C920
    44C8EA mov     eax, [ebp+0]
    44C8ED push    esi
    44C8EE push    1Ch
    44C8F0 mov     ecx, ebp
    44C8F2 call    dword ptr [eax+278h]
    44C8F8 cmp     eax, 1
    44C8FB jz      short loc_44C920
    44C8FD mov     edx, [esi]
    44C8FF push    1
    44C901 push    edi
    44C902 mov     ecx, esi
    44C904 call    dword ptr [edx+484h]
    44C90A mov     eax, [esi]
    44C90C push    5
    44C90E mov     ecx, esi
    44C910 call    dword ptr [eax+1F0h]
    44C916 mov     edx, [esi]
    44C918 mov     ecx, esi
    44C91A call    dword ptr [edx+334h]
    44C920 mov     eax, [ebp+0E8h]
    44C926 inc     ebx
    44C927 cmp     ebx, eax
    44C929 jl      loc_44C859
    44C92F mov     al, byte ptr [esp+38h+var_28+3]
    44C933 test    al, al
    44C935 jz      short loc_44C955
    44C937 mov     eax, dword_8871E0
    44C93C fld     qword ptr [eax+1508h]
    44C942 fmul    ds:dbl_7E27F8
    44C948 call    Math__RoundToInt
    44C94D pop     edi
    44C94E pop     esi
    44C94F pop     ebp
    44C950 pop     ebx
    44C951 mov     esp, ebp
    44C953 pop     ebp
    44C954 retn
    44C955 mov     edx, [ebp+0]
    44C958 push    edi
    44C959 push    5
    44C95B mov     ecx, ebp
    44C95D call    dword ptr [edx+1E8h]
    44C963 mov     eax, 3
    44C968 pop     edi
    44C969 pop     esi
    44C96A pop     ebp
    44C96B pop     ebx
    44C96C mov     esp, ebp
    44C96E pop     ebp
    44C96F retn
    44C970 pop     edi
    44C971 mov     eax, 0Fh
    44C976 pop     esi
    44C977 pop     ebp
    44C978 pop     ebx
    44C979 mov     esp, ebp
    44C97B pop     ebp
    44C97C retn
    44C97D align 10h
*/



// 0x446FF0
int BuildingClass::ToggleRepairMode(int aP1) {
  int result; // eax
  int ShellButtonSlideSound; // edi
  House *owner; // ecx
  int *location; // esi
  unsigned int v6[3]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp+4h]

  result = v7; /*0x446ff0*/
  if ( v7 == -1 ) /*0x446ffe*/
  {
    aP1->IsBeingRepaired[0] = aP1->IsBeingRepaired[0] == 0; /*0x447042*/
  }
  else if ( v7 ) /*0x447002*/
  {
    if ( v7 == 1 ) /*0x447007*/
    {
      (*((unsigned char *)&(result))) = aP1->IsBeingRepaired[0]; /*0x447009*/
      if ( (unsigned char)result ) /*0x447011*/
        return result; /*0x447011*/
      aP1->IsBeingRepaired[0] = 1; /*0x447017*/
    }
  }
  else
  {
    result = (uint8_t)aP1->IsBeingRepaired[0]; /*0x447020*/
    if ( !(unsigned char)result ) /*0x447028*/
      return result; /*0x447028*/
    aP1->IsBeingRepaired[0] = 0; /*0x44702e*/
  }
  if ( aP1->IsBeingRepaired[0] ) /*0x447048*/
  {
    if ( aP1->health == *(unsigned int *)(aP1->Type + 160) ) /*0x447061*/
    {
      ShellButtonSlideSound = dword_8871E0->ShellButtonSlideSound; /*0x447068*/
    }
    else
    {
      ShellButtonSlideSound = *&dword_8871E0->q70C; /*0x447076*/
      if ( (uint8_t)House::IsHumanPlayer((House *)aP1->owner) ) /*0x447082*/
        aP1->AcquireTarget(7); /*0x447091*/
      owner = (House *)aP1->owner; /*0x447097*/
      aP1->NeedsRepairs[0] = 1; /*0x44709d*/
      if ( (uint8_t)House::IsHumanPlayer(owner) ) /*0x4470a4*/
        VoxClass::FindAndPlay((VoxClass *)aEvaRepairing, -1); /*0x4470b7*/
    }
  }
  else
  {
    ShellButtonSlideSound = *&dword_8871E0->q70C; /*0x4470c3*/
  }
  result = House::IsHumanPlayer((House *)aP1->owner); /*0x4470cf*/
  if ( (unsigned char)result ) /*0x4470d6*/
  {
    location = aP1->location; /*0x4470d8*/
    v6[0] = *location; /*0x4470e2*/
    v6[1] = location->Y; /*0x4470eb*/
    v6[2] = location->Z; /*0x4470f6*/
    return (int)StartAudioControllerAt(ShellButtonSlideSound, v6, 0); /*0x4470fa*/
  }
  return result; /*0x4470ff*/
}
/* ASM:
sub     esp, 40h
push    ebx
push    ebp
mov     ebp, [esp+48h+arg_4]
push    esi
push    edi
mov     esi, ecx
lea     eax, [ebp-3]    ; switch 19 cases
cmp     eax, 12h
ja      def_43C2F1      ; jumptable 0043C2F1 default case, cases 4-7,9,10,17-20
xor     ecx, ecx
mov     cl, ds:((unsigned char *)&byte_43CE88)[eax]
jmp     ds:jpt_43C2F1[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_43C2F8:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esp+50h+arg_8] ; jumptable 0043C2F1 case 15
mov     edi, [esp+50h+arg_0]
push    edx
push    ebp
push    edi
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     short loc_43C326

loc_43C31A:                             ; CODE XREF: BuildingClass__MissionController+3CE↓j
; BuildingClass__MissionController+3DE↓j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C326:                             ; CODE XREF: BuildingClass__MissionController+48↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 12h
jz      loc_43CB68
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 13h
jz      loc_43CB68
mov     eax, [esi+534h]
test    eax, eax
jz      loc_43CB68
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     short loc_43C38D
push    edi
mov     ecx, esi
call    Array__ContainsValue
test    al, al
jnz     short loc_43C38D
mov     eax, [esi+520h]
mov     cl, [eax+16AEh]
test    cl, cl
jnz     short loc_43C38D
mov     cl, [eax+16AFh]
test    cl, cl
jz      loc_43CB68

loc_43C38D:                             ; CODE XREF: BuildingClass__MissionController+91↑j
; BuildingClass__MissionController+9D↑j ...
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
cmp     dword ptr [eax+5B4h], 5
jz      short loc_43C3FF
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_43C3C8
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_43C3F0

loc_43C3C8:                             ; CODE XREF: BuildingClass__MissionController+E2↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jnz     short loc_43C3FF
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_43C3FF

loc_43C3F0:                             ; CODE XREF: BuildingClass__MissionController+F6↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C3FF:                             ; CODE XREF: BuildingClass__MissionController+CE↑j
; BuildingClass__MissionController+10A↑j ...
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+84h]
mov     cl, [eax+0D6Ah]
test    cl, cl
jz      short loc_43C422
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C422:                             ; CODE XREF: BuildingClass__MissionController+141↑j
mov     al, [esi+660h]
test    al, al
jnz     short loc_43C43B
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C43B:                             ; CODE XREF: BuildingClass__MissionController+15A↑j
mov     ebx, [esi+520h]
mov     al, [ebx+16AEh]
test    al, al
jnz     short loc_43C459
mov     al, [ebx+16AFh]
test    al, al
jz      loc_43C4F8

loc_43C459:                             ; CODE XREF: BuildingClass__MissionController+179↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 1
jnz     short loc_43C475
mov     ecx, [esi+520h]
mov     al, [ecx+16AEh]
test    al, al
jz      short loc_43C491

loc_43C475:                             ; CODE XREF: BuildingClass__MissionController+193↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     short loc_43C4A0
mov     eax, [esi+520h]
mov     cl, [eax+16AFh]
test    cl, cl
jnz     short loc_43C4A0

loc_43C491:                             ; CODE XREF: BuildingClass__MissionController+1A3↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C4A0:                             ; CODE XREF: BuildingClass__MissionController+1AF↑j
; BuildingClass__MissionController+1BF↑j
mov     ecx, [edi+2BCh]
test    ecx, ecx
jz      short loc_43C4C2
call    CellClass__HasContent
test    al, al
jz      short loc_43C4C2
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C4C2:                             ; CODE XREF: BuildingClass__MissionController+1D8↑j
; BuildingClass__MissionController+1E1↑j
mov     ebx, [esi+520h]
mov     ecx, [esi+114h]
inc     ecx
cmp     ecx, [ebx+5E0h]
jg      short loc_43C4F8
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+84h]
fld     qword ptr [eax+380h]
fcomp   qword ptr [ebx+388h]
fnstsw  ax
test    ah, 41h
jnz     loc_43CCF2

loc_43C4F8:                             ; CODE XREF: BuildingClass__MissionController+183↑j
; BuildingClass__MissionController+205↑j
mov     al, [ebx+16ADh]
test    al, al
jnz     loc_43CCF2
mov     al, [ebx+16ABh]
test    al, al
jz      short loc_43C544
mov     ecx, edi
call    TechnoClass__CanSelfRepair
test    al, al
jz      loc_43CB68
mov     eax, [esi]
push    edi
push    23h ; '#'
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 1
jz      loc_43CB68
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C544:                             ; CODE XREF: BuildingClass__MissionController+23E↑j
mov     al, [ebx+16A9h]
test    al, al
jz      short loc_43C58F
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jz      short loc_43C56A
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 2
jnz     loc_43CB68

loc_43C56A:                             ; CODE XREF: BuildingClass__MissionController+288↑j
mov     edx, [esi]
push    edi
push    23h ; '#'
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 1
jz      loc_43CB68
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C58F:                             ; CODE XREF: BuildingClass__MissionController+27C↑j
mov     al, [ebx+16C2h]
test    al, al
jnz     short loc_43C5A3
mov     al, [ebx+16C1h]
test    al, al
jz      short loc_43C620

loc_43C5A3:                             ; CODE XREF: BuildingClass__MissionController+2C7↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
cmp     eax, 0Fh
jnz     short loc_43C620
test    edi, edi
jnz     short loc_43C5B7
xor     ebx, ebx
jmp     short loc_43C5CB
; ---------------------------------------------------------------------------

loc_43C5B7:                             ; CODE XREF: BuildingClass__MissionController+2E1↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
mov     ebx, eax
sub     ebx, 0Fh
neg     ebx
sbb     ebx, ebx
not     ebx
and     ebx, edi

loc_43C5CB:                             ; CODE XREF: BuildingClass__MissionController+2E5↑j
mov     ecx, [ebx+2BCh]
test    ecx, ecx
jz      short loc_43C5ED
call    CellClass__HasContent
test    al, al
jz      short loc_43C5ED
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C5ED:                             ; CODE XREF: BuildingClass__MissionController+303↑j
; BuildingClass__MissionController+30C↑j
mov     ecx, ebx
call    BuildingClass__IsBeingRepairedOrCaptured
test    al, al
jz      short loc_43C607
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C607:                             ; CODE XREF: BuildingClass__MissionController+326↑j
mov     eax, [esi+2FCh]
pop     edi
neg     eax
sbb     eax, eax
pop     esi
and     al, 0F7h
pop     ebp
add     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C620:                             ; CODE XREF: BuildingClass__MissionController+2D1↑j
; BuildingClass__MissionController+2DD↑j
mov     eax, [esi+520h]
mov     cl, [eax+16CBh]
test    cl, cl
jz      short loc_43C64F
mov     ecx, [edi+4]
lea     eax, [edi+4]
push    eax
call    dword ptr [ecx+0Ch]
sub     eax, 2
pop     edi
neg     eax
sbb     eax, eax
pop     esi
and     eax, 9
pop     ebp
inc     eax
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C64F:                             ; CODE XREF: BuildingClass__MissionController+35E↑j
mov     cl, [eax+16B3h]
test    cl, cl
jz      short loc_43C690
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_43C690
mov     eax, [edi+6C4h]
mov     cl, [eax+0E0Eh]
test    cl, cl
jz      short loc_43C690
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     loc_43CCF2
mov     eax, [esi+118h]
test    eax, eax
jz      loc_43CCF2

loc_43C690:                             ; CODE XREF: BuildingClass__MissionController+387↑j
; BuildingClass__MissionController+393↑j ...
mov     ecx, [esi+520h]
mov     al, [ecx+16BCh]
test    al, al
jz      loc_43C31A
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     loc_43C31A
mov     eax, [edi+6C4h]
mov     cl, [eax+0E0Fh]
test    cl, cl
jz      loc_43C31A
mov     eax, ds:0A8E7ACh
test    eax, eax
jnz     loc_43CCF2
mov     eax, [esi+118h]
test    eax, eax
jnz     loc_43C31A
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C6F2:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esi]      ; jumptable 0043C2F1 case 21
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 13h
jnz     short loc_43C710
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C710:                             ; CODE XREF: BuildingClass__MissionController+42F↑j
mov     eax, [esi+520h]
mov     cl, [eax+16AEh]
test    cl, cl
jnz     loc_43CCF2
mov     cl, [eax+16AFh]
test    cl, cl
jnz     loc_43CCF2
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_43C7B5
mov     cl, [eax+16AAh]
test    cl, cl
jnz     short loc_43C7B5
mov     cl, [eax+16C1h]
test    cl, cl
jnz     short loc_43C7B5
mov     cl, [eax+16C2h]
test    cl, cl
jnz     short loc_43C7B5
mov     cl, [eax+16ABh]
test    cl, cl
jz      short loc_43C788
mov     eax, [esi]
push    0
push    14h
mov     ecx, esi
mov     byte ptr [esi+6DDh], 1
call    dword ptr [eax+1E8h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C788:                             ; CODE XREF: BuildingClass__MissionController+492↑j
mov     cl, [eax+16B3h]
test    cl, cl
jz      def_43C2F1      ; jumptable 0043C2F1 default case, cases 4-7,9,10,17-20
mov     ecx, [esp+50h+arg_0]
push    0
push    10h
mov     edx, [ecx]
call    dword ptr [edx+1E8h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C7B5:                             ; CODE XREF: BuildingClass__MissionController+46A↑j
; BuildingClass__MissionController+474↑j ...
mov     eax, [esi]
push    0
push    14h
mov     ecx, esi
mov     byte ptr [esi+6DDh], 1
call    dword ptr [eax+1E8h]
mov     ecx, [esp+50h+arg_0]
push    0
push    0
mov     edx, [ecx]
call    dword ptr [edx+1E8h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C7E9:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     ebx, [esp+50h+arg_8] ; jumptable 0043C2F1 case 14
mov     edi, [esp+50h+arg_0]
push    ebx
push    ebp
push    edi
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
mov     al, [esi+660h]
test    al, al
jnz     short loc_43C814
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C814:                             ; CODE XREF: BuildingClass__MissionController+533↑j
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jz      short loc_43C84C
push    edi
mov     ecx, esi
call    Array__Contains
test    al, al
jz      short loc_43C84C
mov     edx, [esi]
push    edi
push    22h ; '"'
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 0Ah
jnz     short loc_43C84C
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C84C:                             ; CODE XREF: BuildingClass__MissionController+552↑j
; BuildingClass__MissionController+55E↑j ...
mov     eax, [esi+520h]
mov     cl, [eax+16ABh]
test    cl, cl
jz      short loc_43C882
push    edi
mov     ecx, esi
call    Array__Contains
test    al, al
jz      short loc_43C882
mov     ecx, edi
call    TechnoClass__CanSelfRepair
test    al, al
jnz     short loc_43C882
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43C882:                             ; CODE XREF: BuildingClass__MissionController+58A↑j
; BuildingClass__MissionController+596↑j ...
mov     eax, [esi+520h]
mov     cl, [eax+16C1h]
test    cl, cl
jnz     loc_43CB0C
mov     cl, [eax+16C2h]
test    cl, cl
jnz     loc_43CB0C
push    edi
mov     ecx, esi
call    Array__Contains
test    al, al
jnz     short loc_43C8D1
push    edi
mov     ecx, esi
call    Array__ContainsValue
test    al, al
jz      short loc_43C8D1
mov     edx, [esi]
push    edi
push    2
mov     ecx, esi
call    dword ptr [edx+278h]
push    edi
mov     ecx, esi
call    Array__Contains

loc_43C8D1:                             ; CODE XREF: BuildingClass__MissionController+5DE↑j
; BuildingClass__MissionController+5EA↑j
push    edi
mov     ecx, esi
mov     byte ptr [esp+54h+arg_0], 0
call    Array__Contains
test    al, al
jz      short loc_43C93F
mov     eax, [esi+520h]
mov     cl, [eax+16B3h]
test    cl, cl
jnz     short loc_43C8FC
mov     cl, [eax+16BCh]
test    cl, cl
jz      short loc_43C93F

loc_43C8FC:                             ; CODE XREF: BuildingClass__MissionController+620↑j
test    edi, edi
jnz     short loc_43C904
xor     ebp, ebp
jmp     short loc_43C911
; ---------------------------------------------------------------------------

loc_43C904:                             ; CODE XREF: BuildingClass__MissionController+62E↑j
mov     al, [edi+14h]
and     al, 4
neg     al
sbb     eax, eax
and     eax, edi
mov     ebp, eax

loc_43C911:                             ; CODE XREF: BuildingClass__MissionController+632↑j
mov     edx, [esi]
lea     eax, [esp+50h+var_24]
push    ebp
push    eax
mov     ecx, esi
call    dword ptr [edx+0A8h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ebp, [ebp+5A4h]
test    ebp, ebp
jz      short loc_43C93F
cmp     eax, ebp
jz      short loc_43C93F
mov     byte ptr [esp+50h+arg_0], 1

loc_43C93F:                             ; CODE XREF: BuildingClass__MissionController+610↑j
; BuildingClass__MissionController+62A↑j ...
push    0
mov     ecx, esi
call    Team__GetMember
test    eax, eax
jz      loc_43C9F5
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_43C96E
mov     cl, [eax+16ABh]
test    cl, cl
jz      loc_43C9F5

loc_43C96E:                             ; CODE XREF: BuildingClass__MissionController+68E↑j
push    0
mov     ecx, esi
call    Team__GetMember
mov     edx, [eax]
lea     ecx, [esp+50h+var_18]
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
mov     edx, [esi]
mov     ebp, eax
lea     eax, [esp+50h+var_C]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [ebp+0]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+50h+var_3C], ecx
mov     ecx, [ebp+4]
sub     esp, 8
sub     edx, ecx
mov     ecx, [ebp+8]
mov     [esp+58h+var_38], edx
sub     eax, ecx
fild    [esp+58h+var_38]
mov     [esp+58h+var_34], eax
fild    [esp+58h+var_34]
fild    [esp+58h+var_3C]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+58h+var_58] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 80h
jle     short loc_43C9F5
mov     byte ptr [esp+50h+arg_0], 1

loc_43C9F5:                             ; CODE XREF: BuildingClass__MissionController+67A↑j
; BuildingClass__MissionController+698↑j ...
mov     edx, [esi]
push    edi
push    13h
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 1
jz      short loc_43CA13
mov     al, byte ptr [esp+50h+arg_0]
test    al, al
jz      loc_43CCF2

loc_43CA13:                             ; CODE XREF: BuildingClass__MissionController+735↑j
mov     [ebx], esi
mov     eax, [esi+520h]
mov     cl, [eax+16B3h]
test    cl, cl
jnz     short loc_43CA71
mov     cl, [eax+16BCh]
test    cl, cl
jnz     short loc_43CA71
mov     cl, [eax+16CBh]
test    cl, cl
jz      loc_43CCF2
mov     [ebx], esi
mov     eax, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [eax+27Ch]
cmp     eax, 14h
jnz     loc_43CCF2
mov     edx, [esi]
push    18h
mov     ecx, esi
call    dword ptr [edx+274h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CA71:                             ; CODE XREF: BuildingClass__MissionController+753↑j
; BuildingClass__MissionController+75D↑j
mov     eax, [esi]
lea     ecx, [esp+50h+var_40]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     dx, [eax]
mov     ax, [eax+2]
add     dx, 3
inc     ax
mov     word ptr [esp+50h+arg_0], dx
mov     word ptr [esp+50h+arg_0+2], ax
mov     ecx, [esp+50h+arg_0]
lea     edx, [esp+50h+arg_4]
mov     [esp+50h+arg_4], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     [ebx], eax
mov     eax, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [eax+27Ch]
cmp     eax, 14h
jnz     loc_43CCF2
mov     edx, [esi]
push    edi
push    18h
mov     ecx, esi
call    dword ptr [edx+278h]
mov     eax, [esi]
push    edi
push    16h
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 1
jz      loc_43CCF2
mov     edx, [edi]
push    1
push    1
push    89C848h
mov     ecx, edi
call    dword ptr [edx+174h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CB0C:                             ; CODE XREF: BuildingClass__MissionController+5C0↑j
; BuildingClass__MissionController+5CE↑j
push    edi
mov     ecx, esi
call    Array__ContainsValue
test    al, al
jnz     short loc_43CB77
mov     eax, [esi+0E8h]
xor     ebp, ebp
test    eax, eax
jle     short loc_43CB58

loc_43CB24:                             ; CODE XREF: BuildingClass__MissionController+886↓j
push    ebp
mov     ecx, esi
call    Team__GetMember
mov     ebx, eax
mov     eax, [esi]
push    ebx
push    22h ; '"'
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 0Ah
jnz     short loc_43CB4D
mov     edx, [esi]
push    ebx
push    17h
mov     ecx, esi
call    dword ptr [edx+278h]

loc_43CB4D:                             ; CODE XREF: BuildingClass__MissionController+86E↑j
mov     eax, [esi+0E8h]
inc     ebp
cmp     ebp, eax
jl      short loc_43CB24

loc_43CB58:                             ; CODE XREF: BuildingClass__MissionController+852↑j
push    edi
mov     ecx, esi
call    Array__ContainsValue
test    al, al
jnz     loc_43CCF2

loc_43CB68:                             ; CODE XREF: BuildingClass__MissionController+63↑j
; BuildingClass__MissionController+76↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CB77:                             ; CODE XREF: BuildingClass__MissionController+846↑j
lea     eax, [esi+9Ch]
mov     ecx, [esi+9Ch]
mov     [esp+50h+var_30], ecx
lea     ecx, [esp+50h+var_30]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+54h+var_2C], edx
mov     eax, [eax+8]
mov     [esp+54h+var_28], eax
call    Coord__To_Cell
mov     [ebx], eax
mov     edx, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [edx+27Ch]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CBC3:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     eax, [esi+118h] ; jumptable 0043C2F1 case 16
test    eax, eax
jnz     short loc_43CB68
mov     edi, [esp+50h+arg_0]
mov     ecx, esi
push    edi
call    Array__ContainsValue
test    al, al
jz      short loc_43CB68
mov     al, [esi+81h]
test    al, al
jnz     short loc_43CB68
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+3Ch]
cmp     [esi+21Ch], eax
jnz     loc_43CB68
mov     esi, [esi+520h]
mov     al, [esi+16BBh]
test    al, al
jnz     loc_43CCF2
mov     al, [esi+16A9h]
test    al, al
jnz     loc_43CCF2
mov     al, [esi+16BCh]
test    al, al
jz      loc_43CB68
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CC39:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esi]      ; jumptable 0043C2F1 case 11
push    0
push    14h
mov     ecx, esi
call    dword ptr [edx+1E8h]
jmp     loc_43CCE0
; ---------------------------------------------------------------------------

loc_43CC4C:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esi]      ; jumptable 0043C2F1 case 12
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 13h
jz      loc_43CCE0
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     ecx, [esi+520h]
mov     al, [ecx+16B9h]
test    al, al
jz      short loc_43CCE0
push    7
mov     ecx, esi
call    BuildingClass__ClearAnims
push    12h
mov     ecx, esi
call    BuildingClass__ClearAnims
mov     ecx, esi
call    BuildingClass__GetHealthRatio
mov     edx, ds:8871E0h
fcomp   qword ptr [edx+1700h]
fnstsw  ax
test    ah, 41h
jz      short loc_43CCBB
mov     eax, [esi+520h]
mov     ecx, 1
add     eax, 117Ch
jmp     short loc_43CCC8
; ---------------------------------------------------------------------------

loc_43CCBB:                             ; CODE XREF: BuildingClass__MissionController+9D7↑j
mov     eax, [esi+520h]
xor     ecx, ecx
add     eax, 116Ch

loc_43CCC8:                             ; CODE XREF: BuildingClass__MissionController+9E9↑j
test    eax, eax
jz      short loc_43CCE0
cmp     byte ptr [eax], 0
jz      short loc_43CCE0
push    0               ; int
push    0               ; int
push    ecx             ; int
push    8               ; int
push    eax             ; void *
mov     ecx, esi
call    BuildingClass__PlayAnim

loc_43CCE0:                             ; CODE XREF: BuildingClass__MissionController+977↑j
; BuildingClass__MissionController+989↑j ...
mov     eax, [esp+50h+arg_8]
mov     ecx, [esp+50h+arg_0]
push    eax
push    ebp
push    ecx
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch

loc_43CCF2:                             ; CODE XREF: BuildingClass__MissionController+222↑j
; BuildingClass__MissionController+230↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CD01:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
push    1               ; jumptable 0043C2F1 case 3
mov     ecx, esi
call    BuildingClass__StartProduction
mov     edx, [esp+50h+arg_8]
mov     eax, [esp+50h+arg_0]
push    edx
push    ebp
push    eax
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CD2B:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     eax, [esi+520h] ; jumptable 0043C2F1 case 8
mov     ebx, [esp+50h+arg_0]
mov     cl, [eax+16A9h]
test    cl, cl
jnz     short loc_43CD4D
mov     cl, [eax+16ABh]
test    cl, cl
jz      loc_43CDD4

loc_43CD4D:                             ; CODE XREF: BuildingClass__MissionController+A6D↑j
mov     edx, [ebx]
lea     eax, [esp+50h+var_C]
push    eax
mov     ecx, ebx
call    dword ptr [edx+48h]
mov     edx, [esi]
mov     edi, eax
lea     eax, [esp+50h+var_18]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [edi]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+50h+var_3C], ecx
mov     ecx, [edi+4]
sub     esp, 8
sub     edx, ecx
mov     ecx, [edi+8]
mov     [esp+58h+var_38], edx
sub     eax, ecx
fild    [esp+58h+var_38]
mov     [esp+58h+var_34], eax
fild    [esp+58h+var_34]
fild    [esp+58h+var_3C]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+58h+var_58] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 180h
jge     short loc_43CDD4
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CDD4:                             ; CODE XREF: BuildingClass__MissionController+A77↑j
; BuildingClass__MissionController+AF3↑j
mov     ecx, [esp+50h+arg_8]
push    ecx
push    ebp
push    ebx
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
mov     esi, [esi+520h]
mov     al, [esi+16BDh]
test    al, al
jnz     short loc_43CE15
mov     al, [esi+16A9h]
test    al, al
jnz     short loc_43CE15
mov     al, [esi+16ABh]
test    al, al
jnz     short loc_43CE15
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CE15:                             ; CODE XREF: BuildingClass__MissionController+B20↑j
; BuildingClass__MissionController+B2A↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 17h
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

loc_43CE24:                             ; CODE XREF: BuildingClass__MissionController+21↑j
; DATA XREF: .text:jpt_43C2F1↓o
mov     edx, [esi+520h] ; jumptable 0043C2F1 case 13
mov     al, [edx+16BDh]
test    al, al
jz      short def_43C2F1 ; jumptable 0043C2F1 default case, cases 4-7,9,10,17-20
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 40h
retn    0Ch
; ---------------------------------------------------------------------------

def_43C2F1:                             ; CODE XREF: BuildingClass__MissionController+13↑j
; BuildingClass__MissionController+21↑j ...
mov     eax, [esp+50h+arg_8] ; jumptable 0043C2F1 default case, cases 4-7,9,10,17-20
mov     ecx, [esp+50h+arg_0]
push    eax
push    ebp
push    ecx
mov     ecx, esi
call    TechnoClass__Mission_RepairDispatch
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 40h
retn    0Ch
*/

// 0x5b01c0
int BuildingClass::ProcessMission() { return MissionController(); }
// 0x458dd0
bool BuildingClass::CheckMissionGuard() {
  BuildingTypeClass *Type; // eax

  Type = this->Type; /*0x458dd0*/
  return Type->CanBeOccupied /*0x458dfb*/
      && Type->CanOccupyFire
      && (*((int (__thiscall **)(BuildingClass *))this->ptr_0 + 258))(this) > 0;
}
// 0x458e00
bool BuildingClass::CheckMissionAttack()
{
  int FoundationHeight; // edi

  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x458e17*/
  if ( BuildingTypeClass::GetFoundationWidth(this->Type) >= FoundationHeight ) /*0x458e20*/
    return BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) / 2; /*0x458e46*/
  else
    return BuildingTypeClass::GetFoundationWidth(this->Type) / 2; /*0x458e31*/
}
// 0x6349b0
// 0x43f180
} // G42.33c6 stub close (raw body preserved above)
{
  int v2; // edi
  BuildingClass *v3; // ebx
  int Type; // esi
  char *v5; // eax
  int v6; // eax
  int v7; // ecx
  Array *v8; // esi
  int Value; // eax
  int v10; // eax
  unsigned char *v11; // esi
  int result; // eax
  int v13; // ebx
  unsigned char *v14; // esi
  int *ScenarioClassActionCoords; // eax
  int v16; // esi
  int v17; // edi
  int *v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // [esp+10h] [ebp-110h]
  int v22; // [esp+10h] [ebp-110h]
  int v23; // [esp+14h] [ebp-10Ch]
  int v24[3]; // [esp+18h] [ebp-108h] BYREF
  int v25; // [esp+24h] [ebp-FCh]
  int v26[3]; // [esp+28h] [ebp-F8h] BYREF
  int v27[3]; // [esp+34h] [ebp-ECh] BYREF
  unsigned char v28[112]; // [esp+40h] [ebp-E0h] BYREF
  unsigned char v29[108]; // [esp+B0h] [ebp-70h] BYREF
  int16_t v30; // [esp+11Ch] [ebp-4h]
  char v31; // [esp+11Eh] [ebp-2h]

  v23 = 0; /*0x6349bc*/
  v21 = above->u32_10[0]; /*0x6349c9*/
  if ( v21 > 0 ) /*0x6349cd*/
  {
    do /*0x634a64*/
    {
      v2 = *(unsigned int *)(above->u32_4[0] + 4 * v23); /*0x6349da*/
      v3 = *(BuildingClass **)v2; /*0x6349dd*/
      Type = BuildingClass::GetType(*(BuildingClass **)v2); /*0x6349e6*/
      v24[0] = (int)above; /*0x6349ed*/
      if ( (*(int (__thiscall **)(int, int *))(Type->ptr_4 + 16))(Type + 4, v24) == Type->q094 ) /*0x634a00*/
      {
        *(unsigned char *)(v2 + 12) = 1; /*0x634a02*/
        v5 = (char *)above->q0A8 + 1; /*0x634a10*/
        above->q0A8 = v5; /*0x634a15*/
        if ( v5 == 1 ) /*0x634a18*/
        {
          v6 = BuildingClass::GetType(v3); /*0x634a1c*/
          v7 = *(unsigned int *)(v6 + 20) - 1; /*0x634a24*/
          if ( v7 >= 0 ) /*0x634a25*/
            v8 = *(Array **)(*(unsigned int *)(v6 + 8) + 4 * v7); /*0x634a2e*/
          else
            v8 = 0; /*0x634a27*/
          Value = Array::FindValue(v8, (int)v3); /*0x634a34*/
          if ( Value == -1 ) /*0x634a3c*/
            v10 = 0; /*0x634a3e*/
          else
            v10 = *((unsigned int *)v8->q004 + Value); /*0x634a45*/
          v11 = *(unsigned char **)(v10 + 4); /*0x634a48*/
          memcpy(&above->q034[4], v11, 0x6Cu); /*0x634a50*/
          v11 += 108; /*0x634a50*/
          *(unsigned short *)&above->__pad_9C[8] = *(unsigned short *)v11; /*0x634a52*/
          above->__pad_9C[10] = v11[2]; /*0x634a54*/
        }
      }
      ++v23; /*0x634a60*/
    }
    while ( v23 < v21 ); /*0x634a64*/
  }
  above->q0B0 = (void *)-1; /*0x634a6a*/
  result = (int)above->q0A8; /*0x634a74*/
  if ( result ) /*0x634a7c*/
  {
    result = (int)above->q030; /*0x634a8e*/
    memcpy(v28, &above->q034[4], 0x6Eu); /*0x634a91*/
    v13 = 0; /*0x634a95*/
    v22 = result; /*0x634a97*/
    v28[110] = above->__pad_9C[10]; /*0x634a9d*/
    if ( result > 0 ) /*0x634a9e*/
    {
      while ( 1 ) /*0x634aaf*/
      {
        v14 = *(unsigned char **)(above->q024 + 4 * v13); /*0x634aaf*/
        memcpy(v29, v14, sizeof(v29)); /*0x634ab6*/
        v14 += 108; /*0x634ab6*/
        v30 = *(unsigned short *)v14; /*0x634ab8*/
        v31 = v14[2]; /*0x634abe*/
        ScenarioClassActionCoords = GetScenarioClassActionCoords(v27, v28); /*0x634abf*/
        v16 = *ScenarioClassActionCoords; /*0x634ac4*/
        v17 = ScenarioClassActionCoords[1]; /*0x634ad1*/
        v25 = ScenarioClassActionCoords[2]; /*0x634ad7*/
        v18 = GetScenarioClassActionCoords(v26, v29); /*0x634ae0*/
        result = *v18; /*0x634ae2*/
        v19 = v18[1]; /*0x634ae6*/
        v20 = v18[2]; /*0x634ae9*/
        if ( v16 == result && v17 == v19 && v25 == v20 ) /*0x634af6*/
          break; /*0x634af6*/
        result = v22; /*0x634af8*/
        if ( ++v13 >= v22 ) /*0x634aff*/
          return result; /*0x634aff*/
      }
      above->q0B0 = (void *)v13; /*0x634b03*/
    }
  }
  return result; /*0x634b09*/
}
    BuildingClass *v1; // edi
    int result; // eax
    BuildingTypeClass *Type; // eax
    int v4; // ebx
    int (__thiscall **ptr_0)(BuildingClass *, void *, int, int, unsigned int, int); // esi
    void *v6; // eax
    int FoundationWidth; // eax
    int *v8; // ecx
    int FoundationHeight; // eax
    int v10; // ebp
    int v11; // esi
    HouseClass *owner; // ecx
    BuildingTypeClass *v13; // eax
    int *v14; // eax
    unsigned int *v15; // eax
    int v16; // ecx
    int v17; // ebp
    int v18; // ecx
    int16_t v19; // bx
    int16_t v20; // ax
    int v21; // edx
    int v22; // eax
    int v23; // esi
    int16_t v24; // bx
    int16_t v25; // di
    BuildingClass *v26; // eax
    int v27; // edx
    int v28; // eax
    int v29; // eax
    int v30; // ebp
    int v31; // esi
    int16_t v32; // bx
    BuildingClass *v33; // eax
    void *v34; // eax
    int (__thiscall **v35)(BuildingClass *, void *, int, int, unsigned int, int); // esi
    void *v36; // eax
    BuildingTypeClass *v37; // ecx
    void (__thiscall **v38)(BuildingClass *, int); // esi
    int v39; // eax
    int *v40; // eax
    int *Anims; // ebp
    int *v42; // esi
    unsigned int *v43; // eax
    unsigned int *v44; // eax
    int v45; // edx
    int v46; // eax
    int v47; // eax
    int *v48; // ecx
    int v49; // eax
    int v50; // ebx
    unsigned int *v51; // eax
    int v52; // ecx
    int v53; // ebp
    int v54; // ecx
    int16_t v55; // di
    int16_t v56; // ax
    int v57; // esi
    int16_t v58; // bx
    int16_t v59; // di
    BuildingClass *v60; // eax
    int v61; // edx
    int v62; // ebp
    int v63; // edi
    int v64; // esi
    BuildingClass *v65; // eax
    int v66; // eax
    int v67; // esi
    BuildingClass *v68; // eax
    unsigned int *v69; // eax
    int v70; // ecx
    int Translucency; // ebx
    int *v73; // ecx
    int v74; // ebp
    bool v75; // zf
    int v76; // ebx
    int *v77; // ecx
    int v78; // esi
    int v79; // [esp+10h] [ebp-CCh]
    int v80; // [esp+14h] [ebp-C8h]
    int v81; // [esp+18h] [ebp-C4h]
    int v82; // [esp+2Ch] [ebp-B0h]
    int v83; // [esp+2Ch] [ebp-B0h]
    int v84; // [esp+2Ch] [ebp-B0h]
    int v85; // [esp+2Ch] [ebp-B0h]
    int v86; // [esp+2Ch] [ebp-B0h]
    int16_t v87[2]; // [esp+30h] [ebp-ACh] BYREF
    int *v88; // [esp+34h] [ebp-A8h]
    int j; // [esp+38h] [ebp-A4h]
    char v90; // [esp+3Fh] [ebp-9Dh]
    int i; // [esp+40h] [ebp-9Ch]
    int16_t v92[4]; // [esp+44h] [ebp-98h] BYREF
    int16_t v93[2]; // [esp+4Ch] [ebp-90h] BYREF
    int v94; // [esp+50h] [ebp-8Ch]
    int v95; // [esp+54h] [ebp-88h]
    int v96; // [esp+58h] [ebp-84h]
    int k; // [esp+5Ch] [ebp-80h]
    int v99; // [esp+64h] [ebp-78h]
    int v100; // [esp+68h] [ebp-74h]
    int16_t v99[2]; // [esp+6Ch] [ebp-70h] BYREF
    int16_t k[2]; // [esp+70h] [ebp-6Ch] BYREF
    int16_t v49[2]; // [esp+74h] [ebp-68h] BYREF
    int16_t j[2]; // [esp+78h] [ebp-64h] BYREF
    unsigned int v105[3]; // [esp+7Ch] [ebp-60h] BYREF
    int v106[3]; // [esp+88h] [ebp-54h] BYREF
    unsigned int v107[3]; // [esp+94h] [ebp-48h] BYREF
    unsigned int v108[3]; // [esp+A0h] [ebp-3Ch] BYREF
    int v109[3]; // [esp+ACh] [ebp-30h] BYREF
    char v110[12]; // [esp+B8h] [ebp-24h] BYREF
    char v111[12]; // [esp+C4h] [ebp-18h] BYREF
    int v112[3]; // [esp+D0h] [ebp-Ch] BYREF
    int v113; // [esp+E0h] [ebp+4h]

    v1 = this; /*0x43f191*/
    *(unsigned int *)v93 = (unsigned int)(void *)(this); /*0x43f194*/
    result = TechnoClass::UpdateProdWithSound((TechnoClass *)this, v113); /*0x43f198*/
    if ( result )

    {
      result = v1->GetCellCoords_Alt( v99); /*0x43f1ae*/

      *(unsigned int *)v92 = *(unsigned int *)result; /*0x43f1b9*/
      switch ( v113 )
      {
        case 0:
          result = MapClass::ApplyOverlayReveal((MapClass *)&DataGlobal_87F7E8, v92, (char *)v1); /*0x43f1d5*/
          result = 1; /*0x43f1dd*/
          break; /*0x43f1e6*/
        case 1:
        case 3:
          Type = v1->Type; /*0x43f1e9*/
          v4 = 0; /*0x43f1ef*/
          if ( Type->ToTile ) /*0x43f1f1*/
          {
            ptr_0 = (int (__thiscall **)(BuildingClass *, void *, int, int, unsigned int, int))v1->TechnoClass; /*0x43f1fd*/
            v6 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v92); /*0x43f210*/
            if ( ptr_0[107](v1, v6, -1, -1, 0, 1) ) /*0x43f218*/
              goto LABEL_33; /*0x43f218*/
            FoundationWidth = (v1->Type)->GetFoundationWidth(); /*0x43f22c*/
            v8 = (int *)v1->Type; /*0x43f231*/
            v88 = (int *)FoundationWidth; /*0x43f238*/
            FoundationHeight = (v8)->GetFoundationHeight( 0); /*0x43f23c*/
            v10 = 0; /*0x43f241*/
            v82 = FoundationHeight; /*0x43f245*/
            v90 = 0; /*0x43f249*/
            for ( i = 0; v10 < v82; i = v10 ) /*0x43f251*/
            {
              v11 = 0; /*0x43f25b*/
              for ( j = 0; v11 < (int)v88; j = v11 ) /*0x43f263*/
              {
                (v100) = ((v100) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)(v10 + v92[1]) & 0xFFFF) << 16); /*0x43f276*/
                owner = (gamemd::HouseClass *)(void *)((unsigned int *)v1)[0]; /*0x43f27b*/
                (v100) = ((v100) & ~0xFFFF) | ((unsigned int)(v11 + v92[0]) & 0xFFFF); /*0x43f281*/
                v13 = v1->Type; /*0x43f28a*/
                *(unsigned int *)v87 = v100; /*0x43f290*/
                v81 = (int)owner; /*0x43f294*/
                v80 = (int)v13; /*0x43f29b*/
                v79 = v13->ptr_0; /*0x43f2a0*/
                v14 = (int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v87); /*0x43f2a7*/
                if ( (uint8_t)((gamemd::CellClass *)(void *)(v14))->IsPassable(v79, v80, v81) /*0x43f2fb*/
                  && *((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v87) + 14) != *(unsigned int *)(v1->Type->ToTile + 660)
                  && *((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v87) + 59) != 1 )
                {
                  v15 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v87); /*0x43f30b*/
                  v16 = v15[18]; /*0x43f310*/
                  if ( v16 != -1 ) /*0x43f316*/
                  {
                    v17 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * v16); /*0x43f322*/
                    v94 = v15[9]; /*0x43f32a*/
                    v18 = *(unsigned int *)(v17 + 664); /*0x43f334*/
                    v19 = *(&v15->u32_11F) % v18; /*0x43f343*/
                    v20 = *(&v15->u32_11F) / v18; /*0x43f347*/
                    v21 = *(unsigned int *)(v17 + 668); /*0x43f349*/
                    (v94) = ((v94) & ~0xFFFF) | ((unsigned int)(v94 - v19) & 0xFFFF); /*0x43f34f*/
                    v94 -= (unsigned int)(v20) << 16; /*0x43f354*/
                    v22 = 0; /*0x43f359*/
                    v99 = 0; /*0x43f35d*/
                    if ( v21 > 0 ) /*0x43f361*/
                    {
                      do /*0x43f3eb*/
                      {
                        v23 = 0; /*0x43f367*/
                        if ( v18 > 0 ) /*0x43f36b*/
                        {
                          v24 = (((unsigned int)(v94) >> 16) & 0xFFFF) + v22; /*0x43f371*/
                          (k) = ((k) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)((((unsigned int)(v94) >> 16) & 0xFFFF) + v22) & 0xFFFF) << 16); /*0x43f374*/
                          do /*0x43f3d4*/
                          {
                            (v49) = ((v49) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)(v24) & 0xFFFF) << 16); /*0x43f381*/
                            v25 = v23 + v94; /*0x43f387*/
                            (v49) = ((v49) & ~0xFFFF) | ((unsigned int)(v23 + v94) & 0xFFFF); /*0x43f38f*/
                            *(unsigned int *)v49 = v49; /*0x43f398*/
                            *((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v49) + 18) = -1; /*0x43f3a1*/
                            (k) = ((k) & ~0xFFFF) | ((unsigned int)(v25) & 0xFFFF); /*0x43f3a8*/
                            *(unsigned int *)k = k; /*0x43f3bb*/
                            v26 = (BuildingClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(k); /*0x43f3bf*/
                            ((gamemd::BuildingClass *)(void *)(v26))->CreateDestructionCrater(); /*0x43f3c6*/
                            v18 = *(unsigned int *)(v17 + 664); /*0x43f3cb*/
                            ++v23; /*0x43f3d1*/
                          }
                          while ( v23 < v18 ); /*0x43f3d4*/
                          v22 = v99; /*0x43f3d6*/
                          v1 = *(BuildingClass **)v93; /*0x43f3da*/
                        }
                        v27 = *(unsigned int *)(v17 + 668); /*0x43f3de*/
                        v99 = ++v22; /*0x43f3e7*/
                      }
                      while ( v22 < v27 ); /*0x43f3eb*/
                    }
                    v10 = i; /*0x43f3f1*/
                    v11 = j; /*0x43f3f5*/
                  }
                  v28 = (*(int (__thiscall **)(int, HouseClass *))(*(unsigned int *)v1->Type->ToTile + 140))( /*0x43f410*/
                          v1->Type->ToTile,
                          ((unsigned int *)v1)[0]);
                  v107[2] = 0; /*0x43f429*/
                  v107[0] = (v87[0] << 8) + 128; /*0x43f433*/
                  v107[1] = (v87[1] << 8) + 128; /*0x43f441*/
                  (*(void (__thiscall **)(int, unsigned int *, unsigned int))(*(unsigned int *)v28 + 216))(v28, v107, 0); /*0x43f44b*/
                  if ( (ObjectClass *)((unsigned int *)v1)[0] == dword_A83D4C ) /*0x43f45e*/
                  {
                    v106[0] = (v87[0] << 8) + 128; /*0x43f47f*/
                    v106[1] = (v87[1] << 8) + 128; /*0x43f492*/
                    v106[2] = 0; /*0x43f4a1*/
                    MapClass::RevealArea1((MapClass *)&DataGlobal_87F7E8, v106, 1, dword_A83D4C, 0, 0, 0, 1, 0); /*0x43f4a8*/
                    v109[0] = (v87[0] << 8) + 128; /*0x43f4ce*/
                    v109[1] = (v87[1] << 8) + 128; /*0x43f4e4*/
                    v109[2] = 0; /*0x43f4f3*/
                    MapClass::RevealArea1((MapClass *)&DataGlobal_87F7E8, v109, 1, dword_A83D4C, 0, 0, 0, 1, 1); /*0x43f4fa*/
                  }
                  v90 = 1; /*0x43f4ff*/
                }
                ++v11; /*0x43f508*/
              }
              FoundationHeight = v82; /*0x43f515*/
              ++v10; /*0x43f519*/
            }
            i = 0; /*0x43f529*/
            j = FoundationHeight + 2; /*0x43f52f*/
            if ( FoundationHeight + 2 > 0 ) /*0x43f533*/
            {
              v29 = 0; /*0x43f539*/
              v30 = (int)v88 + 2; /*0x43f53b*/
              do /*0x43f5a7*/
              {
                v31 = 0; /*0x43f542*/
                if ( v30 > 0 ) /*0x43f546*/
                {
                  v94 = ((v94) & 0xFFFFu) | (((unsigned int)(v29 - 1) & 0xFFFFu) << 16); /*0x43f549*/
                  v32 = v29 - 1; /*0x43f54e*/
                  do /*0x43f596*/
                  {
                    v94 = ((v94) & 0xFFFF0000u) | ((unsigned int)(v31 - 1) & 0xFFFFu); /*0x43f559*/
                    v83 = ((v83) & 0xFFFF0000u) | ((unsigned int)(v92[0] + v31 - 1) & 0xFFFFu); /*0x43f568*/
                    v83 = ((v83) & 0xFFFFu) | (((unsigned int)(v32 + v92[1]) & 0xFFFFu) << 16); /*0x43f574*/
                    *(unsigned int *)v93 = v83; /*0x43f57d*/
                    v33 = (BuildingClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v93); /*0x43f587*/
                    ((gamemd::BuildingClass *)(void *)(v33))->CreatePlacementCrater(); /*0x43f58e*/
                    ++v31; /*0x43f593*/
                  }
                  while ( v31 < v30 ); /*0x43f596*/
                  v29 = i; /*0x43f598*/
                }
                i = ++v29; /*0x43f5a3*/
              }
              while ( v29 < j ); /*0x43f5a7*/
            }
            if ( !v90 ) /*0x43f5b1*/
            {
  LABEL_33:
              result = TechnoClass::UpdateProdWithSound((TechnoClass *)v1, 0); /*0x43f5db*/
              goto LABEL_34; /*0x43f5db*/
            }
            (*((void (__thiscall **)(BuildingClass *, int))v1->ptr_0 + 160))(v1, 3); /*0x43f5b9*/
            result = (*((int (__thiscall **)(BuildingClass *))v1->ptr_0 + 62))(v1); /*0x43f5c3*/
            result = ((result) & 0xFFFFFF00u) | ((unsigned int)(1) & 0xFFu); /*0x43f5cc*/
          }
          else if ( Type->Wall ) /*0x43f5ef*/
          {
            v34 = (void *)new unsigned char[0xB0u]; /*0x43f5fe*/
            if ( v34 ) /*0x43f608*/
              ObjectClass::SpawnAtCell((int)(v34),(int)(v1->Type->ToOverlay[0]), v92, *(unsigned int *)(((unsigned int *)v1)[0]->relatedTagsCapacity + 184)); /*0x43f62e*/
            (*((void (__thiscall **)(BuildingClass *, int))v1->ptr_0 + 160))(v1, 3); /*0x43f639*/
            result = (*((int (__thiscall **)(BuildingClass *))v1->ptr_0 + 62))(v1); /*0x43f643*/
            result = ((result) & 0xFFFFFF00u) | ((unsigned int)(1) & 0xFFu); /*0x43f64c*/
          }
          else
          {
            if ( v113 != 3 ) /*0x43f65b*/
            {
              v35 = (int (__thiscall **)(BuildingClass *, void *, int, int, unsigned int, int))v1->TechnoClass; /*0x43f65d*/
              v36 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v92); /*0x43f670*/
              result = v35[107](v1, v36, -1, -1, 0, 1); /*0x43f678*/
              if ( result ) /*0x43f680*/
                goto LABEL_34; /*0x43f680*/
            }
            MapClass::FillRevealBuffer((MapClass *)&DataGlobal_87F7E8, v92, v1); /*0x43f691*/
            v37 = v1->Type; /*0x43f6a0*/
            v38 = (void (__thiscall **)(BuildingClass *, int))v1->TechnoClass; /*0x43f6a6*/
            v108[2] = 0; /*0x43f6b0*/
            v108[1] = (v92[1] << 8) + 128; /*0x43f6ba*/
            v108[0] = (v92[0] << 8) + 128; /*0x43f6cf*/
            v39 = (*((int (__thiscall **)(BuildingTypeClass *, char *, unsigned int *))v37->ptr_0 + 27))( /*0x43f6e0*/
                    v37,
                    v110,
                    v108);
            v38[109](v1, v39); /*0x43f6e6*/
            v40 = (int *)(*((int (__thiscall **)(BuildingClass *, unsigned int *))v1->ptr_0 + 43))(v1, v105); /*0x43f6f5*/
            Anims = (int *)(void *)(v1->Anims); /*0x43f6fd*/
            v94 = *v40; /*0x43f703*/
            v95 = v40[1]; /*0x43f70a*/
            v96 = v40[2]; /*0x43f711*/
            do /*0x43f795*/
            {
              v42 = (int *)*Anims; /*0x43f715*/
              if ( *Anims ) /*0x43f715*/
              {
                v43 = Matrix3x4::(/*0x43f738*/
                        (float *)g_TacticalClass_Instance)->TransformCell(
                        v111,
                        (int *)&v1->Type->qF70[v4 + 12]);
                v44 = ((Coord *)v112)->Subtract( *v43 + v94, v95 + v43[1], v96 + v43[2]); /*0x43f761*/
                v105[0] = *v44; /*0x43f768*/
                v105[1] = v44[1]; /*0x43f76f*/
                v45 = v44[2]; /*0x43f777*/
                v46 = *v42; /*0x43f77a*/
                v105[2] = v45; /*0x43f77f*/
                (*(void (__thiscall **)(int *, unsigned int *))(v46 + 436))(v42, v105); /*0x43f783*/
              }
              v4 += 68; /*0x43f789*/
              ++Anims; /*0x43f78c*/
            }
            while ( v4 < 1428 ); /*0x43f795*/
            v47 = (v1->Type)->GetFoundationWidth(); /*0x43f7a1*/
            v48 = (int *)v1->Type; /*0x43f7a6*/
            *(unsigned int *)v87 = v47; /*0x43f7ae*/
            v49 = (v48)->GetFoundationHeight( 0); /*0x43f7b2*/
            v49 = v49; /*0x43f7b9*/
            i = 0; /*0x43f7bd*/
            if ( v49 > 0 ) /*0x43f7c5*/
            {
              do /*0x43f916*/
              {
                v50 = 0; /*0x43f7cf*/
                for ( k = 0; v50 < *(int *)v87; k = v50 ) /*0x43f7d7*/
                {
                  v84 = ((v84) & 0xFFFF0000u) | ((unsigned int)(v50 + v92[0]) & 0xFFFFu); /*0x43f7ee*/
                  v84 = ((v84) & 0xFFFFu) | (((unsigned int)(i + v92[1]) & 0xFFFFu) << 16); /*0x43f7f3*/
                  *(unsigned int *)v93 = v84; /*0x43f800*/
                  v51 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v93); /*0x43f80a*/
                  v52 = v51[18]; /*0x43f80f*/
                  if ( v52 != -1 ) /*0x43f815*/
                  {
                    v88 = 0; /*0x43f821*/
                    v53 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * v52); /*0x43f829*/
                    v94 = v51[9]; /*0x43f831*/
                    v54 = *(unsigned int *)(v53 + 664); /*0x43f83b*/
                    v55 = *((uint8_t *)v51 + 287) % v54; /*0x43f84a*/
                    v56 = *((uint8_t *)v51 + 287) / v54; /*0x43f84e*/
                    v94 = ((v94) & 0xFFFF0000u) | ((unsigned int)(v94 - v55) & 0xFFFFu); /*0x43f850*/
                    (unsigned short)((v94) >> 16) -= v56; /*0x43f855*/
                    if ( *(int *)(v53 + 668) > 0 ) /*0x43f862*/
                    {
                      do /*0x43f8ec*/
                      {
                        v57 = 0; /*0x43f868*/
                        if ( v54 > 0 ) /*0x43f86c*/
                        {
                          v58 = (unsigned short)((v94) >> 16) + (unsigned short)v88; /*0x43f876*/
                          v99 = ((v99) & 0xFFFFu) | (((unsigned int)((unsigned short)((v94) >> 16) + (unsigned short)v88) & 0xFFFFu) << 16); /*0x43f879*/
                          do /*0x43f8d9*/
                          {
                            j = ((j) & 0xFFFFu) | (((unsigned int)(v58) & 0xFFFFu) << 16); /*0x43f886*/
                            v59 = v57 + v94; /*0x43f88c*/
                            j = ((j) & 0xFFFF0000u) | ((unsigned int)(v57 + v94) & 0xFFFFu); /*0x43f894*/
                            *(unsigned int *)j = j; /*0x43f89d*/
                            *((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(j) + 18) = -1; /*0x43f8a6*/
                            v99 = ((v99) & 0xFFFF0000u) | ((unsigned int)(v59) & 0xFFFFu); /*0x43f8ad*/
                            *(unsigned int *)v99 = v99; /*0x43f8c0*/
                            v60 = (BuildingClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v99); /*0x43f8c4*/
                            ((gamemd::BuildingClass *)(void *)(v60))->CreateDestructionCrater(); /*0x43f8cb*/
                            v54 = *(unsigned int *)(v53 + 664); /*0x43f8d0*/
                            ++v57; /*0x43f8d6*/
                          }
                          while ( v57 < v54 ); /*0x43f8d9*/
                        }
                        v61 = *(unsigned int *)(v53 + 668); /*0x43f8df*/
                        v88 = (int *)((char *)v88 + 1); /*0x43f8e8*/
                      }
                      while ( (int)v88 < v61 ); /*0x43f8ec*/
                      v50 = k; /*0x43f8f2*/
                    }
                  }
                  ++v50; /*0x43f8fa*/
                }
                ++i; /*0x43f912*/
              }
              while ( i < v49 ); /*0x43f916*/
              v49 = v49; /*0x43f91c*/
            }
            result = v49 + 2; /*0x43f91e*/
            v62 = 0; /*0x43f921*/
            j = result; /*0x43f925*/
            if ( result <= 0 ) /*0x43f929*/
              goto LABEL_92; /*0x43f929*/
            v63 = *(unsigned int *)v87 + 2; /*0x43f933*/
            do /*0x43f995*/
            {
              v64 = 0; /*0x43f936*/
              if ( v63 > 0 ) /*0x43f93a*/
              {
                v94 = ((v94) & 0xFFFFu) | (((unsigned int)(v62 - 1) & 0xFFFFu) << 16); /*0x43f93f*/
                do /*0x43f98c*/
                {
                  v94 = ((v94) & 0xFFFF0000u) | ((unsigned int)(v64 - 1) & 0xFFFFu); /*0x43f94f*/
                  v85 = ((v85) & 0xFFFF0000u) | ((unsigned int)(v92[0] + v64 - 1) & 0xFFFFu); /*0x43f95e*/
                  v85 = ((v85) & 0xFFFFu) | (((unsigned int)(v62 - 1 + v92[1]) & 0xFFFFu) << 16); /*0x43f96a*/
                  *(unsigned int *)v93 = v85; /*0x43f979*/
                  v65 = (BuildingClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v93); /*0x43f97d*/
                  ((gamemd::BuildingClass *)(void *)(v65))->CreatePlacementCrater(); /*0x43f984*/
                  ++v64; /*0x43f989*/
                }
                while ( v64 < v63 ); /*0x43f98c*/
                result = j; /*0x43f98e*/
              }
              ++v62; /*0x43f992*/
            }
            while ( v62 < result ); /*0x43f995*/
            result = ((result) & 0xFFFFFF00u) | ((unsigned int)(1) & 0xFFu); /*0x43f99a*/
          }
          break; /*0x43f5d5*/
        case 2:
          *(unsigned int *)v93 = (*((int (__thiscall **)(BuildingClass *))v1->ptr_0 + 121))(v1); /*0x43f9b0*/
          v66 = (*((int (__thiscall **)(BuildingClass *))v1->ptr_0 + 111))(v1); /*0x43f9b8*/
          v67 = (*((int (__thiscall **)(BuildingClass *, unsigned int))v1->ptr_0 + 281))(v1, *(int16_t *)(v66 + 266)); /*0x43f9d0*/
          if ( (*((uint8_t (__thiscall **)(BuildingClass *))v1->ptr_0 + 88))(v1)
            || ((unsigned int *)v1)[0]
            && (v1 ? (v68 = (*((int (__thiscall **)(BuildingClass *))v1->ptr_0 + 11))(v1) == 6 ? v1 : 0) : (v68 = 0),
                (BuildingClass *)((unsigned int *)v1)[0]->AirstrikeClass_field_50 == v68) )
          {
            v67 = ((v67) & 0xFFFF0000u) | ((unsigned int)(Techno::StartInvulnerability(v67)) & 0xFFFFu); /*0x43fa17*/
          }
          *(unsigned short *)v1->BuildingClass_field_short_700 = v67; /*0x43fa19*/
          j = (uint16_t)v67; /*0x43fa26*/
          v88 = (int *)(void *)(v1->Anims); /*0x43fa30*/
          v86 = 21; /*0x43fa34*/
          do /*0x43fabc*/
          {
            v69 = (unsigned int *)*v88; /*0x43fa40*/
            if ( *v88 ) /*0x43fa40*/
            {
              v70 = v69[50]; /*0x43fa46*/
              if ( v70 && *(unsigned char *)(v70 + 860) ) /*0x43fa50*/
              {
                j = j; /*0x43fa5e*/
                v69[53] = *(unsigned int *)v93; /*0x43fa62*/
                v69[63] = j; /*0x43fa68*/
              }
              Translucency = v1->Translucency; /*0x43fa6e*/
              if ( Translucency == 15 /*0x43fa88*/
                && (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int))v1->ptr_0 + 26))(v1, 0, 0) == 5 )
              {
                Translucency = ((Translucency) & 0xFFFFFF00u) | ((unsigned int)(16) & 0xFFu); /*0x43fa8a*/
              }
              v73 = (int *)(void *)(v1->Anims); /*0x43fa8f*/
              v74 = 21; /*0x43fa91*/
              do /*0x43faa6*/
              {
                if ( *v73 ) /*0x43fa96*/
                  *(unsigned char *)(*v73 + 376) = Translucency; /*0x43fa9c*/
                ++v73; /*0x43faa2*/
                --v74; /*0x43faa5*/
              }
              while ( v74 ); /*0x43faa6*/
            }
            v75 = v86 == 1; /*0x43fab3*/
            ++v88; /*0x43fab4*/
            --v86; /*0x43fab8*/
          }
          while ( !v75 ); /*0x43fabc*/
          v76 = v1->Translucency; /*0x43fac2*/
          if ( v76 == 15 && (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int))v1->ptr_0 + 26))(v1, 0, 0) == 5 ) /*0x43fadc*/
            v76 = ((v76) & 0xFFFFFF00u) | ((unsigned int)(16) & 0xFFu); /*0x43fade*/
          v77 = (int *)(void *)(v1->Anims); /*0x43fae3*/
          v78 = 21; /*0x43fae5*/
          do /*0x43fafa*/
          {
            result = *v77; /*0x43faea*/
            if ( *v77 ) /*0x43faea*/
              result->q178 = v76; /*0x43faf0*/
            ++v77; /*0x43faf6*/
            --v78; /*0x43faf9*/
          }
          while ( v78 ); /*0x43fafa*/
          goto LABEL_92; /*0x43fafa*/
        default:
  LABEL_92:
          result = ((result) & 0xFFFFFF00u) | ((unsigned int)(1) & 0xFFu); /*0x43fafc*/
          break; /*0x43faff*/
      }
    }
    else
    {
  LABEL_34:
      result = ((result) & 0xFFFFFF00u) | ((unsigned int)(0) & 0xFFu); /*0x43f5e0*/
    }
    return result; /*0x43f1da*/
}
  int16_t v19; // bx
  int16_t v20; // ax
  int16_t v24; // bx
  int16_t v25; // di
  int16_t v32; // bx
  int16_t v55; // di
  int16_t v56; // ax
  int16_t v58; // bx
  int16_t v59; // di
  bool v75; // zf
  int v79; // [esp+10h] [ebp-CCh]
  int v80; // [esp+14h] [ebp-C8h]
  int v81; // [esp+18h] [ebp-C4h]
  int v82; // [esp+2Ch] [ebp-B0h]
  int v83; // [esp+2Ch] [ebp-B0h]
  int v84; // [esp+2Ch] [ebp-B0h]
  int v85; // [esp+2Ch] [ebp-B0h]
  int v86; // [esp+2Ch] [ebp-B0h]
  int16_t v87[2]; // [esp+30h] [ebp-ACh] BYREF
  int *v88; // [esp+34h] [ebp-A8h]
  int j; // [esp+38h] [ebp-A4h]
  char v90; // [esp+3Fh] [ebp-9Dh]
  int i; // [esp+40h] [ebp-9Ch]
  int16_t v92[4]; // [esp+44h] [ebp-98h] BYREF
  int16_t v93[2]; // [esp+4Ch] [ebp-90h] BYREF
  int v94; // [esp+50h] [ebp-8Ch]
  int v95; // [esp+54h] [ebp-88h]
  int v96; // [esp+58h] [ebp-84h]
  int k; // [esp+5Ch] [ebp-80h]
  int v99; // [esp+64h] [ebp-78h]
  int v100; // [esp+68h] [ebp-74h]
  int16_t v99[2]; // [esp+6Ch] [ebp-70h] BYREF
  int16_t k[2]; // [esp+70h] [ebp-6Ch] BYREF
  int16_t v49[2]; // [esp+74h] [ebp-68h] BYREF
  int16_t j[2]; // [esp+78h] [ebp-64h] BYREF
  unsigned int v105[3]; // [esp+7Ch] [ebp-60h] BYREF
  int v106[3]; // [esp+88h] [ebp-54h] BYREF
  unsigned int v107[3]; // [esp+94h] [ebp-48h] BYREF
  unsigned int v108[3]; // [esp+A0h] [ebp-3Ch] BYREF
  int v109[3]; // [esp+ACh] [ebp-30h] BYREF
  char v110[12]; // [esp+B8h] [ebp-24h] BYREF
  char v111[12]; // [esp+C4h] [ebp-18h] BYREF
  int v112[3]; // [esp+D0h] [ebp-Ch] BYREF
  int v113; // [esp+E0h] [ebp+4h]

// 0x4da0e0
void BuildingClass::AddToProductionQueue(int a2)  // g57w11 r4: 参数命名 (raw 0x4DA0E0 体用 a2; C2065)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int Member; // eax
  int v10; // esi

  if ( !a2 ) /*0x4da0eb*/
    return; /*0x4da0eb*/
  v3 = this->u32_5BC; /*0x4da0f1*/
  if ( a2 != this ) /*0x4da0f9*/
  {
    v4 = v3 == 0; /*0x4da108*/
    goto LABEL_6; /*0x4da108*/
  }
  v4 = v3 == 0; /*0x4da0fb*/
  if ( v3 <= 0 ) /*0x4da0fd*/
  {
  LABEL_6:
    if ( v4 ) /*0x4da10a*/
      this->u32_6B1 = 0; /*0x4da10c*/
    v5 = this->q5B4; /*0x4da113*/
    if ( this->u32_5BC < v5 /*0x4da144*/
      || (this->u32_5B9 || !v5)
      && (v6 = this->idleActionTimer_d, v6 > 0)
      && this->q16B->vt_slot_8(&this->u32_5AC, v5 + v6, 0) )
    {
      v7 = this->q16F; /*0x4da14b*/
      v8 = this->idleActionTimer; /*0x4da14e*/
      this->q16F = v7 + 1; /*0x4da154*/
      *(unsigned int *)(v8 + 4 * v7) = a2; /*0x4da157*/
    }
    goto LABEL_14; /*0x4da157*/
  }
  this->u32_6B1 = 1; /*0x4da0ff*/
  LABEL_14:
  if ( !this->q5A4 && (*(int (__thiscall **)(int))(*&this->q988))(this) == 5 ) /*0x4da171*/
  {
    Member = Team::GetMember((Team *)this, 0); /*0x4da177*/
    v10 = Member; /*0x4da17c*/
    if ( !Member /*0x4da194*/
      || Member->ReturnZeroPos() != 6
      || !*(unsigned char *)(v10->u32_520 + 5821) )
    {
      (*(void (__thiscall **)(int, unsigned int, int))(this->q121)(this, 0, 1); /*0x4da1a6*/
    }
  bool v4; // zf

// 0x4fce80
void BuildingClass::Capture()
{
  unsigned int *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  char v7; // al
  int v8; // edi
  int v9; // eax
  char *i; // ecx
  unsigned char *v11; // edi
  void *v12; // eax
  BuildingClass *v13; // eax
  void *v14; // eax

  if ( *a2 != *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948] || a2[1] != *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950] ) /*0x4fcea4*/
  {
    v3 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(a2); /*0x4fceb0*/
    v4 = v3->u32_44; /*0x4fceb5*/
    if ( v4 != -1 ) /*0x4fcebb*/
    {
      v5 = v3->u32_50; /*0x4fcec1*/
      if ( v5 != -1 ) /*0x4fcec7*/
      {
        v6 = *((unsigned int *)stru_A80220.ptr_C + v5); /*0x4fced3*/
        if ( *(unsigned int *)&dword_A8B238 ) /*0x4fcede*/
          v7 = *(unsigned char *)(v6 + 492); /*0x4fcefc*/
        else
          v7 = *(unsigned char *)(v6 + 492) || *(unsigned char *)(v6 + 493); /*0x4fcee8*/
        if ( v7 ) /*0x4fcf04*/
        {
          v8 = *(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * v4); /*0x4fcf0f*/
          if ( *(unsigned char *)(v8 + 680) ) /*0x4fcf12*/
          {
            v9 = 0; /*0x4fcf26*/
            if ( dword_A83C78 > 0 ) /*0x4fcf2a*/
            {
              for ( i = (char *)dword_A83C6C; *(unsigned int *)(*(unsigned int *)i + 3668) != v8; i += 4 ) /*0x4fcf36*/
              {
                if ( ++v9 >= dword_A83C78 ) /*0x4fcf48*/
                  return; /*0x4fcf48*/
              }
              v11 = (unsigned char *)*((unsigned int *)dword_A83C6C + v9); /*0x4fcf52*/
              if ( v11 && !v11[5497] ) /*0x4fcf5d*/
              {
                if ( dword_A83D4C == (Object *)this && !a3 ) /*0x4fcf7e*/
                  PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1700), 0x2000, 1.0, 0); /*0x4fcf98*/
                (*(void (__thiscall **)(unsigned char *, BuildingClass *))(*(unsigned int *)v11 + 132))(v11, this); /*0x4fcfa2*/
                *((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(a2) + 17) = -1; /*0x4fcfbc*/
                *((unsigned char *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(a2) + 286) = 0; /*0x4fcfca*/
                *((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(a2) + 20) = -1; /*0x4fcfdd*/
                v12 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(a2); /*0x4fcfe0*/
                House::AnnounceUpgrade((int)v12, -1); /*0x4fcfe7*/
                v13 = (BuildingClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(a2); /*0x4fcff4*/
                BuildingClass::ValidatePlacement(v13, 0); /*0x4fcffb*/
                BuildingClass::AddUpgrade((int *)&DataGlobal_87F7E8, (int)a2); /*0x4fd006*/
                v14 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(a2); /*0x4fd011*/
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v14); /*0x4fd018*/
                Cell::SetRadar((Cell *)&DataGlobal_87F7E8, a2); /*0x4fd023*/
                Radar::Update((Radar *)&DataGlobal_87F7E8, a2); /*0x4fd02e*/
              }
            }
          }
        }
      }
    }
  }
}
// 0x458200
int BuildingClass::ProcessStructureAbandoned() {
  int result; // eax
  int v3; // edi
  House *v4; // ebx
  int v5; // eax
  int v6; // ecx
  HouseClass *v7; // edx
  House *owner; // ecx
  int64_t v9; // rax
  unsigned char v10[4]; // [esp+8h] [ebp-4h] BYREF

  result = this->Type; /*0x458205*/
  if ( result->TechLevel == -1 ) /*0x458212*/
  {
    if ( (uint8_t)BuildingClass::IsHealthLow(this) ) /*0x45821a*/
      BuildingClass::UnloadUnits(this, 0, 0); /*0x458229*/
    v3 = dword_A80238; /*0x458230*/
    v4 = 0; /*0x45823b*/
    v5 = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x45823d*/
    v6 = 0; /*0x458242*/
    if ( v3 > 0 ) /*0x458246*/
    {
      v7 = dword_A8022C; /*0x458248*/
      while ( *(unsigned int *)(*(unsigned int *)(v7->ptr_0 + 52) + 188) != v5 ) /*0x458259*/
      {
        ++v6; /*0x45825b*/
        v7 = (HouseClass *)((char *)v7 + 4); /*0x45825c*/
        if ( v6 >= v3 ) /*0x458261*/
          goto LABEL_10; /*0x458261*/
      }
      v4 = (House *)*(&dword_A8022C->ptr_0 + v6); /*0x45826b*/
    }
  LABEL_10:
    if ( !this->MissionStubReturnZero6() ) /*0x458272*/
    {
      owner = (House *)this->owner; /*0x45827e*/
      if ( owner != v4 ) /*0x458286*/
      {
        if ( (uint8_t)House::IsHumanPlayer(owner) ) /*0x458288*/
        {
          PlayVocClass(dword_8871E0->GeneticMutatorActivateSound, 0x2000, 1.0, 0); /*0x4582a9*/
          v9 = ((int64_t (__thiscall *)(BuildingClass *, unsigned char *))*(unsigned int *)&this->ptr_0->airstrikeTintTimer)(this, v10); /*0x4582b7*/
          if ( (uint8_t)CreateTriggerClassIfFarEnough(15, (*((signed int *)(((unsigned char *)&(v9)) + 4))), *(unsigned int *)v9) ) /*0x4582c5*/
            VoxClass::FindAndPlay(&stru_81926C, -1); /*0x4582d8*/
        }
        PlayHealthDependentBuildingAnim((TechnoClass *)this); /*0x4582df*/
        this->drawFrame_0(v4, 0); /*0x4582eb*/
      }
    }
    result = this->MissionStubReturnZero6(); /*0x4582f5*/
    if ( result > 0 && (House *)this->owner == v4 ) /*0x458305*/
    {
      PlayHealthDependentBuildingAnim((TechnoClass *)this); /*0x458309*/
      return this->drawFrame_0(/*0x458323*/
               this, *(unsigned int *)(*(unsigned int *)this->Audio7[4] + 540), 0);
    }
  }
  return result; /*0x458329*/
}
  int64_t v9; // rax
  unsigned char v10[4]; // [esp+8h] [ebp-4h] BYREF

// 0x44eb10

// IDA 0x451330: get crew count
// 0x451330
int BuildingClass::GetCrewCount()
{
  if ( this->HasBeenCaptured /*0x44eb43*/
    || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 25
    || this->Type->Factory[0] != 7 )
  {
    return TechnoClass::GetCrew((TechnoClass *)this); /*0x44eb55*/
  }
  else
  {
    return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3952); /*0x44eb4c*/
  }
}
// 0x442d90
void BuildingClass::EjectCrew()
{
  double v2; // st7
  int v4; // edx
  int ptr_0; // eax
  unsigned short *v6; // ebp
  int C4AppliedBy; // eax
  int Type; // eax
  int i; // esi
  int16_t v11; // ax
  CellClass *v12; // eax
  int *v13; // eax
  CellClass *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  char v18; // al
  unsigned int *Value; // eax
  int v20; // edx
  unsigned char *v21; // eax
  int16_t v23; // cx
  int16_t v24; // dx
  bool *v25; // eax
  int owner; // edx
  int v27; // esi
  int v28; // ebp
  int v29; // eax
  CellClass *v30; // eax
  int *v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  int *v37; // eax
  int v38; // kr08_4
  int v39; // eax
  int *v40; // eax
  int v41; // kr0C_4
  int v42; // eax
  int16_t v48[2]; // [esp+14h] [ebp-7Ch] BYREF
  int v46; // [esp+1Ch] [ebp-74h]
  int v47; // [esp+20h] [ebp-70h]
  int v48; // [esp+24h] [ebp-6Ch]
  int v51; // [esp+30h] [ebp-60h] BYREF
  int v52; // [esp+34h] [ebp-5Ch]
  int v53; // [esp+38h] [ebp-58h]
  int v54; // [esp+3Ch] [ebp-54h] BYREF
  int v55; // [esp+40h] [ebp-50h]
  int v56; // [esp+44h] [ebp-4Ch]
  int v57[3]; // [esp+48h] [ebp-48h] BYREF
  int v58[3]; // [esp+54h] [ebp-3Ch] BYREF
  unsigned int v59[3]; // [esp+60h] [ebp-30h] BYREF
  int v60[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v61[3]; // [esp+78h] [ebp-18h] BYREF
  int v62[3]; // [esp+84h] [ebp-Ch] BYREF

  v4 = *(unsigned int *)this->GetCellCoords_Alt(&v25); /*0x442da8*/
  ptr_0 = this->ptr_0; /*0x442daa*/
  v4 = v4; /*0x442db1*/
  v6 = (unsigned short *)ptr_0->GetOrCreateResHandle(this, 0); /*0x442dbb*/
  C4AppliedBy = this->C4AppliedBy; /*0x442dbd*/
  v46 = 2; /*0x442dc5*/
  if ( C4AppliedBy ) /*0x442dcd*/
    v46 = 1; /*0x442dcf*/
  if ( this->HasBeenCaptured[0] ) /*0x442dd7*/
    v46 += 6; /*0x442ddf*/
  v47 = this->GetCrewCount(); /*0x442dee*/
  Type = this->Type; /*0x442df2*/
  if ( *(unsigned char *)(Type + 5806) || Type->InfantryAbsorb )
  {
    Type = this->passengers[0]; /*0x442e0c*/
    if ( Type > 0 )
    {
      Type = LinkedList::Pop((LinkedList *)this->passengers); /*0x442e20*/
      for ( i = Type; Type; i = Type )
      {
        v6 = v6; /*0x442e34*/
        v6 += 2; /*0x442e38*/
        v11 = *v6 + v4; /*0x442e3b*/
        (*((unsigned short *)&(v6))) = (*(((unsigned short *)&(v4)) + 1)) + v6[1]; /*0x442e42*/
        v53 = 0; /*0x442e47*/
        v51 = (v11 << 8) + 128; /*0x442e62*/
        v52 = ((int16_t)v6 << 8) + 164; /*0x442e66*/
        if ( (*(int (__thiscall **)(int))(*(unsigned int *)i + 44))(i) == 1 ) /*0x442e74*/
        {
          v12 = ((Coord *)&dword_87F7E8)->To_Cell( &v51); /*0x442e80*/
          v13 = (int *)v12->GetOccupier(v59); /*0x442e8e*/
        }
        else
        {
          v14 = ((Coord *)&dword_87F7E8)->To_Cell( &v51); /*0x442ebe*/
          v13 = ObjectPlacement::CalcPosition((ObjectPlacement *)v14, v58, &v51, 0, 0, 0); /*0x442ec5*/
        }
        v51 = *v13; /*0x442e93*/
        v52 = v13->ptr_4; /*0x442e9a*/
        v53 = v13->ptr_8; /*0x442ea1*/
        ++dword_A8E7AC; /*0x442eeb*/
        *(unsigned char *)(i + 140) = this->onBridge[0]; /*0x442ef7*/
        v54 = this->location[0]; /*0x442eff*/
        v15 = this->ptr_0; /*0x442f03*/
        v55 = this->location[1]; /*0x442f08*/
        v56 = this->location[2]; /*0x442f11*/
        v16 = v15->GetCellCoords(this); /*0x442f15*/
        v17 = *(unsigned int *)((*(int (__thiscall **)(int, int *))(*(unsigned int *)v16 + 72))(v16, v57) + 8); /*0x442f27*/
        v18 = this->NoCrew[0]; /*0x442f2a*/
        v56 = v17; /*0x442f32*/
        if ( v18
          || (Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v25),
              !(*(uint8_t (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)i + 216))(
                 i,
                 &v54,
                 (uint8_t)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          if ( a2 )
            v21 = (a2[20] & 1) != 0 ? a2 : 0;
          else
            v21 = 0; /*0x442fd0*/
          (*(void (__thiscall **)(int, unsigned char *))(*(unsigned int *)i + 224))(i, v21); /*0x442fe5*/
          (*(void (__thiscall **)(int))(*(unsigned int *)i + 248))(i); /*0x442fef*/
        }
        else
        {
          if ( !*(unsigned char *)(i + 1080) ) /*0x442f6d*/
          {
            ++*(unsigned int *)(*(unsigned int *)(i + 540) + 756); /*0x442f82*/
            *(unsigned char *)(i + 1080) = 1; /*0x442f88*/
          }
          v20 = *(unsigned int *)i; /*0x442f8f*/
          *(unsigned char *)(i + 1081) = 0; /*0x442f9b*/
          (*(void (__thiscall **)(int, unsigned int *, int, unsigned int))(v20 + 372))(i, &g_BuildingClassPool, 1, 0); /*0x442fa1*/
          if ( !(uint8_t)House::IsCurrentPlayer((House *)this->owner) ) /*0x442fad*/
            (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)i + 488))(i, 15, 0); /*0x442fbd*/
        }
        --dword_A8E7AC; /*0x442ffc*/
        Type = LinkedList::Pop((LinkedList *)this->passengers); /*0x443008*/
      }
    }
  }
  if ( v47 ) /*0x44301b*/
  {
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x44302f*/
    {
      v6 = v6; /*0x44303a*/
      v6 += 2; /*0x44303c*/
      v23 = *v6 + v4; /*0x44303f*/
      v24 = (*(((unsigned short *)&(v4)) + 1)) + v6[1]; /*0x443046*/
      v6 = v6; /*0x44304b*/
      (*((unsigned short *)&(v48))) = v23; /*0x44304f*/
      (*(((unsigned short *)&(v48)) + 1)) = v24; /*0x443058*/
      *(unsigned int *)v48 = v48; /*0x443067*/
      v25 = (bool *)((CellCoord *)&dword_87F7E8)->To_CellObj(v48); /*0x44306b*/
      owner = this->owner; /*0x443070*/
      v25 = v25; /*0x443076*/
      if ( !this->u32_412 /*0x4430aa*/
        && v47 > 0
        && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v46) == 1 )
      {
        v27 = 0; /*0x4430b4*/
        v28 = this->GetCrew(); /*0x4430bc*/
        if ( v28 ) /*0x4430c0*/
        {
          v29 = operator new(0x6F0u); /*0x4430c7*/
          if ( v29 ) /*0x4430d1*/
            v27 = InfantryClass::Construct(v29, (int)this, v28, (IUnknown *)this->owner); /*0x4430e2*/
          else
            v27 = 0; /*0x4430e6*/
        }
        Debug::Log(); /*0x443101*/
        if ( v27 ) /*0x44310b*/
        {
          if ( this->BuildingClass_field_bool_6E9[0] && *(unsigned char *)(v27->Type + 3230) ) /*0x44311f*/
            v27->Technician = 1; /*0x443127*/
          ++dword_A8E7AC; /*0x443141*/
          v53 = 0; /*0x44315a*/
          v51 = (v48[0] << 8) + 128; /*0x44315e*/
          v52 = (v48[1] << 8) + 164; /*0x443166*/
          v30 = ((Coord *)&dword_87F7E8)->To_Cell( &v51); /*0x44317b*/
          v31 = ObjectPlacement::CalcPosition((ObjectPlacement *)v30, v60, &v51, 0, 0, 0); /*0x443182*/
          v51 = *v31; /*0x443191*/
          v32 = v31->ptr_4; /*0x443197*/
          v52 = v32; /*0x44319a*/
          v33 = v31->ptr_8; /*0x44319e*/
          v53 = v33; /*0x4431a1*/
          if ( v51 == g_BuildingClassPool && v32 == dword_89C84C && v33 == dword_89C850 /*0x4431c5*/
            || !v27->COMStub_54(&v51, 0) )
          {
            (*(void (__thiscall **)(int, int))(v27->needsSave)(v27, 1); /*0x443285*/
          }
          else
          {
            Debug::Log(); /*0x4431d8*/
            v34 = *(unsigned int *)(v27->Type + 160); /*0x4431eb*/
            --v47; /*0x4431f1*/
            v35 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 5, v34); /*0x443203*/
            v36 = *(unsigned int *)v27; /*0x443208*/
            v27->HouseClass_6C = v35; /*0x443214*/
            (*(void (__thiscall **)(int, unsigned int *, int, unsigned int))(v36 + 372))(v27, &g_BuildingClassPool, 1, 0); /*0x443217*/
            if ( !a2 || (uint8_t)Object::IsAlliedWithObjectSimpleHouse((Object *)this->owner, a2) ) /*0x44322f*/
            {
              if ( (uint8_t)House::IsCurrentPlayer((House *)this->owner) ) /*0x443258*/
                v27->vt_slot_488(2, 0); /*0x443268*/
              else
                v27->vt_slot_488(15, 0); /*0x443277*/
            }
            else
            {
              v27->vt_slot_488(1, 0); /*0x44323f*/
              v27->vt_slot_968(a2); /*0x44324a*/
            }
          }
          --dword_A8E7AC; /*0x443288*/
        }
        v6 = v6; /*0x44328e*/
      }
      (*((unsigned char *)&(Type))) = Cell::IsBuildable(v25, 1, 1, 1, -1, 0, -1, 1); /*0x4432a3*/
      if ( (unsigned char)Type ) /*0x4432aa*/
      {
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x4432c7*/
        {
          v58[1] = (v48[1] << 8) + 128; /*0x44337d*/
          v58[0] = (v48[0] << 8) + 128; /*0x443392*/
          v58[2] = 0; /*0x443396*/
          v40 = RandomCoordScatter(v62, v58, v2, 128, 0); /*0x44339a*/
          v41 = *v40; /*0x4433af*/
          v42 = v40->ptr_4; /*0x4433b1*/
          v59[2] = 0; /*0x4433bb*/
          v59[0] = ((int16_t)(v41 / 256) << 8) + 128; /*0x4433dd*/
          v59[1] = ((int16_t)(v42 / 256) << 8) + 128; /*0x4433eb*/
          (*((unsigned char *)&(Type))) = TimedCreateUnitAtCoords(v59, 100, 100, 0); /*0x4433ef*/
        }
        else
        {
          v54 = (v48[0] << 8) + 128; /*0x4432e4*/
          v55 = (v48[1] << 8) + 128; /*0x4432fa*/
          v56 = 0; /*0x4432fe*/
          v37 = RandomCoordScatter(v61, &v54, v2, 128, 0); /*0x443302*/
          v38 = *v37; /*0x443317*/
          v39 = v37->ptr_4; /*0x443319*/
          v57[2] = 0; /*0x443323*/
          v57[0] = ((int16_t)(v38 / 256) << 8) + 128; /*0x443347*/
          v57[1] = ((int16_t)(v39 / 256) << 8) + 128; /*0x44334b*/
          (*((unsigned char *)&(Type))) = StandardCreateUnitAtCoords(v57, 100, 100, 0); /*0x443358*/
        }
      }
    }
  }
  return Type; /*0x4433f9*/
}
// 0x454DB0
int BuildingClass::CleanupOccupation() {
  BuildingClass *v1; // esi
  int result; // eax
  unsigned int *v3; // eax
  int cloakState; // eax
  char Translucency; // al
  char v6; // al
  char v7; // bl
  int *Anims; // ecx
  int v9; // edi
  ParticleSystemClass *ambientParticles; // ecx
  char v11; // al
  char v12; // al
  char v13; // bl
  int *v14; // ecx
  int v15; // edi
  ParticleSystemClass *v16; // eax
  int *NaturalParticleSystemLocation; // eax
  int v18; // ebp
  int v19; // ebx
  int *v20; // edi
  int v21; // edx
  int v22; // esi
  int v23; // edx
  int v24; // eax
  CellClass *v25; // eax
  int v26; // eax
  int Draw_field_00; // eax
  int v30; // ebp
  int v31; // edi
  int *v32; // eax
  int v33; // ebp
  int k; // ebx
  bool v35; // zf
  BuildingClass *v36; // edi
  unsigned int *m; // esi
  int v38; // eax
  unsigned int *v39; // eax
  unsigned int *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int v43; // ebp
  int v44; // ebx
  BuildingClass *v45; // edi
  unsigned int *i; // esi
  int v47; // eax
  unsigned int *v48; // eax
  int *v49; // eax
  int v50; // kr1C_4
  int v51; // eax
  int j; // edi
  BuildingClass *v53; // esi
  unsigned int *v54; // eax
  int v55; // edx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // dl
  char v58; // al
  int v59; // [esp+1Ch] [ebp-54h]
  char v62[4]; // [esp+34h] [ebp-3Ch] BYREF
  unsigned char *v63; // [esp+38h] [ebp-38h]
  unsigned char *v64; // [esp+3Ch] [ebp-34h]
  int v65[3]; // [esp+40h] [ebp-30h] BYREF
  int v66; // [esp+4Ch] [ebp-24h]
  unsigned int v67[2]; // [esp+54h] [ebp-1Ch] BYREF
  int v69[2]; // [esp+60h] [ebp-10h] BYREF
  int v70; // [esp+68h] [ebp-8h]

  result = (int)this->Type; /*0x454dbb*/
  if ( result ) /*0x454dc7*/
  {
    v3 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))this->ptr_0 + 18))(this, v69); /*0x454dd6*/
    (*((unsigned short *)&(v66))) = *v3 / 256; /*0x454de9*/
    (*(((unsigned short *)&(v66)) + 1)) = v3[1] / 256; /*0x454dfd*/
    cloakState = this->cloakState; /*0x454e02*/
    if ( cloakState == 1 ) /*0x454e0b*/
    {
      Translucency = this->Translucency; /*0x454e11*/
      if ( Translucency < 15 ) /*0x454e19*/
      {
        v6 = Translucency + 1; /*0x454e1f*/
        this->Translucency = v6; /*0x454e23*/
        if ( v6 == 1 || v6 == 6 || v6 == 11 ) /*0x454e31*/
          this->needsRedraw = 1; /*0x454e33*/
        v7 = v6; /*0x454e3a*/
        if ( v6 == 15 && (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int))this->ptr_0 + 26))(this, 0, 0) == 5 ) /*0x454e4e*/
          v7 = 16; /*0x454e50*/
        Anims = this->Anims; /*0x454e55*/
        v9 = 21; /*0x454e5b*/
        do /*0x454e70*/
        {
          if ( *Anims ) /*0x454e60*/
            *(unsigned char *)(*Anims + 376) = v7; /*0x454e66*/
          ++Anims; /*0x454e6c*/
          --v9; /*0x454e6f*/
        }
        while ( v9 ); /*0x454e70*/
        if ( this->Translucency == 15 ) /*0x454e79*/
        {
          ambientParticles = this->ambientParticles; /*0x454e7f*/
          this->cloakState = 2; /*0x454e85*/
          if ( ambientParticles ) /*0x454e91*/
          {
            (*((void (__thiscall **)(ParticleSystemClass *, int))ambientParticles->ptr_0 + 8))(ambientParticles, 1); /*0x454e9b*/
            this->ambientParticles = 0; /*0x454e9e*/
          }
        }
      }
    }
    else if ( cloakState == 3 ) /*0x454eac*/
    {
      v11 = this->Translucency; /*0x454eb2*/
      if ( v11 >= 0 ) /*0x454eba*/
      {
        if ( v11 > 0 ) /*0x454ec0*/
          this->Translucency = v11 - 1; /*0x454ec4*/
        v12 = this->Translucency; /*0x454eca*/
        if ( !v12 || v12 == 5 || v12 == 10 ) /*0x454eda*/
          this->needsRedraw = 1; /*0x454edc*/
        v13 = v12; /*0x454ee3*/
        if ( v12 == 15 && (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int))this->ptr_0 + 26))(this, 0, 0) == 5 ) /*0x454ef7*/
          v13 = 16; /*0x454ef9*/
        v14 = this->Anims; /*0x454efe*/
        v15 = 21; /*0x454f04*/
        do /*0x454f19*/
        {
          if ( *v14 ) /*0x454f09*/
            *(unsigned char *)(*v14 + 376) = v13; /*0x454f0f*/
          ++v14; /*0x454f15*/
          --v15; /*0x454f18*/
        }
        while ( v15 ); /*0x454f19*/
        if ( !this->Translucency ) /*0x454f1b*/
        {
          v16 = this->ambientParticles; /*0x454f29*/
          this->cloakState = 0; /*0x454f2f*/
          if ( !v16 ) /*0x454f37*/
          {
            NaturalParticleSystemLocation = this->Type->NaturalParticleSystemLocation; /*0x454f49*/
            if ( *NaturalParticleSystemLocation != g_BuildingClassPool /*0x454f6c*/
              || this->Type->NaturalParticleSystemLocation[1] != dword_89C84C
              || this->Type->NaturalParticleSystemLocation[2] != dword_89C850 )
            {
              v18 = *NaturalParticleSystemLocation; /*0x454f75*/
              v19 = this->Type->NaturalParticleSystemLocation[1]; /*0x454f77*/
              v70 = this->Type->NaturalParticleSystemLocation[2]; /*0x454f7f*/
              v20 = (int *)operator new(0x100u); /*0x454f88*/
              if ( v20 ) /*0x454f8f*/
              {
                v21 = this->location[1]; /*0x454fa9*/
                v65[0] = v18 + this->location[0]; /*0x454fac*/
                v22 = this->location[2]; /*0x454fb4*/
                v67[0] = this->location[0]; /*0x454fbb*/
                v65[1] = v19 + v21; /*0x454fbf*/
                v23 = this->location[1]; /*0x454fc3*/
                v24 = this->location[2]; /*0x454fc6*/
                v65[2] = v70 + v22; /*0x454fd5*/
                v67[1] = v23; /*0x454fd9*/
                v24 = v24; /*0x454fdd*/
                v25 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( v67); /*0x454fe1*/
                v26 = ParticleSystemClass::Constructor( /*0x454fff*/
                        v20,
                        this->Type->NaturalParticleSystem[0],
                        v65,
                        (int)v25,
                        0,
                        &g_BuildingClassPool,
                        0);
              }
              else
              {
                v26 = 0; /*0x45500a*/
              }
              this->ambientParticles = (ParticleSystemClass *)v26; /*0x45500c*/
            }
          }
        }
      }
    }
    if ( this->cloakState == 2 && (*((uint8_t (__thiscall **)(BuildingClass *))this->ptr_0 + 169))(this) ) /*0x45501f*/
      (*((void (__thiscall **)(BuildingClass *, unsigned int))this->ptr_0 + 279))(this, 0); /*0x45502f*/
    result = this->cloakState; /*0x455035*/
    if ( !result ) /*0x45503d*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->ptr_0 + 168))(this); /*0x455043*/
      if ( (unsigned char)result ) /*0x45504b*/
        result = (*((int (__thiscall **)(BuildingClass *, unsigned int))this->ptr_0 + 280))(this, 0); /*0x455053*/
    }
    (*((unsigned char *)&(result))) = this->HasCloakingData; /*0x455059*/
    if ( (unsigned char)result ) /*0x455061*/
    {
      result = (int)this->Type; /*0x455067*/
      if ( result->CloakGenerator ) /*0x45506d*/
      {
        dword_89DDC0 = dword_89DDC0; /*0x45507f*/
        Draw_field_00 = dword_89DDC0->Draw_field_00; /*0x45508b*/
        *(unsigned int *)v62 = this->owner->relatedTagsCount; /*0x455092*/
        v30 = Draw_field_00->vt_slot_124(dword_89DDC0); /*0x455099*/
        result = v30 - (v30 >> 31); /*0x45509c*/
        v30 = v30; /*0x45509e*/
        v31 = v30 / 2; /*0x4550aa*/
        (*((unsigned char *)&(result))) = this->CloakRadius; /*0x4550ae*/
        if ( this->HasCloakingData <= 0 ) /*0x4550b4*/
        {
          if ( (unsigned char)result ) /*0x455275*/
          {
            this->CloakRadius = result - 1; /*0x45528b*/
            dword_89DDC0->vt_slot_24(); /*0x455295*/
            v41 = (int *)dword_89DDC0->vt_slot_120(&v24, 0); /*0x4552a3*/
            Draw::Ellipse(dword_89DDC0, v31, v31, this->Type->CloakRadiusInCells, *v41, v41[1], v41[2], v41[3], 2); /*0x4552d3*/
            if ( this->CloakRadius ) /*0x4552d8*/
            {
              v42 = (int *)dword_89DDC0->vt_slot_120(v69); /*0x4552ed*/
              Draw::Ellipse(dword_89DDC0, v31, v31, this->CloakRadius, *v42, v42[1], v42[2], v42[3], 1); /*0x455317*/
            }
            v64 = (unsigned char *)dword_89DDC0->vt_slot_92(0, 0); /*0x45532d*/
            result = v66 - v31; /*0x455337*/
            (*(((unsigned short *)&(v67[0])) + 1)) = (*(((unsigned short *)&(v66)) + 1)) - v31; /*0x455339*/
            (*((unsigned short *)&(v67[0]))) = v66 - v31; /*0x455340*/
            v63 = 0; /*0x455345*/
            if ( v30 > 0 ) /*0x45534d*/
            {
              v43 = *(unsigned int *)v62; /*0x455353*/
              while ( 2 ) /*0x455357*/
              {
                v44 = 0; /*0x455357*/
                do /*0x45544d*/
                {
                  v35 = *v64++ == 0; /*0x455360*/
                  if ( v35 ) /*0x455366*/
                  {
                    (*((unsigned short *)&(v65[0]))) = v44 + (*((unsigned short *)&(v67[0]))); /*0x45537d*/
                    (*(((unsigned short *)&(v65[0])) + 1)) = (unsigned short)v63 + (*(((unsigned short *)&(v67[0])) + 1)); /*0x455382*/
                    *(unsigned int *)v62 = v65[0]; /*0x45538f*/
                    v45 = (BuildingClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj( /*0x45539e*/
                                             (CellCoord *)&DataGlobal_87F7E8,
                                             (int16_t *)v62);
                    if ( (uint8_t)Cell::HasOccupierBit((Cell *)v45, v43) ) /*0x4553a3*/
                    {
                      BuildingClass::updateOccupiedState(v45, v43); /*0x4553b3*/
                      for ( i = (unsigned int *)v45->radioLinks[1]; i; i = (unsigned int *)i[12] ) /*0x4553c0*/
                      {
                        v47 = (*(int (__thiscall **)(unsigned int *))(*i + 44))(i); /*0x4553c6*/
                        if ( v47 == 1 || v47 == 15 || v47 == 2 ) /*0x4553d6*/
                          (*(void (__thiscall **)(unsigned int *))(*i + 1056))(i); /*0x4553dc*/
                      }
                      v48 = Cell::IsBridge((Cell *)v45); /*0x4553eb*/
                      if ( v48 ) /*0x4553f2*/
                      {
                        if ( *(unsigned int *)(v48[135] + 48) == v43 ) /*0x4553fd*/
                        {
                          v49 = (int *)v48->vt_slot_72(v69); /*0x455408*/
                          v50 = *v49; /*0x455418*/
                          v51 = v49[1] / 256; /*0x455429*/
                          if ( (uint16_t)(v50 / 256) == *(unsigned short *)v62 /*0x455440*/
                            && (unsigned short)v51 == *(unsigned short *)&v62[2]
                            && !(unsigned char)v64 )
                          {
                            ++this->CloakRadius; /*0x4555c0*/
                            return (int)this; /*0x4555b0*/
                          }
                        }
                      }
                    }
                  }
                  ++v44; /*0x45544a*/
                }
                while ( v44 < v30 ); /*0x45544d*/
                result = (int)++v63; /*0x45545b*/
                if ( (int)v63 < v30 ) /*0x455462*/
                  continue; /*0x455462*/
                break;
              }
            }
            (*((unsigned char *)&(result))) = this->CloakRadius; /*0x45546c*/
            if ( !(unsigned char)result ) /*0x455474*/
            {
              result = stru_A8EB00.ptr_0[20]; /*0x45547a*/
              for ( j = 0; j < stru_A8EB00.ptr_0[20]; ++j ) /*0x455483*/
              {
                v53 = *(BuildingClass **)(stru_A8EB00.ptr_0[17] + 4 * j); /*0x45548f*/
                if ( v53->isAliveFlag ) /*0x455492*/
                {
                  if ( v53 != this ) /*0x4554a2*/
                  {
                    if ( v53->Type->CloakGenerator ) /*0x4554ae*/
                    {
                      if ( (*((uint8_t (__thiscall **)(unsigned int))v53->ptr_0 + 212))(*(unsigned int *)(stru_A8EB00.ptr_0[17] + 4 * j)) ) /*0x4554c0*/
                      {
                        if ( !v53->HasCloakingData ) /*0x4554ce*/
                        {
                          v54 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))v53->ptr_0 + 18))(v53, v69); /*0x4554e5*/
                          (*((unsigned short *)&(v67[0]))) = *v54 / 256; /*0x4554f8*/
                          (*(((unsigned short *)&(v67[0])) + 1)) = v54[1] / 256; /*0x455510*/
                          v55 = this->Type->CloakRadiusInCells + 2; /*0x45553a*/
                          if ( (int16_t)((*(((unsigned short *)&(v66)) + 1)) - (*(((unsigned short *)&(v67[0])) + 1))) * (int16_t)((*(((unsigned short *)&(v66)) + 1)) - (*(((unsigned short *)&(v67[0])) + 1))) /*0x455551*/
                             + (int16_t)(v66 - (*((unsigned short *)&(v67[0])))) * (int16_t)(v66 - (*((unsigned short *)&(v67[0])))) < 4 * v55 * v55 )
                          {
                            Type = v53->Type; /*0x455553*/
                            if ( Type->CloakGenerator ) /*0x455559*/
                            {
                              CloakRadius = v53->CloakRadius; /*0x455563*/
                              v53->HasCloakingData = 1; /*0x455569*/
                              if ( CloakRadius == Type->CloakRadiusInCells ) /*0x455576*/
                                v53->CloakRadius = 0; /*0x455578*/
                              v53->needsRedraw = 1; /*0x45557f*/
                            }
                            v58 = v53->CloakRadius; /*0x455586*/
                            if ( v58 ) /*0x45558e*/
                              v53->CloakRadius = v58 - 1; /*0x455592*/
                          }
                        }
                      }
                    }
                  }
                }
                result = stru_A8EB00.ptr_0[20]; /*0x455598*/
              }
            }
          }
          else
          {
            this->HasCloakingData = 0; /*0x455277*/
          }
        }
        else if ( (unsigned char)result == this->Type->CloakRadiusInCells ) /*0x4550c6*/
        {
          this->HasCloakingData = 0; /*0x4550c8*/
        }
        else
        {
          this->CloakRadius = result + 1; /*0x4550dd*/
          dword_89DDC0->vt_slot_24(0); /*0x4550e7*/
          v32 = (int *)dword_89DDC0->vt_slot_120(v69, 1); /*0x4550f5*/
          Draw::Ellipse(dword_89DDC0, v31, v31, this->CloakRadius, *v32, v32[1], v32[2], v32[3], v59); /*0x45511f*/
          v63 = (unsigned char *)dword_89DDC0->vt_slot_92(0); /*0x455135*/
          v33 = 0; /*0x455141*/
          (*((unsigned short *)&(v65[0]))) = v66 - v31; /*0x455143*/
          result = v30; /*0x455148*/
          for ( (*(((unsigned short *)&(v65[0])) + 1)) = (*(((unsigned short *)&(v66)) + 1)) - v31; v33 < v30; ++v33 ) /*0x455153*/
          {
            for ( k = 0; k < v30; ++k ) /*0x455159*/
            {
              v35 = *v63++ == 0; /*0x455162*/
              if ( !v35 ) /*0x455168*/
              {
                (*(((unsigned short *)&(v64)) + 1)) = v33 + (*(((unsigned short *)&(v65[0])) + 1)); /*0x45517b*/
                (*((unsigned short *)&(v64))) = k + (*((unsigned short *)&(v65[0]))); /*0x455180*/
                v64 = v64; /*0x45518d*/
                v36 = (BuildingClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((int16_t *)&v64); /*0x4551a0*/
                if ( !(uint8_t)Cell::HasOccupierBit((Cell *)v36, v62[0]) ) /*0x4551a5*/
                {
                  BuildingClass::checkOccupant(v36, v62[0]); /*0x4551b9*/
                  for ( m = (unsigned int *)v36->radioLinks[1]; m; m = (unsigned int *)m[12] ) /*0x4551c6*/
                  {
                    v38 = (*(int (__thiscall **)(unsigned int *))(*m + 44))(m); /*0x4551cc*/
                    if ( v38 == 1 || v38 == 15 || v38 == 2 ) /*0x4551dc*/
                      (*(void (__thiscall **)(unsigned int *))(*m + 1056))(m); /*0x4551e2*/
                  }
                  v39 = Cell::IsBridge((Cell *)v36); /*0x4551f1*/
                  if ( v39 ) /*0x4551f8*/
                  {
                    if ( v39->u32_21C->ptr_30 == *(unsigned int *)v62 ) /*0x455207*/
                    {
                      v40 = (unsigned int *)v39->vt_slot_72(v69); /*0x455212*/
                      if ( (unsigned char *)(((unsigned int)(unsigned short)(*v40 / 256)) | ((unsigned int)(unsigned short)(v40[1] / 256) << 16)) == v64 ) /*0x45523b*/
                      {
                        --this->CloakRadius; /*0x455263*/
                        return (int)this; /*0x455270*/
                      }
                    }
                  }
                }
              }
              result = v30; /*0x455244*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4550cf*/
}
/* ASM:
mov     eax, [ecx+408h]
test    eax, eax
jz      short loc_465D6B
mov     eax, [ecx+0EF0h]
mov     ecx, 1
shl     eax, 2
cmp     (&dword_8192B8)[eax], ecx
jnz     short loc_465D6B
cmp     (&dword_819310)[eax], ecx
jnz     short loc_465D6B
mov     eax, ecx
retn
; ---------------------------------------------------------------------------

loc_465D6B:                             ; CODE XREF: BuildingClass__Is1x1AndUndeployable_BuildingMassSelectable+8↑j
; BuildingClass__Is1x1AndUndeployable_BuildingMassSelectable+1E↑j ...
xor     eax, eax
retn
*/

// 0x5b17b0













// IDA 0x449410: get bounding size extension
// 0x449410
/* ASM:
push    esi
mov     esi, ecx
call    ObjectClass__GetBoundingSize
mov     esi, [esi+520h]
mov     cl, [esi+16C5h]
mov     dl, [esi+16B7h]
neg     cl
sbb     ecx, ecx
pop     esi
and     ecx, 20h
neg     dl
sbb     edx, edx
and     edx, 10h
sub     ecx, edx
add     eax, ecx
retn
*/

// ============================================================
// Section 15: Health / Stats
// ============================================================

// 0x5f5c60

/* ASM:
sub     esp, 0Ch
add     ecx, 9Ch
push    ebx
push    esi
push    edi
mov     eax, [ecx]
xor     ebx, ebx
mov     [esp+18h+var_C], eax
mov     edx, [ecx+4]
mov     [esp+18h+var_8], edx
mov     eax, [ecx+8]
lea     ecx, [esp+18h+var_C]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+1Ch+var_4], eax
call    Coord__To_Cell
mov     edi, eax
xor     esi, esi

loc_455BC5:                             ; CODE XREF: BuildingClass__GetFWFlags+7F↓j
push    esi
mov     ecx, edi
call    Cell__GetNeighbourContent
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      short loc_455C09
mov     edx, [eax+520h]
mov     cl, [edx+16C0h]
test    cl, cl
jz      short loc_455C09
mov     cl, [eax+81h]
test    cl, cl
jnz     short loc_455C09
mov     cl, [eax+90h]
test    cl, cl
jz      short loc_455C09
mov     ecx, esi
mov     eax, 1
sar     ecx, 1
shl     eax, cl
or      ebx, eax

loc_455C09:                             ; CODE XREF: BuildingClass__GetFWFlags+46↑j
; BuildingClass__GetFWFlags+56↑j ...
add     esi, 2
cmp     esi, 8
jl      short loc_455BC5
pop     edi
mov     eax, ebx
pop     esi
pop     ebx
add     esp, 0Ch
retn
*/

// 0x639bc0

// 0x6551c0

// 0x726400
void BuildingClass::ProcessUpgradeEffects()
{
  bool v3; // zf
  int v4; // ecx
  int v5; // edx
  int *v6; // ecx
  int *p_occupant; // esi
  CellClass *v8; // eax
  unsigned char *v9; // ecx
  void *ptr_8; // [esp-4h] [ebp-28h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int GroundHeight; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v3 = *a2 == g_MissionQueueFrame.localVariables[227]; /*0x5b17c6*/
  v12 = *a2; /*0x5b17c8*/
  v4 = a2[1]; /*0x5b17cc*/
  v4 = v4; /*0x5b17cf*/
  v5 = a2[2]; /*0x5b17d3*/
  GroundHeight = v5; /*0x5b17d6*/
  if ( !v3 || v4 != g_MissionQueueFrame.localVariables[228] || v5 != g_MissionQueueFrame.localVariables[229] ) /*0x5b17ea*/
  {
    GroundHeight = Cell::GetGroundHeight(&v12); /*0x5b1801*/
    if ( (((Coord *)&DataGlobal_87F7E8)->To_Cell( a2)->flags[0] & 0x100) != 0 ) /*0x5b1813*/
    {
      v6 = (int *)((char *)this->ptr_C + 156); /*0x5b1818*/
      v15 = *v6; /*0x5b1820*/
      v16 = v6[1]; /*0x5b1827*/
      if ( v6[2] > GroundHeight + 2 * g_MissionQueueFrame.localVariables[243] + g_MissionQueueFrame.localVariables[243] ) /*0x5b183e*/
        GroundHeight += g_MissionQueueFrame.localVariables[240]; /*0x5b1846*/
    }
  }
  p_occupant = &this->occupant; /*0x5b1853*/
  if ( this->occupant != g_MissionQueueFrame.localVariables[227] /*0x5b1871*/
    || this->owningHouseIndex != g_MissionQueueFrame.localVariables[228]
    || this->fallRate != g_MissionQueueFrame.localVariables[229] )
  {
    this->ptr_12->ClearCellOccupied(&this->occupant); /*0x5b1879*/
  }
  ptr_8 = this->ptr_C; /*0x5b1886*/
  v8 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( &v12); /*0x5b188d*/
  if ( !(uint8_t)CrateClass::ProcessPickup((CrateClass *)v8, (int)ptr_8) || (v9 = this->ptr_C, v9[129]) ) /*0x5b18a0*/
  {
    *p_occupant = g_MissionQueueFrame.localVariables[227]; /*0x5b18ca*/
    this->owningHouseIndex = g_MissionQueueFrame.localVariables[228]; /*0x5b18d1*/
    this->fallRate = g_MissionQueueFrame.localVariables[229]; /*0x5b18da*/
    v9 = this->ptr_C; /*0x5b18dd*/
    if ( !v9[144] ) /*0x5b18e8*/
      return 0; /*0x5b18e8*/
  }
  else
  {
    *p_occupant = v12; /*0x5b18b0*/
    this->owningHouseIndex = v4; /*0x5b18b6*/
    this->fallRate = GroundHeight; /*0x5b18bd*/
  }
  if ( *p_occupant != g_MissionQueueFrame.localVariables[227] /*0x5b190d*/
    || this->owningHouseIndex != g_MissionQueueFrame.localVariables[228]
    || this->fallRate != g_MissionQueueFrame.localVariables[229] )
  {
    (*(void (__thiscall **)(unsigned char *, int *))(*(unsigned int *)v9 + 240))(v9, &this->occupant); /*0x5b1912*/
    return 1; /*0x5b1920*/
  }
  v15 = *((unsigned int *)v9 + 39); /*0x5b192f*/
  v16 = *((unsigned int *)v9 + 40); /*0x5b1936*/
  v17 = *((unsigned int *)v9 + 41); /*0x5b193d*/
  (*(void (__thiscall **)(unsigned char *, int *))(*(unsigned int *)v9 + 240))(v9, &v15); /*0x5b1948*/
  return 0; /*0x5b1918*/
}
/* asm BuildingClass::ProcessUpgradeEffects @0x726400
; BuildingClass::ProcessUpgradeEffects
726400  sub esp, 0Ch
726403  push ebp
726404  push esi
726405  mov esi, ecx
726407  push edi
726408  xor ebp, ebp
72640a  mov eax, [esi+24h]
72640d  mov edi, [eax+0ACh]
726413  test edi, edi
726415  jz loc_7264B7
72641b  push ebx
72641c  cmp dword ptr [edi+2Ch], 0Dh
726420  jnz short loc_726453
726422  mov ecx, dword_A8ED84
726428  mov eax, [edi+34h]
72642b  lea edx, [esi+34h]
72642e  lea eax, [eax+eax*2]
726431  mov [edx], ecx
726433  mov ecx, [esp+1Ch+var_8]
726437  lea eax, [eax+eax*4]
72643a  mov [edx+4], ecx
72643d  mov ecx, ebp
72643f  mov [edx+8], eax
726442  mov eax, [esi+40h]
726445  mov edx, 1
72644a  shl edx, cl
72644c  not edx
72644e  and eax, edx
726450  mov [esi+40h], eax
726453  cmp dword ptr [edi+2Ch], 33h ; '3'
726457  jnz short loc_7264AA
726459  mov eax, [edi+34h]
72645c  push eax; int
72645d  mov eax, dword_A8B230
726462  push 0; int
726464  lea ecx, [eax+218h]; this
72646a  call Random__Range
72646f  mov ecx, eax
726471  mov eax, [edi+34h]
726474  cdq
726475  mov ebx, dword_A8ED84
72647b  sub eax, edx
72647d  mov edx, [esp+1Ch+var_8]
726481  sar eax, 1
726483  add eax, ecx
726485  lea ecx, [esi+34h]
726488  mov [esi+34h], ebx
72648b  lea eax, [eax+eax*2]
72648e  mov [ecx+4], edx
726491  lea eax, [eax+eax*4]
726494  mov [ecx+8], eax
726497  mov eax, 1
72649c  mov ecx, ebp
72649e  shl eax, cl
7264a0  mov ecx, [esi+40h]
7264a3  not eax
7264a5  and ecx, eax
7264a7  mov [esi+40h], ecx
7264aa  mov edi, [edi+28h]
7264ad  inc ebp
7264ae  test edi, edi
7264b0  jnz loc_72641C
7264b6  pop ebx
7264b7  pop edi
7264b8  pop esi
7264b9  pop ebp
7264ba  add esp, 0Ch
7264bd  retn
*/
// 0x7265c0

// 0x459c20
void BuildingClass::ProcessUpgradeTargeting()
{
  int result; // eax
  char v5; // bl
  int i; // esi
  int Owner; // eax

  if ( !this->deployAnim || this->nextObject ) /*0x7265ca*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x726620*/
  }
  else
  {
    result = this->objectTypeFlags; /*0x7265d1*/
    v5 = 0; /*0x7265d6*/
    for ( i = this->lastCommands; i; i = *(unsigned int *)(i + 40) ) /*0x7265e0*/
    {
      Owner = HouseClass::FindOwner(*(void **)(*(unsigned int *)(this->objectTypeFlags + 164) + 180)); /*0x7265fd*/
      if ( TerrainClass::ProcessUpdate(i, this, Owner, a2, (unsigned int *)this, (int)&a3) ) /*0x726605*/
        v5 = 1; /*0x72660e*/
    }
    (*((unsigned char *)&(result))) = v5; /*0x726618*/
  }
  return result; /*0x72661c*/
}