// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"

// 0x45DD90
namespace gamemd {
int BuildingTypeClass::ConstructFull(char * Source)
{
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  unsigned int *v8; // eax
  int v9; // ecx
  unsigned int *v10; // ebp
  unsigned int *v11; // ebp
  unsigned int *v12; // eax
  int v13; // edi
  unsigned int *v15; // eax
  int v16; // edi
  unsigned int *v18; // eax
  int v19; // ecx
  unsigned int *v20; // edi

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x45dda1*/
  this->ArrayIndex = -1; /*0x45ddaf*/
  this->qDFC = 0; /*0x45ddb5*/
  this->qE00 = 0; /*0x45ddbb*/
  this->qE04 = 0; /*0x45ddc1*/
  this->qE08 = 0; /*0x45ddc7*/
  this->HalfDamageSmokeLocation1 = dword_89C8D0; /*0x45ddd3*/
  this->qE10 = dword_89C8D4; /*0x45ddda*/
  this->u32_E14 = dword_89C8D8; /*0x45dde9*/
  this->HalfDamageSmokeLocation2 = dword_89C8D0; /*0x45ddf2*/
  this->u32_E1C = (gamemd::UnitTypeClass *)(dword_89C8D4);
  this->u32_E20 = (unsigned int)((gamemd::InfantryTypeClass *)(dword_89C8D8));
  this->GateCloseDelay = (int)(0);
  this->qE2C = 0; /*0x45de0c*/
  this->LightVisibility = 5000; /*0x45de12*/
  this->LightIntensity = 0; /*0x45de21*/
  this->LightRedTint = 1000000; /*0x45de27*/
  this->LightGreenTint = (void *)(1000000);
  this->LightBlueTint = (unsigned int)(1000000);
  this->PrimaryFirePixelOffset = 0xFFFF; /*0x45de40*/
  this->u32_E48 = 0xFFFF; /*0x45de46*/
  this->SecondaryFirePixelOffset = 0xFFFF; /*0x45de4c*/
  this->qE50 = 0xFFFF; /*0x45de52*/
  this->ToOverlay = 0; /*0x45de58*/
  this->ToTile = 0; /*0x45de5e*/
  this->UnitEnterSound = -1; /*0x45de64*/
  this->UnitExitSound = -1; /*0x45de6a*/
  this->WorkingSound = -1; /*0x45de70*/
  this->NotWorkingSound = -1; /*0x45de76*/
  this->PowersUpBuilding_0x18 = -1; /*0x45de7c*/
  this->FreeUnit = -1; /*0x45de82*/
  this->SecretInfantry = -1; /*0x45de88*/
  this->qEA0 = 0; /*0x45de8e*/
  this->qEA4 = 0; /*0x45de94*/
  this->ExitCoord = (gamemd::SHPStruct *)(0);
  this->SecretBuilding = 0; /*0x45dea0*/
  this->BuildingTypeClass_field_EB0 = -1; /*0x45dea6*/
  this->FoundationOutside = 3; /*0x45deac*/
  this->BuildingTypeClass_field_ED8 = 0; /*0x45deb6*/
  this->DeployFacing = 0; /*0x45debc*/
  this->qEC0 = 0; /*0x45dec2*/
  this->qEC4 = 0; /*0x45dec8*/
  this->ExtraPowerBonus = 0; /*0x45dece*/
  this->qECC = 0; /*0x45ded4*/
  this->qED0 = 0; /*0x45deda*/
  this->Height = 0; /*0x45dee0*/
  this->OccupyHeight = 0; /*0x45dee6*/
  this->MidPoint = 128; /*0x45deec*/
  this->DoorStages = 0; /*0x45def6*/
  this->BuildingAnimFrame_6 = 0; /*0x45defc*/
  this->BuildingAnim_0x15 = 0; /*0x45df02*/
  this->Upgrades = 0; /*0x45df08*/
  this->qEF0 = 0; /*0x45df13*/
  this->DeployingAnimLoaded = 2; /*0x45df19*/
  this->UnderDoorAnim = 2; /*0x45df1f*/
  this->UnderDoorAnimLoaded = 0; /*0x45df25*/
  this->Rubble = 0; /*0x45df2b*/
  this->q14E0 = 0; /*0x45df31*/
  this->q14E4 = 0; /*0x45df37*/
  this->q14EC = 0; /*0x45df3d*/
  this->q14F4 = 0; /*0x45df43*/
  this->RoofDeployingAnim = 0; /*0x45df49*/
  this->UnderRoofDoorAnim = 0; /*0x45df4f*/
  this->DoorAnim = 0; /*0x45df55*/
  this->SpecialZOverlay = 0; /*0x45df5b*/
  this->SpecialZOverlayZAdjust = 0; /*0x45df61*/
  this->BibShape = 0; /*0x45df67*/
  this->BibShapeLoaded = 0; /*0x45df6d*/
  this->NormalZAdjust = 0; /*0x45df73*/
  this->AntiAirValue = 0; /*0x45df79*/
  this->AntiArmorValue = 0; /*0x45df7f*/
  this->AntiInfantryValue = 0; /*0x45df87*/
  this->ZShapePointMove = 0; /*0x45df8d*/
  this->q1534 = 0; /*0x45df93*/
  this->BuildingTypeClass_field_1538 = dword_89C8A0; /*0x45dfa4*/
  this->BuildingTypeClass_field_153C = dword_89C8A4; /*0x45dfb0*/
  this->q1540 = dword_89C8A8; /*0x45dfb8*/
  dword_89C8AC = dword_89C8AC; /*0x45dfbb*/
  this->HoverPad = 0; /*0x45dfc3*/
  this->BuildingTypeClass_field_1544 = dword_89C8AC; /*0x45dfc9*/
  this->ExtraLight = 0; /*0x45dfcc*/
  this->TogglePower = 1; /*0x45dfd3*/
  this->HasSpotlight = 0; /*0x45dfda*/
  this->IsTemple = 0; /*0x45dfe0*/
  this->QueueingCell = 0; /*0x45dfe6*/
  this->IsPlug = 0; /*0x45dfec*/
  this->BaseNormal = 1; /*0x45dff2*/
  this->EligibileForAllyBuilding = 0; /*0x45dff9*/
  this->EligibleForDelayKill = 0; /*0x45dfff*/
  this->NeedsEngineer = 0; /*0x45e005*/
  this->CaptureEvaEvent = -1; /*0x45e00b*/
  this->ProduceCashStartup = 0; /*0x45e011*/
  this->ProduceCashAmount = 0; /*0x45e017*/
  this->ProduceCashDelay = 0; /*0x45e01d*/
  this->InfantryGainSelfHeal = 0; /*0x45e023*/
  this->UnitsGainSelfHeal = 0; /*0x45e029*/
  this->RefinerySmokeFrames = 25; /*0x45e02f*/
  this->Bib = 0; /*0x45e039*/
  this->Wall = 0; /*0x45e03f*/
  this->Capturable = 0; /*0x45e045*/
  this->Powered = 0; /*0x45e04b*/
  this->PoweredSpecial = 0; /*0x45e051*/
  this->Overpowerable = 0; /*0x45e057*/
  this->Spyable = 0; /*0x45e05d*/
  this->CanC4 = 1; /*0x45e063*/
  this->WantsExtraSpace = 0; /*0x45e06a*/
  this->Unsellable = 0; /*0x45e070*/
  this->ClickRepairable = 1; /*0x45e076*/
  this->CanBeOccupied = 0; /*0x45e07d*/
  this->CanOccupyFire = 0; /*0x45e083*/
  this->MaxNumberOccupants = 0; /*0x45e089*/
  this->ShowOccupantPips = 1; /*0x45e08f*/
  this->q161C = 0; /*0x45e096*/
  this->NumberImpassableRows = -1; /*0x45e09c*/
  this->Radar = 0; /*0x45e0a2*/
  this->SpySat = 0; /*0x45e0a8*/
  this->ChargeAnim = 0; /*0x45e0ae*/
  this->IsAnimDelayedFire = 0; /*0x45e0b4*/
  this->SiloDamage = 0; /*0x45e0ba*/
  this->UnitRepair = 0; /*0x45e0c0*/
  this->UnitReload = 0; /*0x45e0c6*/
  this->Bunker = 0; /*0x45e0cc*/
  this->Cloning = 0; /*0x45e0d2*/
  this->Grinding = 0; /*0x45e0d8*/
  this->UnitAbsorb = 0; /*0x45e0de*/
  this->InfantryAbsorb = 0; /*0x45e0e4*/
  this->SecretLab = 0; /*0x45e0ea*/
  this->DoubleThick = 0; /*0x45e0f0*/
  this->Flat = 0; /*0x45e0f6*/
  this->DockUnload = 0; /*0x45e0fc*/
  this->Recoilless = 0; /*0x45e102*/
  this->HasStupidGuardMode = 1; /*0x45e108*/
  this->BridgeRepairHut = 0; /*0x45e10f*/
  this->Gate = 0; /*0x45e115*/
  this->SAM = 0; /*0x45e11b*/
  this->ConstructionYard = 0; /*0x45e121*/
  this->NukeSilo = 0; /*0x45e127*/
  this->Refinery = 0; /*0x45e12d*/
  this->Weeder = 0; /*0x45e133*/
  this->WeaponsFactory = 0; /*0x45e139*/
  this->LaserFencePost = 0; /*0x45e13f*/
  this->LaserFence = 0; /*0x45e145*/
  this->FirestormWall = 0; /*0x45e14b*/
  this->Hospital = 0; /*0x45e151*/
  this->Armory = 0; /*0x45e157*/
  this->EMPulseCannon = 0; /*0x45e15d*/
  this->TickTank = 0; /*0x45e163*/
  this->TurretAnimIsVoxel = 0; /*0x45e169*/
  this->BarrelAnimIsVoxel = 0; /*0x45e16f*/
  this->CloakGenerator = 0; /*0x45e175*/
  this->SensorArray = 0; /*0x45e17b*/
  this->ICBMLauncher = 0; /*0x45e181*/
  this->Artillary = 0; /*0x45e187*/
  this->Helipad = 0; /*0x45e18d*/
  this->OrePurifier = 0; /*0x45e193*/
  this->FactoryPlant = 0; /*0x45e19e*/
  this->InfantryCostBonus = 1065353216; /*0x45e1a4*/
  this->UnitsCostBonus = 1065353216; /*0x45e1aa*/
  this->AircraftCostBonus = 1065353216; /*0x45e1b0*/
  this->BuildingsCostBonus = 1065353216; /*0x45e1b6*/
  this->DefensesCostBonus = 1065353216; /*0x45e1bc*/
  this->GDIBarracks = 0; /*0x45e1c2*/
  this->NODBarracks = 0; /*0x45e1c8*/
  this->YuriBarracks = 0; /*0x45e1ce*/
  this->ChargedAnimTime = 1148829696; /*0x45e1d4*/
  this->DelayedFireDelay = 0; /*0x45e1de*/
  this->SuperWeapon = -1; /*0x45e1e4*/
  this->SuperWeapon2 = -1; /*0x45e1ea*/
  this->GateStages = 9; /*0x45e1f0*/
  this->PowersUpToLevel = -1; /*0x45e1fa*/
  this->DamagedDoor = 0; /*0x45e200*/
  this->InvisibleInGame = 0; /*0x45e206*/
  this->TerrainPalette = 0; /*0x45e20c*/
  this->PlaceAnywhere = 0; /*0x45e212*/
  this->ExtraDamageStage = 1; /*0x45e218*/
  this->AIBuildThis = 0; /*0x45e21f*/
  this->IsBaseDefense = (unsigned int)(0);
  this->CloakRadiusInCells = 20; /*0x45e22b*/
  this->ConcentricRadialIndicator = (gamemd::UnitTypeClass *)(0);
  this->PsychicDetectionRadius = (unsigned int)(0);
  this->BarrelStartPitch = (unsigned int)(64);
  this->DemandLoad = (unsigned int)(0);
  this->DemandLoadBuildup = 0; /*0x45e24e*/
  this->FreeBuildup = 0; /*0x45e254*/
  this->IsThreatRatingNode = 0; /*0x45e25a*/
  this->PrimaryFireDualOffset = 0; /*0x45e260*/
  this->ProtectWithWall = 0; /*0x45e266*/
  this->CanHideThings = 1; /*0x45e26c*/
  this->CrateBeneath = 0; /*0x45e273*/
  this->LeaveRubble = 0; /*0x45e279*/
  this->CrateBeneathIsMoney = 0; /*0x45e284*/
  this->NumberOfDocks = 1; /*0x45e28a*/
  this->PreventsPlacementOverlap = 0; /*0x45e292*/
  this->ProductionCompletionThreshold = 1; /*0x45e298*/
  this->CostRatePerFrame = 1; /*0x45e29e*/
  this->q1791 = 0; /*0x45e2a5*/
  this->DockingOffsets = (void*)&VectorClass_TPoint3D_int_vftable; /*0x45e2ab*/
  this->PreventsPlacementOverlap = RA2_OPNEW(0xCu); /*0x45e2ba*/
  this->q1791 = 1; /*0x45e2c6*/
  *(unsigned int *)this = (void*)&BuildingTypeClass_vftable; /*0x45e2cd*/
  this->vtable2 = (void*)&BuildingTypeClass_vftable; /*0x45e2d3*/
  this->vtable3 = (void*)&BuildingTypeClass_vftable; /*0x45e2d9*/
  this->vtable4 = (void*)&BuildingTypeClass_vftable; /*0x45e2e1*/
  this->vtable2.GenerateUniqueID(); /*0x45e2e8*/
  v4 = g_TriggerClassCount; /*0x45e2ed*/
  if ( g_TriggerClassCount < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = g_TriggerClassCount,
        !v5) )
  {
    g_TriggerClassCount = (unsigned int)(v4 + 1);
    *((unsigned int *)g_TriggerTypeCount + v4) = this; /*0x45e33a*/
    v4 = g_TriggerClassCount; /*0x45e33d*/
  }
  v6 = 0; /*0x45e342*/
  if ( v4 <= 0 ) /*0x45e346*/
  {
  LABEL_11:
    v6 = -1; /*0x45e35a*/
  }
  else
  {
    g_TriggerTypeCount = g_TriggerTypeCount; /*0x45e348*/
    while ( *g_TriggerTypeCount != this ) /*0x45e350*/
    {
      ++v6; /*0x45e352*/
      ++g_TriggerTypeCount; /*0x45e353*/
      if ( v6 >= v4 ) /*0x45e358*/
        goto LABEL_11; /*0x45e358*/
    }
  }
  this->ArrayIndex = (unsigned int)((void *)(v6));
  this->RubbleLoaded = 0; /*0x45e362*/
  this->qF08 = 1; /*0x45e368*/
  this->qF0C = 0; /*0x45e36e*/
  this->qF10 = 0; /*0x45e374*/
  this->u32_F14 = 1; /*0x45e37a*/
  this->qF18 = 0; /*0x45e380*/
  this->BuildingAnim = 0; /*0x45e386*/
  this->qF20 = 1; /*0x45e38c*/
  this->qF24 = 0; /*0x45e392*/
  this->qF34 = 0; /*0x45e398*/
  this->u32_F38 = 1; /*0x45e39e*/
  this->qF3C = 0; /*0x45e3a4*/
  this->qF40 = 0; /*0x45e3aa*/
  this->u32_F44 = 1; /*0x45e3b0*/
  this->qF48 = 0; /*0x45e3b6*/
  v8 = (unsigned int *)(&this->q6242); /*0x45e3be*/
  v9 = 21; /*0x45e3c4*/
  do /*0x45e414*/
  {
    v10 = v8 - 4; /*0x45e3c9*/
    *v10 = 0; /*0x45e3ce*/
    v10[1] = 0; /*0x45e3d1*/
    v10[2] = 0; /*0x45e3d4*/
    v10[3] = 0; /*0x45e3d7*/
    *v8 = 0; /*0x45e3dc*/
    v8[1] = 0; /*0x45e3df*/
    v8[2] = 0; /*0x45e3e2*/
    v8[3] = 0; /*0x45e3e5*/
    v11 = v8 + 4; /*0x45e3e8*/
    v8 += 17; /*0x45e3eb*/
    --v9; /*0x45e3ee*/
    *v11 = 0; /*0x45e3ef*/
    v11[1] = 0; /*0x45e3f2*/
    v11[2] = 0; /*0x45e3f5*/
    v11[3] = 0; /*0x45e3f8*/
    *(v8 - 9) = 0; /*0x45e3fb*/
    *(v8 - 8) = 0; /*0x45e3fe*/
    *(v8 - 7) = 0; /*0x45e401*/
    *(v8 - 6) = 0; /*0x45e404*/
    *((unsigned char *)v8 - 20) = 1; /*0x45e407*/
    *((unsigned char *)v8 - 19) = 0; /*0x45e40b*/
    *((unsigned char *)v8 - 18) = 0; /*0x45e40e*/
    *((unsigned char *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
  this->BuildupFile_0x10 = 0; /*0x45e416*/
  this->SecretUnit = 0; /*0x45e41c*/
  this->TheaterSpecificID = 0; /*0x45e422*/
  this->VoxelBarrelFile = 0; /*0x45e428*/
  this->qC8E = 0; /*0x45e42e*/
  this->q14E8 = 0; /*0x45e434*/
  this->q14F0 = 0; /*0x45e43a*/
  this->q14F8 = 0; /*0x45e440*/
  this->RoofDeployingAnimLoaded = 0; /*0x45e446*/
  this->UnderRoofDoorAnimLoaded = 0; /*0x45e44c*/
  v12 = (unsigned int *)(&this->u32_89C2); /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    dword_89C8D4 = dword_89C8D4; /*0x45e463*/
    *v12 = dword_89C8D0; /*0x45e469*/
    v12[1] = dword_89C8D4; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (unsigned int *)(&this->u32_8BC2); /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    dword_89C8D4 = dword_89C8D4; /*0x45e485*/
    *v15 = dword_89C8D0; /*0x45e48b*/
    v15[1] = dword_89C8D4; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = (unsigned int *)(&this->u32_8F42); /*0x45e49b*/
  v19 = 8; /*0x45e4a7*/
  do /*0x45e4c4*/
  {
    *(v18 - 16) = 0xFFFF; /*0x45e4ac*/
    *(v18 - 15) = 0xFFFF; /*0x45e4b4*/
    *v18 = 0xFFFF; /*0x45e4b7*/
    v18[1] = 0xFFFF; /*0x45e4bd*/
    v18 += 2; /*0x45e4c0*/
    --v19; /*0x45e4c3*/
  }
  while ( v19 ); /*0x45e4c4*/
  v20 = *(unsigned int **)(&this->q9684); /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
  this->u8_D35 = 1; /*0x45e4dc*/
  this->u8_D36 = 1; /*0x45e4e3*/
  this->qD3B = 0; /*0x45e4ea*/
  this->SpawnRegenRate = 0; /*0x45e4f0*/
  this->DisableShadowCache = 0; /*0x45e4f6*/
  this->DisableVoxelCache = 0; /*0x45e4fc*/
  this->qD2E = 0; /*0x45e502*/
  return this; /*0x45e508*/
}
} // namespace gamemd
// 0x45E520
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_545E520(ObjectTypeClass * aP1)
{
  TechnoTypeClass::Construct((int)this, aP1); /*0x45e528*/
  this->Buildup[0] = 0; /*0x45e52f*/
  *(unsigned int *)&this->__pad_1714[116] = 0; /*0x45e535*/
  *(unsigned int *)&this->__pad_1714[120] = 0; /*0x45e53b*/
  this->__pad_1714[124] = 1; /*0x45e541*/
  this->__pad_1714[125] = 0; /*0x45e548*/
  *(unsigned int *)&this->__pad_1714[112] = (void*)&VectorClass_TPoint3D_int_vftable; /*0x45e54e*/
  this->vtable0 = (void*)&BuildingTypeClass_vftable; /*0x45e558*/
  this->vtable1 = (void*)&BuildingTypeClass_vftable; /*0x45e55e*/
  this->vtable2 = (void*)&BuildingTypeClass_vftable; /*0x45e565*/
  this->vtable3 = (void*)&BuildingTypeClass_vftable; /*0x45e56c*/
  return &this->vtable0; /*0x45e575*/
}
} // namespace gamemd
// 0x45E580
namespace gamemd {
AbstractClass * * BuildingTypeClass::CleanupMembers(AbstractClass * a1, AbstractClass * a2)
{
  char BuildupLoaded; // al
  int v3; // eax
  void *v4; // eax
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF

  BuildupLoaded = (unsigned int)(this->BuildupLoaded);
  this->vtable0 = (unsigned int)((void*)&BuildingTypeClass_vftable);
  this->vtable1 = (void*)&BuildingTypeClass_vftable; /*0x45e595*/
  this->vtable2 = (void*)&BuildingTypeClass_vftable; /*0x45e59c*/
  this->vtable3 = (void*)&BuildingTypeClass_vftable; /*0x45e5a3*/
  if ( BuildupLoaded && this->Buildup[0] ) /*0x45e5ac*/
  {
    RA2_OPDEL((void *)this->Buildup[0]); /*0x45e5b7*/
    this->Buildup[0] = 0; /*0x45e5bf*/
    this->BuildupLoaded = 0; /*0x45e5c5*/
  }
  if ( this->__pad_F70[1452] && *(unsigned int *)&this->__pad_F70[1448] ) /*0x45e5d3*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1448]); /*0x45e5de*/
    *(unsigned int *)&this->__pad_F70[1448] = 0; /*0x45e5e6*/
    this->__pad_F70[1452] = 0; /*0x45e5ec*/
  }
  if ( this->__pad_F70[1400] && *(unsigned int *)&this->__pad_F70[1396] ) /*0x45e5fa*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1396]); /*0x45e605*/
    *(unsigned int *)&this->__pad_F70[1396] = 0; /*0x45e60d*/
    this->__pad_F70[1400] = 0; /*0x45e613*/
  }
  if ( this->__pad_F70[1408] && *(unsigned int *)&this->__pad_F70[1404] ) /*0x45e621*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1404]); /*0x45e62c*/
    *(unsigned int *)&this->__pad_F70[1404] = 0; /*0x45e634*/
    this->__pad_F70[1408] = 0; /*0x45e63a*/
  }
  if ( this->__pad_F70[1416] && *(unsigned int *)&this->__pad_F70[1412] ) /*0x45e648*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1412]); /*0x45e653*/
    *(unsigned int *)&this->__pad_F70[1412] = 0; /*0x45e65b*/
    this->__pad_F70[1416] = 0; /*0x45e661*/
  }
  if ( this->__pad_F70[1424] && *(unsigned int *)&this->__pad_F70[1420] ) /*0x45e66f*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1420]); /*0x45e67a*/
    *(unsigned int *)&this->__pad_F70[1420] = 0; /*0x45e682*/
    this->__pad_F70[1424] = 0; /*0x45e688*/
  }
  if ( this->__pad_F70[1432] && *(unsigned int *)&this->__pad_F70[1428] ) /*0x45e696*/
  {
    RA2_OPDEL(*(void **)&this->__pad_F70[1428]); /*0x45e6a1*/
    *(unsigned int *)&this->__pad_F70[1428] = 0; /*0x45e6a9*/
    this->__pad_F70[1432] = 0; /*0x45e6af*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->vtable0, 1); /*0x45e6b9*/
  v6 = this; /*0x45e6ce*/
  v3 = (*(int (__thiscall **)(unsigned int *, BuildingTypeClass **))(dword_A83C68 + 16))(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( v3 != -1 && v3 < unk_A83C78 && v3 < --unk_A83C78 ) /*0x45e6ed*/
  {
    do /*0x45e705*/
    {
      ++v3; /*0x45e6f5*/
      *((unsigned int *)unk_A83C6C + v3 - 1) = *((unsigned int *)unk_A83C6C + v3); /*0x45e6f9*/
    }
    while ( v3 < unk_A83C78 ); /*0x45e705*/
  }
  v4 = *(void **)&this->__pad_1714[116]; /*0x45e707*/
  *(unsigned int *)&this->__pad_1714[112] = (void*)&VectorClass_TPoint3D_int_vftable; /*0x45e70d*/
  if ( v4 && this->__pad_1714[125] ) /*0x45e71b*/
  {
    RA2_OPDEL(v4); /*0x45e724*/
    *(unsigned int *)&this->__pad_1714[116] = 0; /*0x45e72c*/
  }
  this->__pad_1714[125] = 0; /*0x45e734*/
  *(unsigned int *)&this->__pad_1714[120] = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR((int)this); /*0x45e745*/
}
} // namespace gamemd
// 0x45E970
namespace gamemd {
AbstractClass * * BuildingTypeClass::LoadRepairAnimations()
{
  int v1; // ecx
  int v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  unsigned int *v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v1 = (int)(v1);
  ProcessDataCCFileClass(); /*0x45e97c*/
  FileSystem_POWEROFF_SHP = SearchMIXFile(aPoweroffShp, 0); /*0x45e994*/
  FileSystem_WRENCH_SHP = SearchMIXFile(aWrenchShp, 0); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( g_TriggerClassCount > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = *((unsigned int *)g_TriggerTypeCount + v3); /*0x45e9c1*/
      if ( v9 <= *(char *)(v4 + 5895) ) /*0x45e9cd*/
        v9 = *(char *)(v4 + 5895); /*0x45e9cf*/
      if ( v4->q22C ) /*0x45e9d3*/
      {
        if ( v4->q1760 ) /*0x45e9df*/
        {
          if ( v4->q0A4 ) /*0x45ea23*/
          {
            RA2_OPDEL(v4->q0A4); /*0x45ea2e*/
            v4->q0A4 = 0; /*0x45ea36*/
            v4->ImageAllocated = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * v1); /*0x45ea08*/
          v4->q0A4 = SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( v4->q1761 ) /*0x45ea42*/
        {
          if ( v4->qE00 ) /*0x45ea86*/
          {
            RA2_OPDEL(v4->qE00); /*0x45ea91*/
            v4->qE00 = 0; /*0x45ea99*/
            v4->qE04 = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, (const char *)(v4 + 3676), (const char *)&off_7E1BC6 + 112 * v1); /*0x45ea6b*/
          v4->qE00 = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        v5 = v4->qE00; /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(int16_t *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          v4->qF04 = 0; /*0x45eac8*/
          v4->qF08 = v6; /*0x45eace*/
          v4->qF0C = v7; /*0x45ead4*/
        }
      }
      else if ( v4->q237 ) /*0x45eadc*/
      {
        if ( v4->q1760 && v4->q0A4 ) /*0x45eaec*/
        {
          RA2_OPDEL(v4->q0A4); /*0x45eaf7*/
          v4->q0A4 = 0; /*0x45eaff*/
          v4->ImageAllocated = 0; /*0x45eb05*/
        }
        if ( v4->q1761 && v4->qE00 ) /*0x45eb13*/
        {
          RA2_OPDEL(v4->qE00); /*0x45eb1e*/
          v4->qE00 = 0; /*0x45eb26*/
          v4->qE04 = 0; /*0x45eb2c*/
        }
        BuildingTypeClass::LoadAnimations(v4, v1); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < g_TriggerClassCount ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (**(void (__thiscall ***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x45eb5c*/
      v8 = operator new(0x20u); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        v8[3] = (unsigned int)(0);
        *v8 = (unsigned int)(&XSurface_Vtable);
        v8[1] = (unsigned int)(v9 + 16);
        v8[2] = (unsigned int)(v9 + 16);
        v8[4] = (unsigned int)(1);
        Buffer::Init(v8 + 5, 0, (v9 + 16) * (v9 + 16)); /*0x45eb95*/
        *v8 = &BSurface_Vtable; /*0x45eb9a*/
        dword_89DDC0 = (int)v8; /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }
}
} // namespace gamemd
// 0x45F230
namespace gamemd {
void* BuildingTypeClass::LoadAnimations(ObjectTypeClass * aP1)
{
  AbstractClass ** v3;
  int v4; // ecx
  int v5; // esi
  unsigned char *v6; // esi
  void *SHP; // eax
  unsigned char *v8; // esi
  void *v9; // eax
  AbstractClass ** v10;
  unsigned char *v11; // esi
  void *v12; // eax
  unsigned char *v13; // esi
  void *v14; // eax
  unsigned char *v15; // esi
  void *v16; // eax
  AbstractClass ** v17;
  unsigned char *v18; // esi
  void *v19; // eax
  const char *v20; // edi
  int v21; // eax
  int v23; // [esp+10h] [ebp-158h]
  char Filename[64]; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !this->q1761 && strlen((const char *)(&this->q16F6)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)(&this->q16F6), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f282*/
    v3 = SearchMIXFile(Source, 0); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f29a*/
      v3 = SearchMIXFile(Source, 0); /*0x45f2a5*/
    }
    this->qE00 = (unsigned int)(v3);
    if ( v3 ) /*0x45f2b2*/
    {
      v4 = 1; /*0x45f2bb*/
      v5 = v3->nextArrayIndex / 2; /*0x45f2c8*/
      v23 = v5; /*0x45f2cc*/
      if ( this->q16B7 ) /*0x45f2c2*/
      {
        v5 = this->q16F8 + 1; /*0x45f2d8*/
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
        v4 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 675) * 900.0 / (double)v23); /*0x45f2fc*/
      this->qF04 = 0; /*0x45f2fe*/
      this->qF08 = v5; /*0x45f304*/
      this->qF0C = v4; /*0x45f30a*/
    }
  }
  INIClass::GetString( /*0x45f32d*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aDeployinganim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f36a*/
    v6 = (unsigned char *)(&this->q85C2); /*0x45f375*/
    if ( this->q14E8 && this->q14E4 ) /*0x45f37f*/
    {
      RA2_OPDEL(*(void **)(&this->q8588)); /*0x45f38a*/
      this->q14E4 = 0; /*0x45f392*/
      *v6 = 0; /*0x45f398*/
    }
    SHP = LoadFileSHP(Source, (bool *)(&this->q85C2)); /*0x45f3a0*/
    this->q14E4 = SHP; /*0x45f3a7*/
    if ( !SHP ) /*0x45f3ad*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f3b3*/
      if ( *v6 && this->q14E4 ) /*0x45f3bc*/
      {
        RA2_OPDEL(*(void **)(&this->q8588)); /*0x45f3c7*/
        this->q14E4 = 0; /*0x45f3cf*/
        *v6 = 0; /*0x45f3d5*/
      }
      this->q14E4 = LoadFileSHP(Source, (bool *)(&this->q85C2)); /*0x45f3e2*/
    }
  }
  INIClass::GetString( /*0x45f405*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aRoofdeployinga,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f442*/
    v8 = (unsigned char *)(&this->q8646); /*0x45f44d*/
    if ( this->q1500 && this->q14FC ) /*0x45f457*/
    {
      RA2_OPDEL(*(void **)(&this->q8642)); /*0x45f462*/
      this->q14FC = 0; /*0x45f46a*/
      *v8 = 0; /*0x45f470*/
    }
    v9 = (void *)((unsigned int)(LoadFileSHP(Source, (bool *)(&this->q8646))));
    this->q14FC = (unsigned int)(v9);
    if ( !v9 ) /*0x45f485*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f48b*/
      if ( *v8 && this->q14FC ) /*0x45f494*/
      {
        RA2_OPDEL(*(void **)(&this->q8642)); /*0x45f49f*/
        this->q14FC = 0; /*0x45f4a7*/
        *v8 = 0; /*0x45f4ad*/
      }
      this->q14FC = (unsigned int)(LoadFileSHP(Source, (bool *)(&this->q85C2)));
    }
  }
  INIClass::GetString( /*0x45f4e1*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aDooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f51a*/
    v10 = SearchMIXFile(Source, 0); /*0x45f525*/
    this->q150C = v10; /*0x45f52c*/
    if ( !v10 ) /*0x45f532*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f538*/
      this->q150C = SearchMIXFile(Source, 0); /*0x45f548*/
    }
  }
  INIClass::GetString( /*0x45f565*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aUnderdooranim,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f5a2*/
    v11 = (unsigned char *)(&this->q8600); /*0x45f5ad*/
    if ( this->u8_14F0 && this->q14EC ) /*0x45f5b7*/
    {
      RA2_OPDEL(*(void **)(&this->q85C6)); /*0x45f5c2*/
      this->q14EC = 0; /*0x45f5ca*/
      *v11 = 0; /*0x45f5d0*/
    }
    v12 = LoadFileSHP(Source, (bool *)(&this->q8600)); /*0x45f5d8*/
    this->q14EC = v12; /*0x45f5df*/
    if ( !v12 ) /*0x45f5e5*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f5eb*/
      if ( *v11 && this->q14EC ) /*0x45f5f4*/
      {
        RA2_OPDEL(*(void **)(&this->q85C6)); /*0x45f5ff*/
        this->q14EC = 0; /*0x45f607*/
        *v11 = 0; /*0x45f60d*/
      }
      this->q14EC = SearchMIXFile(Source, 0); /*0x45f61a*/
    }
  }
  v13 = (unsigned char *)(&this->q8608); /*0x45f626*/
  if ( this->q14F8 && this->q14F4 ) /*0x45f630*/
  {
    RA2_OPDEL(*(void **)(&this->q8604)); /*0x45f63b*/
    this->q14F4 = 0; /*0x45f643*/
    *v13 = 0; /*0x45f649*/
  }
  INIClass::GetString( /*0x45f668*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aRubble,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f6a1*/
    v14 = LoadFileSHP(Source, (bool *)(&this->q8608)); /*0x45f6ac*/
    this->q14F4 = v14; /*0x45f6b3*/
    if ( !v14 ) /*0x45f6b9*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f6bf*/
      if ( *v13 && this->q14F4 ) /*0x45f6c8*/
      {
        RA2_OPDEL(*(void **)(&this->q8604)); /*0x45f6d3*/
        this->q14F4 = 0; /*0x45f6db*/
        *v13 = 0; /*0x45f6e1*/
      }
      this->q14F4 = SearchMIXFile(Source, 0); /*0x45f6ee*/
    }
  }
  INIClass::GetString( /*0x45f711*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aUnderroofdoora,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f74e*/
    v15 = (unsigned char *)(&this->q8684); /*0x45f759*/
    if ( this->q1508 && this->q1504 ) /*0x45f763*/
    {
      RA2_OPDEL(*(void **)(&this->q8680)); /*0x45f76e*/
      this->q1504 = 0; /*0x45f776*/
      *v15 = 0; /*0x45f77c*/
    }
    v16 = (void *)((unsigned int)(LoadFileSHP(Source, (bool *)(&this->q8684))));
    this->q1504 = (unsigned int)(v16);
    if ( !v16 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f797*/
      if ( *v15 && this->q1504 ) /*0x45f7a0*/
      {
        RA2_OPDEL(*(void **)(&this->q8680)); /*0x45f7ab*/
        this->q1504 = 0; /*0x45f7b3*/
        *v15 = 0; /*0x45f7b9*/
      }
      this->q1504 = (unsigned int)(SearchMIXFile(Source, 0));
    }
  }
  INIClass::GetString( /*0x45f7e9*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aSpecialzoverla,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f822*/
    v17 = SearchMIXFile(Source, 0); /*0x45f82d*/
    this->q1510 = v17; /*0x45f834*/
    if ( !v17 ) /*0x45f83a*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f840*/
      this->q1510 = SearchMIXFile(Source, 0); /*0x45f850*/
    }
  }
  INIClass::GetString( /*0x45f86d*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)aBibshape,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( strlen(Filename) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f8aa*/
    v18 = (unsigned char *)(&this->q8704); /*0x45f8b5*/
    if ( this->q151C && this->q1518 ) /*0x45f8bf*/
    {
      RA2_OPDEL(*(void **)(&this->q8700)); /*0x45f8ca*/
      this->q1518 = 0; /*0x45f8d2*/
      *v18 = 0; /*0x45f8d8*/
    }
    v19 = LoadFileSHP(Source, (bool *)(&this->q8704)); /*0x45f8e0*/
    this->q1518 = v19; /*0x45f8e7*/
    if ( !v19 ) /*0x45f8ed*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f8f3*/
      if ( *v18 && this->q1518 ) /*0x45f8fc*/
      {
        RA2_OPDEL(*(void **)(&this->q8700)); /*0x45f907*/
        this->q1518 = 0; /*0x45f90f*/
        *v18 = 0; /*0x45f915*/
      }
      this->q1518 = SearchMIXFile(Source, 0); /*0x45f922*/
    }
  }
  INIClass::GetString( /*0x45f945*/
    (uint8_t ***)&CCINIClass_INI_Art,
    (uint8_t *)(&this->u32_C84),
    (uint8_t *)g_INI_Key_Image,
    &g_INI_DefaultBuffer,
    Filename,
    64);
  if ( !this->q22C || aP1 == -1 ) /*0x45f95c*/
    v20 = ::Ext; /*0x45f97a*/
  else
    v20 = (const char *)(&off_7E1BC6 + 28 * aP1); /*0x45f96e*/
  strcpy(Ext, v20); /*0x45f993*/
  if ( strlen(Filename) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)(&this->u32_C84), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, aP1); /*0x45f9e0*/
  strncpy(&this->q176A, Source, 0x13u); /*0x45f9f3*/
  if ( !this->q1760 ) /*0x45f9f8*/
  {
    v21 = SearchMIXFile(Source, 0); /*0x45fa0b*/
    this->q0A4 = v21; /*0x45fa12*/
    if ( !v21 ) /*0x45fa18*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa1e*/
      strncpy(&this->q176A, Source, 0x13u); /*0x45fa2b*/
      this->q0A4 = SearchMIXFile(Source, 0); /*0x45fa3e*/
    }
    if ( !this->q0A4 ) /*0x45fa44*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa50*/
      strncpy(&this->q176A, Source, 0x13u); /*0x45fa5d*/
      this->q0A4 = SearchMIXFile(Source, 0); /*0x45fa70*/
    }
  }
  return BuildingTypeClass::LoadVoxel(); /*0x45fa7d*/
}
} // namespace gamemd
// 0x45FA90
namespace gamemd {
void BuildingTypeClass::LoadVoxel()
{
  char *v2; // eax
  void *v3; // esi
  File *v4; // eax
  unsigned int *FileVXL; // eax
  void *v6; // esi
  File *v7; // eax
  unsigned int *FileHVA; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  unsigned char *v12; // eax
  void *v13; // esi
  File *v14; // eax
  unsigned int *v15; // eax
  void *v16; // esi
  File *v17; // eax
  unsigned int *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  CCFileClass v22; // [esp+8h] [ebp-2C4h] BYREF
  int v23[3]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  CCFileClass v25; // [esp+74h] [ebp-258h] BYREF
  int v26[3]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  CCFileClass v28; // [esp+E0h] [ebp-1ECh] BYREF
  int v29[3]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( this->TurretAnimIsVoxel || this->BarrelAnimIsVoxel ) /*0x45faa4*/
  {
    strcpy(Destination, &this->__pad_F70[576]); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(&v25, Buffer); /*0x45fb3b*/
      if ( (uint8_t)CCFileClass::Open(&v25, 0) ) /*0x45fb48*/
      {
        v3 = (void *)this->BarrelVoxel_2[0]; /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          WaveClass::Destroy((WaveClass *)this->BarrelVoxel_2[0]); /*0x45fb61*/
          RA2_OPDEL(v3); /*0x45fb67*/
        }
        v4 = (File *)RA2_OPNEW(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          FileVXL = File::LoadFileVXL(v4, (int)&v25, 0); /*0x45fb85*/
        else
          FileVXL = 0; /*0x45fb8c*/
        this->BarrelVoxel_2[0] = (int)FileVXL; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(&v22, Buffer); /*0x45fbbf*/
        v6 = (void *)this->ChargerTurrets[0]; /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release((String *)this->ChargerTurrets[0]); /*0x45fbd0*/
          RA2_OPDEL(v6); /*0x45fbd6*/
        }
        v7 = (File *)RA2_OPNEW(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          FileHVA = File::LoadFileHVA(v7, (int)&v22); /*0x45fbf3*/
        else
          FileHVA = 0; /*0x45fbfa*/
        this->ChargerTurrets[0] = (int)FileHVA; /*0x45fbfe*/
        if ( FileHVA && !*(unsigned char *)FileHVA ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo((VoxelSection *)this->BarrelVoxel_2[0], 0, 0); /*0x45fc12*/
          Matrix::Scale((Matrix *)this->ChargerTurrets[0], *(float *)(Info + 12)); /*0x45fc21*/
        }
        *(unsigned int *)v22.__pad_0 = (void*)&CCFileClass_vftable; /*0x45fc2a*/
        v24 = 0; /*0x45fc32*/
        Vector::Clear((int)v23); /*0x45fc36*/
        *(unsigned int *)v22.__pad_0 = &off_7E1668; /*0x45fc3f*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fc43*/
      }
      v21 = _strupr(off_8194A8); /*0x45fc55*/
      v10 = _strupr(v32); /*0x45fc5e*/
      v11 = strstr(v10, v21); /*0x45fc67*/
      if ( v11 ) /*0x45fc71*/
      {
        *v11 = 66; /*0x45fc73*/
        v12 = v11 + 1; /*0x45fc76*/
        *v12++ = 65; /*0x45fc77*/
        *v12++ = 82; /*0x45fc7b*/
        *v12 = 76; /*0x45fc7f*/
        v12[1] = 0; /*0x45fc82*/
      }
      *(unsigned int *)v25.__pad_0 = (void*)&CCFileClass_vftable; /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      *(unsigned int *)v25.__pad_0 = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x45fca8*/
    }
    else if ( this->BarrelAnimIsVoxel ) /*0x45fcaf*/
    {
      strncpy(Destination, this->__pad_1714, 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(&v28, Buffer); /*0x45fd01*/
    if ( (uint8_t)CCFileClass::Open(&v28, 0) ) /*0x45fd0e*/
    {
      v13 = (void *)this->ChargerTurrets[1]; /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy((WaveClass *)this->ChargerTurrets[1]); /*0x45fd27*/
        RA2_OPDEL(v13); /*0x45fd2d*/
      }
      v14 = (File *)RA2_OPNEW(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)&v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      this->ChargerTurrets[1] = (int)v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(&v22, Buffer); /*0x45fd88*/
      v16 = (void *)this->ChargerTurrets[2]; /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release((String *)this->ChargerTurrets[2]); /*0x45fd99*/
        RA2_OPDEL(v16); /*0x45fd9f*/
      }
      v17 = (File *)RA2_OPNEW(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)&v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      this->ChargerTurrets[2] = (int)v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(unsigned char *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo((VoxelSection *)this->ChargerTurrets[1], 0, 0); /*0x45fddb*/
          Matrix::Scale((Matrix *)this->ChargerTurrets[2], *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      *(unsigned int *)v22.__pad_0 = (void*)&CCFileClass_vftable; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      *(unsigned int *)v22.__pad_0 = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x45fe0c*/
    }
    *(unsigned int *)v28.__pad_0 = (void*)&CCFileClass_vftable; /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    *(unsigned int *)v28.__pad_0 = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x45fe3d*/
  }
}
} // namespace gamemd
// 0x464B30
namespace gamemd {
int BuildingTypeClass::UpdatePower()
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edx
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
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // edx
  Checksummer *v54; // [esp+Ch] [ebp+4h]

  BuildingTypeClass::ProcessPower((int)this, &v54->crcValue); /*0x464b39*/
  Checksummer::Add_double(v54, this->GateCloseDelay[0], this->GateCloseDelay[1]); /*0x464b4e*/
  Power::TimerProcess(this->LightVisibility); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->LightBlueTint); /*0x464b94*/
  Checksum::AddString((Checksum *)v54, (uint8_t *)this->__pad_E5C); /*0x464ba2*/
  Checksum::AddString((Checksum *)v54, (uint8_t *)this->__pad_E88); /*0x464bb0*/
  Power::TimerProcess(this->Adjacent); /*0x464bbe*/
  Power::TimerProcess(this->Factory[0]); /*0x464bcc*/
  Power::TimerProcess(this->PowerBonus); /*0x464bda*/
  Power::TimerProcess(this->PowerDrain); /*0x464be8*/
  Power::TimerProcess(this->ExtraPowerBonus); /*0x464bf6*/
  Power::TimerProcess(this->ExtraPowerDrain); /*0x464c04*/
  Power::TimerProcess(this->Foundation[0]); /*0x464c12*/
  Power::TimerProcess(this->Height); /*0x464c20*/
  Power::TimerProcess(this->OccupyHeight); /*0x464c2e*/
  Power::TimerProcess(this->MidPoint); /*0x464c3c*/
  Power::TimerProcess(this->DoorStages); /*0x464c4a*/
  Checksummer::Add_Buffer(v54, (uint8_t *)this->BuildingAnimFrame, 72); /*0x464c5a*/
  Checksummer::Add_Buffer(v54, (uint8_t *)&this->BuildingAnim[12], 1428); /*0x464c6d*/
  Power::TimerProcess(*(unsigned int *)&this->__pad_F70[1392]); /*0x464c7b*/
  v2 = Power::TimerProcess(*(unsigned int *)&this->__pad_F70[1444]); /*0x464c89*/
  IDA_LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  Power::FlagProcess((Power *)v54, v2); /*0x464c97*/
  IDA_LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  Power::FlagProcess((Power *)v54, v3); /*0x464ca5*/
  IDA_LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  v5 = Power::FlagProcess((Power *)v54, v4); /*0x464cb3*/
  IDA_LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  Power::FlagProcess((Power *)v54, v5); /*0x464cc1*/
  IDA_LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  Power::FlagProcess((Power *)v54, v6); /*0x464ccf*/
  IDA_LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  v8 = Power::FlagProcess((Power *)v54, v7); /*0x464cdd*/
  IDA_LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  Power::FlagProcess((Power *)v54, v8); /*0x464ceb*/
  IDA_LOBYTE(v9) = this->Bib; /*0x464cf0*/
  Power::FlagProcess((Power *)v54, v9); /*0x464cf9*/
  IDA_LOBYTE(v10) = this->Wall; /*0x464cfe*/
  v11 = Power::FlagProcess((Power *)v54, v10); /*0x464d07*/
  IDA_LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  Power::FlagProcess((Power *)v54, v11); /*0x464d15*/
  IDA_LOBYTE(v12) = this->Powered; /*0x464d1a*/
  Power::FlagProcess((Power *)v54, v12); /*0x464d23*/
  IDA_LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  v14 = Power::FlagProcess((Power *)v54, v13); /*0x464d31*/
  IDA_LOBYTE(v14) = this->__pad_1624[128]; /*0x464d36*/
  Power::FlagProcess((Power *)v54, v14); /*0x464d3f*/
  IDA_LOBYTE(v15) = this->__pad_1624[129]; /*0x464d44*/
  Power::FlagProcess((Power *)v54, v15); /*0x464d4d*/
  IDA_LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  v17 = Power::FlagProcess((Power *)v54, v16); /*0x464d5b*/
  IDA_LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  Power::FlagProcess((Power *)v54, v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  IDA_LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  v19 = Power::FlagProcess((Power *)v54, v18); /*0x464d85*/
  IDA_LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  Power::FlagProcess((Power *)v54, v19); /*0x464d93*/
  IDA_LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  Power::FlagProcess((Power *)v54, v20); /*0x464da1*/
  IDA_LOBYTE(v21) = this->Cloning; /*0x464da6*/
  v22 = Power::FlagProcess((Power *)v54, v21); /*0x464daf*/
  IDA_LOBYTE(v22) = this->Grinding; /*0x464db4*/
  Power::FlagProcess((Power *)v54, v22); /*0x464dbd*/
  IDA_LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  Power::FlagProcess((Power *)v54, v23); /*0x464dcb*/
  IDA_LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  v25 = Power::FlagProcess((Power *)v54, v24); /*0x464dd9*/
  IDA_LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  Power::FlagProcess((Power *)v54, v25); /*0x464de7*/
  IDA_LOBYTE(v26) = this->Flat; /*0x464dec*/
  Power::FlagProcess((Power *)v54, v26); /*0x464df5*/
  IDA_LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  v28 = Power::FlagProcess((Power *)v54, v27); /*0x464e03*/
  IDA_LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  Power::FlagProcess((Power *)v54, v28); /*0x464e11*/
  IDA_LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  Power::FlagProcess((Power *)v54, v29); /*0x464e1f*/
  IDA_LOBYTE(v30) = this->Gate; /*0x464e24*/
  v31 = Power::FlagProcess((Power *)v54, v30); /*0x464e2d*/
  IDA_LOBYTE(v31) = this->SAM; /*0x464e32*/
  Power::FlagProcess((Power *)v54, v31); /*0x464e3b*/
  IDA_LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  Power::FlagProcess((Power *)v54, v32); /*0x464e49*/
  IDA_LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  v34 = Power::FlagProcess((Power *)v54, v33); /*0x464e57*/
  IDA_LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  Power::FlagProcess((Power *)v54, v34); /*0x464e65*/
  IDA_LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  Power::FlagProcess((Power *)v54, v35); /*0x464e73*/
  IDA_LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  v37 = Power::FlagProcess((Power *)v54, v36); /*0x464e81*/
  IDA_LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  Power::FlagProcess((Power *)v54, v37); /*0x464e8f*/
  IDA_LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  Power::FlagProcess((Power *)v54, v38); /*0x464e9d*/
  IDA_LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  v40 = Power::FlagProcess((Power *)v54, v39); /*0x464eab*/
  IDA_LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  Power::FlagProcess((Power *)v54, v40); /*0x464eb9*/
  IDA_LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  Power::FlagProcess((Power *)v54, v41); /*0x464ec7*/
  IDA_LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  v43 = Power::FlagProcess((Power *)v54, v42); /*0x464ed5*/
  IDA_LOBYTE(v43) = this->Armory; /*0x464eda*/
  Power::FlagProcess((Power *)v54, v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  IDA_LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  Power::FlagProcess((Power *)v54, v44); /*0x464f0d*/
  IDA_LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  Power::FlagProcess((Power *)v54, v45); /*0x464f1b*/
  IDA_LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  v47 = Power::FlagProcess((Power *)v54, v46); /*0x464f29*/
  IDA_LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  Power::FlagProcess((Power *)v54, v47); /*0x464f37*/
  IDA_LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  Power::FlagProcess((Power *)v54, v48); /*0x464f45*/
  Checksum::AddString((Checksum *)v54, (uint8_t *)this->__pad_1714); /*0x464f53*/
  Checksummer::Add_double(v54, *(unsigned int *)&this->__pad_1714[20], *(unsigned int *)&this->__pad_1714[24]); /*0x464f68*/
  Checksummer::Add_Buffer(v54, (uint8_t *)&this->__pad_1714[28], 12); /*0x464f78*/
  Checksummer::Add_Buffer(v54, (uint8_t *)&this->__pad_1714[40], 12); /*0x464f88*/
  Checksummer::Add_Buffer(v54, (uint8_t *)&this->__pad_1714[52], 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer(v54, (uint8_t *)&this->__pad_1714[64], 12); /*0x464fa8*/
  IDA_LOBYTE(v49) = this->__pad_1714[83]; /*0x464fad*/
  Power::FlagProcess((Power *)v54, v49); /*0x464fb6*/
  IDA_LOBYTE(v50) = this->__pad_1714[84]; /*0x464fbb*/
  Power::FlagProcess((Power *)v54, v50); /*0x464fc4*/
  IDA_LOBYTE(v51) = this->__pad_1714[85]; /*0x464fc9*/
  Power::FlagProcess((Power *)v54, v51); /*0x464fd2*/
  Power::TimerProcess(*(unsigned int *)&this->__pad_1714[108]); /*0x464fe0*/
  Power::TimerProcess(this->BarrelStartPitch); /*0x464fee*/
  IDA_LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return Power::FlagProcess((Power *)v54, v52); /*0x465001*/
}
} // namespace gamemd
// 0x465010
namespace gamemd {
AbstractClass * * BuildingTypeClass::SaveLoad_Prefix()
{
  TechnoTypeClass *v1; // esi
  int v2; // edi
  int result; // eax
  char *v4; // ecx
  int v5; // ebp
  int v6; // eax
  unsigned int *v7; // edx
  TechnoTypeClass *v8; // eax
  int SpeedType; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  TechnoTypeClass *v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( v13[1].gapE4[1382] && *(int *)((char *)&v13->ImpactLandSound + 1) ) /*0x465025*/
  {
    RA2_OPDEL(*(void **)((char *)&v13->ImpactLandSound + 1)); /*0x465030*/
    *(int *)((char *)&v1->ImpactLandSound + 1) = 0; /*0x465038*/
    IDA_BYTE1(v1->CrashingSound) = 0; /*0x46503e*/
  }
  if ( v1[1].gapE4[800] && *(unsigned int *)&v1[1].gapE4[796] ) /*0x46504c*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[796]); /*0x465057*/
    *(unsigned int *)&v1[1].gapE4[796] = 0; /*0x46505f*/
    v1[1].gapE4[800] = 0; /*0x465065*/
  }
  if ( v1[1].gapE4[748] && *(unsigned int *)&v1[1].gapE4[744] ) /*0x465073*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[744]); /*0x46507e*/
    *(unsigned int *)&v1[1].gapE4[744] = 0; /*0x465086*/
    v1[1].gapE4[748] = 0; /*0x46508c*/
  }
  if ( v1[1].gapE4[756] && *(unsigned int *)&v1[1].gapE4[752] ) /*0x46509a*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[752]); /*0x4650a5*/
    *(unsigned int *)&v1[1].gapE4[752] = 0; /*0x4650ad*/
    v1[1].gapE4[756] = 0; /*0x4650b3*/
  }
  if ( v1[1].gapE4[764] && *(unsigned int *)&v1[1].gapE4[760] ) /*0x4650c1*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[760]); /*0x4650cc*/
    *(unsigned int *)&v1[1].gapE4[760] = 0; /*0x4650d4*/
    v1[1].gapE4[764] = 0; /*0x4650da*/
  }
  if ( v1[1].gapE4[772] && *(unsigned int *)&v1[1].gapE4[768] ) /*0x4650e8*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[768]); /*0x4650f3*/
    *(unsigned int *)&v1[1].gapE4[768] = 0; /*0x4650fb*/
    v1[1].gapE4[772] = 0; /*0x465101*/
  }
  if ( v1[1].gapE4[780] && *(unsigned int *)&v1[1].gapE4[776] ) /*0x46510f*/
  {
    RA2_OPDEL(*(void **)&v1[1].gapE4[776]); /*0x46511a*/
    *(unsigned int *)&v1[1].gapE4[776] = 0; /*0x465122*/
    v1[1].gapE4[780] = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((BuildingTypeClass *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = &v1[1].gapE4[1416]; /*0x465167*/
      if ( v1 != (TechnoTypeClass *)-6020 ) /*0x46516f*/
      {
        *(unsigned int *)&v1[1].gapE4[1420] = 0; /*0x465171*/
        *(unsigned int *)&v1[1].gapE4[1424] = 0; /*0x465174*/
        v1[1].gapE4[1428] = 1; /*0x465177*/
        v1[1].gapE4[1429] = 0; /*0x46517b*/
        *(unsigned int *)v4 = (void*)&VectorClass_TPoint3D_int_vftable; /*0x46517e*/
      }
      (*(void (__thiscall **)(char *, int, unsigned int))(*(unsigned int *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
  LABEL_32:
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        SpeedType = v1->SpeedType; /*0x4651fb*/
        *(int *)((char *)&v1->EnterGrinderSound + 1) = 0; /*0x465210*/
        SpeedType *= 120; /*0x465219*/
        *(int *)((char *)&v1->ImpactWaterSound + 1) = (int)&dword_89C900 + SpeedType; /*0x465228*/
        v1->EliteAirstrikeRechargeTime = (int)&dword_89D368 + SpeedType; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)((char *)&v1->VoiceUndeploy + 1)); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->LeadershipRating); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->NavalTargeting); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->LandTargeting); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->BuildTimeMultiplier); /*0x465278*/
        BuildingTypeClass::LoadVoxel((BuildingTypeClass *)v1); /*0x46527f*/
        *(int *)((char *)&v1->ImpactLandSound + 1) = 0; /*0x465284*/
        IDA_BYTE1(v1->CrashingSound) = 0; /*0x46528a*/
        *(unsigned int *)&v1[1].gapE4[796] = 0; /*0x465290*/
        v1[1].gapE4[800] = 0; /*0x465296*/
        *(unsigned int *)&v1[1].gapE4[744] = 0; /*0x46529c*/
        v1[1].gapE4[748] = 0; /*0x4652a2*/
        *(unsigned int *)&v1[1].gapE4[752] = 0; /*0x4652a8*/
        v1[1].gapE4[756] = 0; /*0x4652ae*/
        *(unsigned int *)&v1[1].gapE4[760] = 0; /*0x4652b4*/
        v1[1].gapE4[764] = 0; /*0x4652ba*/
        *(unsigned int *)&v1[1].gapE4[768] = 0; /*0x4652c0*/
        v1[1].gapE4[772] = 0; /*0x4652c6*/
        *(unsigned int *)&v1[1].gapE4[776] = 0; /*0x4652cc*/
        v1[1].gapE4[780] = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations((int)v1, unk_A8B230[130].uniqueId); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = 0; /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(unsigned int *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (__stdcall **)(int, int *, int, unsigned int))(v6 + 12))(v2, &v10, 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (int *)((char *)v13->parent_gap + *(unsigned int *)&v1[1].gapE4[1420]); /*0x4651cb*/
          v8 = (TechnoTypeClass *)&v13->parent_gap[3]; /*0x4651cd*/
          ++v5; /*0x4651d0*/
          *v7 = v10; /*0x4651d1*/
          v13 = v8; /*0x4651d7*/
          v7[1] = v11; /*0x4651db*/
          v7[2] = v12; /*0x4651e2*/
          if ( v5 >= v14 ) /*0x4651eb*/
            goto LABEL_32; /*0x4651eb*/
        }
      }
    }
  }
  return result; /*0x4652ed*/
}
} // namespace gamemd
// 0x4653C0
namespace gamemd {
BuildingTypeClass * * BuildingTypeClass::FindOrCreate()
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( unk_A83C78 <= 0 ) /*0x4653f1*/
  {
  LABEL_6:
    v3 = RA2_OPNEW(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
      return BuildingTypeClass::ConstructFull(v3, Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)unk_A83C6C + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= unk_A83C78 ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((unsigned int *)unk_A83C6C + v2); /*0x46542f*/
}
} // namespace gamemd
// 0x465AF0
namespace gamemd {
void BuildingTypeClass::IsPowered()
{
  int result; // eax

  IDA_LOBYTE(result) = this->__pad_1714[78]; /*0x465af3*/
  if ( (unsigned char)result ) /*0x465afb*/
  {
    result = this->Buildup[0]; /*0x465afd*/
    if ( result ) /*0x465b05*/
    {
      RA2_OPDEL((void *)this->Buildup[0]); /*0x465b08*/
      this->Buildup[0] = 0; /*0x465b10*/
      this->BuildupLoaded = 0; /*0x465b1a*/
    }
  }
  return result; /*0x465b21*/
}
} // namespace gamemd
// 0x50B760
namespace gamemd {
int BuildingTypeClass::ProcessData(unsigned int * a2, short * a3)
{
  int *v5; // ebx
  int v6; // ebx
  int v7; // ebp
  int16_t *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !*(unsigned int *)&unk_A8B238 ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = a2; /*0x50b783*/
  v11 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a2); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
  v7 = 1 << this->TargetSpecialThreatCoefficient; /*0x50b7b8*/
  v8 = a3; /*0x50b7ba*/
  v9 = *a3 - v11 - 1; /*0x50b7cd*/
  if ( v9 < *a3 + v12 + 1 ) /*0x50b7d0*/
  {
    while ( 1 ) /*0x50b7e2*/
    {
      v10 = v8[1] - v11 - 1; /*0x50b7e2*/
      if ( v10 < v8[1] + v6 + 1 ) /*0x50b7e5*/
        break; /*0x50b7e5*/
  LABEL_8:
      if ( ++v9 >= *v8 + v12 + 1 ) /*0x50b82d*/
        return 0; /*0x50b82d*/
    }
    while ( 1 ) /*0x50b7eb*/
    {
      IDA_LOWORD(a2) = v9; /*0x50b7eb*/
      IDA_HIWORD(a2) = v10; /*0x50b7f6*/
      if ( (v7 & *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 55)) != 0 ) /*0x50b806*/
        return 1; /*0x50b806*/
      if ( ++v10 >= a3[1] + v6 + 1 ) /*0x50b81b*/
      {
        v8 = a3; /*0x50b81d*/
        goto LABEL_8; /*0x50b81d*/
      }
    }
  }
  return 0; /*0x50b772*/
}
} // namespace gamemd
// 0x594010
namespace gamemd {
int BuildingTypeClass::CheckPlacementArea(ObjectClass * aP1, ObjectClass * aP2)
{
  unsigned short *v3; // edi
  int16_t v4; // ax
  int result; // eax
  int16_t v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // ebp
  int v13; // esi
  Cell *v14; // eax

  v3 = aP1; /*0x594015*/
  v4 = *aP1; /*0x594027*/
  IDA_HIWORD(aP1) = aP1[2]; /*0x59402a*/
  IDA_LOWORD(aP1) = v4; /*0x594035*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1, 1); /*0x59403a*/
  if ( (unsigned char)result )
  {
    v6 = v3[2]; /*0x594052*/
    IDA_LOWORD(aP1) = *((unsigned int *)v3 + 2) + *(unsigned int *)v3 - 1; /*0x59405a*/
    IDA_HIWORD(aP1) = v6; /*0x594065*/
    result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1, 1); /*0x59406a*/
    if ( (unsigned char)result )
    {
      v7 = *((unsigned int *)v3 + 1); /*0x59407a*/
      v8 = *((unsigned int *)v3 + 3); /*0x59407d*/
      IDA_LOWORD(aP1) = *v3; /*0x594080*/
      IDA_HIWORD(aP1) = v7 + v8 - 1; /*0x594095*/
      result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1, 1); /*0x59409a*/
      if ( (unsigned char)result )
      {
        v9 = *((unsigned int *)v3 + 1); /*0x5940b2*/
        v10 = *((unsigned int *)v3 + 3); /*0x5940b5*/
        IDA_LOWORD(aP1) = *((unsigned int *)v3 + 2) + *(unsigned int *)v3 - 1; /*0x5940b8*/
        IDA_HIWORD(aP1) = v9 + v10 - 1; /*0x5940cb*/
        result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1, 1); /*0x5940d0*/
        if ( (unsigned char)result )
        {
          v11 = *((unsigned int *)v3 + 1); /*0x5940dd*/
          if ( v11 >= *((unsigned int *)v3 + 3) + v11 ) /*0x5940e9*/
          {
  LABEL_16:
            IDA_LOBYTE(result) = 1; /*0x594170*/
            return result; /*0x594177*/
          }
          v12 = aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v13 = *(unsigned int *)v3; /*0x5940f3*/
            result = *(unsigned int *)v3 + *((unsigned int *)v3 + 2); /*0x5940f8*/
            if ( *(unsigned int *)v3 < result ) /*0x5940fc*/
              break; /*0x5940fc*/
  LABEL_15:
            if ( ++v11 >= *((unsigned int *)v3 + 3) + *((unsigned int *)v3 + 1) ) /*0x59416e*/
              goto LABEL_16; /*0x59416e*/
          }
          while ( 1 )
          {
            IDA_LOWORD(aP1) = v13; /*0x594104*/
            IDA_HIWORD(aP1) = v11; /*0x59410b*/
            result = g_MissionQueueFrame.localVariables[163]
                   ? *(unsigned int *)(80 * ((int16_t)v13 + g_MapCellWidth * (int16_t)v11)
                               + g_MissionQueueFrame.localVariables[163]
                               + 56)
                   : -1;
            if ( (void *)result != this->vtable2 && result != v12 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP1); /*0x594147*/
            result = Cell::IsEmpty(v14); /*0x59414e*/
            if ( !(unsigned char)result ) /*0x594155*/
              break; /*0x594155*/
            ++v13; /*0x59415c*/
            result = *(unsigned int *)v3 + *((unsigned int *)v3 + 2); /*0x59415d*/
            if ( v13 >= result ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  IDA_LOBYTE(result) = 0; /*0x59417d*/
  return result; /*0x594170*/
}
} // namespace gamemd
// 0x5FEC70
namespace gamemd {
OverlayTypeClass * * BuildingTypeClass::FindOrCreate2()
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] <= 0 ) /*0x5feca1*/
  {
  LABEL_6:
    v3 = (OverlayTypeClass *)RA2_OPNEW(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
      return OverlayTypeClass::OverlayTypeClass(v3, Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(unsigned int **)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v2); /*0x5fecdf*/
}
} // namespace gamemd
// 0x644890
namespace gamemd {
ParticleSystemTypeClass * * BuildingTypeClass::LoadOrGet()
{
  int v2; // esi
  OverlayTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 <= 0 ) /*0x6448c1*/
  {
  LABEL_6:
    v3 = (OverlayTypeClass *)RA2_OPNEW(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
      return OverlayTypeClass::Construct(v3, Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= (int)stru_A83D50.SuperClass_field_0x28 ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(unsigned int **)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * v2); /*0x6448ff*/
}
} // namespace gamemd
// 0x644BE0
namespace gamemd {
unsigned int * BuildingTypeClass::Construct(AbstractClass * aP1)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int *)this, aP1); /*0x644beb*/
  this->WalkRate = 0; /*0x644bf8*/
  this->IdleRate = 0; /*0x644bfe*/
  *(unsigned int *)this->VeteranAbilities = 0; /*0x644c04*/
  *(unsigned int *)&this->EliteAbilities[2] = 0; /*0x644c10*/
  *(unsigned int *)&this->VeteranAbilities[4] = 1; /*0x644c19*/
  *(unsigned int *)&this->VeteranAbilities[8] = 1; /*0x644c1f*/
  *(unsigned int *)&this->VeteranAbilities[12] = 0; /*0x644c25*/
  *(unsigned int *)&this->VeteranAbilities[16] = 1; /*0x644c2b*/
  *(unsigned int *)&this->EliteAbilities[6] = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850((BuildingTypeClass *)&this->EliteAbilities[10], 0, 0); /*0x644c37*/
  this->MyEffectivenessCoefficient[1] = 10; /*0x644c3c*/
  this->MyEffectivenessCoefficient[0] = 0; /*0x644c43*/
  *(unsigned int *)&this->EliteAbilities[10] = (void*)&TypeList_RGBClass_vftable; /*0x644c46*/
  this->TargetEffectivenessCoefficient[1] = 0; /*0x644c4c*/
  IDA_LOBYTE(this->TargetSpecialThreatCoefficient_2[0]) = 0; /*0x644c66*/
  IDA_BYTE1(this->TargetSpecialThreatCoefficient_2[0]) = 0; /*0x644c6c*/
  IDA_BYTE1(this->AccelerationFactor[1]) = -1; /*0x644c72*/
  IDA_BYTE2(this->AccelerationFactor[1]) = -1; /*0x644c78*/
  this->TargetSpecialThreatCoefficient_2[1] = 0; /*0x644c81*/
  this->TargetStrengthCoefficient_2[0] = 1; /*0x644c87*/
  this->TargetStrengthCoefficient_2[1] = 0; /*0x644c8d*/
  this->TargetDistanceCoefficient[0] = 0; /*0x644c93*/
  this->TargetDistanceCoefficient[1] = 0; /*0x644c99*/
  this->ThreatAvoidanceCoefficient[0] = 1; /*0x644c9f*/
  this->ThreatAvoidanceCoefficient[1] = 0; /*0x644ca5*/
  this->SlowdownDistance = 0; /*0x644cab*/
  this->align_2FC[0] = 0; /*0x644cb1*/
  this->unknown_double_300[0] = 0; /*0x644cb7*/
  this->unknown_double_300[1] = 0; /*0x644cbd*/
  IDA_LOBYTE(this->AccelerationFactor[0]) = 0; /*0x644cc3*/
  IDA_BYTE1(this->AccelerationFactor[0]) = 0; /*0x644cc9*/
  IDA_BYTE2(this->AccelerationFactor[0]) = 0; /*0x644ccf*/
  IDA_HIBYTE(this->AccelerationFactor[0]) = 4; /*0x644cd5*/
  IDA_LOBYTE(this->AccelerationFactor[1]) = 0; /*0x644cdc*/
  IDA_HIBYTE(this->AccelerationFactor[1]) = 0; /*0x644ce2*/
  this->CloakingSpeed = -1; /*0x644ce8*/
  this->DebrisTypes[0] = -1; /*0x644cee*/
  this->vtable0 = (void*)&ParticleTypeClass_vftable; /*0x644cf4*/
  this->vtable1 = (void*)&ParticleTypeClass_vftable; /*0x644cfa*/
  this->vtable2 = (void*)&ParticleTypeClass_vftable; /*0x644d01*/
  this->vtable3 = (void*)&ParticleTypeClass_vftable; /*0x644d08*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] < *(int *)&stru_A83D50.__pad_3C[20] /*0x644d43*/
    || (stru_A83D50.__pad_3C[25] || !*(unsigned int *)&stru_A83D50.__pad_3C[20])
    && *(int *)&stru_A83D50.__pad_3C[32] > 0
    && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*(unsigned int *)&stru_A83D50.__pad_3C[12] + 8))(
         &stru_A83D50.__pad_3C[12],
         *(unsigned int *)&stru_A83D50.__pad_3C[20] + *(unsigned int *)&stru_A83D50.__pad_3C[32],
         0) )
  {
    v3 = (*(unsigned int *)&stru_A83D50.__pad_3C[28])++; /*0x644d50*/
    *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v3) = this; /*0x644d5f*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x644d96*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x644da3*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x644db2*/
  }
  this->IsLogic = 0; /*0x644db5*/
  return &this->vtable0; /*0x644dbd*/
}
} // namespace gamemd
// 0x645430
namespace gamemd {
ParticleTypeClass * * BuildingTypeClass::FindOrCreateEx()
{
  int v2; // esi
  BuildingTypeClass *v3; // eax
  unsigned int *v4; // eax
  int v6; // ecx
  unsigned int *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x64544f*/
  {
  LABEL_5:
    v3 = (BuildingTypeClass *)RA2_OPNEW(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&stru_A83D50.__pad_3C[28] > 0 ) /*0x6454a0*/
    {
      for ( i = *(unsigned int **)&stru_A83D50.__pad_3C[16]; (unsigned int *)*i != v4; ++i ) /*0x6454a2*/
      {
        if ( ++v6 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (char *)(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/
}
} // namespace gamemd
// 0x7171A0
namespace gamemd {
void* BuildingTypeClass::ProcessPower(AbstractClass * aP1)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
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
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx

  AbstractTypeClass::ProcessPower((char *)this, aP1); /*0x7171a9*/
  Checksummer::Add_double(this->q2F0, this->u32_2F4); /*0x7171be*/
  Power::TimerProcess(this->q2F8); /*0x7171cc*/
  Checksummer::Add_double(this->unknown_double_300, this->q304); /*0x7171e1*/
  Checksummer::Add_double(this->AccelerationFactor, this->q30C); /*0x7171f6*/
  Power::TimerProcess(this->CloakingSpeed); /*0x717204*/
  Power::TimerProcess(this->q324); /*0x717212*/
  Power::TimerProcess(this->q5D4); /*0x717220*/
  Power::TimerProcess(this->u32_3F8); /*0x71722e*/
  Power::TimerProcess(this->q340); /*0x71723c*/
  Checksummer::Add_Buffer((unsigned int *)aP1, (uint8_t *)(&this->q1504), 16); /*0x71724c*/
  Checksummer::Add_double(this->unknown_double_360, this->q364); /*0x717261*/
  Checksummer::Add_double(this->unknown_double_368, this->q36C); /*0x717276*/
  Checksummer::Add_double(this->Weight, this->q374); /*0x71728b*/
  Checksummer::Add_double(this->PhysicalSize, this->u32_37C); /*0x7172a0*/
  Checksummer::Add_double(this->Size, this->q384); /*0x7172b5*/
  Checksummer::Add_double(this->SizeLimit, this->q38C); /*0x7172ca*/
  IDA_LOBYTE(v3) = this->HoverAttack; /*0x7172cf*/
  Power::FlagProcess(aP1, v3); /*0x7172d8*/
  v4 = Power::TimerProcess(this->unknown_int_398); /*0x7172e6*/
  IDA_LOBYTE(v4) = this->ImmuneToVeins; /*0x7172eb*/
  Power::FlagProcess(aP1, v4); /*0x7172f4*/
  IDA_LOBYTE(v5) = this->TiberiumHeal; /*0x7172f9*/
  Power::FlagProcess(aP1, v5); /*0x717302*/
  IDA_LOBYTE(v6) = this->TargetLaser; /*0x717307*/
  Power::FlagProcess(aP1, v6); /*0x717310*/
  Checksummer::Add_double(this->RollAngle, this->u32_3A4); /*0x717325*/
  Checksummer::Add_double(this->PitchAngle, this->u32_3B4); /*0x71733a*/
  Checksummer::Add_double(this->PitchSpeed, this->q3AC); /*0x71734f*/
  Power::TimerProcess(this->FlightLevel); /*0x71735d*/
  Power::TimerProcess(this->BuildLimit); /*0x71736b*/
  Power::TimerProcess(this->Category); /*0x717379*/
  Checksummer::Add_double(this->DeployTime, this->u32_3CC); /*0x71738e*/
  Power::TimerProcess(this->FireAngle); /*0x71739c*/
  Power::TimerProcess(this->PipScale); /*0x7173aa*/
  Power::TimerProcess(this->ptr_424); /*0x7173b8*/
  Power::TimerProcess(this->q440); /*0x7173c6*/
  Power::TimerProcess(this->q478); /*0x7173d4*/
  Power::TimerProcess(this->ptr_494); /*0x7173e2*/
  Power::TimerProcess(this->q4B0); /*0x7173f0*/
  Power::TimerProcess(this->q4CC); /*0x7173fe*/
  Power::TimerProcess(this->u32_4E8); /*0x71740c*/
  Power::TimerProcess(this->q504); /*0x71741a*/
  Power::TimerProcess(this->q520); /*0x717428*/
  Power::TimerProcess(this->VoxelAnimList_Embed); /*0x717436*/
  Power::TimerProcess(this->q7A4); /*0x717444*/
  Power::TimerProcess(this->MovementZone); /*0x717452*/
  Power::TimerProcess(this->GuardRange); /*0x717460*/
  Power::TimerProcess(this->MinDebris); /*0x71746e*/
  Power::TimerProcess(this->MaxDebris); /*0x71747c*/
  Power::TimerProcess(this->Passengers); /*0x71748a*/
  Power::TimerProcess(this->Sight); /*0x717498*/
  Power::TimerProcess(this->Cost); /*0x7174a6*/
  Power::TimerProcess(this->Soylent); /*0x7174b4*/
  Power::TimerProcess(this->TechLevel); /*0x7174c2*/
  Power::TimerProcess(this->q648); /*0x7174d0*/
  Power::TimerProcess(this->IdleRate); /*0x7174de*/
  Power::TimerProcess(this->ThreatPosed); /*0x7174ec*/
  Power::TimerProcess(this->Points); /*0x7174fa*/
  Power::TimerProcess(this->Speed); /*0x717508*/
  Power::TimerProcess(this->SpeedType); /*0x717516*/
  Power::TimerProcess(this->Ammo); /*0x717524*/
  Power::TimerProcess(this->AirRangeBonus); /*0x717532*/
  Power::TimerProcess(this->OwnerFlags); /*0x717540*/
  Power::TimerProcess(this->AIBasePlanningSide); /*0x71754e*/
  Power::TimerProcess(this->RotCount); /*0x71755c*/
  Power::TimerProcess(this->ROT); /*0x71756a*/
  Power::TimerProcess(this->TurretOffset); /*0x717578*/
  Power::TimerProcess(this->Points2); /*0x717586*/
  Power::TimerProcess(this->u32_73C); /*0x717594*/
  Power::TimerProcess(this->ptr_758); /*0x7175a2*/
  Power::TimerProcess(this->ShadowIndex); /*0x7175b0*/
  v7 = Power::TimerProcess(this->Storage); /*0x7175be*/
  IDA_LOBYTE(v7) = this->IsTrain; /*0x7175c3*/
  Power::FlagProcess(aP1, v7); /*0x7175cc*/
  IDA_LOBYTE(v8) = this->IsDropship; /*0x7175d1*/
  Power::FlagProcess(aP1, v8); /*0x7175da*/
  IDA_LOBYTE(v9) = this->ToProtect; /*0x7175df*/
  v10 = Power::FlagProcess(aP1, v9); /*0x7175e8*/
  IDA_LOBYTE(v10) = this->Disableable; /*0x7175ed*/
  Power::FlagProcess(aP1, v10); /*0x7175f6*/
  IDA_LOBYTE(v11) = this->Unbuildable; /*0x7175fb*/
  Power::FlagProcess(aP1, v11); /*0x717604*/
  IDA_LOBYTE(v12) = this->DoubleOwned; /*0x717609*/
  v13 = Power::FlagProcess(aP1, v12); /*0x717612*/
  IDA_LOBYTE(v13) = this->Invisible; /*0x717617*/
  Power::FlagProcess(aP1, v13); /*0x717620*/
  IDA_LOBYTE(v14) = this->RadarVisible; /*0x717625*/
  Power::FlagProcess(aP1, v14); /*0x71762e*/
  IDA_LOBYTE(v15) = this->HasPrimary; /*0x717633*/
  v16 = Power::FlagProcess(aP1, v15); /*0x71763c*/
  IDA_LOBYTE(v16) = this->Sensors; /*0x717641*/
  Power::FlagProcess(aP1, v16); /*0x71764a*/
  IDA_LOBYTE(v17) = this->Nominal; /*0x71764f*/
  Power::FlagProcess(aP1, v17); /*0x717658*/
  IDA_LOBYTE(v18) = this->DontScore; /*0x71765d*/
  v19 = Power::FlagProcess(aP1, v18); /*0x717666*/
  IDA_LOBYTE(v19) = this->DamageSelf; /*0x71766b*/
  Power::FlagProcess(aP1, v19); /*0x717674*/
  IDA_LOBYTE(v20) = this->Turret; /*0x717679*/
  Power::FlagProcess(aP1, v20); /*0x717682*/
  IDA_LOBYTE(v21) = this->qCCC; /*0x717687*/
  v22 = Power::FlagProcess(aP1, v21); /*0x717690*/
  IDA_LOBYTE(v22) = this->qCCD; /*0x717695*/
  Power::FlagProcess(aP1, v22); /*0x71769e*/
  IDA_LOBYTE(v23) = this->u32_CCF; /*0x7176a3*/
  Power::FlagProcess(aP1, v23); /*0x7176ac*/
  IDA_LOBYTE(v24) = this->IntList_A_Items; /*0x7176b1*/
  v25 = Power::FlagProcess(aP1, v24); /*0x7176ba*/
  IDA_LOBYTE(v25) = this->Naval; /*0x7176bf*/
  Power::FlagProcess(aP1, v25); /*0x7176c8*/
  IDA_LOBYTE(v26) = this->Remapable; /*0x7176cd*/
  Power::FinalizeDrain(aP1, v26); /*0x7176d6*/
  IDA_LOBYTE(v27) = this->Cloakable; /*0x7176db*/
  v28 = Power::FinalizeDrain(aP1, v27); /*0x7176e4*/
  IDA_LOBYTE(v28) = this->qCD4; /*0x7176e9*/
  Power::FlagProcess(aP1, v28); /*0x7176f2*/
  IDA_LOBYTE(v29) = this->qD14; /*0x7176f7*/
  Power::FlagProcess(aP1, v29); /*0x717700*/
  IDA_LOBYTE(v30) = this->qD15; /*0x717705*/
  v31 = Power::FlagProcess(aP1, v30); /*0x71770e*/
  IDA_LOBYTE(v31) = this->qD20; /*0x717713*/
  Power::FlagProcess(aP1, v31); /*0x71771c*/
  IDA_LOBYTE(v32) = this->qD21; /*0x717721*/
  Power::FlagProcess(aP1, v32); /*0x71772a*/
  IDA_LOBYTE(v33) = this->qD23; /*0x71772f*/
  v34 = Power::FlagProcess(aP1, v33); /*0x717738*/
  IDA_LOBYTE(v34) = this->qD24; /*0x71773d*/
  Power::FlagProcess(aP1, v34); /*0x717746*/
  IDA_LOBYTE(v35) = this->qD25; /*0x71774b*/
  Power::FlagProcess(aP1, v35); /*0x717754*/
  IDA_LOBYTE(v36) = this->qD26; /*0x717759*/
  v37 = Power::FlagProcess(aP1, v36); /*0x717762*/
  IDA_LOBYTE(v37) = this->qDBE; /*0x717767*/
  Power::FlagProcess(aP1, v37); /*0x717770*/
  IDA_LOBYTE(v38) = this->qDBF; /*0x717775*/
  Power::FlagProcess(aP1, v38); /*0x71777e*/
  IDA_LOBYTE(v39) = this->MobileFire; /*0x717783*/
  v40 = Power::FlagProcess(aP1, v39); /*0x71778c*/
  IDA_LOBYTE(v40) = this->OpportunityFire; /*0x717791*/
  Power::FlagProcess(aP1, v40); /*0x71779a*/
  IDA_LOBYTE(v41) = this->DistributedFire; /*0x71779f*/
  return Power::FlagProcess(aP1, v41); /*0x7177ad*/
}
} // namespace gamemd
// 0x7178C0
namespace gamemd {
unsigned int * BuildingTypeClass::GetUpgradeOffset(unsigned int * a2)
{
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edi
  void *v11; // ebp
  void *v12; // edi
  int v13; // eax
  int v14; // ebx
  double v16; // [esp+0h] [ebp-2Ch]
  int v17[3]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v18[2]; // [esp+24h] [ebp-8h] BYREF

  v5 = v4; /*0x7178c4*/
  if ( *(unsigned char *)(v4 + 1980) ) /*0x7178c6*/
  {
    v6 = *(unsigned int *)(v4 + 1968); /*0x7178d4*/
    v7 = *(unsigned int *)(v4 + 1972); /*0x7178da*/
    v18[0] = v6; /*0x7178e1*/
    v18[1] = v7; /*0x7178e6*/
    v8 = (int *)World::ToScreen(v17, v18, a2); /*0x7178fb*/
    v9 = *v8; /*0x717900*/
    v10 = v8[1]; /*0x717905*/
    v17[0] = 10 * *(unsigned int *)(v5 + 1976); /*0x71791b*/
    __asm { fild [esp+2Ch+var_14] } /*0x717921*/
    v11 = (void *)(v9 - v17[0]); /*0x717927*/
    v12 = (void *)(v10 - v17[0]); /*0x717929*/
    __asm /*0x71792b*/
    {
      fld st
      fmul st, st(1)
      fadd st, st
      fstp [esp+2Ch+var_2C]; double
      fstp st
    }
    Math::Sqrt(v16); /*0x717936*/
    __asm { fmul ds:dbl_7F4FC0 } /*0x71793b*/
    IDA_LOWORD(v13) = Math::RoundToInt(a3); /*0x717944*/
    if ( *(int *)(v5 + 1976) >= 0 ) /*0x717951*/
      v14 = -v13; /*0x717957*/
    else
      v14 = v13; /*0x717953*/
    this->vtable0 = v11; /*0x71795f*/
    this->vtable1 = v12; /*0x717961*/
    this->vtable2 = (void *)v14; /*0x717966*/
    return &this->vtable0; /*0x717959*/
  }
  else
  {
    this->vtable0 = *(void **)(v4 + 1968); /*0x71797f*/
    this->vtable1 = *(void **)(v4 + 1972); /*0x717984*/
    this->vtable2 = *(void **)(v4 + 1976); /*0x71798b*/
    return &this->vtable0; /*0x717971*/
  }
}
} // namespace gamemd
// 0x746000
namespace gamemd {
int BuildingTypeClass::IsPlacementValid(IUnknown * aP1, IUnknown * aP2)
{
  signed int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( (*((int (__fastcall **)(BuildingTypeClass *))this->vtable0 + 114))(this) < 0 /*0x746030*/
    || !MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], aP1, aP2, 0, 0, 0, 0) )
  {
    return 1; /*0x746030*/
  }
  if ( *aP1 == *aP2 && aP1[1] == aP2[1] ) /*0x746050*/
    return 0; /*0x746059*/
  v4 = abs32(aP2[1] - aP1[1]); /*0x74606b*/
  v5 = abs32(*aP2 - *aP1); /*0x746078*/
  if ( v5 <= v4 ) /*0x74607c*/
    v5 = v4; /*0x74607e*/
  if ( v5 == 1 ) /*0x746083*/
    return 0; /*0x74608c*/
  if ( v5 >= 12 /*0x7460ad*/
    || !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], aP1, 1)
    || !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], aP2, 1) )
  {
    return 1; /*0x7460f7*/
  }
  v6 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], aP2) + 80) >> 8; /*0x7460cd*/
  IDA_LOBYTE(v6) = v6 & 1; /*0x7460d0*/
  return Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], aP1, aP2, (int)this, 0, v6, 0) > 15; /*0x746052*/
}
} // namespace gamemd
// 0x7480D0
namespace gamemd {
AbstractClass * * BuildingTypeClass::FindOrCreateAlt()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x7480ec*/
    return 0; /*0x74814f*/
  v2 = 0; /*0x7480fd*/
  if ( g_CrateCount <= 0 ) /*0x748101*/
  {
  LABEL_6:
    if ( RA2_OPNEW(0xE78u) ) /*0x74812b*/
      return UnitTypeClass::UnitTypeClass(Source); /*0x748141*/
    return 0; /*0x748135*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_UnitTypeCount2 + v2) + 36), Source) ) /*0x74811a*/
  {
    if ( ++v2 >= g_CrateCount ) /*0x748124*/
      goto LABEL_6; /*0x748124*/
  }
  return *((unsigned int *)g_UnitTypeCount2 + v2); /*0x74813f*/
}
} // namespace gamemd
// 0x41C500
namespace gamemd {
char BuildingTypeClass::Enqueue(int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x41c50c*/
    return 0; /*0x41c50c*/
  v3 = (char *)RA2_OPNEW(8 * (a2 + v3->vtable3)); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
  for ( i = 0; i < v3->vtable2; *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x41c535*/
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (unsigned int *)(*(unsigned int *)v3 + 8 * i++); /*0x41c542*/
    *(unsigned int *)&v3[v5] = *v6; /*0x41c547*/
  }
  RA2_OPDEL(*(void **)v3); /*0x41c55b*/
  v7 = a2 + v3->vtable3; /*0x41c566*/
  *(unsigned int *)v3 = v3; /*0x41c568*/
  v3->vtable3 = v7; /*0x41c56a*/
  v3->uniqueId = 0; /*0x41c56d*/
  return 1; /*0x41c574*/
}
} // namespace gamemd
// 0x41C590
namespace gamemd {
size_t BuildingTypeClass::Dequeue(BuildingClass * aP1)
{
  int result; // eax
  char *vtable0; // edi
  int v5; // ebx
  int vtable1; // ecx
  int v7; // esi

  result = (int)this->vtable1; /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !IDA_LOBYTE(this->vtable3) ) /*0x41c59e*/
    {
      qsort(this->vtable0, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction); /*0x41c5b0*/
      this->uniqueId = 0; /*0x41c5b8*/
      IDA_LOBYTE(this->vtable3) = 1; /*0x41c5bf*/
    }
    vtable0 = (char *)this->vtable0; /*0x41c5c9*/
    v5 = *aP1; /*0x41c5cb*/
    vtable1 = (int)this->vtable1; /*0x41c5cd*/
    if ( vtable1 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(unsigned int *)&vtable0[8 * (vtable1 / 2)]; /*0x41c5db*/
      if ( v7 <= v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (int)&vtable0[8 * (vtable1 / 2)]; /*0x41c603*/
        vtable0 += 8 * (vtable1 / 2) + 8; /*0x41c5eb*/
        vtable1 += -1 - vtable1 / 2; /*0x41c5f3*/
      }
      else
      {
        vtable1 /= 2; /*0x41c5e5*/
      }
      if ( vtable1 <= 0 ) /*0x41c5f7*/
        return 0; /*0x41c5f7*/
    }
  }
  return result; /*0x41c59a*/
}
} // namespace gamemd
// 0x45E7B0
namespace gamemd {
int BuildingTypeClass::FindIndexByName()
{
  int v2; // esi

  if ( !this ) /*0x45e7b6*/
    return -1; /*0x45e7b6*/
  v2 = 0; /*0x45e7bd*/
  if ( unk_A83C78 <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((char *)(*((unsigned int *)unk_A83C6C + v2) + 36), (char *)this) ) /*0x45e7da*/
  {
    if ( ++v2 >= unk_A83C78 ) /*0x45e7e4*/
      return -1; /*0x45e7e4*/
  }
  return v2; /*0x45e7e6*/
}
} // namespace gamemd
// 0x45ECE0
namespace gamemd {
int BuildingTypeClass::GetMaxPips()
{
  int result; // eax
  int v2; // ecx
  int Storage; // ecx

  result = 60 * stru_81926C.Type[this->Foundation[0]] / 8; /*0x45ed02*/
  if ( this->PipScale[0] == 2 ) /*0x45ed08*/
  {
    if ( this->Weeder ) /*0x45ed14*/
    {
      v2 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6096); /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      Storage = this->Storage; /*0x45ed38*/
      if ( Storage >= 0 ) /*0x45ed40*/
      {
        if ( Storage <= result ) /*0x45ed47*/
          return Storage; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
  else if ( this->PipScale[0] != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue((TechnoTypeClass *)this); /*0x45ed0f*/
  }
  return result; /*0x45ed30*/
}
} // namespace gamemd
// 0x464AF0
namespace gamemd {
unsigned int * BuildingTypeClass::GetSizeInLeptons(unsigned int * a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = this->Foundation[0]; /*0x464af0*/
  v3 = dword_89DDB8 * this->Height; /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)stru_81926C.Type + v2); /*0x464b0b*/
  v5 = *(int *)((char *)dword_819310 + v2); /*0x464b11*/
  *a2 = v4 << 8; /*0x464b1d*/
  a2[1] = v5 << 8; /*0x464b22*/
  a2[2] = v3; /*0x464b27*/
  return a2; /*0x464b2a*/
}
} // namespace gamemd
// 0x465300
namespace gamemd {
int BuildingTypeClass::SaveLoad_Prefix_0()
{
  int result; // eax
  int v2; // edx
  int v3; // ebp
  int i; // edi
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  TechnoTypeClass *v7; // [esp+18h] [ebp+4h]
  unsigned int *v8; // [esp+1Ch] [ebp+8h]
  int *v9; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0(v7, v8, v9, v5, v6); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v8; /*0x465322*/
    v9 = *(int **)&v7[1].gapE4[1424]; /*0x46532e*/
    result = (*(int (__stdcall **)(unsigned int *, int **, int, unsigned int))(v2 + 16))(v8, &v9, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( (int)v9 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(unsigned int *, int, int, unsigned int))(*v8 + 16))( /*0x465355*/
                     v8,
                     i + *(unsigned int *)&v7[1].gapE4[1420],
                     12,
                     0);
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= (int)v9 ) /*0x465366*/
            return 0; /*0x465366*/
        }
      }
    }
  }
  return result; /*0x46536a*/
}
} // namespace gamemd
// 0x465380
namespace gamemd {
int BuildingTypeClass::GetClassIdentifier()
{
  unsigned int *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x465386*/
    return -2147467261; /*0x465388*/
  *v2 = -1366608933; /*0x465396*/
  v2[1] = 298976796; /*0x46539e*/
  v2[2] = 1610654892; /*0x4653a7*/
  v2[3] = unk_7E95CC; /*0x4653b0*/
  return 0; /*0x46538d*/
}
} // namespace gamemd
// 0x465D90
namespace gamemd {
int BuildingTypeClass::GetTypeIdentifier()
{
  return 7; /*0x465d95*/
}
} // namespace gamemd
// 0x465DA0
namespace gamemd {
int BuildingTypeClass::GetObjectSize()
{
  return 6040; /*0x465da5*/
}
} // namespace gamemd
// 0x465DB0
namespace gamemd {
int BuildingTypeClass::GetAuxField()
{
  return this->ArrayIndex; /*0x465db6*/
}
} // namespace gamemd
// 0x465DC0
namespace gamemd {
int BuildingTypeClass::ddtor()
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingTypeClass::CleanupMembers(this); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    RA2_OPDEL(this); /*0x465dd0*/
  return (int)this; /*0x465dda*/
}
} // namespace gamemd
// 0x474A90
namespace gamemd {
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString( /*0x474aba*/
    (INIClass *)this,
    aP1,
    a2,
    *(char **)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * aP3) + 772),
    Destination,
    32);
  v4 = 0; /*0x474ac4*/
  if ( *(int *)stru_B054D0.__tail_10 <= 0 ) /*0x474ac8*/
    return aP3; /*0x474b06*/
  v5 = *(unsigned int *)&stru_B054D0.m_1[3]; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(char **)(*(unsigned int *)(v5 + 4 * v4) + 772), Destination) == 0; /*0x474ae6*/
    v5 = *(unsigned int *)&stru_B054D0.m_1[3]; /*0x474ae8*/
    if ( v6 && *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= *(int *)stru_B054D0.__tail_10 ) /*0x474b04*/
      return aP3; /*0x474b04*/
  }
  return v4; /*0x474b08*/
}
} // namespace gamemd
// 0x478850
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{
  void *v4; // ebx
  unsigned char *v5; // eax
  int v6; // ecx
  int v8; // eax
  unsigned char *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x478859*/
  this->vtable1 = 0; /*0x47885d*/
  this->vtable2 = (void *)a2; /*0x478860*/
  IDA_LOBYTE(this->vtable3) = 1; /*0x478863*/
  IDA_BYTE1(this->vtable3) = 0; /*0x478867*/
  this->vtable0 = (void*)&VectorClass_RGBClass_vftable; /*0x47886a*/
  if ( !a2 ) /*0x478870*/
    return &this->vtable0; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    v8 = RA2_OPNEW(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        v9 = (unsigned char *)(v8 + 2); /*0x4788b5*/
        v10 = a2; /*0x4788b8*/
        do /*0x4788c5*/
        {
          *(v9 - 2) = 0; /*0x4788b9*/
          *(v9 - 1) = 0; /*0x4788bc*/
          *v9 = 0; /*0x4788bf*/
          v9 += 3; /*0x4788c1*/
          --v10; /*0x4788c4*/
        }
        while ( v10 ); /*0x4788c5*/
      }
      v4 = (void *)v8; /*0x4788c7*/
    }
    this->vtable1 = v4; /*0x4788c9*/
    IDA_BYTE1(this->vtable3) = 1; /*0x4788cc*/
    return &this->vtable0; /*0x4788cc*/
  }
  if ( a2 - 1 >= 0 ) /*0x47887f*/
  {
    v5 = (unsigned char *)(a3 + 2); /*0x478881*/
    v6 = a2; /*0x478884*/
    do /*0x478891*/
    {
      *(v5 - 2) = 0; /*0x478885*/
      *(v5 - 1) = 0; /*0x478888*/
      *v5 = 0; /*0x47888b*/
      v5 += 3; /*0x47888d*/
      --v6; /*0x478890*/
    }
    while ( v6 ); /*0x478891*/
  }
  this->vtable1 = (void *)a3; /*0x478893*/
  return &this->vtable0; /*0x478898*/
}
} // namespace gamemd
// 0x4C9680
namespace gamemd {
int BuildingTypeClass::GetPowerOutput(ObjectClass * aP1)
{
  int result; // eax
  int16_t v3; // dx

  result = aP1; /*0x4c9680*/
  if ( aP1 >= 127 ) /*0x4c9687*/
    result = 127; /*0x4c9689*/
  IDA_LOBYTE(v3) = 0; /*0x4c968e*/
  IDA_HIBYTE(v3) = result; /*0x4c9690*/
  IDA_LOWORD(this->abstractFlags) = v3; /*0x4c9692*/
  return result; /*0x4c9696*/
}
} // namespace gamemd
// 0x747370
namespace gamemd {
int BuildingTypeClass::FindIndex()
{
  int v2; // esi

  if ( !this ) /*0x747376*/
    return -1; /*0x747376*/
  v2 = 0; /*0x74737d*/
  if ( unk_A83CF0 <= 0 ) /*0x747381*/
    return -1; /*0x7473a6*/
  while ( _strcmpi((char *)(*((unsigned int *)unk_A83CE4 + v2) + 36), (char *)this) ) /*0x74739a*/
  {
    if ( ++v2 >= unk_A83CF0 ) /*0x7473a4*/
      return -1; /*0x7473a4*/
  }
  return v2; /*0x7473a6*/
}
} // namespace gamemd