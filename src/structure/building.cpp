#include "structure/building.hpp"
#include "entity/anim.hpp"  // AnimClass::SetField95/8 pending blocks (owner-fixed 2026-09-07)
#include "house/house.hpp"
#include "structure/globals_structure.hpp"
#include "core/globals_core.hpp"
#include "type/building_type.hpp"
#include "core/reverse_marker.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"
#include "object/techno.hpp"
#include "core/coordinate.hpp"
#include "house/house.hpp"
#include "structure/infantry.hpp"
#include "type/infantry_type.hpp"
#include "misc/super_weapon.hpp"
#include "misc/rules.hpp"
#include "system/game_systems.hpp"

#include "system/cell.hpp"
#include "system/scenario.hpp"
#include <cstring>
#include "e4/e4_globals.hpp"

extern gamemd::SuperWeaponTypeClass* g_SuperWeaponTypeItems[];

// TacticalMap globals from render/globals_render.hpp

// 0x6d2140 — TacticalMap::Coord_To_Screen (thiscall: ecx=this, CoordStruct&, Point2D*)
extern gamemd::CoordStruct* Coord_To_Screen(void* pThis, const gamemd::CoordStruct& world, gamemd::Point2D* out);  // thiscall ABI, free-fn declaration

// 0x6d2790 — Cell::CreateCrater (__stdcall: int x, int y, int w, int h, char flags)
namespace Cell { extern char __stdcall CreateCrater(int x, int y, int w, int h, char flags); }

namespace DynamicVector {
    // SuperClass = gamemd::SuperClass (house.hpp fwd; unifies with Owner->SuperWeaponsAvailable)
    int GetOrGrow(gamemd::DynamicVectorClass<gamemd::SuperClass*>* vec, int index);
}

namespace gamemd {

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
AbstractClass * * BuildingClass::Construct()
{
  __int16 v6; // cx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  void *v12; // edi
  signed int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  int Vtable3; // [esp+18h] [ebp+4h]

  TechnoClass::TechnoClass((_DWORD *)this, a3); /*0x43b74b*/
  this->Type = a2; /*0x43b756*/
  this->Factory = 0; /*0x43b75c*/
  this->C4Timer = g_CurrentFrame; /*0x43b76b*/
  this->q530 = 0; /*0x43b771*/
  this->BuildingClass_field_int_534 = -1; /*0x43b777*/
  this->BuildingClass_field_int_538 = -1; /*0x43b77d*/
  this->OwnerCountryIndex = 0; /*0x43b783*/
  this->C4AppliedBy = 0; /*0x43b789*/
  this->BuildingClass_field_544 = 0; /*0x43b78f*/
  this->FirestormAnim = 0; /*0x43b795*/
  this->PsiWarnAnim = 0; /*0x43b79b*/
  this->BuildingClass_field_timer_550 = g_CurrentFrame; /*0x43b7a7*/
  this->q558 = 0; /*0x43b7ad*/
  this->RequiresDamageFires = 0; /*0x43b7b3*/
  this->FiringSWType = -1; /*0x43b7b9*/
  this->BuildingClass_field_5FC = -1; /*0x43b7bf*/
  this->Spotlight = 0; /*0x43b7c5*/
  g_CurrentFrame = g_CurrentFrame; /*0x43b7cb*/
  this->u32_60C = 0; /*0x43b7d1*/
  this->GateTimer = g_CurrentFrame; /*0x43b7d7*/
  this->q610 = 0; /*0x43b7dd*/
  this->LightSource = 0; /*0x43b7e3*/
  this->LaserFenceFrame = 0; /*0x43b7e9*/
  this->FirestormWallFrame = 0; /*0x43b7ef*/
  this->RepairProgress = 0; /*0x43b7f5*/
  this->q624 = 0; /*0x43b7fb*/
  this->q628 = g_CurrentFrame; /*0x43b807*/
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
  this->Overpowerers = &(void*)(void*)&DynamicVectorClass_InfantryClass___vftable; /*0x43b8ca*/
  this->q680 = 10; /*0x43b8d0*/
  this->q67C = 0; /*0x43b8d6*/
  this->locomotorSource = 0; /*0x43b8dc*/
  this->Audio8 = 0; /*0x43b8e2*/
  this->q690 = 1; /*0x43b8e8*/
  this->u32_691 = 0; /*0x43b8ef*/
  this->q684 = &(void*)(void*)&DynamicVectorClass_InfantryClass___vftable; /*0x43b8f5*/
  this->q698 = 10; /*0x43b8fb*/
  this->q694 = 0; /*0x43b901*/
  this->q69C = 0; /*0x43b907*/
  this->WasOnline = 0; /*0x43b90d*/
  this->q6C9 = 0; /*0x43b913*/
  this->q6CA = 0; /*0x43b919*/
  this->q6CB = 0; /*0x43b91f*/
  this->q6CC = 0; /*0x43b925*/
  g_CurrentFrame = g_CurrentFrame; /*0x43b92b*/
  this->q6D8 = 0; /*0x43b931*/
  this->q6D0 = g_CurrentFrame; /*0x43b937*/
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
  *(_DWORD *)this = &BuildingClass_Vtable; /*0x43b9fa*/
  this->vtable2 = &BuildingClass_Vtable2; /*0x43ba00*/
  this->vtable3 = &BuildingClass_Vtable3; /*0x43ba07*/
  this->vtable4 = &BuildingClass_Vtable4; /*0x43ba0e*/
  this->vtable2.GenerateUniqueID(); /*0x43ba15*/
  this->Upgrades = 0; /*0x43ba22*/
  IDA_LOBYTE(v6) = 0; /*0x43ba28*/
  this->q5F0 = 0; /*0x43ba2a*/
  this->q5F4 = 0; /*0x43ba30*/
  this->PrismTargetCoords = 0; /*0x43ba36*/
  v7 = this->Type; /*0x43ba38*/
  this->q70C = 0; /*0x43ba3e*/
  this->u32_710 = 0; /*0x43ba43*/
  if ( v7 ) /*0x43ba46*/
  {
    IDA_HIBYTE(v6) = *(_BYTE *)(v7 + 5904); /*0x43ba48*/
    IDA_LOWORD(a3) = v6; /*0x43ba52*/
    FacingClass::Update((char *)(&this->q1600), &a3); /*0x43ba5e*/
  }
  memset((void *)(&this->cloakState2), 0, 0x54u); /*0x43ba70*/
  memset((void *)(&this->q2500), 0, 0x20u); /*0x43ba7d*/
  this->AnimStates = 0; /*0x43ba7f*/
  this->q5B4 = 0; /*0x43ba8b*/
  this->u32_5B8 = 0; /*0x43ba91*/
  this->u32_5BC = 0; /*0x43ba97*/
  this->q5C0 = 0; /*0x43ba9d*/
  this->q5C4 = 0; /*0x43baa3*/
  AudioController::Init((_DWORD *)(&this->isUncrushable6)); /*0x43baa9*/
  AudioController::Init((_DWORD *)(&this->q2AC6)); /*0x43bab4*/
  IDA_LOWORD(a3) = 0x4000; /*0x43babd*/
  FacingClass::Update((char *)(&this->q1600), &a3); /*0x43bacb*/
  this->RepairProgress = 0; /*0x43bad0*/
  if ( g_BuildingProductionState < dword_A8EB48 /*0x43bb08*/
    || (byte_A8EB4D || !dword_A8EB48)
    && dword_A8EB54 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(BuildingClass_Array + 8))(
         &BuildingClass_Array,
         dword_A8EB54 + dword_A8EB48,
         0) )
  {
    v8 = g_BuildingProductionState++; /*0x43bb15*/
    *((_DWORD *)g_BuildingClass_InstanceCount + v8) = this; /*0x43bb24*/
  }
  BuildingClass::Update((void *)this); /*0x43bb29*/
  if ( dword_B0F650 < dword_B0F648 /*0x43bb62*/
    || (byte_B0F64D || !dword_B0F648)
    && dword_B0F654 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F640 + 8))(
         &dword_B0F640,
         dword_B0F654 + dword_B0F648,
         0) )
  {
    v9 = dword_B0F650++; /*0x43bb6f*/
    *((_DWORD *)dword_B0F644 + v9) = this; /*0x43bb7e*/
  }
  if ( g_BuildingTypeInstanceCount < dword_B0F5C0 /*0x43bbb5*/
    || (byte_B0F5C5 || !dword_B0F5C0)
    && dword_B0F5CC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingInstanceCount + 8))(
         &g_BuildingInstanceCount,
         dword_B0F5CC + dword_B0F5C0,
         0) )
  {
    v10 = g_BuildingTypeInstanceCount++; /*0x43bbc2*/
    *((_DWORD *)g_BuildingClassPoolManager + v10) = this; /*0x43bbd1*/
  }
  Vtable3 = this->vtable2.GetVtable3(); /*0x43bbe0*/
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
        v14 = (_DWORD *)((char *)v12 + 8 * v13++); /*0x43bc3e*/
        *((_DWORD *)v12 + 2 * v13 - 2) = *v14; /*0x43bc44*/
        *((_DWORD *)v12 + 2 * v13 - 1) = v14[1]; /*0x43bc4b*/
      }
      while ( v13 < (int)g_BuildingLoadQueue_Count ); /*0x43bc57*/
    }
    RA2_OPDEL(v12); /*0x43bc60*/
    v12 = v12; /*0x43bc6f*/
    g_BuildingLoadQueue_Capacity += v11; /*0x43bc75*/
    g_BuildingLoadQueue_Active = 0; /*0x43bc7a*/
  LABEL_29:
    *((_DWORD *)v12 + 2 * g_BuildingLoadQueue_Count) = Vtable3; /*0x43bc80*/
    *((_DWORD *)v12 + 2 * g_BuildingLoadQueue_Count + 1) = this; /*0x43bc9e*/
    g_BuildingLoadQueue_Dirty = 0; /*0x43bca8*/
    ++g_BuildingLoadQueue_Count; /*0x43bcae*/
  }
  LABEL_30:
  v15 = this->Type; /*0x43bcb3*/
  if ( v15 ) /*0x43bcbb*/
  {
    v16 = *(_DWORD *)(v15 + 6016); /*0x43bcbd*/
    if ( v16 < 1 ) /*0x43bcc6*/
      v16 = 1; /*0x43bcc8*/
    RadioClass::SetLinkCount(v16); /*0x43bcd0*/
    return this; /*0x43bcd5*/
  }
  else
  {
    RadioClass::SetLinkCount(1); /*0x43bce2*/
    return this; /*0x43bce7*/
  }
}
// 0x43bcf0
int BuildingClass::Dtor()
{
  void **v2; // edi
  int v3; // edx
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  void **v8; // edi
  int v9; // ebx
  int v10; // eax
  char v11; // cl
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  size_t v20; // eax
  int v21; // eax
  signed int v22; // ecx
  size_t i; // eax
  _DWORD *v24; // eax
  int v25; // edi
  int v26; // ebx
  void *v27; // eax
  void *v28; // eax
  void **Vtable3; // [esp+18h] [ebp-4h] BYREF

  v2 = &this->q6B4; /*0x43bcf7*/
  *this = &BuildingClass_Vtable; /*0x43bcfd*/
  this->vtable2 = &BuildingClass_Vtable2; /*0x43bd05*/
  this->vtable3 = &BuildingClass_Vtable3; /*0x43bd0c*/
  this->vtable4 = &BuildingClass_Vtable4; /*0x43bd13*/
  Mixer::ReleaseChannel((int **)&this->lineTrailer9); /*0x43bd1a*/
  Mixer::ReleaseChannel((int **)&this->lineTrailer4); /*0x43bd27*/
  AudioFileClass::Release(v2); /*0x43bd2e*/
  AudioFileClass::Release(&this->lineTrailer4); /*0x43bd35*/
  v4 = (int)*(&this->isInLogic9); /*0x43bd3a*/
  if ( v4 ) /*0x43bd44*/
  {
    MapClass::ScrollOnce(v4, 0); /*0x43bd47*/
    v5 = (int)*(&this->isInLogic9); /*0x43bd4c*/
    if ( v5 ) /*0x43bd54*/
      (*(void (__thiscall **)(int, int))(v5->needsSave)(v5, 1); /*0x43bd5a*/
    *(&this->isInLogic9) = 0; /*0x43bd5d*/
  }
  IDA_LOBYTE(v3) = 1; /*0x43bd63*/
  AbstractClass::AnnounceExpiredPointer(this, v3); /*0x43bd67*/
  BuildingClass::Sell((void *)this); /*0x43bd6e*/
  Vtable3 = this; /*0x43bd83*/
  v6 = (*(int (__thiscall **)(int *, void ***))(BuildingClass_Array + 16))(&BuildingClass_Array, &Vtable3); /*0x43bd87*/
  if ( v6 != -1 ) /*0x43bd8d*/
    Vector::RemoveAt(&BuildingClass_Array, v6); /*0x43bd95*/
  Vtable3 = this; /*0x43bdaa*/
  v7 = (*(int (__thiscall **)(int *, void ***))(dword_8B41E0 + 16))(&dword_8B41E0, &Vtable3); /*0x43bdae*/
  if ( v7 != -1 ) /*0x43bdb4*/
    Vector::RemoveAt(&dword_8B41E0, v7); /*0x43bdbc*/
  BuildingClass::ClearAnims((int *)this, -2); /*0x43bdc5*/
  BuildingTypeClass::IsPowered((int)*(&this->needsRedraw8)); /*0x43bdd0*/
  v8 = &this->DamageFireAnims; /*0x43bdd5*/
  v9 = 8; /*0x43bddb*/
  do /*0x43bdf4*/
  {
    if ( *v8 ) /*0x43bde0*/
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)this->q9A8)(*v8); /*0x43bde8*/
      *v8 = 0; /*0x43bdee*/
    }
    ++v8; /*0x43bdf0*/
    --v9; /*0x43bdf3*/
  }
  while ( v9 ); /*0x43bdf4*/
  if ( g_WTFMode ) /*0x43bdfd*/
  {
    v10 = (int)*(&this->needsRedraw8); /*0x43bdff*/
    if ( v10 ) /*0x43be07*/
    {
      if ( *(_BYTE *)(v10 + 5831) ) /*0x43be09*/
      {
        v11 = this->CloakRadius; /*0x43be13*/
        this->HasCloakingData = -1; /*0x43be19*/
        if ( !v11 ) /*0x43be22*/
          this->CloakRadius = v10->u32_1707; /*0x43be2a*/
        this->needsRedraw = 1; /*0x43be34*/
        this->CloakRadius = 1; /*0x43be3b*/
        BuildingClass::CleanupOccupation((void *)this); /*0x43be42*/
      }
    }
  }
  v12 = *((_DWORD *)*(&this->needsRedraw8) + 1468); /*0x43be50*/
  if ( (v12 == -1 /*0x43bee8*/
     || (v13 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + v12) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((_DWORD *)*(&this->attachedTag5) + 5460, *(_DWORD *)(v13 + 3576)))
    && *((_DWORD *)*(&this->needsRedraw8) + 1468) != -1
    || ((v14 = *((_DWORD *)*(&this->needsRedraw8) + 1469), v14 == -1)
     || (v15 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + v14) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((_DWORD *)*(&this->attachedTag5) + 5460, *(_DWORD *)(v15 + 3576)))
    && *((_DWORD *)*(&this->needsRedraw8) + 1469) != -1 )
  {
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((int)*(&this->attachedTag5)); /*0x43bef0*/
  }
  if ( g_WTFMode ) /*0x43befc*/
  {
    if ( *(&this->vtable37) != *(&this->hasParachute7) ) /*0x43bf09*/
      *((_BYTE *)*(&this->attachedTag5) + 22392) = 1; /*0x43bf11*/
    if ( g_WTFMode && *(&this->needsRedraw8) ) /*0x43bf21*/
    {
      v16 = *(&this->attachedTag5); /*0x43bf29*/
      if ( v16 ) /*0x43bf31*/
        HouseClass::DecrementUnitCount(v16, this); /*0x43bf34*/
      BuildingClass::Sell((void *)this); /*0x43bf3b*/
    }
  }
  v17 = (int)*(&this->needsRedraw9); /*0x43bf40*/
  if ( v17 ) /*0x43bf48*/
    (*(void (__thiscall **)(int, int))(v17->needsSave)(v17, 1); /*0x43bf4e*/
  *(&this->needsRedraw9) = 0; /*0x43bf51*/
  Vtable3 = this; /*0x43bf67*/
  v18 = (*(int (__thiscall **)(int *, void ***))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &Vtable3); /*0x43bf6b*/
  if ( v18 != -1 ) /*0x43bf70*/
    DynamicVector::RemoveItem(&g_BuildingInstanceCount, v18); /*0x43bf78*/
  Vtable3 = this; /*0x43bf8d*/
  v19 = (*(int (__thiscall **)(int *, void ***))(dword_B0F640 + 16))(&dword_B0F640, &Vtable3); /*0x43bf91*/
  if ( v19 != -1 ) /*0x43bf96*/
    DynamicVector::RemoveItem(&dword_B0F640, v19); /*0x43bf9e*/
  Vtable3 = (void **)AbstractClass::GetVtable3((int)(this + 1)); /*0x43bfac*/
  v20 = BuildingTypeClass::Dequeue((char **)&g_BuildingLoadQueue_Array, (int *)&Vtable3); /*0x43bfba*/
  if ( v20 ) /*0x43bfc1*/
  {
    v21 = (int)(v20 - (_DWORD)g_BuildingLoadQueue_Array) >> 3; /*0x43bfc9*/
    if ( v21 != -1 ) /*0x43bfce*/
    {
      v22 = v21 + 1; /*0x43bfd0*/
      for ( i = g_BuildingLoadQueue_Count; v22 < (int)g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count ) /*0x43bfda*/
      {
        v24 = (_DWORD *)((char *)g_BuildingLoadQueue_Array + 8 * v22++); /*0x43bfe2*/
        *(v24 - 2) = *v24; /*0x43bfe8*/
        *(v24 - 1) = v24[1]; /*0x43bfee*/
      }
      g_BuildingLoadQueue_Count = i - 1; /*0x43c003*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0; /*0x43c008*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0; /*0x43c018*/
      g_BuildingLoadQueue_Active = 0; /*0x43c01c*/
    }
  }
  *(&this->needsRedraw8) = 0; /*0x43c022*/
  this->isAliveFlag = 0; /*0x43c02e*/
  v25 = (int)*(&this->q0A43); /*0x43c03a*/
  (*((void (__thiscall **)(void **))*(&this->q0A41) + 3))(&this->q0A41); /*0x43c03d*/
  (*((void (__thiscall **)(void **, int, _DWORD))*(&this->q0A41) + 2))(&this->Overpowerers, v25, 0); /*0x43c048*/
  v26 = (int)*(&this->q0A49); /*0x43c051*/
  (*((void (__thiscall **)(void **))*(&this->q0A47) + 3))(&this->q0A47); /*0x43c05f*/
  (*((void (__thiscall **)(void **, int, _DWORD))*(&this->q0A47) + 2))(&this->q684, v26, 0); /*0x43c069*/
  v27 = *(&this->q0A48); /*0x43c06c*/
  *(&this->q0A47) = &(void*)(void*)&VectorClass_InfantryClass___vftable; /*0x43c073*/
  if ( v27 && this->u32_691 ) /*0x43c07b*/
  {
    RA2_OPDEL(v27); /*0x43c083*/
    *(&this->q0A48) = 0; /*0x43c08b*/
  }
  this->u32_691 = 0; /*0x43c08e*/
  *(&this->q0A49) = 0; /*0x43c092*/
  v28 = *(&this->q0A42); /*0x43c095*/
  *(&this->q0A41) = &(void*)(void*)&VectorClass_InfantryClass___vftable; /*0x43c098*/
  if ( v28 && this->q679 ) /*0x43c0a3*/
  {
    RA2_OPDEL(v28); /*0x43c0ab*/
    *(&this->q0A42) = 0; /*0x43c0b3*/
  }
  this->q679 = 0; /*0x43c0b8*/
  *(&this->q0A43) = 0; /*0x43c0bc*/
  return TechnoClass::DTOR((int)this); /*0x43c0c4*/
}
// 0x459f20
int BuildingClass::ScalarDtor()
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingClass::Dtor((void **)this); /*0x459f23*/
  if ( (v3 & 1) != 0 ) /*0x459f2d*/
    RA2_OPDEL(this); /*0x459f30*/
  return (int)this; /*0x459f3a*/
}
// 0x459f20
    int __thiscall BuildingClass::ScalarDtor(void *(void**)this)
    {
      char v3; // [esp+8h] [ebp+4h]

      BuildingClass::Dtor((void **)this); /*0x459f23*/
      if ( (v3 & 1) != 0 ) /*0x459f2d*/
        RA2_OPDEL(this); /*0x459f30*/
      return (int)this; /*0x459f3a*/
    }
/* ASM:
push    esi
mov     esi, ecx
call    BuildingClass__Dtor
test    [esp+4+arg_0], 1
jz      short loc_459F38
push    esi             ; Block
call    ??3_YAXPAX_Z
add     esp, 4

loc_459F38:                             ; CODE XREF: BuildingClass__ScalarDtor+D↑j
mov     eax, esi
pop     esi
retn    4
*/
}

// Inherited from TechnoClass::Activate (IDA 0x70fbe0) — BuildingClass does not override
int BuildingClass::Activate()
{
    WasOnline = true;
    StuffEnabled = true;
    return 0;

// IDA 0x452480: deactivate building power
// 0x452480
BuildingTypeClass * * BuildingClass::Deactivate()
{
  int v2; // ecx
  _BYTE *v3; // eax
  char v4; // cl
  int v5; // esi
  _BYTE **v6; // ebx

  v2 = this->LightSource; /*0x452485*/
  this->StuffEnabled = 0; /*0x45248b*/
  if ( v2 ) /*0x452494*/
    MapClass::ScrollOnce(v2, 0); /*0x452498*/
  v3 = *(_BYTE **)(&this->q20C2); /*0x45249d*/
  if ( v3[5831] ) /*0x4524a3*/
  {
    v4 = this->CloakRadius; /*0x4524ad*/
    this->HasCloakingData = -1; /*0x4524b3*/
    if ( !v4 ) /*0x4524bc*/
      this->CloakRadius = v3[5895]; /*0x4524c4*/
    this->needsRedraw = 1; /*0x4524ca*/
  }
  if ( v3[3281] && this->isGeneratingGap ) /*0x4524db*/
    (*(void (__thiscall **)(int))(*(_DWORD *)&this->q1A08))(this); /*0x4524e9*/
  if ( this->Type->LaserFencePost ) /*0x4524f5*/
    BuildingClass::RepairPlacement((_BYTE *)this, 0); /*0x452503*/
  v5 = 0; /*0x452508*/
  v6 = (_BYTE **)(&this->cloakState2); /*0x45250a*/
  do /*0x452538*/
  {
    if ( *(_BYTE *)(this->Type + v5 + 3980) ) /*0x452516*/
    {
      if ( *v6 ) /*0x452521*/
        BuildingClass::SetField8(*v6); /*0x452527*/
    }
    v5 += 68; /*0x45252c*/
    ++v6; /*0x45252f*/
  }
  while ( v5 < 1428 ); /*0x452538*/
}
// 0x459e80
void BuildingClass::Destroyed(ObjectClass* killer)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x459e86*/
    return -2147467261; /*0x459e88*/
  *v2 = 237448646; /*0x459e96*/
  v2[1] = 298949647; /*0x459e9e*/
  v2[2] = -1610610249; /*0x459ea7*/
  v2[3] = -777003740; /*0x459eb0*/
  return 0; /*0x459e8d*/
}
// 0x459e80
    int __thiscall BuildingClass::Destroyed(void *(void**)this)
    {
      _DWORD *v2; // [esp+8h] [ebp+8h]

      if ( !v2 ) /*0x459e86*/
        return -2147467261; /*0x459e88*/
      *v2 = 237448646; /*0x459e96*/
      v2[1] = 298949647; /*0x459e9e*/
      v2[2] = -1610610249; /*0x459ea7*/
      v2[3] = -777003740; /*0x459eb0*/
      return 0; /*0x459e8d*/
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
  _DWORD *v1; // ebx
  _WORD *v2; // ebp
  _DWORD *v3; // eax
  __int16 v5; // dx
  __int16 *v6; // esi
  _DWORD *v7; // edi
  int *PlacementRectBuildingClass; // esi
  int *StartCoordsHouse; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int *v17; // eax
  void *v18; // eax
  char result; // al
  _DWORD *v20; // eax
  int v21; // edx
  int v23; // [esp+14h] [ebp-3Ch]
  int v24; // [esp+18h] [ebp-38h] BYREF
  int v25; // [esp+1Ch] [ebp-34h]
  _DWORD v26[2]; // [esp+20h] [ebp-30h] BYREF
  char v27[4]; // [esp+28h] [ebp-28h] BYREF
  char v28[4]; // [esp+2Ch] [ebp-24h] BYREF
  int v29[4]; // [esp+30h] [ebp-20h] BYREF
  _DWORD v30[4]; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x441f65*/
  v26[0] = this; /*0x441f79*/
  if ( (unsigned __int8)BuildingClass::GetPlacementCoords(v28, v27) ) /*0x441f7d*/
  {
    v2 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v1 + 264))(v1, 0); /*0x441f9a*/
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 172))(v1, v29); /*0x441fa1*/
    IDA_LOWORD(v23) = *v3 / 256; /*0x441fb7*/
    IDA_HIWORD(v23) = v3[1] / 256; /*0x441fcb*/
    v23 = v23; /*0x441fd4*/
    while ( *v2 != 0x7FFF || v2[1] != 0x7FFF ) /*0x441fe6*/
    {
      v2 = v2; /*0x441fe8*/
      v2 += 2; /*0x441fea*/
      v5 = IDA_HIWORD(v23) + v2[1]; /*0x441ff9*/
      IDA_LOWORD(v23) = v23 + *v2; /*0x441ffe*/
      IDA_HIWORD(v23) = v5; /*0x442007*/
      v24 = v23; /*0x442016*/
      v6 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24); /*0x44201f*/
      BuildingClass::CreatePlacementCrater(v6); /*0x442023*/
      *((_DWORD *)v6 + 17) = 239; /*0x44202c*/
      *((_DWORD *)v6 + 16) = 0; /*0x442033*/
      House::AnnounceUpgrade((int)v6, -1); /*0x44203a*/
      Cell::SetRadar((int *)&MapClass_Instance, v6 + 18); /*0x442048*/
      Radar::Update(&MapClass_Instance, v6 + 18); /*0x442053*/
      AbstractClass::ClearTargetToMeClearManagerTarget(v6); /*0x44205a*/
    }
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23); /*0x442077*/
    v7[16] = v1[328]; /*0x442082*/
    PlacementRectBuildingClass = BuildingClass::GetPlacementRect((int)v7, v29); /*0x442091*/
    StartCoordsHouse = House::GetStartCoords((int)v7, v30); /*0x442093*/
    if ( StartCoordsHouse[2] <= 0 || StartCoordsHouse[3] <= 0 ) /*0x4420a8*/
    {
      v10 = *PlacementRectBuildingClass; /*0x44212e*/
      v12 = PlacementRectBuildingClass[1]; /*0x442130*/
      v16 = PlacementRectBuildingClass[2]; /*0x442133*/
      v14 = PlacementRectBuildingClass[3]; /*0x442136*/
    }
    else
    {
      v23 = PlacementRectBuildingClass[2]; /*0x4420b3*/
      if ( v23 <= 0 || (v25 = PlacementRectBuildingClass[3], v25 <= 0) ) /*0x4420c2*/
      {
        v10 = *StartCoordsHouse; /*0x442121*/
        v12 = StartCoordsHouse[1]; /*0x442123*/
        v16 = StartCoordsHouse[2]; /*0x442126*/
        v14 = StartCoordsHouse[3]; /*0x442129*/
      }
      else
      {
        v10 = *StartCoordsHouse; /*0x4420c4*/
        v11 = *PlacementRectBuildingClass; /*0x4420c6*/
        v12 = StartCoordsHouse[1]; /*0x4420c8*/
        v13 = StartCoordsHouse[2]; /*0x4420cb*/
        v14 = StartCoordsHouse[3]; /*0x4420ce*/
        if ( v10 > *PlacementRectBuildingClass ) /*0x4420d3*/
        {
          v13 += v10 - v11; /*0x4420d7*/
          v10 = *PlacementRectBuildingClass; /*0x4420d9*/
        }
        v15 = PlacementRectBuildingClass[1]; /*0x4420db*/
        v24 = v15; /*0x4420e0*/
        if ( v12 > v15 ) /*0x4420e4*/
        {
          v14 += v12 - v15; /*0x4420e8*/
          v12 = v15; /*0x4420ea*/
        }
        if ( v10 + v13 < v11 + v23 ) /*0x4420f7*/
          v13 = v11 - v10 + v23 + 1; /*0x4420ff*/
        if ( v14 + v12 < v25 + v24 ) /*0x442112*/
          v14 = v25 + v24 - v12 + 1; /*0x442117*/
        v1 = (_DWORD *)v26[0]; /*0x442119*/
        v16 = v13; /*0x44211d*/
      }
    }
    v26[0] = v10 - DSurface_ViewBounds; /*0x442150*/
    v26[1] = v12 - g_Map_VisibleRect; /*0x44215a*/
    v17 = Rect::Construct(v30, v26, v16, v14); /*0x44215e*/
    Cell::CreateCrater(*v17, v17[1], v17[2], v17[3], 0); /*0x442184*/
    v18 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23); /*0x442193*/
    Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v18); /*0x44219f*/
  }
  result = *(_BYTE *)(v1[328] + 5991); /*0x4421aa*/
  if ( result ) /*0x4421b2*/
  {
    v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 172))(v1, v29); /*0x4421bd*/
    IDA_LOWORD(v23) = *v20 / 256; /*0x4421d3*/
    v21 = v1[328]; /*0x4421e4*/
    IDA_HIWORD(v23) = v20[1] / 256; /*0x4421ed*/
    if ( v21->CrateBeneathIsMoney ) /*0x4421f2*/
      return BuildingClass::SearchPlacement(&MapClass_Instance, v23, 0); /*0x442208*/
    else
      return BuildingClass::SearchPlacement(&MapClass_Instance, v23, 20); /*0x442221*/
  }
  return result; /*0x44220d*/
}
// 0x43eeb0
void BuildingClass::Cleanup()
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  char v5[64]; // [esp+8h] [ebp-40h] BYREF

  if ( a2 != *(&this->isInLogic3) && !*(_BYTE *)(*(&this->needsRedraw8) + 5829) ) /*0x43eecd*/
  {
    BuildingClass::ClearAnims(this, 9); /*0x43eedf*/
    if ( a2 != -1 ) /*0x43eee7*/
    {
      strcpy(v5, (const char *)(*(&this->needsRedraw8) + 504)); /*0x43ef17*/
      v3 = strlen(asc_818D7C) + 1; /*0x43ef38*/
      qmemcpy(&v5[strlen(v5)], asc_818D7C, v3); /*0x43ef45*/
      v4 = strlen(v5); /*0x43ef5f*/
      v5[v4] = a2 + 66; /*0x43ef62*/
      v5[v4 + 1] = 0; /*0x43ef66*/
      BuildingClass::PlayAnim(this, v3, v5, 9, 0, 0, 0); /*0x43ef72*/
      *(&this->isInLogic3) = a2; /*0x43ef78*/
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
  _DWORD *v7; // [esp+38h] [ebp+4h]
  int v8; // [esp+3Ch] [ebp+8h]
  int v9; // [esp+40h] [ebp+Ch] BYREF

  SizeMax = IPersistStream::GetSizeMax((int)v7, v8, v9); /*0x4541a8*/
  if ( SizeMax < 0 ) /*0x4541ac*/
    return SizeMax; /*0x4541ac*/
  v2 = *(_DWORD *)v8; /*0x4541b8*/
  v9 = v7[415]; /*0x4541c4*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v2 + 16))(v8, &v9, 4, 0); /*0x4541c8*/
  if ( result < 0 ) /*0x4541cd*/
    return result; /*0x4541cd*/
  v4 = 0; /*0x4541d3*/
  if ( v9 <= 0 ) /*0x4541d7*/
  {
  LABEL_6:
    v5 = *(_DWORD *)v8; /*0x4541fa*/
    v9 = v7[421]; /*0x45420c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v8, &v9, 4, 0); /*0x454210*/
    if ( result < 0 ) /*0x454215*/
      return result; /*0x454215*/
    v6 = 0; /*0x45421b*/
    if ( v9 > 0 ) /*0x45421f*/
    {
      while ( 1 ) /*0x454232*/
      {
        result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, v7[418] + 4 * v6, 4, 0); /*0x454232*/
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
    result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, v7[412] + 4 * v4, 4, 0); /*0x4541ea*/
    if ( result < 0 ) /*0x4541ef*/
      return result; /*0x454244*/
    if ( ++v4 >= v9 ) /*0x4541f8*/
      goto LABEL_6; /*0x4541f8*/
  }
}
// 0x480630
AbstractClass * * BuildingClass::ValidatePlacement() {
  int *v2; // edi
  int v3; // eax
  void **v4; // esi
  int *StartCoords; // edi
  int *PlacementRect; // eax
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int *v11; // edi
  int v12; // eax
  char v13; // bl
  int v14; // ecx
  _DWORD *v15; // eax
  int *v16; // eax
  void **v17; // edi
  void *v18; // eax
  _DWORD *v19; // ebp
  int v20; // eax
  __int16 v21; // dx
  char v23; // al
  void *v24; // ecx
  char v25; // al
  char v26; // bl
  char v27; // al
  char v28; // al
  unsigned int i; // esi
  int v30; // eax
  __int16 v31; // dx
  _BYTE *v32; // eax
  int v33; // [esp-Ch] [ebp-E8h]
  _DWORD *v34; // [esp-8h] [ebp-E4h]
  int v35; // [esp-8h] [ebp-E4h]
  int *v36; // [esp-4h] [ebp-E0h]
  __int16 *v37; // [esp-4h] [ebp-E0h]
  unsigned int v38; // [esp+10h] [ebp-CCh] BYREF
  void *v39; // [esp+14h] [ebp-C8h] BYREF
  char *v40; // [esp+18h] [ebp-C4h]
  unsigned int v41; // [esp+1Ch] [ebp-C0h]
  void *v42; // [esp+20h] [ebp-BCh]
  int v43; // [esp+24h] [ebp-B8h] BYREF
  int v44; // [esp+28h] [ebp-B4h] BYREF
  _DWORD v48[2]; // [esp+38h] [ebp-A4h] BYREF
  int v49; // [esp+40h] [ebp-9Ch] BYREF
  char v50[8]; // [esp+44h] [ebp-98h] BYREF
  int v51; // [esp+4Ch] [ebp-90h]
  int v53[4]; // [esp+5Ch] [ebp-80h] BYREF
  char v54[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v55[4]; // [esp+7Ch] [ebp-60h] BYREF
  int v56[4]; // [esp+8Ch] [ebp-50h] BYREF
  int v57[4]; // [esp+9Ch] [ebp-40h] BYREF
  int v58[4]; // [esp+ACh] [ebp-30h] BYREF
  int v59[4]; // [esp+BCh] [ebp-20h] BYREF
  int v60[4]; // [esp+CCh] [ebp-10h] BYREF

  v2 = (int *)&unk_81CC70; /*0x48063a*/
  v40 = (char *)&unk_81CC70; /*0x480643*/
  while ( 1 ) /*0x48064d*/
  {
    v3 = *v2; /*0x48064d*/
    if ( (unsigned int)*v2 < 8 ) /*0x480652*/
    {
      v43 = (int)this->ptr_24; /*0x48065e*/
      v44 = *CellStruct::Add(&v43, &v49, (_WORD *)(4 * (v3 & 7) + 9041544)); /*0x480684*/
      v4 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v44); /*0x48068d*/
    }
    else
    {
      v4 = this; /*0x480654*/
    }
    if ( !a2 || *v2 != -1 ) /*0x48069d*/
    {
      StartCoords = House::GetStartCoords((int)v4, v55); /*0x4806ab*/
      PlacementRect = BuildingClass::GetPlacementRect((int)v4, v53); /*0x4806b4*/
      if ( StartCoords[2] > 0 && StartCoords[3] > 0 && PlacementRect[2] > 0 && PlacementRect[3] > 0 ) /*0x4806d3*/
      {
        v7 = StartCoords[1]; /*0x4806d9*/
        if ( *StartCoords > *PlacementRect ) /*0x4806e4*/
          v51 = *PlacementRect; /*0x4806e8*/
        v8 = PlacementRect[1]; /*0x4806ee*/
        if ( v7 > v8 ) /*0x4806f3*/
          v8 = v8; /*0x4806f7*/
      }
    }
    v36 = BuildingClass::GetPlacementRect((int)v4, v59); /*0x480713*/
    v34 = House::GetStartCoords((int)v4, v57); /*0x48071c*/
    v9 = (_DWORD *)CellClass::GetScreenRect(v54); /*0x480724*/
    v10 = Rect::Union(v56, v9, v34); /*0x480732*/
    v11 = Rect::Union(v58, v10, v36); /*0x480745*/
    v48[1] = g_Map_VisibleRect; /*0x480753*/
    v12 = *v11; /*0x480757*/
    v13 = 0; /*0x480759*/
    v48[0] = DSurface_ViewBounds; /*0x48075c*/
    v14 = v11[1]; /*0x480760*/
    v12 = v12; /*0x480763*/
    v14 = v14; /*0x480767*/
    v35 = v11[3]; /*0x480775*/
    v33 = v11[2]; /*0x480776*/
    v15 = (_DWORD *)Coord2D::Sub(v50, v48); /*0x480781*/
    v16 = Rect::Construct(v60, v15, v33, v35); /*0x48078e*/
    Cell::CreateCrater(*v16, v16[1], v16[2], v16[3], 0); /*0x4807b4*/
    v17 = v4 + 9; /*0x4807b9*/
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v4 + 9)); /*0x4807c2*/
    v18 = v4[17]; /*0x4807c7*/
    if ( v18 != (void *)-1 && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + (_DWORD)v18) + 680) ) /*0x4807dc*/
    {
      v38 = 0; /*0x4807ea*/
      v19 = &unk_81CC70; /*0x4807ee*/
      do /*0x48086e*/
      {
        if ( *v19 < 8u ) /*0x4807f9*/
        {
          v20 = *v19 & 7; /*0x480801*/
          v39 = *v17; /*0x480804*/
          v21 = Direction_X_Offsets[v20]; /*0x480808*/
          IDA_LOWORD(v20) = IDA_HIWORD(Direction_X_Offsets[v20]); /*0x48081a*/
          IDA_LOWORD(v42) = (_WORD)v39 + v21; /*0x48081e*/
          IDA_HIWORD(v42) = IDA_HIWORD(v39) + v20; /*0x48082d*/
          v39 = v42; /*0x480836*/
          CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v39); /*0x48083f*/
        }
        if ( (unsigned __int8)BuildingPlacement::ValidateType(v4[17], *v19) ) /*0x48084e*/
          v38 |= 1 << v13; /*0x480860*/
        ++v19; /*0x480864*/
        ++v13; /*0x480867*/
      }
      while ( v19 < &dword_81CC80 ); /*0x48086e*/
      v38 = v38; /*0x480879*/
      v23 = *((_BYTE *)v4 + 286) & 0xF0; /*0x48087d*/
      v38 = (unsigned int)v4[19]; /*0x48087f*/
      v24 = v4[17]; /*0x480883*/
      v25 = v38 | v23; /*0x480886*/
      v26 = 0; /*0x480888*/
      *((_BYTE *)v4 + 286) = v25; /*0x48088d*/
      if ( (v24 == (void *)2 || v24 == (void *)26) && (v25 == 48 || v25 == 32) ) /*0x4808a0*/
      {
        v4[17] = (void *)-1; /*0x4808a9*/
        *((_BYTE *)v4 + 286) = 0; /*0x4808ac*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x4808b3*/
        v26 = 1; /*0x4808b8*/
      }
      if ( !v4[17] ) /*0x4808bf*/
      {
        v27 = *((_BYTE *)v4 + 286); /*0x4808c6*/
        if ( v27 == 16 || v27 == 32 ) /*0x4808d2*/
        {
          v4[17] = (void *)-1; /*0x4808d8*/
          *((_BYTE *)v4 + 286) = 0; /*0x4808db*/
          v4[20] = (void *)-1; /*0x4808e2*/
          AbstractClass::AnnounceExpiredPointer(v4); /*0x4808e5*/
          v26 = 1; /*0x4808ea*/
        }
      }
      if ( v4[17] == (void *)1 && *((_BYTE *)v4 + 286) == 32 ) /*0x4808f9*/
      {
        v4[17] = (void *)-1; /*0x4808ff*/
        *((_BYTE *)v4 + 286) = 0; /*0x480902*/
        v4[20] = (void *)-1; /*0x480909*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x48090c*/
        v26 = 1; /*0x480911*/
      }
      if ( v4[17] == (void *)22 ) /*0x480917*/
      {
        v28 = *((_BYTE *)v4 + 286); /*0x480919*/
        if ( v28 == 16 || v28 == 32 ) /*0x480925*/
        {
          v4[17] = (void *)-1; /*0x48092b*/
          *((_BYTE *)v4 + 286) = 0; /*0x48092e*/
          v4[20] = (void *)-1; /*0x480935*/
          AbstractClass::AnnounceExpiredPointer(v4); /*0x480938*/
          v26 = 1; /*0x48093d*/
        }
      }
      if ( v4[17] == (void *)3 && *((_BYTE *)v4 + 286) == 16 ) /*0x48094c*/
      {
        v4[17] = (void *)-1; /*0x480952*/
        *((_BYTE *)v4 + 286) = 0; /*0x480955*/
        v4[20] = (void *)-1; /*0x48095c*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x48095f*/
        v26 = 1; /*0x480964*/
      }
      House::AnnounceUpgrade((int)v4, -1); /*0x480969*/
      if ( v4[19] != (void *)v38 ) /*0x480977*/
      {
        v37 = (__int16 *)(v4 + 9); /*0x48097f*/
        if ( v26 ) /*0x480985*/
        {
          Cell::SetRadar((int *)&MapClass_Instance, v37); /*0x480987*/
          Radar::Update(&MapClass_Instance, (__int16 *)v4 + 18); /*0x480992*/
          for ( i = 0; i < 8; ++i ) /*0x480997*/
          {
            v30 = i & 7; /*0x48099e*/
            v31 = *((_WORD *)v17 + 1) + IDA_HIWORD(Direction_X_Offsets[v30]); /*0x4809b1*/
            IDA_LOWORD(v41) = IDA_LOWORD(Direction_X_Offsets[v30]) + *(_WORD *)v17; /*0x4809bc*/
            IDA_HIWORD(v41) = v31; /*0x4809c5*/
            v38 = v41; /*0x4809d4*/
            v32 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v38); /*0x4809d8*/
            --v32[290]; /*0x4809e9*/
          }
        }
        else
        {
          CellClass::DetermineTileConnectivity(v37); /*0x4809f3*/
          Radar::Update(&MapClass_Instance, (__int16 *)v4 + 18); /*0x4809fe*/
        }
      }
    }
    v2 = (int *)(v40 + 4); /*0x480a07*/
    v40 += 4; /*0x480a10*/
    if ( v40 >= byte_81CC84 ) /*0x480a14*/
      break; /*0x480a14*/
    this = this; /*0x480649*/
  }
}
// 0x44efb0
bool BuildingClass::ValidateFoundation() { return CheckBuildability(); }
  int *v2; // eax
  int v3; // edx
  int v4; // ebp
  int *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v9; // edi
  void *v10; // eax
  int v11; // edi
  void *v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // edi
  void *v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // edi
  void *v20; // eax
  int v21; // edi
  void *v22; // eax
  int v23; // ecx
  _WORD *v24; // edi
  int v26; // ebp
  void *v27; // eax
  __int16 FoundationHeight; // ax
  _DWORD *v29; // ecx
  int v30; // ebp
  __int16 v31; // di
  __int16 v32; // di
  int v33; // ebp
  void *v34; // eax
  int v35; // edi
  void *v36; // eax
  _DWORD *v37; // ecx
  __int16 FoundationWidth; // ax
  int v39; // ecx
  int v40; // ebp
  __int16 v41; // di
  __int16 v42; // di
  int v43; // ebp
  void *v44; // eax
  int v45; // edi
  void *v46; // eax
  int v47; // ecx
  int v48; // [esp+50h] [ebp-20h] BYREF
  int v49; // [esp+54h] [ebp-1Ch]
  int v50; // [esp+58h] [ebp-18h] BYREF
  int v51; // [esp+5Ch] [ebp-14h]
  int v52[3]; // [esp+64h] [ebp-Ch] BYREF
  int *v53; // [esp+74h] [ebp+4h]
  int *v54; // [esp+78h] [ebp+8h]
  int v55; // [esp+78h] [ebp+8h]
  int v56; // [esp+78h] [ebp+8h]
  int v57; // [esp+78h] [ebp+8h]
  __int16 v58; // [esp+78h] [ebp+8h]
  int v59; // [esp+78h] [ebp+8h]
  int v60; // [esp+78h] [ebp+8h]
  int v61; // [esp+78h] [ebp+8h]
  int v62; // [esp+7Ch] [ebp+Ch] BYREF

  v2 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->suspendedMission0))(this, &v50); /*0x44efc2*/
  v3 = this->Type; /*0x44efc8*/
  v4 = *v2; /*0x44efce*/
  v54 = v54; /*0x44efd0*/
  v51 = *v2; /*0x44efd4*/
  if ( v3->GDIBarracks ) /*0x44efd8*/
  {
    IDA_LOWORD(v55) = v4 + 1; /*0x44efec*/
    IDA_HIWORD(v55) = IDA_HIWORD(v51) + 2; /*0x44eff1*/
    v48 = v55; /*0x44f004*/
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f008*/
    {
      v6 = *v54; /*0x44f011*/
      v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f025*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v6 + 428))(v54, v7, -1, -1, 0, 1) ) /*0x44f02d*/
      {
        *v53 = v48; /*0x44f042*/
        return (int)v53; /*0x44f048*/
      }
    }
  }
  if ( this->Type->NODBarracks ) /*0x44f051*/
  {
    IDA_LOWORD(v56) = v4 + 2; /*0x44f062*/
    IDA_HIWORD(v56) = IDA_HIWORD(v51) + 2; /*0x44f06e*/
    v48 = v56; /*0x44f07d*/
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f081*/
    {
      v9 = *v54; /*0x44f08a*/
      v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f09e*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v9 + 428))(v54, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
      {
        *v53 = v48; /*0x44f0bb*/
        return (int)v53; /*0x44f0c1*/
      }
    }
  }
  if ( this->Type->YuriBarracks ) /*0x44f0ca*/
  {
    IDA_LOWORD(v57) = v4 + 2; /*0x44f0dc*/
    IDA_HIWORD(v57) = IDA_HIWORD(v51) + 1; /*0x44f0e1*/
    v48 = v57; /*0x44f0f4*/
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f0f8*/
    {
      v11 = *v54; /*0x44f101*/
      v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f115*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(v54, v12, -1, -1, 0, 1) ) /*0x44f11d*/
      {
  LABEL_12:
        *v53 = v48; /*0x44f127*/
        return (int)v53; /*0x44f138*/
      }
    }
  }
  v13 = this->Type; /*0x44f13b*/
  if ( v13->Naval && v13->WeaponsFactory ) /*0x44f14f*/
  {
    v14 = (_DWORD *)(*(int (__thiscall **)(void *, int *, int *))(*(_DWORD *)&this->q0408))(this, v52, v54); /*0x44f167*/
    v58 = *v14 / 256; /*0x44f17d*/
    IDA_HIWORD(v48) = v14[1] / 256; /*0x44f1a3*/
    ++IDA_HIWORD(v48); /*0x44f1a8*/
    IDA_LOWORD(v48) = v58 + 1; /*0x44f1ae*/
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f1b3*/
    {
      v15 = *v54; /*0x44f1bc*/
      v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f1d0*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v15 + 428))(v54, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
      {
        *v53 = v48; /*0x44f1ed*/
        return (int)v53; /*0x44f1f3*/
      }
    }
    --IDA_HIWORD(v48); /*0x44f1f6*/
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f205*/
    {
      v17 = *v54; /*0x44f20e*/
      v18 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f222*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v17 + 428))(v54, v18, -1, -1, 0, 0) ) /*0x44f22a*/
      {
        *v53 = v48; /*0x44f23f*/
        return (int)v53; /*0x44f245*/
      }
    }
    ++IDA_HIWORD(v48); /*0x44f248*/
    IDA_LOWORD(v48) = v48 - 1; /*0x44f24d*/
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f25c*/
    {
      v19 = *v54; /*0x44f265*/
      v20 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f279*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v19 + 428))(v54, v20, -1, -1, 0, 0) ) /*0x44f281*/
      {
        *v53 = v48; /*0x44f296*/
        return (int)v53; /*0x44f29c*/
      }
    }
  }
  if ( v62 != g_TerrainTypeTable && LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v62) ) /*0x44f2c5*/
  {
    v21 = *v54; /*0x44f2ce*/
    v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62); /*0x44f2e2*/
    if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v21 + 428))(v54, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
    {
      *v53 = v62; /*0x44f2ff*/
      return (int)v53; /*0x44f305*/
    }
  }
  v23 = this->Type; /*0x44f308*/
  v24 = v23->Height; /*0x44f30e*/
  if ( v24 && !v23->Hospital ) /*0x44f31c*/
  {
    while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
    {
      v24 = v24; /*0x44f344*/
      v24 += 2; /*0x44f346*/
      IDA_LOWORD(v59) = v4 + *v24; /*0x44f358*/
      IDA_HIWORD(v59) = IDA_HIWORD(v51) + v24[1]; /*0x44f361*/
      v48 = v59; /*0x44f36a*/
      if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f374*/
      {
        v26 = *v54; /*0x44f37d*/
        v27 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f391*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v26 + 428))(v54, v27, -1, -1, 0, 0) ) /*0x44f399*/
          goto LABEL_36; /*0x44f3a1*/
        IDA_LOWORD(v4) = v51; /*0x44f331*/
      }
    }
    goto LABEL_53; /*0x44f33e*/
  }
  FoundationHeight = BuildingTypeClass::GetFoundationHeight(v23, 0); /*0x44f3b9*/
  v29 = (_DWORD *)this->Type; /*0x44f3be*/
  v30 = -1; /*0x44f3c4*/
  v31 = FoundationHeight; /*0x44f3c7*/
  v50 = -1; /*0x44f3c9*/
  if ( BuildingTypeClass::GetFoundationWidth(v29) >= -1 ) /*0x44f3d5*/
  {
    IDA_HIWORD(v60) = IDA_HIWORD(v51) + v31; /*0x44f3e1*/
    do /*0x44f3ef*/
    {
      v32 = v51 + v30; /*0x44f3ef*/
      IDA_LOWORD(v60) = v51 + v30; /*0x44f3f2*/
      v48 = v60; /*0x44f3fb*/
      if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f404*/
      {
        v33 = *v54; /*0x44f40d*/
        v34 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f421*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v33 + 428))(v54, v34, -1, -1, 0, 1) ) /*0x44f431*/
          goto LABEL_12; /*0x44f431*/
        v30 = v50; /*0x44f437*/
      }
      IDA_LOWORD(v49) = v32; /*0x44f43f*/
      IDA_HIWORD(v49) = IDA_HIWORD(v51) - 1; /*0x44f449*/
      v48 = v49; /*0x44f458*/
      if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f45c*/
      {
        v35 = *v54; /*0x44f465*/
        v36 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f479*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v35 + 428))(v54, v36, -1, -1, 0, 1) ) /*0x44f481*/
          goto LABEL_36; /*0x44f489*/
      }
      v37 = (_DWORD *)this->Type; /*0x44f48f*/
      v50 = ++v30; /*0x44f496*/
    }
    while ( v30 <= BuildingTypeClass::GetFoundationWidth(v37) ); /*0x44f3ef*/
  }
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((_DWORD **)&this->needsRedraw8)); /*0x44f4a7*/
  v39 = this->Type; /*0x44f4b2*/
  v40 = -1; /*0x44f4b8*/
  v41 = FoundationWidth; /*0x44f4bd*/
  v49 = -1; /*0x44f4bf*/
  if ( BuildingTypeClass::GetFoundationHeight(v39, 0) >= -1 ) /*0x44f4cb*/
  {
    IDA_LOWORD(v61) = v51 + v41; /*0x44f4d7*/
    while ( 1 ) /*0x44f4e5*/
    {
      v42 = IDA_HIWORD(v51) + v40; /*0x44f4e5*/
      IDA_HIWORD(v61) = IDA_HIWORD(v51) + v40; /*0x44f4e8*/
      v48 = v61; /*0x44f4f1*/
      if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f4fa*/
      {
        v43 = *v54; /*0x44f503*/
        v44 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f517*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v43 + 428))(v54, v44, -1, -1, 0, 1) ) /*0x44f527*/
          goto LABEL_12; /*0x44f527*/
        v40 = v49; /*0x44f52d*/
      }
      IDA_HIWORD(v50) = v42; /*0x44f535*/
      IDA_LOWORD(v50) = v51 - 1; /*0x44f53f*/
      v48 = v50; /*0x44f54e*/
      if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x44f552*/
      {
        v45 = *v54; /*0x44f55b*/
        v46 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48); /*0x44f56f*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v45 + 428))(v54, v46, -1, -1, 0, 1) ) /*0x44f577*/
          break; /*0x44f577*/
      }
      v47 = this->Type; /*0x44f585*/
      v49 = ++v40; /*0x44f58e*/
      if ( v40 > BuildingTypeClass::GetFoundationHeight(v47, 0) ) /*0x44f599*/
        goto LABEL_53; /*0x44f599*/
    }
  LABEL_36:
    *v53 = v48; /*0x44f3a3*/
    return (int)v53; /*0x44f3b4*/
  }
  LABEL_53:
  *v53 = g_TerrainTypeTable; /*0x44f59f*/
  return (int)v53; /*0x44f03f*/
/* ASM:
sub     esp, 0Ch
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esi+24h]
test    ecx, ecx
jz      short loc_6B037F
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_6B037F
mov     edi, [esi+24h]
test    edi, edi
jnz     short loc_6B0324
xor     eax, eax
jmp     short loc_6B0336
; ---------------------------------------------------------------------------

loc_6B0324:                             ; CODE XREF: BuildingClass__FindPlacementCells2+1E↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi

loc_6B0336:                             ; CODE XREF: BuildingClass__FindPlacementCells2+22↑j
mov     ecx, [eax+520h]
call    BuildingTypeClass__GetFoundationWidth
mov     ebx, [esi+24h]
mov     edi, eax
test    ebx, ebx
jnz     short loc_6B035C
xor     eax, eax
push    eax
mov     ecx, [eax+520h]
call    BuildingTypeClass__GetFoundationHeight
mov     ebx, eax
jmp     short loc_6B03CF
; ---------------------------------------------------------------------------

loc_6B035C:                             ; CODE XREF: BuildingClass__FindPlacementCells2+48↑j
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+2Ch]
sub     eax, 6
push    0
neg     eax
sbb     eax, eax
not     eax
and     eax, ebx
mov     ecx, [eax+520h]
call    BuildingTypeClass__GetFoundationHeight
mov     ebx, eax
jmp     short loc_6B03CF
; ---------------------------------------------------------------------------

loc_6B037F:                             ; CODE XREF: BuildingClass__FindPlacementCells2+D↑j
; BuildingClass__FindPlacementCells2+17↑j
mov     ecx, [esi+24h]
mov     edx, [ecx]
call    dword ptr [edx+84h]
mov     ecx, [eax+404h]
test    ecx, ecx
jz      short loc_6B03C8
mov     ecx, [esi+24h]
mov     eax, [ecx]
call    dword ptr [eax+84h]
mov     ecx, [eax+404h]
call    BuildingTypeClass__GetFoundationWidth
mov     ecx, [esi+24h]
push    0
mov     edi, eax
mov     edx, [ecx]
call    dword ptr [edx+84h]
mov     ecx, [eax+404h]
call    BuildingTypeClass__GetFoundationHeight
mov     ebx, eax
jmp     short loc_6B03CF
; ---------------------------------------------------------------------------

loc_6B03C8:                             ; CODE XREF: BuildingClass__FindPlacementCells2+92↑j
mov     edi, 1
mov     ebx, edi

loc_6B03CF:                             ; CODE XREF: BuildingClass__FindPlacementCells2+5A↑j
; BuildingClass__FindPlacementCells2+7D↑j ...
push    1
lea     eax, [esp+1Ch+arg_4]
mov     ecx, [esi+24h]
push    0
push    eax
push    0
push    0
mov     edx, [ecx]
push    0
push    1
push    ebx
push    edi
push    0
push    0
push    0
lea     eax, [esp+48h+var_C]
push    0
push    eax
call    dword ptr [edx+1B8h]
push    eax
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
push    eax
lea     ecx, [esp+48h+arg_4]
push    1
lea     edx, [esp+4Ch+var_8]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
mov     ecx, dword_A8ED54+7C864h
mov     [esp+18h+var_8], eax
mov     edx, [esp+18h+var_8+2]
cmp     ax, cx
jnz     short loc_6B0449
cmp     dx, word ptr dword_A8ED54+7C866h
jnz     short loc_6B0449
mov     eax, [esp+18h+arg_0]
pop     edi
pop     esi
pop     ebx
mov     [eax], ecx
add     esp, 0Ch
retn    8
; ---------------------------------------------------------------------------

loc_6B0449:                             ; CODE XREF: BuildingClass__FindPlacementCells2+12F↑j
; BuildingClass__FindPlacementCells2+138↑j
cmp     edi, 2
jle     short loc_6B0465
inc     eax
mov     [esp+18h+arg_6], dx
mov     word ptr [esp+18h+arg_4], ax
mov     eax, dword ptr [esp+18h+arg_4]
mov     [esp+18h+var_8], eax
mov     edx, [esp+18h+var_8+2]

loc_6B0465:                             ; CODE XREF: BuildingClass__FindPlacementCells2+14C↑j
cmp     ebx, 2
jle     short loc_6B0479
inc     edx
mov     word ptr [esp+18h+arg_4], ax
mov     [esp+18h+arg_6], dx
mov     eax, dword ptr [esp+18h+arg_4]

loc_6B0479:                             ; CODE XREF: BuildingClass__FindPlacementCells2+168↑j
mov     ecx, [esp+18h+arg_0]
pop     edi
pop     esi
pop     ebx
mov     [ecx], eax
mov     eax, ecx
add     esp, 0Ch
retn    8
*/

// IDA 0x449840: search for valid placement
// 0x56bec0
int BuildingClass::SearchPlacement()
{
  unsigned int v4; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // eax
  _BYTE *v9; // eax
  int v11; // [esp-34h] [ebp-48h]
  __int16 v12[2]; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  v4 = (__int16)a2 + (IDA_SHIWORD(a2) << 9); /*0x56bedc*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(g_Shroud_CellArray + 4 * v4)) == 0 ) /*0x56bef2*/
  {
    g_Map_GlobalCellIndex = a2; /*0x56bef4*/
    v5 = &g_CellClassArray; /*0x56befa*/
  }
  if ( v5[59] == 2 ) /*0x56bf06*/
    v11 = 5; /*0x56bf24*/
  else
    v11 = 1; /*0x56bf4f*/
  v12[0] = 0; /*0x56bf26*/
  v12[1] = 0; /*0x56bf2b*/
  a2 = *LayerClass::Pathfinding_Find( /*0x56bf77*/
          &MapClass_Instance,
          (int)v12,
          &v13,
          (__int16 *)&a2,
          v11,
          -1,
          0,
          0,
          1,
          1,
          0,
          0,
          0,
          1,
          v12,
          0,
          0);
  v6 = 0; /*0x56bf81*/
  v7 = this + 89; /*0x56bf83*/
  do /*0x56bf9d*/
  {
    if ( *v7 == g_MapSeedState ) /*0x56bf8c*/
      break; /*0x56bf8c*/
    ++v6; /*0x56bf94*/
    v7 += 4; /*0x56bf95*/
  }
  while ( v6 < 256 ); /*0x56bf9d*/
  if ( v6 == 256 || !(unsigned __int8)BuildingClass::BeginCrumblingTimer(&a2) ) /*0x56bfb5*/
    return 0; /*0x56c00c*/
  if ( a3 != 20 ) /*0x56bfc5*/
  {
    v8 = (__int16)a2 + (IDA_SHIWORD(a2) << 9); /*0x56bfd6*/
    if ( v8 >= 0x40000 || (v9 = *(_BYTE **)(g_Shroud_CellArray + 4 * v8)) == 0 ) /*0x56bfec*/
    {
      g_Map_GlobalCellIndex = a2; /*0x56bfee*/
      v9 = &g_CellClassArray; /*0x56bff4*/
    }
    v9[286] = a3; /*0x56bff9*/
  }
  return 1; /*0x56bfff*/
}
// 0x485af0
void* BuildingClass::VisualizePlacement()
{
  _BYTE *v1; // ebp
  int *PlacementRect; // esi
  _DWORD *StartCoords; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  char v8; // al
  signed int v9; // ebx
  _DWORD *NeighbourContent; // esi
  int v11; // eax
  int BridgeBitfield; // edi
  int v13; // eax
  int *v14; // ebp
  int *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  bool v21; // cc
  int v22; // ebp
  int v23; // edx
  int v24; // eax
  struct tagRECT *v25; // edi
  struct tagRECT *v26; // eax
  LONG left; // edx
  LONG v28; // ecx
  LONG v29; // ebp
  LONG top; // ebx
  LONG bottom; // edi
  LONG v32; // eax
  LONG v33; // ecx
  int *v34; // eax
  _DWORD *v35; // eax
  int *v36; // eax
  int *v37; // eax
  struct tagRECT *v38; // eax
  int *v39; // eax
  int v40; // edx
  struct tagRECT *v41; // eax
  int *v42; // eax
  int *v43; // eax
  struct tagRECT *v44; // eax
  int *v45; // eax
  int *v46; // eax
  struct tagRECT *v47; // [esp-Ch] [ebp-1C4h]
  struct tagRECT *v48; // [esp-Ch] [ebp-1C4h]
  int v49; // [esp-8h] [ebp-1C0h]
  const RECT *v50; // [esp-8h] [ebp-1C0h]
  _DWORD *v51; // [esp-8h] [ebp-1C0h]
  const RECT *v52; // [esp-8h] [ebp-1C0h]
  _DWORD *v53; // [esp-8h] [ebp-1C0h]
  int v54; // [esp-4h] [ebp-1BCh]
  struct tagRECT *v55; // [esp-4h] [ebp-1BCh]
  const RECT *v56; // [esp-4h] [ebp-1BCh]
  const RECT *v57; // [esp-4h] [ebp-1BCh]
  _DWORD *v58; // [esp-4h] [ebp-1BCh]
  const RECT *v59; // [esp-4h] [ebp-1BCh]
  const RECT *v60; // [esp-4h] [ebp-1BCh]
  _DWORD *v61; // [esp-4h] [ebp-1BCh]
  const RECT *v62; // [esp+0h] [ebp-1B8h]
  const RECT *v63; // [esp+0h] [ebp-1B8h]
  const RECT *v64; // [esp+4h] [ebp-1B4h]
  const RECT *v65; // [esp+4h] [ebp-1B4h]
  int v66; // [esp+10h] [ebp-1A8h]
  int right; // [esp+10h] [ebp-1A8h]
  signed int v68; // [esp+34h] [ebp-184h]
  int v69; // [esp+38h] [ebp-180h] BYREF
  int v70; // [esp+3Ch] [ebp-17Ch]
  int v71; // [esp+40h] [ebp-178h]
  int v72; // [esp+44h] [ebp-174h]
  int v73; // [esp+48h] [ebp-170h]
  int v74; // [esp+4Ch] [ebp-16Ch]
  int v75; // [esp+50h] [ebp-168h]
  struct tagRECT rcDst; // [esp+58h] [ebp-160h] BYREF
  int v78; // [esp+74h] [ebp-144h]
  int v79; // [esp+80h] [ebp-138h]
  _DWORD v81[2]; // [esp+88h] [ebp-130h] BYREF
  int v82; // [esp+90h] [ebp-128h] BYREF
  int v83; // [esp+98h] [ebp-120h]
  int v84; // [esp+A0h] [ebp-118h] BYREF
  LONG v85; // [esp+A8h] [ebp-110h]
  _DWORD v86[2]; // [esp+B0h] [ebp-108h] BYREF
  int v87; // [esp+B8h] [ebp-100h] BYREF
  RECT rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
  int v89[4]; // [esp+D0h] [ebp-E8h] BYREF
  RECT v90; // [esp+E0h] [ebp-D8h] BYREF
  _DWORD v91[4]; // [esp+F0h] [ebp-C8h] BYREF
  int v92; // [esp+100h] [ebp-B8h] BYREF
  int v93[4]; // [esp+108h] [ebp-B0h] BYREF
  int v94[4]; // [esp+118h] [ebp-A0h] BYREF
  int v95[4]; // [esp+128h] [ebp-90h] BYREF
  int v96[4]; // [esp+138h] [ebp-80h] BYREF
  int v97[4]; // [esp+148h] [ebp-70h] BYREF
  int v98[4]; // [esp+168h] [ebp-50h] BYREF
  int v99[4]; // [esp+178h] [ebp-40h] BYREF
  int v100[4]; // [esp+1A8h] [ebp-10h] BYREF

  v1 = this; /*0x485afa*/
  if ( !BuildingClass::CheckAdjacentCells((int)this) ) /*0x485b19*/
    return; /*0x485b19*/
  PlacementRect = BuildingClass::GetPlacementRect((int)v1, &v84); /*0x485b35*/
  StartCoords = House::GetStartCoords((int)v1, &v82); /*0x485b3a*/
  if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x485b4b*/
  {
    v7 = PlacementRect[3]; /*0x485bdb*/
  }
  else
  {
    if ( PlacementRect[2] > 0 ) /*0x485b5a*/
    {
      v75 = PlacementRect[3]; /*0x485b61*/
      if ( v75 > 0 ) /*0x485b65*/
      {
        v4 = StartCoords[1]; /*0x485b6b*/
        v5 = StartCoords[3]; /*0x485b71*/
        v6 = PlacementRect[1]; /*0x485b7e*/
        if ( v4 > v6 ) /*0x485b87*/
        {
          v5 += v4 - v6; /*0x485b8b*/
          v4 = v6; /*0x485b8d*/
        }
        if ( v5 + v4 < v75 + v6 ) /*0x485bb5*/
          v5 = v75 + v6 - v4 + 1; /*0x485bba*/
        v1 = this; /*0x485bbc*/
        v78 = v5; /*0x485bc0*/
        goto LABEL_14; /*0x485bc4*/
      }
    }
    v7 = StartCoords[3]; /*0x485bce*/
  }
  v78 = v7; /*0x485bde*/
  LABEL_14:
  BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v1 + 36)); /*0x485c7d*/
  v8 = v1[284]; /*0x485c9b*/
  *((_DWORD *)v1 + 17) = 126; /*0x485ca1*/
  if ( !v8 ) /*0x485caa*/
  {
    v9 = 0; /*0x485cd0*/
    v1[286] = (int)abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) % 3 + 48; /*0x485cd2*/
    v68 = 0; /*0x485cd8*/
    while ( 1 ) /*0x485ce4*/
    {
      NeighbourContent = Cell::GetNeighbourContent(v1, v9); /*0x485ce4*/
      v11 = NeighbourContent[17]; /*0x485ce6*/
      if ( v11 == 126 ) /*0x485cec*/
      {
        if ( *((_BYTE *)NeighbourContent + 286) < 0x30u ) /*0x485cf5*/
          goto LABEL_21; /*0x485cf5*/
      }
      else if ( v11 == -1 || !*(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->gap0[4 * v11] + 686) ) /*0x485d0d*/
      {
  LABEL_21:
        if ( *((_BYTE *)NeighbourContent + 284) ) /*0x485d1b*/
        {
          Rect::Set(&v69, 0, 0, 0, 0); /*0x486142*/
          v55 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v96); /*0x48615d*/
          House::GetStartCoords((int)NeighbourContent, v99); /*0x486161*/
          v38 = (struct tagRECT *)Rect::Union(v55, v62, v64); /*0x48616f*/
          v39 = (int *)Rect::Union(v38, v63, v65); /*0x486180*/
          v69 = *v39; /*0x486187*/
          v70 = v39[1]; /*0x48618e*/
          v71 = v39[2]; /*0x486195*/
          v40 = v39[3]; /*0x486199*/
          NeighbourContent[17] = 126; /*0x48619c*/
          v72 = v40; /*0x4861a8*/
          *((_BYTE *)NeighbourContent + 286) = 2 * *((_BYTE *)NeighbourContent + 284) /*0x4861d7*/
                                             + (abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) & 1)
                                             + 51;
          v56 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v86); /*0x4861e2*/
          v47 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v89); /*0x486201*/
          House::GetStartCoords((int)NeighbourContent, v91); /*0x486205*/
          v41 = (struct tagRECT *)Rect::Union(v47, &rcSrc1, v56); /*0x486213*/
          v42 = (int *)Rect::Union(v41, v50, v57); /*0x486224*/
          v43 = Bounds::Subtract(v42, v51, v58); /*0x48622b*/
          v69 = *v43; /*0x486239*/
          v70 = v43[1]; /*0x486240*/
          v71 = v43[2]; /*0x486247*/
          v72 = v43[3]; /*0x486250*/
          Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x486270*/
        }
        else
        {
          BridgeBitfield = CellClass::GetBridgeBitfield(NeighbourContent); /*0x485d30*/
          v13 = NeighbourContent[17]; /*0x485d32*/
          v73 = BridgeBitfield; /*0x485d38*/
          if ( v13 == -1 || BridgeBitfield <= 15 && *((unsigned __int8 *)NeighbourContent + 286) / 3 != BridgeBitfield ) /*0x485d5f*/
          {
            v14 = BuildingClass::GetPlacementRect((int)NeighbourContent, v100); /*0x485d86*/
            v15 = House::GetStartCoords((int)NeighbourContent, v95); /*0x485d92*/
            if ( v15[2] <= 0 || v15[3] <= 0 ) /*0x485da7*/
            {
              v79 = v14[2]; /*0x485e60*/
              v20 = v14[3]; /*0x485e67*/
            }
            else
            {
              v66 = v14[2]; /*0x485db2*/
              if ( v66 <= 0 || (v74 = v14[3], v74 <= 0) ) /*0x485dc5*/
              {
                v23 = v15[2]; /*0x485e43*/
                v20 = v15[3]; /*0x485e4b*/
                v79 = v23; /*0x485e4e*/
              }
              else
              {
                v16 = *v15; /*0x485dc7*/
                v17 = *v14; /*0x485dc9*/
                v18 = v15[2]; /*0x485dcc*/
                v19 = v15[1]; /*0x485dcf*/
                v20 = v15[3]; /*0x485dd2*/
                v21 = v16 <= *v14; /*0x485dd5*/
                v83 = v18; /*0x485dd7*/
                if ( !v21 ) /*0x485dde*/
                {
                  v18 += v16 - v17; /*0x485de2*/
                  v16 = v17; /*0x485de4*/
                  v83 = v18; /*0x485de6*/
                }
                v22 = v14[1]; /*0x485ded*/
                v75 = v22; /*0x485df2*/
                if ( v19 > v22 ) /*0x485df6*/
                {
                  v20 += v19 - v22; /*0x485dfa*/
                  v19 = v22; /*0x485dfc*/
                }
                if ( v16 + v18 < v17 + v66 ) /*0x485e08*/
                  v83 = v17 - v16 + v66 + 1; /*0x485e14*/
                if ( v20 + v19 < v74 + v75 ) /*0x485e2a*/
                  v20 = v74 + v75 - v19 + 1; /*0x485e2f*/
                v79 = v83; /*0x485e3a*/
              }
            }
            v20 = v20; /*0x485e6e*/
            NeighbourContent[17] = 126; /*0x485f28*/
            v24 = Random::State((_DWORD *)g_ScenarioClass_Instance + 134); /*0x485f47*/
            *((_BYTE *)NeighbourContent + 286) = 3 * v73 + abs32(v24 % 3); /*0x485f69*/
            House::AnnounceUpgrade((int)NeighbourContent, -1); /*0x485f71*/
            v81[0] = DSurface_ViewBounds; /*0x485f81*/
            v81[1] = g_Map_VisibleRect; /*0x485f8f*/
            v25 = (struct tagRECT *)House::GetStartCoords((int)NeighbourContent, v97); /*0x485fa5*/
            v26 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v98); /*0x485faa*/
            if ( v25->right <= 0 || v25->bottom <= 0 ) /*0x485fbf*/
            {
              rcDst = *v26; /*0x48607b*/
            }
            else
            {
              right = v26->right; /*0x485fca*/
              if ( right <= 0 || (v73 = v26->bottom, v73 <= 0) ) /*0x485fdd*/
              {
                rcDst = *v25; /*0x48605e*/
              }
              else
              {
                left = v25->left; /*0x485fdf*/
                v28 = v26->left; /*0x485fe1*/
                v29 = v25->right; /*0x485fe3*/
                top = v25->top; /*0x485fe6*/
                bottom = v25->bottom; /*0x485fe9*/
                v21 = left <= v26->left; /*0x485fec*/
                v85 = v29; /*0x485fee*/
                if ( !v21 ) /*0x485ff5*/
                {
                  v29 += left - v28; /*0x485ff9*/
                  left = v28; /*0x485ffb*/
                  v85 = v29; /*0x485ffd*/
                }
                v32 = v26->top; /*0x486004*/
                v74 = v32; /*0x486009*/
                if ( top > v32 ) /*0x48600d*/
                {
                  bottom += top - v32; /*0x486011*/
                  top = v32; /*0x486013*/
                }
                if ( left + v29 >= v28 + right ) /*0x48601f*/
                  v33 = v85; /*0x48602d*/
                else
                  v33 = v28 - left + right + 1; /*0x486027*/
                if ( bottom + top < v74 + v73 ) /*0x486043*/
                  bottom = v74 + v73 - top + 1; /*0x486048*/
                rcDst.left = left; /*0x48604a*/
                rcDst.top = top; /*0x48604e*/
                rcDst.right = v33; /*0x486052*/
                rcDst.bottom = bottom; /*0x486056*/
              }
            }
            v34 = (int *)Rect::Union(&rcDst, v62, v64); /*0x4860a4*/
            v54 = v34[3]; /*0x4860af*/
            v49 = v34[2]; /*0x4860b7*/
            v35 = CellStruct::Copy(v34, &v87); /*0x4860cb*/
            v36 = Coord2D::Sub(v35, &v92, v81); /*0x4860d2*/
            v37 = Rect::Construct(v94, v36, v49, v54); /*0x4860df*/
            Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x486124*/
            v9 = v68; /*0x486129*/
            v1 = this; /*0x48612d*/
          }
        }
        BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(NeighbourContent + 9)); /*0x48627e*/
      }
      v9 += 2; /*0x486283*/
      v68 = v9; /*0x486289*/
      if ( v9 >= 8 ) /*0x48628d*/
      {
        BuildingClass::CreateIdleAnim((int)v1); /*0x486295*/
        goto LABEL_62; /*0x48629a*/
      }
    }
  }
  v1[286] = 2 * v1[284] + (abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) & 1) + 51; /*0x4862c0*/
  LABEL_62:
  v59 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v86); /*0x4862c6*/
  v48 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v1, v93); /*0x4862f0*/
  House::GetStartCoords((int)v1, v91); /*0x4862fb*/
  v44 = (struct tagRECT *)Rect::Union(v48, &v90, v59); /*0x486309*/
  v45 = (int *)Rect::Union(v44, v52, v60); /*0x48631a*/
  v46 = Bounds::Subtract(v45, v53, v61); /*0x486321*/
  Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0); /*0x486366*/
  House::AnnounceUpgrade((int)v1, -1); /*0x48636f*/
}
// 0x44e3a0
bool BuildingClass::CheckOverlapWithOthers() {
  int v2; // ebp
  _WORD *v3; // esi
  _DWORD *v4; // eax
  char v6; // [esp+13h] [ebp-9h]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this->GetCellCoords_Alt(&v8); /*0x44e3b8*/
  v3 = (_WORD *)this->vt_slot_264(0); /*0x44e3cf*/
  v6 = 0; /*0x44e3d1*/
  LABEL_2:
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x44e3e3*/
  {
    IDA_LOWORD(v7) = v2 + *v3; /*0x44e3eb*/
    IDA_HIWORD(v7) = IDA_HIWORD(v2) + v3[1]; /*0x44e3f8*/
    v8 = v7; /*0x44e401*/
    v3 += 2; /*0x44e40a*/
    v4 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8) + 57); /*0x44e412*/
    if ( v4 ) /*0x44e41a*/
    {
      while ( this == v4 ) /*0x44e41e*/
      {
        v4 = (_DWORD *)v4[12]; /*0x44e420*/
        if ( !v4 ) /*0x44e425*/
          goto LABEL_2; /*0x44e425*/
      }
      v6 = 1; /*0x44e429*/
    }
  }
  return v6; /*0x44e434*/
}
// IDA 0x44e400: check footprint blocked
// 0x4578c0
bool BuildingClass::IsFootprintBlocked() {
  int result; // eax
  int *v3; // eax
  _DWORD *v4; // ecx
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // edi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // si
  _DWORD *v12; // eax
  void *ClosestObjectCell; // eax
  _DWORD *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  _DWORD v24[2]; // [esp+38h] [ebp-8h] BYREF

  if ( !TechnoClass::ShouldNotBeCloaked((float *)this) ) /*0x4578c9*/
  {
    v3 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->suspendedMission0))(this, &v22); /*0x4578e0*/
    v4 = (_DWORD *)this->Type; /*0x4578e8*/
    v23 = *v3; /*0x4578ee*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v4); /*0x4578f2*/
    v6 = this->Type; /*0x4578f7*/
    v7 = FoundationWidth; /*0x4578fd*/
    v22 = FoundationWidth; /*0x457901*/
    result = BuildingTypeClass::GetFoundationHeight(v6, 0); /*0x457905*/
    v8 = -1; /*0x45790a*/
    result = result; /*0x457910*/
    v18 = -1; /*0x457914*/
    if ( v7 < -1 ) /*0x457918*/
    {
  LABEL_13:
      IDA_LOBYTE(result) = 0; /*0x4579f3*/
      return result; /*0x4579fc*/
    }
    while ( 1 ) /*0x45791e*/
    {
      v9 = -1; /*0x45791e*/
      v17 = -1; /*0x457924*/
      if ( result >= -1 ) /*0x457928*/
        break; /*0x457928*/
  LABEL_12:
      v18 = ++v8; /*0x4579e9*/
      if ( v8 > v7 ) /*0x4579ed*/
        goto LABEL_13; /*0x4579ed*/
    }
    v10 = v23 + v8; /*0x457932*/
    while ( 1 ) /*0x45793b*/
    {
      v24[0] = 0; /*0x45793b*/
      v24[1] = 0; /*0x45793f*/
      v11 = IDA_HIWORD(v23) + v9; /*0x457944*/
      IDA_LOWORD(v15) = v10; /*0x45794e*/
      IDA_HIWORD(v15) = v11; /*0x457953*/
      v15 = v15; /*0x457963*/
      v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x457967*/
      ClosestObjectCell = (void *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45796e*/
      if ( ClosestObjectCell == this ) /*0x457975*/
      {
        IDA_LOWORD(v16) = v10; /*0x457977*/
        IDA_HIWORD(v16) = v11; /*0x45797c*/
        v16 = v16; /*0x457991*/
        v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v16); /*0x457995*/
        ClosestObjectCell = (void *)WTFMode::FindObjectByType(v14, 0); /*0x45799c*/
      }
      if ( ClosestObjectCell ) /*0x4579a3*/
      {
        if ( *((_DWORD *)ClosestObjectCell + 135) != this->owner ) /*0x4579b3*/
        {
          result = (*(int (__thiscall **)(void *))(*(_DWORD *)ClosestObjectCell + 132))(ClosestObjectCell); /*0x4579b9*/
          if ( result->qC9D ) /*0x4579bf*/
            break; /*0x4579bf*/
        }
      }
      result = result; /*0x4579cd*/
      v9 = ++v17; /*0x4579d1*/
      if ( v17 > result ) /*0x4579d8*/
      {
        v7 = v22; /*0x4579de*/
        v8 = v18; /*0x4579e2*/
        goto LABEL_12; /*0x4579e2*/
      }
    }
  }
  IDA_LOBYTE(result) = 1; /*0x457a00*/
  return result; /*0x4579f3*/
}
/* ASM:
sub     esp, 30h
push    ebx
push    ebp
push    esi
push    edi
mov     ebp, ecx
call    TechnoClass__ShouldNotBeCloaked
test    al, al
jnz     loc_4579FD
mov     eax, [ebp+0]
lea     ecx, [esp+40h+var_14]
push    ecx
mov     ecx, ebp
call    dword ptr [eax+1B8h]
mov     edx, [eax]
mov     ecx, [ebp+520h]
mov     [esp+40h+var_10], edx
call    BuildingTypeClass__GetFoundationWidth
mov     ecx, [ebp+520h]
mov     ebx, eax
push    0
mov     [esp+44h+var_14], ebx
call    BuildingTypeClass__GetFoundationHeight
or      edi, 0FFFFFFFFh
cmp     ebx, 0FFFFFFFFh
mov     [esp+40h+var_18], eax
mov     [esp+40h+var_24], edi
jl      loc_4579F3

loc_45791E:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+12D↓j
or      esi, 0FFFFFFFFh
cmp     eax, 0FFFFFFFFh
mov     [esp+40h+var_28], esi
jl      loc_4579E6
mov     eax, [esp+40h+var_10]
add     edi, eax

loc_457934:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+118↓j
mov     ecx, [esp+40h+var_10+2]
xor     eax, eax
push    eax
mov     [esp+44h+var_8], eax
mov     [esp+44h+var_4], eax
push    eax
add     esi, ecx
lea     eax, [esp+48h+var_8]
lea     ecx, [esp+48h+var_20]
mov     word ptr [esp+48h+var_30], di
mov     word ptr [esp+48h+var_30+2], si
mov     edx, [esp+48h+var_30]
push    eax
push    ecx
mov     ecx, 87F7E8h
mov     [esp+50h+var_20], edx
call    CellCoord__To_CellObj
mov     ecx, eax
call    Object__FindClosestObjectCell
cmp     eax, ebp
jnz     short loc_4579A1
mov     word ptr [esp+40h+var_2C], di
mov     word ptr [esp+40h+var_2C+2], si
mov     edx, [esp+40h+var_2C]
lea     eax, [esp+40h+var_1C]
push    0
push    eax
mov     ecx, 87F7E8h
mov     [esp+48h+var_1C], edx
call    CellCoord__To_CellObj
mov     ecx, eax
call    WTFMode__FindObjectByType

loc_4579A1:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+B5↑j
test    eax, eax
jz      short loc_4579C9
mov     ecx, [eax+21Ch]
mov     edx, [ebp+21Ch]
cmp     ecx, edx
jz      short loc_4579C9
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+84h]
mov     cl, [eax+0C9Dh]
test    cl, cl
jnz     short loc_4579FD

loc_4579C9:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+E3↑j
; BuildingClass__IsFootprintBlocked+F3↑j
mov     esi, [esp+40h+var_28]
mov     eax, [esp+40h+var_18]
inc     esi
cmp     esi, eax
mov     [esp+40h+var_28], esi
jle     loc_457934
mov     ebx, [esp+40h+var_14]
mov     edi, [esp+40h+var_24]

loc_4579E6:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+68↑j
inc     edi
cmp     edi, ebx
mov     [esp+40h+var_24], edi
jle     loc_45791E

loc_4579F3:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+58↑j
pop     edi
pop     esi
pop     ebp
xor     al, al
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_4579FD:                             ; CODE XREF: BuildingClass__IsFootprintBlocked+10↑j
; BuildingClass__IsFootprintBlocked+107↑j
pop     edi
pop     esi
pop     ebp
mov     al, 1
pop     ebx
add     esp, 30h
retn
*/
}
void BuildingClass::DamageFactoryBibCells() {
// 0x44d880
void BuildingClass::ClearFactoryBib() {}
  int v2; // eax
  int v3; // esi
  __int16 v4; // dx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // edi
  _WORD *v8; // eax
  int v9; // edx
  __int16 v10; // cx
  _WORD *v11; // edx
  __int16 v12; // bx
  __int16 v13; // bx
  __int16 v14; // cx
  int v15; // ebx
  void *v16; // eax
  int v17; // eax
  int v18; // ebx
  void *v19; // eax
  _DWORD *v20; // eax
  int v21; // edx
  int *v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  void *v26; // eax
  _DWORD *v27; // eax
  char v28; // al
  int v29; // eax
  int v30; // eax
  int v31; // edi
  void *v32; // eax
  char *MissionControl; // eax
  int v34; // esi
  char v36; // cl
  int (__thiscall **vfptr0)(void *, _DWORD *); // edx
  _WORD *v38; // eax
  __int16 v39; // cx
  int Member; // eax
  int v41; // esi
  char v42; // cl
  int v43; // ecx
  _BYTE *v44; // eax
  int v45; // eax
  int v47; // eax
  _DWORD *v48; // ebx
  int v49; // eax
  _WORD *v50; // eax
  __int16 v51; // dx
  int v52; // edi
  void *v53; // eax
  _DWORD *v54; // edi
  int v55; // eax
  int v56; // eax
  int v58; // eax
  int v59; // eax
  int (__stdcall ***Checked)(_DWORD, void *, int *); // eax
  int v61; // esi
  int v63; // ecx
  int v65; // esi
  int v67; // edx
  unsigned __int8 (__thiscall **v69)(void *); // edx
  void (__thiscall **v70)(void *); // edx
  int v71; // ecx
  void (__thiscall **v72)(void *); // eax
  int LandHeight; // [esp+34h] [ebp-5Ch]
  int v74; // [esp+34h] [ebp-5Ch]
  LPVOID *p_ppv; // [esp+3Ch] [ebp-54h]
  int v76; // [esp+40h] [ebp-50h]
  char v77; // [esp+52h] [ebp-3Eh]
  bool v78; // [esp+53h] [ebp-3Dh]
  int v79; // [esp+54h] [ebp-3Ch] BYREF
  int v80; // [esp+58h] [ebp-38h] BYREF
  LPVOID ppv; // [esp+5Ch] [ebp-34h] BYREF
  _DWORD *ppv_4; // [esp+60h] [ebp-30h]
  unsigned int v83; // [esp+64h] [ebp-2Ch] BYREF
  unsigned int i; // [esp+68h] [ebp-28h] BYREF
  int v85; // [esp+6Ch] [ebp-24h] BYREF
  int v86; // [esp+70h] [ebp-20h] BYREF
  int v87; // [esp+74h] [ebp-1Ch] BYREF
  int v88; // [esp+78h] [ebp-18h]
  int v89; // [esp+7Ch] [ebp-14h]
  int v90; // [esp+80h] [ebp-10h] BYREF
  char v91[12]; // [esp+84h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->ironTintTimer2))(this) > 0 ) /*0x44d896*/
    BuildingClass::UnloadUnits((int *)this, 0, 0); /*0x44d89c*/
  v2 = this->Type; /*0x44d8a1*/
  if ( !v2->UnitAbsorb && !v2->InfantryAbsorb || this->inAirFlag <= 0 )
  {
    if ( v2->WeaponsFactory )
    {
      v36 = v2->Naval; /*0x44dcc7*/
      v87 = 0; /*0x44dccd*/
      v88 = 0; /*0x44dcd3*/
      v89 = 0; /*0x44dcd7*/
      if ( !v36 ) /*0x44dcdb*/
      {
        vfptr0 = *(int (__thiscall ***)(void *, _DWORD *))this; /*0x44dce3*/
        i = *(_DWORD *)(v2->Height + 40); /*0x44dcf0*/
        v38 = (_WORD *)vfptr0[110](this, &v86); /*0x44dcf4*/
        v39 = IDA_HIWORD(i) + v38[1]; /*0x44dd01*/
        IDA_LOWORD(v83) = *v38 + i; /*0x44dd06*/
        IDA_HIWORD(v83) = v39; /*0x44dd0b*/
        v87 = ((__int16)(v83 - 1) << 8) + 128; /*0x44dd30*/
        v88 = (v39 << 8) + 128; /*0x44dd34*/
        v89 = 0; /*0x44dd38*/
      }
      switch ( this->missionStatus )
      {
        case 0:
          Member = Team::GetMember(this, 0); /*0x44dd59*/
          v41 = Member; /*0x44dd5e*/
          if ( Member ) /*0x44dd62*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)Member + 488))(Member, 5, 0); /*0x44dd6b*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v41 + 492))(v41); /*0x44dd75*/
          }
          RateScaler::Init((_BYTE *)&this->storedTiberium, this->Type->DeployTime); /*0x44dd95*/
          v42 = this->Type->Naval; /*0x44dda2*/
          this->needsRedraw = 1; /*0x44dda8*/
          this->missionStatus = v42 != 0 ? 4 : 1;
          BuildingClass::ClearAnims((int *)this, 18); /*0x44ddbf*/
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x44dddc*/
          {
            v43 = 0; /*0x44ddf6*/
            v44 = (_BYTE *)(this->Type + 4460); /*0x44ddf8*/
          }
          else
          {
            v43 = 1; /*0x44dde4*/
            v44 = (_BYTE *)(this->Type + 4476); /*0x44dde9*/
          }
          if ( v44 && *v44 ) /*0x44de05*/
            BuildingClass::PlayAnim(this, (int)g_RulesClass_Instance, v44, 8, v43, 0, 0); /*0x44de16*/
          break; /*0x44de1b*/
        case 1:
          if ( !AnimClass::resetAnimation(this) ) /*0x44de22*/
          {
            Debug::Log(); /*0x44de34*/
            this->missionStatus = 2; /*0x44de3c*/
          }
          break; /*0x44de46*/
        case 2:
          if ( BuildingClass::CheckPowerFlags((_BYTE *)&this->initialOwner8) ) /*0x44de53*/
          {
            v45 = Team::GetMember(this, 0); /*0x44de63*/
            ppv_4 = (_DWORD *)v45; /*0x44de6a*/
            if ( !v45 ) /*0x44de6e*/
              goto LABEL_112; /*0x44de6e*/
            v45 = v45; /*0x44de74*/
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v45 + 488))(v45, 2, 0); /*0x44de7e*/
            v47 = *(_DWORD *)(v45 + 1652); /*0x44de84*/
            v48 = (_DWORD *)(v45 + 1652); /*0x44de8a*/
            v83 = 0; /*0x44de92*/
            if ( !v47 ) /*0x44de9a*/
              goto LABEL_57; /*0x44de9a*/
            v49 = StreamClass::Set2(&v83, v48); /*0x44dea1*/
            if ( v49 < 0 && v49 != -2147467262 ) /*0x44deaf*/
              WinAPI::Wrapper(v49); /*0x44deb2*/
            if ( !v83 ) /*0x44debd*/
  LABEL_57:
              WinAPI::Wrapper(-2147467261); /*0x44dec4*/
            (*(void (__stdcall **)(unsigned int, int *))(*(_DWORD *)v83 + 12))(v83, &v90); /*0x44ded5*/
            if ( !memcmp(&v90, &stru_7E9A50, 0x10u) || !memcmp(&v90, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x44df00*/
            {
              v55 = *v48; /*0x44dfad*/
              v79 = 0; /*0x44dfaf*/
              if ( v55 ) /*0x44dfb9*/
              {
                v56 = StreamClass::Set(&v79, v48); /*0x44dfc0*/
                if ( v56 < 0 && v56 != -2147467262 ) /*0x44dfce*/
                  WinAPI::Wrapper(v56); /*0x44dfd1*/
                if ( v79 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v79 + 28))(v79) ) /*0x44dfe1*/
                {
                  if ( *v48 ) /*0x44dfe8*/
                    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v48 + 8))(*v48); /*0x44dff1*/
                  v79 = v79; /*0x44dff4*/
                  *v48 = 0; /*0x44dff8*/
                  if ( !v79 ) /*0x44e000*/
                    WinAPI::Wrapper(-2147467261); /*0x44e007*/
                  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v79 + 16))(v79, v48); /*0x44e014*/
                }
              }
              ppv = 0; /*0x44e024*/
              v58 = CreateInstanceCOM(&ppv, (IID *)&stru_7E9A30, 0, 7u); /*0x44e02c*/
              if ( v58 < 0 && v58 != -2147467262 ) /*0x44e03a*/
                WinAPI::Wrapper(v58); /*0x44e03d*/
              if ( !ppv ) /*0x44e048*/
                WinAPI::Wrapper(-2147467261); /*0x44e04f*/
              v54 = ppv_4; /*0x44e058*/
              (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 12))(ppv, ppv_4); /*0x44e060*/
              v59 = 0; /*0x44e067*/
              v80 = 0; /*0x44e06b*/
              if ( ppv ) /*0x44e06f*/
              {
                Checked = (int (__stdcall ***)(_DWORD, void *, int *))Stream::GetChecked(&ppv); /*0x44e075*/
                v61 = (**Checked)(Checked, &unk_819088, &v85); /*0x44e089*/
                if ( v61 >= 0 ) /*0x44e08d*/
                {
                  v85 = v85; /*0x44e0a0*/
                  Release2COM(&v80); /*0x44e0a8*/
                  v59 = v85; /*0x44e0ad*/
                  v54 = ppv_4; /*0x44e0af*/
                  v80 = v59; /*0x44e0b3*/
                }
                else
                {
                  Release2COM(&v80); /*0x44e093*/
                  v59 = 0; /*0x44e098*/
                  v80 = 0; /*0x44e09a*/
                }
                if ( v61 < 0 && v61 != -2147467262 ) /*0x44e0c1*/
                  WinAPI::Wrapper(v61); /*0x44e0c4*/
              }
              v63 = v79; /*0x44e0cd*/
              if ( v79 != v59 ) /*0x44e0d3*/
              {
                v79 = v79; /*0x44e0d5*/
                v79 = v59; /*0x44e0db*/
                CellClass::SetField2C(&v79); /*0x44e0df*/
                if ( v79 ) /*0x44e0e6*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v79 + 8))(v79); /*0x44e0eb*/
                v63 = v79; /*0x44e0ee*/
                v59 = v80; /*0x44e0f2*/
              }
              if ( v59 ) /*0x44e0f8*/
              {
                (*(void (__stdcall **)(int))(*(_DWORD *)v59 + 8))(v59); /*0x44e0fd*/
                v63 = v79; /*0x44e100*/
              }
              if ( v63 ) /*0x44e106*/
              {
                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v63 + 12))(v63, *v48); /*0x44e10e*/
                v65 = *v48; /*0x44e111*/
                ppv = ppv; /*0x44e113*/
                if ( (LPVOID)*v48 != ppv ) /*0x44e119*/
                {
                  *v48 = ppv; /*0x44e11d*/
                  if ( ppv ) /*0x44e11f*/
                    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 4))(ppv); /*0x44e124*/
                  if ( v65 ) /*0x44e129*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)v65 + 8))(v65); /*0x44e12e*/
                }
                if ( !*v48 ) /*0x44e131*/
                  WinAPI::Wrapper(-2147467261); /*0x44e13b*/
                (*(void (__stdcall **)(_DWORD, int, int, int, int))(*(_DWORD *)*v48 + 112))(*v48, 66, v87, v88, v89); /*0x44e160*/
              }
              else
              {
                v67 = *v54; /*0x44e168*/
                v85 = v54[27]; /*0x44e16a*/
                (*(void (__thiscall **)(_DWORD *, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(v67 + 364))( /*0x44e18b*/
                  v54,
                  &v85,
                  0,
                  g_RulesClass_Instance->SilverCrate[5],
                  0,
                  1,
                  0,
                  0);
              }
              if ( ppv ) /*0x44e197*/
                (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x44e19c*/
              if ( v79 ) /*0x44e1a5*/
                (*(void (__stdcall **)(int))(*(_DWORD *)v79 + 8))(v79); /*0x44e1aa*/
            }
            else if ( !memcmp(&v90, &stru_7E9A30, 0x10u) ) /*0x44df1a*/
            {
              if ( !*v48 ) /*0x44df72*/
                WinAPI::Wrapper(-2147467261); /*0x44df7c*/
              (*(void (__stdcall **)(_DWORD, int, int, int, int))(*(_DWORD *)*v48 + 112))(*v48, 66, v87, v88, v89); /*0x44dfa1*/
              v54 = ppv_4; /*0x44dfa4*/
            }
            else
            {
              v50 = (_WORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->suspendedMission0))(this, &v86); /*0x44df26*/
              v51 = v50[1] + 1; /*0x44df3b*/
              IDA_LOWORD(ppv) = *v50 + 4; /*0x44df3d*/
              IDA_HIWORD(ppv) = v51; /*0x44df42*/
              i = (unsigned int)ppv; /*0x44df52*/
              v52 = *ppv_4; /*0x44df56*/
              v53 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&i); /*0x44df5d*/
              (*(void (__thiscall **)(_DWORD *, void *, int))(v52 + 1152))(ppv_4, v53, 1); /*0x44df65*/
              v54 = ppv_4; /*0x44df6b*/
            }
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v54 + 1348))(v54, 0, 1071644672); /*0x44e1b8*/
            v83 = v83; /*0x44e1be*/
            this->missionStatus = 3; /*0x44e1c2*/
            if ( v83 ) /*0x44e1ce*/
              (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v83 + 8))(v83); /*0x44e1d7*/
          }
          break; /*0x44e1da*/
        case 3:
          if ( !this->isTether ) /*0x44e202*/
          {
  LABEL_112:
            Timer::StartDouble((_BYTE *)&this->storedTiberium, this->Type->DeployTime); /*0x44e20c*/
            this->missionStatus = 4; /*0x44e22b*/
          }
          break; /*0x44e231*/
        case 4:
          if ( Flag::CheckNone((_BYTE *)&this->initialOwner8) || this->Type->Naval ) /*0x44e248*/
          {
            (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)&this->isDeactivated6))(this, 0, 1); /*0x44e25a*/
            this->needsRedraw = 1; /*0x44e260*/
          }
          break; /*0x44e260*/
        default:
          goto LABEL_35;
      }
      goto LABEL_35;
    }
    if ( !v2->GapGenerator || !v2->SuperGapRadiusInCells ) /*0x44e2b0*/
      goto LABEL_125; /*0x44e2b8*/
    if ( this->gapSuperCharged ) /*0x44e2be*/
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q1A08))(this); /*0x44e333*/
      v71 = this->Type; /*0x44e339*/
      v72 = *(void (__thiscall ***)(void *))this; /*0x44e33f*/
      this->gapSuperCharged = 0; /*0x44e342*/
      this->HasExtraPowerDrain = 0; /*0x44e349*/
      this->gapRadius = v71->GapRadiusInCells; /*0x44e359*/
      v72[261](this); /*0x44e35f*/
    }
    else
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q1A08))(this); /*0x44e2cd*/
      v69 = *(unsigned __int8 (__thiscall ***)(void *))this; /*0x44e2d9*/
      this->gapRadius = this->Type->SuperGapRadiusInCells; /*0x44e2e3*/
      if ( !v69[212](this) ) /*0x44e2f3*/
      {
        v70 = *(void (__thiscall ***)(void *))this; /*0x44e31d*/
        this->gapRadius = this->Type->GapRadiusInCells; /*0x44e320*/
        v70[261](this); /*0x44e326*/
  LABEL_125:
        (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 5, 0); /*0x44e371*/
        return 1; /*0x44e381*/
      }
      (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q1A04))(this); /*0x44e2fa*/
      this->gapSuperCharged = 1; /*0x44e300*/
      this->HasExtraPowerDrain = 1; /*0x44e306*/
    }
    *(_BYTE *)(this->owner + 22392) = 1; /*0x44e36b*/
    goto LABEL_125; /*0x44e36b*/
  }
  v3 = LinkedList::Pop((_DWORD *)&this->nextArrayIndex9); /*0x44d8d8*/
  if ( !v3 ) /*0x44d8dc*/
    goto LABEL_35; /*0x44d8dc*/
  v4 = *(_WORD *)ProgressTimer::GetValue((_WORD *)&this->u32_710, &v85); /*0x44d8f2*/
  IDA_LOBYTE(v5) = 0; /*0x44d8f5*/
  v77 = 1; /*0x44d8fc*/
  IDA_LOWORD(v83) = v4 + 0x7FFF; /*0x44d901*/
  ppv_4 = 0; /*0x44d90e*/
  v6 = ((v83 >> 12) + 1) >> 1; /*0x44d912*/
  for ( i = v6; ; IDA_LOBYTE(v6) = i ) /*0x44d914*/
  {
    v7 = ((_BYTE)v5 + (_BYTE)v6) & 7; /*0x44d92a*/
    v8 = (_WORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->suspendedMission0))(this, &v86); /*0x44d92d*/
    v9 = v7 & 7; /*0x44d938*/
    v10 = IDA_LOWORD(Direction_X_Offsets[v9]) + *v8; /*0x44d93f*/
    v11 = (_WORD *)(4 * v9 + 9041544); /*0x44d947*/
    v12 = v11[1]; /*0x44d94e*/
    IDA_LOWORD(v83) = v10; /*0x44d952*/
    v13 = v8[1] + v12; /*0x44d95a*/
    IDA_LOWORD(ppv) = *v11 + v10; /*0x44d95e*/
    v14 = v13 + v11[1]; /*0x44d967*/
    IDA_HIWORD(v83) = v13; /*0x44d96a*/
    v15 = *(_DWORD *)v3; /*0x44d973*/
    IDA_HIWORD(ppv) = v14; /*0x44d975*/
    v79 = v83; /*0x44d980*/
    v80 = (int)ppv; /*0x44d984*/
    LandHeight = ObjectClass::GetLandHeight(this); /*0x44d98d*/
    v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80); /*0x44d999*/
    v17 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v15 + 428))(v3, v16, v7, LandHeight, 0, 1); /*0x44d9a1*/
    v18 = *(_DWORD *)v3; /*0x44d9a7*/
    v78 = v17 == 0; /*0x44d9b1*/
    v74 = ObjectClass::GetLandHeight(this); /*0x44d9bb*/
    v19 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v79); /*0x44d9c7*/
    if ( !(*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v18 + 428))(v3, v19, v7, v74, 0, 1) ) /*0x44d9cf*/
      break; /*0x44d9cf*/
    if ( !v77 ) /*0x44da20*/
      goto LABEL_13; /*0x44da20*/
  LABEL_17:
    v20 = ppv_4; /*0x44da22*/
    if ( ppv_4 == (_DWORD *)7 ) /*0x44da2c*/
    {
      v20 = 0; /*0x44da2e*/
      v77 = 0; /*0x44da30*/
    }
  LABEL_14:
    v5 = (int)v20 + 1; /*0x44da07*/
    ppv_4 = (_DWORD *)v5; /*0x44da0b*/
    if ( v5 >= 8 ) /*0x44da0f*/
      goto LABEL_34; /*0x44da0f*/
  }
  if ( !v78 && v77 ) /*0x44d9e7*/
    goto LABEL_17; /*0x44d9e7*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v79) + 80) & 0x100) != 0 ) /*0x44da01*/
  {
  LABEL_13:
    v20 = ppv_4; /*0x44da03*/
    goto LABEL_14; /*0x44da03*/
  }
  ++g_IKnowWhatImDoing; /*0x44da55*/
  v89 = 0; /*0x44da5b*/
  v21 = *(_DWORD *)v3; /*0x44da5f*/
  v88 = (IDA_SHIWORD(v79) << 8) + 128; /*0x44da66*/
  v87 = ((__int16)v79 << 8) + 128; /*0x44da6c*/
  if ( (*(int (__thiscall **)(int))(v21 + 44))(v3) == 15 ) /*0x44da76*/
  {
    v22 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v87, 0); /*0x44da89*/
    v87 = *v22; /*0x44da90*/
    v88 = v22[1]; /*0x44da97*/
    v23 = v22[2]; /*0x44da9b*/
  }
  else
  {
    v24 = *(_DWORD *)v3; /*0x44dabc*/
    v83 = 0; /*0x44dac6*/
    v25 = (*(int (__thiscall **)(int, int))(v24 + 132))(v3, -1); /*0x44dad4*/
    v80 = *LayerClass::Pathfinding_Find( /*0x44dafb*/
             &MapClass_Instance,
             (int)&v80,
             &v87,
             (__int16 *)&v80,
             *(_DWORD *)(v25 + 1660),
             0,
             0,
             1,
             1,
             0,
             0,
             0,
             1,
             (char)&v83,
             0,
             0,
             v76);
    v26 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80); /*0x44db05*/
    v27 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v26 + 72))(v26, v91); /*0x44db13*/
    i = *(_DWORD *)CellStruct::Set(&v86, *v27 / 256, v27[1] / 256); /*0x44db42*/
    v23 = 0; /*0x44db5f*/
    v87 = ((__int16)i << 8) + 128; /*0x44db61*/
    v88 = (IDA_SHIWORD(i) << 8) + 128; /*0x44db65*/
  }
  IDA_LOWORD(i) = (_WORD)v7 << 13; /*0x44db6c*/
  v89 = v23; /*0x44db84*/
  v28 = (*(int (__thiscall **)(int, int *, _DWORD))(v3->q0D8)( /*0x44db8e*/
          v3,
          &v87,
          (unsigned __int8)(((i >> 7) + 1) >> 1));
  --g_IKnowWhatImDoing; /*0x44db9d*/
  if ( !v28 ) /*0x44dba3*/
  {
  LABEL_34:
    CellClass::AddObject((_DWORD *)&this->inAirFlag, (_DWORD *)v3); /*0x44dc6e*/
    (*(void (__thiscall **)(int))(v3->q11C)(v3); /*0x44dc7e*/
    goto LABEL_35; /*0x44dc7e*/
  }
  if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
  {
    v29 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->referenceCount2))(this, &v90); /*0x44dbc5*/
    StartAudioControllerAt(g_RulesClass_Instance->DamageFireTypes[3], v29, 0); /*0x44dbd5*/
    v30 = v3->q21C; /*0x44dbda*/
    if ( *(_BYTE *)(v30 + 492) ) /*0x44dbe0*/
      *(_BYTE *)(v3 + 1679) = 0; /*0x44dbea*/
    if ( !v3->ImpactLandSound ) /*0x44dbf1*/
    {
      ++*(_DWORD *)(v30 + 756); /*0x44dc02*/
      v3->ImpactLandSound = 1; /*0x44dc08*/
    }
    v3->u8_439 = 0; /*0x44dc0f*/
  }
  (*(void (__thiscall **)(int, int, _DWORD, int))(v3->q1E8)(v3, 2, 0, v76); /*0x44dc1e*/
  v31 = *(_DWORD *)v3; /*0x44dc28*/
  if ( IDA_BYTE2(v79) ) /*0x44dc2e*/
    p_ppv = &ppv; /*0x44dc34*/
  else
    p_ppv = (LPVOID *)&v80; /*0x44dc3b*/
  v32 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)p_ppv); /*0x44dc41*/
  (*(void (__thiscall **)(int, void *))(v31 + 1152))(v3, v32); /*0x44dc49*/
  if ( this->Type->BuildingAnim_0x15 > 0 ) /*0x44dc5d*/
    *(_BYTE *)(this->owner + 22392) = 1; /*0x44dc65*/
  LABEL_35:
  MissionControl = MissionClass::GetMissionControl(this); /*0x44dc84*/
  v34 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x44dc99*/
  return v34 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x44dcb1*/
// 0x710670
int BuildingClass::OnCellPlacementComplete()
{
  int result; // eax
  int v3; // edx
  int v4; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+18h] [ebp+4h]

  CellClass::AddObject((_DWORD *)&this->inAirFlag, v6); /*0x710682*/
  if ( v6 ) /*0x710689*/
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this); /*0x71068f*/
    if ( *(_DWORD *)(result + 1380) != -1 ) /*0x71069c*/
    {
      v5[0] = this->location; /*0x7106ac*/
      v3 = *(_DWORD *)this; /*0x7106b0*/
      v5[1] = this->q0A0; /*0x7106b5*/
      v5[2] = *((_DWORD *)this + 41); /*0x7106bc*/
      v4 = (*(int (__thiscall **)(void *))(v3 + 132))(this); /*0x7106c2*/
      return PlayAudioAt2(*(_DWORD *)(v4 + 1380), v5, 0); /*0x7106d0*/
    }
  }
  return result; /*0x7106d5*/
}
// 0x443860
void BuildingClass::SetRallyPoint(CoordStruct* target)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int TileIndex; // eax
  _DWORD *v11; // eax
  _BYTE *WaypointCoords; // eax
  _BYTE *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // ebp
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
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
  __int16 v31[4]; // [esp+10h] [ebp-94h] BYREF
  char v32[8]; // [esp+18h] [ebp-8Ch] BYREF
  int v33; // [esp+20h] [ebp-84h]
  int v34; // [esp+24h] [ebp-80h] BYREF
  _BYTE v35[8]; // [esp+28h] [ebp-7Ch] BYREF
  int v36; // [esp+30h] [ebp-74h]
  char v37[112]; // [esp+34h] [ebp-70h] BYREF

  v33 = 0; /*0x44387b*/
  v4 = 0; /*0x44387f*/
  v5 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, a2) + 80); /*0x443886*/
  v6 = this->q520; /*0x44388c*/
  v32[0] = IDA_BYTE1(v5) & 1; /*0x443898*/
  if ( v6->BuildingTypeClass_field_ED8 == 3 ) /*0x4438a5*/
  {
    v33 = 4; /*0x4438a7*/
    v4 = 9; /*0x4438af*/
  }
  if ( v6->Naval ) /*0x4438b4*/
  {
    v33 = 6; /*0x4438bc*/
    v4 = 4; /*0x4438c4*/
  }
  v7 = *(_DWORD *)v32; /*0x4438cf*/
  v8 = this->location; /*0x4438d5*/
  v9 = this->locationY; /*0x4438d7*/
  v36 = this->locationZ; /*0x4438dd*/
  v31[0] = v8 / 256; /*0x4438ed*/
  v31[1] = v9 / 256; /*0x443905*/
  TileIndex = MapClass::GetTileIndex(&MapClass_Instance, v31, v4, v32[0]); /*0x443917*/
  *(_DWORD *)v31 = 0; /*0x44391d*/
  v34 = *LayerClass::Pathfinding_Find( /*0x443965*/
           &MapClass_Instance,
           v33,
           v32,
           a2,
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
  if ( v34 != g_TerrainTypeTable ) /*0x443969*/
  {
    v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v34); /*0x443987*/
    WaypointCoords = ScriptAction::GetWaypointCoords(v32, v11); /*0x443991*/
    v27 = *(_DWORD *)WaypointCoords; /*0x4439a1*/
    v29 = WaypointCoords[4]; /*0x4439a3*/
    v13 = ScriptAction::GetWaypointCoords(v31, (_DWORD *)this); /*0x4439aa*/
    v23 = *(_DWORD *)v13; /*0x4439bb*/
    v25 = v13[4]; /*0x4439c0*/
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)&this->abstractFlags6))(this); /*0x4439c5*/
    v15 = ScenarioClass::SetEvent(v37, v14, 30, v23, v25, v27, v29); /*0x4439cd*/
    if ( Networking_LastEventIndex < 128 ) /*0x4439dc*/
    {
      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v15, 0x6Fu); /*0x4439f8*/
      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x443a09*/
      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x443a20*/
      ++Networking_LastEventIndex; /*0x443a26*/
    }
    goto LABEL_8; /*0x443a26*/
  }
  if ( !*(_BYTE *)(this->q520 + 5817) /*0x443ab0*/
    || !(unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->u32_D80))
    || !g_GameMode_Current[0]
    || !(_BYTE)MCVRedeploy
    || this->mindControlledBy )
  {
  LABEL_8:
    if ( a3 ) /*0x443a34*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(void **)(&this->u32_D80)) ) /*0x443a3c*/
      {
        v16 = this->q520; /*0x443a45*/
        if ( !*(_BYTE *)(v16 + 5817) && !*(_BYTE *)(v16 + 1517) ) /*0x443a55*/
          VoxClass::FindAndPlay(aEvaNewrallypoi, -1); /*0x443a69*/
      }
    }
    return; /*0x443a69*/
  }
  v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v35); /*0x443ac8*/
  v18 = Coord::To_Cell(&MapClass_Instance, v17); /*0x443ad1*/
  v19 = ScriptAction::GetWaypointCoords(v32, v18); /*0x443adb*/
  v28 = *(_DWORD *)v19; /*0x443aeb*/
  v30 = v19[4]; /*0x443aed*/
  v20 = ScriptAction::GetWaypointCoords(v31, (_DWORD *)this); /*0x443af4*/
  v24 = *(_DWORD *)v20; /*0x443b05*/
  v26 = v20[4]; /*0x443b0a*/
  v21 = (*(int (__thiscall **)(int))(*(_DWORD *)&this->abstractFlags6))(this); /*0x443b0f*/
  v22 = ScenarioClass::SetEvent(v37, v21, 30, v24, v26, v28, v30); /*0x443b17*/
  if ( Networking_LastEventIndex < 128 ) /*0x443b26*/
  {
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v22, 0x6Fu); /*0x443b46*/
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x443b5a*/
    Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x443b71*/
    ++Networking_LastEventIndex; /*0x443b77*/
  }
}
// 0x4a9650
int BuildingClass::MarkExitPath()
{
  _DWORD *v5; // eax
  __int16 *v6; // esi
  char v7; // bl
  __int16 *v8; // eax
  __int16 v9; // dx
  int v10; // ecx

  a2 = a2; /*0x4a9652*/
  IDA_LOWORD(v5) = *a2; /*0x4a965a*/
  if ( *(_DWORD *)a2 != dword_8A03F8 ) /*0x4a9665*/
  {
    v6 = *(&this->airstrikeTintStage3); /*0x4a9674*/
    v7 = (char)a3; /*0x4a967a*/
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x4a968b*/
    {
      v8 = v6; /*0x4a968d*/
      v6 += 2; /*0x4a968f*/
      v9 = *v8; /*0x4a9692*/
      IDA_LOWORD(v8) = a2[1] + v8[1]; /*0x4a969d*/
      IDA_LOWORD(a3) = *a2 + v9; /*0x4a96a1*/
      IDA_HIWORD(a3) = (_WORD)v8; /*0x4a96a6*/
      a2 = a3; /*0x4a96b3*/
      IDA_LOBYTE(v5) = LayerClass::CoordinatesLegal(this, (__int16 *)&a2); /*0x4a96ba*/
      if ( (_BYTE)v5 ) /*0x4a96c1*/
      {
        v5 = CellCoord::To_CellObj(this, (__int16 *)&a2); /*0x4a96ca*/
        v10 = v5[75]; /*0x4a96cf*/
        if ( v7 ) /*0x4a96d7*/
          v5[75] = v10 | 4; /*0x4a96dc*/
        else
          v5[75] = v10 & 0xFFFFFFFB; /*0x4a96e7*/
      }
    }
  }
  return (char)v5; /*0x4a96ef*/
}
// 0x639cb0
int BuildingClass::CheckExitPath()
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // edx
  int v10; // edx
  int v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  int i; // ecx
  int v16; // eax
  int v17; // [esp+10h] [ebp-8h]
  _DWORD *v18; // [esp+14h] [ebp-4h]

  result = BuildingClass::GetType(this); /*0x639cb7*/
  v2 = result; /*0x639cbc*/
  v3 = 0; /*0x639cbe*/
  v18 = (_DWORD *)result; /*0x639cc0*/
  v4 = *(_DWORD *)(result + 20); /*0x639cc4*/
  v5 = *(_DWORD *)(result + 148); /*0x639cc7*/
  v17 = v4; /*0x639ccf*/
  if ( v4 /*0x639cf0*/
    && (v4 > 0
     || v5 >= 0 && (result = -v5 / *(_DWORD *)(result + 144), v3 = v5 + -v5 % *(_DWORD *)(v2 + 144), v3 >= 0) && v3 < v4) )
  {
    result = *(_DWORD *)(v2 + 8); /*0x639cf2*/
    v6 = *(_DWORD *)(result + 4 * v3); /*0x639cf5*/
  }
  else
  {
    v6 = 0; /*0x639cfa*/
  }
  v7 = *(_DWORD *)(v6 + 16); /*0x639cfc*/
  v8 = 0; /*0x639cff*/
  if ( v7 > 0 ) /*0x639d03*/
  {
    while ( 1 ) /*0x639d0c*/
    {
      v9 = *(_DWORD **)(*(_DWORD *)(v6 + 4) + 4 * v8); /*0x639d0c*/
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v9 + 1216))(*v9); /*0x639d13*/
      if ( (_BYTE)result ) /*0x639d1b*/
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
        v13 = *(_DWORD *)(v18[2] + 4 * v10); /*0x639d67*/
  LABEL_21:
        v14 = *(_DWORD *)(v13 + 16); /*0x639d6e*/
        for ( i = 0; i < v14; ++i ) /*0x639d75*/
        {
          v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * i) + 4); /*0x639d7d*/
          if ( *(_BYTE *)(v16 + 12) == 2 ) /*0x639d83*/
            *(_BYTE *)(v16 + 12) = 29; /*0x639d85*/
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
void BuildingClass::RenderExitPosition() {}
  int *v2; // eax
  int v3; // edi
  int v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v10; // ecx
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
  _DWORD *v24; // ecx
  int *v25; // eax
  int v26; // edi
  int v27; // esi
  int v28; // ebx
  int v29; // ebp
  int v30; // ecx
  _DWORD *v31; // eax
  int *v32; // [esp-4h] [ebp-28h]
  int v33[2]; // [esp+10h] [ebp-14h] BYREF
  _DWORD v34[3]; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *cell; // [esp+28h] [ebp+4h]
  int v36; // [esp+2Ch] [ebp+8h]

  if ( this->Type->CanBeOccupied && (*(int (__thiscall **)(void *))(*(_DWORD *)&this->ironTintTimer2))(this) > 0 ) /*0x453865*/
  {
    v2 = World::ToScreen( /*0x453886*/
           (float *)g_TacticalClass_Instance,
           v33,
           (int *)(this->Type + 8 * this->q69C + 5512));
    v3 = *v2; /*0x45388b*/
    v4 = v2[1]; /*0x45388d*/
    v5 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)&this->q0442))(this, v34); /*0x453899*/
    v6 = *v5; /*0x45389f*/
    v7 = v5[1]; /*0x4538a5*/
    v8 = v5[2]; /*0x4538a8*/
    *cell = v3 + v6; /*0x4538b1*/
    cell[1] = v4 + v7; /*0x4538b3*/
    cell[2] = v8; /*0x4538b6*/
    return (int)cell; /*0x4538b9*/
  }
  else
  {
    v10 = this->Type; /*0x4538c5*/
    if ( v10->PrimaryFirePixelOffset == 0xFFFF && v10->u32_E48 == 0xFFFF ) /*0x4538e6*/
    {
      if ( v10->BarrelAnimIsVoxel ) /*0x4539a1*/
      {
        v24 = (_DWORD *)BuildingClass::CalcBarrelFlashPosition(v34, v36, 1); /*0x4539be*/
        *cell = *v24; /*0x4539c8*/
        cell[1] = v24[1]; /*0x4539cd*/
        cell[2] = v24[2]; /*0x4539d3*/
        return (int)cell; /*0x4539c0*/
      }
      else
      {
        v25 = TechnoClass::ComputeTransform((_DWORD **)this, v34, v36, 0, 0, 0); /*0x4539ff*/
        v26 = *v25; /*0x453a04*/
        v27 = this->Type; /*0x453a06*/
        v28 = v25[1]; /*0x453a0c*/
        v29 = v25[2]; /*0x453a0f*/
        if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
        {
          v30 = v27->u32_11E0; /*0x453a22*/
          v33[1] = v27->u32_11E4; /*0x453a28*/
          v33[0] = v30; /*0x453a34*/
          v31 = World::ToScreen((float *)g_TacticalClass_Instance, v34, v33); /*0x453a40*/
          v26 += *v31; /*0x453a4a*/
          v28 += v31[1]; /*0x453a4c*/
        }
        *cell = v26; /*0x453a54*/
        cell[1] = v28; /*0x453a58*/
        cell[2] = v29; /*0x453a5b*/
        return (int)cell; /*0x453a4e*/
      }
    }
    else
    {
      v32 = (int *)(v10 + 3652); /*0x4538f2*/
      if ( v10->PrimaryFireDualOffset ) /*0x4538ec*/
      {
        v11 = World::ToScreen((float *)g_TacticalClass_Instance, v33, v32); /*0x453902*/
        v12 = *v11; /*0x453907*/
        v13 = v11[1]; /*0x453909*/
        v14 = TechnoClass::ComputeTransform((_DWORD **)this, v34, v36, 0, 0, 0); /*0x45392c*/
        v15 = *v14; /*0x453931*/
        v16 = v14[1]; /*0x453937*/
        v17 = v14[2]; /*0x45393a*/
        *cell = v12 + v15; /*0x453943*/
        cell[1] = v13 + v16; /*0x453945*/
      }
      else
      {
        v18 = World::ToScreen((float *)g_TacticalClass_Instance, v33, v32); /*0x453962*/
        v19 = *v18; /*0x453967*/
        v20 = v18[1]; /*0x453969*/
        v21 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)&this->q0442))(this, v34); /*0x453975*/
        v22 = *v21; /*0x45397b*/
        v23 = v21[1]; /*0x453981*/
        v17 = v21[2]; /*0x453984*/
        *cell = v22 + v19; /*0x45398d*/
        cell[1] = v20 + v23; /*0x45398f*/
      }
      cell[2] = v17; /*0x453948*/
      return (int)cell; /*0x45394b*/
    }
  }
// IDA 0x459ec0: returns 6 (wait timer constant)
// 0x443c60
VectorClass * * BuildingClass::UpdateConstruction()
{
// 0x443c60
{
  __int16 v6; // di
  int (__thiscall **v7)(void *); // edx
  }
  }
// 0x445880
int BuildingClass::Sell() { BeingProduced = false; CompleteSell(); return 5; }
  char *v2; // edx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  char *v16; // ecx
  char v17; // bl
  RulesClass *v18; // eax
  int i; // ebp
  int v20; // edx
  void **v21; // edi
  void *v22; // eax
  int v23; // ecx
  int v24; // kr08_4
  void **v25; // eax
  void **v26; // eax
  int v27; // ecx
  __int16 v28; // di
  void **v30; // eax
  void **v31; // eax
  _DWORD *v32; // ecx
  int FoundationWidth; // ebp
  int FoundationHeight; // edi
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // ebp
  int v39; // edi
  __int16 v40; // bx
  _BYTE *v41; // eax
  int *v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int result; // eax
  char v48; // [esp+13h] [ebp-2Dh]
  int v49; // [esp+14h] [ebp-2Ch]
  int v50; // [esp+14h] [ebp-2Ch]
  int v51; // [esp+14h] [ebp-2Ch]
  int v52; // [esp+14h] [ebp-2Ch]
  int v53; // [esp+18h] [ebp-28h] BYREF
  int v55; // [esp+20h] [ebp-20h] BYREF
  __int16 v56; // [esp+28h] [ebp-18h]
  __int16 v57; // [esp+2Ah] [ebp-16h]
  _DWORD v58[4]; // [esp+30h] [ebp-10h] BYREF

  v48 = 0; /*0x445889*/
  v2 = (char *)&this->isBeingWarpedOut; /*0x445894*/
  v3 = this->location; /*0x445896*/
  v4 = this->q0A0; /*0x445898*/
  v58[2] = *((_DWORD *)v2 + 2); /*0x44589e*/
  IDA_LOWORD(v55) = v3 / 256; /*0x4458ae*/
  IDA_HIWORD(v55) = v4 / 256; /*0x4458c1*/
  if ( !this->inLimbo && this->Type ) /*0x4458d4*/
  {
    v5 = (_DWORD *)((char *)&this->q2500); /*0x4458e4*/
    v6 = 8; /*0x4458ea*/
    do /*0x445903*/
    {
      if ( *v5 ) /*0x4458ef*/
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v5 + 248))(*v5); /*0x4458f7*/
        *v5 = 0; /*0x4458fd*/
      }
      ++v5; /*0x4458ff*/
      --v6; /*0x445902*/
    }
    while ( v6 ); /*0x445903*/
    if ( this->Type->OrePurifier ) /*0x44590b*/
    {
      if ( this->ActuallyPlacedOnMap ) /*0x445915*/
      {
        --*(_DWORD *)(this->owner + 21388); /*0x44592c*/
        v7 = this->owner; /*0x445932*/
        if ( *(int *)(v7 + 21388) < 0 ) /*0x44593e*/
          *(_DWORD *)(v7 + 21388) = 0; /*0x445940*/
      }
    }
    v8 = this->Type; /*0x445946*/
    if ( v8->Helipad ) /*0x44594c*/
    {
      if ( this->ActuallyPlacedOnMap ) /*0x445956*/
      {
        *(_DWORD *)(this->owner + 724) -= v8->NumberOfDocks; /*0x445974*/
        v9 = this->owner; /*0x44597a*/
        if ( *(int *)(v9 + 724) < 0 ) /*0x445986*/
          *(_DWORD *)(v9 + 724) = 0; /*0x445988*/
      }
    }
    v10 = this->Type->InfantryGainSelfHeal; /*0x445994*/
    if ( v10 ) /*0x44599c*/
    {
      if ( this->ActuallyPlacedOnMap ) /*0x44599e*/
      {
        *(_DWORD *)(this->owner + 356) -= v10; /*0x4459b6*/
        v11 = this->owner; /*0x4459bc*/
        if ( v11->q164 < 0 ) /*0x4459c8*/
          v11->q164 = 0; /*0x4459ca*/
      }
    }
    v12 = this->Type->UnitsGainSelfHeal; /*0x4459d6*/
    if ( v12 ) /*0x4459de*/
    {
      if ( this->ActuallyPlacedOnMap ) /*0x4459e0*/
      {
        *(_DWORD *)(this->owner + 360) -= v12; /*0x4459f8*/
        v13 = this->owner; /*0x4459fe*/
        if ( v13->q168 < 0 ) /*0x445a0a*/
          v13->q168 = 0; /*0x445a0c*/
      }
    }
    if ( this->Type->LaserFencePost ) /*0x445a18*/
      BuildingClass::DemolishBridgeCheck((int *)this, 0); /*0x445a25*/
    if ( !g_IKnowWhatImDoing ) /*0x445a30*/
    {
      if ( this->Type->SensorArray ) /*0x445a38*/
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)&this->reloadTimer2))(this, g_TerrainTypeTable); /*0x445a4c*/
      if ( this->Type->qD31 ) /*0x445a58*/
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)&this->q2000))(this, g_TerrainTypeTable); /*0x445a6c*/
      v14 = this->Type; /*0x445a72*/
      if ( (!v14->VoiceMove || !v14->q5EC) /*0x445a8e*/
        && !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->nextObject8))(this) )
      {
        RecalculateBuildingFoundation((_DWORD **)this); /*0x445a9a*/
      }
    }
    v15 = 0; /*0x445a9f*/
    v16 = (char *)&this->q17B0; /*0x445aa1*/
    while ( !*(_DWORD *)v16 || !*(_BYTE *)(this->u32_1D4F ) /*0x445ab4*/
    {
      ++v15; /*0x445ab6*/
      v16 += 4; /*0x445ab7*/
      if ( v15 >= 3 ) /*0x445abd*/
        goto LABEL_40; /*0x445abd*/
    }
    v48 = 1; /*0x445ac1*/
  LABEL_40:
    if ( !g_WTFMode ) /*0x445acd*/
    {
      v17 = 1; /*0x445acf*/
      goto LABEL_75; /*0x445ad1*/
    }
    v18 = g_RulesClass_Instance; /*0x445ad6*/
    if ( this->Type == g_RulesClass_Instance->NSGates[1] ) /*0x445ae7*/
    {
      for ( i = 0; i < 8; i += 2 ) /*0x445aed*/
      {
        v20 = i & 7; /*0x445af3*/
        IDA_LOWORD(v49) = v55 + IDA_LOWORD(Direction_X_Offsets[v20]); /*0x445b13*/
        IDA_HIWORD(v49) = IDA_HIWORD(v55) + IDA_HIWORD(Direction_X_Offsets[v20]); /*0x445b1c*/
        v53 = v49; /*0x445b2b*/
        v21 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53); /*0x445b34*/
        BuildingClass::ValidatePlacement(v21, 0); /*0x445b3a*/
        v22 = v21[17]; /*0x445b3f*/
        if ( v22 != (void *)-1 /*0x445b60*/
          && *(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->gap0[4 * (_DWORD)v22] + 680)
          && *((_BYTE *)v21 + 286) < 0x10u )
        {
          BuildingClass::SellEffects((int)v21, 200); /*0x445b69*/
        }
      }
      v18 = g_RulesClass_Instance; /*0x445b7a*/
    }
    v23 = this->Type; /*0x445b81*/
    if ( v23 == v18->ConcreteWalls[1] || v23 == v18->ConcreteWalls[3] ) /*0x445b97*/
    {
      v55 = v55; /*0x445b9d*/
      IDA_HIWORD(v50) = IDA_HIWORD(v55); /*0x445ba2*/
      IDA_LOWORD(v50) = v55 - 1; /*0x445baf*/
      v53 = v50; /*0x445bbe*/
      v25 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53); /*0x445bc2*/
      BuildingClass::ValidatePlacement(v25, 0); /*0x445bc9*/
      IDA_HIWORD(v50) = IDA_HIWORD(v55); /*0x445bd1*/
      IDA_LOWORD(v50) = v55 + 3; /*0x445bd6*/
      v53 = v50; /*0x445be3*/
      v26 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53); /*0x445bee*/
      BuildingClass::ValidatePlacement(v26, 0); /*0x445bf5*/
      v18 = g_RulesClass_Instance; /*0x445bfa*/
    }
    v27 = this->Type; /*0x445bff*/
    if ( v27 == v18->ConcreteWalls[2] || v27 == v18->NSGates[0] ) /*0x445c15*/
    {
      v28 = IDA_HIWORD(v55); /*0x445c17*/
      v55 = v55; /*0x445c1b*/
      v53 = v55 - 0x10000; /*0x445c36*/
      v30 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53); /*0x445c40*/
      BuildingClass::ValidatePlacement(v30, 0); /*0x445c47*/
      IDA_LOWORD(v51) = v55; /*0x445c53*/
      IDA_HIWORD(v51) = v28 + 3; /*0x445c58*/
      v53 = v51; /*0x445c68*/
      v31 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53); /*0x445c6c*/
      BuildingClass::ValidatePlacement(v31, 0); /*0x445c73*/
    }
    v32 = (_DWORD *)this->Type; /*0x445c78*/
    if ( !v32[918] ) /*0x445c7e*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(v32); /*0x445c97*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(this->Type, 0); /*0x445ca0*/
      v35 = *(_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->suspendedMission0))(this, &v55); /*0x445caf*/
      v36 = 0; /*0x445cb1*/
      v58[0] = v35; /*0x445cb3*/
      v37 = FoundationHeight + 2; /*0x445cb7*/
      v53 = 0; /*0x445cbc*/
      v55 = FoundationHeight + 2; /*0x445cc0*/
      if ( FoundationHeight + 2 > 0 ) /*0x445cc4*/
      {
        v38 = FoundationWidth + 2; /*0x445cc6*/
        do /*0x445d33*/
        {
          v39 = 0; /*0x445cc9*/
          if ( v38 > 0 ) /*0x445ccd*/
          {
            v56 = IDA_LOWORD(v58[0]) - 1; /*0x445cd9*/
            v57 = IDA_HIWORD(v58[0]) - 1; /*0x445cde*/
            v40 = IDA_LOWORD(v58[0]) - 1; /*0x445ce7*/
            IDA_HIWORD(v52) = v36 + IDA_HIWORD(v58[0]) - 1; /*0x445ced*/
            do /*0x445d22*/
            {
              IDA_LOWORD(v52) = v40 + v39; /*0x445cf9*/
              v52 = v52; /*0x445d02*/
              v41 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v52); /*0x445d0c*/
              ++v39; /*0x445d19*/
              --v41[290]; /*0x445d1c*/
            }
            while ( v39 < v38 ); /*0x445d22*/
            v37 = v55; /*0x445d24*/
            v36 = v53; /*0x445d28*/
          }
          v53 = ++v36; /*0x445d2f*/
        }
        while ( v36 < v37 ); /*0x445d33*/
      }
    }
    if ( g_TacticalClass_Instance ) /*0x445d3d*/
    {
      v42 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)&this->spawnStatus0))(this, v58); /*0x445d49*/
      Cell::CreateCrater(*v42, v42[1], v42[2], v42[3], 0); /*0x445d70*/
    }
    v43 = this->Spotlight; /*0x445d75*/
    if ( v43 ) /*0x445d7d*/
      (*(void (__thiscall **)(int))(v43->q0F8)(v43); /*0x445d81*/
    BuildingClass::DecrementTypeCounter(*((_DWORD **)&this->attachedTag5), this); /*0x445d8e*/
    *(_BYTE *)(this->owner + 508) = 1; /*0x445d99*/
    BuildingClass::CalcExitCoords(*((int **)&this->attachedTag5)); /*0x445da6*/
    if ( *((void **)&this->attachedTag5) == HouseClass_Player ) /*0x445db8*/
    {
      byte_880CF4 = 1; /*0x445dc0*/
      MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x445dc7*/
    }
    HouseClass::RecordCratePlacement(*((int **)&this->attachedTag5), this); /*0x445dd3*/
  }
  v17 = TechnoClass::CleanupDeploy(this); /*0x445ddf*/
  if ( v48 ) /*0x445de7*/
    HouseClass::AcquiredThreatNode(*((_BYTE **)&this->attachedTag5)); /*0x445def*/
  v45 = this->Type; /*0x445df4*/
  v46 = v45->BuildingTypeClass_field_ED8; /*0x445dfa*/
  if ( v46 ) /*0x445e02*/
  {
    IDA_LOBYTE(v44) = v45->Naval; /*0x445e04*/
    HouseClass::UpdateProduction(this->owner, v46, v44, 0); /*0x445e14*/
  }
  LABEL_75:
  result = this->Type; /*0x445e19*/
  if ( result->LaserFencePost ) /*0x445e1f*/
  {
    result = g_IKnowWhatImDoing; /*0x445e29*/
    if ( !g_IKnowWhatImDoing ) /*0x445e30*/
      this->LaserFenceFrame = 0; /*0x445e32*/
  }
  IDA_LOBYTE(result) = v17; /*0x445e3e*/
  return result; /*0x445e3c*/
// 0x44f5c0
bool BuildingClass::CanBeSoldCheck() { return CanBeSold(); }
  int result; // eax

  result = this->empLockRemaining; /*0x44f5c3*/
  if ( result <= 0 ) /*0x44f5cb*/
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->turretChargeTimer4))(this); /*0x44f5d5*/
    if ( (_BYTE)result ) /*0x44f5dd*/
    {
      IDA_LOBYTE(result) = 1; /*0x44f5df*/
    }
    else
    {
      if ( !this->Type->ConstructionYard ) /*0x44f5e9*/
        return this->Type->VoiceMove != 0; /*0x44f5e9*/
      result = House::IsCurrentPlayer(*((void **)&this->attachedTag5)); /*0x44f5f9*/
      if ( (_BYTE)result /*0x44f61c*/
        && (result = g_GameMode_Current[0]) != 0
        && (_BYTE)MCVRedeploy
        && (result = this->mindControlledBy) == 0 )
      {
        return this->Type->VoiceMove != 0; /*0x44f633*/
      }
      else
      {
        IDA_LOBYTE(result) = 0; /*0x44f61e*/
      }
    }
  }
  else
  {
    IDA_LOBYTE(a2) = 0; /*0x44f5cd*/
  }
// 0x4d9f70
int BuildingClass::SellUnit()
{
  int v4; // eax

  a2 = a2; /*0x4d9f70*/
  if ( a2 ) /*0x4d9f79*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(&this->attachedTag5)) ) /*0x4d9f81*/
    {
      VoxClass::FindAndPlay(aEvaUnitsold, -1); /*0x4d9f94*/
      PlayVocClass(IDA_HIDWORD(g_RulesClass_Instance->WheeledDownhill), 0x2000, 1.0, 0); /*0x4d9fb0*/
    }
    v4 = (*((int (__thiscall **)(void **))*this + 175))(this); /*0x4d9fb9*/
    HouseClass::AddPower(*(&this->attachedTag5), v4); /*0x4d9fc6*/
    (*((void (__thiscall **)(void **))*this + 232))(this); /*0x4d9fcf*/
    (*((void (__thiscall **)(void **))*this + 53))(this); /*0x4d9fd9*/
    return (*((int (__thiscall **)(void **))*this + 62))(this); /*0x4d9fe3*/
  }
}
// 0x701410
int BuildingClass::HandleSellOrRepair()
{
  int v2; // eax
  int a2; // eax
  BOOL v4; // eax
  int v5; // edx
  int v6; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(void *, int))(*(_DWORD *)&this->isOnMap2))(this, 2); /*0x70141a*/
  v2 = *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 160); /*0x70142a*/
  this->health = v2; /*0x701432*/
  this->estimatedHealth = v2; /*0x701435*/
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this); /*0x70143a*/
  if ( result == 6 ) /*0x701440*/
  {
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->q0A42))(this, 0); /*0x701448*/
    v4 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)&g_RulesClass_Instance[1].WarpOut; /*0x701465*/
    globalHelper_051EE0((int)this, v5, v4); /*0x701473*/
    v6 = (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v7); /*0x701483*/
    return StartAudioControllerAt(g_RulesClass_Instance->CratePromoteSound, v6, 0); /*0x701494*/
  }
  return result; /*0x701499*/
}
// IDA 0x44f450: repair mission
int BuildingClass::Mission_Repair()
{
{
// 0x701410
{
  int result; // eax

  (*(void (__thiscall **)(void *, int))(this->q124)(this, 2); /*0x70141a*/
  {
    int v2; // eax
    int result; // eax
    BOOL v4; // eax
    int v5; // edx
    int v6; // eax
    _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

    (*(void (__thiscall **)(void *, int))(*(_DWORD *)&this->isOnMap2))(this, 2); /*0x70141a*/
    v2 = *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 160); /*0x70142a*/
    this->health = v2; /*0x701432*/
    this->estimatedHealth = v2; /*0x701435*/
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this); /*0x70143a*/
    if ( result == 6 ) /*0x701440*/
    {
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->locationZ2))(this, 0); /*0x701448*/
      v4 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)&g_RulesClass_Instance[1].WarpOut; /*0x701465*/
      globalHelper_051EE0((int)this, v5, v4); /*0x701473*/
      v6 = (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v7); /*0x701483*/
      return StartAudioControllerAt(g_RulesClass_Instance->CratePromoteSound, v6, 0); /*0x701494*/
    }
    return result; /*0x701499*/
  }
  return result; /*0x701499*/
}
    return {}; // TODO stub - retranslate via C-line pipeline
    return 20;
}
}

// 0x44b780
void BuildingClass::ProcessRepair() {}
// 0x457ce0
bool BuildingClass::CanRepair(TechnoClass* repairer) {
if (!repairer)
    return false;
if (!this->q520->CanBeOccupied)
    return false;
if (this->currentMission == 18)
    return false;
if (this->currentMission == 19)
    return false;
CoordStruct exitCoords;
CoordStruct* coords = this->GetExitCoords(&exitCoords);
if (!IsCoordVisibleMap(&DataGlobal_87F7E8[0], coords) || this->MissionDispatch())
    return false;
int typeEntry = *((int*)repairer + 432);
if (!*(unsigned char*)(typeEntry + 3764))
    return *(unsigned char*)(typeEntry + 3765)
        && !Object::IsAlliedWithObjectHouse(this->owner, repairer)
        && this->MissionStubReturnZero6();
HouseClass* ownerHouse = this->owner;
return (ownerHouse == repairer->owner || *(unsigned char*)(*((int*)ownerHouse + 13) + 422))
    && this->MissionStubReturnZero6() != this->q520->MaxNumberOccupants
    && !BuildingClass::IsHealthLow(this)
    && !BuildingClass::IsBeingRepairedOrCaptured(repairer);

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
  int result; // eax
  int v3; // edi
  void *v4; // ecx
  _DWORD *v5; // esi
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp+4h]

  result = v7; /*0x446ff0*/
  if ( v7 == -1 ) /*0x446ffe*/
  {
    *((_BYTE *)this + 1768) = *((_BYTE *)this + 1768) == 0; /*0x447042*/
  }
  else if ( v7 ) /*0x447002*/
  {
    if ( v7 == 1 ) /*0x447007*/
    {
      IDA_LOBYTE(result) = *((_BYTE *)this + 1768); /*0x447009*/
      if ( (_BYTE)result ) /*0x447011*/
        return result; /*0x447011*/
      *((_BYTE *)this + 1768) = 1; /*0x447017*/
    }
  }
  else
  {
    result = *((unsigned __int8 *)this + 1768); /*0x447020*/
    if ( !(_BYTE)result ) /*0x447028*/
      return result; /*0x447028*/
    *((_BYTE *)this + 1768) = 0; /*0x44702e*/
  }
  if ( this->IsBeingRepaired ) /*0x447048*/
  {
    if ( this->health == this->Type->Strength ) /*0x447061*/
    {
      v3 = g_RulesClass_Instance->Scorches1[3]; /*0x447068*/
    }
    else
    {
      v3 = g_RulesClass_Instance->Scorches2[2]; /*0x447076*/
      if ( (unsigned __int8)House::IsHumanPlayer(*((void **)&this->attachedTag5)) ) /*0x447082*/
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)&this->needsRedraw8))(this, 7); /*0x447091*/
      v4 = (void *)this->owner; /*0x447097*/
      this->NeedsRepairs = 1; /*0x44709d*/
      if ( (unsigned __int8)House::IsHumanPlayer(v4) ) /*0x4470a4*/
        VoxClass::FindAndPlay(aEvaRepairing, -1); /*0x4470b7*/
    }
  }
  else
  {
    v3 = g_RulesClass_Instance->Scorches2[2]; /*0x4470c3*/
  }
  result = House::IsHumanPlayer(*((void **)&this->attachedTag5)); /*0x4470cf*/
  if ( (_BYTE)result ) /*0x4470d6*/
  {
    v5 = (_DWORD *)((char *)&this->ambientSoundController6); /*0x4470d8*/
    v6[0] = *v5; /*0x4470e2*/
    v6[1] = v5[1]; /*0x4470eb*/
    v6[2] = v5[2]; /*0x4470f6*/
    return StartAudioControllerAt(v3, (int)v6, 0); /*0x4470fa*/
  }
  return result; /*0x4470ff*/
// IDA 0x459ed0: missile building mission
int BuildingClass::Mission_Missile()
{
{
    return this->locomotorTarget || this->locomotorSource;
}
    return {}; // TODO stub - retranslate via C-line pipeline
}

// 0x44c980
void BuildingClass::ProcessSuperWeaponEffects() {}
  int v2; // ecx
  void *v3; // eax
  int v4; // ebp
  void *v5; // edi
  void *v6; // ebx
  int *v7; // eax
  void **v8; // eax
  void **v9; // edi
  void *v10; // eax
  int *v11; // ebx
  _DWORD *UIObject; // eax
  int v13; // edi
  _DWORD *v14; // ecx
  int *v15; // eax
  double v16; // st7
  int result; // eax
  void **v18; // eax
  void **v19; // eax
  void (__thiscall **vfptr0)(void *, void *, _DWORD); // edi
  void *v21; // eax
  int (__thiscall **v22)(void *, _BYTE *, void *); // edi
  void *v23; // eax
  void **v24; // eax
  int (__thiscall **v25)(void *, _BYTE *, void *); // edi
  void *v26; // eax
  int *v27; // eax
  int v28; // ebp
  void *v29; // ebx
  _WORD *v30; // eax
  int v31; // eax
  int v32; // edx
  __int16 *v33; // eax
  double v34; // st7
  void *v35; // eax
  int v36; // eax
  char v37; // cl
  double v39; // st7
  double v40; // st7
  double v41; // st7
  int (__thiscall **v42)(_DWORD, _DWORD, _DWORD); // edx
  int *v43; // eax
  _DWORD *v44; // eax
  int v45; // ebx
  double v46; // st7
  char IsCloseEnoughToBuilding; // al
  double v48; // st7
  char v49; // al
  double v50; // st7
  unsigned int v51; // edi
  unsigned int v52; // ebx
  double v53; // st7
  double v54; // st7
  double v55; // st7
  int v57; // ebp
  int v58; // eax
  char *MissionControl; // eax
  int v60; // [esp+34h] [ebp-FCh]
  int v61; // [esp+34h] [ebp-FCh]
  double v62; // [esp+3Ch] [ebp-F4h]
  double v63; // [esp+3Ch] [ebp-F4h]
  __int64 v64; // [esp+40h] [ebp-F0h]
  double v65; // [esp+40h] [ebp-F0h]
  __int16 *v66; // [esp+44h] [ebp-ECh]
  void **v67; // [esp+5Ch] [ebp-D4h] BYREF
  double v68; // [esp+60h] [ebp-D0h] BYREF
  double v69; // [esp+68h] [ebp-C8h]
  double v70; // [esp+70h] [ebp-C0h]
  double v71; // [esp+78h] [ebp-B8h] BYREF
  void **v72; // [esp+8Ch] [ebp-A4h] BYREF
  double v73; // [esp+90h] [ebp-A0h]
  int v74; // [esp+98h] [ebp-98h]
  int v75[2]; // [esp+A4h] [ebp-8Ch] BYREF
  int v76; // [esp+ACh] [ebp-84h]
  double v77; // [esp+B0h] [ebp-80h] BYREF
  double v78; // [esp+C0h] [ebp-70h] BYREF
  double v80[2]; // [esp+D0h] [ebp-60h] BYREF
  __int16 v81; // [esp+E0h] [ebp-50h] BYREF
  _DWORD v82[3]; // [esp+E4h] [ebp-4Ch] BYREF
  int v83; // [esp+F0h] [ebp-40h] BYREF
  _BYTE v84[4]; // [esp+F4h] [ebp-3Ch] BYREF
  _BYTE v85[4]; // [esp+F8h] [ebp-38h] BYREF
  int v86; // [esp+FCh] [ebp-34h] BYREF
  _BYTE v87[12]; // [esp+100h] [ebp-30h] BYREF
  _BYTE v88[12]; // [esp+10Ch] [ebp-24h] BYREF
  _BYTE v89[12]; // [esp+118h] [ebp-18h] BYREF
  _BYTE v90[12]; // [esp+124h] [ebp-Ch] BYREF

  if ( this->Type->NukeSilo ) /*0x44c998*/
  {
    switch ( this->missionStatus ) /*0x44c9b5*/
    {
      case 0: /*0x44c9b5*/
        this->BuildingClass_field_bool_6DD = 0; /*0x44c9c0*/
        BuildingClass::StartProduction((int *)this, 2); /*0x44c9c7*/
        v2 = this->owner; /*0x44c9cc*/
        this->missionStatus = 1; /*0x44c9d2*/
        v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(v2 + 22404)); /*0x44c9e8*/
        v4 = this->owner; /*0x44c9ed*/
        v5 = v3; /*0x44c9f8*/
        v6 = (void *)*((_DWORD *)g_AnimTypeCount + AnimTypeClass::FindIndex(aPsiwarn)); /*0x44ca0f*/
        v7 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v5 + 72))(v5, v82); /*0x44ca14*/
        v75[0] = *v7; /*0x44ca1e*/
        v75[1] = v7[1]; /*0x44ca25*/
        v76 = v7[2]; /*0x44ca2c*/
        v8 = (void **)RA2_OPNEW(0x1C8u); /*0x44ca30*/
        if ( v8 ) /*0x44ca3a*/
          v9 = AnimClass::ctor(v8, v6, v75, 0, 1, (void *)0x600, 0, 0); /*0x44ca56*/
        else
          v9 = 0; /*0x44ca5a*/
        BuildingClass::SetField95(v9, 0); /*0x44ca60*/
        Function::424CA0(v9, v4); /*0x44ca68*/
        *((_BYTE *)v9 + 413) = 1; /*0x44ca6d*/
        this->PsiWarnAnim = v9; /*0x44ca74*/
        goto LABEL_7; /*0x44ca74*/
      case 1: /*0x44c9b5*/
  LABEL_7:
        if ( this->BuildingClass_field_bool_6DD ) /*0x44ca7a*/
        {
          BuildingClass::StartProduction((int *)this, 4); /*0x44ca88*/
          this->missionStatus = 2; /*0x44ca8d*/
        }
        goto LABEL_9; /*0x44ca8d*/
      case 2: /*0x44c9b5*/
  LABEL_9:
        (*(void (__thiscall **)(void *, double *))(*(_DWORD *)&this->referenceCount2))(this, &v71); /*0x44ca97*/
        v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(this->owner + 22404)); /*0x44cab5*/
        v11 = *(int **)(*((_DWORD *)g_SuperWeaponPool + this->FiringSWType) + 156); /*0x44cad0*/
        UIObject = CreateUIObjectCOM(v11[40], (int)v10, (int)this, v11[41], v11[43], 255, 1); /*0x44caed*/
        v13 = (int)UIObject; /*0x44caf2*/
        if ( !UIObject ) /*0x44caf6*/
          goto LABEL_18; /*0x44caf6*/
        Function::46B260(UIObject, (int)v11); /*0x44caff*/
        v14 = (_DWORD *)this->PsiWarnAnim; /*0x44cb04*/
        if ( v14 ) /*0x44cb0c*/
        {
          BuildingClass::SetField95(v14, v13); /*0x44cb0f*/
          this->PsiWarnAnim = 0; /*0x44cb14*/
        }
        (*(void (__thiscall **)(int))(v13->u32_D4)(v13); /*0x44cb22*/
        v15 = (int *)(*(int (__thiscall **)(void *, double *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->q0446))( /*0x44cb46*/
                       this,
                       &v77,
                       0,
                       0,
                       0,
                       0);
        v75[0] = *v15; /*0x44cb53*/
        v75[1] = v15[1]; /*0x44cb5f*/
        v76 = v15[2]; /*0x44cb66*/
        v73 = Math::SinCos(1.570748388432313); /*0x44cb6f*/
        v78 = Math::ArcTan2(1.570748388432313) * v73 * 10.0; /*0x44cb96*/
        v73 = Math::ArcTan2(1.570748388432313); /*0x44cba2*/
        v16 = Math::ArcTan2(1.570748388432313); /*0x44cbb0*/
        v80[1] = v78; /*0x44cbc7*/
        v69 = v78; /*0x44cbec*/
        v80[0] = v16 * v73 * 10.0; /*0x44cbf0*/
        v68 = v80[0]; /*0x44cc05*/
        v70 = Math::SinCos(1.570748388432313) * 10.0; /*0x44cc30*/
        if ( (*(unsigned __int8 (__thiscall **)(int, int *, double *))(v13->u32_1F0)(v13, v75, &v68) ) /*0x44cc38*/
        {
          v18 = (void **)RA2_OPNEW(0x1C8u); /*0x44cc67*/
          if ( v18 ) /*0x44cc71*/
            v19 = AnimClass::ctor(v18, (void *)g_RulesClass_Instance->InfantryHeadPop, v75, 0, 1, (void *)0x600, 0, 0); /*0x44cc94*/
          else
            v19 = 0; /*0x44cc9b*/
          v19[64] = (void *)-100; /*0x44cc9d*/
          this->missionStatus = 3; /*0x44cca7*/
  LABEL_18:
          result = 1; /*0x44ccb1*/
        }
        else
        {
          (*(void (__thiscall **)(int, int))(v13->q080)(v13, 1); /*0x44cc48*/
          this->missionStatus = 3; /*0x44cc4b*/
          result = 1; /*0x44cc55*/
        }
        break; /*0x44cc61*/
      case 3: /*0x44c9b5*/
        BuildingClass::StartProduction((int *)this, 5); /*0x44ccc2*/
        this->missionStatus = 4; /*0x44ccc7*/
        return 6; /*0x44ccdd*/
      case 4: /*0x44c9b5*/
  LABEL_54:
        BuildingClass::StartProduction((int *)this, 1); /*0x44d53c*/
        (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 5, 0); /*0x44d54d*/
        return 60; /*0x44d55f*/
      default:
        goto LABEL_20;
    }
  }
  else
  {
  LABEL_20:
    if ( this->FiringSWType != -1 ) /*0x44cce5*/
    {
      vfptr0 = *(void (__thiscall ***)(void *, void *, _DWORD))this; /*0x44cced*/
      v64 = (unsigned int)(this->owner + 22404); /*0x44ccf6*/
      v21 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v64); /*0x44ccfc*/
      vfptr0[243](this, v21, IDA_HIDWORD(v64)); /*0x44cd04*/
      (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 5, 0); /*0x44cd12*/
    }
    if ( this->Type->EMPulseCannon ) /*0x44cd1e*/
    {
      switch ( this->missionStatus ) /*0x44cd3b*/
      {
        case 0: /*0x44cd3b*/
          v22 = *(int (__thiscall ***)(void *, _BYTE *, void *))this; /*0x44cd48*/
          v23 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(this->owner + 22400)); /*0x44cd56*/
          v24 = *(void ***)v22[314](this, v85, v23); /*0x44cd72*/
          v25 = *(int (__thiscall ***)(void *, _BYTE *, void *))this; /*0x44cd74*/
          v66 = (__int16 *)(this->owner + 22400); /*0x44cd7c*/
          v67 = v24; /*0x44cd82*/
          v26 = CellCoord::To_CellObj(&MapClass_Instance, v66); /*0x44cd86*/
          v72 = *(void ***)v25[178](this, v84, v26); /*0x44cdae*/
          if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)&this->u32_710, &v86) - (_WORD)v67) ) /*0x44cdce*/
          {
            FacingClass::Update((char *)&this->primaryFacing, &v67); /*0x44cddb*/
            return 1; /*0x44cde0*/
          }
          else
          {
            if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)&this->NoCrew, &v83) - (_WORD)v72) ) /*0x44ce10*/
              FacingClass::Update((char *)&this->barrelFacing, &v72); /*0x44ce1d*/
            else
              this->missionStatus = 1; /*0x44ce2f*/
            return 1; /*0x44ce22*/
          }
        case 1: /*0x44cd3b*/
          v67 = (void **)RA2_OPNEW(0x1C8u); /*0x44ce53*/
          if ( v67 ) /*0x44ce59*/
          {
            v72 = (void **)((char *)g_AnimTypeCount + 4 * GlobalArray::FindString(aPulsball)); /*0x44ce81*/
            v27 = (int *)(*(int (__thiscall **)(void *, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->q0446))( /*0x44ce9c*/
                           this,
                           v90,
                           0,
                           0,
                           0,
                           0);
            AnimClass::ctor(v67, *v72, v27, 0, 1, (void *)0x600, 0, 0); /*0x44ceae*/
          }
          this->missionStatus = 2; /*0x44ceb3*/
          return 32; /*0x44cec9*/
        case 2: /*0x44cd3b*/
          v28 = *(_DWORD *)(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->q1946))(this, 0); /*0x44cefe*/
          v29 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(this->owner + 22400)); /*0x44cf22*/
          IDA_LODWORD(v71) = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(this->owner + 22400)); /*0x44cf2a*/
          if ( g_ArmageddonMode || *(_DWORD *)(this->owner + 22400) == g_TerrainTypeTable ) /*0x44cf50*/
          {
            BuildingClass::StartProduction((int *)this, 1); /*0x44d564*/
            (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 5, 0); /*0x44d571*/
            result = 60; /*0x44d577*/
          }
          else
          {
            v30 = (_WORD *)(*(int (__thiscall **)(void *, double *, void *))(*(_DWORD *)&this->q11C2))(this, &v78, v29); /*0x44cf6d*/
            FacingClass::Update((char *)&this->barrelFacing, v30); /*0x44cf7a*/
            v31 = (*(int (__thiscall **)(void *, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->q0446))( /*0x44cf9d*/
                    this,
                    v88,
                    0,
                    0,
                    0,
                    0);
            v73 = *(double *)v31; /*0x44cfa5*/
            v74 = *(_DWORD *)(v31 + 8); /*0x44cfb3*/
            v32 = (*(__int16 *)(this->owner + 22400) << 8) + 128; /*0x44cfdc*/
            v82[1] = (*(__int16 *)(this->owner + 22402) << 8) + 128; /*0x44cfe2*/
            v82[0] = v32; /*0x44cfef*/
            v82[2] = 0; /*0x44cff6*/
            Cell::GetGroundHeight(v82); /*0x44d001*/
            v33 = (__int16 *)(this->owner + 22400); /*0x44d00f*/
            IDA_LODWORD(v77) = (*v33 << 8) + 128; /*0x44d023*/
            IDA_HIDWORD(v77) = (v33[1] << 8) + 128; /*0x44d03c*/
            v34 = Math::CalcAngle( /*0x44d04f*/
                    (double)SHIDWORD(v73) - (double)SHIDWORD(v77),
                    (double)SLODWORD(v77) - (double)SLODWORD(v73));
            IDA_LOWORD(v77) = Math::RoundToInt((v34 - 1.570796326794897) * -10430.06004058427); /*0x44d065*/
            v65 = (double)g_RulesClass_Instance[1].WeatherConBoltExplosion; /*0x44d07a*/
            v35 = (void *)ObjectClass::DistanceTo(this, (int)v29); /*0x44d07e*/
            v36 = TechnoClass::ComputeScanRange(v35, v65); /*0x44d085*/
            v37 = *(_BYTE *)(v28 + 303); /*0x44d08a*/
            v36 = v36; /*0x44d090*/
            v36 = v36; /*0x44d092*/
            v72 = (void **)CreateUIObjectCOM( /*0x44d0ca*/
                             *(_DWORD *)(v28 + 160),
                             (int)v29,
                             (int)this,
                             *(_DWORD *)(v28 + 164),
                             *(_DWORD *)(v28 + 172),
                             3 * v36 / 4,
                             v37);
            v70 = 0.0; /*0x44d0de*/
            v73 = Math::Sqrt(10000.0); /*0x44d108*/
            v77 = (double)(SLOWORD(v77) - 0x3FFF) * -0.00009587672516830327; /*0x44d120*/
            v68 = Math::ArcTan2(v77) * v73; /*0x44d13d*/
            v39 = -(Math::SinCos(v77) * v73); /*0x44d14d*/
            v69 = v39; /*0x44d14f*/
            if ( v68 == 0.0 && v39 == 0.0 && v70 == 0.0 ) /*0x44d180*/
              v68 = 100.0; /*0x44d182*/
            v73 = (double)v36; /*0x44d1a0*/
            v40 = Math::Sqrt(v68 * v68 + v70 * v70 + v39 * v39); /*0x44d1bf*/
            v41 = v73 / v40; /*0x44d1c4*/
            v42 = *(int (__thiscall ***)(_DWORD, _DWORD, _DWORD))this; /*0x44d1c8*/
            v68 = v41 * v68; /*0x44d1df*/
            v69 = v69 * v41; /*0x44d1e9*/
            v70 = v70 * v41; /*0x44d1f3*/
            v43 = (int *)((int (__thiscall **)(void *, _BYTE *, _DWORD))v42)[192](this, v87, 0); /*0x44d1f9*/
            v75[0] = *v43; /*0x44d201*/
            v75[1] = v43[1]; /*0x44d20c*/
            v76 = v43[2]; /*0x44d213*/
            v44 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)IDA_LODWORD(v71) + 72))(IDA_LODWORD(v71), v89); /*0x44d221*/
            v45 = v44[2] - v76; /*0x44d23c*/
            IDA_LODWORD(v71) = (*v44 - v75[0]) * (*v44 - v75[0]) + (v44[1] - v75[1]) * (v44[1] - v75[1]); /*0x44d250*/
            v71 = (double)SLODWORD(v71); /*0x44d260*/
            v62 = (double)g_RulesClass_Instance[1].WeatherConBoltExplosion; /*0x44d272*/
            v46 = Math::Sqrt(v71); /*0x44d278*/
            v60 = Math::RoundToInt(v46); /*0x44d285*/
            IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x44d28a*/
            if ( !ComputeMathFacingAngle(IsCloseEnoughToBuilding, v36, v60, v45, v62, &v67) ) /*0x44d293*/
            {
              v63 = (double)g_RulesClass_Instance[1].WeatherConBoltExplosion; /*0x44d2bc*/
              v48 = Math::Sqrt(v71); /*0x44d2c2*/
              v61 = Math::RoundToInt(v48); /*0x44d2cf*/
              v49 = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x44d2e4*/
              if ( !ComputeMathFacingAngle(v49, 10 * v36 / 8, v61, v45, v63, &v67) ) /*0x44d2ed*/
              {
                IDA_LOWORD(v71) = -1536; /*0x44d2fa*/
                v67 = (void **)IDA_LODWORD(v71); /*0x44d305*/
              }
            }
            v73 = Math::Sqrt(v69 * v69 + v68 * v68); /*0x44d32f*/
            v50 = Math::CalcAngle(v70, v73); /*0x44d343*/
            IDA_LODWORD(v71) = (__int16)Math::RoundToInt((v50 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x44d365*/
            v71 = (double)SLODWORD(v71) * -0.00009587672516830327; /*0x44d373*/
            v73 = Math::Sqrt(v69 * v69 + v70 * v70 + v68 * v68); /*0x44d39b*/
            if ( v71 != 0.0 ) /*0x44d3b1*/
            {
              v51 = IDA_HIDWORD(v71); /*0x44d3b3*/
              v52 = IDA_LODWORD(v71); /*0x44d3b7*/
              v68 = v68 / Math::ArcTan2(v71); /*0x44d3c8*/
              v69 = v69 / Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v51, v52))); /*0x44d3d8*/
            }
            IDA_LODWORD(v71) = (__int16)v67 - 0x3FFF; /*0x44d3ea*/
            v53 = Math::ArcTan2((double)SLODWORD(v71) * -0.00009587672516830327); /*0x44d3fb*/
            v68 = v53 * v68; /*0x44d409*/
            IDA_LODWORD(v71) = (__int16)v67 - 0x3FFF; /*0x44d412*/
            v54 = Math::ArcTan2((double)SLODWORD(v71) * -0.00009587672516830327); /*0x44d423*/
            v69 = v54 * v69; /*0x44d431*/
            IDA_LODWORD(v71) = (__int16)v67 - 0x3FFF; /*0x44d43b*/
            v55 = Math::SinCos((double)SLODWORD(v71) * -0.00009587672516830327); /*0x44d44c*/
            v72 = v72; /*0x44d459*/
            v70 = v55 * v73; /*0x44d462*/
            if ( !(*((unsigned __int8 (__thiscall **)(void **, int *, double *))*v72 + 124))(v72, v75, &v68) ) /*0x44d482*/
            {
              (*((void (__stdcall **)(void **))*v72 + 2))(v72); /*0x44d539*/
              goto LABEL_54; /*0x44d539*/
            }
            if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->q1980))(this) /*0x44d4a0*/
              && *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3234) )
            {
              TechnoClass::Fire((int *)&this->q0606); /*0x44d4b0*/
              TechnoClass::Fire((int *)&this->customSound4); /*0x44d4bb*/
            }
            if ( !*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3285) ) /*0x44d4ca*/
            {
              v57 = *(_DWORD *)(*(_DWORD *)(v28 + 192) /*0x44d4fb*/
                              + 4 * ((unsigned int)Random::State(Randomizer_Global) % *(_DWORD *)(v28 + 204)));
              v58 = (*(int (__thiscall **)(void *, double *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->q0446))( /*0x44d510*/
                      this,
                      v80,
                      0,
                      0,
                      0,
                      0);
              StartAudioControllerAt(v57, v58, 0); /*0x44d51a*/
            }
            this->missionStatus = 3; /*0x44d51f*/
            result = 1; /*0x44d529*/
          }
          break; /*0x44d535*/
        case 3: /*0x44cd3b*/
          v81 = 0x4000; /*0x44ced1*/
          FacingClass::Update((char *)&this->barrelFacing, &v81); /*0x44cee2*/
          goto LABEL_54; /*0x44cee7*/
        default:
          goto LABEL_56;
      }
    }
    else
    {
  LABEL_56:
      MissionControl = MissionClass::GetMissionControl(this); /*0x44d584*/
      return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x44d594*/
    }
  }
  return result; /*0x44cc5a*/
// IDA 0x505310: find building by SuperWeapon type
// 0x505310
BuildingClass* BuildingClass::FindBySWType(int sw_type)
{
  char v2; // cl
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int i; // esi

  v2 = SuperWeaponTypeClass::FindByName((void *)(*(&this->vtable23) + 152)); /*0x50532a*/
  v3 = 0; /*0x50532c*/
  v4 = 1 << v2; /*0x50532e*/
  v5 = *(_DWORD *)(sw_type + 16); /*0x505330*/
  if ( v5 <= 0 ) /*0x505335*/
    return 0; /*0x50534e*/
  for ( i = *(_DWORD *)(sw_type + 4); (v4 & *(_DWORD *)(*(_DWORD *)i + 1740)) == 0; i += 4 ) /*0x50533a*/
  {
    if ( ++v3 >= v5 ) /*0x50534c*/
      return 0; /*0x50534c*/
  }
  return *(_DWORD *)(*(_DWORD *)(sw_type + 4) + 4 * v3); /*0x50534e*/
}
// GOLDEN: 0x451690
// BuildingClass::ClearSuperWeaponAnim — pop the most-recently-added upgrade
// (which may grant a super weapon), clear its anim slot, and (if it granted a
// super weapon) refresh the owning house's super-weapon collection.
// Faithful 1:1 with IDA: count read, if/else on the upgrade's flags, dense
// ordered member WRITES, two direct calls, multiple returns, no loop.
char BuildingClass::ClearSuperWeaponAnim()
{
// 0x505310
{
  int uniqueId; // ecx
  int i; // esi

  char v2 = SuperWeaponTypeClass::FindByName((void *)(this->attachedTag + 152)); /*0x50532a*/
  {
    char v2; // cl
    int v3; // eax
    int v4; // edx
    int v5; // ecx
    int i; // esi

    v2 = SuperWeaponTypeClass::FindByName((void *)(*(&this->vtable23) + 152)); /*0x50532a*/
    v3 = 0; /*0x50532c*/
    v4 = 1 << v2; /*0x50532e*/
    v5 = *(_DWORD *)(a2 + 16); /*0x505330*/
    if ( v5 <= 0 ) /*0x505335*/
      return 0; /*0x50534e*/
    for ( i = *(_DWORD *)(a2 + 4); (v4 & *(_DWORD *)(*(_DWORD *)i + 1740)) == 0; i += 4 ) /*0x50533a*/
    {
      if ( ++v3 >= v5 ) /*0x50534c*/
        return 0; /*0x50534c*/
    }
    return *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v3); /*0x50534e*/
  }
  return *(_DWORD *)(*(_DWORD *)&aP1->__pad_0[4] + 4 * v3); /*0x50534e*/
}
    return {}; // TODO stub - retranslate via C-line pipeline
    }

// 0x4503f0
void BuildingClass::UpdatePrism() {}
  __int64 v2; // rax
  int v3; // edx
  int v4; // eax
  int v5; // ecx

  IDA_LODWORD(v2) = *(&this->q0B09); /*0x4503f3*/
  if ( (_DWORD)v2 ) /*0x4503fb*/
  {
    v3 = *(&this->q0B43) - 1; /*0x450407*/
    *(&this->q0B43) = v3; /*0x45040a*/
    if ( v3 <= 0 ) /*0x450412*/
    {
      v4 = v2 - 1; /*0x450418*/
      *(&this->q0B43) = 0; /*0x450419*/
      if ( v4 ) /*0x450423*/
      {
        IDA_LODWORD(v2) = v4 - 1; /*0x450425*/
        if ( !(_DWORD)v2 ) /*0x450426*/
        {
          IDA_LODWORD(v2) = BuildingClass::FireLaser(this, *(&this->q0B40), *(&this->q0B41), *(&this->q0B42)); /*0x45044d*/
          *(&this->q0B09) = 0; /*0x450452*/
          return v2; /*0x45045d*/
        }
      }
      else
      {
        IDA_LODWORD(v2) = *(&this->q0443); /*0x45045e*/
        if ( (_DWORD)v2 ) /*0x450466*/
        {
          IDA_LODWORD(v2) = this->vt_slot_960(v2, *(&this->q0B40), 1); /*0x450476*/
          if ( !(_DWORD)v2 ) /*0x45047e*/
          {
            IDA_LODWORD(v2) = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 972))( /*0x450492*/
                            this,
                            *(&this->q0443),
                            *(&this->queuedMission0));
            v5 = v2; /*0x450498*/
            if ( (_DWORD)v2 ) /*0x45049c*/
            {
              IDA_LODWORD(v2) = *(&this->q0A09); /*0x45049e*/
              if ( (_DWORD)v2 ) /*0x4504a6*/
              {
                v2 = 1374389535LL /*0x4504c2*/
                   * (unsigned int)(((_DWORD)v2 * IDA_HIDWORD(g_RulesClass_Instance->ZoomInFactor) + 100) << 8);
                *(_DWORD *)(v5 + 336) = IDA_HIDWORD(v2) >> 5; /*0x4504c7*/
                *(&this->q0A09) = 0; /*0x4504cd*/
              }
            }
          }
        }
      }
      *(&this->suspendedMission9) = 0; /*0x4504d7*/
    }
  }
  return v2; /*0x45045c*/
}
      int v14 = this->gattlingValue;
      if ( !*(_BYTE *)(v14 + 5825) && !*(_BYTE *)(v14 + 5826) )
      {
        if ( !Array::Contains((int *)this, v53) && Array::ContainsValue((int *)this, v53) )
        {
          (*(void (__thiscall **)(void *, int, int))(this->temporalTargetingMe)(this, 2, v53);
          Array::Contains((int *)this, v53);
        }
        char v54 = 0;
        if ( Array::Contains((int *)this, (int)v13) )
        {
          int v15 = this->gattlingValue;
          if ( *(_BYTE *)(v15 + 5811) || *(_BYTE *)(v15 + 5820) )
          {
            unsigned int v16 = v13 ? ((v13[20] & 4) != 0 ? (unsigned int)v13 : 0) : 0;
  _DWORD *v17; // eax
            v17 = (_DWORD *)(*(int (__thiscall **)(void *, char *, unsigned int))(this->lineTrailer)(
                              this,
  char v50[12]; // [esp+4Ch] [ebp-24h] BYREF
                              v50,
                              v16);
            void * v18 = Coord::To_Cell(DataGlobal_87F7E8, v17);
            void * v19 = *(void **)(v16 + 1444);
            if ( v19 )
            {
              if ( v18 != v19 )
                v54 = 1;
            }
          }
        }
        if ( Team::GetMember(this, 0) )
        {
          int v20 = this->gattlingValue;
          if ( *(_BYTE *)(v20 + 5801) || *(_BYTE *)(v20 + 5803) )
          {
            Member = Team::GetMember(this, 0);
            _DWORD * v22 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)Member + 72))(Member, v51);
            _DWORD * v23 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v52);
            int v24 = *v23 - *v22;
            int v25 = v23[1];
            int v26 = v23[2];
            v24 = v24;
            int v27 = v22[2];
            v47 = v25 - v22[1];
            v48 = v26 - v27;
            double v28 = Math::Sqrt((double)v24 * (double)v24 + (double)(v26 - v27) * (double)(v26 - v27) + (double)v47 * (double)v47);
            if ( (int)Math::RoundToInt(v28) > 128 )
              v54 = 1;
          }
        }
        if ( (*(int (__thiscall **)(void *, int, _BYTE *))(this->temporalTargetingMe)(this, 19, v13) == 1 || v54 )
        {
          *v12 = this;
          _BYTE * v29 = (_BYTE *)this->gattlingValue;
          if ( v29[5811] || v29[5820] )
          {
  int v45; // [esp+30h] [ebp-40h] BYREF
            _WORD * v30 = (_WORD *)(*(int (__thiscall **)(void *, int *))(this->airstrikeTintTimer)(this, &v45);
  int v55; // [esp+74h] [ebp+4h]
            IDA_LOWORD(v55) = *v30 + 3;
            IDA_HIWORD(v55) = v30[1] + 1;
            v55 = v55;
            *v12 = CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v55);
            if ( (*(int (__thiscall **)(void *, int, _DWORD *, _BYTE *))(this->isImmobilized)(this, 18, v12, v13) == 20 )
            {
              (*(void (__thiscall **)(void *, int, _BYTE *))(this->temporalTargetingMe)(this, 24, v13);
              if ( (*(int (__thiscall **)(void *, int, _BYTE *))(this->temporalTargetingMe)(this, 22, v13) != 1 )
              {
                (*(void (__thiscall **)(_BYTE *, _DWORD *, int, int))(*(_DWORD *)v13 + 372))(
                  v13,
                  &DataGlobal_87F7E8[29720],
                  1,
                  1);
                return 1;
              }
            }
          }
          else if ( v29[5835] )
          {
            *v12 = this;
            if ( (*(int (__thiscall **)(void *, int, _DWORD *, _BYTE *))(this->isImmobilized)(this, 18, v12, v13) == 20 )
            {
              (*(void (__thiscall **)(void *, int))(this->temporalUsing)(this, 24);
              return 1;
            }
          }
        }
        return 1;
      }
      if ( Array::ContainsValue((int *)this, v53) )
      {
  _DWORD v49[3]; // [esp+40h] [ebp-30h] BYREF
        v49[0] = this->q027;
        v49[1] = this->owningHouseIndex;
        v49[2] = this->q029;
        *v12 = Coord::To_Cell(DataGlobal_87F7E8, v49);
        (*(void (__thiscall **)(void *, int, _DWORD *, int))(this->isImmobilized)(this, 18, v12, v53);
        return 1;
      }
      for ( i = 0; i < this->q03A; ++i )
      {
        int v32 = Team::GetMember(this, i);
        if ( (*(int (__thiscall **)(void *, int, int))(this->temporalTargetingMe)(this, 34, v32) == 10 )
          (*(void (__thiscall **)(void *, int, int))(this->temporalTargetingMe)(this, 23, v32);
      }
      if ( !Array::ContainsValue((int *)this, v53) )
        return 10;
      return 1;
    case 15:
      TechnoClass::Mission_RepairDispatch((int *)this, v55, v53, v55, v57);
      if ( !Object::IsAlliedWithObjectHouse(this->owner, v53) )
        return 0;
      if ( (*(int (__thiscall **)(void *))(this->q184)(this) == 18 )
        return 10;
      if ( (*(int (__thiscall **)(void *))(this->q184)(this) == 19 )
        return 10;
      if ( !this->BuildingClass_field_int_534 )
        return 10;
      if ( !DataGlobal_87F7E8[539633] && !Array::ContainsValue((int *)this, v53) )
      {
        int v4 = this->gattlingValue;
        if ( !*(_BYTE *)(v4 + 5806) && !*(_BYTE *)(v4 + 5807) )
          return 10;
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 1460) != 5
        && (*(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 3278)
         && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3278)
         || !*(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 3278)
         && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3278)) )
      {
        return 10;
      }
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3434) )
        return 10;
      if ( !this->HasPower )
        return 10;
      int v5 = this->gattlingValue;
      if ( !*(_BYTE *)(v5 + 5806) && !*(_BYTE *)(v5 + 5807) )
        goto LABEL_33;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 1 && !*(_BYTE *)(this->gattlingValue + 5806)
        || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 15 && !*(_BYTE *)(this->gattlingValue + 5807) )
      {
        return 10;
      }
      if ( *(_DWORD *)(v53 + 700) && (unsigned __int8)CellClass::HasContent() )
        return 10;
      v5 = this->gattlingValue;
      if ( this->inAirFlag + 1 <= this->ProductionFrame
        && *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 896) <= this->q4D0 )
      {
        return 1;
      }
LABEL_33:
      if ( this->u32_17F5 )
        return 1;
      if ( this->u32_17F3 )
      {
        if ( TechnoClass::CanSelfRepair((_BYTE *)v53)
          && (*(int (__thiscall **)(void *, int, int))(this->temporalTargetingMe)(this, 35, v53) != 1 )
        {
          return 1;
        }
        return 10;
      }
      if ( this->u32_17F1 )
      {
        if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 1
           || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 2)
          && (*(int (__thiscall **)(void *, int, int))(this->temporalTargetingMe)(this, 35, v53) != 1 )
        {
          return 1;
        }
        return 10;
      }
      if ( !this->q6028 && !this->q6024
        || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 15 )
      {
        int v8 = this->gattlingValue;
        if ( *(_BYTE *)(v8 + 5835) )
          return (*(int (__stdcall **)(int))(*(_DWORD *)(v53 + 4) + 12))(v53 + 4) != 2 ? 10 : 1;
        if ( !*(_BYTE *)(v8 + 5811)
          || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 1
          || !*(_BYTE *)(*(_DWORD *)(v53 + 1732) + 3598)
          || !DataGlobal_87F7E8[539633] && this->q118 )
        {
          if ( !*(_BYTE *)(this->gattlingValue + 5820)
            || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 1
            || !*(_BYTE *)(*(_DWORD *)(v53 + 1732) + 3599) )
          {
            return 0;
          }
          if ( !DataGlobal_87F7E8[539633] )
            return !this->q118;
        }
        return 1;
      }
      if ( v53 )
        int v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 15 ? v53 : 0;
      else
        v6 = 0;
      if ( *(_DWORD *)(v6 + 700) && (unsigned __int8)CellClass::HasContent() )
        return 10;
      if ( (unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(v6) )
        return 10;
      int v7 = -(this->q0BF != 0);
      IDA_LOBYTE(v7) = v7 & 0xF7;
      return v7 + 10;
    case 16:
      if ( this->q118
        || !Array::ContainsValue((int *)this, v53)
        || this->inLimbo
        || this->owner != (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 60))(v53) )
      {
        return 10;
      }
      _BYTE * v33 = (_BYTE *)this->gattlingValue;
      if ( v33[5819] || v33[5801] )
        return 1;
      if ( !v33[5820] )
        return 10;
      return 1;
    case 21:
      if ( (*(int (__thiscall **)(void *))(this->q184)(this) == 19 )
        return 10;
      _BYTE * v9 = (_BYTE *)this->gattlingValue;
      if ( v9[5806] || v9[5807] )
        return 1;
      if ( v9[5801] || v9[5802] || v9[5825] || v9[5826] )
      {
        int v11 = *(_DWORD *)this;
        this->BuildingClass_field_bool_6DD = 1;
        (*(void (__thiscall **)(void *, int, _DWORD))(v11 + 488))(this, 20, 0);
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v53 + 488))(v53, 0, 0);
        return 1;
      }
      else if ( v9[5803] )
      {
        int v10 = *(_DWORD *)this;
        this->BuildingClass_field_bool_6DD = 1;
        (*(void (__thiscall **)(void *, int, _DWORD))(v10 + 488))(this, 20, 0);
        return 1;
      }
      else if ( v9[5811] )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v53 + 488))(v53, 16, 0);
        return 1;
      }
      else
      {
        return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
    default:
      return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);

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
  int FoundationHeight; // edi

  FoundationHeight = BuildingTypeClass::GetFoundationHeight(*((_DWORD *)this + 328), 0); /*0x458e17*/
  if ( BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) >= FoundationHeight ) /*0x458e20*/
    return BuildingTypeClass::GetFoundationHeight(*((_DWORD *)this + 328), 0) / 2; /*0x458e46*/
  else
    return BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) / 2; /*0x458e31*/
// IDA 0x4a5130: check flag 24
// 0x4a5130
bool BuildingClass::CheckFlag24()
{
  return *(this + 24) && !*(this + 25); /*0x4a5140*/
}
// 0x452360
void BuildingClass::PowerOff() { HasPower = false; }
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

  IDA_LOBYTE(v2) = *(_BYTE *)(this + 1632); /*0x452363*/
  if ( (_BYTE)v2 ) /*0x45236b*/
  {
    v2 = *(_DWORD *)(this + 1312); /*0x452371*/
    if ( *(int *)(v2 + 3812) > 0 || *(_BYTE *)(v2 + 5491) ) /*0x452381*/
    {
      v3 = *(_DWORD *)(this + 540); /*0x45238b*/
      *(_BYTE *)(this + 1632) = 0; /*0x452393*/
      *(_BYTE *)(this + 128) = 1; /*0x45239a*/
      *(_BYTE *)(v3 + 22392) = 1; /*0x4523a0*/
      *(_BYTE *)(*(_DWORD *)(this + 540) + 22393) = 1; /*0x4523ac*/
      *(_BYTE *)(*(_DWORD *)(this + 540) + 508) = 1; /*0x4523b8*/
      BuildingClass::Deactivate(this); /*0x4523c0*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(void **)(&this->u32_D80)) ) /*0x4523cb*/
        VoxClass::FindAndPlay(aEvaBuildingoff, -1); /*0x4523de*/
      v2 = this->Type; /*0x4523e3*/
      v5 = *(_DWORD *)(v2 + 3768); /*0x4523e9*/
      if ( v5 ) /*0x4523f1*/
      {
        IDA_LOBYTE(v4) = *(_BYTE *)(v2 + 3278); /*0x4523f3*/
        IDA_LOBYTE(v2) = HouseClass::UpdateProduction(*(_DWORD *)(this + 540), v5, v4, 0); /*0x452403*/
      }
    }
  }
  return v2; /*0x452408*/
// 0x4496b0
BuildingTypeClass * * BuildingClass::CheckState1()
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char *MissionControl; // eax
  int v7; // esi
  _BYTE *v8; // ecx
  int v9; // eax
  int v10; // ebp
  _BYTE *Member; // eax
  _BYTE *v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int *v15; // eax
  double v16; // st7
  char *v17; // eax
  int v18; // esi
  char *v19; // eax
  int v20; // esi
  _BYTE v21[12]; // [esp+34h] [ebp-24h] BYREF
  _BYTE v22[12]; // [esp+40h] [ebp-18h] BYREF
  _DWORD v23[3]; // [esp+4Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3285) ) /*0x4496c7*/
  {
    TechnoClass::DrainAmmo((char *)this, this->missionData); /*0x4496da*/
    this->missionData = 0; /*0x4496df*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->deployAnim4))(this) ) /*0x4496ed*/
  {
    v2 = this->Type; /*0x4496fb*/
    *((_BYTE *)this + 1757) = 1; /*0x449701*/
    if ( *(_BYTE *)(v2 + 5827) /*0x449780*/
      || ((v3 = *(_DWORD *)(v2 + 5872), v3 == -1)
       || (v4 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + v3) + 40) + 200)) == 0
       || DynamicVector::GetOrGrow((_DWORD *)(this->owner + 21840), *(_DWORD *)(v4 + 3576)))
      && this->Type->SuperWeapon != -1
      || this->Type->CanBeOccupied
      && (*(int (__thiscall **)(void *))(*(_DWORD *)&this->ironTintTimer2))(this) <= 0
      || !this->target )
    {
      MissionControl = MissionClass::GetMissionControl(this); /*0x4497b1*/
      v7 = Math::RoundToInt(*((double *)MissionControl + 3) * 900.0); /*0x4497c4*/
      return v7 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x4497da*/
    }
    else
    {
      (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 1, 0); /*0x449792*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)&this->missionData2))(this); /*0x44979c*/
      return 1; /*0x4497a2*/
    }
  }
  v8 = (_BYTE *)this->Type; /*0x4497e4*/
  if ( v8[5813] ) /*0x4497ea*/
    return 100; /*0x449800*/
  v9 = this->missionStatus; /*0x449801*/
  if ( !v9 ) /*0x44980a*/
  {
    BuildingClass::StartProduction((int *)this, 1); /*0x449961*/
    this->missionStatus = 1; /*0x449966*/
  LABEL_32:
    if ( this->Type->UnitReload /*0x4499ab*/
      && Team::AllMembersValid((int *)this)
      && (*(int (__thiscall **)(void *, int))(*(_DWORD *)&this->q0F88))(this, 29) != 1
      && (*(int (__thiscall **)(void *, int))(*(_DWORD *)&this->q0F88))(this, 19) == 1 )
    {
      (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 20, 0); /*0x4499b5*/
    }
    if ( this->Type->UnitRepair ) /*0x4499c1*/
    {
      v17 = MissionClass::GetMissionControl(this); /*0x4499cd*/
      v18 = Math::RoundToInt(*((double *)v17 + 2) * 900.0); /*0x4499ea*/
      return v18 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x4499f7*/
    }
    else
    {
      v19 = MissionClass::GetMissionControl(this); /*0x449a01*/
      v20 = Math::RoundToInt(*((double *)v19 + 2) * 900.0); /*0x449a14*/
      return 3 * v20 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x449a2e*/
    }
  }
  if ( v9 != 1 ) /*0x449811*/
    goto LABEL_32; /*0x449811*/
  if ( !v8[5801] && !v8[5802] && !v8[5803] || (v10 = 0, this->q0E8 <= 0) ) /*0x449843*/
  {
  LABEL_28:
    if ( this->Type->WeaponsFactory ) /*0x44992f*/
      AnimClass::resetAnimation(this); /*0x44993b*/
    goto LABEL_32; /*0x449940*/
  }
  while ( 1 ) /*0x44984c*/
  {
    Member = (_BYTE *)Team::GetMember(this, v10); /*0x44984c*/
    v12 = Member; /*0x449851*/
    if ( Member ) /*0x449855*/
    {
      if ( (Member[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Member + 388))(Member) == 7 ) /*0x449878*/
      {
        v13 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(v12->u32_48)(v12, v21); /*0x44988c*/
        v14 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v22); /*0x449895*/
        v15 = Coord::Subtract(v23, *v14 - *v13, v14[1] - v13[1], v14[2] - v13[2]); /*0x4498b5*/
        v16 = Math::Sqrt((double)*v15 * (double)*v15 + (double)v15[2] * (double)v15[2] + (double)v15[1] * (double)v15[1]); /*0x4498f6*/
        if ( (int)Math::RoundToInt(v16) < 64 /*0x449918*/
          && (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)&this->transporter2))(this, 19, v12) == 1 )
        {
          break; /*0x449918*/
        }
      }
    }
    if ( ++v10 >= this->q0E8 ) /*0x449923*/
      goto LABEL_28; /*0x449923*/
  }
  (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)&this->missionStartTime8))(this, 20, 0); /*0x44994a*/
  return 1; /*0x4497a7*/
}
// 0x65ae30
      && Team::AllMembersValid((int *)this)
      {
        int v1; // edx
        int v2; // eax
        _DWORD *i; // ecx

        v1 = *(&this->abstractFlags8); /*0x65ae30*/
        v2 = 0; /*0x65ae36*/
        if ( v1 <= 0 ) /*0x65ae3a*/
          return 0; /*0x65ae4f*/
        for ( i = (_DWORD *)*(&this->abstractFlags7); !*i; ++i ) /*0x65ae3c*/
        {
          if ( ++v2 >= v1 ) /*0x65ae4d*/
            return 0; /*0x65ae4d*/
        }
        return 1; /*0x65ae51*/
      }
    if ( *(_BYTE *)(this->gattlingValue + 5801) )
    {
      char * v17 = MissionClass::GetMissionControl(this);
      int v18 = Math::RoundToInt(*((double *)v17 + 2) * 900.0);
      return v18 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2);
    }
    else
    {
      char * v19 = MissionClass::GetMissionControl(this);
      int v20 = Math::RoundToInt(*((double *)v19 + 2) * 900.0);
      return 3 * v20 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2);
    }
  }
  if ( v9 != 1 )
    goto LABEL_32;
  int v10; // ebp
  if ( !v8[5801] && !v8[5802] && !v8[5803] || (v10 = 0, this->q03A <= 0) )
  {
LABEL_28:
    if ( *(_BYTE *)(this->gattlingValue + 5821) )
      AnimClass::resetAnimation(this);
    goto LABEL_32;
  }
  while ( 1 )
  {
    Member = (_BYTE *)Team::GetMember(this, v10);
    _BYTE * v12 = Member;
    if ( Member )
    {
      if ( (Member[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Member + 388))(Member) == 7 )
      {
  _BYTE v21[12]; // [esp+34h] [ebp-24h] BYREF
        _DWORD * v13 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v12 + 72))(v12, v21);
  _BYTE v22[12]; // [esp+40h] [ebp-18h] BYREF
        _DWORD * v14 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v22);
  _DWORD v23[3]; // [esp+4Ch] [ebp-Ch] BYREF
        int * v15 = Coord::Subtract(v23, *v14 - *v13, v14[1] - v13[1], v14[2] - v13[2]);
        double v16 = Math::Sqrt((double)*v15 * (double)*v15 + (double)v15[2] * (double)v15[2] + (double)v15[1] * (double)v15[1]);
        if ( (int)Math::RoundToInt(v16) < 64
          && (*(int (__thiscall **)(void *, int, _BYTE *))(this->temporalTargetingMe)(this, 19, v12) == 1 )
        {
          break;
        }
      }
    }
    if ( ++v10 >= this->q03A )
      goto LABEL_28;
  (*(void (__thiscall **)(void *, int, _DWORD))(this->q1E8)(this, 20, 0);
  return 1;

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
int BuildingClass::CompleteProduction()
{
  int v2; // ebx
  int Type; // eax
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int i; // esi
  _DWORD *v12; // eax
  int v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  v2 = a2; /*0x639746*/
  v15 = a2; /*0x63974b*/
  Type = BuildingClass::GetType((_DWORD *)a1); /*0x63974f*/
  v14 = v2; /*0x63975c*/
  v5 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(Type + 4) + 16))(Type + 4, &v14); /*0x639767*/
  v6 = BuildingClass::GetType((_DWORD *)a1); /*0x63976e*/
  v7 = *(_DWORD *)(v6 + 20); /*0x639770*/
  *(_DWORD *)(v6 + 148) = v5; /*0x639773*/
  *(_BYTE *)(v6 + 152) = 1; /*0x63977b*/
  *(_DWORD *)(v6 + 144) = v7 - v5; /*0x639782*/
  if ( !byte_AC4CC8 ) /*0x63978f*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(void **)(a1 + 540)) ) /*0x639797*/
    {
      byte_AC4CC8 = 1; /*0x6397a0*/
      v8 = *(_DWORD *)(v6 + 20) - 1; /*0x6397aa*/
      if ( v8 >= 0 ) /*0x6397ab*/
        v9 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * v8); /*0x6397b4*/
      else
        v9 = 0; /*0x6397ad*/
      v10 = *(_DWORD *)(v9 + 16); /*0x6397b7*/
      for ( i = 0; i < v10; ++i ) /*0x6397be*/
      {
        v12 = *(_DWORD **)(*(_DWORD *)(v9 + 4) + 4 * i); /*0x6397c3*/
        if ( *(_BYTE *)(*v12 + 131) ) /*0x6397c8*/
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v12 + 336))(*v12); /*0x6397d4*/
      }
      v2 = v15; /*0x6397df*/
    }
    BuildingClass::CheckExitPath((_DWORD *)a1); /*0x6397e5*/
  }
  return ScriptAction::FindSquadMember(v2); /*0x6397f1*/
}
// 0x43f180
void BuildingClass::ProductionDisplayUpdate() {}
  void *v1; // edi
  int result; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // esi
  void *v6; // eax
  int FoundationWidth; // eax
  int v8; // ecx
  int FoundationHeight; // eax
  int v10; // ebp
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  void *v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // ebp
  int v18; // ecx
  __int16 v19; // bx
  __int16 v20; // ax
  int v21; // edx
  int v22; // eax
  int v23; // esi
  __int16 v24; // bx
  __int16 v25; // di
  void *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // ebp
  int v31; // esi
  __int16 v32; // bx
  void *v33; // eax
  _DWORD *v34; // eax
  int v35; // esi
  void *v36; // eax
  int v37; // ecx
  int v38; // esi
  int v39; // eax
  int *v40; // eax
  int **v41; // ebp
  int *v42; // esi
  _DWORD *v43; // eax
  _DWORD *v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ebx
  _DWORD *v51; // eax
  int v52; // ecx
  int v53; // ebp
  int v54; // ecx
  __int16 v55; // di
  __int16 v56; // ax
  int v57; // esi
  __int16 v58; // bx
  __int16 v59; // di
  void *v60; // eax
  int v61; // edx
  int v62; // ebp
  int v63; // edi
  int v64; // esi
  void *v65; // eax
  int v66; // eax
  int v67; // esi
  void *v68; // eax
  _DWORD *v69; // eax
  int v70; // ecx
  int v72; // ebx
  char *v73; // ecx
  int v74; // ebp
  bool v75; // zf
  int v76; // ebx
  int *v77; // ecx
  int v78; // esi
  int v79; // [esp+10h] [ebp-CCh]
  int v82; // [esp+2Ch] [ebp-B0h]
  void *v83; // [esp+2Ch] [ebp-B0h]
  void *v84; // [esp+2Ch] [ebp-B0h]
  void *v85; // [esp+2Ch] [ebp-B0h]
  int v86; // [esp+2Ch] [ebp-B0h]
  int v87; // [esp+30h] [ebp-ACh] BYREF
  _DWORD *v88; // [esp+34h] [ebp-A8h]
  int j; // [esp+38h] [ebp-A4h]
  char v90; // [esp+3Fh] [ebp-9Dh]
  int i; // [esp+40h] [ebp-9Ch]
  __int16 v92[4]; // [esp+44h] [ebp-98h] BYREF
  void *v93; // [esp+4Ch] [ebp-90h] BYREF
  int v94; // [esp+50h] [ebp-8Ch]
  int v95; // [esp+54h] [ebp-88h]
  int v96; // [esp+58h] [ebp-84h]
  int k; // [esp+5Ch] [ebp-80h]
  int v99; // [esp+64h] [ebp-78h]
  int v100; // [esp+68h] [ebp-74h]
  _DWORD v105[3]; // [esp+7Ch] [ebp-60h] BYREF
  _DWORD v106[3]; // [esp+88h] [ebp-54h] BYREF
  _DWORD v107[3]; // [esp+94h] [ebp-48h] BYREF
  _DWORD v108[3]; // [esp+A0h] [ebp-3Ch] BYREF
  _DWORD v109[3]; // [esp+ACh] [ebp-30h] BYREF
  char v110[12]; // [esp+B8h] [ebp-24h] BYREF
  char v111[12]; // [esp+C4h] [ebp-18h] BYREF
  int v112[3]; // [esp+D0h] [ebp-Ch] BYREF
  int v113; // [esp+E0h] [ebp+4h]

  v1 = this; /*0x43f191*/
  v93 = this; /*0x43f194*/
  if ( TechnoClass::UpdateProdWithSound(this, v113) )
  {
    result = (*(int (__thiscall **)(void *, int *))(v1->airstrikeTintTimer)(v1, &v99); /*0x43f1ae*/
    *(_DWORD *)v92 = *(_DWORD *)result; /*0x43f1b9*/
    switch ( v113 )
    {
      case 0:
        MapClass::ApplyOverlayReveal(&MapClass_Instance, v92, (char *)v1); /*0x43f1d5*/
        IDA_LOBYTE(result) = 1; /*0x43f1dd*/
        break; /*0x43f1e6*/
      case 1:
      case 3:
        v3 = *((_DWORD *)v1 + 328); /*0x43f1e9*/
        v4 = 0; /*0x43f1ef*/
        if ( v3->ToTile ) /*0x43f1f1*/
        {
          v5 = *(_DWORD *)v1; /*0x43f1fd*/
          v6 = CellCoord::To_CellObj(&MapClass_Instance, v92); /*0x43f210*/
          if ( (*(int (__thiscall **)(void *, void *, int, int, _DWORD, int))(v5 + 428))(v1, v6, -1, -1, 0, 1) ) /*0x43f218*/
            goto LABEL_33; /*0x43f218*/
          FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((_DWORD **)v1 + 328)); /*0x43f22c*/
          v8 = *((_DWORD *)v1 + 328); /*0x43f231*/
          v88 = (_DWORD *)FoundationWidth; /*0x43f238*/
          FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x43f23c*/
          v10 = 0; /*0x43f241*/
          v82 = FoundationHeight; /*0x43f245*/
          v90 = 0; /*0x43f249*/
          for ( i = 0; v10 < v82; i = v10 ) /*0x43f251*/
          {
            v11 = 0; /*0x43f25b*/
            for ( j = 0; v11 < (int)v88; j = v11 ) /*0x43f263*/
            {
              IDA_HIWORD(v100) = v10 + v92[1]; /*0x43f276*/
              v12 = *((_DWORD *)v1 + 135); /*0x43f27b*/
              IDA_LOWORD(v100) = v11 + v92[0]; /*0x43f281*/
              v13 = *((_DWORD *)v1 + 328); /*0x43f28a*/
              v87 = v100; /*0x43f290*/
              v12 = v12; /*0x43f294*/
              v13 = v13; /*0x43f29b*/
              v79 = v13->q67C; /*0x43f2a0*/
              v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87); /*0x43f2a7*/
              if ( CellClass::IsPassable((int)v14, v79, v13, v12) /*0x43f2fb*/
                && *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87) + 14) != *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 328) + 3672) + 660)
                && *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87) + 59) != 1 )
              {
                v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87); /*0x43f30b*/
                v16 = v15[18]; /*0x43f310*/
                if ( v16 != -1 ) /*0x43f316*/
                {
                  v17 = *((_DWORD *)FactoryClass_Array + v16); /*0x43f322*/
                  v94 = v15[9]; /*0x43f32a*/
                  v18 = *(_DWORD *)(v17 + 664); /*0x43f334*/
                  v19 = *((unsigned __int8 *)v15 + 287) % v18; /*0x43f343*/
                  v20 = *((unsigned __int8 *)v15 + 287) / v18; /*0x43f347*/
                  v21 = *(_DWORD *)(v17 + 668); /*0x43f349*/
                  IDA_LOWORD(v94) = v94 - v19; /*0x43f34f*/
                  IDA_HIWORD(v94) -= v20; /*0x43f354*/
                  v22 = 0; /*0x43f359*/
                  v99 = 0; /*0x43f35d*/
                  if ( v21 > 0 ) /*0x43f361*/
                  {
                    do /*0x43f3eb*/
                    {
                      v23 = 0; /*0x43f367*/
                      if ( v18 > 0 ) /*0x43f36b*/
                      {
                        v24 = IDA_HIWORD(v94) + v22; /*0x43f371*/
                        IDA_HIWORD(k) = IDA_HIWORD(v94) + v22; /*0x43f374*/
                        do /*0x43f3d4*/
                        {
                          IDA_HIWORD(v49) = v24; /*0x43f381*/
                          v25 = v23 + v94; /*0x43f387*/
                          IDA_LOWORD(v49) = v23 + v94; /*0x43f38f*/
                          v49 = v49; /*0x43f398*/
                          *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v49) + 18) = -1; /*0x43f3a1*/
                          IDA_LOWORD(k) = v25; /*0x43f3a8*/
                          k = k; /*0x43f3bb*/
                          v26 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&k); /*0x43f3bf*/
                          BuildingClass::CreateDestructionCrater(v26); /*0x43f3c6*/
                          v18 = *(_DWORD *)(v17 + 664); /*0x43f3cb*/
                          ++v23; /*0x43f3d1*/
                        }
                        while ( v23 < v18 ); /*0x43f3d4*/
                        v22 = v99; /*0x43f3d6*/
                        v1 = v93; /*0x43f3da*/
                      }
                      v27 = *(_DWORD *)(v17 + 668); /*0x43f3de*/
                      v99 = ++v22; /*0x43f3e7*/
                    }
                    while ( v22 < v27 ); /*0x43f3eb*/
                  }
                  v10 = i; /*0x43f3f1*/
                  v11 = j; /*0x43f3f5*/
                }
                v28 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)v1 + 328) + 3672) + 140))( /*0x43f410*/
                        *(_DWORD *)(*((_DWORD *)v1 + 328) + 3672),
                        *((_DWORD *)v1 + 135));
                v107[2] = 0; /*0x43f429*/
                v107[0] = ((__int16)v87 << 8) + 128; /*0x43f433*/
                v107[1] = (IDA_SHIWORD(v87) << 8) + 128; /*0x43f441*/
                (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v28 + 216))(v28, v107, 0); /*0x43f44b*/
                if ( *((void **)v1 + 135) == HouseClass_Player ) /*0x43f45e*/
                {
                  v106[0] = ((__int16)v87 << 8) + 128; /*0x43f47f*/
                  v106[1] = (IDA_SHIWORD(v87) << 8) + 128; /*0x43f492*/
                  v106[2] = 0; /*0x43f4a1*/
                  MapClass::RevealArea1(v106, 1, HouseClass_Player, 0, 0, 0, 1, 0); /*0x43f4a8*/
                  v109[0] = ((__int16)v87 << 8) + 128; /*0x43f4ce*/
                  v109[1] = (IDA_SHIWORD(v87) << 8) + 128; /*0x43f4e4*/
                  v109[2] = 0; /*0x43f4f3*/
                  MapClass::RevealArea1(v109, 1, HouseClass_Player, 0, 0, 0, 1, 1); /*0x43f4fa*/
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
                IDA_HIWORD(v94) = v29 - 1; /*0x43f549*/
                v32 = v29 - 1; /*0x43f54e*/
                do /*0x43f596*/
                {
                  IDA_LOWORD(v94) = v31 - 1; /*0x43f559*/
                  IDA_LOWORD(v83) = v92[0] + v31 - 1; /*0x43f568*/
                  IDA_HIWORD(v83) = v32 + v92[1]; /*0x43f574*/
                  v93 = v83; /*0x43f57d*/
                  v33 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v93); /*0x43f587*/
                  BuildingClass::CreatePlacementCrater(v33); /*0x43f58e*/
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
            TechnoClass::UpdateProdWithSound(v1, 0); /*0x43f5db*/
            goto LABEL_34; /*0x43f5db*/
          }
          (*(void (__thiscall **)(void *, int))(v1->q280)(v1, 3); /*0x43f5b9*/
          result = (*(int (__thiscall **)(void *))(v1->q0F8)(v1); /*0x43f5c3*/
          IDA_LOBYTE(result) = 1; /*0x43f5cc*/
        }
        else if ( v3->Wall ) /*0x43f5ef*/
        {
          v34 = RA2_OPNEW(0xB0u); /*0x43f5fe*/
          if ( v34 ) /*0x43f608*/
            Object::SpawnAtCell( /*0x43f62e*/
              v34,
              *(_DWORD *)(*((_DWORD *)v1 + 328) + 3668),
              v92,
              *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 135) + 52) + 184));
          (*(void (__thiscall **)(void *, int))(v1->q280)(v1, 3); /*0x43f639*/
          result = (*(int (__thiscall **)(void *))(v1->q0F8)(v1); /*0x43f643*/
          IDA_LOBYTE(result) = 1; /*0x43f64c*/
        }
        else
        {
          if ( v113 != 3 ) /*0x43f65b*/
          {
            v35 = *(_DWORD *)v1; /*0x43f65d*/
            v36 = CellCoord::To_CellObj(&MapClass_Instance, v92); /*0x43f670*/
            result = (*(int (__thiscall **)(void *, void *, int, int, _DWORD, int))(v35 + 428))(v1, v36, -1, -1, 0, 1); /*0x43f678*/
            if ( result ) /*0x43f680*/
              goto LABEL_34; /*0x43f680*/
          }
          MapClass::FillRevealBuffer(&MapClass_Instance, v92, v1); /*0x43f691*/
          v37 = *((_DWORD *)v1 + 328); /*0x43f6a0*/
          v38 = *(_DWORD *)v1; /*0x43f6a6*/
          v108[2] = 0; /*0x43f6b0*/
          v108[1] = (v92[1] << 8) + 128; /*0x43f6ba*/
          v108[0] = (v92[0] << 8) + 128; /*0x43f6cf*/
          v39 = (*(int (__thiscall **)(int, char *, _DWORD *))(v37->q06C)(v37, v110, v108); /*0x43f6e0*/
          (*(void (__thiscall **)(void *, int))(v38 + 436))(v1, v39); /*0x43f6e6*/
          v40 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(v1->currentMission)(v1, v105); /*0x43f6f5*/
          v41 = (int **)((char *)v1 + 1372); /*0x43f6fd*/
          v94 = *v40; /*0x43f703*/
          v95 = v40[1]; /*0x43f70a*/
          v96 = v40[2]; /*0x43f711*/
          do /*0x43f795*/
          {
            v42 = *v41; /*0x43f715*/
            if ( *v41 ) /*0x43f715*/
            {
              v43 = Matrix3x4::TransformCell( /*0x43f738*/
                      (float *)g_TacticalClass_Instance,
                      v111,
                      (int *)(v4 + *((_DWORD *)v1 + 328) + 3964));
              v44 = Coord::Subtract(v112, *v43 + v94, v95 + v43[1], v96 + v43[2]); /*0x43f761*/
              v105[0] = *v44; /*0x43f768*/
              v105[1] = v44[1]; /*0x43f76f*/
              v45 = v44[2]; /*0x43f777*/
              v46 = *v42; /*0x43f77a*/
              v105[2] = v45; /*0x43f77f*/
              (*(void (__thiscall **)(int *, _DWORD *))(v46 + 436))(v42, v105); /*0x43f783*/
            }
            v4 += 68; /*0x43f789*/
            ++v41; /*0x43f78c*/
          }
          while ( v4 < 1428 ); /*0x43f795*/
          v47 = BuildingTypeClass::GetFoundationWidth(*((_DWORD **)v1 + 328)); /*0x43f7a1*/
          v48 = *((_DWORD *)v1 + 328); /*0x43f7a6*/
          v87 = v47; /*0x43f7ae*/
          v49 = BuildingTypeClass::GetFoundationHeight(v48, 0); /*0x43f7b2*/
          v49 = v49; /*0x43f7b9*/
          i = 0; /*0x43f7bd*/
          if ( v49 > 0 ) /*0x43f7c5*/
          {
            do /*0x43f916*/
            {
              v50 = 0; /*0x43f7cf*/
              for ( k = 0; v50 < v87; k = v50 ) /*0x43f7d7*/
              {
                IDA_LOWORD(v84) = v50 + v92[0]; /*0x43f7ee*/
                IDA_HIWORD(v84) = i + v92[1]; /*0x43f7f3*/
                v93 = v84; /*0x43f800*/
                v51 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v93); /*0x43f80a*/
                v52 = v51[18]; /*0x43f80f*/
                if ( v52 != -1 ) /*0x43f815*/
                {
                  v88 = 0; /*0x43f821*/
                  v53 = *((_DWORD *)FactoryClass_Array + v52); /*0x43f829*/
                  v94 = v51[9]; /*0x43f831*/
                  v54 = *(_DWORD *)(v53 + 664); /*0x43f83b*/
                  v55 = *((unsigned __int8 *)v51 + 287) % v54; /*0x43f84a*/
                  v56 = *((unsigned __int8 *)v51 + 287) / v54; /*0x43f84e*/
                  IDA_LOWORD(v94) = v94 - v55; /*0x43f850*/
                  IDA_HIWORD(v94) -= v56; /*0x43f855*/
                  if ( *(int *)(v53 + 668) > 0 ) /*0x43f862*/
                  {
                    do /*0x43f8ec*/
                    {
                      v57 = 0; /*0x43f868*/
                      if ( v54 > 0 ) /*0x43f86c*/
                      {
                        v58 = IDA_HIWORD(v94) + (_WORD)v88; /*0x43f876*/
                        IDA_HIWORD(v99) = IDA_HIWORD(v94) + (_WORD)v88; /*0x43f879*/
                        do /*0x43f8d9*/
                        {
                          IDA_HIWORD(j) = v58; /*0x43f886*/
                          v59 = v57 + v94; /*0x43f88c*/
                          IDA_LOWORD(j) = v57 + v94; /*0x43f894*/
                          j = j; /*0x43f89d*/
                          *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&j) + 18) = -1; /*0x43f8a6*/
                          IDA_LOWORD(v99) = v59; /*0x43f8ad*/
                          v99 = v99; /*0x43f8c0*/
                          v60 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v99); /*0x43f8c4*/
                          BuildingClass::CreateDestructionCrater(v60); /*0x43f8cb*/
                          v54 = *(_DWORD *)(v53 + 664); /*0x43f8d0*/
                          ++v57; /*0x43f8d6*/
                        }
                        while ( v57 < v54 ); /*0x43f8d9*/
                      }
                      v61 = *(_DWORD *)(v53 + 668); /*0x43f8df*/
                      v88 = (_DWORD *)((char *)v88 + 1); /*0x43f8e8*/
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
          v63 = v87 + 2; /*0x43f933*/
          do /*0x43f995*/
          {
            v64 = 0; /*0x43f936*/
            if ( v63 > 0 ) /*0x43f93a*/
            {
              IDA_HIWORD(v94) = v62 - 1; /*0x43f93f*/
              do /*0x43f98c*/
              {
                IDA_LOWORD(v94) = v64 - 1; /*0x43f94f*/
                IDA_LOWORD(v85) = v92[0] + v64 - 1; /*0x43f95e*/
                IDA_HIWORD(v85) = v62 - 1 + v92[1]; /*0x43f96a*/
                v93 = v85; /*0x43f979*/
                v65 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v93); /*0x43f97d*/
                BuildingClass::CreatePlacementCrater(v65); /*0x43f984*/
                ++v64; /*0x43f989*/
              }
              while ( v64 < v63 ); /*0x43f98c*/
              result = j; /*0x43f98e*/
            }
            ++v62; /*0x43f992*/
          }
          while ( v62 < result ); /*0x43f995*/
          IDA_LOBYTE(result) = 1; /*0x43f99a*/
        }
        break; /*0x43f5d5*/
      case 2:
        v93 = (void *)(*(int (__thiscall **)(void *))(v1->infantryBlinkTimer)(v1); /*0x43f9b0*/
        v66 = (*(int (__thiscall **)(void *))(v1->q1BC)(v1); /*0x43f9b8*/
        v67 = (*(int (__thiscall **)(void *, _DWORD))(v1->q464)(v1, *(__int16 *)(v66 + 266)); /*0x43f9d0*/
        if ( (*(unsigned __int8 (__thiscall **)(void *))(v1->q160)(v1)
          || *((_DWORD *)v1 + 165)
          && (v1 ? (v68 = (*(int (__thiscall **)(void *))(v1->fallRate)(v1) == 6 ? v1 : 0) : (v68 = 0),
              *(void **)(*((_DWORD *)v1 + 165) + 80) == v68) )
        {
          IDA_LOWORD(v67) = Techno::StartInvulnerability(v67); /*0x43fa17*/
        }
        *((_WORD *)v1 + 896) = v67; /*0x43fa19*/
        j = (unsigned __int16)v67; /*0x43fa26*/
        v88 = (_DWORD *)((char *)v1 + 1372); /*0x43fa30*/
        v86 = 21; /*0x43fa34*/
        do /*0x43fabc*/
        {
          v69 = (_DWORD *)*v88; /*0x43fa40*/
          if ( *v88 ) /*0x43fa40*/
          {
            v70 = v69[50]; /*0x43fa46*/
            if ( v70 && *(_BYTE *)(v70 + 860) ) /*0x43fa50*/
            {
              j = j; /*0x43fa5e*/
              v69[53] = v93; /*0x43fa62*/
              v69[63] = j; /*0x43fa68*/
            }
            v72 = *((char *)v1 + 1773); /*0x43fa6e*/
            if ( v72 == 15 && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(v1->bombVisible)(v1, 0, 0) == 5 ) /*0x43fa88*/
              IDA_LOBYTE(v72) = 16; /*0x43fa8a*/
            v73 = (char *)v1 + 1372; /*0x43fa8f*/
            v74 = 21; /*0x43fa91*/
            do /*0x43faa6*/
            {
              if ( *(_DWORD *)v73 ) /*0x43fa96*/
                *(_BYTE *)(v73->q178 = v72; /*0x43fa9c*/
              v73 += 4; /*0x43faa2*/
              --v74; /*0x43faa5*/
            }
            while ( v74 ); /*0x43faa6*/
          }
          v75 = v86 == 1; /*0x43fab3*/
          ++v88; /*0x43fab4*/
          --v86; /*0x43fab8*/
        }
        while ( !v75 ); /*0x43fabc*/
        v76 = *((char *)v1 + 1773); /*0x43fac2*/
        if ( v76 == 15 && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(v1->bombVisible)(v1, 0, 0) == 5 ) /*0x43fadc*/
          IDA_LOBYTE(v76) = 16; /*0x43fade*/
        v77 = (int *)((char *)v1 + 1372); /*0x43fae3*/
        v78 = 21; /*0x43fae5*/
        do /*0x43fafa*/
        {
          result = *v77; /*0x43faea*/
          if ( *v77 ) /*0x43faea*/
            result->q5E0 = v76; /*0x43faf0*/
          ++v77; /*0x43faf6*/
          --v78; /*0x43faf9*/
        }
        while ( v78 ); /*0x43fafa*/
        goto LABEL_92; /*0x43fafa*/
      default:
  LABEL_92:
        IDA_LOBYTE(result) = 1; /*0x43fafc*/
        break; /*0x43faff*/
    }
  }
  else
  {
  LABEL_34:
    IDA_LOBYTE(result) = 0; /*0x43f5e0*/
  }
  return result; /*0x43f1da*/
// 0x4da0e0
void BuildingClass::AddToProductionQueue(int) {}
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int Member; // eax
  int v10; // esi

  if ( !int ) /*0x4da0eb*/
    return; /*0x4da0eb*/
  v3 = this->u32_5BC; /*0x4da0f1*/
  if ( int != this ) /*0x4da0f9*/
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
      || (this->q16E4 || !v5)
      && (v6 = this->q5C0, v6 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->q16B0 + 8))(&this->q16B0, v5 + v6, 0) )
    {
      v7 = this->u32_5BC; /*0x4da14b*/
      v8 = this->AnimStates; /*0x4da14e*/
      *(_DWORD *)(this + 1468) = v7 + 1; /*0x4da154*/
      *(_DWORD *)(v8 + 4 * v7) = int; /*0x4da157*/
    }
    goto LABEL_14; /*0x4da157*/
  }
  *(_BYTE *)(this + 1713) = 1; /*0x4da0ff*/
  LABEL_14:
  if ( !*(_DWORD *)(this + 1444) && (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 5 ) /*0x4da171*/
  {
    Member = Team::GetMember((_DWORD *)this, 0); /*0x4da177*/
    v10 = Member; /*0x4da17c*/
    if ( !Member /*0x4da194*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) != 6
      || !*(_BYTE *)(v10->ThreatPosed + 5821) )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1156))(this, 0, 1); /*0x4da1a6*/
    }
  }
// 0x4fce80
void BuildingClass::Capture() { CaptureBuilding(nullptr); }
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  char v7; // al
  int v8; // edi
  int v9; // eax
  char *i; // ecx
  _BYTE *v11; // edi
  void *v12; // eax
  void **v13; // eax
  void *v14; // eax

  if ( *(_DWORD *)a2 != g_ControlGroupState ) /*0x4fce97*/
  {
    v3 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x4fceb0*/
    v4 = v3[17]; /*0x4fceb5*/
    if ( v4 != -1 ) /*0x4fcebb*/
    {
      v5 = v3[20]; /*0x4fcec1*/
      if ( v5 != -1 ) /*0x4fcec7*/
      {
        v6 = *((_DWORD *)HouseClass_Array + v5); /*0x4fced3*/
        if ( g_GameMode_Current[0] ) /*0x4fcede*/
          v7 = *(_BYTE *)(v6 + 492); /*0x4fcefc*/
        else
          v7 = *(_BYTE *)(v6 + 492) || *(_BYTE *)(v6 + 493); /*0x4fcee8*/
        if ( v7 ) /*0x4fcf04*/
        {
          v8 = *((_DWORD *)g_BuildingTypeClass_Array + v4); /*0x4fcf0f*/
          if ( *(_BYTE *)(v8 + 680) ) /*0x4fcf12*/
          {
            v9 = 0; /*0x4fcf26*/
            if ( g_TriggerClassCount > 0 ) /*0x4fcf2a*/
            {
              for ( i = (char *)g_TriggerTypeCount; *(_DWORD *)(*(_DWORD *)i + 3668) != v8; i += 4 ) /*0x4fcf36*/
              {
                if ( ++v9 >= g_TriggerClassCount ) /*0x4fcf48*/
                  return; /*0x4fcf48*/
              }
              v11 = (_BYTE *)*((_DWORD *)g_TriggerTypeCount + v9); /*0x4fcf52*/
              if ( v11 && !v11[5497] ) /*0x4fcf5d*/
              {
                if ( HouseClass_Player == this && !a3 ) /*0x4fcf7e*/
                  PlayVocClass(*((_DWORD *)g_RulesClass_Instance + 425), 0x2000, 1.0, 0); /*0x4fcf98*/
                (*(void (__thiscall **)(_BYTE *, void *))(*(_DWORD *)v11 + 132))(v11, this); /*0x4fcfa2*/
                *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, a2) + 17) = -1; /*0x4fcfbc*/
                *((_BYTE *)CellCoord::To_CellObj(&MapClass_Instance, a2) + 286) = 0; /*0x4fcfca*/
                *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, a2) + 20) = -1; /*0x4fcfdd*/
                v12 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x4fcfe0*/
                House::AnnounceUpgrade((int)v12, -1); /*0x4fcfe7*/
                v13 = (void **)CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x4fcff4*/
                BuildingClass::ValidatePlacement(v13, 0); /*0x4fcffb*/
                BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)a2); /*0x4fd006*/
                v14 = CellCoord::To_CellObj(&MapClass_Instance, a2); /*0x4fd011*/
                AbstractClass::ClearTargetToMeClearManagerTarget(v14); /*0x4fd018*/
                Cell::SetRadar((int *)&MapClass_Instance, a2); /*0x4fd023*/
                Radar::Update(&MapClass_Instance, a2); /*0x4fd02e*/
              }
            }
          }
        }
      }
    }
  }
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
  void *a2; // edi
  void *v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  char v14; // [esp+Bh] [ebp-1h]

  a2 = a2; /*0x4571e5*/
  v4 = *(&this->u32_345); /*0x4571e9*/
  v14 = 0; /*0x4571ef*/
  if ( v4 != a2 ) /*0x4571f6*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(v4) || (unsigned __int8)House::IsHumanPlayer(a2) ) /*0x45720e*/
    {
      v5 = (int *)(*((int (__thiscall **)(void **, void **))*this + 110))(this, &a2); /*0x457221*/
      if ( CreateTriggerClassIfFarEnough(9, *v5, *v5) ) /*0x45722f*/
        v14 = 1; /*0x457238*/
    }
    v6 = (int)*(&this->u32_808); /*0x45723c*/
    if ( *(_BYTE *)(v6 + 5796) ) /*0x457242*/
    {
      HouseClass::ReshroudMap(*(&this->u32_345)); /*0x457252*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(&this->u32_345)) && !*((_BYTE *)*(&this->u32_345) + 22394) && v14 ) /*0x45727c*/
        VoxClass::FindAndPlay(aEvaRadarsabota, -1); /*0x457288*/
      if ( (unsigned __int8)House::IsHumanPlayer(a2) && !*((_BYTE *)*(&this->u32_345) + 22394) ) /*0x4572a2*/
      {
        if ( v14 ) /*0x4572b6*/
          VoxClass::FindAndPlay(aEvaBuildinginf, -1); /*0x4572c6*/
      }
      goto LABEL_64; /*0x4572c6*/
    }
    if ( *(int *)(v6 + 3808) > 0 ) /*0x4572d9*/
    {
      HouseClass::CreatePowerOutage((int)*(&this->relatedTagsCapacity5), IDA_HIDWORD(g_RulesClass_Instance->BarracksRatio)); /*0x4572e8*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(&this->relatedTagsCapacity5)) && v14 ) /*0x457302*/
      {
        VoxClass::FindAndPlay(aEvaPowersabota, -1); /*0x45730e*/
      }
      else if ( (unsigned __int8)House::IsHumanPlayer(v3) && v14 ) /*0x457328*/
      {
        VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1); /*0x457338*/
        VoxClass::FindAndPlay(aEvaEnemybasepo, -1); /*0x457347*/
      }
      goto LABEL_64; /*0x45730e*/
    }
    v7 = g_RulesClass_Instance->OnFire[3]; /*0x45734c*/
    v8 = 0; /*0x457352*/
    if ( v7 <= 0 ) /*0x457356*/
    {
  LABEL_26:
      v10 = *(_DWORD *)(v6 + 5872); /*0x45736a*/
      if ( v10 != -1 ) /*0x457373*/
      {
        SuperClass::Reset(*(_DWORD *)(*((_DWORD *)*(&this->relatedTagsCapacity5) + 150) + 4 * v10)); /*0x457388*/
        if ( (unsigned __int8)House::IsHumanPlayer(*(&this->relatedTagsCapacity5)) || (unsigned __int8)House::IsHumanPlayer(v3) && v14 ) /*0x4573b1*/
          VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1); /*0x4573c1*/
        goto LABEL_64; /*0x4573c1*/
      }
      if ( *(int *)(v6 + 2048) > 0 ) /*0x45741c*/
      {
        a2 = (void *)(*(int (__stdcall **)(int))(*((_DWORD *)*(&this->relatedTagsCapacity5) + 9) + 24))((int)*(&this->relatedTagsCapacity5) + 36); /*0x457437*/
        v12 = Math::RoundToInt((double)(int)a2 * *(float *)&g_RulesClass_Instance->BarracksLimit); /*0x457450*/
        HouseClass::ProcessPowerDrain((int)*(&this->relatedTagsCapacity5), v12); /*0x457453*/
        HouseClass::AddPower(v3, v12); /*0x45745b*/
        if ( (unsigned __int8)House::IsHumanPlayer(*(&this->relatedTagsCapacity5)) && v14 ) /*0x457475*/
          VoxClass::FindAndPlay(aEvaCashstolen, -1); /*0x457481*/
        if ( (unsigned __int8)House::IsHumanPlayer(v3) && v14 ) /*0x45749b*/
          VoxClass::FindAndPlay(aEvaBuildinginf_1, -1); /*0x4574ab*/
        goto LABEL_64; /*0x4574ab*/
      }
      v13 = *(_DWORD *)(v6 + 3768); /*0x4574b0*/
      if ( v13 != 40 ) /*0x4574b9*/
      {
        if ( v13 != 16 ) /*0x45751a*/
          goto LABEL_64; /*0x45751a*/
        *((_BYTE *)v3 + 703) = 1; /*0x45751e*/
        *((_BYTE *)v3 + 508) = 1; /*0x457524*/
        if ( (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x45752a*/
          byte_884B8E = 1; /*0x457533*/
        if ( (unsigned __int8)House::IsHumanPlayer(*(&this->relatedTagsCapacity5)) && v14 ) /*0x45754e*/
          VoxClass::FindAndPlay(aEvaTechnologys, -1); /*0x45755a*/
        if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v14 ) /*0x457570*/
          goto LABEL_64; /*0x457570*/
  LABEL_63:
        VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1); /*0x457572*/
        VoxClass::FindAndPlay(aEvaNewtechnolo, -1); /*0x45758b*/
  LABEL_64:
        (*((void (__thiscall **)(void **, int))*this + 73))(this, 2); /*0x457590*/
        return; /*0x457597*/
      }
      *((_BYTE *)v3 + 704) = 1; /*0x4574bd*/
      *((_BYTE *)v3 + 508) = 1; /*0x4574c3*/
      if ( (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x4574c9*/
        byte_884B8E = 1; /*0x4574d2*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(&this->relatedTagsCapacity5)) && v14 ) /*0x4574ed*/
        goto LABEL_51; /*0x4574ed*/
    }
    else
    {
      v9 = (_DWORD *)g_RulesClass_Instance->OnFire[0]; /*0x457358*/
      while ( *v9 != v6 ) /*0x457360*/
      {
        ++v8; /*0x457362*/
        ++v9; /*0x457363*/
        if ( v8 >= v7 ) /*0x457368*/
          goto LABEL_26; /*0x457368*/
      }
      v11 = *(_DWORD *)(v6 + 1744); /*0x4573c6*/
      if ( v11 ) /*0x4573ce*/
      {
        if ( v11 == 1 ) /*0x4573da*/
          *((_BYTE *)v3 + 701) = 1; /*0x4573dc*/
        else
          *((_BYTE *)v3 + 700) = 1; /*0x4573e4*/
      }
      else
      {
        *((_BYTE *)v3 + 702) = 1; /*0x4573d0*/
      }
      *((_BYTE *)v3 + 508) = 1; /*0x4573ea*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(&this->relatedTagsCapacity5)) && v14 ) /*0x457409*/
  LABEL_51:
        VoxClass::FindAndPlay(aEvaTechnologys, -1); /*0x4574ef*/
    }
    if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v14 ) /*0x457513*/
      goto LABEL_64; /*0x457513*/
    goto LABEL_63; /*0x457513*/
  }
}
// 0x458200
void BuildingClass::ProcessStructureAbandoned() {}
  int result; // eax
  int v3; // edi
  void *v4; // ebx
  int v5; // eax
  int v6; // ecx
  HouseClass *v7; // edx
  void *v8; // ecx
  __int64 v9; // rax
  _BYTE v10[4]; // [esp+8h] [ebp-4h] BYREF

  result = this->q520; /*0x458205*/
  if ( *(_DWORD *)(result + 1588) == -1 ) /*0x458212*/
  {
    if ( BuildingClass::IsHealthLow((int *)this) ) /*0x45821a*/
      BuildingClass::UnloadUnits((int *)this, 0, 0); /*0x458229*/
    v3 = HouseClass_Count; /*0x458230*/
    v4 = 0; /*0x45823b*/
    v5 = HouseTypeClass::Find(g_INI_Key_Civilian); /*0x45823d*/
    v6 = 0; /*0x458242*/
    if ( v3 > 0 ) /*0x458246*/
    {
      v7 = HouseClass_Array; /*0x458248*/
      while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v7->gap0 + 52) + 188) != v5 ) /*0x458259*/
      {
        ++v6; /*0x45825b*/
        v7 = (HouseClass *)((char *)v7 + 4); /*0x45825c*/
        if ( v6 >= v3 ) /*0x458261*/
          goto LABEL_10; /*0x458261*/
      }
      v4 = *(void **)&HouseClass_Array->gap0[4 * v6]; /*0x45826b*/
    }
  LABEL_10:
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)&this->q19C2))(this) ) /*0x458272*/
    {
      v8 = *(void **)(&this->startingUnitsCapacity0); /*0x45827e*/
      if ( v8 != v4 ) /*0x458286*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer(v8) ) /*0x458288*/
        {
          PlayVocClass(g_RulesClass_Instance->CrateUnitSound, 0x2000, 1.0, 0); /*0x4582a9*/
          v9 = ((__int64 (__thiscall *)(int, _BYTE *))*(_DWORD *)(*(_DWORD *)&this->suspendedMission0))(this, v10); /*0x4582b7*/
          if ( CreateTriggerClassIfFarEnough(15, SHIDWORD(v9), *(_DWORD *)v9) ) /*0x4582c5*/
            VoxClass::FindAndPlay(aEvaStructureab, -1); /*0x4582d8*/
        }
        PlayHealthDependentBuildingAnim((int *)this); /*0x4582df*/
        (*(void (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)&this->q1880))(this, v4, 0); /*0x4582eb*/
      }
    }
    result = (*(int (__thiscall **)(int))(*(_DWORD *)&this->ironTintTimer2))(this); /*0x4582f5*/
    if ( result > 0 && *(void **)(&this->u32_D80) == v4 ) /*0x458305*/
    {
      PlayHealthDependentBuildingAnim((int *)this); /*0x458309*/
      return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)&this->q1880))( /*0x458323*/
               this,
               *(_DWORD *)(**(_DWORD **)(&this->chronoDestCoords2) + 540),
               0);
    }
  }
  return result; /*0x458329*/
}
// 0x44eb10
{
  if ( this->HasBeenCaptured /*0x44eb43*/
  {
    if ( this->HasBeenCaptured /*0x44eb43*/
      || Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) >= 25
      || this->Type->BuildingTypeClass_field_ED8 != 7 )
    {
      return TechnoClass::GetCrew(this); /*0x44eb55*/
    }
    else
    {
      return g_RulesClass_Instance->GuardArea; /*0x44eb4c*/
    }
  }
  else
  {
    return g_RulesClass_Instance->?; /*0x44eb4c*/
  }
    return {}; // TODO stub - retranslate via C-line pipeline

// IDA 0x451330: get crew count
// 0x451330
int BuildingClass::GetCrewCount()
{
  _BYTE *v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int result; // eax

  if ( this->NoCrew ) /*0x451334*/
    return 0; /*0x451334*/
  v2 = (_BYTE *)this->Type; /*0x451342*/
  if ( !v2[3277] ) /*0x451348*/
    return 0; /*0x451350*/
  v3 = this->owner; /*0x451352*/
  v4 = *(_DWORD *)(v3 + 488); /*0x451358*/
  if ( v4 ) /*0x451360*/
  {
    if ( v4 == 1 ) /*0x451372*/
    {
      v5 = g_RulesClass_Instance[1].VeinholeShrinkRate; /*0x451379*/
    }
    else
    {
      if ( v4 != 2 ) /*0x451384*/
        return 0; /*0x4513c9*/
      v5 = g_RulesClass_Instance[1].VeinAttack; /*0x45138b*/
    }
  }
  else
  {
    v5 = g_RulesClass_Instance[1].VeinholeGrowthRate; /*0x451367*/
  }
  if ( !v5 ) /*0x451393*/
    return 0; /*0x451393*/
  if ( this->HasBeenCaptured ) /*0x451395*/
    v5 *= 2; /*0x45139f*/
  result = (*(int (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v2 + 184))(v2, v3, 0) / v5; /*0x4513ad*/
  if ( result < 1 ) /*0x4513b2*/
    return 1; /*0x4513b5*/
  if ( result > 5 ) /*0x4513bf*/
    return 5; /*0x4513c2*/
  return result; /*0x4513b4*/
}
// 0x442d90
void BuildingClass::EjectCrew()
{
  int v3; // edx
  int v4; // eax
  _WORD *v5; // ebp
  int v6; // eax
  int v7; // eax
  int i; // esi
  _WORD *v9; // ecx
  __int16 v10; // ax
  void *v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char v17; // al
  _DWORD *Value; // eax
  int v19; // edx
  _BYTE *v20; // eax
  _WORD *v21; // eax
  __int16 v22; // cx
  __int16 v23; // dx
  void *v24; // eax
  int v25; // edx
  int v26; // esi
  int v27; // ebp
  void *v28; // eax
  _DWORD *v29; // eax
  int *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int *v36; // eax
  int v37; // kr08_4
  int v38; // eax
  int *v39; // eax
  int v40; // kr0C_4
  int v41; // eax
  int v45; // [esp+1Ch] [ebp-74h]
  int v46; // [esp+20h] [ebp-70h]
  int v47; // [esp+24h] [ebp-6Ch]
  int v49; // [esp+2Ch] [ebp-64h] BYREF
  int v50; // [esp+30h] [ebp-60h] BYREF
  int v51; // [esp+34h] [ebp-5Ch]
  int v52; // [esp+38h] [ebp-58h]
  int v53; // [esp+3Ch] [ebp-54h] BYREF
  int v54; // [esp+40h] [ebp-50h]
  int v55; // [esp+44h] [ebp-4Ch]
  int v56[3]; // [esp+48h] [ebp-48h] BYREF
  int v57[3]; // [esp+54h] [ebp-3Ch] BYREF
  int v58[3]; // [esp+60h] [ebp-30h] BYREF
  int v59[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v60[3]; // [esp+78h] [ebp-18h] BYREF
  int v61[3]; // [esp+84h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)this->GetCellCoords_Alt(&v49); /*0x442da8*/
  v4 = *this; /*0x442daa*/
  v3 = v3; /*0x442db1*/
  v5 = (_WORD *)this->GetOrCreateResHandle(0); /*0x442dbb*/
  v6 = *(&this->hasParachute6); /*0x442dbd*/
  v45 = 2; /*0x442dc5*/
  if ( v6 ) /*0x442dcd*/
    v45 = 1; /*0x442dcf*/
  if ( this->HasBeenCaptured ) /*0x442dd7*/
    v45 += 6; /*0x442ddf*/
  v46 = this->GetCrewCount(); /*0x442dee*/
  v7 = *(&this->needsRedraw8); /*0x442df2*/
  if ( v7->UnitAbsorb || v7->InfantryAbsorb )
  {
    v7 = *(&this->nextArrayIndex9); /*0x442e0c*/
    if ( v7 > 0 )
    {
      v7 = LinkedList::Pop(&this->nextArrayIndex9); /*0x442e20*/
      for ( i = v7; v7; i = v7 )
      {
        v5 = v5; /*0x442e34*/
        v5 += 2; /*0x442e38*/
        v10 = *v5 + v3; /*0x442e3b*/
        IDA_LOWORD(v5) = IDA_HIWORD(v3) + v5[1]; /*0x442e42*/
        v52 = 0; /*0x442e47*/
        v50 = (v10 << 8) + 128; /*0x442e62*/
        v51 = ((__int16)v5 << 8) + 164; /*0x442e66*/
        if ( (*(int (__thiscall **)(int))(i->ChargerBarrels_0x12)(i) == 1 ) /*0x442e74*/
        {
          v11 = Coord::To_Cell(&MapClass_Instance, &v50); /*0x442e80*/
          v12 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v11 + 72))(v11, v58); /*0x442e8e*/
        }
        else
        {
          v13 = Coord::To_Cell(&MapClass_Instance, &v50); /*0x442ebe*/
          v12 = ObjectPlacement::CalcPosition(v13, v57, &v50, 0, 0, 0); /*0x442ec5*/
        }
        v50 = *v12; /*0x442e93*/
        v51 = v12[1]; /*0x442e9a*/
        v52 = v12[2]; /*0x442ea1*/
        ++g_IKnowWhatImDoing; /*0x442eeb*/
        i->q08C = this->onBridge; /*0x442ef7*/
        v53 = *(&this->vtable49); /*0x442eff*/
        v14 = *this; /*0x442f03*/
        v54 = *(&this->uniqueId0); /*0x442f08*/
        v55 = *(&this->uniqueId1); /*0x442f11*/
        v15 = this->GetCellCoords(); /*0x442f15*/
        v16 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v15 + 72))(v15, v56) + 8); /*0x442f27*/
        v17 = this->NoCrew; /*0x442f2a*/
        v55 = v16; /*0x442f32*/
        if ( v17
          || (Value = ProgressTimer::GetValue((_WORD *)&this->u32_710, &v49),
              !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(i->q0D8)(
                 i,
                 &v53,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          if ( a2 )
            v20 = (a2[20] & 1) != 0 ? a2 : 0;
          else
            v20 = 0; /*0x442fd0*/
          (*(void (__thiscall **)(int, _BYTE *))(i->q0E0)(i, v20); /*0x442fe5*/
          (*(void (__thiscall **)(int))(i->u32_F8)(i); /*0x442fef*/
        }
        else
        {
          if ( !i->ImpactLandSound ) /*0x442f6d*/
          {
            ++i->q21C->q0BD; /*0x442f82*/
            i->ImpactLandSound = 1; /*0x442f88*/
          }
          v19 = *(_DWORD *)i; /*0x442f8f*/
          i->u8_439 = 0; /*0x442f9b*/
          (*(void (__thiscall **)(int, int *, int, _DWORD))(v19 + 372))(i, &g_BuildingClassPool, 1, 0); /*0x442fa1*/
          if ( !(unsigned __int8)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x442fad*/
            (*(void (__thiscall **)(int, int, _DWORD))(i->q1E8)(i, 15, 0); /*0x442fbd*/
        }
        --g_IKnowWhatImDoing; /*0x442ffc*/
        v7 = LinkedList::Pop(&this->nextArrayIndex9); /*0x443008*/
      }
    }
  }
  if ( v46 ) /*0x44301b*/
  {
    while ( *v5 != 0x7FFF || v5[1] != 0x7FFF ) /*0x44302f*/
    {
      v5 = v5; /*0x44303a*/
      v5 += 2; /*0x44303c*/
      v22 = *v5 + v3; /*0x44303f*/
      v23 = IDA_HIWORD(v3) + v5[1]; /*0x443046*/
      v5 = v5; /*0x44304b*/
      IDA_LOWORD(v47) = v22; /*0x44304f*/
      IDA_HIWORD(v47) = v23; /*0x443058*/
      v47 = v47; /*0x443067*/
      v24 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v47); /*0x44306b*/
      v25 = *(&this->attachedTag5); /*0x443070*/
      v49 = (int)v24; /*0x443076*/
      if ( !*(_BYTE *)(v25 + 502) && v46 > 0 && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v45) == 1 ) /*0x4430aa*/
      {
        v26 = 0; /*0x4430b4*/
        v27 = this->GetCrew(); /*0x4430bc*/
        if ( v27 ) /*0x4430c0*/
        {
          v28 = RA2_OPNEW(0x6F0u); /*0x4430c7*/
          if ( v28 ) /*0x4430d1*/
            v26 = InfantryClass::Construct((int)v28, v27, (IUnknown *)*(&this->attachedTag5)); /*0x4430e2*/
          else
            v26 = 0; /*0x4430e6*/
        }
        Debug::Log(); /*0x443101*/
        if ( v26 ) /*0x44310b*/
        {
          if ( this->BuildingClass_field_bool_6E9 && v26->q6C0->q3278 ) /*0x44311f*/
            *(_BYTE *)(v26 + 1753) = 1; /*0x443127*/
          ++g_IKnowWhatImDoing; /*0x443141*/
          v52 = 0; /*0x44315a*/
          v50 = ((__int16)v47 << 8) + 128; /*0x44315e*/
          v51 = (IDA_SHIWORD(v47) << 8) + 164; /*0x443166*/
          v29 = Coord::To_Cell(&MapClass_Instance, &v50); /*0x44317b*/
          v30 = ObjectPlacement::CalcPosition(v29, v59, &v50, 0, 0, 0); /*0x443182*/
          v50 = *v30; /*0x443191*/
          v31 = v30[1]; /*0x443197*/
          v51 = v31; /*0x44319a*/
          v32 = v30[2]; /*0x44319e*/
          v52 = v32; /*0x4431a1*/
          if ( v50 == g_BuildingClassPool && v31 == dword_89C84C && v32 == dword_89C850 /*0x4431c5*/
            || !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(v26->q0D8)(v26, &v50, 0) )
          {
            (*(void (__thiscall **)(int, int))(v26->needsSave)(v26, 1); /*0x443285*/
          }
          else
          {
            Debug::Log(); /*0x4431d8*/
            v33 = v26->q6C0->u32_A0; /*0x4431eb*/
            --v46; /*0x4431f1*/
            v34 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 5, v33); /*0x443203*/
            v35 = *(_DWORD *)v26; /*0x443208*/
            v26->q06C = v34; /*0x443214*/
            (*(void (__thiscall **)(int, int *, int, _DWORD))(v35 + 372))(v26, &g_BuildingClassPool, 1, 0); /*0x443217*/
            if ( !a2 || Object::IsAlliedWithObjectSimpleHouse((_DWORD *)*(&this->attachedTag5), a2) ) /*0x44322f*/
            {
              if ( (unsigned __int8)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x443258*/
                (*(void (__thiscall **)(int, int, _DWORD))(v26->q1E8)(v26, 2, 0); /*0x443268*/
              else
                (*(void (__thiscall **)(int, int, _DWORD))(v26->q1E8)(v26, 15, 0); /*0x443277*/
            }
            else
            {
              (*(void (__thiscall **)(int, int, _DWORD))(v26->q1E8)(v26, 1, 0); /*0x44323f*/
              (*(void (__thiscall **)(int, _BYTE *))(v26->q3C8)(v26, a2); /*0x44324a*/
            }
          }
          --g_IKnowWhatImDoing; /*0x443288*/
        }
        v5 = v5; /*0x44328e*/
      }
      IDA_LOBYTE(v7) = Cell::IsBuildable(v49, 1, 1, 1, -1, 0, -1, 1); /*0x4432a3*/
      if ( (_BYTE)v7 ) /*0x4432aa*/
      {
        if ( Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) >= 50 ) /*0x4432c7*/
        {
          v57[1] = (IDA_SHIWORD(v47) << 8) + 128; /*0x44337d*/
          v57[0] = ((__int16)v47 << 8) + 128; /*0x443392*/
          v57[2] = 0; /*0x443396*/
          v39 = RandomCoordScatter(v61, v57, 128, 0); /*0x44339a*/
          v40 = *v39; /*0x4433af*/
          v41 = v39[1]; /*0x4433b1*/
          v58[2] = 0; /*0x4433bb*/
          v58[0] = ((__int16)(v40 / 256) << 8) + 128; /*0x4433dd*/
          v58[1] = ((__int16)(v41 / 256) << 8) + 128; /*0x4433eb*/
          IDA_LOBYTE(v7) = TimedCreateUnitAtCoords(v58, 100, 100, 0); /*0x4433ef*/
        }
        else
        {
          v53 = ((__int16)v47 << 8) + 128; /*0x4432e4*/
          v54 = (IDA_SHIWORD(v47) << 8) + 128; /*0x4432fa*/
          v55 = 0; /*0x4432fe*/
          v36 = RandomCoordScatter(v60, &v53, 128, 0); /*0x443302*/
          v37 = *v36; /*0x443317*/
          v38 = v36[1]; /*0x443319*/
          v56[2] = 0; /*0x443323*/
          v56[0] = ((__int16)(v37 / 256) << 8) + 128; /*0x443347*/
          v56[1] = ((__int16)(v38 / 256) << 8) + 128; /*0x44334b*/
          IDA_LOBYTE(v7) = StandardCreateUnitAtCoords(v56, 100, 100, 0); /*0x443358*/
        }
      }
    }
  }
  return v7; /*0x4433f9*/
}
// 0x454db0
void BuildingClass::CleanupOccupation() {}
  void *v1; // esi
  int result; // eax
  _DWORD *v3; // eax
  int v4; // eax
  char v5; // al
  char v6; // al
  char v7; // bl
  char *v8; // ecx
  int v10; // ecx
  char v11; // al
  char v12; // al
  char v13; // bl
  char *v14; // ecx
  int v15; // edi
  int v16; // eax
  int *v17; // eax
  int v18; // ebp
  int v19; // ebx
  void *v20; // edi
  void *Parachute; // edx
  int v22; // esi
  void *v23; // edx
  int v24; // eax
  void *v25; // eax
  int v26; // eax
  void *v27; // ebx
  int *v28; // esi
  int v29; // eax
  int v30; // ebp
  int v31; // edi
  int *v32; // eax
  int v33; // ebp
  int k; // ebx
  bool v35; // zf
  _DWORD *v36; // edi
  _DWORD *m; // esi
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int v43; // ebp
  int v44; // ebx
  _DWORD *v45; // edi
  _DWORD *i; // esi
  int v47; // eax
  _DWORD *v48; // eax
  _DWORD *v49; // eax
  int j; // edi
  int v51; // esi
  _DWORD *v52; // eax
  int v53; // edx
  int v54; // eax
  char v55; // dl
  char v56; // al
  int v57; // [esp+1Ch] [ebp-54h]
  int v60; // [esp+34h] [ebp-3Ch] BYREF
  _BYTE *v61; // [esp+38h] [ebp-38h]
  _BYTE *v62; // [esp+3Ch] [ebp-34h]
  int v63[3]; // [esp+40h] [ebp-30h] BYREF
  int v64; // [esp+4Ch] [ebp-24h]
  _DWORD v65[2]; // [esp+54h] [ebp-1Ch] BYREF
  _BYTE v67[8]; // [esp+60h] [ebp-10h] BYREF
  int v68; // [esp+68h] [ebp-8h]

  result = this->Type; /*0x454dbb*/
  if ( result ) /*0x454dc7*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v67); /*0x454dd6*/
    IDA_LOWORD(v64) = *v3 / 256; /*0x454de9*/
    IDA_HIWORD(v64) = v3[1] / 256; /*0x454dfd*/
    v4 = this->q220; /*0x454e02*/
    if ( v4 == 1 ) /*0x454e0b*/
    {
      v5 = this->Translucency; /*0x454e11*/
      if ( v5 < 15 ) /*0x454e19*/
      {
        v6 = v5 + 1; /*0x454e1f*/
        this->Translucency = v6; /*0x454e23*/
        if ( v6 == 1 || v6 == 6 || v6 == 11 ) /*0x454e31*/
          this->needsRedraw = 1; /*0x454e33*/
        v7 = v6; /*0x454e3a*/
        if ( v6 == 15 && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)&this->owningHouseIndex4))(this, 0, 0) == 5 ) /*0x454e4e*/
          v7 = 16; /*0x454e50*/
        v8 = (char *)&this->u32_1570; /*0x454e55*/
        v9 = 21; /*0x454e5b*/
        do /*0x454e70*/
        {
          if ( *(_DWORD *)v8 ) /*0x454e60*/
            *(_BYTE *)(v8->q178 = v7; /*0x454e66*/
          v8 += 4; /*0x454e6c*/
          --v9; /*0x454e6f*/
        }
        while ( v9 ); /*0x454e70*/
        if ( this->Translucency == 15 ) /*0x454e79*/
        {
          v10 = this->q30C; /*0x454e7f*/
          this->q220 = 2; /*0x454e85*/
          if ( v10 ) /*0x454e91*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x454e9b*/
            this->q30C = 0; /*0x454e9e*/
          }
        }
      }
    }
    else if ( v4 == 3 ) /*0x454eac*/
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
        if ( v12 == 15 && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)&this->owningHouseIndex4))(this, 0, 0) == 5 ) /*0x454ef7*/
          v13 = 16; /*0x454ef9*/
        v14 = (char *)&this->u32_1570; /*0x454efe*/
        v15 = 21; /*0x454f04*/
        do /*0x454f19*/
        {
          if ( *(_DWORD *)v14 ) /*0x454f09*/
            *(_BYTE *)(v14->q178 = v13; /*0x454f0f*/
          v14 += 4; /*0x454f15*/
          --v15; /*0x454f18*/
        }
        while ( v15 ); /*0x454f19*/
        if ( !this->Translucency ) /*0x454f1b*/
        {
          v16 = this->q30C; /*0x454f29*/
          this->q220 = 0; /*0x454f2f*/
          if ( !v16 ) /*0x454f37*/
          {
            v17 = (int *)(this->Type + 1896); /*0x454f49*/
            if ( *v17 != g_BuildingClassPool /*0x454f6c*/
              || this->Type->RefinerySmokeOffsetOne != dword_89C84C
              || this->Type->q770 != dword_89C850 )
            {
              v18 = *v17; /*0x454f75*/
              v19 = this->Type->RefinerySmokeOffsetOne; /*0x454f77*/
              v68 = this->Type->q770; /*0x454f7f*/
              v20 = RA2_OPNEW(0x100u); /*0x454f88*/
              if ( v20 ) /*0x454f8f*/
              {
                Parachute = (void *)this->q0A0; /*0x454fa9*/
                v63[0] = v18 + this->location; /*0x454fac*/
                v22 = this->q0A4; /*0x454fb4*/
                v65[0] = this->location; /*0x454fbb*/
                v63[1] = (int)Parachute + v19; /*0x454fbf*/
                v23 = (void *)this->q0A0; /*0x454fc3*/
                v24 = this->q0A4; /*0x454fc6*/
                v63[2] = v68 + v22; /*0x454fd5*/
                v65[1] = v23; /*0x454fd9*/
                v24 = v24; /*0x454fdd*/
                v25 = Coord::To_Cell(&MapClass_Instance, v65); /*0x454fe1*/
                v26 = ParticleSystemClass::Constructor( /*0x454fff*/
                        (int)v20,
                        this->Type->q764,
                        v63,
                        (int)v25,
                        0,
                        &g_BuildingClassPool,
                        0);
              }
              else
              {
                v26 = 0; /*0x45500a*/
              }
              this->q30C = v26; /*0x45500c*/
            }
          }
        }
      }
    }
    if ( this->q220 == 2 && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->behindAnim6))(this) ) /*0x45501f*/
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->q1BC6))(this, 0); /*0x45502f*/
    result = this->q220; /*0x455035*/
    if ( !result ) /*0x45503d*/
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->behindAnim2))(this); /*0x455043*/
      if ( (_BYTE)result ) /*0x45504b*/
        result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->airstrikeTintStage0))(this, 0); /*0x455053*/
    }
    IDA_LOBYTE(result) = this->HasCloakingData; /*0x455059*/
    if ( (_BYTE)result ) /*0x455061*/
    {
      result = this->Type; /*0x455067*/
      if ( result->CloakGenerator ) /*0x45506d*/
      {
        v28 = (int *)dword_89DDC0; /*0x45507f*/
        v29 = *(_DWORD *)dword_89DDC0; /*0x45508b*/
        v60 = *(_DWORD *)(this->owner + 48); /*0x455092*/
        v30 = (*(int (__thiscall **)(int))(v29 + 124))(dword_89DDC0); /*0x455099*/
        result = v30 - (v30 >> 31); /*0x45509c*/
        v30 = v30; /*0x45509e*/
        v31 = v30 / 2; /*0x4550aa*/
        IDA_LOBYTE(result) = this->CloakRadius; /*0x4550ae*/
        if ( this->HasCloakingData <= 0 ) /*0x4550b4*/
        {
          if ( (_BYTE)result ) /*0x455275*/
          {
            this->CloakRadius = result - 1; /*0x45528b*/
            (*(void (__thiscall **)(int *))(*v28 + 24))(v28); /*0x455295*/
            v41 = (int *)(*(int (__thiscall **)(int *, int *, _DWORD))(*v28 + 120))(v28, &v24, 0); /*0x4552a3*/
            Draw::Ellipse(v28, v31, v31, this->Type->CloakRadiusInCells, *v41, v41[1], v41[2], v41[3], 2); /*0x4552d3*/
            if ( this->CloakRadius ) /*0x4552d8*/
            {
              v42 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v28 + 120))(v28, v67); /*0x4552ed*/
              Draw::Ellipse(v28, v31, v31, this->CloakRadius, *v42, v42[1], v42[2], v42[3], 1); /*0x455317*/
            }
            v62 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*v28 + 92))(v28, 0, 0); /*0x45532d*/
            result = v64 - v31; /*0x455337*/
            IDA_HIWORD(v65[0]) = IDA_HIWORD(v64) - v31; /*0x455339*/
            IDA_LOWORD(v65[0]) = v64 - v31; /*0x455340*/
            v61 = 0; /*0x455345*/
            if ( v30 > 0 ) /*0x45534d*/
            {
              v60 = v60; /*0x455353*/
              while ( 2 ) /*0x455357*/
              {
                v44 = 0; /*0x455357*/
                do /*0x45544d*/
                {
                  v35 = *v62++ == 0; /*0x455360*/
                  if ( v35 ) /*0x455366*/
                  {
                    IDA_LOWORD(v63[0]) = v44 + IDA_LOWORD(v65[0]); /*0x45537d*/
                    IDA_HIWORD(v63[0]) = (_WORD)v61 + IDA_HIWORD(v65[0]); /*0x455382*/
                    v60 = v63[0]; /*0x45538f*/
                    v45 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v60); /*0x45539e*/
                    if ( Cell::HasOccupierBit(v45, v60) ) /*0x4553a3*/
                    {
                      ((void (__stdcall *)(int))BuildingClass::updateOccupiedState)(v60); /*0x4553b3*/
                      for ( i = (_DWORD *)v45[57]; i; i = (_DWORD *)i[12] ) /*0x4553c0*/
                      {
                        v47 = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x4553c6*/
                        if ( v47 == 1 || v47 == 15 || v47 == 2 ) /*0x4553d6*/
                          (*(void (__thiscall **)(_DWORD *))(*i + 1056))(i); /*0x4553dc*/
                      }
                      v48 = Cell::IsBridge(v45); /*0x4553eb*/
                      if ( v48 ) /*0x4553f2*/
                      {
                        if ( *(_DWORD *)(v48[135] + 48) == v60 ) /*0x4553fd*/
                        {
                          v49 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v48 + 72))(v48, v67); /*0x455408*/
                          if ( IDA___PAIR32__(v49[1] / 256, *v49 / 256) == v60 && !(_BYTE)v62 ) /*0x455440*/
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
                result = (int)++v61; /*0x45545b*/
                if ( (int)v61 < v30 ) /*0x455462*/
                  continue; /*0x455462*/
                break;
              }
            }
            IDA_LOBYTE(result) = this->CloakRadius; /*0x45546c*/
            if ( !(_BYTE)result ) /*0x455474*/
            {
              result = g_BuildingProductionState; /*0x45547a*/
              for ( j = 0; j < g_BuildingProductionState; ++j ) /*0x455483*/
              {
                v51 = *((_DWORD *)g_BuildingClass_InstanceCount + j); /*0x45548f*/
                if ( *(_BYTE *)(v51 + 144) ) /*0x455492*/
                {
                  if ( (void *)v51 != this ) /*0x4554a2*/
                  {
                    if ( *(_BYTE *)(*(_DWORD *)(v51 + 1312) + 5831) ) /*0x4554ae*/
                    {
                      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v51 + 848))(*((_DWORD *)g_BuildingClass_InstanceCount /*0x4554c0*/
                                                                                              + j)) )
                      {
                        if ( !*(_BYTE *)(v51 + 1771) ) /*0x4554ce*/
                        {
                          v52 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v51 + 72))(v51, v67); /*0x4554e5*/
                          IDA_LOWORD(v65[0]) = *v52 / 256; /*0x4554f8*/
                          IDA_HIWORD(v65[0]) = v52[1] / 256; /*0x455510*/
                          v53 = this->Type->CloakRadiusInCells + 2; /*0x45553a*/
                          if ( (__int16)(IDA_HIWORD(v64) - IDA_HIWORD(v65[0])) * (__int16)(IDA_HIWORD(v64) - IDA_HIWORD(v65[0])) /*0x455551*/
                             + (__int16)(v64 - IDA_LOWORD(v65[0])) * (__int16)(v64 - IDA_LOWORD(v65[0])) < 4 * v53 * v53 )
                          {
                            v54 = *(_DWORD *)(v51 + 1312); /*0x455553*/
                            if ( v54->CloakGenerator ) /*0x455559*/
                            {
                              v55 = *(_BYTE *)(v51 + 1772); /*0x455563*/
                              *(_BYTE *)(v51 + 1771) = 1; /*0x455569*/
                              if ( v55 == v54->CloakRadiusInCells ) /*0x455576*/
                                *(_BYTE *)(v51 + 1772) = 0; /*0x455578*/
                              *(_BYTE *)(v51 + 128) = 1; /*0x45557f*/
                            }
                            v56 = *(_BYTE *)(v51 + 1772); /*0x455586*/
                            if ( v56 ) /*0x45558e*/
                              *(_BYTE *)(v51 + 1772) = v56 - 1; /*0x455592*/
                          }
                        }
                      }
                    }
                  }
                }
                result = g_BuildingProductionState; /*0x455598*/
              }
            }
          }
          else
          {
            this->HasCloakingData = 0; /*0x455277*/
          }
        }
        else if ( (_BYTE)result == this->Type->CloakRadiusInCells ) /*0x4550c6*/
        {
          this->HasCloakingData = 0; /*0x4550c8*/
        }
        else
        {
          this->CloakRadius = result + 1; /*0x4550dd*/
          (*(void (__thiscall **)(int *, _DWORD))(*v28 + 24))(v28, 0); /*0x4550e7*/
          v32 = (int *)(*(int (__thiscall **)(int *, _BYTE *, int))(*v28 + 120))(v28, v67, 1); /*0x4550f5*/
          Draw::Ellipse(v28, v31, v31, this->CloakRadius, *v32, v32[1], v32[2], v32[3], v57); /*0x45511f*/
          v61 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD))(*v28 + 92))(v28, 0); /*0x455135*/
          v33 = 0; /*0x455141*/
          IDA_LOWORD(v63[0]) = v64 - v31; /*0x455143*/
          result = v30; /*0x455148*/
          for ( IDA_HIWORD(v63[0]) = IDA_HIWORD(v64) - v31; v33 < v30; ++v33 ) /*0x455153*/
          {
            for ( k = 0; k < v30; ++k ) /*0x455159*/
            {
              v35 = *v61++ == 0; /*0x455162*/
              if ( !v35 ) /*0x455168*/
              {
                IDA_HIWORD(v62) = v33 + IDA_HIWORD(v63[0]); /*0x45517b*/
                IDA_LOWORD(v62) = k + IDA_LOWORD(v63[0]); /*0x455180*/
                v62 = v62; /*0x45518d*/
                v36 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62); /*0x4551a0*/
                if ( !Cell::HasOccupierBit(v36, v60) ) /*0x4551a5*/
                {
                  ((void (__stdcall *)(int))BuildingClass::checkOccupant)(v60); /*0x4551b9*/
                  for ( m = (_DWORD *)v36[57]; m; m = (_DWORD *)m[12] ) /*0x4551c6*/
                  {
                    v38 = (*(int (__thiscall **)(_DWORD *))(*m + 44))(m); /*0x4551cc*/
                    if ( v38 == 1 || v38 == 15 || v38 == 2 ) /*0x4551dc*/
                      (*(void (__thiscall **)(_DWORD *))(*m + 1056))(m); /*0x4551e2*/
                  }
                  v39 = Cell::IsBridge(v36); /*0x4551f1*/
                  if ( v39 ) /*0x4551f8*/
                  {
                    if ( *(_DWORD *)(v39[135] + 48) == v60 ) /*0x455207*/
                    {
                      v40 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v39 + 72))(v39, v67); /*0x455212*/
                      if ( (_BYTE *)IDA___PAIR32__(v40[1] / 256, *v40 / 256) == v62 ) /*0x45523b*/
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
// 0x44abd0
void BuildingClass::FireLaser() {}
  int *v5; // eax
  char *v6; // eax
  wchar_t *v7; // eax
  int ConditionRedSparkingProbability_high; // ecx
  int v10; // [esp-20h] [ebp-44h]
  int ConditionYellowSparkingProbability; // [esp-14h] [ebp-38h]
  char *v12; // [esp+14h] [ebp-10h]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v12 = (char *)RA2_OPNEW(0x5Cu); /*0x44abef*/
  if ( v12 ) /*0x44abf3*/
  {
    ConditionYellowSparkingProbability = g_RulesClass_Instance->ConditionYellowSparkingProbability; /*0x44ac10*/
    IDA_LOWORD(v10) = *(_WORD *)(*(&this->attachedTag5) + 22268); /*0x44ac42*/
    IDA_HIWORD(v10) = *(unsigned __int8 *)(*(&this->attachedTag5) + 22270); /*0x44ac4c*/
    v5 = (int *)(*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 176))( /*0x44ac7f*/
                  this,
                  v13,
                  0,
                  0,
                  0,
                  0);
    v6 = TimerClass::Construct( /*0x44ac9e*/
           v12,
           *v5,
           v5[1],
           v5[2],
           a2,
           a3,
           a4,
           0,
           1,
           v10,
           0,
           0,
           ConditionYellowSparkingProbability,
           0,
           1,
           1065353216,
           0);
    if ( v6 ) /*0x44aca5*/
    {
      v6[32] = 1; /*0x44aca7*/
      *((_DWORD *)v6 + 7) = 3; /*0x44acab*/
    }
  }
  v7 = g_CurrentFrame; /*0x44acb8*/
  ConditionRedSparkingProbability_high = IDA_HIDWORD(g_RulesClass_Instance->ConditionRedSparkingProbability); /*0x44acc4*/
  *(this + 409) = 0; /*0x44acca*/
  *(this + 187) = v7; /*0x44acd0*/
  *(this + 188) = a3; /*0x44acd8*/
  *(&this->q0489) = ConditionRedSparkingProbability_high; /*0x44acdc*/
  return a3; /*0x44acc3*/
// 0x456e00
void BuildingClass::AcquireTarget() {}
  int v2; // eax
  int v3; // edi
  void *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  char *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+20h] [ebp+4h]
  _DWORD *v18; // [esp+20h] [ebp+4h]

  if ( v17 ) /*0x456e0f*/
    this->needsRedraw = 1; /*0x456e11*/
  TechnoClass::SetTargetIfAllowed(this, v17); /*0x456e1b*/
  v16 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->missionStartTime4))(this); /*0x456e2e*/
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->suspendedMission4))(this); /*0x456e32*/
  v3 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->airstrikeTintStage4))(this, *(__int16 *)(v2 + 266)); /*0x456e4a*/
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->onBridge2))(this)
    || this->airstrike
    && (this ? (v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this) == 6 ? this : 0) : (v4 = 0),
        *(void **)(this->airstrike + 80) == v4) )
  {
    IDA_LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x456e91*/
  }
  this->BuildingClass_field_short_700 = v3; /*0x456e93*/
  v18 = (_DWORD *)((char *)&this->cloakState2); /*0x456eaa*/
  v15 = 21; /*0x456eae*/
  do /*0x456f36*/
  {
    v5 = (_DWORD *)*v18; /*0x456eba*/
    if ( *v18 ) /*0x456eba*/
    {
      v6 = v5[50]; /*0x456ec0*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x456eca*/
      {
        v5[53] = v16; /*0x456edc*/
        v5[63] = (unsigned __int16)v3; /*0x456ee2*/
      }
      v7 = this->Translucency; /*0x456ee8*/
      if ( v7 == 15 && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)&this->owningHouseIndex4))(this, 0, 0) == 5 ) /*0x456f02*/
        IDA_LOBYTE(v7) = 16; /*0x456f04*/
      v8 = (char *)&this->u32_1570; /*0x456f09*/
      v9 = 21; /*0x456f0b*/
      do /*0x456f20*/
      {
        if ( *(_DWORD *)v8 ) /*0x456f10*/
          *(_BYTE *)(*(_DWORD *)v8 + 376) = v7; /*0x456f16*/
        v8 += 4; /*0x456f1c*/
        --v9; /*0x456f1f*/
      }
      while ( v9 ); /*0x456f20*/
    }
    v10 = v15 == 1; /*0x456f2d*/
    ++v18; /*0x456f2e*/
    --v15; /*0x456f32*/
  }
  while ( !v10 ); /*0x456f36*/
  v11 = this->Translucency; /*0x456f3c*/
  if ( v11 == 15 && (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)&this->owningHouseIndex4))(this, 0, 0) == 5 ) /*0x456f56*/
    IDA_LOBYTE(v11) = 16; /*0x456f58*/
  v12 = (int *)((char *)&this->cloakState2); /*0x456f5d*/
  v13 = 21; /*0x456f5f*/
  do /*0x456f74*/
  {
    result = *v12; /*0x456f64*/
    if ( *v12 ) /*0x456f64*/
      result->q178 = v11; /*0x456f6a*/
    ++v12; /*0x456f70*/
    --v13; /*0x456f73*/
  }
  while ( v13 ); /*0x456f74*/
  return result; /*0x456f76*/
// 0x465d40
bool BuildingTypeClass::Is1x1AndUndeployable_BuildingMassSelectable()
{
  int v1; // eax
  BOOL result; // eax

  result = 0; /*0x465d68*/
  if ( *(&this->customSound8) ) /*0x465d40*/
  {
    v1 = *(&this->q17C6); /*0x465d55*/
    if ( dword_8192B8[v1] == 1 && dword_819310[v1] == 1 ) /*0x465d66*/
      return 1; /*0x465d48*/
  }
  return result; /*0x465d6a*/
}
// 0x465d40
    int __thiscall BuildingTypeClass::Is1x1AndUndeployable_BuildingMassSelectable(int *(void**)this)
    {
      int v1; // eax
      BOOL result; // eax

      result = 0; /*0x465d68*/
      if ( *(&this->customSound8) ) /*0x465d40*/
      {
        v1 = *(&this->q17C6); /*0x465d55*/
        if ( dword_8192B8[v1] == 1 && dword_819310[v1] == 1 ) /*0x465d66*/
          return 1; /*0x465d48*/
      }
      return result; /*0x465d6a*/
    }
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
void BuildingClass::UpdateMovingPosition() {}
  bool v3; // zf
  int v4; // ecx
  int v5; // edx
  int *v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx
  int v11; // [esp-4h] [ebp-28h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int GroundHeight; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v3 = *a2 == g_MatrixTransformState; /*0x5b17c6*/
  v12 = *a2; /*0x5b17c8*/
  v4 = a2[1]; /*0x5b17cc*/
  v4 = v4; /*0x5b17cf*/
  v5 = a2[2]; /*0x5b17d3*/
  GroundHeight = v5; /*0x5b17d6*/
  if ( !v3 || v4 != dword_ABEE14 || v5 != dword_ABEE18 ) /*0x5b17ea*/
  {
    GroundHeight = Cell::GetGroundHeight(&v12); /*0x5b1801*/
    if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, a2) + 80) & 0x100) != 0 ) /*0x5b1813*/
    {
      v6 = (int *)(this->vtable4 + 156); /*0x5b1818*/
      v15 = *v6; /*0x5b1820*/
      v16 = v6[1]; /*0x5b1827*/
      if ( v6[2] > GroundHeight + 2 * dword_ABEE50 + dword_ABEE50 ) /*0x5b183e*/
        GroundHeight += dword_ABEE44; /*0x5b1846*/
    }
  }
  v7 = &this->BarrelVoxel; /*0x5b1853*/
  if ( this->BarrelVoxel != g_MatrixTransformState || *(&this->vtable20) != dword_ABEE14 || *(&this->vtable21) != dword_ABEE18 ) /*0x5b1871*/
    (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, this + 9); /*0x5b1879*/
  v11 = this->vtable4; /*0x5b1886*/
  v8 = Coord::To_Cell(&MapClass_Instance, &v12); /*0x5b188d*/
  if ( !CrateClass::ProcessPickup(v8, v11) || (v9 = this->vtable4, *(_BYTE *)(v9 + 129)) ) /*0x5b18a0*/
  {
    *v7 = g_MatrixTransformState; /*0x5b18ca*/
    *(&this->vtable20) = dword_ABEE14; /*0x5b18d1*/
    *(&this->vtable21) = dword_ABEE18; /*0x5b18da*/
    v9 = this->vtable4; /*0x5b18dd*/
    if ( !*(_BYTE *)(v9 + 144) ) /*0x5b18e8*/
      return 0; /*0x5b18e8*/
  }
  else
  {
    *v7 = v12; /*0x5b18b0*/
    *(this + 10) = v13; /*0x5b18b6*/
    *(this + 11) = GroundHeight; /*0x5b18bd*/
  }
  if ( *v7 != g_MatrixTransformState || *(this + 10) != dword_ABEE14 || *(this + 11) != dword_ABEE18 ) /*0x5b190d*/
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v9 + 240))(v9, this + 9); /*0x5b1912*/
    return 1; /*0x5b1920*/
  }
  v15 = *(_DWORD *)(v9 + 156); /*0x5b192f*/
  v16 = *(_DWORD *)(v9 + 160); /*0x5b1936*/
  v17 = *(_DWORD *)(v9 + 164); /*0x5b193d*/
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v9 + 240))(v9, &v15); /*0x5b1948*/
  return 0; /*0x5b1918*/
// 0x451e40
void BuildingClass::ClearAnims()
{
  int *v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // eax

  if ( a2 == -2 ) /*0x451e47*/
  {
    v2 = this + 343; /*0x451e4b*/
    v3 = 21; /*0x451e51*/
    do /*0x451e6d*/
    {
      v4 = *v2; /*0x451e56*/
      if ( *v2 ) /*0x451e56*/
      {
        *v2 = 0; /*0x451e5c*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x451e66*/
      }
      ++v2; /*0x451e69*/
      --v3; /*0x451e6c*/
    }
    while ( v3 ); /*0x451e6d*/
  }
  else
  {
    v5 = *(this + a2 + 343); /*0x451e74*/
    if ( v5 ) /*0x451e7d*/
    {
      *(this + a2 + 343) = 0; /*0x451e7f*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x451e90*/
    }
  }
}
// 0x450630
void BuildingClass::ProcessActiveAnimation() {}
  void *v2; // ecx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // et2
  int v11; // ecx
  int v12; // edi
  int v13; // ebp
  int v14; // edx
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  BOOL v18; // ebx
  int v19; // ebp
  int v20; // edi
  _BYTE *v21; // eax
  int v22; // ecx
  _DWORD *v24; // [esp+10h] [ebp-14h]
  int ProductionFrame; // [esp+14h] [ebp-10h]
  int v26; // [esp+1Ch] [ebp-8h]

  if ( *(_DWORD *)(*(&this->ptr_345) + 588) < SHIDWORD(g_RulesClass_Instance[1].TunnelSpeed) /*0x450683*/
    || this->vt_slot_388() == 18
    || this->vt_slot_388() == 19
    || !this->Stub3() )
  {
    goto LABEL_22; /*0x45068b*/
  }
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*(&this->ptr_345) + 36) + 24))(*(&this->ptr_345) + 36) < g_RulesClass_Instance[1].PrerequisiteRadar[3] ) /*0x4506ac*/
  {
    if ( (g_GameMode_Current[0] || this->u32_6DC) /*0x450805*/
      && this->u32_3D1
      && *(_DWORD *)(*(&this->ptr_345) + 464) >= g_RulesClass_Instance[1].SelfHealUnitAmount
      && (unsigned int)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 50) < *(_DWORD *)(*(&this->ptr_345) + 468)
      && !*(&this->u32_43)
      && *(_DWORD *)(*(&this->u32_808) + 3768) != 7
      && BuildingClass::GetHealthRatio(this) < *(double *)&g_RulesClass_Instance[1].ChronoSparkle1 )
    {
      this->vt_slot_416(1); /*0x45080d*/
    }
  LABEL_22:
    IDA_LOBYTE(v8) = this->u32_6E8; /*0x450813*/
    if ( !(_BYTE)v8 ) /*0x45081b*/
      return v8; /*0x45081b*/
    goto LABEL_23; /*0x45081b*/
  }
  v2 = (void *)*(this + 135); /*0x4506b2*/
  if ( *((_BYTE *)v2 + 581) ) /*0x4506b8*/
    goto LABEL_22; /*0x4506c0*/
  if ( !this->IsBeingRepaired ) /*0x4506c6*/
  {
    if ( this->HasBeenCaptured || this->q6CB || (unsigned __int8)House::IsCurrentPlayer(v2) ) /*0x4506e8*/
    {
      *(_BYTE *)(*(&this->attachedTag5) + 581) = 1; /*0x4506ff*/
      this->ToggleRepairMode(1); /*0x450708*/
      if ( !(unsigned __int8)House::IsCurrentPlayer((void *)*(&this->attachedTag5)) ) /*0x450714*/
      {
        v3 = *(&this->attachedTag5); /*0x450721*/
        v4 = Math::RoundToInt(*(double *)(v3 + 448) * 1800.0); /*0x450744*/
        v5 = Math::RoundToInt(*(double *)(v3 + 448) * 225.0); /*0x450746*/
        v6 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, v5, v4); /*0x450759*/
        v7 = (_DWORD *)(*(&this->attachedTag5) + 640); /*0x45076a*/
        *v7 = g_CurrentFrame; /*0x450770*/
        v7[1] = v26; /*0x450776*/
        v7[2] = v6; /*0x450779*/
      }
    }
    goto LABEL_22; /*0x45077c*/
  }
  LABEL_23:
  v9 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].DrainAnimationType * 900.0); /*0x450821*/
  v10 = (int)g_CurrentFrame % v9; /*0x45083f*/
  v8 = (int)g_CurrentFrame / v9; /*0x45083f*/
  if ( !v10 )
  {
    v11 = *(&this->needsRedraw8); /*0x45084f*/
    this->NeedsRepairs = this->NeedsRepairs == 0; /*0x45085a*/
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 176))(v11); /*0x45086e*/
    v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(&this->needsRedraw8) + 180))(*(&this->needsRedraw8)); /*0x45087a*/
    ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x450881*/
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(&this->attachedTag5) + 36) + 24))(*(&this->attachedTag5) + 36); /*0x450891*/
    if ( v8 < v12 )
    {
      this->IsBeingRepaired = 0; /*0x4509b4*/
    }
    else
    {
      HouseClass::ProcessPowerDrain(*(&this->attachedTag5), v12); /*0x4508a3*/
      v14 = *(&this->needsRedraw8); /*0x4508ae*/
      v15 = v13 + *(&this->vtable37); /*0x4508b4*/
      v16 = v13 + *(&this->vtable38); /*0x4508b6*/
      *(&this->vtable37) = v15; /*0x4508b8*/
      *(&this->vtable38) = v16; /*0x4508bb*/
      v17 = *(_DWORD *)(v14 + 160); /*0x4508be*/
      if ( v15 >= v17 ) /*0x4508c8*/
      {
        *(&this->vtable37) = v17; /*0x4508ca*/
        *(&this->vtable38) = v17; /*0x4508cd*/
        this->IsBeingRepaired = 0; /*0x4508d0*/
      }
      v18 = BuildingClass::GetHealthRatio(this) <= *(double *)&g_RulesClass_Instance[1].WarpOut; /*0x4508ee*/
      if ( this->IsDamaged != v18 )
      {
        v19 = 0; /*0x450907*/
        this->IsDamaged = v18; /*0x450909*/
        v20 = 0; /*0x45090f*/
        v24 = &this->Anims; /*0x450911*/
        do
        {
          if ( *v24 )
          {
            v21 = (_BYTE *)(v18 ? v20 + *(&this->needsRedraw8) + 3932 : v20 + *(&this->needsRedraw8) + 3916);
            if ( v21 && *v21 ) /*0x450942*/
              BuildingClass::PlayAnim(this, (int)v24, v21, v19, v18, 0, 0); /*0x450950*/
          }
          v20 += 68; /*0x450959*/
          ++v19; /*0x45095c*/
          ++v24; /*0x450966*/
        }
        while ( v20 < 1428 );
      }
      if ( BuildingClass::GetHealthRatio(this) > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x450984*/
      {
        v22 = *(&this->u32_4C6); /*0x450986*/
        if ( v22 ) /*0x45098e*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 248))(v22); /*0x450992*/
      }
      v8 = BuildingClass::GetProductionFrame(this); /*0x45099a*/
      if ( v8 != ProductionFrame ) /*0x4509a3*/
        this->needsRedraw = 1; /*0x4509a5*/
    }
  }
  return v8; /*0x4509ac*/
// 0x42f260
void BuildingClass::MarkUpgradeComponentUsed() {}
  int v4; // edi
  int v5; // ebx
  int v6; // ebx
  _WORD *result; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // ecx
  int v11; // ebp
  int i; // esi
  char v13[4]; // [esp+10h] [ebp-4h] BYREF
  int v14; // [esp+18h] [ebp+4h]

  if ( a2[135] == *(&this->vtable39) ) /*0x42f274*/
  {
    v4 = 0; /*0x42f279*/
    if ( this->abstractFlags > 0 ) /*0x42f27d*/
    {
      v5 = 0; /*0x42f27f*/
      v14 = 0; /*0x42f281*/
      while ( 1 ) /*0x42f28e*/
      {
        v6 = this->vtable3 + v5; /*0x42f28e*/
        if ( *(_DWORD *)(a2[328] + 3576) == *(_DWORD *)v6 ) /*0x42f298*/
        {
          result = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a2 + 440))(a2, v13); /*0x42f2a4*/
          if ( *result == *(_WORD *)(v6 + 4) && result[1] == *(_WORD *)(v6 + 6) ) /*0x42f2bb*/
            break; /*0x42f2bb*/
        }
        ++v4; /*0x42f2c4*/
        v5 = v14 + 16; /*0x42f2c5*/
        v14 += 16; /*0x42f2ca*/
        if ( v4 >= this->abstractFlags ) /*0x42f2ce*/
          goto LABEL_10; /*0x42f2ce*/
      }
      v8 = this->vtable3 + 16 * v4; /*0x42f2d8*/
      if ( v8 ) /*0x42f2dc*/
        goto LABEL_18; /*0x42f2dc*/
    }
  }
  LABEL_10:
  v9 = a2[328]; /*0x42f2de*/
  result = *(_WORD **)(v9 + 1032); /*0x42f2e4*/
  if ( result ) /*0x42f2ec*/
  {
    v10 = this->abstractFlags; /*0x42f2ee*/
    v11 = *(_DWORD *)(v9 + 3576); /*0x42f2f1*/
    result = 0; /*0x42f2f7*/
    if ( v10 > 0 ) /*0x42f2fb*/
    {
      for ( i = this->vtable3; *(_DWORD *)i != v11 || *(_BYTE *)(i + 8); i += 16 ) /*0x42f2fd*/
      {
        result = (_WORD *)((char *)result + 1); /*0x42f30b*/
        if ( (int)result >= v10 ) /*0x42f311*/
          return result; /*0x42f311*/
      }
      v8 = i; /*0x42f31d*/
      if ( i ) /*0x42f31f*/
      {
  LABEL_18:
        *(_BYTE *)(v8 + 8) = 1; /*0x42f321*/
        *(_DWORD *)(v8 + 12) = 0; /*0x42f325*/
      }
    }
  }
  return result; /*0x42f313*/
// 0x452260
void BuildingClass::AnnounceReady() {}
  int v2; // ecx
  _BYTE *v3; // ecx
  int v4; // edx
  int v5; // edi
  _BYTE **v6; // ebx
  int v7; // eax
  int v8; // ecx

  if ( !*(_BYTE *)(this + 1632) && !*(_DWORD *)(this + 1284) ) /*0x452271*/
  {
    v2 = *(_DWORD *)(this + 540); /*0x45227f*/
    *(_BYTE *)(this + 1632) = 1; /*0x452287*/
    *(_BYTE *)(this + 128) = 1; /*0x45228d*/
    *(_BYTE *)(v2 + 22392) = 1; /*0x452293*/
    *(_BYTE *)(*(_DWORD *)(this + 540) + 22393) = 1; /*0x45229f*/
    *(_BYTE *)(*(_DWORD *)(this + 540) + 508) = 1; /*0x4522ab*/
    v3 = *(_BYTE **)(this + 1556); /*0x4522b1*/
    *(_BYTE *)(this + 1770) = 1; /*0x4522b9*/
    if ( v3 ) /*0x4522bf*/
      Trigger::EnableOnce(v3, 0); /*0x4522c3*/
    v4 = *(_DWORD *)(this + 1312); /*0x4522c8*/
    if ( *(_BYTE *)(v4 + 5822) ) /*0x4522ce*/
      BuildingClass::RepairPlacement((_BYTE *)this, 0); /*0x4522dc*/
    v5 = 0; /*0x4522e3*/
    v6 = (_BYTE **)(this + 1372); /*0x4522e5*/
    do /*0x452313*/
    {
      if ( *(_BYTE *)(v5 + *(_DWORD *)(this + 1312) + 3980) && *v6 ) /*0x4522fc*/
        VtableStub::425270(*v6); /*0x452302*/
      v5 += 68; /*0x452307*/
      ++v6; /*0x45230a*/
    }
    while ( v5 < 1428 ); /*0x452313*/
    v7 = *(_DWORD *)(this + 1312); /*0x452315*/
    v8 = *(_DWORD *)(v7 + 3768); /*0x45231d*/
    if ( v8 ) /*0x452325*/
    {
      IDA_LOBYTE(v4) = *(_BYTE *)(v7 + 3278); /*0x452327*/
      HouseClass::UpdateProduction(*(_DWORD *)(this + 540), v8, v4, 0); /*0x452337*/
    }
    if ( (unsigned __int8)House::IsHumanPlayer(*(void **)(this + 540)) ) /*0x452342*/
      VoxClass::FindAndPlay(aEvaBuildingonl, -1); /*0x452355*/
  }
// 0x456640
void BuildingClass::UpdateDetectionField()
{
  char *Field; // ebx
  int v3; // esi
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  _DWORD v9[2]; // [esp+Ch] [ebp-8h] BYREF

  Field = Diplomacy::GetField((char *)&MapClass_Instance, this->Type); /*0x456659*/
  v3 = 0; /*0x45665b*/
  result = *((_DWORD *)Field + 4); /*0x45665d*/
  if ( result > 0 ) /*0x456662*/
  {
    do /*0x45669d*/
    {
      v5 = *((_DWORD *)Field + 1); /*0x456664*/
      v6 = *(_DWORD *)(v5 + 8 * v3) + this->currentBurstCount; /*0x456673*/
      v7 = this->q20C; /*0x456675*/
      v8 = *(_DWORD *)(v5 + 8 * v3 + 4); /*0x45667b*/
      v9[0] = v6; /*0x45667e*/
      v9[1] = v7 + v8; /*0x456688*/
      FogOfWar::RevealCell((int)&MapClass_Instance, v9); /*0x456692*/
      result = *((_DWORD *)Field + 4); /*0x456697*/
      ++v3; /*0x45669a*/
    }
    while ( v3 < result ); /*0x45669d*/
  }
  return result; /*0x45669f*/
}
// 0x457020
bool BuildingClass::IsCellVisibleToPlayer(int cell_x, int cell_y)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // ebx
  bool v8; // bl
  int v9; // [esp+8h] [ebp-20h]
  int v10; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v12[3]; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v13; // [esp+2Ch] [ebp+4h]

  result = this->Type; /*0x457027*/
  if ( *(_BYTE *)(result + 3226) || this->inLimbo ) /*0x45703b*/
    goto LABEL_22; /*0x45703b*/
  result = House::IsHumanPlayer(*((void **)this + 135)); /*0x45704f*/
  if ( (_BYTE)result ) /*0x457056*/
  {
    IDA_LOBYTE(result) = this->isDiscoveredByCurrentPlayer != 0; /*0x457061*/
    return result; /*0x457068*/
  }
  v3 = (_DWORD *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)&this->referenceCount2))(this, v12); /*0x457074*/
  IDA_LOWORD(v9) = *v3 / 256; /*0x457089*/
  IDA_HIWORD(v9) = v3[1] / 256; /*0x4570a1*/
  v9 = v9; /*0x4570aa*/
  if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v9, 1) ) /*0x4570b4*/
    goto LABEL_22; /*0x4570b4*/
  v4 = (BuildingTypeClass::GetFoundationHeight(this->Type, 0) << 8) - 256; /*0x4570db*/
  v5 = (BuildingTypeClass::GetFoundationWidth(*((_DWORD **)&this->needsRedraw8)) << 8) - 256; /*0x4570f5*/
  v11[0] = this->location; /*0x4570fb*/
  v11[1] = this->q0A0; /*0x45710c*/
  v11[2] = this->q0A4; /*0x457113*/
  v8 = 0; /*0x457154*/
  if ( Cell::IsPassable(v11) ) /*0x457117*/
  {
    v6 = this->q0A4; /*0x457125*/
    v7 = this->q0A0 + v4; /*0x45712e*/
    v12[0] = v5 + this->location; /*0x457136*/
    v12[1] = v7; /*0x45713a*/
    v12[2] = v6; /*0x45713e*/
    if ( Cell::IsPassable(v12) ) /*0x457142*/
    {
      if ( g_hWnd ) /*0x457152*/
        v8 = 1; /*0x45711e*/
    }
  }
  result = this->q220; /*0x45715a*/
  if ( result != 2 && this->Translucency != 15 && !this->IsFogged && !v8 ) /*0x45717c*/
  {
    IDA_LOBYTE(result) = 1; /*0x45717f*/
    return result; /*0x457185*/
  }
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->currentRank8))(this); /*0x45718c*/
  if ( !(_BYTE)result ) /*0x457194*/
  {
  LABEL_22:
    IDA_LOBYTE(result) = 0; /*0x4571cf*/
  }
  else
  {
    result = HouseClass::IsAlliedWith(HouseClass_Player, *((void **)&this->attachedTag5)); /*0x4571a3*/
    if ( !(_BYTE)result && !this->IsFogged && !v8 ) /*0x4571b8*/
      *v13 = 1; /*0x4571be*/
    IDA_LOBYTE(result) = 1; /*0x4571c5*/
  }
  return result; /*0x45705e*/
}
// 0x457aa0
void BuildingClass::CreateFoggedObjects() {}
  _WORD *v5; // edi
  void *v6; // eax
  __int16 result; // ax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v21; // [esp+1Ch] [ebp-8h]
  int v23; // [esp+28h] [ebp+4h]
  int v24; // [esp+30h] [ebp+Ch]

  v5 = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(&this->needsRedraw8) + 144))(*(&this->needsRedraw8), 0); /*0x457abc*/
  v5 = v5; /*0x457ac0*/
  this->Remove(); /*0x457ac4*/
  v6 = RA2_OPNEW(0x78u); /*0x457acc*/
  if ( v6 ) /*0x457ad6*/
    v24 = FoggedObjectClass::Constructor((int)v6, this, a4); /*0x457ae5*/
  else
    v24 = 0; /*0x457aeb*/
  v21 = *(_DWORD *)this->GetCellCoords_Alt(&v23); /*0x457b04*/
  while ( 1 ) /*0x457b08*/
  {
    result = *v5; /*0x457b08*/
    if ( *v5 == 0x7FFF && v5[1] == 0x7FFF ) /*0x457b15*/
      return result; /*0x457c79*/
    IDA_LOWORD(v23) = v21 + result; /*0x457b25*/
    IDA_HIWORD(v23) = IDA_HIWORD(v21) + v5[1]; /*0x457b34*/
    v23 = v23; /*0x457b3d*/
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23); /*0x457b4b*/
    if ( a3 && v9 == a3 ) /*0x457b57*/
    {
      v10 = *(_DWORD *)(a2 + 8); /*0x457b59*/
      if ( *(_DWORD *)(a2 + 16) < v10 /*0x457b84*/
        || (*(_BYTE *)(a2 + 13) || !v10)
        && (v11 = *(_DWORD *)(a2 + 20), v11 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v10 + v11, 0) )
      {
        v12 = *(_DWORD *)(a2 + 16); /*0x457b8f*/
        v13 = *(_DWORD *)(a2 + 4); /*0x457b92*/
        *(_DWORD *)(a2 + 16) = v12 + 1; /*0x457b98*/
  LABEL_31:
        *(_DWORD *)(v13 + 4 * v12) = v24; /*0x457c60*/
      }
    }
    else
    {
      v14 = v9[10]; /*0x457ba0*/
      if ( v14 ) /*0x457ba5*/
      {
        v15 = *(_DWORD *)(v14 + 8); /*0x457ba7*/
        if ( *(_DWORD *)(v14 + 16) < v15 ) /*0x457baf*/
          goto LABEL_30; /*0x457baf*/
        if ( *(_BYTE *)(v14 + 13) || !v15 ) /*0x457bbc*/
        {
          v16 = *(_DWORD *)(v14 + 20); /*0x457bc2*/
          if ( v16 > 0 ) /*0x457bc7*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 8))(v14, v15 + v16, 0) ) /*0x457bd5*/
              goto LABEL_30; /*0x457bda*/
          }
        }
      }
      else
      {
        v17 = RA2_OPNEW(0x18u); /*0x457be4*/
        if ( v17 ) /*0x457bee*/
        {
          v17[1] = 0; /*0x457bf0*/
          v17[2] = 0; /*0x457bf3*/
          *((_BYTE *)v17 + 12) = 1; /*0x457bf6*/
          *((_BYTE *)v17 + 13) = 0; /*0x457bfa*/
          *v17 = &(void*)(void*)&DynamicVectorClass_FoggedObjectClass___vftable; /*0x457bfd*/
          v17[5] = 10; /*0x457c03*/
          v17[4] = 0; /*0x457c0a*/
        }
        else
        {
          v17 = 0; /*0x457c0f*/
        }
        v9[10] = v17; /*0x457c11*/
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v17 + 8))(v17, 1, 0); /*0x457c1b*/
        *(_DWORD *)(v9[10] + 20) = 1; /*0x457c21*/
        v14 = v9[10]; /*0x457c28*/
        v18 = *(_DWORD *)(v14 + 8); /*0x457c2b*/
        if ( *(_DWORD *)(v14 + 16) < v18 /*0x457c4d*/
          || (*(_BYTE *)(v14 + 13) || !v18)
          && (v19 = *(_DWORD *)(v14 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 8))(v14, v18 + v19, 0) )
        {
  LABEL_30:
          v12 = *(_DWORD *)(v14 + 16); /*0x457c54*/
          *(_DWORD *)(v14 + 16) = v12 + 1; /*0x457c5a*/
          v13 = *(_DWORD *)(v14 + 4); /*0x457c5d*/
          goto LABEL_31; /*0x457c5d*/
        }
      }
    }
    v20 += 2; /*0x457c67*/
    v5 = v20; /*0x457c72*/
  }
// IDA 0x44e8f0: object expired notification
// 0x44e8f0
BuildingTypeClass * * BuildingClass::OnObjectExpired(ObjectClass* obj)
{
  int v2; // edx
  int v3; // ecx
  _BYTE *v4; // eax
  int v5; // edx
  int v6; // ecx
  _BYTE *v7; // eax
  int result; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  char *v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // [esp+10h] [ebp+4h]
  _BYTE *v21; // [esp+14h] [ebp+8h] BYREF

  ObjectClass::NotifyExpired((int *)obj, (_BYTE *)v20, v21); /*0x44e8ff*/
  if ( *((_DWORD *)obj + 336) == v20 ) /*0x44e90e*/
    *((_DWORD *)obj + 336) = 0; /*0x44e910*/
  if ( *((_DWORD *)obj + 338) == v20 ) /*0x44e91c*/
    *((_DWORD *)obj + 338) = 0; /*0x44e91e*/
  if ( *((_DWORD *)obj + 329) == v20 ) /*0x44e92a*/
    *((_DWORD *)obj + 329) = 0; /*0x44e92c*/
  if ( *((_DWORD *)obj + 384) == v20 ) /*0x44e938*/
    *((_DWORD *)obj + 384) = 0; /*0x44e93a*/
  if ( *((_DWORD *)obj + 389) == v20 ) /*0x44e946*/
    *((_DWORD *)obj + 389) = 0; /*0x44e948*/
  if ( *((_DWORD *)obj + 351) == v20 ) /*0x44e954*/
  {
    if ( BuildingClass::GetHealthRatio((int *)obj) > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x44e96e*/
    {
      v3 = 0; /*0x44e988*/
      v4 = (_BYTE *)(*((_DWORD *)obj + 328) + 5140); /*0x44e98a*/
    }
    else
    {
      v3 = 1; /*0x44e976*/
      v4 = (_BYTE *)(*((_DWORD *)obj + 328) + 5156); /*0x44e97b*/
    }
    if ( v4 && *v4 ) /*0x44e993*/
      BuildingClass::PlayAnim(obj, v2, v4, 18, v3, 0, 0); /*0x44e99f*/
  }
  if ( *(_BYTE *)(*((_DWORD *)obj + 328) + 5805) && *((_DWORD *)obj + 353) == v20 ) /*0x44e9b8*/
  {
    if ( BuildingClass::GetHealthRatio((int *)obj) > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x44e9d1*/
    {
      v6 = 0; /*0x44e9eb*/
      v7 = (_BYTE *)(*((_DWORD *)obj + 328) + 4120); /*0x44e9ed*/
    }
    else
    {
      v6 = 1; /*0x44e9d9*/
      v7 = (_BYTE *)(*((_DWORD *)obj + 328) + 4136); /*0x44e9de*/
    }
    if ( v7 && *v7 ) /*0x44e9f6*/
      BuildingClass::PlayAnim(obj, v5, v7, 3, v6, 0, 0); /*0x44ea02*/
  }
  if ( v20 && (*(int (__stdcall **)(int))(*(_DWORD *)(v20 + 4) + 12))(v20 + 4) == 4 ) /*0x44ea18*/
  {
    result = 0; /*0x44ea1a*/
    v9 = (_DWORD *)((char *)obj + 1480); /*0x44ea1c*/
    do /*0x44ea2d*/
    {
      if ( *v9 == v20 ) /*0x44ea24*/
      {
        *((_DWORD *)obj + result + 370) = 0; /*0x44ea45*/
        return result; /*0x44ea4f*/
      }
      ++result; /*0x44ea26*/
      ++v9; /*0x44ea27*/
    }
    while ( result < 8 ); /*0x44ea2d*/
    if ( !*(_BYTE *)(v20 + 280) ) /*0x44ea35*/
      goto LABEL_34; /*0x44ea35*/
    IDA_LOBYTE(result) = BuildingClass::StopAnim((int)obj, v20); /*0x44ea3a*/
  }
  else
  {
  LABEL_34:
    if ( *((_DWORD *)obj + 328) == v20 ) /*0x44ea58*/
      *((_DWORD *)obj + 328) = 0; /*0x44ea5a*/
    v10 = (_DWORD *)((char *)obj + 1516); /*0x44ea60*/
    v11 = 3; /*0x44ea66*/
    do /*0x44ea75*/
    {
      if ( *v10 == v20 ) /*0x44ea6d*/
        *v10 = 0; /*0x44ea6f*/
      ++v10; /*0x44ea71*/
      --v11; /*0x44ea74*/
    }
    while ( v11 ); /*0x44ea75*/
    v12 = *((_DWORD *)obj + 411); /*0x44ea77*/
    v21 = (_BYTE *)v20; /*0x44ea8b*/
    v13 = (*(int (__thiscall **)(char *, _BYTE **))(v12 + 16))((char *)obj + 1644, &v21); /*0x44ea8f*/
    if ( v13 != -1 ) /*0x44ea95*/
    {
      v14 = *((_DWORD *)obj + 415); /*0x44ea97*/
      if ( v13 < v14 ) /*0x44ea9c*/
      {
        v15 = v14 - 1; /*0x44ea9e*/
        for ( *((_DWORD *)obj + 415) = v15; /*0x44eaa4*/
              v13 < *((_DWORD *)obj + 415);
              *(_DWORD *)(*((_DWORD *)obj + 412) + 4 * v13 - 4) = *(_DWORD *)(*((_DWORD *)obj + 412) + 4 * v13) )
        {
          ++v13; /*0x44eaa9*/
        }
      }
    }
    result = g_IKnowWhatImDoing; /*0x44eab8*/
    if ( g_IKnowWhatImDoing ) /*0x44eac0*/
    {
      v16 = *((_DWORD *)obj + 417); /*0x44eac2*/
      v17 = (char *)obj + 1668; /*0x44eac8*/
      v21 = (_BYTE *)v20; /*0x44ead2*/
      result = (*(int (__thiscall **)(char *, _BYTE **))(v16 + 16))(v17, &v21); /*0x44ead9*/
      if ( result != -1 ) /*0x44eadf*/
      {
        v18 = *((_DWORD *)v17 + 4); /*0x44eae1*/
        if ( result < v18 ) /*0x44eae6*/
        {
          v19 = v18 - 1; /*0x44eae8*/
          for ( *((_DWORD *)v17 + 4) = v19; /*0x44eaee*/
                result < *((_DWORD *)v17 + 4);
                *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * result) )
          {
            ++result; /*0x44eaf3*/
          }
        }
      }
    }
  }
  return result; /*0x44ea3f*/
}
// 0x4a5290
int BuildingClass::UpdateTimerWithElapsed()
{
  char result; // al
  int v2; // eax
  int v3; // esi

  result = this->nextArrayIndex; /*0x4a5290*/
  if ( result ) /*0x4a5295*/
  {
    v2 = this->uniqueId; /*0x4a5297*/
    v3 = this->vtable3; /*0x4a529b*/
    if ( v3 != -1 ) /*0x4a52a1*/
    {
      if ( (int)g_CurrentFrame - v3 >= v2 ) /*0x4a52ad*/
        v2 = 0; /*0x4a52b3*/
      else
        v2 -= (int)g_CurrentFrame - v3; /*0x4a52af*/
    }
    this->uniqueId = this->abstractFlags - v2; /*0x4a52bb*/
    result = this->customSound == 0; /*0x4a52c3*/
    this->customSound = result; /*0x4a52c6*/
  }
  return result; /*0x4a52c9*/
}
// 0x458db0
bool BuildingClass::HasActiveParam()
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q1984))(this); /*0x458db5*/
  if ( !(_BYTE)result ) /*0x458dbd*/
    return TechnoClass::HasActiveParam(this); /*0x458dc5*/
  IDA_LOBYTE(result) = 1; /*0x458dbf*/
  return result; /*0x458dc1*/
}
// IDA 0x455da0: check special update flags
// 0x455da0
void BuildingClass::CheckSpecialUpdateFlags()
{
  int result; // eax
  int v2; // ecx

  result = this->Type; /*0x455da0*/
  v2 = *(_DWORD *)(result + 3768); /*0x455da6*/
  IDA_LOBYTE(result) = v2 == 40 || v2 == 16 || *(_BYTE *)(result + 5804) || *(_BYTE *)(result + 5801); /*0x455dcd*/
  return result; /*0x455dcc*/
}
// ============================================================
// Section 14: Rendering
// ============================================================

// IDA 0x480110: calculate draw position
// 0x480110
Point2D* BuildingClass::CalcDrawPos(Point2D* out) const
{
  int *v3; // eax
  int v4; // edx
  int v5; // ecx
  unsigned __int8 v6; // al
  int v8; // ecx
  _BYTE v9[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = (int *)globalHelper_0FDCC0(v9, this->q044); /*0x48011d*/
  v4 = *v3; /*0x480122*/
  v5 = v3[1]; /*0x480124*/
  if ( this->currentRank >= 0 ) /*0x48012f*/
  {
    if ( this->q044 == 239 ) /*0x48014b*/
  LABEL_6:
      v5 -= 15; /*0x48014d*/
  }
  else
  {
    v6 = this->q11E; /*0x480131*/
    v5 -= 16; /*0x480137*/
    if ( v6 >= 9u && v6 <= 0x11u ) /*0x480140*/
      goto LABEL_6; /*0x480140*/
  }
  v8 = g_Map_VisibleRect - 15 * *(char *)(this + 283) + v5; /*0x480150*/
  *out = v4 + 30; /*0x480172*/
  out[1] = v8 + 15; /*0x480174*/
  return out; /*0x48016e*/
}
// 0x43d290
void BuildingClass::Draw(Point2D* a, RectangleStruct* b) const { (void)a; (void)b; }
  int v2; // edx
  int (__thiscall **vfptr0)(void *); // eax
  int result; // eax
  char *v5; // ecx
  int v6; // edx
  int (__thiscall **v7)(void *); // edx
  int v8; // edi
  int v9; // edi
  int v10; // eax
  char *v11; // edx
  unsigned __int8 v12; // bl
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  char *v17; // edx
  unsigned __int8 v18; // bl
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  double v24; // st7
  int v25; // ebx
  int v26; // eax
  int v27; // ebp
  __int16 *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // ebp
  _DWORD *v36; // eax
  _DWORD *v37; // ecx
  int v38; // ebx
  int v39; // kr08_4
  __int16 *v40; // eax
  int v41; // eax
  __int64 v42; // rax
  __int16 *v43; // eax
  int v44; // eax
  int ProductionFrame; // eax
  __int16 *v46; // eax
  int v47; // eax
  __int16 *v48; // eax
  int v49; // eax
  void *v50; // [esp+62h] [ebp-5Ch]
  int v51; // [esp+6Ah] [ebp-54h]
  int v52; // [esp+6Eh] [ebp-50h]
  int v53; // [esp+72h] [ebp-4Ch]
  int v54; // [esp+72h] [ebp-4Ch]
  int v55; // [esp+72h] [ebp-4Ch]
  unsigned __int8 v56; // [esp+87h] [ebp-37h]
  unsigned __int8 v57; // [esp+87h] [ebp-37h]
  unsigned __int8 v58; // [esp+88h] [ebp-36h]
  unsigned __int8 v59; // [esp+88h] [ebp-36h]
  char v60; // [esp+89h] [ebp-35h]
  int v61; // [esp+8Ah] [ebp-34h]
  int v63; // [esp+92h] [ebp-2Ch]
  void *v64; // [esp+96h] [ebp-28h]
  __int16 v65[4]; // [esp+9Ah] [ebp-24h] BYREF
  int v66; // [esp+A2h] [ebp-1Ch]
  int v67; // [esp+A6h] [ebp-18h]
  int v68; // [esp+AAh] [ebp-14h] BYREF
  _BYTE v70[4]; // [esp+B2h] [ebp-Ch] BYREF
  int v71; // [esp+B6h] [ebp-8h]
  void *retaddr; // [esp+BEh] [ebp+0h]
  int v73; // [esp+C2h] [ebp+4h]
  int v74; // [esp+C6h] [ebp+8h]
  int v75; // [esp+E6h] [ebp+28h]
  int v76; // [esp+EAh] [ebp+2Ch]

  v2 = *(_DWORD *)(*(int (__thiscall **)(void *, __int16 *))(*(_DWORD *)&this->suspendedMission0))(this, v65); /*0x43d2a8*/
  vfptr0 = *(int (__thiscall ***)(void *))this; /*0x43d2aa*/
  v2 = v2; /*0x43d2ae*/
  result = vfptr0[27](this); /*0x43d2b2*/
  v61 = result; /*0x43d2b7*/
  if ( result ) /*0x43d2bb*/
  {
    if ( this /*0x43d2e8*/
      && (*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this) == 6
      && !this->BuildingClass_field_int_534
      && (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this) == 19 )
    {
      v5 = (char *)&this->u32_1570; /*0x43d2ea*/
      v6 = 21; /*0x43d2f0*/
      do /*0x43d306*/
      {
        if ( *(_DWORD *)v5 ) /*0x43d2f5*/
          *(_BYTE *)(this->u8_6F9 = 1; /*0x43d2fb*/
        v5 += 4; /*0x43d302*/
        --v6; /*0x43d305*/
      }
      while ( v6 ); /*0x43d306*/
    }
    result = this->Type; /*0x43d308*/
    if ( !result->InvisibleInGame ) /*0x43d30e*/
    {
      v7 = *(int (__thiscall ***)(void *))this; /*0x43d322*/
      v63 = result->NormalZAdjust; /*0x43d324*/
      v66 = 198; /*0x43d32a*/
      v67 = 446; /*0x43d332*/
      v60 = 0; /*0x43d33a*/
      if ( v7[97](this) == 16 ) /*0x43d348*/
      {
        v8 = Array::Get(this, 0); /*0x43d353*/
        if ( v8 ) /*0x43d357*/
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(v8->q084)(v8) + 3476) /*0x43d377*/
            || *(_BYTE *)((*(int (__thiscall **)(int))(v8->q084)(v8) + 3434) )
          {
            v60 = 1; /*0x43d381*/
          }
        }
      }
      v9 = 0; /*0x43d38c*/
      if ( !this->airstrike ) /*0x43d390*/
      {
  LABEL_22:
        if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->onBridge2))(this) || this->q1C4 != 1 ) /*0x43d449*/
          goto LABEL_29; /*0x43d449*/
        v16 = g_RulesClass_Instance[1].CMisl[13]; /*0x43d455*/
        v17 = (char *)g_RulesClass_Instance + 2 * v16; /*0x43d45b*/
        v18 = v17[v16 + 6261]; /*0x43d468*/
        v59 = v17[v16 + 6260]; /*0x43d475*/
        v57 = v17[v16 + 6262]; /*0x43d47f*/
        v19 = DDraw::GetStatus() - 1; /*0x43d488*/
        if ( v19 ) /*0x43d489*/
        {
          if ( --v19 ) /*0x43d48c*/
          {
  LABEL_28:
            IDA_LOWORD(v20) = v59; /*0x43d4cc*/
            IDA_LOWORD(v19) = v57; /*0x43d4d2*/
            IDA_LOWORD(v21) = v18 >> 1; /*0x43d4dd*/
            v9 |= v19 | (32 * ((32 * v20) | v21)); /*0x43d4e9*/
  LABEL_29:
            v22 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v70); /*0x43d4eb*/
            IDA_LOWORD(v64) = *v22 / 256; /*0x43d507*/
            IDA_HIWORD(v64) = v22[1] / 256; /*0x43d51f*/
            *(_DWORD *)v65 = v64; /*0x43d528*/
            v23 = CellCoord::To_CellObj(&MapClass_Instance, v65); /*0x43d532*/
            if ( CellClass::QuickPassable(v23) ) /*0x43d539*/
              v9 = 0; /*0x43d542*/
            if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this) == 24 /*0x43d575*/
              && (Window::IsVisible((_BYTE *)&this->initialOwner8)
               || BuildingClass::CheckFlag24((_BYTE *)&this->initialOwner8)
               || BuildingClass::CheckPowerFlags((_BYTE *)&this->initialOwner8)) )
            {
              v24 = Animation::GetProgress((char *)&this->initialOwner8); /*0x43d584*/
              v25 = Math::RoundToInt(v24 * (double)this->Type->GateStages); /*0x43d59c*/
              if ( BuildingClass::CheckFlag24((_BYTE *)&this->initialOwner8) ) /*0x43d59e*/
                v25 = this->Type->GateStages - v25; /*0x43d5b5*/
              if ( Flag::CheckNone((_BYTE *)&this->initialOwner8) ) /*0x43d5b9*/
                v25 = 0; /*0x43d5c2*/
              if ( BuildingClass::CheckPowerFlags((_BYTE *)&this->initialOwner8) ) /*0x43d5c6*/
                v25 = this->Type->GateStages - 1; /*0x43d5db*/
              v26 = this->Type->GateStages; /*0x43d5e2*/
              if ( v25 >= v26 ) /*0x43d5ea*/
                v25 = v26 - 1; /*0x43d5ec*/
              if ( v25 < 0 ) /*0x43d5f1*/
                v25 = 0; /*0x43d5f3*/
              *(_DWORD *)v65 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->owningHouseIndex8))(this); /*0x43d5fe*/
              if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x43d618*/
                v27 = 0; /*0x43d629*/
              else
                v27 = this->Type->GateStages + 1; /*0x43d626*/
              v28 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v2); /*0x43d63f*/
              v29 = (*(int (__thiscall **)(void *, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->missionQueued4))( /*0x43d654*/
                      this,
                      2,
                      1,
                      v28[133],
                      v9,
                      0,
                      0,
                      0,
                      0,
                      0);
              v30 = ZCoordToScreenY(v29); /*0x43d65c*/
              return loc_705E00( /*0x43d683*/
                       this,
                       retaddr,
                       v25 + v27,
                       v75,
                       v76,
                       0,
                       256,
                       v71 - v30);
            }
            else
            {
              if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this) == 16 ) /*0x43d69f*/
              {
                if ( v60 ) /*0x43d6a7*/
                {
                  v31 = this->Type; /*0x43d6a9*/
                  if ( v31->RoofDeployingAnim ) /*0x43d6af*/
                  {
                    v61 = v31->RoofDeployingAnim; /*0x43d7d2*/
                    v63 = -40; /*0x43d7d6*/
                  }
                }
                else
                {
                  v32 = this->Type; /*0x43d6bf*/
                  if ( v32->q14E4 ) /*0x43d6c5*/
                  {
                    v61 = v32->q14E4; /*0x43d6cf*/
                    v63 = -20; /*0x43d6d3*/
                  }
                }
              }
              v33 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this); /*0x43d6df*/
              if ( v33 != 18 && v33 != 19 ) /*0x43d6ed*/
              {
                v34 = this->Type->q1534; /*0x43d6fc*/
                v66 = this->Type->ZShapePointMove + 198; /*0x43d70a*/
                v67 = v34 + 446; /*0x43d70e*/
              }
              v35 = (BuildingTypeClass::GetFoundationHeight(this->Type, 0) << 8) - 256; /*0x43d72a*/
              v68 = (BuildingTypeClass::GetFoundationWidth(*((_DWORD **)&this->needsRedraw8)) << 8) - 256; /*0x43d74d*/
              v35 = v35; /*0x43d751*/
              v36 = (_DWORD *)TacticalClass::AdjustForZShapeMove((int)v65, (int)&v68); /*0x43d755*/
              v37 = (_DWORD *)this->Type; /*0x43d76e*/
              v38 = v67 - v36[1]; /*0x43d774*/
              v66 -= *v36; /*0x43d776*/
              v67 = v38; /*0x43d77a*/
              v64 = dword_89DDBC; /*0x43d77e*/
              if ( BuildingTypeClass::GetFoundationWidth(v37) >= 8 ) /*0x43d78a*/
                v64 = 0; /*0x43d78c*/
              if ( *(int *)(v74 + 12) > 0 ) /*0x43d7a1*/
              {
                v39 = v61->nextArrayIndex; /*0x43d7c1*/
                if ( BuildingClass::GetProductionFrame((int *)this) < v39 / 2 ) /*0x43d7c7*/
                  BuildingClass::GetProductionFrame((int *)this); /*0x43d7cb*/
                v67 = v67; /*0x43d802*/
                v66 = v66; /*0x43d803*/
                v64 = v64; /*0x43d806*/
                v40 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v2); /*0x43d812*/
                v41 = (*(int (__thiscall **)(void *, int, int, int, int, void *, _DWORD, int, int, _DWORD))(*(_DWORD *)&this->missionQueued4))( /*0x43d836*/
                        this,
                        2,
                        1,
                        this->Type->ExtraLight + v40[133],
                        v9,
                        v64,
                        0,
                        v66,
                        v67,
                        0);
                v42 = ZCoordToScreenY(v41); /*0x43d83e*/
                loc_705E00( /*0x43d85f*/
                  this,
                  IDA_HIDWORD(v42),
                  v35,
                  v76,
                  v73,
                  v74,
                  0,
                  256,
                  v71 - v42);
              }
              if ( this->Type->BibShape && this->BuildingClass_field_int_534 ) /*0x43d874*/
              {
                v43 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v2); /*0x43d892*/
                v44 = (*(int (__thiscall **)(void *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->missionQueued4))( /*0x43d8b6*/
                        this,
                        0,
                        1,
                        this->Type->ExtraLight + v43[133],
                        v9,
                        0,
                        0,
                        0,
                        0,
                        0);
                v53 = -1 - ZCoordToScreenY(v44); /*0x43d8c8*/
                ProductionFrame = BuildingClass::GetProductionFrame((int *)this); /*0x43d8d4*/
                loc_705E00( /*0x43d8e9*/
                  this,
                  this->Type->BibShape,
                  ProductionFrame,
                  v73,
                  v74,
                  0,
                  256,
                  v53);
              }
              result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this); /*0x43d8f2*/
              if ( result == 16 ) /*0x43d8fb*/
              {
                if ( v60 ) /*0x43d907*/
                {
                  result = this->Type; /*0x43d909*/
                  if ( result->UnderRoofDoorAnim ) /*0x43d90f*/
                  {
                    BuildingClass::GetHealthRatio((int *)this); /*0x43d9da*/
                    v48 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v2); /*0x43da16*/
                    v49 = (*(int (__thiscall **)(void *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->missionQueued4))( /*0x43da3a*/
                            this,
                            0,
                            1,
                            this->Type->ExtraLight + v48[133],
                            v9,
                            0,
                            0,
                            0,
                            0,
                            0);
                    v55 = -(int)ZCoordToScreenY(v49); /*0x43da55*/
                    return loc_705E00( /*0x43da67*/
                             this,
                             this->Type->UnderRoofDoorAnim,
                             v76,
                             v73,
                             v74,
                             0,
                             256,
                             v55);
                  }
                }
                else
                {
                  result = this->Type->q14EC; /*0x43d92d*/
                  if ( result ) /*0x43d935*/
                  {
                    BuildingClass::GetHealthRatio((int *)this); /*0x43d93d*/
                    v46 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v2); /*0x43d978*/
                    v47 = (*(int (__thiscall **)(void *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)&this->missionQueued4))( /*0x43d99c*/
                            this,
                            0,
                            1,
                            this->Type->ExtraLight + v46[133],
                            v9,
                            0,
                            0,
                            0,
                            0,
                            0);
                    v54 = -(int)ZCoordToScreenY(v47); /*0x43d9b7*/
                    return loc_705E00( /*0x43d9c9*/
                             this,
                             this->Type->q14EC,
                             v76,
                             v73,
                             v74,
                             0,
                             256,
                             v54);
                  }
                }
              }
            }
            return result; /*0x43d68f*/
          }
          IDA_LOWORD(v20) = v57; /*0x43d494*/
          IDA_LOWORD(v21) = v18; /*0x43d4a0*/
          v19 = v20 | (32 * (v21 | (v59 << 6))); /*0x43d4a7*/
          v9 |= v19; /*0x43d4a9*/
        }
        IDA_LOWORD(v20) = v59; /*0x43d4ab*/
        IDA_LOWORD(v21) = v18 >> 1; /*0x43d4b8*/
        IDA_LOWORD(v19) = v57; /*0x43d4ba*/
        v20 *= 32; /*0x43d4c0*/
        v21 = v19 | ((v20 | v21) << 6); /*0x43d4c8*/
        v9 |= v21; /*0x43d4ca*/
        goto LABEL_28; /*0x43d4ca*/
      }
      v10 = g_RulesClass_Instance[1].CMisl[10]; /*0x43d39c*/
      v11 = (char *)g_RulesClass_Instance + 2 * v10; /*0x43d3a2*/
      v12 = v11[v10 + 6261]; /*0x43d3af*/
      v56 = v11[v10 + 6260]; /*0x43d3bc*/
      v58 = v11[v10 + 6262]; /*0x43d3c6*/
      v13 = DDraw::GetStatus() - 1; /*0x43d3cf*/
      if ( v13 ) /*0x43d3d0*/
      {
        if ( --v13 ) /*0x43d3d3*/
        {
  LABEL_21:
          IDA_LOWORD(v15) = v56; /*0x43d411*/
          IDA_LOWORD(v14) = v58; /*0x43d417*/
          IDA_LOWORD(v13) = v12 >> 1; /*0x43d422*/
          v9 |= v14 | (32 * ((32 * v15) | v13)); /*0x43d42e*/
          goto LABEL_22; /*0x43d42e*/
        }
        IDA_LOWORD(v9) = v56; /*0x43d3d5*/
        IDA_LOWORD(v15) = v58; /*0x43d3db*/
        v9 = v15 | (32 * (v12 | (v9 << 6))); /*0x43d3ee*/
      }
      IDA_LOWORD(v15) = v56; /*0x43d3f0*/
      IDA_LOWORD(v13) = v12 >> 1; /*0x43d3fd*/
      IDA_LOWORD(v14) = v58; /*0x43d3ff*/
      v15 *= 32; /*0x43d405*/
      v13 = v14 | ((v15 | v13) << 6); /*0x43d40d*/
      v9 |= v13; /*0x43d40f*/
      goto LABEL_21; /*0x43d40f*/
    }
  }
  return result; /*0x43d688*/
    return {}; // TODO stub - retranslate via C-line pipeline

// IDA 0x449410: get bounding size extension
// 0x449410
int __thiscall BuildingClass::GetBoundingSizeExt(void *this)
{
  return (this->Type->TurretAnimIsVoxel != 0 ? 0x20 : 0)
       - (this->Type->Gate != 0 ? 0x10 : 0)
       + ObjectClass::GetBoundingSize(this);
}
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
    return {}; // TODO stub - translate quarantined IDA block above
}

// ============================================================
// Section 15: Health / Stats
// ============================================================

// 0x5f5c60
double BuildingClass::GetHealthRatio() const
{
  double v2; // [esp+0h] [ebp-8h]

  v2 = (double)*(&this->vtable37); /*0x5f5c68*/
  return v2 / (double)*(int *)(this->GetTypePtr() + 160); /*0x5f5c7c*/
}
    v7 = dword_AC4B58++; /*0x6386a6*/
    *((_DWORD *)dword_AC4B4C + v7) = v6; /*0x6386b5*/
  }
  *(_BYTE *)(v3 + 28) = 1; /*0x6386ba*/
  return 1; /*0x6386be*/
}
  else
  {
    v6 = 0; /*0x638646*/
  }
  qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
  *((_WORD *)v6 + 54) = v9[54]; /*0x638655*/
  v6[110] = v9[55]; /*0x638657*/
  if ( *v6 == 4 ) /*0x63865c*/
    v6[29] = 2; /*0x63865e*/
  if ( dword_AC4B58 < dword_AC4B50 /*0x638699*/
    || (byte_AC4B55 || !dword_AC4B50)
    && dword_AC4B5C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC4B48 + 8))(
         &dword_AC4B48,
         dword_AC4B50 + dword_AC4B5C,
         0) )
  {
    v7 = dword_AC4B58++; /*0x6386a6*/
    *((_DWORD *)dword_AC4B4C + v7) = v6; /*0x6386b5*/
  }
  *(_BYTE *)(v3 + 28) = 1; /*0x6386ba*/
  return 1; /*0x6386be*/
}
  else
  {
    v6 = 0; /*0x638646*/
  qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
  *((_WORD *)v6 + 54) = v9[54]; /*0x638655*/
  v6[110] = v9[55]; /*0x638657*/
  if ( *v6 == 4 ) /*0x63865c*/
    v6[29] = 2; /*0x63865e*/
  if ( dword_AC4B58 < dword_AC4B50 /*0x638699*/
    || (byte_AC4B55 || !dword_AC4B50)
    && dword_AC4B5C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC4B48 + 8))(
         &dword_AC4B48,
         dword_AC4B50 + dword_AC4B5C,
         0) )
  {
    v7 = dword_AC4B58++; /*0x6386a6*/
    *((_DWORD *)dword_AC4B4C + v7) = v6; /*0x6386b5*/
  *(_BYTE *)(v3 + 28) = 1; /*0x6386ba*/
  return 1; /*0x6386be*/
  else
  {
    v6 = 0; /*0x638646*/
  qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
  *((_WORD *)v6 + 54) = v9[54]; /*0x638655*/
  v6[110] = v9[55]; /*0x638657*/
  if ( *v6 == 4 ) /*0x63865c*/
    v6[29] = 2; /*0x63865e*/
  if ( dword_AC4B58 < dword_AC4B50 /*0x638699*/
    || (byte_AC4B55 || !dword_AC4B50)
    && dword_AC4B5C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC4B48 + 8))(
         &dword_AC4B48,
         dword_AC4B50 + dword_AC4B5C,
         0) )
  {
    v7 = dword_AC4B58++; /*0x6386a6*/
    *((_DWORD *)dword_AC4B4C + v7) = v6; /*0x6386b5*/
  *(_BYTE *)(v3 + 28) = 1; /*0x6386ba*/
  return 1; /*0x6386be*/
// 0x455b90
    int __thiscall BuildingClass::GetFWFlags(int *(void**)this)
    {
      _DWORD *v1; // ecx
      int v2; // ebx
      _DWORD *v3; // edi
      signed int i; // esi
      _DWORD *NeighbourContent; // eax
      _DWORD *v6; // eax
      _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

      v1 = &this->q09C; /*0x455b93*/
      v2 = 0; /*0x455b9e*/
      v8[0] = *v1; /*0x455ba0*/
      v8[1] = v1[1]; /*0x455ba7*/
      v8[2] = v1[2]; /*0x455bb8*/
      v3 = Coord::To_Cell(&MapClass_Instance, v8); /*0x455bc1*/
      for ( i = 0; i < 8; i += 2 ) /*0x455bc3*/
      {
        NeighbourContent = Cell::GetNeighbourContent(v3, i); /*0x455bc8*/
        v6 = Cell::IsBridge(NeighbourContent); /*0x455bcf*/
        if ( v6 && *(_BYTE *)(v6[328] + 5824) && !*((_BYTE *)v6 + 129) && *((_BYTE *)v6 + 144) ) /*0x455bf2*/
          v2 |= 1 << (i >> 1); /*0x455c07*/
      }
      return v2; /*0x455c11*/
    }
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
void BuildingClass::FlushScriptActions() {}
  _DWORD *Type; // esi
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int i; // edi
  int *v11; // esi
  int v12; // eax
  int v13; // edi
  int j; // esi

  if ( !this ) /*0x639bc9*/
    return; /*0x639bc9*/
  Type = (_DWORD *)BuildingClass::GetType(**this->vtable2); /*0x639bdb*/
  v3 = (*(int (__thiscall **)(_DWORD *, int *))(Type[1] + 16))(Type + 1, &this); /*0x639bec*/
  if ( v3 != -1 ) /*0x639bf2*/
  {
    v5 = Type[5]; /*0x639bf8*/
    if ( v5 == 1 ) /*0x639bfe*/
    {
      v4 = this; /*0x639c00*/
      goto LABEL_17; /*0x639c02*/
    }
    v6 = v3 + 1; /*0x639c04*/
    if ( v6 >= v5 ) /*0x639c07*/
      v6 = 0; /*0x639c09*/
    v7 = v6; /*0x639c0d*/
    if ( !v5 ) /*0x639c0f*/
      goto LABEL_15; /*0x639c0f*/
    if ( v6 >= v5 ) /*0x639c13*/
    {
      v8 = Type[37]; /*0x639c15*/
      if ( v8 < 0 ) /*0x639c1d*/
        goto LABEL_15; /*0x639c1d*/
      v7 = v8 + (v6 - v8) % Type[36]; /*0x639c2a*/
    }
    if ( v7 >= 0 && v7 < v5 ) /*0x639c32*/
    {
      v9 = *(_DWORD *)(Type[2] + 4 * v7); /*0x639c37*/
  LABEL_16:
      v4 = v9; /*0x639c3e*/
      goto LABEL_17; /*0x639c3e*/
    }
  LABEL_15:
    v9 = 0; /*0x639c3c*/
    goto LABEL_16; /*0x639c3c*/
  }
  v4 = 0; /*0x639bf4*/
  LABEL_17:
  for ( i = *(_DWORD *)(this + 16) - 1; i >= 0; --i ) /*0x639c44*/
  {
    v11 = (int *)BuildingClass::GetType(**(_DWORD ***)(*(_DWORD *)(this + 4) + 4 * i)); /*0x639c53*/
    v12 = (*(int (__thiscall **)(int *, int *))(v11[1] + 16))(v11 + 1, &this); /*0x639c64*/
    TeamClass::Cleanup(v11, v12); /*0x639c6a*/
  }
  if ( v4 && v4 != this ) /*0x639c78*/
  {
    FactoryClass::ClearObjects((int *)v4); /*0x639c7c*/
    v13 = *(_DWORD *)(v4 + 16); /*0x639c81*/
    for ( j = 0; j < v13; ++j ) /*0x639c88*/
      ScriptAction::PlaceObject(v4, *(_DWORD **)(*(_DWORD *)(v4 + 4) + 4 * j)); /*0x639c93*/
    ScriptAction::FindSquadMember(v4); /*0x639c9f*/
    *(_BYTE *)(v4 + 28) = 0; /*0x639ca4*/
  }
// 0x6551c0
int BuildingClass::AddUpgrade(BuildingTypeClass* upgrade)
{
  int v3; // eax
  _WORD *v4; // ecx
  int v5; // ecx
  int v6; // edx

  v3 = this->u32_1234 - 1; /*0x6551cf*/
  if ( v3 < 0 ) /*0x6551d0*/
  {
  LABEL_6:
    v5 = this->u32_122C; /*0x6551f5*/
    if ( this->u32_1234 < v5 /*0x65522b*/
      || ((IDA_LOBYTE(v3) = this->u8_1231, (_BYTE)v3) || !v5)
      && (v3 = this->u32_1238, v3 > 0)
      && (IDA_LOBYTE(v3) = (*(int (__thiscall **)(int, int, _DWORD))(this->u32_1224 + 8))(&this->u32_4890, v5 + v3, 0),
          (_BYTE)v3) )
    {
      v3 = this->u32_1234; /*0x65522d*/
      v6 = this->u32_1228; /*0x655230*/
      this->u32_1234 = v3 + 1; /*0x655236*/
      *(_DWORD *)(v6 + 4 * v3) = *(_DWORD *)upgrade; /*0x65523b*/
    }
    this->q14D9 = 1; /*0x65523e*/
  }
  else
  {
    v4 = (_WORD *)(this->u32_1228 + 4 * v3); /*0x6551db*/
    while ( *v4 != *(_WORD *)upgrade || v4[1] != *(_WORD *)(upgrade + 2) ) /*0x6551eb*/
    {
      --v3; /*0x6551ed*/
      v4 -= 2; /*0x6551ee*/
      if ( v3 < 0 ) /*0x6551f3*/
        goto LABEL_6; /*0x6551f3*/
    }
  }
  return v3; /*0x655245*/
}
// 0x726400
int BuildingClass::ProcessUpgradeEffects()
{
  char v2; // bp
  int result; // eax
  _DWORD *i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // kr00_4
  int v8; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x726408*/
  result = this->objectTypeFlags; /*0x72640a*/
  for ( i = *(_DWORD **)(result + 172); i; ++v2 ) /*0x726415*/
  {
    if ( i[11] == 13 ) /*0x726420*/
    {
      v5 = 3 * i[13]; /*0x72642e*/
      *(&this->vtable23) = (int)g_CurrentFrame; /*0x726431*/
      *(this + 14) = v8; /*0x72643a*/
      *(this + 15) = 5 * v5; /*0x72643f*/
      result = ~(1 << v2) & *(this + 16); /*0x72644e*/
      *(this + 16) = result; /*0x726450*/
    }
    if ( i[11] == 51 ) /*0x726457*/
    {
      v6 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, i[13]); /*0x72646a*/
      v7 = i[13]; /*0x72647b*/
      *(this + 13) = (int)g_CurrentFrame; /*0x726488*/
      *(this + 14) = v8; /*0x72648e*/
      *(this + 15) = 15 * (v6 + v7 / 2); /*0x726494*/
      result = ~(1 << v2); /*0x7264a3*/
      *(this + 16) &= result; /*0x7264a7*/
    }
    i = (_DWORD *)i[10]; /*0x7264aa*/
  }
  return result; /*0x7264b7*/
}
// 0x7265c0
int BuildingClass::ExecuteTriggers()
{
  char v4; // bl
  int i; // esi
  int Owner; // eax

  if ( !*(_BYTE *)(this + 68) || *(_BYTE *)(this + 48) ) /*0x7265ca*/
    return 0; /*0x726620*/
  v4 = 0; /*0x7265d6*/
  for ( i = *(_DWORD *)(*(_DWORD *)(this + 36) + 176); i; i = *(_DWORD *)(i + 40) ) /*0x7265e0*/
  {
    Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(this + 36) + 164) + 180)); /*0x7265fd*/
    if ( TerrainClass::ProcessUpdate(i, this, Owner, a2, (_DWORD *)this, (int)&a3) ) /*0x726605*/
      v4 = 1; /*0x72660e*/
  }
  return v4; /*0x72661c*/
}
// 0x459c20
BuildingTypeClass * * BuildingClass::ProcessUpgradeTargeting()
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int result; // eax

  v2 = this->q218; /*0x459c23*/
  if ( v2 && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 11 )
  {
    v3 = this->q218; /*0x459c38*/
    v4 = v3 ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 44))(this->q218) == 11 ? v3 : 0) : 0;
    if ( *(_DWORD *)(v4 + 236) == 5 ) /*0x459c62*/
    {
      v5 = this->q520; /*0x459c64*/
      if ( *(_BYTE *)(v5 + 1517) ) /*0x459c6a*/
      {
        if ( *(_BYTE *)(v5 + 1516) ) /*0x459c74*/
        {
          v6 = *(_DWORD *)(v5 + 1404); /*0x459c7e*/
          if ( v6 != -1 ) /*0x459c87*/
            return (*(int (__thiscall **)(void *, int))(*(_DWORD *)&this->q1542))(this, v6); /*0x459c8e*/
        }
      }
    }
  }
  TechnoClass::PickAlternateTarget(this); /*0x459c98*/
  return result; /*0x459c94*/
}
// 0x43fb20
void BuildingClass::ProcessSpreadEffect() {}
  char v2; // bl
  int v3; // eax
  char *v4; // eax
  int v5; // eax
  char v6; // bl
  char *v7; // edi
  int v8; // ebp
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  char *v12; // eax
  char *v13; // edi
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int result; // eax
  int v19; // eax
  int Member81; // ebx
  int v21; // edi
  int v22; // eax
  unsigned int v23; // eax
  int v24; // edx
  _DWORD *v25; // edi
  char *ProductionTimeMult; // eax
  int v27; // eax
  char *v28; // edi
  int v29; // ebx
  int v30; // edx
  int i; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // edi
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // ebx
  int v40; // ebp
  _WORD *v41; // eax
  int v42; // edi
  _WORD *v43; // eax
  int v44; // eax
  __int16 *v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ebx
  int v49; // edi
  int *v50; // eax
  char *v51; // ecx
  int v52; // edx
  int (__thiscall **vfptr0)(void *, _BYTE *); // eax
  _DWORD *v54; // eax
  int v55; // ecx
  int v56; // edx
  int v57; // eax
  void **v58; // eax
  void **v59; // eax
  void **v60; // eax
  char v61; // [esp+13h] [ebp-39h]
  int v62; // [esp+14h] [ebp-38h]
  int v63; // [esp+18h] [ebp-34h]
  int v66; // [esp+24h] [ebp-28h] BYREF
  char v67[4]; // [esp+28h] [ebp-24h] BYREF
  int v68[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v69; // [esp+34h] [ebp-18h] BYREF
  char *Parachute; // [esp+38h] [ebp-14h]
  int v71; // [esp+3Ch] [ebp-10h]
  char v72[12]; // [esp+40h] [ebp-Ch] BYREF

  v2 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->initialOwner8))(this) /*0x43fb57*/
    && (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this) != 18
    && (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this) != 19;
  v3 = this->Type; /*0x43fb61*/
  if ( v2 == this->WasOnline ) /*0x43fb67*/
  {
    if ( v3->FreeUnit != -1 || v3->SecretInfantry != -1 ) /*0x43fc0a*/
    {
      v69 = this->location; /*0x43fc18*/
      Parachute = (char *)this->q0A0; /*0x43fc25*/
      v71 = this->q0A4; /*0x43fc2c*/
      StartAudioController((int)&v69, (int)&this->q2AC6); /*0x43fc34*/
    }
  }
  else
  {
    if ( v3->FreeUnit != -1 || v3->SecretInfantry != -1 ) /*0x43fb80*/
    {
      AudioFile::Stop((_DWORD *)&this->lineTrailer9); /*0x43fb8a*/
      v4 = (char *)this->q0A0; /*0x43fb9b*/
      v69 = this->location; /*0x43fb9e*/
      Parachute = v4; /*0x43fba2*/
      v5 = this->Type; /*0x43fba6*/
      v71 = this->q0A4; /*0x43fbb0*/
      if ( v2 ) /*0x43fb99*/
        StartAudioControllerAt(v5->FreeUnit, (int)&v69, (int)&this->q2AC6); /*0x43fbbe*/
      else
        StartAudioControllerAt(v5->SecretInfantry, (int)&v69, (int)&this->q2AC6); /*0x43fbe3*/
    }
    Animation::UpdateBuildingAnimations((int)this); /*0x43fbea*/
    this->WasOnline = v2; /*0x43fbef*/
  }
  if ( this->Type->CanBeOccupied ) /*0x43fc41*/
  {
    if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&g_RulesClass_Instance[1].ChronoSparkle1 ) /*0x43fc60*/
    {
      v6 = 1; /*0x43fc62*/
      goto LABEL_22; /*0x43fc64*/
    }
  }
  else if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x43fc7c*/
  {
    v6 = 1; /*0x43fc7e*/
    goto LABEL_22; /*0x43fc80*/
  }
  v6 = 0; /*0x43fc82*/
  LABEL_22:
  if ( v6 != this->RequiresDamageFires ) /*0x43fc8a*/
  {
    if ( v6 ) /*0x43fc8e*/
    {
      CreateDominatorDestructionEffects(this); /*0x43fc92*/
    }
    else
    {
      v7 = (char *)&this->q1720; /*0x43fc99*/
      v8 = 8; /*0x43fc9f*/
      do /*0x43fcbc*/
      {
        if ( *(_DWORD *)v7 ) /*0x43fca4*/
        {
          (*(void (__thiscall **)(_DWORD))(*this->q6C0)(*(_DWORD *)v7); /*0x43fcac*/
          *(_DWORD *)v7 = 0; /*0x43fcb2*/
        }
        v7 += 4; /*0x43fcb8*/
        --v8; /*0x43fcbb*/
      }
      while ( v8 ); /*0x43fcbc*/
    }
    this->RequiresDamageFires = v6; /*0x43fcbe*/
  }
  if ( this->Type->qCA1 ) /*0x43fccd*/
    this->turretIsRotating = TimerClass::Active((int)&this->q1684); /*0x43fce7*/
  else
    this->turretIsRotating = 0; /*0x43fcef*/
  v9 = this->temporalTargetingMe; /*0x43fcf9*/
  if ( v9 ) /*0x43fd01*/
    (*(void (__thiscall **)(int))(v9->q05C)(v9); /*0x43fd05*/
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->missionQueued8))(this) /*0x43fd1e*/
    || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->missionStatus2))(this) )
  {
    v46 = this->Type; /*0x4403d4*/
    v47 = v46->MaxNumberOccupants; /*0x4403e0*/
    if ( v47 && g_RulesClass_Instance->PrerequisiteTech[2] ) /*0x4403ee*/
    {
      v48 = 0; /*0x4403fc*/
      if ( v47 > 0 ) /*0x440400*/
      {
        v49 = 5512; /*0x440406*/
        do /*0x4404e9*/
        {
          if ( !(((int)g_CurrentFrame + v48) % 24) && g_RulesClass_Instance->PrerequisiteTech[2] ) /*0x440428*/
          {
            v50 = World::ToScreen((float *)g_TacticalClass_Instance, v68, (int *)(v49 + v46)); /*0x440445*/
            v51 = (char *)v50[1]; /*0x44044a*/
            v52 = *v50; /*0x44044d*/
            vfptr0 = *(int (__thiscall ***)(void *, _BYTE *))this; /*0x44044f*/
            Parachute = v51; /*0x440451*/
            v69 = v52; /*0x440459*/
            v71 = 0; /*0x440460*/
            v54 = (_DWORD *)vfptr0[43](this, v72); /*0x440468*/
            v55 = v69 + *v54; /*0x440478*/
            v56 = v54[1]; /*0x44047a*/
            v57 = v71 + v54[2]; /*0x440486*/
            v69 = v55; /*0x44048d*/
            Parachute += v56; /*0x440491*/
            v71 = v57; /*0x440495*/
            v58 = (void **)RA2_OPNEW(0x1C8u); /*0x440499*/
            if ( v58 ) /*0x4404a3*/
              v59 = AnimClass::ctor( /*0x4404c6*/
                      v58,
                      (void *)g_RulesClass_Instance->PrerequisiteTech[2],
                      &v69,
                      0,
                      1,
                      (void *)0x600,
                      0,
                      0);
            else
              v59 = 0; /*0x4404cd*/
            v59[64] = (void *)-200; /*0x4404cf*/
          }
          v46 = this->Type; /*0x4404d9*/
          ++v48; /*0x4404df*/
          v49 += 8; /*0x4404e0*/
        }
        while ( v48 < v46->MaxNumberOccupants ); /*0x4404e9*/
      }
    }
    else if ( !((int)g_CurrentFrame % 24) ) /*0x4404fc*/
    {
      if ( g_RulesClass_Instance->PrerequisiteTech[2] ) /*0x440502*/
      {
        v60 = (void **)RA2_OPNEW(0x1C8u); /*0x440511*/
        if ( v60 ) /*0x44051b*/
        {
          v69 = this->location; /*0x440530*/
          Parachute = (char *)this->q0A0; /*0x440539*/
          v71 = this->q0A4; /*0x440545*/
          AnimClass::ctor(v60, (void *)g_RulesClass_Instance->PrerequisiteTech[2], &v69, 0, 1, (void *)0x600, 0, 0); /*0x440558*/
        }
      }
    }
    result = this->target; /*0x44055d*/
    if ( result ) /*0x440565*/
      return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->targetingTimer8))(this, 0); /*0x440565*/
    return result; /*0x440565*/
  }
  v10 = this->q6D0; /*0x43fd2c*/
  v11 = this->q6D8; /*0x43fd32*/
  v12 = (char *)&this->q6D0; /*0x43fd3e*/
  if ( v10 != -1 ) /*0x43fd46*/
  {
    if ( (int)g_CurrentFrame - v10 >= v11 ) /*0x43fd4e*/
      goto LABEL_46; /*0x43fd4e*/
    v11 -= (int)g_CurrentFrame - v10; /*0x43fd54*/
  }
  if ( v11 == 1 ) /*0x43fd59*/
  {
    v13 = Parachute; /*0x43fd5b*/
    *(_DWORD *)v12 = g_CurrentFrame; /*0x43fd63*/
    this->q6D4 = v13; /*0x43fd65*/
    this->q6D8 = 0; /*0x43fd68*/
    v14 = this->Type->ProduceCashDelay; /*0x43fd77*/
    *(_DWORD *)v12 = g_CurrentFrame; /*0x43fd7d*/
    this->q6D4 = Parachute; /*0x43fd83*/
    this->q6D8 = v14; /*0x43fd86*/
    if ( !*(_BYTE *)(*(_DWORD *)(this->owner + 52) + 422) ) /*0x43fd92*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->initialOwner8))(this) ) /*0x43fda0*/
      {
        v15 = this->Type->ProduceCashAmount; /*0x43fdb0*/
        if ( v15 <= 0 ) /*0x43fdb8*/
          HouseClass::ProcessPowerDrain(this->owner, -v15); /*0x43fdd1*/
        else
          HouseClass::AddPower(*((_DWORD **)&this->attachedTag5), this->Type->ProduceCashAmount); /*0x43fdc1*/
      }
    }
  }
  LABEL_46:
  v16 = this->airstrike; /*0x43fdd6*/
  if ( v16 && *(void **)(v16 + 80) == this ) /*0x43fde3*/
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)&this->isOnMap2))(this, 2); /*0x43fdeb*/
  if ( this->Type->SAM ) /*0x43fdf7*/
  {
    v17 = this->target; /*0x43fe01*/
    if ( v17 ) /*0x43fe09*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 84))(v17) ) /*0x43fe0d*/
        (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->targetingTimer8))(this, 0); /*0x43fe1a*/
    }
  }
  BuildingClass::UpdateAnimFrames((int)this); /*0x43fe22*/
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->q0CC2))(this) /*0x43fe43*/
    && this->BuildingClass_field_int_534
    && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->missionData2))(this) )
  {
    this->BuildingClass_field_bool_6DD = 0; /*0x43fe4d*/
  }
  MovementAI::Begin((int *)this); /*0x43fe56*/
  IDA_LOBYTE(result) = this->isAliveFlag; /*0x43fe5b*/
  if ( !(_BYTE)result ) /*0x43fe63*/
    return result; /*0x43fe63*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3285) /*0x43fe86*/
    && TechnoClass::GetMember81(this) > 0 )
  {
    ++this->gattlingValue; /*0x43fe88*/
  }
  if ( !this->pitchAngle ) /*0x43fe8e*/
  {
    v19 = this->Type; /*0x43fe98*/
    if ( !v19->Hospital && !v19->Armory ) /*0x43fea8*/
      this->pitchAngle = v19->q684; /*0x43feb8*/
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->isInLogic8))(this) != 1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3285) )
    {
      if ( (int)g_CurrentFrame - this->q120 > g_RulesClass_Instance->AIIonCannonEngineerValue[0] + 5 )
      {
        ((void (__stdcall *)(_DWORD))TechnoClass::GattlingValueRateDown_GattlingRateDownDelay)(this->Type->Parasiteable); /*0x43ff19*/
        Member81 = TechnoClass::GetMember81(this); /*0x43ff27*/
        v21 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
        if ( v21 > 0 )
        {
          v22 = Audio::IsLoud((float *)&this->NeedsSaveOrLink4)
              ? *(_DWORD *)(this->Type + 4 * v21 + 3312)
              : *(_DWORD *)(this->Type + 4 * v21 + 3288);
          if ( Member81 < v22 ) /*0x43ff61*/
            TechnoClass::SetSpread(this, v21 - 1); /*0x43ff67*/
        }
      }
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag2))(this) + 3285) /*0x43ff89*/
      && TechnoClass::GetMember81(this) > 0 )
    {
      ++this->gattlingValue; /*0x43ff8b*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->q0CC2))(this) /*0x43ffa3*/
    && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->missionData2))(this) )
  {
    this->BuildingClass_field_bool_6DD = 0; /*0x43ffad*/
  }
  v23 = this->BuildingClass_field_int_538; /*0x43ffb4*/
  if ( v23 != -1 ) /*0x43ffbc*/
  {
    if ( this->BuildingClass_field_int_534 != v23 ) /*0x43ffc8*/
    {
      v24 = this->Type; /*0x43ffca*/
      this->BuildingClass_field_int_534 = v23; /*0x43ffd5*/
      v25 = (_DWORD *)(v24 + 12 * v23 + 3844); /*0x43ffdb*/
      if ( v23 < 2 ) /*0x43ffe2*/
        ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, *(_DWORD *)(v24 + 12 * v23 + 3852)); /*0x44000d*/
      else
        ProductionTimeMult = *(char **)(v24 + 12 * v23 + 3852); /*0x43ffef*/
      this->turretChargeTimer = g_CurrentFrame; /*0x43fff8*/
      this->currentTurretNumber = Parachute; /*0x440028*/
      this->secondaryTurretIndex = ProductionTimeMult; /*0x44002b*/
      this->behindAnim = ProductionTimeMult; /*0x44002e*/
      this->q0F8 = *v25; /*0x440036*/
    }
    this->BuildingClass_field_int_538 = -1; /*0x44003c*/
  }
  v27 = this->health; /*0x440042*/
  if ( v27 != this->BuildingClass_field_544 ) /*0x44004d*/
  {
    *(_BYTE *)(this->owner + 22392) = 1; /*0x440055*/
    *(_BYTE *)(this->owner + 22393) = 1; /*0x440062*/
    v27 = this->health; /*0x440069*/
    this->BuildingClass_field_544 = v27; /*0x44006c*/
  }
  if ( !v27 ) /*0x440074*/
  {
    v28 = (char *)&this->q1720; /*0x440076*/
    v29 = 8; /*0x44007c*/
    do /*0x440099*/
    {
      if ( *(_DWORD *)v28 ) /*0x440081*/
      {
        (*(void (__thiscall **)(_DWORD))(*this->q6C0)(*(_DWORD *)v28); /*0x440089*/
        *(_DWORD *)v28 = 0; /*0x44008f*/
      }
      v28 += 4; /*0x440095*/
      --v29; /*0x440098*/
    }
    while ( v29 ); /*0x440099*/
    v30 = this->C4Timer; /*0x44009b*/
    result = this->q530; /*0x4400a1*/
    if ( v30 != -1 ) /*0x4400a9*/
    {
      if ( (int)g_CurrentFrame - v30 >= result ) /*0x4400b5*/
      {
  LABEL_98:
        (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0542))(this); /*0x4400c1*/
        ((void (__stdcall *)(_DWORD))BuildingClass::EjectCrew)(this->C4AppliedBy); /*0x4400d4*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0608))(this); /*0x4400dd*/
        return ((int (__thiscall *)(void *))BuildingClass::AfterDestruction)(this); /*0x4400f1*/
      }
      result -= (int)g_CurrentFrame - v30; /*0x4400b7*/
    }
    if ( result ) /*0x4400bb*/
      return result; /*0x4400bb*/
    goto LABEL_98; /*0x4400bb*/
  }
  BuildingClass::UpdatePrism((int *)this); /*0x4400f4*/
  if ( this->Type->Overpowerable ) /*0x4400ff*/
  {
    for ( i = this->q67C - 1; i >= 0; --i ) /*0x440114*/
    {
      if ( *(void **)(*(_DWORD *)(this->Occupants + 4 * i) + 692) != this ) /*0x440125*/
      {
        v32 = this->q67C; /*0x440127*/
        if ( i < v32 ) /*0x44012f*/
        {
          v33 = v32 - 1; /*0x440131*/
          i = i; /*0x440134*/
          for ( this->q67C = v33; /*0x44013e*/
                i < this->q67C;
                *(_DWORD *)(this->Occupants + 4 * i - 4) = *(_DWORD *)(this->Occupants + 4 * i) )
          {
            ++i; /*0x440146*/
          }
        }
      }
    }
    v35 = this->q67C; /*0x44015b*/
    this->IsOverpowered = v35 >= 3 /*0x440196*/
                           || HouseClass::GetPowerRatio((int *)this->owner) == 1.0
                           && this->HasPower
                           && v35 >= 1;
  }
  if ( this->Type->CanBeOccupied ) /*0x4401a3*/
    BuildingClass::ProcessStructureAbandoned((int)this); /*0x4401af*/
  BuildingClass::ProcessActiveAnimation(this); /*0x4401b6*/
  if ( this->Type->BuildingTypeClass_field_ED8 ) /*0x4401c1*/
    ProcessAutoProduction(this); /*0x4401cd*/
  if ( !this->C4Applied ) /*0x4401da*/
    goto LABEL_138; /*0x4401da*/
  v36 = this->C4Timer; /*0x4401e0*/
  v37 = this->q530; /*0x4401e6*/
  if ( v36 != -1 ) /*0x4401ee*/
  {
    if ( (int)g_CurrentFrame - v36 >= v37 ) /*0x4401fa*/
    {
  LABEL_121:
      v38 = this->Type; /*0x440206*/
      v66 = this->health; /*0x44020f*/
      if ( *(_BYTE *)(v38 + 5814) ) /*0x440213*/
      {
        v61 = 0; /*0x440221*/
        v39 = -2; /*0x440226*/
        do /*0x4402de*/
        {
          v40 = -2; /*0x44022b*/
          do /*0x4402d4*/
          {
            v41 = (_WORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)&this->suspendedMission0))(this, v67); /*0x440239*/
            IDA_HIWORD(v62) = v39 + v41[1]; /*0x44024c*/
            IDA_LOWORD(v62) = *v41 + v40; /*0x440251*/
            v62 = v62; /*0x44025e*/
            v42 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62) + 14); /*0x44026d*/
            v43 = (_WORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->suspendedMission0))(this, v68); /*0x440279*/
            IDA_HIWORD(v63) = v39 + v43[1]; /*0x44028c*/
            IDA_LOWORD(v63) = *v43 + v40; /*0x440291*/
            v63 = v63; /*0x44029e*/
            v44 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v63) + 17); /*0x4402b3*/
            if ( v42 >= g_TerrainBridgeIndex && v42 < g_TerrainBridgeIndex + 16 || v44 >= 74 && v44 <= 101 ) /*0x4402c9*/
              v61 = 1; /*0x4402cb*/
            ++v40; /*0x4402d0*/
          }
          while ( v40 < 3 ); /*0x4402d4*/
          ++v39; /*0x4402da*/
        }
        while ( v39 < 3 ); /*0x4402de*/
        v45 = (__int16 *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->suspendedMission0))(this, v68); /*0x4402f5*/
        if ( v61 ) /*0x4402ec*/
          MapClass::ApplyTerrainDamage(&MapClass_Instance, v45); /*0x440301*/
        else
          result = ((int (__stdcall *)(__int16 *))TerrainClass::ProcessSlope)(v45); /*0x44031b*/
        this->C4Applied = 0; /*0x440320*/
        this->C4AppliedBy = 0; /*0x440327*/
      }
      else
      {
        result = (*(int (__thiscall **)(void *, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)&this->isAliveFlag4))( /*0x440358*/
                   this,
                   &v66,
                   0,
                   g_RulesClass_Instance->SilverCrate[5],
                   this->C4AppliedBy,
                   1,
                   0,
                   0);
      }
      IDA_LOBYTE(result) = this->isAliveFlag; /*0x44035e*/
      if ( !(_BYTE)result ) /*0x440366*/
        return result; /*0x440366*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)&this->isOnMap2))(this, 2); /*0x440372*/
      goto LABEL_138; /*0x440372*/
    }
    v37 -= (int)g_CurrentFrame - v36; /*0x4401fc*/
  }
  if ( !v37 ) /*0x440200*/
    goto LABEL_121; /*0x440200*/
  LABEL_138:
  result = this->target; /*0x440378*/
  if ( result ) /*0x440380*/
  {
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->q1780))(this, this->target); /*0x44038b*/
    if ( !(_BYTE)result ) /*0x440393*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)&this->q0443) + 44))(this->target) != 2 ) /*0x4403a7*/
        return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->targetingTimer8))(this, 0); /*0x4403a7*/
      result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)&this->q0443) + 80))(this->target); /*0x4403b5*/
      if ( (_BYTE)result ) /*0x4403ba*/
        return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->targetingTimer8))(this, 0); /*0x440567*/
    }
  }
  return result; /*0x4400ea*/
}
  v4 = -v1; /*0x455a01*/
  v5 = -v1; /*0x455a03*/
  for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
  {
    if ( v4 < v1 ) /*0x455a10*/
    {
      do /*0x455a64*/
      {
        IDA_LOWORD(v7) = v4 + v12; /*0x455a2f*/
        IDA_HIWORD(v7) = IDA_HIWORD(v12) + v5; /*0x455a1e*/
        v8 = v7; /*0x455a38*/
        result = v1 * v1; /*0x455a3c*/
        if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
        {
          CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8); /*0x455a50*/
          result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
        }
        ++v4; /*0x455a61*/
      }
      while ( v4 < v1 ); /*0x455a64*/
      v4 = i; /*0x455a66*/
    }
  }
  return result; /*0x455a70*/
}
  v4 = -v1; /*0x455a01*/
  v5 = -v1; /*0x455a03*/
  for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
  {
    if ( v4 < v1 ) /*0x455a10*/
    {
      do /*0x455a64*/
      {
        IDA_LOWORD(v7) = v4 + v12; /*0x455a2f*/
        IDA_HIWORD(v7) = IDA_HIWORD(v12) + v5; /*0x455a1e*/
        v8 = v7; /*0x455a38*/
        result = v1 * v1; /*0x455a3c*/
        if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
        {
          CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8); /*0x455a50*/
          result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
        }
        ++v4; /*0x455a61*/
      }
      while ( v4 < v1 ); /*0x455a64*/
      v4 = i; /*0x455a66*/
    }
  return result; /*0x455a70*/
  v4 = -v1; /*0x455a01*/
  v5 = -v1; /*0x455a03*/
  for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
  {
    if ( v4 < v1 ) /*0x455a10*/
    {
      do /*0x455a64*/
      {
        IDA_LOWORD(v7) = v4 + v12; /*0x455a2f*/
        IDA_HIWORD(v7) = IDA_HIWORD(v12) + v5; /*0x455a1e*/
        v8 = v7; /*0x455a38*/
        result = v1 * v1; /*0x455a3c*/
        if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
        {
          CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8); /*0x455a50*/
          result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
        ++v4; /*0x455a61*/
      while ( v4 < v1 ); /*0x455a64*/
      v4 = i; /*0x455a66*/
  return result; /*0x455a70*/
  v4 = -v1; /*0x455a01*/
  v5 = -v1; /*0x455a03*/
  for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
  {
    if ( v4 < v1 ) /*0x455a10*/
    {
      do /*0x455a64*/
      {
        IDA_LOWORD(v7) = v4 + v12; /*0x455a2f*/
        IDA_HIWORD(v7) = IDA_HIWORD(v12) + v5; /*0x455a1e*/
        v8 = v7; /*0x455a38*/
        result = v1 * v1; /*0x455a3c*/
        if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
        {
          CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8); /*0x455a50*/
          result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
        ++v4; /*0x455a61*/
      while ( v4 < v1 ); /*0x455a64*/
      v4 = i; /*0x455a66*/
  return result; /*0x455a70*/

// IDA 0x483690: check if eligible for tiberium storage
}
}
}
}
}
}
}
// 0x483690
bool BuildingClass::IsTiberiumSiloEligible() {
  int BuildingByTiberiumType; // edi

  if ( *(char *)g_ScenarioClass_Instance >= 0 ) /*0x48369c*/
    return 0; /*0x48369f*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->q044); /*0x4836ab*/
  if ( BuildingByTiberiumType == -1 ) /*0x4836b0*/
    return 0; /*0x4836b3*/
  if ( *(unsigned __int8 *)(&this->estimatedHealth6) <= BuildingByTiberiumType / 2 ) /*0x4836c8*/
    return 0; /*0x4836cb*/
  if ( this->q11C ) /*0x4836cf*/
    return 0; /*0x4836da*/
  if ( *(double *)(*(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType] + 160) >= 0.00001 ) /*0x4836f8*/
    return this->flashing == 0; /*0x483708*/
  return 0; /*0x48369e*/
}
// 0x458e50
void BuildingClass::UpdateBunker() {}
  char *Member; // ebp
  int v3; // eax
  int *v4; // eax
  _DWORD *v5; // eax
  _WORD *v6; // ebx
  _DWORD *v7; // eax
  char *ClosestObject; // eax
  char *v9; // edi
  int v10; // ebx
  int v11; // eax
  _WORD *v12; // edi
  int v13; // ebx
  _DWORD *v14; // eax
  int *v15; // edi
  int *v16; // eax
  double v17; // st7
  int v18; // eax
  int *v19; // eax
  int v20; // edi
  int v21; // ebx
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // edx
  int v26; // ecx
  _BYTE *v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  _DWORD *v32; // esi
  char i; // [esp+33h] [ebp-75h]
  int v35; // [esp+34h] [ebp-74h]
  int v36; // [esp+34h] [ebp-74h]
  int v37; // [esp+38h] [ebp-70h]
  _WORD *v38; // [esp+3Ch] [ebp-6Ch]
  int v39; // [esp+3Ch] [ebp-6Ch]
  int v40; // [esp+3Ch] [ebp-6Ch]
  int v41; // [esp+40h] [ebp-68h] BYREF
  int v42; // [esp+44h] [ebp-64h] BYREF
  int v43; // [esp+48h] [ebp-60h] BYREF
  __int16 v44; // [esp+4Ch] [ebp-5Ch] BYREF
  int v45; // [esp+50h] [ebp-58h] BYREF
  int v46; // [esp+54h] [ebp-54h] BYREF
  int v47; // [esp+58h] [ebp-50h] BYREF
  _DWORD v48[2]; // [esp+5Ch] [ebp-4Ch] BYREF
  _DWORD v49[2]; // [esp+64h] [ebp-44h] BYREF
  _DWORD v50[3]; // [esp+6Ch] [ebp-3Ch] BYREF
  _BYTE v51[8]; // [esp+78h] [ebp-30h] BYREF
  int v52; // [esp+80h] [ebp-28h]
  _BYTE v53[12]; // [esp+84h] [ebp-24h] BYREF
  _BYTE v54[12]; // [esp+90h] [ebp-18h] BYREF
  _BYTE v55[12]; // [esp+9Ch] [ebp-Ch] BYREF

  Member = (char *)*(&this->q0485); /*0x458e5b*/
  if ( (Member || (Member = (char *)Team::GetMember(this, 0)) != 0) /*0x458e7c*/
    && (*(int (__thiscall **)(char *))(*(_DWORD *)Member + 44))(Member) == 1 )
  {
    v4 = (int *)*(&this->queuedMission4); /*0x458e99*/
    switch ( (unsigned int)v4 ) /*0x458ea8*/
    {
      case 0u: /*0x458ea8*/
        v5 = (_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)Member + 444))(Member); /*0x458eb4*/
        v4 = Cell::IsBridge(v5); /*0x458ebc*/
        if ( v4 == this ) /*0x458ec3*/
        {
          if ( !*((_DWORD *)Member + 413) ) /*0x458ec9*/
            WinAPI::Wrapper(-2147467261); /*0x458ed6*/
          IDA_LOBYTE(v4) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Member + 413) + 16))(*((_DWORD *)Member + 413)); /*0x458ee4*/
          if ( !(_BYTE)v4 ) /*0x458ee9*/
          {
            v6 = (_WORD *)this->GetOrCreateResHandle(0); /*0x458efe*/
            v38 = v6; /*0x458f05*/
            v35 = *(_DWORD *)this->GetCellCoords_Alt(&v45); /*0x458f11*/
            while ( 1 ) /*0x458f15*/
            {
              IDA_LOWORD(v4) = *v6; /*0x458f15*/
              if ( *v6 == 0x7FFF && v6[1] == 0x7FFF ) /*0x458f22*/
                break; /*0x458f22*/
              IDA_LOWORD(v37) = v35 + (_WORD)v4; /*0x458f3b*/
              IDA_HIWORD(v37) = IDA_HIWORD(v35) + v6[1]; /*0x458f40*/
              v37 = v37; /*0x458f4f*/
              v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v37); /*0x458f53*/
              v48[0] = 128; /*0x458f62*/
              v48[1] = 128; /*0x458f66*/
              ClosestObject = (char *)Object::FindClosestObjectCell(v7, v48, 0, (int)this); /*0x458f6f*/
              v9 = ClosestObject; /*0x458f74*/
              if ( ClosestObject && ClosestObject != Member ) /*0x458f7c*/
              {
                v10 = *(_DWORD *)ClosestObject; /*0x458f80*/
                v11 = this->GetExitCoords(v53, 1, 0); /*0x458f8d*/
                (*(void (__thiscall **)(char *, int))(v10 + 372))(v9, v11); /*0x458f93*/
                v6 = v38; /*0x458f99*/
              }
              v6 += 2; /*0x458f9d*/
              v38 = v6; /*0x458fa0*/
            }
            goto LABEL_25; /*0x458f22*/
          }
        }
        break; /*0x458fa4*/
      case 1u: /*0x458ea8*/
        v34 = 0; /*0x458fae*/
        v12 = (_WORD *)this->GetOrCreateResHandle(0); /*0x458fbd*/
        v13 = *(_DWORD *)this->GetCellCoords_Alt(&v46); /*0x458fca*/
        while ( *v12 != 0x7FFF || v12[1] != 0x7FFF ) /*0x458fdd*/
        {
          IDA_LOWORD(v39) = v13 + *v12; /*0x458fee*/
          IDA_HIWORD(v39) = IDA_HIWORD(v13) + v12[1]; /*0x458ff4*/
          v39 = v39; /*0x459002*/
          v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v39); /*0x459006*/
          v49[0] = 128; /*0x459015*/
          v49[1] = 128; /*0x459019*/
          v4 = (int *)Object::FindClosestObjectCell(v14, v49, 0, (int)this); /*0x459022*/
          if ( v4 ) /*0x459029*/
          {
            if ( v4 != (int *)Member ) /*0x45902d*/
            {
              v34 = 1; /*0x459032*/
              if ( (v4[5] & 4) != 0 && !v4[361] ) /*0x459044*/
              {
  LABEL_25:
                *(&this->queuedMission4) = 1; /*0x45904b*/
                return (char)v4; /*0x45905c*/
              }
            }
          }
          v12 += 2; /*0x459046*/
        }
        IDA_LOBYTE(v4) = v34; /*0x45905d*/
        if ( !v34 ) /*0x459063*/
        {
          v15 = (int *)(*(int (__thiscall **)(char *, _BYTE *))(*(_DWORD *)Member + 72))(Member, v54); /*0x459078*/
          v16 = (int *)this->GetExitCoords(v51); /*0x459081*/
          v40 = *v15; /*0x459088*/
          v17 = Math::CalcAngle((double)v16[1] - (double)v15[1], (double)*v15 - (double)*v16); /*0x4590ab*/
          IDA_LOWORD(v40) = Math::RoundToInt((v17 - 1.570796326794897) * -10430.06004058427) + 0x7FFF; /*0x4590d6*/
          v40 = v40; /*0x4590df*/
          IDA_LOBYTE(v4) = FacingClass::Update(Member + 904, &v40); /*0x4590ea*/
          *(&this->queuedMission4) = 2; /*0x4590ef*/
        }
        break; /*0x459100*/
      case 2u: /*0x458ea8*/
        IDA_LOBYTE(v4) = TimerClass::Active((int)(Member + 904)); /*0x459109*/
        if ( !(_BYTE)v4 ) /*0x459110*/
        {
          v18 = ((unsigned __int16)(*ProgressTimer::GetValue((_WORD *)Member + 452, &v47) >> 7) + 1) & 0x1FE; /*0x459128*/
          if ( v18 == 64 ) /*0x459130*/
          {
            v36 = 67; /*0x459132*/
          }
          else if ( v18 == 448 ) /*0x459141*/
          {
            v36 = 70; /*0x459143*/
          }
          else
          {
            v36 = 68; /*0x459152*/
            if ( v18 != 192 ) /*0x45915a*/
              v36 = 69; /*0x45915c*/
          }
          v19 = (int *)this->GetExitCoords(v55); /*0x45916d*/
          v20 = *v19; /*0x459170*/
          v21 = v19[1]; /*0x459172*/
          v22 = v19[2]; /*0x459175*/
          v23 = *((_DWORD *)Member + 413); /*0x459178*/
          v22 = v22; /*0x459180*/
          if ( !v23 ) /*0x459184*/
            WinAPI::Wrapper(-2147467261); /*0x45918b*/
          (*(void (__stdcall **)(_DWORD, int, int, int, int))(**((_DWORD **)Member + 413) + 112))( /*0x4591af*/
            *((_DWORD *)Member + 413),
            v36,
            v20,
            v21,
            v22);
          IDA_LOBYTE(v4) = (*(int (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)Member + 1348))(Member, 0, 1072693248); /*0x4591be*/
          *(&this->queuedMission4) = 3; /*0x4591c4*/
        }
        break; /*0x4591d5*/
      case 3u: /*0x458ea8*/
        v24 = (_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)Member + 444))(Member); /*0x4591db*/
        v4 = Cell::IsBridge(v24); /*0x4591e3*/
        if ( v4 == this ) /*0x4591ea*/
        {
          if ( !*((_DWORD *)Member + 413) ) /*0x4591f0*/
            WinAPI::Wrapper(-2147467261); /*0x4591fd*/
          IDA_LOBYTE(v4) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Member + 413) + 16))(*((_DWORD *)Member + 413)); /*0x45920b*/
          if ( !(_BYTE)v4 ) /*0x459210*/
          {
            v44 = 0x8000; /*0x459221*/
            IDA_LOBYTE(v4) = FacingClass::Update(Member + 904, &v44); /*0x459228*/
            *(&this->queuedMission4) = 4; /*0x45922d*/
          }
        }
        break; /*0x45923e*/
      case 4u: /*0x458ea8*/
        IDA_LOBYTE(v4) = TimerClass::Active((int)(Member + 904)); /*0x459245*/
        if ( !(_BYTE)v4 ) /*0x45924c*/
        {
          if ( BuildingClass::GetHealthRatio(this) > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x459269*/
          {
            v26 = 0; /*0x459283*/
            v27 = (_BYTE *)(*(&this->needsRedraw8) + 4596); /*0x459285*/
          }
          else
          {
            v26 = 1; /*0x459271*/
            v27 = (_BYTE *)(*(&this->needsRedraw8) + 4612); /*0x459276*/
          }
          if ( v27 && *v27 ) /*0x45928e*/
            BuildingClass::PlayAnim(this, v25, v27, 10, v26, 0, 0); /*0x45929b*/
          if ( BuildingClass::GetHealthRatio(this) > *(double *)&g_RulesClass_Instance[1].WarpOut ) /*0x4592b8*/
          {
            v29 = 0; /*0x4592d2*/
            v4 = (int *)(*(&this->needsRedraw8) + 4664); /*0x4592d4*/
          }
          else
          {
            v29 = 1; /*0x4592c0*/
            v4 = (int *)(*(&this->needsRedraw8) + 4680); /*0x4592c5*/
          }
          if ( v4 && *(_BYTE *)v4 ) /*0x4592dd*/
            IDA_LOBYTE(v4) = BuildingClass::PlayAnim(this, v28, v4, 11, v29, 0, 0); /*0x4592ea*/
          *(&this->queuedMission4) = 5; /*0x4592ef*/
        }
        break; /*0x459300*/
      case 5u: /*0x458ea8*/
        *(&this->q0485) = (int)Member; /*0x459301*/
        v30 = *(_DWORD *)Member; /*0x459307*/
        *((_DWORD *)Member + 185) = this; /*0x45930f*/
        *((_DWORD *)Member + 133) = -1; /*0x459315*/
        (*(void (__thiscall **)(char *))(v30 + 336))(Member); /*0x45931b*/
        v31 = *(&this->q0485); /*0x459321*/
        *(&this->queuedMission4) = 6; /*0x459327*/
        (*(void (__thiscall **)(int, int, int))(v31->q1E8)(v31, 5, 1); /*0x459337*/
        IDA_LOBYTE(v4) = (_BYTE)g_RulesClass_Instance; /*0x45933d*/
        if ( g_RulesClass_Instance->ActivateSound != -1 ) /*0x459348*/
        {
          v32 = &this->location; /*0x45934a*/
          v50[0] = *v32; /*0x459353*/
          v50[1] = v32[1]; /*0x45935a*/
          v50[2] = v32[2]; /*0x459365*/
          IDA_LOBYTE(v4) = StartAudioControllerAt(g_RulesClass_Instance->ActivateSound, (int)v50, 0); /*0x45936f*/
        }
        break; /*0x45936f*/
      default:
        return (char)v4;
    }
  }
  else
  {
    v3 = *this; /*0x458e7e*/
    *(&this->queuedMission4) = 0; /*0x458e85*/
    IDA_LOBYTE(v4) = this->MissionDispatch(5, 0); /*0x458e8b*/
  }
  return (char)v4; /*0x458e91*/
// IDA 0x424c90: set field at offset 95
// 0x424c90
int AnimClass::SetField95(int v) {
  *(&this->objectTypeFlags5) = v; /*0x424c94*/
  return v; /*0x424c9a*/
}
// 0x425260
void AnimClass::SetField8(int v) {
  *(v + 414) = 1; /*0x425260*/
}
// 0x449440
int BuildingClass::GetCursorAction() { return 0; }
  _DWORD *v1; // eax
  void *v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // [esp-Ch] [ebp-Ch]
  int v7; // [esp-8h] [ebp-8h]
  int v8; // [esp-4h] [ebp-4h]
  int v9; // [esp+4h] [ebp+4h] BYREF

  v1 = (_DWORD *)this->Type; /*0x449447*/
  v9 = v9->objectTypeFlags; /*0x44944d*/
  if ( v1[258] && this->isOnMap ) /*0x44945b*/
  {
    v8 = this->owner; /*0x44946e*/
    v7 = (int)v1; /*0x44946f*/
    v6 = v1[415]; /*0x449474*/
    v2 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v9); /*0x44947b*/
    v3 = -(CellClass::IsPassable((int)v2, v6, v7, v8) != 0); /*0x449489*/
    IDA_LOBYTE(v3) = v3 & 0xF9; /*0x44948b*/
    return v3 + 7; /*0x44948d*/
  }
  else
  {
    v5 = -((*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v1 + 168))(v1, &v9, this->owner) != 0); /*0x4494ab*/
    IDA_LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
    return v5 + 7; /*0x4494af*/
  }
// 0x716150
bool BuildingClass::ValidatePath(void *a1, unsigned short *a2, int a3)
{
  _WORD *v6; // esi
  bool v7; // bl
  _WORD *v8; // eax
  void *v9; // eax
  void *v10; // eax
  int v11; // [esp-24h] [ebp-38h]
  int v12; // [esp-14h] [ebp-28h]
  char v13; // [esp+Bh] [ebp-9h]
  int v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+10h] [ebp-4h] BYREF
  char v16; // [esp+18h] [ebp+4h]

  if ( *a2 == word_B0EB58 && a2[1] == word_B0EB5A ) /*0x716173*/
    return 0; /*0x71617c*/
  v6 = (_WORD *)(*(int (__thiscall **)(int *, int))(*a1 + 144))(a1, 1); /*0x71618d*/
  v13 = 0; /*0x716199*/
  v7 = (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 7; /*0x71619e*/
  v16 = 0; /*0x7161a3*/
  while ( v6 ) /*0x7161a8*/
  {
    if ( *v6 == 0x7FFF && v6[1] == 0x7FFF ) /*0x7161bb*/
      break; /*0x7161bb*/
    v8 = v6; /*0x7161c5*/
    v6 += 2; /*0x7161c7*/
    IDA_LOWORD(v14) = *v8 + *a2; /*0x7161d5*/
    IDA_HIWORD(v14) = a2[1] + v8[1]; /*0x7161da*/
    v15 = v14; /*0x7161e5*/
    if ( v7 ) /*0x7161e9*/
    {
      v12 = *(a1 + 415); /*0x7161fb*/
      v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x716202*/
      if ( CellClass::IsPassable((int)v9, v12, (int)a1, a3) ) /*0x716209*/
        goto LABEL_12; /*0x716210*/
      v13 = 1; /*0x716212*/
    }
    else
    {
      v11 = *(a1 + 415); /*0x71622f*/
      v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x716236*/
      if ( Cell::IsBuildable((int)v10, v11, 0, 0, -1, 0, -1, 1) ) /*0x71623d*/
      {
  LABEL_12:
        v16 = 1; /*0x71624d*/
        continue; /*0x71624d*/
      }
      v13 = 1; /*0x716246*/
    }
  }
  if ( v7 && *(a1 + 918) ) /*0x716260*/
    return v16; /*0x71626a*/
  else
    return v13 == 0; /*0x716280*/
}
// IDA 0x717890: set production slot
// 0x717890
void BuildingClass::SetSlot(int a2, int a3)
{
  *(this + a3 + 517) = a2; /*0x717898*/
  return a3; /*0x71789f*/
}
uint32_t BuildingClass::GetField184() const { return BuildingClass_field_544; }
// 0x447210
void BuildingClass::GetActionOnObject() {}
// 0x41c060
bool BuildingClass::vt_entry_4E4()  { return false; }