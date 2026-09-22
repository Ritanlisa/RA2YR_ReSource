// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x45DD90
int BuildingTypeClass::ConstructFull(char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingTypeClass_ConstructorFull(int this, char *Source)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // edi
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // edi

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x45dda1*/
  this->ArrayIndex = -1; /*0x45ddaf*/
  this->FoundationData = 0; /*0x45ddb5*/
  this->Buildup = 0; /*0x45ddbb*/
  this->BuildupLoaded = 0; /*0x45ddc1*/
  this->BuildCat = 0; /*0x45ddc7*/
  this->HalfDamageSmokeLocation1 = unk_89C8D0; /*0x45ddd3*/
  *(_DWORD *)(this + 3600) = unk_89C8D4; /*0x45ddda*/
  *(_DWORD *)(this + 3604) = unk_89C8D8; /*0x45dde9*/
  this->HalfDamageSmokeLocation2 = unk_89C8D0; /*0x45ddf2*/
  *(_DWORD *)(this + 3612) = unk_89C8D4; /*0x45ddfa*/
  *(_DWORD *)(this + 3616) = unk_89C8D8; /*0x45de03*/
  this->GateCloseDelay = 0; /*0x45de06*/
  *(_DWORD *)(this + 3628) = 0; /*0x45de0c*/
  this->LightVisibility = 5000; /*0x45de12*/
  this->LightIntensity = 0; /*0x45de21*/
  this->LightRedTint = 1000000; /*0x45de27*/
  this->LightGreenTint = 1000000; /*0x45de2d*/
  this->LightBlueTint = 1000000; /*0x45de33*/
  this->PrimaryFirePixelOffset = 0xFFFF; /*0x45de40*/
  *(_DWORD *)(this + 3656) = 0xFFFF; /*0x45de46*/
  this->SecondaryFirePixelOffset = 0xFFFF; /*0x45de4c*/
  *(_DWORD *)(this + 3664) = 0xFFFF; /*0x45de52*/
  this->ToOverlay = 0; /*0x45de58*/
  this->ToTile = 0; /*0x45de5e*/
  this->UnitExitSound = -1; /*0x45de64*/
  this->WorkingSound = -1; /*0x45de6a*/
  this->NotWorkingSound = -1; /*0x45de70*/
  this->FreeUnit = -1; /*0x45de76*/
  this->SecretInfantry = -1; /*0x45de7c*/
  this->SecretUnit = -1; /*0x45de82*/
  this->SecretBuilding = -1; /*0x45de88*/
  *(_DWORD *)(this + 3744) = 0; /*0x45de8e*/
  *(_DWORD *)(this + 3748) = 0; /*0x45de94*/
  *(_DWORD *)(this + 3752) = 0; /*0x45de9a*/
  *(_DWORD *)(this + 3756) = 0; /*0x45dea0*/
  *(_DWORD *)(this + 3760) = -1; /*0x45dea6*/
  this->Adjacent = 3; /*0x45deac*/
  this->Factory = 0; /*0x45deb6*/
  this->TargetCoordOffset = 0; /*0x45debc*/
  *(_DWORD *)(this + 3776) = 0; /*0x45dec2*/
  *(_DWORD *)(this + 3780) = 0; /*0x45dec8*/
  this->ExitCoord = 0; /*0x45dece*/
  *(_DWORD *)(this + 3788) = 0; /*0x45ded4*/
  *(_DWORD *)(this + 3792) = 0; /*0x45deda*/
  this->FoundationOutside = 0; /*0x45dee0*/
  *(_DWORD *)(this + 3800) = 0; /*0x45dee6*/
  this->DeployFacing = 128; /*0x45deec*/
  this->PowerBonus = 0; /*0x45def6*/
  this->PowerDrain = 0; /*0x45defc*/
  this->ExtraPowerBonus = 0; /*0x45df02*/
  this->ExtraPowerDrain = 0; /*0x45df08*/
  this->Foundation = 0; /*0x45df13*/
  this->Height = 2; /*0x45df19*/
  this->OccupyHeight = 2; /*0x45df1f*/
  this->MidPoint = 0; /*0x45df25*/
  this->DoorStages = 0; /*0x45df2b*/
  *(_DWORD *)(this + 5344) = 0; /*0x45df31*/
  *(_DWORD *)(this + 5348) = 0; /*0x45df37*/
  *(_DWORD *)(this + 5356) = 0; /*0x45df3d*/
  *(_DWORD *)(this + 5364) = 0; /*0x45df43*/
  *(_DWORD *)(this + 5372) = 0; /*0x45df49*/
  *(_DWORD *)(this + 5380) = 0; /*0x45df4f*/
  *(_DWORD *)(this + 5388) = 0; /*0x45df55*/
  *(_DWORD *)(this + 5392) = 0; /*0x45df5b*/
  *(_DWORD *)(this + 5396) = 0; /*0x45df61*/
  *(_DWORD *)(this + 5400) = 0; /*0x45df67*/
  *(_BYTE *)(this + 5404) = 0; /*0x45df6d*/
  *(_DWORD *)(this + 5408) = 0; /*0x45df73*/
  *(_DWORD *)(this + 5412) = 0; /*0x45df79*/
  *(_DWORD *)(this + 5416) = 0; /*0x45df7f*/
  *(_DWORD *)(this + 5420) = 0; /*0x45df87*/
  *(_DWORD *)(this + 5424) = 0; /*0x45df8d*/
  *(_DWORD *)(this + 5428) = 0; /*0x45df93*/
  this->unknown_1538 = unk_89C8A0; /*0x45dfa4*/
  this->unknown_153C = unk_89C8A4; /*0x45dfb0*/
  this->unknown_1540 = unk_89C8A8; /*0x45dfb8*/
  v3 = unk_89C8AC; /*0x45dfbb*/
  this->HoverPad = 0; /*0x45dfc3*/
  this->unknown_1544 = v3; /*0x45dfc9*/
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
  *(_BYTE *)(this + 5508) = 1; /*0x45e08f*/
  *(_DWORD *)(this + 5660) = 0; /*0x45e096*/
  this->NumberImpassableRows = -1; /*0x45e09c*/
  *(_BYTE *)(this + 5796) = 0; /*0x45e0a2*/
  *(_BYTE *)(this + 5797) = 0; /*0x45e0a8*/
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
  *(_BYTE *)(this + 5984) = 0; /*0x45e248*/
  *(_BYTE *)(this + 5985) = 0; /*0x45e24e*/
  *(_BYTE *)(this + 5986) = 0; /*0x45e254*/
  *(_BYTE *)(this + 5987) = 0; /*0x45e25a*/
  *(_BYTE *)(this + 5988) = 0; /*0x45e260*/
  *(_BYTE *)(this + 5989) = 0; /*0x45e266*/
  *(_BYTE *)(this + 5990) = 1; /*0x45e26c*/
  *(_BYTE *)(this + 5991) = 0; /*0x45e273*/
  *(_BYTE *)(this + 5992) = 0; /*0x45e279*/
  *(_BYTE *)(this + 5993) = 0; /*0x45e284*/
  *(_DWORD *)(this + 6016) = 1; /*0x45e28a*/
  *(_DWORD *)(this + 6024) = 0; /*0x45e292*/
  *(_DWORD *)(this + 6028) = 1; /*0x45e298*/
  *(_BYTE *)(this + 6032) = 1; /*0x45e29e*/
  *(_BYTE *)(this + 6033) = 0; /*0x45e2a5*/
  *(_DWORD *)(this + 6020) = &vt_VectorClass_TPoint3D_int; /*0x45e2ab*/
  *(_DWORD *)(this + 6024) = __2_YAPAXI_Z(0xCu); /*0x45e2ba*/
  *(_BYTE *)(this + 6033) = 1; /*0x45e2c6*/
  *(_DWORD *)this = &BuildingTypeClass::`vftable'; /*0x45e2cd*/
  this->vtable1 = &BuildingTypeClass::`vftable'; /*0x45e2d3*/
  this->vtable2 = &BuildingTypeClass::`vftable'; /*0x45e2d9*/
  this->vtable3 = &vt_BuildingTypeClass; /*0x45e2e1*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x45e2e8*/
  v4 = g_TriggerClassCount; /*0x45e2ed*/
  if ( g_TriggerClassCount < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = g_TriggerClassCount,
        !v5) )
  {
    g_TriggerClassCount = v4 + 1; /*0x45e330*/
    *((_DWORD *)g_TriggerTypeCount + v4) = this; /*0x45e33a*/
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
    v7 = g_TriggerTypeCount; /*0x45e348*/
    while ( *v7 != this ) /*0x45e350*/
    {
      ++v6; /*0x45e352*/
      ++v7; /*0x45e353*/
      if ( v6 >= v4 ) /*0x45e358*/
        goto LABEL_11; /*0x45e358*/
    }
  }
  this->ArrayIndex = v6; /*0x45e35c*/
  this->BuildingAnimFrame = 0; /*0x45e362*/
  *(_DWORD *)(this + 3848) = 1; /*0x45e368*/
  *(_DWORD *)(this + 3852) = 0; /*0x45e36e*/
  *(_DWORD *)(this + 3856) = 0; /*0x45e374*/
  *(_DWORD *)(this + 3860) = 1; /*0x45e37a*/
  *(_DWORD *)(this + 3864) = 0; /*0x45e380*/
  this->BuildingAnim = 0; /*0x45e386*/
  *(_DWORD *)(this + 3872) = 1; /*0x45e38c*/
  *(_DWORD *)(this + 3876) = 0; /*0x45e392*/
  *(_DWORD *)(this + 3892) = 0; /*0x45e398*/
  *(_DWORD *)(this + 3896) = 1; /*0x45e39e*/
  *(_DWORD *)(this + 3900) = 0; /*0x45e3a4*/
  *(_DWORD *)(this + 3904) = 0; /*0x45e3aa*/
  *(_DWORD *)(this + 3908) = 1; /*0x45e3b0*/
  *(_DWORD *)(this + 3912) = 0; /*0x45e3b6*/
  v8 = (_DWORD *)(this + 3932); /*0x45e3be*/
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
    *((_BYTE *)v8 - 20) = 1; /*0x45e407*/
    *((_BYTE *)v8 - 19) = 0; /*0x45e40b*/
    *((_BYTE *)v8 - 18) = 0; /*0x45e40e*/
    *((_BYTE *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
  *(_BYTE *)(this + 3676) = 0; /*0x45e416*/
  *(_BYTE *)(this + 3720) = 0; /*0x45e41c*/
  *(_BYTE *)(this + 5994) = 0; /*0x45e422*/
  *(_BYTE *)(this + 5908) = 0; /*0x45e428*/
  this->Trainable = 0; /*0x45e42e*/
  *(_BYTE *)(this + 5352) = 0; /*0x45e434*/
  *(_BYTE *)(this + 5360) = 0; /*0x45e43a*/
  *(_BYTE *)(this + 5368) = 0; /*0x45e440*/
  *(_BYTE *)(this + 5376) = 0; /*0x45e446*/
  *(_BYTE *)(this + 5384) = 0; /*0x45e44c*/
  v12 = (_DWORD *)(this + 5512); /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    v14 = unk_89C8D4; /*0x45e463*/
    *v12 = unk_89C8D0; /*0x45e469*/
    v12[1] = v14; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (_DWORD *)(this + 5592); /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    v17 = unk_89C8D4; /*0x45e485*/
    *v15 = unk_89C8D0; /*0x45e48b*/
    v15[1] = v17; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = (_DWORD *)(this + 5732); /*0x45e49b*/
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
  v20 = *(_DWORD **)(this + 6024); /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
  *(_BYTE *)(this + 3381) = 1; /*0x45e4dc*/
  *(_BYTE *)(this + 3382) = 1; /*0x45e4e3*/
  *(_BYTE *)(this + 3387) = 0; /*0x45e4ea*/
  *(_BYTE *)(this + 3384) = 0; /*0x45e4f0*/
  *(_BYTE *)(this + 3479) = 0; /*0x45e4f6*/
  *(_BYTE *)(this + 3478) = 0; /*0x45e4fc*/
  *(_BYTE *)(this + 3374) = 0; /*0x45e502*/
  return this; /*0x45e508*/
}
}

// 0x45E520
unsigned int * BuildingTypeClass::loadBuildingProperty_b_545E520(ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BuildingTypeClass::loadBuildingProperty_b_545E520(_DWORD *this, ObjectTypeClass *aP1)
{
  TechnoTypeClass::Construct((int)this, aP1); /*0x45e528*/
  this->qE00 = 0; /*0x45e52f*/
  this->PreventsPlacementOverlap = 0; /*0x45e535*/
  this->ProductionCompletionThreshold = 0; /*0x45e53b*/
  this->CostRatePerFrame = 1; /*0x45e541*/
  this->q1791 = 0; /*0x45e548*/
  this->DockingOffsets = &vt_VectorClass_TPoint3D_int; /*0x45e54e*/
  *this = &BuildingTypeClass::`vftable'; /*0x45e558*/
  this->vtable2 = &BuildingTypeClass::`vftable'; /*0x45e55e*/
  this->vtable3 = &BuildingTypeClass::`vftable'; /*0x45e565*/
  this->vtable4 = &vt_BuildingTypeClass; /*0x45e56c*/
  return this; /*0x45e575*/
}
}

// 0x45E580
int BuildingTypeClass::CleanupMembers(AbstractClass * a1, AbstractClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall BuildingTypeClass::CleanupMembers(AbstractClass *a1, AbstractClass *a2)
{
  char nextArrayIndex; // al
  int eax22; // eax
  SHPStruct *v4; // eax
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF

  nextArrayIndex = a1[99].nextArrayIndex; /*0x45e587*/
  *(_DWORD *)a1->__pad_0 = &BuildingTypeClass::`vftable'; /*0x45e58d*/
  *(_DWORD *)&a1->__pad_0[4] = &BuildingTypeClass::`vftable'; /*0x45e595*/
  *(_DWORD *)&a1->__pad_0[8] = &BuildingTypeClass::`vftable'; /*0x45e59c*/
  *(_DWORD *)&a1->__pad_0[12] = &vt_BuildingTypeClass; /*0x45e5a3*/
  if ( nextArrayIndex && a1[99].abstractFlags ) /*0x45e5ac*/
  {
    __3_YAXPAX_Z((void *)a1[99].abstractFlags); /*0x45e5b7*/
    a1[99].abstractFlags = 0; /*0x45e5bf*/
    LOBYTE(a1[99].nextArrayIndex) = 0; /*0x45e5c5*/
  }
  if ( a1[150].__pad_0[4] && *(_DWORD *)a1[150].__pad_0 ) /*0x45e5d3*/
  {
    __3_YAXPAX_Z(*(void **)a1[150].__pad_0); /*0x45e5de*/
    *(_DWORD *)a1[150].__pad_0 = 0; /*0x45e5e6*/
    a1[150].__pad_0[4] = 0; /*0x45e5ec*/
  }
  if ( LOBYTE(a1[148].nextArrayIndex) && a1[148].abstractFlags ) /*0x45e5fa*/
  {
    __3_YAXPAX_Z((void *)a1[148].abstractFlags); /*0x45e605*/
    a1[148].abstractFlags = 0; /*0x45e60d*/
    LOBYTE(a1[148].nextArrayIndex) = 0; /*0x45e613*/
  }
  if ( LOBYTE(a1[148].NeedsSaveOrLink) && a1[148].referenceCount ) /*0x45e621*/
  {
    __3_YAXPAX_Z((void *)a1[148].referenceCount); /*0x45e62c*/
    a1[148].referenceCount = 0; /*0x45e634*/
    LOBYTE(a1[148].NeedsSaveOrLink) = 0; /*0x45e63a*/
  }
  if ( a1[149].__pad_0[4] && *(_DWORD *)a1[149].__pad_0 ) /*0x45e648*/
  {
    __3_YAXPAX_Z(*(void **)a1[149].__pad_0); /*0x45e653*/
    *(_DWORD *)a1[149].__pad_0 = 0; /*0x45e65b*/
    a1[149].__pad_0[4] = 0; /*0x45e661*/
  }
  if ( a1[149].__pad_0[12] && *(_DWORD *)&a1[149].__pad_0[8] ) /*0x45e66f*/
  {
    __3_YAXPAX_Z(*(void **)&a1[149].__pad_0[8]); /*0x45e67a*/
    *(_DWORD *)&a1[149].__pad_0[8] = 0; /*0x45e682*/
    a1[149].__pad_0[12] = 0; /*0x45e688*/
  }
  if ( LOBYTE(a1[149].abstractFlags) && a1[149].uniqueId ) /*0x45e696*/
  {
    __3_YAXPAX_Z((void *)a1[149].uniqueId); /*0x45e6a1*/
    a1[149].uniqueId = 0; /*0x45e6a9*/
    LOBYTE(a1[149].abstractFlags) = 0; /*0x45e6af*/
  }
  LOBYTE(a2) = 1; /*0x45e6b5*/
  AbstractClass::AnnounceExpiredPointer(a1, a2); /*0x45e6b9*/
  v6 = (BuildingTypeClass *)a1; /*0x45e6ce*/
  eax22 = ((int (__thiscall *)(DynamicVector **, BuildingTypeClass **))dword_A83C68->field_10)(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( eax22 != -1 && eax22 < (int)g_TriggerClassCount ) /*0x45e6e2*/
  {
    for ( g_TriggerClassCount = (BuildingTypeClass *)((char *)g_TriggerClassCount - 1); /*0x45e6ed*/
          eax22 < (int)g_TriggerClassCount;
          *((_DWORD *)g_TriggerTypeCount + eax22 - 1) = *((_DWORD *)g_TriggerTypeCount + eax22) )
    {
      ++eax22; /*0x45e6f5*/
    }
  }
  v4 = *(SHPStruct **)&a1[167].__pad_0[12]; /*0x45e707*/
  *(_DWORD *)&a1[167].__pad_0[8] = &vt_VectorClass_TPoint3D_int; /*0x45e70d*/
  if ( v4 && BYTE1(a1[167].abstractFlags) ) /*0x45e71b*/
  {
    __3_YAXPAX_Z(v4); /*0x45e724*/
    *(_DWORD *)&a1[167].__pad_0[12] = 0; /*0x45e72c*/
  }
  BYTE1(a1[167].abstractFlags) = 0; /*0x45e734*/
  a1[167].uniqueId = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR((int)a1); /*0x45e745*/
}
}

// 0x45E970
void BuildingTypeClass::LoadRepairAnimations(void * this)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BuildingTypeClass::LoadRepairAnimations(#376 *this)
{
  ObjectTypeClass *v1; // ecx
  ObjectTypeClass *v2; // edi
  int v3; // ebp
  ObjectTypeClass *v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  BuildingTypeClass *v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v2 = v1; /*0x45e97a*/
  ProcessDataCCFileClass(); /*0x45e97c*/
  unk_89DDC4 = SearchMIXFile(aPoweroffShp, 0); /*0x45e994*/
  aP2 = SearchMIXFile(aWrenchShp, 0); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( (int)g_TriggerClassCount > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = (ObjectTypeClass *)*((_DWORD *)g_TriggerTypeCount + v3); /*0x45e9c1*/
      if ( v9 <= SHIBYTE(v4[8].VoxelCaches[8]) ) /*0x45e9cd*/
        v9 = SHIBYTE(v4[8].VoxelCaches[8]); /*0x45e9cf*/
      if ( v4->Theater ) /*0x45e9d3*/
      {
        if ( v4[9].__pad_24[8] ) /*0x45e9df*/
        {
          if ( v4->Image ) /*0x45ea23*/
          {
            __3_YAXPAX_Z(v4->Image); /*0x45ea2e*/
            v4->Image = 0; /*0x45ea36*/
            v4->ImageAllocated = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, v4->ImageFile, (const char *)&off_7E1BC6 + 112 * (_DWORD)v2); /*0x45ea08*/
          v4->Image = (void *)SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( v4[9].__pad_24[9] ) /*0x45ea42*/
        {
          if ( v4[5].ChargerBarrels[6] ) /*0x45ea86*/
          {
            __3_YAXPAX_Z((void *)v4[5].ChargerBarrels[6]); /*0x45ea91*/
            v4[5].ChargerBarrels[6] = 0; /*0x45ea99*/
            LOBYTE(v4[5].ChargerBarrels[7]) = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, &v4[5].__pad_14D[43], (const char *)&off_7E1BC6 + 112 * (_DWORD)v2); /*0x45ea6b*/
          v4[5].ChargerBarrels[6] = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        v5 = v4[5].ChargerBarrels[6]; /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(__int16 *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          *(_DWORD *)&v4[5].AlphaImageFile[13] = 0; /*0x45eac8*/
          *(_DWORD *)&v4[5].AlphaImageFile[17] = v6; /*0x45eace*/
          *(_DWORD *)&v4[5].AlphaImageFile[21] = v7; /*0x45ead4*/
        }
      }
      else if ( v4->NewTheater ) /*0x45eadc*/
      {
        if ( v4[9].__pad_24[8] && v4->Image ) /*0x45eaec*/
        {
          __3_YAXPAX_Z(v4->Image); /*0x45eaf7*/
          v4->Image = 0; /*0x45eaff*/
          v4->ImageAllocated = 0; /*0x45eb05*/
        }
        if ( v4[9].__pad_24[9] && v4[5].ChargerBarrels[6] ) /*0x45eb13*/
        {
          __3_YAXPAX_Z((void *)v4[5].ChargerBarrels[6]); /*0x45eb1e*/
          v4[5].ChargerBarrels[6] = 0; /*0x45eb26*/
          LOBYTE(v4[5].ChargerBarrels[7]) = 0; /*0x45eb2c*/
        }
        BuildingTypeClass::LoadAnimations((int)v4, v2); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < (int)g_TriggerClassCount ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (*(void (__thiscall **)(_DWORD *, int))*dword_89DDC0)(dword_89DDC0, 1); /*0x45eb5c*/
      v8 = (BuildingTypeClass *)__2_YAPAXI_Z(0x20u); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        *(_DWORD *)&v8->vtable0[12] = 0; /*0x45eb72*/
        *(_DWORD *)v8->vtable0 = &XSurface_Vtable; /*0x45eb78*/
        *(_DWORD *)&v8->vtable0[4] = v9 + 16; /*0x45eb80*/
        *(_DWORD *)&v8->vtable0[8] = v9 + 16; /*0x45eb8b*/
        v8->uniqueId = 1; /*0x45eb8e*/
        Buffer::Init(&v8->abstractFlags, 0, (AbstractClass *)((v9 + 16) * (v9 + 16))); /*0x45eb95*/
        *(_DWORD *)v8->vtable0 = &BSurface_Vtable; /*0x45eb9a*/
        dword_89DDC0 = v8->vtable0; /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }
}
}

// 0x45F230
int BuildingTypeClass::LoadAnimations(ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingTypeClass::LoadAnimations(int this, ObjectTypeClass *aP1)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  _BYTE *v6; // esi
  void *FileSHP; // eax
  _BYTE *v8; // esi
  void *v9; // eax
  int v10; // eax
  _BYTE *v11; // esi
  void *v12; // eax
  _BYTE *v13; // esi
  void *v14; // eax
  _BYTE *v15; // esi
  void *v16; // eax
  int v17; // eax
  _BYTE *v18; // esi
  void *v19; // eax
  const char *v20; // edi
  int v21; // eax
  int result; // eax
  int v23; // [esp+10h] [ebp-158h]
  INIClass Filename; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !*(_BYTE *)(this + 5985) && strlen((const char *)(this + 3676)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)(this + 3676), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f282*/
    v3 = SearchMIXFile(Source, 0); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f29a*/
      v3 = SearchMIXFile(Source, 0); /*0x45f2a5*/
    }
    this->Buildup = v3; /*0x45f2ac*/
    if ( v3 ) /*0x45f2b2*/
    {
      v4 = 1; /*0x45f2bb*/
      v5 = *(__int16 *)(v3 + 6) / 2; /*0x45f2c8*/
      v23 = v5; /*0x45f2cc*/
      if ( this->Gate ) /*0x45f2c2*/
      {
        v5 = this->GateStages + 1; /*0x45f2d8*/
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
        v4 = Math::RoundToInt(*(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5400) * 900.0 / (double)v23); /*0x45f2fc*/
      this->BuildingAnimFrame = 0; /*0x45f2fe*/
      *(_DWORD *)(this + 3848) = v5; /*0x45f304*/
      *(_DWORD *)(this + 3852) = v4; /*0x45f30a*/
    }
  }
  INIClass::GetString( /*0x45f32d*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    aDeployinganim,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f36a*/
    v6 = (_BYTE *)(this + 5352); /*0x45f375*/
    if ( *(_BYTE *)(this + 5352) && *(_DWORD *)(this + 5348) ) /*0x45f37f*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f38a*/
      *(_DWORD *)(this + 5348) = 0; /*0x45f392*/
      *v6 = 0; /*0x45f398*/
    }
    FileSHP = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3a0*/
    *(_DWORD *)(this + 5348) = FileSHP; /*0x45f3a7*/
    if ( !FileSHP ) /*0x45f3ad*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f3b3*/
      if ( *v6 && *(_DWORD *)(this + 5348) ) /*0x45f3bc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f3c7*/
        *(_DWORD *)(this + 5348) = 0; /*0x45f3cf*/
        *v6 = 0; /*0x45f3d5*/
      }
      *(_DWORD *)(this + 5348) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3e2*/
    }
  }
  INIClass::GetString( /*0x45f405*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    aRoofdeployinga,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f442*/
    v8 = (_BYTE *)(this + 5376); /*0x45f44d*/
    if ( *(_BYTE *)(this + 5376) && *(_DWORD *)(this + 5372) ) /*0x45f457*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f462*/
      *(_DWORD *)(this + 5372) = 0; /*0x45f46a*/
      *v8 = 0; /*0x45f470*/
    }
    v9 = LoadFileSHP(Source, (bool *)(this + 5376)); /*0x45f478*/
    *(_DWORD *)(this + 5372) = v9; /*0x45f47f*/
    if ( !v9 ) /*0x45f485*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f48b*/
      if ( *v8 && *(_DWORD *)(this + 5372) ) /*0x45f494*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f49f*/
        *(_DWORD *)(this + 5372) = 0; /*0x45f4a7*/
        *v8 = 0; /*0x45f4ad*/
      }
      *(_DWORD *)(this + 5372) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f4be*/
    }
  }
  INIClass::GetString( /*0x45f4e1*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.unknown50,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f51a*/
    v10 = SearchMIXFile(Source, 0); /*0x45f525*/
    *(_DWORD *)(this + 5388) = v10; /*0x45f52c*/
    if ( !v10 ) /*0x45f532*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f538*/
      *(_DWORD *)(this + 5388) = SearchMIXFile(Source, 0); /*0x45f548*/
    }
  }
  INIClass::GetString( /*0x45f565*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.ownsFile,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f5a2*/
    v11 = (_BYTE *)(this + 5360); /*0x45f5ad*/
    if ( *(_BYTE *)(this + 5360) && *(_DWORD *)(this + 5356) ) /*0x45f5b7*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5c2*/
      *(_DWORD *)(this + 5356) = 0; /*0x45f5ca*/
      *v11 = 0; /*0x45f5d0*/
    }
    v12 = LoadFileSHP(Source, (bool *)(this + 5360)); /*0x45f5d8*/
    *(_DWORD *)(this + 5356) = v12; /*0x45f5df*/
    if ( !v12 ) /*0x45f5e5*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f5eb*/
      if ( *v11 && *(_DWORD *)(this + 5356) ) /*0x45f5f4*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5ff*/
        *(_DWORD *)(this + 5356) = 0; /*0x45f607*/
        *v11 = 0; /*0x45f60d*/
      }
      *(_DWORD *)(this + 5356) = SearchMIXFile(Source, 0); /*0x45f61a*/
    }
  }
  v13 = (_BYTE *)(this + 5368); /*0x45f626*/
  if ( *(_BYTE *)(this + 5368) && *(_DWORD *)(this + 5364) ) /*0x45f630*/
  {
    __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f63b*/
    *(_DWORD *)(this + 5364) = 0; /*0x45f643*/
    *v13 = 0; /*0x45f649*/
  }
  INIClass::GetString( /*0x45f668*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.unknown38,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f6a1*/
    v14 = LoadFileSHP(Source, (bool *)(this + 5368)); /*0x45f6ac*/
    *(_DWORD *)(this + 5364) = v14; /*0x45f6b3*/
    if ( !v14 ) /*0x45f6b9*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f6bf*/
      if ( *v13 && *(_DWORD *)(this + 5364) ) /*0x45f6c8*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f6d3*/
        *(_DWORD *)(this + 5364) = 0; /*0x45f6db*/
        *v13 = 0; /*0x45f6e1*/
      }
      *(_DWORD *)(this + 5364) = SearchMIXFile(Source, 0); /*0x45f6ee*/
    }
  }
  INIClass::GetString( /*0x45f711*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.__pad_20[4],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f74e*/
    v15 = (_BYTE *)(this + 5384); /*0x45f759*/
    if ( *(_BYTE *)(this + 5384) && *(_DWORD *)(this + 5380) ) /*0x45f763*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f76e*/
      *(_DWORD *)(this + 5380) = 0; /*0x45f776*/
      *v15 = 0; /*0x45f77c*/
    }
    v16 = LoadFileSHP(Source, (bool *)(this + 5384)); /*0x45f784*/
    *(_DWORD *)(this + 5380) = v16; /*0x45f78b*/
    if ( !v16 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f797*/
      if ( *v15 && *(_DWORD *)(this + 5380) ) /*0x45f7a0*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f7ab*/
        *(_DWORD *)(this + 5380) = 0; /*0x45f7b3*/
        *v15 = 0; /*0x45f7b9*/
      }
      *(_DWORD *)(this + 5380) = SearchMIXFile(Source, 0); /*0x45f7c6*/
    }
  }
  INIClass::GetString( /*0x45f7e9*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.sectionHead[1],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f822*/
    v17 = SearchMIXFile(Source, 0); /*0x45f82d*/
    *(_DWORD *)(this + 5392) = v17; /*0x45f834*/
    if ( !v17 ) /*0x45f83a*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f840*/
      *(_DWORD *)(this + 5392) = SearchMIXFile(Source, 0); /*0x45f850*/
    }
  }
  INIClass::GetString( /*0x45f86d*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.headNode[1],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f8aa*/
    v18 = (_BYTE *)(this + 5404); /*0x45f8b5*/
    if ( *(_BYTE *)(this + 5404) && *(_DWORD *)(this + 5400) ) /*0x45f8bf*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f8ca*/
      *(_DWORD *)(this + 5400) = 0; /*0x45f8d2*/
      *v18 = 0; /*0x45f8d8*/
    }
    v19 = LoadFileSHP(Source, (bool *)(this + 5404)); /*0x45f8e0*/
    *(_DWORD *)(this + 5400) = v19; /*0x45f8e7*/
    if ( !v19 ) /*0x45f8ed*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f8f3*/
      if ( *v18 && *(_DWORD *)(this + 5400) ) /*0x45f8fc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f907*/
        *(_DWORD *)(this + 5400) = 0; /*0x45f90f*/
        *v18 = 0; /*0x45f915*/
      }
      *(_DWORD *)(this + 5400) = SearchMIXFile(Source, 0); /*0x45f922*/
    }
  }
  INIClass::GetString( /*0x45f945*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( !this->Theater || aP1 == (ObjectTypeClass *)-1 ) /*0x45f95c*/
    v20 = ::Ext; /*0x45f97a*/
  else
    v20 = (const char *)(&off_7E1BC6 + 28 * (_DWORD)aP1); /*0x45f96e*/
  strcpy(Ext, v20); /*0x45f993*/
  if ( strlen(Filename.__pad_0) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename.__pad_0, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)(this + 504), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f9e0*/
  strncpy((char *)(this + 5994), Source, 0x13u); /*0x45f9f3*/
  if ( !*(_BYTE *)(this + 5984) ) /*0x45f9f8*/
  {
    v21 = SearchMIXFile(Source, 0); /*0x45fa0b*/
    this->Image = v21; /*0x45fa12*/
    if ( !v21 ) /*0x45fa18*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa1e*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa2b*/
      this->Image = SearchMIXFile(Source, 0); /*0x45fa3e*/
    }
    if ( !this->Image ) /*0x45fa44*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa50*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa5d*/
      this->Image = SearchMIXFile(Source, 0); /*0x45fa70*/
    }
  }
  BuildingTypeClass::LoadVoxel(this); /*0x45fa78*/
  return result; /*0x45fa7d*/
}
}

// 0x45FA90
void BuildingTypeClass::LoadVoxel()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall BuildingTypeClass_LoadVoxel(int this)
{
  char *v2; // eax
  void *v3; // esi
  _DWORD *v4; // eax
  _DWORD *File; // eax
  void *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  _BYTE *v12; // eax
  void *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  void *v16; // esi
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  _DWORD v22[22]; // [esp+8h] [ebp-2C4h] BYREF
  _BYTE v23[12]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  _DWORD v25[22]; // [esp+74h] [ebp-258h] BYREF
  _BYTE v26[12]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  _DWORD v28[22]; // [esp+E0h] [ebp-1ECh] BYREF
  _BYTE v29[12]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( this->TurretAnimIsVoxel || this->BarrelAnimIsVoxel ) /*0x45faa4*/
  {
    strcpy(Destination, (const char *)(this + 4528)); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(v25, Buffer); /*0x45fb3b*/
      if ( CCFileClass::Open(v25, 0) ) /*0x45fb48*/
      {
        v3 = *(void **)(this + 184); /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          WaveClass::Destroy(this->BarrelVoxel); /*0x45fb61*/
          __3_YAXPAX_Z(v3); /*0x45fb67*/
        }
        v4 = __2_YAPAXI_Z(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          File = File::LoadFileVXL(v4, (int)v25, 0); /*0x45fb85*/
        else
          File = 0; /*0x45fb8c*/
        this->BarrelVoxel = File; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(v22, Buffer); /*0x45fbbf*/
        v6 = *(void **)(this + 188); /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release(*(void ***)(this + 188)); /*0x45fbd0*/
          __3_YAXPAX_Z(v6); /*0x45fbd6*/
        }
        v7 = __2_YAPAXI_Z(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          v8 = File::LoadFileHVA(v7, (int)v22); /*0x45fbf3*/
        else
          v8 = 0; /*0x45fbfa*/
        this->ChargerTurrets = v8; /*0x45fbfe*/
        if ( v8 && !*(_BYTE *)v8 ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo(*(_DWORD **)(this + 184), 0, 0); /*0x45fc12*/
          Matrix::Scale(*(unsigned int **)(this + 188), *(float *)(Info + 12)); /*0x45fc21*/
        }
        v22[0] = &vt_CCFileClass; /*0x45fc2a*/
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
      v25[0] = &vt_CCFileClass; /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      v25[0] = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor(v25); /*0x45fca8*/
    }
    else if ( this->BarrelAnimIsVoxel ) /*0x45fcaf*/
    {
      strncpy(Destination, (const char *)(this + 5908), 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(v28, Buffer); /*0x45fd01*/
    if ( CCFileClass::Open(v28, 0) ) /*0x45fd0e*/
    {
      v13 = *(void **)(this + 192); /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy(*(_DWORD *)(this + 192)); /*0x45fd27*/
        __3_YAXPAX_Z(v13); /*0x45fd2d*/
      }
      v14 = __2_YAPAXI_Z(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      *(_DWORD *)(this + 192) = v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(v22, Buffer); /*0x45fd88*/
      v16 = *(void **)(this + 196); /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release(*(void ***)(this + 196)); /*0x45fd99*/
        __3_YAXPAX_Z(v16); /*0x45fd9f*/
      }
      v17 = __2_YAPAXI_Z(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      *(_DWORD *)(this + 196) = v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(_BYTE *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo(*(_DWORD **)(this + 192), 0, 0); /*0x45fddb*/
          Matrix::Scale(*(unsigned int **)(this + 196), *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      v22[0] = &vt_CCFileClass; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      v22[0] = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor(v22); /*0x45fe0c*/
    }
    v28[0] = &vt_CCFileClass; /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    v28[0] = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor(v28); /*0x45fe3d*/
  }
}
}

// 0x464B30
int BuildingTypeClass::UpdatePower()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingTypeClass::UpdatePower(#376 *this)
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

  BuildingTypeClass::ProcessPower((int)this, v54); /*0x464b39*/
  Checksummer::Add_double(this->GateCloseDelay, this->qE2C); /*0x464b4e*/
  Power::TimerProcess(this->LightVisibility); /*0x464b5c*/
  Power::TimerProcess(this->LightIntensity); /*0x464b6a*/
  Power::TimerProcess(this->LightRedTint); /*0x464b78*/
  Power::TimerProcess(this->LightGreenTint); /*0x464b86*/
  Power::TimerProcess(this->LightBlueTint); /*0x464b94*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3676); /*0x464ba2*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3720); /*0x464bb0*/
  Power::TimerProcess(this->Adjacent); /*0x464bbe*/
  Power::TimerProcess(this->Factory); /*0x464bcc*/
  Power::TimerProcess(this->PowerBonus); /*0x464bda*/
  Power::TimerProcess(this->PowerDrain); /*0x464be8*/
  Power::TimerProcess(this->ExtraPowerBonus); /*0x464bf6*/
  Power::TimerProcess(this->ExtraPowerDrain); /*0x464c04*/
  Power::TimerProcess(this->Foundation); /*0x464c12*/
  Power::TimerProcess(this->Height); /*0x464c20*/
  Power::TimerProcess(this->OccupyHeight); /*0x464c2e*/
  Power::TimerProcess(this->MidPoint); /*0x464c3c*/
  Power::TimerProcess(this->DoorStages); /*0x464c4a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3844, 72); /*0x464c5a*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3916, 1428); /*0x464c6d*/
  Power::TimerProcess(this->IFVMode); /*0x464c7b*/
  v2 = Power::TimerProcess(this->CloseRange); /*0x464c89*/
  LOBYTE(v2) = this->HoverPad; /*0x464c8e*/
  Power::FlagProcess(v54, v2); /*0x464c97*/
  LOBYTE(v3) = this->IsPlug; /*0x464c9c*/
  Power::FlagProcess(v54, v3); /*0x464ca5*/
  LOBYTE(v4) = this->IsTemple; /*0x464caa*/
  v5 = Power::FlagProcess(v54, v4); /*0x464cb3*/
  LOBYTE(v5) = this->HasSpotlight; /*0x464cb8*/
  Power::FlagProcess(v54, v5); /*0x464cc1*/
  LOBYTE(v6) = this->BaseNormal; /*0x464cc6*/
  Power::FlagProcess(v54, v6); /*0x464ccf*/
  LOBYTE(v7) = this->EligibileForAllyBuilding; /*0x464cd4*/
  v8 = Power::FlagProcess(v54, v7); /*0x464cdd*/
  LOBYTE(v8) = this->NeedsEngineer; /*0x464ce2*/
  Power::FlagProcess(v54, v8); /*0x464ceb*/
  LOBYTE(v9) = this->Bib; /*0x464cf0*/
  Power::FlagProcess(v54, v9); /*0x464cf9*/
  LOBYTE(v10) = this->Wall; /*0x464cfe*/
  v11 = Power::FlagProcess(v54, v10); /*0x464d07*/
  LOBYTE(v11) = this->Capturable; /*0x464d0c*/
  Power::FlagProcess(v54, v11); /*0x464d15*/
  LOBYTE(v12) = this->Powered; /*0x464d1a*/
  Power::FlagProcess(v54, v12); /*0x464d23*/
  LOBYTE(v13) = this->Unsellable; /*0x464d28*/
  v14 = Power::FlagProcess(v54, v13); /*0x464d31*/
  LOBYTE(v14) = this->Radar; /*0x464d36*/
  Power::FlagProcess(v54, v14); /*0x464d3f*/
  LOBYTE(v15) = this->SpySat; /*0x464d44*/
  Power::FlagProcess(v54, v15); /*0x464d4d*/
  LOBYTE(v16) = this->ChargeAnim; /*0x464d52*/
  v17 = Power::FlagProcess(v54, v16); /*0x464d5b*/
  LOBYTE(v17) = this->IsAnimDelayedFire; /*0x464d60*/
  Power::FlagProcess(v54, v17); /*0x464d69*/
  Power::TimerProcess(this->DelayedFireDelay); /*0x464d77*/
  LOBYTE(v18) = this->SiloDamage; /*0x464d7c*/
  v19 = Power::FlagProcess(v54, v18); /*0x464d85*/
  LOBYTE(v19) = this->UnitRepair; /*0x464d8a*/
  Power::FlagProcess(v54, v19); /*0x464d93*/
  LOBYTE(v20) = this->UnitReload; /*0x464d98*/
  Power::FlagProcess(v54, v20); /*0x464da1*/
  LOBYTE(v21) = this->Cloning; /*0x464da6*/
  v22 = Power::FlagProcess(v54, v21); /*0x464daf*/
  LOBYTE(v22) = this->Grinding; /*0x464db4*/
  Power::FlagProcess(v54, v22); /*0x464dbd*/
  LOBYTE(v23) = this->UnitAbsorb; /*0x464dc2*/
  Power::FlagProcess(v54, v23); /*0x464dcb*/
  LOBYTE(v24) = this->InfantryAbsorb; /*0x464dd0*/
  v25 = Power::FlagProcess(v54, v24); /*0x464dd9*/
  LOBYTE(v25) = this->SecretLab; /*0x464dde*/
  Power::FlagProcess(v54, v25); /*0x464de7*/
  LOBYTE(v26) = this->Flat; /*0x464dec*/
  Power::FlagProcess(v54, v26); /*0x464df5*/
  LOBYTE(v27) = this->DockUnload; /*0x464dfa*/
  v28 = Power::FlagProcess(v54, v27); /*0x464e03*/
  LOBYTE(v28) = this->Recoilless; /*0x464e08*/
  Power::FlagProcess(v54, v28); /*0x464e11*/
  LOBYTE(v29) = this->BridgeRepairHut; /*0x464e16*/
  Power::FlagProcess(v54, v29); /*0x464e1f*/
  LOBYTE(v30) = this->Gate; /*0x464e24*/
  v31 = Power::FlagProcess(v54, v30); /*0x464e2d*/
  LOBYTE(v31) = this->SAM; /*0x464e32*/
  Power::FlagProcess(v54, v31); /*0x464e3b*/
  LOBYTE(v32) = this->ConstructionYard; /*0x464e40*/
  Power::FlagProcess(v54, v32); /*0x464e49*/
  LOBYTE(v33) = this->NukeSilo; /*0x464e4e*/
  v34 = Power::FlagProcess(v54, v33); /*0x464e57*/
  LOBYTE(v34) = this->Refinery; /*0x464e5c*/
  Power::FlagProcess(v54, v34); /*0x464e65*/
  LOBYTE(v35) = this->WeaponsFactory; /*0x464e6a*/
  Power::FlagProcess(v54, v35); /*0x464e73*/
  LOBYTE(v36) = this->LaserFencePost; /*0x464e78*/
  v37 = Power::FlagProcess(v54, v36); /*0x464e81*/
  LOBYTE(v37) = this->LaserFence; /*0x464e86*/
  Power::FlagProcess(v54, v37); /*0x464e8f*/
  LOBYTE(v38) = this->FirestormWall; /*0x464e94*/
  Power::FlagProcess(v54, v38); /*0x464e9d*/
  LOBYTE(v39) = this->Helipad; /*0x464ea2*/
  v40 = Power::FlagProcess(v54, v39); /*0x464eab*/
  LOBYTE(v40) = this->OrePurifier; /*0x464eb0*/
  Power::FlagProcess(v54, v40); /*0x464eb9*/
  LOBYTE(v41) = this->ExtraDamageStage; /*0x464ebe*/
  Power::FlagProcess(v54, v41); /*0x464ec7*/
  LOBYTE(v42) = this->Hospital; /*0x464ecc*/
  v43 = Power::FlagProcess(v54, v42); /*0x464ed5*/
  LOBYTE(v43) = this->Armory; /*0x464eda*/
  Power::FlagProcess(v54, v43); /*0x464ee3*/
  Power::TimerProcess(this->GateStages); /*0x464ef1*/
  v44 = Power::TimerProcess(this->PowersUpToLevel); /*0x464eff*/
  LOBYTE(v44) = this->DamagedDoor; /*0x464f04*/
  Power::FlagProcess(v54, v44); /*0x464f0d*/
  LOBYTE(v45) = this->InvisibleInGame; /*0x464f12*/
  Power::FlagProcess(v54, v45); /*0x464f1b*/
  LOBYTE(v46) = this->TerrainPalette; /*0x464f20*/
  v47 = Power::FlagProcess(v54, v46); /*0x464f29*/
  LOBYTE(v47) = this->TurretAnimIsVoxel; /*0x464f2e*/
  Power::FlagProcess(v54, v47); /*0x464f37*/
  LOBYTE(v48) = this->BarrelAnimIsVoxel; /*0x464f3c*/
  Power::FlagProcess(v54, v48); /*0x464f45*/
  Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 5908); /*0x464f53*/
  Checksummer::Add_double(*((_DWORD *)this + 1482), *((_DWORD *)this + 1483)); /*0x464f68*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5936, 12); /*0x464f78*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5948, 12); /*0x464f88*/
  Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5960, 12); /*0x464f98*/
  v49 = Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5972, 12); /*0x464fa8*/
  LOBYTE(v49) = this->CrateBeneath; /*0x464fad*/
  Power::FlagProcess(v54, v49); /*0x464fb6*/
  LOBYTE(v50) = this->LeaveRubble; /*0x464fbb*/
  Power::FlagProcess(v54, v50); /*0x464fc4*/
  LOBYTE(v51) = this->CrateBeneathIsMoney; /*0x464fc9*/
  Power::FlagProcess(v54, v51); /*0x464fd2*/
  Power::TimerProcess(this->q5E0); /*0x464fe0*/
  Power::TimerProcess(this->BarrelStartPitch); /*0x464fee*/
  LOBYTE(v52) = this->ConcentricRadialIndicator; /*0x464ff3*/
  return Power::FlagProcess(v54, v52); /*0x465001*/
}
}

// 0x465010
int BuildingTypeClass::SaveLoad_Prefix()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingTypeClass::SaveLoad_Prefix(#376 *this)
{
  int v1; // esi
  int v2; // edi
  int result; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+28h] [ebp-Ch] BYREF
  int v11; // [esp+2Ch] [ebp-8h]
  int v12; // [esp+30h] [ebp-4h]
  int v13; // [esp+38h] [ebp+4h] BYREF
  int v14; // [esp+3Ch] [ebp+8h] BYREF

  v1 = v13; /*0x465016*/
  if ( *(_BYTE *)(v13 + 5986) && *(_DWORD *)(v13 + 3584) ) /*0x465025*/
  {
    __3_YAXPAX_Z(*(void **)(v13 + 3584)); /*0x465030*/
    *(_DWORD *)(v1 + 3584) = 0; /*0x465038*/
    *(_BYTE *)(v1 + 3588) = 0; /*0x46503e*/
  }
  if ( *(_BYTE *)(v1 + 5404) && *(_DWORD *)(v1 + 5400) ) /*0x46504c*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5400)); /*0x465057*/
    *(_DWORD *)(v1 + 5400) = 0; /*0x46505f*/
    *(_BYTE *)(v1 + 5404) = 0; /*0x465065*/
  }
  if ( *(_BYTE *)(v1 + 5352) && *(_DWORD *)(v1 + 5348) ) /*0x465073*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5348)); /*0x46507e*/
    *(_DWORD *)(v1 + 5348) = 0; /*0x465086*/
    *(_BYTE *)(v1 + 5352) = 0; /*0x46508c*/
  }
  if ( *(_BYTE *)(v1 + 5360) && *(_DWORD *)(v1 + 5356) ) /*0x46509a*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5356)); /*0x4650a5*/
    *(_DWORD *)(v1 + 5356) = 0; /*0x4650ad*/
    *(_BYTE *)(v1 + 5360) = 0; /*0x4650b3*/
  }
  if ( *(_BYTE *)(v1 + 5368) && *(_DWORD *)(v1 + 5364) ) /*0x4650c1*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5364)); /*0x4650cc*/
    *(_DWORD *)(v1 + 5364) = 0; /*0x4650d4*/
    *(_BYTE *)(v1 + 5368) = 0; /*0x4650da*/
  }
  if ( *(_BYTE *)(v1 + 5376) && *(_DWORD *)(v1 + 5372) ) /*0x4650e8*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5372)); /*0x4650f3*/
    *(_DWORD *)(v1 + 5372) = 0; /*0x4650fb*/
    *(_BYTE *)(v1 + 5376) = 0; /*0x465101*/
  }
  if ( *(_BYTE *)(v1 + 5384) && *(_DWORD *)(v1 + 5380) ) /*0x46510f*/
  {
    __3_YAXPAX_Z(*(void **)(v1 + 5380)); /*0x46511a*/
    *(_DWORD *)(v1 + 5380) = 0; /*0x465122*/
    *(_BYTE *)(v1 + 5384) = 0; /*0x465128*/
  }
  v2 = v14; /*0x46512e*/
  result = TechnoTypeClass::SaveLoad_Prefix(v1, v14); /*0x465134*/
  if ( result >= 0 ) /*0x46513b*/
  {
    if ( v1 ) /*0x465143*/
      BuildingTypeClass::loadBuildingProperty_b_545E520((_DWORD *)v1, (int)&v13); /*0x46514c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v14, 4, 0); /*0x46515c*/
    if ( result >= 0 ) /*0x465161*/
    {
      v4 = v1 + 6020; /*0x465167*/
      if ( v1 != -6020 ) /*0x46516f*/
      {
        *(_DWORD *)(v1 + 6024) = 0; /*0x465171*/
        *(_DWORD *)(v1 + 6028) = 0; /*0x465174*/
        *(_BYTE *)(v1 + 6032) = 1; /*0x465177*/
        *(_BYTE *)(v1 + 6033) = 0; /*0x46517b*/
        *(_DWORD *)v4 = &vt_VectorClass_TPoint3D_int; /*0x46517e*/
      }
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 8))(v4, v14, 0); /*0x46518c*/
      v5 = 0; /*0x46518f*/
      if ( v14 <= 0 ) /*0x465195*/
      {
LABEL_32:
        BuildingTypeClass::LoadVoxel(v1); /*0x4651ed*/
        ObjectTypeClass::Load2DArt((char *)v1); /*0x4651f6*/
        v9 = *(_DWORD *)(v1 + 3824); /*0x4651fb*/
        *(_DWORD *)(v1 + 3672) = 0; /*0x465210*/
        v9 *= 120; /*0x465219*/
        *(_DWORD *)(v1 + 3580) = (char *)&unk_89C900 + v9; /*0x465228*/
        *(_DWORD *)(v1 + 3796) = (char *)&unk_89D368 + v9; /*0x46522e*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3668)); /*0x465234*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3744)); /*0x465245*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3748)); /*0x465256*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3752)); /*0x465267*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 3756)); /*0x465278*/
        BuildingTypeClass::LoadVoxel(v1); /*0x46527f*/
        *(_DWORD *)(v1 + 3584) = 0; /*0x465284*/
        *(_BYTE *)(v1 + 3588) = 0; /*0x46528a*/
        *(_DWORD *)(v1 + 5400) = 0; /*0x465290*/
        *(_BYTE *)(v1 + 5404) = 0; /*0x465296*/
        *(_DWORD *)(v1 + 5348) = 0; /*0x46529c*/
        *(_BYTE *)(v1 + 5352) = 0; /*0x4652a2*/
        *(_DWORD *)(v1 + 5356) = 0; /*0x4652a8*/
        *(_BYTE *)(v1 + 5360) = 0; /*0x4652ae*/
        *(_DWORD *)(v1 + 5364) = 0; /*0x4652b4*/
        *(_BYTE *)(v1 + 5368) = 0; /*0x4652ba*/
        *(_DWORD *)(v1 + 5372) = 0; /*0x4652c0*/
        *(_BYTE *)(v1 + 5376) = 0; /*0x4652c6*/
        *(_DWORD *)(v1 + 5380) = 0; /*0x4652cc*/
        *(_BYTE *)(v1 + 5384) = 0; /*0x4652d2*/
        BuildingTypeClass::LoadAnimations(v1, *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x4652e6*/
        return 0; /*0x4652eb*/
      }
      else
      {
        v13 = 0; /*0x465197*/
        while ( 1 ) /*0x46519b*/
        {
          v6 = *(_DWORD *)v2; /*0x46519b*/
          v10 = 0; /*0x4651a6*/
          v11 = 0; /*0x4651aa*/
          v12 = 0; /*0x4651ae*/
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 12))(v2, &v10, 12, 0); /*0x4651b2*/
          if ( result < 0 ) /*0x4651b7*/
            break; /*0x4651b7*/
          v7 = (_DWORD *)(v13 + *(_DWORD *)(v1 + 6024)); /*0x4651cb*/
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
}

// 0x4653C0
BuildingTypeClass * BuildingTypeClass::FindOrCreate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BuildingTypeClass *__thiscall BuildingTypeClass::FindOrCreate(char *this)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x4653dc*/
    return 0; /*0x46543f*/
  v2 = 0; /*0x4653ed*/
  if ( (int)g_TriggerClassCount <= 0 ) /*0x4653f1*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x1798u); /*0x465416*/
    if ( v3 ) /*0x465425*/
      return (BuildingTypeClass *)BuildingTypeClass::ConstructFull(v3, this); /*0x465431*/
    return 0; /*0x465425*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_TriggerTypeCount + v2) + 36), this) ) /*0x46540a*/
  {
    if ( ++v2 >= (int)g_TriggerClassCount ) /*0x465414*/
      goto LABEL_6; /*0x465414*/
  }
  return (BuildingTypeClass *)*((_DWORD *)g_TriggerTypeCount + v2); /*0x46542f*/
}
}

// 0x465AF0
void BuildingTypeClass::IsPowered()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall BuildingTypeClass_IsPowered(int this)
{
  if ( *(_BYTE *)(this + 5986) ) /*0x465af3*/
  {
    if ( this->Buildup ) /*0x465afd*/
    {
      __3_YAXPAX_Z(*(void **)(this + 3584)); /*0x465b08*/
      this->Buildup = 0; /*0x465b10*/
      this->BuildupLoaded = 0; /*0x465b1a*/
    }
  }
}
}

// 0x50B760
char BuildingTypeClass::ProcessData(unsigned int * a2, short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_50B760(_DWORD *this, _DWORD *a2, __int16 *a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebp
  __int16 *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !MEMORY[0xA8B238][0] ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = (int)a2; /*0x50b783*/
  v11 = *(_DWORD *)&MEMORY[0x8871E0][1].FreeMCV; /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth(a2); /*0x50b7a3*/
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
      LOWORD(a2) = v9; /*0x50b7eb*/
      HIWORD(a2) = v10; /*0x50b7f6*/
      if ( (v7 & *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 55)) != 0 ) /*0x50b806*/
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
}

// 0x594010
char BuildingTypeClass::CheckPlacementArea(ObjectClass * aP1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall BuildingTypeClass::CheckPlacementArea(_DWORD *this, ObjectClass *aP1, ObjectClass *aP2)
{
  IUnknown *v3; // edi
  __int16 v4; // ax
  __int16 v5; // ax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  ObjectClass *v11; // ebp
  int v12; // esi
  ObjectClass *v13; // eax
  _DWORD *v14; // eax

  v3 = (IUnknown *)aP1; /*0x594015*/
  v4 = *(_WORD *)aP1->__pad_0; /*0x594027*/
  HIWORD(aP1) = *(_WORD *)&aP1->__pad_0[4]; /*0x59402a*/
  LOWORD(aP1) = v4; /*0x594035*/
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&aP1, (TechnoClass *)1) )
  {
    v5 = v3->field_4; /*0x594052*/
    LOWORD(aP1) = v3->field_8 + v3->field_0 - 1; /*0x59405a*/
    HIWORD(aP1) = v5; /*0x594065*/
    if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&aP1, (TechnoClass *)1) )
    {
      v6 = v3->field_4; /*0x59407a*/
      v7 = v3->field_C; /*0x59407d*/
      LOWORD(aP1) = v3->field_0; /*0x594080*/
      HIWORD(aP1) = v6 + v7 - 1; /*0x594095*/
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&aP1, (TechnoClass *)1) )
      {
        v8 = v3->field_4; /*0x5940b2*/
        v9 = v3->field_C; /*0x5940b5*/
        LOWORD(aP1) = v3->field_8 + v3->field_0 - 1; /*0x5940b8*/
        HIWORD(aP1) = v8 + v9 - 1; /*0x5940cb*/
        if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&aP1, (TechnoClass *)1) )
        {
          v10 = v3->field_4; /*0x5940dd*/
          if ( v10 >= v3->field_C + v10 ) /*0x5940e9*/
            return 1; /*0x594177*/
          v11 = aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v12 = v3->field_0; /*0x5940f3*/
            if ( v3->field_0 < v3->field_0 + v3->field_8 ) /*0x5940fc*/
              break; /*0x5940fc*/
LABEL_15:
            if ( ++v10 >= v3->field_C + v3->field_4 ) /*0x59416e*/
              return 1; /*0x59416e*/
          }
          while ( 1 )
          {
            LOWORD(aP1) = v12; /*0x594104*/
            HIWORD(aP1) = v10; /*0x59410b*/
            v13 = (ObjectClass *)(g_MapTileArray
                                ? *((_DWORD *)g_MapTileArray + 20 * (__int16)v12 + 20 * unk_89C2DC * (__int16)v10 + 14)
                                : -1);
            if ( v13 != (ObjectClass *)this->vtable3 && v13 != v11 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x594147*/
            if ( !Cell::IsEmpty(v14) ) /*0x59414e*/
              break; /*0x59414e*/
            if ( ++v12 >= v3->field_0 + v3->field_8 ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  return 0; /*0x594170*/
}
}

// 0x5FEC70
OverlayTypeClass * BuildingTypeClass::FindOrCreate2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
OverlayTypeClass *__thiscall BuildingTypeClass::FindOrCreate2(ObjectClass *this)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x5fec8c*/
    return 0; /*0x5fecef*/
  v2 = 0; /*0x5fec9d*/
  if ( *(int *)&HouseClass_Player.__pad_3C[8] <= 0 ) /*0x5feca1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x2BCu); /*0x5fecc6*/
    if ( v3 ) /*0x5fecd5*/
      return (OverlayTypeClass *)OverlayTypeClass::OverlayTypeClass(v3, this); /*0x5fece1*/
    return 0; /*0x5fecd5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(HouseClass_Player.field_38 + 4 * v2) + 36), this) ) /*0x5fecba*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_3C[8] ) /*0x5fecc4*/
      goto LABEL_6; /*0x5fecc4*/
  }
  return *(OverlayTypeClass **)(HouseClass_Player.field_38 + 4 * v2); /*0x5fecdf*/
}
}

// 0x644890
ParticleSystemTypeClass * BuildingTypeClass::LoadOrGet()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ParticleSystemTypeClass *__thiscall BuildingTypeClass::LoadOrGet(ObjectClass *this)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x6448ac*/
    return 0; /*0x64490f*/
  v2 = 0; /*0x6448bd*/
  if ( *(int *)HouseClass_Player.__pad_2C <= 0 ) /*0x6448c1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x310u); /*0x6448e6*/
    if ( v3 ) /*0x6448f5*/
      return (ParticleSystemTypeClass *)OverlayTypeClass::Construct(v3, this); /*0x644901*/
    return 0; /*0x6448f5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * v2) + 36), this) ) /*0x6448da*/
  {
    if ( ++v2 >= *(int *)HouseClass_Player.__pad_2C ) /*0x6448e4*/
      goto LABEL_6; /*0x6448e4*/
  }
  return *(ParticleSystemTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * v2); /*0x6448ff*/
}
}

// 0x644BE0
unsigned int * BuildingTypeClass::Construct(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BuildingTypeClass::Construct(_DWORD *this, AbstractClass *aP1)
{
  ParticleTypeClass *v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, aP1); /*0x644beb*/
  this->armed = 0; /*0x644bf8*/
  this->weaponCount = 0; /*0x644bfe*/
  this->weapon1 = 0; /*0x644c04*/
  this->guardRange = 0; /*0x644c10*/
  this->weapon2 = 1; /*0x644c19*/
  this->eliteWeapon1 = 1; /*0x644c1f*/
  this->eliteWeapon2 = 0; /*0x644c25*/
  this->ammo = 1; /*0x644c2b*/
  this->sight = 0; /*0x644c31*/
  BuildingTypeClass::loadBuildingProperty_b_5478850(this + 174, 0, 0); /*0x644c37*/
  this->speed = 10; /*0x644c3c*/
  this->pipScale = 0; /*0x644c43*/
  this->cost = &vt_TypeList_RGBClass; /*0x644c46*/
  this->threatPosed = 0; /*0x644c4c*/
  this->threatAvoidValue = 0; /*0x644c66*/
  *((_BYTE *)this + 729) = 0; /*0x644c6c*/
  *((_BYTE *)this + 781) = -1; /*0x644c72*/
  *((_BYTE *)this + 782) = -1; /*0x644c78*/
  this->cloakable = 0; /*0x644c81*/
  this->cloakRadius = 1; /*0x644c87*/
  this->trainable = 0; /*0x644c8d*/
  this->buildLimit = 0; /*0x644c93*/
  this->FoundationData = 0; /*0x644c99*/
  this->Buildup = 1; /*0x644c9f*/
  this->BuildupLoaded = 0; /*0x644ca5*/
  this->BuildCat = 0; /*0x644cab*/
  this->q2FC = 0; /*0x644cb1*/
  this->TechnoTypeClass_field_double_300 = 0; /*0x644cb7*/
  *(this + 193) = 0; /*0x644cbd*/
  this->AccelerationFactor = 0; /*0x644cc3*/
  *((_BYTE *)this + 777) = 0; /*0x644cc9*/
  this->q30A = 0; /*0x644ccf*/
  *((_BYTE *)this + 779) = 4; /*0x644cd5*/
  this->q0C3 = 0; /*0x644cdc*/
  *((_BYTE *)this + 783) = 0; /*0x644ce2*/
  this->CloakingSpeed = -1; /*0x644ce8*/
  this->DebrisTypes = -1; /*0x644cee*/
  *this = &ParticleTypeClass::`vftable'; /*0x644cf4*/
  this->vtable2 = &ParticleTypeClass::`vftable'; /*0x644cfa*/
  this->vtable3 = &ParticleTypeClass::`vftable'; /*0x644d01*/
  this->vtable4 = &vt_ParticleTypeClass; /*0x644d08*/
  if ( (int)MEMORY[0xA83DA8] < MEMORY[0xA83DA0] /*0x644d43*/
    || (MEMORY[0xA83DA5] || !MEMORY[0xA83DA0])
    && MEMORY[0xA83DAC] > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA83D98]->field_8)(
         &MEMORY[0xA83D98],
         MEMORY[0xA83DA0] + MEMORY[0xA83DAC],
         0) )
  {
    v3 = MEMORY[0xA83DA8]; /*0x644d50*/
    MEMORY[0xA83DA8] = (ParticleTypeClass *)((char *)MEMORY[0xA83DA8] + 1); /*0x644d53*/
    *(_DWORD *)&MEMORY[0xA83D9C]->__pad_0[4 * (_DWORD)v3] = this; /*0x644d5f*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x644d96*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x644da3*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x644db2*/
  }
  this->IsLogic = 0; /*0x644db5*/
  return this; /*0x644dbd*/
}
}

// 0x645430
int BuildingTypeClass::FindOrCreateEx()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingTypeClass::FindOrCreateEx(AbstractClass *this)
{
  int v2; // esi
  _DWORD *v3; // eax
  ParticleTypeClass *v4; // eax
  int v6; // ecx
  ObjectClass *i; // edx

  if ( !_strcmpi(this, &stru_817460.sectionHead[1]) ) /*0x645444*/
    return -1; /*0x645444*/
  v2 = 0; /*0x64544b*/
  if ( *(int *)&HouseClass_Player.__pad_3C[32] <= 0 ) /*0x64544f*/
  {
LABEL_5:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x318u); /*0x645474*/
    if ( v3 ) /*0x645483*/
      v4 = (ParticleTypeClass *)BuildingTypeClass::Construct(v3, this); /*0x645488*/
    else
      v4 = 0; /*0x645494*/
    v6 = 0; /*0x64549c*/
    if ( *(int *)&HouseClass_Player.__pad_3C[32] > 0 ) /*0x6454a0*/
    {
      for ( i = *(ObjectClass **)&HouseClass_Player.__pad_3C[20]; /*0x6454a2*/
            *(ParticleTypeClass **)i->__pad_0 != v4;
            i = (ObjectClass *)((char *)i + 4) )
      {
        if ( ++v6 >= *(int *)&HouseClass_Player.__pad_3C[32] ) /*0x6454b2*/
          return -1; /*0x6454b2*/
      }
      return v6; /*0x6454bb*/
    }
    return -1; /*0x6454b9*/
  }
  while ( _strcmpi(this, (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * v2) + 36)) ) /*0x645468*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_3C[32] ) /*0x645472*/
      goto LABEL_5; /*0x645472*/
  }
  return v2; /*0x645491*/
}
}

// 0x7171A0
int BuildingTypeClass::ProcessPower(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BuildingTypeClass::ProcessPower(int this, AbstractClass *aP1)
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
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 752), *(AbstractClass **)(this + 756)); /*0x7171be*/
  Power::TimerProcess(aP1); /*0x7171cc*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 768), *(AbstractClass **)(this + 772)); /*0x7171e1*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 776), *(AbstractClass **)(this + 780)); /*0x7171f6*/
  Power::TimerProcess(aP1); /*0x717204*/
  Power::TimerProcess(aP1); /*0x717212*/
  Power::TimerProcess(aP1); /*0x717220*/
  Power::TimerProcess(aP1); /*0x71722e*/
  Power::TimerProcess(aP1); /*0x71723c*/
  Checksummer::Add_Buffer((unsigned int *)aP1, (unsigned __int8 *)(this + 844), (IUnknown *)0x10); /*0x71724c*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 864), *(AbstractClass **)(this + 868)); /*0x717261*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 872), *(AbstractClass **)(this + 876)); /*0x717276*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 880), *(AbstractClass **)(this + 884)); /*0x71728b*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 888), *(AbstractClass **)(this + 892)); /*0x7172a0*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 896), *(AbstractClass **)(this + 900)); /*0x7172b5*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 904), *(AbstractClass **)(this + 908)); /*0x7172ca*/
  LOBYTE(v3) = this->HoverAttack; /*0x7172cf*/
  Power::FlagProcess(aP1, v3); /*0x7172d8*/
  v4 = Power::TimerProcess(aP1); /*0x7172e6*/
  LOBYTE(v4) = this->ImmuneToVeins; /*0x7172eb*/
  Power::FlagProcess(aP1, v4); /*0x7172f4*/
  LOBYTE(v5) = this->TiberiumHeal; /*0x7172f9*/
  Power::FlagProcess(aP1, v5); /*0x717302*/
  LOBYTE(v6) = this->TargetLaser; /*0x717307*/
  Power::FlagProcess(aP1, v6); /*0x717310*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 928), *(AbstractClass **)(this + 932)); /*0x717325*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 944), *(AbstractClass **)(this + 948)); /*0x71733a*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 936), *(AbstractClass **)(this + 940)); /*0x71734f*/
  Power::TimerProcess(aP1); /*0x71735d*/
  Power::TimerProcess(aP1); /*0x71736b*/
  Power::TimerProcess(aP1); /*0x717379*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 968), *(AbstractClass **)(this + 972)); /*0x71738e*/
  Power::TimerProcess(aP1); /*0x71739c*/
  Power::TimerProcess(aP1); /*0x7173aa*/
  Power::TimerProcess(aP1); /*0x7173b8*/
  Power::TimerProcess(aP1); /*0x7173c6*/
  Power::TimerProcess(aP1); /*0x7173d4*/
  Power::TimerProcess(aP1); /*0x7173e2*/
  Power::TimerProcess(aP1); /*0x7173f0*/
  Power::TimerProcess(aP1); /*0x7173fe*/
  Power::TimerProcess(aP1); /*0x71740c*/
  Power::TimerProcess(aP1); /*0x71741a*/
  Power::TimerProcess(aP1); /*0x717428*/
  Power::TimerProcess(aP1); /*0x717436*/
  Power::TimerProcess(aP1); /*0x717444*/
  Power::TimerProcess(aP1); /*0x717452*/
  Power::TimerProcess(aP1); /*0x717460*/
  Power::TimerProcess(aP1); /*0x71746e*/
  Power::TimerProcess(aP1); /*0x71747c*/
  Power::TimerProcess(aP1); /*0x71748a*/
  Power::TimerProcess(aP1); /*0x717498*/
  Power::TimerProcess(aP1); /*0x7174a6*/
  Power::TimerProcess(aP1); /*0x7174b4*/
  Power::TimerProcess(aP1); /*0x7174c2*/
  Power::TimerProcess(aP1); /*0x7174d0*/
  Power::TimerProcess(aP1); /*0x7174de*/
  Power::TimerProcess(aP1); /*0x7174ec*/
  Power::TimerProcess(aP1); /*0x7174fa*/
  Power::TimerProcess(aP1); /*0x717508*/
  Power::TimerProcess(aP1); /*0x717516*/
  Power::TimerProcess(aP1); /*0x717524*/
  Power::TimerProcess(aP1); /*0x717532*/
  Power::TimerProcess(aP1); /*0x717540*/
  Power::TimerProcess(aP1); /*0x71754e*/
  Power::TimerProcess(aP1); /*0x71755c*/
  Power::TimerProcess(aP1); /*0x71756a*/
  Power::TimerProcess(aP1); /*0x717578*/
  Power::TimerProcess(aP1); /*0x717586*/
  Power::TimerProcess(aP1); /*0x717594*/
  Power::TimerProcess(aP1); /*0x7175a2*/
  Power::TimerProcess(aP1); /*0x7175b0*/
  v7 = Power::TimerProcess(aP1); /*0x7175be*/
  LOBYTE(v7) = this->IsTrain; /*0x7175c3*/
  Power::FlagProcess(aP1, v7); /*0x7175cc*/
  LOBYTE(v8) = this->IsDropship; /*0x7175d1*/
  Power::FlagProcess(aP1, v8); /*0x7175da*/
  LOBYTE(v9) = this->ToProtect; /*0x7175df*/
  v10 = Power::FlagProcess(aP1, v9); /*0x7175e8*/
  LOBYTE(v10) = this->Disableable; /*0x7175ed*/
  Power::FlagProcess(aP1, v10); /*0x7175f6*/
  LOBYTE(v11) = this->Unbuildable; /*0x7175fb*/
  Power::FlagProcess(aP1, v11); /*0x717604*/
  LOBYTE(v12) = this->DoubleOwned; /*0x717609*/
  v13 = Power::FlagProcess(aP1, v12); /*0x717612*/
  LOBYTE(v13) = this->Invisible; /*0x717617*/
  Power::FlagProcess(aP1, v13); /*0x717620*/
  LOBYTE(v14) = this->RadarVisible; /*0x717625*/
  Power::FlagProcess(aP1, v14); /*0x71762e*/
  LOBYTE(v15) = this->HasPrimary; /*0x717633*/
  v16 = Power::FlagProcess(aP1, v15); /*0x71763c*/
  LOBYTE(v16) = this->Sensors; /*0x717641*/
  Power::FlagProcess(aP1, v16); /*0x71764a*/
  LOBYTE(v17) = this->Nominal; /*0x71764f*/
  Power::FlagProcess(aP1, v17); /*0x717658*/
  LOBYTE(v18) = this->DontScore; /*0x71765d*/
  v19 = Power::FlagProcess(aP1, v18); /*0x717666*/
  LOBYTE(v19) = this->DamageSelf; /*0x71766b*/
  Power::FlagProcess(aP1, v19); /*0x717674*/
  LOBYTE(v20) = this->Turret; /*0x717679*/
  Power::FlagProcess(aP1, v20); /*0x717682*/
  LOBYTE(v21) = *(_BYTE *)(this + 3276); /*0x717687*/
  v22 = Power::FlagProcess(aP1, v21); /*0x717690*/
  LOBYTE(v22) = *(_BYTE *)(this + 3277); /*0x717695*/
  Power::FlagProcess(aP1, v22); /*0x71769e*/
  LOBYTE(v23) = *(_BYTE *)(this + 3279); /*0x7176a3*/
  Power::FlagProcess(aP1, v23); /*0x7176ac*/
  LOBYTE(v24) = *(_BYTE *)(this + 3280); /*0x7176b1*/
  v25 = Power::FlagProcess(aP1, v24); /*0x7176ba*/
  LOBYTE(v25) = this->Naval; /*0x7176bf*/
  Power::FlagProcess(aP1, v25); /*0x7176c8*/
  LOBYTE(v26) = this->Remapable; /*0x7176cd*/
  Power::FinalizeDrain(aP1, v26); /*0x7176d6*/
  LOBYTE(v27) = this->Cloakable; /*0x7176db*/
  v28 = Power::FinalizeDrain(aP1, v27); /*0x7176e4*/
  LOBYTE(v28) = *(_BYTE *)(this + 3284); /*0x7176e9*/
  Power::FlagProcess(aP1, v28); /*0x7176f2*/
  LOBYTE(v29) = *(_BYTE *)(this + 3348); /*0x7176f7*/
  Power::FlagProcess(aP1, v29); /*0x717700*/
  LOBYTE(v30) = *(_BYTE *)(this + 3349); /*0x717705*/
  v31 = Power::FlagProcess(aP1, v30); /*0x71770e*/
  LOBYTE(v31) = *(_BYTE *)(this + 3360); /*0x717713*/
  Power::FlagProcess(aP1, v31); /*0x71771c*/
  LOBYTE(v32) = *(_BYTE *)(this + 3361); /*0x717721*/
  Power::FlagProcess(aP1, v32); /*0x71772a*/
  LOBYTE(v33) = *(_BYTE *)(this + 3363); /*0x71772f*/
  v34 = Power::FlagProcess(aP1, v33); /*0x717738*/
  LOBYTE(v34) = *(_BYTE *)(this + 3364); /*0x71773d*/
  Power::FlagProcess(aP1, v34); /*0x717746*/
  LOBYTE(v35) = *(_BYTE *)(this + 3365); /*0x71774b*/
  Power::FlagProcess(aP1, v35); /*0x717754*/
  LOBYTE(v36) = *(_BYTE *)(this + 3366); /*0x717759*/
  v37 = Power::FlagProcess(aP1, v36); /*0x717762*/
  LOBYTE(v37) = *(_BYTE *)(this + 3518); /*0x717767*/
  Power::FlagProcess(aP1, v37); /*0x717770*/
  LOBYTE(v38) = *(_BYTE *)(this + 3519); /*0x717775*/
  Power::FlagProcess(aP1, v38); /*0x71777e*/
  LOBYTE(v39) = this->MobileFire; /*0x717783*/
  v40 = Power::FlagProcess(aP1, v39); /*0x71778c*/
  LOBYTE(v40) = this->OpportunityFire; /*0x717791*/
  Power::FlagProcess(aP1, v40); /*0x71779a*/
  LOBYTE(v41) = this->DistributedFire; /*0x71779f*/
  return Power::FlagProcess(aP1, v41); /*0x7177ad*/
}
}

// 0x7178C0
unsigned int * BuildingTypeClass::GetUpgradeOffset(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BuildingTypeClass_GetUpgradeOffset(int this, _DWORD *a2)
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

  if ( this->DamSmkOffScrnRel ) /*0x7178c6*/
  {
    v3 = this->DamageSmokeOffset; /*0x7178d4*/
    v4 = *(_DWORD *)(this + 1972); /*0x7178da*/
    v15[0] = v3; /*0x7178e1*/
    v15[1] = v4; /*0x7178e6*/
    v5 = World::ToScreen((float *)MEMORY[0x887324], v14, v15); /*0x7178fb*/
    v6 = *v5; /*0x717900*/
    v7 = v5[1]; /*0x717905*/
    v14[0] = 10 * *(_DWORD *)(this + 1976); /*0x71791b*/
    v8 = v6 - v14[0]; /*0x717927*/
    v9 = v7 - v14[0]; /*0x717929*/
    v10 = Math::Sqrt((double)v14[0] * (double)v14[0] + (double)v14[0] * (double)v14[0]); /*0x717936*/
    v11 = Math::RoundToInt(v10 * 0.58); /*0x717944*/
    if ( *(int *)(this + 1976) >= 0 ) /*0x717951*/
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
    *a2 = this->DamageSmokeOffset; /*0x71797f*/
    a2[1] = *(_DWORD *)(this + 1972); /*0x717984*/
    a2[2] = *(_DWORD *)(this + 1976); /*0x71798b*/
    return a2; /*0x717971*/
  }
}
}

// 0x746000
bool BuildingTypeClass::IsPlacementValid(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall BuildingTypeClass::IsPlacementValid(void *this, IUnknown *aP1, IUnknown *aP2)
{
  signed int v4; // ecx
  int v5; // eax
  IUnknown *v6; // eax

  if ( (*(int (__fastcall **)(void *))(this->TurretOffset)(this) < 0 /*0x746030*/
    || !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)aP1, (__int16 *)aP2, 0, 0, 0, 0) )
  {
    return 1; /*0x746030*/
  }
  if ( LOWORD(aP1->field_0) == LOWORD(aP2->field_0) && HIWORD(aP1->field_0) == HIWORD(aP2->field_0) ) /*0x746050*/
    return 0; /*0x746059*/
  v4 = abs32(SHIWORD(aP2->field_0) - SHIWORD(aP1->field_0)); /*0x74606b*/
  v5 = abs32(SLOWORD(aP2->field_0) - SLOWORD(aP1->field_0)); /*0x746078*/
  if ( v5 <= v4 ) /*0x74607c*/
    v5 = v4; /*0x74607e*/
  if ( v5 == 1 ) /*0x746083*/
    return 0; /*0x74608c*/
  if ( v5 >= 12 /*0x7460ad*/
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], aP1, (TechnoClass *)1)
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], aP2, (TechnoClass *)1) )
  {
    return 1; /*0x7460f7*/
  }
  v6 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP2) + 80) >> 8); /*0x7460cd*/
  LOBYTE(v6) = (unsigned __int8)v6 & 1; /*0x7460d0*/
  return Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], aP1, aP2, (TechnoClass *)this, 0, v6, 0) > 15; /*0x746052*/
}
}

// 0x7480D0
UnitTypeClass * BuildingTypeClass::FindOrCreateAlt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
UnitTypeClass *__thiscall BuildingTypeClass::FindOrCreateAlt(INIClass *this)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x7480ec*/
    return 0; /*0x74814f*/
  v2 = 0; /*0x7480fd*/
  if ( (int)g_CrateCount <= 0 ) /*0x748101*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0xE78u); /*0x748126*/
    if ( v3 ) /*0x748135*/
      return (UnitTypeClass *)UnitTypeClass::UnitTypeClass(v3, this); /*0x748141*/
    return 0; /*0x748135*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * v2] + 36), this) ) /*0x74811a*/
  {
    if ( ++v2 >= (int)g_CrateCount ) /*0x748124*/
      goto LABEL_6; /*0x748124*/
  }
  return *(UnitTypeClass **)&g_UnitTypeCount2->__pad_0[4 * v2]; /*0x74813f*/
}
}

// 0x41C500
char BuildingTypeClass::Enqueue(int a2)
{
{
    char *v3;
    int i;
    int v5;
    int *v6;
    int v7;
    if ( a2 < 0 )
    return 0;
    v3 = (char *)__2_YAPAXI_Z(8 * (a2 + this->vtable2));
    if ( !v3 )
    return 0;
    for ( i = 0; i < this->vtable1; *(int *)&v3[v5 + 4] = v6[1] )
  {
    v5 = 8 * i;
    v6 = (int *)(*(int *)(this) + 8 * i++);
    *(int *)&v3[v5] = *v6;
  }
    __3_YAXPAX_Z(*(void **)this);
    v7 = a2 + this->vtable2;
    *(int *)this = v3;
    this->vtable2 = v7;
    this->uniqueId = 0;
    return 1;
}
}

// 0x41C590
size_t BuildingTypeClass::Dequeue(BuildingClass * aP1)
{
{
    size_t result;
    ObjectClass *v4;
    ObjectClass *v5;
    int v6;
    ObjectClass *v7;
    result = (size_t)this->vtable1;
    if ( result )
  {
    if ( !(unsigned char)this->vtable3 )
    {
    qsort(*(void**)this, result, 8u, CompareFunction);
    this->uniqueId = 0;
    this->vtable3 = 1;
    }
    v4 = (ObjectClass *)*(void**)this;
    v5 = *(ObjectClass **)aP1->__pad_0;
    v6 = (int)this->vtable1;
    if ( v6 <= 0 )
    return 0;
    while ( 1 )
    {
    v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)];
    if ( (int)v7 <= (int)v5 )
      {
    if ( v7 == v5 )
    return (size_t)v4 + 8 * (v6 / 2);
    v4 = (ObjectClass *)((char *)(v4) + 8 * (v6 / 2) + 8);
    v6 += -1 - v6 / 2;
      }
    else
      {
    v6 /= 2;
      }
    if ( v6 <= 0 )
    return 0;
    }
  }
    return result;
}
}

// 0x45E7B0
int BuildingTypeClass::FindIndexByName()
{
{
    int v2;
    if ( !this )
    return -1;
    v2 = 0;
    if ( (int)g_TriggerClassCount <= 0 )
    return -1;
    while ( _strcmpi((const void *)(*((int *)(g_TriggerTypeCount) + v2) + 36), this) )
  {
    if ( ++v2 >= (int)g_TriggerClassCount )
    return -1;
  }
    return v2;
}
}

// 0x45ECE0
int BuildingTypeClass::GetMaxPips()
{
{
    int result;
    int v2;
    int v3;
    result = 60 * DataGlobal_8192B8[this->Foundation] / 8;
    if ( this->PipScale == 2 )
  {
    if ( this->Weeder )
    {
    v2 = g_RulesClass_Instance[1].?[1];
    if ( v2 >= 0 )
      {
    if ( v2 <= result )
    return g_RulesClass_Instance[1].?[1];
      }
    else
      {
    return 0;
      }
    }
    else
    {
    v3 = this->Storage;
    if ( v3 >= 0 )
      {
    if ( v3 <= result )
    return v3;
      }
    else
      {
    return 0;
      }
    }
  }
    else if ( this->PipScale != 4 )
  {
    return ObjectClass::GetModeSpecificValue((int *)this);
  }
    return result;
}
}

// 0x464AF0
unsigned int * BuildingTypeClass::GetSizeInLeptons(unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    v2 = this->Foundation;
    v3 = DataGlobal_89DDB8 *(void**)this->Height;
    v2 *= 4;
    v4 = *(int *)((char *)(DataGlobal_8192B8) + v2);
    v5 = *(int *)((char *)(DataGlobal_819310) + v2);
    *a2 = v4 << 8;
    *((int*)(a2) + 1) = v5 << 8;
    *((int*)(a2) + 2) = v3;
    return a2;
}
}

// 0x465300
int BuildingTypeClass::SaveLoad_Prefix_0()
{
{
    int result;
    int v2;
    int v3;
    int i;
    int v5;
    int *v6;
    int *v7;
    int v8;
    result = TechnoTypeClass::SaveLoad_Prefix_0((int)v6, v6, v7, v8, v5);
    if ( result >= 0 )
  {
    v2 = *v7;
    v8 = v6[1507];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v2 + 16))(v7, &v8, 4, 0);
    if ( result >= 0 )
    {
    v3 = 0;
    if ( v8 <= 0 )
      {
    return 0;
      }
    else
      {
    for ( i = 0; ; i += 12 )
        {
    result = (*(int (__stdcall **)(int *, int, int, int))(*v7 + 16))(v7, i + v6[1506], 12, 0);
    if ( result < 0 )
    break;
    if ( ++v3 >= v8 )
    return 0;
        }
      }
    }
  }
    return result;
}
}

// 0x465380
int BuildingTypeClass::GetClassIdentifier()
{
{
    int *v2;
    if ( !v2 )
    return -2147467261;
    *v2 = -1366608933;
    v2[1] = 298976796;
    v2[2] = 1610654892;
    v2[3] = -1252326136;
    return 0;
}
}

// 0x465D90
int BuildingTypeClass::GetTypeIdentifier()
{
return 7;
}

// 0x465DA0
int BuildingTypeClass::GetObjectSize()
{
return 6040;
}

// 0x465DB0
int BuildingTypeClass::GetAuxField()
{
{
    return this->ArrayIndex;
}
}

// 0x465DC0
int BuildingTypeClass::ddtor()
{
{
    char v3;
    BuildingTypeClass::CleanupMembers((void **)this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}
}

// 0x474A90
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
{
    int v4;
    IUnknown *v5;
    bool v6;
    char Destination[32];
    INIClass::GetString( this, aP1, a2, *(INIClass **)(*(int *)(DataGlobal_B05488.field_4C + 4 * (int)aP3) + 772), (INIClass *)Destination, 32);
    v4 = 0;
    if ( *(int *)DataGlobal_B05488.__pad_58 <= 0 )
    return (int)aP3->__pad_0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    while ( 1 )
  {
    v6 = _strcmpi(*(const void **)(*(&v5->field_0 + v4) + 772), Destination) == 0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    if ( v6 && *(int *)(*(int *)(DataGlobal_B05488.field_4C + 4 * v4) + 784) != 1 )
    break;
    if ( ++v4 >= *(int *)DataGlobal_B05488.__pad_58 )
    return (int)aP3->__pad_0;
  }
    return v4;
}
}

// 0x478850
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{
{
    char *v4;
    char *v5;
    int v6;
    char *v8;
    char *v9;
    int v10;
    v4 = 0;
    this->vtable1 = 0;
    this->vtable2 = a2;
    this->vtable3 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_RGBClass;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v8 = (char *)__2_YAPAXI_Z(3 * a2);
    if ( v8 )
    {
    if ( a2 - 1 >= 0 )
      {
    v9 = v8 + 2;
    v10 = a2;
    do
        {
    *(v9 - 2) = 0;
    *(v9 - 1) = 0;
    *v9 = 0;
    v9 += 3;
    --v10;
        }
    while ( v10 );
      }
    v4 = v8;
    }
    this->vtable1 = v4;
    this->IsAllocated = 1;
    return this;
  }
    if ( a2 - 1 >= 0 )
  {
    v5 = (char *)(a3 + 2);
    v6 = a2;
    do
    {
    *(v5 - 2) = 0;
    *(v5 - 1) = 0;
    *v5 = 0;
    v5 += 3;
    --v6;
    }
    while ( v6 );
  }
    this->vtable1 = a3;
    return this;
}
}

// 0x4C9680
int BuildingTypeClass::GetPowerOutput(ObjectClass * aP1)
{
{
    ObjectClass *result;
    short v3;
    result = aP1;
    if ( (int)aP1 >= 127 )
    result = (ObjectClass *)127;
    LOBYTE(v3) = 0;
    HIBYTE(v3) = (char)result;
    this->abstractFlags = v3;
    return (int)result->__pad_0;
}
}

// 0x747370
int BuildingTypeClass::FindIndex()
{
{
    int v2;
    if ( !this )
    return -1;
    v2 = 0;
    if ( (int)g_CrateCount <= 0 )
    return -1;
    while ( _strcmpi((const void *)(*(int *)&g_UnitTypeCount2->__pad_0[4 * v2] + 36), this) )
  {
    if ( ++v2 >= (int)g_CrateCount )
    return -1;
  }
    return v2;
}
}
