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

  TechnoTypeClass::ReadINI(Source, 0); /*0x45dda1*/
  this->ArrayIndex = -1; /*0x45ddaf*/
  this->qDFC = 0; /*0x45ddb5*/
  this->qE00 = 0; /*0x45ddbb*/
  this->qE04 = 0; /*0x45ddc1*/
  this->qE08 = 0; /*0x45ddc7*/
  this->HalfDamageSmokeLocation1 = dword_89C8D0; /*0x45ddd3*/
  this->qE10 = dword_89C8D4; /*0x45ddda*/
  this->u32_E14 = dword_89C8D8; /*0x45dde9*/
  this->HalfDamageSmokeLocation2 = dword_89C8D0; /*0x45ddf2*/
  this->u32_E1C = dword_89C8D4; /*0x45ddfa*/
  this->u32_E20 = dword_89C8D8; /*0x45de03*/
  this->GateCloseDelay = 0; /*0x45de06*/
  this->qE2C = 0; /*0x45de0c*/
  this->LightVisibility = 5000; /*0x45de12*/
  this->LightIntensity = 0; /*0x45de21*/
  this->LightRedTint = 1000000; /*0x45de27*/
  this->LightGreenTint = 1000000; /*0x45de2d*/
  this->LightBlueTint = 1000000; /*0x45de33*/
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
  this->ExitCoord = 0; /*0x45de9a*/
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
  this->IsBaseDefense = 0; /*0x45e225*/
  this->CloakRadiusInCells = 20; /*0x45e22b*/
  this->ConcentricRadialIndicator = 0; /*0x45e232*/
  this->PsychicDetectionRadius = 0; /*0x45e238*/
  this->BarrelStartPitch = 64; /*0x45e23e*/
  this->DemandLoad = 0; /*0x45e248*/
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
  this->PreventsPlacementOverlap = operator new(0xCu); /*0x45e2ba*/
  this->q1791 = 1; /*0x45e2c6*/
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
  this->ArrayIndex = v6; /*0x45e35c*/
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
  TechnoTypeClass::Construct(aP1); /*0x45e528*/
  this->qE00 = 0; /*0x45e52f*/
  *(&this->q2586) = 0; /*0x45e535*/
  *(&this->q2587) = 0; /*0x45e53b*/
  this->CostRatePerFrame = 1; /*0x45e541*/
  this->q1791 = 0; /*0x45e548*/
  return this; /*0x45e575*/
}
} // namespace gamemd
// 0x45E580
namespace gamemd {
AbstractClass * * BuildingTypeClass::CleanupMembers(AbstractClass * a1, AbstractClass * a2)
{
  char v2; // al
  int v3; // eax
  void *v4; // eax

  v2 = this->qE04; /*0x45e587*/
  if ( v2 && *(&this->q1646) ) /*0x45e5ac*/
  {
    RA2_OPDEL(*(&this->q1646)); /*0x45e5b7*/
    *(&this->q1646) = 0; /*0x45e5bf*/
    this->qE04 = 0; /*0x45e5c5*/
  }
  if ( this->BibShapeLoaded && *(&this->q21C0) ) /*0x45e5d3*/
  {
    RA2_OPDEL(*(&this->q21C0)); /*0x45e5de*/
    *(&this->q21C0) = 0; /*0x45e5e6*/
    this->BibShapeLoaded = 0; /*0x45e5ec*/
  }
  if ( this->q14E8 && *(&this->q2147) ) /*0x45e5fa*/
  {
    RA2_OPDEL(*(&this->q2147)); /*0x45e605*/
    *(&this->q2147) = 0; /*0x45e60d*/
    this->q14E8 = 0; /*0x45e613*/
  }
  if ( this->q14F0 && *(&this->q2149) ) /*0x45e621*/
  {
    RA2_OPDEL(*(&this->q2149)); /*0x45e62c*/
    *(&this->q2149) = 0; /*0x45e634*/
    this->q14F0 = 0; /*0x45e63a*/
  }
  if ( this->q14F8 && *(&this->q2181) ) /*0x45e648*/
  {
    RA2_OPDEL(*(&this->q2181)); /*0x45e653*/
    *(&this->q2181) = 0; /*0x45e65b*/
    this->q14F8 = 0; /*0x45e661*/
  }
  if ( this->RoofDeployingAnimLoaded && *(&this->q2183) ) /*0x45e66f*/
  {
    RA2_OPDEL(*(&this->q2183)); /*0x45e67a*/
    *(&this->q2183) = 0; /*0x45e682*/
    this->RoofDeployingAnimLoaded = 0; /*0x45e688*/
  }
  if ( this->UnderRoofDoorAnimLoaded && *(&this->q2185) ) /*0x45e696*/
  {
    RA2_OPDEL(*(&this->q2185)); /*0x45e6a1*/
    *(&this->q2185) = 0; /*0x45e6a9*/
    this->UnderRoofDoorAnimLoaded = 0; /*0x45e6af*/
  }
  AbstractClass::AnnounceExpiredPointer(1); /*0x45e6b9*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83C68 + 16))(&dword_A83C68, &this); /*0x45e6d2*/
  if ( v3 != -1 && v3 < g_TriggerClassCount && v3 < --g_TriggerClassCount ) /*0x45e6ed*/
  {
    do /*0x45e705*/
    {
      ++v3; /*0x45e6f5*/
      *((unsigned int *)g_TriggerTypeCount + v3 - 1) = *((unsigned int *)g_TriggerTypeCount + v3); /*0x45e6f9*/
    }
    while ( v3 < g_TriggerClassCount ); /*0x45e705*/
  }
  v4 = (void *)(*(&this->q2586));
  if ( v4 && this->q1791 ) /*0x45e71b*/
  {
    RA2_OPDEL(v4); /*0x45e724*/
    *(&this->q2586) = 0; /*0x45e72c*/
  }
  this->q1791 = 0; /*0x45e734*/
  *(&this->q2587) = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR(); /*0x45e745*/
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
        *v8 = &XSurface_Vtable; /*0x45eb78*/
        v8[1] = v9 + 16; /*0x45eb80*/
        v8[2] = v9 + 16; /*0x45eb8b*/
        v8[4] = 1; /*0x45eb8e*/
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
  int v17; // eax
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
    v9 = (unsigned int)(LoadFileSHP(Source, (bool *)(&this->q8646)));
    this->q14FC = v9; /*0x45f47f*/
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
    v16 = (unsigned int)(LoadFileSHP(Source, (bool *)(&this->q8684)));
    this->q1504 = v16; /*0x45f78b*/
    if ( !v16 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f797*/
      if ( *v15 && this->q1504 ) /*0x45f7a0*/
      {
        RA2_OPDEL(*(void **)(&this->q8680)); /*0x45f7ab*/
        this->q1504 = 0; /*0x45f7b3*/
        *v15 = 0; /*0x45f7b9*/
      }
      this->q1504 = SearchMIXFile(Source, 0); /*0x45f7c6*/
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
  unsigned int *v4; // eax
  unsigned int *File; // eax
  void *v6; // esi
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  unsigned char *v12; // eax
  void *v13; // esi
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  void *v16; // esi
  unsigned int *v17; // eax
  unsigned int *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  unsigned int v22[22]; // [esp+8h] [ebp-2C4h] BYREF
  unsigned char v23[12]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  unsigned int v25[22]; // [esp+74h] [ebp-258h] BYREF
  unsigned char v26[12]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  unsigned int v28[22]; // [esp+E0h] [ebp-1ECh] BYREF
  unsigned char v29[12]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( this->TurretAnimIsVoxel || this->BarrelAnimIsVoxel ) /*0x45faa4*/
  {
    strcpy(Destination, (const char *)(&this->AltCameo8)); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(v25, Buffer); /*0x45fb3b*/
      if ( CCFileClass::Open(v25, 0) ) /*0x45fb48*/
      {
        v3 = *(void **)(&this->ThreatAvoidanceCoefficient4); /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          WaveClass::Destroy(this->q0B8); /*0x45fb61*/
          RA2_OPDEL(v3); /*0x45fb67*/
        }
        v4 = operator new(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          File = File::LoadFileVXL(v4, (int)v25, 0); /*0x45fb85*/
        else
          File = 0; /*0x45fb8c*/
        this->q0B8 = File; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(v22, Buffer); /*0x45fbbf*/
        v6 = *(void **)(&this->ThreatAvoidanceCoefficient8); /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release(*(void ***)(&this->ThreatAvoidanceCoefficient8)); /*0x45fbd0*/
          RA2_OPDEL(v6); /*0x45fbd6*/
        }
        v7 = operator new(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          v8 = File::LoadFileHVA(v7, (int)v22); /*0x45fbf3*/
        else
          v8 = 0; /*0x45fbfa*/
        this->ChargerTurrets = v8; /*0x45fbfe*/
        if ( v8 && !*(unsigned char *)v8 ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo(*(unsigned int **)(&this->ThreatAvoidanceCoefficient4), 0, 0); /*0x45fc12*/
          Matrix::Scale(*(unsigned int **)(&this->ThreatAvoidanceCoefficient8), *(float *)(Info + 12)); /*0x45fc21*/
        }
        v24 = 0; /*0x45fc32*/
        Vector::Clear((int)v23); /*0x45fc36*/
        v22[0] = &off_7E1668; /*0x45fc3f*/
        BufferIOFileClass::Dtor(v22); /*0x45fc43*/
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
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      v25[0] = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor(v25); /*0x45fca8*/
    }
    else if ( this->BarrelAnimIsVoxel ) /*0x45fcaf*/
    {
      strncpy(Destination, (const char *)(&this->u32_9388), 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(v28, Buffer); /*0x45fd01*/
    if ( CCFileClass::Open(v28, 0) ) /*0x45fd0e*/
    {
      v13 = *(void **)(&this->u32_4C2); /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy(this->q0C0); /*0x45fd27*/
        RA2_OPDEL(v13); /*0x45fd2d*/
      }
      v14 = operator new(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      this->q0C0 = v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(v22, Buffer); /*0x45fd88*/
      v16 = *(void **)(&this->u32_4C6); /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release(*(void ***)(&this->u32_4C6)); /*0x45fd99*/
        RA2_OPDEL(v16); /*0x45fd9f*/
      }
      v17 = operator new(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      this->q0C4 = v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(unsigned char *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo(*(unsigned int **)(&this->u32_4C2), 0, 0); /*0x45fddb*/
          Matrix::Scale(*(unsigned int **)(&this->u32_4C6), *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      v22[0] = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor(v22); /*0x45fe0c*/
    }
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    v28[0] = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor(v28); /*0x45fe3d*/
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
  int *v54; // [esp+Ch] [ebp+4h]

  BuildingTypeClass::ProcessPower(v54); /*0x464b39*/
  Checksummer::Add_double(this->GateCloseDelay, this->qE2C); /*0x464b4e*/
  Power::TimerProcess(this->LightVisibility); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->LightBlueTint); /*0x464b94*/
  Checksum::AddString((unsigned int *)v54, (uint8_t *)&this->q5BC6); /*0x464ba2*/
  Checksum::AddString((unsigned int *)v54, (uint8_t *)&this->u32_5D00); /*0x464bb0*/
  Power::TimerProcess(this->FoundationOutside); /*0x464bbe*/
  Power::TimerProcess(this->BuildingTypeClass_field_ED8); /*0x464bcc*/
  Power::TimerProcess(this->DoorStages); /*0x464bda*/
  Power::TimerProcess(this->BuildingAnimFrame_6); /*0x464be8*/
  Power::TimerProcess(this->BuildingAnim_0x15); /*0x464bf6*/
  Power::TimerProcess(this->Upgrades); /*0x464c04*/
  Power::TimerProcess(this->qEF0); /*0x464c12*/
  Power::TimerProcess(this->DeployingAnimLoaded); /*0x464c20*/
  Power::TimerProcess(this->UnderDoorAnim); /*0x464c2e*/
  Power::TimerProcess(this->UnderDoorAnimLoaded); /*0x464c3c*/
  Power::TimerProcess(this->Rubble); /*0x464c4a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)&this->u32_3C10, 72); /*0x464c5a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)&this->u32_3D30, 1428); /*0x464c6d*/
  Power::TimerProcess(this->q14E0); /*0x464c7b*/
  v2 = Power::TimerProcess(this->SpecialZOverlayZAdjust); /*0x464c89*/
  IDA_LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  Power::FlagProcess(v54, v2); /*0x464c97*/
  IDA_LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  Power::FlagProcess(v54, v3); /*0x464ca5*/
  IDA_LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  v5 = Power::FlagProcess(v54, v4); /*0x464cb3*/
  IDA_LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  Power::FlagProcess(v54, v5); /*0x464cc1*/
  IDA_LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  Power::FlagProcess(v54, v6); /*0x464ccf*/
  IDA_LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  v8 = Power::FlagProcess(v54, v7); /*0x464cdd*/
  IDA_LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  Power::FlagProcess(v54, v8); /*0x464ceb*/
  IDA_LOBYTE(v9) = this->Bib; /*0x464cf0*/
  Power::FlagProcess(v54, v9); /*0x464cf9*/
  IDA_LOBYTE(v10) = this->Wall; /*0x464cfe*/
  v11 = Power::FlagProcess(v54, v10); /*0x464d07*/
  IDA_LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  Power::FlagProcess(v54, v11); /*0x464d15*/
  IDA_LOBYTE(v12) = this->Powered; /*0x464d1a*/
  Power::FlagProcess(v54, v12); /*0x464d23*/
  IDA_LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  v14 = Power::FlagProcess(v54, v13); /*0x464d31*/
  IDA_LOBYTE(v14) = this->Radar; /*0x464d36*/
  Power::FlagProcess(v54, v14); /*0x464d3f*/
  IDA_LOBYTE(v15) = this->SpySat; /*0x464d44*/
  Power::FlagProcess(v54, v15); /*0x464d4d*/
  IDA_LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  v17 = Power::FlagProcess(v54, v16); /*0x464d5b*/
  IDA_LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  Power::FlagProcess(v54, v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  IDA_LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  v19 = Power::FlagProcess(v54, v18); /*0x464d85*/
  IDA_LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  Power::FlagProcess(v54, v19); /*0x464d93*/
  IDA_LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  Power::FlagProcess(v54, v20); /*0x464da1*/
  IDA_LOBYTE(v21) = this->Cloning; /*0x464da6*/
  v22 = Power::FlagProcess(v54, v21); /*0x464daf*/
  IDA_LOBYTE(v22) = this->Grinding; /*0x464db4*/
  Power::FlagProcess(v54, v22); /*0x464dbd*/
  IDA_LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  Power::FlagProcess(v54, v23); /*0x464dcb*/
  IDA_LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  v25 = Power::FlagProcess(v54, v24); /*0x464dd9*/
  IDA_LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  Power::FlagProcess(v54, v25); /*0x464de7*/
  IDA_LOBYTE(v26) = this->Flat; /*0x464dec*/
  Power::FlagProcess(v54, v26); /*0x464df5*/
  IDA_LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  v28 = Power::FlagProcess(v54, v27); /*0x464e03*/
  IDA_LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  Power::FlagProcess(v54, v28); /*0x464e11*/
  IDA_LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  Power::FlagProcess(v54, v29); /*0x464e1f*/
  IDA_LOBYTE(v30) = this->Gate; /*0x464e24*/
  v31 = Power::FlagProcess(v54, v30); /*0x464e2d*/
  IDA_LOBYTE(v31) = this->SAM; /*0x464e32*/
  Power::FlagProcess(v54, v31); /*0x464e3b*/
  IDA_LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  Power::FlagProcess(v54, v32); /*0x464e49*/
  IDA_LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  v34 = Power::FlagProcess(v54, v33); /*0x464e57*/
  IDA_LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  Power::FlagProcess(v54, v34); /*0x464e65*/
  IDA_LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  Power::FlagProcess(v54, v35); /*0x464e73*/
  IDA_LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  v37 = Power::FlagProcess(v54, v36); /*0x464e81*/
  IDA_LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  Power::FlagProcess(v54, v37); /*0x464e8f*/
  IDA_LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  Power::FlagProcess(v54, v38); /*0x464e9d*/
  IDA_LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  v40 = Power::FlagProcess(v54, v39); /*0x464eab*/
  IDA_LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  Power::FlagProcess(v54, v40); /*0x464eb9*/
  IDA_LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  Power::FlagProcess(v54, v41); /*0x464ec7*/
  IDA_LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  v43 = Power::FlagProcess(v54, v42); /*0x464ed5*/
  IDA_LOBYTE(v43) = this->Armory; /*0x464eda*/
  Power::FlagProcess(v54, v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  IDA_LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  Power::FlagProcess(v54, v44); /*0x464f0d*/
  IDA_LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  Power::FlagProcess(v54, v45); /*0x464f1b*/
  IDA_LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  v47 = Power::FlagProcess(v54, v46); /*0x464f29*/
  IDA_LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  Power::FlagProcess(v54, v47); /*0x464f37*/
  IDA_LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  Power::FlagProcess(v54, v48); /*0x464f45*/
  Checksum::AddString((unsigned int *)v54, (uint8_t *)&this->u32_9388); /*0x464f53*/
  Checksummer::Add_double(this->u32_1728, this->u32_172C); /*0x464f68*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)&this->u32_5CC0, 12); /*0x464f78*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)&this->u32_5CF0, 12); /*0x464f88*/
  Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)&this->u32_5D20, 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer((unsigned int *)v54, (uint8_t *)&this->u32_5D50, 12); /*0x464fa8*/
  IDA_LOBYTE(v49) = this->CrateBeneath; /*0x464fad*/
  Power::FlagProcess(v54, v49); /*0x464fb6*/
  IDA_LOBYTE(v50) = this->LeaveRubble; /*0x464fbb*/
  Power::FlagProcess(v54, v50); /*0x464fc4*/
  IDA_LOBYTE(v51) = this->CrateBeneathIsMoney; /*0x464fc9*/
  Power::FlagProcess(v54, v51); /*0x464fd2*/
  Power::TimerProcess(this->NumberOfDocks); /*0x464fe0*/
  Power::TimerProcess(this->BarrelStartPitch); /*0x464fee*/
  IDA_LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return Power::FlagProcess(v54, v52); /*0x465001*/
}
} // namespace gamemd
// 0x465010
namespace gamemd {
AbstractClass * * BuildingTypeClass::SaveLoad_Prefix()
{
  int v1; // esi
  int v2; // edi
  int result; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  unsigned int *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  int v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( *(unsigned char *)(v13 + 5986) && *(unsigned int *)(v13 + 3584) ) /*0x465025*/
  {
    RA2_OPDEL(*(void **)(v13 + 3584)); /*0x465030*/
    *(unsigned int *)(v1 + 3584) = 0; /*0x465038*/
    *(unsigned char *)(v1 + 3588) = 0; /*0x46503e*/
  }
  if ( *(unsigned char *)(v1 + 5404) && *(unsigned int *)(v1 + 5400) ) /*0x46504c*/
  {
    RA2_OPDEL(*(void **)(v1 + 5400)); /*0x465057*/
    *(unsigned int *)(v1 + 5400) = 0; /*0x46505f*/
    *(unsigned char *)(v1 + 5404) = 0; /*0x465065*/
  }
  if ( *(unsigned char *)(v1 + 5352) && *(unsigned int *)(v1 + 5348) ) /*0x465073*/
  {
    RA2_OPDEL(*(void **)(v1 + 5348)); /*0x46507e*/
    *(unsigned int *)(v1 + 5348) = 0; /*0x465086*/
    *(unsigned char *)(v1 + 5352) = 0; /*0x46508c*/
  }
  if ( *(unsigned char *)(v1 + 5360) && *(unsigned int *)(v1 + 5356) ) /*0x46509a*/
  {
    RA2_OPDEL(*(void **)(v1 + 5356)); /*0x4650a5*/
    *(unsigned int *)(v1 + 5356) = 0; /*0x4650ad*/
    *(unsigned char *)(v1 + 5360) = 0; /*0x4650b3*/
  }
  if ( *(unsigned char *)(v1 + 5368) && *(unsigned int *)(v1 + 5364) ) /*0x4650c1*/
  {
    RA2_OPDEL(*(void **)(v1 + 5364)); /*0x4650cc*/
    *(unsigned int *)(v1 + 5364) = 0; /*0x4650d4*/
    *(unsigned char *)(v1 + 5368) = 0; /*0x4650da*/
  }
  if ( *(unsigned char *)(v1 + 5376) && *(unsigned int *)(v1 + 5372) ) /*0x4650e8*/
  {
    RA2_OPDEL(*(void **)(v1 + 5372)); /*0x4650f3*/
    *(unsigned int *)(v1 + 5372) = 0; /*0x4650fb*/
    *(unsigned char *)(v1 + 5376) = 0; /*0x465101*/
  }
  if ( *(unsigned char *)(v1 + 5384) && *(unsigned int *)(v1 + 5380) ) /*0x46510f*/
  {
    RA2_OPDEL(*(void **)(v1 + 5380)); /*0x46511a*/
    *(unsigned int *)(v1 + 5380) = 0; /*0x465122*/
    *(unsigned char *)(v1 + 5384) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((unsigned int *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = v1 + 6020; /*0x465167*/
      if ( v1 != -6020 ) /*0x46516f*/
      {
        *(unsigned int *)(v1 + 6024) = 0; /*0x465171*/
        *(unsigned int *)(v1 + 6028) = 0; /*0x465174*/
        *(unsigned char *)(v1 + 6032) = 1; /*0x465177*/
        *(unsigned char *)(v1 + 6033) = 0; /*0x46517b*/
      }
      (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
  LABEL_32:
        BuildingTypeClass::LoadVoxel(v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        v9 = *(unsigned int *)(v1 + 3824); /*0x4651fb*/
        *(unsigned int *)(v1 + 3672) = 0; /*0x465210*/
        v9 *= 120; /*0x465219*/
        *(unsigned int *)(v1 + 3580) = (char *)&dword_89C900 + v9; /*0x465228*/
        *(unsigned int *)(v1 + 3796) = (char *)&dword_89D368 + v9; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3668)); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3744)); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3748)); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3752)); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3756)); /*0x465278*/
        BuildingTypeClass::LoadVoxel(v1); /*0x46527f*/
        *(unsigned int *)(v1 + 3584) = 0; /*0x465284*/
        *(unsigned char *)(v1 + 3588) = 0; /*0x46528a*/
        *(unsigned int *)(v1 + 5400) = 0; /*0x465290*/
        *(unsigned char *)(v1 + 5404) = 0; /*0x465296*/
        *(unsigned int *)(v1 + 5348) = 0; /*0x46529c*/
        *(unsigned char *)(v1 + 5352) = 0; /*0x4652a2*/
        *(unsigned int *)(v1 + 5356) = 0; /*0x4652a8*/
        *(unsigned char *)(v1 + 5360) = 0; /*0x4652ae*/
        *(unsigned int *)(v1 + 5364) = 0; /*0x4652b4*/
        *(unsigned char *)(v1 + 5368) = 0; /*0x4652ba*/
        *(unsigned int *)(v1 + 5372) = 0; /*0x4652c0*/
        *(unsigned char *)(v1 + 5376) = 0; /*0x4652c6*/
        *(unsigned int *)(v1 + 5380) = 0; /*0x4652cc*/
        *(unsigned char *)(v1 + 5384) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations(v1, *((unsigned int *)g_ScenarioClass_Instance + 1174)); /*0x4652e6*/
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
          v7 = (unsigned int *)(v13 + *(unsigned int *)(v1 + 6024)); /*0x4651cb*/
          v8 = v13 + 12; /*0x4651cd*/
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

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( g_TriggerClassCount <= 0 ) /*0x4653f1*/
  {
  LABEL_6:
    if ( operator new(0x1798u) ) /*0x46541b*/
      return BuildingTypeClass::ConstructFull(Source); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_TriggerTypeCount + v2) + 36), Source) ) /*0x46540a*/
  {
    if ( ++v2 >= g_TriggerClassCount ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return *((unsigned int *)g_TriggerTypeCount + v2); /*0x46542f*/
}
} // namespace gamemd
// 0x465AF0
namespace gamemd {
void BuildingTypeClass::IsPowered()
{
  if ( this->u32_1762 ) /*0x465af3*/
  {
    if ( this->q3800 ) /*0x465afd*/
    {
      RA2_OPDEL(*(void **)(&this->q5984)); /*0x465b08*/
      this->qE00 = 0; /*0x465b10*/
      this->qE04 = 0; /*0x465b1a*/
    }
  }
}
} // namespace gamemd
// 0x50B760
namespace gamemd {
int BuildingTypeClass::ProcessData(unsigned int * a2, short * a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebp
  int16_t *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !g_GameMode_Current[0] ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = (int)a2; /*0x50b783*/
  v11 = *(unsigned int *)&g_RulesClass_Instance[1].FreeMCV; /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth(a2); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
  v7 = 1 << *(unsigned int *)&this->TargetSpecialThreatCoefficient; /*0x50b7b8*/
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
      if ( (v7 & *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a2) + 55)) != 0 ) /*0x50b806*/
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
  int16_t v5; // ax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v12; // esi
  int v13; // eax
  unsigned int *v14; // eax

  aP1 = aP1; /*0x594015*/
  v4 = *aP1; /*0x594027*/
  IDA_HIWORD(aP1) = aP1[2]; /*0x59402a*/
  IDA_LOWORD(aP1) = v4; /*0x594035*/
  if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (int16_t *)&aP1, 1) )
  {
    v5 = aP1[2]; /*0x594052*/
    IDA_LOWORD(aP1) = *((unsigned int *)aP1 + 2) + *(unsigned int *)aP1 - 1; /*0x59405a*/
    IDA_HIWORD(aP1) = v5; /*0x594065*/
    if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (int16_t *)&aP1, 1) )
    {
      v6 = *((unsigned int *)aP1 + 1); /*0x59407a*/
      v7 = *((unsigned int *)aP1 + 3); /*0x59407d*/
      IDA_LOWORD(aP1) = *aP1; /*0x594080*/
      IDA_HIWORD(aP1) = v6 + v7 - 1; /*0x594095*/
      if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (int16_t *)&aP1, 1) )
      {
        v8 = *((unsigned int *)aP1 + 1); /*0x5940b2*/
        v9 = *((unsigned int *)aP1 + 3); /*0x5940b5*/
        IDA_LOWORD(aP1) = *((unsigned int *)aP1 + 2) + *(unsigned int *)aP1 - 1; /*0x5940b8*/
        IDA_HIWORD(aP1) = v8 + v9 - 1; /*0x5940cb*/
        if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (int16_t *)&aP1, 1) )
        {
          v10 = *((unsigned int *)aP1 + 1); /*0x5940dd*/
          if ( v10 >= *((unsigned int *)aP1 + 3) + v10 ) /*0x5940e9*/
            return 1; /*0x594177*/
          aP2 = aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v12 = *(unsigned int *)aP1; /*0x5940f3*/
            if ( *(unsigned int *)aP1 < *(unsigned int *)aP1 + *((unsigned int *)aP1 + 2) ) /*0x5940fc*/
              break; /*0x5940fc*/
  LABEL_15:
            if ( ++v10 >= *((unsigned int *)aP1 + 3) + *((unsigned int *)aP1 + 1) ) /*0x59416e*/
              return 1; /*0x59416e*/
          }
          while ( 1 )
          {
            IDA_LOWORD(aP1) = v12; /*0x594104*/
            IDA_HIWORD(aP1) = v10; /*0x59410b*/
            v13 = g_MapTileArray
                ? *((unsigned int *)g_MapTileArray + 20 * (int16_t)v12 + 20 * g_MapCellWidth * (int16_t)v10 + 14)
                : -1;
            if ( v13 != this->vtable3 && v13 != aP2 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1); /*0x594147*/
            if ( !Cell::IsEmpty(v14) ) /*0x59414e*/
              break; /*0x59414e*/
            if ( ++v12 >= *(unsigned int *)aP1 + *((unsigned int *)aP1 + 2) ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  return 0; /*0x594170*/
}
} // namespace gamemd
// 0x5FEC70
namespace gamemd {
OverlayTypeClass * * BuildingTypeClass::FindOrCreate2()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( g_ObjectTypeConfig <= 0 ) /*0x5feca1*/
  {
  LABEL_6:
    if ( operator new(0x2BCu) ) /*0x5feccb*/
      return OverlayTypeClass::OverlayTypeClass(Source); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_BuildingTypeClass_Array + v2) + 36), Source) ) /*0x5fecba*/
  {
    if ( ++v2 >= g_ObjectTypeConfig ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *((unsigned int *)g_BuildingTypeClass_Array + v2); /*0x5fecdf*/
}
} // namespace gamemd
// 0x644890
namespace gamemd {
ParticleSystemTypeClass * * BuildingTypeClass::LoadOrGet()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( g_InfantryTypeInitState <= 0 ) /*0x6448c1*/
  {
  LABEL_6:
    if ( operator new(0x310u) ) /*0x6448eb*/
      return OverlayTypeClass::Construct(Source); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_A83D6C + v2) + 36), Source) ) /*0x6448da*/
  {
    if ( ++v2 >= g_InfantryTypeInitState ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *((unsigned int *)dword_A83D6C + v2); /*0x6448ff*/
}
} // namespace gamemd
// 0x644BE0
namespace gamemd {
unsigned int * BuildingTypeClass::Construct(AbstractClass * aP1)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull(aP1); /*0x644beb*/
  *(unsigned int *)&this->armed = 0; /*0x644bf8*/
  *(&this->DeleteOnStateLimit6) = 0; /*0x644bfe*/
  *(&this->DeleteOnStateLimit7) = 0; /*0x644c04*/
  *(&this->ParticleTypeClass_field_2CC2) = 0; /*0x644c10*/
  *(&this->DeleteOnStateLimit8) = 1; /*0x644c19*/
  *(&this->DeleteOnStateLimit9) = 1; /*0x644c1f*/
  *(&this->ParticleTypeClass_field_2CC0) = 0; /*0x644c25*/
  *(&this->ParticleTypeClass_field_2CC1) = 1; /*0x644c2b*/
  *(&this->ParticleTypeClass_field_2CC3) = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850(0, 0); /*0x644c37*/
  *(&this->ParticleTypeClass_field_2CC9) = 10; /*0x644c3c*/
  *(&this->ParticleTypeClass_field_2CC8) = 0; /*0x644c43*/
  this->q2D4 = 0; /*0x644c4c*/
  this->u32_2D5 = 0; /*0x644c52*/
  this->u8_2D6 = 0; /*0x644c58*/
  this->q2D7 = 0; /*0x644c60*/
  this->q2D8 = 0; /*0x644c66*/
  this->u8_2D9 = 0; /*0x644c6c*/
  this->u32_30D = -1; /*0x644c72*/
  this->q30E = -1; /*0x644c78*/
  *(&this->WindEffect3) = 0; /*0x644c81*/
  *(&this->WindEffect4) = 1; /*0x644c87*/
  *(&this->WindEffect5) = 0; /*0x644c8d*/
  *(&this->WindEffect6) = 0; /*0x644c93*/
  *(&this->WindEffect7) = 0; /*0x644c99*/
  *(&this->WindEffect8) = 1; /*0x644c9f*/
  *(&this->WindEffect9) = 0; /*0x644ca5*/
  *(&this->Elasticity0) = 0; /*0x644cab*/
  *(&this->Elasticity1) = 0; /*0x644cb1*/
  *(&this->Elasticity2) = 0; /*0x644cb7*/
  *(&this->Elasticity3) = 0; /*0x644cbd*/
  this->q308 = 0; /*0x644cc3*/
  this->u32_309 = 0; /*0x644cc9*/
  this->q30A = 0; /*0x644ccf*/
  this->u32_30B = 4; /*0x644cd5*/
  this->q30C = 0; /*0x644cdc*/
  this->u8_30F = 0; /*0x644ce2*/
  *(&this->Elasticity6) = -1; /*0x644ce8*/
  *(&this->Elasticity7) = -1; /*0x644cee*/
  if ( g_BuildingTypeInitState < dword_A83DA0 /*0x644d43*/
    || (byte_A83DA5 || !dword_A83DA0)
    && dword_A83DAC > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A83D98 + 8))(
         &dword_A83D98,
         dword_A83DA0 + dword_A83DAC,
         0) )
  {
    v3 = g_BuildingTypeInitState++; /*0x644d50*/
    *((unsigned int *)g_BuildingProductionQueue + v3) = this; /*0x644d5f*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x644d96*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v4 = g_AnimManager++; /*0x644da3*/
    *((unsigned int *)g_AnimPoolCount + v4) = this; /*0x644db2*/
  }
  this->q234 = 0; /*0x644db5*/
  return this; /*0x644dbd*/
}
} // namespace gamemd
// 0x645430
namespace gamemd {
ParticleTypeClass * * BuildingTypeClass::FindOrCreateEx()
{
  int v2; // esi
  unsigned int *v3; // eax
  unsigned int *v4; // eax
  int v6; // ecx
  unsigned int *i; // edx

  if ( !_strcmpi(Source, g_Str__none_) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( g_BuildingTypeInitState <= 0 ) /*0x64544f*/
  {
  LABEL_5:
    v3 = operator new(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = BuildingTypeClass::Construct(v3, Source); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( g_BuildingTypeInitState > 0 ) /*0x6454a0*/
    {
      for ( i = g_BuildingProductionQueue; (unsigned int *)*i != v4; ++i ) /*0x6454a2*/
      {
        if ( ++v6 >= g_BuildingTypeInitState ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(Source, (const void *)(*((unsigned int *)g_BuildingProductionQueue + v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= g_BuildingTypeInitState ) /*0x645472*/
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

  AbstractTypeClass::ProcessPower(aP1); /*0x7171a9*/
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
  IDA_LOBYTE(v23) = this->q333C; /*0x7176a3*/
  Power::FlagProcess(aP1, v23); /*0x7176ac*/
  IDA_LOBYTE(v24) = this->q3340; /*0x7176b1*/
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
  int v3; // eax
  int v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ebp
  int v9; // edi
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  int v14[3]; // [esp+18h] [ebp-14h] BYREF
  int v15[2]; // [esp+24h] [ebp-8h] BYREF

  if ( this->DamageSparks ) /*0x7178c6*/
  {
    v3 = this->IsChargeTurret; /*0x7178d4*/
    v4 = this->TurretWeapon_0x21; /*0x7178da*/
    v15[0] = v3; /*0x7178e1*/
    v15[1] = v4; /*0x7178e6*/
    v5 = World::ToScreen((float *)g_TacticalClass_Instance, v14, v15); /*0x7178fb*/
    v6 = *v5; /*0x717900*/
    v7 = v5[1]; /*0x717905*/
    v14[0] = 10 * this->ClearAllWeapons; /*0x71791b*/
    v8 = v6 - v14[0]; /*0x717927*/
    v9 = v7 - v14[0]; /*0x717929*/
    v10 = Math::Sqrt((double)v14[0] * (double)v14[0] + (double)v14[0] * (double)v14[0]); /*0x717936*/
    v11 = Math::RoundToInt(v10 * 0.58); /*0x717944*/
    if ( this->ClearAllWeapons >= 0 ) /*0x717951*/
      v12 = -v11; /*0x717957*/
    else
      v12 = v11; /*0x717953*/
    *a2 = v8; /*0x71795f*/
    a2[1] = v9; /*0x717961*/
    a2[2] = v12; /*0x717966*/
    return a2; /*0x717959*/
  }
  else
  {
    *a2 = this->IsChargeTurret; /*0x71797f*/
    a2[1] = this->TurretWeapon_0x21; /*0x717984*/
    a2[2] = this->ClearAllWeapons; /*0x71798b*/
    return a2; /*0x717971*/
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

  if ( (*(int (__fastcall **)(void *))(*(unsigned int *)&this->TurretOffset))(this) < 0 /*0x746030*/
    || !MapSeed::CheckTileMatch(&MapClass_Instance, aP1, aP2, 0, 0, 0, 0) )
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
    || !LayerClass::IsWithinUsableArea(&MapClass_Instance, aP1, 1)
    || !LayerClass::IsWithinUsableArea(&MapClass_Instance, aP2, 1) )
  {
    return 1; /*0x7460f7*/
  }
  v6 = *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, aP2) + 80) >> 8; /*0x7460cd*/
  IDA_LOBYTE(v6) = v6 & 1; /*0x7460d0*/
  return Pathfinding::CalcDistance((int)&g_AudioInitFlag, aP1, aP2, (int)this, 0, v6, 0) > 15; /*0x746052*/
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
    if ( operator new(0xE78u) ) /*0x74812b*/
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
  v3 = (char *)operator new(8 * (a2 + v3->vtable3)); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
  for ( i = 0; i < v3->vtable2; *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x41c535*/
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (unsigned int *)(*(unsigned int *)v3 + 8 * i++); /*0x41c542*/
    *(unsigned int *)&v3[v5] = *v6; /*0x41c547*/
  }
  RA2_OPDEL(); /*0x41c55b*/
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
  size_t result; // eax
  char *v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // esi

  result = (size_t)this->vtable2; /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !*(unsigned char *)&this->vtable4 ) /*0x41c59e*/
    {
      qsort(result, 8u, CompareFunction); /*0x41c5b0*/
      *(unsigned int *)&this->uniqueId = 0; /*0x41c5b8*/
      *(unsigned char *)&this->vtable4 = 1; /*0x41c5bf*/
    }
    v4 = *this; /*0x41c5c9*/
    v5 = *aP1; /*0x41c5cb*/
    v6 = (int)this->vtable2; /*0x41c5cd*/
    if ( v6 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(unsigned int *)&v4[8 * (v6 / 2)]; /*0x41c5db*/
      if ( v7 <= v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (size_t)&v4[8 * (v6 / 2)]; /*0x41c603*/
        v4 += 8 * (v6 / 2) + 8; /*0x41c5eb*/
        v6 += -1 - v6 / 2; /*0x41c5f3*/
      }
      else
      {
        v6 /= 2; /*0x41c5e5*/
      }
      if ( v6 <= 0 ) /*0x41c5f7*/
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
  if ( g_TriggerClassCount <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((const void *)(*((unsigned int *)g_TriggerTypeCount + v2) + 36), this) ) /*0x45e7da*/
  {
    if ( ++v2 >= g_TriggerClassCount ) /*0x45e7e4*/
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
  int v3; // ecx

  result = 60 * dword_8192B8[*(unsigned int *)((char *)&this->q3988 + 568)] / 8; /*0x45ed02*/
  if ( this->PipScale == 2 ) /*0x45ed08*/
  {
    if ( this->Weeder ) /*0x45ed14*/
    {
      v2 = g_RulesClass_Instance[1].RadarEventVisibilityDurations[1]; /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return g_RulesClass_Instance[1].RadarEventVisibilityDurations[1]; /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      v3 = this->q800; /*0x45ed38*/
      if ( v3 >= 0 ) /*0x45ed40*/
      {
        if ( v3 <= result ) /*0x45ed47*/
          return v3; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
  else if ( this->PipScale != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue(); /*0x45ed0f*/
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

  v2 = *(&this->u32_17C6); /*0x464af0*/
  v3 = dword_89DDB8 * *(&this->u32_17C7); /*0x464afc*/
  v2 *= 4; /*0x464b03*/
  v4 = *(int *)((char *)dword_8192B8 + v2); /*0x464b0b*/
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
  unsigned int *v6; // [esp+18h] [ebp+4h]
  int *v7; // [esp+1Ch] [ebp+8h]
  int v8; // [esp+20h] [ebp+Ch] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix_0((int)v6, v6, v7, v8, v5); /*0x465313*/
  if ( result >= 0 ) /*0x46531a*/
  {
    v2 = *v7; /*0x465322*/
    v8 = v6[1507]; /*0x46532e*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v2 + 16))(v7, &v8, 4, 0); /*0x465332*/
    if ( result >= 0 ) /*0x465337*/
    {
      v3 = 0; /*0x46533d*/
      if ( v8 <= 0 ) /*0x465341*/
      {
        return 0; /*0x465368*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x465343*/
        {
          result = (*(int (__stdcall **)(int *, int, int, unsigned int))(*v7 + 16))(v7, i + v6[1506], 12, 0); /*0x465355*/
          if ( result < 0 ) /*0x46535a*/
            break; /*0x46535a*/
          if ( ++v3 >= v8 ) /*0x465366*/
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
  v2[3] = -1252326136; /*0x4653b0*/
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

  BuildingTypeClass::CleanupMembers(); /*0x465dc3*/
  if ( (v3 & 1) != 0 ) /*0x465dcd*/
    RA2_OPDEL(); /*0x465dd0*/
  return (int)this; /*0x465dda*/
}
} // namespace gamemd
// 0x474A90
namespace gamemd {
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
  int v4; // esi
  unsigned int *v5; // eax
  bool v6; // zf
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(aP1, a2, *(char **)(*((unsigned int *)BuildingTypeClass_AnimTable + aP3) + 772), Destination, 32); /*0x474aba*/
  v4 = 0; /*0x474ac4*/
  if ( g_AnimClass_SaveState <= 0 ) /*0x474ac8*/
    return aP3; /*0x474b06*/
  v5 = BuildingTypeClass_AnimTable; /*0x474aca*/
  while ( 1 ) /*0x474ae6*/
  {
    v6 = _strcmpi(*(const void **)(v5[v4] + 772), Destination) == 0; /*0x474ae6*/
    v5 = BuildingTypeClass_AnimTable; /*0x474ae8*/
    if ( v6 && *(unsigned int *)(*((unsigned int *)BuildingTypeClass_AnimTable + v4) + 784) != 1 ) /*0x474af9*/
      break; /*0x474af9*/
    if ( ++v4 >= g_AnimClass_SaveState ) /*0x474b04*/
      return aP3; /*0x474b04*/
  }
  return v4; /*0x474b08*/
}
} // namespace gamemd
// 0x478850
namespace gamemd {
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{
  char *v4; // ebx
  unsigned char *v5; // eax
  int v6; // ecx
  char *v8; // eax
  unsigned char *v9; // ecx

  v4 = 0; /*0x478859*/
  this->Items = 0; /*0x47885d*/
  this->Capacity = a2; /*0x478860*/
  this->IsInitialized = 1; /*0x478863*/
  this->IsAllocated = 0; /*0x478867*/
  if ( !a2 ) /*0x478870*/
    return this; /*0x4788d0*/
  if ( !a3 ) /*0x478878*/
  {
    v8 = (char *)operator new(3 * a2); /*0x4788a2*/
    if ( v8 ) /*0x4788ac*/
    {
      if ( a2 - 1 >= 0 ) /*0x4788b3*/
      {
        v9 = v8 + 2; /*0x4788b5*/
        a2 = a2; /*0x4788b8*/
        do /*0x4788c5*/
        {
          *(v9 - 2) = 0; /*0x4788b9*/
          *(v9 - 1) = 0; /*0x4788bc*/
          *v9 = 0; /*0x4788bf*/
          v9 += 3; /*0x4788c1*/
          --a2; /*0x4788c4*/
        }
        while ( a2 ); /*0x4788c5*/
      }
      v4 = v8; /*0x4788c7*/
    }
    this->Items = v4; /*0x4788c9*/
    this->IsAllocated = 1; /*0x4788cc*/
    return this; /*0x4788cc*/
  }
  if ( a2 - 1 >= 0 ) /*0x47887f*/
  {
    v5 = (unsigned char *)(a3 + 2); /*0x478881*/
    a2 = a2; /*0x478884*/
    do /*0x478891*/
    {
      *(v5 - 2) = 0; /*0x478885*/
      *(v5 - 1) = 0; /*0x478888*/
      *v5 = 0; /*0x47888b*/
      v5 += 3; /*0x47888d*/
      --a2; /*0x478890*/
    }
    while ( a2 ); /*0x478891*/
  }
  this->Items = a3; /*0x478893*/
  return this; /*0x478898*/
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
  this->u32_28 = v3; /*0x4c9692*/
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
  if ( g_CrateCount <= 0 ) /*0x747381*/
    return -1; /*0x7473a6*/
  while ( _strcmpi((const void *)(*((unsigned int *)g_UnitTypeCount2 + v2) + 36), this) ) /*0x74739a*/
  {
    if ( ++v2 >= g_CrateCount ) /*0x7473a4*/
      return -1; /*0x7473a4*/
  }
  return v2; /*0x7473a6*/
}
} // namespace gamemd