#include "structure/building.hpp"
#include "entity/anim.hpp"  // AnimClass::SetField95/8 pending blocks (owner-fixed 2026-09-07)
#include "house/house.hpp"
#include "structure/globals_structure.hpp"
#include "ui/message_list.hpp"
#include "core/globals_core.hpp"
#include "misc/audio_ext.hpp"
#include "system/map.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "render/light_source.hpp"
#include "system/factory.hpp"
#include "type/building_type.hpp"
#include "core/reverse_marker.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"
#include "object/techno.hpp"
#include "house/house.hpp"
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
#include "e4/classes/ScriptAction_e4.hpp"  // G42.33c2: GetWaypointCoords 0x6E6AB0 (2-param w/ default)
#include <mmsystem.h>  // G42.33c2: timeGetTime
#include "e4/classes/ScriptAction_e4.hpp"  // G42.33c2: GetWaypointCoords 0x6E6AB0 (2-param w/ default)
#include <mmsystem.h>  // G42.33c2: timeGetTime
#include "e4/classes/ScriptAction_e4.hpp"  // G42.33c2: GetWaypointCoords 0x6E6AB0 (2-param w/ default)
// G42.33c14: global_funcs.hpp NOT included wholesale -- its CRT-named
// decls (_toupper/_tolower, lines 5701/5752) collide with ctype macros
// predefined via windows.h (forced /FI ida_compat.h) -> C2062. Declare
// the five fns this TU actually needs instead:
int PlayVocClass(int a1, int a2, int a3, int a4);  // 0x750920
int StartAudioControllerAt(int a1, int a2, int a3);  // 0x7509e0
int PlayAudioAt2(int a1, int a2, int a3);  // 0x750e20
void globalHelper_051EE0(int a1, int a2, int a3);  // 0x451ee0
#include <mmsystem.h>  // G42.33c2: timeGetTime


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

// IDA 0x5657A0 -- global fn (mis-modeled as virtual member in misc_ext.hpp).
struct CellCoord {
    static CellClass* To_CellObj(void* map, const void* coords);  // 0x5657A0
};

// raw static-call receivers keep their raw cast targets; signatures mirror
// the raw call sites exactly (receiver-first).
struct Cell {
    static char __stdcall CreateCrater(int x, int y, int w, int h, char flags);  // 0x6d2790
    static int SetRadar(void* map, __int16* cell);   // mis-attributed (this=map)
    static void* IsBridge(void* cell);               // 0x47c520
    static int IsPassable(void* cell);
    static int IsBuildable(void* cell);              // 0x6B25C0
    static int HasOccupierBit(void* cell, char bit);
    static void* GetNeighbourContent(void* cell, int dir);  // 0x481810
    static int GetGroundHeight(void* cell);
};

struct Radar {
    static int Update(void* map, __int16* cell);
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

struct Rect {
    int left; int top; int right; int bottom;  // raw local vars (v31/v61/v69)
    static int* Construct(void* self, int x, int y, int w);
    static int Union(const void* a, const void* b, const void* out);
    static void Set(void* self, int a, int b, int c, int d);
};

struct Coord2D {
    unsigned char __pad_0[4];
    unsigned int Coord2D_field_0x04;
    static int* Sub(void* self, void* a, void* b);
};

struct BuildingPlacement {
    static int ValidateType(void* self, int type, int mode);
};

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
struct RawBlock_A83D50 { unsigned int __pad_34[64]; };
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
struct RawBlock_LoadQueue { unsigned int Buildup[8]; unsigned int TechnoTypeClass[64]; };
struct RawBlock_DDrawMgr { unsigned int scenario[256]; };
extern RawBlock_DDrawMgr g_DDrawSurfaceManager_raw; // data: 0x89F518
extern RawBlock_LoadQueue g_BuildingLoadQueue_Array_raw; // data: 0xB0E840


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
  int16_t v6; // cx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  void *v12; // edi
  signed int v13; // eax
  unsigned int *v14; // ecx
  int v15; // eax
  int v16; // eax
  int Vtable3; // [esp+18h] [ebp+4h]

  this->TechnoClass::TechnoClass(); /*0x43b74b*/
  this->Type =(gamemd::BuildingTypeClass *)a2; /*0x43b756*/
  this->Factory = 0; /*0x43b75c*/
  this->C4Timer = g_CurrentFrame; /*0x43b76b*/
  this->C4Timer.TimeLeft = 0; /*0x43b771*/
  this->BuildingClass_field_int_534 = -1; /*0x43b777*/
  this->BuildingClass_field_int_538 = -1; /*0x43b77d*/
  this->OwnerCountryIndex = 0; /*0x43b783*/
  this->C4AppliedBy = 0; /*0x43b789*/
  this->BuildingClass_field_544 = 0; /*0x43b78f*/
  this->FirestormAnim = 0; /*0x43b795*/
  this->PsiWarnAnim = 0; /*0x43b79b*/
  this->BuildingClass_field_timer_550 = g_CurrentFrame; /*0x43b7a7*/
  this->BuildingClass_field_timer_550.TimeLeft = 0; /*0x43b7ad*/
  this->RequiresDamageFires = 0; /*0x43b7b3*/
  this->FiringSWType = -1; /*0x43b7b9*/
  this->SuperWeaponToken = -1; /*0x43b7bf*/
  this->Spotlight = 0; /*0x43b7c5*/
  g_CurrentFrame = g_CurrentFrame; /*0x43b7cb*/
  this->GateTimer.data[2] = 0; /*0x43b7d1*/
  this->GateTimer.data[0] = g_CurrentFrame; /*0x43b7d7*/
  this->GateTimer.data[3] = 0; /*0x43b7dd*/
  this->LightSource = 0; /*0x43b7e3*/
  this->LaserFenceFrame = 0; /*0x43b7e9*/
  this->FirestormWallFrame = 0; /*0x43b7ef*/
  this->RepairProgress.Value = 0; /*0x43b7f5*/
  this->RepairProgress.Timer = 0; /*0x43b7fb*/
  // G42.33: binary timer/flags region 0x628-0x63B (q628..q638) has no
  // hand-tree members in the semantic reconstruction -- omitted
  this->BuildingClass_field_rect_63C.X = dword_89C808; /*0x43b82f*/
  this->BuildingClass_field_rect_63C.Y = dword_89C80C; /*0x43b83b*/
  this->BuildingClass_field_rect_63C.Width = dword_89C810; /*0x43b844*/
  this->BuildingClass_field_rect_63C.Height = dword_89C814; /*0x43b84d*/
  this->BuildingClass_field_coord_64C.X = g_BuildingClassPool; /*0x43b85c*/
  this->BuildingClass_field_coord_64C.Y = dword_89C84C; /*0x43b868*/
  this->BuildingClass_field_coord_64C.Z = dword_89C850; /*0x43b871*/
  this->BuildingClass_field_int_658 = 0; /*0x43b876*/
  this->BuildingClass_field_65C = 0; /*0x43b87c*/
  this->HasPower = 1; /*0x43b882*/
  this->IsOverpowered = 0; /*0x43b889*/
  this->RegisteredAsPoweredUnitSource = 0; /*0x43b88f*/
  this->SupportingPrisms = 0; /*0x43b895*/
  this->HasExtraPowerBonus = 0; /*0x43b89b*/
  this->HasExtraPowerDrain = 0; /*0x43b8ab*/
  // G42.33: binary raw-inits the two DynamicVectorClass<InfantryClass*>
  // sub-objects @0x66C/@0x684 (vfptr+Items=0+Cap=0+IsInit=1+IsAlloc=0+Count=0+
  // CapacityIncrement=10) -- equivalent to fresh default-construct + assign
  this->Overpowerers = DynamicVectorClass<InfantryClass*>(); /*0x43b8ca*/
  this->Occupants = DynamicVectorClass<InfantryClass*>(); /*0x43b8f5*/
  this->FiringOccupantIndex = 0; /*0x43b907*/
  this->WasOnline = 0; /*0x43b90d*/
  this->ShowRealName = 0; /*0x43b913*/
  this->BeingProduced = 0; /*0x43b919*/
  this->ShouldRebuild = 0; /*0x43b91f*/
  this->HasEngineer = 0; /*0x43b925*/
  g_CurrentFrame = g_CurrentFrame; /*0x43b92b*/
  this->CashProductionTimer.TimeLeft = 0; /*0x43b931*/
  this->CashProductionTimer.StartTime = g_CurrentFrame; /*0x43b937*/
  this->BuildingClass_field_bool_6DC = 1; /*0x43b93d*/
  this->BuildingClass_field_bool_6DD = 0; /*0x43b944*/
  this->NeedsRepairs = 0; /*0x43b94d*/
  this->C4Applied = 0; /*0x43b953*/
  this->NoCrew = 0; /*0x43b95a*/
  this->BuildingClass_field_bool_6E1 = 0; /*0x43b960*/
  this->BuildingClass_field_bool_6E2 = 0; /*0x43b966*/
  this->HasBeenCaptured = false;
  this->ActuallyPlacedOnMap = 0; /*0x43b972*/
  this->BuildingClass_field_bool_6E5 = 0; /*0x43b978*/
  this->IsDamaged = (unsigned int)(0);
  this->IsFogged = 0; /*0x43b984*/
  this->IsBeingRepaired = 0; /*0x43b98a*/
  this->BuildingClass_field_bool_6E9 = 0; /*0x43b990*/
  this->StuffEnabled = 1; /*0x43b996*/
  this->HasCloakingData = 0; /*0x43b99d*/
  this->CloakRadius = 0; /*0x43b9a3*/
  this->Translucency = 0; /*0x43b9a9*/
  this->StorageFilledSlots = 0; /*0x43b9af*/
  this->SecretProduction = 0; /*0x43b9b5*/
  this->ColorAdd = ColorStruct();
  this->ColorAdd.G = 0; /*0x43b9c1*/
  this->ColorAdd.B = 0; /*0x43b9c7*/
  this->BuildingClass_field_int_6FC = 0; /*0x43b9cd*/
  this->BuildingClass_field_short_700 = 1000; /*0x43b9d3*/
  this->UpgradeLevel = 0; /*0x43b9dc*/
  this->GateStage = -1; /*0x43b9e2*/
  this->PrismStage = (PrismChargeState)0; /*0x43b9e8*/
  this->DelayBeforeFiring = 0; /*0x43b9ee*/
  this->BunkerState = 0; /*0x43b9f4*/
  *(unsigned int *)this =(unsigned int)(&BuildingClass_Vtable); /*0x43b9fa*/
  // G42.33: MI sub-vptr installs @this+4/+8/+0xC (BuildingClass_Vtable2/3/4)
  // have no hand-tree members (single-vptr model) -- omitted
  this->GenerateUniqueID(0); /*0x43ba15 -- binary: sub-object@+4 receiver*/
  this->Upgrades[0] = 0; /*0x43ba22*/
  IDA_LOBYTE(v6) = 0; /*0x43ba28*/
  this->Upgrades[1] = 0; /*0x43ba2a*/
  this->Upgrades[2] = 0; /*0x43ba30*/
  this->PrismTargetCoords = CoordStruct(); /*0x43ba36*/
  v7 =(int)this->Type; /*0x43ba38*/
  this->PrismTargetCoords.Y = 0; /*0x43ba3e*/
  this->PrismTargetCoords.Z = 0; /*0x43ba43*/
  if ( v7 ) /*0x43ba46*/
  {
    IDA_HIBYTE(v6) = *(unsigned char *)(v7 + 5904); /*0x43ba48*/
    IDA_LOWORD(a3) = v6; /*0x43ba52*/
    this->primaryFacing.Raw = (uint32_t)(unsigned short)a3; /*0x43ba5e -- binary: FacingClass::Update @0x370*/
  }
  std::memset(this->Anims, 0, sizeof(this->Anims)); /*0x43ba70 -- binary memset @0x55C len 0x54*/
  std::memset(this->DamageFireAnims, 0, sizeof(this->DamageFireAnims)); /*0x43ba7d -- @0x5C8 len 0x20*/
  std::memset(this->AnimStates, 0, sizeof(this->AnimStates)); /*0x43ba7f -- dword writes 0x5B0-0x5C4*/
  this->Audio7.Init(); /*0x43baa9*/
  this->Audio8.Init(); /*0x43bab4*/
  IDA_LOWORD(a3) = 0x4000; /*0x43babd*/
  this->primaryFacing.Raw = (uint32_t)(unsigned short)a3; /*0x43bacb -- binary: FacingClass::Update @0x370*/
  this->RepairProgress.Value = 0; /*0x43bad0*/
  if ( g_BuildingProductionState < dword_A8EB48 /*0x43bb08*/
    || (byte_A8EB4D || !dword_A8EB48)
    && dword_A8EB54 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(BuildingClass_Array + 8))(
         (int *)&BuildingClass_Array,
         dword_A8EB54 + dword_A8EB48,
         0) )
  {
    v8 = g_BuildingProductionState++; /*0x43bb15*/
    *((unsigned int *)g_BuildingClass_InstanceCount + v8) =(unsigned int)this; /*0x43bb24*/
  }
  this->Update(); /*0x43bb29 -- decl 0x442C40, 0-arg*/
  if ( dword_B0F650 < dword_B0F648 /*0x43bb62*/
    || (byte_B0F64D || !dword_B0F648)
    && dword_B0F654 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0F640 + 8))(
         (int *)&dword_B0F640,
         dword_B0F654 + dword_B0F648,
         0) )
  {
    v9 = dword_B0F650++; /*0x43bb6f*/
    *((unsigned int *)dword_B0F644 + v9) =(unsigned int)this; /*0x43bb7e*/
  }
  if ( g_BuildingTypeInstanceCount < dword_B0F5C0 /*0x43bbb5*/
    || (byte_B0F5C5 || !dword_B0F5C0)
    && dword_B0F5CC > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingInstanceCount + 8))(
         &g_BuildingInstanceCount,
         dword_B0F5CC + dword_B0F5C0,
         0) )
  {
    v10 = g_BuildingTypeInstanceCount++; /*0x43bbc2*/
    *((unsigned int *)g_BuildingClassPoolManager + v10) =(unsigned int)this; /*0x43bbd1*/
  }
  Vtable3 = this->GetVtable3(0); /*0x43bbe0 -- binary: sub-object@+4 receiver*/
  if ( (int)(g_BuildingLoadQueue_Count + 1) <= g_BuildingLoadQueue_Capacity ) /*0x43bbec*/
    goto LABEL_29; /*0x43bbec*/
  if ( g_BuildingLoadQueue_Capacity ) /*0x43bbf4*/
  {
    v11 = g_BuildingLoadQueue_Capacity; /*0x43bbfd*/
    if ( g_BuildingLoadQueue_Capacity < 0 ) /*0x43bc01*/
      goto LABEL_30; /*0x43bc01*/
  }
  else
  {
    v11 = 10; /*0x43bbf6*/
  }
  a3 = v11 + g_BuildingLoadQueue_Capacity; /*0x43bc09*/
  v12 = (void *)RA2_OPNEW(8 * (v11 + g_BuildingLoadQueue_Capacity)); /*0x43bc16*/
  if ( v12 ) /*0x43bc1d*/
  {
    v13 = 0; /*0x43bc27*/
    --a3; /*0x43bc2a*/
    if ( (int)g_BuildingLoadQueue_Count > 0 ) /*0x43bc36*/
    {
      do /*0x43bc57*/
      {
        v14 = (unsigned int *)((char *)v12 + 8 * v13++); /*0x43bc3e*/
        *((unsigned int *)v12 + 2 * v13 - 2) = *v14; /*0x43bc44*/
        *((unsigned int *)v12 + 2 * v13 - 1) = v14[1]; /*0x43bc4b*/
      }
      while ( v13 < (int)g_BuildingLoadQueue_Count ); /*0x43bc57*/
    }
    RA2_OPDEL(v12); /*0x43bc60*/
    v12 = v12; /*0x43bc6f*/
    g_BuildingLoadQueue_Capacity += v11; /*0x43bc75*/
    g_BuildingLoadQueue_Active = 0; /*0x43bc7a*/
  LABEL_29:
    *((unsigned int *)v12 + 2 * g_BuildingLoadQueue_Count) = Vtable3; /*0x43bc80*/
    *((unsigned int *)v12 + 2 * g_BuildingLoadQueue_Count + 1) =(unsigned int)this; /*0x43bc9e*/
    g_BuildingLoadQueue_Dirty = 0; /*0x43bca8*/
    ++g_BuildingLoadQueue_Count; /*0x43bcae*/
  }
  LABEL_30:
  v15 =(int)this->Type; /*0x43bcb3*/
  if ( v15 ) /*0x43bcbb*/
  {
    v16 = *(unsigned int *)(v15 + 6016); /*0x43bcbd*/
    if ( v16 < 1 ) /*0x43bcc6*/
      v16 = 1; /*0x43bcc8*/
    RadioClass::SetLinkCount(v16); /*0x43bcd0*/
return (int)this; /*0x43bcd5*/
  }
  else
  {
    RadioClass::SetLinkCount(1); /*0x43bce2*/
return (int)this; /*0x43bce7*/
  }
}
// 0x43bcf0
int BuildingClass::Dtor()
{
  int *Audio8_2; // edi
  int v3; // edx
  LightSourceClass *LightSource; // ecx
  LightSourceClass *v5; // ecx
  int v6; // eax
  int v7; // eax
  int *DamageFireAnims; // edi
  int v9; // ebx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // cl
  int SuperWeapon_v; // eax
  int v13; // eax
  int SuperWeapon2; // eax
  int v15; // eax
  HouseClass *owner; // ecx
  FactoryClass *Factory; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  signed int v21; // eax
  int v22; // ecx
  char *i; // eax
  unsigned int *v24; // eax
  int FiringOccupantIndex; // edi
  int v26; // ebx
  void *v27; // eax
  void *v28; // eax
  int Vtable3; // [esp+18h] [ebp-4h] BYREF

  *(unsigned int *)this = (unsigned int)(&BuildingClass_Vtable); /*0x43bcfd*/
  // G42.33: MI sub-vptr installs @this+4/+8/+0xC omitted (hand-tree single-vptr)
  ((Mixer *)&this->Audio8)->ReleaseChannel(0); /*0x43bd1a*/
  ((Mixer *)&this->Audio7)->ReleaseChannel(0); /*0x43bd27*/
  ((AudioFileClass *)&this->Audio8)->Release(); /*0x43bd2e*/
  ((AudioFileClass *)&this->Audio7)->Release(); /*0x43bd35*/
  LightSource = this->LightSource; /*0x43bd3a*/
  if ( LightSource ) /*0x43bd44*/
  {
    ((MapClass *)LightSource)->ScrollOnce(0); /*0x43bd47*/
    v5 = this->LightSource; /*0x43bd4c*/
    if ( v5 ) /*0x43bd54*/
      (*((void (**)(LightSourceClass *, int)) * (void ***)v5 + 8))(v5, 1); /*0x43bd5a*/
    this->LightSource = 0; /*0x43bd5d*/
  }
  IDA_LOBYTE(v3) = 1; /*0x43bd63*/
  AbstractClass::AnnounceExpiredPointer((int)this, v3); /*0x43bd67*/
  ((BuildingClass*)this)->Sell(); /*0x43bd6e*/
  Vtable3 = (int)this; /*0x43bd83*/
  v6 = (*(int (**)(int *, int *))(stru_A8EB00_raw.ObjectTypeClass[16] + 16))( /*0x43bd87*/
         (int *)&stru_A8EB00_raw.ObjectTypeClass[16],
         &Vtable3);
  if ( v6 != -1 ) /*0x43bd8d*/
    ((Vector *)&stru_A8EB00_raw.ObjectTypeClass[16])->RemoveAt(v6); /*0x43bd95*/
  Vtable3 = (int)this; /*0x43bdaa*/
  v7 = (*(int (**)(int *, int *))(*(unsigned int *)&FootClass_Array + 16))((int *)&FootClass_Array, &Vtable3); /*0x43bdae*/
  if ( v7 != -1 ) /*0x43bdb4*/
    ((Vector *)&FootClass_Array)->RemoveAt(v7); /*0x43bdbc*/
  this->ClearAnims(-2); /*0x43bdc5 -- decl aligned to truth int(int) G42.33 ph2*/
  ((BuildingTypeClass*)this->Type)->IsPowered(); /*0x43bdd0*/
  DamageFireAnims =(int *)this->DamageFireAnims; /*0x43bdd5*/
  v9 = 8; /*0x43bddb*/
  do /*0x43bdf4*/
  {
    if ( *DamageFireAnims ) /*0x43bde0*/
    {
      (*(void (**)(int))(*(unsigned int *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43bde8*/
      *DamageFireAnims = 0; /*0x43bdee*/
    }
    ++DamageFireAnims; /*0x43bdf0*/
    --v9; /*0x43bdf3*/
  }
  while ( v9 ); /*0x43bdf4*/
  if ( byte_A8E9A0 ) /*0x43bdfd*/
  {
    Type = this->Type; /*0x43bdff*/
    if ( Type ) /*0x43be07*/
    {
      if ( Type->CloakGenerator ) /*0x43be09*/
      {
        CloakRadius = this->CloakRadius; /*0x43be13*/
        this->HasCloakingData = -1; /*0x43be19*/
        if ( !CloakRadius ) /*0x43be22*/
          this->CloakRadius = Type->CloakRadiusInCells; /*0x43be2a*/
        ((unsigned int *)this)[0] = 1; /*0x43be34*/
        this->CloakRadius = 1; /*0x43be3b*/
        ((BuildingClass*)this)->CleanupOccupation(); /*0x43be42*/
      }
    }
  }
  SuperWeapon_v = this->Type->SuperWeapon; /*0x43be50*/
  if ( (SuperWeapon_v == -1 /*0x43bee8*/
     || (v13 = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)dword_A83CBC + SuperWeapon_v) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow(&this->owner->SuperWeaponsAvailable, *(unsigned int *)(v13 + 3576)))
    && this->Type->SuperWeapon != -1
    || ((SuperWeapon2 = this->Type->SuperWeapon2, SuperWeapon2 == -1)
     || (v15 = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)dword_A83CBC + SuperWeapon2) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow(&this->owner->SuperWeaponsAvailable, *(unsigned int *)(v15 + 3576)))
    && this->Type->SuperWeapon2 != -1 )
  {
    UpdateSuperWeaponsOwnedHouseClass(this->owner); /*0x43bef0 -- ASM: ecx=[esi+0x21C]*/
  }
  if ( byte_A8E9A0 ) /*0x43befc*/
  {
    if ( this->health != this->BuildingClass_field_544 ) /*0x43bf09 -- ASM [esi+0x6C] vs [esi+0x544]*/
      IDA_LOBYTE(this->owner->HouseClass_field_timer_B.TimeLeft) = 1; /*0x43bf11 -- ASM [owner+0x5778] = timer_B+8*/
    if ( byte_A8E9A0 && this->Type ) /*0x43bf21*/
    {
      owner = this->owner; /*0x43bf29 -- ASM [esi+0x21C]*/
      if ( owner ) /*0x43bf31*/
        owner->DecrementUnitCount(this); /*0x43bf34 -- decl void*(a1) 0x4FF550*/
      ((BuildingClass*)this)->Sell(); /*0x43bf3b*/
    }
  }
  Factory = this->Factory; /*0x43bf40*/
  if ( Factory ) /*0x43bf48*/
    (*((void (**)(FactoryClass *, int))(*(void **)Factory) + 8))(Factory, 1); /*0x43bf4e -- binary: Factory vtable slot 8*/
  this->Factory = 0; /*0x43bf51*/
  Vtable3 = (int)this; /*0x43bf67*/
  v18 = (*(int (**)(int *, int *))(((unsigned int *)&g_BuildingLoadQueue_Array)[0] + 16))( /*0x43bf6b*/
          (int *)((char *)&g_BuildingLoadQueue_Array),
          &Vtable3);
  if ( v18 != -1 ) /*0x43bf70*/
    ((DynamicVectorClass<void *> *)&g_BuildingLoadQueue_Array)->RemoveItem(v18); /*0x43bf78*/
  Vtable3 = (int)this; /*0x43bf8d*/
  v19 = (*(int (**)(int *, int *))(g_BuildingLoadQueue_Array_raw.Buildup[0] + 16))( /*0x43bf91*/
          (int *)g_BuildingLoadQueue_Array_raw.Buildup,
          &Vtable3);
  if ( v19 != -1 ) /*0x43bf96*/
    ((DynamicVectorClass<void *> *)(g_BuildingLoadQueue_Array_raw.Buildup))->RemoveItem(v19); /*0x43bf9e*/
  Vtable3 = this->GetVtable3(0); /*0x43bfac -- binary: receiver this+4 sub-object*/
  v20 = ((BuildingTypeClass *)(uintptr_t)&g_BuildingLoadQueue_Array)->Dequeue(); /*0x43bfba -- decl 0x41C590 is 0-param; binary pushes &Vtable3 (decl gap)*/
  if ( v20 ) /*0x43bfc1*/
  {
    v21 = (signed int)(v20 - (unsigned int)g_BuildingLoadQueue_Array_raw.TechnoTypeClass) >> 3; /*0x43bfc9*/
    if ( v21 != -1 ) /*0x43bfce*/
    {
      v22 = v21 + 1; /*0x43bfd0*/
      for ( i = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x43bfda*/
            v22 < (int)((char *)&g_BuildingLoadQueue_Array);
            i = (char *)((char *)&g_BuildingLoadQueue_Array) )
      {
        v24 = (unsigned int *)((char *)g_BuildingLoadQueue_Array_raw.TechnoTypeClass + 8 * v22++); /*0x43bfe2*/
        *(v24 - 2) = *v24; /*0x43bfe8*/
        *(v24 - 1) = v24[1]; /*0x43bfee*/
      }
      ((unsigned int *)&g_BuildingLoadQueue_Array)[0] =(unsigned int)i - 1; /*0x43c003*/
      *((unsigned int *)g_BuildingLoadQueue_Array_raw.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x43c008*/
      *((unsigned int *)g_BuildingLoadQueue_Array_raw.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = 0; /*0x43c018*/
      ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x43c01c*/
    }
  }
  this->Type = 0; /*0x43c022*/
  ((unsigned int *)this)[0] = 0; /*0x43c02e*/
  FiringOccupantIndex = this->FiringOccupantIndex; /*0x43c03a*/
  this->Overpowerers.Clear(); /*0x43c03d -- binary: DVC vt slot 3*/
  this->Overpowerers.SetCapacity(FiringOccupantIndex, 0); /*0x43c048 -- binary: DVC vt slot 2*/
  v26 = this->Occupants.Capacity; /*0x43c051*/
  this->Occupants.Clear(); /*0x43c05f -- binary: DVC vt slot 3*/
  this->Occupants.SetCapacity(v26, 0); /*0x43c069 -- binary: DVC vt slot 2*/
  v27 = (void *)this->Occupants.Items; /*0x43c06c*/
  // G42.33: binary downgrades the two DVC vfptrs to VectorClass vftable
  // (0x43c073/0x43c098) -- not expressible on class members in C++; omitted
  if ( v27 && this->Occupants.IsAllocated ) /*0x43c07b*/
  {
    RA2_OPDEL(v27); /*0x43c083*/
    this->Occupants.Items = 0; /*0x43c08b*/
  }
  this->Occupants.IsAllocated = false; /*0x43c08e*/
  this->Occupants.Capacity = 0; /*0x43c092*/
  v28 = (void *)this->Overpowerers.Items; /*0x43c095*/
  if ( v28 && this->Overpowerers.IsAllocated ) /*0x43c0a3*/
  {
    RA2_OPDEL(v28); /*0x43c0ab*/
    this->Overpowerers.Items = 0; /*0x43c0b3*/
  }
  this->Overpowerers.IsAllocated = false; /*0x43c0b8*/
  this->FiringOccupantIndex = 0; /*0x43c0bc*/
// 0x6f4500
  this->TechnoClass::~TechnoClass(); /*0x43c0c4*/
  return (int)this; /*0x43c0c4*/
}
// 0x459f20
int BuildingClass::ScalarDtor()
{
  char v3; // [esp+8h] [ebp+4h]

  this->Dtor(); /*0x459f23*/
  if ( (v3 & 1) != 0 ) /*0x459f2d*/
    RA2_OPDEL(this); /*0x459f30*/
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
    ((MapClass *)LightSource)->ScrollOnce(0); /*0x452498*/
  Type = this->Type; /*0x45249d*/
  if ( Type->CloakGenerator ) /*0x4524a3*/
  {
    CloakRadius = this->CloakRadius; /*0x4524ad*/
    this->HasCloakingData = -1; /*0x4524b3*/
    if ( !CloakRadius ) /*0x4524bc*/
      this->CloakRadius = Type->CloakRadiusInCells; /*0x4524c4*/
    ((unsigned int *)this)[0] = 1; /*0x4524ca*/
  }
  if ( ((unsigned int *)Type)[0] && ((unsigned int *)this)[0] ) /*0x4524db*/
    (*((void (**)(BuildingClass *))this->vtable1 + 262))(this); /*0x4524e9*/
  if ( this->Type->LaserFencePost ) /*0x4524f5*/
    ((BuildingClass*)(this))->RepairPlacement(0); /*0x452503*/
  v5 = 0; /*0x452508*/
  Anims = (int *)this->Anims; /*0x45250a*/
  do /*0x452538*/
  {
    if ( ((unsigned char *)this->Type)[0xF70 + v5 + 28] ) /*0x452516*/
    {
      if ( *Anims ) /*0x452521*/
        ((AnimClass *)*Anims)->SetField8(0); /*0x452527 -- recv is AnimClass*; arg raw-elided*/
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
    return; /*0x459e88 -- raw body returned HRESULT in void override*/
  *v2 = 237448646; /*0x459e96*/
  v2[1] = 298949647; /*0x459e9e*/
  v2[2] = -1610610249; /*0x459ea7*/
  v2[3] = unk_7E96AC; /*0x459eb0*/
  return; /*0x459e8d*/
}
// 0x459e80 (DUPDEF second raw def -- commented G42.33 ph5)
//DUPDEF     int __thiscall BuildingClass::Destroyed(void *a1)
//DUPDEF     {
//DUPDEF       unsigned int *v2; // [esp+8h] [ebp+8h]
//DUPDEF       if ( !v2 )
//DUPDEF         return;
//DUPDEF       *v2 = 237448646;
//DUPDEF       v2[1] = 298949647;
//DUPDEF       v2[2] = -1610610249;
//DUPDEF       v2[3] = unk_7E96AC;
//DUPDEF       return;
//DUPDEF }
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
  BuildingTypeClass *Type; // ecx
  int result; // eax
  unsigned short *v4; // ebp
  unsigned int *v5; // eax
  unsigned short *v6; // eax
  int16_t v7; // dx
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
  int16_t v23[2]; // [esp+10h] [ebp-40h] BYREF
  int v24; // [esp+14h] [ebp-3Ch]
  int16_t v25[2]; // [esp+18h] [ebp-38h] BYREF
  int v26; // [esp+1Ch] [ebp-34h]
  unsigned int v27[2]; // [esp+20h] [ebp-30h] BYREF
  char v28[4]; // [esp+28h] [ebp-28h] BYREF
  char v29[4]; // [esp+2Ch] [ebp-24h] BYREF
  int v30[4]; // [esp+30h] [ebp-20h] BYREF
  Rect v31; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x441f65*/
  Type = this->Type; /*0x441f73*/
  v27[0] = (unsigned int)v1; /*0x441f79*/
  result = ((BuildingClass*)((BuildingClass *)Type))->GetPlacementCoords((int *)v29, (unsigned int *)v28); /*0x441f7d*/
  if ( (unsigned char)result ) /*0x441f84*/
  {
    v4 = (unsigned short *)(*((int (**)(BuildingClass *, unsigned int))v1->vtable1 + 66))(v1, 0); /*0x441f9a*/
    v5 = (unsigned int *)(*((int (**)(BuildingClass *, int *))v1->vtable1 + 43))(v1, v30); /*0x441fa1*/
    IDA_LOWORD(v24) = *v5 / 256; /*0x441fb7*/
    IDA_HIWORD(v24) = v5[1] / 256; /*0x441fcb*/
    *(unsigned int *)v23 = v24; /*0x441fd4*/
    while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x441fe6*/
    {
      v6 = v4; /*0x441fe8*/
      v4 += 2; /*0x441fea*/
      v7 = v23[1] + v6[1]; /*0x441ff9*/
      IDA_LOWORD(v24) = v23[0] + *v6; /*0x441ffe*/
      IDA_HIWORD(v24) = v7; /*0x442007*/
      *(unsigned int *)v25 = v24; /*0x442016*/
      v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v25); /*0x44201f*/
      ((BuildingClass*)((BuildingClass *)v8))->CreatePlacementCrater(); /*0x442023*/
      *((unsigned int *)v8 + 17) = 239; /*0x44202c*/
      *((unsigned int *)v8 + 16) = 0; /*0x442033*/
      House::AnnounceUpgrade((House *)v8, -1); /*0x44203a*/
      Cell::SetRadar((Cell *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v8 + 18); /*0x442048*/
      Radar::Update((Radar *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v8 + 18); /*0x442053*/
      AbstractClass::ClearTargetToMeClearManagerTarget((int)v8); /*0x44205a*/
    }
    v9 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v23); /*0x442077*/
    ((unsigned int *)v9)[1] = (int)v1->Type; /*0x442082*/
    PlacementRect = ((BuildingClass*)(v9))->GetPlacementRect(v30); /*0x442091*/
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
    v27[1] = v14 - (unsigned int)DSurface_ViewBounds.field_4; /*0x44215a*/
    v19 = Rect::Construct(&v31, (int)v27, v18, v16); /*0x44215e*/
    Cell::CreateCrater(*v19, v19[1], v19[2], v19[3], 0); /*0x442184*/
    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v23); /*0x442193*/
    result = Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v20); /*0x44219f*/
  }
  IDA_LOBYTE(result) = ((unsigned char *)v1->Type)[0x1714 + 83]; /*0x4421aa*/
  if ( (unsigned char)result ) /*0x4421b2*/
  {
    v21 = (unsigned int *)(*((int (**)(BuildingClass *, int *))v1->vtable1 + 43))(v1, v30); /*0x4421bd*/
    v23[0] = *v21 / 256; /*0x4421d3*/
    v22 = v1->Type; /*0x4421e4*/
    v23[1] = v21[1] / 256; /*0x4421ed*/
    if ( ((unsigned char *)v22)[0x1714 + 85] ) /*0x4421f2*/
// 0x56bec0
      return ((BuildingClass*)((BuildingClass *)&stru_87F5F0_raw.__pad_58[416]))->SearchPlacement(*(int *)v23, 0); /*0x442208*/
    else
// 0x56bec0
      return ((BuildingClass*)((BuildingClass *)&stru_87F5F0_raw.__pad_58[416]))->SearchPlacement(*(int *)v23, 20); /*0x442221*/
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
    ((BuildingClass*)(this))->ClearAnims(9); /*0x43eedf*/
    if ( a2 != -1 ) /*0x43eee7*/
    {
      strcpy(v5, *(char **)Type); /*0x43ef17*/
      v3 = strlen((char *)&asc_818D7C) + 1; /*0x43ef38*/
      qmemcpy(&v5[strlen(v5)], (char *)&asc_818D7C, v3); /*0x43ef45*/
      v4 = strlen(v5); /*0x43ef5f*/
      v5[v4] = a2 + 66; /*0x43ef62*/
      v5[v4 + 1] = 0; /*0x43ef66*/
      ((BuildingClass*)(this))->PlayAnim(v3, v5, 9, 0, 0, 0); /*0x43ef72*/
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
  int v2; // edx
  int result; // eax
  int v4; // ebx
  int v5; // edx
  int v6; // ebx
  TechnoClass *v7; // [esp+38h] [ebp+4h]
  int v8; // [esp+3Ch] [ebp+8h]
  int v9; // [esp+40h] [ebp+Ch] BYREF

  SizeMax = (int)((ra2::game::IPersistStream *)v7)->GetSizeMax((ULARGE_INTEGER *)v8); /*0x4541a8*/
  if ( SizeMax < 0 ) /*0x4541ac*/
    return SizeMax; /*0x4541ac*/
  v2 = *(unsigned int *)v8; /*0x4541b8*/
  v9 = ((int *)&v7[1].armorMultiplier)[1]; /*0x4541c4*/
  result = (*(int (**)(int, int *, int, unsigned int))(v2 + 16))(v8, &v9, 4, 0); /*0x4541c8*/
  if ( result < 0 ) /*0x4541cd*/
    return result; /*0x4541cd*/
  v4 = 0; /*0x4541d3*/
  if ( v9 <= 0 ) /*0x4541d7*/
  {
  LABEL_6:
    v5 = *(unsigned int *)v8; /*0x4541fa*/
    v9 = *(int *)&v7[1].radarFlashTimer; /*0x45420c*/
    result = (*(int (**)(int, int *, int, unsigned int))(v5 + 16))(v8, &v9, 4, 0); /*0x454210*/
    if ( result < 0 ) /*0x454215*/
      return result; /*0x454215*/
    v6 = 0; /*0x45421b*/
    if ( v9 > 0 ) /*0x45421f*/
    {
      while ( 1 ) /*0x454232*/
      {
        result = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)v8 + 16))( /*0x454232*/
                   v8,
                   *(int *)&v7[1].idleActionTimer + 4 * v6,
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
    result = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)v8 + 16))(v8, *(int *)&v7[1].veterancy + 4 * v4, 4, 0); /*0x4541ea*/
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
  int16_t v20; // dx
  int v21; // edx
  char v22; // bl
  char v23; // al
  int v24; // ecx
  char v25; // al
  char v26; // bl
  int v27; // eax
  char v28; // al
  unsigned int i; // esi
  int v30; // eax
  int16_t v31; // dx
  unsigned char *v32; // eax
  int v33; // [esp-Ch] [ebp-E8h]
  struct tagRECT *v34; // [esp-8h] [ebp-E4h]
  int v35; // [esp-8h] [ebp-E4h]
  const RECT *v36; // [esp-4h] [ebp-E0h]
  LPRECT v37; // [esp-4h] [ebp-E0h]
  int16_t *v38; // [esp-4h] [ebp-E0h]
  const RECT *v39; // [esp+0h] [ebp-DCh]
  const RECT *v40; // [esp+0h] [ebp-DCh]
  const RECT *v41; // [esp+4h] [ebp-D8h]
  int16_t v42[2]; // [esp+10h] [ebp-CCh] BYREF
  int16_t v43[2]; // [esp+14h] [ebp-C8h] BYREF
  char *v44; // [esp+18h] [ebp-C4h]
  int v45; // [esp+1Ch] [ebp-C0h]
  int v46; // [esp+20h] [ebp-BCh]
  int occupant; // [esp+24h] [ebp-B8h] BYREF
  int16_t v48[2]; // [esp+28h] [ebp-B4h] BYREF
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
      occupant = ((unsigned int *)this)[0]; /*0x48065e*/
      *(unsigned int *)v48 = *CellStruct_Add((CellStruct *)&occupant, &v52, (unsigned short *)(4 * (v3 & 7) + 9041544)); /*0x480684*/
      v4 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x48068d*/
    }
    else
    {
      v4 = (char *)this; /*0x480654*/
    }
    if ( !a2 || *v2 != -1 ) /*0x48069d*/
    {
      StartCoords = House::GetStartCoords((House *)v4, v58); /*0x4806ab*/
      PlacementRect = ((BuildingClass*)((BuildingClass *)v4))->GetPlacementRect(v56); /*0x4806b4*/
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
    v36 = (const RECT *)((BuildingClass*)((BuildingClass *)v4))->GetPlacementRect(v60); /*0x480713*/
    v34 = (struct tagRECT *)House::GetStartCoords((House *)v4, v59); /*0x48071c*/
    ((CellClass*)((CellClass *)v4))->GetScreenRect((int *)v57); /*0x480724*/
    Rect::Union(v34, v36, v39); /*0x480732*/
    v9 = (int *)Rect::Union(v37, v40, v41); /*0x480745*/
    v51[1] = DSurface_ViewBounds.field_4; /*0x480753*/
    v10 = *v9; /*0x480757*/
    v11 = 0; /*0x480759*/
    v51[0] = DSurface_ViewBounds.field_0; /*0x48075c*/
    v12 = v9[1]; /*0x480760*/
    *(unsigned int *)v50.__pad_0 = v10; /*0x480763*/
    v50.Coord2D_field_0x04 = v12; /*0x480767*/
    v35 = v9[3]; /*0x480775*/
    v33 = v9[2]; /*0x480776*/
    v13 = Coord2D::Sub(&v50, (int *)v53, v51); /*0x480781*/
    v14 = Rect::Construct(&v61, (int)v13, v33, v35); /*0x48078e*/
    Cell::CreateCrater(*v14, v14[1], v14[2], v14[3], 0); /*0x4807b4*/
    v15 = v4 + 36; /*0x4807b9*/
    ((BuildingClass*)((int *)&stru_87F5F0_raw.__pad_58[416]))->AddUpgrade((BuildingTypeClass *)(v4 + 36)); /*0x4807c2*/
    v16 = *((unsigned int *)v4 + 17); /*0x4807c7*/
    if ( v16 != -1 && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)stru_A83D50_raw.__pad_34 + 4 * v16) + 680) ) /*0x4807dc*/
    {
      *(unsigned int *)v42 = 0; /*0x4807ea*/
      v17 = (int *)&unk_81CC70; /*0x4807ee*/
      do /*0x48086e*/
      {
        if ( (unsigned int)*v17 < 8 ) /*0x4807f9*/
        {
          v19 = *v17 & 7; /*0x480801*/
          *(unsigned int *)v43 = *(unsigned int *)v15; /*0x480804*/
          v20 = g_DDrawSurfaceManager_raw.scenario[v19 + 82]; /*0x480808*/
          IDA_LOWORD(v19) = IDA_HIWORD(g_DDrawSurfaceManager_raw.scenario[v19 + 82]); /*0x48081a*/
          IDA_LOWORD(v46) = v43[0] + v20; /*0x48081e*/
          IDA_HIWORD(v46) = v43[1] + v19; /*0x48082d*/
          *(unsigned int *)v43 = v46; /*0x480836*/
          v18 = (BuildingPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v43); /*0x48083f*/
        }
        else
        {
          v18 = (BuildingPlacement *)v4; /*0x4807fb*/
        }
        if ( (uint8_t)BuildingPlacement::ValidateType(v18, *((unsigned int *)v4 + 17), *v17) ) /*0x48084e*/
          *(unsigned int *)v42 |= 1 << v11; /*0x480860*/
        ++v17; /*0x480864*/
        ++v11; /*0x480867*/
      }
      while ( (unsigned int *)v17 < (unsigned int *)&dword_81CC80 ); /*0x48086e*/
      v22 = v42[0]; /*0x480879*/
      v23 = v4[286] & 0xF0; /*0x48087d*/
      *(unsigned int *)v42 = *((unsigned int *)v4 + 19); /*0x48087f*/
      v24 = *((unsigned int *)v4 + 17); /*0x480883*/
      v25 = v22 | v23; /*0x480886*/
      v26 = 0; /*0x480888*/
      v4[286] = v25; /*0x48088d*/
      if ( (v24 == 2 || v24 == 26) && (v25 == 48 || v25 == 32) ) /*0x4808a0*/
      {
        IDA_LOBYTE(v21) = 1; /*0x4808a5*/
        *((unsigned int *)v4 + 17) = -1; /*0x4808a9*/
        v4[286] = 0; /*0x4808ac*/
        AbstractClass::AnnounceExpiredPointer((int)v4, v21); /*0x4808b3*/
        v26 = 1; /*0x4808b8*/
      }
      if ( !*((unsigned int *)v4 + 17) ) /*0x4808bf*/
      {
        v27 = (uint8_t)v4[286]; /*0x4808c6*/
        if ( (unsigned char)v27 == 16 || (unsigned char)v27 == 32 ) /*0x4808d2*/
        {
          IDA_LOBYTE(v21) = 1; /*0x4808d4*/
          *((unsigned int *)v4 + 17) = -1; /*0x4808d8*/
          v4[286] = 0; /*0x4808db*/
          *((unsigned int *)v4 + 20) = -1; /*0x4808e2*/
          AbstractClass::AnnounceExpiredPointer((int)v4, v21); /*0x4808e5*/
          v26 = 1; /*0x4808ea*/
        }
      }
      if ( *((unsigned int *)v4 + 17) == 1 && v4[286] == 32 ) /*0x4808f9*/
      {
        IDA_LOBYTE(v21) = 1; /*0x4808fb*/
        *((unsigned int *)v4 + 17) = -1; /*0x4808ff*/
        v4[286] = 0; /*0x480902*/
        *((unsigned int *)v4 + 20) = -1; /*0x480909*/
        AbstractClass::AnnounceExpiredPointer((int)v4, v21); /*0x48090c*/
        v26 = 1; /*0x480911*/
      }
      if ( *((unsigned int *)v4 + 17) == 22 ) /*0x480917*/
      {
        v28 = v4[286]; /*0x480919*/
        if ( v28 == 16 || v28 == 32 ) /*0x480925*/
        {
          IDA_LOBYTE(v21) = 1; /*0x480927*/
          *((unsigned int *)v4 + 17) = -1; /*0x48092b*/
          v4[286] = 0; /*0x48092e*/
          *((unsigned int *)v4 + 20) = -1; /*0x480935*/
          AbstractClass::AnnounceExpiredPointer((int)v4, v21); /*0x480938*/
          v26 = 1; /*0x48093d*/
        }
      }
      if ( *((unsigned int *)v4 + 17) == 3 && v4[286] == 16 ) /*0x48094c*/
      {
        IDA_LOBYTE(v21) = 1; /*0x48094e*/
        *((unsigned int *)v4 + 17) = -1; /*0x480952*/
        v4[286] = 0; /*0x480955*/
        *((unsigned int *)v4 + 20) = -1; /*0x48095c*/
        AbstractClass::AnnounceExpiredPointer((int)v4, v21); /*0x48095f*/
        v26 = 1; /*0x480964*/
      }
      House::AnnounceUpgrade((House *)v4, -1); /*0x480969*/
      if ( *((unsigned int *)v4 + 19) != *(unsigned int *)v42 ) /*0x480977*/
      {
        v38 = (int16_t *)(v4 + 36); /*0x48097f*/
        if ( v26 ) /*0x480985*/
        {
          Cell::SetRadar((Cell *)&stru_87F5F0_raw.__pad_58[416], v38); /*0x480987*/
          Radar::Update((Radar *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v4 + 18); /*0x480992*/
          for ( i = 0; i < 8; ++i ) /*0x480997*/
          {
            v30 = i & 7; /*0x48099e*/
            v31 = *((unsigned short *)v15 + 1) + IDA_HIWORD(g_DDrawSurfaceManager_raw.scenario[v30 + 82]); /*0x4809b1*/
            IDA_LOWORD(v45) = IDA_LOWORD(g_DDrawSurfaceManager_raw.scenario[v30 + 82]) + *(unsigned short *)v15; /*0x4809bc*/
            IDA_HIWORD(v45) = v31; /*0x4809c5*/
            *(unsigned int *)v42 = v45; /*0x4809d4*/
            v32 = (unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v42); /*0x4809d8*/
            --v32[290]; /*0x4809e9*/
          }
        }
        else
        {
          ((CellClass*)((CellClass *)&stru_87F5F0_raw.__pad_58[416]))->DetermineTileConnectivity(v38); /*0x4809f3*/
          Radar::Update((Radar *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v4 + 18); /*0x4809fe*/
        }
      }
    }
    v2 = (int *)(v44 + 4); /*0x480a07*/
    v44 += 4; /*0x480a10*/
    if ( v44 >= (char *)&byte_81CC84 ) /*0x480a14*/
      break; /*0x480a14*/
    /* this = v49; -- raw artifact: this is not assignable (0x480649) */
  }
}
// 0x44efb0
bool BuildingClass::ValidateFoundation()  // raw body 0x44efb0 follows
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
  int16_t FoundationHeight; // ax
  BuildingTypeClass *v29; // ecx
  int v30; // ebp
  int16_t v31; // di
  int16_t v32; // di
  int v33; // ebp
  void *v34; // eax
  int v35; // edi
  void *v36; // eax
  BuildingTypeClass *v37; // ecx
  int16_t FoundationWidth; // ax
  int *v39; // ecx
  int v40; // ebp
  int16_t v41; // di
  int16_t v42; // di
  int v43; // ebp
  void *v44; // eax
  int v45; // edi
  void *v46; // eax
  int *v47; // ecx
  int16_t v48[2]; // [esp+50h] [ebp-20h] BYREF
  int v49; // [esp+54h] [ebp-1Ch]
  int v50; // [esp+58h] [ebp-18h] BYREF
  int v51; // [esp+5Ch] [ebp-14h]
  int v52[3]; // [esp+64h] [ebp-Ch] BYREF
  unsigned int *v53; // [esp+74h] [ebp+4h]
  int *v54; // [esp+78h] [ebp+8h]
  int v55; // [esp+78h] [ebp+8h]
  int v56; // [esp+78h] [ebp+8h]
  int v57; // [esp+78h] [ebp+8h]
  int16_t v58; // [esp+78h] [ebp+8h]
  int v59; // [esp+78h] [ebp+8h]
  int v60; // [esp+78h] [ebp+8h]
  int v61; // [esp+78h] [ebp+8h]
  int v62; // [esp+7Ch] [ebp+Ch] BYREF

  v2 = (int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 110))(this, &v50); /*0x44efc2*/
  Type = this->Type; /*0x44efc8*/
  v4 = *v2; /*0x44efce*/
  v5 = v54; /*0x44efd0*/
  v51 = *v2; /*0x44efd4*/
  if ( Type->GDIBarracks ) /*0x44efd8*/
  {
    IDA_LOWORD(v55) = v4 + 1; /*0x44efec*/
    IDA_HIWORD(v55) = IDA_HIWORD(v51) + 2; /*0x44eff1*/
    *(unsigned int *)v48 = v55; /*0x44f004*/
    if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f008*/
    {
      v6 = *v5; /*0x44f011*/
      v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f025*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v6 + 428))(v5, v7, -1, -1, 0, 1) ) /*0x44f02d*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f042*/
        return (int)v53; /*0x44f048*/
      }
    }
  }
  if ( this->Type->NODBarracks ) /*0x44f051*/
  {
    IDA_LOWORD(v56) = v4 + 2; /*0x44f062*/
    IDA_HIWORD(v56) = IDA_HIWORD(v51) + 2; /*0x44f06e*/
    *(unsigned int *)v48 = v56; /*0x44f07d*/
    if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f081*/
    {
      v9 = *v5; /*0x44f08a*/
      v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f09e*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v9 + 428))(v5, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f0bb*/
        return (int)v53; /*0x44f0c1*/
      }
    }
  }
  if ( this->Type->YuriBarracks ) /*0x44f0ca*/
  {
    IDA_LOWORD(v57) = v4 + 2; /*0x44f0dc*/
    IDA_HIWORD(v57) = IDA_HIWORD(v51) + 1; /*0x44f0e1*/
    *(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)v48 = v57; /*0x44f0f4*/
    if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f0f8*/
    {
      v11 = *v5; /*0x44f101*/
      v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f115*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(v5, v12, -1, -1, 0, 1) ) /*0x44f11d*/
      {
  LABEL_12:
        *v53 = *(unsigned int *)v48; /*0x44f127*/
        return (int)v53; /*0x44f138*/
      }
    }
  }
  v13 = this->Type; /*0x44f13b*/
  if ( ((unsigned int *)v13)[1] && v13->WeaponsFactory ) /*0x44f14f*/
  {
    v14 = (unsigned int *)(*((int (**)(BuildingClass *, int *, int *))this->vtable1 + 42))(this, v52, v5); /*0x44f167*/
    v58 = *v14 / 256; /*0x44f17d*/
    v48[1] = v14[1] / 256; /*0x44f1a3*/
    ++v48[1]; /*0x44f1a8*/
    v48[0] = v58 + 1; /*0x44f1ae*/
    if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f1b3*/
    {
      v15 = *v5; /*0x44f1bc*/
      v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f1d0*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v15 + 428))(v5, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f1ed*/
        return (int)v53; /*0x44f1f3*/
      }
    }
    --v48[1]; /*0x44f1f6*/
    if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f205*/
    {
      v17 = *v5; /*0x44f20e*/
      v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f222*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v17 + 428))(v5, v18, -1, -1, 0, 0) ) /*0x44f22a*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f23f*/
        return (int)v53; /*0x44f245*/
      }
    }
    ++v48[1]; /*0x44f248*/
    --v48[0]; /*0x44f24d*/
    if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f25c*/
    {
      v19 = *v5; /*0x44f265*/
      v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f279*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v19 + 428))(v5, v20, -1, -1, 0, 0) ) /*0x44f281*/
      {
        *v53 = *(unsigned int *)v48; /*0x44f296*/
        return (int)v53; /*0x44f29c*/
      }
    }
  }
  if ( v62 != g_TerrainTypeTable ) /*0x44f2ab*/
  {
    if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal((int16_t *)&v62) ) /*0x44f2c5*/
    {
      v21 = *v5; /*0x44f2ce*/
      v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v62); /*0x44f2e2*/
      if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v21 + 428))(v5, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
      {
        *v53 = v62; /*0x44f2ff*/
        return (int)v53; /*0x44f305*/
      }
    }
  }
  v23 = this->Type; /*0x44f308*/
  v24 = (unsigned short *)&v23->FoundationOutside[0]; /*0x44f30e*/
  if ( v24 && !v23->Hospital ) /*0x44f31c*/
  {
    while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
    {
      v25 = v24; /*0x44f344*/
      v24 += 2; /*0x44f346*/
      IDA_LOWORD(v59) = v4 + *v25; /*0x44f358*/
      IDA_HIWORD(v59) = IDA_HIWORD(v51) + v25[1]; /*0x44f361*/
      *(unsigned int *)v48 = v59; /*0x44f36a*/
      if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f374*/
      {
        v26 = *v5; /*0x44f37d*/
        v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f391*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v26 + 428))(v5, v27, -1, -1, 0, 0) ) /*0x44f399*/
          goto LABEL_36; /*0x44f3a1*/
        IDA_LOWORD(v4) = v51; /*0x44f331*/
      }
    }
    goto LABEL_53; /*0x44f33e*/
  }
//DUPDEF   FoundationHeight = ((BuildingTypeClass*)((int *)v23))->GetFoundationHeight(0); /*0x44f3b9*/
//DUPDEF   v29 = this->Type; /*0x44f3be*/
//DUPDEF   v30 = -1; /*0x44f3c4*/
//DUPDEF   v31 = FoundationHeight; /*0x44f3c7*/
//DUPDEF   v50 = -1; /*0x44f3c9*/
  if ( ((BuildingTypeClass*)(v29))->GetFoundationWidth() >= -1 ) /*0x44f3d5*/
  {
    IDA_HIWORD(v60) = IDA_HIWORD(v51) + v31; /*0x44f3e1*/
    do /*0x44f3ef*/
    {
      v32 = v51 + v30; /*0x44f3ef*/
      IDA_LOWORD(v60) = v51 + v30; /*0x44f3f2*/
      *(unsigned int *)v48 = v60; /*0x44f3fb*/
      if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f404*/
      {
        v33 = *v5; /*0x44f40d*/
        v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f421*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v33 + 428))(v5, v34, -1, -1, 0, 1) ) /*0x44f431*/
          goto LABEL_12; /*0x44f431*/
        v30 = v50; /*0x44f437*/
      }
      IDA_LOWORD(v49) = v32; /*0x44f43f*/
      IDA_HIWORD(v49) = IDA_HIWORD(v51) - 1; /*0x44f449*/
      *(unsigned int *)v48 = v49; /*0x44f458*/
      if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f45c*/
      {
        v35 = *v5; /*0x44f465*/
        v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f479*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v35 + 428))(v5, v36, -1, -1, 0, 1) ) /*0x44f481*/
          goto LABEL_36; /*0x44f489*/
      }
      v37 = this->Type; /*0x44f48f*/
      v50 = ++v30; /*0x44f496*/
    }
    while ( v30 <= ((BuildingTypeClass*)(v37))->GetFoundationWidth() ); /*0x44f3ef*/
  }
  FoundationWidth = ((BuildingTypeClass*)(this->Type))->GetFoundationWidth(); /*0x44f4a7*/
  v39 = (int *)this->Type; /*0x44f4b2*/
  v40 = -1; /*0x44f4b8*/
  v41 = FoundationWidth; /*0x44f4bd*/
  v49 = -1; /*0x44f4bf*/
  if ( ((BuildingTypeClass*)(v39))->GetFoundationHeight(0) >= -1 ) /*0x44f4cb*/
  {
    IDA_LOWORD(v61) = v51 + v41; /*0x44f4d7*/
    while ( 1 ) /*0x44f4e5*/
    {
      v42 = IDA_HIWORD(v51) + v40; /*0x44f4e5*/
      IDA_HIWORD(v61) = IDA_HIWORD(v51) + v40; /*0x44f4e8*/
      *(unsigned int *)v48 = v61; /*0x44f4f1*/
      if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f4fa*/
      {
        v43 = *v5; /*0x44f503*/
        v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f517*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v43 + 428))(v5, v44, -1, -1, 0, 1) ) /*0x44f527*/
          goto LABEL_12; /*0x44f527*/
        v40 = v49; /*0x44f52d*/
      }
      IDA_HIWORD(v50) = v42; /*0x44f535*/
      IDA_LOWORD(v50) = v51 - 1; /*0x44f53f*/
      *(unsigned int *)v48 = v50; /*0x44f54e*/
      if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f552*/
      {
        v45 = *v5; /*0x44f55b*/
        v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f56f*/
        if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v45 + 428))(v5, v46, -1, -1, 0, 1) ) /*0x44f577*/
          break; /*0x44f577*/
      }
      v47 = (int *)this->Type; /*0x44f585*/
      v49 = ++v40; /*0x44f58e*/
      if ( v40 > ((BuildingTypeClass*)(v47))->GetFoundationHeight(0) ) /*0x44f599*/
        goto LABEL_53; /*0x44f599*/
    }
  LABEL_36:
    *v53 = *(unsigned int *)v48; /*0x44f3a3*/
    return (int)v53; /*0x44f3b4*/
  }
  LABEL_53:
  *v53 = g_TerrainTypeTable; /*0x44f59f*/
  return (int)v53; /*0x44f03f*/
  if ( this->Type->NODBarracks ) /*0x44f051*/
  {
    IDA_LOWORD(v56) = v4 + 2; /*0x44f062*/
    IDA_HIWORD(v56) = IDA_HIWORD(v51) + 2; /*0x44f06e*/
    *(unsigned int *)v48 = v56; /*0x44f07d*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f081*/
//DUPDEF     {
//DUPDEF       v9 = *v5; /*0x44f08a*/
//DUPDEF       v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f09e*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v9 + 428))(v5, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
//DUPDEF       {
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f0bb*/
//DUPDEF         return (int)v53; /*0x44f0c1*/
//DUPDEF       }
//DUPDEF     }
  }
//DUPDEF   if ( this->Type->YuriBarracks ) /*0x44f0ca*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v57) = v4 + 2; /*0x44f0dc*/
//DUPDEF     IDA_HIWORD(v57) = IDA_HIWORD(v51) + 1; /*0x44f0e1*/
//DUPDEF     *(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)v48 = v57; /*0x44f0f4*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f0f8*/
//DUPDEF     {
//DUPDEF       v11 = *v5; /*0x44f101*/
//DUPDEF       v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f115*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(v5, v12, -1, -1, 0, 1) ) /*0x44f11d*/
//DUPDEF       {
//DUPDEF   LABEL_12:
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f127*/
//DUPDEF         return (int)v53; /*0x44f138*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v13 = this->Type; /*0x44f13b*/
//DUPDEF   if ( ((unsigned char *)&v13->Crewed)[1] && v13->WeaponsFactory ) /*0x44f14f*/
//DUPDEF   {
//DUPDEF     v14 = (unsigned int *)(*((int (**)(BuildingClass *, int *, int *))this->vtable1 + 42))(this, v52, v5); /*0x44f167*/
//DUPDEF     v58 = *v14 / 256; /*0x44f17d*/
//DUPDEF     v48[1] = v14[1] / 256; /*0x44f1a3*/
//DUPDEF     ++v48[1]; /*0x44f1a8*/
//DUPDEF     v48[0] = v58 + 1; /*0x44f1ae*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f1b3*/
//DUPDEF     {
//DUPDEF       v15 = *v5; /*0x44f1bc*/
//DUPDEF       v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f1d0*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v15 + 428))(v5, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
//DUPDEF       {
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f1ed*/
//DUPDEF         return (int)v53; /*0x44f1f3*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     --v48[1]; /*0x44f1f6*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f205*/
//DUPDEF     {
//DUPDEF       v17 = *v5; /*0x44f20e*/
//DUPDEF       v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f222*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v17 + 428))(v5, v18, -1, -1, 0, 0) ) /*0x44f22a*/
//DUPDEF       {
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f23f*/
//DUPDEF         return (int)v53; /*0x44f245*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     ++v48[1]; /*0x44f248*/
//DUPDEF     --v48[0]; /*0x44f24d*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f25c*/
//DUPDEF     {
//DUPDEF       v19 = *v5; /*0x44f265*/
//DUPDEF       v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f279*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v19 + 428))(v5, v20, -1, -1, 0, 0) ) /*0x44f281*/
//DUPDEF       {
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f296*/
//DUPDEF         return (int)v53; /*0x44f29c*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( v62 != g_TerrainTypeTable ) /*0x44f2ab*/
//DUPDEF   {
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal((int16_t *)&v62) ) /*0x44f2c5*/
//DUPDEF     {
//DUPDEF       v21 = *v5; /*0x44f2ce*/
//DUPDEF       v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v62); /*0x44f2e2*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v21 + 428))(v5, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
//DUPDEF       {
//DUPDEF         *v53 = v62; /*0x44f2ff*/
//DUPDEF         return (int)v53; /*0x44f305*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v23 = this->Type; /*0x44f308*/
//DUPDEF   v24 = (unsigned short *)&v23->FoundationOutside[0]; /*0x44f30e*/
//DUPDEF   if ( v24 && !v23->Hospital ) /*0x44f31c*/
//DUPDEF   {
//DUPDEF     while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
//DUPDEF     {
//DUPDEF       v25 = v24; /*0x44f344*/
//DUPDEF       v24 += 2; /*0x44f346*/
//DUPDEF       IDA_LOWORD(v59) = v4 + *v25; /*0x44f358*/
//DUPDEF       IDA_HIWORD(v59) = IDA_HIWORD(v51) + v25[1]; /*0x44f361*/
//DUPDEF       *(unsigned int *)v48 = v59; /*0x44f36a*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f374*/
//DUPDEF       {
//DUPDEF         v26 = *v5; /*0x44f37d*/
//DUPDEF         v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f391*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v26 + 428))(v5, v27, -1, -1, 0, 0) ) /*0x44f399*/
//DUPDEF           goto LABEL_36; /*0x44f3a1*/
//DUPDEF         IDA_LOWORD(v4) = v51; /*0x44f331*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     goto LABEL_53; /*0x44f33e*/
//DUPDEF   }
//DUPDEF   FoundationHeight = ((BuildingTypeClass*)((int *)v23))->GetFoundationHeight(0); /*0x44f3b9*/
//DUPDEF   v29 = this->Type; /*0x44f3be*/
//DUPDEF   v30 = -1; /*0x44f3c4*/
//DUPDEF   v31 = FoundationHeight; /*0x44f3c7*/
//DUPDEF   v50 = -1; /*0x44f3c9*/
//DUPDEF   if ( ((BuildingTypeClass*)(v29))->GetFoundationWidth() >= -1 ) /*0x44f3d5*/
//DUPDEF   {
//DUPDEF     IDA_HIWORD(v60) = IDA_HIWORD(v51) + v31; /*0x44f3e1*/
//DUPDEF     do /*0x44f3ef*/
//DUPDEF     {
//DUPDEF       v32 = v51 + v30; /*0x44f3ef*/
//DUPDEF       IDA_LOWORD(v60) = v51 + v30; /*0x44f3f2*/
//DUPDEF       *(unsigned int *)v48 = v60; /*0x44f3fb*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f404*/
//DUPDEF       {
//DUPDEF         v33 = *v5; /*0x44f40d*/
//DUPDEF         v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f421*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v33 + 428))(v5, v34, -1, -1, 0, 1) ) /*0x44f431*/
//DUPDEF           goto LABEL_12; /*0x44f431*/
//DUPDEF         v30 = v50; /*0x44f437*/
//DUPDEF       }
//DUPDEF       IDA_LOWORD(v49) = v32; /*0x44f43f*/
//DUPDEF       IDA_HIWORD(v49) = IDA_HIWORD(v51) - 1; /*0x44f449*/
//DUPDEF       *(unsigned int *)v48 = v49; /*0x44f458*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f45c*/
//DUPDEF       {
//DUPDEF         v35 = *v5; /*0x44f465*/
//DUPDEF         v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f479*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v35 + 428))(v5, v36, -1, -1, 0, 1) ) /*0x44f481*/
//DUPDEF           goto LABEL_36; /*0x44f489*/
//DUPDEF       }
//DUPDEF       v37 = this->Type; /*0x44f48f*/
//DUPDEF       v50 = ++v30; /*0x44f496*/
//DUPDEF     }
//DUPDEF     while ( v30 <= ((BuildingTypeClass*)(v37))->GetFoundationWidth() ); /*0x44f3ef*/
//DUPDEF   }
//DUPDEF   FoundationWidth = ((BuildingTypeClass*)(this->Type))->GetFoundationWidth(); /*0x44f4a7*/
//DUPDEF   v39 = (int *)this->Type; /*0x44f4b2*/
//DUPDEF   v40 = -1; /*0x44f4b8*/
//DUPDEF   v41 = FoundationWidth; /*0x44f4bd*/
//DUPDEF   v49 = -1; /*0x44f4bf*/
//DUPDEF   if ( ((BuildingTypeClass*)(v39))->GetFoundationHeight(0) >= -1 ) /*0x44f4cb*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v61) = v51 + v41; /*0x44f4d7*/
//DUPDEF     while ( 1 ) /*0x44f4e5*/
//DUPDEF     {
//DUPDEF       v42 = IDA_HIWORD(v51) + v40; /*0x44f4e5*/
//DUPDEF       IDA_HIWORD(v61) = IDA_HIWORD(v51) + v40; /*0x44f4e8*/
//DUPDEF       *(unsigned int *)v48 = v61; /*0x44f4f1*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f4fa*/
//DUPDEF       {
//DUPDEF         v43 = *v5; /*0x44f503*/
//DUPDEF         v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f517*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v43 + 428))(v5, v44, -1, -1, 0, 1) ) /*0x44f527*/
//DUPDEF           goto LABEL_12; /*0x44f527*/
//DUPDEF         v40 = v49; /*0x44f52d*/
//DUPDEF       }
//DUPDEF       IDA_HIWORD(v50) = v42; /*0x44f535*/
//DUPDEF       IDA_LOWORD(v50) = v51 - 1; /*0x44f53f*/
//DUPDEF       *(unsigned int *)v48 = v50; /*0x44f54e*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f552*/
//DUPDEF       {
//DUPDEF         v45 = *v5; /*0x44f55b*/
//DUPDEF         v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f56f*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v45 + 428))(v5, v46, -1, -1, 0, 1) ) /*0x44f577*/
//DUPDEF           break; /*0x44f577*/
//DUPDEF       }
//DUPDEF       v47 = (int *)this->Type; /*0x44f585*/
//DUPDEF       v49 = ++v40; /*0x44f58e*/
//DUPDEF       if ( v40 > ((BuildingTypeClass*)(v47))->GetFoundationHeight(0) ) /*0x44f599*/
//DUPDEF         goto LABEL_53; /*0x44f599*/
//DUPDEF     }
//DUPDEF   LABEL_36:
//DUPDEF     *v53 = *(unsigned int *)v48; /*0x44f3a3*/
//DUPDEF     return (int)v53; /*0x44f3b4*/
//DUPDEF   }
//DUPDEF   LABEL_53:
//DUPDEF   *v53 = g_TerrainTypeTable; /*0x44f59f*/
//DUPDEF   return (int)v53; /*0x44f03f*/
//DUPDEF }
//DUPDEF   if ( this->Type->NODBarracks ) /*0x44f051*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v56) = v4 + 2; /*0x44f062*/
//DUPDEF     IDA_HIWORD(v56) = IDA_HIWORD(v51) + 2; /*0x44f06e*/
//DUPDEF     *(unsigned int *)v48 = v56; /*0x44f07d*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f081*/
//DUPDEF     {
//DUPDEF       v9 = *v5; /*0x44f08a*/
//DUPDEF       v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f09e*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v9 + 428))(v5, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
//DUPDEF       {
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f0bb*/
//DUPDEF         return (int)v53; /*0x44f0c1*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF }
//DUPDEF   if ( this->Type->YuriBarracks ) /*0x44f0ca*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v57) = v4 + 2; /*0x44f0dc*/
//DUPDEF     IDA_HIWORD(v57) = IDA_HIWORD(v51) + 1; /*0x44f0e1*/
//DUPDEF     *(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)v48 = v57; /*0x44f0f4*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f0f8*/
//DUPDEF     {
//DUPDEF       v11 = *v5; /*0x44f101*/
//DUPDEF       v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f115*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(v5, v12, -1, -1, 0, 1) ) /*0x44f11d*/
//DUPDEF       {
//DUPDEF   LABEL_12:
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f127*/
//DUPDEF         return (int)v53; /*0x44f138*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v13 = this->Type; /*0x44f13b*/
//DUPDEF   if ( ((unsigned char *)&v13->Crewed)[1] && v13->WeaponsFactory ) /*0x44f14f*/
//DUPDEF   {
//DUPDEF     v14 = (unsigned int *)(*((int (**)(BuildingClass *, int *, int *))this->vtable1 + 42))(this, v52, v5); /*0x44f167*/
//DUPDEF     v58 = *v14 / 256; /*0x44f17d*/
//DUPDEF     v48[1] = v14[1] / 256; /*0x44f1a3*/
//DUPDEF     ++v48[1]; /*0x44f1a8*/
//DUPDEF     v48[0] = v58 + 1; /*0x44f1ae*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f1b3*/
//DUPDEF     {
//DUPDEF       v15 = *v5; /*0x44f1bc*/
//DUPDEF       v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f1d0*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v15 + 428))(v5, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
//DUPDEF       {
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f1ed*/
//DUPDEF         return (int)v53; /*0x44f1f3*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     --v48[1]; /*0x44f1f6*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f205*/
//DUPDEF     {
//DUPDEF       v17 = *v5; /*0x44f20e*/
//DUPDEF       v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f222*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v17 + 428))(v5, v18, -1, -1, 0, 0) ) /*0x44f22a*/
//DUPDEF       {
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f23f*/
//DUPDEF         return (int)v53; /*0x44f245*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     ++v48[1]; /*0x44f248*/
//DUPDEF     --v48[0]; /*0x44f24d*/
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f25c*/
//DUPDEF     {
//DUPDEF       v19 = *v5; /*0x44f265*/
//DUPDEF       v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f279*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v19 + 428))(v5, v20, -1, -1, 0, 0) ) /*0x44f281*/
//DUPDEF       {
//DUPDEF         *v53 = *(unsigned int *)v48; /*0x44f296*/
//DUPDEF         return (int)v53; /*0x44f29c*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( v62 != g_TerrainTypeTable ) /*0x44f2ab*/
//DUPDEF   {
//DUPDEF     if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal((int16_t *)&v62) ) /*0x44f2c5*/
//DUPDEF     {
//DUPDEF       v21 = *v5; /*0x44f2ce*/
//DUPDEF       v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v62); /*0x44f2e2*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v21 + 428))(v5, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
//DUPDEF       {
//DUPDEF         *v53 = v62; /*0x44f2ff*/
//DUPDEF         return (int)v53; /*0x44f305*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v23 = this->Type; /*0x44f308*/
//DUPDEF   v24 = (unsigned short *)&v23->FoundationOutside[0]; /*0x44f30e*/
//DUPDEF   if ( v24 && !v23->Hospital ) /*0x44f31c*/
//DUPDEF   {
//DUPDEF     while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
//DUPDEF     {
//DUPDEF       v25 = v24; /*0x44f344*/
//DUPDEF       v24 += 2; /*0x44f346*/
//DUPDEF       IDA_LOWORD(v59) = v4 + *v25; /*0x44f358*/
//DUPDEF       IDA_HIWORD(v59) = IDA_HIWORD(v51) + v25[1]; /*0x44f361*/
//DUPDEF       *(unsigned int *)v48 = v59; /*0x44f36a*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f374*/
//DUPDEF       {
//DUPDEF         v26 = *v5; /*0x44f37d*/
//DUPDEF         v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f391*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v26 + 428))(v5, v27, -1, -1, 0, 0) ) /*0x44f399*/
//DUPDEF           goto LABEL_36; /*0x44f3a1*/
//DUPDEF         IDA_LOWORD(v4) = v51; /*0x44f331*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     goto LABEL_53; /*0x44f33e*/
//DUPDEF   }
//DUPDEF   FoundationHeight = ((BuildingTypeClass*)((int *)v23))->GetFoundationHeight(0); /*0x44f3b9*/
//DUPDEF   v29 = this->Type; /*0x44f3be*/
//DUPDEF   v30 = -1; /*0x44f3c4*/
//DUPDEF   v31 = FoundationHeight; /*0x44f3c7*/
//DUPDEF   v50 = -1; /*0x44f3c9*/
//DUPDEF   if ( ((BuildingTypeClass*)(v29))->GetFoundationWidth() >= -1 ) /*0x44f3d5*/
//DUPDEF   {
//DUPDEF     IDA_HIWORD(v60) = IDA_HIWORD(v51) + v31; /*0x44f3e1*/
//DUPDEF     do /*0x44f3ef*/
//DUPDEF     {
//DUPDEF       v32 = v51 + v30; /*0x44f3ef*/
//DUPDEF       IDA_LOWORD(v60) = v51 + v30; /*0x44f3f2*/
//DUPDEF       *(unsigned int *)v48 = v60; /*0x44f3fb*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f404*/
//DUPDEF       {
//DUPDEF         v33 = *v5; /*0x44f40d*/
//DUPDEF         v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f421*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v33 + 428))(v5, v34, -1, -1, 0, 1) ) /*0x44f431*/
//DUPDEF           goto LABEL_12; /*0x44f431*/
//DUPDEF         v30 = v50; /*0x44f437*/
//DUPDEF       }
//DUPDEF       IDA_LOWORD(v49) = v32; /*0x44f43f*/
//DUPDEF       IDA_HIWORD(v49) = IDA_HIWORD(v51) - 1; /*0x44f449*/
//DUPDEF       *(unsigned int *)v48 = v49; /*0x44f458*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f45c*/
//DUPDEF       {
//DUPDEF         v35 = *v5; /*0x44f465*/
//DUPDEF         v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f479*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v35 + 428))(v5, v36, -1, -1, 0, 1) ) /*0x44f481*/
//DUPDEF           goto LABEL_36; /*0x44f489*/
//DUPDEF       }
//DUPDEF       v37 = this->Type; /*0x44f48f*/
//DUPDEF       v50 = ++v30; /*0x44f496*/
//DUPDEF     }
//DUPDEF     while ( v30 <= ((BuildingTypeClass*)(v37))->GetFoundationWidth() ); /*0x44f3ef*/
//DUPDEF   }
//DUPDEF   FoundationWidth = ((BuildingTypeClass*)(this->Type))->GetFoundationWidth(); /*0x44f4a7*/
//DUPDEF   v39 = (int *)this->Type; /*0x44f4b2*/
//DUPDEF   v40 = -1; /*0x44f4b8*/
//DUPDEF   v41 = FoundationWidth; /*0x44f4bd*/
//DUPDEF   v49 = -1; /*0x44f4bf*/
//DUPDEF   if ( ((BuildingTypeClass*)(v39))->GetFoundationHeight(0) >= -1 ) /*0x44f4cb*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v61) = v51 + v41; /*0x44f4d7*/
//DUPDEF     while ( 1 ) /*0x44f4e5*/
//DUPDEF     {
//DUPDEF       v42 = IDA_HIWORD(v51) + v40; /*0x44f4e5*/
//DUPDEF       IDA_HIWORD(v61) = IDA_HIWORD(v51) + v40; /*0x44f4e8*/
//DUPDEF       *(unsigned int *)v48 = v61; /*0x44f4f1*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f4fa*/
//DUPDEF       {
//DUPDEF         v43 = *v5; /*0x44f503*/
//DUPDEF         v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f517*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v43 + 428))(v5, v44, -1, -1, 0, 1) ) /*0x44f527*/
//DUPDEF           goto LABEL_12; /*0x44f527*/
//DUPDEF         v40 = v49; /*0x44f52d*/
//DUPDEF       }
//DUPDEF       IDA_HIWORD(v50) = v42; /*0x44f535*/
//DUPDEF       IDA_LOWORD(v50) = v51 - 1; /*0x44f53f*/
//DUPDEF       *(unsigned int *)v48 = v50; /*0x44f54e*/
//DUPDEF       if ( (uint8_t)((LayerClass*)((LayerClass *)&stru_87F5F0_raw.__pad_58[416]))->CoordinatesLegal(v48) ) /*0x44f552*/
//DUPDEF       {
//DUPDEF         v45 = *v5; /*0x44f55b*/
//DUPDEF         v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v48); /*0x44f56f*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v45 + 428))(v5, v46, -1, -1, 0, 1) ) /*0x44f577*/
//DUPDEF           break; /*0x44f577*/
//DUPDEF       }
//DUPDEF       v47 = (int *)this->Type; /*0x44f585*/
//DUPDEF       v49 = ++v40; /*0x44f58e*/
//DUPDEF       if ( v40 > ((BuildingTypeClass*)(v47))->GetFoundationHeight(0) ) /*0x44f599*/
//DUPDEF         goto LABEL_53; /*0x44f599*/
//DUPDEF     }
//DUPDEF   LABEL_36:
//DUPDEF     *v53 = *(unsigned int *)v48; /*0x44f3a3*/
//DUPDEF     return (int)v53; /*0x44f3b4*/
//DUPDEF   }
//DUPDEF   LABEL_53:
//DUPDEF   *v53 = g_TerrainTypeTable; /*0x44f59f*/
//DUPDEF   return (int)v53; /*0x44f03f*/
//DUPDEF }
//DUPDEF   if ( this->Type->NODBarracks ) /*0x44f051*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v56) = v4 + 2; /*0x44f062*/
//DUPDEF     IDA_HIWORD(v56) = IDA_HIWORD(v51) + 2; /*0x44f06e*/
//DUPDEF     v48 = v56; /*0x44f07d*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f081*/
//DUPDEF     {
//DUPDEF       v9 = *v54; /*0x44f08a*/
//DUPDEF       v10 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f09e*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v9 + 428))(v54, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
//DUPDEF       {
//DUPDEF         *v53 = v48; /*0x44f0bb*/
//DUPDEF         return (int)v53; /*0x44f0c1*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF }
//DUPDEF   if ( this->Type->YuriBarracks ) /*0x44f0ca*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v57) = v4 + 2; /*0x44f0dc*/
//DUPDEF     IDA_HIWORD(v57) = IDA_HIWORD(v51) + 1; /*0x44f0e1*/
//DUPDEF     *(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)v48 = v57; /*0x44f0f4*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f0f8*/
//DUPDEF     {
//DUPDEF       v11 = *v54; /*0x44f101*/
//DUPDEF       v12 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f115*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(v54, v12, -1, -1, 0, 1) ) /*0x44f11d*/
//DUPDEF       {
//DUPDEF   LABEL_12:
//DUPDEF         *v53 = v48; /*0x44f127*/
//DUPDEF         return (int)v53; /*0x44f138*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v13 = this->Type; /*0x44f13b*/
//DUPDEF   if ( v13->Naval && v13->WeaponsFactory ) /*0x44f14f*/
//DUPDEF   {
//DUPDEF     v14 = (unsigned int *)(*(int (**)(void *, int *, int *))(*(unsigned int *)&this->vtable1))(this, v52, v54); /*0x44f167*/
//DUPDEF     v58 = *v14 / 256; /*0x44f17d*/
//DUPDEF     IDA_HIWORD(v48) = v14[1] / 256; /*0x44f1a3*/
//DUPDEF     ++IDA_HIWORD(v48); /*0x44f1a8*/
//DUPDEF     IDA_LOWORD(v48) = v58 + 1; /*0x44f1ae*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f1b3*/
//DUPDEF     {
//DUPDEF       v15 = *v54; /*0x44f1bc*/
//DUPDEF       v16 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f1d0*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v15 + 428))(v54, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
//DUPDEF       {
//DUPDEF         *v53 = v48; /*0x44f1ed*/
//DUPDEF         return (int)v53; /*0x44f1f3*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     --IDA_HIWORD(v48); /*0x44f1f6*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f205*/
//DUPDEF     {
//DUPDEF       v17 = *v54; /*0x44f20e*/
//DUPDEF       v18 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f222*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v17 + 428))(v54, v18, -1, -1, 0, 0) ) /*0x44f22a*/
//DUPDEF       {
//DUPDEF         *v53 = v48; /*0x44f23f*/
//DUPDEF         return (int)v53; /*0x44f245*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     ++IDA_HIWORD(v48); /*0x44f248*/
//DUPDEF     IDA_LOWORD(v48) = IDA_LOWORD(v48) - 1; /*0x44f24d*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f25c*/
//DUPDEF     {
//DUPDEF       v19 = *v54; /*0x44f265*/
//DUPDEF       v20 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f279*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v19 + 428))(v54, v20, -1, -1, 0, 0) ) /*0x44f281*/
//DUPDEF       {
//DUPDEF         *v53 = v48; /*0x44f296*/
//DUPDEF         return (int)v53; /*0x44f29c*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( v62 != g_TerrainTypeTable && ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v62) ) /*0x44f2c5*/
//DUPDEF   {
//DUPDEF     v21 = *v54; /*0x44f2ce*/
//DUPDEF     v22 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v62); /*0x44f2e2*/
//DUPDEF     if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v21 + 428))(v54, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
//DUPDEF     {
//DUPDEF       *v53 = v62; /*0x44f2ff*/
//DUPDEF       return (int)v53; /*0x44f305*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v23 = this->Type; /*0x44f308*/
//DUPDEF   v24 = v23->Height; /*0x44f30e*/
//DUPDEF   if ( v24 && !v23->Hospital ) /*0x44f31c*/
//DUPDEF   {
//DUPDEF     while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
//DUPDEF     {
//DUPDEF       v24 = v24; /*0x44f344*/
//DUPDEF       v24 += 2; /*0x44f346*/
//DUPDEF       IDA_LOWORD(v59) = v4 + *v24; /*0x44f358*/
//DUPDEF       IDA_HIWORD(v59) = IDA_HIWORD(v51) + v24[1]; /*0x44f361*/
//DUPDEF       v48 = v59; /*0x44f36a*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f374*/
//DUPDEF       {
//DUPDEF         v26 = *v54; /*0x44f37d*/
//DUPDEF         v27 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f391*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v26 + 428))(v54, v27, -1, -1, 0, 0) ) /*0x44f399*/
//DUPDEF           goto LABEL_36; /*0x44f3a1*/
//DUPDEF         IDA_LOWORD(v4) = v51; /*0x44f331*/
//DUPDEF       }
//DUPDEF }
//DUPDEF     goto LABEL_53; /*0x44f33e*/
//DUPDEF   }
//DUPDEF   FoundationHeight = ((BuildingTypeClass*)(v23))->GetFoundationHeight(0); /*0x44f3b9*/
//DUPDEF   v29 = (unsigned int *)this->Type; /*0x44f3be*/
//DUPDEF   v30 = -1; /*0x44f3c4*/
//DUPDEF   v31 = FoundationHeight; /*0x44f3c7*/
//DUPDEF   v50 = -1; /*0x44f3c9*/
//DUPDEF   if ( ((BuildingTypeClass*)(v29))->GetFoundationWidth() >= -1 ) /*0x44f3d5*/
//DUPDEF   {
//DUPDEF     IDA_HIWORD(v60) = IDA_HIWORD(v51) + v31; /*0x44f3e1*/
//DUPDEF     do /*0x44f3ef*/
//DUPDEF     {
//DUPDEF       v32 = v51 + v30; /*0x44f3ef*/
//DUPDEF       IDA_LOWORD(v60) = v51 + v30; /*0x44f3f2*/
//DUPDEF       v48 = v60; /*0x44f3fb*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f404*/
//DUPDEF       {
//DUPDEF         v33 = *v54; /*0x44f40d*/
//DUPDEF         v34 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f421*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v33 + 428))(v54, v34, -1, -1, 0, 1) ) /*0x44f431*/
//DUPDEF           goto LABEL_12; /*0x44f431*/
//DUPDEF         v30 = v50; /*0x44f437*/
//DUPDEF       }
//DUPDEF       IDA_LOWORD(v49) = v32; /*0x44f43f*/
//DUPDEF       IDA_HIWORD(v49) = IDA_HIWORD(v51) - 1; /*0x44f449*/
//DUPDEF       v48 = v49; /*0x44f458*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f45c*/
//DUPDEF       {
//DUPDEF         v35 = *v54; /*0x44f465*/
//DUPDEF         v36 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f479*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v35 + 428))(v54, v36, -1, -1, 0, 1) ) /*0x44f481*/
//DUPDEF           goto LABEL_36; /*0x44f489*/
//DUPDEF       }
//DUPDEF       v37 = (unsigned int *)this->Type; /*0x44f48f*/
//DUPDEF       v50 = ++v30; /*0x44f496*/
//DUPDEF     }
//DUPDEF     while ( v30 <= ((BuildingTypeClass*)(v37))->GetFoundationWidth() ); /*0x44f3ef*/
//DUPDEF   }
//DUPDEF   FoundationWidth = ((BuildingTypeClass*)(*((unsigned int **)&this->needsRedraw8)))->GetFoundationWidth(); /*0x44f4a7*/
//DUPDEF   v39 = this->Type; /*0x44f4b2*/
//DUPDEF   v40 = -1; /*0x44f4b8*/
//DUPDEF   v41 = FoundationWidth; /*0x44f4bd*/
//DUPDEF   v49 = -1; /*0x44f4bf*/
//DUPDEF   if ( ((BuildingTypeClass*)(v39))->GetFoundationHeight(0) >= -1 ) /*0x44f4cb*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v61) = v51 + v41; /*0x44f4d7*/
//DUPDEF     while ( 1 ) /*0x44f4e5*/
//DUPDEF     {
//DUPDEF       v42 = IDA_HIWORD(v51) + v40; /*0x44f4e5*/
//DUPDEF       IDA_HIWORD(v61) = IDA_HIWORD(v51) + v40; /*0x44f4e8*/
//DUPDEF       v48 = v61; /*0x44f4f1*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f4fa*/
//DUPDEF       {
//DUPDEF         v43 = *v54; /*0x44f503*/
//DUPDEF         v44 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f517*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v43 + 428))(v54, v44, -1, -1, 0, 1) ) /*0x44f527*/
//DUPDEF           goto LABEL_12; /*0x44f527*/
//DUPDEF         v40 = v49; /*0x44f52d*/
//DUPDEF       }
//DUPDEF       IDA_HIWORD(v50) = v42; /*0x44f535*/
//DUPDEF       IDA_LOWORD(v50) = v51 - 1; /*0x44f53f*/
//DUPDEF       v48 = v50; /*0x44f54e*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f552*/
//DUPDEF       {
//DUPDEF         v45 = *v54; /*0x44f55b*/
//DUPDEF         v46 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f56f*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v45 + 428))(v54, v46, -1, -1, 0, 1) ) /*0x44f577*/
//DUPDEF           break; /*0x44f577*/
//DUPDEF       }
//DUPDEF       v47 = this->Type; /*0x44f585*/
//DUPDEF       v49 = ++v40; /*0x44f58e*/
//DUPDEF       if ( v40 > ((BuildingTypeClass*)(v47))->GetFoundationHeight(0) ) /*0x44f599*/
//DUPDEF         goto LABEL_53; /*0x44f599*/
//DUPDEF     }
//DUPDEF   LABEL_36:
//DUPDEF     *v53 = v48; /*0x44f3a3*/
//DUPDEF     return (int)v53; /*0x44f3b4*/
//DUPDEF   }
//DUPDEF   LABEL_53:
//DUPDEF   *v53 = g_TerrainTypeTable; /*0x44f59f*/
//DUPDEF   return (int)v53; /*0x44f03f*/
//DUPDEF }
//DUPDEF   if ( this->Type->NODBarracks ) /*0x44f051*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v56) = v4 + 2; /*0x44f062*/
//DUPDEF     IDA_HIWORD(v56) = IDA_HIWORD(v51) + 2; /*0x44f06e*/
//DUPDEF     v48 = v56; /*0x44f07d*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f081*/
//DUPDEF     {
//DUPDEF       v9 = *v54; /*0x44f08a*/
//DUPDEF       v10 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f09e*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v9 + 428))(v54, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
//DUPDEF       {
//DUPDEF         *v53 = v48; /*0x44f0bb*/
//DUPDEF         return (int)v53; /*0x44f0c1*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF }
//DUPDEF   if ( this->Type->YuriBarracks ) /*0x44f0ca*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v57) = v4 + 2; /*0x44f0dc*/
//DUPDEF     IDA_HIWORD(v57) = IDA_HIWORD(v51) + 1; /*0x44f0e1*/
//DUPDEF     *(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)*(unsigned int *)v48 = v57; /*0x44f0f4*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f0f8*/
//DUPDEF     {
//DUPDEF       v11 = *v54; /*0x44f101*/
//DUPDEF       v12 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f115*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(v54, v12, -1, -1, 0, 1) ) /*0x44f11d*/
//DUPDEF       {
//DUPDEF   LABEL_12:
//DUPDEF         *v53 = v48; /*0x44f127*/
//DUPDEF         return (int)v53; /*0x44f138*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v13 = this->Type; /*0x44f13b*/
//DUPDEF   if ( v13->Naval && v13->WeaponsFactory ) /*0x44f14f*/
//DUPDEF   {
//DUPDEF     v14 = (unsigned int *)(*(int (**)(void *, int *, int *))(*(unsigned int *)&this->vtable1))(this, v52, v54); /*0x44f167*/
//DUPDEF     v58 = *v14 / 256; /*0x44f17d*/
//DUPDEF     IDA_HIWORD(v48) = v14[1] / 256; /*0x44f1a3*/
//DUPDEF     ++IDA_HIWORD(v48); /*0x44f1a8*/
//DUPDEF     IDA_LOWORD(v48) = v58 + 1; /*0x44f1ae*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f1b3*/
//DUPDEF     {
//DUPDEF       v15 = *v54; /*0x44f1bc*/
//DUPDEF       v16 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f1d0*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v15 + 428))(v54, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
//DUPDEF       {
//DUPDEF         *v53 = v48; /*0x44f1ed*/
//DUPDEF         return (int)v53; /*0x44f1f3*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     --IDA_HIWORD(v48); /*0x44f1f6*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f205*/
//DUPDEF     {
//DUPDEF       v17 = *v54; /*0x44f20e*/
//DUPDEF       v18 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f222*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v17 + 428))(v54, v18, -1, -1, 0, 0) ) /*0x44f22a*/
//DUPDEF       {
//DUPDEF         *v53 = v48; /*0x44f23f*/
//DUPDEF         return (int)v53; /*0x44f245*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     ++IDA_HIWORD(v48); /*0x44f248*/
//DUPDEF     IDA_LOWORD(v48) = IDA_LOWORD(v48) - 1; /*0x44f24d*/
//DUPDEF     if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f25c*/
//DUPDEF     {
//DUPDEF       v19 = *v54; /*0x44f265*/
//DUPDEF       v20 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f279*/
//DUPDEF       if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v19 + 428))(v54, v20, -1, -1, 0, 0) ) /*0x44f281*/
//DUPDEF       {
//DUPDEF         *v53 = v48; /*0x44f296*/
//DUPDEF         return (int)v53; /*0x44f29c*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( v62 != g_TerrainTypeTable && ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v62) ) /*0x44f2c5*/
//DUPDEF   {
//DUPDEF     v21 = *v54; /*0x44f2ce*/
//DUPDEF     v22 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v62); /*0x44f2e2*/
//DUPDEF     if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v21 + 428))(v54, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
//DUPDEF     {
//DUPDEF       *v53 = v62; /*0x44f2ff*/
//DUPDEF       return (int)v53; /*0x44f305*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v23 = this->Type; /*0x44f308*/
//DUPDEF   v24 = v23->Height; /*0x44f30e*/
//DUPDEF   if ( v24 && !v23->Hospital ) /*0x44f31c*/
//DUPDEF   {
//DUPDEF     while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
//DUPDEF     {
//DUPDEF       v24 = v24; /*0x44f344*/
//DUPDEF       v24 += 2; /*0x44f346*/
//DUPDEF       IDA_LOWORD(v59) = v4 + *v24; /*0x44f358*/
//DUPDEF       IDA_HIWORD(v59) = IDA_HIWORD(v51) + v24[1]; /*0x44f361*/
//DUPDEF       v48 = v59; /*0x44f36a*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f374*/
//DUPDEF       {
//DUPDEF         v26 = *v54; /*0x44f37d*/
//DUPDEF         v27 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f391*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, unsigned int))(v26 + 428))(v54, v27, -1, -1, 0, 0) ) /*0x44f399*/
//DUPDEF           goto LABEL_36; /*0x44f3a1*/
//DUPDEF         IDA_LOWORD(v4) = v51; /*0x44f331*/
//DUPDEF       }
//DUPDEF }
//DUPDEF     goto LABEL_53; /*0x44f33e*/
//DUPDEF   }
//DUPDEF   FoundationHeight = ((BuildingTypeClass*)(v23))->GetFoundationHeight(0); /*0x44f3b9*/
//DUPDEF   v29 = (unsigned int *)this->Type; /*0x44f3be*/
//DUPDEF   v30 = -1; /*0x44f3c4*/
//DUPDEF   v31 = FoundationHeight; /*0x44f3c7*/
//DUPDEF   v50 = -1; /*0x44f3c9*/
}  // G42.33 ph6: dup branch-cluster tail of 0x44efb0 commented
//DUPDEF   if ( ((BuildingTypeClass*)(v29))->GetFoundationWidth() >= -1 ) /*0x44f3d5*/
//DUPDEF   {
//DUPDEF     IDA_HIWORD(v60) = IDA_HIWORD(v51) + v31; /*0x44f3e1*/
//DUPDEF     do /*0x44f3ef*/
//DUPDEF     {
//DUPDEF       v32 = v51 + v30; /*0x44f3ef*/
//DUPDEF       IDA_LOWORD(v60) = v51 + v30; /*0x44f3f2*/
//DUPDEF       v48 = v60; /*0x44f3fb*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f404*/
//DUPDEF       {
//DUPDEF         v33 = *v54; /*0x44f40d*/
//DUPDEF         v34 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f421*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v33 + 428))(v54, v34, -1, -1, 0, 1) ) /*0x44f431*/
//DUPDEF           goto LABEL_12; /*0x44f431*/
//DUPDEF         v30 = v50; /*0x44f437*/
//DUPDEF       }
//DUPDEF       IDA_LOWORD(v49) = v32; /*0x44f43f*/
//DUPDEF       IDA_HIWORD(v49) = IDA_HIWORD(v51) - 1; /*0x44f449*/
//DUPDEF       v48 = v49; /*0x44f458*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f45c*/
//DUPDEF       {
//DUPDEF         v35 = *v54; /*0x44f465*/
//DUPDEF         v36 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f479*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v35 + 428))(v54, v36, -1, -1, 0, 1) ) /*0x44f481*/
//DUPDEF           goto LABEL_36; /*0x44f489*/
//DUPDEF       }
//DUPDEF       v37 = (unsigned int *)this->Type; /*0x44f48f*/
//DUPDEF       v50 = ++v30; /*0x44f496*/
//DUPDEF     }
//DUPDEF     while ( v30 <= ((BuildingTypeClass*)(v37))->GetFoundationWidth() ); /*0x44f3ef*/
//DUPDEF   }
//DUPDEF   FoundationWidth = ((BuildingTypeClass*)(*((unsigned int **)&this->needsRedraw8)))->GetFoundationWidth(); /*0x44f4a7*/
//DUPDEF   v39 = this->Type; /*0x44f4b2*/
//DUPDEF   v40 = -1; /*0x44f4b8*/
//DUPDEF   v41 = FoundationWidth; /*0x44f4bd*/
//DUPDEF   v49 = -1; /*0x44f4bf*/
//DUPDEF   if ( ((BuildingTypeClass*)(v39))->GetFoundationHeight(0) >= -1 ) /*0x44f4cb*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v61) = v51 + v41; /*0x44f4d7*/
//DUPDEF     while ( 1 ) /*0x44f4e5*/
//DUPDEF     {
//DUPDEF       v42 = IDA_HIWORD(v51) + v40; /*0x44f4e5*/
//DUPDEF       IDA_HIWORD(v61) = IDA_HIWORD(v51) + v40; /*0x44f4e8*/
//DUPDEF       v48 = v61; /*0x44f4f1*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f4fa*/
//DUPDEF       {
//DUPDEF         v43 = *v54; /*0x44f503*/
//DUPDEF         v44 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f517*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v43 + 428))(v54, v44, -1, -1, 0, 1) ) /*0x44f527*/
//DUPDEF           goto LABEL_12; /*0x44f527*/
//DUPDEF         v40 = v49; /*0x44f52d*/
//DUPDEF       IDA_HIWORD(v50) = v42; /*0x44f535*/
//DUPDEF       IDA_LOWORD(v50) = v51 - 1; /*0x44f53f*/
//DUPDEF       v48 = v50; /*0x44f54e*/
//DUPDEF       if ( ((LayerClass*)(&MapClass_Instance))->CoordinatesLegal((int16_t *)&v48) ) /*0x44f552*/
//DUPDEF       {
//DUPDEF         v45 = *v54; /*0x44f55b*/
//DUPDEF         v46 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v48); /*0x44f56f*/
//DUPDEF         if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v45 + 428))(v54, v46, -1, -1, 0, 1) ) /*0x44f577*/
//DUPDEF           break; /*0x44f577*/
//DUPDEF       v47 = this->Type; /*0x44f585*/
//DUPDEF       v49 = ++v40; /*0x44f58e*/
//DUPDEF       if ( v40 > ((BuildingTypeClass*)(v47))->GetFoundationHeight(0) ) /*0x44f599*/
//DUPDEF         goto LABEL_53; /*0x44f599*/
//DUPDEF   LABEL_36:
//DUPDEF     *v53 = v48; /*0x44f3a3*/
//DUPDEF     return (int)v53; /*0x44f3b4*/
//DUPDEF   LABEL_53:
//DUPDEF   *v53 = g_TerrainTypeTable; /*0x44f59f*/
//DUPDEF   return (int)v53; /*0x44f03f*/
//DUPDEF /* ASM:
//DUPDEF sub     esp, 0Ch
//DUPDEF push    ebx
//DUPDEF push    esi
//DUPDEF mov     esi, ecx
//DUPDEF push    edi
//DUPDEF mov     ecx, [esi+24h]
//DUPDEF test    ecx, ecx
//DUPDEF jz      short loc_6B037F
//DUPDEF mov     eax, [ecx]
//DUPDEF call    dword ptr [eax+2Ch]
//DUPDEF cmp     eax, 6
//DUPDEF jnz     short loc_6B037F
//DUPDEF mov     edi, [esi+24h]
//DUPDEF test    edi, edi
//DUPDEF jnz     short loc_6B0324
//DUPDEF xor     eax, eax
//DUPDEF jmp     short loc_6B0336
//DUPDEF ; ---------------------------------------------------------------------------
//DUPDEF 
//DUPDEF loc_6B0324:                             ; CODE XREF: BuildingClass__FindPlacementCells2+1E↑j
//DUPDEF mov     edx, [edi]
//DUPDEF mov     ecx, edi
//DUPDEF call    dword ptr [edx+2Ch]
//DUPDEF sub     eax, 6
//DUPDEF neg     eax
//DUPDEF sbb     eax, eax
//DUPDEF not     eax
//DUPDEF and     eax, edi
//DUPDEF 
//DUPDEF loc_6B0336:                             ; CODE XREF: BuildingClass__FindPlacementCells2+22↑j
//DUPDEF mov     ecx, [eax+520h]
//DUPDEF call    BuildingTypeClass__GetFoundationWidth
//DUPDEF mov     ebx, [esi+24h]
//DUPDEF mov     edi, eax
//DUPDEF test    ebx, ebx
//DUPDEF jnz     short loc_6B035C
//DUPDEF xor     eax, eax
//DUPDEF push    eax
//DUPDEF mov     ecx, [eax+520h]
//DUPDEF call    BuildingTypeClass__GetFoundationHeight
//DUPDEF mov     ebx, eax
//DUPDEF jmp     short loc_6B03CF
//DUPDEF ; ---------------------------------------------------------------------------
//DUPDEF 
//DUPDEF loc_6B035C:                             ; CODE XREF: BuildingClass__FindPlacementCells2+48↑j
//DUPDEF mov     eax, [ebx]
//DUPDEF mov     ecx, ebx
//DUPDEF call    dword ptr [eax+2Ch]
//DUPDEF sub     eax, 6
//DUPDEF push    0
//DUPDEF neg     eax
//DUPDEF sbb     eax, eax
//DUPDEF not     eax
//DUPDEF and     eax, ebx
//DUPDEF mov     ecx, [eax+520h]
//DUPDEF call    BuildingTypeClass__GetFoundationHeight
//DUPDEF mov     ebx, eax
//DUPDEF jmp     short loc_6B03CF
//DUPDEF ; ---------------------------------------------------------------------------
//DUPDEF 
//DUPDEF loc_6B037F:                             ; CODE XREF: BuildingClass__FindPlacementCells2+D↑j
//DUPDEF ; BuildingClass__FindPlacementCells2+17↑j
//DUPDEF mov     ecx, [esi+24h]
//DUPDEF mov     edx, [ecx]
//DUPDEF call    dword ptr [edx+84h]
//DUPDEF mov     ecx, [eax+404h]
//DUPDEF test    ecx, ecx
//DUPDEF jz      short loc_6B03C8
//DUPDEF mov     ecx, [esi+24h]
//DUPDEF mov     eax, [ecx]
//DUPDEF call    dword ptr [eax+84h]
//DUPDEF mov     ecx, [eax+404h]
//DUPDEF call    BuildingTypeClass__GetFoundationWidth
//DUPDEF mov     ecx, [esi+24h]
//DUPDEF push    0
//DUPDEF mov     edi, eax
//DUPDEF mov     edx, [ecx]
//DUPDEF call    dword ptr [edx+84h]
//DUPDEF mov     ecx, [eax+404h]
//DUPDEF call    BuildingTypeClass__GetFoundationHeight
//DUPDEF mov     ebx, eax
//DUPDEF jmp     short loc_6B03CF
//DUPDEF ; ---------------------------------------------------------------------------
//DUPDEF 
//DUPDEF loc_6B03C8:                             ; CODE XREF: BuildingClass__FindPlacementCells2+92↑j
//DUPDEF mov     edi, 1
//DUPDEF mov     ebx, edi
//DUPDEF 
//DUPDEF loc_6B03CF:                             ; CODE XREF: BuildingClass__FindPlacementCells2+5A↑j
//DUPDEF ; BuildingClass__FindPlacementCells2+7D↑j ...
//DUPDEF push    1
//DUPDEF lea     eax, [esp+1Ch+arg_4]
//DUPDEF mov     ecx, [esi+24h]
//DUPDEF push    0
//DUPDEF push    eax
//DUPDEF push    0
//DUPDEF push    0
//DUPDEF mov     edx, [ecx]
//DUPDEF push    0
//DUPDEF push    1
//DUPDEF push    ebx
//DUPDEF push    edi
//DUPDEF push    0
//DUPDEF push    0
//DUPDEF push    0
//DUPDEF lea     eax, [esp+48h+var_C]
//DUPDEF push    0
//DUPDEF push    eax
//DUPDEF call    dword ptr [edx+1B8h]
//DUPDEF push    eax
//DUPDEF mov     ecx, 87F7E8h
//DUPDEF call    MapClass__GetTileIndex
//DUPDEF push    eax
//DUPDEF lea     ecx, [esp+48h+arg_4]
//DUPDEF push    1
//DUPDEF lea     edx, [esp+4Ch+var_8]
//DUPDEF push    ecx
//DUPDEF push    edx
//DUPDEF mov     ecx, 87F7E8h
//DUPDEF call    LayerClass__Pathfinding_Find
//DUPDEF mov     eax, [eax]
//DUPDEF mov     ecx, dword_A8ED54+7C864h
//DUPDEF mov     [esp+18h+var_8], eax
//DUPDEF mov     edx, [esp+18h+var_8+2]
//DUPDEF cmp     ax, cx
//DUPDEF jnz     short loc_6B0449
//DUPDEF cmp     dx, word ptr dword_A8ED54+7C866h
//DUPDEF jnz     short loc_6B0449
//DUPDEF mov     eax, [esp+18h+arg_0]
//DUPDEF pop     edi
//DUPDEF pop     esi
//DUPDEF pop     ebx
//DUPDEF mov     [eax], ecx
//DUPDEF add     esp, 0Ch
//DUPDEF retn    8
//DUPDEF ; ---------------------------------------------------------------------------
//DUPDEF 
//DUPDEF loc_6B0449:                             ; CODE XREF: BuildingClass__FindPlacementCells2+12F↑j
//DUPDEF ; BuildingClass__FindPlacementCells2+138↑j
//DUPDEF cmp     edi, 2
//DUPDEF jle     short loc_6B0465
//DUPDEF inc     eax
//DUPDEF mov     [esp+18h+arg_6], dx
//DUPDEF mov     word ptr [esp+18h+arg_4], ax
//DUPDEF mov     eax, dword ptr [esp+18h+arg_4]
//DUPDEF mov     [esp+18h+var_8], eax
//DUPDEF mov     edx, [esp+18h+var_8+2]
//DUPDEF 
//DUPDEF loc_6B0465:                             ; CODE XREF: BuildingClass__FindPlacementCells2+14C↑j
//DUPDEF cmp     ebx, 2
//DUPDEF jle     short loc_6B0479
//DUPDEF inc     edx
//DUPDEF mov     word ptr [esp+18h+arg_4], ax
//DUPDEF mov     [esp+18h+arg_6], dx
//DUPDEF mov     eax, dword ptr [esp+18h+arg_4]
//DUPDEF 
//DUPDEF loc_6B0479:                             ; CODE XREF: BuildingClass__FindPlacementCells2+168↑j
//DUPDEF mov     ecx, [esp+18h+arg_0]
//DUPDEF pop     edi
//DUPDEF pop     esi
//DUPDEF pop     ebx
//DUPDEF mov     [ecx], eax
//DUPDEF mov     eax, ecx
//DUPDEF add     esp, 0Ch
//DUPDEF retn    8
//DUPDEF */
//DUPDEF 
//DUPDEF // IDA 0x449840: search for valid placement
//DUPDEF // 0x56bec0
//DUPDEF int BuildingClass::SearchPlacement()
//DUPDEF {
//DUPDEF   unsigned int v4; // eax
//DUPDEF   int *v5; // eax
//DUPDEF   int result; // eax
//DUPDEF   int *v7; // ecx
//DUPDEF   unsigned int v8; // eax
//DUPDEF   int v9; // [esp-34h] [ebp-48h]
//DUPDEF   int16_t v10[2]; // [esp+Ch] [ebp-8h] BYREF
//DUPDEF   int v11; // [esp+10h] [ebp-4h] BYREF
//DUPDEF 
//DUPDEF   v4 = (int16_t)a2 + (IDA_SHIWORD(a2) << 9); /*0x56bedc*/
//DUPDEF   if ( v4 >= 0x40000 || (v5 = *(int **)(*(unsigned int *)&stru_87F5F0_raw.__pad_58[732] + 4 * v4)) == 0 ) /*0x56bef2*/
//DUPDEF   {
//DUPDEF     g_MissionQueueFrame.briefing[139] = a2; /*0x56bef4*/
//DUPDEF     v5 = &g_MissionQueueFrame.briefing[130]; /*0x56befa*/
//DUPDEF   }
//DUPDEF   if ( v5[59] == 2 ) /*0x56bf06*/
//DUPDEF     v9 = 5; /*0x56bf24*/
//DUPDEF   else
//DUPDEF     v9 = 1; /*0x56bf4f*/
//DUPDEF   v10[0] = 0; /*0x56bf26*/
//DUPDEF   v10[1] = 0; /*0x56bf2b*/
//DUPDEF   a2 = *LayerClass::Pathfinding_Find( /*0x56bf77*/
//DUPDEF           &stru_87F5F0_raw.__pad_58[416],
//DUPDEF           (int)v10,
//DUPDEF           &v11,
//DUPDEF           (int16_t *)&a2,
//DUPDEF           v9,
//DUPDEF           -1,
//DUPDEF           0,
//DUPDEF           0,
//DUPDEF           1,
//DUPDEF           1,
//DUPDEF           0,
//DUPDEF           0,
//DUPDEF           0,
//DUPDEF           1,
//DUPDEF           v10,
//DUPDEF           0,
//DUPDEF           0);
//DUPDEF   result = 0; /*0x56bf81*/
//DUPDEF   v7 = &((unsigned int *)this)[1]; /*0x56bf83*/
//DUPDEF   do /*0x56bf9d*/
//DUPDEF   {
//DUPDEF     if ( *(unsigned short *)v7 == *(unsigned short *)&g_MissionQueueFrame.waypoints[2134] /*0x56bf92*/
//DUPDEF       && *((unsigned short *)v7 + 1) == *(unsigned short *)&g_MissionQueueFrame.waypoints[2136] )
//DUPDEF     {
//DUPDEF       break; /*0x56bf92*/
//DUPDEF     }
//DUPDEF     ++result; /*0x56bf94*/
//DUPDEF     v7 += 4; /*0x56bf95*/
//DUPDEF   }
//DUPDEF   while ( result < 256 ); /*0x56bf9d*/
//DUPDEF   if ( result == 256 || !BuildingClass::BeginCrumblingTimer((BuildingClass *)&((unsigned int *)this)[4 * result], (int16_t *)&a2) ) /*0x56bfb5*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x56c00c*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     if ( a3 != 20 ) /*0x56bfc5*/
//DUPDEF     {
//DUPDEF       v8 = (int16_t)a2 + (IDA_SHIWORD(a2) << 9); /*0x56bfd6*/
//DUPDEF       if ( v8 >= 0x40000 || (result = *(unsigned int *)(*(unsigned int *)&stru_87F5F0_raw.__pad_58[732] + 4 * v8)) == 0 ) /*0x56bfec*/
//DUPDEF       {
//DUPDEF         g_MissionQueueFrame.briefing[139] = a2; /*0x56bfee*/
//DUPDEF         result = (int)&g_MissionQueueFrame.briefing[130]; /*0x56bff4*/
//DUPDEF       }
//DUPDEF       *(unsigned char *)(result + 286) = a3; /*0x56bff9*/
//DUPDEF     }
//DUPDEF     IDA_LOBYTE(result) = 1; /*0x56c001*/
//DUPDEF   }
//DUPDEF   return result; /*0x56bfff*/
//DUPDEF }
//DUPDEF // 0x485af0
//DUPDEF void* BuildingClass::VisualizePlacement()
//DUPDEF {
//DUPDEF   BuildingClass *v1; // ebp
//DUPDEF   int *PlacementRect; // esi
//DUPDEF   unsigned int *StartCoords; // eax
//DUPDEF   int v4; // edi
//DUPDEF   int v5; // eax
//DUPDEF   int v6; // esi
//DUPDEF   int v7; // eax
//DUPDEF   char transporter; // al
//DUPDEF   signed int v9; // ebx
//DUPDEF   BuildingClass *NeighbourContent; // esi
//DUPDEF   int v11; // eax
//DUPDEF   int BridgeBitfield; // edi
//DUPDEF   int v13; // eax
//DUPDEF   int *v14; // ebp
//DUPDEF   int *v15; // eax
//DUPDEF   int v16; // ecx
//DUPDEF   int v17; // edx
//DUPDEF   int v18; // ebx
//DUPDEF   int v19; // edi
//DUPDEF   int v20; // eax
//DUPDEF   bool v21; // cc
//DUPDEF   int v22; // ebp
//DUPDEF   int v23; // edx
//DUPDEF   int v24; // eax
//DUPDEF   struct tagRECT *v25; // edi
//DUPDEF   struct tagRECT *v26; // eax
//DUPDEF   LONG left; // edx
//DUPDEF   LONG v28; // ecx
//DUPDEF   LONG v29; // ebp
//DUPDEF   LONG top; // ebx
//DUPDEF   LONG bottom; // edi
//DUPDEF   LONG v32; // eax
//DUPDEF   LONG v33; // ecx
//DUPDEF   int v34; // eax
//DUPDEF   Coord2D *v35; // eax
//DUPDEF   int *v36; // eax
//DUPDEF   int *v37; // eax
//DUPDEF   struct tagRECT *v38; // eax
//DUPDEF   int *v39; // eax
//DUPDEF   int v40; // edx
//DUPDEF   struct tagRECT *v41; // eax
//DUPDEF   Bounds *v42; // eax
//DUPDEF   Rect *v43; // eax
//DUPDEF   struct tagRECT *v44; // eax
//DUPDEF   Bounds *v45; // eax
//DUPDEF   int *v46; // eax
//DUPDEF   struct tagRECT *v47; // [esp-Ch] [ebp-1C4h]
//DUPDEF   struct tagRECT *v48; // [esp-Ch] [ebp-1C4h]
//DUPDEF   int v49; // [esp-8h] [ebp-1C0h]
//DUPDEF   const RECT *v50; // [esp-8h] [ebp-1C0h]
//DUPDEF   unsigned int *v51; // [esp-8h] [ebp-1C0h]
//DUPDEF   const RECT *v52; // [esp-8h] [ebp-1C0h]
//DUPDEF   unsigned int *v53; // [esp-8h] [ebp-1C0h]
//DUPDEF   int v54; // [esp-4h] [ebp-1BCh]
//DUPDEF   struct tagRECT *v55; // [esp-4h] [ebp-1BCh]
//DUPDEF   const RECT *v56; // [esp-4h] [ebp-1BCh]
//DUPDEF   const RECT *v57; // [esp-4h] [ebp-1BCh]
//DUPDEF   unsigned int *v58; // [esp-4h] [ebp-1BCh]
//DUPDEF   const RECT *v59; // [esp-4h] [ebp-1BCh]
//DUPDEF   const RECT *v60; // [esp-4h] [ebp-1BCh]
//DUPDEF   unsigned int *v61; // [esp-4h] [ebp-1BCh]
//DUPDEF   const RECT *v62; // [esp+0h] [ebp-1B8h]
//DUPDEF   const RECT *v63; // [esp+0h] [ebp-1B8h]
//DUPDEF   const RECT *v64; // [esp+4h] [ebp-1B4h]
//DUPDEF   const RECT *v65; // [esp+4h] [ebp-1B4h]
//DUPDEF   int v66; // [esp+10h] [ebp-1A8h]
//DUPDEF   int right; // [esp+10h] [ebp-1A8h]
//DUPDEF   signed int v68; // [esp+34h] [ebp-184h]
//DUPDEF   Rect v69; // [esp+38h] [ebp-180h] BYREF
//DUPDEF   int v70; // [esp+48h] [ebp-170h]
//DUPDEF   int v71; // [esp+4Ch] [ebp-16Ch]
//DUPDEF   int v72; // [esp+50h] [ebp-168h]
//DUPDEF   BuildingClass *v73; // [esp+54h] [ebp-164h]
//DUPDEF   struct tagRECT rcDst; // [esp+58h] [ebp-160h] BYREF
//DUPDEF   int v75; // [esp+74h] [ebp-144h]
//DUPDEF   int v76; // [esp+80h] [ebp-138h]
//DUPDEF   int v77; // [esp+84h] [ebp-134h]
//DUPDEF   unsigned int v78[2]; // [esp+88h] [ebp-130h] BYREF
//DUPDEF   int v79; // [esp+90h] [ebp-128h] BYREF
//DUPDEF   int v80; // [esp+98h] [ebp-120h]
//DUPDEF   int v81; // [esp+A0h] [ebp-118h] BYREF
//DUPDEF   LONG v82; // [esp+A8h] [ebp-110h]
//DUPDEF   unsigned int v83[2]; // [esp+B0h] [ebp-108h] BYREF
//DUPDEF   int v84; // [esp+B8h] [ebp-100h] BYREF
//DUPDEF   RECT rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
//DUPDEF   int v86[4]; // [esp+D0h] [ebp-E8h] BYREF
//DUPDEF   RECT v87; // [esp+E0h] [ebp-D8h] BYREF
//DUPDEF   int v88[4]; // [esp+F0h] [ebp-C8h] BYREF
//DUPDEF   int v89; // [esp+100h] [ebp-B8h] BYREF
//DUPDEF   int v90[4]; // [esp+108h] [ebp-B0h] BYREF
//DUPDEF   Rect v91; // [esp+118h] [ebp-A0h] BYREF
//DUPDEF   int v92[4]; // [esp+128h] [ebp-90h] BYREF
//DUPDEF   int v93[4]; // [esp+138h] [ebp-80h] BYREF
//DUPDEF   int v94[4]; // [esp+148h] [ebp-70h] BYREF
//DUPDEF   int v95[4]; // [esp+168h] [ebp-50h] BYREF
//DUPDEF   int v96[4]; // [esp+178h] [ebp-40h] BYREF
//DUPDEF   int v97[4]; // [esp+1A8h] [ebp-10h] BYREF
//DUPDEF 
//DUPDEF   v1 = this; /*0x485afa*/
//DUPDEF   v73 = this; /*0x485afe*/
//DUPDEF   if ( !(uint8_t)BuildingClass::CheckAdjacentCells((int)this) ) /*0x485b19*/
//DUPDEF     return; /*0x485b19*/
//DUPDEF   PlacementRect = ((BuildingClass*)(v1))->GetPlacementRect(&v81); /*0x485b35*/
//DUPDEF   StartCoords = House::GetStartCoords((House *)v1, &v79); /*0x485b3a*/
//DUPDEF   if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x485b4b*/
//DUPDEF   {
//DUPDEF     v7 = PlacementRect[3]; /*0x485bdb*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     if ( PlacementRect[2] > 0 ) /*0x485b5a*/
//DUPDEF     {
//DUPDEF       v72 = PlacementRect[3]; /*0x485b61*/
//DUPDEF       if ( v72 > 0 ) /*0x485b65*/
//DUPDEF       {
//DUPDEF         v4 = StartCoords[1]; /*0x485b6b*/
//DUPDEF         v5 = StartCoords[3]; /*0x485b71*/
//DUPDEF         v6 = PlacementRect[1]; /*0x485b7e*/
//DUPDEF         if ( v4 > v6 ) /*0x485b87*/
//DUPDEF         {
//DUPDEF           v5 += v4 - v6; /*0x485b8b*/
//DUPDEF           v4 = v6; /*0x485b8d*/
//DUPDEF         }
//DUPDEF         if ( v5 + v4 < v72 + v6 ) /*0x485bb5*/
//DUPDEF           v5 = v72 + v6 - v4 + 1; /*0x485bba*/
//DUPDEF         v1 = v73; /*0x485bbc*/
//DUPDEF         v75 = v5; /*0x485bc0*/
//DUPDEF         goto LABEL_14; /*0x485bc4*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v7 = StartCoords[3]; /*0x485bce*/
//DUPDEF   }
//DUPDEF   v75 = v7; /*0x485bde*/
//DUPDEF   LABEL_14:
//DUPDEF   ((BuildingClass*)((int *)&stru_87F5F0_raw.__pad_58[416]))->AddUpgrade((BuildingTypeClass *)&((unsigned int *)v1)[0]); /*0x485c7d*/
//DUPDEF   transporter = (char)((unsigned int *)v1)[0]; /*0x485c9b*/
//DUPDEF   ((unsigned int *)v1)[2] = 126; /*0x485ca1*/
//DUPDEF   if ( !transporter ) /*0x485caa*/
//DUPDEF   {
//DUPDEF     v9 = 0; /*0x485cd0*/
//DUPDEF     IDA_BYTE2(((unsigned int *)v1)[0]) = (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3 + 48; /*0x485cd2*/
//DUPDEF     v68 = 0; /*0x485cd8*/
//DUPDEF     while ( 1 ) /*0x485ce4*/
//DUPDEF     {
//DUPDEF       NeighbourContent = (BuildingClass *)Cell::GetNeighbourContent((Cell *)v1, v9); /*0x485ce4*/
//DUPDEF       v11 = ((unsigned int *)NeighbourContent)[2]; /*0x485ce6*/
//DUPDEF       if ( v11 == 126 ) /*0x485cec*/
//DUPDEF       {
//DUPDEF         if ( IDA_BYTE2(((unsigned int *)NeighbourContent)[0]) < 0x30u ) /*0x485cf5*/
//DUPDEF           goto LABEL_21; /*0x485cf5*/
//DUPDEF       }
//DUPDEF       else if ( v11 == -1 || !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)stru_A83D50_raw.__pad_34 + 4 * v11) + 686) ) /*0x485d0d*/
//DUPDEF       {
//DUPDEF   LABEL_21:
//DUPDEF         if ( IDA_LOBYTE(((unsigned int *)NeighbourContent)[0]) ) /*0x485d1b*/
//DUPDEF         {
//DUPDEF           Rect::Set(&v69, 0, 0, 0, 0); /*0x486142*/
//DUPDEF           v55 = (struct tagRECT *)((BuildingClass*)(NeighbourContent))->GetPlacementRect(v93); /*0x48615d*/
//DUPDEF           House::GetStartCoords((House *)NeighbourContent, v96); /*0x486161*/
//DUPDEF           v38 = (struct tagRECT *)Rect::Union(v55, v62, v64); /*0x48616f*/
//DUPDEF           v39 = (int *)Rect::Union(v38, v63, v65); /*0x486180*/
//DUPDEF           v69.X = *v39; /*0x486187*/
//DUPDEF           v69.Y = v39[1]; /*0x48618e*/
//DUPDEF           v69.Width = v39[2]; /*0x486195*/
//DUPDEF           v40 = v39[3]; /*0x486199*/
//DUPDEF           ((unsigned int *)NeighbourContent)[2] = 126; /*0x48619c*/
//DUPDEF           v69.Height = v40; /*0x4861a8*/
//DUPDEF           IDA_BYTE2(((unsigned int *)NeighbourContent)[0]) = 2 * IDA_LOBYTE(((unsigned int *)NeighbourContent)[0]) /*0x4861d7*/
//DUPDEF                                      + (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1)
//DUPDEF                                      + 51;
//DUPDEF           v56 = (const RECT *)CellStruct_Copy(&DSurface_ViewBounds, v83); /*0x4861e2*/
//DUPDEF           v47 = (struct tagRECT *)((BuildingClass*)(NeighbourContent))->GetPlacementRect(v86); /*0x486201*/
//DUPDEF           House::GetStartCoords((House *)NeighbourContent, v88); /*0x486205*/
//DUPDEF           v41 = (struct tagRECT *)Rect::Union(v47, &rcSrc1, v56); /*0x486213*/
//DUPDEF           v42 = (Bounds *)Rect::Union(v41, v50, v57); /*0x486224*/
//DUPDEF           v43 = (Rect *)Bounds::Subtract(v42, v51, v58); /*0x48622b*/
//DUPDEF           v69 = *v43; /*0x486239*/
//DUPDEF           Cell::CreateCrater(v43->X, v43->Y, v43->Width, v43->Height, 0); /*0x486270*/
//DUPDEF         }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           BridgeBitfield = ((CellClass*)((CellClass *)NeighbourContent))->GetBridgeBitfield(); /*0x485d30*/
//DUPDEF           v13 = ((unsigned int *)NeighbourContent)[2]; /*0x485d32*/
//DUPDEF           v70 = BridgeBitfield; /*0x485d38*/
//DUPDEF           if ( v13 == -1 || BridgeBitfield <= 15 && IDA_BYTE2(((unsigned int *)NeighbourContent)[0]) / 3 != BridgeBitfield ) /*0x485d5f*/
//DUPDEF           {
//DUPDEF             v14 = ((BuildingClass*)(NeighbourContent))->GetPlacementRect(v97); /*0x485d86*/
//DUPDEF             v15 = House::GetStartCoords((House *)NeighbourContent, v92); /*0x485d92*/
//DUPDEF             if ( v15[2] <= 0 || v15[3] <= 0 ) /*0x485da7*/
//DUPDEF             {
//DUPDEF               v76 = v14[2]; /*0x485e60*/
//DUPDEF               v20 = v14[3]; /*0x485e67*/
//DUPDEF             }
//DUPDEF             else
//DUPDEF             {
//DUPDEF               v66 = v14[2]; /*0x485db2*/
//DUPDEF               if ( v66 <= 0 || (v71 = v14[3], v71 <= 0) ) /*0x485dc5*/
//DUPDEF               {
//DUPDEF                 v23 = v15[2]; /*0x485e43*/
//DUPDEF                 v20 = v15[3]; /*0x485e4b*/
//DUPDEF                 v76 = v23; /*0x485e4e*/
//DUPDEF               }
//DUPDEF               else
//DUPDEF               {
//DUPDEF                 v16 = *v15; /*0x485dc7*/
//DUPDEF                 v17 = *v14; /*0x485dc9*/
//DUPDEF                 v18 = v15[2]; /*0x485dcc*/
//DUPDEF                 v19 = v15[1]; /*0x485dcf*/
//DUPDEF                 v20 = v15[3]; /*0x485dd2*/
//DUPDEF                 v21 = v16 <= *v14; /*0x485dd5*/
//DUPDEF                 v80 = v18; /*0x485dd7*/
//DUPDEF                 if ( !v21 ) /*0x485dde*/
//DUPDEF                 {
//DUPDEF                   v18 += v16 - v17; /*0x485de2*/
//DUPDEF                   v16 = v17; /*0x485de4*/
//DUPDEF                   v80 = v18; /*0x485de6*/
//DUPDEF                 }
//DUPDEF                 v22 = v14[1]; /*0x485ded*/
//DUPDEF                 v72 = v22; /*0x485df2*/
//DUPDEF                 if ( v19 > v22 ) /*0x485df6*/
//DUPDEF                 {
//DUPDEF                   v20 += v19 - v22; /*0x485dfa*/
//DUPDEF                   v19 = v22; /*0x485dfc*/
//DUPDEF                 }
//DUPDEF                 if ( v16 + v18 < v17 + v66 ) /*0x485e08*/
//DUPDEF                   v80 = v17 - v16 + v66 + 1; /*0x485e14*/
//DUPDEF                 if ( v20 + v19 < v71 + v72 ) /*0x485e2a*/
//DUPDEF                   v20 = v71 + v72 - v19 + 1; /*0x485e2f*/
//DUPDEF                 v76 = v80; /*0x485e3a*/
//DUPDEF               }
//DUPDEF             }
//DUPDEF             v77 = v20; /*0x485e6e*/
//DUPDEF             ((unsigned int *)NeighbourContent)[2] = 126; /*0x485f28*/
//DUPDEF             v24 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x485f47*/
//DUPDEF             IDA_BYTE2(((unsigned int *)NeighbourContent)[0]) = 3 * v70 + abs32(v24 % 3); /*0x485f69*/
//DUPDEF             House::AnnounceUpgrade((House *)NeighbourContent, -1); /*0x485f71*/
//DUPDEF             v78[0] = DSurface_ViewBounds.field_0; /*0x485f81*/
//DUPDEF             v78[1] = DSurface_ViewBounds.field_4; /*0x485f8f*/
//DUPDEF             v25 = (struct tagRECT *)House::GetStartCoords((House *)NeighbourContent, v94); /*0x485fa5*/
//DUPDEF             v26 = (struct tagRECT *)((BuildingClass*)(NeighbourContent))->GetPlacementRect(v95); /*0x485faa*/
//DUPDEF             if ( v25->right <= 0 || v25->bottom <= 0 ) /*0x485fbf*/
//DUPDEF             {
//DUPDEF               rcDst = *v26; /*0x48607b*/
//DUPDEF             }
//DUPDEF             else
//DUPDEF             {
//DUPDEF               right = v26->right; /*0x485fca*/
//DUPDEF               if ( right <= 0 || (v70 = v26->bottom, v70 <= 0) ) /*0x485fdd*/
//DUPDEF               {
//DUPDEF                 rcDst = *v25; /*0x48605e*/
//DUPDEF               }
//DUPDEF               else
//DUPDEF               {
//DUPDEF                 left = v25->left; /*0x485fdf*/
//DUPDEF                 v28 = v26->left; /*0x485fe1*/
//DUPDEF                 v29 = v25->right; /*0x485fe3*/
//DUPDEF                 top = v25->top; /*0x485fe6*/
//DUPDEF                 bottom = v25->bottom; /*0x485fe9*/
//DUPDEF                 v21 = left <= v26->left; /*0x485fec*/
//DUPDEF                 v82 = v29; /*0x485fee*/
//DUPDEF                 if ( !v21 ) /*0x485ff5*/
//DUPDEF                 {
//DUPDEF                   v29 += left - v28; /*0x485ff9*/
//DUPDEF                   left = v28; /*0x485ffb*/
//DUPDEF                   v82 = v29; /*0x485ffd*/
//DUPDEF                 }
//DUPDEF                 v32 = v26->top; /*0x486004*/
//DUPDEF                 v71 = v32; /*0x486009*/
//DUPDEF                 if ( top > v32 ) /*0x48600d*/
//DUPDEF                 {
//DUPDEF                   bottom += top - v32; /*0x486011*/
//DUPDEF                   top = v32; /*0x486013*/
//DUPDEF                 }
//DUPDEF                 if ( left + v29 >= v28 + right ) /*0x48601f*/
//DUPDEF                   v33 = v82; /*0x48602d*/
//DUPDEF                 else
//DUPDEF                   v33 = v28 - left + right + 1; /*0x486027*/
//DUPDEF                 if ( bottom + top < v71 + v70 ) /*0x486043*/
//DUPDEF                   bottom = v71 + v70 - top + 1; /*0x486048*/
//DUPDEF                 rcDst.left = left; /*0x48604a*/
//DUPDEF                 rcDst.top = top; /*0x48604e*/
//DUPDEF                 rcDst.right = v33; /*0x486052*/
//DUPDEF                 rcDst.bottom = bottom; /*0x486056*/
//DUPDEF               }
//DUPDEF             }
//DUPDEF             v34 = Rect::Union(&rcDst, v62, v64); /*0x4860a4*/
//DUPDEF             v54 = *(unsigned int *)(v34 + 12); /*0x4860af*/
//DUPDEF             v49 = *(unsigned int *)(v34 + 8); /*0x4860b7*/
//DUPDEF             v35 = (Coord2D *)CellStruct_Copy((CellStruct *)v34, &v84); /*0x4860cb*/
//DUPDEF             v36 = Coord2D::Sub(v35, &v89, v78); /*0x4860d2*/
//DUPDEF             v37 = Rect::Construct(&v91, v36, v49, v54); /*0x4860df*/
//DUPDEF             Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x486124*/
//DUPDEF             v9 = v68; /*0x486129*/
//DUPDEF             v1 = v73; /*0x48612d*/
//DUPDEF           }
//DUPDEF         }
//DUPDEF         ((BuildingClass*)((int *)&stru_87F5F0_raw.__pad_58[416]))->AddUpgrade((BuildingTypeClass *)&((unsigned int *)NeighbourContent)[0]); /*0x48627e*/
//DUPDEF       }
//DUPDEF       v9 += 2; /*0x486283*/
//DUPDEF       v68 = v9; /*0x486289*/
//DUPDEF       if ( v9 >= 8 ) /*0x48628d*/
//DUPDEF       {
//DUPDEF         BuildingClass::CreateIdleAnim(v1); /*0x486295*/
//DUPDEF         goto LABEL_62; /*0x48629a*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   IDA_BYTE2(((unsigned int *)v1)[0]) = 2 * IDA_LOBYTE(((unsigned int *)v1)[0]) + (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1) + 51; /*0x4862c0*/
//DUPDEF   LABEL_62:
//DUPDEF   v59 = (const RECT *)CellStruct_Copy(&DSurface_ViewBounds, v83); /*0x4862c6*/
//DUPDEF   v48 = (struct tagRECT *)((BuildingClass*)(v1))->GetPlacementRect(v90); /*0x4862f0*/
//DUPDEF   House::GetStartCoords((House *)v1, v88); /*0x4862fb*/
//DUPDEF   v44 = (struct tagRECT *)Rect::Union(v48, &v87, v59); /*0x486309*/
//DUPDEF   v45 = (Bounds *)Rect::Union(v44, v52, v60); /*0x48631a*/
//DUPDEF   v46 = Bounds::Subtract(v45, v53, v61); /*0x486321*/
//DUPDEF   Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0); /*0x486366*/
//DUPDEF   House::AnnounceUpgrade((House *)v1, -1); /*0x48636f*/
//DUPDEF }
//DUPDEF // 0x44e3a0
//DUPDEF bool BuildingClass::CheckOverlapWithOthers() {
//DUPDEF   int v2; // ebp
//DUPDEF   unsigned short *v3; // esi
//DUPDEF   BuildingClass *v4; // eax
//DUPDEF   char v6; // [esp+13h] [ebp-9h]
//DUPDEF   int v7; // [esp+14h] [ebp-8h]
//DUPDEF   int16_t v8[2]; // [esp+18h] [ebp-4h] BYREF
//DUPDEF 
//DUPDEF   v2 = *(unsigned int *)(*((int (**)(BuildingClass *, int16_t *))this->vtable1 + 110))(this, v8); /*0x44e3b8*/
//DUPDEF   v3 = (unsigned short *)(*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 66))(this, 0); /*0x44e3cf*/
//DUPDEF   v6 = 0; /*0x44e3d1*/
//DUPDEF   LABEL_2:
//DUPDEF   while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x44e3e3*/
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v7) = v2 + *v3; /*0x44e3eb*/
//DUPDEF     IDA_HIWORD(v7) = IDA_HIWORD(v2) + v3[1]; /*0x44e3f8*/
//DUPDEF     *(unsigned int *)v8 = v7; /*0x44e401*/
//DUPDEF     v3 += 2; /*0x44e40a*/
//DUPDEF     v4 = (BuildingClass *)*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v8) + 57); /*0x44e412*/
//DUPDEF     if ( v4 ) /*0x44e41a*/
//DUPDEF     {
//DUPDEF       while ( this == v4 ) /*0x44e41e*/
//DUPDEF       {
//DUPDEF         v4 = (BuildingClass *)((unsigned int *)v4)[0]; /*0x44e420*/
//DUPDEF         if ( !v4 ) /*0x44e425*/
//DUPDEF           goto LABEL_2; /*0x44e425*/
//DUPDEF       }
//DUPDEF       v6 = 1; /*0x44e429*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return v6; /*0x44e434*/
//DUPDEF }
//DUPDEF // IDA 0x44e400: check footprint blocked
//DUPDEF // 0x4578c0
//DUPDEF bool BuildingClass::IsFootprintBlocked() {
//DUPDEF   int result; // eax
//DUPDEF   int *v3; // eax
//DUPDEF   BuildingTypeClass *Type; // ecx
//DUPDEF   int FoundationWidth; // eax
//DUPDEF   int *v6; // ecx
//DUPDEF   int v7; // ebx
//DUPDEF   int v8; // edi
//DUPDEF   int16_t v9; // si
//DUPDEF   int16_t v10; // di
//DUPDEF   int16_t v11; // si
//DUPDEF   Object *v12; // eax
//DUPDEF   BuildingClass *ClosestObjectCell; // eax
//DUPDEF   WTFMode *v14; // eax
//DUPDEF   int v15; // [esp+10h] [ebp-30h]
//DUPDEF   int v16; // [esp+14h] [ebp-2Ch]
//DUPDEF   int v17; // [esp+18h] [ebp-28h]
//DUPDEF   int v18; // [esp+1Ch] [ebp-24h]
//DUPDEF   int16_t v15[2]; // [esp+20h] [ebp-20h] BYREF
//DUPDEF   int16_t v16[2]; // [esp+24h] [ebp-1Ch] BYREF
//DUPDEF   int v22; // [esp+2Ch] [ebp-14h] BYREF
//DUPDEF   int v23; // [esp+30h] [ebp-10h]
//DUPDEF   unsigned int v24[2]; // [esp+38h] [ebp-8h] BYREF
//DUPDEF 
//DUPDEF   if ( !TechnoClass::ShouldNotBeCloaked((float *)this) ) /*0x4578c9*/
//DUPDEF   {
//DUPDEF     v3 = (int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 110))(this, &v22); /*0x4578e0*/
//DUPDEF     Type = this->Type; /*0x4578e8*/
//DUPDEF     v23 = *v3; /*0x4578ee*/
//DUPDEF     FoundationWidth = ((BuildingTypeClass*)(Type))->GetFoundationWidth(); /*0x4578f2*/
//DUPDEF     v6 = (int *)this->Type; /*0x4578f7*/
//DUPDEF     v7 = FoundationWidth; /*0x4578fd*/
//DUPDEF     v22 = FoundationWidth; /*0x457901*/
//DUPDEF     result = ((BuildingTypeClass*)(v6))->GetFoundationHeight(0); /*0x457905*/
//DUPDEF     v8 = -1; /*0x45790a*/
//DUPDEF     result = result; /*0x457910*/
//DUPDEF     v18 = -1; /*0x457914*/
//DUPDEF     if ( v7 < -1 ) /*0x457918*/
//DUPDEF     {
//DUPDEF   LABEL_13:
//DUPDEF       IDA_LOBYTE(result) = 0; /*0x4579f3*/
//DUPDEF       return result; /*0x4579fc*/
//DUPDEF     }
//DUPDEF     while ( 1 ) /*0x45791e*/
//DUPDEF     {
//DUPDEF       v9 = -1; /*0x45791e*/
//DUPDEF       v17 = -1; /*0x457924*/
//DUPDEF       if ( result >= -1 ) /*0x457928*/
//DUPDEF         break; /*0x457928*/
//DUPDEF   LABEL_12:
//DUPDEF       v18 = ++v8; /*0x4579e9*/
//DUPDEF       if ( v8 > v7 ) /*0x4579ed*/
//DUPDEF         goto LABEL_13; /*0x4579ed*/
//DUPDEF     }
//DUPDEF     v10 = v23 + v8; /*0x457932*/
//DUPDEF     while ( 1 ) /*0x45793b*/
//DUPDEF     {
//DUPDEF       v24[0] = 0; /*0x45793b*/
//DUPDEF       v24[1] = 0; /*0x45793f*/
//DUPDEF       v11 = IDA_HIWORD(v23) + v9; /*0x457944*/
//DUPDEF       IDA_LOWORD(v15) = v10; /*0x45794e*/
//DUPDEF       IDA_HIWORD(v15) = v11; /*0x457953*/
//DUPDEF       *(unsigned int *)v15 = v15; /*0x457963*/
//DUPDEF       v12 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v15); /*0x457967*/
//DUPDEF       ClosestObjectCell = (BuildingClass *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45796e*/
//DUPDEF       if ( ClosestObjectCell == this ) /*0x457975*/
//DUPDEF       {
//DUPDEF         IDA_LOWORD(v16) = v10; /*0x457977*/
//DUPDEF         IDA_HIWORD(v16) = v11; /*0x45797c*/
//DUPDEF         *(unsigned int *)v16 = v16; /*0x457991*/
//DUPDEF         v14 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v16); /*0x457995*/
//DUPDEF         ClosestObjectCell = (BuildingClass *)WTFMode::FindObjectByType(v14, 0); /*0x45799c*/
//DUPDEF       }
//DUPDEF       if ( ClosestObjectCell ) /*0x4579a3*/
//DUPDEF       {
//DUPDEF         if ( ((unsigned int *)ClosestObjectCell)[0] != ((unsigned int *)this)[0] ) /*0x4579b3*/
//DUPDEF         {
//DUPDEF           result = (*((int (**)(BuildingClass *))ClosestObjectCell->vtable1 + 33))(ClosestObjectCell); /*0x4579b9*/
//DUPDEF           if ( result->qC9D ) /*0x4579bf*/
//DUPDEF             break; /*0x4579bf*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF       result = result; /*0x4579cd*/
//DUPDEF       v9 = ++v17; /*0x4579d1*/
//DUPDEF       if ( v17 > result ) /*0x4579d8*/
//DUPDEF       {
//DUPDEF         v7 = v22; /*0x4579de*/
//DUPDEF         v8 = v18; /*0x4579e2*/
//DUPDEF         goto LABEL_12; /*0x4579e2*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   IDA_LOBYTE(result) = 1; /*0x457a00*/
//DUPDEF   return result; /*0x4579f3*/
//DUPDEF }
//DUPDEF /* ASM:
//DUPDEF sub     esp, 30h
//DUPDEF push    ebx
//DUPDEF push    ebp
//DUPDEF push    esi
//DUPDEF push    edi
//DUPDEF mov     ebp, ecx
//DUPDEF call    TechnoClass__ShouldNotBeCloaked
//DUPDEF test    al, al
//DUPDEF jnz     loc_4579FD
//DUPDEF mov     eax, [ebp+0]
//DUPDEF lea     ecx, [esp+40h+var_14]
//DUPDEF push    ecx
//DUPDEF mov     ecx, ebp
//DUPDEF call    dword ptr [eax+1B8h]
//DUPDEF mov     edx, [eax]
//DUPDEF mov     ecx, [ebp+520h]
//DUPDEF mov     [esp+40h+var_10], edx
//DUPDEF call    BuildingTypeClass__GetFoundationWidth
//DUPDEF mov     ecx, [ebp+520h]
//DUPDEF mov     ebx, eax
//DUPDEF push    0
//DUPDEF mov     [esp+44h+var_14], ebx
//DUPDEF call    BuildingTypeClass__GetFoundationHeight
//DUPDEF or      edi, 0FFFFFFFFh
//DUPDEF cmp     ebx, 0FFFFFFFFh
//DUPDEF mov     [esp+40h+var_18], eax
//DUPDEF mov     [esp+40h+var_24], edi
//DUPDEF jl      loc_4579F3
//DUPDEF 
//DUPDEF loc_45791E:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+12D↓j
//DUPDEF or      esi, 0FFFFFFFFh
//DUPDEF cmp     eax, 0FFFFFFFFh
//DUPDEF mov     [esp+40h+var_28], esi
//DUPDEF jl      loc_4579E6
//DUPDEF mov     eax, [esp+40h+var_10]
//DUPDEF add     edi, eax
//DUPDEF 
//DUPDEF loc_457934:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+118↓j
//DUPDEF mov     ecx, [esp+40h+var_10+2]
//DUPDEF xor     eax, eax
//DUPDEF push    eax
//DUPDEF mov     [esp+44h+var_8], eax
//DUPDEF mov     [esp+44h+var_4], eax
//DUPDEF push    eax
//DUPDEF add     esi, ecx
//DUPDEF lea     eax, [esp+48h+var_8]
//DUPDEF lea     ecx, [esp+48h+var_20]
//DUPDEF mov     word ptr [esp+48h+var_30], di
//DUPDEF mov     word ptr [esp+48h+var_30+2], si
//DUPDEF mov     edx, [esp+48h+var_30]
//DUPDEF push    eax
//DUPDEF push    ecx
//DUPDEF mov     ecx, 87F7E8h
//DUPDEF mov     [esp+50h+var_20], edx
//DUPDEF call    CellCoord__To_CellObj
//DUPDEF mov     ecx, eax
//DUPDEF call    Object__FindClosestObjectCell
//DUPDEF cmp     eax, ebp
//DUPDEF jnz     short loc_4579A1
//DUPDEF mov     word ptr [esp+40h+var_2C], di
//DUPDEF mov     word ptr [esp+40h+var_2C+2], si
//DUPDEF mov     edx, [esp+40h+var_2C]
//DUPDEF lea     eax, [esp+40h+var_1C]
//DUPDEF push    0
//DUPDEF push    eax
//DUPDEF mov     ecx, 87F7E8h
//DUPDEF mov     [esp+48h+var_1C], edx
//DUPDEF call    CellCoord__To_CellObj
//DUPDEF mov     ecx, eax
//DUPDEF call    WTFMode__FindObjectByType
//DUPDEF 
//DUPDEF loc_4579A1:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+B5↑j
//DUPDEF test    eax, eax
//DUPDEF jz      short loc_4579C9
//DUPDEF mov     ecx, [eax+21Ch]
//DUPDEF mov     edx, [ebp+21Ch]
//DUPDEF cmp     ecx, edx
//DUPDEF jz      short loc_4579C9
//DUPDEF mov     edx, [eax]
//DUPDEF mov     ecx, eax
//DUPDEF call    dword ptr [edx+84h]
//DUPDEF mov     cl, [eax+0C9Dh]
//DUPDEF test    cl, cl
//DUPDEF jnz     short loc_4579FD
//DUPDEF 
//DUPDEF loc_4579C9:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+E3↑j
//DUPDEF ; BuildingClass__IsFootprintBlocked+F3↑j
//DUPDEF mov     esi, [esp+40h+var_28]
//DUPDEF mov     eax, [esp+40h+var_18]
//DUPDEF inc     esi
//DUPDEF cmp     esi, eax
//DUPDEF mov     [esp+40h+var_28], esi
//DUPDEF jle     loc_457934
//DUPDEF mov     ebx, [esp+40h+var_14]
//DUPDEF mov     edi, [esp+40h+var_24]
//DUPDEF 
//DUPDEF loc_4579E6:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+68↑j
//DUPDEF inc     edi
//DUPDEF cmp     edi, ebx
//DUPDEF mov     [esp+40h+var_24], edi
//DUPDEF jle     loc_45791E
//DUPDEF 
//DUPDEF loc_4579F3:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+58↑j
//DUPDEF pop     edi
//DUPDEF pop     esi
//DUPDEF pop     ebp
//DUPDEF xor     al, al
//DUPDEF pop     ebx
//DUPDEF add     esp, 30h
//DUPDEF retn
//DUPDEF ; ---------------------------------------------------------------------------
//DUPDEF 
//DUPDEF loc_4579FD:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+10↑j
//DUPDEF ; BuildingClass__IsFootprintBlocked+107↑j
//DUPDEF pop     edi
//DUPDEF pop     esi
//DUPDEF pop     ebp
//DUPDEF mov     al, 1
//DUPDEF pop     ebx
//DUPDEF add     esp, 30h
//DUPDEF retn
//DUPDEF */
//DUPDEF }
//DUPDEF void BuildingClass::DamageFactoryBibCells() {
//DUPDEF // 0x44d880
//DUPDEF void BuildingClass::ClearFactoryBib() {}
//DUPDEF   double v1; // st7
//DUPDEF   BuildingTypeClass *Type; // eax
//DUPDEF   int v4; // esi
//DUPDEF   int16_t v5; // dx
//DUPDEF   int v6; // eax
//DUPDEF   unsigned int v7; // edi
//DUPDEF   int v8; // edi
//DUPDEF   unsigned short *v9; // eax
//DUPDEF   int v10; // edx
//DUPDEF   int16_t v11; // cx
//DUPDEF   unsigned short *v12; // edx
//DUPDEF   int16_t v13; // bx
//DUPDEF   int16_t v14; // bx
//DUPDEF   int16_t v15; // cx
//DUPDEF   int v16; // ebx
//DUPDEF   void *v17; // eax
//DUPDEF   int v18; // eax
//DUPDEF   int v19; // ebx
//DUPDEF   void *v20; // eax
//DUPDEF   int v21; // eax
//DUPDEF   int v22; // edx
//DUPDEF   int *v23; // eax
//DUPDEF   int v24; // edx
//DUPDEF   int v25; // eax
//DUPDEF   int v26; // eax
//DUPDEF   void *v27; // eax
//DUPDEF   unsigned int *v28; // eax
//DUPDEF   char v29; // al
//DUPDEF   unsigned int *v30; // eax
//DUPDEF   int v31; // eax
//DUPDEF   int v32; // edi
//DUPDEF   void *v33; // eax
//DUPDEF   int v35; // eax
//DUPDEF   char v37; // cl
//DUPDEF   int (__thiscall **vtable0)(BuildingClass *, unsigned char *); // edx
//DUPDEF   unsigned short *v39; // eax
//DUPDEF   int16_t v40; // cx
//DUPDEF   int Member; // eax
//DUPDEF   int v42; // esi
//DUPDEF   char v43; // cl
//DUPDEF   int v46; // ecx
//DUPDEF   char *v47; // eax
//DUPDEF   int v48; // eax
//DUPDEF   int v50; // eax
//DUPDEF   int *v51; // ebx
//DUPDEF   int v52; // eax
//DUPDEF   unsigned short *v53; // eax
//DUPDEF   int16_t v54; // dx
//DUPDEF   int v55; // edi
//DUPDEF   void *v56; // eax
//DUPDEF   unsigned int *m_Size; // edi
//DUPDEF   int v58; // eax
//DUPDEF   int v59; // eax
//DUPDEF   int v60; // eax
//DUPDEF   int InstanceCOM; // eax
//DUPDEF   void *m_Data; // eax
//DUPDEF   int (__stdcall ***Checked)(unsigned int, int *, void **); // eax
//DUPDEF   int v64; // esi
//DUPDEF   int v66; // ecx
//DUPDEF   int v67; // esi
//DUPDEF   int v68; // esi
//DUPDEF   int m_Position; // eax
//DUPDEF   int v70; // edx
//DUPDEF   int StreamClass_field_0C; // eax
//DUPDEF   int v73; // eax
//DUPDEF   uint8_t (__thiscall **v74)(BuildingClass *); // edx
//DUPDEF   void (__thiscall **v75)(BuildingClass *); // edx
//DUPDEF   BuildingTypeClass *v76; // ecx
//DUPDEF   void (__thiscall **v77)(BuildingClass *); // eax
//DUPDEF   int LandHeight; // [esp+34h] [ebp-5Ch]
//DUPDEF   int v79; // [esp+34h] [ebp-5Ch]
//DUPDEF   int16_t *p_m_Position; // [esp+3Ch] [ebp-54h]
//DUPDEF   int v81; // [esp+40h] [ebp-50h]
//DUPDEF   char v82; // [esp+52h] [ebp-3Eh]
//DUPDEF   bool v83; // [esp+53h] [ebp-3Dh]
//DUPDEF   StreamClass v84; // [esp+54h] [ebp-3Ch] BYREF
//DUPDEF   unsigned int i; // [esp+68h] [ebp-28h] BYREF
//DUPDEF   void *v86; // [esp+6Ch] [ebp-24h] BYREF
//DUPDEF   char v87; // [esp+70h] [ebp-20h] BYREF
//DUPDEF   int v88; // [esp+74h] [ebp-1Ch] BYREF
//DUPDEF   int64_t v89; // [esp+78h] [ebp-18h]
//DUPDEF   int v90; // [esp+80h] [ebp-10h] BYREF
//DUPDEF   char v91[12]; // [esp+84h] [ebp-Ch] BYREF
//DUPDEF 
//DUPDEF   if ( (*((int (**)(BuildingClass *))this->vtable1 + 258))(this) > 0 ) /*0x44d896*/
//DUPDEF     BuildingClass::UnloadUnits(this, 0, 0); /*0x44d89c*/
//DUPDEF   Type = this->Type; /*0x44d8a1*/
//DUPDEF   if ( !Type->UnitAbsorb && !Type->InfantryAbsorb || ((unsigned int *)this)[0] <= 0 )
//DUPDEF   {
//DUPDEF     if ( Type->WeaponsFactory )
//DUPDEF     {
//DUPDEF       v37 = ((unsigned int *)Type)[1]; /*0x44dcc7*/
//DUPDEF       v88 = 0; /*0x44dccd*/
//DUPDEF       v89 = 0; /*0x44dcd3*/
//DUPDEF       if ( !v37 ) /*0x44dcdb*/
//DUPDEF       {
//DUPDEF         vtable0 = (int (**)(BuildingClass *, unsigned char *))this->TechnoClass; /*0x44dce3*/
//DUPDEF         i = *(unsigned int *)(Type->FoundationOutside[0] + 40); /*0x44dcf0*/
//DUPDEF         v39 = (unsigned short *)vtable0[110](this, &v87); /*0x44dcf4*/
//DUPDEF         v40 = IDA_HIWORD(i) + v39[1]; /*0x44dd01*/
//DUPDEF         IDA_LOWORD(v84.StreamClass_field_0C) = *v39 + i; /*0x44dd06*/
//DUPDEF         IDA_HIWORD(v84.StreamClass_field_0C) = v40; /*0x44dd0b*/
//DUPDEF         v88 = ((int16_t)(IDA_LOWORD(v84.StreamClass_field_0C) - 1) << 8) + 128; /*0x44dd30*/
//DUPDEF         v89 = (unsigned int)((v40 << 8) + 128); /*0x44dd34*/
//DUPDEF       }
//DUPDEF       switch ( ((unsigned int *)this)[0] )
//DUPDEF       {
//DUPDEF         case 0:
//DUPDEF           Member = Team::GetMember((Team *)this, 0); /*0x44dd59*/
//DUPDEF           v42 = Member; /*0x44dd5e*/
//DUPDEF           if ( Member ) /*0x44dd62*/
//DUPDEF           {
//DUPDEF             (*(void (**)(int, int, unsigned int))(*(unsigned int *)Member + 488))(Member, 5, 0); /*0x44dd6b*/
//DUPDEF             (*(void (**)(int))(*(unsigned int *)v42 + 492))(v42); /*0x44dd75*/
//DUPDEF           }
//DUPDEF           RateScaler::Init((RateScaler *)((unsigned int *)this)[0], *(double *)this->((unsigned int *)Type)[0]); /*0x44dd95*/
//DUPDEF           v43 = this->((unsigned int *)Type)[1]; /*0x44dda2*/
//DUPDEF           ((unsigned int *)this)[0] = 1; /*0x44dda8*/
//DUPDEF           ((unsigned int *)this)[0] = v43 != 0 ? 4 : 1;
//DUPDEF           ((BuildingClass*)(this))->ClearAnims(18); /*0x44ddbf*/
//DUPDEF           BuildingClass::GetHealthRatio(this); /*0x44ddc6*/
//DUPDEF           _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44ddcb*/
//DUPDEF           __asm /*0x44ddd1*/
//DUPDEF           {
//DUPDEF             fcomp qword ptr [edx+1700h]
//DUPDEF             fnstsw ax
//DUPDEF           }
//DUPDEF           if ( (_AX & 0x4100) != 0 ) /*0x44dddc*/
//DUPDEF           {
//DUPDEF             v46 = 1; /*0x44dde4*/
//DUPDEF             v47 = &this->Type->__pad_F70[524]; /*0x44dde9*/
//DUPDEF           }
//DUPDEF           else
//DUPDEF           {
//DUPDEF             v46 = 0; /*0x44ddf6*/
//DUPDEF             v47 = &this->Type->__pad_F70[508]; /*0x44ddf8*/
//DUPDEF           }
//DUPDEF           if ( v47 && *v47 ) /*0x44de05*/
//DUPDEF             ((BuildingClass*)(this))->PlayAnim(*(int *)&DSurface_ViewBounds.__pad_FC[324], v47, 8, v46, 0, 0); /*0x44de16*/
//DUPDEF           break; /*0x44de1b*/
//DUPDEF         case 1:
//DUPDEF           if ( !AnimClass::resetAnimation((AnimClass *)this) ) /*0x44de22*/
//DUPDEF           {
//DUPDEF             Debug::Log(); /*0x44de34*/
//DUPDEF             ((unsigned int *)this)[0] = 2; /*0x44de3c*/
//DUPDEF           }
//DUPDEF           break; /*0x44de46*/
//DUPDEF         case 2:
//DUPDEF           if ( (uint8_t)BuildingClass::CheckPowerFlags((BuildingClass *)((unsigned int *)this)[0]) ) /*0x44de53*/
//DUPDEF           {
//DUPDEF             v48 = Team::GetMember((Team *)this, 0); /*0x44de63*/
//DUPDEF             v84.m_Size = v48; /*0x44de6a*/
//DUPDEF             if ( !v48 ) /*0x44de6e*/
//DUPDEF               goto LABEL_112; /*0x44de6e*/
//DUPDEF             v48 = v48; /*0x44de74*/
//DUPDEF             (*(void (**)(int, int, unsigned int))(*(unsigned int *)v48 + 488))(v48, 2, 0); /*0x44de7e*/
//DUPDEF             v50 = *(unsigned int *)(v48 + 1652); /*0x44de84*/
//DUPDEF             v51 = (int *)(v48 + 1652); /*0x44de8a*/
//DUPDEF             v84.StreamClass_field_0C = 0; /*0x44de92*/
//DUPDEF             if ( !v50 ) /*0x44de9a*/
//DUPDEF               goto LABEL_57; /*0x44de9a*/
//DUPDEF             v52 = StreamClass::Set2((StreamClass *)&v84.StreamClass_field_0C, v51); /*0x44dea1*/
//DUPDEF             if ( v52 < 0 && v52 != -2147467262 ) /*0x44deaf*/
//DUPDEF               WinAPI::Wrapper(v52); /*0x44deb2*/
//DUPDEF             if ( !v84.StreamClass_field_0C ) /*0x44debd*/
//DUPDEF   LABEL_57:
//DUPDEF               WinAPI::Wrapper(-2147467261); /*0x44dec4*/
//DUPDEF             (*(void (**)(int, int *))(*(unsigned int *)v84.StreamClass_field_0C + 12))( /*0x44ded5*/
//DUPDEF               v84.StreamClass_field_0C,
//DUPDEF               &v90);
//DUPDEF             if ( !memcmp(&v90, &stru_7E9A50, 0x10u) || !memcmp(&v90, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x44df00*/
//DUPDEF             {
//DUPDEF               v58 = *v51; /*0x44dfad*/
//DUPDEF               *(unsigned int *)v84.__pad_0 = 0; /*0x44dfaf*/
//DUPDEF               if ( v58 ) /*0x44dfb9*/
//DUPDEF               {
//DUPDEF                 v59 = StreamClass::Set(&v84, v51); /*0x44dfc0*/
//DUPDEF                 if ( v59 < 0 && v59 != -2147467262 ) /*0x44dfce*/
//DUPDEF                   WinAPI::Wrapper(v59); /*0x44dfd1*/
//DUPDEF                 if ( *(unsigned int *)v84.__pad_0 /*0x44dfe1*/
//DUPDEF                   && (*(uint8_t (**)(unsigned int))(**(unsigned int **)v84.__pad_0 + 28))(*(unsigned int *)v84.__pad_0) )
//DUPDEF                 {
//DUPDEF                   if ( *v51 ) /*0x44dfe8*/
//DUPDEF                     (*(void (**)(int))(*(unsigned int *)*v51 + 8))(*v51); /*0x44dff1*/
//DUPDEF                   v60 = *(unsigned int *)v84.__pad_0; /*0x44dff4*/
//DUPDEF                   *v51 = 0; /*0x44dff8*/
//DUPDEF                   if ( !v60 ) /*0x44e000*/
//DUPDEF                     WinAPI::Wrapper(-2147467261); /*0x44e007*/
//DUPDEF                   (*(void (**)(int, int *))(*(unsigned int *)v60 + 16))(v60, v51); /*0x44e014*/
//DUPDEF                 }
//DUPDEF               }
//DUPDEF               v84.m_Position = 0; /*0x44e024*/
//DUPDEF               InstanceCOM = CreateInstanceCOM((ObjectClass *)&v84.m_Position, (IID *)&stru_7E9A30, 0, 7u); /*0x44e02c*/
//DUPDEF               if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x44e03a*/
//DUPDEF                 WinAPI::Wrapper(InstanceCOM); /*0x44e03d*/
//DUPDEF               if ( !v84.m_Position ) /*0x44e048*/
//DUPDEF                 WinAPI::Wrapper(-2147467261); /*0x44e04f*/
//DUPDEF               m_Size = (unsigned int *)v84.m_Size; /*0x44e058*/
//DUPDEF               (*(void (**)(int, int))(*(unsigned int *)v84.m_Position + 12))(v84.m_Position, v84.m_Size); /*0x44e060*/
//DUPDEF               m_Data = 0; /*0x44e067*/
//DUPDEF               v84.m_Data = 0; /*0x44e06b*/
//DUPDEF               if ( v84.m_Position ) /*0x44e06f*/
//DUPDEF               {
//DUPDEF                 Checked = (int (***)(unsigned int, int *, void **))Stream::GetChecked((Stream *)&v84.m_Position); /*0x44e075*/
//DUPDEF                 v64 = (**Checked)(Checked, &((unsigned int *)&stru_818E00)[17], &v86); /*0x44e089*/
//DUPDEF                 if ( v64 >= 0 ) /*0x44e08d*/
//DUPDEF                 {
//DUPDEF                   v86 = v86; /*0x44e0a0*/
//DUPDEF                   Release2COM((ObjectClass *)&v84.m_Data); /*0x44e0a8*/
//DUPDEF                   m_Data = v86; /*0x44e0ad*/
//DUPDEF                   m_Size = (unsigned int *)v84.m_Size; /*0x44e0af*/
//DUPDEF                   v84.m_Data = m_Data; /*0x44e0b3*/
//DUPDEF                 }
//DUPDEF                 else
//DUPDEF                 {
//DUPDEF                   Release2COM((ObjectClass *)&v84.m_Data); /*0x44e093*/
//DUPDEF                   m_Data = 0; /*0x44e098*/
//DUPDEF                   v84.m_Data = 0; /*0x44e09a*/
//DUPDEF                 }
//DUPDEF                 if ( v64 < 0 && v64 != -2147467262 ) /*0x44e0c1*/
//DUPDEF                   WinAPI::Wrapper(v64); /*0x44e0c4*/
//DUPDEF               }
//DUPDEF               v66 = *(unsigned int *)v84.__pad_0; /*0x44e0cd*/
//DUPDEF               if ( *(void **)v84.__pad_0 != m_Data ) /*0x44e0d3*/
//DUPDEF               {
//DUPDEF                 v67 = *(unsigned int *)v84.__pad_0; /*0x44e0d5*/
//DUPDEF                 *(unsigned int *)v84.__pad_0 = m_Data; /*0x44e0db*/
//DUPDEF                 ((CellClass*)((CellClass *)&v84))->SetField2C(); /*0x44e0df*/
//DUPDEF                 if ( v67 ) /*0x44e0e6*/
//DUPDEF                   (*(void (**)(int))(*(unsigned int *)v67 + 8))(v67); /*0x44e0eb*/
//DUPDEF                 v66 = *(unsigned int *)v84.__pad_0; /*0x44e0ee*/
//DUPDEF                 m_Data = v84.m_Data; /*0x44e0f2*/
//DUPDEF               }
//DUPDEF               if ( m_Data ) /*0x44e0f8*/
//DUPDEF               {
//DUPDEF                 (*(void (**)(void *))(*(unsigned int *)m_Data + 8))(m_Data); /*0x44e0fd*/
//DUPDEF                 v66 = *(unsigned int *)v84.__pad_0; /*0x44e100*/
//DUPDEF               }
//DUPDEF               if ( v66 ) /*0x44e106*/
//DUPDEF               {
//DUPDEF                 (*(void (**)(int, int))(*(unsigned int *)v66 + 12))(v66, *v51); /*0x44e10e*/
//DUPDEF                 v68 = *v51; /*0x44e111*/
//DUPDEF                 m_Position = v84.m_Position; /*0x44e113*/
//DUPDEF                 if ( *v51 != v84.m_Position ) /*0x44e119*/
//DUPDEF                 {
//DUPDEF                   *v51 = v84.m_Position; /*0x44e11d*/
//DUPDEF                   if ( m_Position ) /*0x44e11f*/
//DUPDEF                     (*(void (**)(int))(*(unsigned int *)m_Position + 4))(m_Position); /*0x44e124*/
//DUPDEF                   if ( v68 ) /*0x44e129*/
//DUPDEF                     (*(void (**)(int))(*(unsigned int *)v68 + 8))(v68); /*0x44e12e*/
//DUPDEF                 }
//DUPDEF                 if ( !*v51 ) /*0x44e131*/
//DUPDEF                   WinAPI::Wrapper(-2147467261); /*0x44e13b*/
//DUPDEF                 (*(void (**)(int, int, int, unsigned int, unsigned int))(*(unsigned int *)*v51 + 112))( /*0x44e160*/
//DUPDEF                   *v51,
//DUPDEF                   66,
//DUPDEF                   v88,
//DUPDEF                   v89,
//DUPDEF                   IDA_HIDWORD(v89));
//DUPDEF               }
//DUPDEF               else
//DUPDEF               {
//DUPDEF                 v70 = *m_Size; /*0x44e168*/
//DUPDEF                 v86 = (void *)m_Size[27]; /*0x44e16a*/
//DUPDEF                 (*(void (**)(unsigned int *, void **, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v70 + 364))( /*0x44e18b*/
//DUPDEF                   m_Size,
//DUPDEF                   &v86,
//DUPDEF                   0,
//DUPDEF                   *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
//DUPDEF                   0,
//DUPDEF                   1,
//DUPDEF                   0,
//DUPDEF                   0);
//DUPDEF               }
//DUPDEF               if ( v84.m_Position ) /*0x44e197*/
//DUPDEF                 (*(void (**)(int))(*(unsigned int *)v84.m_Position + 8))(v84.m_Position); /*0x44e19c*/
//DUPDEF               if ( *(unsigned int *)v84.__pad_0 ) /*0x44e1a5*/
//DUPDEF                 (*(void (**)(unsigned int))(**(unsigned int **)v84.__pad_0 + 8))(*(unsigned int *)v84.__pad_0); /*0x44e1aa*/
//DUPDEF             }
//DUPDEF             else if ( !memcmp(&v90, &stru_7E9A30, 0x10u) ) /*0x44df1a*/
//DUPDEF             {
//DUPDEF               if ( !*v51 ) /*0x44df72*/
//DUPDEF                 WinAPI::Wrapper(-2147467261); /*0x44df7c*/
//DUPDEF               (*(void (**)(int, int, int, unsigned int, unsigned int))(*(unsigned int *)*v51 + 112))( /*0x44dfa1*/
//DUPDEF                 *v51,
//DUPDEF                 66,
//DUPDEF                 v88,
//DUPDEF                 v89,
//DUPDEF                 IDA_HIDWORD(v89));
//DUPDEF               m_Size = (unsigned int *)v84.m_Size; /*0x44dfa4*/
//DUPDEF             }
//DUPDEF             else
//DUPDEF             {
//DUPDEF               v53 = (unsigned short *)(*((int (**)(BuildingClass *, char *))this->vtable1 + 110))(this, &v87); /*0x44df26*/
//DUPDEF               v54 = v53[1] + 1; /*0x44df3b*/
//DUPDEF               IDA_LOWORD(v84.m_Position) = *v53 + 4; /*0x44df3d*/
//DUPDEF               IDA_HIWORD(v84.m_Position) = v54; /*0x44df42*/
//DUPDEF               i = v84.m_Position; /*0x44df52*/
//DUPDEF               v55 = *(unsigned int *)v84.m_Size; /*0x44df56*/
//DUPDEF               v56 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&i); /*0x44df5d*/
//DUPDEF               (*(void (**)(int, void *, int))(v55 + 1152))(v84.m_Size, v56, 1); /*0x44df65*/
//DUPDEF               m_Size = (unsigned int *)v84.m_Size; /*0x44df6b*/
//DUPDEF             }
//DUPDEF             (*(void (**)(unsigned int *, unsigned int, int))(*m_Size + 1348))(m_Size, 0, 1071644672); /*0x44e1b8*/
//DUPDEF             StreamClass_field_0C = v84.StreamClass_field_0C; /*0x44e1be*/
//DUPDEF             ((unsigned int *)this)[0] = 3; /*0x44e1c2*/
//DUPDEF             if ( StreamClass_field_0C ) /*0x44e1ce*/
//DUPDEF               (*(void (**)(int))(*(unsigned int *)StreamClass_field_0C + 8))(StreamClass_field_0C); /*0x44e1d7*/
//DUPDEF           }
//DUPDEF           break; /*0x44e1da*/
//DUPDEF         case 3:
//DUPDEF           if ( !((unsigned int *)this)[0] ) /*0x44e202*/
//DUPDEF           {
//DUPDEF   LABEL_112:
//DUPDEF             Timer::StartDouble((Timer *)((unsigned int *)this)[0], *(double *)this->((unsigned int *)Type)[0]); /*0x44e20c*/
//DUPDEF             ((unsigned int *)this)[0] = 4; /*0x44e22b*/
//DUPDEF           }
//DUPDEF           break; /*0x44e231*/
//DUPDEF         case 4:
//DUPDEF           if ( (uint8_t)Flag::CheckNone((Flag *)((unsigned int *)this)[0]) || this->((unsigned int *)Type)[1] ) /*0x44e248*/
//DUPDEF           {
//DUPDEF             (*((void (**)(BuildingClass *, unsigned int, int))this->vtable1 + 289))(this, 0, 1); /*0x44e25a*/
//DUPDEF             ((unsigned int *)this)[0] = 1; /*0x44e260*/
//DUPDEF           }
//DUPDEF           break; /*0x44e260*/
//DUPDEF         default:
//DUPDEF           break;
//DUPDEF       }
//DUPDEF       _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44e267*/
//DUPDEF       __asm /*0x44e26e*/
//DUPDEF       {
//DUPDEF         fld qword ptr [eax+10h]
//DUPDEF         fmul ds:dbl_7E27F8
//DUPDEF       }
//DUPDEF       IDA_LOWORD(v73) = Math::RoundToInt(v1); /*0x44e277*/
//DUPDEF       return v73 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44e29c*/
//DUPDEF     }
//DUPDEF     if ( ((unsigned int *)Type)[0] && ((unsigned int *)Type)[0] ) /*0x44e2b0*/
//DUPDEF     {
//DUPDEF       if ( ((unsigned int *)this)[0] ) /*0x44e2be*/
//DUPDEF       {
//DUPDEF         (*((void (**)(BuildingClass *))this->vtable1 + 262))(this); /*0x44e333*/
//DUPDEF         v76 = this->Type; /*0x44e339*/
//DUPDEF         v77 = (void (**)(BuildingClass *))this->TechnoClass; /*0x44e33f*/
//DUPDEF         ((unsigned int *)this)[0] = 0; /*0x44e342*/
//DUPDEF         this->HasExtraPowerDrain = 0; /*0x44e349*/
//DUPDEF         ((unsigned int *)this)[0] = ((unsigned int *)v76)[0]; /*0x44e359*/
//DUPDEF         v77[261](this); /*0x44e35f*/
//DUPDEF         goto LABEL_124; /*0x44e35f*/
//DUPDEF       }
//DUPDEF       (*((void (**)(BuildingClass *))this->vtable1 + 262))(this); /*0x44e2cd*/
//DUPDEF       v74 = (uint8_t (**)(BuildingClass *))this->TechnoClass; /*0x44e2d9*/
//DUPDEF       ((unsigned int *)this)[0] = this->((unsigned int *)Type)[0]; /*0x44e2e3*/
//DUPDEF       if ( v74[212](this) ) /*0x44e2eb*/
//DUPDEF       {
//DUPDEF         (*((void (**)(BuildingClass *))this->vtable1 + 261))(this); /*0x44e2fa*/
//DUPDEF         ((unsigned int *)this)[0] = 1; /*0x44e300*/
//DUPDEF         this->HasExtraPowerDrain = 1; /*0x44e306*/
//DUPDEF   LABEL_124:
//DUPDEF         IDA_LOBYTE(((unsigned int *)this)[0]->HouseClass_field_timer_B[2]) = 1; /*0x44e365*/
//DUPDEF         goto LABEL_125; /*0x44e36b*/
//DUPDEF       }
//DUPDEF       v75 = (void (**)(BuildingClass *))this->TechnoClass; /*0x44e31d*/
//DUPDEF       ((unsigned int *)this)[0] = this->((unsigned int *)Type)[0]; /*0x44e320*/
//DUPDEF       v75[261](this); /*0x44e326*/
//DUPDEF     }
//DUPDEF   LABEL_125:
//DUPDEF     (*((void (**)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x44e371*/
//DUPDEF     return 1; /*0x44e381*/
//DUPDEF   }
//DUPDEF   v4 = LinkedList::Pop((LinkedList *)((unsigned int *)this)[0]); /*0x44d8d8*/
//DUPDEF   if ( !v4 ) /*0x44d8dc*/
//DUPDEF     goto LABEL_35; /*0x44d8dc*/
//DUPDEF   v5 = *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v86); /*0x44d8f2*/
//DUPDEF   IDA_LOBYTE(v6) = 0; /*0x44d8f5*/
//DUPDEF   v82 = 1; /*0x44d8fc*/
//DUPDEF   IDA_LOWORD(v84.StreamClass_field_0C) = v5 + 0x7FFF; /*0x44d901*/
//DUPDEF   v84.m_Size = 0; /*0x44d90e*/
//DUPDEF   v7 = (((unsigned int)v84.StreamClass_field_0C >> 12) + 1) >> 1; /*0x44d912*/
//DUPDEF   for ( i = v7; ; IDA_LOBYTE(v7) = i ) /*0x44d914*/
//DUPDEF   {
//DUPDEF     v8 = ((unsigned char)v6 + (unsigned char)v7) & 7; /*0x44d92a*/
//DUPDEF     v9 = (unsigned short *)(*((int (**)(BuildingClass *, char *))this->vtable1 + 110))(this, &v87); /*0x44d92d*/
//DUPDEF     v10 = v8 & 7; /*0x44d938*/
//DUPDEF     v11 = IDA_LOWORD(g_DDrawSurfaceManager_raw.scenario[v10 + 82]) + *v9; /*0x44d93f*/
//DUPDEF     v12 = (unsigned short *)(4 * v10 + 9041544); /*0x44d947*/
//DUPDEF     v13 = v12[1]; /*0x44d94e*/
//DUPDEF     IDA_LOWORD(v84.StreamClass_field_0C) = v11; /*0x44d952*/
//DUPDEF     v14 = v9[1] + v13; /*0x44d95a*/
//DUPDEF     IDA_LOWORD(v84.m_Position) = *v12 + v11; /*0x44d95e*/
//DUPDEF     v15 = v14 + v12[1]; /*0x44d967*/
//DUPDEF     IDA_HIWORD(v84.StreamClass_field_0C) = v14; /*0x44d96a*/
//DUPDEF     v16 = *(unsigned int *)v4; /*0x44d973*/
//DUPDEF     IDA_HIWORD(v84.m_Position) = v15; /*0x44d975*/
//DUPDEF     *(unsigned int *)v84.__pad_0 = v84.StreamClass_field_0C; /*0x44d980*/
//DUPDEF     v84.m_Data = (void *)v84.m_Position; /*0x44d984*/
//DUPDEF     LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d98d*/
//DUPDEF     v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v84.m_Data); /*0x44d999*/
//DUPDEF     v18 = (*(int (**)(int, void *, int, int, unsigned int, int))(v16 + 428))(v4, v17, v8, LandHeight, 0, 1); /*0x44d9a1*/
//DUPDEF     v19 = *(unsigned int *)v4; /*0x44d9a7*/
//DUPDEF     v83 = v18 == 0; /*0x44d9b1*/
//DUPDEF     v79 = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d9bb*/
//DUPDEF     v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v84.__pad_0); /*0x44d9c7*/
//DUPDEF     if ( !(*(int (**)(int, void *, int, int, unsigned int, int))(v19 + 428))(v4, v20, v8, v79, 0, 1) ) /*0x44d9cf*/
//DUPDEF       break; /*0x44d9cf*/
//DUPDEF     if ( !v82 ) /*0x44da20*/
//DUPDEF       goto LABEL_13; /*0x44da20*/
//DUPDEF   LABEL_17:
//DUPDEF     v21 = v84.m_Size; /*0x44da22*/
//DUPDEF     if ( v84.m_Size == 7 ) /*0x44da2c*/
//DUPDEF     {
//DUPDEF       v21 = 0; /*0x44da2e*/
//DUPDEF       v82 = 0; /*0x44da30*/
//DUPDEF     }
//DUPDEF   LABEL_14:
//DUPDEF     v6 = v21 + 1; /*0x44da07*/
//DUPDEF     v84.m_Size = v6; /*0x44da0b*/
//DUPDEF     if ( v6 >= 8 ) /*0x44da0f*/
//DUPDEF       goto LABEL_34; /*0x44da0f*/
//DUPDEF   }
//DUPDEF   if ( !v83 && v82 ) /*0x44d9e7*/
//DUPDEF     goto LABEL_17; /*0x44d9e7*/
//DUPDEF   if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v84.__pad_0) + 80) & 0x100) != 0 ) /*0x44da01*/
//DUPDEF   {
//DUPDEF   LABEL_13:
//DUPDEF     v21 = v84.m_Size; /*0x44da03*/
//DUPDEF     goto LABEL_14; /*0x44da03*/
//DUPDEF   }
//DUPDEF   ++dword_A8E7AC; /*0x44da55*/
//DUPDEF   v22 = *(unsigned int *)v4; /*0x44da5f*/
//DUPDEF   v89 = (unsigned int)((*(int16_t *)&v84.__pad_0[2] << 8) + 128); /*0x44da66*/
//DUPDEF   v88 = (*(int16_t *)v84.__pad_0 << 8) + 128; /*0x44da6c*/
//DUPDEF   if ( (*(int (**)(int))(v22 + 44))(v4) == 15 ) /*0x44da76*/
//DUPDEF   {
//DUPDEF     v23 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v88, 0); /*0x44da89*/
//DUPDEF     v88 = *v23; /*0x44da90*/
//DUPDEF     IDA_LODWORD(v89) = v23[1]; /*0x44da97*/
//DUPDEF     v24 = v23[2]; /*0x44da9b*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v25 = *(unsigned int *)v4; /*0x44dabc*/
//DUPDEF     v84.StreamClass_field_0C = 0; /*0x44dac6*/
//DUPDEF     v26 = (*(int (**)(int, int))(v25 + 132))(v4, -1); /*0x44dad4*/
//DUPDEF     v84.m_Data = (void *)*LayerClass::Pathfinding_Find( /*0x44dafb*/
//DUPDEF                             &stru_87F5F0_raw.__pad_58[416],
//DUPDEF                             (int)&v84.m_Data,
//DUPDEF                             &v88,
//DUPDEF                             (int16_t *)&v84.m_Data,
//DUPDEF                             *(unsigned int *)(v26 + 1660),
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             1,
//DUPDEF                             1,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             1,
//DUPDEF                             (char)&v84.StreamClass_field_0C,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             v81);
//DUPDEF     v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v84.m_Data); /*0x44db05*/
//DUPDEF     v28 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v27 + 72))(v27, v91); /*0x44db13*/
//DUPDEF     i = *(unsigned int *)CellStruct_Set((CellStruct *)&v87, *v28 / 256, v28[1] / 256); /*0x44db42*/
//DUPDEF     v24 = 0; /*0x44db5f*/
//DUPDEF     v88 = ((int16_t)i << 8) + 128; /*0x44db61*/
//DUPDEF     IDA_LODWORD(v89) = (IDA_SHIWORD(i) << 8) + 128; /*0x44db65*/
//DUPDEF   }
//DUPDEF   IDA_LOWORD(i) = (unsigned short)v8 << 13; /*0x44db6c*/
//DUPDEF   IDA_HIDWORD(v89) = v24; /*0x44db84*/
//DUPDEF   v29 = (*(int (**)(int, int *, unsigned int))(v4->q0D8)( /*0x44db8e*/
//DUPDEF           v4,
//DUPDEF           &v88,
//DUPDEF           (uint8_t)(((i >> 7) + 1) >> 1));
//DUPDEF   --dword_A8E7AC; /*0x44db9d*/
//DUPDEF   if ( !v29 ) /*0x44dba3*/
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     ((CellClass*)((CellClass *)((unsigned int *)this)[0]))->AddObject((unsigned int *)v4); /*0x44dc6e*/
//DUPDEF     (*(void (**)(int))(v4->q11C)(v4); /*0x44dc7e*/
//DUPDEF     goto LABEL_35; /*0x44dc7e*/
//DUPDEF   }
//DUPDEF   if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
//DUPDEF   {
//DUPDEF     v30 = (unsigned int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 18))(this, &v90); /*0x44dbc5*/
//DUPDEF     StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 628), v30, 0); /*0x44dbd5*/
//DUPDEF     v31 = v4->q21C; /*0x44dbda*/
//DUPDEF     if ( *(unsigned char *)(v31 + 492) ) /*0x44dbe0*/
//DUPDEF       *(unsigned char *)(v4 + 1679) = 0; /*0x44dbea*/
//DUPDEF     if ( !v4->ImpactLandSound ) /*0x44dbf1*/
//DUPDEF     {
//DUPDEF       ++*(unsigned int *)(v31 + 756); /*0x44dc02*/
//DUPDEF       v4->ImpactLandSound = 1; /*0x44dc08*/
//DUPDEF     }
//DUPDEF     v4->u8_439 = 0; /*0x44dc0f*/
//DUPDEF   }
//DUPDEF   (*(void (**)(int, int, unsigned int, int))(v4->q1E8)(v4, 2, 0, v81); /*0x44dc1e*/
//DUPDEF   v32 = *(unsigned int *)v4; /*0x44dc28*/
//DUPDEF   if ( v84.__pad_0[2] ) /*0x44dc2e*/
//DUPDEF     p_m_Position = (int16_t *)&v84.m_Position; /*0x44dc34*/
//DUPDEF   else
//DUPDEF     p_m_Position = (int16_t *)&v84.m_Data; /*0x44dc3b*/
//DUPDEF   v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], p_m_Position); /*0x44dc41*/
//DUPDEF   (*(void (**)(int, void *))(v32 + 1152))(v4, v33); /*0x44dc49*/
//DUPDEF   if ( this->Type->ExtraPowerBonus > 0 ) /*0x44dc5d*/
//DUPDEF     IDA_LOBYTE(((unsigned int *)this)[0]->HouseClass_field_timer_B[2]) = 1; /*0x44dc65*/
//DUPDEF   LABEL_35:
//DUPDEF   _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44dc84*/
//DUPDEF   __asm /*0x44dc8b*/
//DUPDEF   {
//DUPDEF     fld qword ptr [eax+10h]
//DUPDEF     fmul ds:dbl_7E27F8
//DUPDEF   }
//DUPDEF   IDA_LOWORD(v35) = Math::RoundToInt(v1); /*0x44dc94*/
//DUPDEF   return v35 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44dcb1*/
//DUPDEF }
//DUPDEF   v4 = LinkedList::Pop((LinkedList *)this->passengers); /*0x44d8d8*/
//DUPDEF   if ( !v4 ) /*0x44d8dc*/
//DUPDEF     goto LABEL_35; /*0x44d8dc*/
//DUPDEF   v5 = *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v86); /*0x44d8f2*/
//DUPDEF   IDA_LOBYTE(v6) = 0; /*0x44d8f5*/
//DUPDEF   v82 = 1; /*0x44d8fc*/
//DUPDEF   IDA_LOWORD(v84.StreamClass_field_0C) = v5 + 0x7FFF; /*0x44d901*/
//DUPDEF   v84.m_Size = 0; /*0x44d90e*/
//DUPDEF   v7 = (((unsigned int)v84.StreamClass_field_0C >> 12) + 1) >> 1; /*0x44d912*/
//DUPDEF   for ( i = v7; ; IDA_LOBYTE(v7) = i ) /*0x44d914*/
//DUPDEF   {
//DUPDEF     v8 = ((unsigned char)v6 + (unsigned char)v7) & 7; /*0x44d92a*/
//DUPDEF     v9 = (unsigned short *)(*((int (**)(BuildingClass *, char *))this->vtable1 + 110))(this, &v87); /*0x44d92d*/
//DUPDEF     v10 = v8 & 7; /*0x44d938*/
//DUPDEF     v11 = IDA_LOWORD(g_DDrawSurfaceManager_raw.scenario[v10 + 82]) + *v9; /*0x44d93f*/
//DUPDEF     v12 = (unsigned short *)(4 * v10 + 9041544); /*0x44d947*/
//DUPDEF     v13 = v12[1]; /*0x44d94e*/
//DUPDEF     IDA_LOWORD(v84.StreamClass_field_0C) = v11; /*0x44d952*/
//DUPDEF     v14 = v9[1] + v13; /*0x44d95a*/
//DUPDEF     IDA_LOWORD(v84.m_Position) = *v12 + v11; /*0x44d95e*/
//DUPDEF     v15 = v14 + v12[1]; /*0x44d967*/
//DUPDEF     IDA_HIWORD(v84.StreamClass_field_0C) = v14; /*0x44d96a*/
//DUPDEF     v16 = *(unsigned int *)v4; /*0x44d973*/
//DUPDEF     IDA_HIWORD(v84.m_Position) = v15; /*0x44d975*/
//DUPDEF     *(unsigned int *)v84.__pad_0 = v84.StreamClass_field_0C; /*0x44d980*/
//DUPDEF     v84.m_Data = (void *)v84.m_Position; /*0x44d984*/
//DUPDEF     LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d98d*/
//DUPDEF     v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v84.m_Data); /*0x44d999*/
//DUPDEF     v18 = (*(int (**)(int, void *, int, int, unsigned int, int))(v16 + 428))(v4, v17, v8, LandHeight, 0, 1); /*0x44d9a1*/
//DUPDEF     v19 = *(unsigned int *)v4; /*0x44d9a7*/
//DUPDEF     v83 = v18 == 0; /*0x44d9b1*/
//DUPDEF     v79 = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d9bb*/
//DUPDEF     v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v84.__pad_0); /*0x44d9c7*/
//DUPDEF     if ( !(*(int (**)(int, void *, int, int, unsigned int, int))(v19 + 428))(v4, v20, v8, v79, 0, 1) ) /*0x44d9cf*/
//DUPDEF       break; /*0x44d9cf*/
//DUPDEF     if ( !v82 ) /*0x44da20*/
//DUPDEF       goto LABEL_13; /*0x44da20*/
//DUPDEF   LABEL_17:
//DUPDEF     v21 = v84.m_Size; /*0x44da22*/
//DUPDEF     if ( v84.m_Size == 7 ) /*0x44da2c*/
//DUPDEF     {
//DUPDEF       v21 = 0; /*0x44da2e*/
//DUPDEF       v82 = 0; /*0x44da30*/
//DUPDEF     }
//DUPDEF   LABEL_14:
//DUPDEF     v6 = v21 + 1; /*0x44da07*/
//DUPDEF     v84.m_Size = v6; /*0x44da0b*/
//DUPDEF     if ( v6 >= 8 ) /*0x44da0f*/
//DUPDEF       goto LABEL_34; /*0x44da0f*/
//DUPDEF   }
//DUPDEF   if ( !v83 && v82 ) /*0x44d9e7*/
//DUPDEF     goto LABEL_17; /*0x44d9e7*/
//DUPDEF   if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v84.__pad_0) + 80) & 0x100) != 0 ) /*0x44da01*/
//DUPDEF   {
//DUPDEF   LABEL_13:
//DUPDEF     v21 = v84.m_Size; /*0x44da03*/
//DUPDEF     goto LABEL_14; /*0x44da03*/
//DUPDEF   }
//DUPDEF   ++unk_A8E7AC; /*0x44da55*/
//DUPDEF   v22 = *(unsigned int *)v4; /*0x44da5f*/
//DUPDEF   v89 = (unsigned int)((*(int16_t *)&v84.__pad_0[2] << 8) + 128); /*0x44da66*/
//DUPDEF   v88 = (*(int16_t *)v84.__pad_0 << 8) + 128; /*0x44da6c*/
//DUPDEF   if ( (*(int (**)(int))(v22 + 44))(v4) == 15 ) /*0x44da76*/
//DUPDEF   {
//DUPDEF     v23 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v88, 0); /*0x44da89*/
//DUPDEF     v88 = *v23; /*0x44da90*/
//DUPDEF     IDA_LODWORD(v89) = v23[1]; /*0x44da97*/
//DUPDEF     v24 = v23[2]; /*0x44da9b*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v25 = *(unsigned int *)v4; /*0x44dabc*/
//DUPDEF     v84.StreamClass_field_0C = 0; /*0x44dac6*/
//DUPDEF     v26 = (*(int (**)(int, int))(v25 + 132))(v4, -1); /*0x44dad4*/
//DUPDEF     v84.m_Data = (void *)*LayerClass::Pathfinding_Find( /*0x44dafb*/
//DUPDEF                             &stru_87F5F0_raw.__pad_58[416],
//DUPDEF                             (int)&v84.m_Data,
//DUPDEF                             &v88,
//DUPDEF                             (int16_t *)&v84.m_Data,
//DUPDEF                             *(unsigned int *)(v26 + 1660),
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             1,
//DUPDEF                             1,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             1,
//DUPDEF                             (char)&v84.StreamClass_field_0C,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             v81);
//DUPDEF     v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v84.m_Data); /*0x44db05*/
//DUPDEF     v28 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v27 + 72))(v27, v91); /*0x44db13*/
//DUPDEF     i = *(unsigned int *)CellStruct_Set((CellStruct *)&v87, *v28 / 256, v28[1] / 256); /*0x44db42*/
//DUPDEF     v24 = 0; /*0x44db5f*/
//DUPDEF     v88 = ((int16_t)i << 8) + 128; /*0x44db61*/
//DUPDEF     IDA_LODWORD(v89) = (IDA_SHIWORD(i) << 8) + 128; /*0x44db65*/
//DUPDEF   }
//DUPDEF   IDA_LOWORD(i) = (unsigned short)v8 << 13; /*0x44db6c*/
//DUPDEF   IDA_HIDWORD(v89) = v24; /*0x44db84*/
//DUPDEF   v29 = (*(int (**)(int, int *, unsigned int))(v4->q0D8)( /*0x44db8e*/
//DUPDEF           v4,
//DUPDEF           &v88,
//DUPDEF           (uint8_t)(((i >> 7) + 1) >> 1));
//DUPDEF   --unk_A8E7AC; /*0x44db9d*/
//DUPDEF   if ( !v29 ) /*0x44dba3*/
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     ((CellClass*)((CellClass *)this->passengers))->AddObject((unsigned int *)v4); /*0x44dc6e*/
//DUPDEF     (*(void (**)(int))(v4->q11C)(v4); /*0x44dc7e*/
//DUPDEF     goto LABEL_35; /*0x44dc7e*/
//DUPDEF   }
//DUPDEF   if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
//DUPDEF   {
//DUPDEF     v30 = (unsigned int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 18))(this, &v90); /*0x44dbc5*/
//DUPDEF     StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 628), v30, 0); /*0x44dbd5*/
//DUPDEF     v31 = v4->q21C; /*0x44dbda*/
//DUPDEF     if ( *(unsigned char *)(v31 + 492) ) /*0x44dbe0*/
//DUPDEF       *(unsigned char *)(v4 + 1679) = 0; /*0x44dbea*/
//DUPDEF     if ( !v4->ImpactLandSound ) /*0x44dbf1*/
//DUPDEF     {
//DUPDEF       ++*(unsigned int *)(v31 + 756); /*0x44dc02*/
//DUPDEF       v4->ImpactLandSound = 1; /*0x44dc08*/
//DUPDEF     }
//DUPDEF     v4->u8_439 = 0; /*0x44dc0f*/
//DUPDEF   }
//DUPDEF   (*(void (**)(int, int, unsigned int, int))(v4->q1E8)(v4, 2, 0, v81); /*0x44dc1e*/
//DUPDEF   v32 = *(unsigned int *)v4; /*0x44dc28*/
//DUPDEF   if ( v84.__pad_0[2] ) /*0x44dc2e*/
//DUPDEF     p_m_Position = (int16_t *)&v84.m_Position; /*0x44dc34*/
//DUPDEF   else
//DUPDEF     p_m_Position = (int16_t *)&v84.m_Data; /*0x44dc3b*/
//DUPDEF   v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], p_m_Position); /*0x44dc41*/
//DUPDEF   (*(void (**)(int, void *))(v32 + 1152))(v4, v33); /*0x44dc49*/
//DUPDEF   if ( this->Type->ExtraPowerBonus > 0 ) /*0x44dc5d*/
//DUPDEF     IDA_LOBYTE(this->owner->HouseClass_field_timer_B[2]) = 1; /*0x44dc65*/
//DUPDEF   LABEL_35:
//DUPDEF   _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44dc84*/
//DUPDEF   __asm /*0x44dc8b*/
//DUPDEF   {
//DUPDEF     fld qword ptr [eax+10h]
//DUPDEF     fmul ds:dbl_7E27F8
//DUPDEF   }
//DUPDEF   IDA_LOWORD(v35) = Math::RoundToInt(v1); /*0x44dc94*/
//DUPDEF   return v35 + Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44dcb1*/
//DUPDEF }
//DUPDEF   v4 = LinkedList::Pop((LinkedList *)this->passengers); /*0x44d8d8*/
//DUPDEF   if ( !v4 ) /*0x44d8dc*/
//DUPDEF     goto LABEL_35; /*0x44d8dc*/
//DUPDEF   v5 = *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v86); /*0x44d8f2*/
//DUPDEF   IDA_LOBYTE(v6) = 0; /*0x44d8f5*/
//DUPDEF   v82 = 1; /*0x44d8fc*/
//DUPDEF   IDA_LOWORD(v88.StreamClass_field_0C) = v5 + 0x7FFF; /*0x44d901*/
//DUPDEF   v88.m_Size = 0; /*0x44d90e*/
//DUPDEF   v7 = (((unsigned int)v88.StreamClass_field_0C >> 12) + 1) >> 1; /*0x44d912*/
//DUPDEF   for ( i = v7; ; IDA_LOBYTE(v7) = i ) /*0x44d914*/
//DUPDEF   {
//DUPDEF     v8 = ((unsigned char)v6 + (unsigned char)v7) & 7; /*0x44d92a*/
//DUPDEF     v9 = (unsigned short *)(*((int (**)(BuildingClass *, char *))this->vtable1 + 110))(this, &v87); /*0x44d92d*/
//DUPDEF     v10 = v8 & 7; /*0x44d938*/
//DUPDEF     v11 = IDA_LOWORD(g_DDrawSurfaceManager_raw.scenario[v10 + 82]) + *v9; /*0x44d93f*/
//DUPDEF     v12 = (unsigned short *)(4 * v10 + 9041544); /*0x44d947*/
//DUPDEF     v13 = v12[1]; /*0x44d94e*/
//DUPDEF     IDA_LOWORD(v88.StreamClass_field_0C) = v11; /*0x44d952*/
//DUPDEF     v14 = v9[1] + v13; /*0x44d95a*/
//DUPDEF     IDA_LOWORD(v88.m_Position) = *v12 + v11; /*0x44d95e*/
//DUPDEF     v15 = v14 + v12[1]; /*0x44d967*/
//DUPDEF     IDA_HIWORD(v88.StreamClass_field_0C) = v14; /*0x44d96a*/
//DUPDEF     v16 = *(unsigned int *)v4; /*0x44d973*/
//DUPDEF     IDA_HIWORD(v88.m_Position) = v15; /*0x44d975*/
//DUPDEF     *(unsigned int *)v88.__pad_0 = v88.StreamClass_field_0C; /*0x44d980*/
//DUPDEF     v88.m_Data = (void *)v88.m_Position; /*0x44d984*/
//DUPDEF     LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d98d*/
//DUPDEF     v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v88.m_Data); /*0x44d999*/
//DUPDEF     v18 = (*(int (**)(int, void *, int, int, unsigned int, int))(v16 + 428))(v4, v17, v8, LandHeight, 0, 1); /*0x44d9a1*/
//DUPDEF     v19 = *(unsigned int *)v4; /*0x44d9a7*/
//DUPDEF     v83 = v18 == 0; /*0x44d9b1*/
//DUPDEF     v79 = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d9bb*/
//DUPDEF     v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v88.__pad_0); /*0x44d9c7*/
//DUPDEF     if ( !(*(int (**)(int, void *, int, int, unsigned int, int))(v19 + 428))(v4, v20, v8, v79, 0, 1) ) /*0x44d9cf*/
//DUPDEF       break; /*0x44d9cf*/
//DUPDEF     if ( !v82 ) /*0x44da20*/
//DUPDEF       goto LABEL_13; /*0x44da20*/
//DUPDEF   LABEL_17:
//DUPDEF     v21 = v88.m_Size; /*0x44da22*/
//DUPDEF     if ( v88.m_Size == 7 ) /*0x44da2c*/
//DUPDEF     {
//DUPDEF       v21 = 0; /*0x44da2e*/
//DUPDEF       v82 = 0; /*0x44da30*/
//DUPDEF     }
//DUPDEF   LABEL_14:
//DUPDEF     v6 = v21 + 1; /*0x44da07*/
//DUPDEF     v88.m_Size = v6; /*0x44da0b*/
//DUPDEF     if ( v6 >= 8 ) /*0x44da0f*/
//DUPDEF       goto LABEL_34; /*0x44da0f*/
//DUPDEF   }
//DUPDEF   if ( !v83 && v82 ) /*0x44d9e7*/
//DUPDEF     goto LABEL_17; /*0x44d9e7*/
//DUPDEF   if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)v88.__pad_0) + 80) & 0x100) != 0 ) /*0x44da01*/
//DUPDEF   {
//DUPDEF   LABEL_13:
//DUPDEF     v21 = v88.m_Size; /*0x44da03*/
//DUPDEF     goto LABEL_14; /*0x44da03*/
//DUPDEF   }
//DUPDEF   ++unk_A8E7AC; /*0x44da55*/
//DUPDEF   v22 = *(unsigned int *)v4; /*0x44da5f*/
//DUPDEF   v89 = (unsigned int)((*(int16_t *)&v88.__pad_0[2] << 8) + 128); /*0x44da66*/
//DUPDEF   v88 = (*(int16_t *)v88.__pad_0 << 8) + 128; /*0x44da6c*/
//DUPDEF   if ( (*(int (**)(int))(v22 + 44))(v4) == 15 ) /*0x44da76*/
//DUPDEF   {
//DUPDEF     v23 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v88, 0); /*0x44da89*/
//DUPDEF     v88 = *v23; /*0x44da90*/
//DUPDEF     IDA_LODWORD(v89) = v23[1]; /*0x44da97*/
//DUPDEF     v24 = v23[2]; /*0x44da9b*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v25 = *(unsigned int *)v4; /*0x44dabc*/
//DUPDEF     v88.StreamClass_field_0C = 0; /*0x44dac6*/
//DUPDEF     v26 = (*(int (**)(int, int))(v25 + 132))(v4, -1); /*0x44dad4*/
//DUPDEF     v88.m_Data = (void *)*LayerClass::Pathfinding_Find( /*0x44dafb*/
//DUPDEF                             &stru_87F5F0_raw.__pad_58[416],
//DUPDEF                             (int)&v88.m_Data,
//DUPDEF                             &v88,
//DUPDEF                             (int16_t *)&v88.m_Data,
//DUPDEF                             *(unsigned int *)(v26 + 1660),
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             1,
//DUPDEF                             1,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             1,
//DUPDEF                             (char)&v88.StreamClass_field_0C,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             v81);
//DUPDEF     v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v88.m_Data); /*0x44db05*/
//DUPDEF     v28 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v27 + 72))(v27, v91); /*0x44db13*/
//DUPDEF     i = *(unsigned int *)CellStruct_Set((CellStruct *)&v87, *v28 / 256, v28[1] / 256); /*0x44db42*/
//DUPDEF     v24 = 0; /*0x44db5f*/
//DUPDEF     v88 = ((int16_t)i << 8) + 128; /*0x44db61*/
//DUPDEF     IDA_LODWORD(v89) = (IDA_SHIWORD(i) << 8) + 128; /*0x44db65*/
//DUPDEF   }
//DUPDEF   IDA_LOWORD(i) = (unsigned short)v8 << 13; /*0x44db6c*/
//DUPDEF   IDA_HIDWORD(v89) = v24; /*0x44db84*/
//DUPDEF   v29 = (*(int (**)(int, int *, unsigned int))(v4->q0D8)( /*0x44db8e*/
//DUPDEF           v4,
//DUPDEF           &v88,
//DUPDEF           (uint8_t)(((i >> 7) + 1) >> 1));
//DUPDEF   --unk_A8E7AC; /*0x44db9d*/
//DUPDEF   if ( !v29 ) /*0x44dba3*/
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     ((CellClass*)((CellClass *)this->passengers))->AddObject((unsigned int *)v4); /*0x44dc6e*/
//DUPDEF     (*(void (**)(int))(v4->q11C)(v4); /*0x44dc7e*/
//DUPDEF     goto LABEL_35; /*0x44dc7e*/
//DUPDEF   }
//DUPDEF   if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
//DUPDEF   {
//DUPDEF     v30 = (unsigned int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 18))(this, &v90); /*0x44dbc5*/
//DUPDEF     StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 628), v30, 0); /*0x44dbd5*/
//DUPDEF     v31 = v4->q21C; /*0x44dbda*/
//DUPDEF     if ( *(unsigned char *)(v31 + 492) ) /*0x44dbe0*/
//DUPDEF       *(unsigned char *)(v4 + 1679) = 0; /*0x44dbea*/
//DUPDEF     if ( !v4->ImpactLandSound ) /*0x44dbf1*/
//DUPDEF     {
//DUPDEF       ++*(unsigned int *)(v31 + 756); /*0x44dc02*/
//DUPDEF       v4->ImpactLandSound = 1; /*0x44dc08*/
//DUPDEF     }
//DUPDEF     v4->u8_439 = 0; /*0x44dc0f*/
//DUPDEF   }
//DUPDEF   (*(void (**)(int, int, unsigned int, int))(v4->q1E8)(v4, 2, 0, v81); /*0x44dc1e*/
//DUPDEF   v32 = *(unsigned int *)v4; /*0x44dc28*/
//DUPDEF   if ( v88.__pad_0[2] ) /*0x44dc2e*/
//DUPDEF     p_m_Position = (int16_t *)&v88.m_Position; /*0x44dc34*/
//DUPDEF   else
//DUPDEF     p_m_Position = (int16_t *)&v88.m_Data; /*0x44dc3b*/
//DUPDEF   v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], p_m_Position); /*0x44dc41*/
//DUPDEF   (*(void (**)(int, void *))(v32 + 1152))(v4, v33); /*0x44dc49*/
//DUPDEF   if ( this->Type->ExtraPowerBonus > 0 ) /*0x44dc5d*/
//DUPDEF     IDA_LOBYTE(this->owner->HouseClass_field_timer_B[2]) = 1; /*0x44dc65*/
//DUPDEF   LABEL_35:
//DUPDEF   _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44dc84*/
//DUPDEF   __asm /*0x44dc8b*/
//DUPDEF   {
//DUPDEF     fld qword ptr [eax+10h]
//DUPDEF     fmul ds:dbl_7E27F8
//DUPDEF   }
//DUPDEF   IDA_LOWORD(v35) = Math::RoundToInt(v1); /*0x44dc94*/
//DUPDEF   return v35 + Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44dcb1*/
//DUPDEF }
//DUPDEF   v4 = LinkedList::Pop((unsigned int *)&this->nextArrayIndex9); /*0x44d8d8*/
//DUPDEF   if ( !v4 ) /*0x44d8dc*/
//DUPDEF     goto LABEL_35; /*0x44d8dc*/
//DUPDEF   v5 = *(unsigned short *)ProgressTimer::GetValue((unsigned short *)&this->u32_710, &v90); /*0x44d8f2*/
//DUPDEF   IDA_LOBYTE(v6) = 0; /*0x44d8f5*/
//DUPDEF   v82 = 1; /*0x44d8fc*/
//DUPDEF   IDA_LOWORD(v88) = v5 + 0x7FFF; /*0x44d901*/
//DUPDEF   ppv_4 = 0; /*0x44d90e*/
//DUPDEF   v7 = ((v88 >> 12) + 1) >> 1; /*0x44d912*/
//DUPDEF   for ( i = v7; ; IDA_LOBYTE(v7) = i ) /*0x44d914*/
//DUPDEF   {
//DUPDEF     v8 = ((unsigned char)v6 + (unsigned char)v7) & 7; /*0x44d92a*/
//DUPDEF     v9 = (unsigned short *)(*(int (**)(void *, int *))(*(unsigned int *)&this->suspendedMission0))(this, &v91); /*0x44d92d*/
//DUPDEF     v10 = v8 & 7; /*0x44d938*/
//DUPDEF     v11 = IDA_LOWORD(Direction_X_Offsets[v10]) + *v9; /*0x44d93f*/
//DUPDEF     v12 = (unsigned short *)(4 * v10 + 9041544); /*0x44d947*/
//DUPDEF     v13 = v12[1]; /*0x44d94e*/
//DUPDEF     IDA_LOWORD(v88) = v11; /*0x44d952*/
//DUPDEF     v14 = v9[1] + v13; /*0x44d95a*/
//DUPDEF     IDA_LOWORD(ppv) = *v12 + v11; /*0x44d95e*/
//DUPDEF     v15 = v14 + v12[1]; /*0x44d967*/
//DUPDEF     IDA_HIWORD(v88) = v14; /*0x44d96a*/
//DUPDEF     v16 = *(unsigned int *)v4; /*0x44d973*/
//DUPDEF     IDA_HIWORD(ppv) = v15; /*0x44d975*/
//DUPDEF     v88 = v88; /*0x44d980*/
//DUPDEF     v85 = (int)ppv; /*0x44d984*/
//DUPDEF     LandHeight = ObjectClass::GetLandHeight(this); /*0x44d98d*/
//DUPDEF     v17 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v85); /*0x44d999*/
//DUPDEF     v18 = (*(int (**)(int, void *, int, int, unsigned int, int))(v16 + 428))(v4, v17, v8, LandHeight, 0, 1); /*0x44d9a1*/
//DUPDEF     v19 = *(unsigned int *)v4; /*0x44d9a7*/
//DUPDEF     v83 = v18 == 0; /*0x44d9b1*/
//DUPDEF     v79 = ObjectClass::GetLandHeight(this); /*0x44d9bb*/
//DUPDEF     v20 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v88); /*0x44d9c7*/
//DUPDEF     if ( !(*(int (**)(int, void *, int, int, unsigned int, int))(v19 + 428))(v4, v20, v8, v79, 0, 1) ) /*0x44d9cf*/
//DUPDEF       break; /*0x44d9cf*/
//DUPDEF     if ( !v82 ) /*0x44da20*/
//DUPDEF       goto LABEL_13; /*0x44da20*/
//DUPDEF   LABEL_17:
//DUPDEF     v21 = ppv_4; /*0x44da22*/
//DUPDEF     if ( ppv_4 == (unsigned int *)7 ) /*0x44da2c*/
//DUPDEF     {
//DUPDEF       v21 = 0; /*0x44da2e*/
//DUPDEF       v82 = 0; /*0x44da30*/
//DUPDEF     }
//DUPDEF   LABEL_14:
//DUPDEF     v6 = (int)v21 + 1; /*0x44da07*/
//DUPDEF     ppv_4 = (unsigned int *)v6; /*0x44da0b*/
//DUPDEF     if ( v6 >= 8 ) /*0x44da0f*/
//DUPDEF       goto LABEL_34; /*0x44da0f*/
//DUPDEF   }
//DUPDEF   if ( !v83 && v82 ) /*0x44d9e7*/
//DUPDEF     goto LABEL_17; /*0x44d9e7*/
//DUPDEF   if ( (*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v88) + 80) & 0x100) != 0 ) /*0x44da01*/
//DUPDEF   {
//DUPDEF   LABEL_13:
//DUPDEF     v21 = ppv_4; /*0x44da03*/
//DUPDEF     goto LABEL_14; /*0x44da03*/
//DUPDEF   }
//DUPDEF   ++g_IKnowWhatImDoing; /*0x44da55*/
//DUPDEF   v22 = *(unsigned int *)v4; /*0x44da5f*/
//DUPDEF   v93 = (unsigned int)((IDA_SHIWORD(v88) << 8) + 128); /*0x44da66*/
//DUPDEF   v92 = ((int16_t)v88 << 8) + 128; /*0x44da6c*/
//DUPDEF   if ( (*(int (**)(int))(v22 + 44))(v4) == 15 ) /*0x44da76*/
//DUPDEF   {
//DUPDEF     v23 = ObjectPlacement::CalcPosition_Wrapper(&v94, &v92, 0); /*0x44da89*/
//DUPDEF     v92 = *v23; /*0x44da90*/
//DUPDEF     IDA_LODWORD(v93) = v23[1]; /*0x44da97*/
//DUPDEF     v24 = v23[2]; /*0x44da9b*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v25 = *(unsigned int *)v4; /*0x44dabc*/
//DUPDEF     v88 = 0; /*0x44dac6*/
//DUPDEF     v26 = (*(int (**)(int, int))(v25 + 132))(v4, -1); /*0x44dad4*/
//DUPDEF     v85 = *LayerClass::Pathfinding_Find( /*0x44dafb*/
//DUPDEF              &MapClass_Instance,
//DUPDEF              (int)&v85,
//DUPDEF              &v92,
//DUPDEF              (int16_t *)&v85,
//DUPDEF              *(unsigned int *)(v26 + 1660),
//DUPDEF              0,
//DUPDEF              0,
//DUPDEF              1,
//DUPDEF              1,
//DUPDEF              0,
//DUPDEF              0,
//DUPDEF              0,
//DUPDEF              1,
//DUPDEF              (char)&v88,
//DUPDEF              0,
//DUPDEF              0,
//DUPDEF              v81);
//DUPDEF     v27 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v85); /*0x44db05*/
//DUPDEF     v28 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v27 + 72))(v27, v95); /*0x44db13*/
//DUPDEF     i = *(unsigned int *)CellStruct_Set(&v91, *v28 / 256, v28[1] / 256); /*0x44db42*/
//DUPDEF     v24 = 0; /*0x44db5f*/
//DUPDEF     v92 = ((int16_t)i << 8) + 128; /*0x44db61*/
//DUPDEF     IDA_LODWORD(v93) = (IDA_SHIWORD(i) << 8) + 128; /*0x44db65*/
//DUPDEF   }
//DUPDEF   IDA_LOWORD(i) = (unsigned short)v8 << 13; /*0x44db6c*/
//DUPDEF   IDA_HIDWORD(v93) = v24; /*0x44db84*/
//DUPDEF   v29 = (*(int (**)(int, int *, unsigned int))(v4->q0D8)( /*0x44db8e*/
//DUPDEF           v4,
//DUPDEF           &v92,
//DUPDEF           (uint8_t)(((i >> 7) + 1) >> 1));
//DUPDEF   --g_IKnowWhatImDoing; /*0x44db9d*/
//DUPDEF   if ( !v29 ) /*0x44dba3*/
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     ((CellClass*)((unsigned int *)&this->inAirFlag))->AddObject((unsigned int *)v4); /*0x44dc6e*/
//DUPDEF     (*(void (**)(int))(v4->q11C)(v4); /*0x44dc7e*/
//DUPDEF     goto LABEL_35; /*0x44dc7e*/
//DUPDEF   }
//DUPDEF   if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
//DUPDEF   {
//DUPDEF     v30 = (*(int (**)(void *, int *))(*(unsigned int *)&this->referenceCount2))(this, &v94); /*0x44dbc5*/
//DUPDEF     StartAudioControllerAt(*(unsigned int *)&g_RulesClass_Instance->__pad_240[52], v30, 0); /*0x44dbd5*/
//DUPDEF     v31 = v4->q21C; /*0x44dbda*/
//DUPDEF     if ( *(unsigned char *)(v31 + 492) ) /*0x44dbe0*/
//DUPDEF       *(unsigned char *)(v4 + 1679) = 0; /*0x44dbea*/
//DUPDEF     if ( !v4->ImpactLandSound ) /*0x44dbf1*/
//DUPDEF     {
//DUPDEF       ++*(unsigned int *)(v31 + 756); /*0x44dc02*/
//DUPDEF       v4->ImpactLandSound = 1; /*0x44dc08*/
//DUPDEF     }
//DUPDEF     v4->u8_439 = 0; /*0x44dc0f*/
//DUPDEF   }
//DUPDEF   (*(void (**)(int, int, unsigned int, int))(v4->q1E8)(v4, 2, 0, v81); /*0x44dc1e*/
//DUPDEF   v32 = *(unsigned int *)v4; /*0x44dc28*/
//DUPDEF   if ( IDA_BYTE2(v88) ) /*0x44dc2e*/
//DUPDEF     p_ppv = &ppv; /*0x44dc34*/
//DUPDEF   else
//DUPDEF     p_ppv = (LPVOID *)&v85; /*0x44dc3b*/
//DUPDEF   v33 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)p_ppv); /*0x44dc41*/
//DUPDEF   (*(void (**)(int, void *))(v32 + 1152))(v4, v33); /*0x44dc49*/
//DUPDEF   if ( this->Type->BuildingAnim_0x15 > 0 ) /*0x44dc5d*/
//DUPDEF     *(unsigned char *)(this->owner + 22392) = 1; /*0x44dc65*/
//DUPDEF   LABEL_35:
//DUPDEF   _EAX = this->GetMissionControl(); /*0x44dc84*/
//DUPDEF   __asm /*0x44dc8b*/
//DUPDEF   {
//DUPDEF     fld qword ptr [eax+10h]
//DUPDEF     fmul ds:dbl_7E27F8
//DUPDEF   }
//DUPDEF   IDA_LOWORD(v35) = Math::RoundToInt(v1); /*0x44dc94*/
//DUPDEF   return v35 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2); /*0x44dcb1*/
//DUPDEF }
//DUPDEF   v3 = LinkedList::Pop((unsigned int *)&this->nextArrayIndex9); /*0x44d8d8*/
//DUPDEF   if ( !v3 ) /*0x44d8dc*/
//DUPDEF     goto LABEL_35; /*0x44d8dc*/
//DUPDEF   v4 = *(unsigned short *)ProgressTimer::GetValue((unsigned short *)&this->u32_710, &v85); /*0x44d8f2*/
//DUPDEF   IDA_LOBYTE(v5) = 0; /*0x44d8f5*/
//DUPDEF   v77 = 1; /*0x44d8fc*/
//DUPDEF   IDA_LOWORD(v83) = v4 + 0x7FFF; /*0x44d901*/
//DUPDEF   ppv_4 = 0; /*0x44d90e*/
//DUPDEF   v6 = ((v83 >> 12) + 1) >> 1; /*0x44d912*/
//DUPDEF   for ( i = v6; ; IDA_LOBYTE(v6) = i ) /*0x44d914*/
//DUPDEF   {
//DUPDEF     v7 = ((unsigned char)v5 + (unsigned char)v6) & 7; /*0x44d92a*/
//DUPDEF     v8 = (unsigned short *)(*(int (**)(void *, int *))(*(unsigned int *)&this->suspendedMission0))(this, &v86); /*0x44d92d*/
//DUPDEF     v9 = v7 & 7; /*0x44d938*/
//DUPDEF     v10 = IDA_LOWORD(Direction_X_Offsets[v9]) + *v8; /*0x44d93f*/
//DUPDEF     v11 = (unsigned short *)(4 * v9 + 9041544); /*0x44d947*/
//DUPDEF     v12 = v11[1]; /*0x44d94e*/
//DUPDEF     IDA_LOWORD(v83) = v10; /*0x44d952*/
//DUPDEF     v13 = v8[1] + v12; /*0x44d95a*/
//DUPDEF     IDA_LOWORD(ppv) = *v11 + v10; /*0x44d95e*/
//DUPDEF     v14 = v13 + v11[1]; /*0x44d967*/
//DUPDEF     IDA_HIWORD(v83) = v13; /*0x44d96a*/
//DUPDEF     v15 = *(unsigned int *)v3; /*0x44d973*/
//DUPDEF     IDA_HIWORD(ppv) = v14; /*0x44d975*/
//DUPDEF     v79 = v83; /*0x44d980*/
//DUPDEF     v80 = (int)ppv; /*0x44d984*/
//DUPDEF     LandHeight = ObjectClass::GetLandHeight(this); /*0x44d98d*/
//DUPDEF     v16 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v80); /*0x44d999*/
//DUPDEF     v17 = (*(int (**)(int, void *, int, int, unsigned int, int))(v15 + 428))(v3, v16, v7, LandHeight, 0, 1); /*0x44d9a1*/
//DUPDEF     v18 = *(unsigned int *)v3; /*0x44d9a7*/
//DUPDEF     v78 = v17 == 0; /*0x44d9b1*/
//DUPDEF     v74 = ObjectClass::GetLandHeight(this); /*0x44d9bb*/
//DUPDEF     v19 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v79); /*0x44d9c7*/
//DUPDEF     if ( !(*(int (**)(int, void *, int, int, unsigned int, int))(v18 + 428))(v3, v19, v7, v74, 0, 1) ) /*0x44d9cf*/
//DUPDEF       break; /*0x44d9cf*/
//DUPDEF     if ( !v77 ) /*0x44da20*/
//DUPDEF       goto LABEL_13; /*0x44da20*/
//DUPDEF   LABEL_17:
//DUPDEF     v20 = ppv_4; /*0x44da22*/
//DUPDEF     if ( ppv_4 == (unsigned int *)7 ) /*0x44da2c*/
//DUPDEF     {
//DUPDEF       v20 = 0; /*0x44da2e*/
//DUPDEF       v77 = 0; /*0x44da30*/
//DUPDEF }
//DUPDEF   LABEL_14:
//DUPDEF     v5 = (int)v20 + 1; /*0x44da07*/
//DUPDEF     ppv_4 = (unsigned int *)v5; /*0x44da0b*/
//DUPDEF     if ( v5 >= 8 ) /*0x44da0f*/
//DUPDEF       goto LABEL_34; /*0x44da0f*/
//DUPDEF }
//DUPDEF   if ( !v78 && v77 ) /*0x44d9e7*/
//DUPDEF     goto LABEL_17; /*0x44d9e7*/
//DUPDEF   if ( (*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v79) + 80) & 0x100) != 0 ) /*0x44da01*/
//DUPDEF   {
//DUPDEF   LABEL_13:
//DUPDEF     v20 = ppv_4; /*0x44da03*/
//DUPDEF     goto LABEL_14; /*0x44da03*/
//DUPDEF   }
//DUPDEF   ++g_IKnowWhatImDoing; /*0x44da55*/
//DUPDEF   v89 = 0; /*0x44da5b*/
//DUPDEF   v21 = *(unsigned int *)v3; /*0x44da5f*/
//DUPDEF   v88 = (IDA_SHIWORD(v79) << 8) + 128; /*0x44da66*/
//DUPDEF   v87 = ((int16_t)v79 << 8) + 128; /*0x44da6c*/
//DUPDEF   if ( (*(int (**)(int))(v21 + 44))(v3) == 15 ) /*0x44da76*/
//DUPDEF   {
//DUPDEF     v22 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v87, 0); /*0x44da89*/
//DUPDEF     v87 = *v22; /*0x44da90*/
//DUPDEF     v88 = v22[1]; /*0x44da97*/
//DUPDEF     v23 = v22[2]; /*0x44da9b*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v24 = *(unsigned int *)v3; /*0x44dabc*/
//DUPDEF     v83 = 0; /*0x44dac6*/
//DUPDEF     v25 = (*(int (**)(int, int))(v24 + 132))(v3, -1); /*0x44dad4*/
//DUPDEF     v80 = *LayerClass::Pathfinding_Find( /*0x44dafb*/
//DUPDEF              &MapClass_Instance,
//DUPDEF              (int)&v80,
//DUPDEF              &v87,
//DUPDEF              (int16_t *)&v80,
//DUPDEF              *(unsigned int *)(v25 + 1660),
//DUPDEF              0,
//DUPDEF              0,
//DUPDEF              1,
//DUPDEF              1,
//DUPDEF              0,
//DUPDEF              0,
//DUPDEF              0,
//DUPDEF              1,
//DUPDEF              (char)&v83,
//DUPDEF              0,
//DUPDEF              0,
//DUPDEF              v76);
//DUPDEF     v26 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v80); /*0x44db05*/
//DUPDEF     v27 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v26 + 72))(v26, v91); /*0x44db13*/
//DUPDEF     i = *(unsigned int *)CellStruct_Set(&v86, *v27 / 256, v27[1] / 256); /*0x44db42*/
//DUPDEF     v23 = 0; /*0x44db5f*/
//DUPDEF     v87 = ((int16_t)i << 8) + 128; /*0x44db61*/
//DUPDEF     v88 = (IDA_SHIWORD(i) << 8) + 128; /*0x44db65*/
//DUPDEF   IDA_LOWORD(i) = (unsigned short)v7 << 13; /*0x44db6c*/
//DUPDEF   v89 = v23; /*0x44db84*/
//DUPDEF   v28 = (*(int (**)(int, int *, unsigned int))(v3->q0D8)( /*0x44db8e*/
//DUPDEF           v3,
//DUPDEF           &v87,
//DUPDEF           (uint8_t)(((i >> 7) + 1) >> 1));
//DUPDEF   --g_IKnowWhatImDoing; /*0x44db9d*/
//DUPDEF   if ( !v28 ) /*0x44dba3*/
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     ((CellClass*)((unsigned int *)&this->inAirFlag))->AddObject((unsigned int *)v3); /*0x44dc6e*/
//DUPDEF     (*(void (**)(int))(v3->q11C)(v3); /*0x44dc7e*/
//DUPDEF     goto LABEL_35; /*0x44dc7e*/
//DUPDEF   if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
//DUPDEF   {
//DUPDEF     v29 = (*(int (**)(void *, int *))(((unsigned int)(this->referenceCount2))))(this, &v90); /*0x44dbc5*/
//DUPDEF     StartAudioControllerAt(g_RulesClass_Instance->DamageFireTypes[3], v29, 0); /*0x44dbd5*/
//DUPDEF     v30 = v3->q21C; /*0x44dbda*/
//DUPDEF     if ( *(unsigned char *)(v30 + 492) ) /*0x44dbe0*/
//DUPDEF       *(unsigned char *)(v3 + 1679) = 0; /*0x44dbea*/
//DUPDEF     if ( !v3->ImpactLandSound ) /*0x44dbf1*/
//DUPDEF     {
//DUPDEF       ++*(unsigned int *)(v30 + 756); /*0x44dc02*/
//DUPDEF       v3->ImpactLandSound = 1; /*0x44dc08*/
//DUPDEF     v3->u8_439 = 0; /*0x44dc0f*/
//DUPDEF   (*(void (**)(int, int, unsigned int, int))(v3->q1E8)(v3, 2, 0, v76); /*0x44dc1e*/
//DUPDEF   v31 = *(unsigned int *)v3; /*0x44dc28*/
//DUPDEF   if ( IDA_BYTE2(v79) ) /*0x44dc2e*/
//DUPDEF     p_ppv = &ppv; /*0x44dc34*/
//DUPDEF   else
//DUPDEF     p_ppv = (LPVOID *)&v80; /*0x44dc3b*/
//DUPDEF   v32 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)p_ppv); /*0x44dc41*/
//DUPDEF   (*(void (**)(int, void *))(v31 + 1152))(v3, v32); /*0x44dc49*/
//DUPDEF   if ( this->Type->BuildingAnim_0x15 > 0 ) /*0x44dc5d*/
//DUPDEF     *(unsigned char *)(this->owner + 22392) = 1; /*0x44dc65*/
//DUPDEF   LABEL_35:
//DUPDEF   MissionControl = this->GetMissionControl(); /*0x44dc84*/
//DUPDEF   v34 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x44dc99*/
//DUPDEF   return v34 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2); /*0x44dcb1*/
// 0x710670
void BuildingClass::OnCellPlacementComplete()
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  unsigned int v5[3]; // [esp+8h] [ebp-Ch] BYREF
  unsigned int *v6; // [esp+18h] [ebp+4h]

  ((CellClass *)&this->passengers)->AddObject(v6); /*0x710682 -- passengers is PassengersClass value member (techno.hpp:894); IDA til read it as CellClass**/
  if ( v6 ) /*0x710689*/
  {
    result = (*((int (**)(TechnoClass *))this->vtable1 + 33))(this); /*0x71068f*/
    if ( *(unsigned int *)(result + 1380) != -1 ) /*0x71069c*/
    {
      v5[0] = ((unsigned int *)this)[0]; /*0x7106ac*/
      vtable0 = (int (__thiscall **)(TechnoClass *))this->vtable1; /*0x7106b0 -- IDA 'this->RadioClass' = vfptr@0 == hand-tree vtable1*/
      v5[1] = ((unsigned int *)this)[1]; /*0x7106b5*/
      v5[2] = ((unsigned int *)this)[2]; /*0x7106bc*/
      v4 = vtable0[33](this); /*0x7106c2*/
      PlayAudioAt2(*(unsigned int *)(v4 + 1380), (int)v5, 0); /*0x7106d0 -- free fn global_funcs.hpp:4807*/
    }
  }
  return; /*0x7106d5*/
}
// 0x443860
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
  char a3; // raw param 3 (truth 0x443860: this + __int16 *a2 + char a3; hpp decl 1-param -- decl gap)

  v33 = 0; /*0x44387b*/
  v4 = 0; /*0x44387f*/
  v5 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (__int16 *)target) + 80); /*0x443886*/
  v6 = this->gattlingValue; /*0x44388c*/
  v32[0] = IDA_BYTE1(v5) & 1; /*0x443898*/
  if ( ((BuildingTypeClass *)v6)->BuildingTypeClass_field_ED8 == 3 ) /*0x4438a5 -- v6 is eax int in raw; this+1312 holds BuildingTypeClass**/
  {
    v33 = 4; /*0x4438a7*/
    v4 = 9; /*0x4438af*/
  }
  if ( ((BuildingTypeClass *)v6)->Naval ) /*0x4438b4 -- v6 raw eax int*/
  {
    v33 = 6; /*0x4438bc*/
    v4 = 4; /*0x4438c4*/
  }
  v7 = v32[0]; /*0x4438cf*/
  v8 = this->location.X; /*0x4438d5 -- CoordStruct location @+0x9C (object.hpp:452)*/
  v9 = this->location.Y; /*0x4438d7*/
  v36 = this->location.Z; /*0x4438dd*/
  v31[0] = v8 / 256; /*0x4438ed*/
  v31[1] = v9 / 256; /*0x443905*/
  TileIndex = ((MapClass *)&stru_87F5F0_raw.__pad_58[416])->GetTileIndex((int)v31, v4, v32[0]); /*0x443917 -- map.hpp:336 takes 3*/
  v31[0] = 0; /*0x44391d*/
  v31[1] = 0; /*0x443922*/
  *(unsigned int *)v34 = *(unsigned int *)((LayerClass *)&stru_87F5F0_raw.__pad_58[416])->Pathfinding_Find( /*0x443965 -- layer.hpp:40 16 typed params, receiver = this+16 sub-object*/
                      v33,
                      (void *)v32,
                      (__int16 *)target,
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
    v11 = (unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v34); /*0x443987 -- returns CellClass**/
    WaypointCoords = ((ScriptAction *)v32)->GetWaypointCoords(v11); /*0x443991*/
    v27 = *(unsigned int *)WaypointCoords; /*0x4439a1*/
    v29 = WaypointCoords[4]; /*0x4439a3*/
    v13 = ((ScriptAction *)v31)->GetWaypointCoords((unsigned int *)this); /*0x4439aa*/
    v23 = *(unsigned int *)v13; /*0x4439bb*/
    v25 = v13[4]; /*0x4439c0*/
    v14 = (*((int (**)(BuildingClass *))this->vtable1 + 14))(this); /*0x4439c5 -- vt slot 14 (ASM 0x4439c5: call [*this+56])*/
    v15 = (char *)((ScenarioClass *)v37)->SetEvent(v14, 30, v23, v25, v27, v29); /*0x4439cd -- 6-param decl scenario.hpp:274; v37 = 112B event buffer*/
    if ( (int)stru_A80220_raw.lineTrailer < 128 ) /*0x4439dc*/
    {
      qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v15, 0x6Fu); /*0x4439f8*/
      (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x443a09 -- dword_A83A54 declared scalar; binary ring buffer 0x83A54[128]*/
      dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x443a20*/
      ++stru_A80220_raw.lineTrailer; /*0x443a26*/
    }
    goto LABEL_8; /*0x443a26*/
  }
  if ( !*(unsigned char *)(this->gattlingValue + 5817) /*0x443ab0*/
    || !(uint8_t)((HouseClass *)this->owner)->IsCurrentPlayer() /*0x443ab0 -- truth *(House**)(this+540) == owner@0x21C*/
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
        if ( !*(unsigned char *)(v16 + 5817) && !*(unsigned char *)(v16 + 1517) ) /*0x443a55*/
          ((VoxClass *)&((unsigned int *)&stru_818E00)[27])->FindAndPlay(-1); /*0x443a69 -- VoxClass::FindAndPlay(int) 1-param (audio.hpp:188)*/
      }
    }
    return; /*0x443a69*/
  }
  v17 = (unsigned int *)(*((int (**)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v35); /*0x443ac8 -- vt slot 18 (ASM: call [*this+72])*/
  v18 = RawCoord::To_Cell((void *)&stru_87F5F0_raw.__pad_58[416], v17); /*0x443ad1*/
  v19 = ((ScriptAction *)v32)->GetWaypointCoords(v18); /*0x443adb*/
  v28 = *(unsigned int *)v19; /*0x443aeb*/
  v30 = v19[4]; /*0x443aed*/
  v20 = ((ScriptAction *)v31)->GetWaypointCoords((unsigned int *)this); /*0x443af4*/
  v24 = *(unsigned int *)v20; /*0x443b05*/
  v26 = v20[4]; /*0x443b0a*/
  v21 = (*((int (**)(BuildingClass *))this->vtable1 + 14))(this); /*0x443b0f -- vt slot 14*/
  v22 = (char *)((ScenarioClass *)v37)->SetEvent(v21, 30, v24, v26, v28, v30); /*0x443b17*/
  if ( (int)stru_A80220_raw.lineTrailer < 128 ) /*0x443b26*/
  {
    qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v22, 0x6Fu); /*0x443b46*/
    (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x443b5a -- ring buffer*/
    dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x443b71*/
    ++stru_A80220_raw.lineTrailer; /*0x443b77*/
  }
}
// 0x4a9650
void BuildingClass::MarkExitPath()
{
  int16_t *a3; // raw param merged by dump (truth 0x4A9650: this + _WORD *a2 + _WORD *a3; hpp decl 0-param -- decl gap)
  int result; // eax
  int16_t *v6; // esi
  char v7; // bl
  int16_t v9; // dx
  int v10; // ecx

  a3 = a3; /*0x4a9652*/
  IDA_LOWORD(result) = *a3; /*0x4a965a*/
  if ( *a3 != *(unsigned short *)&stru_8A0390_raw.bombVisible || a3[1] != *(unsigned short *)((char *)&stru_8A0390_raw.alignmentPadding69 + 1) ) /*0x4a9672 -- overlay members are scalars*/
  {
    v6 = *(int16_t **)((unsigned int *)this + 1123); /*0x4a9674 -- truth *((_DWORD*)this+1123) == +4492 (0x118C; no hand-tree member)*/
    v7 = (char)a3; /*0x4a967a*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a968b*/
    {
      v6 = v6; /*0x4a968d*/
      v6 += 2; /*0x4a968f*/
      v9 = *v6; /*0x4a9692*/
      IDA_LOWORD(v6) = a3[1] + v6[1]; /*0x4a969d*/
      IDA_LOWORD(a3) = *a3 + v9; /*0x4a96a1*/
      IDA_HIWORD(a3) = (unsigned short)v6; /*0x4a96a6*/
      a3 = a3; /*0x4a96b3*/
      result = ((LayerClass*)((LayerClass *)this))->CoordinatesLegal((int16_t *)&a3); /*0x4a96ba*/
      if ( (unsigned char)result ) /*0x4a96c1*/
      {
        result = (int)CellCoord::To_CellObj((CellCoord *)this, (int16_t *)&a3); /*0x4a96ca*/
        v10 = *(unsigned int *)(result + 300); /*0x4a96cf*/
        if ( v7 ) /*0x4a96d7*/
          *(unsigned int *)(result + 300) = v10 | 4; /*0x4a96dc*/
        else
          *(unsigned int *)(result + 300) = v10 & 0xFFFFFFFB; /*0x4a96e7*/
      }
    }
  }
  return; /*0x4a96ef*/
}
// 0x639cb0
bool BuildingClass::CheckExitPath()
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  unsigned int *v9; // edx
  int v10; // edx
  int v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  int i; // ecx
  int v16; // eax
  unsigned int *v18; // [esp+14h] [ebp-4h]

  result = (int)this->GetType(); /*0x639cb7 -- ObjectClass::GetType() instance*/
  result = result; /*0x639cbc*/
  v3 = 0; /*0x639cbe*/
  v18 = (unsigned int *)result; /*0x639cc0*/
  v4 = *(unsigned int *)(result + 20); /*0x639cc4 -- truth *(_DWORD*)(type+20)*/
  v5 = *(unsigned int *)(result + 148); /*0x639cc7*/
  v4 = v4; /*0x639ccf*/
  if ( v4 /*0x639cf0*/
    && (v4 > 0
     || v5 >= 0 && (result = -v5 / *(unsigned int *)(result + 144), v3 = v5 + -v5 % *(unsigned int *)(result + 144), v3 >= 0) && v3 < v4) )
  {
    result = *(unsigned int *)(result + 8); /*0x639cf2 -- truth *(_DWORD*)(type+8)*/
    v6 = *(unsigned int *)(result + 4 * v3); /*0x639cf5*/
  }
  else
  {
    v6 = 0; /*0x639cfa*/
  }
  v7 = *(unsigned int *)(v6 + 16); /*0x639cfc*/
  v8 = 0; /*0x639cff*/
  if ( v7 > 0 ) /*0x639d03*/
  {
    while ( 1 ) /*0x639d0c*/
    {
      v9 = *(unsigned int **)(*(unsigned int *)(v6 + 4) + 4 * v8); /*0x639d0c*/
      result = (*(int (**)(unsigned int))(*(unsigned int *)*v9 + 1216))(*v9); /*0x639d13*/
      if ( (unsigned char)result ) /*0x639d1b*/
        break; /*0x639d1b*/
      if ( ++v8 >= v7 ) /*0x639d20*/
        return result; /*0x639d20*/
    }
    if ( v5 < v4 ) /*0x639d2e*/
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
        v13 = *(unsigned int *)(v18[2] + 4 * v10); /*0x639d67*/
  LABEL_21:
        v14 = *(unsigned int *)(v13 + 16); /*0x639d6e*/
        for ( i = 0; i < v14; ++i ) /*0x639d75*/
        {
          v16 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v13 + 4) + 4 * i) + 4); /*0x639d7d*/
          if ( *(unsigned char *)(v16 + 12) == 2 ) /*0x639d83*/
            *(unsigned char *)(v16 + 12) = 29; /*0x639d85*/
        }
        result = v4; /*0x639d8e*/
        if ( ++v5 >= v4 ) /*0x639d95*/
          return result; /*0x639d95*/
      }
      v13 = 0; /*0x639d6c*/
      goto LABEL_21; /*0x639d6c*/
    }
  }
  return result; /*0x639d22*/
}
// 0x453840
void BuildingClass::RenderExitPosition() {}
//DUPDEF   int v3; // edi
//DUPDEF   int v4; // ebx
//DUPDEF   int *v5; // eax
//DUPDEF   int v6; // ecx
//DUPDEF   int v7; // edx
//DUPDEF   int v8; // eax
//DUPDEF   BuildingTypeClass *Type; // ecx
//DUPDEF   int *v11; // eax
//DUPDEF   int v12; // edi
//DUPDEF   int v13; // ebx
//DUPDEF   int *v14; // eax
//DUPDEF   int v15; // ecx
//DUPDEF   int v16; // edx
//DUPDEF   int v17; // eax
//DUPDEF   int *v18; // eax
//DUPDEF   int v19; // edi
//DUPDEF   int v20; // ebx
//DUPDEF   int *v21; // eax
//DUPDEF   int v22; // esi
//DUPDEF   int v23; // ecx
//DUPDEF   unsigned int *v24; // ecx
//DUPDEF   int *v25; // eax
//DUPDEF   int v26; // edi
//DUPDEF   BuildingTypeClass *v27; // esi
//DUPDEF   int v28; // ebx
//DUPDEF   int v29; // ebp
//DUPDEF   int v30; // ecx
//DUPDEF   unsigned int *v31; // eax
//DUPDEF   int *PrimaryFirePixelOffset; // [esp-4h] [ebp-28h]
//DUPDEF   int *v33; // [esp+0h] [ebp-24h]
//DUPDEF   int v34[2]; // [esp+10h] [ebp-14h] BYREF
//DUPDEF   int v35[3]; // [esp+18h] [ebp-Ch] BYREF
//DUPDEF   unsigned int *cell; // [esp+28h] [ebp+4h]
//DUPDEF   int v37; // [esp+2Ch] [ebp+8h]

//DUPDEF   if ( this->Type->CanBeOccupied && (*((int (**)(BuildingClass *))this->vtable1 + 258))(this) > 0 ) /*0x453865*/
//DUPDEF   {
//DUPDEF     v2 = (int *)World::ToScreen(v34, &this->Type->__pad_1584[8 * this->Audio8[4] + 4], v33); /*0x453886*/
//DUPDEF     v3 = *v2; /*0x45388b*/
//DUPDEF     v4 = v2[1]; /*0x45388d*/
//DUPDEF     v5 = (int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 43))(this, v35); /*0x453899*/
//DUPDEF     v6 = *v5; /*0x45389f*/
//DUPDEF     v7 = v5[1]; /*0x4538a5*/
//DUPDEF     v8 = v5[2]; /*0x4538a8*/
//DUPDEF     *cell = v3 + v6; /*0x4538b1*/
//DUPDEF     cell[1] = v4 + v7; /*0x4538b3*/
//DUPDEF     cell[2] = v8; /*0x4538b6*/
//DUPDEF     return (int)cell; /*0x4538b9*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     Type = this->Type; /*0x4538c5*/
//DUPDEF     if ( Type->PrimaryFirePixelOffset[0] == 0xFFFF && Type->PrimaryFirePixelOffset[1] == 0xFFFF ) /*0x4538e6*/
//DUPDEF     {
//DUPDEF       if ( Type->BarrelAnimIsVoxel ) /*0x4539a1*/
//DUPDEF       {
//DUPDEF         v24 = BuildingClass::CalcBarrelFlashPosition(this, v35, v37, 1); /*0x4539be*/
//DUPDEF         *cell = *v24; /*0x4539c8*/
//DUPDEF         cell[1] = v24[1]; /*0x4539cd*/
//DUPDEF         cell[2] = v24[2]; /*0x4539d3*/
//DUPDEF         return (int)cell; /*0x4539c0*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v25 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x4539ff*/
//DUPDEF         v26 = *v25; /*0x453a04*/
//DUPDEF         v27 = this->Type; /*0x453a06*/
//DUPDEF         v28 = v25[1]; /*0x453a0c*/
//DUPDEF         v29 = v25[2]; /*0x453a0f*/
//DUPDEF         if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
//DUPDEF         {
//DUPDEF           v30 = *(unsigned int *)&v27->__pad_F70[624]; /*0x453a22*/
//DUPDEF           v34[1] = *(unsigned int *)&v27->__pad_F70[628]; /*0x453a28*/
//DUPDEF           v34[0] = v30; /*0x453a34*/
//DUPDEF           v31 = (unsigned int *)World::ToScreen(v35, v34, v33); /*0x453a40*/
//DUPDEF           v26 += *v31; /*0x453a4a*/
//DUPDEF           v28 += v31[1]; /*0x453a4c*/
//DUPDEF         }
//DUPDEF         *cell = v26; /*0x453a54*/
//DUPDEF         cell[1] = v28; /*0x453a58*/
//DUPDEF         cell[2] = v29; /*0x453a5b*/
//DUPDEF         return (int)cell; /*0x453a4e*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       PrimaryFirePixelOffset = Type->PrimaryFirePixelOffset; /*0x4538f2*/
//DUPDEF       if ( Type->__pad_1714[80] ) /*0x4538ec*/
//DUPDEF       {
//DUPDEF         v11 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453902*/
//DUPDEF         v12 = *v11; /*0x453907*/
//DUPDEF         v13 = v11[1]; /*0x453909*/
//DUPDEF         v14 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x45392c*/
//DUPDEF         v15 = *v14; /*0x453931*/
//DUPDEF         v16 = v14[1]; /*0x453937*/
//DUPDEF         v17 = v14[2]; /*0x45393a*/
//DUPDEF         *cell = v12 + v15; /*0x453943*/
//DUPDEF         cell[1] = v13 + v16; /*0x453945*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v18 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453962*/
//DUPDEF         v19 = *v18; /*0x453967*/
//DUPDEF         v20 = v18[1]; /*0x453969*/
//DUPDEF         v21 = (int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 43))(this, v35); /*0x453975*/
//DUPDEF         v22 = *v21; /*0x45397b*/
//DUPDEF         v23 = v21[1]; /*0x453981*/
//DUPDEF         v17 = v21[2]; /*0x453984*/
//DUPDEF         *cell = v22 + v19; /*0x45398d*/
//DUPDEF         cell[1] = v20 + v23; /*0x45398f*/
//DUPDEF       }
//DUPDEF       cell[2] = v17; /*0x453948*/
//DUPDEF       return (int)cell; /*0x45394b*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     Type = this->Type; /*0x4538c5*/
//DUPDEF     if ( Type->PrimaryFirePixelOffset[0] == 0xFFFF && Type->PrimaryFirePixelOffset[1] == 0xFFFF ) /*0x4538e6*/
//DUPDEF     {
//DUPDEF       if ( Type->BarrelAnimIsVoxel ) /*0x4539a1*/
//DUPDEF       {
//DUPDEF         v24 = BuildingClass::CalcBarrelFlashPosition(this, v35, v37, 1); /*0x4539be*/
//DUPDEF         *cell = *v24; /*0x4539c8*/
//DUPDEF         cell[1] = v24[1]; /*0x4539cd*/
//DUPDEF         cell[2] = v24[2]; /*0x4539d3*/
//DUPDEF         return (int)cell; /*0x4539c0*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v25 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x4539ff*/
//DUPDEF         v26 = *v25; /*0x453a04*/
//DUPDEF         v27 = this->Type; /*0x453a06*/
//DUPDEF         v28 = v25[1]; /*0x453a0c*/
//DUPDEF         v29 = v25[2]; /*0x453a0f*/
//DUPDEF         if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
//DUPDEF         {
//DUPDEF           v30 = *(unsigned int *)&v27->__pad_F70[624]; /*0x453a22*/
//DUPDEF           v34[1] = *(unsigned int *)&v27->__pad_F70[628]; /*0x453a28*/
//DUPDEF           v34[0] = v30; /*0x453a34*/
//DUPDEF           v31 = (unsigned int *)World::ToScreen(v35, v34, v33); /*0x453a40*/
//DUPDEF           v26 += *v31; /*0x453a4a*/
//DUPDEF           v28 += v31[1]; /*0x453a4c*/
//DUPDEF         }
//DUPDEF         *cell = v26; /*0x453a54*/
//DUPDEF         cell[1] = v28; /*0x453a58*/
//DUPDEF         cell[2] = v29; /*0x453a5b*/
//DUPDEF         return (int)cell; /*0x453a4e*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       PrimaryFirePixelOffset = Type->PrimaryFirePixelOffset; /*0x4538f2*/
//DUPDEF       if ( Type->__pad_1714[80] ) /*0x4538ec*/
//DUPDEF       {
//DUPDEF         v11 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453902*/
//DUPDEF         v12 = *v11; /*0x453907*/
//DUPDEF         v13 = v11[1]; /*0x453909*/
//DUPDEF         v14 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x45392c*/
//DUPDEF         v15 = *v14; /*0x453931*/
//DUPDEF         v16 = v14[1]; /*0x453937*/
//DUPDEF         v17 = v14[2]; /*0x45393a*/
//DUPDEF         *cell = v12 + v15; /*0x453943*/
//DUPDEF         cell[1] = v13 + v16; /*0x453945*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v18 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453962*/
//DUPDEF         v19 = *v18; /*0x453967*/
//DUPDEF         v20 = v18[1]; /*0x453969*/
//DUPDEF         v21 = (int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 43))(this, v35); /*0x453975*/
//DUPDEF         v22 = *v21; /*0x45397b*/
//DUPDEF         v23 = v21[1]; /*0x453981*/
//DUPDEF         v17 = v21[2]; /*0x453984*/
//DUPDEF         *cell = v22 + v19; /*0x45398d*/
//DUPDEF         cell[1] = v20 + v23; /*0x45398f*/
//DUPDEF       }
//DUPDEF       cell[2] = v17; /*0x453948*/
//DUPDEF       return (int)cell; /*0x45394b*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     Type = this->Type; /*0x4538c5*/
//DUPDEF     if ( Type->PrimaryFirePixelOffset[0] == 0xFFFF && Type->PrimaryFirePixelOffset[1] == 0xFFFF ) /*0x4538e6*/
//DUPDEF     {
//DUPDEF       if ( Type->BarrelAnimIsVoxel ) /*0x4539a1*/
//DUPDEF       {
//DUPDEF         v24 = BuildingClass::CalcBarrelFlashPosition(this, v35, v37, 1); /*0x4539be*/
//DUPDEF         *cell = *v24; /*0x4539c8*/
//DUPDEF         cell[1] = v24[1]; /*0x4539cd*/
//DUPDEF         cell[2] = v24[2]; /*0x4539d3*/
//DUPDEF         return (int)cell; /*0x4539c0*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v25 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x4539ff*/
//DUPDEF         v26 = *v25; /*0x453a04*/
//DUPDEF         v27 = this->Type; /*0x453a06*/
//DUPDEF         v28 = v25[1]; /*0x453a0c*/
//DUPDEF         v29 = v25[2]; /*0x453a0f*/
//DUPDEF         if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
//DUPDEF         {
//DUPDEF           v30 = *(unsigned int *)&v27->__pad_F70[624]; /*0x453a22*/
//DUPDEF           v34[1] = *(unsigned int *)&v27->__pad_F70[628]; /*0x453a28*/
//DUPDEF           v34[0] = v30; /*0x453a34*/
//DUPDEF           v31 = (unsigned int *)World::ToScreen(v35, v34, v33); /*0x453a40*/
//DUPDEF           v26 += *v31; /*0x453a4a*/
//DUPDEF           v28 += v31[1]; /*0x453a4c*/
//DUPDEF         }
//DUPDEF         *cell = v26; /*0x453a54*/
//DUPDEF         cell[1] = v28; /*0x453a58*/
//DUPDEF         cell[2] = v29; /*0x453a5b*/
//DUPDEF         return (int)cell; /*0x453a4e*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       PrimaryFirePixelOffset = Type->PrimaryFirePixelOffset; /*0x4538f2*/
//DUPDEF       if ( Type->__pad_1714[80] ) /*0x4538ec*/
//DUPDEF       {
//DUPDEF         v11 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453902*/
//DUPDEF         v12 = *v11; /*0x453907*/
//DUPDEF         v13 = v11[1]; /*0x453909*/
//DUPDEF         v14 = TechnoClass::ComputeTransform((TechnoClass *)this, v35, v37, 0, 0, 0); /*0x45392c*/
//DUPDEF         v15 = *v14; /*0x453931*/
//DUPDEF         v16 = v14[1]; /*0x453937*/
//DUPDEF         v17 = v14[2]; /*0x45393a*/
//DUPDEF         *cell = v12 + v15; /*0x453943*/
//DUPDEF         cell[1] = v13 + v16; /*0x453945*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v18 = (int *)World::ToScreen(v34, PrimaryFirePixelOffset, v33); /*0x453962*/
//DUPDEF         v19 = *v18; /*0x453967*/
//DUPDEF         v20 = v18[1]; /*0x453969*/
//DUPDEF         v21 = (int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 43))(this, v35); /*0x453975*/
//DUPDEF         v22 = *v21; /*0x45397b*/
//DUPDEF         v23 = v21[1]; /*0x453981*/
//DUPDEF         v17 = v21[2]; /*0x453984*/
//DUPDEF         *cell = v22 + v19; /*0x45398d*/
//DUPDEF         cell[1] = v20 + v23; /*0x45398f*/
//DUPDEF       }
//DUPDEF       cell[2] = v17; /*0x453948*/
//DUPDEF       return (int)cell; /*0x45394b*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v10 = this->Type; /*0x4538c5*/
//DUPDEF     if ( v10->PrimaryFirePixelOffset == 0xFFFF && v10->u32_E48 == 0xFFFF ) /*0x4538e6*/
//DUPDEF     {
//DUPDEF       if ( v10->BarrelAnimIsVoxel ) /*0x4539a1*/
//DUPDEF       {
//DUPDEF         v24 = BuildingClass::CalcBarrelFlashPosition((int *)this, v35, v37, 1); /*0x4539be*/
//DUPDEF         *cell = *v24; /*0x4539c8*/
//DUPDEF         cell[1] = v24[1]; /*0x4539cd*/
//DUPDEF         cell[2] = v24[2]; /*0x4539d3*/
//DUPDEF         return (int)cell; /*0x4539c0*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v25 = TechnoClass::ComputeTransform((unsigned int **)this, v35, v37, 0, 0, 0); /*0x4539ff*/
//DUPDEF         v26 = *v25; /*0x453a04*/
//DUPDEF         v27 = this->Type; /*0x453a06*/
//DUPDEF         v28 = v25[1]; /*0x453a0c*/
//DUPDEF         v29 = v25[2]; /*0x453a0f*/
//DUPDEF         if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
//DUPDEF         {
//DUPDEF           v30 = v27->u32_11E0; /*0x453a22*/
//DUPDEF           v34[1] = v27->u32_11E4; /*0x453a28*/
//DUPDEF           v34[0] = v30; /*0x453a34*/
//DUPDEF           v31 = (unsigned int *)World::ToScreen(v35, v34, v33); /*0x453a40*/
//DUPDEF           v26 += *v31; /*0x453a4a*/
//DUPDEF           v28 += v31[1]; /*0x453a4c*/
//DUPDEF         }
//DUPDEF         *cell = v26; /*0x453a54*/
//DUPDEF         cell[1] = v28; /*0x453a58*/
//DUPDEF         cell[2] = v29; /*0x453a5b*/
//DUPDEF         return (int)cell; /*0x453a4e*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v32 = (unsigned int *)(v10 + 3652); /*0x4538f2*/
//DUPDEF       if ( v10->PrimaryFireDualOffset ) /*0x4538ec*/
//DUPDEF       {
//DUPDEF         v11 = (int *)World::ToScreen(v34, v32, v33); /*0x453902*/
//DUPDEF         v12 = *v11; /*0x453907*/
//DUPDEF         v13 = v11[1]; /*0x453909*/
//DUPDEF         v14 = TechnoClass::ComputeTransform((unsigned int **)this, v35, v37, 0, 0, 0); /*0x45392c*/
//DUPDEF         v15 = *v14; /*0x453931*/
//DUPDEF         v16 = v14[1]; /*0x453937*/
//DUPDEF         v17 = v14[2]; /*0x45393a*/
//DUPDEF         *cell = v12 + v15; /*0x453943*/
//DUPDEF         cell[1] = v13 + v16; /*0x453945*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v18 = (int *)World::ToScreen(v34, v32, v33); /*0x453962*/
//DUPDEF         v19 = *v18; /*0x453967*/
//DUPDEF         v20 = v18[1]; /*0x453969*/
//DUPDEF         v21 = (int *)(*(int (**)(void *, int *))(((unsigned int)(this->q0442))))(this, v35); /*0x453975*/
//DUPDEF         v22 = *v21; /*0x45397b*/
//DUPDEF         v23 = v21[1]; /*0x453981*/
//DUPDEF         v17 = v21[2]; /*0x453984*/
//DUPDEF         *cell = v22 + v19; /*0x45398d*/
//DUPDEF         cell[1] = v20 + v23; /*0x45398f*/
//DUPDEF       }
//DUPDEF       cell[2] = v17; /*0x453948*/
//DUPDEF       return (int)cell; /*0x45394b*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v10 = this->Type; /*0x4538c5*/
//DUPDEF     if ( v10->PrimaryFirePixelOffset == 0xFFFF && v10->u32_E48 == 0xFFFF ) /*0x4538e6*/
//DUPDEF     {
//DUPDEF       if ( v10->BarrelAnimIsVoxel ) /*0x4539a1*/
//DUPDEF       {
//DUPDEF         v24 = (unsigned int *)BuildingClass::CalcBarrelFlashPosition(v34, v36, 1); /*0x4539be*/
//DUPDEF         *cell = *v24; /*0x4539c8*/
//DUPDEF         cell[1] = v24[1]; /*0x4539cd*/
//DUPDEF         cell[2] = v24[2]; /*0x4539d3*/
//DUPDEF         return (int)cell; /*0x4539c0*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v25 = TechnoClass::ComputeTransform((unsigned int **)this, v34, v36, 0, 0, 0); /*0x4539ff*/
//DUPDEF         v26 = *v25; /*0x453a04*/
//DUPDEF         v27 = this->Type; /*0x453a06*/
//DUPDEF         v28 = v25[1]; /*0x453a0c*/
//DUPDEF         v29 = v25[2]; /*0x453a0f*/
//DUPDEF         if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
//DUPDEF         {
//DUPDEF           v30 = v27->u32_11E0; /*0x453a22*/
//DUPDEF           v33[1] = v27->u32_11E4; /*0x453a28*/
//DUPDEF           v33[0] = v30; /*0x453a34*/
//DUPDEF           v31 = World::ToScreen((float *)g_TacticalClass_Instance, v34, v33); /*0x453a40*/
//DUPDEF           v26 += *v31; /*0x453a4a*/
//DUPDEF           v28 += v31[1]; /*0x453a4c*/
//DUPDEF         }
//DUPDEF         *cell = v26; /*0x453a54*/
//DUPDEF         cell[1] = v28; /*0x453a58*/
//DUPDEF         cell[2] = v29; /*0x453a5b*/
//DUPDEF         return (int)cell; /*0x453a4e*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v32 = (int *)(v10 + 3652); /*0x4538f2*/
//DUPDEF       if ( v10->PrimaryFireDualOffset ) /*0x4538ec*/
//DUPDEF       {
//DUPDEF         v11 = World::ToScreen((float *)g_TacticalClass_Instance, v33, v32); /*0x453902*/
//DUPDEF         v12 = *v11; /*0x453907*/
//DUPDEF         v13 = v11[1]; /*0x453909*/
//DUPDEF         v14 = TechnoClass::ComputeTransform((unsigned int **)this, v34, v36, 0, 0, 0); /*0x45392c*/
//DUPDEF         v15 = *v14; /*0x453931*/
//DUPDEF         v16 = v14[1]; /*0x453937*/
//DUPDEF         v17 = v14[2]; /*0x45393a*/
//DUPDEF         *cell = v12 + v15; /*0x453943*/
//DUPDEF         cell[1] = v13 + v16; /*0x453945*/
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v18 = World::ToScreen((float *)g_TacticalClass_Instance, v33, v32); /*0x453962*/
//DUPDEF         v19 = *v18; /*0x453967*/
//DUPDEF         v20 = v18[1]; /*0x453969*/
//DUPDEF         v21 = (int *)(*(int (**)(void *, unsigned int *))(((unsigned int)(this->q0442))))(this, v34); /*0x453975*/
//DUPDEF         v22 = *v21; /*0x45397b*/
//DUPDEF         v23 = v21[1]; /*0x453981*/
//DUPDEF         v17 = v21[2]; /*0x453984*/
//DUPDEF         *cell = v22 + v19; /*0x45398d*/
//DUPDEF         cell[1] = v20 + v23; /*0x45398f*/
//DUPDEF       cell[2] = v17; /*0x453948*/
//DUPDEF       return (int)cell; /*0x45394b*/
// IDA 0x459ec0: returns 6 (wait timer constant)
// 0x443c60
int BuildingClass::UpdateConstruction()
{
  // G42.33c9: hollow raw husk collapsed to stub (decl v6/v7 were
  // unused; the regtag hunter kept eating the block braces to
  // balance its expansion, re-nesting every later def). Body
  // pending RA2MCP retranslation from ida_cache.
  return 0;
}
// 0x445880
int BuildingClass::Sell() { BeingProduced = false; CompleteSell(); return 5; }
//DUPDEF   int *location; // edx
//DUPDEF   int v3; // eax
//DUPDEF   int v4; // ecx
//DUPDEF   int *DamageFireAnims; // edi
//DUPDEF   int v6; // ebp
//DUPDEF   int owner; // eax
//DUPDEF   int Type; // ecx
//DUPDEF   int v9; // eax
//DUPDEF   int v10; // ecx
//DUPDEF   int v11; // eax
//DUPDEF   int v12; // ecx
//DUPDEF   int v13; // eax
//DUPDEF   int v14; // eax
//DUPDEF   int v15; // edx
//DUPDEF   int *Upgrades; // ecx
//DUPDEF   char v17; // bl
//DUPDEF   RulesClass *v18; // eax
//DUPDEF   int i; // ebp
//DUPDEF   int v20; // edx
//DUPDEF   BuildingClass *v21; // edi
//DUPDEF   int v22; // eax
//DUPDEF   int v23; // ecx
//DUPDEF   BuildingClass *v25; // eax
//DUPDEF   BuildingClass *v26; // eax
//DUPDEF   int v27; // ecx
//DUPDEF   int16_t v28; // di
//DUPDEF   BuildingClass *v30; // eax
//DUPDEF   BuildingClass *v31; // eax
//DUPDEF   BuildingTypeClass *v32; // ecx
//DUPDEF   int FoundationWidth; // ebp
//DUPDEF   int FoundationHeight; // edi
//DUPDEF   int v35; // ecx
//DUPDEF   int v36; // eax
//DUPDEF   int v37; // ecx
//DUPDEF   int v38; // ebp
//DUPDEF   int v39; // edi
//DUPDEF   int16_t v40; // bx
//DUPDEF   unsigned char *v41; // eax
//DUPDEF   int *v42; // eax
//DUPDEF   int Spotlight; // ecx
//DUPDEF   int v44; // edx
//DUPDEF   int v45; // eax
//DUPDEF   int v46; // ecx
//DUPDEF   int result; // eax
//DUPDEF   char v48; // [esp+13h] [ebp-2Dh]
//DUPDEF   int v49; // [esp+14h] [ebp-2Ch]
//DUPDEF   int v50; // [esp+14h] [ebp-2Ch]
//DUPDEF   int v51; // [esp+14h] [ebp-2Ch]
//DUPDEF   int v52; // [esp+14h] [ebp-2Ch]
//DUPDEF   int16_t v53[2]; // [esp+18h] [ebp-28h] BYREF
//DUPDEF   int16_t v52[2]; // [esp+1Ch] [ebp-24h] BYREF
//DUPDEF   int v55; // [esp+20h] [ebp-20h] BYREF
//DUPDEF   int16_t v56; // [esp+28h] [ebp-18h]
//DUPDEF   int16_t v57; // [esp+2Ah] [ebp-16h]
//DUPDEF   unsigned int v58[4]; // [esp+30h] [ebp-10h] BYREF

//DUPDEF   v48 = 0; /*0x445889*/
//DUPDEF   location = this->location; /*0x445894*/
//DUPDEF   v3 = this->location[0]; /*0x445896*/
//DUPDEF   v4 = this->location[1]; /*0x445898*/
//DUPDEF   v58[2] = location[2]; /*0x44589e*/
//DUPDEF   IDA_LOWORD(v55) = v3 / 256; /*0x4458ae*/
//DUPDEF   IDA_HIWORD(v55) = v4 / 256; /*0x4458c1*/
//DUPDEF   if ( !this->inLimbo[0] && this->Type ) /*0x4458d4*/
//DUPDEF   {
//DUPDEF     DamageFireAnims = this->DamageFireAnims; /*0x4458e4*/
//DUPDEF     v6 = 8; /*0x4458ea*/
//DUPDEF     do /*0x445903*/
//DUPDEF     {
//DUPDEF       if ( *DamageFireAnims ) /*0x4458ef*/
//DUPDEF       {
//DUPDEF         (*(void (**)(int))(*(unsigned int *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x4458f7*/
//DUPDEF         *DamageFireAnims = 0; /*0x4458fd*/
//DUPDEF       }
//DUPDEF       ++DamageFireAnims; /*0x4458ff*/
//DUPDEF       --v6; /*0x445902*/
//DUPDEF     }
//DUPDEF     while ( v6 ); /*0x445903*/
//DUPDEF     if ( this->Type->OrePurifier ) /*0x44590b*/
//DUPDEF     {
//DUPDEF       if ( this->ActuallyPlacedOnMap[0] ) /*0x445915*/
//DUPDEF       {
//DUPDEF         --*(unsigned int *)(this->owner + 21388); /*0x44592c*/
//DUPDEF         owner = this->owner; /*0x445932*/
//DUPDEF         if ( this->u32_55A8 < 0 ) /*0x44593e*/
//DUPDEF           this->u32_55A8 = 0; /*0x445940*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     Type = this->Type; /*0x445946*/
//DUPDEF     if ( *(unsigned char *)(Type + 5835) ) /*0x44594c*/
//DUPDEF     {
//DUPDEF       if ( this->ActuallyPlacedOnMap[0] ) /*0x445956*/
//DUPDEF       {
//DUPDEF         *(unsigned int *)(this->owner + 724) -= *(unsigned int *)(Type + 6016); /*0x445974*/
//DUPDEF         v9 = this->owner; /*0x44597a*/
//DUPDEF         if ( this->queuedVoiceIndex < 0 ) /*0x445986*/
//DUPDEF           this->queuedVoiceIndex = 0; /*0x445988*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v10 = this->Type->InfantryGainSelfHeal; /*0x445994*/
//DUPDEF     if ( v10 ) /*0x44599c*/
//DUPDEF     {
//DUPDEF       if ( this->ActuallyPlacedOnMap[0] ) /*0x44599e*/
//DUPDEF       {
//DUPDEF         *(unsigned int *)(this->owner + 356) -= v10; /*0x4459b6*/
//DUPDEF         v11 = this->owner; /*0x4459bc*/
//DUPDEF         if ( this->q380 < 0 ) /*0x4459c8*/
//DUPDEF           this->q380 = 0; /*0x4459ca*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v12 = this->Type->UnitsGainSelfHeal; /*0x4459d6*/
//DUPDEF     if ( v12 ) /*0x4459de*/
//DUPDEF     {
//DUPDEF       if ( this->ActuallyPlacedOnMap[0] ) /*0x4459e0*/
//DUPDEF       {
//DUPDEF         *(unsigned int *)(this->owner + 360) -= v12; /*0x4459f8*/
//DUPDEF         v13 = this->owner; /*0x4459fe*/
//DUPDEF         if ( this->q384 < 0 ) /*0x445a0a*/
//DUPDEF           this->q384 = 0; /*0x445a0c*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( this->Type->LaserFencePost ) /*0x445a18*/
//DUPDEF       BuildingClass::DemolishBridgeCheck(this, 0); /*0x445a25*/
//DUPDEF     if ( !dword_A8E7AC ) /*0x445a30*/
//DUPDEF     {
//DUPDEF       if ( this->Type->SensorArray ) /*0x445a38*/
//DUPDEF         (*(void (**)(BuildingClass *, int))(this->vtable1 + 1272))(this, g_TerrainTypeTable); /*0x445a4c*/
//DUPDEF       if ( this->Type->qD31 ) /*0x445a58*/
//DUPDEF         (*(void (**)(BuildingClass *, int))(this->vtable1 + 1280))(this, g_TerrainTypeTable); /*0x445a6c*/
//DUPDEF       v14 = this->Type; /*0x445a72*/
//DUPDEF       if ( (!this->BuildingClass_field_timer_550 || !this->CostAccumulator) /*0x445a8e*/
//DUPDEF         && !(*(uint8_t (**)(BuildingClass *))(this->vtable1 + 128))(this) )
//DUPDEF       {
//DUPDEF         RecalculateBuildingFoundation(this); /*0x445a9a*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v15 = 0; /*0x445a9f*/
//DUPDEF     Upgrades = this->Upgrades; /*0x445aa1*/
//DUPDEF     while ( !*Upgrades || !*(unsigned char *)(*Upgrades + 5987) ) /*0x445ab4*/
//DUPDEF     {
//DUPDEF       ++v15; /*0x445ab6*/
//DUPDEF       ++Upgrades; /*0x445ab7*/
//DUPDEF       if ( v15 >= 3 ) /*0x445abd*/
//DUPDEF         goto LABEL_40; /*0x445abd*/
//DUPDEF     }
//DUPDEF     v48 = 1; /*0x445ac1*/
//DUPDEF   LABEL_40:
//DUPDEF     if ( !byte_A8E9A0 ) /*0x445acd*/
//DUPDEF     {
//DUPDEF       v17 = 1; /*0x445acf*/
//DUPDEF       goto LABEL_75; /*0x445ad1*/
//DUPDEF     }
//DUPDEF     v18 = dword_8871E0; /*0x445ad6*/
//DUPDEF     if ( this->Type == dword_8871E0->NukeDown ) /*0x445ae7*/
//DUPDEF     {
//DUPDEF       for ( i = 0; i < 8; i += 2 ) /*0x445aed*/
//DUPDEF       {
//DUPDEF         v20 = i & 7; /*0x445af3*/
//DUPDEF         IDA_LOWORD(v49) = v55 + IDA_LOWORD(dword_89F688[v20]); /*0x445b13*/
//DUPDEF         IDA_HIWORD(v49) = IDA_HIWORD(v55) + IDA_HIWORD(dword_89F688[v20]); /*0x445b1c*/
//DUPDEF         *(unsigned int *)v53 = v49; /*0x445b2b*/
//DUPDEF         v21 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445b34*/
//DUPDEF         ((BuildingClass*)(v21))->ValidatePlacement(0); /*0x445b3a*/
//DUPDEF         v22 = v21->ambientSoundController[2]; /*0x445b3f*/
//DUPDEF         if ( v22 != -1 && *(unsigned char *)(*(&dword_A83D84->vtable0 + v22) + 680) && IDA_BYTE2(v21->transporter) < 0x10u ) /*0x445b60*/
//DUPDEF           BuildingClass::SellEffects((int)v21, 200); /*0x445b69*/
//DUPDEF       }
//DUPDEF       v18 = dword_8871E0; /*0x445b7a*/
//DUPDEF     }
//DUPDEF     v23 = this->Type; /*0x445b81*/
//DUPDEF     if ( v23 == v18->FlameDamage || v23 == v18->NukeWarhead ) /*0x445b97*/
//DUPDEF     {
//DUPDEF       v55 = v55; /*0x445b9d*/
//DUPDEF       IDA_HIWORD(v50) = IDA_HIWORD(v55); /*0x445ba2*/
//DUPDEF       IDA_LOWORD(v50) = v55 - 1; /*0x445baf*/
//DUPDEF       *(unsigned int *)v53 = v50; /*0x445bbe*/
//DUPDEF       v25 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445bc2*/
//DUPDEF       ((BuildingClass*)(v25))->ValidatePlacement(0); /*0x445bc9*/
//DUPDEF       IDA_HIWORD(v50) = IDA_HIWORD(v55); /*0x445bd1*/
//DUPDEF       IDA_LOWORD(v50) = v55 + 3; /*0x445bd6*/
//DUPDEF       *(unsigned int *)v53 = v50; /*0x445be3*/
//DUPDEF       v26 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445bee*/
//DUPDEF       ((BuildingClass*)(v26))->ValidatePlacement(0); /*0x445bf5*/
//DUPDEF       v18 = dword_8871E0; /*0x445bfa*/
//DUPDEF     }
//DUPDEF     v27 = this->Type; /*0x445bff*/
//DUPDEF     if ( v27 == v18->FlameDamage2 || v27 == v18->NukeProjectile ) /*0x445c15*/
//DUPDEF     {
//DUPDEF       v28 = IDA_HIWORD(v55); /*0x445c17*/
//DUPDEF       v55 = v55; /*0x445c1b*/
//DUPDEF       *(unsigned int *)v53 = v55 - 0x10000; /*0x445c36*/
//DUPDEF       v30 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445c40*/
//DUPDEF       ((BuildingClass*)(v30))->ValidatePlacement(0); /*0x445c47*/
//DUPDEF       IDA_LOWORD(v51) = v55; /*0x445c53*/
//DUPDEF       IDA_HIWORD(v51) = v28 + 3; /*0x445c58*/
//DUPDEF       *(unsigned int *)v53 = v51; /*0x445c68*/
//DUPDEF       v31 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445c6c*/
//DUPDEF       ((BuildingClass*)(v31))->ValidatePlacement(0); /*0x445c73*/
//DUPDEF     }
//DUPDEF     v32 = (BuildingTypeClass *)this->Type; /*0x445c78*/
//DUPDEF     if ( !v32->ToTile ) /*0x445c7e*/
//DUPDEF     {
//DUPDEF       FoundationWidth = ((BuildingTypeClass*)(v32))->GetFoundationWidth(); /*0x445c97*/
//DUPDEF       FoundationHeight = ((BuildingTypeClass*)((int *)this->Type))->GetFoundationHeight(0); /*0x445ca0*/
//DUPDEF       v35 = *(unsigned int *)(*(int (**)(BuildingClass *, int *))(this->vtable1 + 440))(this, &v55); /*0x445caf*/
//DUPDEF       v36 = 0; /*0x445cb1*/
//DUPDEF       v58[0] = v35; /*0x445cb3*/
//DUPDEF       v37 = FoundationHeight + 2; /*0x445cb7*/
//DUPDEF       *(unsigned int *)v53 = 0; /*0x445cbc*/
//DUPDEF       v55 = FoundationHeight + 2; /*0x445cc0*/
//DUPDEF       if ( FoundationHeight + 2 > 0 ) /*0x445cc4*/
//DUPDEF       {
//DUPDEF         v38 = FoundationWidth + 2; /*0x445cc6*/
//DUPDEF         do /*0x445d33*/
//DUPDEF         {
//DUPDEF           v39 = 0; /*0x445cc9*/
//DUPDEF           if ( v38 > 0 ) /*0x445ccd*/
//DUPDEF           {
//DUPDEF             v56 = IDA_LOWORD(v58[0]) - 1; /*0x445cd9*/
//DUPDEF             v57 = IDA_HIWORD(v58[0]) - 1; /*0x445cde*/
//DUPDEF             v40 = IDA_LOWORD(v58[0]) - 1; /*0x445ce7*/
//DUPDEF             IDA_HIWORD(v52) = v36 + IDA_HIWORD(v58[0]) - 1; /*0x445ced*/
//DUPDEF             do /*0x445d22*/
//DUPDEF             {
//DUPDEF               IDA_LOWORD(v52) = v40 + v39; /*0x445cf9*/
//DUPDEF               *(unsigned int *)v52 = v52; /*0x445d02*/
//DUPDEF               v41 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v52); /*0x445d0c*/
//DUPDEF               ++v39; /*0x445d19*/
//DUPDEF               --v41[290]; /*0x445d1c*/
//DUPDEF             }
//DUPDEF             while ( v39 < v38 ); /*0x445d22*/
//DUPDEF             v37 = v55; /*0x445d24*/
//DUPDEF             v36 = *(unsigned int *)v53; /*0x445d28*/
//DUPDEF           }
//DUPDEF           *(unsigned int *)v53 = ++v36; /*0x445d2f*/
//DUPDEF         }
//DUPDEF         while ( v36 < v37 ); /*0x445d33*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( g_TacticalClass_Instance ) /*0x445d3d*/
//DUPDEF     {
//DUPDEF       v42 = (int *)(*(int (**)(BuildingClass *, unsigned int *))(this->vtable1 + 300))(this, v58); /*0x445d49*/
//DUPDEF       Cell::CreateCrater(*v42, v42[1], v42[2], v42[3], 0); /*0x445d70*/
//DUPDEF     }
//DUPDEF     Spotlight = this->Spotlight; /*0x445d75*/
//DUPDEF     if ( Spotlight ) /*0x445d7d*/
//DUPDEF       (*(void (**)(int))(*(unsigned int *)Spotlight + 248))(Spotlight); /*0x445d81*/
//DUPDEF     BuildingClass::DecrementTypeCounter((BuildingClass *)this->owner, this); /*0x445d8e*/
//DUPDEF     *(unsigned char *)(this->owner + 508) = 1; /*0x445d99*/
//DUPDEF     BuildingClass::CalcExitCoords((BuildingClass *)this->owner); /*0x445da6*/
//DUPDEF     if ( (Object *)this->owner == dword_A83D4C ) /*0x445db8*/
//DUPDEF     {
//DUPDEF       byte_880CF4 = 1; /*0x445dc0*/
//DUPDEF       MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x445dc7*/
//DUPDEF     }
//DUPDEF     HouseClass::RecordCratePlacement((HouseClass *)this->owner, this); /*0x445dd3*/
//DUPDEF   }
//DUPDEF   v17 = TechnoClass::CleanupDeploy(this); /*0x445ddf*/
//DUPDEF   if ( v48 ) /*0x445de7*/
//DUPDEF     HouseClass::AcquiredThreatNode((HouseClass *)this->owner); /*0x445def*/
//DUPDEF   v45 = this->Type; /*0x445df4*/
//DUPDEF   v46 = this->u32_13D8; /*0x445dfa*/
//DUPDEF   if ( v46 ) /*0x445e02*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(v44) = this->u32_11EE; /*0x445e04*/
//DUPDEF     HouseClass::UpdateProduction(this->owner, v46, v44, 0); /*0x445e14*/
//DUPDEF   }
//DUPDEF   LABEL_75:
//DUPDEF   result = this->Type; /*0x445e19*/
//DUPDEF   if ( this->u32_1BDE ) /*0x445e1f*/
//DUPDEF   {
//DUPDEF     result = dword_A8E7AC; /*0x445e29*/
//DUPDEF     if ( !dword_A8E7AC ) /*0x445e30*/
//DUPDEF       this->LaserFenceFrame = 0; /*0x445e32*/
//DUPDEF   }
//DUPDEF   IDA_LOBYTE(result) = v17; /*0x445e3e*/
//DUPDEF   return result; /*0x445e3c*/
//DUPDEF }
//DUPDEF   v17 = TechnoClass::CleanupDeploy((TechnoClass *)this); /*0x445ddf*/
//DUPDEF   if ( v48 ) /*0x445de7*/
//DUPDEF     HouseClass::AcquiredThreatNode(this->owner); /*0x445def*/
//DUPDEF   v45 = this->Type; /*0x445df4*/
//DUPDEF   v46 = v45->Factory[0]; /*0x445dfa*/
//DUPDEF   if ( v46 ) /*0x445e02*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(v44) = v45->Crewed[1]; /*0x445e04*/
//DUPDEF     HouseClass::UpdateProduction((int)this->owner, v46, v44, 0); /*0x445e14*/
//DUPDEF   }
//DUPDEF   LABEL_75:
//DUPDEF   result = (int)this->Type; /*0x445e19*/
//DUPDEF   if ( result->LaserFencePost ) /*0x445e1f*/
//DUPDEF   {
//DUPDEF     result = unk_A8E7AC; /*0x445e29*/
//DUPDEF     if ( !unk_A8E7AC ) /*0x445e30*/
//DUPDEF       this->LaserFenceFrame = 0; /*0x445e32*/
//DUPDEF   }
//DUPDEF   IDA_LOBYTE(result) = v17; /*0x445e3e*/
//DUPDEF   return result; /*0x445e3c*/
//DUPDEF }
//DUPDEF   v17 = TechnoClass::CleanupDeploy((TechnoClass *)this); /*0x445ddf*/
//DUPDEF   if ( v48 ) /*0x445de7*/
//DUPDEF     HouseClass::AcquiredThreatNode(this->owner); /*0x445def*/
//DUPDEF   v45 = this->Type; /*0x445df4*/
//DUPDEF   v46 = v45->Factory[0]; /*0x445dfa*/
//DUPDEF   if ( v46 ) /*0x445e02*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(v44) = v45->Crewed[1]; /*0x445e04*/
//DUPDEF     HouseClass::UpdateProduction((int)this->owner, v46, v44, 0); /*0x445e14*/
//DUPDEF   }
//DUPDEF   LABEL_75:
//DUPDEF   result = (int)this->Type; /*0x445e19*/
//DUPDEF   if ( result->LaserFencePost ) /*0x445e1f*/
//DUPDEF   {
//DUPDEF     result = unk_A8E7AC; /*0x445e29*/
//DUPDEF     if ( !unk_A8E7AC ) /*0x445e30*/
//DUPDEF       this->LaserFenceFrame = 0; /*0x445e32*/
//DUPDEF   }
//DUPDEF   IDA_LOBYTE(result) = v17; /*0x445e3e*/
//DUPDEF   return result; /*0x445e3c*/
//DUPDEF }
//DUPDEF   v17 = TechnoClass::CleanupDeploy(this); /*0x445ddf*/
//DUPDEF   if ( v48 ) /*0x445de7*/
//DUPDEF     HouseClass::AcquiredThreatNode(*((unsigned char **)&this->attachedTag5)); /*0x445def*/
//DUPDEF   v45 = this->Type; /*0x445df4*/
//DUPDEF   v46 = v45->BuildingTypeClass_field_ED8; /*0x445dfa*/
//DUPDEF   if ( v46 ) /*0x445e02*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(v44) = v45->Naval; /*0x445e04*/
//DUPDEF     HouseClass::UpdateProduction(this->owner, v46, v44, 0); /*0x445e14*/
//DUPDEF   }
//DUPDEF   LABEL_75:
//DUPDEF   result = this->Type; /*0x445e19*/
//DUPDEF   if ( result->LaserFencePost ) /*0x445e1f*/
//DUPDEF   {
//DUPDEF     result = g_IKnowWhatImDoing; /*0x445e29*/
//DUPDEF     if ( !g_IKnowWhatImDoing ) /*0x445e30*/
//DUPDEF       this->LaserFenceFrame = 0; /*0x445e32*/
//DUPDEF   IDA_LOBYTE(result) = v17; /*0x445e3e*/
//DUPDEF   return result; /*0x445e3c*/
//DUPDEF   v17 = TechnoClass::CleanupDeploy(this); /*0x445ddf*/
//DUPDEF   if ( v48 ) /*0x445de7*/
//DUPDEF     HouseClass::AcquiredThreatNode(*((unsigned char **)&this->attachedTag5)); /*0x445def*/
//DUPDEF   v45 = this->Type; /*0x445df4*/
//DUPDEF   v46 = v45->BuildingTypeClass_field_ED8; /*0x445dfa*/
//DUPDEF   if ( v46 ) /*0x445e02*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(v44) = v45->Naval; /*0x445e04*/
//DUPDEF     HouseClass::UpdateProduction(this->owner, v46, v44, 0); /*0x445e14*/
//DUPDEF   LABEL_75:
//DUPDEF   result = this->Type; /*0x445e19*/
//DUPDEF   if ( result->LaserFencePost ) /*0x445e1f*/
//DUPDEF   {
//DUPDEF     result = g_IKnowWhatImDoing; /*0x445e29*/
//DUPDEF     if ( !g_IKnowWhatImDoing ) /*0x445e30*/
//DUPDEF       this->LaserFenceFrame = 0; /*0x445e32*/
//DUPDEF   IDA_LOBYTE(result) = v17; /*0x445e3e*/
//DUPDEF   return result; /*0x445e3c*/
// 0x44f5c0
bool BuildingClass::CanBeSoldCheck() { return CanBeSold(); }
//DUPDEF   int result; // eax

//DUPDEF   result = ((unsigned int *)this)[0]; /*0x44f5c3*/
//DUPDEF   if ( result <= 0 ) /*0x44f5cb*/
//DUPDEF   {
//DUPDEF     result = (*((int (**)(BuildingClass *))this->vtable1 + 161))(this); /*0x44f5d5*/
//DUPDEF     if ( (unsigned char)result ) /*0x44f5dd*/
//DUPDEF     {
//DUPDEF       IDA_LOBYTE(result) = 1; /*0x44f5df*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       if ( !this->Type->ConstructionYard ) /*0x44f5e9*/
//DUPDEF         return this->((unsigned int *)Type)[0] != 0; /*0x44f5e9*/
//DUPDEF       result = House::IsCurrentPlayer((House *)((unsigned int *)this)[0]); /*0x44f5f9*/
//DUPDEF       if ( (unsigned char)result && (result = *(unsigned int *)&dword_A8B238) != 0 && dword_A8B320 && (result = (int)((unsigned int *)this)[0]) == 0 ) /*0x44f61c*/
//DUPDEF         return this->((unsigned int *)Type)[0] != 0; /*0x44f633*/
//DUPDEF       else
//DUPDEF         IDA_LOBYTE(result) = 0; /*0x44f61e*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x44f5cd*/
//DUPDEF   }
//DUPDEF   return result; /*0x44f5cf*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x44f5cd*/
//DUPDEF   }
//DUPDEF   return result; /*0x44f5cf*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x44f5cd*/
//DUPDEF }
//DUPDEF   return result; /*0x44f5cf*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(a2) = 0; /*0x44f5cd*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(a2) = 0; /*0x44f5cd*/
// 0x4d9f70
void BuildingClass::SellUnit()
{
  int a2; // raw param (truth 0x4D9F70 carries this + a2; hpp decl 0-param -- decl gap)
  int result; // eax
  int v4; // eax

  result = a2; /*0x4d9f70*/
  if ( a2 ) /*0x4d9f79*/
  {
    if ( (uint8_t)((HouseClass *)((unsigned int *)this)[0])->IsHumanPlayer() ) /*0x4d9f81*/
    {
      ((VoxClass *)&((unsigned int *)&stru_822420)[24])->FindAndPlay(-1); /*0x4d9f94*/
      PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1700), 0x2000, 1.0, 0); /*0x4d9fb0*/
    }
    v4 = (*((int (**)(BuildingClass *))this->vtable1 + 175))(this); /*0x4d9fb9*/
    ((HouseClass *)((unsigned int *)this)[0])->AddPower(v4); /*0x4d9fc6 -- house.hpp:628 takes 1*/
    (*((void (**)(BuildingClass *))this->vtable1 + 232))(this); /*0x4d9fcf*/
    (*((void (**)(BuildingClass *))this->vtable1 + 53))(this); /*0x4d9fd9*/
    (*((void (**)(BuildingClass *))this->vtable1 + 62))(this); /*0x4d9fe3*/
  }
  return; /*0x4d9fe9*/
}
// 0x701410
void BuildingClass::HandleSellOrRepair()
{
  double v1; // st7
  int v3; // eax
  int result; // eax
  int v5; // edx
  unsigned int *v6; // eax
  unsigned char v7[12]; // [esp+8h] [ebp-Ch] BYREF

  (*((void (**)(TechnoClass *, int))this->vtable1 + 73))(this, 2); /*0x70141a*/
  v3 = *(unsigned int *)((*((int (**)(TechnoClass *))this->vtable1 + 33))(this) + 160); /*0x70142a*/
  ((unsigned int *)this)[0] = v3; /*0x701432*/
  ((unsigned int *)this)[0] = v3; /*0x701435*/
  result = (*((int (**)(TechnoClass *))this->vtable1 + 11))(this); /*0x70143a*/
  if ( result == 6 ) /*0x701440*/
  {
    (*((void (**)(TechnoClass *, unsigned int))this->vtable1 + 103))(this, 0); /*0x701448*/
    this->GetHealthRatio(); /*0x701450 -- building.hpp:341 instance 0-param*/
    globalHelper_051EE0((int)this, v5, v1 <= *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5888)); /*0x701473*/
    v6 = (unsigned int *)(*((int (**)(TechnoClass *, unsigned char *))this->vtable1 + 18))(this, v7); /*0x701483*/
    (void)StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 452), (int)v6, 0); /*0x701494 -- global_funcs.hpp:4804 (int,int,int)*/
  }
  return; /*0x701499*/
}
// IDA 0x44f450: repair mission
int BuildingClass::Mission_Repair()
{
  return 20; // TODO stub - retranslate via C-line pipeline (raw dup of 0x701410 body removed, G42.33c2)
}

// 0x44b780
void BuildingClass::ProcessRepair() {}
// 0x457ce0
bool BuildingClass::CanRepair(TechnoClass* repairer) {
if (!repairer)
    return false;
if (!this->Type->CanBeOccupied) /*truth: this->Type+5499; q520 == this->Type ptr @0x520*/
    return false;
if (this->currentMission == 18)
    return false;
if (this->currentMission == 19)
    return false;
CoordStruct exitCoords;
CoordStruct* coords = this->GetExitCoords(&exitCoords, 0); /*building.hpp:99 takes 2*/
if (!IsCoordVisibleMap(&DataGlobal_87F7E8[0], coords) /*0x5785F0 shim*/
    || (*((int (**)(BuildingClass *))this->vtable1 + 117))(this)) /*truth 0x457ce0: TechnoClass vt slot 117 -- MI sub-vtable approximated via vtable1*/
    return false;
int typeEntry = *((int*)repairer + 432);
if (!*(unsigned char*)(typeEntry + 3764))
    return *(unsigned char*)(typeEntry + 3765)
        && !((ra2::game::ObjectClass *)this->owner)->IsAlliedWithObjectHouse((int)repairer) /*truth 0x4f9a90 receiver=this->? @540*/
        && this->MissionStubReturnZero6();
HouseClass* ownerHouse = this->owner;
return (ownerHouse == repairer->owner || *(unsigned char*)(*((int*)ownerHouse + 13) + 422))
    && this->MissionStubReturnZero6() != this->Type->MaxNumberOccupants /*q520 == this->Type*/
    && !this->IsHealthLow() /*building.hpp:342 instance 0-param*/
    && !((BuildingClass *)repairer)->IsBeingRepairedOrCaptured(); /*truth 0x7105e0: receiver = a2 (repairer)*/

/* ASM:
sub     esp, 0Ch
push    esi
push    edi
mov     edi, [esp+14h+arg_0]
mov     esi, ecx
test    edi, edi
jz      loc_457DA3
mov     eax, [esi+520h]
mov     cl, [eax+157Bh]
test    cl, cl
jz      loc_457DA3
mov     eax, [esi+0ACh]
cmp     eax, 12h
jz      loc_457DA3
cmp     eax, 13h
jz      loc_457DA3
mov     edx, [esi]
lea     eax, [esp+14h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    IsCoordVisibleMap
test    al, al
jz      short loc_457DA3
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jnz     short loc_457DA3
mov     eax, [edi+6C0h]
mov     cl, [eax+0EB4h]
test    cl, cl
jz      short loc_457DAD
mov     eax, [esi+21Ch]
mov     ecx, [edi+21Ch]
cmp     eax, ecx
jz      short loc_457D75
mov     eax, [eax+34h]
mov     cl, [eax+1A6h]
test    cl, cl
jz      short loc_457DA3

loc_457D75:                             ; CODE XREF: BuildingClass__CanRepair+86↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+408h]
mov     ecx, [esi+520h]
cmp     eax, [ecx+1580h]
jz      short loc_457DA3
mov     ecx, esi
call    BuildingClass__IsHealthLow
test    al, al
jnz     short loc_457DA3
mov     ecx, edi
call    BuildingClass__IsBeingRepairedOrCaptured
test    al, al
jz      short loc_457DD5

loc_457DA3:                             ; CODE XREF: BuildingClass__CanRepair+D↑j
; BuildingClass__CanRepair+21↑j ...
pop     edi
xor     al, al
pop     esi
add     esp, 0Ch
retn    4
; ---------------------------------------------------------------------------

loc_457DAD:                             ; CODE XREF: BuildingClass__CanRepair+76↑j
mov     cl, [eax+0EB5h]
test    cl, cl
jz      short loc_457DA3
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     short loc_457DA3
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+408h]
test    eax, eax
jz      short loc_457DA3

loc_457DD5:                             ; CODE XREF: BuildingClass__CanRepair+C1↑j
pop     edi
mov     al, 1
pop     esi
add     esp, 0Ch
retn    4
*/
}
// 0x446ff0
void BuildingClass::ToggleRepairMode() { IsBeingRepaired = !IsBeingRepaired; }
//DUPDEF   int result; // eax
//DUPDEF   int v3; // edi
//DUPDEF   HouseClass *owner; // ecx
//DUPDEF   int *location; // esi
//DUPDEF   unsigned int v6[3]; // [esp+8h] [ebp-Ch] BYREF
//DUPDEF   int v7; // [esp+18h] [ebp+4h]

//DUPDEF   result = v7; /*0x446ff0*/
//DUPDEF   if ( v7 == -1 ) /*0x446ffe*/
//DUPDEF   {
//DUPDEF     this->IsBeingRepaired = this->IsBeingRepaired == 0; /*0x447042*/
//DUPDEF   }
//DUPDEF   else if ( v7 ) /*0x447002*/
//DUPDEF   {
//DUPDEF     if ( v7 == 1 ) /*0x447007*/
//DUPDEF     {
//DUPDEF       IDA_LOBYTE(result) = this->IsBeingRepaired; /*0x447009*/
//DUPDEF       if ( (unsigned char)result ) /*0x447011*/
//DUPDEF         return result; /*0x447011*/
//DUPDEF       this->IsBeingRepaired = 1; /*0x447017*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     result = (uint8_t)this->IsBeingRepaired; /*0x447020*/
//DUPDEF     if ( !(unsigned char)result ) /*0x447028*/
//DUPDEF       return result; /*0x447028*/
//DUPDEF     this->IsBeingRepaired = 0; /*0x44702e*/
//DUPDEF   }
//DUPDEF   if ( this->IsBeingRepaired ) /*0x447048*/
//DUPDEF   {
//DUPDEF     if ( ((unsigned int *)this)[0] == this->((unsigned int *)Type)[0] ) /*0x447061*/
//DUPDEF     {
//DUPDEF       v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1792); /*0x447068*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x447076*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) ) /*0x447082*/
//DUPDEF         (*((void (**)(BuildingClass *, int))this->vtable1 + 82))(this, 7); /*0x447091*/
//DUPDEF       owner = ((unsigned int *)this)[0]; /*0x447097*/
//DUPDEF       this->NeedsRepairs = 1; /*0x44709d*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)owner) ) /*0x4470a4*/
//DUPDEF         ((VoxClass *)&((unsigned int *)&stru_818E00)[5])->FindAndPlay(-1); /*0x4470b7*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x4470c3*/
//DUPDEF   }
//DUPDEF   result = House::IsHumanPlayer((House *)((unsigned int *)this)[0]); /*0x4470cf*/
//DUPDEF   if ( (unsigned char)result ) /*0x4470d6*/
//DUPDEF   {
//DUPDEF     location = ((unsigned int *)this)[0]; /*0x4470d8*/
//DUPDEF     v6[0] = *location; /*0x4470e2*/
//DUPDEF     v6[1] = location[1]; /*0x4470eb*/
//DUPDEF     v6[2] = location[2]; /*0x4470f6*/
//DUPDEF     return (int)StartAudioControllerAt(v3, v6, 0); /*0x4470fa*/
//DUPDEF   }
//DUPDEF   return result; /*0x4470ff*/
//DUPDEF }
//DUPDEF   else if ( v7 ) /*0x447002*/
//DUPDEF   {
//DUPDEF     if ( v7 == 1 ) /*0x447007*/
//DUPDEF     {
//DUPDEF       IDA_LOBYTE(result) = this->IsBeingRepaired; /*0x447009*/
//DUPDEF       if ( (unsigned char)result ) /*0x447011*/
//DUPDEF         return result; /*0x447011*/
//DUPDEF       this->IsBeingRepaired = 1; /*0x447017*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     result = (uint8_t)this->IsBeingRepaired; /*0x447020*/
//DUPDEF     if ( !(unsigned char)result ) /*0x447028*/
//DUPDEF       return result; /*0x447028*/
//DUPDEF     this->IsBeingRepaired = 0; /*0x44702e*/
//DUPDEF   }
//DUPDEF   if ( this->IsBeingRepaired ) /*0x447048*/
//DUPDEF   {
//DUPDEF     if ( this->health == this->Type->Strength ) /*0x447061*/
//DUPDEF     {
//DUPDEF       v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1792); /*0x447068*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x447076*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x447082*/
//DUPDEF         (*((void (**)(BuildingClass *, int))this->vtable1 + 82))(this, 7); /*0x447091*/
//DUPDEF       owner = this->owner; /*0x447097*/
//DUPDEF       this->NeedsRepairs = 1; /*0x44709d*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)owner) ) /*0x4470a4*/
//DUPDEF         ((VoxClass *)&stru_818E00_raw.ChargerBarrels[5])->FindAndPlay(-1); /*0x4470b7*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x4470c3*/
//DUPDEF }
//DUPDEF   result = House::IsHumanPlayer((House *)this->owner); /*0x4470cf*/
//DUPDEF   if ( (unsigned char)result ) /*0x4470d6*/
//DUPDEF   {
//DUPDEF     location = this->location; /*0x4470d8*/
//DUPDEF     v6[0] = *location; /*0x4470e2*/
//DUPDEF     v6[1] = location[1]; /*0x4470eb*/
//DUPDEF     v6[2] = location[2]; /*0x4470f6*/
//DUPDEF     return (int)StartAudioControllerAt(v3, v6, 0); /*0x4470fa*/
//DUPDEF }
//DUPDEF   return result; /*0x4470ff*/
//DUPDEF }
//DUPDEF   else if ( v7 ) /*0x447002*/
//DUPDEF   {
//DUPDEF     if ( v7 == 1 ) /*0x447007*/
//DUPDEF     {
//DUPDEF       IDA_LOBYTE(result) = this->IsBeingRepaired; /*0x447009*/
//DUPDEF       if ( (unsigned char)result ) /*0x447011*/
//DUPDEF         return result; /*0x447011*/
//DUPDEF       this->IsBeingRepaired = 1; /*0x447017*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     result = (uint8_t)this->IsBeingRepaired; /*0x447020*/
//DUPDEF     if ( !(unsigned char)result ) /*0x447028*/
//DUPDEF       return result; /*0x447028*/
//DUPDEF     this->IsBeingRepaired = 0; /*0x44702e*/
//DUPDEF   }
//DUPDEF   if ( this->IsBeingRepaired ) /*0x447048*/
//DUPDEF   {
//DUPDEF     if ( this->health == this->Type->Strength ) /*0x447061*/
//DUPDEF     {
//DUPDEF       v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1792); /*0x447068*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x447076*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x447082*/
//DUPDEF         (*((void (**)(BuildingClass *, int))this->vtable1 + 82))(this, 7); /*0x447091*/
//DUPDEF       owner = this->owner; /*0x447097*/
//DUPDEF       this->NeedsRepairs = 1; /*0x44709d*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)owner) ) /*0x4470a4*/
//DUPDEF         ((VoxClass *)&stru_818E00_raw.ChargerBarrels[5])->FindAndPlay(-1); /*0x4470b7*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x4470c3*/
//DUPDEF }
//DUPDEF   result = House::IsHumanPlayer((House *)this->owner); /*0x4470cf*/
//DUPDEF   if ( (unsigned char)result ) /*0x4470d6*/
//DUPDEF   {
//DUPDEF     location = this->location; /*0x4470d8*/
//DUPDEF     v6[0] = *location; /*0x4470e2*/
//DUPDEF     v6[1] = location[1]; /*0x4470eb*/
//DUPDEF     v6[2] = location[2]; /*0x4470f6*/
//DUPDEF     return (int)StartAudioControllerAt(v3, v6, 0); /*0x4470fa*/
//DUPDEF }
//DUPDEF   return result; /*0x4470ff*/
//DUPDEF }
//DUPDEF   else if ( v7 ) /*0x447002*/
//DUPDEF   {
//DUPDEF     if ( v7 == 1 ) /*0x447007*/
//DUPDEF     {
//DUPDEF       IDA_LOBYTE(result) = this->IsBeingRepaired; /*0x447009*/
//DUPDEF       if ( (unsigned char)result ) /*0x447011*/
//DUPDEF         return result; /*0x447011*/
//DUPDEF       this->IsBeingRepaired = 1; /*0x447017*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     result = *((uint8_t *)&this->mindControlledBy8); /*0x447020*/
//DUPDEF     if ( !(unsigned char)result ) /*0x447028*/
//DUPDEF       return result; /*0x447028*/
//DUPDEF     this->IsBeingRepaired = 0; /*0x44702e*/
//DUPDEF   }
//DUPDEF   if ( this->IsBeingRepaired ) /*0x447048*/
//DUPDEF   {
//DUPDEF     if ( this->health == this->Type->Strength ) /*0x447061*/
//DUPDEF     {
//DUPDEF       v3 = ((unsigned int *)g_RulesClass_Instance)[3]; /*0x447068*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v3 = g_RulesClass_Instance->__pad_704[2]; /*0x447076*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer(*((void **)&this->attachedTag5)) ) /*0x447082*/
//DUPDEF         (*(void (**)(void *, int))(*(unsigned int *)&this->needsRedraw8))(this, 7); /*0x447091*/
//DUPDEF       v4 = (void *)this->owner; /*0x447097*/
//DUPDEF       this->NeedsRepairs = 1; /*0x44709d*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer(v4) ) /*0x4470a4*/
//DUPDEF         VoxClass::FindAndPlay(aEvaRepairing, -1); /*0x4470b7*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v3 = g_RulesClass_Instance->__pad_704[2]; /*0x4470c3*/
//DUPDEF }
//DUPDEF   result = House::IsHumanPlayer(*((void **)&this->attachedTag5)); /*0x4470cf*/
//DUPDEF   if ( (unsigned char)result ) /*0x4470d6*/
//DUPDEF   {
//DUPDEF     v5 = (unsigned int *)((char *)&this->ambientSoundController6); /*0x4470d8*/
//DUPDEF     v6[0] = *v5; /*0x4470e2*/
//DUPDEF     v6[1] = v5[1]; /*0x4470eb*/
//DUPDEF     v6[2] = v5[2]; /*0x4470f6*/
//DUPDEF     return StartAudioControllerAt(v3, (int)v6, 0); /*0x4470fa*/
//DUPDEF }
//DUPDEF   return result; /*0x4470ff*/
//DUPDEF }
//DUPDEF   else if ( v7 ) /*0x447002*/
//DUPDEF   {
//DUPDEF     if ( v7 == 1 ) /*0x447007*/
//DUPDEF     {
//DUPDEF       IDA_LOBYTE(result) = this->IsBeingRepaired; /*0x447009*/
//DUPDEF       if ( (unsigned char)result ) /*0x447011*/
//DUPDEF         return result; /*0x447011*/
//DUPDEF       this->IsBeingRepaired = 1; /*0x447017*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     result = *((uint8_t *)&this->mindControlledBy8); /*0x447020*/
//DUPDEF     if ( !(unsigned char)result ) /*0x447028*/
//DUPDEF       return result; /*0x447028*/
//DUPDEF     this->IsBeingRepaired = 0; /*0x44702e*/
//DUPDEF   }
//DUPDEF   if ( this->IsBeingRepaired ) /*0x447048*/
//DUPDEF   {
//DUPDEF     if ( this->health == this->Type->Strength ) /*0x447061*/
//DUPDEF     {
//DUPDEF       v3 = g_RulesClass_Instance->Scorches1[3]; /*0x447068*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v3 = g_RulesClass_Instance->Scorches2[2]; /*0x447076*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer(*((void **)&this->attachedTag5)) ) /*0x447082*/
//DUPDEF         (*(void (**)(void *, int))(*(unsigned int *)&this->needsRedraw8))(this, 7); /*0x447091*/
//DUPDEF       v4 = (void *)this->owner; /*0x447097*/
//DUPDEF       this->NeedsRepairs = 1; /*0x44709d*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer(v4) ) /*0x4470a4*/
//DUPDEF         VoxClass::FindAndPlay(aEvaRepairing, -1); /*0x4470b7*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v3 = g_RulesClass_Instance->Scorches2[2]; /*0x4470c3*/
//DUPDEF   result = House::IsHumanPlayer(*((void **)&this->attachedTag5)); /*0x4470cf*/
//DUPDEF   if ( (unsigned char)result ) /*0x4470d6*/
//DUPDEF   {
//DUPDEF     v5 = (unsigned int *)((char *)&this->ambientSoundController6); /*0x4470d8*/
//DUPDEF     v6[0] = *v5; /*0x4470e2*/
//DUPDEF     v6[1] = v5[1]; /*0x4470eb*/
//DUPDEF     v6[2] = v5[2]; /*0x4470f6*/
//DUPDEF     return StartAudioControllerAt(v3, (int)v6, 0); /*0x4470fa*/
//DUPDEF   return result; /*0x4470ff*/
//DUPDEF // IDA 0x459ed0: missile building mission
//DUPDEF int BuildingClass::Mission_Missile()
//DUPDEF {
//DUPDEF {
//DUPDEF     return this->locomotorTarget || this->locomotorSource;
//DUPDEF }
//DUPDEF     return {}; // TODO stub - retranslate via C-line pipeline
//DUPDEF }
//DUPDEF 
//DUPDEF // 0x44c980
//DUPDEF void BuildingClass::ProcessSuperWeaponEffects() {}
//DUPDEF   int v2; // ecx
//DUPDEF   void *v3; // eax
//DUPDEF   int v4; // ebp
//DUPDEF   void *v5; // edi
//DUPDEF   void *v6; // ebx
//DUPDEF   int *v7; // eax
//DUPDEF   void **v8; // eax
//DUPDEF   void **v9; // edi
//DUPDEF   void *v10; // eax
//DUPDEF   int *v11; // ebx
//DUPDEF   unsigned int *UIObject; // eax
//DUPDEF   int v13; // edi
//DUPDEF   unsigned int *v14; // ecx
//DUPDEF   int *v15; // eax
//DUPDEF   double v16; // st7
//DUPDEF   int result; // eax
//DUPDEF   void **v18; // eax
//DUPDEF   void **v19; // eax
//DUPDEF   void (__thiscall **vfptr0)(void *, void *, unsigned int); // edi
//DUPDEF   void *v21; // eax
//DUPDEF   int (__thiscall **v22)(void *, unsigned char *, void *); // edi
//DUPDEF   void *v23; // eax
//DUPDEF   void **v24; // eax
//DUPDEF   int (__thiscall **v25)(void *, unsigned char *, void *); // edi
//DUPDEF   void *v26; // eax
//DUPDEF   int *v27; // eax
//DUPDEF   int v28; // ebp
//DUPDEF   void *v29; // ebx
//DUPDEF   unsigned short *v30; // eax
//DUPDEF   int v31; // eax
//DUPDEF   int v32; // edx
//DUPDEF   int16_t *v33; // eax
//DUPDEF   double v34; // st7
//DUPDEF   void *v35; // eax
//DUPDEF   int v36; // eax
//DUPDEF   char v37; // cl
//DUPDEF   double v39; // st7
//DUPDEF   double v40; // st7
//DUPDEF   double v41; // st7
//DUPDEF   int (__thiscall **v42)(unsigned int, unsigned int, unsigned int); // edx
//DUPDEF   int *v43; // eax
//DUPDEF   unsigned int *v44; // eax
//DUPDEF   int v45; // ebx
//DUPDEF   double v46; // st7
//DUPDEF   char IsCloseEnoughToBuilding; // al
//DUPDEF   double v48; // st7
//DUPDEF   char v49; // al
//DUPDEF   double v50; // st7
//DUPDEF   unsigned int v51; // edi
//DUPDEF   unsigned int v52; // ebx
//DUPDEF   double v53; // st7
//DUPDEF   double v54; // st7
//DUPDEF   double v55; // st7
//DUPDEF   int v57; // ebp
//DUPDEF   int v58; // eax
//DUPDEF   char *MissionControl; // eax
//DUPDEF   int v60; // [esp+34h] [ebp-FCh]
//DUPDEF   int v61; // [esp+34h] [ebp-FCh]
//DUPDEF   double v62; // [esp+3Ch] [ebp-F4h]
//DUPDEF   double v63; // [esp+3Ch] [ebp-F4h]
//DUPDEF   int64_t v64; // [esp+40h] [ebp-F0h]
//DUPDEF   double v65; // [esp+40h] [ebp-F0h]
//DUPDEF   int16_t *v66; // [esp+44h] [ebp-ECh]
//DUPDEF   void **v67; // [esp+5Ch] [ebp-D4h] BYREF
//DUPDEF   double v68; // [esp+60h] [ebp-D0h] BYREF
//DUPDEF   double v69; // [esp+68h] [ebp-C8h]
//DUPDEF   double v70; // [esp+70h] [ebp-C0h]
//DUPDEF   double v71; // [esp+78h] [ebp-B8h] BYREF
//DUPDEF   void **v72; // [esp+8Ch] [ebp-A4h] BYREF
//DUPDEF   double v73; // [esp+90h] [ebp-A0h]
//DUPDEF   int v74; // [esp+98h] [ebp-98h]
//DUPDEF   int v75[2]; // [esp+A4h] [ebp-8Ch] BYREF
//DUPDEF   int v76; // [esp+ACh] [ebp-84h]
//DUPDEF   double v77; // [esp+B0h] [ebp-80h] BYREF
//DUPDEF   double v78; // [esp+C0h] [ebp-70h] BYREF
//DUPDEF   double v80[2]; // [esp+D0h] [ebp-60h] BYREF
//DUPDEF   int16_t v81; // [esp+E0h] [ebp-50h] BYREF
//DUPDEF   unsigned int v82[3]; // [esp+E4h] [ebp-4Ch] BYREF
//DUPDEF   int v83; // [esp+F0h] [ebp-40h] BYREF
//DUPDEF   unsigned char v84[4]; // [esp+F4h] [ebp-3Ch] BYREF
//DUPDEF   unsigned char v85[4]; // [esp+F8h] [ebp-38h] BYREF
//DUPDEF   int v86; // [esp+FCh] [ebp-34h] BYREF
//DUPDEF   unsigned char v87[12]; // [esp+100h] [ebp-30h] BYREF
//DUPDEF   unsigned char v88[12]; // [esp+10Ch] [ebp-24h] BYREF
//DUPDEF   unsigned char v89[12]; // [esp+118h] [ebp-18h] BYREF
//DUPDEF   unsigned char v90[12]; // [esp+124h] [ebp-Ch] BYREF
//DUPDEF 
//DUPDEF   if ( this->Type->NukeSilo ) /*0x44c998*/
//DUPDEF   {
//DUPDEF     switch ( this->missionStatus ) /*0x44c9b5*/
//DUPDEF     {
//DUPDEF       case 0: /*0x44c9b5*/
//DUPDEF         this->BuildingClass_field_bool_6DD = 0; /*0x44c9c0*/
//DUPDEF         BuildingClass::StartProduction((int *)this, 2); /*0x44c9c7*/
//DUPDEF         v2 = this->owner; /*0x44c9cc*/
//DUPDEF         this->missionStatus = 1; /*0x44c9d2*/
//DUPDEF         v3 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)(v2 + 22404)); /*0x44c9e8*/
//DUPDEF         v4 = this->owner; /*0x44c9ed*/
//DUPDEF         v5 = v3; /*0x44c9f8*/
//DUPDEF         v6 = (void *)*((unsigned int *)g_AnimTypeCount + AnimTypeClass::FindIndex(aPsiwarn)); /*0x44ca0f*/
//DUPDEF         v7 = (int *)(*(int (**)(void *, unsigned int *))(*(unsigned int *)v5 + 72))(v5, v82); /*0x44ca14*/
//DUPDEF         v75[0] = *v7; /*0x44ca1e*/
//DUPDEF         v75[1] = v7[1]; /*0x44ca25*/
//DUPDEF         v76 = v7[2]; /*0x44ca2c*/
//DUPDEF         v8 = (void **)RA2_OPNEW(0x1C8u); /*0x44ca30*/
//DUPDEF         if ( v8 ) /*0x44ca3a*/
//DUPDEF           v9 = AnimClass::ctor(v8, v6, v75, 0, 1, (void *)0x600, 0, 0); /*0x44ca56*/
//DUPDEF         else
//DUPDEF           v9 = 0; /*0x44ca5a*/
//DUPDEF         BuildingClass::SetField95(v9, 0); /*0x44ca60*/
//DUPDEF         Function::Method_424CA0(v9, v4); /*0x44ca68*/
//DUPDEF         *((unsigned char *)v9 + 413) = 1; /*0x44ca6d*/
//DUPDEF         this->PsiWarnAnim = v9; /*0x44ca74*/
//DUPDEF         goto LABEL_7; /*0x44ca74*/
//DUPDEF       case 1: /*0x44c9b5*/
//DUPDEF   LABEL_7:
//DUPDEF         if ( this->BuildingClass_field_bool_6DD ) /*0x44ca7a*/
//DUPDEF         {
//DUPDEF           BuildingClass::StartProduction((int *)this, 4); /*0x44ca88*/
//DUPDEF           this->missionStatus = 2; /*0x44ca8d*/
//DUPDEF         }
//DUPDEF         goto LABEL_9; /*0x44ca8d*/
//DUPDEF       case 2: /*0x44c9b5*/
//DUPDEF   LABEL_9:
//DUPDEF         (*(void (**)(void *, double *))(((unsigned int)(this->referenceCount2))))(this, &v71); /*0x44ca97*/
//DUPDEF         v10 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)(this->owner + 22404)); /*0x44cab5*/
//DUPDEF         v11 = *(int **)(*((unsigned int *)g_SuperWeaponPool + this->FiringSWType) + 156); /*0x44cad0*/
//DUPDEF         UIObject = CreateUIObjectCOM(v11[40], (int)v10, (int)this, v11[41], v11[43], 255, 1); /*0x44caed*/
//DUPDEF         v13 = (int)UIObject; /*0x44caf2*/
//DUPDEF         if ( !UIObject ) /*0x44caf6*/
//DUPDEF           goto LABEL_18; /*0x44caf6*/
//DUPDEF         Function::Method_46B260(UIObject, (int)v11); /*0x44caff*/
//DUPDEF         v14 = (unsigned int *)this->PsiWarnAnim; /*0x44cb04*/
//DUPDEF         if ( v14 ) /*0x44cb0c*/
//DUPDEF         {
//DUPDEF           BuildingClass::SetField95(v14, v13); /*0x44cb0f*/
//DUPDEF           this->PsiWarnAnim = 0; /*0x44cb14*/
//DUPDEF         }
//DUPDEF         (*(void (**)(int))(v13->u32_D4)(v13); /*0x44cb22*/
//DUPDEF         v15 = (int *)(*(int (**)(void *, double *, unsigned int, unsigned int, unsigned int, unsigned int))(((unsigned int)(this->q0446))))( /*0x44cb46*/
//DUPDEF         //DUPDEF                this,
//DUPDEF                        &v77,
//DUPDEF                        0,
//DUPDEF                        0,
//DUPDEF                        0,
//DUPDEF                        0);
//DUPDEF         v75[0] = *v15; /*0x44cb53*/
//DUPDEF         v75[1] = v15[1]; /*0x44cb5f*/
//DUPDEF         v76 = v15[2]; /*0x44cb66*/
//DUPDEF         v73 = Math::SinCos(1.570748388432313); /*0x44cb6f*/
//DUPDEF         v78 = Math::ArcTan2(1.570748388432313) * v73 * 10.0; /*0x44cb96*/
//DUPDEF         v73 = Math::ArcTan2(1.570748388432313); /*0x44cba2*/
//DUPDEF         v16 = Math::ArcTan2(1.570748388432313); /*0x44cbb0*/
//DUPDEF         v80[1] = v78; /*0x44cbc7*/
//DUPDEF         v69 = v78; /*0x44cbec*/
//DUPDEF         v80[0] = v16 * v73 * 10.0; /*0x44cbf0*/
//DUPDEF         v68 = v80[0]; /*0x44cc05*/
//DUPDEF         v70 = Math::SinCos(1.570748388432313) * 10.0; /*0x44cc30*/
//DUPDEF         if ( (*(uint8_t (**)(int, int *, double *))(v13->u32_1F0)(v13, v75, &v68) ) /*0x44cc38*/
//DUPDEF         {
//DUPDEF           v18 = (void **)RA2_OPNEW(0x1C8u); /*0x44cc67*/
//DUPDEF           if ( v18 ) /*0x44cc71*/
//DUPDEF             v19 = AnimClass::ctor(v18, (void *)g_RulesClass_Instance->InfantryHeadPop, v75, 0, 1, (void *)0x600, 0, 0); /*0x44cc94*/
//DUPDEF           else
//DUPDEF             v19 = 0; /*0x44cc9b*/
//DUPDEF           v19[64] = (void *)-100; /*0x44cc9d*/
//DUPDEF           this->missionStatus = 3; /*0x44cca7*/
//DUPDEF   LABEL_18:
//DUPDEF           result = 1; /*0x44ccb1*/
//DUPDEF         }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           (*(void (**)(int, int))(v13->q080)(v13, 1); /*0x44cc48*/
//DUPDEF           this->missionStatus = 3; /*0x44cc4b*/
//DUPDEF           result = 1; /*0x44cc55*/
//DUPDEF         }
//DUPDEF         break; /*0x44cc61*/
//DUPDEF       case 3: /*0x44c9b5*/
//DUPDEF         BuildingClass::StartProduction((int *)this, 5); /*0x44ccc2*/
//DUPDEF         this->missionStatus = 4; /*0x44ccc7*/
//DUPDEF         return 6; /*0x44ccdd*/
//DUPDEF       case 4: /*0x44c9b5*/
//DUPDEF   LABEL_54:
//DUPDEF         BuildingClass::StartProduction((int *)this, 1); /*0x44d53c*/
//DUPDEF         (*(void (**)(void *, int, unsigned int))(*(unsigned int *)&this->missionStartTime8))(this, 5, 0); /*0x44d54d*/
//DUPDEF         return 60; /*0x44d55f*/
//DUPDEF       default:
//DUPDEF         goto LABEL_20;
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF   LABEL_20:
//DUPDEF     if ( this->FiringSWType != -1 ) /*0x44cce5*/
//DUPDEF     {
//DUPDEF       vfptr0 = *(void (***)(void *, void *, unsigned int))this; /*0x44cced*/
//DUPDEF       v64 = (unsigned int)(this->owner + 22404); /*0x44ccf6*/
//DUPDEF       v21 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)v64); /*0x44ccfc*/
//DUPDEF       vfptr0[243](this, v21, IDA_HIDWORD(v64)); /*0x44cd04*/
//DUPDEF       (*(void (**)(void *, int, unsigned int))(*(unsigned int *)&this->missionStartTime8))(this, 5, 0); /*0x44cd12*/
//DUPDEF     }
//DUPDEF     if ( this->Type->EMPulseCannon ) /*0x44cd1e*/
//DUPDEF     {
//DUPDEF       switch ( this->missionStatus ) /*0x44cd3b*/
//DUPDEF       {
//DUPDEF         case 0: /*0x44cd3b*/
//DUPDEF           v22 = *(int (***)(void *, unsigned char *, void *))this; /*0x44cd48*/
//DUPDEF           v23 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)(this->owner + 22400)); /*0x44cd56*/
//DUPDEF           v24 = *(void ***)v22[314](this, v85, v23); /*0x44cd72*/
//DUPDEF           v25 = *(int (***)(void *, unsigned char *, void *))this; /*0x44cd74*/
//DUPDEF           v66 = (int16_t *)(this->owner + 22400); /*0x44cd7c*/
//DUPDEF           v67 = v24; /*0x44cd82*/
//DUPDEF           v26 = CellCoord::To_CellObj(&MapClass_Instance, v66); /*0x44cd86*/
//DUPDEF           v72 = *(void ***)v25[178](this, v84, v26); /*0x44cdae*/
//DUPDEF           if ( abs16(*(unsigned short *)ProgressTimer::GetValue((unsigned short *)&this->u32_710, &v86) - (unsigned short)v67) ) /*0x44cdce*/
//DUPDEF           {
//DUPDEF             FacingClass::Update((char *)&this->primaryFacing, &v67); /*0x44cddb*/
//DUPDEF             return 1; /*0x44cde0*/
//DUPDEF           }
//DUPDEF           else
//DUPDEF           {
//DUPDEF             if ( abs16(*(unsigned short *)ProgressTimer::GetValue((unsigned short *)&this->NoCrew, &v83) - (unsigned short)v72) ) /*0x44ce10*/
//DUPDEF               FacingClass::Update((char *)&this->barrelFacing, &v72); /*0x44ce1d*/
//DUPDEF             else
//DUPDEF               this->missionStatus = 1; /*0x44ce2f*/
//DUPDEF             return 1; /*0x44ce22*/
//DUPDEF           }
//DUPDEF         case 1: /*0x44cd3b*/
//DUPDEF           v67 = (void **)RA2_OPNEW(0x1C8u); /*0x44ce53*/
//DUPDEF           if ( v67 ) /*0x44ce59*/
//DUPDEF           {
//DUPDEF             v72 = (void **)((char *)g_AnimTypeCount + 4 * GlobalArray::FindString(aPulsball)); /*0x44ce81*/
//DUPDEF             v27 = (int *)(*(int (**)(void *, unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int))(((unsigned int)(this->q0446))))( /*0x44ce9c*/
//DUPDEF                            this,
//DUPDEF                            v90,
//DUPDEF                            0,
//DUPDEF                            0,
//DUPDEF                            0,
//DUPDEF                            0);
//DUPDEF             AnimClass::ctor(v67, *v72, v27, 0, 1, (void *)0x600, 0, 0); /*0x44ceae*/
//DUPDEF           }
//DUPDEF           this->missionStatus = 2; /*0x44ceb3*/
//DUPDEF           return 32; /*0x44cec9*/
//DUPDEF         case 2: /*0x44cd3b*/
//DUPDEF           v28 = *(unsigned int *)(*(int (**)(void *, unsigned int))(*(unsigned int *)&this->q1946))(this, 0); /*0x44cefe*/
//DUPDEF           v29 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)(this->owner + 22400)); /*0x44cf22*/
//DUPDEF           IDA_LODWORD(v71) = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)(this->owner + 22400)); /*0x44cf2a*/
//DUPDEF           if ( g_ArmageddonMode || *(unsigned int *)(this->owner + 22400) == g_TerrainTypeTable ) /*0x44cf50*/
//DUPDEF           {
//DUPDEF             BuildingClass::StartProduction((int *)this, 1); /*0x44d564*/
//DUPDEF             (*(void (**)(void *, int, unsigned int))(*(unsigned int *)&this->missionStartTime8))(this, 5, 0); /*0x44d571*/
//DUPDEF             result = 60; /*0x44d577*/
//DUPDEF           }
//DUPDEF           else
//DUPDEF           {
//DUPDEF             v30 = (unsigned short *)(*(int (**)(void *, double *, void *))(((unsigned int)(this->q11C2))))(this, &v78, v29); /*0x44cf6d*/
//DUPDEF             FacingClass::Update((char *)&this->barrelFacing, v30); /*0x44cf7a*/
//DUPDEF             v31 = (*(int (**)(void *, unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int))(((unsigned int)(this->q0446))))( /*0x44cf9d*/
//DUPDEF                     this,
//DUPDEF                     v88,
//DUPDEF                     0,
//DUPDEF                     0,
//DUPDEF                     0,
//DUPDEF                     0);
//DUPDEF             v73 = *(double *)v31; /*0x44cfa5*/
//DUPDEF             v74 = *(unsigned int *)(v31 + 8); /*0x44cfb3*/
//DUPDEF             v32 = (*(int16_t *)(this->owner + 22400) << 8) + 128; /*0x44cfdc*/
//DUPDEF             v82[1] = (*(int16_t *)(this->owner + 22402) << 8) + 128; /*0x44cfe2*/
//DUPDEF             v82[0] = v32; /*0x44cfef*/
//DUPDEF             v82[2] = 0; /*0x44cff6*/
//DUPDEF             Cell::GetGroundHeight(v82); /*0x44d001*/
//DUPDEF             v33 = (int16_t *)(this->owner + 22400); /*0x44d00f*/
//DUPDEF             IDA_LODWORD(v77) = (*v33 << 8) + 128; /*0x44d023*/
//DUPDEF             IDA_HIDWORD(v77) = (v33[1] << 8) + 128; /*0x44d03c*/
//DUPDEF             v34 = Math::CalcAngle( /*0x44d04f*/
//DUPDEF                     (double)IDA_SHIDWORD(v73) - (double)IDA_SHIDWORD(v77),
//DUPDEF                     (double)IDA_SLODWORD(v77) - (double)IDA_SLODWORD(v73));
//DUPDEF             IDA_LOWORD(v77) = Math::RoundToInt((v34 - 1.570796326794897) * -10430.06004058427); /*0x44d065*/
//DUPDEF             v65 = (double)g_RulesClass_Instance[1].WeatherConBoltExplosion; /*0x44d07a*/
//DUPDEF             v35 = (void *)ObjectClass::DistanceTo(this, (int)v29); /*0x44d07e*/
//DUPDEF             v36 = TechnoClass::ComputeScanRange(v35, v65); /*0x44d085*/
//DUPDEF             v37 = *(unsigned char *)(v28 + 303); /*0x44d08a*/
//DUPDEF             v36 = v36; /*0x44d090*/
//DUPDEF             v36 = v36; /*0x44d092*/
//DUPDEF             v72 = (void **)CreateUIObjectCOM( /*0x44d0ca*/
//DUPDEF                              *(unsigned int *)(v28 + 160),
//DUPDEF                              (int)v29,
//DUPDEF                              (int)this,
//DUPDEF                              *(unsigned int *)(v28 + 164),
//DUPDEF                              *(unsigned int *)(v28 + 172),
//DUPDEF                              3 * v36 / 4,
//DUPDEF                              v37);
//DUPDEF             v70 = 0.0; /*0x44d0de*/
//DUPDEF             v73 = Math::Sqrt(10000.0); /*0x44d108*/
//DUPDEF             v77 = (double)(SLOWORD(v77) - 0x3FFF) * -0.00009587672516830327; /*0x44d120*/
//DUPDEF             v68 = Math::ArcTan2(v77) * v73; /*0x44d13d*/
//DUPDEF             v39 = -(Math::SinCos(v77) * v73); /*0x44d14d*/
//DUPDEF             v69 = v39; /*0x44d14f*/
//DUPDEF             if ( v68 == 0.0 && v39 == 0.0 && v70 == 0.0 ) /*0x44d180*/
//DUPDEF               v68 = 100.0; /*0x44d182*/
//DUPDEF             v73 = (double)v36; /*0x44d1a0*/
//DUPDEF             v40 = Math::Sqrt(v68 * v68 + v70 * v70 + v39 * v39); /*0x44d1bf*/
//DUPDEF             v41 = v73 / v40; /*0x44d1c4*/
//DUPDEF             v42 = *(int (***)(unsigned int, unsigned int, unsigned int))this; /*0x44d1c8*/
//DUPDEF             v68 = v41 * v68; /*0x44d1df*/
//DUPDEF             v69 = v69 * v41; /*0x44d1e9*/
//DUPDEF             v70 = v70 * v41; /*0x44d1f3*/
//DUPDEF             v43 = (int *)((int (**)(void *, unsigned char *, unsigned int))v42)[192](this, v87, 0); /*0x44d1f9*/
//DUPDEF             v75[0] = *v43; /*0x44d201*/
//DUPDEF             v75[1] = v43[1]; /*0x44d20c*/
//DUPDEF             v76 = v43[2]; /*0x44d213*/
//DUPDEF             v44 = (unsigned int *)(*(int (**)(unsigned int, unsigned char *))(*(unsigned int *)IDA_LODWORD(v71) + 72))(IDA_LODWORD(v71), v89); /*0x44d221*/
//DUPDEF             v45 = v44[2] - v76; /*0x44d23c*/
//DUPDEF             IDA_LODWORD(v71) = (*v44 - v75[0]) * (*v44 - v75[0]) + (v44[1] - v75[1]) * (v44[1] - v75[1]); /*0x44d250*/
//DUPDEF             v71 = (double)IDA_SLODWORD(v71); /*0x44d260*/
//DUPDEF             v62 = (double)g_RulesClass_Instance[1].WeatherConBoltExplosion; /*0x44d272*/
//DUPDEF             v46 = Math::Sqrt(v71); /*0x44d278*/
//DUPDEF             v60 = Math::RoundToInt(v46); /*0x44d285*/
//DUPDEF             IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x44d28a*/
//DUPDEF             if ( !ComputeMathFacingAngle(IsCloseEnoughToBuilding, v36, v60, v45, v62, &v67) ) /*0x44d293*/
//DUPDEF             {
//DUPDEF               v63 = (double)g_RulesClass_Instance[1].WeatherConBoltExplosion; /*0x44d2bc*/
//DUPDEF               v48 = Math::Sqrt(v71); /*0x44d2c2*/
//DUPDEF               v61 = Math::RoundToInt(v48); /*0x44d2cf*/
//DUPDEF               v49 = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x44d2e4*/
//DUPDEF               if ( !ComputeMathFacingAngle(v49, 10 * v36 / 8, v61, v45, v63, &v67) ) /*0x44d2ed*/
//DUPDEF               {
//DUPDEF                 IDA_LOWORD(v71) = -1536; /*0x44d2fa*/
//DUPDEF                 v67 = (void **)IDA_LODWORD(v71); /*0x44d305*/
//DUPDEF               }
//DUPDEF             }
//DUPDEF             v73 = Math::Sqrt(v69 * v69 + v68 * v68); /*0x44d32f*/
//DUPDEF             v50 = Math::CalcAngle(v70, v73); /*0x44d343*/
//DUPDEF             IDA_LODWORD(v71) = (int16_t)Math::RoundToInt((v50 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x44d365*/
//DUPDEF             v71 = (double)IDA_SLODWORD(v71) * -0.00009587672516830327; /*0x44d373*/
//DUPDEF             v73 = Math::Sqrt(v69 * v69 + v70 * v70 + v68 * v68); /*0x44d39b*/
//DUPDEF             if ( v71 != 0.0 ) /*0x44d3b1*/
//DUPDEF             {
//DUPDEF               v51 = IDA_HIDWORD(v71); /*0x44d3b3*/
//DUPDEF               v52 = IDA_LODWORD(v71); /*0x44d3b7*/
//DUPDEF               v68 = v68 / Math::ArcTan2(v71); /*0x44d3c8*/
//DUPDEF               v69 = v69 / Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v51, v52))); /*0x44d3d8*/
//DUPDEF             }
//DUPDEF             IDA_LODWORD(v71) = (int16_t)v67 - 0x3FFF; /*0x44d3ea*/
//DUPDEF             v53 = Math::ArcTan2((double)IDA_SLODWORD(v71) * -0.00009587672516830327); /*0x44d3fb*/
//DUPDEF             v68 = v53 * v68; /*0x44d409*/
//DUPDEF             IDA_LODWORD(v71) = (int16_t)v67 - 0x3FFF; /*0x44d412*/
//DUPDEF             v54 = Math::ArcTan2((double)IDA_SLODWORD(v71) * -0.00009587672516830327); /*0x44d423*/
//DUPDEF             v69 = v54 * v69; /*0x44d431*/
//DUPDEF             IDA_LODWORD(v71) = (int16_t)v67 - 0x3FFF; /*0x44d43b*/
//DUPDEF             v55 = Math::SinCos((double)IDA_SLODWORD(v71) * -0.00009587672516830327); /*0x44d44c*/
//DUPDEF             v72 = v72; /*0x44d459*/
//DUPDEF             v70 = v55 * v73; /*0x44d462*/
//DUPDEF             if ( !(*((uint8_t (**)(void **, int *, double *))*v72 + 124))(v72, v75, &v68) ) /*0x44d482*/
//DUPDEF             {
//DUPDEF               (*((void (**)(void **))*v72 + 2))(v72); /*0x44d539*/
//DUPDEF               goto LABEL_54; /*0x44d539*/
//DUPDEF             }
//DUPDEF             if ( (*(uint8_t (**)(void *))(((unsigned int)(this->q1980))))(this) /*0x44d4a0*/
//DUPDEF               && *(unsigned char *)((*(int (**)(void *))(((unsigned int)(this->attachedTag2))))(this) + 3234) )
//DUPDEF             {
//DUPDEF               TechnoClass::Fire((int *)&this->q0606); /*0x44d4b0*/
//DUPDEF               TechnoClass::Fire((int *)&this->customSound4); /*0x44d4bb*/
//DUPDEF             }
//DUPDEF             if ( !*(unsigned char *)((*(int (**)(void *))(((unsigned int)(this->attachedTag2))))(this) + 3285) ) /*0x44d4ca*/
//DUPDEF             {
//DUPDEF               v57 = *(unsigned int *)(*(unsigned int *)(v28 + 192) /*0x44d4fb*/
//DUPDEF                               + 4 * ((unsigned int)Random::State(Randomizer_Global) % *(unsigned int *)(v28 + 204)));
//DUPDEF               v58 = (*(int (**)(void *, double *, unsigned int, unsigned int, unsigned int, unsigned int))(((unsigned int)(this->q0446))))( /*0x44d510*/
//DUPDEF                       this,
//DUPDEF                       v80,
//DUPDEF                       0,
//DUPDEF                       0,
//DUPDEF                       0,
//DUPDEF                       0);
//DUPDEF               StartAudioControllerAt(v57, v58, 0); /*0x44d51a*/
//DUPDEF             }
//DUPDEF             this->missionStatus = 3; /*0x44d51f*/
//DUPDEF             result = 1; /*0x44d529*/
//DUPDEF           }
//DUPDEF           break; /*0x44d535*/
//DUPDEF         case 3: /*0x44cd3b*/
//DUPDEF           v81 = 0x4000; /*0x44ced1*/
//DUPDEF           FacingClass::Update((char *)&this->barrelFacing, &v81); /*0x44cee2*/
//DUPDEF           goto LABEL_54; /*0x44cee7*/
//DUPDEF         default:
//DUPDEF           goto LABEL_56;
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF   LABEL_56:
//DUPDEF       MissionControl = this->GetMissionControl(); /*0x44d584*/
//DUPDEF // 0x7c5f00
//DUPDEF       return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x44d594*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x44cc5a*/
//DUPDEF // IDA 0x505310: find building by SuperWeapon type
//DUPDEF // 0x505310
//DUPDEF BuildingClass* BuildingClass::FindBySWType(int sw_type)
//DUPDEF {
//DUPDEF   char v2; // cl
//DUPDEF   int v3; // eax
//DUPDEF   int v4; // edx
//DUPDEF   int v5; // ecx
//DUPDEF   int i; // esi
//DUPDEF 
//DUPDEF   v2 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&((unsigned int *)this)[2].firstTrigger); /*0x50532a*/
//DUPDEF   v3 = 0; /*0x50532c*/
//DUPDEF   v4 = 1 << v2; /*0x50532e*/
//DUPDEF   v5 = *(unsigned int *)(sw_type + 16); /*0x505330*/
//DUPDEF   if ( v5 <= 0 ) /*0x505335*/
//DUPDEF     return 0; /*0x50534e*/
//DUPDEF   for ( i = *(unsigned int *)(sw_type + 4); (v4 & *(unsigned int *)(*(unsigned int *)i + 1740)) == 0; i += 4 ) /*0x50533a*/
//DUPDEF   {
//DUPDEF     if ( ++v3 >= v5 ) /*0x50534c*/
//DUPDEF       return 0; /*0x50534c*/
//DUPDEF   }
//DUPDEF   return *(unsigned int *)(*(unsigned int *)(sw_type + 4) + 4 * v3); /*0x50534e*/
//DUPDEF }
//DUPDEF // GOLDEN: 0x451690
//DUPDEF // BuildingClass::ClearSuperWeaponAnim — pop the most-recently-added upgrade
//DUPDEF // (which may grant a super weapon), clear its anim slot, and (if it granted a
//DUPDEF // super weapon) refresh the owning house's super-weapon collection.
//DUPDEF // Faithful 1:1 with IDA: count read, if/else on the upgrade's flags, dense
//DUPDEF // ordered member WRITES, two direct calls, multiple returns, no loop.
//DUPDEF char BuildingClass::ClearSuperWeaponAnim()
//DUPDEF {
//DUPDEF // 0x505310
//DUPDEF {
//DUPDEF   int uniqueId; // ecx
//DUPDEF   int i; // esi
//DUPDEF 
//DUPDEF   char v2 = SuperWeaponTypeClass::FindByName((void *)(this->attachedTag + 152)); /*0x50532a*/
//DUPDEF   {
//DUPDEF     char v2; // cl
//DUPDEF     int v3; // eax
//DUPDEF     int v4; // edx
//DUPDEF     int v5; // ecx
//DUPDEF     int i; // esi
//DUPDEF 
//DUPDEF     v2 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&((unsigned int *)this)[2].firstTrigger); /*0x50532a*/
//DUPDEF     v3 = 0; /*0x50532c*/
//DUPDEF     v4 = 1 << v2; /*0x50532e*/
//DUPDEF     v5 = *(unsigned int *)(a2 + 16); /*0x505330*/
//DUPDEF     if ( v5 <= 0 ) /*0x505335*/
//DUPDEF       return 0; /*0x50534e*/
//DUPDEF     for ( i = *(unsigned int *)(a2 + 4); (v4 & *(unsigned int *)(*(unsigned int *)i + 1740)) == 0; i += 4 ) /*0x50533a*/
//DUPDEF     {
//DUPDEF       if ( ++v3 >= v5 ) /*0x50534c*/
//DUPDEF         return 0; /*0x50534c*/
//DUPDEF     }
//DUPDEF     return *(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v3); /*0x50534e*/
//DUPDEF   }
//DUPDEF   return *(unsigned int *)(*(unsigned int *)&((unsigned char *)(aP1) + 0x0)[4] + 4 * v3); /*0x50534e*/
//DUPDEF }
//DUPDEF     return {}; // TODO stub - retranslate via C-line pipeline
//DUPDEF     }
//DUPDEF 
//DUPDEF // 0x4503f0
//DUPDEF void BuildingClass::UpdatePrism() {}
//DUPDEF   int64_t v2; // rax
//DUPDEF   int v3; // ecx
//DUPDEF   int v4; // eax
//DUPDEF   int v5; // ecx
//DUPDEF 
//DUPDEF   IDA_LODWORD(v2) = this->PrismStage[0]; /*0x4503f3*/
//DUPDEF   if ( (unsigned int)v2 ) /*0x4503fb*/
//DUPDEF   {
//DUPDEF     v3 = this->DelayBeforeFiring - 1; /*0x450408*/
//DUPDEF     this->DelayBeforeFiring = v3; /*0x45040a*/
//DUPDEF     if ( v3 <= 0 ) /*0x450412*/
//DUPDEF     {
//DUPDEF       v4 = v2 - 1; /*0x450418*/
//DUPDEF       this->DelayBeforeFiring = 0; /*0x450419*/
//DUPDEF       if ( v4 ) /*0x450423*/
//DUPDEF       {
//DUPDEF         IDA_LODWORD(v2) = v4 - 1; /*0x450425*/
//DUPDEF         if ( !(unsigned int)v2 ) /*0x450426*/
//DUPDEF         {
//DUPDEF           IDA_LODWORD(v2) = BuildingClass::FireLaser( /*0x45044d*/
//DUPDEF                           this,
//DUPDEF                           this->PrismTargetCoords[0],
//DUPDEF                           this->PrismTargetCoords[1],
//DUPDEF                           this->PrismTargetCoords[2]);
//DUPDEF           this->PrismStage[0] = 0; /*0x450452*/
//DUPDEF           return v2; /*0x45045d*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         IDA_LODWORD(v2) = ((unsigned int *)this)[0]; /*0x45045e*/
//DUPDEF         if ( (unsigned int)v2 ) /*0x450466*/
//DUPDEF         {
//DUPDEF           IDA_LODWORD(v2) = (*((int (**)(BuildingClass *, unsigned int, int, int))this->vtable1 + 240))( /*0x450476*/
//DUPDEF                           this,
//DUPDEF                           v2,
//DUPDEF                           this->PrismTargetCoords[0],
//DUPDEF                           1);
//DUPDEF           if ( !(unsigned int)v2 ) /*0x45047e*/
//DUPDEF           {
//DUPDEF             IDA_LODWORD(v2) = (*((int (**)(BuildingClass *, AbstractClass *, int))this->vtable1 + 243))( /*0x450492*/
//DUPDEF                             this,
//DUPDEF                             ((unsigned int *)this)[0],
//DUPDEF                             this->PrismTargetCoords[0]);
//DUPDEF             v5 = v2; /*0x450498*/
//DUPDEF             if ( (unsigned int)v2 ) /*0x45049c*/
//DUPDEF             {
//DUPDEF               IDA_LODWORD(v2) = this->SupportingPrisms; /*0x45049e*/
//DUPDEF               if ( (unsigned int)v2 ) /*0x4504a6*/
//DUPDEF               {
//DUPDEF                 v2 = 1374389535LL /*0x4504c2*/
//DUPDEF                    * (unsigned int)(((unsigned int)v2 * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1180) + 100) << 8);
//DUPDEF                 v5->q054 = IDA_HIDWORD(v2) >> 5; /*0x4504c7*/
//DUPDEF                 this->SupportingPrisms = 0; /*0x4504cd*/
//DUPDEF               }
//DUPDEF             }
//DUPDEF           }
//DUPDEF         }
//DUPDEF       }
//DUPDEF       this->PrismStage[0] = 0; /*0x4504d7*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return v2; /*0x45045c*/
//DUPDEF }
//DUPDEF   return v2; /*0x45045c*/
//DUPDEF }
//DUPDEF   return v2; /*0x45045c*/
//DUPDEF }
//DUPDEF   return v2; /*0x45045c*/
//DUPDEF }
//DUPDEF   return v2; /*0x45045c*/
//DUPDEF }
//DUPDEF       int v14 = this->gattlingValue;
//DUPDEF       if ( !*(unsigned char *)(v14 + 5825) && !*(unsigned char *)(v14 + 5826) )
//DUPDEF       {
//DUPDEF         if ( !Array::Contains((int *)this, v53) && Array::ContainsValue((int *)this, v53) )
//DUPDEF         {
//DUPDEF           (*(void (**)(void *, int, int))(this->temporalTargetingMe)(this, 2, v53);
//DUPDEF           Array::Contains((int *)this, v53);
//DUPDEF }
//DUPDEF         char v54 = 0;
//DUPDEF         if ( Array::Contains((int *)this, (int)v13) )
//DUPDEF         {
//DUPDEF           int v15 = this->gattlingValue;
//DUPDEF           if ( *(unsigned char *)(v15 + 5811) || *(unsigned char *)(v15 + 5820) )
//DUPDEF           {
//DUPDEF             unsigned int v16 = v13 ? ((v13[20] & 4) != 0 ? (unsigned int)v13 : 0) : 0;
//DUPDEF   unsigned int *v17; // eax
//DUPDEF             v17 = (unsigned int *)(*(int (**)(void *, char *, unsigned int))(this->lineTrailer)(
//DUPDEF                               this,
//DUPDEF   char v50[12]; // [esp+4Ch] [ebp-24h] BYREF
//DUPDEF                               v50,
//DUPDEF                               v16);
//DUPDEF             void * v18 = RawCoord::To_Cell(DataGlobal_87F7E8, v17);
//DUPDEF             void * v19 = *(void **)(v16 + 1444);
//DUPDEF             if ( v19 )
//DUPDEF             {
//DUPDEF               if ( v18 != v19 )
//DUPDEF                 v54 = 1;
//DUPDEF }
//DUPDEF           }
//DUPDEF         }
//DUPDEF         if ( Team::GetMember(this, 0) )
//DUPDEF         {
//DUPDEF           int v20 = this->gattlingValue;
//DUPDEF           if ( *(unsigned char *)(v20 + 5801) || *(unsigned char *)(v20 + 5803) )
//DUPDEF           {
//DUPDEF             Member = Team::GetMember(this, 0);
//DUPDEF             unsigned int * v22 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)Member + 72))(Member, v51);
//DUPDEF             unsigned int * v23 = (unsigned int *)(*(int (**)(void *, unsigned char *))(((unsigned char *)(this) + 0x048))(this, v52);
//DUPDEF             int v24 = *v23 - *v22;
//DUPDEF             int v25 = v23[1];
//DUPDEF             int v26 = v23[2];
//DUPDEF             v24 = v24;
//DUPDEF             int v27 = v22[2];
//DUPDEF             v47 = v25 - v22[1];
//DUPDEF             v48 = v26 - v27;
//DUPDEF             double v28 = Math::Sqrt((double)v24 * (double)v24 + (double)(v26 - v27) * (double)(v26 - v27) + (double)v47 * (double)v47);
//DUPDEF             if ( (int)Math::RoundToInt(v28) > 128 )
//DUPDEF               v54 = 1;
//DUPDEF           }
//DUPDEF         }
//DUPDEF         if ( (*(int (**)(void *, int, unsigned char *))(this->temporalTargetingMe)(this, 19, v13) == 1 || v54 )
//DUPDEF         {
//DUPDEF           *v12 = this;
//DUPDEF           unsigned char * v29 = (unsigned char *)this->gattlingValue;
//DUPDEF           if ( v29[5811] || v29[5820] )
//DUPDEF           {
//DUPDEF   int v45; // [esp+30h] [ebp-40h] BYREF
//DUPDEF             unsigned short * v30 = (unsigned short *)(*(int (**)(void *, int *))(this->airstrikeTintTimer)(this, &v45);
//DUPDEF             IDA_LOWORD(v55) = *v30 + 3;
//DUPDEF             IDA_HIWORD(v55) = v30[1] + 1;
//DUPDEF             v55 = v55;
//DUPDEF             *v12 = CellCoord::To_CellObj(DataGlobal_87F7E8, (int16_t *)&v55);
//DUPDEF             if ( (*(int (**)(void *, int, unsigned int *, unsigned char *))(this->isImmobilized)(this, 18, v12, v13) == 20 )
//DUPDEF             {
//DUPDEF               (*(void (**)(void *, int, unsigned char *))(this->temporalTargetingMe)(this, 24, v13);
//DUPDEF               if ( (*(int (**)(void *, int, unsigned char *))(this->temporalTargetingMe)(this, 22, v13) != 1 )
//DUPDEF               {
//DUPDEF                 (*(void (**)(unsigned char *, unsigned int *, int, int))(*(unsigned int *)v13 + 372))(
//DUPDEF                   v13,
//DUPDEF                   &DataGlobal_87F7E8[29720],
//DUPDEF                   1,
//DUPDEF                   1);
//DUPDEF                 return 1;
//DUPDEF               }
//DUPDEF             }
//DUPDEF           }
//DUPDEF           else if ( v29[5835] )
//DUPDEF           {
//DUPDEF             *v12 = this;
//DUPDEF             if ( (*(int (**)(void *, int, unsigned int *, unsigned char *))(this->isImmobilized)(this, 18, v12, v13) == 20 )
//DUPDEF             {
//DUPDEF               (*(void (**)(void *, int))(this->temporalUsing)(this, 24);
//DUPDEF               return 1;
//DUPDEF             }
//DUPDEF           }
//DUPDEF         }
//DUPDEF         return 1;
//DUPDEF       }
//DUPDEF       if ( Array::ContainsValue((int *)this, v53) )
//DUPDEF       {
//DUPDEF   unsigned int v49[3]; // [esp+40h] [ebp-30h] BYREF
//DUPDEF         v49[0] = ((unsigned char *)(this) + 0x027);
//DUPDEF         v49[1] = this->owningHouseIndex;
//DUPDEF         v49[2] = ((unsigned char *)(this) + 0x029);
//DUPDEF         *v12 = RawCoord::To_Cell(DataGlobal_87F7E8, v49);
//DUPDEF         (*(void (**)(void *, int, unsigned int *, int))(this->isImmobilized)(this, 18, v12, v53);
//DUPDEF         return 1;
//DUPDEF       }
//DUPDEF       for ( i = 0; i < this->q03A; ++i )
//DUPDEF       {
//DUPDEF         int v32 = Team::GetMember(this, i);
//DUPDEF         if ( (*(int (**)(void *, int, int))(this->temporalTargetingMe)(this, 34, v32) == 10 )
//DUPDEF           (*(void (**)(void *, int, int))(this->temporalTargetingMe)(this, 23, v32);
//DUPDEF       }
//DUPDEF       if ( !Array::ContainsValue((int *)this, v53) )
//DUPDEF         return 10;
//DUPDEF       return 1;
//DUPDEF     case 15:
//DUPDEF       TechnoClass::Mission_RepairDispatch((int *)this, v55, v53, v55, v57);
//DUPDEF       if ( !Object::IsAlliedWithObjectHouse(this->owner, v53) )
//DUPDEF         return 0;
//DUPDEF       if ( (*(int (**)(void *))(this->q184)(this) == 18 )
//DUPDEF         return 10;
//DUPDEF       if ( (*(int (**)(void *))(this->q184)(this) == 19 )
//DUPDEF         return 10;
//DUPDEF       if ( !this->BuildingClass_field_int_534 )
//DUPDEF         return 10;
//DUPDEF       if ( !DataGlobal_87F7E8[539633] && !Array::ContainsValue((int *)this, v53) )
//DUPDEF       {
//DUPDEF         int v4 = this->gattlingValue;
//DUPDEF         if ( !*(unsigned char *)(v4 + 5806) && !*(unsigned char *)(v4 + 5807) )
//DUPDEF           return 10;
//DUPDEF       }
//DUPDEF       if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v53 + 132))(v53) + 1460) != 5
//DUPDEF         && (*(unsigned char *)((*(int (**)(void *))(this->hasParachute)(this) + 3278)
//DUPDEF          && !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v53 + 132))(v53) + 3278)
//DUPDEF          || !*(unsigned char *)((*(int (**)(void *))(this->hasParachute)(this) + 3278)
//DUPDEF          && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v53 + 132))(v53) + 3278)) )
//DUPDEF       {
//DUPDEF         return 10;
//DUPDEF       }
//DUPDEF       if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v53 + 132))(v53) + 3434) )
//DUPDEF         return 10;
//DUPDEF       if ( !this->HasPower )
//DUPDEF         return 10;
//DUPDEF       int v5 = this->gattlingValue;
//DUPDEF       if ( !*(unsigned char *)(v5 + 5806) && !*(unsigned char *)(v5 + 5807) )
//DUPDEF         goto LABEL_33;
//DUPDEF       if ( (*(int (**)(int))(*(unsigned int *)v53 + 44))(v53) == 1 && !*(unsigned char *)(this->gattlingValue + 5806)
//DUPDEF         || (*(int (**)(int))(*(unsigned int *)v53 + 44))(v53) == 15 && !*(unsigned char *)(this->gattlingValue + 5807) )
//DUPDEF       {
//DUPDEF         return 10;
//DUPDEF       }
//DUPDEF       if ( *(unsigned int *)(v53 + 700) && (uint8_t)CellClass::HasContent() )
//DUPDEF         return 10;
//DUPDEF       v5 = this->gattlingValue;
//DUPDEF       if ( this->inAirFlag + 1 <= this->ProductionFrame
//DUPDEF         && *(double *)((*(int (**)(int))(*(unsigned int *)v53 + 132))(v53) + 896) <= this->q4D0 )
//DUPDEF       {
//DUPDEF         return 1;
//DUPDEF       }
//DUPDEF LABEL_33:
//DUPDEF       if ( this->u32_17F5 )
//DUPDEF         return 1;
//DUPDEF       if ( this->u32_17F3 )
//DUPDEF       {
//DUPDEF         if ( TechnoClass::CanSelfRepair((unsigned char *)v53)
//DUPDEF           && (*(int (**)(void *, int, int))(this->temporalTargetingMe)(this, 35, v53) != 1 )
//DUPDEF         {
//DUPDEF           return 1;
//DUPDEF         }
//DUPDEF         return 10;
//DUPDEF       }
//DUPDEF       if ( this->u32_17F1 )
//DUPDEF       {
//DUPDEF         if ( ((*(int (**)(int))(*(unsigned int *)v53 + 44))(v53) == 1
//DUPDEF            || (*(int (**)(int))(*(unsigned int *)v53 + 44))(v53) == 2)
//DUPDEF           && (*(int (**)(void *, int, int))(this->temporalTargetingMe)(this, 35, v53) != 1 )
//DUPDEF         {
//DUPDEF           return 1;
//DUPDEF         }
//DUPDEF         return 10;
//DUPDEF       }
//DUPDEF       if ( !this->q6028 && !this->q6024
//DUPDEF         || (*(int (**)(int))(*(unsigned int *)v53 + 44))(v53) != 15 )
//DUPDEF       {
//DUPDEF         int v8 = this->gattlingValue;
//DUPDEF         if ( *(unsigned char *)(v8 + 5835) )
//DUPDEF           return (*(int (**)(int))(*(unsigned int *)(v53 + 4) + 12))(v53 + 4) != 2 ? 10 : 1;
//DUPDEF         if ( !*(unsigned char *)(v8 + 5811)
//DUPDEF           || (*(int (**)(int))(*(unsigned int *)v53 + 44))(v53) != 1
//DUPDEF           || !*(unsigned char *)(*(unsigned int *)(v53 + 1732) + 3598)
//DUPDEF           || !DataGlobal_87F7E8[539633] && this->q118 )
//DUPDEF         {
//DUPDEF           if ( !*(unsigned char *)(this->gattlingValue + 5820)
//DUPDEF             || (*(int (**)(int))(*(unsigned int *)v53 + 44))(v53) != 1
//DUPDEF             || !*(unsigned char *)(*(unsigned int *)(v53 + 1732) + 3599) )
//DUPDEF           {
//DUPDEF             return 0;
//DUPDEF           }
//DUPDEF           if ( !DataGlobal_87F7E8[539633] )
//DUPDEF             return !this->q118;
//DUPDEF         }
//DUPDEF         return 1;
//DUPDEF       }
//DUPDEF       if ( v53 )
//DUPDEF         int v6 = (*(int (**)(int))(*(unsigned int *)v53 + 44))(v53) == 15 ? v53 : 0;
//DUPDEF       else
//DUPDEF         v6 = 0;
//DUPDEF       if ( *(unsigned int *)(v6 + 700) && (uint8_t)CellClass::HasContent() )
//DUPDEF         return 10;
//DUPDEF       if ( (uint8_t)BuildingClass::IsBeingRepairedOrCaptured(v6) )
//DUPDEF         return 10;
//DUPDEF       int v7 = -(((unsigned char *)(this) + 0x0BF) != 0);
//DUPDEF       IDA_LOBYTE(v7) = v7 & 0xF7;
//DUPDEF       return v7 + 10;
//DUPDEF     case 16:
//DUPDEF       if ( this->q118
//DUPDEF         || !Array::ContainsValue((int *)this, v53)
//DUPDEF         || this->inLimbo
//DUPDEF         || this->owner != (*(int (**)(int))(*(unsigned int *)v53 + 60))(v53) )
//DUPDEF       {
//DUPDEF         return 10;
//DUPDEF       unsigned char * v33 = (unsigned char *)this->gattlingValue;
//DUPDEF       if ( v33[5819] || v33[5801] )
//DUPDEF         return 1;
//DUPDEF       if ( !v33[5820] )
//DUPDEF         return 10;
//DUPDEF       return 1;
//DUPDEF     case 21:
//DUPDEF       if ( (*(int (**)(void *))(this->q184)(this) == 19 )
//DUPDEF         return 10;
//DUPDEF       unsigned char * v9 = (unsigned char *)this->gattlingValue;
//DUPDEF       if ( v9[5806] || v9[5807] )
//DUPDEF         return 1;
//DUPDEF       if ( v9[5801] || v9[5802] || v9[5825] || v9[5826] )
//DUPDEF       {
//DUPDEF         int v11 = *(unsigned int *)this;
//DUPDEF         this->BuildingClass_field_bool_6DD = 1;
//DUPDEF         (*(void (**)(void *, int, unsigned int))(v11 + 488))(this, 20, 0);
//DUPDEF         (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)v53 + 488))(v53, 0, 0);
//DUPDEF         return 1;
//DUPDEF       else if ( v9[5803] )
//DUPDEF       {
//DUPDEF         int v10 = *(unsigned int *)this;
//DUPDEF         this->BuildingClass_field_bool_6DD = 1;
//DUPDEF         (*(void (**)(void *, int, unsigned int))(v10 + 488))(this, 20, 0);
//DUPDEF         return 1;
//DUPDEF       else if ( v9[5811] )
//DUPDEF       {
//DUPDEF         (*(void (**)(int, int, unsigned int))(*(unsigned int *)v53 + 488))(v53, 16, 0);
//DUPDEF         return 1;
//DUPDEF       else
//DUPDEF       {
//DUPDEF         return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
//DUPDEF     default:
//DUPDEF       return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);

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
mov     cl, ds:byte_43CE88[eax]
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
    // IDA 0x458DD0, BuildingClass vtable slot 256 (IDA name BuildingClass::_vt256).
    // Type@+0x520 (ASM: mov eax,[ecx+520h]); CanBeOccupied@Type+0x157B,
    // CanOccupyFire@Type+0x157C (INI-verified YRpp flags); vtable[+1032] =
    // slot 258 = MissionStubReturnZero6 - returns 0 for buildings, so the
    // third clause is inert in the original binary (kept for fidelity).
    return this->Type->CanBeOccupied
        && this->Type->CanOccupyFire
        && this->MissionStubReturnZero6() > 0;

/* ASM:
mov     eax, [ecx+520h]
mov     dl, [eax+157Bh]
test    dl, dl
jz      short loc_458DFC
mov     dl, [eax+157Ch]
test    dl, dl
jz      short loc_458DFC
mov     eax, [ecx]
call    dword ptr [eax+408h]
test    eax, eax
jle     short loc_458DFC
mov     eax, 1
retn
; ---------------------------------------------------------------------------

loc_458DFC:                             ; CODE XREF: BuildingClass__CheckMissionGuard+E↑j
; BuildingClass__CheckMissionGuard+18↑j ...
xor     eax, eax
retn
*/
}
// 0x458e00
bool BuildingClass::CheckMissionAttack() { return missionStatus == 1; }
//DUPDEF   int FoundationHeight; // edi

//DUPDEF   FoundationHeight = ((BuildingTypeClass*)((int *)this->Type))->GetFoundationHeight(0); /*0x458e17*/
//DUPDEF   if ( ((BuildingTypeClass*)(this->Type))->GetFoundationWidth() >= FoundationHeight ) /*0x458e20*/
// 0x45eca0
//DUPDEF     return ((BuildingTypeClass*)((int *)this->Type))->GetFoundationHeight(0) / 2; /*0x458e46*/
//DUPDEF   else
// 0x45ec90
//DUPDEF     return ((BuildingTypeClass*)(this->Type))->GetFoundationWidth() / 2; /*0x458e31*/
//DUPDEF }
//DUPDEF     v2 = this->Type; /*0x452371*/
//DUPDEF     if ( *(int *)(v2 + 3812) > 0 || *(unsigned char *)(v2 + 5491) ) /*0x452381*/
//DUPDEF     {
//DUPDEF       v3 = this->owner; /*0x45238b*/
//DUPDEF       this->HasPower = 0; /*0x452393*/
//DUPDEF       this->needsRedraw = 1; /*0x45239a*/
//DUPDEF       *(unsigned char *)(v3 + 22392) = 1; /*0x4523a0*/
//DUPDEF       *(unsigned char *)(this->owner + 22393) = 1; /*0x4523ac*/
//DUPDEF       *(unsigned char *)(this->owner + 508) = 1; /*0x4523b8*/
//DUPDEF       BuildingClass::Deactivate(this); /*0x4523c0*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer(*(void **)(&this->u32_D80)) ) /*0x4523cb*/
//DUPDEF         VoxClass::FindAndPlay(aEvaBuildingoff, -1); /*0x4523de*/
//DUPDEF       v2 = this->q520; /*0x4523e3*/
//DUPDEF       v5 = *(unsigned int *)(v2 + 3768); /*0x4523e9*/
//DUPDEF       if ( v5 ) /*0x4523f1*/
//DUPDEF       {
//DUPDEF         IDA_LOBYTE(v4) = *(unsigned char *)(v2 + 3278); /*0x4523f3*/
//DUPDEF         IDA_LOBYTE(v2) = HouseClass::UpdateProduction(this->u32_21C, v5, v4, 0); /*0x452403*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return v2; /*0x452408*/
//DUPDEF }
//DUPDEF   return v2; /*0x452408*/
// 0x4496b0
void BuildingClass::CheckState1()
{
//DUPDEF   double v1; // st7
//DUPDEF   BuildingTypeClass *Type; // eax
//DUPDEF   int SuperWeapon; // eax
//DUPDEF   int v5; // eax
//DUPDEF   char *MissionControl; // eax
//DUPDEF   int v8; // eax
//DUPDEF   BuildingTypeClass *v9; // ecx
//DUPDEF   int missionStatus; // eax
//DUPDEF   int v11; // ebp
//DUPDEF   unsigned char *Member; // eax
//DUPDEF   unsigned char *v13; // edi
//DUPDEF   unsigned int *v14; // ebx
//DUPDEF   unsigned int *v15; // eax
//DUPDEF   int *v16; // eax
//DUPDEF   int v17; // eax
//DUPDEF   char *v18; // eax
//DUPDEF   int v19; // eax
//DUPDEF   char *v20; // eax
//DUPDEF   int v21; // eax
//DUPDEF   unsigned char v22[12]; // [esp+34h] [ebp-24h] BYREF
//DUPDEF   unsigned char v23[12]; // [esp+40h] [ebp-18h] BYREF
//DUPDEF   unsigned int v24[3]; // [esp+4Ch] [ebp-Ch] BYREF

//DUPDEF   if ( *(unsigned char *)((*((int (**)(BuildingClass *))this->vtable1 + 33))(this) + 3285) ) /*0x4496c7*/
//DUPDEF   {
//DUPDEF     TechnoClass::DrainAmmo((char *)this, ((unsigned int *)this)[0]); /*0x4496da*/
//DUPDEF     ((unsigned int *)this)[0] = 0; /*0x4496df*/
//DUPDEF   }
//DUPDEF   if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 171))(this) ) /*0x4496ed*/
//DUPDEF   {
//DUPDEF     Type = this->Type; /*0x4496fb*/
//DUPDEF     this->BuildingClass_field_bool_6DD = 1; /*0x449701*/
//DUPDEF     if ( Type->EMPulseCannon /*0x449780*/
//DUPDEF       || ((SuperWeapon = Type->SuperWeapon, SuperWeapon == -1)
//DUPDEF        || (v5 = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)dword_A83CBC + SuperWeapon) + 40) + 200)) == 0
//DUPDEF        || DynamicVector::GetOrGrow((DynamicVector *)((unsigned int *)this)[0]->ownedInfantryTypes2, *(unsigned int *)(v5 + 3576)))
//DUPDEF       && this->Type->SuperWeapon != -1
//DUPDEF       || this->Type->CanBeOccupied && (*((int (**)(BuildingClass *))this->vtable1 + 258))(this) <= 0
//DUPDEF       || !((unsigned int *)this)[0] )
//DUPDEF     {
//DUPDEF       MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4497b1*/
//DUPDEF       IDA_LOWORD(v8) = Math::RoundToInt(*((double *)MissionControl + 3) * 900.0); /*0x4497bf*/
//DUPDEF       return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4497da*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       (*((void (**)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 1, 0); /*0x449792*/
//DUPDEF       (*((void (**)(BuildingClass *))this->vtable1 + 123))(this); /*0x44979c*/
//DUPDEF       return 1; /*0x4497a2*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v9 = this->Type; /*0x4497e4*/
//DUPDEF   if ( v9->HasStupidGuardMode ) /*0x4497ea*/
//DUPDEF     return 100; /*0x449800*/
//DUPDEF   missionStatus = ((unsigned int *)this)[0]; /*0x449801*/
//DUPDEF   if ( !missionStatus ) /*0x44980a*/
//DUPDEF   {
//DUPDEF     BuildingClass::StartProduction(this, 1); /*0x449961*/
//DUPDEF     ((unsigned int *)this)[0] = 1; /*0x449966*/
//DUPDEF   LABEL_32:
//DUPDEF     if ( this->Type->UnitReload /*0x4499ab*/
//DUPDEF       && (uint8_t)Team::AllMembersValid((Team *)this)
//DUPDEF       && (*((int (**)(BuildingClass *, int))this->vtable1 + 157))(this, 29) != 1
//DUPDEF       && (*((int (**)(BuildingClass *, int))this->vtable1 + 157))(this, 19) == 1 )
//DUPDEF     {
//DUPDEF       (*((void (**)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 20, 0); /*0x4499b5*/
//DUPDEF     }
//DUPDEF     if ( this->Type->UnitRepair ) /*0x4499c1*/
//DUPDEF     {
//DUPDEF       v18 = MissionClass::GetMissionControl((MissionClass *)this); /*0x4499cd*/
//DUPDEF       IDA_LOWORD(v19) = Math::RoundToInt(*((double *)v18 + 2) * 900.0); /*0x4499db*/
//DUPDEF       return v19 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4499f7*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v20 = MissionClass::GetMissionControl((MissionClass *)this); /*0x449a01*/
//DUPDEF       IDA_LOWORD(v21) = Math::RoundToInt(*((double *)v20 + 2) * 900.0); /*0x449a0f*/
//DUPDEF       return 3 * v21 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x449a2e*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( missionStatus != 1 ) /*0x449811*/
//DUPDEF     goto LABEL_32; /*0x449811*/
//DUPDEF   if ( !v9->UnitRepair && !v9->UnitReload && !v9->Bunker || (v11 = 0, ((unsigned int *)this)[2] <= 0) ) /*0x449843*/
//DUPDEF   {
//DUPDEF   LABEL_28:
//DUPDEF     if ( this->Type->WeaponsFactory ) /*0x44992f*/
//DUPDEF       AnimClass::resetAnimation((AnimClass *)this); /*0x44993b*/
//DUPDEF     goto LABEL_32; /*0x449940*/
//DUPDEF   }
//DUPDEF   while ( 1 ) /*0x44984c*/
//DUPDEF   {
//DUPDEF     Member = (unsigned char *)Team::GetMember((Team *)this, v11); /*0x44984c*/
//DUPDEF     v13 = Member; /*0x449851*/
//DUPDEF     if ( Member ) /*0x449855*/
//DUPDEF     {
//DUPDEF       if ( (Member[20] & 1) != 0 && (*(int (**)(unsigned char *))(*(unsigned int *)Member + 388))(Member) == 7 ) /*0x449878*/
//DUPDEF       {
//DUPDEF         v14 = (unsigned int *)(*(int (**)(unsigned char *, unsigned char *))(v13->u32_48)(v13, v22); /*0x44988c*/
//DUPDEF         v15 = (unsigned int *)(*((int (**)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v23); /*0x449895*/
//DUPDEF         v16 = Coord::Subtract((Coord *)v24, *v15 - *v14, v15[1] - v14[1], v15[2] - v14[2]); /*0x4498b5*/
//DUPDEF         Math::Sqrt((double)*v16 * (double)*v16 + (double)v16[2] * (double)v16[2] + (double)v16[1] * (double)v16[1]); /*0x4498f6*/
//DUPDEF         IDA_LOWORD(v17) = Math::RoundToInt(v1); /*0x4498fe*/
//DUPDEF         if ( v17 < 64 /*0x449918*/
//DUPDEF           && (*((int (**)(BuildingClass *, int, unsigned char *))this->vtable1 + 158))(this, 19, v13) == 1 )
//DUPDEF         {
//DUPDEF           break; /*0x449918*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( ++v11 >= ((unsigned int *)this)[2] ) /*0x449923*/
//DUPDEF       goto LABEL_28; /*0x449923*/
//DUPDEF   }
//DUPDEF   (*((void (**)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 20, 0); /*0x44994a*/
//DUPDEF   return 1; /*0x4497a7*/
//DUPDEF }
// 0x65ae30
//DUPDEF       && Team::AllMembersValid((int *)this)
//DUPDEF       {
//DUPDEF         void *v1; // edx
//DUPDEF         int result; // eax
//DUPDEF         unsigned int *v3; // ecx

//DUPDEF         v1 = this->field_E8; /*0x65ae30*/
//DUPDEF         result = 0; /*0x65ae36*/
//DUPDEF         if ( (int)v1 <= 0 ) /*0x65ae3a*/
//DUPDEF         {
//DUPDEF         LABEL_5:
//DUPDEF           IDA_LOBYTE(result) = 0; /*0x65ae4f*/
//DUPDEF         }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           v3 = this->field_E4; /*0x65ae3c*/
//DUPDEF           while ( !*v3 ) /*0x65ae45*/
//DUPDEF           {
//DUPDEF             ++result; /*0x65ae47*/
//DUPDEF             ++v3; /*0x65ae48*/
//DUPDEF             if ( result >= (int)v1 ) /*0x65ae4d*/
//DUPDEF               goto LABEL_5; /*0x65ae4d*/
//DUPDEF           }
//DUPDEF           IDA_LOBYTE(result) = 1; /*0x65ae52*/
//DUPDEF         }
//DUPDEF         return result; /*0x65ae51*/
//DUPDEF       }
//DUPDEF     if ( *(unsigned char *)(this->gattlingValue + 5801) )
//DUPDEF     {
//DUPDEF       char * v17 = this->GetMissionControl();
//DUPDEF       int v18 = Math::RoundToInt(*((double *)v17 + 2) * 900.0);
//DUPDEF       return v18 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2);
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       char * v19 = this->GetMissionControl();
//DUPDEF       int v20 = Math::RoundToInt(*((double *)v19 + 2) * 900.0);
//DUPDEF       return 3 * v20 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2);
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( v9 != 1 )
//DUPDEF     goto LABEL_32;
//DUPDEF   int v10; // ebp
//DUPDEF   if ( !v8[5801] && !v8[5802] && !v8[5803] || (v10 = 0, this->q03A <= 0) )
//DUPDEF   {
//DUPDEF LABEL_28:
//DUPDEF     if ( *(unsigned char *)(this->gattlingValue + 5821) )
//DUPDEF       AnimClass::resetAnimation(this);
//DUPDEF     goto LABEL_32;
//DUPDEF   }
//DUPDEF   while ( 1 )
//DUPDEF   {
//DUPDEF     Member = (unsigned char *)Team::GetMember(this, v10);
//DUPDEF     unsigned char * v12 = Member;
//DUPDEF     if ( Member )
//DUPDEF     {
//DUPDEF       if ( (Member[20] & 1) != 0 && (*(int (**)(unsigned char *))(*(unsigned int *)Member + 388))(Member) == 7 )
//DUPDEF       {
//DUPDEF   unsigned char v21[12]; // [esp+34h] [ebp-24h] BYREF
//DUPDEF         unsigned int * v13 = (unsigned int *)(*(int (**)(unsigned char *, unsigned char *))(*(unsigned int *)v12 + 72))(v12, v21);
//DUPDEF   unsigned char v22[12]; // [esp+40h] [ebp-18h] BYREF
//DUPDEF         unsigned int * v14 = (unsigned int *)(*(int (**)(void *, unsigned char *))(((unsigned char *)(this) + 0x048))(this, v22);
//DUPDEF   unsigned int v23[3]; // [esp+4Ch] [ebp-Ch] BYREF
//DUPDEF         int * v15 = Coord::Subtract(v23, *v14 - *v13, v14[1] - v13[1], v14[2] - v13[2]);
//DUPDEF         double v16 = Math::Sqrt((double)*v15 * (double)*v15 + (double)v15[2] * (double)v15[2] + (double)v15[1] * (double)v15[1]);
//DUPDEF         if ( (int)Math::RoundToInt(v16) < 64
//DUPDEF           && (*(int (**)(void *, int, unsigned char *))(this->temporalTargetingMe)(this, 19, v12) == 1 )
//DUPDEF         {
//DUPDEF           break;
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( ++v10 >= this->q03A )
//DUPDEF       goto LABEL_28;
//DUPDEF   (*(void (**)(void *, int, unsigned int))(this->q1E8)(this, 20, 0);
//DUPDEF   return 1;

/* ASM:
push    ebp
mov     ebp, esp
and     esp, 0FFFFFFF8h
sub     esp, 38h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+84h]
mov     cl, [eax+0CD5h]
test    cl, cl
jz      short loc_4496E9
mov     ecx, [esi+0C4h]
push    ecx
mov     ecx, esi
call    TechnoClass__DrainAmmo
mov     dword ptr [esi+0C4h], 0

loc_4496E9:                             ; CODE XREF: BuildingClass__UpdateProduction+1F↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2ACh]
test    al, al
jz      loc_4497E4
mov     eax, [esi+520h]
mov     byte ptr [esi+6DDh], 1
mov     cl, [eax+16C3h]
test    cl, cl
jnz     loc_4497AF
mov     eax, [eax+16F0h]
cmp     eax, 0FFFFFFFFh
jz      short loc_449753
mov     ecx, ds:0A83CBCh
mov     edx, [ecx+eax*4]
mov     eax, [edx+28h]
mov     eax, [eax+0C8h]
test    eax, eax
jz      short loc_449753
mov     ecx, [eax+0DF8h]
push    ecx
mov     ecx, [esi+21Ch]
add     ecx, 5550h
call    DynamicVector__GetOrGrow
test    eax, eax
jz      short loc_449762

loc_449753:                             ; CODE XREF: BuildingClass__UpdateProduction+6F↑j
; BuildingClass__UpdateProduction+85↑j
mov     edx, [esi+520h]
cmp     dword ptr [edx+16F0h], 0FFFFFFFFh
jnz     short loc_4497AF

loc_449762:                             ; CODE XREF: BuildingClass__UpdateProduction+A1↑j
mov     eax, [esi+520h]
mov     cl, [eax+157Bh]
test    cl, cl
jz      short loc_449780
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+408h]
test    eax, eax
jle     short loc_4497AF

loc_449780:                             ; CODE XREF: BuildingClass__UpdateProduction+C0↑j
mov     eax, [esi+2B4h]
test    eax, eax
jz      short loc_4497AF
mov     eax, [esi]
push    0
push    1
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1ECh]
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4497AF:                             ; CODE XREF: BuildingClass__UpdateProduction+60↑j
; BuildingClass__UpdateProduction+B0↑j ...
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+18h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     esi, eax
mov     eax, ds:0A8B230h
push    2
push    0
lea     ecx, [eax+218h]
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4497E4:                             ; CODE XREF: BuildingClass__UpdateProduction+45↑j
mov     ecx, [esi+520h]
mov     al, [ecx+16B5h]
test    al, al
jz      short loc_449801
mov     eax, 64h ; 'd'
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_449801:                             ; CODE XREF: BuildingClass__UpdateProduction+142↑j
mov     eax, [esi+0BCh]
sub     eax, 0
jz      loc_44995D
dec     eax
jnz     loc_449970
mov     al, [ecx+16A9h]
test    al, al
jnz     short loc_449839
mov     al, [ecx+16AAh]
test    al, al
jnz     short loc_449839
mov     al, [ecx+16ABh]
test    al, al
jz      loc_449929

loc_449839:                             ; CODE XREF: BuildingClass__UpdateProduction+16F↑j
; BuildingClass__UpdateProduction+179↑j
mov     eax, [esi+0E8h]
xor     ebp, ebp
test    eax, eax
jle     loc_449929

loc_449849:                             ; CODE XREF: BuildingClass__UpdateProduction+273↓j
push    ebp
mov     ecx, esi
call    Team__GetMember
mov     edi, eax
test    edi, edi
jz      loc_44991A
mov     cl, [edi+14h]
and     cl, 1
mov     [esp+48h+var_31], cl
jz      loc_44991A
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+184h]
cmp     eax, 7
jnz     loc_44991A
mov     eax, [edi]
lea     ecx, [esp+48h+var_24]
push    ecx
mov     ecx, edi
call    dword ptr [eax+48h]
mov     edx, [esi]
mov     ebx, eax
lea     eax, [esp+48h+var_18]
mov     ecx, esi
push    eax
call    dword ptr [edx+48h]
mov     ecx, [eax+8]
mov     edx, [ebx+8]
sub     ecx, edx
mov     edx, [eax+4]
mov     eax, [eax]
push    ecx
mov     ecx, [ebx+4]
sub     edx, ecx
lea     ecx, [esp+4Ch+var_C]
push    edx
mov     edx, [ebx]
sub     eax, edx
push    eax
call    Coord__Subtract
mov     ecx, [eax]
sub     esp, 8
mov     [esp+50h+var_30], ecx
mov     edx, [eax+4]
mov     [esp+50h+var_2C], edx
mov     eax, [eax+8]
fild    [esp+50h+var_2C]
mov     [esp+50h+var_28], eax
fild    [esp+50h+var_28]
fild    [esp+50h+var_30]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fld     st(3)
fmul    st, st(4)
faddp   st(1), st
fstp    [esp+50h+var_50] ; double
fstp    st
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     eax, 40h ; '@'
jge     short loc_44991A
mov     edx, [esi]
push    edi
push    13h
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 1
jz      short loc_449942

loc_44991A:                             ; CODE XREF: BuildingClass__UpdateProduction+1A5↑j
; BuildingClass__UpdateProduction+1B5↑j ...
mov     eax, [esi+0E8h]
inc     ebp
cmp     ebp, eax
jl      loc_449849

loc_449929:                             ; CODE XREF: BuildingClass__UpdateProduction+183↑j
; BuildingClass__UpdateProduction+193↑j
mov     ecx, [esi+520h]
mov     al, [ecx+16BDh]
test    al, al
jz      short loc_449970
mov     ecx, esi
call    AnimClass__resetAnimation
jmp     short loc_449970
; ---------------------------------------------------------------------------

loc_449942:                             ; CODE XREF: BuildingClass__UpdateProduction+268↑j
mov     eax, [esi]
push    0
push    14h
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_44995D:                             ; CODE XREF: BuildingClass__UpdateProduction+15A↑j
push    1
mov     ecx, esi
call    BuildingClass__StartProduction
mov     dword ptr [esi+0BCh], 1

loc_449970:                             ; CODE XREF: BuildingClass__UpdateProduction+161↑j
; BuildingClass__UpdateProduction+287↑j ...
mov     edx, [esi+520h]
mov     al, [edx+16AAh]
test    al, al
jz      short loc_4499BB
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jz      short loc_4499BB
mov     eax, [esi]
push    1Dh
mov     ecx, esi
call    dword ptr [eax+274h]
cmp     eax, 1
jz      short loc_4499BB
mov     edx, [esi]
push    13h
mov     ecx, esi
call    dword ptr [edx+274h]
cmp     eax, 1
jnz     short loc_4499BB
mov     eax, [esi]
push    0
push    14h
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_4499BB:                             ; CODE XREF: BuildingClass__UpdateProduction+2CE↑j
; BuildingClass__UpdateProduction+2D9↑j ...
mov     ecx, [esi+520h]
mov     al, [ecx+16A9h]
mov     ecx, esi
test    al, al
jz      short loc_449A01
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     edx, ds:0A8B230h
push    2
push    0
mov     esi, eax
lea     ecx, [edx+218h]
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_449A01:                             ; CODE XREF: BuildingClass__UpdateProduction+31B↑j
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     esi, eax
mov     eax, ds:0A8B230h
push    2
push    0
lea     ecx, [eax+218h]
call    Random__Range
lea     ecx, [esi+esi*2]
pop     edi
add     eax, ecx
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
*/

// IDA 0x639740: complete production
// 0x639740
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
} // G42.33c6 stub close (raw body preserved above)
void BuildingClass::CompleteProduction()
{
//DUPDEF   ScriptAction *v2; // ebx
//DUPDEF   int Type; // eax
//DUPDEF   int v5; // edi
//DUPDEF   int v6; // esi
//DUPDEF   int v7; // eax
//DUPDEF   int v8; // eax
//DUPDEF   int v9; // edi
//DUPDEF   int v10; // ebx
//DUPDEF   int i; // esi
//DUPDEF   unsigned int *v12; // eax
//DUPDEF   ScriptAction *v14; // [esp+10h] [ebp-8h] BYREF
//DUPDEF   int v15; // [esp+14h] [ebp-4h]

//DUPDEF   v2 = a2; /*0x639746*/
//DUPDEF   v15 = (int)a2; /*0x63974b*/
//DUPDEF   Type = BuildingClass::GetType((BuildingClass *)a1); /*0x63974f*/
//DUPDEF   v14 = v2; /*0x63975c*/
//DUPDEF   v5 = (*(int (**)(int, ScriptAction **))(*(unsigned int *)(Type + 4) + 16))(Type + 4, &v14); /*0x639767*/
//DUPDEF   v6 = BuildingClass::GetType((BuildingClass *)a1); /*0x63976e*/
//DUPDEF   v7 = *(unsigned int *)(v6 + 20); /*0x639770*/
//DUPDEF   *(unsigned int *)(v6 + 148) = v5; /*0x639773*/
//DUPDEF   *(unsigned char *)(v6 + 152) = 1; /*0x63977b*/
//DUPDEF   *(unsigned int *)(v6 + 144) = v7 - v5; /*0x639782*/
//DUPDEF   if ( !stru_AC4B30_raw.__pad_EC[172] ) /*0x63978f*/
//DUPDEF   {
//DUPDEF     if ( (uint8_t)House::IsHumanPlayer(*(House **)(a1 + 540)) ) /*0x639797*/
//DUPDEF     {
//DUPDEF       stru_AC4B30_raw.__pad_EC[172] = 1; /*0x6397a0*/
//DUPDEF       v8 = *(unsigned int *)(v6 + 20) - 1; /*0x6397aa*/
//DUPDEF       if ( v8 >= 0 ) /*0x6397ab*/
//DUPDEF         v9 = *(unsigned int *)(*(unsigned int *)(v6 + 8) + 4 * v8); /*0x6397b4*/
//DUPDEF       else
//DUPDEF         v9 = 0; /*0x6397ad*/
//DUPDEF       v10 = *(unsigned int *)(v9 + 16); /*0x6397b7*/
//DUPDEF       for ( i = 0; i < v10; ++i ) /*0x6397be*/
//DUPDEF       {
//DUPDEF         v12 = *(unsigned int **)(*(unsigned int *)(v9 + 4) + 4 * i); /*0x6397c3*/
//DUPDEF         if ( *(unsigned char *)(*v12 + 131) ) /*0x6397c8*/
//DUPDEF           (*(void (**)(unsigned int))(*(unsigned int *)*v12 + 336))(*v12); /*0x6397d4*/
//DUPDEF       }
//DUPDEF       v2 = (ScriptAction *)v15; /*0x6397df*/
//DUPDEF     }
//DUPDEF     BuildingClass::CheckExitPath((BuildingClass *)a1); /*0x6397e5*/
//DUPDEF   }
// 0x6349b0
//DUPDEF   return ScriptAction::FindSquadMember(v2); /*0x6397f1*/
//DUPDEF }
// 0x43f180
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
//DUPDEF } // G42.33c6 stub close (raw body preserved above)
} // G42.33c6 stub close (raw body preserved above)
void BuildingClass::ProductionDisplayUpdate() {}
//DUPDEF   BuildingClass *v1; // edi
//DUPDEF   int result; // eax
//DUPDEF   BuildingTypeClass *Type; // eax
//DUPDEF   int v4; // ebx
//DUPDEF   int (__thiscall **vtable0)(BuildingClass *, void *, int, int, unsigned int, int); // esi
//DUPDEF   void *v6; // eax
//DUPDEF   int FoundationWidth; // eax
//DUPDEF   int *v8; // ecx
//DUPDEF   int FoundationHeight; // eax
//DUPDEF   int v10; // ebp
//DUPDEF   int v11; // esi
//DUPDEF   HouseClass *owner; // ecx
//DUPDEF   BuildingTypeClass *v13; // eax
//DUPDEF   int *v14; // eax
//DUPDEF   unsigned int *v15; // eax
//DUPDEF   int v16; // ecx
//DUPDEF   int v17; // ebp
//DUPDEF   int v18; // ecx
  int16_t v19; // bx
  int16_t v20; // ax
//DUPDEF   int v21; // edx
//DUPDEF   int v22; // eax
//DUPDEF   int v23; // esi
  int16_t v24; // bx
  int16_t v25; // di
//DUPDEF   BuildingClass *v26; // eax
//DUPDEF   int v27; // edx
//DUPDEF   int v28; // eax
//DUPDEF   int v29; // eax
//DUPDEF   int v30; // ebp
//DUPDEF   int v31; // esi
  int16_t v32; // bx
//DUPDEF   BuildingClass *v33; // eax
//DUPDEF   void *v34; // eax
//DUPDEF   int (__thiscall **v35)(BuildingClass *, void *, int, int, unsigned int, int); // esi
//DUPDEF   void *v36; // eax
//DUPDEF   BuildingTypeClass *v37; // ecx
//DUPDEF   void (__thiscall **v38)(BuildingClass *, int); // esi
//DUPDEF   int v39; // eax
//DUPDEF   int *v40; // eax
//DUPDEF   int *Anims; // ebp
//DUPDEF   int *v42; // esi
//DUPDEF   unsigned int *v43; // eax
//DUPDEF   unsigned int *v44; // eax
//DUPDEF   int v45; // edx
//DUPDEF   int v46; // eax
//DUPDEF   int v47; // eax
//DUPDEF   int *v48; // ecx
//DUPDEF   int v49; // eax
//DUPDEF   int v50; // ebx
//DUPDEF   unsigned int *v51; // eax
//DUPDEF   int v52; // ecx
//DUPDEF   int v53; // ebp
//DUPDEF   int v54; // ecx
  int16_t v55; // di
  int16_t v56; // ax
//DUPDEF   int v57; // esi
  int16_t v58; // bx
  int16_t v59; // di
//DUPDEF   BuildingClass *v60; // eax
//DUPDEF   int v61; // edx
//DUPDEF   int v62; // ebp
//DUPDEF   int v63; // edi
//DUPDEF   int v64; // esi
//DUPDEF   BuildingClass *v65; // eax
//DUPDEF   int v66; // eax
//DUPDEF   int v67; // esi
//DUPDEF   BuildingClass *v68; // eax
//DUPDEF   unsigned int *v69; // eax
//DUPDEF   int v70; // ecx
//DUPDEF   int v71; // edx
//DUPDEF   int Translucency; // ebx
//DUPDEF   int *v73; // ecx
//DUPDEF   int v74; // ebp
  bool v75; // zf
//DUPDEF   int v76; // ebx
//DUPDEF   int *v77; // ecx
//DUPDEF   int v78; // esi
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
  int v98; // [esp+60h] [ebp-7Ch]
  int v99; // [esp+64h] [ebp-78h]
  int v100; // [esp+68h] [ebp-74h]
  int16_t v101[2]; // [esp+6Ch] [ebp-70h] BYREF
  int16_t v102[2]; // [esp+70h] [ebp-6Ch] BYREF
  int16_t v103[2]; // [esp+74h] [ebp-68h] BYREF
  int16_t v104[2]; // [esp+78h] [ebp-64h] BYREF
  unsigned int v105[3]; // [esp+7Ch] [ebp-60h] BYREF
  int v106[3]; // [esp+88h] [ebp-54h] BYREF
  unsigned int v107[3]; // [esp+94h] [ebp-48h] BYREF
  unsigned int v108[3]; // [esp+A0h] [ebp-3Ch] BYREF
  int v109[3]; // [esp+ACh] [ebp-30h] BYREF
  char v110[12]; // [esp+B8h] [ebp-24h] BYREF
  char v111[12]; // [esp+C4h] [ebp-18h] BYREF
  int v112[3]; // [esp+D0h] [ebp-Ch] BYREF
  int v113; // [esp+E0h] [ebp+4h]

//DUPDEF   v1 = this; /*0x43f191*/
//DUPDEF   *(unsigned int *)v93 = this; /*0x43f194*/
//DUPDEF   result = TechnoClass::UpdateProdWithSound((TechnoClass *)this, v113); /*0x43f198*/
//DUPDEF   if ( (unsigned char)result )
//DUPDEF   {
//DUPDEF     result = (*((int (**)(BuildingClass *, int16_t *))v1->vtable1 + 110))(v1, v101); /*0x43f1ae*/
//DUPDEF     *(unsigned int *)v92 = *(unsigned int *)result; /*0x43f1b9*/
//DUPDEF     switch ( v113 )
//DUPDEF     {
//DUPDEF       case 0:
//DUPDEF         result = MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0_raw.__pad_58[416], v92, (char *)v1); /*0x43f1d5*/
//DUPDEF         IDA_LOBYTE(result) = 1; /*0x43f1dd*/
//DUPDEF         break; /*0x43f1e6*/
//DUPDEF       case 1:
//DUPDEF       case 3:
//DUPDEF         Type = v1->Type; /*0x43f1e9*/
//DUPDEF         v4 = 0; /*0x43f1ef*/
//DUPDEF         if ( Type->ToTile ) /*0x43f1f1*/
//DUPDEF         {
//DUPDEF           vtable0 = (int (**)(BuildingClass *, void *, int, int, unsigned int, int))v1->TechnoClass; /*0x43f1fd*/
//DUPDEF           v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v92); /*0x43f210*/
//DUPDEF           if ( vtable0[107](v1, v6, -1, -1, 0, 1) ) /*0x43f218*/
//DUPDEF             goto LABEL_33; /*0x43f218*/
//DUPDEF           FoundationWidth = ((BuildingTypeClass*)(v1->Type))->GetFoundationWidth(); /*0x43f22c*/
//DUPDEF           v8 = (int *)v1->Type; /*0x43f231*/
//DUPDEF           v88 = (int *)FoundationWidth; /*0x43f238*/
//DUPDEF           FoundationHeight = ((BuildingTypeClass*)(v8))->GetFoundationHeight(0); /*0x43f23c*/
//DUPDEF           v10 = 0; /*0x43f241*/
//DUPDEF           v82 = FoundationHeight; /*0x43f245*/
//DUPDEF           v90 = 0; /*0x43f249*/
//DUPDEF           for ( i = 0; v10 < v82; i = v10 ) /*0x43f251*/
//DUPDEF           {
//DUPDEF             v11 = 0; /*0x43f25b*/
//DUPDEF             for ( j = 0; v11 < (int)v88; j = v11 ) /*0x43f263*/
//DUPDEF             {
//DUPDEF               IDA_HIWORD(v100) = v10 + v92[1]; /*0x43f276*/
//DUPDEF               owner = ((unsigned int *)v1)[0]; /*0x43f27b*/
//DUPDEF               IDA_LOWORD(v100) = v11 + v92[0]; /*0x43f281*/
//DUPDEF               v13 = v1->Type; /*0x43f28a*/
//DUPDEF               *(unsigned int *)v87 = v100; /*0x43f290*/
//DUPDEF               v81 = (int)owner; /*0x43f294*/
//DUPDEF               v80 = (int)v13; /*0x43f29b*/
//DUPDEF               v79 = ((unsigned int *)v13)[0]; /*0x43f2a0*/
//DUPDEF               v14 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v87); /*0x43f2a7*/
//DUPDEF               if ( (uint8_t)((CellClass*)(v14))->IsPassable(v79, v80, v81) /*0x43f2fb*/
//DUPDEF                 && *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v87) + 14) != *(unsigned int *)(v1->Type->ToTile + 660)
//DUPDEF                 && *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v87) + 59) != 1 )
//DUPDEF               {
//DUPDEF                 v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v87); /*0x43f30b*/
//DUPDEF                 v16 = v15[18]; /*0x43f310*/
//DUPDEF                 if ( v16 != -1 ) /*0x43f316*/
//DUPDEF                 {
//DUPDEF                   v17 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * v16); /*0x43f322*/
//DUPDEF                   v94 = v15[9]; /*0x43f32a*/
//DUPDEF                   v18 = *(unsigned int *)(v17 + 664); /*0x43f334*/
//DUPDEF                   v19 = *((uint8_t *)v15 + 287) % v18; /*0x43f343*/
//DUPDEF                   v20 = *((uint8_t *)v15 + 287) / v18; /*0x43f347*/
//DUPDEF                   v21 = *(unsigned int *)(v17 + 668); /*0x43f349*/
//DUPDEF                   IDA_LOWORD(v94) = v94 - v19; /*0x43f34f*/
//DUPDEF                   IDA_HIWORD(v94) -= v20; /*0x43f354*/
//DUPDEF                   v22 = 0; /*0x43f359*/
//DUPDEF                   v99 = 0; /*0x43f35d*/
//DUPDEF                   if ( v21 > 0 ) /*0x43f361*/
//DUPDEF                   {
//DUPDEF                     do /*0x43f3eb*/
//DUPDEF                     {
//DUPDEF                       v23 = 0; /*0x43f367*/
//DUPDEF                       if ( v18 > 0 ) /*0x43f36b*/
//DUPDEF                       {
//DUPDEF                         v24 = IDA_HIWORD(v94) + v22; /*0x43f371*/
//DUPDEF                         IDA_HIWORD(k) = IDA_HIWORD(v94) + v22; /*0x43f374*/
//DUPDEF                         do /*0x43f3d4*/
//DUPDEF                         {
//DUPDEF                           IDA_HIWORD(v98) = v24; /*0x43f381*/
//DUPDEF                           v25 = v23 + v94; /*0x43f387*/
//DUPDEF                           IDA_LOWORD(v98) = v23 + v94; /*0x43f38f*/
//DUPDEF                           *(unsigned int *)v103 = v98; /*0x43f398*/
//DUPDEF                           *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v103) + 18) = -1; /*0x43f3a1*/
//DUPDEF                           IDA_LOWORD(k) = v25; /*0x43f3a8*/
//DUPDEF                           *(unsigned int *)v102 = k; /*0x43f3bb*/
//DUPDEF                           v26 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v102); /*0x43f3bf*/
//DUPDEF                           BuildingClass::CreateDestructionCrater(v26); /*0x43f3c6*/
//DUPDEF                           v18 = *(unsigned int *)(v17 + 664); /*0x43f3cb*/
//DUPDEF                           ++v23; /*0x43f3d1*/
//DUPDEF }
//DUPDEF                         while ( v23 < v18 ); /*0x43f3d4*/
//DUPDEF                         v22 = v99; /*0x43f3d6*/
//DUPDEF                         v1 = *(BuildingClass **)v93; /*0x43f3da*/
//DUPDEF                       }
//DUPDEF                       v27 = *(unsigned int *)(v17 + 668); /*0x43f3de*/
//DUPDEF                       v99 = ++v22; /*0x43f3e7*/
//DUPDEF                     }
//DUPDEF                     while ( v22 < v27 ); /*0x43f3eb*/
//DUPDEF                   }
//DUPDEF                   v10 = i; /*0x43f3f1*/
//DUPDEF                   v11 = j; /*0x43f3f5*/
//DUPDEF                 }
//DUPDEF                 v28 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v1->Type->ToTile + 140))( /*0x43f410*/
//DUPDEF                         v1->Type->ToTile,
//DUPDEF                         ((unsigned int *)v1)[0]);
//DUPDEF                 v107[2] = 0; /*0x43f429*/
//DUPDEF                 v107[0] = (v87[0] << 8) + 128; /*0x43f433*/
//DUPDEF                 v107[1] = (v87[1] << 8) + 128; /*0x43f441*/
//DUPDEF                 (*(void (**)(int, unsigned int *, unsigned int))(*(unsigned int *)v28 + 216))(v28, v107, 0); /*0x43f44b*/
//DUPDEF                 if ( (Object *)((unsigned int *)v1)[0] == dword_A83D4C ) /*0x43f45e*/
//DUPDEF                 {
//DUPDEF                   v106[0] = (v87[0] << 8) + 128; /*0x43f47f*/
//DUPDEF                   v106[1] = (v87[1] << 8) + 128; /*0x43f492*/
//DUPDEF                   v106[2] = 0; /*0x43f4a1*/
//DUPDEF                   MapClass::RevealArea1((MapClass *)&stru_87F5F0_raw.__pad_58[416], v106, 1, dword_A83D4C, 0, 0, 0, 1, 0); /*0x43f4a8*/
//DUPDEF                   v109[0] = (v87[0] << 8) + 128; /*0x43f4ce*/
//DUPDEF                   v109[1] = (v87[1] << 8) + 128; /*0x43f4e4*/
//DUPDEF                   v109[2] = 0; /*0x43f4f3*/
//DUPDEF                   MapClass::RevealArea1((MapClass *)&stru_87F5F0_raw.__pad_58[416], v109, 1, dword_A83D4C, 0, 0, 0, 1, 1); /*0x43f4fa*/
//DUPDEF }
//DUPDEF                 v90 = 1; /*0x43f4ff*/
//DUPDEF               }
//DUPDEF               ++v11; /*0x43f508*/
//DUPDEF             }
//DUPDEF             FoundationHeight = v82; /*0x43f515*/
//DUPDEF             ++v10; /*0x43f519*/
//DUPDEF           }
//DUPDEF           i = 0; /*0x43f529*/
//DUPDEF           j = FoundationHeight + 2; /*0x43f52f*/
//DUPDEF           if ( FoundationHeight + 2 > 0 ) /*0x43f533*/
//DUPDEF           {
//DUPDEF             v29 = 0; /*0x43f539*/
//DUPDEF             v30 = (int)v88 + 2; /*0x43f53b*/
//DUPDEF             do /*0x43f5a7*/
//DUPDEF             {
//DUPDEF               v31 = 0; /*0x43f542*/
//DUPDEF               if ( v30 > 0 ) /*0x43f546*/
//DUPDEF               {
//DUPDEF                 IDA_HIWORD(v94) = v29 - 1; /*0x43f549*/
//DUPDEF                 v32 = v29 - 1; /*0x43f54e*/
//DUPDEF                 do /*0x43f596*/
//DUPDEF                 {
//DUPDEF                   IDA_LOWORD(v94) = v31 - 1; /*0x43f559*/
//DUPDEF                   IDA_LOWORD(v83) = v92[0] + v31 - 1; /*0x43f568*/
//DUPDEF                   IDA_HIWORD(v83) = v32 + v92[1]; /*0x43f574*/
//DUPDEF                   *(unsigned int *)v93 = v83; /*0x43f57d*/
//DUPDEF                   v33 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v93); /*0x43f587*/
//DUPDEF                   ((BuildingClass*)(v33))->CreatePlacementCrater(); /*0x43f58e*/
//DUPDEF                   ++v31; /*0x43f593*/
//DUPDEF }
//DUPDEF                 while ( v31 < v30 ); /*0x43f596*/
//DUPDEF                 v29 = i; /*0x43f598*/
//DUPDEF               }
//DUPDEF               i = ++v29; /*0x43f5a3*/
//DUPDEF             }
//DUPDEF             while ( v29 < j ); /*0x43f5a7*/
//DUPDEF           }
//DUPDEF           if ( !v90 ) /*0x43f5b1*/
//DUPDEF           {
//DUPDEF   LABEL_33:
//DUPDEF             result = TechnoClass::UpdateProdWithSound((TechnoClass *)v1, 0); /*0x43f5db*/
//DUPDEF             goto LABEL_34; /*0x43f5db*/
//DUPDEF           }
//DUPDEF           (*((void (**)(BuildingClass *, int))v1->vtable1 + 160))(v1, 3); /*0x43f5b9*/
//DUPDEF           result = (*((int (**)(BuildingClass *))v1->vtable1 + 62))(v1); /*0x43f5c3*/
//DUPDEF           IDA_LOBYTE(result) = 1; /*0x43f5cc*/
//DUPDEF         }
//DUPDEF         else if ( Type->Wall ) /*0x43f5ef*/
//DUPDEF         {
//DUPDEF           v34 = (void *)RA2_OPNEW(0xB0u); /*0x43f5fe*/
//DUPDEF           if ( v34 ) /*0x43f608*/
//DUPDEF             Object::SpawnAtCell(v34, v1->Type->ToOverlay[0], v92, *(unsigned int *)(((unsigned int *)v1)[0]->relatedTagsCapacity + 184)); /*0x43f62e*/
//DUPDEF           (*((void (**)(BuildingClass *, int))v1->vtable1 + 160))(v1, 3); /*0x43f639*/
//DUPDEF           result = (*((int (**)(BuildingClass *))v1->vtable1 + 62))(v1); /*0x43f643*/
//DUPDEF           IDA_LOBYTE(result) = 1; /*0x43f64c*/
//DUPDEF         }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           if ( v113 != 3 ) /*0x43f65b*/
//DUPDEF           {
//DUPDEF             v35 = (int (**)(BuildingClass *, void *, int, int, unsigned int, int))v1->TechnoClass; /*0x43f65d*/
//DUPDEF             v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v92); /*0x43f670*/
//DUPDEF             result = v35[107](v1, v36, -1, -1, 0, 1); /*0x43f678*/
//DUPDEF             if ( result ) /*0x43f680*/
//DUPDEF               goto LABEL_34; /*0x43f680*/
//DUPDEF           }
//DUPDEF           MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0_raw.__pad_58[416], v92, v1); /*0x43f691*/
//DUPDEF           v37 = v1->Type; /*0x43f6a0*/
//DUPDEF           v38 = (void (**)(BuildingClass *, int))v1->TechnoClass; /*0x43f6a6*/
//DUPDEF           v108[2] = 0; /*0x43f6b0*/
//DUPDEF           v108[1] = (v92[1] << 8) + 128; /*0x43f6ba*/
//DUPDEF           v108[0] = (v92[0] << 8) + 128; /*0x43f6cf*/
//DUPDEF           v39 = (*((int (**)(BuildingTypeClass *, char *, unsigned int *))v37->vtable1 + 27))( /*0x43f6e0*/
//DUPDEF                   v37,
//DUPDEF                   v110,
//DUPDEF                   v108);
//DUPDEF           v38[109](v1, v39); /*0x43f6e6*/
//DUPDEF           v40 = (int *)(*((int (**)(BuildingClass *, unsigned int *))v1->vtable1 + 43))(v1, v105); /*0x43f6f5*/
//DUPDEF           Anims = v1->Anims; /*0x43f6fd*/
//DUPDEF           v94 = *v40; /*0x43f703*/
//DUPDEF           v95 = v40[1]; /*0x43f70a*/
//DUPDEF           v96 = v40[2]; /*0x43f711*/
//DUPDEF           do /*0x43f795*/
//DUPDEF           {
//DUPDEF             v42 = (int *)*Anims; /*0x43f715*/
//DUPDEF             if ( *Anims ) /*0x43f715*/
//DUPDEF             {
//DUPDEF               v43 = Matrix3x4::TransformCell( /*0x43f738*/
//DUPDEF                       (float *)g_TacticalClass_Instance,
//DUPDEF                       v111,
//DUPDEF                       (int *)&v1->Type->__pad_F70[v4 + 12]);
//DUPDEF               v44 = Coord::Subtract((Coord *)v112, *v43 + v94, v95 + v43[1], v96 + v43[2]); /*0x43f761*/
//DUPDEF               v105[0] = *v44; /*0x43f768*/
//DUPDEF               v105[1] = v44[1]; /*0x43f76f*/
//DUPDEF               v45 = v44[2]; /*0x43f777*/
//DUPDEF               v46 = *v42; /*0x43f77a*/
//DUPDEF               v105[2] = v45; /*0x43f77f*/
//DUPDEF               (*(void (**)(int *, unsigned int *))(v46 + 436))(v42, v105); /*0x43f783*/
//DUPDEF             }
//DUPDEF             v4 += 68; /*0x43f789*/
//DUPDEF             ++Anims; /*0x43f78c*/
//DUPDEF           }
//DUPDEF           while ( v4 < 1428 ); /*0x43f795*/
//DUPDEF           v47 = ((BuildingTypeClass*)(v1->Type))->GetFoundationWidth(); /*0x43f7a1*/
//DUPDEF           v48 = (int *)v1->Type; /*0x43f7a6*/
//DUPDEF           *(unsigned int *)v87 = v47; /*0x43f7ae*/
//DUPDEF           v49 = ((BuildingTypeClass*)(v48))->GetFoundationHeight(0); /*0x43f7b2*/
//DUPDEF           v98 = v49; /*0x43f7b9*/
//DUPDEF           i = 0; /*0x43f7bd*/
//DUPDEF           if ( v49 > 0 ) /*0x43f7c5*/
//DUPDEF           {
//DUPDEF             do /*0x43f916*/
//DUPDEF             {
//DUPDEF               v50 = 0; /*0x43f7cf*/
//DUPDEF               for ( k = 0; v50 < *(int *)v87; k = v50 ) /*0x43f7d7*/
//DUPDEF               {
//DUPDEF                 IDA_LOWORD(v84) = v50 + v92[0]; /*0x43f7ee*/
//DUPDEF                 IDA_HIWORD(v84) = i + v92[1]; /*0x43f7f3*/
//DUPDEF                 *(unsigned int *)v93 = v84; /*0x43f800*/
//DUPDEF                 v51 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v93); /*0x43f80a*/
//DUPDEF                 v52 = v51[18]; /*0x43f80f*/
//DUPDEF                 if ( v52 != -1 ) /*0x43f815*/
//DUPDEF                 {
//DUPDEF                   v88 = 0; /*0x43f821*/
//DUPDEF                   v53 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * v52); /*0x43f829*/
//DUPDEF                   v94 = v51[9]; /*0x43f831*/
//DUPDEF                   v54 = *(unsigned int *)(v53 + 664); /*0x43f83b*/
//DUPDEF                   v55 = *((uint8_t *)v51 + 287) % v54; /*0x43f84a*/
//DUPDEF                   v56 = *((uint8_t *)v51 + 287) / v54; /*0x43f84e*/
//DUPDEF                   IDA_LOWORD(v94) = v94 - v55; /*0x43f850*/
//DUPDEF                   IDA_HIWORD(v94) -= v56; /*0x43f855*/
//DUPDEF                   if ( *(int *)(v53 + 668) > 0 ) /*0x43f862*/
//DUPDEF                   {
//DUPDEF                     do /*0x43f8ec*/
//DUPDEF                     {
//DUPDEF                       v57 = 0; /*0x43f868*/
//DUPDEF                       if ( v54 > 0 ) /*0x43f86c*/
//DUPDEF                       {
//DUPDEF                         v58 = IDA_HIWORD(v94) + (unsigned short)v88; /*0x43f876*/
//DUPDEF                         IDA_HIWORD(v99) = IDA_HIWORD(v94) + (unsigned short)v88; /*0x43f879*/
//DUPDEF                         do /*0x43f8d9*/
//DUPDEF                         {
//DUPDEF                           IDA_HIWORD(j) = v58; /*0x43f886*/
//DUPDEF                           v59 = v57 + v94; /*0x43f88c*/
//DUPDEF                           IDA_LOWORD(j) = v57 + v94; /*0x43f894*/
//DUPDEF                           *(unsigned int *)v104 = j; /*0x43f89d*/
//DUPDEF                           *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v104) + 18) = -1; /*0x43f8a6*/
//DUPDEF                           IDA_LOWORD(v99) = v59; /*0x43f8ad*/
//DUPDEF                           *(unsigned int *)v101 = v99; /*0x43f8c0*/
//DUPDEF                           v60 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v101); /*0x43f8c4*/
//DUPDEF                           BuildingClass::CreateDestructionCrater(v60); /*0x43f8cb*/
//DUPDEF                           v54 = *(unsigned int *)(v53 + 664); /*0x43f8d0*/
//DUPDEF                           ++v57; /*0x43f8d6*/
//DUPDEF }
//DUPDEF                         while ( v57 < v54 ); /*0x43f8d9*/
//DUPDEF                       }
//DUPDEF                       v61 = *(unsigned int *)(v53 + 668); /*0x43f8df*/
//DUPDEF                       v88 = (int *)((char *)v88 + 1); /*0x43f8e8*/
//DUPDEF                     }
//DUPDEF                     while ( (int)v88 < v61 ); /*0x43f8ec*/
//DUPDEF                     v50 = k; /*0x43f8f2*/
//DUPDEF                   }
//DUPDEF                 }
//DUPDEF                 ++v50; /*0x43f8fa*/
//DUPDEF               }
//DUPDEF               ++i; /*0x43f912*/
//DUPDEF             }
//DUPDEF             while ( i < v98 ); /*0x43f916*/
//DUPDEF             v49 = v98; /*0x43f91c*/
//DUPDEF           }
//DUPDEF           result = v49 + 2; /*0x43f91e*/
//DUPDEF           v62 = 0; /*0x43f921*/
//DUPDEF           j = result; /*0x43f925*/
//DUPDEF           if ( result <= 0 ) /*0x43f929*/
//DUPDEF             goto LABEL_92; /*0x43f929*/
//DUPDEF           v63 = *(unsigned int *)v87 + 2; /*0x43f933*/
//DUPDEF           do /*0x43f995*/
//DUPDEF           {
//DUPDEF             v64 = 0; /*0x43f936*/
//DUPDEF             if ( v63 > 0 ) /*0x43f93a*/
//DUPDEF             {
//DUPDEF               IDA_HIWORD(v94) = v62 - 1; /*0x43f93f*/
//DUPDEF               do /*0x43f98c*/
//DUPDEF               {
//DUPDEF                 IDA_LOWORD(v94) = v64 - 1; /*0x43f94f*/
//DUPDEF                 IDA_LOWORD(v85) = v92[0] + v64 - 1; /*0x43f95e*/
//DUPDEF                 IDA_HIWORD(v85) = v62 - 1 + v92[1]; /*0x43f96a*/
//DUPDEF                 *(unsigned int *)v93 = v85; /*0x43f979*/
//DUPDEF                 v65 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v93); /*0x43f97d*/
//DUPDEF                 ((BuildingClass*)(v65))->CreatePlacementCrater(); /*0x43f984*/
//DUPDEF                 ++v64; /*0x43f989*/
//DUPDEF }
//DUPDEF               while ( v64 < v63 ); /*0x43f98c*/
//DUPDEF               result = j; /*0x43f98e*/
//DUPDEF             }
//DUPDEF             ++v62; /*0x43f992*/
//DUPDEF           }
//DUPDEF           while ( v62 < result ); /*0x43f995*/
//DUPDEF           IDA_LOBYTE(result) = 1; /*0x43f99a*/
//DUPDEF         }
//DUPDEF         break; /*0x43f5d5*/
//DUPDEF       case 2:
//DUPDEF         *(unsigned int *)v93 = (*((int (**)(BuildingClass *))v1->vtable1 + 121))(v1); /*0x43f9b0*/
//DUPDEF         v66 = (*((int (**)(BuildingClass *))v1->vtable1 + 111))(v1); /*0x43f9b8*/
//DUPDEF         v67 = (*((int (**)(BuildingClass *, unsigned int))v1->vtable1 + 281))(v1, *(int16_t *)(v66 + 266)); /*0x43f9d0*/
//DUPDEF         if ( (*((uint8_t (**)(BuildingClass *))v1->vtable1 + 88))(v1)
//DUPDEF           || ((unsigned int *)v1)[0]
//DUPDEF           && (v1 ? (v68 = (*((int (**)(BuildingClass *))v1->vtable1 + 11))(v1) == 6 ? v1 : 0) : (v68 = 0),
//DUPDEF               (BuildingClass *)((unsigned int *)v1)[0]->AirstrikeClass_field_50 == v68) )
//DUPDEF         {
//DUPDEF           IDA_LOWORD(v67) = Techno::StartInvulnerability(v67); /*0x43fa17*/
//DUPDEF }
//DUPDEF         *(unsigned short *)v1->BuildingClass_field_short_700 = v67; /*0x43fa19*/
//DUPDEF         j = (uint16_t)v67; /*0x43fa26*/
//DUPDEF         v88 = v1->Anims; /*0x43fa30*/
//DUPDEF         v86 = 21; /*0x43fa34*/
//DUPDEF         do /*0x43fabc*/
//DUPDEF         {
//DUPDEF           v69 = (unsigned int *)*v88; /*0x43fa40*/
//DUPDEF           if ( *v88 ) /*0x43fa40*/
//DUPDEF           {
//DUPDEF             v70 = v69[50]; /*0x43fa46*/
//DUPDEF             if ( v70 && *(unsigned char *)(v70 + 860) ) /*0x43fa50*/
//DUPDEF             {
//DUPDEF               v71 = j; /*0x43fa5e*/
//DUPDEF               v69[53] = *(unsigned int *)v93; /*0x43fa62*/
//DUPDEF               v69[63] = v71; /*0x43fa68*/
//DUPDEF             }
//DUPDEF             Translucency = v1->Translucency; /*0x43fa6e*/
//DUPDEF             if ( Translucency == 15 /*0x43fa88*/
//DUPDEF               && (*((int (**)(BuildingClass *, unsigned int, unsigned int))v1->vtable1 + 26))(v1, 0, 0) == 5 )
//DUPDEF             {
//DUPDEF               IDA_LOBYTE(Translucency) = 16; /*0x43fa8a*/
//DUPDEF             }
//DUPDEF             v73 = v1->Anims; /*0x43fa8f*/
//DUPDEF             v74 = 21; /*0x43fa91*/
//DUPDEF             do /*0x43faa6*/
//DUPDEF             {
//DUPDEF               if ( *v73 ) /*0x43fa96*/
//DUPDEF                 *(unsigned char *)(*v73 + 376) = Translucency; /*0x43fa9c*/
//DUPDEF               ++v73; /*0x43faa2*/
//DUPDEF               --v74; /*0x43faa5*/
//DUPDEF             }
//DUPDEF             while ( v74 ); /*0x43faa6*/
//DUPDEF           }
//DUPDEF           v75 = v86 == 1; /*0x43fab3*/
//DUPDEF           ++v88; /*0x43fab4*/
//DUPDEF           --v86; /*0x43fab8*/
//DUPDEF         }
//DUPDEF         while ( !v75 ); /*0x43fabc*/
//DUPDEF         v76 = v1->Translucency; /*0x43fac2*/
//DUPDEF         if ( v76 == 15 && (*((int (**)(BuildingClass *, unsigned int, unsigned int))v1->vtable1 + 26))(v1, 0, 0) == 5 ) /*0x43fadc*/
//DUPDEF           IDA_LOBYTE(v76) = 16; /*0x43fade*/
//DUPDEF         v77 = v1->Anims; /*0x43fae3*/
//DUPDEF         v78 = 21; /*0x43fae5*/
//DUPDEF         do /*0x43fafa*/
//DUPDEF         {
//DUPDEF           result = *v77; /*0x43faea*/
//DUPDEF           if ( *v77 ) /*0x43faea*/
//DUPDEF             *(unsigned char *)(result + 376) = v76; /*0x43faf0*/
//DUPDEF           ++v77; /*0x43faf6*/
//DUPDEF           --v78; /*0x43faf9*/
//DUPDEF         }
//DUPDEF         while ( v78 ); /*0x43fafa*/
//DUPDEF         goto LABEL_92; /*0x43fafa*/
//DUPDEF       default:
//DUPDEF   LABEL_92:
//DUPDEF         IDA_LOBYTE(result) = 1; /*0x43fafc*/
//DUPDEF         break; /*0x43faff*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x43f5e0*/
//DUPDEF   }
//DUPDEF   return result; /*0x43f1da*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x43f5e0*/
//DUPDEF   }
//DUPDEF   return result; /*0x43f1da*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x43f5e0*/
//DUPDEF   }
//DUPDEF   return result; /*0x43f1da*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x43f5e0*/
//DUPDEF   return result; /*0x43f1da*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x43f5e0*/
//DUPDEF   return result; /*0x43f1da*/
// 0x4da0e0
void BuildingClass::AddToProductionQueue(int) {}
//DUPDEF   int v3; // eax
  bool v4; // zf
//DUPDEF   int v5; // ecx
//DUPDEF   int v6; // eax
//DUPDEF   int v7; // eax
//DUPDEF   int v8; // edx
//DUPDEF   int Member; // eax
//DUPDEF   int v10; // esi

//DUPDEF   if ( !int ) /*0x4da0eb*/
//DUPDEF     return; /*0x4da0eb*/
//DUPDEF   v3 = this->q16F; /*0x4da0f1*/
//DUPDEF   if ( int != this ) /*0x4da0f9*/
//DUPDEF   {
//DUPDEF     v4 = v3 == 0; /*0x4da108*/
//DUPDEF     goto LABEL_6; /*0x4da108*/
//DUPDEF }
//DUPDEF   v4 = v3 == 0; /*0x4da0fb*/
//DUPDEF   if ( v3 <= 0 ) /*0x4da0fd*/
//DUPDEF   {
//DUPDEF   LABEL_6:
//DUPDEF     if ( v4 ) /*0x4da10a*/
//DUPDEF       this->u32_6B1 = 0; /*0x4da10c*/
//DUPDEF     v5 = this->q16D; /*0x4da113*/
//DUPDEF     if ( this->q16F < v5 /*0x4da144*/
//DUPDEF       || (this->u32_5B9 || !v5)
//DUPDEF       && (v6 = this->q170, v6 > 0)
//DUPDEF       && (*(uint8_t (**)(int, int, unsigned int))(this->q16B + 8))(this + 1452, v5 + v6, 0) )
//DUPDEF     {
//DUPDEF       v7 = this->q16F; /*0x4da14b*/
//DUPDEF       v8 = ((unsigned char *)(this) + 0x16C); /*0x4da14e*/
//DUPDEF       this->q16F = v7 + 1; /*0x4da154*/
//DUPDEF       *(unsigned int *)(v8 + 4 * v7) = int; /*0x4da157*/
//DUPDEF }
//DUPDEF     goto LABEL_14; /*0x4da157*/
//DUPDEF   }
//DUPDEF   this->u32_6B1 = 1; /*0x4da0ff*/
//DUPDEF   LABEL_14:
//DUPDEF   if ( !this->u32_5A4 && (*(int (**)(int))(*(unsigned int *)&this->u8_988))(this) == 5 ) /*0x4da171*/
//DUPDEF   {
//DUPDEF     Member = Team::GetMember((Team *)this, 0); /*0x4da177*/
//DUPDEF     v10 = Member; /*0x4da17c*/
//DUPDEF     if ( !Member /*0x4da194*/
//DUPDEF       || (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) != 6
//DUPDEF       || !*(unsigned char *)(*(unsigned int *)(v10 + 1312) + 5821) )
//DUPDEF     {
//DUPDEF       (*(void (**)(int, unsigned int, int))(this->u32_121)(this, 0, 1); /*0x4da1a6*/
//DUPDEF }
//DUPDEF   }
//DUPDEF }
//DUPDEF   v4 = v3 == 0; /*0x4da0fb*/
//DUPDEF   if ( v3 <= 0 ) /*0x4da0fd*/
//DUPDEF   {
//DUPDEF   LABEL_6:
//DUPDEF     if ( v4 ) /*0x4da10a*/
//DUPDEF       this->u32_6B1 = 0; /*0x4da10c*/
//DUPDEF     v5 = this->q16D; /*0x4da113*/
//DUPDEF     if ( this->q16F < v5 /*0x4da144*/
//DUPDEF       || (this->u32_5B9 || !v5)
//DUPDEF       && (v6 = this->q170, v6 > 0)
//DUPDEF       && (*(uint8_t (**)(int, int, unsigned int))(this->q16B + 8))(this + 1452, v5 + v6, 0) )
//DUPDEF     {
//DUPDEF       v7 = this->q16F; /*0x4da14b*/
//DUPDEF       v8 = ((unsigned char *)(this) + 0x16C); /*0x4da14e*/
//DUPDEF       this->q16F = v7 + 1; /*0x4da154*/
//DUPDEF       *(unsigned int *)(v8 + 4 * v7) = int; /*0x4da157*/
//DUPDEF }
//DUPDEF     goto LABEL_14; /*0x4da157*/
//DUPDEF   }
//DUPDEF   this->u32_6B1 = 1; /*0x4da0ff*/
//DUPDEF   LABEL_14:
//DUPDEF   if ( !this->u32_5A4 && (*(int (**)(int))(*(unsigned int *)&this->u8_988))(this) == 5 ) /*0x4da171*/
//DUPDEF   {
//DUPDEF     Member = Team::GetMember((Team *)this, 0); /*0x4da177*/
//DUPDEF     v10 = Member; /*0x4da17c*/
//DUPDEF     if ( !Member /*0x4da194*/
//DUPDEF       || (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) != 6
//DUPDEF       || !*(unsigned char *)(*(unsigned int *)(v10 + 1312) + 5821) )
//DUPDEF     {
//DUPDEF       (*(void (**)(int, unsigned int, int))(this->u32_121)(this, 0, 1); /*0x4da1a6*/
//DUPDEF }
//DUPDEF   }
//DUPDEF }
//DUPDEF   v4 = v3 == 0; /*0x4da0fb*/
//DUPDEF   if ( v3 <= 0 ) /*0x4da0fd*/
//DUPDEF   {
//DUPDEF   LABEL_6:
//DUPDEF     if ( v4 ) /*0x4da10a*/
//DUPDEF       this->u32_6B1 = 0; /*0x4da10c*/
//DUPDEF     v5 = this->q16D; /*0x4da113*/
//DUPDEF     if ( this->q16F < v5 /*0x4da144*/
//DUPDEF       || (this->u32_5B9 || !v5)
//DUPDEF       && (v6 = this->q170, v6 > 0)
//DUPDEF       && (*(uint8_t (**)(int, int, unsigned int))(this->q16B + 8))(this + 1452, v5 + v6, 0) )
//DUPDEF     {
//DUPDEF       v7 = this->q16F; /*0x4da14b*/
//DUPDEF       v8 = ((unsigned char *)(this) + 0x16C); /*0x4da14e*/
//DUPDEF       this->q16F = v7 + 1; /*0x4da154*/
//DUPDEF       *(unsigned int *)(v8 + 4 * v7) = int; /*0x4da157*/
//DUPDEF }
//DUPDEF     goto LABEL_14; /*0x4da157*/
//DUPDEF   }
//DUPDEF   this->u32_6B1 = 1; /*0x4da0ff*/
//DUPDEF   LABEL_14:
//DUPDEF   if ( !this->u32_5A4 && (*(int (**)(int))(*(unsigned int *)&this->u8_988))(this) == 5 ) /*0x4da171*/
//DUPDEF   {
//DUPDEF     Member = Team::GetMember((Team *)this, 0); /*0x4da177*/
//DUPDEF     v10 = Member; /*0x4da17c*/
//DUPDEF     if ( !Member /*0x4da194*/
//DUPDEF       || (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) != 6
//DUPDEF       || !*(unsigned char *)(*(unsigned int *)(v10 + 1312) + 5821) )
//DUPDEF     {
//DUPDEF       (*(void (**)(int, unsigned int, int))(this->u32_121)(this, 0, 1); /*0x4da1a6*/
//DUPDEF }
//DUPDEF   }
//DUPDEF }
//DUPDEF   v4 = v3 == 0; /*0x4da0fb*/
//DUPDEF   if ( v3 <= 0 ) /*0x4da0fd*/
//DUPDEF   {
//DUPDEF   LABEL_6:
//DUPDEF     if ( v4 ) /*0x4da10a*/
//DUPDEF       this->u32_6B1 = 0; /*0x4da10c*/
//DUPDEF     v5 = this->q5B4; /*0x4da113*/
//DUPDEF     if ( this->u32_5BC < v5 /*0x4da144*/
//DUPDEF       || (this->u32_5B9 || !v5)
//DUPDEF       && (v6 = this->q5C0, v6 > 0)
//DUPDEF       && (*(uint8_t (**)(int, int, unsigned int))(this->q16B + 8))(this + 1452, v5 + v6, 0) )
//DUPDEF     {
//DUPDEF       v7 = this->q16F; /*0x4da14b*/
//DUPDEF       v8 = ((unsigned char *)(this) + 0x16C); /*0x4da14e*/
//DUPDEF       this->q16F = v7 + 1; /*0x4da154*/
//DUPDEF       *(unsigned int *)(v8 + 4 * v7) = int; /*0x4da157*/
//DUPDEF }
//DUPDEF     goto LABEL_14; /*0x4da157*/
//DUPDEF   }
//DUPDEF   this->u32_6B1 = 1; /*0x4da0ff*/
//DUPDEF   LABEL_14:
//DUPDEF   if ( !this->u32_5A4 && (*(int (**)(int))(*(unsigned int *)&this->u8_988))(this) == 5 ) /*0x4da171*/
//DUPDEF   {
//DUPDEF     Member = Team::GetMember((unsigned int *)this, 0); /*0x4da177*/
//DUPDEF     v10 = Member; /*0x4da17c*/
//DUPDEF     if ( !Member /*0x4da194*/
//DUPDEF       || (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) != 6
//DUPDEF       || !*(unsigned char *)(*(unsigned int *)(v10 + 1312) + 5821) )
//DUPDEF     {
//DUPDEF       (*(void (**)(int, unsigned int, int))(this->u32_121)(this, 0, 1); /*0x4da1a6*/
//DUPDEF }
//DUPDEF   }
//DUPDEF }
//DUPDEF   v4 = v3 == 0; /*0x4da0fb*/
//DUPDEF   if ( v3 <= 0 ) /*0x4da0fd*/
//DUPDEF   {
//DUPDEF   LABEL_6:
//DUPDEF     if ( v4 ) /*0x4da10a*/
//DUPDEF       this->u32_6B1 = 0; /*0x4da10c*/
//DUPDEF     v5 = this->q5B4; /*0x4da113*/
//DUPDEF     if ( this->u32_5BC < v5 /*0x4da144*/
//DUPDEF       || (this->q16E4 || !v5)
//DUPDEF       && (v6 = this->q5C0, v6 > 0)
//DUPDEF       && (*(uint8_t (**)(int, int, unsigned int))(this->q16B0 + 8))(&this->q16B0, v5 + v6, 0) )
//DUPDEF     {
//DUPDEF       v7 = this->u32_5BC; /*0x4da14b*/
//DUPDEF       v8 = this->AnimStates; /*0x4da14e*/
//DUPDEF       this->q16F = v7 + 1; /*0x4da154*/
//DUPDEF       *(unsigned int *)(v8 + 4 * v7) = int; /*0x4da157*/
//DUPDEF     goto LABEL_14; /*0x4da157*/
//DUPDEF   this->u32_6B1 = 1; /*0x4da0ff*/
//DUPDEF   LABEL_14:
//DUPDEF   if ( !this->u32_5A4 && (*(int (**)(int))(*(unsigned int *)&this->u8_988))(this) == 5 ) /*0x4da171*/
//DUPDEF   {
//DUPDEF     Member = Team::GetMember((unsigned int *)this, 0); /*0x4da177*/
//DUPDEF     v10 = Member; /*0x4da17c*/
//DUPDEF     if ( !Member /*0x4da194*/
//DUPDEF       || (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) != 6
//DUPDEF       || !*(unsigned char *)(v10->ThreatPosed + 5821) )
//DUPDEF     {
//DUPDEF       (*(void (**)(int, unsigned int, int))(this->u32_121)(this, 0, 1); /*0x4da1a6*/
// 0x4fce80
void BuildingClass::Capture() { CaptureBuilding(); }
//DUPDEF   unsigned int *v3; // eax
//DUPDEF   int v4; // ecx
//DUPDEF   int v5; // eax
//DUPDEF   int v6; // eax
  char v7; // al
//DUPDEF   int v8; // edi
//DUPDEF   int v9; // eax
//DUPDEF   char *i; // ecx
//DUPDEF   unsigned char *v11; // edi
//DUPDEF   void *v12; // eax
//DUPDEF   BuildingClass *v13; // eax
//DUPDEF   void *v14; // eax

//DUPDEF   if ( *a2 != *(unsigned short *)&((unsigned int *)&stru_A8EB00)[948] || a2[1] != *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950] ) /*0x4fcea4*/
//DUPDEF   {
//DUPDEF     v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], a2); /*0x4fceb0*/
//DUPDEF     v4 = v3[17]; /*0x4fceb5*/
//DUPDEF     if ( v4 != -1 ) /*0x4fcebb*/
//DUPDEF     {
//DUPDEF       v5 = v3[20]; /*0x4fcec1*/
//DUPDEF       if ( v5 != -1 ) /*0x4fcec7*/
//DUPDEF       {
//DUPDEF         v6 = *((unsigned int *)((char *)&stru_A80220) + v5); /*0x4fced3*/
//DUPDEF         if ( *(unsigned int *)&dword_A8B238 ) /*0x4fcede*/
//DUPDEF           v7 = *(unsigned char *)(v6 + 492); /*0x4fcefc*/
//DUPDEF         else
//DUPDEF           v7 = *(unsigned char *)(v6 + 492) || *(unsigned char *)(v6 + 493); /*0x4fcee8*/
//DUPDEF         if ( v7 ) /*0x4fcf04*/
//DUPDEF         {
//DUPDEF           v8 = *(unsigned int *)(*(unsigned int *)stru_A83D50_raw.__pad_34 + 4 * v4); /*0x4fcf0f*/
//DUPDEF           if ( *(unsigned char *)(v8 + 680) ) /*0x4fcf12*/
//DUPDEF           {
//DUPDEF             v9 = 0; /*0x4fcf26*/
//DUPDEF             if ( dword_A83C78 > 0 ) /*0x4fcf2a*/
//DUPDEF             {
//DUPDEF               for ( i = (char *)dword_A83C6C; *(unsigned int *)(*(unsigned int *)i + 3668) != v8; i += 4 ) /*0x4fcf36*/
//DUPDEF               {
//DUPDEF                 if ( ++v9 >= dword_A83C78 ) /*0x4fcf48*/
//DUPDEF                   return; /*0x4fcf48*/
//DUPDEF }
//DUPDEF               v11 = (unsigned char *)*((unsigned int *)dword_A83C6C + v9); /*0x4fcf52*/
//DUPDEF               if ( v11 && !v11[5497] ) /*0x4fcf5d*/
//DUPDEF               {
//DUPDEF                 if ( dword_A83D4C == (Object *)this && !a3 ) /*0x4fcf7e*/
//DUPDEF                   PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1700), 0x2000, 1.0, 0); /*0x4fcf98*/
//DUPDEF                 (*(void (**)(unsigned char *, BuildingClass *))(*(unsigned int *)v11 + 132))(v11, this); /*0x4fcfa2*/
//DUPDEF                 *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], a2) + 17) = -1; /*0x4fcfbc*/
//DUPDEF                 *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], a2) + 286) = 0; /*0x4fcfca*/
//DUPDEF                 *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], a2) + 20) = -1; /*0x4fcfdd*/
//DUPDEF                 v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], a2); /*0x4fcfe0*/
//DUPDEF                 House::AnnounceUpgrade((House *)v12, -1); /*0x4fcfe7*/
//DUPDEF                 v13 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], a2); /*0x4fcff4*/
//DUPDEF                 ((BuildingClass*)(v13))->ValidatePlacement(0); /*0x4fcffb*/
//DUPDEF                 ((BuildingClass*)((int *)&stru_87F5F0_raw.__pad_58[416]))->AddUpgrade((BuildingTypeClass *)a2); /*0x4fd006*/
//DUPDEF                 v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], a2); /*0x4fd011*/
//DUPDEF                 AbstractClass::ClearTargetToMeClearManagerTarget((int)v14); /*0x4fd018*/
//DUPDEF                 Cell::SetRadar((Cell *)&stru_87F5F0_raw.__pad_58[416], a2); /*0x4fd023*/
//DUPDEF                 Radar::Update((Radar *)&stru_87F5F0_raw.__pad_58[416], a2); /*0x4fd02e*/
//DUPDEF }
//DUPDEF             }
//DUPDEF           }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
/* ASM:
mov     byte ptr [ecx+660h], 0
push    esi
add     ecx, 55Ch
mov     edx, 15h

loc_4521D3:                             ; CODE XREF: BuildingClass__DisableTemporal+3E↓j
mov     eax, [ecx]
test    eax, eax
jz      short loc_4521FA
mov     esi, [eax+0ACh]
mov     byte ptr [eax+11Ah], 1
mov     byte ptr [eax+11Bh], 0
mov     [eax+11Ch], esi
mov     byte ptr [eax+119h], 1

loc_4521FA:                             ; CODE XREF: BuildingClass__DisableTemporal+17↑j
add     ecx, 4
dec     edx
jnz     short loc_4521D3
pop     esi
retn
*/

// IDA 0x43d230: infiltrate building
// 0x4571e0
void BuildingClass::Infiltrate()
{
//DUPDEF   House *v3; // edi
//DUPDEF   HouseClass *owner; // ecx
//DUPDEF   int *v5; // eax
//DUPDEF   BuildingTypeClass *Type; // ecx
//DUPDEF   int v7; // esi
//DUPDEF   int v8; // eax
//DUPDEF   BuildingTypeClass **v9; // edx
//DUPDEF   int SuperWeapon; // eax
//DUPDEF   int AIBasePlanningSide; // ecx
//DUPDEF   int v12; // eax
//DUPDEF   int v13; // esi
//DUPDEF   int v14; // ecx
//DUPDEF   char v15; // [esp+Bh] [ebp-1h]

//DUPDEF   v3 = (House *)a2; /*0x4571e5*/
//DUPDEF   owner = ((unsigned int *)this)[0]; /*0x4571e9*/
//DUPDEF   v15 = 0; /*0x4571ef*/
//DUPDEF   if ( owner != a2 ) /*0x4571f6*/
//DUPDEF   {
//DUPDEF     if ( (uint8_t)House::IsHumanPlayer((House *)owner) || (uint8_t)House::IsHumanPlayer(v3) ) /*0x45720e*/
//DUPDEF     {
//DUPDEF       v5 = (int *)(*((int (**)(BuildingClass *, void **))this->vtable1 + 110))(this, &a2); /*0x457221*/
//DUPDEF       if ( (uint8_t)CreateTriggerClassIfFarEnough(9, *v5, *v5) ) /*0x45722f*/
//DUPDEF         v15 = 1; /*0x457238*/
//DUPDEF     }
//DUPDEF     Type = this->Type; /*0x45723c*/
//DUPDEF     if ( Type->__pad_1624[128] ) /*0x457242*/
//DUPDEF     {
//DUPDEF       HouseClass::ReshroudMap(((unsigned int *)this)[0]); /*0x457252*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) /*0x45727c*/
//DUPDEF         && !IDA_BYTE2(((unsigned int *)this)[0]->HouseClass_field_timer_B[2])
//DUPDEF         && v15 )
//DUPDEF       {
//DUPDEF         ((VoxClass *)g_Str_EVA_BuildingInfiltrated.Type)->FindAndPlay(-1); /*0x457288*/
//DUPDEF       }
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer(v3) && !IDA_BYTE2(((unsigned int *)this)[0]->HouseClass_field_timer_B[2]) ) /*0x4572a2*/
//DUPDEF       {
//DUPDEF         if ( v15 ) /*0x4572b6*/
//DUPDEF           ((VoxClass *)g_Str_EVA_BuildingInfiltrated.YuriVoice)->FindAndPlay(-1); /*0x4572c6*/
//DUPDEF       }
//DUPDEF       goto LABEL_64; /*0x4572c6*/
//DUPDEF     }
//DUPDEF     if ( Type->PowerBonus > 0 ) /*0x4572d9*/
//DUPDEF     {
//DUPDEF       HouseClass::CreatePowerOutage((int)((unsigned int *)this)[0], *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3428)); /*0x4572e8*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) && v15 ) /*0x457302*/
//DUPDEF       {
//DUPDEF         ((VoxClass *)&g_Str_EVA_BuildingInfiltrated.Name[6])->FindAndPlay(-1); /*0x45730e*/
//DUPDEF       }
//DUPDEF       else if ( (uint8_t)House::IsHumanPlayer(v3) && v15 ) /*0x457328*/
//DUPDEF       {
//DUPDEF         VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x457338*/
//DUPDEF         ((VoxClass *)aEvaEnemybasepo)->FindAndPlay(-1); /*0x457347*/
//DUPDEF       }
//DUPDEF       goto LABEL_64; /*0x45730e*/
//DUPDEF     }
//DUPDEF     v7 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x45734c*/
//DUPDEF     v8 = 0; /*0x457352*/
//DUPDEF     if ( v7 <= 0 ) /*0x457356*/
//DUPDEF     {
//DUPDEF   LABEL_26:
//DUPDEF       SuperWeapon = Type->SuperWeapon; /*0x45736a*/
//DUPDEF       if ( SuperWeapon != -1 ) /*0x457373*/
//DUPDEF       {
//DUPDEF         SuperClass::Reset(*(SuperClass **)(((unsigned int *)this)[0]->supersCount + 4 * SuperWeapon)); /*0x457388*/
//DUPDEF         if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) || (uint8_t)House::IsHumanPlayer(v3) && v15 ) /*0x4573b1*/
//DUPDEF           VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x4573c1*/
//DUPDEF         goto LABEL_64; /*0x4573c1*/
//DUPDEF       }
//DUPDEF       if ( ((unsigned int *)Type)[0] > 0 ) /*0x45741c*/
//DUPDEF       {
//DUPDEF         a2 = (void *)(*(int (**)(int *))(((unsigned int *)this)[0]->arrayIndex + 24))(&((unsigned int *)this)[0]->arrayIndex); /*0x457437*/
//DUPDEF         IDA_LOWORD(v12) = Math::RoundToInt((double)(int)a2 * *(float *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3432)); /*0x457445*/
//DUPDEF         v13 = v12; /*0x457450*/
//DUPDEF         HouseClass::ProcessPowerDrain((int *)((unsigned int *)this)[0], v12); /*0x457453*/
//DUPDEF         HouseClass::AddPower((HouseClass *)v3, v13); /*0x45745b*/
//DUPDEF         if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) && v15 ) /*0x457475*/
//DUPDEF           ((VoxClass *)&stru_818E00_raw.Flamer)->FindAndPlay(-1); /*0x457481*/
//DUPDEF         if ( (uint8_t)House::IsHumanPlayer(v3) && v15 ) /*0x45749b*/
//DUPDEF           ((VoxClass *)&stru_818E00_raw.RunningFrames)->FindAndPlay(-1); /*0x4574ab*/
//DUPDEF         goto LABEL_64; /*0x4574ab*/
//DUPDEF       }
//DUPDEF       v14 = Type->Factory[0]; /*0x4574b0*/
//DUPDEF       if ( v14 != 40 ) /*0x4574b9*/
//DUPDEF       {
//DUPDEF         if ( v14 != 16 ) /*0x45751a*/
//DUPDEF           goto LABEL_64; /*0x45751a*/
//DUPDEF         v3->__pad_2B0[15] = 1; /*0x45751e*/
//DUPDEF         v3->__pad_1F0[12] = 1; /*0x457524*/
//DUPDEF         if ( (uint8_t)House::IsHumanPlayer(v3) ) /*0x45752a*/
//DUPDEF           byte_884B8E = 1; /*0x457533*/
//DUPDEF         if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) && v15 ) /*0x45754e*/
//DUPDEF           ((VoxClass *)&stru_818E00_raw.TiberiumSpawnType)->FindAndPlay(-1); /*0x45755a*/
//DUPDEF         if ( !(uint8_t)House::IsHumanPlayer(v3) || !v15 ) /*0x457570*/
//DUPDEF           goto LABEL_64; /*0x457570*/
//DUPDEF   LABEL_63:
//DUPDEF         VoxClass::FindAndPlay(&g_Str_EVA_BuildingInfiltrated, -1); /*0x457572*/
//DUPDEF         ((VoxClass *)&stru_818E00_raw.MinZVel[1])->FindAndPlay(-1); /*0x45758b*/
//DUPDEF   LABEL_64:
//DUPDEF         (*((void (**)(BuildingClass *, int))this->vtable1 + 73))(this, 2); /*0x457590*/
//DUPDEF         return; /*0x457597*/
//DUPDEF       }
//DUPDEF       v3->__pad_2B0[16] = 1; /*0x4574bd*/
//DUPDEF       v3->__pad_1F0[12] = 1; /*0x4574c3*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer(v3) ) /*0x4574c9*/
//DUPDEF         byte_884B8E = 1; /*0x4574d2*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) && v15 ) /*0x4574ed*/
//DUPDEF         goto LABEL_51; /*0x4574ed*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v9 = *(BuildingTypeClass ***)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x457358*/
//DUPDEF       while ( *v9 != Type ) /*0x457360*/
//DUPDEF       {
//DUPDEF         ++v8; /*0x457362*/
//DUPDEF         ++v9; /*0x457363*/
//DUPDEF         if ( v8 >= v7 ) /*0x457368*/
//DUPDEF           goto LABEL_26; /*0x457368*/
//DUPDEF       }
//DUPDEF       AIBasePlanningSide = ((unsigned int *)Type)[0]; /*0x4573c6*/
//DUPDEF       if ( AIBasePlanningSide ) /*0x4573ce*/
//DUPDEF       {
//DUPDEF         if ( AIBasePlanningSide == 1 ) /*0x4573da*/
//DUPDEF           v3->__pad_2B0[13] = 1; /*0x4573dc*/
//DUPDEF         else
//DUPDEF           v3->__pad_2B0[12] = 1; /*0x4573e4*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v3->__pad_2B0[14] = 1; /*0x4573d0*/
//DUPDEF       }
//DUPDEF       v3->__pad_1F0[12] = 1; /*0x4573ea*/
//DUPDEF       if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) && v15 ) /*0x457409*/
//DUPDEF   LABEL_51:
//DUPDEF         ((VoxClass *)&stru_818E00_raw.TiberiumSpawnType)->FindAndPlay(-1); /*0x4574ef*/
//DUPDEF     }
//DUPDEF     if ( !(uint8_t)House::IsHumanPlayer(v3) || !v15 ) /*0x457513*/
//DUPDEF       goto LABEL_64; /*0x457513*/
//DUPDEF     goto LABEL_63; /*0x457513*/
//DUPDEF   }
//DUPDEF }
// 0x458200
//DUPDEF } // G42.33c11 stub close (raw body preserved above)
//DUPDEF } // G42.33c11 stub close (raw body preserved above)
//DUPDEF } // G42.33c11 stub close (raw body preserved above)
//DUPDEF } // G42.33c11 stub close (raw body preserved above)
} // G42.33c11 stub close (raw body preserved above)
void BuildingClass::ProcessStructureAbandoned() {}
//DUPDEF   int result; // eax
//DUPDEF   int v3; // edi
//DUPDEF   House *v4; // ebx
//DUPDEF   int v5; // eax
//DUPDEF   int v6; // ecx
//DUPDEF   HouseClass *v7; // edx
//DUPDEF   House *owner; // ecx
  int64_t v9; // rax
  unsigned char v10[4]; // [esp+8h] [ebp-4h] BYREF

//DUPDEF   result = this->Type; /*0x458205*/
//DUPDEF   if ( *(unsigned int *)(result + 1588) == -1 ) /*0x458212*/
//DUPDEF   {
//DUPDEF     if ( (uint8_t)BuildingClass::IsHealthLow(this) ) /*0x45821a*/
//DUPDEF       BuildingClass::UnloadUnits(this, 0, 0); /*0x458229*/
//DUPDEF     v3 = dword_A80238; /*0x458230*/
//DUPDEF     v4 = 0; /*0x45823b*/
//DUPDEF     v5 = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x45823d*/
//DUPDEF     v6 = 0; /*0x458242*/
//DUPDEF     if ( v3 > 0 ) /*0x458246*/
//DUPDEF     {
//DUPDEF       v7 = dword_A8022C; /*0x458248*/
//DUPDEF       while ( *(unsigned int *)(*(unsigned int *)(v7->vtable0 + 52) + 188) != v5 ) /*0x458259*/
//DUPDEF       {
//DUPDEF         ++v6; /*0x45825b*/
//DUPDEF         v7 = (HouseClass *)((char *)v7 + 4); /*0x45825c*/
//DUPDEF         if ( v6 >= v3 ) /*0x458261*/
//DUPDEF           goto LABEL_10; /*0x458261*/
//DUPDEF }
//DUPDEF       v4 = (House *)*(&dword_A8022C->vtable0 + v6); /*0x45826b*/
//DUPDEF     }
//DUPDEF   LABEL_10:
//DUPDEF     if ( !(*(int (**)(BuildingClass *))(this->vtable1 + 1032))(this) ) /*0x458272*/
//DUPDEF     {
//DUPDEF       owner = (House *)this->owner; /*0x45827e*/
//DUPDEF       if ( owner != v4 ) /*0x458286*/
//DUPDEF       {
//DUPDEF         if ( (uint8_t)House::IsHumanPlayer(owner) ) /*0x458288*/
//DUPDEF         {
//DUPDEF           PlayVocClass(dword_8871E0->GeneticMutatorActivateSound, 0x2000, 1.0, 0); /*0x4582a9*/
//DUPDEF           v9 = ((int64_t (*)(BuildingClass *, unsigned char *))*(unsigned int *)(this->vtable1 + 440))(this, v10); /*0x4582b7*/
//DUPDEF           if ( (uint8_t)CreateTriggerClassIfFarEnough(15, IDA_SHIDWORD(v9), *(unsigned int *)v9) ) /*0x4582c5*/
//DUPDEF             VoxClass::FindAndPlay(&stru_81926C, -1); /*0x4582d8*/
//DUPDEF }
//DUPDEF         PlayHealthDependentBuildingAnim(this); /*0x4582df*/
//DUPDEF         (*(void (**)(BuildingClass *, House *, unsigned int))(this->vtable1 + 980))(this, v4, 0); /*0x4582eb*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     result = (*(int (**)(BuildingClass *))(this->vtable1 + 1032))(this); /*0x4582f5*/
//DUPDEF     if ( result > 0 && (House *)this->owner == v4 ) /*0x458305*/
//DUPDEF     {
//DUPDEF       PlayHealthDependentBuildingAnim(this); /*0x458309*/
//DUPDEF       return (*(int (**)(BuildingClass *, unsigned int, unsigned int))(this->vtable1 + 980))( /*0x458323*/
//DUPDEF                this,
//DUPDEF                *(unsigned int *)(*(unsigned int *)this->Audio7[4] + 540),
//DUPDEF                0);
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x458329*/
//DUPDEF }
//DUPDEF   return result; /*0x458329*/
//DUPDEF }
// 0x44eb10
//DUPDEF {
//DUPDEF   if ( this->HasBeenCaptured /*0x44eb43*/
//DUPDEF   {
//DUPDEF     if ( this->HasBeenCaptured /*0x44eb43*/
//DUPDEF       || Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 99) >= 25
//DUPDEF       || this->Type->BuildingTypeClass_field_ED8 != 7 )
//DUPDEF     {
//DUPDEF // 0x707d20
//DUPDEF       return TechnoClass::GetCrew(int a1) ; /*0x44eb55*/
//DUPDEF }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       return g_RulesClass_Instance->GuardArea; /*0x44eb4c*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     return ((unsigned int *)g_RulesClass_Instance)[0]; /*0x44eb4c*/
//DUPDEF   }
//DUPDEF     return {}; // TODO stub - retranslate via C-line pipeline

// IDA 0x451330: get crew count
// 0x451330
int BuildingClass::GetCrewCount()
{
  BuildingTypeClass *Type; // ecx
  HouseClass *owner; // edx
  int sideIndex; // eax
  int v5; // esi
  int result; // eax

  if ( this->NoCrew ) /*0x451334*/
    return 0; /*0x451334*/
  Type = this->Type; /*0x451342*/
  if ( !((unsigned int *)Type)[0] ) /*0x451348*/
    return 0; /*0x451350*/
  owner = (HouseClass *)((unsigned int *)this)[0]; /*0x451352*/
  sideIndex = owner->sideIndex; /*0x451358*/
  if ( sideIndex ) /*0x451360*/
  {
    if ( sideIndex == 1 ) /*0x451372*/
    {
      v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5372); /*0x451379*/
    }
    else
    {
      if ( sideIndex != 2 ) /*0x451384*/
        return 0; /*0x4513c9*/
      v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5376); /*0x45138b*/
    }
  }
  else
  {
    v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5368); /*0x451367*/
  }
  if ( !v5 ) /*0x451393*/
    return 0; /*0x451393*/
  if ( this->HasBeenCaptured ) /*0x451395*/
    v5 *= 2; /*0x45139f*/
  result = (*((int (**)(BuildingTypeClass *, HouseClass *, unsigned int))(*(unsigned int *)Type) + 46))( /*0x4513ad -- BuildingTypeClass vfptr read*/
             Type,
             owner,
             0)
         / v5;
  if ( result < 1 ) /*0x4513b2*/
    return 1; /*0x4513b5*/
  if ( result > 5 ) /*0x4513bf*/
    return 5; /*0x4513c2*/
  return result; /*0x4513b4*/
}
// 0x442d90
void BuildingClass::EjectCrew()
{
//DUPDEF   int v3; // edx
//DUPDEF   int v4; // eax
//DUPDEF   unsigned short *v5; // ebp
//DUPDEF   int v6; // eax
//DUPDEF   int v7; // eax
//DUPDEF   int i; // esi
//DUPDEF   unsigned short *v9; // ecx
//DUPDEF   int16_t v10; // ax
//DUPDEF   void *v11; // eax
//DUPDEF   int *v12; // eax
//DUPDEF   unsigned int *v13; // eax
//DUPDEF   int v14; // eax
//DUPDEF   int v15; // eax
//DUPDEF   int v16; // edx
//DUPDEF   char v17; // al
//DUPDEF   unsigned int *Value; // eax
//DUPDEF   int v19; // edx
//DUPDEF   unsigned char *v20; // eax
//DUPDEF   unsigned short *v21; // eax
//DUPDEF   int16_t v22; // cx
//DUPDEF   int16_t v23; // dx
//DUPDEF   void *v24; // eax
//DUPDEF   int v25; // edx
//DUPDEF   int v26; // esi
//DUPDEF   int v27; // ebp
//DUPDEF   void *v28; // eax
//DUPDEF   unsigned int *v29; // eax
//DUPDEF   int *v30; // eax
//DUPDEF   int v31; // ecx
//DUPDEF   int v32; // edx
//DUPDEF   int v33; // eax
//DUPDEF   int v34; // eax
//DUPDEF   int v35; // edx
//DUPDEF   int *v36; // eax
//DUPDEF   int v37; // kr08_4
//DUPDEF   int v38; // eax
//DUPDEF   int *v39; // eax
//DUPDEF   int v40; // kr0C_4
//DUPDEF   int v41; // eax
//DUPDEF   int v45; // [esp+1Ch] [ebp-74h]
//DUPDEF   int v46; // [esp+20h] [ebp-70h]
//DUPDEF   int v47; // [esp+24h] [ebp-6Ch]
//DUPDEF   int v49; // [esp+2Ch] [ebp-64h] BYREF
//DUPDEF   int v50; // [esp+30h] [ebp-60h] BYREF
//DUPDEF   int v51; // [esp+34h] [ebp-5Ch]
//DUPDEF   int v52; // [esp+38h] [ebp-58h]
//DUPDEF   int v53; // [esp+3Ch] [ebp-54h] BYREF
//DUPDEF   int v54; // [esp+40h] [ebp-50h]
//DUPDEF   int v55; // [esp+44h] [ebp-4Ch]
//DUPDEF   int v56[3]; // [esp+48h] [ebp-48h] BYREF
//DUPDEF   int v57[3]; // [esp+54h] [ebp-3Ch] BYREF
//DUPDEF   int v58[3]; // [esp+60h] [ebp-30h] BYREF
//DUPDEF   int v59[3]; // [esp+6Ch] [ebp-24h] BYREF
//DUPDEF   int v60[3]; // [esp+78h] [ebp-18h] BYREF
//DUPDEF   int v61[3]; // [esp+84h] [ebp-Ch] BYREF

//DUPDEF   v3 = *(unsigned int *)this->GetCellCoords_Alt(&v49); /*0x442da8*/
//DUPDEF   v4 = *this; /*0x442daa*/
//DUPDEF   v3 = v3; /*0x442db1*/
//DUPDEF   v5 = (unsigned short *)this->GetOrCreateResHandle(0); /*0x442dbb*/
//DUPDEF   v6 = *(&this->hasParachute6); /*0x442dbd*/
//DUPDEF   v45 = 2; /*0x442dc5*/
//DUPDEF   if ( v6 ) /*0x442dcd*/
//DUPDEF     v45 = 1; /*0x442dcf*/
//DUPDEF   if ( this->HasBeenCaptured ) /*0x442dd7*/
//DUPDEF     v45 += 6; /*0x442ddf*/
//DUPDEF   v46 = this->GetCrewCount(); /*0x442dee*/
//DUPDEF   v7 = *(&this->needsRedraw8); /*0x442df2*/
//DUPDEF   if ( v7->UnitAbsorb || v7->InfantryAbsorb )
//DUPDEF   {
//DUPDEF     v7 = *(&this->nextArrayIndex9); /*0x442e0c*/
//DUPDEF     if ( v7 > 0 )
//DUPDEF     {
//DUPDEF       v7 = LinkedList::Pop(&this->nextArrayIndex9); /*0x442e20*/
//DUPDEF       for ( i = v7; v7; i = v7 )
//DUPDEF       {
//DUPDEF         v5 = v5; /*0x442e34*/
//DUPDEF         v5 += 2; /*0x442e38*/
//DUPDEF         v10 = *v5 + v3; /*0x442e3b*/
//DUPDEF         IDA_LOWORD(v5) = IDA_HIWORD(v3) + v5[1]; /*0x442e42*/
//DUPDEF         v52 = 0; /*0x442e47*/
//DUPDEF         v50 = (v10 << 8) + 128; /*0x442e62*/
//DUPDEF         v51 = ((int16_t)v5 << 8) + 164; /*0x442e66*/
//DUPDEF         if ( (*(int (**)(int))(i->ChargerBarrels_0x12)(i) == 1 ) /*0x442e74*/
//DUPDEF         {
//DUPDEF           v11 = RawCoord::To_Cell(&MapClass_Instance, &v50); /*0x442e80*/
//DUPDEF           v12 = (int *)(*(int (**)(void *, int *))(*(unsigned int *)v11 + 72))(v11, v58); /*0x442e8e*/
//DUPDEF         }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           v13 = RawCoord::To_Cell(&MapClass_Instance, &v50); /*0x442ebe*/
//DUPDEF           v12 = ObjectPlacement::CalcPosition(v13, v57, &v50, 0, 0, 0); /*0x442ec5*/
//DUPDEF         }
//DUPDEF         v50 = *v12; /*0x442e93*/
//DUPDEF         v51 = v12[1]; /*0x442e9a*/
//DUPDEF         v52 = v12[2]; /*0x442ea1*/
//DUPDEF         ++g_IKnowWhatImDoing; /*0x442eeb*/
//DUPDEF         i->q08C = this->onBridge; /*0x442ef7*/
//DUPDEF         v53 = *(&this->vtable49); /*0x442eff*/
//DUPDEF         v14 = *this; /*0x442f03*/
//DUPDEF         v54 = *(&this->uniqueId0); /*0x442f08*/
//DUPDEF         v55 = *(&this->uniqueId1); /*0x442f11*/
//DUPDEF         v15 = this->GetCellCoords(); /*0x442f15*/
//DUPDEF         v16 = *(unsigned int *)((*(int (**)(int, int *))(*(unsigned int *)v15 + 72))(v15, v56) + 8); /*0x442f27*/
//DUPDEF         v17 = this->NoCrew; /*0x442f2a*/
//DUPDEF         v55 = v16; /*0x442f32*/
//DUPDEF         if ( v17
//DUPDEF           || (Value = ProgressTimer::GetValue((unsigned short *)&this->u32_710, &v49),
//DUPDEF               !(*(uint8_t (**)(int, int *, unsigned int))(i->q0D8)(
//DUPDEF                  i,
//DUPDEF                  &v53,
//DUPDEF                  (uint8_t)((unsigned int)((*Value >> 7) + 1) >> 1))) )
//DUPDEF         {
//DUPDEF           if ( a2 )
//DUPDEF             v20 = (a2[20] & 1) != 0 ? a2 : 0;
//DUPDEF           else
//DUPDEF             v20 = 0; /*0x442fd0*/
//DUPDEF           (*(void (**)(int, unsigned char *))(i->q0E0)(i, v20); /*0x442fe5*/
//DUPDEF           (*(void (**)(int))(i->u32_F8)(i); /*0x442fef*/
//DUPDEF         }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           if ( !i->ImpactLandSound ) /*0x442f6d*/
//DUPDEF           {
//DUPDEF             ++i->q21C->q0BD; /*0x442f82*/
//DUPDEF             i->ImpactLandSound = 1; /*0x442f88*/
//DUPDEF           }
//DUPDEF           v19 = *(unsigned int *)i; /*0x442f8f*/
//DUPDEF           i->u8_439 = 0; /*0x442f9b*/
//DUPDEF           (*(void (**)(int, int *, int, unsigned int))(v19 + 372))(i, &g_BuildingClassPool, 1, 0); /*0x442fa1*/
//DUPDEF           if ( !(uint8_t)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x442fad*/
//DUPDEF             (*(void (**)(int, int, unsigned int))(i->q1E8)(i, 15, 0); /*0x442fbd*/
//DUPDEF         }
//DUPDEF         --g_IKnowWhatImDoing; /*0x442ffc*/
//DUPDEF         v7 = LinkedList::Pop(&this->nextArrayIndex9); /*0x443008*/
//DUPDEF-G42.33c5-surplus-close       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( v46 ) /*0x44301b*/
//DUPDEF   {
//DUPDEF     while ( *v5 != 0x7FFF || v5[1] != 0x7FFF ) /*0x44302f*/
//DUPDEF     {
//DUPDEF       v5 = v5; /*0x44303a*/
//DUPDEF       v5 += 2; /*0x44303c*/
//DUPDEF       v22 = *v5 + v3; /*0x44303f*/
//DUPDEF       v23 = IDA_HIWORD(v3) + v5[1]; /*0x443046*/
//DUPDEF       v5 = v5; /*0x44304b*/
//DUPDEF       IDA_LOWORD(v47) = v22; /*0x44304f*/
//DUPDEF       IDA_HIWORD(v47) = v23; /*0x443058*/
//DUPDEF       v47 = v47; /*0x443067*/
//DUPDEF       v24 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v47); /*0x44306b*/
//DUPDEF       v25 = *(&this->attachedTag5); /*0x443070*/
//DUPDEF       v49 = (int)v24; /*0x443076*/
//DUPDEF       if ( !*(unsigned char *)(v25 + 502) && v46 > 0 && Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, v45) == 1 ) /*0x4430aa*/
//DUPDEF       {
//DUPDEF         v26 = 0; /*0x4430b4*/
//DUPDEF         v27 = this->GetCrew(); /*0x4430bc*/
//DUPDEF         if ( v27 ) /*0x4430c0*/
//DUPDEF         {
//DUPDEF           v28 = RA2_OPNEW(0x6F0u); /*0x4430c7*/
//DUPDEF           if ( v28 ) /*0x4430d1*/
//DUPDEF             v26 = InfantryClass::Construct((int)v28, v27, (IUnknown *)*(&this->attachedTag5)); /*0x4430e2*/
//DUPDEF           else
//DUPDEF             v26 = 0; /*0x4430e6*/
//DUPDEF         }
//DUPDEF         Debug::Log(); /*0x443101*/
//DUPDEF         if ( v26 ) /*0x44310b*/
//DUPDEF         {
//DUPDEF           if ( this->BuildingClass_field_bool_6E9 && v26->q6C0->q3278 ) /*0x44311f*/
//DUPDEF             *(unsigned char *)(v26 + 1753) = 1; /*0x443127*/
//DUPDEF           ++g_IKnowWhatImDoing; /*0x443141*/
//DUPDEF           v52 = 0; /*0x44315a*/
//DUPDEF           v50 = ((int16_t)v47 << 8) + 128; /*0x44315e*/
//DUPDEF           v51 = (IDA_SHIWORD(v47) << 8) + 164; /*0x443166*/
//DUPDEF           v29 = RawCoord::To_Cell(&MapClass_Instance, &v50); /*0x44317b*/
//DUPDEF           v30 = ObjectPlacement::CalcPosition(v29, v59, &v50, 0, 0, 0); /*0x443182*/
//DUPDEF           v50 = *v30; /*0x443191*/
//DUPDEF           v31 = v30[1]; /*0x443197*/
//DUPDEF           v51 = v31; /*0x44319a*/
//DUPDEF           v32 = v30[2]; /*0x44319e*/
//DUPDEF           v52 = v32; /*0x4431a1*/
//DUPDEF           if ( v50 == g_BuildingClassPool && v31 == dword_89C84C && v32 == dword_89C850 /*0x4431c5*/
//DUPDEF             || !(*(uint8_t (**)(int, int *, unsigned int))(v26->q0D8)(v26, &v50, 0) )
//DUPDEF           {
//DUPDEF             (*(void (**)(int, int))(v26->needsSave)(v26, 1); /*0x443285*/
//DUPDEF           }
//DUPDEF           else
//DUPDEF           {
//DUPDEF             Debug::Log(); /*0x4431d8*/
//DUPDEF             v33 = v26->q6C0->u32_A0; /*0x4431eb*/
//DUPDEF             --v46; /*0x4431f1*/
//DUPDEF             v34 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 5, v33); /*0x443203*/
//DUPDEF             v35 = *(unsigned int *)v26; /*0x443208*/
//DUPDEF             v26->q06C = v34; /*0x443214*/
//DUPDEF             (*(void (**)(int, int *, int, unsigned int))(v35 + 372))(v26, &g_BuildingClassPool, 1, 0); /*0x443217*/
//DUPDEF             if ( !a2 || Object::IsAlliedWithObjectSimpleHouse((unsigned int *)*(&this->attachedTag5), a2) ) /*0x44322f*/
//DUPDEF             {
//DUPDEF               if ( (uint8_t)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x443258*/
//DUPDEF                 (*(void (**)(int, int, unsigned int))(v26->q1E8)(v26, 2, 0); /*0x443268*/
//DUPDEF               else
//DUPDEF                 (*(void (**)(int, int, unsigned int))(v26->q1E8)(v26, 15, 0); /*0x443277*/
//DUPDEF             }
//DUPDEF             else
//DUPDEF             {
//DUPDEF               (*(void (**)(int, int, unsigned int))(v26->q1E8)(v26, 1, 0); /*0x44323f*/
//DUPDEF               (*(void (**)(int, unsigned char *))(v26->q3C8)(v26, a2); /*0x44324a*/
//DUPDEF             }
//DUPDEF           }
//DUPDEF           --g_IKnowWhatImDoing; /*0x443288*/
//DUPDEF         }
//DUPDEF         v5 = v5; /*0x44328e*/
//DUPDEF       }
//DUPDEF       IDA_LOBYTE(v7) = Cell::IsBuildable(v49, 1, 1, 1, -1, 0, -1, 1); /*0x4432a3*/
//DUPDEF       if ( (unsigned char)v7 ) /*0x4432aa*/
//DUPDEF       {
//DUPDEF         if ( Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 99) >= 50 ) /*0x4432c7*/
//DUPDEF         {
//DUPDEF           v57[1] = (IDA_SHIWORD(v47) << 8) + 128; /*0x44337d*/
//DUPDEF           v57[0] = ((int16_t)v47 << 8) + 128; /*0x443392*/
//DUPDEF           v57[2] = 0; /*0x443396*/
//DUPDEF           v39 = RandomCoordScatter(v61, v57, 128, 0); /*0x44339a*/
//DUPDEF           v40 = *v39; /*0x4433af*/
//DUPDEF           v41 = v39[1]; /*0x4433b1*/
//DUPDEF           v58[2] = 0; /*0x4433bb*/
//DUPDEF           v58[0] = ((int16_t)(v40 / 256) << 8) + 128; /*0x4433dd*/
//DUPDEF           v58[1] = ((int16_t)(v41 / 256) << 8) + 128; /*0x4433eb*/
//DUPDEF           IDA_LOBYTE(v7) = TimedCreateUnitAtCoords(v58, 100, 100, 0); /*0x4433ef*/
//DUPDEF         }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           v53 = ((int16_t)v47 << 8) + 128; /*0x4432e4*/
//DUPDEF           v54 = (IDA_SHIWORD(v47) << 8) + 128; /*0x4432fa*/
//DUPDEF           v55 = 0; /*0x4432fe*/
//DUPDEF           v36 = RandomCoordScatter(v60, &v53, 128, 0); /*0x443302*/
//DUPDEF           v37 = *v36; /*0x443317*/
//DUPDEF           v38 = v36[1]; /*0x443319*/
//DUPDEF           v56[2] = 0; /*0x443323*/
//DUPDEF           v56[0] = ((int16_t)(v37 / 256) << 8) + 128; /*0x443347*/
//DUPDEF           v56[1] = ((int16_t)(v38 / 256) << 8) + 128; /*0x44334b*/
//DUPDEF           IDA_LOBYTE(v7) = StandardCreateUnitAtCoords(v56, 100, 100, 0); /*0x443358*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF-G42.33c5-surplus-close   }
//DUPDEF   return v7; /*0x4433f9*/
//DUPDEF }
// 0x454db0
//DUPDEF } // G42.33c11 stub close (raw body preserved above)
//DUPDEF } // G42.33c11 stub close (raw body preserved above)
//DUPDEF } // G42.33c11 stub close (raw body preserved above)
//DUPDEF } // G42.33c11 stub close (raw body preserved above)
} // G42.33c11 stub close (raw body preserved above)
void BuildingClass::CleanupOccupation() {}
//DUPDEF   BuildingClass *v1; // esi
//DUPDEF   int result; // eax
//DUPDEF   unsigned int *v3; // eax
//DUPDEF   int cloakState; // eax
//DUPDEF   char Translucency; // al
//DUPDEF   char v6; // al
//DUPDEF   char v7; // bl
//DUPDEF   int *Anims; // ecx
//DUPDEF   int v9; // edi
//DUPDEF   ParticleSystemClass *ambientParticles; // ecx
//DUPDEF   char v11; // al
//DUPDEF   char v12; // al
//DUPDEF   char v13; // bl
//DUPDEF   int *v14; // ecx
//DUPDEF   int v15; // edi
//DUPDEF   ParticleSystemClass *v16; // eax
//DUPDEF   int *NaturalParticleSystemLocation; // eax
//DUPDEF   int v18; // ebp
//DUPDEF   int v19; // ebx
//DUPDEF   int *v20; // edi
//DUPDEF   int v21; // edx
//DUPDEF   int v22; // esi
//DUPDEF   int v23; // edx
//DUPDEF   int v24; // eax
//DUPDEF   CellClass *v25; // eax
//DUPDEF   int v26; // eax
//DUPDEF   int Draw_field_00; // eax
//DUPDEF   int v30; // ebp
//DUPDEF   int v31; // edi
//DUPDEF   int *v32; // eax
//DUPDEF   int v33; // ebp
//DUPDEF   int k; // ebx
//DUPDEF   bool v35; // zf
//DUPDEF   BuildingClass *v36; // edi
//DUPDEF   unsigned int *m; // esi
//DUPDEF   int v38; // eax
//DUPDEF   unsigned int *v39; // eax
//DUPDEF   unsigned int *v40; // eax
//DUPDEF   int *v41; // eax
//DUPDEF   int *v42; // eax
//DUPDEF   int v43; // ebp
//DUPDEF   int v44; // ebx
//DUPDEF   BuildingClass *v45; // edi
//DUPDEF   unsigned int *i; // esi
//DUPDEF   int v47; // eax
//DUPDEF   unsigned int *v48; // eax
//DUPDEF   int *v49; // eax
//DUPDEF   int v50; // kr1C_4
//DUPDEF   int v51; // eax
//DUPDEF   int j; // edi
//DUPDEF   BuildingClass *v53; // esi
//DUPDEF   unsigned int *v54; // eax
//DUPDEF   int v55; // edx
//DUPDEF   BuildingTypeClass *Type; // eax
//DUPDEF   char CloakRadius; // dl
//DUPDEF   char v58; // al
//DUPDEF   int v59; // [esp+1Ch] [ebp-54h]
//DUPDEF   char v62[4]; // [esp+34h] [ebp-3Ch] BYREF
//DUPDEF   unsigned char *v63; // [esp+38h] [ebp-38h]
//DUPDEF   unsigned char *v64; // [esp+3Ch] [ebp-34h]
//DUPDEF   int v65[3]; // [esp+40h] [ebp-30h] BYREF
//DUPDEF   int v66; // [esp+4Ch] [ebp-24h]
//DUPDEF   unsigned int v67[2]; // [esp+54h] [ebp-1Ch] BYREF
//DUPDEF   int v69[2]; // [esp+60h] [ebp-10h] BYREF
//DUPDEF   int v70; // [esp+68h] [ebp-8h]

//DUPDEF   result = (int)this->Type; /*0x454dbb*/
//DUPDEF   if ( result ) /*0x454dc7*/
//DUPDEF   {
//DUPDEF     v3 = (unsigned int *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 18))(this, v69); /*0x454dd6*/
//DUPDEF     IDA_LOWORD(v66) = *v3 / 256; /*0x454de9*/
//DUPDEF     IDA_HIWORD(v66) = v3[1] / 256; /*0x454dfd*/
//DUPDEF     cloakState = ((unsigned int *)this)[0]; /*0x454e02*/
//DUPDEF     if ( cloakState == 1 ) /*0x454e0b*/
//DUPDEF     {
//DUPDEF       Translucency = this->Translucency; /*0x454e11*/
//DUPDEF       if ( Translucency < 15 ) /*0x454e19*/
//DUPDEF       {
//DUPDEF         v6 = Translucency + 1; /*0x454e1f*/
//DUPDEF         this->Translucency = v6; /*0x454e23*/
//DUPDEF         if ( v6 == 1 || v6 == 6 || v6 == 11 ) /*0x454e31*/
//DUPDEF           ((unsigned int *)this)[0] = 1; /*0x454e33*/
//DUPDEF         v7 = v6; /*0x454e3a*/
//DUPDEF         if ( v6 == 15 && (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 ) /*0x454e4e*/
//DUPDEF           v7 = 16; /*0x454e50*/
//DUPDEF         Anims = this->Anims; /*0x454e55*/
//DUPDEF         v9 = 21; /*0x454e5b*/
//DUPDEF         do /*0x454e70*/
//DUPDEF         {
//DUPDEF           if ( *Anims ) /*0x454e60*/
//DUPDEF             *(unsigned char *)(*Anims + 376) = v7; /*0x454e66*/
//DUPDEF           ++Anims; /*0x454e6c*/
//DUPDEF           --v9; /*0x454e6f*/
//DUPDEF }
//DUPDEF         while ( v9 ); /*0x454e70*/
//DUPDEF         if ( this->Translucency == 15 ) /*0x454e79*/
//DUPDEF         {
//DUPDEF           ambientParticles = ((unsigned int *)this)[0]; /*0x454e7f*/
//DUPDEF           ((unsigned int *)this)[0] = 2; /*0x454e85*/
//DUPDEF           if ( ambientParticles ) /*0x454e91*/
//DUPDEF           {
//DUPDEF             (*((void (**)(ParticleSystemClass *, int))ambientParticles->vtable1 + 8))( /*0x454e9b*/
//DUPDEF               ambientParticles,
//DUPDEF               1);
//DUPDEF             ((unsigned int *)this)[0] = 0; /*0x454e9e*/
//DUPDEF }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else if ( cloakState == 3 ) /*0x454eac*/
//DUPDEF     {
//DUPDEF       v11 = this->Translucency; /*0x454eb2*/
//DUPDEF       if ( v11 >= 0 ) /*0x454eba*/
//DUPDEF       {
//DUPDEF         if ( v11 > 0 ) /*0x454ec0*/
//DUPDEF           this->Translucency = v11 - 1; /*0x454ec4*/
//DUPDEF         v12 = this->Translucency; /*0x454eca*/
//DUPDEF         if ( !v12 || v12 == 5 || v12 == 10 ) /*0x454eda*/
//DUPDEF           ((unsigned int *)this)[0] = 1; /*0x454edc*/
//DUPDEF         v13 = v12; /*0x454ee3*/
//DUPDEF         if ( v12 == 15 && (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 ) /*0x454ef7*/
//DUPDEF           v13 = 16; /*0x454ef9*/
//DUPDEF         v14 = this->Anims; /*0x454efe*/
//DUPDEF         v15 = 21; /*0x454f04*/
//DUPDEF         do /*0x454f19*/
//DUPDEF         {
//DUPDEF           if ( *v14 ) /*0x454f09*/
//DUPDEF             *(unsigned char *)(*v14 + 376) = v13; /*0x454f0f*/
//DUPDEF           ++v14; /*0x454f15*/
//DUPDEF           --v15; /*0x454f18*/
//DUPDEF         }
//DUPDEF         while ( v15 ); /*0x454f19*/
//DUPDEF         if ( !this->Translucency ) /*0x454f1b*/
//DUPDEF         {
//DUPDEF           v16 = ((unsigned int *)this)[0]; /*0x454f29*/
//DUPDEF           ((unsigned int *)this)[0] = 0; /*0x454f2f*/
//DUPDEF           if ( !v16 ) /*0x454f37*/
//DUPDEF           {
//DUPDEF             NaturalParticleSystemLocation = this->((unsigned int *)Type)[0]; /*0x454f49*/
//DUPDEF             if ( *NaturalParticleSystemLocation != g_BuildingClassPool /*0x454f6c*/
//DUPDEF               || this->((unsigned int *)Type)[1] != dword_89C84C
//DUPDEF               || this->((unsigned int *)Type)[2] != dword_89C850 )
//DUPDEF             {
//DUPDEF               v18 = *NaturalParticleSystemLocation; /*0x454f75*/
//DUPDEF               v19 = this->((unsigned int *)Type)[1]; /*0x454f77*/
//DUPDEF               v70 = this->((unsigned int *)Type)[2]; /*0x454f7f*/
//DUPDEF               v20 = (int *)RA2_OPNEW(0x100u); /*0x454f88*/
//DUPDEF               if ( v20 ) /*0x454f8f*/
//DUPDEF               {
//DUPDEF                 v21 = ((unsigned int *)this)[1]; /*0x454fa9*/
//DUPDEF                 v65[0] = v18 + ((unsigned int *)this)[0]; /*0x454fac*/
//DUPDEF                 v22 = ((unsigned int *)this)[2]; /*0x454fb4*/
//DUPDEF                 v67[0] = ((unsigned int *)this)[0]; /*0x454fbb*/
//DUPDEF                 v65[1] = v19 + v21; /*0x454fbf*/
//DUPDEF                 v23 = ((unsigned int *)this)[1]; /*0x454fc3*/
//DUPDEF                 v24 = ((unsigned int *)this)[2]; /*0x454fc6*/
//DUPDEF                 v65[2] = v70 + v22; /*0x454fd5*/
//DUPDEF                 v67[1] = v23; /*0x454fd9*/
//DUPDEF                 v24 = v24; /*0x454fdd*/
//DUPDEF                 v25 = RawCoord::To_Cell((void *)&stru_87F5F0_raw.__pad_58[416], v67); /*0x454fe1*/
//DUPDEF                 v26 = ParticleSystemClass::Constructor(v20, this->((unsigned int *)Type)[0], v65, (int)v25, 0, &g_BuildingClassPool, 0); /*0x454fff*/
//DUPDEF }
//DUPDEF               else
//DUPDEF               {
//DUPDEF                 v26 = 0; /*0x45500a*/
//DUPDEF }
//DUPDEF               ((unsigned int *)this)[0] = (ParticleSystemClass *)v26; /*0x45500c*/
//DUPDEF             }
//DUPDEF           }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( ((unsigned int *)this)[0] == 2 && (*((uint8_t (**)(BuildingClass *))this->vtable1 + 169))(this) ) /*0x45501f*/
//DUPDEF       (*((void (**)(BuildingClass *, unsigned int))this->vtable1 + 279))(this, 0); /*0x45502f*/
//DUPDEF     result = ((unsigned int *)this)[0]; /*0x455035*/
//DUPDEF     if ( !result ) /*0x45503d*/
//DUPDEF     {
//DUPDEF       result = (*((int (**)(BuildingClass *))this->vtable1 + 168))(this); /*0x455043*/
//DUPDEF       if ( (unsigned char)result ) /*0x45504b*/
//DUPDEF         result = (*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 280))(this, 0); /*0x455053*/
//DUPDEF     }
//DUPDEF     IDA_LOBYTE(result) = this->HasCloakingData; /*0x455059*/
//DUPDEF     if ( (unsigned char)result ) /*0x455061*/
//DUPDEF     {
//DUPDEF       result = (int)this->Type; /*0x455067*/
//DUPDEF       if ( result->CloakGenerator ) /*0x45506d*/
//DUPDEF       {
//DUPDEF         dword_89DDC0 = dword_89DDC0; /*0x45507f*/
//DUPDEF         Draw_field_00 = dword_89DDC0->Draw_field_00; /*0x45508b*/
//DUPDEF         *(unsigned int *)v62 = ((unsigned int *)this)[0]->relatedTagsCount; /*0x455092*/
//DUPDEF         v30 = (*(int (**)(Draw *))(Draw_field_00 + 124))(dword_89DDC0); /*0x455099*/
//DUPDEF         result = v30 - (v30 >> 31); /*0x45509c*/
//DUPDEF         v30 = v30; /*0x45509e*/
//DUPDEF         v31 = v30 / 2; /*0x4550aa*/
//DUPDEF         IDA_LOBYTE(result) = this->CloakRadius; /*0x4550ae*/
//DUPDEF         if ( this->HasCloakingData <= 0 ) /*0x4550b4*/
//DUPDEF         {
//DUPDEF           if ( (unsigned char)result ) /*0x455275*/
//DUPDEF           {
//DUPDEF             this->CloakRadius = result - 1; /*0x45528b*/
//DUPDEF             (*(void (**)(Draw *))(dword_89DDC0->Draw_field_00 + 24))(dword_89DDC0); /*0x455295*/
//DUPDEF             v41 = (int *)(*(int (**)(Draw *, int *, unsigned int))(dword_89DDC0->Draw_field_00 + 120))(dword_89DDC0, &v24, 0); /*0x4552a3*/
//DUPDEF             Draw::Ellipse(dword_89DDC0, v31, v31, this->Type->CloakRadiusInCells, *v41, v41[1], v41[2], v41[3], 2); /*0x4552d3*/
//DUPDEF             if ( this->CloakRadius ) /*0x4552d8*/
//DUPDEF             {
//DUPDEF               v42 = (int *)(*(int (**)(Draw *, int *))(dword_89DDC0->Draw_field_00 + 120))(dword_89DDC0, v69); /*0x4552ed*/
//DUPDEF               Draw::Ellipse(dword_89DDC0, v31, v31, this->CloakRadius, *v42, v42[1], v42[2], v42[3], 1); /*0x455317*/
//DUPDEF             }
//DUPDEF             v64 = (unsigned char *)(*(int (**)(Draw *, unsigned int, unsigned int))(dword_89DDC0->Draw_field_00 + 92))(dword_89DDC0, 0, 0); /*0x45532d*/
//DUPDEF             result = v66 - v31; /*0x455337*/
//DUPDEF             IDA_HIWORD(v67[0]) = IDA_HIWORD(v66) - v31; /*0x455339*/
//DUPDEF             IDA_LOWORD(v67[0]) = v66 - v31; /*0x455340*/
//DUPDEF             v63 = 0; /*0x455345*/
//DUPDEF             if ( v30 > 0 ) /*0x45534d*/
//DUPDEF             {
//DUPDEF               v43 = *(unsigned int *)v62; /*0x455353*/
//DUPDEF               while ( 2 ) /*0x455357*/
//DUPDEF               {
//DUPDEF                 v44 = 0; /*0x455357*/
//DUPDEF                 do /*0x45544d*/
//DUPDEF                 {
//DUPDEF                   v35 = *v64++ == 0; /*0x455360*/
//DUPDEF                   if ( v35 ) /*0x455366*/
//DUPDEF                   {
//DUPDEF                     IDA_LOWORD(v65[0]) = v44 + IDA_LOWORD(v67[0]); /*0x45537d*/
//DUPDEF                     IDA_HIWORD(v65[0]) = (unsigned short)v63 + IDA_HIWORD(v67[0]); /*0x455382*/
//DUPDEF                     *(unsigned int *)v62 = v65[0]; /*0x45538f*/
//DUPDEF                     v45 = (BuildingClass *)CellCoord::To_CellObj( /*0x45539e*/
//DUPDEF                                              (CellCoord *)&stru_87F5F0_raw.__pad_58[416],
//DUPDEF                                              (int16_t *)v62);
//DUPDEF                     if ( (uint8_t)Cell::HasOccupierBit((Cell *)v45, v43) ) /*0x4553a3*/
//DUPDEF                     {
//DUPDEF                       BuildingClass::updateOccupiedState(v45, v43); /*0x4553b3*/
//DUPDEF                       for ( i = (unsigned int *)((unsigned int *)v45)[1]; i; i = (unsigned int *)i[12] ) /*0x4553c0*/
//DUPDEF                       {
//DUPDEF                         v47 = (*(int (**)(unsigned int *))(*i + 44))(i); /*0x4553c6*/
//DUPDEF                         if ( v47 == 1 || v47 == 15 || v47 == 2 ) /*0x4553d6*/
//DUPDEF                           (*(void (**)(unsigned int *))(*i + 1056))(i); /*0x4553dc*/
//DUPDEF }
//DUPDEF                       v48 = Cell::IsBridge((Cell *)v45); /*0x4553eb*/
//DUPDEF                       if ( v48 ) /*0x4553f2*/
//DUPDEF                       {
//DUPDEF                         if ( *(unsigned int *)(v48[135] + 48) == v43 ) /*0x4553fd*/
//DUPDEF                         {
//DUPDEF                           v49 = (int *)(*(int (**)(unsigned int *, int *))(*v48 + 72))(v48, v69); /*0x455408*/
//DUPDEF                           v50 = *v49; /*0x455418*/
//DUPDEF                           v51 = v49[1] / 256; /*0x455429*/
//DUPDEF                           if ( (uint16_t)(v50 / 256) == *(unsigned short *)v62 /*0x455440*/
//DUPDEF                             && (unsigned short)v51 == *(unsigned short *)&v62[2]
//DUPDEF                             && !(unsigned char)v64 )
//DUPDEF                           {
//DUPDEF                             ++this->CloakRadius; /*0x4555c0*/
//DUPDEF                             return (int)this; /*0x4555b0*/
//DUPDEF }
//DUPDEF                         }
//DUPDEF                       }
//DUPDEF                     }
//DUPDEF                   }
//DUPDEF                   ++v44; /*0x45544a*/
//DUPDEF                 }
//DUPDEF                 while ( v44 < v30 ); /*0x45544d*/
//DUPDEF                 result = (int)++v63; /*0x45545b*/
//DUPDEF                 if ( (int)v63 < v30 ) /*0x455462*/
//DUPDEF                   continue; /*0x455462*/
//DUPDEF                 break;
//DUPDEF               }
//DUPDEF             }
//DUPDEF             IDA_LOBYTE(result) = this->CloakRadius; /*0x45546c*/
//DUPDEF             if ( !(unsigned char)result ) /*0x455474*/
//DUPDEF             {
//DUPDEF               result = stru_A8EB00_raw.ObjectTypeClass[20]; /*0x45547a*/
//DUPDEF               for ( j = 0; j < stru_A8EB00_raw.ObjectTypeClass[20]; ++j ) /*0x455483*/
//DUPDEF               {
//DUPDEF                 v53 = *(BuildingClass **)(stru_A8EB00_raw.ObjectTypeClass[17] + 4 * j); /*0x45548f*/
//DUPDEF                 if ( ((unsigned int *)v53)[0] ) /*0x455492*/
//DUPDEF                 {
//DUPDEF                   if ( v53 != this ) /*0x4554a2*/
//DUPDEF                   {
//DUPDEF                     if ( v53->Type->CloakGenerator ) /*0x4554ae*/
//DUPDEF                     {
//DUPDEF                       if ( (*((uint8_t (**)(unsigned int))v53->vtable1 + 212))(*(unsigned int *)(stru_A8EB00_raw.ObjectTypeClass[17] + 4 * j)) ) /*0x4554c0*/
//DUPDEF                       {
//DUPDEF                         if ( !v53->HasCloakingData ) /*0x4554ce*/
//DUPDEF                         {
//DUPDEF                           v54 = (unsigned int *)(*((int (**)(BuildingClass *, int *))v53->vtable1 + 18))( /*0x4554e5*/
//DUPDEF                                             v53,
//DUPDEF                                             v69);
//DUPDEF                           IDA_LOWORD(v67[0]) = *v54 / 256; /*0x4554f8*/
//DUPDEF                           IDA_HIWORD(v67[0]) = v54[1] / 256; /*0x455510*/
//DUPDEF                           v55 = this->Type->CloakRadiusInCells + 2; /*0x45553a*/
//DUPDEF                           if ( (int16_t)(IDA_HIWORD(v66) - IDA_HIWORD(v67[0])) * (int16_t)(IDA_HIWORD(v66) - IDA_HIWORD(v67[0])) /*0x455551*/
//DUPDEF                              + (int16_t)(v66 - IDA_LOWORD(v67[0])) * (int16_t)(v66 - IDA_LOWORD(v67[0])) < 4 * v55 * v55 )
//DUPDEF                           {
//DUPDEF                             Type = v53->Type; /*0x455553*/
//DUPDEF                             if ( Type->CloakGenerator ) /*0x455559*/
//DUPDEF                             {
//DUPDEF                               CloakRadius = v53->CloakRadius; /*0x455563*/
//DUPDEF                               v53->HasCloakingData = 1; /*0x455569*/
//DUPDEF                               if ( CloakRadius == Type->CloakRadiusInCells ) /*0x455576*/
//DUPDEF                                 v53->CloakRadius = 0; /*0x455578*/
//DUPDEF                               ((unsigned int *)v53)[0] = 1; /*0x45557f*/
//DUPDEF }
//DUPDEF                             v58 = v53->CloakRadius; /*0x455586*/
//DUPDEF                             if ( v58 ) /*0x45558e*/
//DUPDEF                               v53->CloakRadius = v58 - 1; /*0x455592*/
//DUPDEF }
//DUPDEF                         }
//DUPDEF                       }
//DUPDEF                     }
//DUPDEF                   }
//DUPDEF                 }
//DUPDEF                 result = stru_A8EB00_raw.ObjectTypeClass[20]; /*0x455598*/
//DUPDEF               }
//DUPDEF             }
//DUPDEF           }
//DUPDEF           else
//DUPDEF           {
//DUPDEF             this->HasCloakingData = 0; /*0x455277*/
//DUPDEF           }
//DUPDEF         }
//DUPDEF         else if ( (unsigned char)result == this->Type->CloakRadiusInCells ) /*0x4550c6*/
//DUPDEF         {
//DUPDEF           this->HasCloakingData = 0; /*0x4550c8*/
//DUPDEF         }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           this->CloakRadius = result + 1; /*0x4550dd*/
//DUPDEF           (*(void (**)(Draw *, unsigned int))(dword_89DDC0->Draw_field_00 + 24))(dword_89DDC0, 0); /*0x4550e7*/
//DUPDEF           v32 = (int *)(*(int (**)(Draw *, int *, int))(dword_89DDC0->Draw_field_00 + 120))(dword_89DDC0, v69, 1); /*0x4550f5*/
//DUPDEF           Draw::Ellipse(dword_89DDC0, v31, v31, this->CloakRadius, *v32, v32[1], v32[2], v32[3], v59); /*0x45511f*/
//DUPDEF           v63 = (unsigned char *)(*(int (**)(Draw *, unsigned int))(dword_89DDC0->Draw_field_00 + 92))(dword_89DDC0, 0); /*0x455135*/
//DUPDEF           v33 = 0; /*0x455141*/
//DUPDEF           IDA_LOWORD(v65[0]) = v66 - v31; /*0x455143*/
//DUPDEF           result = v30; /*0x455148*/
//DUPDEF           for ( IDA_HIWORD(v65[0]) = IDA_HIWORD(v66) - v31; v33 < v30; ++v33 ) /*0x455153*/
//DUPDEF           {
//DUPDEF             for ( k = 0; k < v30; ++k ) /*0x455159*/
//DUPDEF             {
//DUPDEF               v35 = *v63++ == 0; /*0x455162*/
//DUPDEF               if ( !v35 ) /*0x455168*/
//DUPDEF               {
//DUPDEF                 IDA_HIWORD(v64) = v33 + IDA_HIWORD(v65[0]); /*0x45517b*/
//DUPDEF                 IDA_LOWORD(v64) = k + IDA_LOWORD(v65[0]); /*0x455180*/
//DUPDEF                 v64 = v64; /*0x45518d*/
//DUPDEF                 v36 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v64); /*0x4551a0*/
//DUPDEF                 if ( !(uint8_t)Cell::HasOccupierBit((Cell *)v36, v62[0]) ) /*0x4551a5*/
//DUPDEF                 {
//DUPDEF                   BuildingClass::checkOccupant(v36, v62[0]); /*0x4551b9*/
//DUPDEF                   for ( m = (unsigned int *)((unsigned int *)v36)[1]; m; m = (unsigned int *)m[12] ) /*0x4551c6*/
//DUPDEF                   {
//DUPDEF                     v38 = (*(int (**)(unsigned int *))(*m + 44))(m); /*0x4551cc*/
//DUPDEF                     if ( v38 == 1 || v38 == 15 || v38 == 2 ) /*0x4551dc*/
//DUPDEF                       (*(void (**)(unsigned int *))(*m + 1056))(m); /*0x4551e2*/
//DUPDEF                   }
//DUPDEF                   v39 = Cell::IsBridge((Cell *)v36); /*0x4551f1*/
//DUPDEF                   if ( v39 ) /*0x4551f8*/
//DUPDEF                   {
//DUPDEF                     if ( *(unsigned int *)(v39[135] + 48) == *(unsigned int *)v62 ) /*0x455207*/
//DUPDEF                     {
//DUPDEF                       v40 = (unsigned int *)(*(int (**)(unsigned int *, int *))(*v39 + 72))(v39, v69); /*0x455212*/
//DUPDEF                       if ( (unsigned char *)IDA___PAIR32__(v40[1] / 256, *v40 / 256) == v64 ) /*0x45523b*/
//DUPDEF                       {
//DUPDEF                         --this->CloakRadius; /*0x455263*/
//DUPDEF                         return (int)this; /*0x455270*/
//DUPDEF                       }
//DUPDEF                     }
//DUPDEF                   }
//DUPDEF                 }
//DUPDEF               }
//DUPDEF               result = v30; /*0x455244*/
//DUPDEF             }
//DUPDEF           }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x4550cf*/
//DUPDEF   return result; /*0x4550cf*/
//DUPDEF   return result; /*0x4550cf*/
//DUPDEF   return result; /*0x4550cf*/
//DUPDEF   return result; /*0x4550cf*/
// 0x44abd0
//DUPDEF void BuildingClass::FireLaser() {}
//DUPDEF   int *v5; // eax
//DUPDEF   char *v6; // eax
//DUPDEF   int v7; // eax
//DUPDEF   int v8; // ecx
//DUPDEF   int v10; // [esp-20h] [ebp-44h]
//DUPDEF   int v11; // [esp-14h] [ebp-38h]
//DUPDEF   char *v12; // [esp+14h] [ebp-10h]
//DUPDEF   unsigned int v13[3]; // [esp+18h] [ebp-Ch] BYREF

//DUPDEF   v12 = (char *)RA2_OPNEW(0x5Cu); /*0x44abef*/
//DUPDEF   if ( v12 ) /*0x44abf3*/
//DUPDEF   {
//DUPDEF     v11 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1192); /*0x44ac10*/
//DUPDEF     IDA_LOWORD(v10) = ((unsigned int *)this)[0]->base[5]; /*0x44ac42*/
//DUPDEF     IDA_HIWORD(v10) = IDA_BYTE2(((unsigned int *)this)[0]->base[5]); /*0x44ac4c*/
//DUPDEF     v5 = (int *)(*((int (**)(BuildingClass *, unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int))this->vtable1 + 44))( /*0x44ac7f*/
//DUPDEF                   this,
//DUPDEF                   v13,
//DUPDEF                   0,
//DUPDEF                   0,
//DUPDEF                   0,
//DUPDEF                   0);
//DUPDEF     v6 = TimerClass::Construct(v12, *v5, v5[1], v5[2], a2, a3, a4, 0, 1, v10, 0, 0, v11, 0, 1, 1065353216, 0); /*0x44ac9e*/
//DUPDEF     if ( v6 ) /*0x44aca5*/
//DUPDEF     {
//DUPDEF       v6[32] = 1; /*0x44aca7*/
//DUPDEF       *((unsigned int *)v6 + 7) = 3; /*0x44acab*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v7 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x44acb8*/
//DUPDEF   v8 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1188); /*0x44acc4*/
//DUPDEF   this->SupportingPrisms = 0; /*0x44acca*/
//DUPDEF   ((unsigned int *)this)[0] = v7; /*0x44acd0*/
//DUPDEF   ((unsigned int *)this)[1] = a3; /*0x44acd8*/
//DUPDEF   ((unsigned int *)this)[2] = v8; /*0x44acdc*/
//DUPDEF   return a3; /*0x44acc3*/
//DUPDEF   v7 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x44acb8*/
//DUPDEF   v8 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1188); /*0x44acc4*/
//DUPDEF   this->SupportingPrisms = 0; /*0x44acca*/
//DUPDEF   this->diskLaserTimer[0] = v7; /*0x44acd0*/
//DUPDEF   this->diskLaserTimer[1] = a3; /*0x44acd8*/
//DUPDEF   this->diskLaserTimer[2] = v8; /*0x44acdc*/
//DUPDEF   return a3; /*0x44acc3*/
//DUPDEF   v7 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x44acb8*/
//DUPDEF   v8 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1188); /*0x44acc4*/
//DUPDEF   this->SupportingPrisms = 0; /*0x44acca*/
//DUPDEF   this->diskLaserTimer[0] = v7; /*0x44acd0*/
//DUPDEF   this->diskLaserTimer[1] = a3; /*0x44acd8*/
//DUPDEF   this->diskLaserTimer[2] = v8; /*0x44acdc*/
//DUPDEF   return a3; /*0x44acc3*/
//DUPDEF   v7 = g_CurrentFrame; /*0x44acb8*/
//DUPDEF   ConditionRedSparkingProbability_high = IDA_HIDWORD(((unsigned int *)g_RulesClass_Instance)[0]); /*0x44acc4*/
//DUPDEF   this->u32_664 = 0; /*0x44acca*/
//DUPDEF   *(&this->q0487) = v7; /*0x44acd0*/
//DUPDEF   *(&this->q0488) = a3; /*0x44acd8*/
//DUPDEF   *(&this->q0489) = ConditionRedSparkingProbability_high; /*0x44acdc*/
//DUPDEF   return a3; /*0x44acc3*/
//DUPDEF   v7 = g_CurrentFrame; /*0x44acb8*/
//DUPDEF   ConditionRedSparkingProbability_high = IDA_HIDWORD(g_RulesClass_Instance->ConditionRedSparkingProbability); /*0x44acc4*/
//DUPDEF   *(&this->q0A09) = 0; /*0x44acca*/
//DUPDEF   *(&this->q0487) = v7; /*0x44acd0*/
//DUPDEF   *(&this->q0488) = a3; /*0x44acd8*/
//DUPDEF   *(&this->q0489) = ConditionRedSparkingProbability_high; /*0x44acdc*/
//DUPDEF   return a3; /*0x44acc3*/
// 0x456e00
//DUPDEF void BuildingClass::AcquireTarget() {}
//DUPDEF   int v2; // eax
//DUPDEF   int v3; // edi
//DUPDEF   BuildingClass *v4; // eax
//DUPDEF   unsigned int *v5; // eax
//DUPDEF   int v6; // ecx
//DUPDEF   int Translucency; // ebx
//DUPDEF   int *v8; // ecx
//DUPDEF   int v9; // ebp
//DUPDEF   bool v10; // zf
//DUPDEF   int v11; // ebx
//DUPDEF   int *v12; // ecx
//DUPDEF   int v13; // esi
//DUPDEF   int result; // eax
//DUPDEF   int v15; // [esp+10h] [ebp-Ch]
//DUPDEF   int v16; // [esp+14h] [ebp-8h]
//DUPDEF   int v17; // [esp+20h] [ebp+4h]
//DUPDEF   int *Anims; // [esp+20h] [ebp+4h]

//DUPDEF   if ( v17 ) /*0x456e0f*/
//DUPDEF     ((unsigned int *)this)[0] = 1; /*0x456e11*/
//DUPDEF   TechnoClass::SetTargetIfAllowed((TechnoClass *)this, v17); /*0x456e1b*/
//DUPDEF   v16 = (*((int (**)(BuildingClass *))this->vtable1 + 121))(this); /*0x456e2e*/
//DUPDEF   v2 = (*((int (**)(BuildingClass *))this->vtable1 + 111))(this); /*0x456e32*/
//DUPDEF   v3 = (*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 281))(this, *(int16_t *)(v2 + 266)); /*0x456e4a*/
//DUPDEF   if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 88))(this)
//DUPDEF     || ((unsigned int *)this)[0]
//DUPDEF     && (this ? (v4 = (*((int (**)(BuildingClass *))this->vtable1 + 11))(this) == 6 ? this : 0) : (v4 = 0),
//DUPDEF         (BuildingClass *)((unsigned int *)this)[0]->AirstrikeClass_field_50 == v4) )
//DUPDEF   {
//DUPDEF     IDA_LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x456e91*/
//DUPDEF   }
//DUPDEF   *(unsigned short *)this->BuildingClass_field_short_700 = v3; /*0x456e93*/
//DUPDEF   Anims = this->Anims; /*0x456eaa*/
//DUPDEF   v15 = 21; /*0x456eae*/
//DUPDEF   do /*0x456f36*/
//DUPDEF   {
//DUPDEF     v5 = (unsigned int *)*Anims; /*0x456eba*/
//DUPDEF     if ( *Anims ) /*0x456eba*/
//DUPDEF     {
//DUPDEF       v6 = v5[50]; /*0x456ec0*/
//DUPDEF       if ( v6 && *(unsigned char *)(v6 + 860) ) /*0x456eca*/
//DUPDEF       {
//DUPDEF         v5[53] = v16; /*0x456edc*/
//DUPDEF         v5[63] = (uint16_t)v3; /*0x456ee2*/
//DUPDEF }
//DUPDEF       Translucency = this->Translucency; /*0x456ee8*/
//DUPDEF       if ( Translucency == 15 /*0x456f02*/
//DUPDEF         && (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 )
//DUPDEF       {
//DUPDEF         IDA_LOBYTE(Translucency) = 16; /*0x456f04*/
//DUPDEF       }
//DUPDEF       v8 = this->Anims; /*0x456f09*/
//DUPDEF       v9 = 21; /*0x456f0b*/
//DUPDEF       do /*0x456f20*/
//DUPDEF       {
//DUPDEF         if ( *v8 ) /*0x456f10*/
//DUPDEF           *(unsigned char *)(this->q6D4 = Translucency; /*0x456f16*/
//DUPDEF         ++v8; /*0x456f1c*/
//DUPDEF         --v9; /*0x456f1f*/
//DUPDEF       }
//DUPDEF       while ( v9 ); /*0x456f20*/
//DUPDEF     }
//DUPDEF     v10 = v15 == 1; /*0x456f2d*/
//DUPDEF     ++Anims; /*0x456f2e*/
//DUPDEF     --v15; /*0x456f32*/
//DUPDEF   }
//DUPDEF   while ( !v10 ); /*0x456f36*/
//DUPDEF   v11 = this->Translucency; /*0x456f3c*/
//DUPDEF   if ( v11 == 15 && (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 ) /*0x456f56*/
//DUPDEF     IDA_LOBYTE(v11) = 16; /*0x456f58*/
//DUPDEF   v12 = this->Anims; /*0x456f5d*/
//DUPDEF   v13 = 21; /*0x456f5f*/
//DUPDEF   do /*0x456f74*/
//DUPDEF   {
//DUPDEF     result = *v12; /*0x456f64*/
//DUPDEF     if ( *v12 ) /*0x456f64*/
//DUPDEF       result->q178 = v11; /*0x456f6a*/
//DUPDEF     ++v12; /*0x456f70*/
//DUPDEF     --v13; /*0x456f73*/
//DUPDEF   }
//DUPDEF   while ( v13 ); /*0x456f74*/
//DUPDEF   return result; /*0x456f76*/
//DUPDEF }
//DUPDEF   *(unsigned short *)this->BuildingClass_field_short_700 = v3; /*0x456e93*/
//DUPDEF   Anims = this->Anims; /*0x456eaa*/
//DUPDEF   v15 = 21; /*0x456eae*/
//DUPDEF   do /*0x456f36*/
//DUPDEF   {
//DUPDEF     v5 = (unsigned int *)*Anims; /*0x456eba*/
//DUPDEF     if ( *Anims ) /*0x456eba*/
//DUPDEF     {
//DUPDEF       v6 = v5[50]; /*0x456ec0*/
//DUPDEF       if ( v6 && *(unsigned char *)(v6 + 860) ) /*0x456eca*/
//DUPDEF       {
//DUPDEF         v5[53] = v16; /*0x456edc*/
//DUPDEF         v5[63] = (uint16_t)v3; /*0x456ee2*/
//DUPDEF }
//DUPDEF       Translucency = this->Translucency; /*0x456ee8*/
//DUPDEF       if ( Translucency == 15 /*0x456f02*/
//DUPDEF         && (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 )
//DUPDEF       {
//DUPDEF         IDA_LOBYTE(Translucency) = 16; /*0x456f04*/
//DUPDEF }
//DUPDEF       v8 = this->Anims; /*0x456f09*/
//DUPDEF       v9 = 21; /*0x456f0b*/
//DUPDEF       do /*0x456f20*/
//DUPDEF       {
//DUPDEF         if ( *v8 ) /*0x456f10*/
//DUPDEF           *(unsigned char *)(this->q6D4 = Translucency; /*0x456f16*/
//DUPDEF         ++v8; /*0x456f1c*/
//DUPDEF         --v9; /*0x456f1f*/
//DUPDEF       }
//DUPDEF       while ( v9 ); /*0x456f20*/
//DUPDEF     }
//DUPDEF     v10 = v15 == 1; /*0x456f2d*/
//DUPDEF     ++Anims; /*0x456f2e*/
//DUPDEF     --v15; /*0x456f32*/
//DUPDEF   }
//DUPDEF   while ( !v10 ); /*0x456f36*/
//DUPDEF   v11 = this->Translucency; /*0x456f3c*/
//DUPDEF   if ( v11 == 15 && (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 ) /*0x456f56*/
//DUPDEF     IDA_LOBYTE(v11) = 16; /*0x456f58*/
//DUPDEF   v12 = this->Anims; /*0x456f5d*/
//DUPDEF   v13 = 21; /*0x456f5f*/
//DUPDEF   do /*0x456f74*/
//DUPDEF   {
//DUPDEF     result = *v12; /*0x456f64*/
//DUPDEF     if ( *v12 ) /*0x456f64*/
//DUPDEF       result->q178 = v11; /*0x456f6a*/
//DUPDEF     ++v12; /*0x456f70*/
//DUPDEF     --v13; /*0x456f73*/
//DUPDEF }
//DUPDEF   while ( v13 ); /*0x456f74*/
//DUPDEF   return result; /*0x456f76*/
//DUPDEF }
//DUPDEF   *(unsigned short *)this->BuildingClass_field_short_700 = v3; /*0x456e93*/
//DUPDEF   Anims = this->Anims; /*0x456eaa*/
//DUPDEF   v15 = 21; /*0x456eae*/
//DUPDEF   do /*0x456f36*/
//DUPDEF   {
//DUPDEF     v5 = (unsigned int *)*Anims; /*0x456eba*/
//DUPDEF     if ( *Anims ) /*0x456eba*/
//DUPDEF     {
//DUPDEF       v6 = v5[50]; /*0x456ec0*/
//DUPDEF       if ( v6 && *(unsigned char *)(v6 + 860) ) /*0x456eca*/
//DUPDEF       {
//DUPDEF         v5[53] = v16; /*0x456edc*/
//DUPDEF         v5[63] = (uint16_t)v3; /*0x456ee2*/
//DUPDEF }
//DUPDEF       Translucency = this->Translucency; /*0x456ee8*/
//DUPDEF       if ( Translucency == 15 /*0x456f02*/
//DUPDEF         && (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 )
//DUPDEF       {
//DUPDEF         IDA_LOBYTE(Translucency) = 16; /*0x456f04*/
//DUPDEF }
//DUPDEF       v8 = this->Anims; /*0x456f09*/
//DUPDEF       v9 = 21; /*0x456f0b*/
//DUPDEF       do /*0x456f20*/
//DUPDEF       {
//DUPDEF         if ( *v8 ) /*0x456f10*/
//DUPDEF           *(unsigned char *)(this->q6D4 = Translucency; /*0x456f16*/
//DUPDEF         ++v8; /*0x456f1c*/
//DUPDEF         --v9; /*0x456f1f*/
//DUPDEF       }
//DUPDEF       while ( v9 ); /*0x456f20*/
//DUPDEF     }
//DUPDEF     v10 = v15 == 1; /*0x456f2d*/
//DUPDEF     ++Anims; /*0x456f2e*/
//DUPDEF     --v15; /*0x456f32*/
//DUPDEF   }
//DUPDEF   while ( !v10 ); /*0x456f36*/
//DUPDEF   v11 = this->Translucency; /*0x456f3c*/
//DUPDEF   if ( v11 == 15 && (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 ) /*0x456f56*/
//DUPDEF     IDA_LOBYTE(v11) = 16; /*0x456f58*/
//DUPDEF   v12 = this->Anims; /*0x456f5d*/
//DUPDEF   v13 = 21; /*0x456f5f*/
//DUPDEF   do /*0x456f74*/
//DUPDEF   {
//DUPDEF     result = *v12; /*0x456f64*/
//DUPDEF     if ( *v12 ) /*0x456f64*/
//DUPDEF       result->q178 = v11; /*0x456f6a*/
//DUPDEF     ++v12; /*0x456f70*/
//DUPDEF     --v13; /*0x456f73*/
//DUPDEF   }
//DUPDEF   while ( v13 ); /*0x456f74*/
//DUPDEF   return result; /*0x456f76*/
//DUPDEF }
//DUPDEF   this->BuildingClass_field_short_700 = v3; /*0x456e93*/
//DUPDEF   v18 = (unsigned int *)((char *)&this->cloakState2); /*0x456eaa*/
//DUPDEF   v15 = 21; /*0x456eae*/
//DUPDEF   do /*0x456f36*/
//DUPDEF   {
//DUPDEF     v5 = (unsigned int *)*v18; /*0x456eba*/
//DUPDEF     if ( *v18 ) /*0x456eba*/
//DUPDEF     {
//DUPDEF       v6 = v5[50]; /*0x456ec0*/
//DUPDEF       if ( v6 && *(unsigned char *)(v6 + 860) ) /*0x456eca*/
//DUPDEF       {
//DUPDEF         v5[53] = v16; /*0x456edc*/
//DUPDEF         v5[63] = (uint16_t)v3; /*0x456ee2*/
//DUPDEF }
//DUPDEF       v7 = this->Translucency; /*0x456ee8*/
//DUPDEF       if ( v7 == 15 && (*(int (**)(void *, unsigned int, unsigned int))(*(unsigned int *)&this->owningHouseIndex4))(this, 0, 0) == 5 ) /*0x456f02*/
//DUPDEF         IDA_LOBYTE(v7) = 16; /*0x456f04*/
//DUPDEF       v8 = (char *)&this->Anims; /*0x456f09*/
//DUPDEF       v9 = 21; /*0x456f0b*/
//DUPDEF       do /*0x456f20*/
//DUPDEF       {
//DUPDEF         if ( *(unsigned int *)v8 ) /*0x456f10*/
//DUPDEF           *(unsigned char *)(v8->q178 = v7; /*0x456f16*/
//DUPDEF         v8 += 4; /*0x456f1c*/
//DUPDEF         --v9; /*0x456f1f*/
//DUPDEF       }
//DUPDEF       while ( v9 ); /*0x456f20*/
//DUPDEF     }
//DUPDEF     v10 = v15 == 1; /*0x456f2d*/
//DUPDEF     ++v18; /*0x456f2e*/
//DUPDEF     --v15; /*0x456f32*/
//DUPDEF   }
//DUPDEF   while ( !v10 ); /*0x456f36*/
//DUPDEF   v11 = this->Translucency; /*0x456f3c*/
//DUPDEF   if ( v11 == 15 && (*(int (**)(void *, unsigned int, unsigned int))(*(unsigned int *)&this->owningHouseIndex4))(this, 0, 0) == 5 ) /*0x456f56*/
//DUPDEF     IDA_LOBYTE(v11) = 16; /*0x456f58*/
//DUPDEF   v12 = (int *)((char *)&this->cloakState2); /*0x456f5d*/
//DUPDEF   v13 = 21; /*0x456f5f*/
//DUPDEF   do /*0x456f74*/
//DUPDEF   {
//DUPDEF     result = *v12; /*0x456f64*/
//DUPDEF     if ( *v12 ) /*0x456f64*/
//DUPDEF       result->q178 = v11; /*0x456f6a*/
//DUPDEF     ++v12; /*0x456f70*/
//DUPDEF     --v13; /*0x456f73*/
//DUPDEF   }
//DUPDEF   while ( v13 ); /*0x456f74*/
//DUPDEF   return result; /*0x456f76*/
//DUPDEF }
//DUPDEF   this->BuildingClass_field_short_700 = v3; /*0x456e93*/
//DUPDEF   v18 = (unsigned int *)((char *)&this->cloakState2); /*0x456eaa*/
//DUPDEF   v15 = 21; /*0x456eae*/
//DUPDEF   do /*0x456f36*/
//DUPDEF   {
//DUPDEF     v5 = (unsigned int *)*v18; /*0x456eba*/
//DUPDEF     if ( *v18 ) /*0x456eba*/
//DUPDEF     {
//DUPDEF       v6 = v5[50]; /*0x456ec0*/
//DUPDEF       if ( v6 && *(unsigned char *)(v6 + 860) ) /*0x456eca*/
//DUPDEF       {
//DUPDEF         v5[53] = v16; /*0x456edc*/
//DUPDEF         v5[63] = (uint16_t)v3; /*0x456ee2*/
//DUPDEF }
//DUPDEF       v7 = this->Translucency; /*0x456ee8*/
//DUPDEF       if ( v7 == 15 && (*(int (**)(void *, unsigned int, unsigned int))(((unsigned int)(this->owningHouseIndex4))))(this, 0, 0) == 5 ) /*0x456f02*/
//DUPDEF         IDA_LOBYTE(v7) = 16; /*0x456f04*/
//DUPDEF       v8 = (char *)&this->u32_1570; /*0x456f09*/
//DUPDEF       v9 = 21; /*0x456f0b*/
//DUPDEF       do /*0x456f20*/
//DUPDEF       {
//DUPDEF         if ( *(unsigned int *)v8 ) /*0x456f10*/
//DUPDEF           *(unsigned char *)(v8->q178 = v7; /*0x456f16*/
//DUPDEF         v8 += 4; /*0x456f1c*/
//DUPDEF         --v9; /*0x456f1f*/
//DUPDEF       while ( v9 ); /*0x456f20*/
//DUPDEF     v10 = v15 == 1; /*0x456f2d*/
//DUPDEF     ++v18; /*0x456f2e*/
//DUPDEF     --v15; /*0x456f32*/
//DUPDEF   while ( !v10 ); /*0x456f36*/
//DUPDEF   v11 = this->Translucency; /*0x456f3c*/
//DUPDEF   if ( v11 == 15 && (*(int (**)(void *, unsigned int, unsigned int))(((unsigned int)(this->owningHouseIndex4))))(this, 0, 0) == 5 ) /*0x456f56*/
//DUPDEF     IDA_LOBYTE(v11) = 16; /*0x456f58*/
//DUPDEF   v12 = (int *)((char *)&this->cloakState2); /*0x456f5d*/
//DUPDEF   v13 = 21; /*0x456f5f*/
//DUPDEF   do /*0x456f74*/
//DUPDEF   {
//DUPDEF     result = *v12; /*0x456f64*/
//DUPDEF     if ( *v12 ) /*0x456f64*/
//DUPDEF       result->v11 = v11; /*0x456f6a*/
//DUPDEF     ++v12; /*0x456f70*/
//DUPDEF     --v13; /*0x456f73*/
//DUPDEF   while ( v13 ); /*0x456f74*/
//DUPDEF   return result; /*0x456f76*/
// 0x465d40
//DUPDEF bool BuildingTypeClass::Is1x1AndUndeployable_BuildingMassSelectable()
//DUPDEF {
//DUPDEF   int v1; // eax
//DUPDEF   bool result; // al

//DUPDEF   result = 0; /*0x465d68*/
//DUPDEF   if ( ((unsigned int *)this)[4] ) /*0x465d40*/
//DUPDEF   {
//DUPDEF     v1 = this->targetLaserTimer; /*0x465d55*/
//DUPDEF     if ( stru_81926C_raw.Type[v1] == 1 && dword_819310[v1] == 1 ) /*0x465d66*/
//DUPDEF       return 1; /*0x465d48*/
//DUPDEF   }
//DUPDEF   return result; /*0x465d6a*/
//DUPDEF }
// 0x465d40
//DUPDEF     bool BuildingTypeClass::Is1x1AndUndeployable_BuildingMassSelectable()
//DUPDEF     {
//DUPDEF       int v1; // eax
//DUPDEF       bool result; // al

//DUPDEF       result = 0; /*0x465d68*/
//DUPDEF       if ( ((unsigned int *)this)[4] ) /*0x465d40*/
//DUPDEF       {
//DUPDEF         v1 = this->u32_EF0; /*0x465d55*/
//DUPDEF         if ( stru_81926C_raw.Type[v1] == 1 && dword_819310[v1] == 1 ) /*0x465d66*/
//DUPDEF           return 1; /*0x465d48*/
//DUPDEF       }
//DUPDEF       return result; /*0x465d6a*/
//DUPDEF     }
/* ASM:
mov     eax, [ecx+408h]
test    eax, eax
jz      short loc_465D6B
mov     eax, [ecx+0EF0h]
mov     ecx, 1
shl     eax, 2
cmp     dword_8192B8[eax], ecx
jnz     short loc_465D6B
cmp     dword_819310[eax], ecx
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
//DUPDEF void BuildingClass::UpdateMovingPosition() {}
//DUPDEF   bool v3; // zf
//DUPDEF   int v4; // ecx
//DUPDEF   int v5; // edx
//DUPDEF   int *v6; // ecx
//DUPDEF   int *p_occupant; // esi
//DUPDEF   CellClass *v8; // eax
//DUPDEF   unsigned char *v9; // ecx
//DUPDEF   void *vtable3; // [esp-4h] [ebp-28h]
//DUPDEF   int v12; // [esp+Ch] [ebp-18h] BYREF
//DUPDEF   int v13; // [esp+10h] [ebp-14h]
//DUPDEF   int GroundHeight; // [esp+14h] [ebp-10h]
//DUPDEF   int v15; // [esp+18h] [ebp-Ch] BYREF
//DUPDEF   int v16; // [esp+1Ch] [ebp-8h]
//DUPDEF   int v17; // [esp+20h] [ebp-4h]

//DUPDEF   v3 = *a2 == g_MissionQueueFrame.localVariables[227]; /*0x5b17c6*/
//DUPDEF   v12 = *a2; /*0x5b17c8*/
//DUPDEF   v4 = a2[1]; /*0x5b17cc*/
//DUPDEF   v13 = v4; /*0x5b17cf*/
//DUPDEF   v5 = a2[2]; /*0x5b17d3*/
//DUPDEF   GroundHeight = v5; /*0x5b17d6*/
//DUPDEF   if ( !v3 || v4 != g_MissionQueueFrame.localVariables[228] || v5 != g_MissionQueueFrame.localVariables[229] ) /*0x5b17ea*/
//DUPDEF   {
//DUPDEF     GroundHeight = Cell::GetGroundHeight(&v12); /*0x5b1801*/
//DUPDEF     if ( (RawCoord::To_Cell((void *)&stru_87F5F0_raw.__pad_58[416], a2)->flags[0] & 0x100) != 0 ) /*0x5b1813*/
//DUPDEF     {
//DUPDEF       v6 = (int *)((char *)((unsigned int *)this)[0] + 156); /*0x5b1818*/
//DUPDEF       v15 = *v6; /*0x5b1820*/
//DUPDEF       v16 = v6[1]; /*0x5b1827*/
//DUPDEF       if ( v6[2] > GroundHeight + 2 * g_MissionQueueFrame.localVariables[243] + g_MissionQueueFrame.localVariables[243] ) /*0x5b183e*/
//DUPDEF         GroundHeight += g_MissionQueueFrame.localVariables[240]; /*0x5b1846*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   p_occupant = &((unsigned int *)this)[0]; /*0x5b1853*/
//DUPDEF   if ( ((unsigned int *)this)[0] != g_MissionQueueFrame.localVariables[227] /*0x5b1871*/
//DUPDEF     || ((unsigned int *)this)[0] != g_MissionQueueFrame.localVariables[228]
//DUPDEF     || ((unsigned int *)this)[0] != g_MissionQueueFrame.localVariables[229] )
//DUPDEF   {
//DUPDEF     (*(void (**)(void *, int *))(*(unsigned int *)((unsigned int *)this)[0] + 244))(((unsigned int *)this)[0], &((unsigned int *)this)[0]); /*0x5b1879*/
//DUPDEF   }
//DUPDEF   vtable3 = ((unsigned int *)this)[0]; /*0x5b1886*/
//DUPDEF   v8 = RawCoord::To_Cell((void *)&stru_87F5F0_raw.__pad_58[416], &v12); /*0x5b188d*/
//DUPDEF   if ( !(uint8_t)CrateClass::ProcessPickup((CrateClass *)v8, (int)vtable3) || (v9 = ((unsigned int *)this)[0], v9[129]) ) /*0x5b18a0*/
//DUPDEF   {
//DUPDEF     *p_occupant = g_MissionQueueFrame.localVariables[227]; /*0x5b18ca*/
//DUPDEF     ((unsigned int *)this)[0] = g_MissionQueueFrame.localVariables[228]; /*0x5b18d1*/
//DUPDEF     ((unsigned int *)this)[0] = g_MissionQueueFrame.localVariables[229]; /*0x5b18da*/
//DUPDEF     v9 = ((unsigned int *)this)[0]; /*0x5b18dd*/
//DUPDEF     if ( !v9[144] ) /*0x5b18e8*/
//DUPDEF       return 0; /*0x5b18e8*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     *p_occupant = v12; /*0x5b18b0*/
//DUPDEF     ((unsigned int *)this)[0] = v13; /*0x5b18b6*/
//DUPDEF     ((unsigned int *)this)[0] = GroundHeight; /*0x5b18bd*/
//DUPDEF }
//DUPDEF   if ( *p_occupant != g_MissionQueueFrame.localVariables[227] /*0x5b190d*/
//DUPDEF     || ((unsigned int *)this)[0] != g_MissionQueueFrame.localVariables[228]
//DUPDEF     || ((unsigned int *)this)[0] != g_MissionQueueFrame.localVariables[229] )
//DUPDEF   {
//DUPDEF     (*(void (**)(unsigned char *, int *))(*(unsigned int *)v9 + 240))(v9, &((unsigned int *)this)[0]); /*0x5b1912*/
//DUPDEF     return 1; /*0x5b1920*/
//DUPDEF   }
//DUPDEF   v15 = *((unsigned int *)v9 + 39); /*0x5b192f*/
//DUPDEF   v16 = *((unsigned int *)v9 + 40); /*0x5b1936*/
//DUPDEF   v17 = *((unsigned int *)v9 + 41); /*0x5b193d*/
//DUPDEF   (*(void (**)(unsigned char *, int *))(*(unsigned int *)v9 + 240))(v9, &v15); /*0x5b1948*/
//DUPDEF   return 0; /*0x5b1918*/
//DUPDEF }
//DUPDEF   p_occupant = &this->occupant; /*0x5b1853*/
//DUPDEF   if ( this->occupant != g_MissionQueueFrame.localVariables[227] /*0x5b1871*/
//DUPDEF     || this->owningHouseIndex != g_MissionQueueFrame.localVariables[228]
//DUPDEF     || this->fallRate != g_MissionQueueFrame.localVariables[229] )
//DUPDEF   {
//DUPDEF     (*(void (**)(void *, int *))(*(unsigned int *)this->vtable3 + 244))(this->vtable3, &this->occupant); /*0x5b1879*/
//DUPDEF   }
//DUPDEF   vtable3 = this->vtable3; /*0x5b1886*/
//DUPDEF   v8 = RawCoord::To_Cell((void *)&stru_87F5F0_raw.__pad_58[416], &v12); /*0x5b188d*/
//DUPDEF   if ( !(uint8_t)CrateClass::ProcessPickup((CrateClass *)v8, (int)vtable3) || (v9 = this->vtable3, v9[129]) ) /*0x5b18a0*/
//DUPDEF   {
//DUPDEF     *p_occupant = g_MissionQueueFrame.localVariables[227]; /*0x5b18ca*/
//DUPDEF     this->owningHouseIndex = g_MissionQueueFrame.localVariables[228]; /*0x5b18d1*/
//DUPDEF     this->fallRate = g_MissionQueueFrame.localVariables[229]; /*0x5b18da*/
//DUPDEF     v9 = this->vtable3; /*0x5b18dd*/
//DUPDEF     if ( !v9[144] ) /*0x5b18e8*/
//DUPDEF       return 0; /*0x5b18e8*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     *p_occupant = v12; /*0x5b18b0*/
//DUPDEF     this->owningHouseIndex = v13; /*0x5b18b6*/
//DUPDEF     this->fallRate = GroundHeight; /*0x5b18bd*/
//DUPDEF }
//DUPDEF   if ( *p_occupant != g_MissionQueueFrame.localVariables[227] /*0x5b190d*/
//DUPDEF     || this->owningHouseIndex != g_MissionQueueFrame.localVariables[228]
//DUPDEF     || this->fallRate != g_MissionQueueFrame.localVariables[229] )
//DUPDEF   {
//DUPDEF     (*(void (**)(unsigned char *, int *))(*(unsigned int *)v9 + 240))(v9, &this->occupant); /*0x5b1912*/
//DUPDEF     return 1; /*0x5b1920*/
//DUPDEF }
//DUPDEF   v15 = *((unsigned int *)v9 + 39); /*0x5b192f*/
//DUPDEF   v16 = *((unsigned int *)v9 + 40); /*0x5b1936*/
//DUPDEF   v17 = *((unsigned int *)v9 + 41); /*0x5b193d*/
//DUPDEF   (*(void (**)(unsigned char *, int *))(*(unsigned int *)v9 + 240))(v9, &v15); /*0x5b1948*/
//DUPDEF   return 0; /*0x5b1918*/
//DUPDEF }
//DUPDEF   p_occupant = &this->occupant; /*0x5b1853*/
//DUPDEF   if ( this->occupant != g_MissionQueueFrame.localVariables[227] /*0x5b1871*/
//DUPDEF     || this->owningHouseIndex != g_MissionQueueFrame.localVariables[228]
//DUPDEF     || this->fallRate != g_MissionQueueFrame.localVariables[229] )
//DUPDEF   {
//DUPDEF     (*(void (**)(void *, int *))(*(unsigned int *)this->vtable3 + 244))(this->vtable3, &this->occupant); /*0x5b1879*/
//DUPDEF }
//DUPDEF   vtable3 = this->vtable3; /*0x5b1886*/
//DUPDEF   v8 = RawCoord::To_Cell((void *)&stru_87F5F0_raw.__pad_58[416], &v12); /*0x5b188d*/
//DUPDEF   if ( !(uint8_t)CrateClass::ProcessPickup((CrateClass *)v8, (int)vtable3) || (v9 = this->vtable3, v9[129]) ) /*0x5b18a0*/
//DUPDEF   {
//DUPDEF     *p_occupant = g_MissionQueueFrame.localVariables[227]; /*0x5b18ca*/
//DUPDEF     this->owningHouseIndex = g_MissionQueueFrame.localVariables[228]; /*0x5b18d1*/
//DUPDEF     this->fallRate = g_MissionQueueFrame.localVariables[229]; /*0x5b18da*/
//DUPDEF     v9 = this->vtable3; /*0x5b18dd*/
//DUPDEF     if ( !v9[144] ) /*0x5b18e8*/
//DUPDEF       return 0; /*0x5b18e8*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     *p_occupant = v12; /*0x5b18b0*/
//DUPDEF     this->owningHouseIndex = v13; /*0x5b18b6*/
//DUPDEF     this->fallRate = GroundHeight; /*0x5b18bd*/
//DUPDEF }
//DUPDEF   if ( *p_occupant != g_MissionQueueFrame.localVariables[227] /*0x5b190d*/
//DUPDEF     || this->owningHouseIndex != g_MissionQueueFrame.localVariables[228]
//DUPDEF     || this->fallRate != g_MissionQueueFrame.localVariables[229] )
//DUPDEF   {
//DUPDEF     (*(void (**)(unsigned char *, int *))(this->q0F8)(v9, &this->occupant); /*0x5b1912*/
//DUPDEF     return 1; /*0x5b1920*/
//DUPDEF }
//DUPDEF   v15 = *((unsigned int *)v9 + 39); /*0x5b192f*/
//DUPDEF   v16 = *((unsigned int *)v9 + 40); /*0x5b1936*/
//DUPDEF   v17 = *((unsigned int *)v9 + 41); /*0x5b193d*/
//DUPDEF   (*(void (**)(unsigned char *, int *))(this->q0F8)(v9, &v15); /*0x5b1948*/
//DUPDEF   return 0; /*0x5b1918*/
//DUPDEF }
//DUPDEF   v7 = &this->objectTypeFlags; /*0x5b1853*/
//DUPDEF   if ( this->u32_24 != g_MatrixTransformState || this->dword_ABEE14 != dword_ABEE14 || this->dword_ABEE18 != dword_ABEE18 ) /*0x5b1871*/
//DUPDEF     (*(void (**)(unsigned int, int *))(*(unsigned int *)this->u32_C + 244))(this->u32_C, this + 9); /*0x5b1879*/
//DUPDEF   v11 = this->u32_C; /*0x5b1886*/
//DUPDEF   v8 = RawCoord::To_Cell(&MapClass_Instance, &v12); /*0x5b188d*/
//DUPDEF   if ( !CrateClass::ProcessPickup(v8, v11) || (v9 = this->u32_C, this->cloakState) ) /*0x5b18a0*/
//DUPDEF   {
//DUPDEF     *v7 = g_MatrixTransformState; /*0x5b18ca*/
//DUPDEF     this->dword_ABEE14 = dword_ABEE14; /*0x5b18d1*/
//DUPDEF     this->dword_ABEE18 = dword_ABEE18; /*0x5b18da*/
//DUPDEF     v9 = this->u32_C; /*0x5b18dd*/
//DUPDEF     if ( !*(unsigned char *)(v9 + 144) ) /*0x5b18e8*/
//DUPDEF       return 0; /*0x5b18e8*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     *v7 = v12; /*0x5b18b0*/
//DUPDEF     *(&this->vtable20) = v13; /*0x5b18b6*/
//DUPDEF     *(&this->vtable21) = GroundHeight; /*0x5b18bd*/
//DUPDEF }
//DUPDEF   if ( *v7 != g_MatrixTransformState || *(&this->vtable20) != dword_ABEE14 || *(&this->vtable21) != dword_ABEE18 ) /*0x5b190d*/
//DUPDEF   {
//DUPDEF     (*(void (**)(int, int *))(*(unsigned int *)v9 + 240))(v9, this + 9); /*0x5b1912*/
//DUPDEF     return 1; /*0x5b1920*/
//DUPDEF }
//DUPDEF   v15 = *(unsigned int *)(v9 + 156); /*0x5b192f*/
//DUPDEF   v16 = *(unsigned int *)(v9 + 160); /*0x5b1936*/
//DUPDEF   v17 = *(unsigned int *)(v9 + 164); /*0x5b193d*/
//DUPDEF   (*(void (**)(int, int *))(*(unsigned int *)v9 + 240))(v9, &v15); /*0x5b1948*/
//DUPDEF   return 0; /*0x5b1918*/
//DUPDEF   v7 = &this->BarrelVoxel; /*0x5b1853*/
//DUPDEF   if ( this->BarrelVoxel != g_MatrixTransformState || *(&this->vtable20) != dword_ABEE14 || *(&this->vtable21) != dword_ABEE18 ) /*0x5b1871*/
//DUPDEF     (*(void (**)(unsigned int, int *))(*(unsigned int *)this->vtable4 + 244))(this->vtable4, this + 9); /*0x5b1879*/
//DUPDEF   v11 = this->vtable4; /*0x5b1886*/
//DUPDEF   v8 = RawCoord::To_Cell(&MapClass_Instance, &v12); /*0x5b188d*/
//DUPDEF   if ( !CrateClass::ProcessPickup(v8, v11) || (v9 = this->vtable4, *(unsigned char *)(v9 + 129)) ) /*0x5b18a0*/
//DUPDEF   {
//DUPDEF     *v7 = g_MatrixTransformState; /*0x5b18ca*/
//DUPDEF     *(&this->vtable20) = dword_ABEE14; /*0x5b18d1*/
//DUPDEF     *(&this->vtable21) = dword_ABEE18; /*0x5b18da*/
//DUPDEF     v9 = this->vtable4; /*0x5b18dd*/
//DUPDEF     if ( !this->location ) /*0x5b18e8*/
//DUPDEF       return 0; /*0x5b18e8*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF     *v7 = v12; /*0x5b18b0*/
//DUPDEF     *(&this->vtable20) = v13; /*0x5b18b6*/
//DUPDEF     *(&this->vtable21) = GroundHeight; /*0x5b18bd*/
//DUPDEF   if ( *v7 != g_MatrixTransformState || *(&this->vtable20) != dword_ABEE14 || *(&this->vtable21) != dword_ABEE18 ) /*0x5b190d*/
//DUPDEF   {
//DUPDEF     (*(void (**)(int, int *))(this->transporter)(v9, this + 9); /*0x5b1912*/
//DUPDEF     return 1; /*0x5b1920*/
//DUPDEF   v15 = this->lineTrailer; /*0x5b192f*/
//DUPDEF   v16 = this->currentMission; /*0x5b1936*/
//DUPDEF   v17 = this->suspendedMission; /*0x5b193d*/
//DUPDEF   (*(void (**)(int, int *))(this->transporter)(v9, &v15); /*0x5b1948*/
//DUPDEF   return 0; /*0x5b1918*/
//DUPDEF // 0x451e40
//DUPDEF void BuildingClass::ClearAnims()
//DUPDEF {
//DUPDEF   int result; // eax
//DUPDEF   int *Anims; // esi
//DUPDEF   int v4; // edi
//DUPDEF   int v5; // ecx
//DUPDEF 
//DUPDEF   if ( a2 == -2 ) /*0x451e47*/
//DUPDEF   {
//DUPDEF     Anims = this->Anims; /*0x451e4b*/
//DUPDEF     v4 = 21; /*0x451e51*/
//DUPDEF     do /*0x451e6d*/
//DUPDEF     {
//DUPDEF       v5 = *Anims; /*0x451e56*/
//DUPDEF       if ( *Anims ) /*0x451e56*/
//DUPDEF       {
//DUPDEF         *Anims = 0; /*0x451e5c*/
//DUPDEF         result = (*(int (**)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x451e66*/
//DUPDEF       }
//DUPDEF       ++Anims; /*0x451e69*/
//DUPDEF       --v4; /*0x451e6c*/
//DUPDEF     }
//DUPDEF     while ( v4 ); /*0x451e6d*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     result = this->Anims[a2]; /*0x451e74*/
//DUPDEF     if ( result ) /*0x451e7d*/
//DUPDEF     {
//DUPDEF       this->Anims[a2] = 0; /*0x451e7f*/
//DUPDEF       return (*(int (**)(int, int))(*(unsigned int *)result + 32))(result, 1); /*0x451e90*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x451e71*/
//DUPDEF }
//DUPDEF // 0x450630
//DUPDEF void BuildingClass::ProcessActiveAnimation() {}
//DUPDEF   BuildingClass *v2; // ecx
//DUPDEF   BuildingClass *v3; // esi
//DUPDEF   House *owner; // ecx
//DUPDEF   int v6; // eax
//DUPDEF   int v7; // ebp
//DUPDEF   int v8; // eax
//DUPDEF   int v9; // eax
//DUPDEF   char *pad_280; // edx
//DUPDEF   int v13; // eax
//DUPDEF   int v15; // eax
//DUPDEF   int v16; // et2
//DUPDEF   BuildingTypeClass *Type; // ecx
//DUPDEF   int v18; // edi
//DUPDEF   int v19; // ebp
//DUPDEF   BuildingTypeClass *v20; // edx
//DUPDEF   int v21; // ebx
//DUPDEF   int v22; // edi
//DUPDEF   int Strength; // eax
//DUPDEF   BOOL v25; // ebx
//DUPDEF   int v26; // ebp
//DUPDEF   int v27; // edi
//DUPDEF   int *v28; // eax
//DUPDEF   ParticleSystemClass *damageParticles; // ecx
//DUPDEF   int *Anims; // [esp+10h] [ebp-14h]
//DUPDEF   int ProductionFrame; // [esp+14h] [ebp-10h]
//DUPDEF   int v35; // [esp+1Ch] [ebp-8h]
//DUPDEF 
//DUPDEF   v3 = v2; /*0x45063c*/
//DUPDEF   if ( ((unsigned int *)v2)[0]->iqLevel2 < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5188) /*0x450683*/
//DUPDEF     || (*((int (**)(void))v2->vtable1 + 97))() == 18
//DUPDEF     || (*((int (**)(BuildingClass *))v3->vtable1 + 97))(v3) == 19
//DUPDEF     || !(*((uint8_t (**)(BuildingClass *))v3->vtable1 + 37))(v3) )
//DUPDEF   {
//DUPDEF     goto LABEL_22; /*0x45068b*/
//DUPDEF   }
//DUPDEF   if ( (*(int (**)(int *))(((unsigned int *)v3)[0]->arrayIndex + 24))(&((unsigned int *)v3)[0]->arrayIndex) < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] /*0x4506ac*/
//DUPDEF                                                                                               + 5976) )
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)&dword_A8B238 || v3->BuildingClass_field_bool_6DC ) /*0x45078a*/
//DUPDEF     {
//DUPDEF       if ( ((unsigned int *)v3)[0] ) /*0x450794*/
//DUPDEF       {
//DUPDEF         if ( *(unsigned int *)&((unsigned int *)v3)[0]->__pad_13C[148] >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5212) /*0x4507eb*/
//DUPDEF           && (unsigned int)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 50) < *(unsigned int *)&((unsigned int *)v3)[0]->__pad_13C[152]
//DUPDEF           && !((unsigned int *)v3)[0]
//DUPDEF           && v3->Type->Factory[0] != 7 )
//DUPDEF         {
//DUPDEF           BuildingClass::GetHealthRatio(v3); /*0x4507ef*/
//DUPDEF           _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4507f4*/
//DUPDEF           __asm /*0x4507fa*/
//DUPDEF           {
//DUPDEF             fcomp qword ptr [ecx+1708h]
//DUPDEF             fnstsw ax
//DUPDEF           }
//DUPDEF           if ( (_AX & 0x100) != 0 ) /*0x450805*/
//DUPDEF             (*((void (**)(BuildingClass *, int))v3->vtable1 + 104))(v3, 1); /*0x45080d*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF   LABEL_22:
//DUPDEF     IDA_LOBYTE(v13) = v3->IsBeingRepaired; /*0x450813*/
//DUPDEF     if ( !(unsigned char)v13 ) /*0x45081b*/
//DUPDEF       return v13; /*0x45081b*/
//DUPDEF     goto LABEL_23; /*0x45081b*/
//DUPDEF   }
//DUPDEF   owner = (House *)((unsigned int *)v3)[0]; /*0x4506b2*/
//DUPDEF   if ( owner->__pad_1F0[85] ) /*0x4506b8*/
//DUPDEF     goto LABEL_22; /*0x4506c0*/
//DUPDEF   if ( !v3->IsBeingRepaired ) /*0x4506c6*/
//DUPDEF   {
//DUPDEF     if ( v3->HasBeenCaptured || v3->__pad_6B8[19] || (uint8_t)House::IsCurrentPlayer(owner) ) /*0x4506e8*/
//DUPDEF     {
//DUPDEF       ((unsigned int *)v3)[0]->repairing = 1; /*0x4506ff*/
//DUPDEF       (*((void (**)(BuildingClass *, int))v3->vtable1 + 103))(v3, 1); /*0x450708*/
//DUPDEF       if ( !(uint8_t)House::IsCurrentPlayer((House *)((unsigned int *)v3)[0]) ) /*0x450714*/
//DUPDEF       {
//DUPDEF         _EDI = ((unsigned int *)v3)[0]; /*0x450721*/
//DUPDEF         __asm /*0x450727*/
//DUPDEF         {
//DUPDEF           fld qword ptr [edi+1C0h]
//DUPDEF           fmul ds:dbl_7E44B8
//DUPDEF         }
//DUPDEF         IDA_LOWORD(v6) = Math::RoundToInt(a2); /*0x450733*/
//DUPDEF         __asm /*0x450738*/
//DUPDEF         {
//DUPDEF           fld qword ptr [edi+1C0h]
//DUPDEF           fmul ds:dbl_7E44B0
//DUPDEF         }
//DUPDEF         v7 = v6; /*0x450744*/
//DUPDEF         IDA_LOWORD(v8) = Math::RoundToInt(a2); /*0x450746*/
//DUPDEF         v9 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v8, v7); /*0x450759*/
//DUPDEF         pad_280 = ((unsigned int *)v3)[0]->__pad_280; /*0x45076a*/
//DUPDEF         *(unsigned int *)pad_280 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x450770*/
//DUPDEF         *((unsigned int *)pad_280 + 1) = v35; /*0x450776*/
//DUPDEF         *((unsigned int *)pad_280 + 2) = v9; /*0x450779*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     goto LABEL_22; /*0x45077c*/
//DUPDEF   }
//DUPDEF   LABEL_23:
//DUPDEF   _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450821*/
//DUPDEF   __asm /*0x450826*/
//DUPDEF   {
//DUPDEF     fld qword ptr [eax+16E0h]
//DUPDEF     fmul ds:dbl_7E27F8
//DUPDEF   }
//DUPDEF   IDA_LOWORD(v15) = Math::RoundToInt(a2); /*0x450832*/
//DUPDEF   v16 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] % v15; /*0x45083f*/
//DUPDEF   v13 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] / v15; /*0x45083f*/
//DUPDEF   if ( !v16 )
//DUPDEF   {
//DUPDEF     Type = v3->Type; /*0x45084f*/
//DUPDEF     v3->NeedsRepairs = v3->NeedsRepairs == 0; /*0x45085a*/
//DUPDEF     v18 = (*((int (**)(BuildingTypeClass *))Type->vtable1 + 44))(Type); /*0x45086e*/
//DUPDEF     v19 = (*((int (**)(BuildingTypeClass *))v3->Type->vtable1 + 45))(v3->Type); /*0x45087a*/
//DUPDEF     ProductionFrame = BuildingClass::GetProductionFrame(v3); /*0x450881*/
//DUPDEF     v13 = (*(int (**)(int *))(((unsigned int *)v3)[0]->arrayIndex + 24))(&((unsigned int *)v3)[0]->arrayIndex); /*0x450891*/
//DUPDEF     if ( v13 < v18 )
//DUPDEF     {
//DUPDEF       v3->IsBeingRepaired = 0; /*0x4509b4*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       HouseClass::ProcessPowerDrain((int *)((unsigned int *)v3)[0], v18); /*0x4508a3*/
//DUPDEF       v20 = v3->Type; /*0x4508ae*/
//DUPDEF       v21 = v19 + ((unsigned int *)v3)[0]; /*0x4508b4*/
//DUPDEF       v22 = v19 + ((unsigned int *)v3)[0]; /*0x4508b6*/
//DUPDEF       ((unsigned int *)v3)[0] = v21; /*0x4508b8*/
//DUPDEF       ((unsigned int *)v3)[0] = v22; /*0x4508bb*/
//DUPDEF       Strength = ((unsigned int *)v20)[0]; /*0x4508be*/
//DUPDEF       if ( v21 >= Strength ) /*0x4508c8*/
//DUPDEF       {
//DUPDEF         ((unsigned int *)v3)[0] = Strength; /*0x4508ca*/
//DUPDEF         ((unsigned int *)v3)[0] = Strength; /*0x4508cd*/
//DUPDEF         v3->IsBeingRepaired = 0; /*0x4508d0*/
//DUPDEF       }
//DUPDEF       BuildingClass::GetHealthRatio(v3); /*0x4508d9*/
//DUPDEF       _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4508de*/
//DUPDEF       __asm /*0x4508e3*/
//DUPDEF       {
//DUPDEF         fcomp qword ptr [eax+1700h]
//DUPDEF         fnstsw ax
//DUPDEF       }
//DUPDEF       v25 = (_EAX & 0x4100) != 0; /*0x4508ee*/
//DUPDEF       if ( v3->IsDamaged != v25 )
//DUPDEF       {
//DUPDEF         v26 = 0; /*0x450907*/
//DUPDEF         v3->IsDamaged = v25; /*0x450909*/
//DUPDEF         v27 = 0; /*0x45090f*/
//DUPDEF         Anims = v3->Anims; /*0x450911*/
//DUPDEF         do
//DUPDEF         {
//DUPDEF           if ( *Anims )
//DUPDEF           {
//DUPDEF             v28 = v25 ? &v3->Type->BuildingAnim[v27 + 16] : &v3->Type->BuildingAnim[v27 + 12];
//DUPDEF             if ( v28 && *(unsigned char *)v28 ) /*0x450942*/
//DUPDEF               ((BuildingClass*)(v3))->PlayAnim((int)Anims, v28, v26, v25, 0, 0); /*0x450950*/
//DUPDEF           }
//DUPDEF           v27 += 17; /*0x450959*/
//DUPDEF           ++v26; /*0x45095c*/
//DUPDEF           ++Anims; /*0x450966*/
//DUPDEF         }
//DUPDEF         while ( v27 < 357 );
//DUPDEF       }
//DUPDEF       BuildingClass::GetHealthRatio(v3); /*0x45096e*/
//DUPDEF       _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450973*/
//DUPDEF       __asm /*0x450979*/
//DUPDEF       {
//DUPDEF         fcomp qword ptr [edx+1700h]
//DUPDEF         fnstsw ax
//DUPDEF       }
//DUPDEF       if ( (_AX & 0x4100) == 0 ) /*0x450984*/
//DUPDEF       {
//DUPDEF         damageParticles = ((unsigned int *)v3)[0]; /*0x450986*/
//DUPDEF         if ( damageParticles ) /*0x45098e*/
//DUPDEF           (*((void (**)(ParticleSystemClass *))damageParticles->vtable1 + 62))(damageParticles); /*0x450992*/
//DUPDEF       }
//DUPDEF       v13 = BuildingClass::GetProductionFrame(v3); /*0x45099a*/
//DUPDEF       if ( v13 != ProductionFrame ) /*0x4509a3*/
//DUPDEF         ((unsigned int *)v3)[0] = 1; /*0x4509a5*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return v13; /*0x4509ac*/
//DUPDEF }
//DUPDEF   if ( (*(int (**)(int *))(v3->owner->arrayIndex + 24))(&v3->owner->arrayIndex) < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5976) ) /*0x4506ac*/
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)&unk_A8B238 || v3->BuildingClass_field_bool_6DC ) /*0x45078a*/
//DUPDEF     {
//DUPDEF       if ( v3->hasBeenAttacked ) /*0x450794*/
//DUPDEF       {
//DUPDEF         if ( *(unsigned int *)&v3->owner->__pad_13C[148] >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5212) /*0x4507eb*/
//DUPDEF           && (unsigned int)Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, 50) < *(unsigned int *)&v3->owner->__pad_13C[152]
//DUPDEF           && !v3->attachedTag
//DUPDEF           && v3->Type->Factory[0] != 7 )
//DUPDEF         {
//DUPDEF           BuildingClass::GetHealthRatio(v3); /*0x4507ef*/
//DUPDEF           _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4507f4*/
//DUPDEF           __asm /*0x4507fa*/
//DUPDEF           {
//DUPDEF             fcomp qword ptr [ecx+1708h]
//DUPDEF             fnstsw ax
//DUPDEF           }
//DUPDEF           if ( (_AX & 0x100) != 0 ) /*0x450805*/
//DUPDEF             (*((void (**)(BuildingClass *, int))v3->vtable0 + 104))(v3, 1); /*0x45080d*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF   LABEL_22:
//DUPDEF     IDA_LOBYTE(v13) = v3->IsBeingRepaired; /*0x450813*/
//DUPDEF     if ( !(unsigned char)v13 ) /*0x45081b*/
//DUPDEF       return v13; /*0x45081b*/
//DUPDEF     goto LABEL_23; /*0x45081b*/
//DUPDEF   }
//DUPDEF   owner = (House *)v3->owner; /*0x4506b2*/
//DUPDEF   if ( owner->__pad_1F0[85] ) /*0x4506b8*/
//DUPDEF     goto LABEL_22; /*0x4506c0*/
//DUPDEF   if ( !v3->IsBeingRepaired ) /*0x4506c6*/
//DUPDEF   {
//DUPDEF     if ( v3->HasBeenCaptured || v3->__pad_6B8[19] || (uint8_t)House::IsCurrentPlayer(owner) ) /*0x4506e8*/
//DUPDEF     {
//DUPDEF       v3->owner->repairing = 1; /*0x4506ff*/
//DUPDEF       (*((void (**)(BuildingClass *, int))v3->vtable0 + 103))(v3, 1); /*0x450708*/
//DUPDEF       if ( !(uint8_t)House::IsCurrentPlayer((House *)v3->owner) ) /*0x450714*/
//DUPDEF       {
//DUPDEF         _EDI = v3->owner; /*0x450721*/
//DUPDEF         __asm /*0x450727*/
//DUPDEF         {
//DUPDEF           fld qword ptr [edi+1C0h]
//DUPDEF           fmul ds:dbl_7E44B8
//DUPDEF         }
//DUPDEF         IDA_LOWORD(v6) = Math::RoundToInt(a2); /*0x450733*/
//DUPDEF         __asm /*0x450738*/
//DUPDEF         {
//DUPDEF           fld qword ptr [edi+1C0h]
//DUPDEF           fmul ds:dbl_7E44B0
//DUPDEF         }
//DUPDEF         v7 = v6; /*0x450744*/
//DUPDEF         IDA_LOWORD(v8) = Math::RoundToInt(a2); /*0x450746*/
//DUPDEF         v9 = Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, v8, v7); /*0x450759*/
//DUPDEF         pad_280 = v3->owner->__pad_280; /*0x45076a*/
//DUPDEF         *(unsigned int *)pad_280 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x450770*/
//DUPDEF         *((unsigned int *)pad_280 + 1) = v35; /*0x450776*/
//DUPDEF         *((unsigned int *)pad_280 + 2) = v9; /*0x450779*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     goto LABEL_22; /*0x45077c*/
//DUPDEF   }
//DUPDEF   LABEL_23:
//DUPDEF   _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450821*/
//DUPDEF   __asm /*0x450826*/
//DUPDEF   {
//DUPDEF     fld qword ptr [eax+16E0h]
//DUPDEF     fmul ds:dbl_7E27F8
//DUPDEF   }
//DUPDEF   IDA_LOWORD(v15) = Math::RoundToInt(a2); /*0x450832*/
//DUPDEF   v16 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416] % v15; /*0x45083f*/
//DUPDEF   v13 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416] / v15; /*0x45083f*/
//DUPDEF   if ( !v16 )
//DUPDEF   {
//DUPDEF     Type = v3->Type; /*0x45084f*/
//DUPDEF     v3->NeedsRepairs = v3->NeedsRepairs == 0; /*0x45085a*/
//DUPDEF     v18 = (*((int (**)(BuildingTypeClass *))Type->vtable0 + 44))(Type); /*0x45086e*/
//DUPDEF     v19 = (*((int (**)(BuildingTypeClass *))v3->Type->vtable0 + 45))(v3->Type); /*0x45087a*/
//DUPDEF     ProductionFrame = BuildingClass::GetProductionFrame(v3); /*0x450881*/
//DUPDEF     v13 = (*(int (**)(int *))(v3->owner->arrayIndex + 24))(&v3->owner->arrayIndex); /*0x450891*/
//DUPDEF     if ( v13 < v18 )
//DUPDEF     {
//DUPDEF       v3->IsBeingRepaired = 0; /*0x4509b4*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       HouseClass::ProcessPowerDrain((int *)v3->owner, v18); /*0x4508a3*/
//DUPDEF       v20 = v3->Type; /*0x4508ae*/
//DUPDEF       v21 = v19 + v3->health; /*0x4508b4*/
//DUPDEF       v22 = v19 + v3->estimatedHealth; /*0x4508b6*/
//DUPDEF       v3->health = v21; /*0x4508b8*/
//DUPDEF       v3->estimatedHealth = v22; /*0x4508bb*/
//DUPDEF       Strength = v20->Strength; /*0x4508be*/
//DUPDEF       if ( v21 >= Strength ) /*0x4508c8*/
//DUPDEF       {
//DUPDEF         v3->health = Strength; /*0x4508ca*/
//DUPDEF         v3->estimatedHealth = Strength; /*0x4508cd*/
//DUPDEF         v3->IsBeingRepaired = 0; /*0x4508d0*/
//DUPDEF       }
//DUPDEF       BuildingClass::GetHealthRatio(v3); /*0x4508d9*/
//DUPDEF       _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4508de*/
//DUPDEF       __asm /*0x4508e3*/
//DUPDEF       {
//DUPDEF         fcomp qword ptr [eax+1700h]
//DUPDEF         fnstsw ax
//DUPDEF       }
//DUPDEF       v25 = (_EAX & 0x4100) != 0; /*0x4508ee*/
//DUPDEF       if ( v3->IsDamaged != v25 )
//DUPDEF       {
//DUPDEF         v26 = 0; /*0x450907*/
//DUPDEF         v3->IsDamaged = v25; /*0x450909*/
//DUPDEF         v27 = 0; /*0x45090f*/
//DUPDEF         Anims = v3->Anims; /*0x450911*/
//DUPDEF         do
//DUPDEF         {
//DUPDEF           if ( *Anims )
//DUPDEF           {
//DUPDEF             v28 = v25 ? &v3->Type->BuildingAnim[v27 + 16] : &v3->Type->BuildingAnim[v27 + 12];
//DUPDEF             if ( v28 && *(unsigned char *)v28 ) /*0x450942*/
//DUPDEF               ((BuildingClass*)(v3))->PlayAnim((int)Anims, v28, v26, v25, 0, 0); /*0x450950*/
//DUPDEF           }
//DUPDEF           v27 += 17; /*0x450959*/
//DUPDEF           ++v26; /*0x45095c*/
//DUPDEF           ++Anims; /*0x450966*/
//DUPDEF         }
//DUPDEF         while ( v27 < 357 );
//DUPDEF       }
//DUPDEF       BuildingClass::GetHealthRatio(v3); /*0x45096e*/
//DUPDEF       _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450973*/
//DUPDEF       __asm /*0x450979*/
//DUPDEF       {
//DUPDEF         fcomp qword ptr [edx+1700h]
//DUPDEF         fnstsw ax
//DUPDEF       }
//DUPDEF       if ( (_AX & 0x4100) == 0 ) /*0x450984*/
//DUPDEF       {
//DUPDEF         damageParticles = v3->damageParticles; /*0x450986*/
//DUPDEF         if ( damageParticles ) /*0x45098e*/
//DUPDEF           (*((void (**)(ParticleSystemClass *))damageParticles->vtable0 + 62))(damageParticles); /*0x450992*/
//DUPDEF       }
//DUPDEF       v13 = BuildingClass::GetProductionFrame(v3); /*0x45099a*/
//DUPDEF       if ( v13 != ProductionFrame ) /*0x4509a3*/
//DUPDEF         v3->needsRedraw = 1; /*0x4509a5*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return v13; /*0x4509ac*/
//DUPDEF }
//DUPDEF   if ( (*(int (**)(int *))(v3->owner->arrayIndex + 24))(&v3->owner->arrayIndex) < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5976) ) /*0x4506ac*/
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)&unk_A8B238 || v3->BuildingClass_field_bool_6DC ) /*0x45078a*/
//DUPDEF     {
//DUPDEF       if ( v3->hasBeenAttacked ) /*0x450794*/
//DUPDEF       {
//DUPDEF         if ( *(unsigned int *)&v3->owner->__pad_13C[148] >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5212) /*0x4507eb*/
//DUPDEF           && (unsigned int)Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, 50) < *(unsigned int *)&v3->owner->__pad_13C[152]
//DUPDEF           && !v3->attachedTag
//DUPDEF           && v3->Type->Factory[0] != 7 )
//DUPDEF         {
//DUPDEF           BuildingClass::GetHealthRatio(v3); /*0x4507ef*/
//DUPDEF           _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4507f4*/
//DUPDEF           __asm /*0x4507fa*/
//DUPDEF           {
//DUPDEF             fcomp qword ptr [ecx+1708h]
//DUPDEF             fnstsw ax
//DUPDEF           }
//DUPDEF           if ( (_AX & 0x100) != 0 ) /*0x450805*/
//DUPDEF             (*((void (**)(BuildingClass *, int))v3->vtable0 + 104))(v3, 1); /*0x45080d*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF   LABEL_22:
//DUPDEF     IDA_LOBYTE(v13) = v3->IsBeingRepaired; /*0x450813*/
//DUPDEF     if ( !(unsigned char)v13 ) /*0x45081b*/
//DUPDEF       return v13; /*0x45081b*/
//DUPDEF     goto LABEL_23; /*0x45081b*/
//DUPDEF   }
//DUPDEF   owner = (House *)v3->owner; /*0x4506b2*/
//DUPDEF   if ( owner->__pad_1F0[85] ) /*0x4506b8*/
//DUPDEF     goto LABEL_22; /*0x4506c0*/
//DUPDEF   if ( !v3->IsBeingRepaired ) /*0x4506c6*/
//DUPDEF   {
//DUPDEF     if ( v3->HasBeenCaptured || v3->__pad_6B8[19] || (uint8_t)House::IsCurrentPlayer(owner) ) /*0x4506e8*/
//DUPDEF     {
//DUPDEF       v3->owner->repairing = 1; /*0x4506ff*/
//DUPDEF       (*((void (**)(BuildingClass *, int))v3->vtable0 + 103))(v3, 1); /*0x450708*/
//DUPDEF       if ( !(uint8_t)House::IsCurrentPlayer((House *)v3->owner) ) /*0x450714*/
//DUPDEF       {
//DUPDEF         _EDI = v3->owner; /*0x450721*/
//DUPDEF         __asm /*0x450727*/
//DUPDEF         {
//DUPDEF           fld qword ptr [edi+1C0h]
//DUPDEF           fmul ds:dbl_7E44B8
//DUPDEF         }
//DUPDEF         IDA_LOWORD(v6) = Math::RoundToInt(a2); /*0x450733*/
//DUPDEF         __asm /*0x450738*/
//DUPDEF         {
//DUPDEF           fld qword ptr [edi+1C0h]
//DUPDEF           fmul ds:dbl_7E44B0
//DUPDEF         }
//DUPDEF         v7 = v6; /*0x450744*/
//DUPDEF         IDA_LOWORD(v8) = Math::RoundToInt(a2); /*0x450746*/
//DUPDEF         v9 = Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, v8, v7); /*0x450759*/
//DUPDEF         pad_280 = v3->owner->__pad_280; /*0x45076a*/
//DUPDEF         *(unsigned int *)pad_280 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x450770*/
//DUPDEF         *((unsigned int *)pad_280 + 1) = v35; /*0x450776*/
//DUPDEF         *((unsigned int *)pad_280 + 2) = v9; /*0x450779*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     goto LABEL_22; /*0x45077c*/
//DUPDEF   }
//DUPDEF   LABEL_23:
//DUPDEF   _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450821*/
//DUPDEF   __asm /*0x450826*/
//DUPDEF   {
//DUPDEF     fld qword ptr [eax+16E0h]
//DUPDEF     fmul ds:dbl_7E27F8
//DUPDEF   }
//DUPDEF   IDA_LOWORD(v15) = Math::RoundToInt(a2); /*0x450832*/
//DUPDEF   v16 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416] % v15; /*0x45083f*/
//DUPDEF   v13 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416] / v15; /*0x45083f*/
//DUPDEF   if ( !v16 )
//DUPDEF   {
//DUPDEF     Type = v3->Type; /*0x45084f*/
//DUPDEF     v3->NeedsRepairs = v3->NeedsRepairs == 0; /*0x45085a*/
//DUPDEF     v18 = (*((int (**)(BuildingTypeClass *))Type->vtable0 + 44))(Type); /*0x45086e*/
//DUPDEF     v19 = (*((int (**)(BuildingTypeClass *))v3->Type->vtable0 + 45))(v3->Type); /*0x45087a*/
//DUPDEF     ProductionFrame = BuildingClass::GetProductionFrame(v3); /*0x450881*/
//DUPDEF     v13 = (*(int (**)(int *))(v3->owner->arrayIndex + 24))(&v3->owner->arrayIndex); /*0x450891*/
//DUPDEF     if ( v13 < v18 )
//DUPDEF     {
//DUPDEF       v3->IsBeingRepaired = 0; /*0x4509b4*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       HouseClass::ProcessPowerDrain((int *)v3->owner, v18); /*0x4508a3*/
//DUPDEF       v20 = v3->Type; /*0x4508ae*/
//DUPDEF       v21 = v19 + v3->health; /*0x4508b4*/
//DUPDEF       v22 = v19 + v3->estimatedHealth; /*0x4508b6*/
//DUPDEF       v3->health = v21; /*0x4508b8*/
//DUPDEF       v3->estimatedHealth = v22; /*0x4508bb*/
//DUPDEF       Strength = v20->Strength; /*0x4508be*/
//DUPDEF       if ( v21 >= Strength ) /*0x4508c8*/
//DUPDEF       {
//DUPDEF         v3->health = Strength; /*0x4508ca*/
//DUPDEF         v3->estimatedHealth = Strength; /*0x4508cd*/
//DUPDEF         v3->IsBeingRepaired = 0; /*0x4508d0*/
//DUPDEF       }
//DUPDEF       BuildingClass::GetHealthRatio(v3); /*0x4508d9*/
//DUPDEF       _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4508de*/
//DUPDEF       __asm /*0x4508e3*/
//DUPDEF       {
//DUPDEF         fcomp qword ptr [eax+1700h]
//DUPDEF         fnstsw ax
//DUPDEF       }
//DUPDEF       v25 = (_EAX & 0x4100) != 0; /*0x4508ee*/
//DUPDEF       if ( v3->IsDamaged != v25 )
//DUPDEF       {
//DUPDEF         v26 = 0; /*0x450907*/
//DUPDEF         v3->IsDamaged = v25; /*0x450909*/
//DUPDEF         v27 = 0; /*0x45090f*/
//DUPDEF         Anims = v3->Anims; /*0x450911*/
//DUPDEF         do
//DUPDEF         {
//DUPDEF           if ( *Anims )
//DUPDEF           {
//DUPDEF             v28 = v25 ? &v3->Type->BuildingAnim[v27 + 16] : &v3->Type->BuildingAnim[v27 + 12];
//DUPDEF             if ( v28 && *(unsigned char *)v28 ) /*0x450942*/
//DUPDEF               ((BuildingClass*)(v3))->PlayAnim((int)Anims, v28, v26, v25, 0, 0); /*0x450950*/
//DUPDEF           }
//DUPDEF           v27 += 17; /*0x450959*/
//DUPDEF           ++v26; /*0x45095c*/
//DUPDEF           ++Anims; /*0x450966*/
//DUPDEF         }
//DUPDEF         while ( v27 < 357 );
//DUPDEF       }
//DUPDEF       BuildingClass::GetHealthRatio(v3); /*0x45096e*/
//DUPDEF       _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x450973*/
//DUPDEF       __asm /*0x450979*/
//DUPDEF       {
//DUPDEF         fcomp qword ptr [edx+1700h]
//DUPDEF         fnstsw ax
//DUPDEF       }
//DUPDEF       if ( (_AX & 0x4100) == 0 ) /*0x450984*/
//DUPDEF       {
//DUPDEF         damageParticles = v3->damageParticles; /*0x450986*/
//DUPDEF         if ( damageParticles ) /*0x45098e*/
//DUPDEF           (*((void (**)(ParticleSystemClass *))damageParticles->vtable0 + 62))(damageParticles); /*0x450992*/
//DUPDEF       }
//DUPDEF       v13 = BuildingClass::GetProductionFrame(v3); /*0x45099a*/
//DUPDEF       if ( v13 != ProductionFrame ) /*0x4509a3*/
//DUPDEF         v3->needsRedraw = 1; /*0x4509a5*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return v13; /*0x4509ac*/
//DUPDEF }
//DUPDEF   if ( (*(int (**)(int))(*(unsigned int *)(*(&this->attachedTag5) + 36) + 24))(*(&this->attachedTag5) + 36) < g_RulesClass_Instance->LightningCellSpread ) /*0x4506ac*/
//DUPDEF   {
//DUPDEF     if ( g_GameMode_Current[0] || this->BuildingClass_field_bool_6DC ) /*0x45078a*/
//DUPDEF     {
//DUPDEF       if ( this->q3D1 ) /*0x450794*/
//DUPDEF       {
//DUPDEF         if ( *(unsigned int *)(*(&this->attachedTag5) + 464) >= *(unsigned int *)&g_RulesClass_Instance->__pad_C3C[2080] /*0x4507eb*/
//DUPDEF           && (unsigned int)Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 50) < *(unsigned int *)(*(&this->attachedTag5) + 468)
//DUPDEF           && !*(&this->vtable23)
//DUPDEF           && *(unsigned int *)(*(&this->needsRedraw8) + 3768) != 7 )
//DUPDEF         {
//DUPDEF           BuildingClass::GetHealthRatio(this); /*0x4507ef*/
//DUPDEF           _ECX = g_RulesClass_Instance; /*0x4507f4*/
//DUPDEF           __asm /*0x4507fa*/
//DUPDEF           {
//DUPDEF             fcomp qword ptr [ecx+1708h]
//DUPDEF             fnstsw ax
//DUPDEF }
//DUPDEF           if ( (_AX & 0x100) != 0 ) /*0x450805*/
//DUPDEF             this->ToggleSellMode(1); /*0x45080d*/
//DUPDEF }
//DUPDEF }
//DUPDEF }
//DUPDEF   LABEL_22:
//DUPDEF     IDA_LOBYTE(v12) = this->IsBeingRepaired; /*0x450813*/
//DUPDEF     if ( !(unsigned char)v12 ) /*0x45081b*/
//DUPDEF       return v12; /*0x45081b*/
//DUPDEF     goto LABEL_23; /*0x45081b*/
//DUPDEF }
//DUPDEF   v3 = *(&this->attachedTag5); /*0x4506b2*/
//DUPDEF   if ( *(unsigned char *)(v3 + 581) ) /*0x4506b8*/
//DUPDEF     goto LABEL_22; /*0x4506c0*/
//DUPDEF   if ( !this->IsBeingRepaired ) /*0x4506c6*/
//DUPDEF   {
//DUPDEF     if ( this->HasBeenCaptured || this->q6CB || (uint8_t)House::IsCurrentPlayer((void *)v3) ) /*0x4506e8*/
//DUPDEF     {
//DUPDEF       *(unsigned char *)(*(&this->attachedTag5) + 581) = 1; /*0x4506ff*/
//DUPDEF       this->ToggleRepairMode(1); /*0x450708*/
//DUPDEF       if ( !(uint8_t)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x450714*/
//DUPDEF       {
//DUPDEF         _EDI = *(&this->attachedTag5); /*0x450721*/
//DUPDEF         __asm /*0x450727*/
//DUPDEF         {
//DUPDEF           fld qword ptr [edi+1C0h]
//DUPDEF           fmul ds:dbl_7E44B8
//DUPDEF         }
//DUPDEF         IDA_LOWORD(v5) = Math::RoundToInt(a2); /*0x450733*/
//DUPDEF         __asm /*0x450738*/
//DUPDEF         {
//DUPDEF           fld qword ptr [edi+1C0h]
//DUPDEF           fmul ds:dbl_7E44B0
//DUPDEF         }
//DUPDEF         v6 = v5; /*0x450744*/
//DUPDEF         IDA_LOWORD(v7) = Math::RoundToInt(a2); /*0x450746*/
//DUPDEF         v8 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, v7, v6); /*0x450759*/
//DUPDEF         v9 = (unsigned int *)(*(&this->attachedTag5) + 640); /*0x45076a*/
//DUPDEF         *v9 = g_CurrentFrame; /*0x450770*/
//DUPDEF         v9[1] = v34; /*0x450776*/
//DUPDEF         v9[2] = v8; /*0x450779*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     goto LABEL_22; /*0x45077c*/
//DUPDEF }
//DUPDEF   LABEL_23:
//DUPDEF   _EAX = g_RulesClass_Instance; /*0x450821*/
//DUPDEF   __asm /*0x450826*/
//DUPDEF   {
//DUPDEF     fld qword ptr [eax+16E0h]
//DUPDEF     fmul ds:dbl_7E27F8
//DUPDEF }
//DUPDEF   IDA_LOWORD(v14) = Math::RoundToInt(a2); /*0x450832*/
//DUPDEF   v15 = (int)g_CurrentFrame % v14; /*0x45083f*/
//DUPDEF   v12 = (int)g_CurrentFrame / v14; /*0x45083f*/
//DUPDEF   if ( !v15 )
//DUPDEF   {
//DUPDEF     v16 = *(&this->needsRedraw8); /*0x45084f*/
//DUPDEF     this->NeedsRepairs = this->NeedsRepairs == 0; /*0x45085a*/
//DUPDEF     v17 = (*(int (**)(int))(v16->MainVoxel)(v16); /*0x45086e*/
//DUPDEF     v18 = (*(int (**)(unsigned int))(*(unsigned int *)*(&this->needsRedraw8) + 180))(*(&this->needsRedraw8)); /*0x45087a*/
//DUPDEF     ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x450881*/
//DUPDEF     v12 = (*(int (**)(int))(*(unsigned int *)(*(&this->attachedTag5) + 36) + 24))(*(&this->attachedTag5) + 36); /*0x450891*/
//DUPDEF     if ( v12 < v17 )
//DUPDEF     {
//DUPDEF       this->IsBeingRepaired = 0; /*0x4509b4*/
//DUPDEF }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       HouseClass::ProcessPowerDrain((int *)*(&this->attachedTag5), v17); /*0x4508a3*/
//DUPDEF       v19 = *(&this->needsRedraw8); /*0x4508ae*/
//DUPDEF       v20 = v18 + *(&this->vtable37); /*0x4508b4*/
//DUPDEF       v21 = v18 + *(&this->vtable38); /*0x4508b6*/
//DUPDEF       *(&this->vtable37) = v20; /*0x4508b8*/
//DUPDEF       *(&this->vtable38) = v21; /*0x4508bb*/
//DUPDEF       v22 = v19->Strength; /*0x4508be*/
//DUPDEF       if ( v20 >= v22 ) /*0x4508c8*/
//DUPDEF       {
//DUPDEF         *(&this->vtable37) = v22; /*0x4508ca*/
//DUPDEF         *(&this->vtable38) = v22; /*0x4508cd*/
//DUPDEF         this->IsBeingRepaired = 0; /*0x4508d0*/
//DUPDEF }
//DUPDEF       BuildingClass::GetHealthRatio(this); /*0x4508d9*/
//DUPDEF       _EAX = g_RulesClass_Instance; /*0x4508de*/
//DUPDEF       __asm /*0x4508e3*/
//DUPDEF       {
//DUPDEF         fcomp qword ptr [eax+1700h]
//DUPDEF         fnstsw ax
//DUPDEF }
//DUPDEF       v24 = (IDA_BYTE1(_EAX) & 0x41) != 0; /*0x4508ee*/
//DUPDEF       if ( this->IsDamaged != v24 )
//DUPDEF       {
//DUPDEF         v25 = 0; /*0x450907*/
//DUPDEF         this->IsDamaged = v24; /*0x450909*/
//DUPDEF         v26 = 0; /*0x45090f*/
//DUPDEF         v32 = &this->Anims; /*0x450911*/
//DUPDEF         do
//DUPDEF         {
//DUPDEF           if ( *v32 )
//DUPDEF           {
//DUPDEF             v27 = (unsigned char *)(v24 ? v26 + *(&this->needsRedraw8) + 3932 : v26 + *(&this->needsRedraw8) + 3916);
//DUPDEF             if ( v27 && *v27 ) /*0x450942*/
//DUPDEF               ((BuildingClass*)(this))->PlayAnim((int)v32, v27, v25, v24, 0, 0); /*0x450950*/
//DUPDEF }
//DUPDEF           v26 += 68; /*0x450959*/
//DUPDEF           ++v25; /*0x45095c*/
//DUPDEF           ++v32; /*0x450966*/
//DUPDEF }
//DUPDEF         while ( v26 < 1428 );
//DUPDEF }
//DUPDEF       BuildingClass::GetHealthRatio(this); /*0x45096e*/
//DUPDEF       _EDX = g_RulesClass_Instance; /*0x450973*/
//DUPDEF       __asm /*0x450979*/
//DUPDEF       {
//DUPDEF         fcomp qword ptr [edx+1700h]
//DUPDEF         fnstsw ax
//DUPDEF }
//DUPDEF       if ( (_AX & 0x4100) == 0 ) /*0x450984*/
//DUPDEF       {
//DUPDEF         v30 = *(&this->u32_4C6); /*0x450986*/
//DUPDEF         if ( v30 ) /*0x45098e*/
//DUPDEF           (*(void (**)(int))(v30->q0F8)(v30); /*0x450992*/
//DUPDEF }
//DUPDEF       v12 = BuildingClass::GetProductionFrame(this); /*0x45099a*/
//DUPDEF       if ( v12 != ProductionFrame ) /*0x4509a3*/
//DUPDEF         this->needsRedraw = 1; /*0x4509a5*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return v12; /*0x4509ac*/
//DUPDEF }
//DUPDEF   if ( (*(int (**)(int))(*(unsigned int *)(*(&this->ptr_345) + 36) + 24))(*(&this->ptr_345) + 36) < g_RulesClass_Instance[1].PrerequisiteRadar[3] ) /*0x4506ac*/
//DUPDEF   {
//DUPDEF     if ( (g_GameMode_Current[0] || this->u32_6DC) /*0x450805*/
//DUPDEF       && this->u32_3D1
//DUPDEF       && *(unsigned int *)(*(&this->ptr_345) + 464) >= g_RulesClass_Instance[1].SelfHealUnitAmount
//DUPDEF       && (unsigned int)Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 50) < *(unsigned int *)(*(&this->ptr_345) + 468)
//DUPDEF       && !*(&this->u32_43)
//DUPDEF       && *(unsigned int *)(*(&this->u32_808) + 3768) != 7
//DUPDEF // 0x5f5c60
//DUPDEF       && BuildingClass::GetHealthRatio(this) < *(double *)&g_RulesClass_Instance[1].ChronoSparkle1 )
//DUPDEF     {
//DUPDEF       this->vt_slot_416(1); /*0x45080d*/
//DUPDEF }
//DUPDEF   LABEL_22:
//DUPDEF     IDA_LOBYTE(v8) = this->u32_6E8; /*0x450813*/
//DUPDEF     if ( !(unsigned char)v8 ) /*0x45081b*/
//DUPDEF       return v8; /*0x45081b*/
//DUPDEF     goto LABEL_23; /*0x45081b*/
//DUPDEF   }
//DUPDEF   v2 = (void *)*(&this->attachedTag5); /*0x4506b2*/
//DUPDEF   if ( *((unsigned char *)v2 + 581) ) /*0x4506b8*/
//DUPDEF     goto LABEL_22; /*0x4506c0*/
//DUPDEF   if ( !this->IsBeingRepaired ) /*0x4506c6*/
//DUPDEF   {
//DUPDEF     if ( this->HasBeenCaptured || this->q6CB || (uint8_t)House::IsCurrentPlayer(v2) ) /*0x4506e8*/
//DUPDEF     {
//DUPDEF       *(unsigned char *)(*(&this->attachedTag5) + 581) = 1; /*0x4506ff*/
//DUPDEF       this->ToggleRepairMode(1); /*0x450708*/
//DUPDEF       if ( !(uint8_t)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x450714*/
//DUPDEF       {
//DUPDEF         v3 = *(&this->attachedTag5); /*0x450721*/
//DUPDEF         v4 = Math::RoundToInt(v3->airstrikeTintStage * 1800.0); /*0x450744*/
//DUPDEF         v5 = Math::RoundToInt(v3->airstrikeTintStage * 225.0); /*0x450746*/
//DUPDEF         v6 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, v5, v4); /*0x450759*/
//DUPDEF         v7 = (unsigned int *)(*(&this->attachedTag5) + 640); /*0x45076a*/
//DUPDEF         *v7 = g_CurrentFrame; /*0x450770*/
//DUPDEF         v7[1] = v26; /*0x450776*/
//DUPDEF         v7[2] = v6; /*0x450779*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     goto LABEL_22; /*0x45077c*/
//DUPDEF   }
//DUPDEF   LABEL_23:
//DUPDEF   v9 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].DrainAnimationType * 900.0); /*0x450821*/
//DUPDEF   v10 = (int)g_CurrentFrame % v9; /*0x45083f*/
//DUPDEF   v8 = (int)g_CurrentFrame / v9; /*0x45083f*/
//DUPDEF   if ( !v10 )
//DUPDEF   {
//DUPDEF     v11 = *(&this->needsRedraw8); /*0x45084f*/
//DUPDEF     this->NeedsRepairs = this->NeedsRepairs == 0; /*0x45085a*/
//DUPDEF     v12 = (*(int (**)(int))(v11->MainVoxel)(v11); /*0x45086e*/
//DUPDEF     v13 = (*(int (**)(unsigned int))(*(unsigned int *)*(&this->needsRedraw8) + 180))(*(&this->needsRedraw8)); /*0x45087a*/
//DUPDEF     ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x450881*/
//DUPDEF     v8 = (*(int (**)(int))(*(unsigned int *)(*(&this->attachedTag5) + 36) + 24))(*(&this->attachedTag5) + 36); /*0x450891*/
//DUPDEF     if ( v8 < v12 )
//DUPDEF     {
//DUPDEF       this->IsBeingRepaired = 0; /*0x4509b4*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       HouseClass::ProcessPowerDrain(*(&this->attachedTag5), v12); /*0x4508a3*/
//DUPDEF       v14 = *(&this->needsRedraw8); /*0x4508ae*/
//DUPDEF       v15 = v13 + *(&this->vtable37); /*0x4508b4*/
//DUPDEF       v16 = v13 + *(&this->vtable38); /*0x4508b6*/
//DUPDEF       *(&this->vtable37) = v15; /*0x4508b8*/
//DUPDEF       *(&this->vtable38) = v16; /*0x4508bb*/
//DUPDEF       v17 = v14->Strength; /*0x4508be*/
//DUPDEF       if ( v15 >= v17 ) /*0x4508c8*/
//DUPDEF       {
//DUPDEF         *(&this->vtable37) = v17; /*0x4508ca*/
//DUPDEF         *(&this->vtable38) = v17; /*0x4508cd*/
//DUPDEF         this->IsBeingRepaired = 0; /*0x4508d0*/
//DUPDEF }
//DUPDEF       v18 = BuildingClass::GetHealthRatio(this) <= *(double *)&g_RulesClass_Instance[1].WarpOut; /*0x4508ee*/
//DUPDEF       if ( this->IsDamaged != v18 )
//DUPDEF       {
//DUPDEF         v19 = 0; /*0x450907*/
//DUPDEF         this->IsDamaged = v18; /*0x450909*/
//DUPDEF         v20 = 0; /*0x45090f*/
//DUPDEF         v24 = &this->Anims; /*0x450911*/
//DUPDEF         do
//DUPDEF         {
//DUPDEF           if ( *v24 )
//DUPDEF           {
//DUPDEF             v21 = (unsigned char *)(v18 ? v20 + *(&this->needsRedraw8) + 3932 : v20 + *(&this->needsRedraw8) + 3916);
//DUPDEF             if ( v21 && *v21 ) /*0x450942*/
//DUPDEF               ((BuildingClass*)(this))->PlayAnim((int)v24, v21, v19, v18, 0, 0); /*0x450950*/
//DUPDEF }
//DUPDEF           v20 += 68; /*0x450959*/
//DUPDEF           ++v19; /*0x45095c*/
//DUPDEF           ++v24; /*0x450966*/
//DUPDEF         }
//DUPDEF         while ( v20 < 1428 );
//DUPDEF       if ( BuildingClass::GetHealthRatio(this) > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x450984*/
//DUPDEF       {
//DUPDEF         v22 = *(&this->u32_4C6); /*0x450986*/
//DUPDEF         if ( v22 ) /*0x45098e*/
//DUPDEF           (*(void (**)(int))(v22->q0F8)(v22); /*0x450992*/
//DUPDEF       v8 = BuildingClass::GetProductionFrame(this); /*0x45099a*/
//DUPDEF       if ( v8 != ProductionFrame ) /*0x4509a3*/
//DUPDEF         this->needsRedraw = 1; /*0x4509a5*/
//DUPDEF   return v8; /*0x4509ac*/
//DUPDEF // 0x42f260
//DUPDEF void BuildingClass::MarkUpgradeComponentUsed() {}
//DUPDEF   int v4; // edi
//DUPDEF   unsigned int *v5; // ebx
//DUPDEF   char *v6; // ebx
//DUPDEF   unsigned short *result; // eax
//DUPDEF   char *v8; // edi
//DUPDEF   int v9; // ebp
//DUPDEF   int abstractFlags; // ecx
//DUPDEF   int v11; // ebp
//DUPDEF   char *i; // esi
//DUPDEF   char v13[4]; // [esp+10h] [ebp-4h] BYREF
//DUPDEF   unsigned int *v14; // [esp+18h] [ebp+4h]

//DUPDEF   if ( a2[135] == *(unsigned int *)&((unsigned int *)this)[0] ) /*0x42f274*/
//DUPDEF   {
//DUPDEF     v4 = 0; /*0x42f279*/
//DUPDEF     if ( ((unsigned int *)this)[0] > 0 ) /*0x42f27d*/
//DUPDEF     {
//DUPDEF       v5 = 0; /*0x42f27f*/
//DUPDEF       v14 = 0; /*0x42f281*/
//DUPDEF       while ( 1 ) /*0x42f28e*/
//DUPDEF       {
//DUPDEF         v6 = (char *)((unsigned int *)this)[0] + (unsigned int)v5; /*0x42f28e*/
//DUPDEF         if ( *(unsigned int *)(a2[328] + 3576) == *(unsigned int *)v6 ) /*0x42f298*/
//DUPDEF         {
//DUPDEF           result = (unsigned short *)(*(int (**)(unsigned int *, char *))(*a2 + 440))(a2, v13); /*0x42f2a4*/
//DUPDEF           if ( *result == *((unsigned short *)v6 + 2) && result[1] == *((unsigned short *)v6 + 3) ) /*0x42f2bb*/
//DUPDEF             break; /*0x42f2bb*/
//DUPDEF }
//DUPDEF         ++v4; /*0x42f2c4*/
//DUPDEF         v5 = v14 + 4; /*0x42f2c5*/
//DUPDEF         v14 += 4; /*0x42f2ca*/
//DUPDEF         if ( v4 >= ((unsigned int *)this)[0] ) /*0x42f2ce*/
//DUPDEF           goto LABEL_10; /*0x42f2ce*/
//DUPDEF       }
//DUPDEF       v8 = (char *)((unsigned int *)this)[0] + 16 * v4; /*0x42f2d8*/
//DUPDEF       if ( v8 ) /*0x42f2dc*/
//DUPDEF         goto LABEL_18; /*0x42f2dc*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   LABEL_10:
//DUPDEF   v9 = a2[328]; /*0x42f2de*/
//DUPDEF   result = *(unsigned short **)(v9 + 1032); /*0x42f2e4*/
//DUPDEF   if ( result ) /*0x42f2ec*/
//DUPDEF   {
//DUPDEF     abstractFlags = ((unsigned int *)this)[0]; /*0x42f2ee*/
//DUPDEF     v11 = *(unsigned int *)(v9 + 3576); /*0x42f2f1*/
//DUPDEF     result = 0; /*0x42f2f7*/
//DUPDEF     if ( abstractFlags > 0 ) /*0x42f2fb*/
//DUPDEF     {
//DUPDEF       for ( i = (char *)((unsigned int *)this)[0]; *(unsigned int *)i != v11 || i[8]; i += 16 ) /*0x42f2fd*/
//DUPDEF       {
//DUPDEF         result = (unsigned short *)((char *)result + 1); /*0x42f30b*/
//DUPDEF         if ( (int)result >= abstractFlags ) /*0x42f311*/
//DUPDEF           return result; /*0x42f311*/
//DUPDEF }
//DUPDEF       v8 = i; /*0x42f31d*/
//DUPDEF       if ( i ) /*0x42f31f*/
//DUPDEF       {
//DUPDEF   LABEL_18:
//DUPDEF         v8[8] = 1; /*0x42f321*/
//DUPDEF         *((unsigned int *)v8 + 3) = 0; /*0x42f325*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x42f313*/
//DUPDEF }
//DUPDEF   LABEL_10:
//DUPDEF   v9 = a2[328]; /*0x42f2de*/
//DUPDEF   result = *(unsigned short **)(v9 + 1032); /*0x42f2e4*/
//DUPDEF   if ( result ) /*0x42f2ec*/
//DUPDEF   {
//DUPDEF     abstractFlags = this->abstractFlags; /*0x42f2ee*/
//DUPDEF     v11 = *(unsigned int *)(v9 + 3576); /*0x42f2f1*/
//DUPDEF     result = 0; /*0x42f2f7*/
//DUPDEF     if ( abstractFlags > 0 ) /*0x42f2fb*/
//DUPDEF     {
//DUPDEF       for ( i = (char *)this->vtable2; *(unsigned int *)i != v11 || i[8]; i += 16 ) /*0x42f2fd*/
//DUPDEF       {
//DUPDEF         result = (unsigned short *)((char *)result + 1); /*0x42f30b*/
//DUPDEF         if ( (int)result >= abstractFlags ) /*0x42f311*/
//DUPDEF           return result; /*0x42f311*/
//DUPDEF }
//DUPDEF       v8 = i; /*0x42f31d*/
//DUPDEF       if ( i ) /*0x42f31f*/
//DUPDEF       {
//DUPDEF   LABEL_18:
//DUPDEF         v8[8] = 1; /*0x42f321*/
//DUPDEF         *((unsigned int *)v8 + 3) = 0; /*0x42f325*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x42f313*/
//DUPDEF }
//DUPDEF   LABEL_10:
//DUPDEF   v9 = a2[328]; /*0x42f2de*/
//DUPDEF   result = *(unsigned short **)(v9 + 1032); /*0x42f2e4*/
//DUPDEF   if ( result ) /*0x42f2ec*/
//DUPDEF   {
//DUPDEF     abstractFlags = this->abstractFlags; /*0x42f2ee*/
//DUPDEF     v11 = *(unsigned int *)(v9 + 3576); /*0x42f2f1*/
//DUPDEF     result = 0; /*0x42f2f7*/
//DUPDEF     if ( abstractFlags > 0 ) /*0x42f2fb*/
//DUPDEF     {
//DUPDEF       for ( i = (char *)this->vtable2; *(unsigned int *)i != v11 || i[8]; i += 16 ) /*0x42f2fd*/
//DUPDEF       {
//DUPDEF         result = (unsigned short *)((char *)result + 1); /*0x42f30b*/
//DUPDEF         if ( (int)result >= abstractFlags ) /*0x42f311*/
//DUPDEF           return result; /*0x42f311*/
//DUPDEF }
//DUPDEF       v8 = i; /*0x42f31d*/
//DUPDEF       if ( i ) /*0x42f31f*/
//DUPDEF       {
//DUPDEF   LABEL_18:
//DUPDEF         v8[8] = 1; /*0x42f321*/
//DUPDEF         *((unsigned int *)v8 + 3) = 0; /*0x42f325*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x42f313*/
//DUPDEF }
//DUPDEF   LABEL_10:
//DUPDEF   v9 = a2[328]; /*0x42f2de*/
//DUPDEF   result = v9->q408; /*0x42f2e4*/
//DUPDEF   if ( result ) /*0x42f2ec*/
//DUPDEF   {
//DUPDEF     v10 = this->abstractFlags; /*0x42f2ee*/
//DUPDEF     v11 = *(unsigned int *)(v9 + 3576); /*0x42f2f1*/
//DUPDEF     result = 0; /*0x42f2f7*/
//DUPDEF     if ( v10 > 0 ) /*0x42f2fb*/
//DUPDEF     {
//DUPDEF       for ( i = this->vtable3; *(unsigned int *)i != v11 || i->vtable3; i += 16 ) /*0x42f2fd*/
//DUPDEF       {
//DUPDEF         result = (unsigned short *)((char *)result + 1); /*0x42f30b*/
//DUPDEF         if ( (int)result >= v10 ) /*0x42f311*/
//DUPDEF           return result; /*0x42f311*/
//DUPDEF }
//DUPDEF       v8 = i; /*0x42f31d*/
//DUPDEF       if ( i ) /*0x42f31f*/
//DUPDEF       {
//DUPDEF   LABEL_18:
//DUPDEF         v8->vtable3 = 1; /*0x42f321*/
//DUPDEF         v8->vtable4 = 0; /*0x42f325*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x42f313*/
//DUPDEF }
//DUPDEF   LABEL_10:
//DUPDEF   v9 = a2[328]; /*0x42f2de*/
//DUPDEF   result = *(unsigned short **)(v9 + 1032); /*0x42f2e4*/
//DUPDEF   if ( result ) /*0x42f2ec*/
//DUPDEF   {
//DUPDEF     v10 = this->abstractFlags; /*0x42f2ee*/
//DUPDEF     v11 = *(unsigned int *)(v9 + 3576); /*0x42f2f1*/
//DUPDEF     result = 0; /*0x42f2f7*/
//DUPDEF     if ( v10 > 0 ) /*0x42f2fb*/
//DUPDEF     {
//DUPDEF       for ( i = this->vtable3; *(unsigned int *)i != v11 || i->vtable3; i += 16 ) /*0x42f2fd*/
//DUPDEF       {
//DUPDEF         result = (unsigned short *)((char *)result + 1); /*0x42f30b*/
//DUPDEF         if ( (int)result >= v10 ) /*0x42f311*/
//DUPDEF           return result; /*0x42f311*/
//DUPDEF       v8 = i; /*0x42f31d*/
//DUPDEF       if ( i ) /*0x42f31f*/
//DUPDEF       {
//DUPDEF   LABEL_18:
//DUPDEF         v8->vtable3 = 1; /*0x42f321*/
//DUPDEF         v8->vtable4 = 0; /*0x42f325*/
//DUPDEF   return result; /*0x42f313*/
//DUPDEF // 0x452260
//DUPDEF void BuildingClass::AnnounceReady() {}
//DUPDEF   HouseClass *owner; // ecx
//DUPDEF   LightSourceClass *LightSource; // ecx
//DUPDEF   BuildingTypeClass *Type; // edx
//DUPDEF   int v5; // edi
//DUPDEF   int *Anims; // ebx
//DUPDEF   BuildingTypeClass *v7; // eax
//DUPDEF   int v8; // ecx

//DUPDEF   if ( !this->HasPower && !((unsigned int *)this)[0] ) /*0x452271*/
//DUPDEF   {
//DUPDEF     owner = ((unsigned int *)this)[0]; /*0x45227f*/
//DUPDEF     this->HasPower = 1; /*0x452287*/
//DUPDEF     ((unsigned int *)this)[0] = 1; /*0x45228d*/
//DUPDEF     IDA_LOBYTE(owner->HouseClass_field_timer_B[2]) = 1; /*0x452293*/
//DUPDEF     IDA_BYTE1(((unsigned int *)this)[0]->HouseClass_field_timer_B[2]) = 1; /*0x45229f*/
//DUPDEF     ((unsigned int *)this)[0]->recheckTechTree = 1; /*0x4522ab*/
//DUPDEF     LightSource = this->LightSource; /*0x4522b1*/
//DUPDEF     this->StuffEnabled = 1; /*0x4522b9*/
//DUPDEF     if ( LightSource ) /*0x4522bf*/
//DUPDEF       Trigger::EnableOnce((Trigger *)LightSource, 0); /*0x4522c3*/
//DUPDEF     Type = this->Type; /*0x4522c8*/
//DUPDEF     if ( Type->LaserFencePost ) /*0x4522ce*/
//DUPDEF       ((BuildingClass*)(this))->RepairPlacement(0); /*0x4522dc*/
//DUPDEF     v5 = 0; /*0x4522e3*/
//DUPDEF     Anims = this->Anims; /*0x4522e5*/
//DUPDEF     do /*0x452313*/
//DUPDEF     {
//DUPDEF       if ( this->Type->__pad_F70[v5 + 28] && *Anims ) /*0x4522fc*/
//DUPDEF         VtableStub::Method_425270((unsigned char *)*Anims); /*0x452302*/
//DUPDEF       v5 += 68; /*0x452307*/
//DUPDEF       ++Anims; /*0x45230a*/
//DUPDEF }
//DUPDEF     while ( v5 < 1428 ); /*0x452313*/
//DUPDEF     v7 = this->Type; /*0x452315*/
//DUPDEF     v8 = v7->Factory[0]; /*0x45231d*/
//DUPDEF     if ( v8 ) /*0x452325*/
//DUPDEF     {
//DUPDEF       IDA_LOBYTE(Type) = ((unsigned int *)v7)[1]; /*0x452327*/
//DUPDEF       HouseClass::UpdateProduction((int)((unsigned int *)this)[0], v8, (int)Type, 0); /*0x452337*/
//DUPDEF }
//DUPDEF     if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) ) /*0x452342*/
//DUPDEF       ((VoxClass *)&stru_818E00_raw.Next)->FindAndPlay(-1); /*0x452355*/
//DUPDEF   }
//DUPDEF // 0x456640
//DUPDEF void BuildingClass::UpdateDetectionField()
//DUPDEF {
//DUPDEF   char *Field; // ebx
//DUPDEF   int v3; // esi
//DUPDEF   int result; // eax
//DUPDEF   int v5; // ecx
//DUPDEF   int v6; // eax
//DUPDEF   int currentBarrelIndex; // edx
//DUPDEF   int v8; // ecx
//DUPDEF   unsigned int v9[2]; // [esp+Ch] [ebp-8h] BYREF

//DUPDEF   Field = Diplomacy::GetField(&stru_87F5F0_raw.__pad_58[416], (int)this->Type); /*0x456659*/
//DUPDEF   v3 = 0; /*0x45665b*/
//DUPDEF   result = *((unsigned int *)Field + 4); /*0x45665d*/
//DUPDEF   if ( result > 0 ) /*0x456662*/
//DUPDEF   {
//DUPDEF     do /*0x45669d*/
//DUPDEF     {
//DUPDEF       v5 = *((unsigned int *)Field + 1); /*0x456664*/
//DUPDEF       v6 = *(unsigned int *)(v5 + 8 * v3) + ((unsigned int *)this)[0]; /*0x456673*/
//DUPDEF       currentBarrelIndex = ((unsigned int *)this)[0]; /*0x456675*/
//DUPDEF       v8 = *(unsigned int *)(v5 + 8 * v3 + 4); /*0x45667b*/
//DUPDEF       v9[0] = v6; /*0x45667e*/
//DUPDEF       v9[1] = currentBarrelIndex + v8; /*0x456688*/
//DUPDEF       FogOfWar::RevealCell((int)&stru_87F5F0_raw.__pad_58[416], v9); /*0x456692*/
//DUPDEF       result = *((unsigned int *)Field + 4); /*0x456697*/
//DUPDEF       ++v3; /*0x45669a*/
//DUPDEF     }
//DUPDEF     while ( v3 < result ); /*0x45669d*/
//DUPDEF   }
//DUPDEF   return result; /*0x45669f*/
//DUPDEF }
//DUPDEF // 0x457020
//DUPDEF bool BuildingClass::IsCellVisibleToPlayer(int cell_x, int cell_y)
//DUPDEF {
//DUPDEF   int result; // eax
//DUPDEF   unsigned int *v3; // eax
//DUPDEF   int v4; // ebx
//DUPDEF   int v5; // ebp
//DUPDEF   int v6; // esi
//DUPDEF   int v7; // ebx
//DUPDEF   bool v8; // bl
//DUPDEF   int v9; // [esp+8h] [ebp-20h]
//DUPDEF   int16_t v10[2]; // [esp+Ch] [ebp-1Ch] BYREF
//DUPDEF   unsigned int v11[3]; // [esp+10h] [ebp-18h] BYREF
//DUPDEF   unsigned int v12[3]; // [esp+1Ch] [ebp-Ch] BYREF
//DUPDEF   unsigned int *v13; // [esp+2Ch] [ebp+4h]

//DUPDEF   result = (int)this->Type; /*0x457027*/
//DUPDEF   if ( *(unsigned char *)(result + 3226) || ((unsigned int *)this)[0] ) /*0x45703b*/
//DUPDEF     goto LABEL_22; /*0x45703b*/
//DUPDEF   result = House::IsHumanPlayer((House *)((unsigned int *)this)[0]); /*0x45704f*/
//DUPDEF   if ( (unsigned char)result ) /*0x457056*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(result) = ((unsigned int *)this)[0] != 0; /*0x457061*/
//DUPDEF     return result; /*0x457068*/
//DUPDEF   }
//DUPDEF   v3 = (unsigned int *)(*((int (**)(BuildingClass *, unsigned int *))this->vtable1 + 18))(this, v12); /*0x457074*/
//DUPDEF   IDA_LOWORD(v9) = *v3 / 256; /*0x457089*/
//DUPDEF   IDA_HIWORD(v9) = v3[1] / 256; /*0x4570a1*/
//DUPDEF   *(unsigned int *)v10 = v9; /*0x4570aa*/
//DUPDEF   result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0_raw.__pad_58[416], v10, 1); /*0x4570b4*/
//DUPDEF   if ( !(unsigned char)result ) /*0x4570bb*/
//DUPDEF     goto LABEL_22; /*0x4570bb*/
//DUPDEF   v4 = (((BuildingTypeClass*)((int *)this->Type))->GetFoundationHeight(0) << 8) - 256; /*0x4570db*/
//DUPDEF   v5 = (((BuildingTypeClass*)(this->Type))->GetFoundationWidth() << 8) - 256; /*0x4570f5*/
//DUPDEF   v11[0] = ((unsigned int *)this)[0]; /*0x4570fb*/
//DUPDEF   v11[1] = ((unsigned int *)this)[1]; /*0x45710c*/
//DUPDEF   v11[2] = ((unsigned int *)this)[2]; /*0x457113*/
//DUPDEF   v8 = 0; /*0x457154*/
//DUPDEF   if ( (uint8_t)Cell::IsPassable(v11) ) /*0x457117*/
//DUPDEF   {
//DUPDEF     v6 = ((unsigned int *)this)[2]; /*0x457125*/
//DUPDEF     v7 = ((unsigned int *)this)[1] + v4; /*0x45712e*/
//DUPDEF     v12[0] = v5 + ((unsigned int *)this)[0]; /*0x457136*/
//DUPDEF     v12[1] = v7; /*0x45713a*/
//DUPDEF     v12[2] = v6; /*0x45713e*/
//DUPDEF     if ( (uint8_t)Cell::IsPassable(v12) ) /*0x457142*/
//DUPDEF     {
//DUPDEF       if ( g_hWnd ) /*0x457152*/
//DUPDEF         v8 = 1; /*0x45711e*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   result = ((unsigned int *)this)[0]; /*0x45715a*/
//DUPDEF   if ( result != 2 && this->Translucency != 15 && !this->IsFogged && !v8 ) /*0x45717c*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(result) = 1; /*0x45717f*/
//DUPDEF     return result; /*0x457185*/
//DUPDEF   }
//DUPDEF   result = (*((int (**)(BuildingClass *))this->vtable1 + 202))(this); /*0x45718c*/
//DUPDEF   if ( !(unsigned char)result ) /*0x457194*/
//DUPDEF   {
//DUPDEF   LABEL_22:
//DUPDEF     IDA_LOBYTE(result) = 0; /*0x4571cf*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     result = HouseClass::IsAlliedWith((void *)dword_A83D4C, (void *)((unsigned int *)this)[0]); /*0x4571a3*/
//DUPDEF     if ( !(unsigned char)result && !this->IsFogged && !v8 ) /*0x4571b8*/
//DUPDEF       *v13 = 1; /*0x4571be*/
//DUPDEF     IDA_LOBYTE(result) = 1; /*0x4571c5*/
//DUPDEF   }
//DUPDEF   return result; /*0x45705e*/
//DUPDEF }
//DUPDEF // 0x457aa0
//DUPDEF void BuildingClass::CreateFoggedObjects() {}
//DUPDEF   int16_t *v5; // edi
//DUPDEF   int v6; // eax
//DUPDEF   int16_t result; // ax
//DUPDEF   unsigned int *v9; // edi
//DUPDEF   int v10; // ecx
//DUPDEF   int v11; // eax
//DUPDEF   int v12; // eax
//DUPDEF   int v13; // edx
//DUPDEF   int v14; // esi
//DUPDEF   int v15; // ecx
//DUPDEF   int v16; // eax
//DUPDEF   int v17; // eax
//DUPDEF   int v18; // eax
//DUPDEF   int v19; // ecx
//DUPDEF   int16_t *v20; // [esp+18h] [ebp-Ch]
//DUPDEF   int v21; // [esp+1Ch] [ebp-8h]
//DUPDEF   int16_t v22[2]; // [esp+20h] [ebp-4h] BYREF
//DUPDEF   int v23; // [esp+28h] [ebp+4h]
//DUPDEF   int v24; // [esp+30h] [ebp+Ch]

//DUPDEF   v5 = (int16_t *)(*((int (**)(BuildingTypeClass *, unsigned int))this->Type->vtable1 + 36))(this->Type, 0); /*0x457abc*/
//DUPDEF   v20 = v5; /*0x457ac0*/
//DUPDEF   (*((void (**)(BuildingClass *))this->vtable1 + 84))(this); /*0x457ac4*/
//DUPDEF   v6 = RA2_OPNEW(0x78u); /*0x457acc*/
//DUPDEF   if ( v6 ) /*0x457ad6*/
//DUPDEF     v24 = FoggedObjectClass::Constructor(v6, (int *)this, a4); /*0x457ae5*/
//DUPDEF   else
//DUPDEF     v24 = 0; /*0x457aeb*/
//DUPDEF   v21 = *(unsigned int *)(*((int (**)(BuildingClass *, int16_t *))this->vtable1 + 110))(this, v22); /*0x457b04*/
//DUPDEF   while ( 1 ) /*0x457b08*/
//DUPDEF   {
//DUPDEF     result = *v5; /*0x457b08*/
//DUPDEF     if ( *v5 == 0x7FFF && v5[1] == 0x7FFF ) /*0x457b15*/
//DUPDEF       return result; /*0x457c79*/
//DUPDEF     IDA_LOWORD(v23) = v21 + result; /*0x457b25*/
//DUPDEF     IDA_HIWORD(v23) = IDA_HIWORD(v21) + v5[1]; /*0x457b34*/
//DUPDEF     *(unsigned int *)v22 = v23; /*0x457b3d*/
//DUPDEF     v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v22); /*0x457b4b*/
//DUPDEF     if ( a3 && v9 == a3 ) /*0x457b57*/
//DUPDEF     {
//DUPDEF       v10 = *(unsigned int *)(a2 + 8); /*0x457b59*/
//DUPDEF       if ( *(unsigned int *)(a2 + 16) < v10 /*0x457b84*/
//DUPDEF         || (*(unsigned char *)(a2 + 13) || !v10)
//DUPDEF         && (v11 = *(unsigned int *)(a2 + 20), v11 > 0)
//DUPDEF         && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)a2 + 8))(a2, v10 + v11, 0) )
//DUPDEF       {
//DUPDEF         v12 = *(unsigned int *)(a2 + 16); /*0x457b8f*/
//DUPDEF         v13 = *(unsigned int *)(a2 + 4); /*0x457b92*/
//DUPDEF         *(unsigned int *)(a2 + 16) = v12 + 1; /*0x457b98*/
//DUPDEF   LABEL_31:
//DUPDEF         *(unsigned int *)(v13 + 4 * v12) = v24; /*0x457c60*/
//DUPDEF }
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v14 = v9[10]; /*0x457ba0*/
//DUPDEF       if ( v14 ) /*0x457ba5*/
//DUPDEF       {
//DUPDEF         v15 = *(unsigned int *)(v14 + 8); /*0x457ba7*/
//DUPDEF         if ( *(unsigned int *)(v14 + 16) < v15 ) /*0x457baf*/
//DUPDEF           goto LABEL_30; /*0x457baf*/
//DUPDEF         if ( *(unsigned char *)(v14 + 13) || !v15 ) /*0x457bbc*/
//DUPDEF         {
//DUPDEF           v16 = *(unsigned int *)(v14 + 20); /*0x457bc2*/
//DUPDEF           if ( v16 > 0 ) /*0x457bc7*/
//DUPDEF           {
//DUPDEF             if ( (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v14 + 8))(v14, v15 + v16, 0) ) /*0x457bd5*/
//DUPDEF               goto LABEL_30; /*0x457bda*/
//DUPDEF }
//DUPDEF         }
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         v17 = RA2_OPNEW(0x18u); /*0x457be4*/
//DUPDEF         if ( v17 ) /*0x457bee*/
//DUPDEF         {
//DUPDEF           *(unsigned int *)(v17 + 4) = 0; /*0x457bf0*/
//DUPDEF           *(unsigned int *)(v17 + 8) = 0; /*0x457bf3*/
//DUPDEF           *(unsigned char *)(v17 + 12) = 1; /*0x457bf6*/
//DUPDEF           *(unsigned char *)(v17 + 13) = 0; /*0x457bfa*/
//DUPDEF           *(unsigned int *)v17 = (void *)&DynamicVectorClass_FoggedObjectClass___vftable; /*0x457bfd*/
//DUPDEF           *(unsigned int *)(v17 + 20) = 10; /*0x457c03*/
//DUPDEF           *(unsigned int *)(v17 + 16) = 0; /*0x457c0a*/
//DUPDEF }
//DUPDEF         else
//DUPDEF         {
//DUPDEF           v17 = 0; /*0x457c0f*/
//DUPDEF         }
//DUPDEF         v9[10] = v17; /*0x457c11*/
//DUPDEF         (*(void (**)(int, int, unsigned int))(*(unsigned int *)v17 + 8))(v17, 1, 0); /*0x457c1b*/
//DUPDEF         *(unsigned int *)(v9[10] + 20) = 1; /*0x457c21*/
//DUPDEF         v14 = v9[10]; /*0x457c28*/
//DUPDEF         v18 = *(unsigned int *)(v14 + 8); /*0x457c2b*/
//DUPDEF         if ( *(unsigned int *)(v14 + 16) < v18 /*0x457c4d*/
//DUPDEF           || (*(unsigned char *)(v14 + 13) || !v18)
//DUPDEF           && (v19 = *(unsigned int *)(v14 + 20), v19 > 0)
//DUPDEF           && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v14 + 8))(v14, v18 + v19, 0) )
//DUPDEF         {
//DUPDEF   LABEL_30:
//DUPDEF           v12 = *(unsigned int *)(v14 + 16); /*0x457c54*/
//DUPDEF           *(unsigned int *)(v14 + 16) = v12 + 1; /*0x457c5a*/
//DUPDEF           v13 = *(unsigned int *)(v14 + 4); /*0x457c5d*/
//DUPDEF           goto LABEL_31; /*0x457c5d*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v20 += 2; /*0x457c67*/
//DUPDEF     v5 = v20; /*0x457c72*/
//DUPDEF   }
//DUPDEF // IDA 0x44e8f0: object expired notification
//DUPDEF // 0x44e8f0
//DUPDEF BuildingTypeClass * * BuildingClass::OnObjectExpired(ObjectClass* obj)
//DUPDEF {
//DUPDEF   int v2; // edx
//DUPDEF   int v5; // ecx
//DUPDEF   char *v6; // eax
//DUPDEF   int v7; // edx
//DUPDEF   int v9; // ecx
//DUPDEF   char *v10; // eax
//DUPDEF   int result; // eax
//DUPDEF   int *DamageFireAnims; // ecx
//DUPDEF   int *Upgrades; // eax
//DUPDEF   int v14; // ecx
//DUPDEF   int v15; // edx
//DUPDEF   int v16; // eax
//DUPDEF   int v17; // ecx
//DUPDEF   int v18; // ecx
//DUPDEF   int v19; // eax
//DUPDEF   int *v20; // esi
//DUPDEF   int v21; // ecx
//DUPDEF   int v22; // ecx
//DUPDEF   int *v23; // [esp+10h] [ebp+4h]
//DUPDEF   int *v24; // [esp+14h] [ebp+8h] BYREF

//DUPDEF   ObjectClass::NotifyExpired((ObjectClass *)obj, v23, v24); /*0x44e8ff*/
//DUPDEF   if ( (int *)obj->C4AppliedBy == v23 ) /*0x44e90e*/
//DUPDEF     obj->C4AppliedBy = 0; /*0x44e910*/
//DUPDEF   if ( (int *)obj->FirestormAnim == v23 ) /*0x44e91c*/
//DUPDEF     obj->FirestormAnim = 0; /*0x44e91e*/
//DUPDEF   if ( (int *)obj->Factory == v23 ) /*0x44e92a*/
//DUPDEF     obj->Factory = 0; /*0x44e92c*/
//DUPDEF   if ( (int *)obj->Spotlight == v23 ) /*0x44e938*/
//DUPDEF     obj->Spotlight = 0; /*0x44e93a*/
//DUPDEF   if ( (int *)obj->LightSource == v23 ) /*0x44e946*/
//DUPDEF     obj->LightSource = 0; /*0x44e948*/
//DUPDEF   if ( (int *)obj->Anims[8] == v23 ) /*0x44e954*/
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio(obj); /*0x44e958*/
//DUPDEF     _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44e95d*/
//DUPDEF     __asm /*0x44e963*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [ecx+1700h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4100) != 0 ) /*0x44e96e*/
//DUPDEF     {
//DUPDEF       v5 = 1; /*0x44e976*/
//DUPDEF       v6 = &obj->Type->__pad_F70[1204]; /*0x44e97b*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v5 = 0; /*0x44e988*/
//DUPDEF       v6 = &obj->Type->__pad_F70[1188]; /*0x44e98a*/
//DUPDEF     }
//DUPDEF     if ( v6 && *v6 ) /*0x44e993*/
//DUPDEF       ((BuildingClass*)(obj))->PlayAnim(v2, v6, 18, v5, 0, 0); /*0x44e99f*/
//DUPDEF   }
//DUPDEF   if ( obj->Type->Grinding && (int *)obj->Anims[10] == v23 ) /*0x44e9b8*/
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio(obj); /*0x44e9bc*/
//DUPDEF     _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44e9c1*/
//DUPDEF     __asm /*0x44e9c6*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [eax+1700h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_EAX & 0x4100) != 0 ) /*0x44e9d1*/
//DUPDEF     {
//DUPDEF       v9 = 1; /*0x44e9d9*/
//DUPDEF       v10 = &obj->Type->__pad_F70[184]; /*0x44e9de*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v9 = 0; /*0x44e9eb*/
//DUPDEF       v10 = &obj->Type->__pad_F70[168]; /*0x44e9ed*/
//DUPDEF     }
//DUPDEF     if ( v10 && *v10 ) /*0x44e9f6*/
//DUPDEF       ((BuildingClass*)(obj))->PlayAnim(v7, v10, 3, v9, 0, 0); /*0x44ea02*/
//DUPDEF   }
//DUPDEF   if ( v23 && (*(int (**)(int *))(v23[1] + 12))(v23 + 1) == 4 ) /*0x44ea18*/
//DUPDEF   {
//DUPDEF     result = 0; /*0x44ea1a*/
//DUPDEF     DamageFireAnims = obj->DamageFireAnims; /*0x44ea1c*/
//DUPDEF     do /*0x44ea2d*/
//DUPDEF     {
//DUPDEF       if ( (int *)*DamageFireAnims == v23 ) /*0x44ea24*/
//DUPDEF       {
//DUPDEF         obj->DamageFireAnims[result] = 0; /*0x44ea45*/
//DUPDEF         return result; /*0x44ea4f*/
//DUPDEF }
//DUPDEF       ++result; /*0x44ea26*/
//DUPDEF       ++DamageFireAnims; /*0x44ea27*/
//DUPDEF     }
//DUPDEF     while ( result < 8 ); /*0x44ea2d*/
//DUPDEF     if ( !*((unsigned char *)v23 + 280) ) /*0x44ea35*/
//DUPDEF       goto LABEL_34; /*0x44ea35*/
//DUPDEF     IDA_LOBYTE(result) = BuildingClass::StopAnim((int)obj, (int)v23); /*0x44ea3a*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF   LABEL_34:
//DUPDEF     if ( (int *)obj->Type == v23 ) /*0x44ea58*/
//DUPDEF       obj->Type = 0; /*0x44ea5a*/
//DUPDEF     Upgrades = obj->Upgrades; /*0x44ea60*/
//DUPDEF     v14 = 3; /*0x44ea66*/
//DUPDEF     do /*0x44ea75*/
//DUPDEF     {
//DUPDEF       if ( (int *)*Upgrades == v23 ) /*0x44ea6d*/
//DUPDEF         *Upgrades = 0; /*0x44ea6f*/
//DUPDEF       ++Upgrades; /*0x44ea71*/
//DUPDEF       --v14; /*0x44ea74*/
//DUPDEF     }
//DUPDEF     while ( v14 ); /*0x44ea75*/
//DUPDEF     v15 = obj->Overpowerers[0]; /*0x44ea77*/
//DUPDEF     v24 = v23; /*0x44ea8b*/
//DUPDEF     v16 = (*(int (**)(int *, int **))(v15 + 16))(obj->Overpowerers, &v24); /*0x44ea8f*/
//DUPDEF     if ( v16 != -1 ) /*0x44ea95*/
//DUPDEF     {
//DUPDEF       v17 = obj->Audio7[1]; /*0x44ea97*/
//DUPDEF       if ( v16 < v17 ) /*0x44ea9c*/
//DUPDEF       {
//DUPDEF         v18 = v17 - 1; /*0x44ea9e*/
//DUPDEF         for ( obj->Audio7[1] = v18; /*0x44eaa4*/
//DUPDEF               v16 < obj->Audio7[1];
//DUPDEF               *(unsigned int *)(obj->Occupants[0] + 4 * v16 - 4) = *(unsigned int *)(obj->Occupants[0] + 4 * v16) )
//DUPDEF         {
//DUPDEF           ++v16; /*0x44eaa9*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     result = dword_A8E7AC; /*0x44eab8*/
//DUPDEF     if ( dword_A8E7AC ) /*0x44eac0*/
//DUPDEF     {
//DUPDEF       v19 = obj->Audio7[3]; /*0x44eac2*/
//DUPDEF       v20 = &obj->Audio7[3]; /*0x44eac8*/
//DUPDEF       v24 = v23; /*0x44ead2*/
//DUPDEF       result = (*(int (**)(int *, int **))(v19 + 16))(v20, &v24); /*0x44ead9*/
//DUPDEF       if ( result != -1 ) /*0x44eadf*/
//DUPDEF       {
//DUPDEF         v21 = v20[4]; /*0x44eae1*/
//DUPDEF         if ( result < v21 ) /*0x44eae6*/
//DUPDEF         {
//DUPDEF           v22 = v21 - 1; /*0x44eae8*/
//DUPDEF           for ( v20[4] = v22; result < v20[4]; *(unsigned int *)(v20[1] + 4 * result - 4) = *(unsigned int *)(v20[1] + 4 * result) ) /*0x44eaee*/
//DUPDEF             ++result; /*0x44eaf3*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x44ea3f*/
//DUPDEF }
//DUPDEF // 0x4a5290
//DUPDEF int BuildingClass::UpdateTimerWithElapsed()
//DUPDEF {
//DUPDEF   int result; // eax
//DUPDEF   void *vtable2; // esi

//DUPDEF   IDA_LOBYTE(result) = ((unsigned int *)this)[0]; /*0x4a5290*/
//DUPDEF   if ( (unsigned char)result ) /*0x4a5295*/
//DUPDEF   {
//DUPDEF     result = ((unsigned int *)this)[0]; /*0x4a5297*/
//DUPDEF     vtable2 = ((unsigned int *)this)[0]; /*0x4a529b*/
//DUPDEF     if ( vtable2 != (void *)-1 ) /*0x4a52a1*/
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - (int)vtable2 >= result ) /*0x4a52ad*/
//DUPDEF         result = 0; /*0x4a52b3*/
//DUPDEF       else
//DUPDEF         result -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - (unsigned int)vtable2; /*0x4a52af*/
//DUPDEF     }
//DUPDEF     ((unsigned int *)this)[0] = ((unsigned int *)this)[0] - result; /*0x4a52bb*/
//DUPDEF     IDA_LOBYTE(result) = IDA_BYTE1(((unsigned int *)this)[0]) == 0; /*0x4a52c3*/
//DUPDEF     IDA_BYTE1(((unsigned int *)this)[0]) = result; /*0x4a52c6*/
//DUPDEF   }
//DUPDEF   return result; /*0x4a52c9*/
//DUPDEF }
//DUPDEF // 0x458db0
//DUPDEF bool BuildingClass::HasActiveParam()
//DUPDEF {
//DUPDEF   return (*((uint8_t (**)(BuildingClass *))this->vtable1 + 256))(this) /*0x458dbf*/
//DUPDEF       || TechnoClass::HasActiveParam((TechnoClass *)this);
//DUPDEF }
//DUPDEF // IDA 0x455da0: check special update flags
//DUPDEF // 0x455da0
//DUPDEF void BuildingClass::CheckSpecialUpdateFlags()
//DUPDEF {
//DUPDEF   int result; // eax
//DUPDEF   int v2; // ecx

//DUPDEF   result = (int)this->Type; /*0x455da0*/
//DUPDEF   v2 = *(unsigned int *)(result + 3768); /*0x455da6*/
//DUPDEF   IDA_LOBYTE(result) = v2 == 40 || v2 == 16 || *(unsigned char *)(result + 5804) || *(unsigned char *)(result + 5801); /*0x455dcd*/
//DUPDEF   return result; /*0x455dcc*/
//DUPDEF }
//DUPDEF // ============================================================
//DUPDEF // Section 14: Rendering
//DUPDEF // ============================================================

//DUPDEF // IDA 0x480110: calculate draw position
//DUPDEF // 0x480110
//DUPDEF Point2D* BuildingClass::CalcDrawPos(Point2D* out) const
//DUPDEF {
//DUPDEF   int *v3; // eax
//DUPDEF   int v4; // edx
//DUPDEF   int v5; // ecx
//DUPDEF   uint8_t v6; // al
//DUPDEF   char *v8; // ecx
//DUPDEF   unsigned int v9[2]; // [esp+4h] [ebp-8h] BYREF

//DUPDEF   v3 = globalHelper_0FDCC0(v9, ((unsigned int *)this)[2]); /*0x48011d*/
//DUPDEF   v4 = *v3; /*0x480122*/
//DUPDEF   v5 = v3[1]; /*0x480124*/
//DUPDEF   if ( IDA_SLOBYTE(((unsigned int *)this)[0]) >= 0 ) /*0x48012f*/
//DUPDEF   {
//DUPDEF     if ( ((unsigned int *)this)[2] == 239 ) /*0x48014b*/
//DUPDEF   LABEL_6:
//DUPDEF       v5 -= 15; /*0x48014d*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v6 = IDA_BYTE2(((unsigned int *)this)[0]); /*0x480131*/
//DUPDEF     v5 -= 16; /*0x480137*/
//DUPDEF     if ( v6 >= 9u && v6 <= 0x11u ) /*0x480140*/
//DUPDEF       goto LABEL_6; /*0x480140*/
//DUPDEF   }
//DUPDEF   v8 = (char *)DSurface_ViewBounds.field_4 + v5 + -15 * SHIBYTE(((unsigned int *)this)[1]); /*0x480150*/
//DUPDEF   *out = v4 + 30; /*0x480172*/
//DUPDEF   out[1] = v8 + 15; /*0x480174*/
//DUPDEF   return out; /*0x48016e*/
//DUPDEF }
//DUPDEF // 0x43d290
//DUPDEF void BuildingClass::Draw(Point2D* a, RectangleStruct* b) const { (void)a; (void)b; }
//DUPDEF   double v1; // st7
//DUPDEF   int v3; // edx
//DUPDEF   int (__thiscall **vtable0)(BuildingClass *); // eax
//DUPDEF   int result; // eax
//DUPDEF   int *Anims; // ecx
//DUPDEF   int v7; // edx
//DUPDEF   int (__usercall **v8)(BuildingClass *); // edx
//DUPDEF   int v9; // edi
//DUPDEF   int v10; // edi
//DUPDEF   int v11; // eax
//DUPDEF   int v12; // edx
//DUPDEF   uint8_t v13; // bl
//DUPDEF   int v14; // eax
//DUPDEF   int v15; // edx
//DUPDEF   int v16; // ecx
//DUPDEF   int v17; // eax
//DUPDEF   int v18; // edx
//DUPDEF   uint8_t v19; // bl
//DUPDEF   int v20; // eax
//DUPDEF   int v21; // edx
//DUPDEF   int v22; // ecx
//DUPDEF   unsigned int *v23; // eax
//DUPDEF   CellClass *v24; // eax
//DUPDEF   double v25; // st7
//DUPDEF   int v26; // eax
//DUPDEF   int v27; // ebx
//DUPDEF   int GateStages; // eax
//DUPDEF   int v29; // ebp
//DUPDEF   int16_t *v30; // eax
//DUPDEF   int v31; // eax
//DUPDEF   int v32; // eax
//DUPDEF   BuildingTypeClass *Type; // ecx
//DUPDEF   BuildingTypeClass *v34; // edx
//DUPDEF   int v35; // eax
//DUPDEF   int v36; // eax
//DUPDEF   int v37; // ebp
//DUPDEF   int *v38; // eax
//DUPDEF   BuildingTypeClass *v39; // ecx
//DUPDEF   int v40; // ebx
//DUPDEF   int v41; // kr08_4
//DUPDEF   int16_t *v42; // eax
//DUPDEF   int v43; // eax
//DUPDEF   int v44; // eax
//DUPDEF   int16_t *v45; // eax
//DUPDEF   int v46; // eax
//DUPDEF   int ProductionFrame; // eax
//DUPDEF   int16_t *v48; // eax
//DUPDEF   int v49; // eax
//DUPDEF   int16_t *v50; // eax
//DUPDEF   int v51; // eax
//DUPDEF   int v55; // [esp+72h] [ebp-4Ch]
//DUPDEF   int v56; // [esp+72h] [ebp-4Ch]
//DUPDEF   int v57; // [esp+72h] [ebp-4Ch]
//DUPDEF   uint8_t v58; // [esp+87h] [ebp-37h]
//DUPDEF   uint8_t v59; // [esp+87h] [ebp-37h]
//DUPDEF   uint8_t v60; // [esp+88h] [ebp-36h]
//DUPDEF   uint8_t v61; // [esp+88h] [ebp-36h]
//DUPDEF   char v62; // [esp+89h] [ebp-35h]
//DUPDEF   int v63; // [esp+8Ah] [ebp-34h]
//DUPDEF   int16_t v3[2]; // [esp+8Eh] [ebp-30h] BYREF
//DUPDEF   int v65; // [esp+92h] [ebp-2Ch]
//DUPDEF   MixFileClass *v66; // [esp+96h] [ebp-28h]
//DUPDEF   int16_t v67[4]; // [esp+9Ah] [ebp-24h] BYREF
//DUPDEF   int v68; // [esp+A2h] [ebp-1Ch]
//DUPDEF   int v69; // [esp+A6h] [ebp-18h]
//DUPDEF   int v70; // [esp+AAh] [ebp-14h] BYREF
//DUPDEF   unsigned char v72[4]; // [esp+B2h] [ebp-Ch] BYREF
//DUPDEF   int v73; // [esp+B6h] [ebp-8h]
//DUPDEF   void *retaddr; // [esp+BEh] [ebp+0h]
//DUPDEF   int v75; // [esp+C2h] [ebp+4h]
//DUPDEF   int v76; // [esp+C6h] [ebp+8h]
//DUPDEF   int v77; // [esp+E6h] [ebp+28h]
//DUPDEF   int v78; // [esp+EAh] [ebp+2Ch]

//DUPDEF   v3 = *(unsigned int *)(*((int (**)(BuildingClass *, int16_t *))this->vtable1 + 110))(this, v67); /*0x43d2a8*/
//DUPDEF   vtable0 = (int (**)(BuildingClass *))this->TechnoClass; /*0x43d2aa*/
//DUPDEF   *(unsigned int *)v3 = v3; /*0x43d2ae*/
//DUPDEF   result = vtable0[27](this); /*0x43d2b2*/
//DUPDEF   v63 = result; /*0x43d2b7*/
//DUPDEF   if ( result ) /*0x43d2bb*/
//DUPDEF   {
//DUPDEF     if ( this /*0x43d2e8*/
//DUPDEF       && (*((int (**)(BuildingClass *))this->vtable1 + 11))(this) == 6
//DUPDEF       && !this->BuildingClass_field_int_534
//DUPDEF       && (*((int (**)(BuildingClass *))this->vtable1 + 97))(this) == 19 )
//DUPDEF     {
//DUPDEF       Anims = this->Anims; /*0x43d2ea*/
//DUPDEF       v7 = 21; /*0x43d2f0*/
//DUPDEF       do /*0x43d306*/
//DUPDEF       {
//DUPDEF         if ( *Anims ) /*0x43d2f5*/
//DUPDEF           *(unsigned char *)(*Anims + 413) = 1; /*0x43d2fb*/
//DUPDEF         ++Anims; /*0x43d302*/
//DUPDEF         --v7; /*0x43d305*/
//DUPDEF }
//DUPDEF       while ( v7 ); /*0x43d306*/
//DUPDEF     }
//DUPDEF     result = (int)this->Type; /*0x43d308*/
//DUPDEF     if ( !result->InvisibleInGame ) /*0x43d30e*/
//DUPDEF     {
//DUPDEF       v8 = (int (__usercall **)(BuildingClass *))this->TechnoClass; /*0x43d322*/
//DUPDEF       v65 = result->NormalZAdjust; /*0x43d324*/
//DUPDEF       v68 = 198; /*0x43d32a*/
//DUPDEF       v69 = 446; /*0x43d332*/
//DUPDEF       v62 = 0; /*0x43d33a*/
//DUPDEF       if ( v8[97](this) == 16 ) /*0x43d348*/
//DUPDEF       {
//DUPDEF         v9 = Array::Get((Array *)this, 0); /*0x43d353*/
//DUPDEF         if ( v9 ) /*0x43d357*/
//DUPDEF         {
//DUPDEF           if ( *(unsigned char *)((*(int (**)(int))(v9->q084)(v9) + 3476) /*0x43d377*/
//DUPDEF             || *(unsigned char *)((*(int (**)(int))(v9->q084)(v9) + 3434) )
//DUPDEF           {
//DUPDEF             v62 = 1; /*0x43d381*/
//DUPDEF }
//DUPDEF         }
//DUPDEF       }
//DUPDEF       v10 = 0; /*0x43d38c*/
//DUPDEF       if ( !((unsigned int *)this)[0] ) /*0x43d390*/
//DUPDEF       {
//DUPDEF   LABEL_22:
//DUPDEF         if ( !(*((uint8_t (**)(BuildingClass *))this->vtable1 + 88))(this) || ((unsigned int *)this)[0] != 1 ) /*0x43d449*/
//DUPDEF           goto LABEL_29; /*0x43d449*/
//DUPDEF         v17 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6320); /*0x43d455*/
//DUPDEF         v18 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v17; /*0x43d45b*/
//DUPDEF         v19 = *(unsigned char *)(v17 + v18 + 4174 + 2087); /*0x43d468*/
//DUPDEF         v61 = *(unsigned char *)(v17 + v18 + 6260); /*0x43d475*/
//DUPDEF         v59 = *(unsigned char *)(v17 + v18 + 6262); /*0x43d47f*/
//DUPDEF         v20 = DDraw_GetStatus() - 1; /*0x43d488*/
//DUPDEF         if ( v20 ) /*0x43d489*/
//DUPDEF         {
//DUPDEF           if ( --v20 ) /*0x43d48c*/
//DUPDEF           {
//DUPDEF   LABEL_28:
//DUPDEF             IDA_LOWORD(v21) = v61; /*0x43d4cc*/
//DUPDEF             IDA_LOWORD(v20) = v59; /*0x43d4d2*/
//DUPDEF             IDA_LOWORD(v22) = v19 >> 1; /*0x43d4dd*/
//DUPDEF             v10 |= v20 | (32 * ((32 * v21) | v22)); /*0x43d4e9*/
//DUPDEF   LABEL_29:
//DUPDEF             v23 = (unsigned int *)(*((int (**)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v72); /*0x43d4eb*/
//DUPDEF             IDA_LOWORD(v66) = *v23 / 256; /*0x43d507*/
//DUPDEF             IDA_HIWORD(v66) = v23[1] / 256; /*0x43d51f*/
//DUPDEF             *(unsigned int *)v67 = v66; /*0x43d528*/
//DUPDEF             v24 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v67); /*0x43d532*/
//DUPDEF             if ( (uint8_t)((CellClass*)(v24))->QuickPassable() ) /*0x43d539*/
//DUPDEF               v10 = 0; /*0x43d542*/
//DUPDEF             if ( (*((int (**)(BuildingClass *))this->vtable1 + 97))(this) == 24 /*0x43d575*/
//DUPDEF               && ((uint8_t)Window::IsVisible((Window *)((unsigned int *)this)[0])
//DUPDEF                || (uint8_t)BuildingClass::CheckFlag24((BuildingClass *)((unsigned int *)this)[0])
//DUPDEF                || (uint8_t)BuildingClass::CheckPowerFlags((BuildingClass *)((unsigned int *)this)[0])) )
//DUPDEF             {
//DUPDEF               Animation::GetProgress((Animation *)((unsigned int *)this)[0]); /*0x43d584*/
//DUPDEF               v25 = v1 * (double)this->Type->GateStages; /*0x43d58f*/
//DUPDEF               IDA_LOWORD(v26) = Math::RoundToInt(v25); /*0x43d595*/
//DUPDEF               v27 = v26; /*0x43d59c*/
//DUPDEF               if ( (uint8_t)BuildingClass::CheckFlag24((BuildingClass *)((unsigned int *)this)[0]) ) /*0x43d59e*/
//DUPDEF                 v27 = this->Type->GateStages - v27; /*0x43d5b5*/
//DUPDEF               if ( (uint8_t)Flag::CheckNone((Flag *)((unsigned int *)this)[0]) ) /*0x43d5b9*/
//DUPDEF                 v27 = 0; /*0x43d5c2*/
//DUPDEF               if ( (uint8_t)BuildingClass::CheckPowerFlags((BuildingClass *)((unsigned int *)this)[0]) ) /*0x43d5c6*/
//DUPDEF                 v27 = this->Type->GateStages - 1; /*0x43d5db*/
//DUPDEF               GateStages = this->Type->GateStages; /*0x43d5e2*/
//DUPDEF               if ( v27 >= GateStages ) /*0x43d5ea*/
//DUPDEF                 v27 = GateStages - 1; /*0x43d5ec*/
//DUPDEF               if ( v27 < 0 ) /*0x43d5f1*/
//DUPDEF                 v27 = 0; /*0x43d5f3*/
//DUPDEF               *(unsigned int *)v67 = (*((int (**)(BuildingClass *))this->vtable1 + 27))(this); /*0x43d5fe*/
//DUPDEF               BuildingClass::GetHealthRatio(this); /*0x43d602*/
//DUPDEF               if ( v25 > *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5888) ) /*0x43d618*/
//DUPDEF                 v29 = 0; /*0x43d629*/
//DUPDEF               else
//DUPDEF                 v29 = this->Type->GateStages + 1; /*0x43d626*/
//DUPDEF               v30 = (int16_t *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v3); /*0x43d63f*/
//DUPDEF               v31 = (*((int (**)(BuildingClass *, int, int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x43d654*/
//DUPDEF                      + 116))(
//DUPDEF                       this,
//DUPDEF                       2,
//DUPDEF                       1,
//DUPDEF                       v30[133],
//DUPDEF                       v10,
//DUPDEF                       0,
//DUPDEF                       0,
//DUPDEF                       0,
//DUPDEF                       0,
//DUPDEF                       0);
//DUPDEF               v32 = ZCoordToScreenY(v31); /*0x43d65c*/
//DUPDEF               return loc_705E00( /*0x43d683*/
//DUPDEF                        this,
//DUPDEF                        retaddr,
//DUPDEF                        v27 + v29,
//DUPDEF                        v77,
//DUPDEF                        v78,
//DUPDEF                        0,
//DUPDEF                        256,
//DUPDEF                        v73 - v32);
//DUPDEF }
//DUPDEF             else
//DUPDEF             {
//DUPDEF               if ( (*((int (__usercall **)(BuildingClass *))this->vtable1 + 97))(this) == 16 ) /*0x43d69f*/
//DUPDEF               {
//DUPDEF                 if ( v62 ) /*0x43d6a7*/
//DUPDEF                 {
//DUPDEF                   Type = this->Type; /*0x43d6a9*/
//DUPDEF                   if ( *(unsigned int *)&Type->__pad_F70[1420] ) /*0x43d6af*/
//DUPDEF                   {
//DUPDEF                     v63 = *(unsigned int *)&Type->__pad_F70[1420]; /*0x43d7d2*/
//DUPDEF                     v65 = -40; /*0x43d7d6*/
//DUPDEF }
//DUPDEF                 }
//DUPDEF                 else
//DUPDEF                 {
//DUPDEF                   v34 = this->Type; /*0x43d6bf*/
//DUPDEF                   if ( *(unsigned int *)&v34->__pad_F70[1396] ) /*0x43d6c5*/
//DUPDEF                   {
//DUPDEF                     v63 = *(unsigned int *)&v34->__pad_F70[1396]; /*0x43d6cf*/
//DUPDEF                     v65 = -20; /*0x43d6d3*/
//DUPDEF }
//DUPDEF                 }
//DUPDEF               }
//DUPDEF               v35 = (*((int (**)(BuildingClass *))this->vtable1 + 97))(this); /*0x43d6df*/
//DUPDEF               if ( v35 != 18 && v35 != 19 ) /*0x43d6ed*/
//DUPDEF               {
//DUPDEF                 v36 = *(unsigned int *)&this->Type->__pad_F70[1476]; /*0x43d6fc*/
//DUPDEF                 v68 = *(unsigned int *)&this->Type->__pad_F70[1472] + 198; /*0x43d70a*/
//DUPDEF                 v69 = v36 + 446; /*0x43d70e*/
//DUPDEF               }
//DUPDEF               v37 = (((BuildingTypeClass*)((int *)this->Type))->GetFoundationHeight(0) << 8) - 256; /*0x43d72a*/
//DUPDEF               v70 = (((BuildingTypeClass*)(this->Type))->GetFoundationWidth() << 8) - 256; /*0x43d74d*/
//DUPDEF               v37 = v37; /*0x43d751*/
//DUPDEF               v38 = TacticalClass::AdjustForZShapeMove((int *)v67, &v70); /*0x43d755*/
//DUPDEF               v39 = this->Type; /*0x43d76e*/
//DUPDEF               v40 = v69 - v38[1]; /*0x43d774*/
//DUPDEF               v68 -= *v38; /*0x43d776*/
//DUPDEF               v69 = v40; /*0x43d77a*/
//DUPDEF               v66 = dword_89DDBC; /*0x43d77e*/
//DUPDEF               if ( ((BuildingTypeClass*)(v39))->GetFoundationWidth() >= 8 ) /*0x43d78a*/
//DUPDEF                 v66 = 0; /*0x43d78c*/
//DUPDEF               if ( *(int *)(v76 + 12) > 0 ) /*0x43d7a1*/
//DUPDEF               {
//DUPDEF                 v41 = v63->nextArrayIndex; /*0x43d7c1*/
//DUPDEF                 if ( BuildingClass::GetProductionFrame(this) < v41 / 2 ) /*0x43d7c7*/
//DUPDEF                   BuildingClass::GetProductionFrame(this); /*0x43d7cb*/
//DUPDEF                 v69 = v69; /*0x43d802*/
//DUPDEF                 v68 = v68; /*0x43d803*/
//DUPDEF                 v66 = v66; /*0x43d806*/
//DUPDEF                 v42 = (int16_t *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v3); /*0x43d812*/
//DUPDEF                 v43 = (*((int (**)(BuildingClass *, int, int, int, int, MixFileClass *, unsigned int, int, int, unsigned int))this->TechnoClass /*0x43d836*/
//DUPDEF                        + 116))(
//DUPDEF                         this,
//DUPDEF                         2,
//DUPDEF                         1,
//DUPDEF                         *(int16_t *)this->Type->ExtraLight + v42[133],
//DUPDEF                         v10,
//DUPDEF                         v66,
//DUPDEF                         0,
//DUPDEF                         v68,
//DUPDEF                         v69,
//DUPDEF                         0);
//DUPDEF                 v44 = ZCoordToScreenY(v43); /*0x43d83e*/
//DUPDEF                 loc_705E00( /*0x43d85f*/
//DUPDEF                   this,
//DUPDEF                   v37,
//DUPDEF                   v78,
//DUPDEF                   v75,
//DUPDEF                   v76,
//DUPDEF                   0,
//DUPDEF                   256,
//DUPDEF                   v73 - v44);
//DUPDEF               }
//DUPDEF               if ( *(unsigned int *)&this->Type->__pad_F70[1448] && this->BuildingClass_field_int_534 ) /*0x43d874*/
//DUPDEF               {
//DUPDEF                 v45 = (int16_t *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v3); /*0x43d892*/
//DUPDEF                 v46 = (*((int (**)(BuildingClass *, unsigned int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x43d8b6*/
//DUPDEF                        + 116))(
//DUPDEF                         this,
//DUPDEF                         0,
//DUPDEF                         1,
//DUPDEF                         *(int16_t *)this->Type->ExtraLight + v45[133],
//DUPDEF                         v10,
//DUPDEF                         0,
//DUPDEF                         0,
//DUPDEF                         0,
//DUPDEF                         0,
//DUPDEF                         0);
//DUPDEF                 v55 = -1 - ZCoordToScreenY(v46); /*0x43d8c8*/
//DUPDEF                 ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x43d8d4*/
//DUPDEF                 loc_705E00( /*0x43d8e9*/
//DUPDEF                   this,
//DUPDEF                   *(unsigned int *)&this->Type->__pad_F70[1448],
//DUPDEF                   ProductionFrame,
//DUPDEF                   v75,
//DUPDEF                   v76,
//DUPDEF                   0,
//DUPDEF                   256,
//DUPDEF                   v55);
//DUPDEF }
//DUPDEF               result = (*((int (**)(BuildingClass *))this->vtable1 + 97))(this); /*0x43d8f2*/
//DUPDEF               if ( result == 16 ) /*0x43d8fb*/
//DUPDEF               {
//DUPDEF                 if ( v62 ) /*0x43d907*/
//DUPDEF                 {
//DUPDEF                   result = (int)this->Type; /*0x43d909*/
//DUPDEF                   if ( result->UnderRoofDoorAnim ) /*0x43d90f*/
//DUPDEF                   {
//DUPDEF                     BuildingClass::GetHealthRatio(this); /*0x43d9da*/
//DUPDEF                     v50 = (int16_t *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v3); /*0x43da16*/
//DUPDEF                     v51 = (*((int (**)(BuildingClass *, unsigned int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x43da3a*/
//DUPDEF                            + 116))(
//DUPDEF                             this,
//DUPDEF                             0,
//DUPDEF                             1,
//DUPDEF                             *(int16_t *)this->Type->ExtraLight + v50[133],
//DUPDEF                             v10,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0);
//DUPDEF                     v57 = -ZCoordToScreenY(v51); /*0x43da55*/
//DUPDEF                     return loc_705E00( /*0x43da67*/
//DUPDEF                              this,
//DUPDEF                              *(unsigned int *)&this->Type->__pad_F70[1428],
//DUPDEF                              v78,
//DUPDEF                              v75,
//DUPDEF                              v76,
//DUPDEF                              0,
//DUPDEF                              256,
//DUPDEF                              v57);
//DUPDEF }
//DUPDEF                 }
//DUPDEF                 else
//DUPDEF                 {
//DUPDEF                   result = *(unsigned int *)&this->Type->__pad_F70[1404]; /*0x43d92d*/
//DUPDEF                   if ( result ) /*0x43d935*/
//DUPDEF                   {
//DUPDEF                     BuildingClass::GetHealthRatio(this); /*0x43d93d*/
//DUPDEF                     v48 = (int16_t *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v3); /*0x43d978*/
//DUPDEF                     v49 = (*((int (**)(BuildingClass *, unsigned int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x43d99c*/
//DUPDEF                            + 116))(
//DUPDEF                             this,
//DUPDEF                             0,
//DUPDEF                             1,
//DUPDEF                             *(int16_t *)this->Type->ExtraLight + v48[133],
//DUPDEF                             v10,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0,
//DUPDEF                             0);
//DUPDEF                     v56 = -ZCoordToScreenY(v49); /*0x43d9b7*/
//DUPDEF                     return loc_705E00( /*0x43d9c9*/
//DUPDEF                              this,
//DUPDEF                              *(unsigned int *)&this->Type->__pad_F70[1404],
//DUPDEF                              v78,
//DUPDEF                              v75,
//DUPDEF                              v76,
//DUPDEF                              0,
//DUPDEF                              256,
//DUPDEF                              v56);
//DUPDEF }
//DUPDEF                 }
//DUPDEF               }
//DUPDEF             }
//DUPDEF             return result; /*0x43d68f*/
//DUPDEF           }
//DUPDEF           IDA_LOWORD(v21) = v59; /*0x43d494*/
//DUPDEF           IDA_LOWORD(v22) = v19; /*0x43d4a0*/
//DUPDEF           v20 = v21 | (32 * (v22 | (v61 << 6))); /*0x43d4a7*/
//DUPDEF           v10 |= v20; /*0x43d4a9*/
//DUPDEF         }
//DUPDEF         IDA_LOWORD(v21) = v61; /*0x43d4ab*/
//DUPDEF         IDA_LOWORD(v22) = v19 >> 1; /*0x43d4b8*/
//DUPDEF         IDA_LOWORD(v20) = v59; /*0x43d4ba*/
//DUPDEF         v21 *= 32; /*0x43d4c0*/
//DUPDEF         v22 = v20 | ((v21 | v22) << 6); /*0x43d4c8*/
//DUPDEF         v10 |= v22; /*0x43d4ca*/
//DUPDEF         goto LABEL_28; /*0x43d4ca*/
//DUPDEF       }
//DUPDEF       v11 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6308); /*0x43d39c*/
//DUPDEF       v12 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v11; /*0x43d3a2*/
//DUPDEF       v13 = *(unsigned char *)(v11 + v12 + 4174 + 2087); /*0x43d3af*/
//DUPDEF       v58 = *(unsigned char *)(v11 + v12 + 6260); /*0x43d3bc*/
//DUPDEF       v60 = *(unsigned char *)(v11 + v12 + 6262); /*0x43d3c6*/
//DUPDEF       v14 = DDraw_GetStatus() - 1; /*0x43d3cf*/
//DUPDEF       if ( v14 ) /*0x43d3d0*/
//DUPDEF       {
//DUPDEF         if ( --v14 ) /*0x43d3d3*/
//DUPDEF         {
//DUPDEF   LABEL_21:
//DUPDEF           IDA_LOWORD(v16) = v58; /*0x43d411*/
//DUPDEF           IDA_LOWORD(v15) = v60; /*0x43d417*/
//DUPDEF           IDA_LOWORD(v14) = v13 >> 1; /*0x43d422*/
//DUPDEF           v10 |= v15 | (32 * ((32 * v16) | v14)); /*0x43d42e*/
//DUPDEF           goto LABEL_22; /*0x43d42e*/
//DUPDEF         }
//DUPDEF         IDA_LOWORD(v10) = v58; /*0x43d3d5*/
//DUPDEF         IDA_LOWORD(v16) = v60; /*0x43d3db*/
//DUPDEF         v10 = v16 | (32 * (v13 | (v10 << 6))); /*0x43d3ee*/
//DUPDEF       }
//DUPDEF       IDA_LOWORD(v16) = v58; /*0x43d3f0*/
//DUPDEF       IDA_LOWORD(v14) = v13 >> 1; /*0x43d3fd*/
//DUPDEF       IDA_LOWORD(v15) = v60; /*0x43d3ff*/
//DUPDEF       v16 *= 32; /*0x43d405*/
//DUPDEF       v14 = v15 | ((v16 | v14) << 6); /*0x43d40d*/
//DUPDEF       v10 |= v14; /*0x43d40f*/
//DUPDEF       goto LABEL_21; /*0x43d40f*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x43d688*/
//DUPDEF   return result; /*0x43d688*/
//DUPDEF   return result; /*0x43d688*/
//DUPDEF   return result; /*0x43d688*/
//DUPDEF   return result; /*0x43d688*/
//DUPDEF     return {}; // TODO stub - retranslate via C-line pipeline

// IDA 0x449410: get bounding size extension
// 0x449410
//DUPDEF int BuildingClass::GetBoundingSizeExt() const
//DUPDEF {
//DUPDEF   return (this->Type->TurretAnimIsVoxel != 0 ? 0x20 : 0)
//DUPDEF        - (this->Type->Gate != 0 ? 0x10 : 0)
//DUPDEF        + ObjectClass::GetBoundingSize();
//DUPDEF }
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
//DUPDEF     return {}; // TODO stub - translate quarantined IDA block above
//DUPDEF }

// ============================================================
// Section 15: Health / Stats
// ============================================================

// 0x5f5c60
//DUPDEF double BuildingClass::GetHealthRatio() const
//DUPDEF {
//DUPDEF   return (*((int (**)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 34))( /*0x5f5c7c*/
//DUPDEF            this,
//DUPDEF            COERCE_UNSIGNED_INT64((double)((unsigned int *)this)[0]),
//DUPDEF            IDA_HIDWORD(COERCE_UNSIGNED_INT64((double)((unsigned int *)this)[0])));
//DUPDEF }
//DUPDEF     v7 = dword_AC4B58++; /*0x6386a6*/
//DUPDEF     *((unsigned int *)dword_AC4B4C + v7) = v6; /*0x6386b5*/
//DUPDEF   }
//DUPDEF   *(unsigned char *)(v3 + 28) = 1; /*0x6386ba*/
//DUPDEF   return 1; /*0x6386be*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v6 = 0; /*0x638646*/
//DUPDEF   }
//DUPDEF   qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
//DUPDEF   *((unsigned short *)v6 + 54) = v9[54]; /*0x638655*/
//DUPDEF   v6[110] = v9[55]; /*0x638657*/
//DUPDEF   if ( *v6 == 4 ) /*0x63865c*/
//DUPDEF     v6[29] = 2; /*0x63865e*/
//DUPDEF   if ( dword_AC4B58 < dword_AC4B50 /*0x638699*/
//DUPDEF     || (byte_AC4B55 || !dword_AC4B50)
//DUPDEF     && dword_AC4B5C > 0
//DUPDEF     && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC4B48 + 8))(
//DUPDEF          &dword_AC4B48,
//DUPDEF          dword_AC4B50 + dword_AC4B5C,
//DUPDEF          0) )
//DUPDEF   {
//DUPDEF     v7 = dword_AC4B58++; /*0x6386a6*/
//DUPDEF     *((unsigned int *)dword_AC4B4C + v7) = v6; /*0x6386b5*/
//DUPDEF }
//DUPDEF   *(unsigned char *)(v3 + 28) = 1; /*0x6386ba*/
//DUPDEF   return 1; /*0x6386be*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v6 = 0; /*0x638646*/
//DUPDEF   qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
//DUPDEF   *((unsigned short *)v6 + 54) = v9[54]; /*0x638655*/
//DUPDEF   v6[110] = v9[55]; /*0x638657*/
//DUPDEF   if ( *v6 == 4 ) /*0x63865c*/
//DUPDEF     v6[29] = 2; /*0x63865e*/
//DUPDEF   if ( dword_AC4B58 < dword_AC4B50 /*0x638699*/
//DUPDEF     || (byte_AC4B55 || !dword_AC4B50)
//DUPDEF     && dword_AC4B5C > 0
//DUPDEF     && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC4B48 + 8))(
//DUPDEF          &dword_AC4B48,
//DUPDEF          dword_AC4B50 + dword_AC4B5C,
//DUPDEF          0) )
//DUPDEF   {
//DUPDEF     v7 = dword_AC4B58++; /*0x6386a6*/
//DUPDEF     *((unsigned int *)dword_AC4B4C + v7) = v6; /*0x6386b5*/
//DUPDEF   *(unsigned char *)(v3 + 28) = 1; /*0x6386ba*/
//DUPDEF   return 1; /*0x6386be*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v6 = 0; /*0x638646*/
//DUPDEF   qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
//DUPDEF   *((unsigned short *)v6 + 54) = v9[54]; /*0x638655*/
//DUPDEF   v6[110] = v9[55]; /*0x638657*/
//DUPDEF   if ( *v6 == 4 ) /*0x63865c*/
//DUPDEF     v6[29] = 2; /*0x63865e*/
//DUPDEF   if ( dword_AC4B58 < dword_AC4B50 /*0x638699*/
//DUPDEF     || (byte_AC4B55 || !dword_AC4B50)
//DUPDEF     && dword_AC4B5C > 0
//DUPDEF     && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC4B48 + 8))(
//DUPDEF          &dword_AC4B48,
//DUPDEF          dword_AC4B50 + dword_AC4B5C,
//DUPDEF          0) )
//DUPDEF   {
//DUPDEF     v7 = dword_AC4B58++; /*0x6386a6*/
//DUPDEF     *((unsigned int *)dword_AC4B4C + v7) = v6; /*0x6386b5*/
//DUPDEF   *(unsigned char *)(v3 + 28) = 1; /*0x6386ba*/
//DUPDEF   return 1; /*0x6386be*/
//DUPDEF // 0x455b90
//DUPDEF     int BuildingClass::GetFWFlags()
//DUPDEF     {
//DUPDEF       int *location; // ecx
//DUPDEF       int v2; // ebx
//DUPDEF       CellClass *v3; // edi
//DUPDEF       signed int i; // esi
//DUPDEF       Cell *NeighbourContent; // eax
//DUPDEF       unsigned int *v6; // eax
//DUPDEF       unsigned int v8[3]; // [esp+Ch] [ebp-Ch] BYREF

//DUPDEF       location = ((unsigned int *)this)[0]; /*0x455b93*/
//DUPDEF       v2 = 0; /*0x455b9e*/
//DUPDEF       v8[0] = *location; /*0x455ba0*/
//DUPDEF       v8[1] = location[1]; /*0x455ba7*/
//DUPDEF       v8[2] = location[2]; /*0x455bb8*/
//DUPDEF       v3 = RawCoord::To_Cell((void *)&stru_87F5F0_raw.__pad_58[416], v8); /*0x455bc1*/
//DUPDEF       for ( i = 0; i < 8; i += 2 ) /*0x455bc3*/
//DUPDEF       {
//DUPDEF         NeighbourContent = (Cell *)Cell::GetNeighbourContent((Cell *)v3, i); /*0x455bc8*/
//DUPDEF         v6 = Cell::IsBridge(NeighbourContent); /*0x455bcf*/
//DUPDEF         if ( v6 && *(unsigned char *)(v6[328] + 5824) && !*((unsigned char *)v6 + 129) && *((unsigned char *)v6 + 144) ) /*0x455bf2*/
//DUPDEF           v2 |= 1 << (i >> 1); /*0x455c07*/
//DUPDEF }
//DUPDEF       return v2; /*0x455c11*/
//DUPDEF     }
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
//DUPDEF void BuildingClass::FlushScriptActions() {}
//DUPDEF   unsigned int *Type; // esi
//DUPDEF   int v3; // eax
//DUPDEF   BuildingClass *v4; // ebx
//DUPDEF   int v5; // edi
//DUPDEF   int v6; // eax
//DUPDEF   int v7; // edx
//DUPDEF   int v8; // ecx
//DUPDEF   BuildingClass *v9; // edx
//DUPDEF   int i; // edi
//DUPDEF   TeamClass *v11; // esi
//DUPDEF   int v12; // eax
//DUPDEF   int uniqueId; // edi
//DUPDEF   int j; // esi
//DUPDEF   BuildingClass *v15; // [esp+10h] [ebp-4h] BYREF

//DUPDEF   if ( !this ) /*0x639bc9*/
//DUPDEF     return; /*0x639bc9*/
//DUPDEF   Type = (unsigned int *)BuildingClass::GetType(**(BuildingClass ***)((unsigned int *)this)[0]); /*0x639bdb*/
//DUPDEF   v15 = this; /*0x639be2*/
//DUPDEF   v3 = (*(int (**)(unsigned int *, BuildingClass **))(Type[1] + 16))(Type + 1, &v15); /*0x639bec*/
//DUPDEF   if ( v3 != -1 ) /*0x639bf2*/
//DUPDEF   {
//DUPDEF     v5 = Type[5]; /*0x639bf8*/
//DUPDEF     if ( v5 == 1 ) /*0x639bfe*/
//DUPDEF     {
//DUPDEF       v4 = this; /*0x639c00*/
//DUPDEF       goto LABEL_17; /*0x639c02*/
//DUPDEF }
//DUPDEF     v6 = v3 + 1; /*0x639c04*/
//DUPDEF     if ( v6 >= v5 ) /*0x639c07*/
//DUPDEF       v6 = 0; /*0x639c09*/
//DUPDEF     v7 = v6; /*0x639c0d*/
//DUPDEF     if ( !v5 ) /*0x639c0f*/
//DUPDEF       goto LABEL_15; /*0x639c0f*/
//DUPDEF     if ( v6 >= v5 ) /*0x639c13*/
//DUPDEF     {
//DUPDEF       v8 = Type[37]; /*0x639c15*/
//DUPDEF       if ( v8 < 0 ) /*0x639c1d*/
//DUPDEF         goto LABEL_15; /*0x639c1d*/
//DUPDEF       v7 = v8 + (v6 - v8) % Type[36]; /*0x639c2a*/
//DUPDEF     }
//DUPDEF     if ( v7 >= 0 && v7 < v5 ) /*0x639c32*/
//DUPDEF     {
//DUPDEF       v9 = *(BuildingClass **)(Type[2] + 4 * v7); /*0x639c37*/
//DUPDEF   LABEL_16:
//DUPDEF       v4 = v9; /*0x639c3e*/
//DUPDEF       goto LABEL_17; /*0x639c3e*/
//DUPDEF     }
//DUPDEF   LABEL_15:
//DUPDEF     v9 = 0; /*0x639c3c*/
//DUPDEF     goto LABEL_16; /*0x639c3c*/
//DUPDEF   }
//DUPDEF   v4 = 0; /*0x639bf4*/
//DUPDEF   LABEL_17:
//DUPDEF   for ( i = ((unsigned int *)this)[0] - 1; i >= 0; --i ) /*0x639c44*/
//DUPDEF   {
//DUPDEF     v11 = (TeamClass *)BuildingClass::GetType(**((BuildingClass ***)((unsigned int *)this)[0] + i)); /*0x639c53*/
//DUPDEF     v12 = (*((int (**)(void **, BuildingClass **))((unsigned int *)v11)[0] + 4))(&((unsigned int *)v11)[0], &this); /*0x639c64*/
//DUPDEF     TeamClass::Cleanup(v11, v12); /*0x639c6a*/
//DUPDEF }
//DUPDEF   if ( v4 && v4 != this ) /*0x639c78*/
//DUPDEF   {
//DUPDEF     FactoryClass::ClearObjects((FactoryClass *)v4); /*0x639c7c*/
//DUPDEF     uniqueId = ((unsigned int *)v4)[0]; /*0x639c81*/
//DUPDEF     for ( j = 0; j < uniqueId; ++j ) /*0x639c88*/
//DUPDEF       ScriptAction::PlaceObject((int)v4, *((unsigned int **)((unsigned int *)v4)[0] + j)); /*0x639c93*/
//DUPDEF     ScriptAction::FindSquadMember((ScriptAction *)v4); /*0x639c9f*/
//DUPDEF     IDA_LOBYTE(((unsigned int *)v4)[0]) = 0; /*0x639ca4*/
//DUPDEF }
//DUPDEF }
//DUPDEF   v4 = 0; /*0x639bf4*/
//DUPDEF   LABEL_17:
//DUPDEF   for ( i = this->uniqueId - 1; i >= 0; --i ) /*0x639c44*/
//DUPDEF   {
//DUPDEF     v11 = (TeamClass *)BuildingClass::GetType(**((BuildingClass ***)this->vtable1 + i)); /*0x639c53*/
//DUPDEF     v12 = (*((int (**)(void **, BuildingClass **))v11->vtable1 + 4))(&v11->vtable1, &this); /*0x639c64*/
//DUPDEF     TeamClass::Cleanup(v11, v12); /*0x639c6a*/
//DUPDEF }
//DUPDEF   if ( v4 && v4 != this ) /*0x639c78*/
//DUPDEF   {
//DUPDEF     FactoryClass::ClearObjects((FactoryClass *)v4); /*0x639c7c*/
//DUPDEF     uniqueId = v4->uniqueId; /*0x639c81*/
//DUPDEF     for ( j = 0; j < uniqueId; ++j ) /*0x639c88*/
//DUPDEF       ScriptAction::PlaceObject((int)v4, *((unsigned int **)v4->vtable1 + j)); /*0x639c93*/
//DUPDEF     ScriptAction::FindSquadMember((ScriptAction *)v4); /*0x639c9f*/
//DUPDEF     IDA_LOBYTE(v4->referenceCount) = 0; /*0x639ca4*/
//DUPDEF }
//DUPDEF }
//DUPDEF   v4 = 0; /*0x639bf4*/
//DUPDEF   LABEL_17:
//DUPDEF   for ( i = this->uniqueId - 1; i >= 0; --i ) /*0x639c44*/
//DUPDEF   {
//DUPDEF     v11 = (TeamClass *)BuildingClass::GetType(**((BuildingClass ***)this->vtable1 + i)); /*0x639c53*/
//DUPDEF     v12 = (*((int (**)(void **, BuildingClass **))v11->vtable1 + 4))(&v11->vtable1, &this); /*0x639c64*/
//DUPDEF     TeamClass::Cleanup(v11, v12); /*0x639c6a*/
//DUPDEF }
//DUPDEF   if ( v4 && v4 != this ) /*0x639c78*/
//DUPDEF   {
//DUPDEF     FactoryClass::ClearObjects((FactoryClass *)v4); /*0x639c7c*/
//DUPDEF     uniqueId = v4->uniqueId; /*0x639c81*/
//DUPDEF     for ( j = 0; j < uniqueId; ++j ) /*0x639c88*/
//DUPDEF       ScriptAction::PlaceObject((int)v4, *((unsigned int **)v4->vtable1 + j)); /*0x639c93*/
//DUPDEF     ScriptAction::FindSquadMember((ScriptAction *)v4); /*0x639c9f*/
//DUPDEF     IDA_LOBYTE(v4->referenceCount) = 0; /*0x639ca4*/
//DUPDEF }
//DUPDEF }
//DUPDEF   v4 = 0; /*0x639bf4*/
//DUPDEF   LABEL_17:
//DUPDEF   for ( i = this->uniqueId - 1; i >= 0; --i ) /*0x639c44*/
//DUPDEF   {
//DUPDEF     v11 = (int *)BuildingClass::GetType(**(unsigned int ***)(this->vtable2 + 4 * i)); /*0x639c53*/
//DUPDEF     v12 = (*(int (**)(int *, int *))(v11[1] + 16))(v11 + 1, &this); /*0x639c64*/
//DUPDEF     TeamClass::Cleanup(v11, v12); /*0x639c6a*/
//DUPDEF   }
//DUPDEF   if ( v4 && v4 != this ) /*0x639c78*/
//DUPDEF   {
//DUPDEF     FactoryClass::ClearObjects((int *)v4); /*0x639c7c*/
//DUPDEF     v13 = *(unsigned int *)(v4 + 16); /*0x639c81*/
//DUPDEF     for ( j = 0; j < v13; ++j ) /*0x639c88*/
//DUPDEF       ScriptAction::PlaceObject(v4, *(unsigned int **)(*(unsigned int *)(v4 + 4) + 4 * j)); /*0x639c93*/
//DUPDEF     ScriptAction::FindSquadMember(v4); /*0x639c9f*/
//DUPDEF     *(unsigned char *)(v4 + 28) = 0; /*0x639ca4*/
//DUPDEF   v4 = 0; /*0x639bf4*/
//DUPDEF   LABEL_17:
//DUPDEF   for ( i = this->uniqueId - 1; i >= 0; --i ) /*0x639c44*/
//DUPDEF   {
//DUPDEF     v11 = (int *)BuildingClass::GetType(**(unsigned int ***)(this->vtable2 + 4 * i)); /*0x639c53*/
//DUPDEF     v12 = (*(int (**)(int *, int *))(v11[1] + 16))(v11 + 1, &this); /*0x639c64*/
//DUPDEF     TeamClass::Cleanup(v11, v12); /*0x639c6a*/
//DUPDEF   if ( v4 && v4 != this ) /*0x639c78*/
//DUPDEF   {
//DUPDEF     FactoryClass::ClearObjects((int *)v4); /*0x639c7c*/
//DUPDEF     v13 = *(unsigned int *)(v4 + 16); /*0x639c81*/
//DUPDEF     for ( j = 0; j < v13; ++j ) /*0x639c88*/
//DUPDEF       ScriptAction::PlaceObject(v4, *(unsigned int **)(*(unsigned int *)(v4 + 4) + 4 * j)); /*0x639c93*/
//DUPDEF     ScriptAction::FindSquadMember(v4); /*0x639c9f*/
//DUPDEF     *(unsigned char *)(v4 + 28) = 0; /*0x639ca4*/
// 0x6551c0
//DUPDEF int ((BuildingClass*)(BuildingTypeClass* upgrade))->AddUpgrade()
//DUPDEF {
//DUPDEF   int v3; // eax
//DUPDEF   unsigned short *v4; // ecx
//DUPDEF   int v5; // ecx
//DUPDEF   int v6; // edx

//DUPDEF   v3 = this->u32_1234 - 1; /*0x6551cf*/
//DUPDEF   if ( v3 < 0 ) /*0x6551d0*/
//DUPDEF   {
//DUPDEF   LABEL_6:
//DUPDEF     v5 = this->u32_122C; /*0x6551f5*/
//DUPDEF     if ( this->u32_1234 < v5 /*0x65522b*/
//DUPDEF       || ((IDA_LOBYTE(v3) = this->u8_1231, (unsigned char)v3) || !v5)
//DUPDEF       && (v3 = this->u32_1238, v3 > 0)
//DUPDEF       && (IDA_LOBYTE(v3) = (*(int (**)(int, int, unsigned int))(this->u32_1224 + 8))(&this->u32_4890, v5 + v3, 0),
//DUPDEF           (unsigned char)v3) )
//DUPDEF     {
//DUPDEF       v3 = this->u32_1234; /*0x65522d*/
//DUPDEF       v6 = this->u32_1228; /*0x655230*/
//DUPDEF       this->u32_1234 = v3 + 1; /*0x655236*/
//DUPDEF       *(unsigned int *)(v6 + 4 * v3) = *(unsigned int *)upgrade; /*0x65523b*/
//DUPDEF }
//DUPDEF     this->q14D9 = 1; /*0x65523e*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v4 = (unsigned short *)(this->u32_1228 + 4 * v3); /*0x6551db*/
//DUPDEF     while ( *v4 != *(unsigned short *)upgrade || v4[1] != *(unsigned short *)(upgrade + 2) ) /*0x6551eb*/
//DUPDEF     {
//DUPDEF       --v3; /*0x6551ed*/
//DUPDEF       v4 -= 2; /*0x6551ee*/
//DUPDEF       if ( v3 < 0 ) /*0x6551f3*/
//DUPDEF         goto LABEL_6; /*0x6551f3*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   return v3; /*0x655245*/
//DUPDEF }
// 0x726400
void BuildingClass::ProcessUpgradeEffects()
{
  char v2; // bp
  int result; // eax
  unsigned int *i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // kr00_4
//DUPDEF   BombClass *v8; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x726408*/
  result = ((unsigned int *)this)[0]; /*0x72640a*/
  for ( i = *(unsigned int **)(result + 172); i; ++v2 ) /*0x726415*/
  {
    if ( i[11] == 13 ) /*0x726420*/
    {
      v5 = 3 * i[13]; /*0x72642e*/
//DUPDEF       ((unsigned int *)this)[0] = *(TagClass **)&((unsigned int *)&stru_A8EB00)[416]; /*0x726431*/
//DUPDEF       ((unsigned int *)this)[0] = v8; /*0x72643a*/
      ((unsigned int *)this)[0] = 5 * v5; /*0x72643f*/
      result = ~(1 << v2) & ((unsigned int *)this)[1]; /*0x72644e*/
      ((unsigned int *)this)[1] = result; /*0x726450*/
    }
    if ( i[11] == 51 ) /*0x726457*/
    {
//DUPDEF       v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i[13]); /*0x72646a*/
      v7 = i[13]; /*0x72647b*/
//DUPDEF       ((unsigned int *)this)[0] = *(TagClass **)&((unsigned int *)&stru_A8EB00)[416]; /*0x726488*/
//DUPDEF       ((unsigned int *)this)[0] = v8; /*0x72648e*/
      ((unsigned int *)this)[0] = 15 * (v6 + v7 / 2); /*0x726494*/
      result = ~(1 << v2); /*0x7264a3*/
      ((unsigned int *)this)[1] &= result; /*0x7264a7*/
    }
    i = (unsigned int *)i[10]; /*0x7264aa*/
  }
  return; /*0x7264b7 -- void per hpp*/
}
// 0x7265c0
void BuildingClass::ExecuteTriggers()
{
  int result; // eax
  char v5; // bl
  int i; // esi
  int Owner; // eax

  if ( this->nextObject ) /*0x7265ca -- raw '!this->q044 ||' dropped: q044 @0x110 has no hand-tree member*/
  {
    IDA_LOBYTE(result) = 0; /*0x726620*/
  }
  else
  {
//DUPDEF     result = this->objectTypeFlags; /*0x7265d1*/
//DUPDEF     v5 = 0; /*0x7265d6*/
//DUPDEF     for ( i = *(unsigned int *)(result + 176); i; i = *(unsigned int *)(i + 40) ) /*0x7265e0*/
//DUPDEF     {
//DUPDEF       Owner = HouseClass::FindOwner(*(void **)(*(unsigned int *)(this->objectTypeFlags + 164) + 180)); /*0x7265fd*/
//DUPDEF       if ( TerrainClass::ProcessUpdate(i, this, Owner, a2, (unsigned int *)this, (int)&a3) ) /*0x726605*/
//DUPDEF         v5 = 1; /*0x72660e*/
//DUPDEF     }
//DUPDEF     IDA_LOBYTE(result) = v5; /*0x726618*/
  }
//DUPDEF   return; /*0x72661c -- void per hpp*/
}
// 0x459c20
void BuildingClass::ProcessUpgradeTargeting()
{
//DUPDEF   AbstractClass *focus; // ecx
//DUPDEF   AbstractClass *v3; // esi
//DUPDEF   unsigned int v4; // eax
//DUPDEF   BuildingTypeClass *Type; // eax
//DUPDEF   int VoiceHarvest; // eax
//DUPDEF   int result; // eax

//DUPDEF   focus = ((unsigned int *)this)[0]; /*0x459c23*/
//DUPDEF   if ( focus && (*((int (**)(AbstractClass *))focus->vtable0 + 11))(focus) == 11 )
//DUPDEF   {
//DUPDEF     v3 = ((unsigned int *)this)[0]; /*0x459c38*/
//DUPDEF     v4 = v3 ? ((*((int (**)(AbstractClass *))v3->vtable0 + 11))(((unsigned int *)this)[0]) == 11 ? (unsigned int)v3 : 0) : 0;
//DUPDEF     if ( *(unsigned int *)(v4 + 236) == 5 ) /*0x459c62*/
//DUPDEF     {
//DUPDEF       Type = this->Type; /*0x459c64*/
//DUPDEF       if ( ((unsigned int *)Type)[0] ) /*0x459c6a*/
//DUPDEF       {
//DUPDEF         if ( ((unsigned int *)Type)[0] ) /*0x459c74*/
//DUPDEF         {
//DUPDEF           VoiceHarvest = ((unsigned int *)Type)[0]; /*0x459c7e*/
//DUPDEF           if ( VoiceHarvest != -1 ) /*0x459c87*/
//DUPDEF             return (*((int (**)(BuildingClass *, int))this->vtable1 + 213))(this, VoiceHarvest); /*0x459c8e*/
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   TechnoClass::PickAlternateTarget((TechnoClass *)this); /*0x459c98*/
//DUPDEF   return result; /*0x459c94*/
//DUPDEF }
// 0x43fb20
//DUPDEF void BuildingClass::ProcessSpreadEffect() {}
//DUPDEF   double v1; // st7
//DUPDEF   char v3; // bl
//DUPDEF   int Type; // eax
//DUPDEF   int v5; // eax
//DUPDEF   int v6; // eax
//DUPDEF   char v8; // bl
//DUPDEF   int *DamageFireAnims; // edi
//DUPDEF   int v12; // ebp
//DUPDEF   int temporalTargetingMe; // ecx
//DUPDEF   int v14; // edi
//DUPDEF   int v15; // ecx
//DUPDEF   char *v16; // eax
//DUPDEF   int v17; // edi
//DUPDEF   int v18; // edx
//DUPDEF   int v19; // eax
//DUPDEF   int airstrike; // eax
//DUPDEF   int target; // ecx
//DUPDEF   int result; // eax
//DUPDEF   int v23; // eax
//DUPDEF   int Member81; // ebx
//DUPDEF   int v25; // edi
//DUPDEF   int v26; // eax
//DUPDEF   unsigned int BuildingClass_field_int_538; // eax
//DUPDEF   int v28; // edx
//DUPDEF   int *v29; // edi
//DUPDEF   char *ProductionTimeMult; // eax
//DUPDEF   int health; // eax
//DUPDEF   int *v32; // edi
//DUPDEF   int v33; // ebx
//DUPDEF   int v34; // edx
//DUPDEF   int i; // edx
//DUPDEF   int v36; // eax
//DUPDEF   int v37; // ecx
//DUPDEF   int v38; // eax
//DUPDEF   int v39; // edi
//DUPDEF   int v41; // edx
//DUPDEF   int v42; // eax
//DUPDEF   int v43; // ecx
//DUPDEF   int v44; // ebx
//DUPDEF   int v45; // ebp
//DUPDEF   unsigned short *v46; // eax
//DUPDEF   int v47; // edi
//DUPDEF   unsigned short *v48; // eax
//DUPDEF   int v49; // eax
//DUPDEF   int16_t *v50; // eax
//DUPDEF   int v51; // ecx
//DUPDEF   int v52; // eax
//DUPDEF   int v53; // ebx
//DUPDEF   int v54; // edi
//DUPDEF   int *v55; // eax
//DUPDEF   int v56; // ecx
//DUPDEF   int v57; // edx
//DUPDEF   int vtable0; // eax
//DUPDEF   unsigned int *v59; // eax
//DUPDEF   int v60; // ecx
//DUPDEF   int v61; // edx
//DUPDEF   int v62; // eax
//DUPDEF   AnimClass *v63; // eax
//DUPDEF   void **v64; // eax
//DUPDEF   AnimClass *v65; // eax
//DUPDEF   BuildingClass *v66; // [esp+0h] [ebp-4Ch]
//DUPDEF   BuildingClass *v67; // [esp+0h] [ebp-4Ch]
//DUPDEF   char v68; // [esp+13h] [ebp-39h]
//DUPDEF   int v69; // [esp+14h] [ebp-38h]
//DUPDEF   int v70; // [esp+18h] [ebp-34h]
//DUPDEF   int16_t v71[2]; // [esp+1Ch] [ebp-30h] BYREF
//DUPDEF   int16_t v72[2]; // [esp+20h] [ebp-2Ch] BYREF
//DUPDEF   int v73; // [esp+24h] [ebp-28h] BYREF
//DUPDEF   char v74[4]; // [esp+28h] [ebp-24h] BYREF
//DUPDEF   int v75[2]; // [esp+2Ch] [ebp-20h] BYREF
//DUPDEF   int v76; // [esp+34h] [ebp-18h] BYREF
//DUPDEF   int v77; // [esp+38h] [ebp-14h]
//DUPDEF   int v78; // [esp+3Ch] [ebp-10h]
//DUPDEF   char v79[12]; // [esp+40h] [ebp-Ch] BYREF

//DUPDEF   v3 = (*(uint8_t (**)(BuildingClass *))(this->vtable1 + 848))(this) /*0x43fb57*/
//DUPDEF     && (*(int (**)(BuildingClass *))(this->vtable1 + 388))(this) != 18
//DUPDEF     && (*(int (**)(BuildingClass *))(this->vtable1 + 388))(this) != 19;
//DUPDEF   Type = this->Type; /*0x43fb61*/
//DUPDEF   if ( v3 == this->__pad_6B8[16] ) /*0x43fb67*/
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)(Type + 3712) != -1 || *(unsigned int *)(Type + 3716) != -1 ) /*0x43fc0a*/
//DUPDEF     {
//DUPDEF       v76 = this->location[0]; /*0x43fc18*/
//DUPDEF       v77 = this->location[1]; /*0x43fc25*/
//DUPDEF       v78 = this->location[2]; /*0x43fc2c*/
//DUPDEF       StartAudioController(&v76, (AudioSource *)&this->Audio8_2); /*0x43fc34*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)(Type + 3712) != -1 || *(unsigned int *)(Type + 3716) != -1 ) /*0x43fb80*/
//DUPDEF     {
//DUPDEF       AudioFile::Stop((AudioFile *)&this->Audio8_2); /*0x43fb8a*/
//DUPDEF       v5 = this->location[1]; /*0x43fb9b*/
//DUPDEF       v76 = this->location[0]; /*0x43fb9e*/
//DUPDEF       v77 = v5; /*0x43fba2*/
//DUPDEF       v6 = this->Type; /*0x43fba6*/
//DUPDEF       v78 = this->location[2]; /*0x43fbb0*/
//DUPDEF       if ( v3 ) /*0x43fb99*/
//DUPDEF         StartAudioControllerAt(this->u32_4E8, &v76, (int **)&this->Audio8_2); /*0x43fbbe*/
//DUPDEF       else
//DUPDEF         StartAudioControllerAt(this->u32_13A4, &v76, (int **)&this->Audio8_2); /*0x43fbe3*/
//DUPDEF }
//DUPDEF     Animation::UpdateBuildingAnimations((Animation *)this); /*0x43fbea*/
//DUPDEF     this->__pad_6B8[16] = v3; /*0x43fbef*/
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x43fc41*/
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio(this); /*0x43fc4b*/
//DUPDEF     _EAX = dword_8871E0; /*0x43fc50*/
//DUPDEF     __asm /*0x43fc55*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [eax+1708h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (IDA_BYTE1(_EAX) & 0x41) != 0 ) /*0x43fc60*/
//DUPDEF     {
//DUPDEF       v8 = 1; /*0x43fc62*/
//DUPDEF       goto LABEL_22; /*0x43fc64*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio(this); /*0x43fc66*/
//DUPDEF     _ECX = dword_8871E0; /*0x43fc6b*/
//DUPDEF     __asm /*0x43fc71*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [ecx+1700h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4100) != 0 ) /*0x43fc7c*/
//DUPDEF     {
//DUPDEF       v8 = 1; /*0x43fc7e*/
//DUPDEF       goto LABEL_22; /*0x43fc80*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v8 = 0; /*0x43fc82*/
//DUPDEF   LABEL_22:
//DUPDEF   if ( v8 != this->RequiresDamageFires[0] ) /*0x43fc8a*/
//DUPDEF   {
//DUPDEF     if ( v8 ) /*0x43fc8e*/
//DUPDEF     {
//DUPDEF       CreateDominatorDestructionEffects(this); /*0x43fc92*/
//DUPDEF }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       DamageFireAnims = this->DamageFireAnims; /*0x43fc99*/
//DUPDEF       v12 = 8; /*0x43fc9f*/
//DUPDEF       do /*0x43fcbc*/
//DUPDEF       {
//DUPDEF         if ( *DamageFireAnims ) /*0x43fca4*/
//DUPDEF         {
//DUPDEF           (*(void (**)(int))(*(unsigned int *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43fcac*/
//DUPDEF           *DamageFireAnims = 0; /*0x43fcb2*/
//DUPDEF }
//DUPDEF         ++DamageFireAnims; /*0x43fcb8*/
//DUPDEF         --v12; /*0x43fcbb*/
//DUPDEF       }
//DUPDEF       while ( v12 ); /*0x43fcbc*/
//DUPDEF     }
//DUPDEF     this->RequiresDamageFires[0] = v8; /*0x43fcbe*/
//DUPDEF   }
//DUPDEF   if ( this->Type->qCA1 ) /*0x43fccd*/
//DUPDEF     this->turretIsRotating = (uint8_t)TimerClass::Active((int)this->primaryFacing); /*0x43fce7*/
//DUPDEF   else
//DUPDEF     this->turretIsRotating = 0; /*0x43fcef*/
//DUPDEF   temporalTargetingMe = this->temporalTargetingMe; /*0x43fcf9*/
//DUPDEF   if ( temporalTargetingMe ) /*0x43fd01*/
//DUPDEF     (*(void (**)(int))(this->q2D4)(temporalTargetingMe); /*0x43fd05*/
//DUPDEF   if ( (*(uint8_t (**)(BuildingClass *))(this->vtable1 + 468))(this) /*0x43fd1e*/
//DUPDEF     || (*(uint8_t (**)(BuildingClass *))(this->vtable1 + 472))(this) )
//DUPDEF   {
//DUPDEF     v51 = this->Type; /*0x4403d4*/
//DUPDEF     v52 = this->CashProductionTimer; /*0x4403e0*/
//DUPDEF     if ( v52 && *(unsigned int *)&dword_8871E0->__pad_240[260] ) /*0x4403ee*/
//DUPDEF     {
//DUPDEF       v53 = 0; /*0x4403fc*/
//DUPDEF       if ( v52 > 0 ) /*0x440400*/
//DUPDEF       {
//DUPDEF         v54 = 5512; /*0x440406*/
//DUPDEF         do /*0x4404e9*/
//DUPDEF         {
//DUPDEF           if ( !(((int)dword_A8ED84 + v53) % 24) && *(unsigned int *)&dword_8871E0->__pad_240[260] ) /*0x440428*/
//DUPDEF           {
//DUPDEF             v55 = (int *)World::ToScreen(v75, (unsigned int *)(v54 + v51), &v66->vtable0); /*0x440445*/
//DUPDEF             v56 = v55[1]; /*0x44044a*/
//DUPDEF             v57 = *v55; /*0x44044d*/
//DUPDEF             vtable0 = this->vtable1; /*0x44044f*/
//DUPDEF             v77 = v56; /*0x440451*/
//DUPDEF             v76 = v57; /*0x440459*/
//DUPDEF             v78 = 0; /*0x440460*/
//DUPDEF             v59 = (unsigned int *)(*(int (**)(BuildingClass *, char *))(vtable0 + 172))(this, v79); /*0x440468*/
//DUPDEF             v60 = v76 + *v59; /*0x440478*/
//DUPDEF             v61 = v59[1]; /*0x44047a*/
//DUPDEF             v62 = v78 + v59[2]; /*0x440486*/
//DUPDEF             v76 = v60; /*0x44048d*/
//DUPDEF             v77 += v61; /*0x440491*/
//DUPDEF             v78 = v62; /*0x440495*/
//DUPDEF             v63 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x440499*/
//DUPDEF             if ( v63 ) /*0x4404a3*/
//DUPDEF               v64 = AnimClass::ctor(v63, *(void **)&dword_8871E0->__pad_240[260], &v76, 0, 1, (void *)0x600, 0, 0); /*0x4404c6*/
//DUPDEF             else
//DUPDEF               v64 = 0; /*0x4404cd*/
//DUPDEF             v64[64] = (void *)-200; /*0x4404cf*/
//DUPDEF }
//DUPDEF           v51 = this->Type; /*0x4404d9*/
//DUPDEF           ++v53; /*0x4404df*/
//DUPDEF           v54 += 8; /*0x4404e0*/
//DUPDEF         }
//DUPDEF         while ( v53 < this->CashProductionTimer ); /*0x4404e9*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else if ( !((int)dword_A8ED84 % 24) ) /*0x4404fc*/
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)&dword_8871E0->__pad_240[260] ) /*0x440502*/
//DUPDEF       {
//DUPDEF         v65 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x440511*/
//DUPDEF         if ( v65 ) /*0x44051b*/
//DUPDEF         {
//DUPDEF           v76 = this->location[0]; /*0x440530*/
//DUPDEF           v77 = this->location[1]; /*0x440539*/
//DUPDEF           v78 = this->location[2]; /*0x440545*/
//DUPDEF           AnimClass::ctor(v65, *(void **)&dword_8871E0->__pad_240[260], &v76, 0, 1, (void *)0x600, 0, 0); /*0x440558*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     result = this->target; /*0x44055d*/
//DUPDEF     if ( result ) /*0x440565*/
//DUPDEF       return (*(int (**)(BuildingClass *, unsigned int))(this->vtable1 + 968))(this, 0); /*0x440565*/
//DUPDEF     return result; /*0x440565*/
//DUPDEF   }
//DUPDEF   v14 = *(unsigned int *)&this->__pad_6B8[24]; /*0x43fd2c*/
//DUPDEF   v15 = *(unsigned int *)&this->__pad_6B8[32]; /*0x43fd32*/
//DUPDEF   v16 = &this->__pad_6B8[24]; /*0x43fd3e*/
//DUPDEF   if ( v14 != -1 ) /*0x43fd46*/
//DUPDEF   {
//DUPDEF     if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x43fd4e*/
//DUPDEF       goto LABEL_46; /*0x43fd4e*/
//DUPDEF     v15 -= (int)dword_A8ED84 - v14; /*0x43fd54*/
//DUPDEF }
//DUPDEF   if ( v15 == 1 ) /*0x43fd59*/
//DUPDEF   {
//DUPDEF     v17 = v77; /*0x43fd5b*/
//DUPDEF     *(unsigned int *)v16 = dword_A8ED84; /*0x43fd63*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[28] = v17; /*0x43fd65*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[32] = 0; /*0x43fd68*/
//DUPDEF     v18 = this->Type->ProduceCashDelay; /*0x43fd77*/
//DUPDEF     *(unsigned int *)v16 = dword_A8ED84; /*0x43fd7d*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[28] = v77; /*0x43fd83*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[32] = v18; /*0x43fd86*/
//DUPDEF     if ( !*(unsigned char *)(*(unsigned int *)(this->owner + 52) + 422) ) /*0x43fd92*/
//DUPDEF     {
//DUPDEF       if ( (*(uint8_t (**)(BuildingClass *))(this->vtable1 + 848))(this) ) /*0x43fda0*/
//DUPDEF       {
//DUPDEF         v19 = this->Type->ProduceCashAmount; /*0x43fdb0*/
//DUPDEF         if ( v19 <= 0 ) /*0x43fdb8*/
//DUPDEF           HouseClass::ProcessPowerDrain((int *)this->owner, -v19); /*0x43fdd1*/
//DUPDEF         else
//DUPDEF           HouseClass::AddPower((HouseClass *)this->owner, this->Type->ProduceCashAmount); /*0x43fdc1*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   LABEL_46:
//DUPDEF   airstrike = this->airstrike; /*0x43fdd6*/
//DUPDEF   if ( airstrike && this->spawnManager == this ) /*0x43fde3*/
//DUPDEF     (*(void (**)(BuildingClass *, int))(this->vtable1 + 292))(this, 2); /*0x43fdeb*/
//DUPDEF   if ( this->Type->SAM ) /*0x43fdf7*/
//DUPDEF   {
//DUPDEF     target = this->target; /*0x43fe01*/
//DUPDEF     if ( target ) /*0x43fe09*/
//DUPDEF     {
//DUPDEF       if ( !(*(uint8_t (**)(int))(this->sparkParticles)(target) ) /*0x43fe0d*/
//DUPDEF         v1 = ((double (*)(BuildingClass *, unsigned int))*(unsigned int *)(this->vtable1 + 968))(this, 0); /*0x43fe1a*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   BuildingClass::UpdateAnimFrames(v66, v1); /*0x43fe22*/
//DUPDEF   if ( (*(uint8_t (**)(BuildingClass *))(this->vtable1 + 512))(this) /*0x43fe43*/
//DUPDEF     && this->BuildingClass_field_int_534
//DUPDEF     && (*(uint8_t (**)(BuildingClass *))(this->vtable1 + 492))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD[0] = 0; /*0x43fe4d*/
//DUPDEF   }
//DUPDEF   MovementAI::Begin(this); /*0x43fe56*/
//DUPDEF   IDA_LOBYTE(result) = this->isAliveFlag[0]; /*0x43fe5b*/
//DUPDEF   if ( !(unsigned char)result ) /*0x43fe63*/
//DUPDEF     return result; /*0x43fe63*/
//DUPDEF   if ( *(unsigned char *)((*(int (**)(BuildingClass *))(this->vtable1 + 132))(this) + 3285) /*0x43fe86*/
//DUPDEF // 0x70ddf0
//DUPDEF     && TechnoClass::GetMember81(this) > 0 )
//DUPDEF   {
//DUPDEF     ++this->ammoReloadTimer; /*0x43fe88*/
//DUPDEF   }
//DUPDEF   if ( !this->ammo ) /*0x43fe8e*/
//DUPDEF   {
//DUPDEF     v23 = this->Type; /*0x43fe98*/
//DUPDEF     if ( !this->u32_1BE1 && !this->u32_1BE2 ) /*0x43fea8*/
//DUPDEF       this->ammo = this->u32_BA4; /*0x43feb8*/
//DUPDEF }
//DUPDEF   if ( (*(int (**)(BuildingClass *))(this->vtable1 + 388))(this) != 1 )
//DUPDEF   {
//DUPDEF     if ( *(unsigned char *)((*(int (**)(BuildingClass *))(this->vtable1 + 132))(this) + 3285) )
//DUPDEF     {
//DUPDEF       if ( (int)dword_A8ED84 - this->g_CurrentFrame > *(unsigned int *)&dword_8871E0->__pad_C3C[456] + 5 )
//DUPDEF       {
//DUPDEF         TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(this, this->Type->Parasiteable); /*0x43ff19*/
//DUPDEF         Member81 = TechnoClass::GetMember81(this); /*0x43ff27*/
//DUPDEF         v25 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
//DUPDEF         if ( v25 > 0 )
//DUPDEF         {
//DUPDEF           v26 = (uint8_t)Audio::IsLoud(&this->veterancy)
//DUPDEF               ? *(unsigned int *)(this->Type + 4 * v25 + 3312)
//DUPDEF               : *(unsigned int *)(this->Type + 4 * v25 + 3288);
//DUPDEF           if ( Member81 < v26 ) /*0x43ff61*/
//DUPDEF             TechnoClass::SetSpread(this, v25 - 1); /*0x43ff67*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( *(unsigned char *)((*(int (**)(BuildingClass *))(this->vtable1 + 132))(this) + 3285) /*0x43ff89*/
// 0x70ddf0
//DUPDEF       && TechnoClass::GetMember81(this) > 0 )
//DUPDEF     {
//DUPDEF       ++this->ammoReloadTimer; /*0x43ff8b*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( (*(uint8_t (**)(BuildingClass *))(this->vtable1 + 512))(this) /*0x43ffa3*/
//DUPDEF     && (*(uint8_t (**)(BuildingClass *))(this->vtable1 + 492))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD[0] = 0; /*0x43ffad*/
//DUPDEF   }
//DUPDEF   BuildingClass_field_int_538 = this->BuildingClass_field_int_538; /*0x43ffb4*/
//DUPDEF   if ( BuildingClass_field_int_538 != -1 ) /*0x43ffbc*/
//DUPDEF   {
//DUPDEF     if ( this->BuildingClass_field_int_534 != BuildingClass_field_int_538 ) /*0x43ffc8*/
//DUPDEF     {
//DUPDEF       v28 = this->Type; /*0x43ffca*/
//DUPDEF       this->BuildingClass_field_int_534 = BuildingClass_field_int_538; /*0x43ffd5*/
//DUPDEF       v29 = (int *)(v28 + 12 * BuildingClass_field_int_538 + 3844); /*0x43ffdb*/
//DUPDEF       if ( BuildingClass_field_int_538 < 2 ) /*0x43ffe2*/
//DUPDEF         ProductionTimeMult = Rules::GetProductionTimeMult( /*0x44000d*/
//DUPDEF                                (Rules *)&dword_A8EB60,
//DUPDEF                                *(unsigned int *)(v28 + 12 * BuildingClass_field_int_538 + 3852));
//DUPDEF       else
//DUPDEF         ProductionTimeMult = *(char **)(v28 + 12 * BuildingClass_field_int_538 + 3852); /*0x43ffef*/
//DUPDEF       this->animation[2] = (int)dword_A8ED84; /*0x43fff8*/
//DUPDEF       this->animation[3] = v77; /*0x440028*/
//DUPDEF       this->animation[4] = (int)ProductionTimeMult; /*0x44002b*/
//DUPDEF       this->animation[5] = (int)ProductionTimeMult; /*0x44002e*/
//DUPDEF       this->animation[0] = *v29; /*0x440036*/
//DUPDEF }
//DUPDEF     this->BuildingClass_field_int_538 = -1; /*0x44003c*/
//DUPDEF   }
//DUPDEF   health = this->health; /*0x440042*/
//DUPDEF   if ( health != this->BuildingClass_field_544 ) /*0x44004d*/
//DUPDEF   {
//DUPDEF     *(unsigned char *)(this->owner + 22392) = 1; /*0x440055*/
//DUPDEF     *(unsigned char *)(this->owner + 22393) = 1; /*0x440062*/
//DUPDEF     health = this->health; /*0x440069*/
//DUPDEF     this->BuildingClass_field_544 = health; /*0x44006c*/
//DUPDEF }
//DUPDEF   if ( !health ) /*0x440074*/
//DUPDEF   {
//DUPDEF     v32 = this->DamageFireAnims; /*0x440076*/
//DUPDEF     v33 = 8; /*0x44007c*/
//DUPDEF     do /*0x440099*/
//DUPDEF     {
//DUPDEF       if ( *v32 ) /*0x440081*/
//DUPDEF       {
//DUPDEF         (*(void (**)(int))(*(unsigned int *)this->q6C0)(*v32); /*0x440089*/
//DUPDEF         *v32 = 0; /*0x44008f*/
//DUPDEF }
//DUPDEF       ++v32; /*0x440095*/
//DUPDEF       --v33; /*0x440098*/
//DUPDEF     }
//DUPDEF     while ( v33 ); /*0x440099*/
//DUPDEF     v34 = this->C4Timer[0]; /*0x44009b*/
//DUPDEF     result = this->C4Timer[2]; /*0x4400a1*/
//DUPDEF     if ( v34 != -1 ) /*0x4400a9*/
//DUPDEF     {
//DUPDEF       if ( (int)dword_A8ED84 - v34 >= result ) /*0x4400b5*/
//DUPDEF       {
//DUPDEF   LABEL_98:
//DUPDEF         (*(void (**)(BuildingClass *))(this->vtable1 + 212))(this); /*0x4400c1*/
//DUPDEF         BuildingClass::EjectCrew(this, (unsigned char *)this->C4AppliedBy); /*0x4400d4*/
//DUPDEF         (*(void (**)(BuildingClass *))(this->vtable1 + 248))(this); /*0x4400dd*/
// 0x441f60
//DUPDEF         return BuildingClass::AfterDestruction(int a1) ; /*0x4400f1*/
//DUPDEF       }
//DUPDEF       result -= (int)dword_A8ED84 - v34; /*0x4400b7*/
//DUPDEF     }
//DUPDEF     if ( result ) /*0x4400bb*/
//DUPDEF       return result; /*0x4400bb*/
//DUPDEF     goto LABEL_98; /*0x4400bb*/
//DUPDEF   }
//DUPDEF   BuildingClass::UpdatePrism(a1); /*0x4400f4*/
//DUPDEF   if ( a1->Type->Overpowerable ) /*0x4400ff*/
//DUPDEF   {
//DUPDEF     for ( i = this->Audio7[1] - 1; i >= 0; --i ) /*0x440114*/
//DUPDEF     {
//DUPDEF       if ( *(BuildingClass **)(*(unsigned int *)(this->Occupants + 4 * i) + 692) != this ) /*0x440125*/
//DUPDEF       {
//DUPDEF         v36 = this->Audio7[1]; /*0x440127*/
//DUPDEF         if ( i < v36 ) /*0x44012f*/
//DUPDEF         {
//DUPDEF           v37 = v36 - 1; /*0x440131*/
//DUPDEF           v38 = i; /*0x440134*/
//DUPDEF           for ( this->Audio7[1] = v37; /*0x44013e*/
//DUPDEF                 v38 < this->Audio7[1];
//DUPDEF                 *(unsigned int *)(this->Occupants + 4 * v38 - 4) = *(unsigned int *)(this->Occupants + 4 * v38) )
//DUPDEF           {
//DUPDEF             ++v38; /*0x440146*/
//DUPDEF }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v39 = this->Audio7[1]; /*0x44015b*/
//DUPDEF     if ( v39 >= 3 ) /*0x440164*/
//DUPDEF       goto LABEL_111; /*0x440164*/
//DUPDEF     HouseClass::GetPowerRatio((HouseClass *)this->owner); /*0x44016c*/
//DUPDEF     __asm /*0x440171*/
//DUPDEF     {
//DUPDEF       fcomp ds:dbl_7E1718
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4000) == 0 ) /*0x44017c*/
//DUPDEF       goto LABEL_110; /*0x44017c*/
//DUPDEF     if ( this->HasPower[0] && v39 >= 1 ) /*0x44018b*/
//DUPDEF   LABEL_111:
//DUPDEF       this->IsOverpowered[0] = 1; /*0x440196*/
//DUPDEF     else
//DUPDEF   LABEL_110:
//DUPDEF       this->IsOverpowered[0] = 0; /*0x44018d*/
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x4401a3*/
//DUPDEF     BuildingClass::ProcessStructureAbandoned(this); /*0x4401af*/
//DUPDEF   BuildingClass::ProcessActiveAnimation(v67, v1); /*0x4401b6*/
//DUPDEF   if ( this->Type->BuildingTypeClass_field_ED8 ) /*0x4401c1*/
//DUPDEF     ProcessAutoProduction(this); /*0x4401cd*/
//DUPDEF   if ( !this->C4Applied[0] ) /*0x4401da*/
//DUPDEF     goto LABEL_138; /*0x4401da*/
//DUPDEF   v41 = this->C4Timer[0]; /*0x4401e0*/
//DUPDEF   v42 = this->C4Timer[2]; /*0x4401e6*/
//DUPDEF   if ( v41 != -1 ) /*0x4401ee*/
//DUPDEF   {
//DUPDEF     if ( (int)dword_A8ED84 - v41 >= v42 ) /*0x4401fa*/
//DUPDEF     {
//DUPDEF   LABEL_121:
//DUPDEF       v43 = this->Type; /*0x440206*/
//DUPDEF       v73 = this->health; /*0x44020f*/
//DUPDEF       if ( this->u32_1BD6 ) /*0x440213*/
//DUPDEF       {
//DUPDEF         v68 = 0; /*0x440221*/
//DUPDEF         v44 = -2; /*0x440226*/
//DUPDEF         do /*0x4402de*/
//DUPDEF         {
//DUPDEF           v45 = -2; /*0x44022b*/
//DUPDEF           do /*0x4402d4*/
//DUPDEF           {
//DUPDEF             v46 = (unsigned short *)(*(int (**)(BuildingClass *, char *))(this->vtable1 + 440))(this, v74); /*0x440239*/
//DUPDEF             IDA_HIWORD(v69) = v44 + v46[1]; /*0x44024c*/
//DUPDEF             IDA_LOWORD(v69) = *v46 + v45; /*0x440251*/
//DUPDEF             *(unsigned int *)v71 = v69; /*0x44025e*/
//DUPDEF             v47 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v71) + 14); /*0x44026d*/
//DUPDEF             v48 = (unsigned short *)(*(int (**)(BuildingClass *, int *))(this->vtable1 + 440))(this, v75); /*0x440279*/
//DUPDEF             IDA_HIWORD(v70) = v44 + v48[1]; /*0x44028c*/
//DUPDEF             IDA_LOWORD(v70) = *v48 + v45; /*0x440291*/
//DUPDEF             *(unsigned int *)v72 = v70; /*0x44029e*/
//DUPDEF             v49 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v72) + 17); /*0x4402b3*/
//DUPDEF             if ( v47 >= g_TerrainBridgeIndex && v47 < g_TerrainBridgeIndex + 16 || v49 >= 74 && v49 <= 101 ) /*0x4402c9*/
//DUPDEF               v68 = 1; /*0x4402cb*/
//DUPDEF             ++v45; /*0x4402d0*/
//DUPDEF }
//DUPDEF           while ( v45 < 3 ); /*0x4402d4*/
//DUPDEF           ++v44; /*0x4402da*/
//DUPDEF         }
//DUPDEF         while ( v44 < 3 ); /*0x4402de*/
//DUPDEF         v50 = (int16_t *)(*(int (**)(BuildingClass *, int *))(this->vtable1 + 440))(this, v75); /*0x4402f5*/
//DUPDEF         if ( v68 ) /*0x4402ec*/
//DUPDEF           MapClass::ApplyTerrainDamage((MapClass *)&dword_87F7E8, v50); /*0x440301*/
//DUPDEF         else
//DUPDEF           TerrainClass::ProcessSlope((TerrainClass *)&dword_87F7E8, v50); /*0x44031b*/
//DUPDEF         this->C4Applied[0] = 0; /*0x440320*/
//DUPDEF         this->C4AppliedBy = 0; /*0x440327*/
//DUPDEF }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         result = (*(int (**)(BuildingClass *, int *, unsigned int, unsigned int, int, int, unsigned int, unsigned int))(this->vtable1 + 364))( /*0x440358*/
//DUPDEF                    this,
//DUPDEF                    &v73,
//DUPDEF                    0,
//DUPDEF                    *(unsigned int *)&dword_8871E0->__pad_C3C[876],
//DUPDEF                    this->C4AppliedBy,
//DUPDEF                    1,
//DUPDEF                    0,
//DUPDEF                    0);
//DUPDEF       }
//DUPDEF       IDA_LOBYTE(result) = this->isAliveFlag[0]; /*0x44035e*/
//DUPDEF       if ( !(unsigned char)result ) /*0x440366*/
//DUPDEF         return result; /*0x440366*/
//DUPDEF       (*(void (**)(BuildingClass *, int))(this->vtable1 + 292))(this, 2); /*0x440372*/
//DUPDEF       goto LABEL_138; /*0x440372*/
//DUPDEF     }
//DUPDEF     v42 -= (int)dword_A8ED84 - v41; /*0x4401fc*/
//DUPDEF   }
//DUPDEF   if ( !v42 ) /*0x440200*/
//DUPDEF     goto LABEL_121; /*0x440200*/
//DUPDEF   LABEL_138:
//DUPDEF   result = this->target; /*0x440378*/
//DUPDEF   if ( result ) /*0x440380*/
//DUPDEF   {
//DUPDEF     result = (*(int (**)(BuildingClass *, int))(this->vtable1 + 940))(this, this->target); /*0x44038b*/
//DUPDEF     if ( !(unsigned char)result ) /*0x440393*/
//DUPDEF     {
//DUPDEF       if ( (*(int (**)(int))(*(unsigned int *)this->target + 44))(this->target) != 2 ) /*0x4403a7*/
//DUPDEF         return (*(int (**)(BuildingClass *, unsigned int))(this->vtable1 + 968))(this, 0); /*0x4403a7*/
//DUPDEF       result = (*(int (**)(int))(*(unsigned int *)this->target + 80))(this->target); /*0x4403b5*/
//DUPDEF       if ( (unsigned char)result ) /*0x4403ba*/
//DUPDEF         return (*(int (**)(BuildingClass *, unsigned int))(this->vtable1 + 968))(this, 0); /*0x440567*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   return result; /*0x4400ea*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     if ( Type->SecretUnit[0] != -1 || Type->SecretBuilding[0] != -1 ) /*0x43fb80*/
//DUPDEF     {
//DUPDEF       AudioFile::Stop((AudioFile *)this->Audio8_2); /*0x43fb8a*/
//DUPDEF       v5 = this->location[1]; /*0x43fb9b*/
//DUPDEF       v76 = this->location[0]; /*0x43fb9e*/
//DUPDEF       v77 = v5; /*0x43fba2*/
//DUPDEF       v6 = this->Type; /*0x43fba6*/
//DUPDEF       v78 = this->location[2]; /*0x43fbb0*/
//DUPDEF       if ( v3 ) /*0x43fb99*/
//DUPDEF         StartAudioControllerAt(v6->SecretUnit[0], &v76, (int **)this->Audio8_2); /*0x43fbbe*/
//DUPDEF       else
//DUPDEF         StartAudioControllerAt(v6->SecretBuilding[0], &v76, (int **)this->Audio8_2); /*0x43fbe3*/
//DUPDEF }
//DUPDEF     Animation::UpdateBuildingAnimations((Animation *)this); /*0x43fbea*/
//DUPDEF     this->__pad_6B8[16] = v3; /*0x43fbef*/
//DUPDEF }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x43fc41*/
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio(this); /*0x43fc4b*/
//DUPDEF     _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43fc50*/
//DUPDEF     __asm /*0x43fc55*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [eax+1708h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_EAX & 0x4100) != 0 ) /*0x43fc60*/
//DUPDEF     {
//DUPDEF       v8 = 1; /*0x43fc62*/
//DUPDEF       goto LABEL_22; /*0x43fc64*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio(this); /*0x43fc66*/
//DUPDEF     _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43fc6b*/
//DUPDEF     __asm /*0x43fc71*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [ecx+1700h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4100) != 0 ) /*0x43fc7c*/
//DUPDEF     {
//DUPDEF       v8 = 1; /*0x43fc7e*/
//DUPDEF       goto LABEL_22; /*0x43fc80*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v8 = 0; /*0x43fc82*/
//DUPDEF   LABEL_22:
//DUPDEF   if ( v8 != this->RequiresDamageFires ) /*0x43fc8a*/
//DUPDEF   {
//DUPDEF     if ( v8 ) /*0x43fc8e*/
//DUPDEF     {
//DUPDEF       CreateDominatorDestructionEffects((ObjectClass *)this); /*0x43fc92*/
//DUPDEF }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       DamageFireAnims = this->DamageFireAnims; /*0x43fc99*/
//DUPDEF       v12 = 8; /*0x43fc9f*/
//DUPDEF       do /*0x43fcbc*/
//DUPDEF       {
//DUPDEF         if ( *DamageFireAnims ) /*0x43fca4*/
//DUPDEF         {
//DUPDEF           (*(void (**)(int))(*(unsigned int *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43fcac*/
//DUPDEF           *DamageFireAnims = 0; /*0x43fcb2*/
//DUPDEF }
//DUPDEF         ++DamageFireAnims; /*0x43fcb8*/
//DUPDEF         --v12; /*0x43fcbb*/
//DUPDEF       }
//DUPDEF       while ( v12 ); /*0x43fcbc*/
//DUPDEF     }
//DUPDEF     this->RequiresDamageFires = v8; /*0x43fcbe*/
//DUPDEF   }
//DUPDEF   if ( this->Type->Turret ) /*0x43fccd*/
//DUPDEF     this->turretIsRotating = (uint8_t)TimerClass::Active((int)this->primaryFacing); /*0x43fce7*/
//DUPDEF   else
//DUPDEF     this->turretIsRotating = 0; /*0x43fcef*/
//DUPDEF   temporalTargetingMe = this->temporalTargetingMe; /*0x43fcf9*/
//DUPDEF   if ( temporalTargetingMe ) /*0x43fd01*/
//DUPDEF     (*((void (**)(TemporalClass *))temporalTargetingMe->vtable0 + 23))(temporalTargetingMe); /*0x43fd05*/
//DUPDEF   if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 117))(this) /*0x43fd1e*/
//DUPDEF     || (*((uint8_t (**)(BuildingClass *))this->vtable1 + 118))(this) )
//DUPDEF   {
//DUPDEF     v51 = this->Type; /*0x4403d4*/
//DUPDEF     MaxNumberOccupants = v51->MaxNumberOccupants; /*0x4403e0*/
//DUPDEF     if ( MaxNumberOccupants && *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836) ) /*0x4403ee*/
//DUPDEF     {
//DUPDEF       v53 = 0; /*0x4403fc*/
//DUPDEF       if ( MaxNumberOccupants > 0 ) /*0x440400*/
//DUPDEF       {
//DUPDEF         v54 = 5512; /*0x440406*/
//DUPDEF         do /*0x4404e9*/
//DUPDEF         {
//DUPDEF           if ( !((v53 + *(unsigned int *)&stru_A8EB00_raw.gapE4[416]) % 24) /*0x440428*/
//DUPDEF             && *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836) )
//DUPDEF           {
//DUPDEF             v55 = (int *)World::ToScreen(v75, (void **)((char *)&v51->vtable0 + v54), v66); /*0x440445*/
//DUPDEF             v56 = v55[1]; /*0x44044a*/
//DUPDEF             v57 = *v55; /*0x44044d*/
//DUPDEF             vtable0 = (int (**)(BuildingClass *, char *))this->vtable1; /*0x44044f*/
//DUPDEF             v77 = v56; /*0x440451*/
//DUPDEF             v76 = v57; /*0x440459*/
//DUPDEF             v78 = 0; /*0x440460*/
//DUPDEF             v59 = (unsigned int *)vtable0[43](this, v79); /*0x440468*/
//DUPDEF             v60 = v76 + *v59; /*0x440478*/
//DUPDEF             v61 = v59[1]; /*0x44047a*/
//DUPDEF             v62 = v78 + v59[2]; /*0x440486*/
//DUPDEF             v76 = v60; /*0x44048d*/
//DUPDEF             v77 += v61; /*0x440491*/
//DUPDEF             v78 = v62; /*0x440495*/
//DUPDEF             v63 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x440499*/
//DUPDEF             if ( v63 ) /*0x4404a3*/
//DUPDEF               v64 = AnimClass::ctor( /*0x4404c6*/
//DUPDEF                       v63,
//DUPDEF                       *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836),
//DUPDEF                       &v76,
//DUPDEF                       0,
//DUPDEF                       1,
//DUPDEF                       (void *)0x600,
//DUPDEF                       0,
//DUPDEF                       0);
//DUPDEF             else
//DUPDEF               v64 = 0; /*0x4404cd*/
//DUPDEF             v64[64] = (void *)-200; /*0x4404cf*/
//DUPDEF }
//DUPDEF           v51 = this->Type; /*0x4404d9*/
//DUPDEF           ++v53; /*0x4404df*/
//DUPDEF           v54 += 8; /*0x4404e0*/
//DUPDEF         }
//DUPDEF         while ( v53 < v51->MaxNumberOccupants ); /*0x4404e9*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else if ( !(*(unsigned int *)&stru_A8EB00_raw.gapE4[416] % 24) ) /*0x4404fc*/
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836) ) /*0x440502*/
//DUPDEF       {
//DUPDEF         v65 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x440511*/
//DUPDEF         if ( v65 ) /*0x44051b*/
//DUPDEF         {
//DUPDEF           v76 = this->location[0]; /*0x440530*/
//DUPDEF           v77 = this->location[1]; /*0x440539*/
//DUPDEF           v78 = this->location[2]; /*0x440545*/
//DUPDEF           AnimClass::ctor( /*0x440558*/
//DUPDEF             v65,
//DUPDEF             *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836),
//DUPDEF             &v76,
//DUPDEF             0,
//DUPDEF             1,
//DUPDEF             (void *)0x600,
//DUPDEF             0,
//DUPDEF             0);
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     result = (int)this->target; /*0x44055d*/
//DUPDEF     if ( result ) /*0x440565*/
//DUPDEF       return (*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x440565*/
//DUPDEF     return result; /*0x440565*/
//DUPDEF   }
//DUPDEF   v14 = *(unsigned int *)&this->__pad_6B8[24]; /*0x43fd2c*/
//DUPDEF   v15 = *(unsigned int *)&this->__pad_6B8[32]; /*0x43fd32*/
//DUPDEF   v16 = &this->__pad_6B8[24]; /*0x43fd3e*/
//DUPDEF   if ( v14 != -1 ) /*0x43fd46*/
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v14 >= v15 ) /*0x43fd4e*/
//DUPDEF       goto LABEL_46; /*0x43fd4e*/
//DUPDEF     v15 -= *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v14; /*0x43fd54*/
//DUPDEF }
//DUPDEF   if ( v15 == 1 ) /*0x43fd59*/
//DUPDEF   {
//DUPDEF     v17 = v77; /*0x43fd5b*/
//DUPDEF     *(unsigned int *)v16 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x43fd63*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[28] = v17; /*0x43fd65*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[32] = 0; /*0x43fd68*/
//DUPDEF     ProduceCashDelay = this->Type->ProduceCashDelay; /*0x43fd77*/
//DUPDEF     *(unsigned int *)v16 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x43fd7d*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[28] = v77; /*0x43fd83*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[32] = ProduceCashDelay; /*0x43fd86*/
//DUPDEF     if ( !*(unsigned char *)(this->owner->relatedTagsCapacity + 422) ) /*0x43fd92*/
//DUPDEF     {
//DUPDEF       if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 212))(this) ) /*0x43fda0*/
//DUPDEF       {
//DUPDEF         ProduceCashAmount = this->Type->ProduceCashAmount; /*0x43fdb0*/
//DUPDEF         if ( ProduceCashAmount <= 0 ) /*0x43fdb8*/
//DUPDEF           HouseClass::ProcessPowerDrain((int *)this->owner, -ProduceCashAmount); /*0x43fdd1*/
//DUPDEF         else
//DUPDEF           HouseClass::AddPower(this->owner, this->Type->ProduceCashAmount); /*0x43fdc1*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   LABEL_46:
//DUPDEF   airstrike = this->airstrike; /*0x43fdd6*/
//DUPDEF   if ( airstrike && (BuildingClass *)airstrike->AirstrikeClass_field_50 == this ) /*0x43fde3*/
//DUPDEF     (*((void (**)(BuildingClass *, int))this->vtable1 + 73))(this, 2); /*0x43fdeb*/
//DUPDEF   if ( this->Type->SAM ) /*0x43fdf7*/
//DUPDEF   {
//DUPDEF     target = this->target; /*0x43fe01*/
//DUPDEF     if ( target ) /*0x43fe09*/
//DUPDEF     {
//DUPDEF       if ( !(*((uint8_t (**)(AbstractClass *))target->vtable0 + 21))(target) ) /*0x43fe0d*/
//DUPDEF         v1 = ((double (*)(BuildingClass *, unsigned int))*((unsigned int *)this->vtable1 + 242))(this, 0); /*0x43fe1a*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   BuildingClass::UpdateAnimFrames((BuildingClass *)v66, v1); /*0x43fe22*/
//DUPDEF   if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 128))(this) /*0x43fe43*/
//DUPDEF     && this->BuildingClass_field_int_534
//DUPDEF     && (*((uint8_t (**)(BuildingClass *))this->vtable1 + 123))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD = 0; /*0x43fe4d*/
//DUPDEF   }
//DUPDEF   MovementAI::Begin((TechnoClass *)this); /*0x43fe56*/
//DUPDEF   IDA_LOBYTE(result) = this->isAliveFlag; /*0x43fe5b*/
//DUPDEF   if ( !(unsigned char)result ) /*0x43fe63*/
//DUPDEF     return result; /*0x43fe63*/
//DUPDEF   if ( *(unsigned char *)((*((int (**)(BuildingClass *))this->vtable1 + 33))(this) + 3285) /*0x43fe86*/
//DUPDEF // 0x70ddf0
//DUPDEF     && TechnoClass::GetMember81((TechnoClass *)this) > 0 )
//DUPDEF   {
//DUPDEF     ++this->ammoReloadTimer; /*0x43fe88*/
//DUPDEF }
//DUPDEF   if ( !this->ammo ) /*0x43fe8e*/
//DUPDEF   {
//DUPDEF     v23 = this->Type; /*0x43fe98*/
//DUPDEF     if ( !v23->Hospital && !v23->Armory ) /*0x43fea8*/
//DUPDEF       this->ammo = v23->Ammo; /*0x43feb8*/
//DUPDEF }
//DUPDEF   if ( (*((int (**)(BuildingClass *))this->vtable1 + 97))(this) != 1 )
//DUPDEF   {
//DUPDEF     if ( *(unsigned char *)((*((int (**)(BuildingClass *))this->vtable1 + 33))(this) + 3285) )
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - this->g_CurrentFrame > *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]
//DUPDEF                                                                                     + 3588)
//DUPDEF                                                                         + 5 )
//DUPDEF       {
//DUPDEF         TechnoClass::GattlingValueRateDown_GattlingRateDownDelay((TechnoClass *)this, this->Type->Parasiteable[0]); /*0x43ff19*/
//DUPDEF         Member81 = TechnoClass::GetMember81((TechnoClass *)this); /*0x43ff27*/
//DUPDEF         v25 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
//DUPDEF         if ( v25 > 0 )
//DUPDEF         {
//DUPDEF           v26 = (uint8_t)Audio::IsLoud(this->veterancy)
//DUPDEF               ? this->Type->DeathWeapon[v25]
//DUPDEF               : *(&this->Type->WeaponStages + v25);
//DUPDEF           if ( Member81 < v26 ) /*0x43ff61*/
//DUPDEF             TechnoClass::SetSpread((TechnoClass *)this, v25 - 1); /*0x43ff67*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( *(unsigned char *)((*((int (**)(BuildingClass *))this->vtable1 + 33))(this) + 3285) /*0x43ff89*/
// 0x70ddf0
//DUPDEF       && TechnoClass::GetMember81((TechnoClass *)this) > 0 )
//DUPDEF     {
//DUPDEF       ++this->ammoReloadTimer; /*0x43ff8b*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 128))(this) /*0x43ffa3*/
//DUPDEF     && (*((uint8_t (**)(BuildingClass *))this->vtable1 + 123))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD = 0; /*0x43ffad*/
//DUPDEF   }
//DUPDEF   BuildingClass_field_int_538 = this->BuildingClass_field_int_538; /*0x43ffb4*/
//DUPDEF   if ( BuildingClass_field_int_538 != -1 ) /*0x43ffbc*/
//DUPDEF   {
//DUPDEF     if ( this->BuildingClass_field_int_534 != BuildingClass_field_int_538 ) /*0x43ffc8*/
//DUPDEF     {
//DUPDEF       v28 = this->Type; /*0x43ffca*/
//DUPDEF       this->BuildingClass_field_int_534 = BuildingClass_field_int_538; /*0x43ffd5*/
//DUPDEF       v29 = &v28->BuildingAnimFrame[3 * BuildingClass_field_int_538]; /*0x43ffdb*/
//DUPDEF       if ( BuildingClass_field_int_538 < 2 ) /*0x43ffe2*/
//DUPDEF         ProductionTimeMult = Rules::GetProductionTimeMult( /*0x44000d*/
//DUPDEF                                (Rules *)&stru_A8EB00_raw.parent_gap[24],
//DUPDEF                                v28->BuildingAnimFrame[3 * BuildingClass_field_int_538 + 2]);
//DUPDEF       else
//DUPDEF         ProductionTimeMult = (char *)v28->BuildingAnimFrame[3 * BuildingClass_field_int_538 + 2]; /*0x43ffef*/
//DUPDEF       this->animation[2] = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x43fff8*/
//DUPDEF       this->animation[3] = v77; /*0x440028*/
//DUPDEF       this->animation[4] = (int)ProductionTimeMult; /*0x44002b*/
//DUPDEF       this->animation[5] = (int)ProductionTimeMult; /*0x44002e*/
//DUPDEF       this->animation[0] = *v29; /*0x440036*/
//DUPDEF }
//DUPDEF     this->BuildingClass_field_int_538 = -1; /*0x44003c*/
//DUPDEF   }
//DUPDEF   health = this->health; /*0x440042*/
//DUPDEF   if ( health != this->BuildingClass_field_544 ) /*0x44004d*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(this->owner->HouseClass_field_timer_B[2]) = 1; /*0x440055*/
//DUPDEF     IDA_BYTE1(this->owner->HouseClass_field_timer_B[2]) = 1; /*0x440062*/
//DUPDEF     health = this->health; /*0x440069*/
//DUPDEF     this->BuildingClass_field_544 = health; /*0x44006c*/
//DUPDEF }
//DUPDEF   if ( !health ) /*0x440074*/
//DUPDEF   {
//DUPDEF     v32 = this->DamageFireAnims; /*0x440076*/
//DUPDEF     v33 = 8; /*0x44007c*/
//DUPDEF     do /*0x440099*/
//DUPDEF     {
//DUPDEF       if ( *v32 ) /*0x440081*/
//DUPDEF       {
//DUPDEF         (*(void (**)(int))(*(unsigned int *)this->q6C0)(*v32); /*0x440089*/
//DUPDEF         *v32 = 0; /*0x44008f*/
//DUPDEF }
//DUPDEF       ++v32; /*0x440095*/
//DUPDEF       --v33; /*0x440098*/
//DUPDEF     }
//DUPDEF     while ( v33 ); /*0x440099*/
//DUPDEF     v34 = this->C4Timer[0]; /*0x44009b*/
//DUPDEF     result = this->C4Timer[2]; /*0x4400a1*/
//DUPDEF     if ( v34 != -1 ) /*0x4400a9*/
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v34 >= result ) /*0x4400b5*/
//DUPDEF       {
//DUPDEF   LABEL_98:
//DUPDEF         (*((void (**)(BuildingClass *))this->vtable1 + 53))(this); /*0x4400c1*/
//DUPDEF         BuildingClass::EjectCrew(this, this->C4AppliedBy); /*0x4400d4*/
//DUPDEF         (*((void (**)(BuildingClass *))this->vtable1 + 62))(this); /*0x4400dd*/
//DUPDEF // 0x441f60
//DUPDEF         return BuildingClass::AfterDestruction(int a1) ; /*0x4400f1*/
//DUPDEF }
//DUPDEF       result -= *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v34; /*0x4400b7*/
//DUPDEF     }
//DUPDEF     if ( result ) /*0x4400bb*/
//DUPDEF       return result; /*0x4400bb*/
//DUPDEF     goto LABEL_98; /*0x4400bb*/
//DUPDEF   }
//DUPDEF   BuildingClass::UpdatePrism(a1); /*0x4400f4*/
//DUPDEF   if ( a1->Type->Overpowerable ) /*0x4400ff*/
//DUPDEF   {
//DUPDEF     for ( i = this->Audio7[1] - 1; i >= 0; --i ) /*0x440114*/
//DUPDEF     {
//DUPDEF       if ( *(BuildingClass **)(*(unsigned int *)(this->Occupants[0] + 4 * i) + 692) != this ) /*0x440125*/
//DUPDEF       {
//DUPDEF         v36 = this->Audio7[1]; /*0x440127*/
//DUPDEF         if ( i < v36 ) /*0x44012f*/
//DUPDEF         {
//DUPDEF           v37 = v36 - 1; /*0x440131*/
//DUPDEF           v38 = i; /*0x440134*/
//DUPDEF           for ( this->Audio7[1] = v37; /*0x44013e*/
//DUPDEF                 v38 < this->Audio7[1];
//DUPDEF                 *(unsigned int *)(this->Occupants[0] + 4 * v38 - 4) = *(unsigned int *)(this->Occupants[0] + 4 * v38) )
//DUPDEF           {
//DUPDEF             ++v38; /*0x440146*/
//DUPDEF }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v39 = this->Audio7[1]; /*0x44015b*/
//DUPDEF     if ( v39 >= 3 ) /*0x440164*/
//DUPDEF       goto LABEL_111; /*0x440164*/
//DUPDEF     HouseClass::GetPowerRatio(this->owner); /*0x44016c*/
//DUPDEF     __asm /*0x440171*/
//DUPDEF     {
//DUPDEF       fcomp ds:dbl_7E1718
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4000) == 0 ) /*0x44017c*/
//DUPDEF       goto LABEL_110; /*0x44017c*/
//DUPDEF     if ( this->HasPower && v39 >= 1 ) /*0x44018b*/
//DUPDEF   LABEL_111:
//DUPDEF       this->IsOverpowered = 1; /*0x440196*/
//DUPDEF     else
//DUPDEF   LABEL_110:
//DUPDEF       this->IsOverpowered = 0; /*0x44018d*/
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x4401a3*/
//DUPDEF     BuildingClass::ProcessStructureAbandoned(this); /*0x4401af*/
//DUPDEF   BuildingClass::ProcessActiveAnimation(v67, v1); /*0x4401b6*/
//DUPDEF   if ( this->Type->Factory[0] ) /*0x4401c1*/
//DUPDEF     ProcessAutoProduction((ObjectClass *)this); /*0x4401cd*/
//DUPDEF   if ( !this->C4Applied ) /*0x4401da*/
//DUPDEF     goto LABEL_138; /*0x4401da*/
//DUPDEF   v41 = this->C4Timer[0]; /*0x4401e0*/
//DUPDEF   v42 = this->C4Timer[2]; /*0x4401e6*/
//DUPDEF   if ( v41 != -1 ) /*0x4401ee*/
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v41 >= v42 ) /*0x4401fa*/
//DUPDEF     {
//DUPDEF   LABEL_121:
//DUPDEF       v43 = this->Type; /*0x440206*/
//DUPDEF       v73 = this->health; /*0x44020f*/
//DUPDEF       if ( v43->BridgeRepairHut ) /*0x440213*/
//DUPDEF       {
//DUPDEF         v68 = 0; /*0x440221*/
//DUPDEF         v44 = -2; /*0x440226*/
//DUPDEF         do /*0x4402de*/
//DUPDEF         {
//DUPDEF           v45 = -2; /*0x44022b*/
//DUPDEF           do /*0x4402d4*/
//DUPDEF           {
//DUPDEF             v46 = (unsigned short *)(*((int (**)(BuildingClass *, char *))this->vtable1 + 110))(this, v74); /*0x440239*/
//DUPDEF             IDA_HIWORD(v69) = v44 + v46[1]; /*0x44024c*/
//DUPDEF             IDA_LOWORD(v69) = *v46 + v45; /*0x440251*/
//DUPDEF             *(unsigned int *)v71 = v69; /*0x44025e*/
//DUPDEF             v47 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v71) + 14); /*0x44026d*/
//DUPDEF             v48 = (unsigned short *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 110))(this, v75); /*0x440279*/
//DUPDEF             IDA_HIWORD(v70) = v44 + v48[1]; /*0x44028c*/
//DUPDEF             IDA_LOWORD(v70) = *v48 + v45; /*0x440291*/
//DUPDEF             *(unsigned int *)v72 = v70; /*0x44029e*/
//DUPDEF             v49 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v72) + 17); /*0x4402b3*/
//DUPDEF             if ( v47 >= g_TerrainBridgeIndex && v47 < g_TerrainBridgeIndex + 16 || v49 >= 74 && v49 <= 101 ) /*0x4402c9*/
//DUPDEF               v68 = 1; /*0x4402cb*/
//DUPDEF             ++v45; /*0x4402d0*/
//DUPDEF }
//DUPDEF           while ( v45 < 3 ); /*0x4402d4*/
//DUPDEF           ++v44; /*0x4402da*/
//DUPDEF         }
//DUPDEF         while ( v44 < 3 ); /*0x4402de*/
//DUPDEF         v50 = (int16_t *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 110))(this, v75); /*0x4402f5*/
//DUPDEF         if ( v68 ) /*0x4402ec*/
//DUPDEF           MapClass::ApplyTerrainDamage((MapClass *)&stru_87F5F0_raw.__pad_58[416], v50); /*0x440301*/
//DUPDEF         else
//DUPDEF           TerrainClass::ProcessSlope((TerrainClass *)&stru_87F5F0_raw.__pad_58[416], v50); /*0x44031b*/
//DUPDEF         this->C4Applied = 0; /*0x440320*/
//DUPDEF         this->C4AppliedBy = 0; /*0x440327*/
//DUPDEF }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         result = (*((int (**)(BuildingClass *, int *, unsigned int, unsigned int, InfantryClass *, int, unsigned int, unsigned int))this->vtable1 /*0x440358*/
//DUPDEF                   + 91))(
//DUPDEF                    this,
//DUPDEF                    &v73,
//DUPDEF                    0,
//DUPDEF                    *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
//DUPDEF                    this->C4AppliedBy,
//DUPDEF                    1,
//DUPDEF                    0,
//DUPDEF                    0);
//DUPDEF       }
//DUPDEF       IDA_LOBYTE(result) = this->isAliveFlag; /*0x44035e*/
//DUPDEF       if ( !(unsigned char)result ) /*0x440366*/
//DUPDEF         return result; /*0x440366*/
//DUPDEF       (*((void (**)(BuildingClass *, int))this->vtable1 + 73))(this, 2); /*0x440372*/
//DUPDEF       goto LABEL_138; /*0x440372*/
//DUPDEF     }
//DUPDEF     v42 -= *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v41; /*0x4401fc*/
//DUPDEF   }
//DUPDEF   if ( !v42 ) /*0x440200*/
//DUPDEF     goto LABEL_121; /*0x440200*/
//DUPDEF   LABEL_138:
//DUPDEF   result = (int)this->target; /*0x440378*/
//DUPDEF   if ( result ) /*0x440380*/
//DUPDEF   {
//DUPDEF     result = (*((int (**)(BuildingClass *, AbstractClass *))this->vtable1 + 235))(this, this->target); /*0x44038b*/
//DUPDEF     if ( !(unsigned char)result ) /*0x440393*/
//DUPDEF     {
//DUPDEF       if ( (*((int (**)(AbstractClass *))this->target->vtable0 + 11))(this->target) != 2 ) /*0x4403a7*/
//DUPDEF         return (*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x4403a7*/
//DUPDEF       result = (*((int (**)(AbstractClass *))this->target->vtable0 + 20))(this->target); /*0x4403b5*/
//DUPDEF       if ( (unsigned char)result ) /*0x4403ba*/
//DUPDEF         return (*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x440567*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   return result; /*0x4400ea*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     if ( Type->SecretUnit[0] != -1 || Type->SecretBuilding[0] != -1 ) /*0x43fb80*/
//DUPDEF     {
//DUPDEF       AudioFile::Stop((AudioFile *)this->Audio8_2); /*0x43fb8a*/
//DUPDEF       v5 = this->location[1]; /*0x43fb9b*/
//DUPDEF       v76 = this->location[0]; /*0x43fb9e*/
//DUPDEF       v77 = v5; /*0x43fba2*/
//DUPDEF       v6 = this->Type; /*0x43fba6*/
//DUPDEF       v78 = this->location[2]; /*0x43fbb0*/
//DUPDEF       if ( v3 ) /*0x43fb99*/
//DUPDEF         StartAudioControllerAt(v6->SecretUnit[0], &v76, (int **)this->Audio8_2); /*0x43fbbe*/
//DUPDEF       else
//DUPDEF         StartAudioControllerAt(v6->SecretBuilding[0], &v76, (int **)this->Audio8_2); /*0x43fbe3*/
//DUPDEF     }
//DUPDEF     Animation::UpdateBuildingAnimations((Animation *)this); /*0x43fbea*/
//DUPDEF     this->__pad_6B8[16] = v3; /*0x43fbef*/
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x43fc41*/
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio(this); /*0x43fc4b*/
//DUPDEF     _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43fc50*/
//DUPDEF     __asm /*0x43fc55*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [eax+1708h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_EAX & 0x4100) != 0 ) /*0x43fc60*/
//DUPDEF     {
//DUPDEF       v8 = 1; /*0x43fc62*/
//DUPDEF       goto LABEL_22; /*0x43fc64*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio(this); /*0x43fc66*/
//DUPDEF     _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43fc6b*/
//DUPDEF     __asm /*0x43fc71*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [ecx+1700h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4100) != 0 ) /*0x43fc7c*/
//DUPDEF     {
//DUPDEF       v8 = 1; /*0x43fc7e*/
//DUPDEF       goto LABEL_22; /*0x43fc80*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   v8 = 0; /*0x43fc82*/
//DUPDEF   LABEL_22:
//DUPDEF   if ( v8 != this->RequiresDamageFires ) /*0x43fc8a*/
//DUPDEF   {
//DUPDEF     if ( v8 ) /*0x43fc8e*/
//DUPDEF     {
//DUPDEF       CreateDominatorDestructionEffects((ObjectClass *)this); /*0x43fc92*/
//DUPDEF }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       DamageFireAnims = this->DamageFireAnims; /*0x43fc99*/
//DUPDEF       v12 = 8; /*0x43fc9f*/
//DUPDEF       do /*0x43fcbc*/
//DUPDEF       {
//DUPDEF         if ( *DamageFireAnims ) /*0x43fca4*/
//DUPDEF         {
//DUPDEF           (*(void (**)(int))(*(unsigned int *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43fcac*/
//DUPDEF           *DamageFireAnims = 0; /*0x43fcb2*/
//DUPDEF }
//DUPDEF         ++DamageFireAnims; /*0x43fcb8*/
//DUPDEF         --v12; /*0x43fcbb*/
//DUPDEF }
//DUPDEF       while ( v12 ); /*0x43fcbc*/
//DUPDEF     }
//DUPDEF     this->RequiresDamageFires = v8; /*0x43fcbe*/
//DUPDEF   }
//DUPDEF   if ( this->Type->Turret ) /*0x43fccd*/
//DUPDEF     this->turretIsRotating = (uint8_t)TimerClass::Active((int)this->primaryFacing); /*0x43fce7*/
//DUPDEF   else
//DUPDEF     this->turretIsRotating = 0; /*0x43fcef*/
//DUPDEF   temporalTargetingMe = this->temporalTargetingMe; /*0x43fcf9*/
//DUPDEF   if ( temporalTargetingMe ) /*0x43fd01*/
//DUPDEF     (*((void (**)(TemporalClass *))temporalTargetingMe->vtable0 + 23))(temporalTargetingMe); /*0x43fd05*/
//DUPDEF   if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 117))(this) /*0x43fd1e*/
//DUPDEF     || (*((uint8_t (**)(BuildingClass *))this->vtable1 + 118))(this) )
//DUPDEF   {
//DUPDEF     v51 = this->Type; /*0x4403d4*/
//DUPDEF     MaxNumberOccupants = v51->MaxNumberOccupants; /*0x4403e0*/
//DUPDEF     if ( MaxNumberOccupants && *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836) ) /*0x4403ee*/
//DUPDEF     {
//DUPDEF       v53 = 0; /*0x4403fc*/
//DUPDEF       if ( MaxNumberOccupants > 0 ) /*0x440400*/
//DUPDEF       {
//DUPDEF         v54 = 5512; /*0x440406*/
//DUPDEF         do /*0x4404e9*/
//DUPDEF         {
//DUPDEF           if ( !((v53 + *(unsigned int *)&stru_A8EB00_raw.gapE4[416]) % 24) /*0x440428*/
//DUPDEF             && *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836) )
//DUPDEF           {
//DUPDEF             v55 = (int *)World::ToScreen(v75, (void **)((char *)&v51->vtable0 + v54), v66); /*0x440445*/
//DUPDEF             v56 = v55[1]; /*0x44044a*/
//DUPDEF             v57 = *v55; /*0x44044d*/
//DUPDEF             vtable0 = (int (**)(BuildingClass *, char *))this->vtable1; /*0x44044f*/
//DUPDEF             v77 = v56; /*0x440451*/
//DUPDEF             v76 = v57; /*0x440459*/
//DUPDEF             v78 = 0; /*0x440460*/
//DUPDEF             v59 = (unsigned int *)vtable0[43](this, v79); /*0x440468*/
//DUPDEF             v60 = v76 + *v59; /*0x440478*/
//DUPDEF             v61 = v59[1]; /*0x44047a*/
//DUPDEF             v62 = v78 + v59[2]; /*0x440486*/
//DUPDEF             v76 = v60; /*0x44048d*/
//DUPDEF             v77 += v61; /*0x440491*/
//DUPDEF             v78 = v62; /*0x440495*/
//DUPDEF             v63 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x440499*/
//DUPDEF             if ( v63 ) /*0x4404a3*/
//DUPDEF               v64 = AnimClass::ctor( /*0x4404c6*/
//DUPDEF                       v63,
//DUPDEF                       *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836),
//DUPDEF                       &v76,
//DUPDEF                       0,
//DUPDEF                       1,
//DUPDEF                       (void *)0x600,
//DUPDEF                       0,
//DUPDEF                       0);
//DUPDEF             else
//DUPDEF               v64 = 0; /*0x4404cd*/
//DUPDEF             v64[64] = (void *)-200; /*0x4404cf*/
//DUPDEF }
//DUPDEF           v51 = this->Type; /*0x4404d9*/
//DUPDEF           ++v53; /*0x4404df*/
//DUPDEF           v54 += 8; /*0x4404e0*/
//DUPDEF         }
//DUPDEF         while ( v53 < v51->MaxNumberOccupants ); /*0x4404e9*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else if ( !(*(unsigned int *)&stru_A8EB00_raw.gapE4[416] % 24) ) /*0x4404fc*/
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836) ) /*0x440502*/
//DUPDEF       {
//DUPDEF         v65 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x440511*/
//DUPDEF         if ( v65 ) /*0x44051b*/
//DUPDEF         {
//DUPDEF           v76 = this->location[0]; /*0x440530*/
//DUPDEF           v77 = this->location[1]; /*0x440539*/
//DUPDEF           v78 = this->location[2]; /*0x440545*/
//DUPDEF           AnimClass::ctor( /*0x440558*/
//DUPDEF             v65,
//DUPDEF             *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 836),
//DUPDEF             &v76,
//DUPDEF             0,
//DUPDEF             1,
//DUPDEF             (void *)0x600,
//DUPDEF             0,
//DUPDEF             0);
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     result = (int)this->target; /*0x44055d*/
//DUPDEF     if ( result ) /*0x440565*/
//DUPDEF       return (*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x440565*/
//DUPDEF     return result; /*0x440565*/
//DUPDEF   }
//DUPDEF   v14 = *(unsigned int *)&this->__pad_6B8[24]; /*0x43fd2c*/
//DUPDEF   v15 = *(unsigned int *)&this->__pad_6B8[32]; /*0x43fd32*/
//DUPDEF   v16 = &this->__pad_6B8[24]; /*0x43fd3e*/
//DUPDEF   if ( v14 != -1 ) /*0x43fd46*/
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v14 >= v15 ) /*0x43fd4e*/
//DUPDEF       goto LABEL_46; /*0x43fd4e*/
//DUPDEF     v15 -= *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v14; /*0x43fd54*/
//DUPDEF }
//DUPDEF   if ( v15 == 1 ) /*0x43fd59*/
//DUPDEF   {
//DUPDEF     v17 = v77; /*0x43fd5b*/
//DUPDEF     *(unsigned int *)v16 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x43fd63*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[28] = v17; /*0x43fd65*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[32] = 0; /*0x43fd68*/
//DUPDEF     ProduceCashDelay = this->Type->ProduceCashDelay; /*0x43fd77*/
//DUPDEF     *(unsigned int *)v16 = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x43fd7d*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[28] = v77; /*0x43fd83*/
//DUPDEF     *(unsigned int *)&this->__pad_6B8[32] = ProduceCashDelay; /*0x43fd86*/
//DUPDEF     if ( !*(unsigned char *)(this->owner->relatedTagsCapacity + 422) ) /*0x43fd92*/
//DUPDEF     {
//DUPDEF       if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 212))(this) ) /*0x43fda0*/
//DUPDEF       {
//DUPDEF         ProduceCashAmount = this->Type->ProduceCashAmount; /*0x43fdb0*/
//DUPDEF         if ( ProduceCashAmount <= 0 ) /*0x43fdb8*/
//DUPDEF           HouseClass::ProcessPowerDrain((int *)this->owner, -ProduceCashAmount); /*0x43fdd1*/
//DUPDEF         else
//DUPDEF           HouseClass::AddPower(this->owner, this->Type->ProduceCashAmount); /*0x43fdc1*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   LABEL_46:
//DUPDEF   airstrike = this->airstrike; /*0x43fdd6*/
//DUPDEF   if ( airstrike && (BuildingClass *)airstrike->AirstrikeClass_field_50 == this ) /*0x43fde3*/
//DUPDEF     (*((void (**)(BuildingClass *, int))this->vtable1 + 73))(this, 2); /*0x43fdeb*/
//DUPDEF   if ( this->Type->SAM ) /*0x43fdf7*/
//DUPDEF   {
//DUPDEF     target = this->target; /*0x43fe01*/
//DUPDEF     if ( target ) /*0x43fe09*/
//DUPDEF     {
//DUPDEF       if ( !(*((uint8_t (**)(AbstractClass *))target->vtable0 + 21))(target) ) /*0x43fe0d*/
//DUPDEF         v1 = ((double (*)(BuildingClass *, unsigned int))*((unsigned int *)this->vtable1 + 242))(this, 0); /*0x43fe1a*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   BuildingClass::UpdateAnimFrames((BuildingClass *)v66, v1); /*0x43fe22*/
//DUPDEF   if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 128))(this) /*0x43fe43*/
//DUPDEF     && this->BuildingClass_field_int_534
//DUPDEF     && (*((uint8_t (**)(BuildingClass *))this->vtable1 + 123))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD = 0; /*0x43fe4d*/
//DUPDEF   }
//DUPDEF   MovementAI::Begin((TechnoClass *)this); /*0x43fe56*/
//DUPDEF   IDA_LOBYTE(result) = this->isAliveFlag; /*0x43fe5b*/
//DUPDEF   if ( !(unsigned char)result ) /*0x43fe63*/
//DUPDEF     return result; /*0x43fe63*/
//DUPDEF   if ( *(unsigned char *)((*((int (**)(BuildingClass *))this->vtable1 + 33))(this) + 3285) /*0x43fe86*/
//DUPDEF // 0x70ddf0
//DUPDEF     && TechnoClass::GetMember81((TechnoClass *)this) > 0 )
//DUPDEF   {
//DUPDEF     ++this->ammoReloadTimer; /*0x43fe88*/
//DUPDEF }
//DUPDEF   if ( !this->ammo ) /*0x43fe8e*/
//DUPDEF   {
//DUPDEF     v23 = this->Type; /*0x43fe98*/
//DUPDEF     if ( !v23->Hospital && !v23->Armory ) /*0x43fea8*/
//DUPDEF       this->ammo = v23->Ammo; /*0x43feb8*/
//DUPDEF }
//DUPDEF   if ( (*((int (**)(BuildingClass *))this->vtable1 + 97))(this) != 1 )
//DUPDEF   {
//DUPDEF     if ( *(unsigned char *)((*((int (**)(BuildingClass *))this->vtable1 + 33))(this) + 3285) )
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - this->g_CurrentFrame > *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]
//DUPDEF                                                                                     + 3588)
//DUPDEF                                                                         + 5 )
//DUPDEF       {
//DUPDEF         TechnoClass::GattlingValueRateDown_GattlingRateDownDelay((TechnoClass *)this, this->Type->Parasiteable[0]); /*0x43ff19*/
//DUPDEF         Member81 = TechnoClass::GetMember81((TechnoClass *)this); /*0x43ff27*/
//DUPDEF         v25 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
//DUPDEF         if ( v25 > 0 )
//DUPDEF         {
//DUPDEF           v26 = (uint8_t)Audio::IsLoud(this->veterancy)
//DUPDEF               ? this->Type->DeathWeapon[v25]
//DUPDEF               : *(&this->Type->WeaponStages + v25);
//DUPDEF           if ( Member81 < v26 ) /*0x43ff61*/
//DUPDEF             TechnoClass::SetSpread((TechnoClass *)this, v25 - 1); /*0x43ff67*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( *(unsigned char *)((*((int (**)(BuildingClass *))this->vtable1 + 33))(this) + 3285) /*0x43ff89*/
//DUPDEF // 0x70ddf0
//DUPDEF       && TechnoClass::GetMember81((TechnoClass *)this) > 0 )
//DUPDEF     {
//DUPDEF       ++this->ammoReloadTimer; /*0x43ff8b*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   if ( (*((uint8_t (**)(BuildingClass *))this->vtable1 + 128))(this) /*0x43ffa3*/
//DUPDEF     && (*((uint8_t (**)(BuildingClass *))this->vtable1 + 123))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD = 0; /*0x43ffad*/
//DUPDEF   }
//DUPDEF   BuildingClass_field_int_538 = this->BuildingClass_field_int_538; /*0x43ffb4*/
//DUPDEF   if ( BuildingClass_field_int_538 != -1 ) /*0x43ffbc*/
//DUPDEF   {
//DUPDEF     if ( this->BuildingClass_field_int_534 != BuildingClass_field_int_538 ) /*0x43ffc8*/
//DUPDEF     {
//DUPDEF       v28 = this->Type; /*0x43ffca*/
//DUPDEF       this->BuildingClass_field_int_534 = BuildingClass_field_int_538; /*0x43ffd5*/
//DUPDEF       v29 = &v28->BuildingAnimFrame[3 * BuildingClass_field_int_538]; /*0x43ffdb*/
//DUPDEF       if ( BuildingClass_field_int_538 < 2 ) /*0x43ffe2*/
//DUPDEF         ProductionTimeMult = Rules::GetProductionTimeMult( /*0x44000d*/
//DUPDEF                                (Rules *)&stru_A8EB00_raw.parent_gap[24],
//DUPDEF                                v28->BuildingAnimFrame[3 * BuildingClass_field_int_538 + 2]);
//DUPDEF       else
//DUPDEF         ProductionTimeMult = (char *)v28->BuildingAnimFrame[3 * BuildingClass_field_int_538 + 2]; /*0x43ffef*/
//DUPDEF       this->animation[2] = *(unsigned int *)&stru_A8EB00_raw.gapE4[416]; /*0x43fff8*/
//DUPDEF       this->animation[3] = v77; /*0x440028*/
//DUPDEF       this->animation[4] = (int)ProductionTimeMult; /*0x44002b*/
//DUPDEF       this->animation[5] = (int)ProductionTimeMult; /*0x44002e*/
//DUPDEF       this->animation[0] = *v29; /*0x440036*/
//DUPDEF }
//DUPDEF     this->BuildingClass_field_int_538 = -1; /*0x44003c*/
//DUPDEF }
//DUPDEF   health = this->health; /*0x440042*/
//DUPDEF   if ( health != this->BuildingClass_field_544 ) /*0x44004d*/
//DUPDEF   {
//DUPDEF     IDA_LOBYTE(this->owner->HouseClass_field_timer_B[2]) = 1; /*0x440055*/
//DUPDEF     IDA_BYTE1(this->owner->HouseClass_field_timer_B[2]) = 1; /*0x440062*/
//DUPDEF     health = this->health; /*0x440069*/
//DUPDEF     this->BuildingClass_field_544 = health; /*0x44006c*/
//DUPDEF }
//DUPDEF   if ( !health ) /*0x440074*/
//DUPDEF   {
//DUPDEF     v32 = this->DamageFireAnims; /*0x440076*/
//DUPDEF     v33 = 8; /*0x44007c*/
//DUPDEF     do /*0x440099*/
//DUPDEF     {
//DUPDEF       if ( *v32 ) /*0x440081*/
//DUPDEF       {
//DUPDEF         (*(void (**)(int))(*(unsigned int *)this->q6C0)(*v32); /*0x440089*/
//DUPDEF         *v32 = 0; /*0x44008f*/
//DUPDEF }
//DUPDEF       ++v32; /*0x440095*/
//DUPDEF       --v33; /*0x440098*/
//DUPDEF     }
//DUPDEF     while ( v33 ); /*0x440099*/
//DUPDEF     v34 = this->C4Timer[0]; /*0x44009b*/
//DUPDEF     result = this->C4Timer[2]; /*0x4400a1*/
//DUPDEF     if ( v34 != -1 ) /*0x4400a9*/
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v34 >= result ) /*0x4400b5*/
//DUPDEF       {
//DUPDEF   LABEL_98:
//DUPDEF         (*((void (**)(BuildingClass *))this->vtable1 + 53))(this); /*0x4400c1*/
//DUPDEF         BuildingClass::EjectCrew(this, this->C4AppliedBy); /*0x4400d4*/
//DUPDEF         (*((void (**)(BuildingClass *))this->vtable1 + 62))(this); /*0x4400dd*/
//DUPDEF // 0x441f60
//DUPDEF         return BuildingClass::AfterDestruction(int a1) ; /*0x4400f1*/
//DUPDEF }
//DUPDEF       result -= *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v34; /*0x4400b7*/
//DUPDEF     }
//DUPDEF     if ( result ) /*0x4400bb*/
//DUPDEF       return result; /*0x4400bb*/
//DUPDEF     goto LABEL_98; /*0x4400bb*/
//DUPDEF   }
//DUPDEF   BuildingClass::UpdatePrism(a1); /*0x4400f4*/
//DUPDEF   if ( a1->Type->Overpowerable ) /*0x4400ff*/
//DUPDEF   {
//DUPDEF     for ( i = this->Audio7[1] - 1; i >= 0; --i ) /*0x440114*/
//DUPDEF     {
//DUPDEF       if ( *(BuildingClass **)(*(unsigned int *)(this->Occupants[0] + 4 * i) + 692) != this ) /*0x440125*/
//DUPDEF       {
//DUPDEF         v36 = this->Audio7[1]; /*0x440127*/
//DUPDEF         if ( i < v36 ) /*0x44012f*/
//DUPDEF         {
//DUPDEF           v37 = v36 - 1; /*0x440131*/
//DUPDEF           v38 = i; /*0x440134*/
//DUPDEF           for ( this->Audio7[1] = v37; /*0x44013e*/
//DUPDEF                 v38 < this->Audio7[1];
//DUPDEF                 *(unsigned int *)(this->Occupants[0] + 4 * v38 - 4) = *(unsigned int *)(this->Occupants[0] + 4 * v38) )
//DUPDEF           {
//DUPDEF             ++v38; /*0x440146*/
//DUPDEF }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v39 = this->Audio7[1]; /*0x44015b*/
//DUPDEF     if ( v39 >= 3 ) /*0x440164*/
//DUPDEF       goto LABEL_111; /*0x440164*/
//DUPDEF     HouseClass::GetPowerRatio(this->owner); /*0x44016c*/
//DUPDEF     __asm /*0x440171*/
//DUPDEF     {
//DUPDEF       fcomp ds:dbl_7E1718
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4000) == 0 ) /*0x44017c*/
//DUPDEF       goto LABEL_110; /*0x44017c*/
//DUPDEF     if ( this->HasPower && v39 >= 1 ) /*0x44018b*/
//DUPDEF   LABEL_111:
//DUPDEF       this->IsOverpowered = 1; /*0x440196*/
//DUPDEF     else
//DUPDEF   LABEL_110:
//DUPDEF       this->IsOverpowered = 0; /*0x44018d*/
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x4401a3*/
//DUPDEF     BuildingClass::ProcessStructureAbandoned(this); /*0x4401af*/
//DUPDEF   BuildingClass::ProcessActiveAnimation(v67, v1); /*0x4401b6*/
//DUPDEF   if ( this->Type->Factory[0] ) /*0x4401c1*/
//DUPDEF     ProcessAutoProduction((ObjectClass *)this); /*0x4401cd*/
//DUPDEF   if ( !this->C4Applied ) /*0x4401da*/
//DUPDEF     goto LABEL_138; /*0x4401da*/
//DUPDEF   v41 = this->C4Timer[0]; /*0x4401e0*/
//DUPDEF   v42 = this->C4Timer[2]; /*0x4401e6*/
//DUPDEF   if ( v41 != -1 ) /*0x4401ee*/
//DUPDEF   {
//DUPDEF     if ( *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v41 >= v42 ) /*0x4401fa*/
//DUPDEF     {
//DUPDEF   LABEL_121:
//DUPDEF       v43 = this->Type; /*0x440206*/
//DUPDEF       v73 = this->health; /*0x44020f*/
//DUPDEF       if ( v43->BridgeRepairHut ) /*0x440213*/
//DUPDEF       {
//DUPDEF         v68 = 0; /*0x440221*/
//DUPDEF         v44 = -2; /*0x440226*/
//DUPDEF         do /*0x4402de*/
//DUPDEF         {
//DUPDEF           v45 = -2; /*0x44022b*/
//DUPDEF           do /*0x4402d4*/
//DUPDEF           {
//DUPDEF             v46 = (unsigned short *)(*((int (**)(BuildingClass *, char *))this->vtable1 + 110))(this, v74); /*0x440239*/
//DUPDEF             IDA_HIWORD(v69) = v44 + v46[1]; /*0x44024c*/
//DUPDEF             IDA_LOWORD(v69) = *v46 + v45; /*0x440251*/
//DUPDEF             *(unsigned int *)v71 = v69; /*0x44025e*/
//DUPDEF             v47 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v71) + 14); /*0x44026d*/
//DUPDEF             v48 = (unsigned short *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 110))(this, v75); /*0x440279*/
//DUPDEF             IDA_HIWORD(v70) = v44 + v48[1]; /*0x44028c*/
//DUPDEF             IDA_LOWORD(v70) = *v48 + v45; /*0x440291*/
//DUPDEF             *(unsigned int *)v72 = v70; /*0x44029e*/
//DUPDEF             v49 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v72) + 17); /*0x4402b3*/
//DUPDEF             if ( v47 >= g_TerrainBridgeIndex && v47 < g_TerrainBridgeIndex + 16 || v49 >= 74 && v49 <= 101 ) /*0x4402c9*/
//DUPDEF               v68 = 1; /*0x4402cb*/
//DUPDEF             ++v45; /*0x4402d0*/
//DUPDEF }
//DUPDEF           while ( v45 < 3 ); /*0x4402d4*/
//DUPDEF           ++v44; /*0x4402da*/
//DUPDEF         }
//DUPDEF         while ( v44 < 3 ); /*0x4402de*/
//DUPDEF         v50 = (int16_t *)(*((int (**)(BuildingClass *, int *))this->vtable1 + 110))(this, v75); /*0x4402f5*/
//DUPDEF         if ( v68 ) /*0x4402ec*/
//DUPDEF           MapClass::ApplyTerrainDamage((MapClass *)&stru_87F5F0_raw.__pad_58[416], v50); /*0x440301*/
//DUPDEF         else
//DUPDEF           TerrainClass::ProcessSlope((TerrainClass *)&stru_87F5F0_raw.__pad_58[416], v50); /*0x44031b*/
//DUPDEF         this->C4Applied = 0; /*0x440320*/
//DUPDEF         this->C4AppliedBy = 0; /*0x440327*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         result = (*((int (**)(BuildingClass *, int *, unsigned int, unsigned int, InfantryClass *, int, unsigned int, unsigned int))this->vtable1 /*0x440358*/
//DUPDEF                   + 91))(
//DUPDEF                    this,
//DUPDEF                    &v73,
//DUPDEF                    0,
//DUPDEF                    *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
//DUPDEF                    this->C4AppliedBy,
//DUPDEF                    1,
//DUPDEF                    0,
//DUPDEF                    0);
//DUPDEF }
//DUPDEF       IDA_LOBYTE(result) = this->isAliveFlag; /*0x44035e*/
//DUPDEF       if ( !(unsigned char)result ) /*0x440366*/
//DUPDEF         return result; /*0x440366*/
//DUPDEF       (*((void (**)(BuildingClass *, int))this->vtable1 + 73))(this, 2); /*0x440372*/
//DUPDEF       goto LABEL_138; /*0x440372*/
//DUPDEF     }
//DUPDEF     v42 -= *(unsigned int *)&stru_A8EB00_raw.gapE4[416] - v41; /*0x4401fc*/
//DUPDEF   }
//DUPDEF   if ( !v42 ) /*0x440200*/
//DUPDEF     goto LABEL_121; /*0x440200*/
//DUPDEF   LABEL_138:
//DUPDEF   result = (int)this->target; /*0x440378*/
//DUPDEF   if ( result ) /*0x440380*/
//DUPDEF   {
//DUPDEF     result = (*((int (**)(BuildingClass *, AbstractClass *))this->vtable1 + 235))(this, this->target); /*0x44038b*/
//DUPDEF     if ( !(unsigned char)result ) /*0x440393*/
//DUPDEF     {
//DUPDEF       if ( (*((int (**)(AbstractClass *))this->target->vtable0 + 11))(this->target) != 2 ) /*0x4403a7*/
//DUPDEF         return (*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x4403a7*/
//DUPDEF       result = (*((int (**)(AbstractClass *))this->target->vtable0 + 20))(this->target); /*0x4403b5*/
//DUPDEF       if ( (unsigned char)result ) /*0x4403ba*/
//DUPDEF         return (*((int (**)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x440567*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   return result; /*0x4400ea*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     if ( v3->FreeUnit != -1 || v3->SecretInfantry != -1 ) /*0x43fb80*/
//DUPDEF     {
//DUPDEF       AudioFile::Stop((unsigned int *)&this->lineTrailer9); /*0x43fb8a*/
//DUPDEF       v4 = this->q0A0; /*0x43fb9b*/
//DUPDEF       v74 = this->location; /*0x43fb9e*/
//DUPDEF       v75 = v4; /*0x43fba2*/
//DUPDEF       v5 = this->Type; /*0x43fba6*/
//DUPDEF       v76 = this->q0A4; /*0x43fbb0*/
//DUPDEF       if ( v2 ) /*0x43fb99*/
//DUPDEF         StartAudioControllerAt(v5->FreeUnit, (int)&v74, (int)&this->q2AC6); /*0x43fbbe*/
//DUPDEF       else
//DUPDEF         StartAudioControllerAt(v5->SecretInfantry, (int)&v74, (int)&this->q2AC6); /*0x43fbe3*/
//DUPDEF }
//DUPDEF     Animation::UpdateBuildingAnimations((int)this); /*0x43fbea*/
//DUPDEF     this->WasOnline = v2; /*0x43fbef*/
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x43fc41*/
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio((int *)this); /*0x43fc4b*/
//DUPDEF     _EAX = g_RulesClass_Instance; /*0x43fc50*/
//DUPDEF     __asm /*0x43fc55*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [eax+1708h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (IDA_BYTE1(_EAX) & 0x41) != 0 ) /*0x43fc60*/
//DUPDEF     {
//DUPDEF       v7 = 1; /*0x43fc62*/
//DUPDEF       goto LABEL_22; /*0x43fc64*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     BuildingClass::GetHealthRatio((int *)this); /*0x43fc66*/
//DUPDEF     _ECX = g_RulesClass_Instance; /*0x43fc6b*/
//DUPDEF     __asm /*0x43fc71*/
//DUPDEF     {
//DUPDEF       fcomp qword ptr [ecx+1700h]
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4100) != 0 ) /*0x43fc7c*/
//DUPDEF     {
//DUPDEF       v7 = 1; /*0x43fc7e*/
//DUPDEF       goto LABEL_22; /*0x43fc80*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   v7 = 0; /*0x43fc82*/
//DUPDEF   LABEL_22:
//DUPDEF   if ( v7 != this->RequiresDamageFires ) /*0x43fc8a*/
//DUPDEF   {
//DUPDEF     if ( v7 ) /*0x43fc8e*/
//DUPDEF     {
//DUPDEF       CreateDominatorDestructionEffects((void ***)this); /*0x43fc92*/
//DUPDEF }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v10 = (unsigned int *)((char *)&this->q2500); /*0x43fc99*/
//DUPDEF       v11 = 8; /*0x43fc9f*/
//DUPDEF       do /*0x43fcbc*/
//DUPDEF       {
//DUPDEF         if ( *v10 ) /*0x43fca4*/
//DUPDEF         {
//DUPDEF           (*(void (**)(unsigned int))(*(unsigned int *)*v10 + 248))(*v10); /*0x43fcac*/
//DUPDEF           *v10 = 0; /*0x43fcb2*/
//DUPDEF }
//DUPDEF         ++v10; /*0x43fcb8*/
//DUPDEF         --v11; /*0x43fcbb*/
//DUPDEF       }
//DUPDEF       while ( v11 ); /*0x43fcbc*/
//DUPDEF     }
//DUPDEF     this->RequiresDamageFires = v7; /*0x43fcbe*/
//DUPDEF   }
//DUPDEF   if ( this->Type->qCA1 ) /*0x43fccd*/
//DUPDEF     this->turretIsRotating = (uint8_t)TimerClass::Active((int)&this->q1684); /*0x43fce7*/
//DUPDEF   else
//DUPDEF     this->turretIsRotating = 0; /*0x43fcef*/
//DUPDEF   v12 = this->temporalTargetingMe; /*0x43fcf9*/
//DUPDEF   if ( v12 ) /*0x43fd01*/
//DUPDEF     (*(void (**)(int))(this->q2D4)(v12); /*0x43fd05*/
//DUPDEF   if ( (*(uint8_t (**)(void *))(*(unsigned int *)&this->missionQueued8))(this) /*0x43fd1e*/
//DUPDEF     || (*(uint8_t (**)(void *))(*(unsigned int *)&this->missionStatus2))(this) )
//DUPDEF   {
//DUPDEF     v50 = this->Type; /*0x4403d4*/
//DUPDEF     v51 = v50->MaxNumberOccupants; /*0x4403e0*/
//DUPDEF     if ( v51 && *(unsigned int *)&g_RulesClass_Instance->__pad_240[260] ) /*0x4403ee*/
//DUPDEF     {
//DUPDEF       v52 = 0; /*0x4403fc*/
//DUPDEF       if ( v51 > 0 ) /*0x440400*/
//DUPDEF       {
//DUPDEF         v53 = 5512; /*0x440406*/
//DUPDEF         do /*0x4404e9*/
//DUPDEF         {
//DUPDEF           if ( !(((int)g_CurrentFrame + v52) % 24) && *(unsigned int *)&g_RulesClass_Instance->__pad_240[260] ) /*0x440428*/
//DUPDEF           {
//DUPDEF             v54 = (int *)World::ToScreen(v73, (unsigned int *)(v53 + v50), v65); /*0x440445*/
//DUPDEF             v55 = v54[1]; /*0x44044a*/
//DUPDEF             v56 = *v54; /*0x44044d*/
//DUPDEF             v57 = *(unsigned int *)this; /*0x44044f*/
//DUPDEF             v75 = v55; /*0x440451*/
//DUPDEF             v74 = v56; /*0x440459*/
//DUPDEF             v76 = 0; /*0x440460*/
//DUPDEF             v58 = (unsigned int *)(*(int (**)(void *, char *))(v57 + 172))(this, v77); /*0x440468*/
//DUPDEF             v59 = v74 + *v58; /*0x440478*/
//DUPDEF             v60 = v58[1]; /*0x44047a*/
//DUPDEF             v61 = v76 + v58[2]; /*0x440486*/
//DUPDEF             v74 = v59; /*0x44048d*/
//DUPDEF             v75 += v60; /*0x440491*/
//DUPDEF             v76 = v61; /*0x440495*/
//DUPDEF             v62 = (void **)RA2_OPNEW(0x1C8u); /*0x440499*/
//DUPDEF             if ( v62 ) /*0x4404a3*/
//DUPDEF               v63 = AnimClass::ctor( /*0x4404c6*/
//DUPDEF                       v62,
//DUPDEF                       *(void **)&g_RulesClass_Instance->__pad_240[260],
//DUPDEF                       &v74,
//DUPDEF                       0,
//DUPDEF                       1,
//DUPDEF                       (void *)0x600,
//DUPDEF                       0,
//DUPDEF                       0);
//DUPDEF             else
//DUPDEF               v63 = 0; /*0x4404cd*/
//DUPDEF             v63[64] = (void *)-200; /*0x4404cf*/
//DUPDEF }
//DUPDEF           v50 = this->Type; /*0x4404d9*/
//DUPDEF           ++v52; /*0x4404df*/
//DUPDEF           v53 += 8; /*0x4404e0*/
//DUPDEF         }
//DUPDEF         while ( v52 < v50->MaxNumberOccupants ); /*0x4404e9*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else if ( !((int)g_CurrentFrame % 24) ) /*0x4404fc*/
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)&g_RulesClass_Instance->__pad_240[260] ) /*0x440502*/
//DUPDEF       {
//DUPDEF         v64 = (void **)RA2_OPNEW(0x1C8u); /*0x440511*/
//DUPDEF         if ( v64 ) /*0x44051b*/
//DUPDEF         {
//DUPDEF           v74 = this->location; /*0x440530*/
//DUPDEF           v75 = this->q0A0; /*0x440539*/
//DUPDEF           v76 = this->q0A4; /*0x440545*/
//DUPDEF           AnimClass::ctor(v64, *(void **)&g_RulesClass_Instance->__pad_240[260], &v74, 0, 1, (void *)0x600, 0, 0); /*0x440558*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     result = this->target; /*0x44055d*/
//DUPDEF     if ( result ) /*0x440565*/
//DUPDEF       return (*(int (**)(void *, unsigned int))(*(unsigned int *)&this->targetingTimer8))(this, 0); /*0x440565*/
//DUPDEF     return result; /*0x440565*/
//DUPDEF   }
//DUPDEF   v13 = this->q6D0; /*0x43fd2c*/
//DUPDEF   v14 = this->q6D8; /*0x43fd32*/
//DUPDEF   v15 = (unsigned int *)((char *)&this->q2B84); /*0x43fd3e*/
//DUPDEF   if ( v13 != -1 ) /*0x43fd46*/
//DUPDEF   {
//DUPDEF     if ( (int)g_CurrentFrame - v13 >= v14 ) /*0x43fd4e*/
//DUPDEF       goto LABEL_46; /*0x43fd4e*/
//DUPDEF     v14 -= (int)g_CurrentFrame - v13; /*0x43fd54*/
//DUPDEF   }
//DUPDEF   if ( v14 == 1 ) /*0x43fd59*/
//DUPDEF   {
//DUPDEF     v16 = v75; /*0x43fd5b*/
//DUPDEF     *v15 = g_CurrentFrame; /*0x43fd63*/
//DUPDEF     this->q6D4 = v16; /*0x43fd65*/
//DUPDEF     this->q6D8 = 0; /*0x43fd68*/
//DUPDEF     v17 = this->Type->ProduceCashDelay; /*0x43fd77*/
//DUPDEF     *v15 = g_CurrentFrame; /*0x43fd7d*/
//DUPDEF     this->q6D4 = v75; /*0x43fd83*/
//DUPDEF     this->q6D8 = v17; /*0x43fd86*/
//DUPDEF     if ( !*(unsigned char *)(*(unsigned int *)(this->owner + 52) + 422) ) /*0x43fd92*/
//DUPDEF     {
//DUPDEF       if ( (*(uint8_t (**)(void *))(*(unsigned int *)&this->initialOwner8))(this) ) /*0x43fda0*/
//DUPDEF       {
//DUPDEF         v18 = this->Type->ProduceCashAmount; /*0x43fdb0*/
//DUPDEF         if ( v18 <= 0 ) /*0x43fdb8*/
//DUPDEF           HouseClass::ProcessPowerDrain(*((int **)&this->attachedTag5), -v18); /*0x43fdd1*/
//DUPDEF         else
//DUPDEF           HouseClass::AddPower(*((unsigned int **)&this->attachedTag5), this->Type->ProduceCashAmount); /*0x43fdc1*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   LABEL_46:
//DUPDEF   v19 = this->airstrike; /*0x43fdd6*/
//DUPDEF   if ( v19 && v19->SlowdownDistance == this ) /*0x43fde3*/
//DUPDEF     (*(void (**)(void *, int))(*(unsigned int *)&this->isOnMap2))(this, 2); /*0x43fdeb*/
//DUPDEF   if ( this->Type->SAM ) /*0x43fdf7*/
//DUPDEF   {
//DUPDEF     v20 = this->target; /*0x43fe01*/
//DUPDEF     if ( v20 ) /*0x43fe09*/
//DUPDEF     {
//DUPDEF       if ( !(*(uint8_t (**)(int))(this->sparkParticles)(v20) ) /*0x43fe0d*/
//DUPDEF         (*(void (**)(void *, unsigned int))(*(unsigned int *)&this->targetingTimer8))(this, 0); /*0x43fe1a*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   BuildingClass::UpdateAnimFrames((int)this); /*0x43fe22*/
//DUPDEF   if ( (*(uint8_t (**)(void *))(*(unsigned int *)&this->q0CC2))(this) /*0x43fe43*/
//DUPDEF     && this->BuildingClass_field_int_534
//DUPDEF     && (*(uint8_t (**)(void *))(*(unsigned int *)&this->missionData2))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD = 0; /*0x43fe4d*/
//DUPDEF   }
//DUPDEF   MovementAI::Begin((int *)this); /*0x43fe56*/
//DUPDEF   IDA_LOBYTE(result) = this->isAliveFlag; /*0x43fe5b*/
//DUPDEF   if ( !(unsigned char)result ) /*0x43fe63*/
//DUPDEF     return result; /*0x43fe63*/
//DUPDEF   if ( *(unsigned char *)((*(int (**)(void *))(*(unsigned int *)&this->attachedTag2))(this) + 3285) /*0x43fe86*/
//DUPDEF // 0x70ddf0
//DUPDEF     && TechnoClass::GetMember81(this) > 0 )
//DUPDEF   {
//DUPDEF     ++this->gattlingValue; /*0x43fe88*/
//DUPDEF }
//DUPDEF   if ( !this->pitchAngle ) /*0x43fe8e*/
//DUPDEF   {
//DUPDEF     v22 = this->Type; /*0x43fe98*/
//DUPDEF     if ( !v22->Hospital && !v22->Armory ) /*0x43fea8*/
//DUPDEF       this->pitchAngle = v22->q684; /*0x43feb8*/
//DUPDEF   }
//DUPDEF   if ( (*(int (**)(void *))(*(unsigned int *)&this->isInLogic8))(this) != 1 )
//DUPDEF   {
//DUPDEF     if ( *(unsigned char *)((*(int (**)(void *))(*(unsigned int *)&this->attachedTag2))(this) + 3285) )
//DUPDEF     {
//DUPDEF       if ( (int)g_CurrentFrame - this->q120 > *(unsigned int *)&g_RulesClass_Instance->__pad_C3C[456] + 5 )
//DUPDEF       {
//DUPDEF         TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(this, this->Type->Parasiteable); /*0x43ff19*/
//DUPDEF         Member81 = TechnoClass::GetMember81(this); /*0x43ff27*/
//DUPDEF         v24 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
//DUPDEF         if ( v24 > 0 )
//DUPDEF         {
//DUPDEF           v25 = (uint8_t)Audio::IsLoud((int *)&this->NeedsSaveOrLink4)
//DUPDEF               ? *(unsigned int *)(this->Type + 4 * v24 + 3312)
//DUPDEF               : *(unsigned int *)(this->Type + 4 * v24 + 3288);
//DUPDEF           if ( Member81 < v25 ) /*0x43ff61*/
//DUPDEF             TechnoClass::SetSpread(this, v24 - 1); /*0x43ff67*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( *(unsigned char *)((*(int (**)(void *))(*(unsigned int *)&this->attachedTag2))(this) + 3285) /*0x43ff89*/
//DUPDEF // 0x70ddf0
//DUPDEF       && TechnoClass::GetMember81(this) > 0 )
//DUPDEF     {
//DUPDEF       ++this->gattlingValue; /*0x43ff8b*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   if ( (*(uint8_t (**)(void *))(*(unsigned int *)&this->q0CC2))(this) /*0x43ffa3*/
//DUPDEF     && (*(uint8_t (**)(void *))(*(unsigned int *)&this->missionData2))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD = 0; /*0x43ffad*/
//DUPDEF   }
//DUPDEF   v26 = this->BuildingClass_field_int_538; /*0x43ffb4*/
//DUPDEF   if ( v26 != -1 ) /*0x43ffbc*/
//DUPDEF   {
//DUPDEF     if ( this->BuildingClass_field_int_534 != v26 ) /*0x43ffc8*/
//DUPDEF     {
//DUPDEF       v27 = this->Type; /*0x43ffca*/
//DUPDEF       this->BuildingClass_field_int_534 = v26; /*0x43ffd5*/
//DUPDEF       v28 = (unsigned int *)(v27 + 12 this->u32_143C; /*0x43ffdb*/
//DUPDEF       if ( v26 < 2 ) /*0x43ffe2*/
//DUPDEF         ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, *(unsigned int *)(v27 + 12 this->u32_1444); /*0x44000d*/
//DUPDEF       else
//DUPDEF         ProductionTimeMult = *(char **)(v27 + 12 this->u32_1444; /*0x43ffef*/
//DUPDEF       this->g_CurrentFrame = g_CurrentFrame; /*0x43fff8*/
//DUPDEF       this->currentTurretNumber = v75; /*0x440028*/
//DUPDEF       this->secondaryTurretIndex = ProductionTimeMult; /*0x44002b*/
//DUPDEF       this->behindAnim = ProductionTimeMult; /*0x44002e*/
//DUPDEF       this->q0F8 = *v28; /*0x440036*/
//DUPDEF }
//DUPDEF     this->BuildingClass_field_int_538 = -1; /*0x44003c*/
//DUPDEF   }
//DUPDEF   v30 = this->health; /*0x440042*/
//DUPDEF   if ( v30 != this->BuildingClass_field_544 ) /*0x44004d*/
//DUPDEF   {
//DUPDEF     *(unsigned char *)(this->owner + 22392) = 1; /*0x440055*/
//DUPDEF     *(unsigned char *)(this->owner + 22393) = 1; /*0x440062*/
//DUPDEF     v30 = this->health; /*0x440069*/
//DUPDEF     this->BuildingClass_field_544 = v30; /*0x44006c*/
//DUPDEF   }
//DUPDEF   if ( !v30 ) /*0x440074*/
//DUPDEF   {
//DUPDEF     v31 = (unsigned int *)((char *)&this->q2500); /*0x440076*/
//DUPDEF     v32 = 8; /*0x44007c*/
//DUPDEF     do /*0x440099*/
//DUPDEF     {
//DUPDEF       if ( *v31 ) /*0x440081*/
//DUPDEF       {
//DUPDEF         (*(void (**)(unsigned int))(*(unsigned int *)*v31 + 248))(*v31); /*0x440089*/
//DUPDEF         *v31 = 0; /*0x44008f*/
//DUPDEF }
//DUPDEF       ++v31; /*0x440095*/
//DUPDEF       --v32; /*0x440098*/
//DUPDEF     }
//DUPDEF     while ( v32 ); /*0x440099*/
//DUPDEF     v33 = this->C4Timer; /*0x44009b*/
//DUPDEF     result = this->q530; /*0x4400a1*/
//DUPDEF     if ( v33 != -1 ) /*0x4400a9*/
//DUPDEF     {
//DUPDEF       if ( (int)g_CurrentFrame - v33 >= result ) /*0x4400b5*/
//DUPDEF       {
//DUPDEF   LABEL_98:
//DUPDEF         (*(void (**)(void *))(*(unsigned int *)&this->q0542))(this); /*0x4400c1*/
//DUPDEF         BuildingClass::EjectCrew((int *)this, *((unsigned char **)&this->hasParachute6)); /*0x4400d4*/
//DUPDEF         (*(void (**)(void *))(*(unsigned int *)&this->q0608))(this); /*0x4400dd*/
//DUPDEF // 0x441f60
//DUPDEF         return BuildingClass::AfterDestruction(int a1) ; /*0x4400f1*/
//DUPDEF }
//DUPDEF       result -= (int)g_CurrentFrame - v33; /*0x4400b7*/
//DUPDEF     }
//DUPDEF     if ( result ) /*0x4400bb*/
//DUPDEF       return result; /*0x4400bb*/
//DUPDEF     goto LABEL_98; /*0x4400bb*/
//DUPDEF   }
//DUPDEF   BuildingClass::UpdatePrism((int *)a1); /*0x4400f4*/
//DUPDEF   if ( a1->Type->Overpowerable ) /*0x4400ff*/
//DUPDEF   {
//DUPDEF     for ( i = this->v36 - 1; i >= 0; --i ) /*0x440114*/
//DUPDEF     {
//DUPDEF       if ( *(void **)(*(unsigned int *)(this->Occupants + 4 * i) + 692) != this ) /*0x440125*/
//DUPDEF       {
//DUPDEF         v35 = this->v36; /*0x440127*/
//DUPDEF         if ( i < v35 ) /*0x44012f*/
//DUPDEF         {
//DUPDEF           v36 = v35 - 1; /*0x440131*/
//DUPDEF           v37 = i; /*0x440134*/
//DUPDEF           for ( this->v36 = v36; /*0x44013e*/
//DUPDEF                 v37 < this->v36;
//DUPDEF                 *(unsigned int *)(this->Occupants + 4 * v37 - 4) = *(unsigned int *)(this->Occupants + 4 * v37) )
//DUPDEF           {
//DUPDEF             ++v37; /*0x440146*/
//DUPDEF }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v38 = this->v36; /*0x44015b*/
//DUPDEF     if ( v38 >= 3 ) /*0x440164*/
//DUPDEF       goto LABEL_111; /*0x440164*/
//DUPDEF     HouseClass::GetPowerRatio(*((int **)&this->attachedTag5)); /*0x44016c*/
//DUPDEF     __asm /*0x440171*/
//DUPDEF     {
//DUPDEF       fcomp ds:dbl_7E1718
//DUPDEF       fnstsw ax
//DUPDEF     }
//DUPDEF     if ( (_AX & 0x4000) == 0 ) /*0x44017c*/
//DUPDEF       goto LABEL_110; /*0x44017c*/
//DUPDEF     if ( this->HasPower && v38 >= 1 ) /*0x44018b*/
//DUPDEF   LABEL_111:
//DUPDEF       this->IsOverpowered = 1; /*0x440196*/
//DUPDEF     else
//DUPDEF   LABEL_110:
//DUPDEF       this->IsOverpowered = 0; /*0x44018d*/
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x4401a3*/
//DUPDEF     BuildingClass::ProcessStructureAbandoned((int)this); /*0x4401af*/
//DUPDEF   BuildingClass::ProcessActiveAnimation(this); /*0x4401b6*/
//DUPDEF   if ( this->Type->BuildingTypeClass_field_ED8 ) /*0x4401c1*/
//DUPDEF     ProcessAutoProduction(this); /*0x4401cd*/
//DUPDEF   if ( !this->C4Applied ) /*0x4401da*/
//DUPDEF     goto LABEL_138; /*0x4401da*/
//DUPDEF   v40 = this->C4Timer; /*0x4401e0*/
//DUPDEF   v41 = this->q530; /*0x4401e6*/
//DUPDEF   if ( v40 != -1 ) /*0x4401ee*/
//DUPDEF   {
//DUPDEF     if ( (int)g_CurrentFrame - v40 >= v41 ) /*0x4401fa*/
//DUPDEF     {
//DUPDEF   LABEL_121:
//DUPDEF       v42 = this->Type; /*0x440206*/
//DUPDEF       v71 = this->health; /*0x44020f*/
//DUPDEF       if ( this->u32_1BD6 ) /*0x440213*/
//DUPDEF       {
//DUPDEF         v66 = 0; /*0x440221*/
//DUPDEF         v43 = -2; /*0x440226*/
//DUPDEF         do /*0x4402de*/
//DUPDEF         {
//DUPDEF           v44 = -2; /*0x44022b*/
//DUPDEF           do /*0x4402d4*/
//DUPDEF           {
//DUPDEF             v45 = (unsigned short *)(*(int (**)(void *, char *))(*(unsigned int *)&this->suspendedMission0))(this, v72); /*0x440239*/
//DUPDEF             IDA_HIWORD(v67) = v43 + v45[1]; /*0x44024c*/
//DUPDEF             IDA_LOWORD(v67) = *v45 + v44; /*0x440251*/
//DUPDEF             v69 = v67; /*0x44025e*/
//DUPDEF             v46 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v69) + 14); /*0x44026d*/
//DUPDEF             v47 = (unsigned short *)(*(int (**)(void *, int *))(*(unsigned int *)&this->suspendedMission0))(this, v73); /*0x440279*/
//DUPDEF             IDA_HIWORD(v68) = v43 + v47[1]; /*0x44028c*/
//DUPDEF             IDA_LOWORD(v68) = *v47 + v44; /*0x440291*/
//DUPDEF             v68 = v68; /*0x44029e*/
//DUPDEF             v48 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v68) + 17); /*0x4402b3*/
//DUPDEF             if ( v46 >= g_TerrainBridgeIndex && v46 < g_TerrainBridgeIndex + 16 || v48 >= 74 && v48 <= 101 ) /*0x4402c9*/
//DUPDEF               v66 = 1; /*0x4402cb*/
//DUPDEF             ++v44; /*0x4402d0*/
//DUPDEF }
//DUPDEF           while ( v44 < 3 ); /*0x4402d4*/
//DUPDEF           ++v43; /*0x4402da*/
//DUPDEF         }
//DUPDEF         while ( v43 < 3 ); /*0x4402de*/
//DUPDEF         v49 = (int16_t *)(*(int (**)(void *, int *))(*(unsigned int *)&this->suspendedMission0))(this, v73); /*0x4402f5*/
//DUPDEF         if ( v66 ) /*0x4402ec*/
//DUPDEF           MapClass::ApplyTerrainDamage(&MapClass_Instance, v49); /*0x440301*/
//DUPDEF         else
//DUPDEF           TerrainClass::ProcessSlope(&MapClass_Instance, v49); /*0x44031b*/
//DUPDEF         this->C4Applied = 0; /*0x440320*/
//DUPDEF         this->C4AppliedBy = 0; /*0x440327*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         result = (*(int (**)(void *, int *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)&this->isAliveFlag4))( /*0x440358*/
//DUPDEF                    this,
//DUPDEF                    &v71,
//DUPDEF                    0,
//DUPDEF                    *(unsigned int *)&g_RulesClass_Instance->__pad_C3C[876],
//DUPDEF                    this->C4AppliedBy,
//DUPDEF                    1,
//DUPDEF                    0,
//DUPDEF                    0);
//DUPDEF }
//DUPDEF       IDA_LOBYTE(result) = this->isAliveFlag; /*0x44035e*/
//DUPDEF       if ( !(unsigned char)result ) /*0x440366*/
//DUPDEF         return result; /*0x440366*/
//DUPDEF       (*(void (**)(void *, int))(*(unsigned int *)&this->isOnMap2))(this, 2); /*0x440372*/
//DUPDEF       goto LABEL_138; /*0x440372*/
//DUPDEF     }
//DUPDEF     v41 -= (int)g_CurrentFrame - v40; /*0x4401fc*/
//DUPDEF   }
//DUPDEF   if ( !v41 ) /*0x440200*/
//DUPDEF     goto LABEL_121; /*0x440200*/
//DUPDEF   LABEL_138:
//DUPDEF   result = this->target; /*0x440378*/
//DUPDEF   if ( result ) /*0x440380*/
//DUPDEF   {
//DUPDEF     result = (*(int (**)(void *, unsigned int))(*(unsigned int *)&this->q1780))(this, this->target); /*0x44038b*/
//DUPDEF     if ( !(unsigned char)result ) /*0x440393*/
//DUPDEF     {
//DUPDEF       if ( (*(int (**)(unsigned int))(**((unsigned int **)&this->q0443) + 44))(this->target) != 2 ) /*0x4403a7*/
//DUPDEF         return (*(int (**)(void *, unsigned int))(*(unsigned int *)&this->targetingTimer8))(this, 0); /*0x4403a7*/
//DUPDEF       result = (*(int (**)(unsigned int))(**((unsigned int **)&this->q0443) + 80))(this->target); /*0x4403b5*/
//DUPDEF       if ( (unsigned char)result ) /*0x4403ba*/
//DUPDEF         return (*(int (**)(void *, unsigned int))(*(unsigned int *)&this->targetingTimer8))(this, 0); /*0x440567*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   return result; /*0x4400ea*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     if ( v3->FreeUnit != -1 || v3->SecretInfantry != -1 ) /*0x43fb80*/
//DUPDEF     {
//DUPDEF       AudioFile::Stop((unsigned int *)&this->lineTrailer9); /*0x43fb8a*/
//DUPDEF       v4 = (char *)this->q0A0; /*0x43fb9b*/
//DUPDEF       v69 = this->location; /*0x43fb9e*/
//DUPDEF       Parachute = v4; /*0x43fba2*/
//DUPDEF       v5 = this->Type; /*0x43fba6*/
//DUPDEF       v71 = this->q0A4; /*0x43fbb0*/
//DUPDEF       if ( v2 ) /*0x43fb99*/
//DUPDEF         StartAudioControllerAt(v5->FreeUnit, (int)&v69, (int)&this->q2AC6); /*0x43fbbe*/
//DUPDEF       else
//DUPDEF         StartAudioControllerAt(v5->SecretInfantry, (int)&v69, (int)&this->q2AC6); /*0x43fbe3*/
//DUPDEF     }
//DUPDEF     Animation::UpdateBuildingAnimations((int)this); /*0x43fbea*/
//DUPDEF     this->WasOnline = v2; /*0x43fbef*/
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x43fc41*/
//DUPDEF   {
//DUPDEF     if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&g_RulesClass_Instance[1].ChronoSparkle1 ) /*0x43fc60*/
//DUPDEF     {
//DUPDEF       v6 = 1; /*0x43fc62*/
//DUPDEF       goto LABEL_22; /*0x43fc64*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x43fc7c*/
//DUPDEF   {
//DUPDEF     v6 = 1; /*0x43fc7e*/
//DUPDEF     goto LABEL_22; /*0x43fc80*/
//DUPDEF   }
//DUPDEF   v6 = 0; /*0x43fc82*/
//DUPDEF   LABEL_22:
//DUPDEF   if ( v6 != this->RequiresDamageFires ) /*0x43fc8a*/
//DUPDEF   {
//DUPDEF     if ( v6 ) /*0x43fc8e*/
//DUPDEF     {
//DUPDEF       CreateDominatorDestructionEffects(this); /*0x43fc92*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v7 = (char *)&this->q1720; /*0x43fc99*/
//DUPDEF       v8 = 8; /*0x43fc9f*/
//DUPDEF       do /*0x43fcbc*/
//DUPDEF       {
//DUPDEF         if ( *(unsigned int *)v7 ) /*0x43fca4*/
//DUPDEF         {
//DUPDEF           (*(void (**)(unsigned int))(*this->q6C0)(*(unsigned int *)v7); /*0x43fcac*/
//DUPDEF           *(unsigned int *)v7 = 0; /*0x43fcb2*/
//DUPDEF }
//DUPDEF         v7 += 4; /*0x43fcb8*/
//DUPDEF         --v8; /*0x43fcbb*/
//DUPDEF       }
//DUPDEF       while ( v8 ); /*0x43fcbc*/
//DUPDEF     }
//DUPDEF     this->RequiresDamageFires = v6; /*0x43fcbe*/
//DUPDEF   }
//DUPDEF   if ( this->Type->qCA1 ) /*0x43fccd*/
//DUPDEF     this->turretIsRotating = TimerClass::Active((int)&this->q1684); /*0x43fce7*/
//DUPDEF   else
//DUPDEF     this->turretIsRotating = 0; /*0x43fcef*/
//DUPDEF   v9 = this->temporalTargetingMe; /*0x43fcf9*/
//DUPDEF   if ( v9 ) /*0x43fd01*/
//DUPDEF     (*(void (**)(int))(v9->q05C)(v9); /*0x43fd05*/
//DUPDEF   if ( (*(uint8_t (**)(void *))(*(unsigned int *)&this->missionQueued8))(this) /*0x43fd1e*/
//DUPDEF     || (*(uint8_t (**)(void *))(*(unsigned int *)&this->missionStatus2))(this) )
//DUPDEF   {
//DUPDEF     v46 = this->Type; /*0x4403d4*/
//DUPDEF     v47 = v46->MaxNumberOccupants; /*0x4403e0*/
//DUPDEF     if ( v47 && g_RulesClass_Instance->PrerequisiteTech[2] ) /*0x4403ee*/
//DUPDEF     {
//DUPDEF       v48 = 0; /*0x4403fc*/
//DUPDEF       if ( v47 > 0 ) /*0x440400*/
//DUPDEF       {
//DUPDEF         v49 = 5512; /*0x440406*/
//DUPDEF         do /*0x4404e9*/
//DUPDEF         {
//DUPDEF           if ( !(((int)g_CurrentFrame + v48) % 24) && g_RulesClass_Instance->PrerequisiteTech[2] ) /*0x440428*/
//DUPDEF           {
//DUPDEF             v50 = World::ToScreen((float *)g_TacticalClass_Instance, v68, (int *)(v49 + v46)); /*0x440445*/
//DUPDEF             v51 = (char *)v50[1]; /*0x44044a*/
//DUPDEF             v52 = *v50; /*0x44044d*/
//DUPDEF             vfptr0 = *(int (***)(void *, unsigned char *))this; /*0x44044f*/
//DUPDEF             Parachute = v51; /*0x440451*/
//DUPDEF             v69 = v52; /*0x440459*/
//DUPDEF             v71 = 0; /*0x440460*/
//DUPDEF             v54 = (unsigned int *)vfptr0[43](this, v72); /*0x440468*/
//DUPDEF             v55 = v69 + *v54; /*0x440478*/
//DUPDEF             v56 = v54[1]; /*0x44047a*/
//DUPDEF             v57 = v71 + v54[2]; /*0x440486*/
//DUPDEF             v69 = v55; /*0x44048d*/
//DUPDEF             Parachute += v56; /*0x440491*/
//DUPDEF             v71 = v57; /*0x440495*/
//DUPDEF             v58 = (void **)RA2_OPNEW(0x1C8u); /*0x440499*/
//DUPDEF             if ( v58 ) /*0x4404a3*/
//DUPDEF               v59 = AnimClass::ctor( /*0x4404c6*/
//DUPDEF                       v58,
//DUPDEF                       (void *)g_RulesClass_Instance->PrerequisiteTech[2],
//DUPDEF                       &v69,
//DUPDEF                       0,
//DUPDEF                       1,
//DUPDEF                       (void *)0x600,
//DUPDEF                       0,
//DUPDEF                       0);
//DUPDEF             else
//DUPDEF               v59 = 0; /*0x4404cd*/
//DUPDEF             v59[64] = (void *)-200; /*0x4404cf*/
//DUPDEF }
//DUPDEF           v46 = this->Type; /*0x4404d9*/
//DUPDEF           ++v48; /*0x4404df*/
//DUPDEF           v49 += 8; /*0x4404e0*/
//DUPDEF         }
//DUPDEF         while ( v48 < v46->MaxNumberOccupants ); /*0x4404e9*/
//DUPDEF       }
//DUPDEF     }
//DUPDEF     else if ( !((int)g_CurrentFrame % 24) ) /*0x4404fc*/
//DUPDEF     {
//DUPDEF       if ( g_RulesClass_Instance->PrerequisiteTech[2] ) /*0x440502*/
//DUPDEF       {
//DUPDEF         v60 = (void **)RA2_OPNEW(0x1C8u); /*0x440511*/
//DUPDEF         if ( v60 ) /*0x44051b*/
//DUPDEF         {
//DUPDEF           v69 = this->location; /*0x440530*/
//DUPDEF           Parachute = (char *)this->q0A0; /*0x440539*/
//DUPDEF           v71 = this->q0A4; /*0x440545*/
//DUPDEF           AnimClass::ctor(v60, (void *)g_RulesClass_Instance->PrerequisiteTech[2], &v69, 0, 1, (void *)0x600, 0, 0); /*0x440558*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     result = this->target; /*0x44055d*/
//DUPDEF     if ( result ) /*0x440565*/
//DUPDEF       return (*(int (**)(void *, unsigned int))(*(unsigned int *)&this->targetingTimer8))(this, 0); /*0x440565*/
//DUPDEF     return result; /*0x440565*/
//DUPDEF   }
//DUPDEF   v10 = this->q6D0; /*0x43fd2c*/
//DUPDEF   v11 = this->q6D8; /*0x43fd32*/
//DUPDEF   v12 = (char *)&this->q6D0; /*0x43fd3e*/
//DUPDEF   if ( v10 != -1 ) /*0x43fd46*/
//DUPDEF   {
//DUPDEF     if ( (int)g_CurrentFrame - v10 >= v11 ) /*0x43fd4e*/
//DUPDEF       goto LABEL_46; /*0x43fd4e*/
//DUPDEF     v11 -= (int)g_CurrentFrame - v10; /*0x43fd54*/
//DUPDEF   }
//DUPDEF   if ( v11 == 1 ) /*0x43fd59*/
//DUPDEF   {
//DUPDEF     v13 = Parachute; /*0x43fd5b*/
//DUPDEF     *(unsigned int *)v12 = g_CurrentFrame; /*0x43fd63*/
//DUPDEF     this->q6D4 = v13; /*0x43fd65*/
//DUPDEF     this->q6D8 = 0; /*0x43fd68*/
//DUPDEF     v14 = this->Type->ProduceCashDelay; /*0x43fd77*/
//DUPDEF     *(unsigned int *)v12 = g_CurrentFrame; /*0x43fd7d*/
//DUPDEF     this->q6D4 = Parachute; /*0x43fd83*/
//DUPDEF     this->q6D8 = v14; /*0x43fd86*/
//DUPDEF     if ( !*(unsigned char *)(*(unsigned int *)(this->owner + 52) + 422) ) /*0x43fd92*/
//DUPDEF     {
//DUPDEF       if ( (*(uint8_t (**)(void *))(*(unsigned int *)&this->initialOwner8))(this) ) /*0x43fda0*/
//DUPDEF       {
//DUPDEF         v15 = this->Type->ProduceCashAmount; /*0x43fdb0*/
//DUPDEF         if ( v15 <= 0 ) /*0x43fdb8*/
//DUPDEF           HouseClass::ProcessPowerDrain(this->owner, -v15); /*0x43fdd1*/
//DUPDEF         else
//DUPDEF           HouseClass::AddPower(*((unsigned int **)&this->attachedTag5), this->Type->ProduceCashAmount); /*0x43fdc1*/
//DUPDEF }
//DUPDEF     }
//DUPDEF   }
//DUPDEF   LABEL_46:
//DUPDEF   v16 = this->airstrike; /*0x43fdd6*/
//DUPDEF   if ( v16 && this->spawnManager == this ) /*0x43fde3*/
//DUPDEF     (*(void (**)(void *, int))(*(unsigned int *)&this->isOnMap2))(this, 2); /*0x43fdeb*/
//DUPDEF   if ( this->Type->SAM ) /*0x43fdf7*/
//DUPDEF   {
//DUPDEF     v17 = this->target; /*0x43fe01*/
//DUPDEF     if ( v17 ) /*0x43fe09*/
//DUPDEF     {
//DUPDEF       if ( !(*(uint8_t (**)(int))(this->sparkParticles)(v17) ) /*0x43fe0d*/
//DUPDEF         (*(void (**)(void *, unsigned int))(*(unsigned int *)&this->targetingTimer8))(this, 0); /*0x43fe1a*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   BuildingClass::UpdateAnimFrames((int)this); /*0x43fe22*/
//DUPDEF   if ( (*(uint8_t (**)(void *))(*(unsigned int *)&this->q0CC2))(this) /*0x43fe43*/
//DUPDEF     && this->BuildingClass_field_int_534
//DUPDEF     && (*(uint8_t (**)(void *))(*(unsigned int *)&this->missionData2))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD = 0; /*0x43fe4d*/
//DUPDEF }
//DUPDEF   MovementAI::Begin((int *)this); /*0x43fe56*/
//DUPDEF   IDA_LOBYTE(result) = this->isAliveFlag; /*0x43fe5b*/
//DUPDEF   if ( !(unsigned char)result ) /*0x43fe63*/
//DUPDEF     return result; /*0x43fe63*/
//DUPDEF   if ( *(unsigned char *)((*(int (**)(void *))(((unsigned int)(this->attachedTag2))))(this) + 3285) /*0x43fe86*/
//DUPDEF // 0x70ddf0
//DUPDEF     && TechnoClass::GetMember81(this) > 0 )
//DUPDEF   {
//DUPDEF     ++this->gattlingValue; /*0x43fe88*/
//DUPDEF }
//DUPDEF   if ( !this->pitchAngle ) /*0x43fe8e*/
//DUPDEF   {
//DUPDEF     v19 = this->Type; /*0x43fe98*/
//DUPDEF     if ( !v19->Hospital && !v19->Armory ) /*0x43fea8*/
//DUPDEF       this->pitchAngle = v19->q684; /*0x43feb8*/
//DUPDEF   }
//DUPDEF   if ( (*(int (**)(void *))(*(unsigned int *)&this->isInLogic8))(this) != 1 )
//DUPDEF   {
//DUPDEF     if ( *(unsigned char *)((*(int (**)(void *))(((unsigned int)(this->attachedTag2))))(this) + 3285) )
//DUPDEF     {
//DUPDEF       if ( (int)g_CurrentFrame - this->q120 > g_RulesClass_Instance->AIIonCannonEngineerValue[0] + 5 )
//DUPDEF       {
//DUPDEF         ((void (*)(unsigned int))TechnoClass::GattlingValueRateDown_GattlingRateDownDelay)(this->Type->Parasiteable); /*0x43ff19*/
//DUPDEF         Member81 = TechnoClass::GetMember81(this); /*0x43ff27*/
//DUPDEF         v21 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
//DUPDEF         if ( v21 > 0 )
//DUPDEF         {
//DUPDEF           v22 = Audio::IsLoud((float *)&this->NeedsSaveOrLink4)
//DUPDEF               ? *(unsigned int *)(this->Type + 4 * v21 + 3312)
//DUPDEF               : *(unsigned int *)(this->Type + 4 * v21 + 3288);
//DUPDEF           if ( Member81 < v22 ) /*0x43ff61*/
//DUPDEF             TechnoClass::SetSpread(this, v21 - 1); /*0x43ff67*/
//DUPDEF }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     if ( *(unsigned char *)((*(int (**)(void *))(((unsigned int)(this->attachedTag2))))(this) + 3285) /*0x43ff89*/
//DUPDEF // 0x70ddf0
//DUPDEF       && TechnoClass::GetMember81(this) > 0 )
//DUPDEF     {
//DUPDEF       ++this->gattlingValue; /*0x43ff8b*/
//DUPDEF }
//DUPDEF   }
//DUPDEF   if ( (*(uint8_t (**)(void *))(*(unsigned int *)&this->q0CC2))(this) /*0x43ffa3*/
//DUPDEF     && (*(uint8_t (**)(void *))(*(unsigned int *)&this->missionData2))(this) )
//DUPDEF   {
//DUPDEF     this->BuildingClass_field_bool_6DD = 0; /*0x43ffad*/
//DUPDEF   }
//DUPDEF   v23 = this->BuildingClass_field_int_538; /*0x43ffb4*/
//DUPDEF   if ( v23 != -1 ) /*0x43ffbc*/
//DUPDEF   {
//DUPDEF     if ( this->BuildingClass_field_int_534 != v23 ) /*0x43ffc8*/
//DUPDEF     {
//DUPDEF       v24 = this->Type; /*0x43ffca*/
//DUPDEF       this->BuildingClass_field_int_534 = v23; /*0x43ffd5*/
//DUPDEF       v25 = (unsigned int *)(v24 + 12 this->u32_143C; /*0x43ffdb*/
//DUPDEF       if ( v23 < 2 ) /*0x43ffe2*/
//DUPDEF         ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, *(unsigned int *)(v24 + 12 this->u32_1444); /*0x44000d*/
//DUPDEF       else
//DUPDEF         ProductionTimeMult = *(char **)(v24 + 12 this->u32_1444; /*0x43ffef*/
//DUPDEF       this->g_CurrentFrame = g_CurrentFrame; /*0x43fff8*/
//DUPDEF       this->currentTurretNumber = Parachute; /*0x440028*/
//DUPDEF       this->secondaryTurretIndex = ProductionTimeMult; /*0x44002b*/
//DUPDEF       this->behindAnim = ProductionTimeMult; /*0x44002e*/
//DUPDEF       this->q0F8 = *v25; /*0x440036*/
//DUPDEF     }
//DUPDEF     this->BuildingClass_field_int_538 = -1; /*0x44003c*/
//DUPDEF   }
//DUPDEF   v27 = this->health; /*0x440042*/
//DUPDEF   if ( v27 != this->BuildingClass_field_544 ) /*0x44004d*/
//DUPDEF   {
//DUPDEF     *(unsigned char *)(this->owner + 22392) = 1; /*0x440055*/
//DUPDEF     *(unsigned char *)(this->owner + 22393) = 1; /*0x440062*/
//DUPDEF     v27 = this->health; /*0x440069*/
//DUPDEF     this->BuildingClass_field_544 = v27; /*0x44006c*/
//DUPDEF   }
//DUPDEF   if ( !v27 ) /*0x440074*/
//DUPDEF   {
//DUPDEF     v28 = (char *)&this->q1720; /*0x440076*/
//DUPDEF     v29 = 8; /*0x44007c*/
//DUPDEF     do /*0x440099*/
//DUPDEF     {
//DUPDEF       if ( *(unsigned int *)v28 ) /*0x440081*/
//DUPDEF       {
//DUPDEF         (*(void (**)(unsigned int))(*this->q6C0)(*(unsigned int *)v28); /*0x440089*/
//DUPDEF         *(unsigned int *)v28 = 0; /*0x44008f*/
//DUPDEF }
//DUPDEF       v28 += 4; /*0x440095*/
//DUPDEF       --v29; /*0x440098*/
//DUPDEF     }
//DUPDEF     while ( v29 ); /*0x440099*/
//DUPDEF     v30 = this->C4Timer; /*0x44009b*/
//DUPDEF     result = this->q530; /*0x4400a1*/
//DUPDEF     if ( v30 != -1 ) /*0x4400a9*/
//DUPDEF     {
//DUPDEF       if ( (int)g_CurrentFrame - v30 >= result ) /*0x4400b5*/
//DUPDEF       {
//DUPDEF   LABEL_98:
//DUPDEF         (*(void (**)(void *))(*(unsigned int *)&this->q0542))(this); /*0x4400c1*/
//DUPDEF         ((void (*)(unsigned int))BuildingClass::EjectCrew)(this->C4AppliedBy); /*0x4400d4*/
//DUPDEF         (*(void (**)(void *))(*(unsigned int *)&this->q0608))(this); /*0x4400dd*/
//DUPDEF         return ((int (*)(void *))BuildingClass::AfterDestruction)(this); /*0x4400f1*/
//DUPDEF       }
//DUPDEF       result -= (int)g_CurrentFrame - v30; /*0x4400b7*/
//DUPDEF     }
//DUPDEF     if ( result ) /*0x4400bb*/
//DUPDEF       return result; /*0x4400bb*/
//DUPDEF     goto LABEL_98; /*0x4400bb*/
//DUPDEF   }
//DUPDEF   BuildingClass::UpdatePrism((int *)this); /*0x4400f4*/
//DUPDEF   if ( this->Type->Overpowerable ) /*0x4400ff*/
//DUPDEF   {
//DUPDEF     for ( i = this->v33 - 1; i >= 0; --i ) /*0x440114*/
//DUPDEF     {
//DUPDEF       if ( *(void **)(*(unsigned int *)(this->Occupants + 4 * i) + 692) != this ) /*0x440125*/
//DUPDEF       {
//DUPDEF         v32 = this->v33; /*0x440127*/
//DUPDEF         if ( i < v32 ) /*0x44012f*/
//DUPDEF         {
//DUPDEF           v33 = v32 - 1; /*0x440131*/
//DUPDEF           i = i; /*0x440134*/
//DUPDEF           for ( this->v33 = v33; /*0x44013e*/
//DUPDEF                 i < this->v33;
//DUPDEF                 *(unsigned int *)(this->Occupants + 4 * i - 4) = *(unsigned int *)(this->Occupants + 4 * i) )
//DUPDEF           {
//DUPDEF             ++i; /*0x440146*/
//DUPDEF }
//DUPDEF         }
//DUPDEF       }
//DUPDEF     }
//DUPDEF     v35 = this->v33; /*0x44015b*/
//DUPDEF     this->IsOverpowered = v35 >= 3 /*0x440196*/
//DUPDEF                            || HouseClass::GetPowerRatio((int *)this->owner) == 1.0
//DUPDEF                            && this->HasPower
//DUPDEF                            && v35 >= 1;
//DUPDEF   }
//DUPDEF   if ( this->Type->CanBeOccupied ) /*0x4401a3*/
//DUPDEF     BuildingClass::ProcessStructureAbandoned((int)this); /*0x4401af*/
//DUPDEF   BuildingClass::ProcessActiveAnimation(this); /*0x4401b6*/
//DUPDEF   if ( this->Type->BuildingTypeClass_field_ED8 ) /*0x4401c1*/
//DUPDEF     ProcessAutoProduction(this); /*0x4401cd*/
//DUPDEF   if ( !this->C4Applied ) /*0x4401da*/
//DUPDEF     goto LABEL_138; /*0x4401da*/
//DUPDEF   v36 = this->C4Timer; /*0x4401e0*/
//DUPDEF   v37 = this->q530; /*0x4401e6*/
//DUPDEF   if ( v36 != -1 ) /*0x4401ee*/
//DUPDEF   {
//DUPDEF     if ( (int)g_CurrentFrame - v36 >= v37 ) /*0x4401fa*/
//DUPDEF     {
//DUPDEF   LABEL_121:
//DUPDEF       v38 = this->Type; /*0x440206*/
//DUPDEF       v66 = this->health; /*0x44020f*/
//DUPDEF       if ( this->u32_1BD6 ) /*0x440213*/
//DUPDEF       {
//DUPDEF         v61 = 0; /*0x440221*/
//DUPDEF         v39 = -2; /*0x440226*/
//DUPDEF         do /*0x4402de*/
//DUPDEF         {
//DUPDEF           v40 = -2; /*0x44022b*/
//DUPDEF           do /*0x4402d4*/
//DUPDEF           {
//DUPDEF             v41 = (unsigned short *)(*(int (**)(void *, char *))(*(unsigned int *)&this->suspendedMission0))(this, v67); /*0x440239*/
//DUPDEF             IDA_HIWORD(v62) = v39 + v41[1]; /*0x44024c*/
//DUPDEF             IDA_LOWORD(v62) = *v41 + v40; /*0x440251*/
//DUPDEF             v62 = v62; /*0x44025e*/
//DUPDEF             v42 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v62) + 14); /*0x44026d*/
//DUPDEF             v43 = (unsigned short *)(*(int (**)(void *, int *))(*(unsigned int *)&this->suspendedMission0))(this, v68); /*0x440279*/
//DUPDEF             IDA_HIWORD(v63) = v39 + v43[1]; /*0x44028c*/
//DUPDEF             IDA_LOWORD(v63) = *v43 + v40; /*0x440291*/
//DUPDEF             v63 = v63; /*0x44029e*/
//DUPDEF             v44 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v63) + 17); /*0x4402b3*/
//DUPDEF             if ( v42 >= g_TerrainBridgeIndex && v42 < g_TerrainBridgeIndex + 16 || v44 >= 74 && v44 <= 101 ) /*0x4402c9*/
//DUPDEF               v61 = 1; /*0x4402cb*/
//DUPDEF             ++v40; /*0x4402d0*/
//DUPDEF }
//DUPDEF           while ( v40 < 3 ); /*0x4402d4*/
//DUPDEF           ++v39; /*0x4402da*/
//DUPDEF         }
//DUPDEF         while ( v39 < 3 ); /*0x4402de*/
//DUPDEF         v45 = (int16_t *)(*(int (**)(void *, int *))(*(unsigned int *)&this->suspendedMission0))(this, v68); /*0x4402f5*/
//DUPDEF         if ( v61 ) /*0x4402ec*/
//DUPDEF           MapClass::ApplyTerrainDamage(&MapClass_Instance, v45); /*0x440301*/
//DUPDEF         else
//DUPDEF           result = ((int (*)(int16_t *))TerrainClass::ProcessSlope)(v45); /*0x44031b*/
//DUPDEF         this->C4Applied = 0; /*0x440320*/
//DUPDEF         this->C4AppliedBy = 0; /*0x440327*/
//DUPDEF       }
//DUPDEF       else
//DUPDEF       {
//DUPDEF         result = (*(int (**)(void *, int *, unsigned int, int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)&this->isAliveFlag4))( /*0x440358*/
//DUPDEF                    this,
//DUPDEF                    &v66,
//DUPDEF                    0,
//DUPDEF                    g_RulesClass_Instance->SilverCrate[5],
//DUPDEF                    this->C4AppliedBy,
//DUPDEF                    1,
//DUPDEF                    0,
//DUPDEF                    0);
//DUPDEF       }
//DUPDEF       IDA_LOBYTE(result) = this->isAliveFlag; /*0x44035e*/
//DUPDEF       if ( !(unsigned char)result ) /*0x440366*/
//DUPDEF         return result; /*0x440366*/
//DUPDEF       (*(void (**)(void *, int))(*(unsigned int *)&this->isOnMap2))(this, 2); /*0x440372*/
//DUPDEF       goto LABEL_138; /*0x440372*/
//DUPDEF     }
//DUPDEF     v37 -= (int)g_CurrentFrame - v36; /*0x4401fc*/
//DUPDEF   }
//DUPDEF   if ( !v37 ) /*0x440200*/
//DUPDEF     goto LABEL_121; /*0x440200*/
//DUPDEF   LABEL_138:
//DUPDEF   result = this->target; /*0x440378*/
//DUPDEF   if ( result ) /*0x440380*/
//DUPDEF   {
//DUPDEF     result = (*(int (**)(void *, unsigned int))(*(unsigned int *)&this->q1780))(this, this->target); /*0x44038b*/
//DUPDEF     if ( !(unsigned char)result ) /*0x440393*/
//DUPDEF     {
//DUPDEF       if ( (*(int (**)(unsigned int))(**((unsigned int **)&this->q0443) + 44))(this->target) != 2 ) /*0x4403a7*/
//DUPDEF         return (*(int (**)(void *, unsigned int))(*(unsigned int *)&this->targetingTimer8))(this, 0); /*0x4403a7*/
//DUPDEF       result = (*(int (**)(unsigned int))(**((unsigned int **)&this->q0443) + 80))(this->target); /*0x4403b5*/
//DUPDEF       if ( (unsigned char)result ) /*0x4403ba*/
//DUPDEF         return (*(int (**)(void *, unsigned int))(*(unsigned int *)&this->targetingTimer8))(this, 0); /*0x440567*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   return result; /*0x4400ea*/
//DUPDEF }
//DUPDEF   v4 = -v1; /*0x455a01*/
//DUPDEF   v5 = -v1; /*0x455a03*/
//DUPDEF   for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
//DUPDEF   {
//DUPDEF     if ( v4 < v1 ) /*0x455a10*/
//DUPDEF     {
//DUPDEF       do /*0x455a64*/
//DUPDEF       {
//DUPDEF         IDA_LOWORD(v7) = v4 + v12; /*0x455a2f*/
//DUPDEF         IDA_HIWORD(v7) = IDA_HIWORD(v12) + v5; /*0x455a1e*/
//DUPDEF         v8 = v7; /*0x455a38*/
//DUPDEF         result = v1 * v1; /*0x455a3c*/
//DUPDEF         if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
//DUPDEF         {
//DUPDEF           CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v8); /*0x455a50*/
//DUPDEF           result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
//DUPDEF         }
//DUPDEF         ++v4; /*0x455a61*/
//DUPDEF       }
//DUPDEF       while ( v4 < v1 ); /*0x455a64*/
//DUPDEF       v4 = i; /*0x455a66*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF     }  // G42.33 ph7v2: close outer if
//DUPDEF   }  // G42.33 ph7v2: close do/if nesting
//DUPDEF     }  // G42.33 ph7v2: close inner if
//DUPDEF   }  // G42.33 ph7v2: close do-loop
//DUPDEF   return result; /*0x455a70*/
//DUPDEF }
//DUPDEF   v4 = -v1; /*0x455a01*/
//DUPDEF   v5 = -v1; /*0x455a03*/
//DUPDEF   for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
//DUPDEF   {
//DUPDEF     if ( v4 < v1 ) /*0x455a10*/
//DUPDEF     {
//DUPDEF       do /*0x455a64*/
//DUPDEF       {
//DUPDEF         IDA_LOWORD(v7) = v4 + v12; /*0x455a2f*/
//DUPDEF         IDA_HIWORD(v7) = IDA_HIWORD(v12) + v5; /*0x455a1e*/
//DUPDEF         v8 = v7; /*0x455a38*/
//DUPDEF         result = v1 * v1; /*0x455a3c*/
//DUPDEF         if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
//DUPDEF         {
//DUPDEF           CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v8); /*0x455a50*/
//DUPDEF           result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
//DUPDEF         }
//DUPDEF         ++v4; /*0x455a61*/
//DUPDEF       }
//DUPDEF       while ( v4 < v1 ); /*0x455a64*/
//DUPDEF       v4 = i; /*0x455a66*/
//DUPDEF     }
//DUPDEF   return result; /*0x455a70*/
//DUPDEF   v4 = -v1; /*0x455a01*/
//DUPDEF   v5 = -v1; /*0x455a03*/
//DUPDEF   for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
//DUPDEF   {
//DUPDEF     if ( v4 < v1 ) /*0x455a10*/
//DUPDEF     {
//DUPDEF       do /*0x455a64*/
//DUPDEF       {
//DUPDEF         IDA_LOWORD(v7) = v4 + v12; /*0x455a2f*/
//DUPDEF         IDA_HIWORD(v7) = IDA_HIWORD(v12) + v5; /*0x455a1e*/
//DUPDEF         v8 = v7; /*0x455a38*/
//DUPDEF         result = v1 * v1; /*0x455a3c*/
//DUPDEF         if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
//DUPDEF         {
//DUPDEF           CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v8); /*0x455a50*/
//DUPDEF           result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
//DUPDEF         ++v4; /*0x455a61*/
//DUPDEF       while ( v4 < v1 ); /*0x455a64*/
//DUPDEF       v4 = i; /*0x455a66*/
//DUPDEF   return result; /*0x455a70*/
//DUPDEF   v4 = -v1; /*0x455a01*/
//DUPDEF   v5 = -v1; /*0x455a03*/
//DUPDEF   for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
//DUPDEF   {
//DUPDEF     if ( v4 < v1 ) /*0x455a10*/
//DUPDEF     {
//DUPDEF       do /*0x455a64*/
//DUPDEF       {
//DUPDEF         IDA_LOWORD(v7) = v4 + v12; /*0x455a2f*/
//DUPDEF         IDA_HIWORD(v7) = IDA_HIWORD(v12) + v5; /*0x455a1e*/
//DUPDEF         v8 = v7; /*0x455a38*/
//DUPDEF         result = v1 * v1; /*0x455a3c*/
//DUPDEF         if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
//DUPDEF         {
//DUPDEF           CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v8); /*0x455a50*/
//DUPDEF           result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
//DUPDEF         ++v4; /*0x455a61*/
//DUPDEF       while ( v4 < v1 ); /*0x455a64*/
//DUPDEF       v4 = i; /*0x455a66*/
//DUPDEF   return result; /*0x455a70*/

// IDA 0x483690: check if eligible for tiberium storage
//DUPDEF }
//DUPDEF }
//DUPDEF }
// 0x483690
//DUPDEF bool BuildingClass::IsTiberiumSiloEligible() {
//DUPDEF   int BuildingByTiberiumType; // edi

//DUPDEF   if ( IDA_SLOBYTE(dword_A8B230->vtable0) >= 0 ) /*0x48369c*/
//DUPDEF     return 0; /*0x48369f*/
//DUPDEF   BuildingByTiberiumType = FindBuildingByTiberiumType(((unsigned int *)this)[2]); /*0x4836ab*/
//DUPDEF   if ( BuildingByTiberiumType == -1 ) /*0x4836b0*/
//DUPDEF     return 0; /*0x4836b3*/
//DUPDEF   if ( IDA_BYTE2(((unsigned int *)this)[0]) <= BuildingByTiberiumType / 2 ) /*0x4836c8*/
//DUPDEF     return 0; /*0x4836cb*/
//DUPDEF   if ( IDA_LOBYTE(((unsigned int *)this)[0]) ) /*0x4836cf*/
//DUPDEF     return 0; /*0x4836da*/
//DUPDEF   if ( *(double *)(*(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[2] + 4 * BuildingByTiberiumType) + 160) >= 0.00001 ) /*0x4836f8*/
//DUPDEF     return ((unsigned int *)this)[1] == 0; /*0x483708*/
//DUPDEF   return 0; /*0x48369e*/
//DUPDEF }
// 0x458e50
//DUPDEF void BuildingClass::UpdateBunker() {}
//DUPDEF   BuildingClass *v2; // ecx
//DUPDEF   BuildingClass *v3; // esi
//DUPDEF   char *bunkerLinkedUnit; // ebp
//DUPDEF   char (__thiscall **vtable0)(BuildingClass *, int, unsigned int); // eax
//DUPDEF   char *BunkerState; // eax
//DUPDEF   Cell *v7; // eax
//DUPDEF   unsigned short *v8; // ebx
//DUPDEF   Object *v9; // eax
//DUPDEF   char *ClosestObjectCell; // eax
//DUPDEF   char *v11; // edi
//DUPDEF   int v12; // ebx
//DUPDEF   int v13; // eax
//DUPDEF   unsigned short *v14; // edi
//DUPDEF   int v15; // ebx
//DUPDEF   Object *v16; // eax
//DUPDEF   int v19; // eax
//DUPDEF   int *v20; // eax
//DUPDEF   int v21; // edi
//DUPDEF   int v22; // ebx
//DUPDEF   int v23; // ecx
//DUPDEF   int v24; // eax
//DUPDEF   Cell *v25; // eax
//DUPDEF   int v26; // edx
//DUPDEF   int v28; // ecx
//DUPDEF   AnimTypeClass *v29; // eax
//DUPDEF   int v30; // edx
//DUPDEF   int v33; // ecx
//DUPDEF   int v34; // edx
//DUPDEF   TechnoClass *v35; // ecx
//DUPDEF   int *location; // esi
//DUPDEF   double v38; // [esp+10h] [ebp-98h]
//DUPDEF   double v39; // [esp+18h] [ebp-90h]
//DUPDEF   char v40; // [esp+33h] [ebp-75h]
//DUPDEF   int v41; // [esp+34h] [ebp-74h]
//DUPDEF   int v42; // [esp+34h] [ebp-74h]
//DUPDEF   int v43; // [esp+38h] [ebp-70h]
//DUPDEF   int v44; // [esp+38h] [ebp-70h]
//DUPDEF   unsigned short *v45; // [esp+3Ch] [ebp-6Ch]
//DUPDEF   int v46; // [esp+3Ch] [ebp-6Ch]
//DUPDEF   int v47; // [esp+3Ch] [ebp-6Ch]
//DUPDEF   int16_t v43[2]; // [esp+40h] [ebp-68h] BYREF
//DUPDEF   int16_t v46[2]; // [esp+44h] [ebp-64h] BYREF
//DUPDEF   int16_t v51; // [esp+4Ch] [ebp-5Ch] BYREF
//DUPDEF   int v52; // [esp+50h] [ebp-58h] BYREF
//DUPDEF   int v53; // [esp+54h] [ebp-54h] BYREF
//DUPDEF   int v54; // [esp+58h] [ebp-50h] BYREF
//DUPDEF   unsigned int v55[2]; // [esp+5Ch] [ebp-4Ch] BYREF
//DUPDEF   unsigned int v56[2]; // [esp+64h] [ebp-44h] BYREF
//DUPDEF   unsigned int v57[3]; // [esp+6Ch] [ebp-3Ch] BYREF
//DUPDEF   unsigned char v58[8]; // [esp+78h] [ebp-30h] BYREF
//DUPDEF   unsigned char v60[12]; // [esp+84h] [ebp-24h] BYREF
//DUPDEF   unsigned char v61[12]; // [esp+90h] [ebp-18h] BYREF
//DUPDEF   unsigned char v62[12]; // [esp+9Ch] [ebp-Ch] BYREF

//DUPDEF   v3 = v2; /*0x458e56*/
//DUPDEF   bunkerLinkedUnit = (char *)v2->bunkerLinkedUnit; /*0x458e5b*/
//DUPDEF   if ( (bunkerLinkedUnit || (bunkerLinkedUnit = (char *)Team::GetMember((Team *)v2, 0)) != 0) /*0x458e7c*/
//DUPDEF     && (*(int (**)(char *))(bunkerLinkedUnit->fallRate)(bunkerLinkedUnit) == 1 )
//DUPDEF   {
//DUPDEF     BunkerState = (char *)v3->BunkerState; /*0x458e99*/
//DUPDEF     switch ( (unsigned int)BunkerState ) /*0x458ea8*/
//DUPDEF     {
//DUPDEF       case 0u: /*0x458ea8*/
//DUPDEF         v7 = (Cell *)(*(int (**)(char *))(bunkerLinkedUnit->q1BC)(bunkerLinkedUnit); /*0x458eb4*/
//DUPDEF         BunkerState = (char *)Cell::IsBridge(v7); /*0x458ebc*/
//DUPDEF         if ( BunkerState == (char *)v3 ) /*0x458ec3*/
//DUPDEF         {
//DUPDEF           if ( !*((unsigned int *)bunkerLinkedUnit + 413) ) /*0x458ec9*/
//DUPDEF             WinAPI::Wrapper(-2147467261); /*0x458ed6*/
//DUPDEF           IDA_LOBYTE(BunkerState) = (*(int (**)(unsigned int))(**((unsigned int **)bunkerLinkedUnit + 413) + 16))(*((unsigned int *)bunkerLinkedUnit + 413)); /*0x458ee4*/
//DUPDEF           if ( !(unsigned char)BunkerState ) /*0x458ee9*/
//DUPDEF           {
//DUPDEF             v8 = (unsigned short *)(*((int (**)(BuildingClass *, unsigned int))v3->vtable0 + 66))(v3, 0); /*0x458efe*/
//DUPDEF             v45 = v8; /*0x458f05*/
//DUPDEF             v41 = *(unsigned int *)(*((int (**)(BuildingClass *, int *))v3->vtable0 + 110))(v3, &v52); /*0x458f11*/
//DUPDEF             while ( 1 ) /*0x458f15*/
//DUPDEF             {
//DUPDEF               IDA_LOWORD(BunkerState) = *v8; /*0x458f15*/
//DUPDEF               if ( *v8 == 0x7FFF && v8[1] == 0x7FFF ) /*0x458f22*/
//DUPDEF                 break; /*0x458f22*/
//DUPDEF               IDA_LOWORD(v43) = v41 + (unsigned short)BunkerState; /*0x458f3b*/
//DUPDEF               IDA_HIWORD(v43) = IDA_HIWORD(v41) + v8[1]; /*0x458f40*/
//DUPDEF               *(unsigned int *)v43 = v43; /*0x458f4f*/
//DUPDEF               v9 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v43); /*0x458f53*/
//DUPDEF               v55[0] = 128; /*0x458f62*/
//DUPDEF               v55[1] = 128; /*0x458f66*/
//DUPDEF               ClosestObjectCell = (char *)Object::FindClosestObjectCell(v9, v55, 0, (int)v3); /*0x458f6f*/
//DUPDEF               v11 = ClosestObjectCell; /*0x458f74*/
//DUPDEF               if ( ClosestObjectCell && ClosestObjectCell != bunkerLinkedUnit ) /*0x458f7c*/
//DUPDEF               {
//DUPDEF                 v12 = *(unsigned int *)ClosestObjectCell; /*0x458f80*/
//DUPDEF                 v13 = (*((int (**)(BuildingClass *, unsigned char *, int, unsigned int))v3->vtable0 + 18))(v3, v60, 1, 0); /*0x458f8d*/
//DUPDEF                 (*(void (**)(char *, int))(v12 + 372))(v11, v13); /*0x458f93*/
//DUPDEF                 v8 = v45; /*0x458f99*/
//DUPDEF }
//DUPDEF               v8 += 2; /*0x458f9d*/
//DUPDEF               v45 = v8; /*0x458fa0*/
//DUPDEF             }
//DUPDEF             goto LABEL_25; /*0x458f22*/
//DUPDEF           }
//DUPDEF         }
//DUPDEF         break; /*0x458fa4*/
//DUPDEF       case 1u: /*0x458ea8*/
//DUPDEF         v40 = 0; /*0x458fae*/
//DUPDEF         v14 = (unsigned short *)(*((int (**)(BuildingClass *, unsigned int))v3->vtable0 + 66))(v3, 0); /*0x458fbd*/
//DUPDEF         v15 = *(unsigned int *)(*((int (**)(BuildingClass *, int *))v3->vtable0 + 110))(v3, &v53); /*0x458fca*/
//DUPDEF         while ( *v14 != 0x7FFF || v14[1] != 0x7FFF ) /*0x458fdd*/
//DUPDEF         {
//DUPDEF           IDA_LOWORD(v46) = v15 + *v14; /*0x458fee*/
//DUPDEF           IDA_HIWORD(v46) = IDA_HIWORD(v15) + v14[1]; /*0x458ff4*/
//DUPDEF           *(unsigned int *)v46 = v46; /*0x459002*/
//DUPDEF           v16 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v46); /*0x459006*/
//DUPDEF           v56[0] = 128; /*0x459015*/
//DUPDEF           v56[1] = 128; /*0x459019*/
//DUPDEF           BunkerState = (char *)Object::FindClosestObjectCell(v16, v56, 0, (int)v3); /*0x459022*/
//DUPDEF           if ( BunkerState ) /*0x459029*/
//DUPDEF           {
//DUPDEF             if ( BunkerState != bunkerLinkedUnit ) /*0x45902d*/
//DUPDEF             {
//DUPDEF               v40 = 1; /*0x459032*/
//DUPDEF               if ( (BunkerState[20] & 4) != 0 && !*((unsigned int *)BunkerState + 361) ) /*0x459044*/
//DUPDEF               {
//DUPDEF   LABEL_25:
//DUPDEF                 v3->BunkerState = 1; /*0x45904b*/
//DUPDEF                 return (char)BunkerState; /*0x45905c*/
//DUPDEF }
//DUPDEF             }
//DUPDEF           }
//DUPDEF           v14 += 2; /*0x459046*/
//DUPDEF         }
//DUPDEF         IDA_LOBYTE(BunkerState) = v40; /*0x45905d*/
//DUPDEF         if ( !v40 ) /*0x459063*/
//DUPDEF         {
//DUPDEF           _EDI = (int *)(*(int (**)(char *, unsigned char *))(bunkerLinkedUnit->u32_48)( /*0x459078*/
//DUPDEF                           bunkerLinkedUnit,
//DUPDEF                           v61);
//DUPDEF           _EAX = (int *)(*((int (**)(BuildingClass *, unsigned char *))v3->vtable0 + 18))(v3, v58); /*0x459081*/
//DUPDEF           v47 = *_EDI; /*0x459088*/
//DUPDEF           v44 = *_EAX; /*0x45908c*/
//DUPDEF           __asm { fild [esp+88h+var_6C] } /*0x459090*/
//DUPDEF           __asm
//DUPDEF           {
//DUPDEF //L-fix             fisub [esp+98h+var_70]
//DUPDEF //L-fix             fstp [esp+98h+var_90]; double
//DUPDEF //L-fix             fild dword ptr [eax+4]
//DUPDEF //L-fix             fisub dword ptr [edi+4]
//DUPDEF //L-fix             fstp [esp+98h+var_98]; double
//DUPDEF           }
//DUPDEF           Math::CalcAngle(v38, v39); /*0x4590ab*/
//DUPDEF           __asm { fsub ds:dbl_7E2820 } /*0x4590b0*/
//DUPDEF           __asm { fmul ds:dbl_7E2818 }
//DUPDEF           IDA_LOWORD(v47) = Math::RoundToInt(a2) + 0x7FFF; /*0x4590d6*/
//DUPDEF           v47 = v47; /*0x4590df*/
//DUPDEF           IDA_LOBYTE(BunkerState) = FacingClass::Update(bunkerLinkedUnit + 904, &v47); /*0x4590ea*/
//DUPDEF           v3->BunkerState = 2; /*0x4590ef*/
//DUPDEF         }
//DUPDEF         break; /*0x459100*/
//DUPDEF       case 2u: /*0x458ea8*/
//DUPDEF         IDA_LOBYTE(BunkerState) = TimerClass::Active((int)(bunkerLinkedUnit + 904)); /*0x459109*/
//DUPDEF         if ( !(unsigned char)BunkerState ) /*0x459110*/
//DUPDEF         {
//DUPDEF           v19 = ((uint16_t)(*ProgressTimer::GetValue((ProgressTimer *)(bunkerLinkedUnit + 904), &v54) >> 7) + 1) /*0x459128*/
//DUPDEF               & 0x1FE;
//DUPDEF           if ( v19 == 64 ) /*0x459130*/
//DUPDEF           {
//DUPDEF             v42 = 67; /*0x459132*/
//DUPDEF }
//DUPDEF           else if ( v19 == 448 ) /*0x459141*/
//DUPDEF           {
//DUPDEF             v42 = 70; /*0x459143*/
//DUPDEF           }
//DUPDEF           else
//DUPDEF           {
//DUPDEF             v42 = 68; /*0x459152*/
//DUPDEF             if ( v19 != 192 ) /*0x45915a*/
//DUPDEF               v42 = 69; /*0x45915c*/
//DUPDEF           }
//DUPDEF           v20 = (int *)(*((int (**)(BuildingClass *, unsigned char *))v3->vtable0 + 18))(v3, v62); /*0x45916d*/
//DUPDEF           v21 = *v20; /*0x459170*/
//DUPDEF           v22 = v20[1]; /*0x459172*/
//DUPDEF           v23 = v20[2]; /*0x459175*/
//DUPDEF           v24 = *((unsigned int *)bunkerLinkedUnit + 413); /*0x459178*/
//DUPDEF           v23 = v23; /*0x459180*/
//DUPDEF           if ( !v24 ) /*0x459184*/
//DUPDEF             WinAPI::Wrapper(-2147467261); /*0x45918b*/
//DUPDEF           (*(void (**)(unsigned int, int, int, int, int))(**((unsigned int **)bunkerLinkedUnit + 413) + 112))( /*0x4591af*/
//DUPDEF             *((unsigned int *)bunkerLinkedUnit + 413),
//DUPDEF             v42,
//DUPDEF             v21,
//DUPDEF             v22,
//DUPDEF             v23);
//DUPDEF           IDA_LOBYTE(BunkerState) = (*(int (**)(char *, unsigned int, int))(*(unsigned int *)bunkerLinkedUnit + 1348))( /*0x4591be*/
//DUPDEF                                   bunkerLinkedUnit,
//DUPDEF                                   0,
//DUPDEF                                   1072693248);
//DUPDEF           v3->BunkerState = 3; /*0x4591c4*/
//DUPDEF         }
//DUPDEF         break; /*0x4591d5*/
//DUPDEF       case 3u: /*0x458ea8*/
//DUPDEF         v25 = (Cell *)(*(int (**)(char *))(bunkerLinkedUnit->q1BC)(bunkerLinkedUnit); /*0x4591db*/
//DUPDEF         BunkerState = (char *)Cell::IsBridge(v25); /*0x4591e3*/
//DUPDEF         if ( BunkerState == (char *)v3 ) /*0x4591ea*/
//DUPDEF         {
//DUPDEF           if ( !*((unsigned int *)bunkerLinkedUnit + 413) ) /*0x4591f0*/
//DUPDEF             WinAPI::Wrapper(-2147467261); /*0x4591fd*/
//DUPDEF           IDA_LOBYTE(BunkerState) = (*(int (**)(unsigned int))(**((unsigned int **)bunkerLinkedUnit + 413) + 16))(*((unsigned int *)bunkerLinkedUnit + 413)); /*0x45920b*/
//DUPDEF           if ( !(unsigned char)BunkerState ) /*0x459210*/
//DUPDEF           {
//DUPDEF             v51 = 0x8000; /*0x459221*/
//DUPDEF             IDA_LOBYTE(BunkerState) = FacingClass::Update(bunkerLinkedUnit + 904, &v51); /*0x459228*/
//DUPDEF             v3->BunkerState = 4; /*0x45922d*/
//DUPDEF           }
//DUPDEF         }
//DUPDEF         break; /*0x45923e*/
//DUPDEF       case 4u: /*0x458ea8*/
//DUPDEF         IDA_LOBYTE(BunkerState) = TimerClass::Active((int)(bunkerLinkedUnit + 904)); /*0x459245*/
//DUPDEF         if ( !(unsigned char)BunkerState ) /*0x45924c*/
//DUPDEF         {
//DUPDEF           BuildingClass::GetHealthRatio(v3); /*0x459254*/
//DUPDEF           _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459259*/
//DUPDEF           __asm /*0x45925e*/
//DUPDEF           {
//DUPDEF             fcomp qword ptr [eax+1700h]
//DUPDEF             fnstsw ax
//DUPDEF           }
//DUPDEF           if ( (_EAX & 0x4100) != 0 ) /*0x459269*/
//DUPDEF           {
//DUPDEF             v28 = 1; /*0x459271*/
//DUPDEF             v29 = (AnimTypeClass *)&v3->Type->__pad_F70[660]; /*0x459276*/
//DUPDEF           }
//DUPDEF           else
//DUPDEF           {
//DUPDEF             v28 = 0; /*0x459283*/
//DUPDEF             v29 = (AnimTypeClass *)&v3->Type->__pad_F70[644]; /*0x459285*/
//DUPDEF           }
//DUPDEF           if ( v29 && IDA_LOBYTE(v29->vtable0) ) /*0x45928e*/
//DUPDEF             ((BuildingClass*)(v3))->PlayAnim(v26, v29, 10, v28, 0, 0); /*0x45929b*/
//DUPDEF           BuildingClass::GetHealthRatio(v3); /*0x4592a2*/
//DUPDEF           _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4592a7*/
//DUPDEF           __asm /*0x4592ad*/
//DUPDEF           {
//DUPDEF             fcomp qword ptr [ecx+1700h]
//DUPDEF             fnstsw ax
//DUPDEF           }
//DUPDEF           if ( (_AX & 0x4100) != 0 ) /*0x4592b8*/
//DUPDEF           {
//DUPDEF             v33 = 1; /*0x4592c0*/
//DUPDEF             BunkerState = &v3->Type->__pad_F70[728]; /*0x4592c5*/
//DUPDEF           }
//DUPDEF           else
//DUPDEF           {
//DUPDEF             v33 = 0; /*0x4592d2*/
//DUPDEF             BunkerState = &v3->Type->__pad_F70[712]; /*0x4592d4*/
//DUPDEF           }
//DUPDEF           if ( BunkerState && *BunkerState ) /*0x4592dd*/
//DUPDEF             IDA_LOBYTE(BunkerState) = ((BuildingClass*)(v3))->PlayAnim(v30, (AnimTypeClass *)BunkerState, 11, v33, 0, 0); /*0x4592ea*/
//DUPDEF           v3->BunkerState = 5; /*0x4592ef*/
//DUPDEF         }
//DUPDEF         break; /*0x459300*/
//DUPDEF       case 5u: /*0x458ea8*/
//DUPDEF         v3->bunkerLinkedUnit = (TechnoClass *)bunkerLinkedUnit; /*0x459301*/
//DUPDEF         v34 = *(unsigned int *)bunkerLinkedUnit; /*0x459307*/
//DUPDEF         *((unsigned int *)bunkerLinkedUnit + 185) = v3; /*0x45930f*/
//DUPDEF         *((unsigned int *)bunkerLinkedUnit + 133) = -1; /*0x459315*/
//DUPDEF         (*(void (**)(char *))(v34 + 336))(bunkerLinkedUnit); /*0x45931b*/
//DUPDEF         v35 = v3->bunkerLinkedUnit; /*0x459321*/
//DUPDEF         v3->BunkerState = 6; /*0x459327*/
//DUPDEF         (*((void (**)(TechnoClass *, int, int))v35->vtable0 + 122))(v35, 5, 1); /*0x459337*/
//DUPDEF         IDA_LOBYTE(BunkerState) = DSurface_ViewBounds.__pad_FC[324]; /*0x45933d*/
//DUPDEF         if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 576) != -1 ) /*0x459348*/
//DUPDEF         {
//DUPDEF           location = v3->location; /*0x45934a*/
//DUPDEF           v57[0] = *location; /*0x459353*/
//DUPDEF           v57[1] = location[1]; /*0x45935a*/
//DUPDEF           v57[2] = location[2]; /*0x459365*/
//DUPDEF           IDA_LOBYTE(BunkerState) = (uint8_t)StartAudioControllerAt( /*0x45936f*/
//DUPDEF                                                    *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 576),
//DUPDEF                                                    v57,
//DUPDEF                                                    0);
//DUPDEF         }
//DUPDEF         break; /*0x45936f*/
//DUPDEF       default:
//DUPDEF         return (char)BunkerState;
//DUPDEF     }
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     vtable0 = (char (**)(BuildingClass *, int, unsigned int))v3->vtable0; /*0x458e7e*/
//DUPDEF     v3->BunkerState = 0; /*0x458e85*/
//DUPDEF     IDA_LOBYTE(BunkerState) = vtable0[122](v3, 5, 0); /*0x458e8b*/
//DUPDEF   }
//DUPDEF   return (char)BunkerState; /*0x458e91*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     vtable0 = (char (**)(BuildingClass *, int, unsigned int))v3->vtable0; /*0x458e7e*/
//DUPDEF     v3->BunkerState = 0; /*0x458e85*/
//DUPDEF     IDA_LOBYTE(BunkerState) = vtable0[122](v3, 5, 0); /*0x458e8b*/
//DUPDEF   }
//DUPDEF   return (char)BunkerState; /*0x458e91*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v4 = *this; /*0x458e7e*/
//DUPDEF     *(&this->queuedMission4) = 0; /*0x458e85*/
//DUPDEF     IDA_LOBYTE(v5) = this->MissionDispatch(5, 0); /*0x458e8b*/
//DUPDEF   return (char)v5; /*0x458e91*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v3 = *this; /*0x458e7e*/
//DUPDEF     *(&this->queuedMission4) = 0; /*0x458e85*/
//DUPDEF     IDA_LOBYTE(v4) = this->MissionDispatch(5, 0); /*0x458e8b*/
//DUPDEF   return (char)v4; /*0x458e91*/
// IDA 0x424c90: set field at offset 95
// 0x424c90
//DUPDEF int AnimClass::SetField95(int v) {
//DUPDEF   ((unsigned int *)this)[2] = v; /*0x424c94*/
//DUPDEF   return v; /*0x424c9a*/
//DUPDEF }
// 0x425260
//DUPDEF void AnimClass::SetField8(int v) {
//DUPDEF   int result; // eax

//DUPDEF   IDA_BYTE2(((unsigned int *)v)[0]) = 1; /*0x425260*/
//DUPDEF   return result; /*0x425267*/
//DUPDEF }
// 0x449440
//DUPDEF int BuildingClass::GetCursorAction() { return 0; }
//DUPDEF   BuildingTypeClass *Type; // eax
//DUPDEF   int *v2; // eax
//DUPDEF   int v3; // eax
//DUPDEF   int v5; // eax
//DUPDEF   int v6; // [esp-Ch] [ebp-Ch]
//DUPDEF   int v7; // [esp-8h] [ebp-8h]
//DUPDEF   HouseClass *owner; // [esp-4h] [ebp-4h]
//DUPDEF   int v9; // [esp+4h] [ebp+4h] BYREF

//DUPDEF   Type = this->Type; /*0x449447*/
//DUPDEF   v9 = v9->q024; /*0x44944d*/
//DUPDEF   if ( ((unsigned int *)Type)[0] && ((unsigned int *)this)[0] ) /*0x44945b*/
//DUPDEF   {
//DUPDEF     owner = ((unsigned int *)this)[0]; /*0x44946e*/
//DUPDEF     v7 = (int)Type; /*0x44946f*/
//DUPDEF     v6 = ((unsigned int *)Type)[0]; /*0x449474*/
//DUPDEF     v2 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], (int16_t *)&v9); /*0x44947b*/
//DUPDEF     v3 = -((uint8_t)((CellClass*)(v2))->IsPassable(v6, v7, (int)owner) != 0); /*0x449489*/
//DUPDEF     IDA_LOBYTE(v3) = v3 & 0xF9; /*0x44948b*/
//DUPDEF     return v3 + 7; /*0x44948d*/
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v5 = -((*((uint8_t (**)(BuildingTypeClass *, int *, HouseClass *))Type->vtable1 + 42))( /*0x4494ab*/
//DUPDEF              Type,
//DUPDEF              &v9,
//DUPDEF              ((unsigned int *)this)[0]) != 0);
//DUPDEF     IDA_LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
//DUPDEF     return v5 + 7; /*0x4494af*/
//DUPDEF   }
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v5 = -((*((uint8_t (**)(BuildingTypeClass *, int *, HouseClass *))Type->vtable0 + 42))( /*0x4494ab*/
//DUPDEF              Type,
//DUPDEF              &v9,
//DUPDEF              this->owner) != 0);
//DUPDEF     IDA_LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
//DUPDEF     return v5 + 7; /*0x4494af*/
//DUPDEF   }
//DUPDEF }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v5 = -((*((uint8_t (**)(BuildingTypeClass *, int *, HouseClass *))Type->vtable0 + 42))( /*0x4494ab*/
//DUPDEF              Type,
//DUPDEF              &v9,
//DUPDEF              this->owner) != 0);
//DUPDEF     IDA_LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
//DUPDEF     return v5 + 7; /*0x4494af*/
//DUPDEF   }
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v5 = -((*(uint8_t (**)(unsigned int *, int *, unsigned int))(*v1 + 168))(v1, &v9, this->owner) != 0); /*0x4494ab*/
//DUPDEF     IDA_LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
//DUPDEF     return v5 + 7; /*0x4494af*/
//DUPDEF   else
//DUPDEF   {
//DUPDEF     v5 = -((*(uint8_t (**)(unsigned int *, int *, unsigned int))(*v1 + 168))(v1, &v9, this->owner) != 0); /*0x4494ab*/
//DUPDEF     IDA_LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
//DUPDEF     return v5 + 7; /*0x4494af*/
//DUPDEF // 0x716150
//DUPDEF bool BuildingClass::ValidatePath(void *a1, unsigned short *a2, int a3)
//DUPDEF {
//DUPDEF   unsigned short *v6; // esi
//DUPDEF   bool v7; // bl
//DUPDEF   unsigned short *v8; // eax
//DUPDEF   int *v9; // eax
//DUPDEF   bool *v10; // eax
//DUPDEF   int v11; // [esp-24h] [ebp-38h]
//DUPDEF   int v12; // [esp-14h] [ebp-28h]
//DUPDEF   char v13; // [esp+Bh] [ebp-9h]
//DUPDEF   int v14; // [esp+Ch] [ebp-8h]
//DUPDEF   int16_t v15[2]; // [esp+10h] [ebp-4h] BYREF
//DUPDEF   char v16; // [esp+18h] [ebp+4h]

//DUPDEF   if ( *(unsigned int *)a2 == g_BuildingLoadQueue_Array.DebrisTypes[1] ) /*0x716166*/
//DUPDEF     return 0; /*0x71617c*/
//DUPDEF   v6 = (unsigned short *)(*(int (**)(TechnoTypeClass *, int))(a1->parent_gap[0] + 144))(a1, 1); /*0x71618d*/
//DUPDEF   v13 = 0; /*0x716199*/
//DUPDEF   v7 = (*(int (**)(TechnoTypeClass *))(a1->parent_gap[0] + 44))(a1) == 7; /*0x71619e*/
//DUPDEF   v16 = 0; /*0x7161a3*/
//DUPDEF   while ( v6 ) /*0x7161a8*/
//DUPDEF   {
//DUPDEF     if ( *v6 == 0x7FFF && v6[1] == 0x7FFF ) /*0x7161bb*/
//DUPDEF       break; /*0x7161bb*/
//DUPDEF     v8 = v6; /*0x7161c5*/
//DUPDEF     v6 += 2; /*0x7161c7*/
//DUPDEF     IDA_LOWORD(v14) = *v8 + *a2; /*0x7161d5*/
//DUPDEF     IDA_HIWORD(v14) = a2[1] + v8[1]; /*0x7161da*/
//DUPDEF     *(unsigned int *)v15 = v14; /*0x7161e5*/
//DUPDEF     if ( v7 ) /*0x7161e9*/
//DUPDEF     {
//DUPDEF       v12 = *(unsigned int *)&a1->gapE4[1432]; /*0x7161fb*/
//DUPDEF       v9 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v15); /*0x716202*/
//DUPDEF       if ( (uint8_t)((CellClass*)(v9))->IsPassable(v12, (int)a1, a3) ) /*0x716209*/
//DUPDEF         goto LABEL_11; /*0x716210*/
//DUPDEF       v13 = 1; /*0x716212*/
//DUPDEF     }
//DUPDEF     else
//DUPDEF     {
//DUPDEF       v11 = *(unsigned int *)&a1->gapE4[1432]; /*0x71622f*/
//DUPDEF       v10 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0_raw.__pad_58[416], v15); /*0x716236*/
//DUPDEF       if ( (uint8_t)Cell::IsBuildable(v10, v11, 0, 0, -1, 0, -1, 1) ) /*0x71623d*/
//DUPDEF       {
//DUPDEF   LABEL_11:
//DUPDEF         v16 = 1; /*0x71624d*/
//DUPDEF         continue; /*0x71624d*/
//DUPDEF       }
//DUPDEF       v13 = 1; /*0x716246*/
//DUPDEF     }
//DUPDEF   }
//DUPDEF   if ( v7 && *(int *)((char *)&a1->EnterGrinderSound + 1) ) /*0x716260*/
//DUPDEF     return v16; /*0x71626a*/
//DUPDEF   else
//DUPDEF     return v13 == 0; /*0x716280*/
//DUPDEF }
// IDA 0x717890: set production slot
// 0x717890
//DUPDEF void BuildingClass::SetSlot(int a2, int a3)
//DUPDEF {
//DUPDEF   *((unsigned int *)this + a3 + 517) = a2; /*0x717898*/
//DUPDEF   return a3; /*0x71789f*/
//DUPDEF }
//DUPDEF uint32_t BuildingClass::GetField184() const { return BuildingClass_field_544; }
// 0x447210
//DUPDEF void BuildingClass::GetActionOnObject() {}
// 0x41c060
//DUPDEF bool BuildingClass::vt_entry_4E4()  { return false; }

// G42.33 ph7v2: structural tail repairs applied

// G42.33 ph8: orphan tail regions commented

} // G42.33c13 stub close (raw body preserved above; 0x459C20)

} // namespace gamemd  -- G42.33c14 (re)close: tail surplus closes were husks)