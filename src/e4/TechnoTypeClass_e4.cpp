// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x48DCD0
int TechnoTypeClass::GetByTypeAndIndex(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((_DWORD *)g_UnitTypeCount2 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((_DWORD *)g_AircraftTypeCount + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((_DWORD *)g_TriggerTypeCount + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((_DWORD *)Factory_ExitCellTable + a2); /*0x48dcff*/
      break; /*0x48dd02*/
    default:
      result = 0; /*0x48dd0d*/
      break; /*0x48dd0d*/
  }
  return result; /*0x48dcef*/
}
}

// 0x50BDF0
int TechnoTypeClass::Dispatch(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)aP1->vtable0 + 44))(aP1) ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
      result = *(float *)(this->q034 + 284); /*0x50be37*/
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( aP1[4].VoxelCaches[5] == 5 ) /*0x50be47*/
        result = *(float *)(this->q034 + 292); /*0x50be4e*/
      else
        result = *(float *)(this->q034 + 288); /*0x50be5c*/
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
      result = *(float *)(this->q034 + 276); /*0x50be1b*/
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
      result = *(float *)(this->q034 + 280); /*0x50be29*/
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/
}
}

// 0x50BEB0
int TechnoTypeClass::GetThreatMultiplier(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)aP1->vtable0 + 44))(aP1) ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
      result = this->q14E6; /*0x50beec*/
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( aP1[4].VoxelCaches[5] == 5 ) /*0x50befe*/
        result = this->q14E8; /*0x50bf00*/
      else
        result = this->q14E7; /*0x50bf0b*/
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
      result = this->q14E4; /*0x50bed6*/
      break; /*0x50bede*/
    case 40: /*0x50becf*/
      result = this->q14E5; /*0x50bee1*/
      break; /*0x50bee9*/
    default:
      result = 1.0; /*0x50bf16*/
      break; /*0x50bf16*/
  }
  return result; /*0x50bedc*/
}
}

// 0x6F06E0
unsigned int * TechnoTypeClass::LoadBase(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  TeamTypeClass *v3; // ecx
  CCINIClass *v6; // edx
  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6f06ea*/
  *(this + 38) = -1; /*0x6f06f7*/
  this->Armor = -1; /*0x6f06ff*/
  this->Strength = 1; /*0x6f0705*/
  this->Image = 0; /*0x6f070b*/
  this->ImageAllocated = 0; /*0x6f0723*/
  this->AlphaImage = 0; /*0x6f073b*/
  this->MainVoxel = 0; /*0x6f0753*/
  this->TurretVoxel = 7; /*0x6f076b*/
  this->q0B8 = -1; /*0x6f0775*/
  this->ChargerTurrets = 0; /*0x6f077b*/
  this->q0C0 = 0; /*0x6f0781*/
  this->q0C4 = 0; /*0x6f0787*/
  *(this + 50) = -1; /*0x6f078d*/
  this->DebrisMaximums = 0; /*0x6f0793*/
  this->q034 = 0; /*0x6f0799*/
  *(this + 53) = -1; /*0x6f079f*/
  this->unknown_double_360 = -1; /*0x6f07a5*/
  this->Weight = 0; /*0x6f07ab*/
  this->Size = 0; /*0x6f07b1*/
  this->HoverAttack = 0; /*0x6f07b7*/
  this->RollAngle = 0; /*0x6f07bd*/
  this->q0EC = 9; /*0x6f07c3*/
  this->unknown_3C0 = 1; /*0x6f07cd*/
  this->q3C4 = 0; /*0x6f07d3*/
  this->DeployTime = 0; /*0x6f07d9*/
  *((_BYTE *)this + 243) = 0; /*0x6f07df*/
  this->FireAngle = 0; /*0x6f07e5*/
  this->PipScale = 1; /*0x6f07eb*/
  this->PipsDrawForAll = 0; /*0x6f07f1*/
  this->LeptonMindControlOffset = 0; /*0x6f07f7*/
  *this = &TeamTypeClass::`vftable'; /*0x6f07fd*/
  this->vtable2 = &TeamTypeClass::`vftable'; /*0x6f0803*/
  this->vtable3 = &TeamTypeClass::`vftable'; /*0x6f080a*/
  this->vtable4 = &vt_TeamTypeClass; /*0x6f0811*/
  v3 = *(TeamTypeClass **)&HouseClass_Player[44900]; /*0x6f0818*/
  if ( *(int *)&HouseClass_Player[44900] < *(int *)&HouseClass_Player[44892] /*0x6f0857*/
    || (HouseClass_Player[44897] || !*(_DWORD *)&HouseClass_Player[44892])
    && *(int *)&HouseClass_Player[44904] > 0
  char v4; // al
    && (v4 = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player[44884] + 8))(
               &HouseClass_Player[44884],
               *(_DWORD *)&HouseClass_Player[44892] + *(_DWORD *)&HouseClass_Player[44904],
               0),
        v3 = *(TeamTypeClass **)&HouseClass_Player[44900],
        v4) )
  {
    *(_DWORD *)&HouseClass_Player[44900] = &v3->__pad_0[1]; /*0x6f085c*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44888] + 4 * (_DWORD)v3) = this; /*0x6f0868*/
    v3 = *(TeamTypeClass **)&HouseClass_Player[44900]; /*0x6f086b*/
  }
  int v5 = 0; /*0x6f0871*/
  if ( (int)v3 <= 0 ) /*0x6f0875*/
  {
LABEL_11:
    v5 = -1; /*0x6f0889*/
  }
  else
  {
    v6 = *(CCINIClass **)&HouseClass_Player[44888]; /*0x6f0877*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x6f087f*/
    {
      ++v5; /*0x6f0881*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x6f0882*/
      if ( v5 >= (int)v3 ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
  *(this + 38) = v5; /*0x6f088b*/
  if ( *(int *)&stru_B05488[41464] < *(int *)&stru_B05488[41456] /*0x6f08c5*/
    || (stru_B05488[41461] || !*(_DWORD *)&stru_B05488[41456])
    && *(int *)&stru_B05488[41468] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488[41448] + 8))(
         &stru_B05488[41448],
         *(_DWORD *)&stru_B05488[41456] + *(_DWORD *)&stru_B05488[41468],
         0) )
  {
    int v7 = (*(_DWORD *)&stru_B05488[41464])++; /*0x6f08d2*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488[41452] + 4 * v7) = this; /*0x6f08e1*/
  }
  return this; /*0x6f08e6*/
}
}

// 0x710AF0
void * TechnoTypeClass::ReadINI(char * Source, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  ObjectTypeClass::ConstructFull((int)this, Source); /*0x710afb*/
  this->WalkRate = 1; /*0x710b02*/
  this->IdleRate = 0; /*0x710b0e*/
  this->VeteranAbilities = 0; /*0x710b14*/
  this->ImageAllocated = 0; /*0x710b1c*/
  this->q0A9 = 0; /*0x710b28*/
  this->q0AA = 0; /*0x710b2f*/
  this->VoiceEnter = 0; /*0x710b36*/
  this->EliteAbilities = 0; /*0x710b3d*/
  *(_DWORD *)(this + 690) = 0; /*0x710b43*/
  *(_DWORD *)(this + 694) = 0; /*0x710b4b*/
  *(_DWORD *)(this + 698) = 0; /*0x710b51*/
  this->VoiceHarvest = 0; /*0x710b57*/
  this->SpecialThreatValue = 0; /*0x710b5e*/
  this->techLevel = 0; /*0x710b64*/
  this->MyEffectivenessCoefficient = 0; /*0x710b6a*/
  this->speed = 0; /*0x710b70*/
  this->TargetEffectivenessCoefficient = 0; /*0x710b76*/
  this->threatPosed = 0; /*0x710b7c*/
  this->TargetSpecialThreatCoefficient = 0; /*0x710b82*/
  this->cloakable = 0; /*0x710b88*/
  this->TargetStrengthCoefficient = 0; /*0x710b8e*/
  this->q0B9 = 0; /*0x710b94*/
  this->TargetDistanceCoefficient = 0; /*0x710b9a*/
  *((_DWORD *)this + 187) = 0; /*0x710ba0*/
  this->ThreatAvoidanceCoefficient = 0; /*0x710ba6*/
  *((_DWORD *)this + 189) = 0; /*0x710bac*/
  this->SlowdownDistance = 500; /*0x710bb2*/
  this->unknown_double_300 = -755914244; /*0x710bbc*/
  *((_DWORD *)this + 193) = 1063281229; /*0x710bc6*/
  this->AccelerationFactor = -343597384; /*0x710bd0*/
  this->q0C3 = 1067366481; /*0x710bda*/
  this->CloakingSpeed = 7; /*0x710be4*/
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
  this->DebrisTypes.Count = 0; /*0x710bf8*/
  this->DebrisTypes.CapacityIncrement = 10; /*0x710bfb*/
  this->DebrisTypes = &vt_TypeList_VoxelAnimTypeClass_const; /*0x710bfe*/
  VectorClass::Construct((_DWORD *)this + 204, 0, 0); /*0x710c0f*/
  this->DebrisMaximums.CapacityIncrement = 10; /*0x710c14*/
  this->DebrisMaximums.Count = 0; /*0x710c17*/
  this->DebrisMaximums = &vt_TypeList_int; /*0x710c1a*/
  this->Locomotor = 1247291207; /*0x710c2d*/
  this->SuppressionThreshold = 298948665; /*0x710c39*/
  this->JumpjetCrash = -1610610249; /*0x710c42*/
  this->qD60 = -777003740; /*0x710c4b*/
  this->unknown_double_360 = 0; /*0x710c4e*/
  this->q364 = 0; /*0x710c54*/
  this->unknown_double_368 = 0; /*0x710c5a*/
  this->qDB0 = 0; /*0x710c60*/
  this->Weight = 0; /*0x710c6b*/
  this->q374 = 1072693248; /*0x710c71*/
  this->PhysicalSize = 0; /*0x710c77*/
  *((_DWORD *)this + 223) = 0x40000000; /*0x710c7d*/
  this->Size = 0; /*0x710c87*/
  this->q384 = 1072693248; /*0x710c8d*/
  this->SizeLimit = 0; /*0x710c93*/
  this->q38C = 0; /*0x710c99*/
  this->HoverAttack = 0; /*0x710c9f*/
  this->VHPScan = 0; /*0x710ca5*/
  this->unknown_int_398 = 15; /*0x710cab*/
  this->RollAngle = 942502757; /*0x710cb5*/
  *((_DWORD *)this + 233) = 1071694162; /*0x710cbf*/
  this->PitchSpeed = 0; /*0x710cc9*/
  this->q3AC = 1070596096; /*0x710ccf*/
  this->PitchAngle = 1256670343; /*0x710cd9*/
  *((_DWORD *)this + 237) = 1071011608; /*0x710ce3*/
  this->BuildLimit = 0x7FFFFFFF; /*0x710cf0*/
  this->Category = -1; /*0x710cfa*/
  this->unknown_3C0 = 0; /*0x710d00*/
  this->DeployTime = 0; /*0x710d06*/
  *((_DWORD *)this + 243) = 0; /*0x710d0c*/
  this->FireAngle = 8; /*0x710d12*/
  this->PipScale = 0; /*0x710d1c*/
  this->PipsDrawForAll = 0; /*0x710d22*/
  this->LeptonMindControlOffset = 70; /*0x710d28*/
  this->PixelSelectionBracketDelta = 0; /*0x710d33*/
  this->PipWrap = 0; /*0x710d40*/
  VectorClass::BuildingTypeConstructor((_DWORD *)this + 250, 0, 0); /*0x710d46*/
  this->Dock.CapacityIncrement = 10; /*0x710d4b*/
  this->Dock.Count = 0; /*0x710d51*/
  this->Dock = &vt_TypeList_BuildingTypeClass_const; /*0x710d57*/
  this->DeploysInto = 0; /*0x710d61*/
  this->UndeploysInto = 0; /*0x710d67*/
  this->PowersUnit = 0; /*0x710d6e*/
  this->PoweredUnit = 0; /*0x710d7b*/
  VectorClass::Construct((_DWORD *)this + 261, 0, 0); /*0x710d81*/
  this->VoiceSelect.CapacityIncrement = 10; /*0x710d8e*/
  this->VoiceSelect.Count = 0; /*0x710d94*/
  this->VoiceSelect = &vt_TypeList_int; /*0x710d9a*/
  VectorClass::Construct((_DWORD *)this + 268, 0, 0); /*0x710da4*/
  this->VoiceSelectEnslaved.CapacityIncrement = 10; /*0x710db1*/
  this->VoiceSelectEnslaved.Count = 0; /*0x710db7*/
  this->VoiceSelectEnslaved = &vt_TypeList_int; /*0x710dbd*/
  VectorClass::Construct((_DWORD *)this + 275, 0, 0); /*0x710dc7*/
  this->VoiceSelectDeactivated.CapacityIncrement = 10; /*0x710dd4*/
  this->VoiceSelectDeactivated.Count = 0; /*0x710dda*/
  this->VoiceSelectDeactivated = &vt_TypeList_int; /*0x710de0*/
  VectorClass::Construct((_DWORD *)this + 282, 0, 0); /*0x710dea*/
  this->VoiceMove.CapacityIncrement = 10; /*0x710df7*/
  this->VoiceMove.Count = 0; /*0x710dfd*/
  this->VoiceMove = &vt_TypeList_int; /*0x710e03*/
  VectorClass::Construct((_DWORD *)this + 289, 0, 0); /*0x710e0d*/
  this->VoiceAttack.CapacityIncrement = 10; /*0x710e1a*/
  this->VoiceAttack.Count = 0; /*0x710e20*/
  this->VoiceAttack = &vt_TypeList_int; /*0x710e26*/
  VectorClass::Construct((_DWORD *)this + 296, 0, 0); /*0x710e30*/
  this->VoiceSpecialAttack.CapacityIncrement = 10; /*0x710e3d*/
  this->VoiceSpecialAttack.Count = 0; /*0x710e43*/
  this->VoiceSpecialAttack = &vt_TypeList_int; /*0x710e49*/
  VectorClass::Construct((_DWORD *)this + 303, 0, 0); /*0x710e53*/
  this->VoiceDie.CapacityIncrement = 10; /*0x710e58*/
  this->VoiceDie.Count = 0; /*0x710e5e*/
  this->VoiceDie = &vt_TypeList_int; /*0x710e6c*/
  VectorClass::Construct((_DWORD *)this + 310, 0, 0); /*0x710e76*/
  this->VoiceFeedback.CapacityIncrement = 10; /*0x710e83*/
  this->VoiceFeedback.Count = 0; /*0x710e89*/
  this->VoiceFeedback = &vt_TypeList_int; /*0x710e8f*/
  VectorClass::Construct((_DWORD *)this + 317, 0, 0); /*0x710e99*/
  this->MoveSound.CapacityIncrement = 10; /*0x710ea6*/
  this->MoveSound.Count = 0; /*0x710eac*/
  this->MoveSound = &vt_TypeList_int; /*0x710eb2*/
  VectorClass::Construct((_DWORD *)this + 324, 0, 0); /*0x710ebc*/
  this->DieSound.CapacityIncrement = 10; /*0x710ec1*/
  this->DieSound.Count = 0; /*0x710ec7*/
  this->DieSound = &vt_TypeList_int; /*0x710ecd*/
  this->AuxSound1 = -1; /*0x710ed7*/
  this->AuxSound2 = -1; /*0x710edd*/
  this->CreateSound = -1; /*0x710ee3*/
  this->DamageSound = -1; /*0x710ee9*/
  this->ImpactWaterSound = -1; /*0x710eef*/
  this->ImpactLandSound = -1; /*0x710ef5*/
  this->CrashingSound = -1; /*0x710efb*/
  this->SinkingSound = -1; /*0x710f01*/
  this->VoiceFalling = -1; /*0x710f07*/
  this->VoiceCrashing = -1; /*0x710f0d*/
  this->VoiceSinking = -1; /*0x710f13*/
  this->VoiceEnter = -1; /*0x710f19*/
  this->VoiceCapture = -1; /*0x710f1f*/
  this->TurretRotateSound = -1; /*0x710f25*/
  this->EnterTransportSound = -1; /*0x710f2b*/
  this->LeaveTransportSound = -1; /*0x710f31*/
  this->DeploySound = -1; /*0x710f37*/
  this->UndeploySound = -1; /*0x710f3d*/
  this->ChronoInSound = -1; /*0x710f43*/
  this->ChronoOutSound = -1; /*0x710f49*/
  this->VoiceHarvest = -1; /*0x710f4f*/
  this->VoicePrimaryWeaponAttack = -1; /*0x710f55*/
  this->VoicePrimaryEliteWeaponAttack = -1; /*0x710f5b*/
  this->VoiceSecondaryWeaponAttack = -1; /*0x710f61*/
  this->VoiceSecondaryEliteWeaponAttack = -1; /*0x710f68*/
  this->VoiceDeploy = -1; /*0x710f75*/
  this->VoiceUndeploy = -1; /*0x710f7b*/
  this->EnterGrinderSound = -1; /*0x710f81*/
  this->LeaveGrinderSound = -1; /*0x710f87*/
  this->EnterBioReactorSound = -1; /*0x710f8d*/
  this->LeaveBioReactorSound = -1; /*0x710f93*/
  this->ActivateSound = -1; /*0x710f99*/
  this->DeactivateSound = -1; /*0x710f9f*/
  this->MindClearedSound = -1; /*0x710fa5*/
  this->MovementZone = 0; /*0x710fab*/
  this->GuardRange = 0; /*0x710fb1*/
  this->MinDebris = 0; /*0x710fb7*/
  this->MaxDebris = 0; /*0x710fbd*/
  AnimTypeVector::Constructor((_DWORD *)this + 369, 0, 0); /*0x710fc3*/
  this->DebrisAnims.CapacityIncrement = 10; /*0x710fc8*/
  this->DebrisAnims.Count = 0; /*0x710fce*/
  this->DebrisAnims = &vt_TypeList_AnimTypeClass_const; /*0x710fd4*/
  this->Passengers = 0; /*0x710fde*/
  this->OpenTopped = 0; /*0x710fe4*/
  this->Sight = 0; /*0x710fea*/
  this->ResourceGatherer = 0; /*0x710ff0*/
  this->ResourceDestination = 0; /*0x710ff6*/
  this->RevealToAll = 0; /*0x710ffc*/
  this->Drainable = 0; /*0x711002*/
  this->SensorsSight = 0; /*0x711008*/
  this->DetectDisguiseRange = 0; /*0x71100e*/
  this->BombSight = 0; /*0x711014*/
  this->LeadershipRating = 5; /*0x71101a*/
  this->NavalTargeting = 0; /*0x711024*/
  this->LandTargeting = 0; /*0x71102a*/
  this->BuildTimeMultiplier = 1065353216; /*0x711030*/
  this->MindControlRingOffset = 140; /*0x71103a*/
  this->Cost = 0; /*0x711044*/
  this->Soylent = 0; /*0x71104a*/
  this->FlightLevel = -1; /*0x711050*/
  this->AirstrikeTeam = 0; /*0x711056*/
  this->EliteAirstrikeTeam = 0; /*0x71105c*/
  this->AirstrikeTeamType = 0; /*0x711062*/
  this->EliteAirstrikeTeamType = 0; /*0x711068*/
  this->AirstrikeRechargeTime = 0; /*0x71106e*/
  this->EliteAirstrikeRechargeTime = 0; /*0x711075*/
  this->TechLevel = 255; /*0x711082*/
  VectorClass::Construct((_DWORD *)this + 398, 0, 0); /*0x71108c*/
  this->Prerequisite.CapacityIncrement = 10; /*0x711099*/
  this->Prerequisite.Count = 0; /*0x71109f*/
  this->Prerequisite = &vt_TypeList_int; /*0x7110a5*/
  VectorClass::Construct((_DWORD *)this + 405, 0, 0); /*0x7110af*/
  this->PrerequisiteOverride.CapacityIncrement = 10; /*0x7110b8*/
  this->PrerequisiteOverride.Count = 0; /*0x7110be*/
  this->PrerequisiteOverride = &vt_TypeList_int; /*0x7110c4*/
  this->ThreatPosed = 0; /*0x7110ce*/
  this->Points = 0; /*0x7110d4*/
  this->Speed = 0; /*0x7110da*/
  this->SpeedType = a3; /*0x7110e0*/
  this->InitialAmmo = -1; /*0x7110e6*/
  this->Ammo = -1; /*0x7110ec*/
  this->IFVMode = 0; /*0x7110f2*/
  this->AirRangeBonus = 0; /*0x7110f8*/
  this->BerserkFriendly = 0; /*0x7110fe*/
  this->SprayAttack = 0; /*0x711104*/
  this->Pushy = 0; /*0x71110a*/
  this->Natural = 0; /*0x711110*/
  this->Unnatural = 0; /*0x711116*/
  this->CloseRange = 0; /*0x71111c*/
  this->Reload = 0; /*0x711122*/
  this->EmptyReload = -1; /*0x711128*/
  this->ReloadIncrement = 0; /*0x71112e*/
  this->RadialFireSegments = 0; /*0x711134*/
  this->DeployFireWeapon = 1; /*0x71113a*/
  this->DeployFire = 0; /*0x711144*/
  this->DeployToLand = 0; /*0x71114a*/
  this->MobileFire = 1; /*0x711150*/
  this->OpportunityFire = 0; /*0x711157*/
  this->DistributedFire = 0; /*0x71115d*/
  this->DamageReducesReadiness = 0; /*0x711163*/
  this->ReadinessReductionMultiplier = 0; /*0x711169*/
  this->UnloadingClass = 0; /*0x71116f*/
  this->DeployingAnim = 0; /*0x711175*/
  this->AttackFriendlies = 0; /*0x71117b*/
  this->AttackCursorOnFriendlies = 0; /*0x711181*/
  this->UndeployDelay = -1; /*0x711187*/
  this->PreventAttackMove = 0; /*0x71118d*/
  this->OwnerFlags = 0; /*0x711193*/
  this->AIBasePlanningSide = -1; /*0x71119e*/
  this->StupidHunt = 0; /*0x7111a4*/
  this->AllowedToStartInMultiplayer = 1; /*0x7111ac*/
  if ( &g_INI_DefaultBuffer ) /*0x7111b9*/
  {
    strncpy(this + 1750, &g_INI_DefaultBuffer, 0x18u); /*0x7111c7*/
    this->q6EE = 0; /*0x7111cf*/
  }
  else
  {
    this->CameoFile = 0; /*0x7111bb*/
  }
  this->Cameo = 0; /*0x7111da*/
  this->CameoAllocated = 0; /*0x7111e2*/
  if ( &g_INI_DefaultBuffer ) /*0x7111ee*/
  {
    strncpy(this + 1781, &g_INI_DefaultBuffer, 0x18u); /*0x7111fc*/
    this->q70D = 0; /*0x711204*/
  }
  else
  {
    this->AltCameoFile = 0; /*0x7111f0*/
  }
  this->AltCameo = 0; /*0x71120a*/
  this->AltCameoAllocated = 0; /*0x711210*/
  this->RotCount = 0; /*0x711216*/
  this->ROT = 0; /*0x71121c*/
  this->TurretOffset = 0; /*0x711222*/
  this->CanBeHidden = 1; /*0x711229*/
  this->Points2 = 0; /*0x711237*/
  AnimTypeVector::Constructor((_DWORD *)this + 459, 0, 0); /*0x71123d*/
  this->Explosion.CapacityIncrement = 10; /*0x71124a*/
  this->Explosion.Count = 0; /*0x711250*/
  this->Explosion = &vt_TypeList_AnimTypeClass_const; /*0x711256*/
  AnimTypeVector::Constructor((_DWORD *)this + 466, 0, 0); /*0x711260*/
  this->DestroyAnim.CapacityIncrement = 10; /*0x711265*/
  this->DestroyAnim.Count = 0; /*0x71126b*/
  this->DestroyAnim = &vt_TypeList_AnimTypeClass_const; /*0x711271*/
  this->NaturalParticleSystem = 0; /*0x71127b*/
  this->NaturalParticleSystemLocation = 0; /*0x711282*/
  *((_DWORD *)this + 475) = 0; /*0x711288*/
  *((_DWORD *)this + 476) = 0; /*0x71128e*/
  this->RefinerySmokeParticleSystem = 0; /*0x71129b*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
  this->DamageParticleSystems.CapacityIncrement = 10; /*0x7112ae*/
  this->DamageParticleSystems.Count = 0; /*0x7112b4*/
  this->DamageParticleSystems = &vt_TypeList_ParticleSystemTypeClass_const; /*0x7112ba*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
  this->DestroyParticleSystems.CapacityIncrement = 10; /*0x7112c9*/
  this->DestroyParticleSystems.Count = 0; /*0x7112cf*/
  this->DestroyParticleSystems = &vt_TypeList_ParticleSystemTypeClass_const; /*0x7112d5*/
  this->DamageSmokeOffset = 0; /*0x7112df*/
  *((_DWORD *)this + 493) = 0; /*0x7112e5*/
  *((_DWORD *)this + 494) = 0; /*0x7112eb*/
  this->DamSmkOffScrnRel = 0; /*0x7112f1*/
  this->DestroySmokeOffset = 0; /*0x7112f7*/
  this->q7C4 = 0; /*0x7112fd*/
  *((_DWORD *)this + 498) = 0; /*0x711303*/
  this->RefinerySmokeOffsetOne = 0; /*0x711309*/
  this->AmbientSound = 0; /*0x71130f*/
  *((_DWORD *)this + 501) = 0; /*0x711315*/
  this->RefinerySmokeOffsetTwo = 0; /*0x71131b*/
  *((_DWORD *)this + 503) = 0; /*0x711321*/
  this->ImageFile = 0; /*0x711327*/
  this->RefinerySmokeOffsetThree = 0; /*0x71132d*/
  this->ArcticArtInUse = 0; /*0x711333*/
  this->AlphaImageFile_0x19 = 0; /*0x711339*/
  this->RefinerySmokeOffsetFour = 0; /*0x71133f*/
  this->Crushable = 0; /*0x711345*/
  this->Bombable = 0; /*0x71134b*/
  this->ShadowIndex = 0; /*0x711351*/
  this->Storage = 0; /*0x711357*/
  this->TurretNotExportedOnGround = 0; /*0x71135d*/
  this->Gunner = 0; /*0x711363*/
  this->HasTurretTooltips = 0; /*0x711369*/
  this->TurretCount = 0; /*0x71136f*/
  this->IsChargeTurret = 0; /*0x711375*/
  this->qA90 = 0; /*0x71137b*/
  this->TypeImmune = 0; /*0x711381*/
  this->MoveToShroud = 1; /*0x711387*/
  this->Trainable = 1; /*0x71138e*/
  this->DamageSparks = 0; /*0x711395*/
  this->TargetLaser = 0; /*0x71139b*/
  this->ImmuneToVeins = 0; /*0x7113a1*/
  this->TiberiumHeal = 0; /*0x7113a7*/
  this->CloakStop = 0; /*0x7113ad*/
  this->IsTrain = 0; /*0x7113b3*/
  this->IsDropship = 0; /*0x7113b9*/
  this->ToProtect = 0; /*0x7113bf*/
  this->Disableable = 1; /*0x7113c5*/
  this->Unbuildable = 0; /*0x7113cc*/
  this->DoubleOwned = 0; /*0x7113d2*/
  this->Invisible = 0; /*0x7113d8*/
  this->RadarVisible = 0; /*0x7113de*/
  this->HasPrimary = 0; /*0x7113e4*/
  this->Sensors = 0; /*0x7113ea*/
  this->Nominal = 0; /*0x7113f0*/
  this->DontScore = 0; /*0x7113f6*/
  this->DamageSelf = 0; /*0x7113fc*/
  this->Turret = 0; /*0x711402*/
  this->TurretRecoil = 0; /*0x711412*/
  this->TurretAnimData = 2; /*0x711418*/
  *((_DWORD *)this + 810) = 1; /*0x71141e*/
  *((_DWORD *)this + 811) = 1; /*0x711424*/
  *((_DWORD *)this + 812) = 1; /*0x71142a*/
  this->unknown_bool_CB4 = 0; /*0x711430*/
  this->BarrelAnimData = 2; /*0x711436*/
  *((_DWORD *)this + 815) = 1; /*0x71143c*/
  this->DebrisMaximums = 1; /*0x711442*/
  *((_DWORD *)this + 817) = 1; /*0x711448*/
  this->unknown_bool_CC8 = 0; /*0x71144e*/
  this->qCCC = 1; /*0x711454*/
  this->qCCD = 0; /*0x71145a*/
  this->qCCE = 0; /*0x711460*/
  this->q333C = 0; /*0x711466*/
  this->q3340 = 0; /*0x71146c*/
  this->Naval = 0; /*0x711472*/
  this->Remapable = 0; /*0x711478*/
  this->Cloakable = 0; /*0x71147e*/
  this->qCD4 = 0; /*0x711484*/
  this->qCD5 = 0; /*0x71148a*/
  *((_DWORD *)this + 822) = 0; /*0x711490*/
  *((_DWORD *)this + 835) = 0; /*0x711496*/
  *((_DWORD *)this + 836) = 0; /*0x71149c*/
  this->qD14 = 0; /*0x7114a2*/
  this->qD15 = 0; /*0x7114a8*/
  this->SlavesNumber = 0; /*0x7114ae*/
  this->SlaveRegenRate = 1065353216; /*0x7114b4*/
  this->qD20 = 0; /*0x7114be*/
  this->qD21 = 0; /*0x7114c4*/
  this->qD22 = 0; /*0x7114ca*/
  this->qD23 = 0; /*0x7114d0*/
  this->qD24 = 0; /*0x7114d6*/
  this->qD25 = 0; /*0x7114dc*/
  this->qD26 = 0; /*0x7114e2*/
  this->qD27 = 0; /*0x7114e8*/
  this->qD28 = 0; /*0x7114ee*/
  this->qD29 = 0; /*0x7114f4*/
  this->qD2A = 0; /*0x7114fa*/
  this->qD2B = 1; /*0x711500*/
  this->qD2C = 0; /*0x711506*/
  this->qD2D = 0; /*0x71150c*/
  this->qD2F = 0; /*0x711512*/
  this->Locomotor = 0; /*0x711518*/
  this->qD31 = 0; /*0x71151e*/
  this->qD32 = 0; /*0x711524*/
  this->qD33 = 1; /*0x71152a*/
  this->qD34 = 1; /*0x711530*/
  this->qD37 = 0; /*0x711536*/
  this->qD39 = 0; /*0x71153c*/
  this->qD3A = 1; /*0x711542*/
  this->qD3C = 0; /*0x711548*/
  this->qD3D = 0; /*0x71154e*/
  this->BalloonHover = 0; /*0x711554*/
  this->SuppressionThreshold = 0; /*0x71155a*/
  this->JumpjetTurnRate = 0; /*0x711560*/
  this->JumpjetSpeed = 0; /*0x711566*/
  this->JumpjetClimb = 0; /*0x71156c*/
  this->JumpjetCrash = -1; /*0x711572*/
  this->qD54 = 0; /*0x711578*/
  this->JumpjetAccel = 0; /*0x71157e*/
  this->JumpjetWobbles = 0; /*0x711584*/
  this->qD60 = 0; /*0x71158a*/
  this->JumpjetDeviation = 0; /*0x711590*/
  this->qD68 = 0; /*0x711596*/
  this->qD69 = 0; /*0x71159c*/
  this->qD6A = 0; /*0x7115a2*/
  this->qD6C = 0; /*0x7115a8*/
  this->q35C = 4; /*0x7115ae*/
  this->RequiredHouses = 14; /*0x7115b8*/
  this->ForbiddenHouses = 1084227584; /*0x7115c7*/
  this->SecretHouses = 1084227584; /*0x7115cd*/
  this->unknown_double_360 = 500; /*0x7115d3*/
  this->SecondSpawnOffset = 0x40000000; /*0x7115dd*/
  *((_DWORD *)this + 866) = 1041865114; /*0x7115e7*/
  this->qD8C = 0; /*0x7115f1*/
  this->q364 = 40; /*0x7115f7*/
  this->JumpJet = 0; /*0x711601*/
  this->Crashable = 0; /*0x711607*/
  this->q366 = 0; /*0x71160d*/
  this->qD99 = 1; /*0x711613*/
  this->qD9A = 1; /*0x71161a*/
  this->qD9B = 0; /*0x711621*/
  this->qD9C = 0; /*0x711627*/
  this->qD9D = 0; /*0x71162d*/
  this->ZFudgeBridge = -1; /*0x711633*/
  this->PaletteFile = -1; /*0x711639*/
  *((_DWORD *)this + 874) = -1; /*0x71163f*/
  this->qDAC = 0; /*0x711645*/
  this->qDBC = 0; /*0x71164b*/
  this->qDBD = 1; /*0x711651*/
  this->qDBE = 0; /*0x711658*/
  this->qDBF = 0; /*0x71165e*/
  this->Weight = 10; /*0x711664*/
  this->Palette = 5; /*0x71166a*/
  this->qDC8 = 10; /*0x711674*/
  this->qDCC = 0; /*0x71167a*/
  *((_DWORD *)this + 892) = 0; /*0x711680*/
  *(_DWORD *)this = &TechnoTypeClass::`vftable'; /*0x711686*/
  this->vtable1 = &TechnoTypeClass::`vftable'; /*0x71168c*/
  this->vtable2 = &TechnoTypeClass::`vftable'; /*0x711693*/
  this->vtable3 = &vt_TechnoTypeClass; /*0x71169a*/
  this->qDD0 = 0; /*0x7116a7*/
  this->q234 = 1; /*0x7116ad*/
  (*(void (__thiscall **)(char *))(this->DebrisTypes + 12))(this + 788); /*0x7116b6*/
  (*(void (__thiscall **)(char *))(this->DebrisAnims + 12))(this + 1476); /*0x7116c5*/
  (*(void (__thiscall **)(char *))(this->DebrisMaximums + 12))(this + 816); /*0x7116d4*/
  (*(void (__thiscall **)(char *))(this->Dock + 12))(this + 1000); /*0x7116e3*/
  _DWORD * v4 = this + 2216; /*0x7116e6*/
  int v5 = 18; /*0x7116ec*/
  do /*0x71170f*/
  {
    *(v4 - 4) = 0; /*0x7116f4*/
    _DWORD * v6 = v4 - 3; /*0x7116f7*/
    *v4 = 0; /*0x7116f9*/
    v4[1] = 0; /*0x7116fd*/
    *v6 = 0; /*0x711700*/
    v4 += 7; /*0x711702*/
    --v5; /*0x711705*/
    v6[1] = 0; /*0x711706*/
    v6[2] = 0; /*0x711709*/
    *((_BYTE *)v4 - 20) = 0; /*0x71170c*/
  }
  while ( v5 ); /*0x71170f*/
  _DWORD * v7 = this + 2724; /*0x711711*/
  int v8 = 18; /*0x711717*/
  do /*0x71173a*/
  {
    *(v7 - 4) = 0; /*0x71171f*/
    _DWORD * v9 = v7 - 3; /*0x711722*/
    *v7 = 0; /*0x711724*/
    v7[1] = 0; /*0x711728*/
    *v9 = 0; /*0x71172b*/
    v7 += 7; /*0x71172d*/
    --v8; /*0x711730*/
    v9[1] = 0; /*0x711731*/
    v9[2] = 0; /*0x711734*/
    *((_BYTE *)v7 - 20) = 0; /*0x711737*/
  }
  while ( v8 ); /*0x71173a*/
  _DWORD * v10 = this + 2140; /*0x71173c*/
  int v11 = 5; /*0x711742*/
  do /*0x711757*/
  {
    _DWORD * v12 = v10; /*0x711747*/
    v10 += 3; /*0x71174b*/
    --v11; /*0x71174e*/
    *v12 = 0; /*0x71174f*/
    v12[1] = 0; /*0x711751*/
    v12[2] = 0; /*0x711754*/
  }
  while ( v11 ); /*0x711757*/
  this->qDB0 = 0; /*0x711763*/
  _DWORD * v13 = this + 3316; /*0x711765*/
  *((_DWORD *)this + 877) = 0; /*0x71176b*/
  int v14 = 6; /*0x71176e*/
  *((_DWORD *)this + 878) = 0; /*0x711773*/
  do /*0x71177f*/
  {
    *(v13 - 6) = 0; /*0x711776*/
    *v13++ = 0; /*0x711779*/
    --v14; /*0x71177e*/
  }
  while ( v14 ); /*0x71177f*/
  memset(this + 2068, 0xFFu, 0x48u); /*0x71178e*/
  if ( g_AnimManager < g_AnimTypePool /*0x7117c3*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimManagerConfig + g_AnimTypePool,
         0) )
  {
    int v15 = g_AnimManager++; /*0x7117d0*/
    *((_DWORD *)g_AnimPoolCount + v15) = this; /*0x7117df*/
  }
  if ( DataGlobal_A8EB10 < DataGlobal_A8EB08 /*0x711816*/
    || (DataGlobal_A8EB0D || !DataGlobal_A8EB08)
    && DataGlobal_A8EB14 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_TechnoTypes + 8))(
         &g_TechnoTypes,
         DataGlobal_A8EB14 + DataGlobal_A8EB08,
         0) )
  {
    int v16 = DataGlobal_A8EB10++; /*0x711823*/
    *((_DWORD *)DataGlobal_A8EB04 + v16) = this; /*0x711832*/
  }
  return this; /*0x711837*/
}
}

// 0x711840
int TechnoTypeClass::Construct(ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v5; // edx
  ObjectTypeClass::Construct((_DWORD *)this, aP1); /*0x71184b*/
  TechnoTypeClass::Constructor_0((_DWORD *)(this + 788), aP1); /*0x711859*/
  this->DebrisTypes = &vt_TypeList_VoxelAnimTypeClass_const; /*0x71185e*/
  IntDynamicVector::Construct((_DWORD *)(this + 816), aP1); /*0x71186d*/
  this->DebrisMaximums = &vt_TypeList_int; /*0x711872*/
  this->unknown_3C0 = 0; /*0x711883*/
  TechnoTypeClass::Constructor_1((_DWORD *)(this + 1000), aP1); /*0x711889*/
  this->Dock = &vt_TypeList_BuildingTypeClass_const; /*0x71188e*/
  IntDynamicVector::Construct((_DWORD *)(this + 1044), aP1); /*0x71189e*/
  this->VoiceSelect = &vt_TypeList_int; /*0x7118a3*/
  IntDynamicVector::Construct((_DWORD *)(this + 1072), aP1); /*0x7118b3*/
  this->VoiceSelectEnslaved = &vt_TypeList_int; /*0x7118b8*/
  IntDynamicVector::Construct((_DWORD *)(this + 1100), aP1); /*0x7118c8*/
  this->VoiceSelectDeactivated = &vt_TypeList_int; /*0x7118cd*/
  IntDynamicVector::Construct((_DWORD *)(this + 1128), aP1); /*0x7118dd*/
  this->VoiceMove = &vt_TypeList_int; /*0x7118e2*/
  IntDynamicVector::Construct((_DWORD *)(this + 1156), aP1); /*0x7118f2*/
  this->VoiceAttack = &vt_TypeList_int; /*0x7118f7*/
  IntDynamicVector::Construct((_DWORD *)(this + 1184), aP1); /*0x711907*/
  this->VoiceSpecialAttack = &vt_TypeList_int; /*0x71190c*/
  IntDynamicVector::Construct((_DWORD *)(this + 1212), aP1); /*0x71191c*/
  this->VoiceDie = &vt_TypeList_int; /*0x711921*/
  IntDynamicVector::Construct((_DWORD *)(this + 1240), aP1); /*0x711931*/
  this->VoiceFeedback = &vt_TypeList_int; /*0x711936*/
  IntDynamicVector::Construct((_DWORD *)(this + 1268), aP1); /*0x711946*/
  this->MoveSound = &vt_TypeList_int; /*0x71194b*/
  IntDynamicVector::Construct((_DWORD *)(this + 1296), aP1); /*0x71195b*/
  this->DieSound = &vt_TypeList_int; /*0x711960*/
  ObjectTypeClass::CheckFlag((_DWORD *)(this + 1476), aP1); /*0x711970*/
  this->DebrisAnims = &vt_TypeList_AnimTypeClass_const; /*0x711975*/
  IntDynamicVector::Construct((_DWORD *)(this + 1592), aP1); /*0x711985*/
  this->Prerequisite = &vt_TypeList_int; /*0x71198a*/
  IntDynamicVector::Construct((_DWORD *)(this + 1620), aP1); /*0x71199a*/
  this->PrerequisiteOverride = &vt_TypeList_int; /*0x71199f*/
  this->CameoFile = 0; /*0x7119ac*/
  this->AltCameoFile = 0; /*0x7119b5*/
  ObjectTypeClass::CheckFlag((_DWORD *)(this + 1836), aP1); /*0x7119bb*/
  this->Explosion = &vt_TypeList_AnimTypeClass_const; /*0x7119c0*/
  ObjectTypeClass::CheckFlag((_DWORD *)(this + 1864), aP1); /*0x7119d0*/
  this->DestroyAnim = &vt_TypeList_AnimTypeClass_const; /*0x7119df*/
  TypeList::ParticleConstructor((_DWORD *)(this + 1912), 0, 0); /*0x7119e6*/
  this->DamageParticleSystems = &vt_TypeList_ParticleSystemTypeClass_const; /*0x7119eb*/
  TypeList::ParticleConstructor((_DWORD *)(this + 1940), 0, 0); /*0x7119fb*/
  this->DestroyParticleSystems = &vt_TypeList_ParticleSystemTypeClass_const; /*0x711a0a*/
  this->TurretAnimData = 2; /*0x711a10*/
  *(_DWORD *)(this + 3240) = 1; /*0x711a16*/
  *(_DWORD *)(this + 3244) = 1; /*0x711a1c*/
  *(_DWORD *)(this + 3248) = 1; /*0x711a22*/
  this->unknown_bool_CB4 = 0; /*0x711a28*/
  this->BarrelAnimData = 2; /*0x711a2e*/
  *(_DWORD *)(this + 3260) = 1; /*0x711a34*/
  this->DebrisMaximums = 1; /*0x711a3a*/
  *(_DWORD *)(this + 3268) = 1; /*0x711a40*/
  this->unknown_bool_CC8 = 0; /*0x711a46*/
  *(_DWORD *)this = &TechnoTypeClass::`vftable'; /*0x711a4c*/
  this->vtable1 = &TechnoTypeClass::`vftable'; /*0x711a52*/
  this->vtable2 = &TechnoTypeClass::`vftable'; /*0x711a59*/
  this->vtable3 = &vt_TechnoTypeClass; /*0x711a60*/
  int v3 = *(_DWORD *)&g_NetworkPlayerBuffer[5332]; /*0x711a67*/
  int v4 = 0; /*0x711a6c*/
  if ( *(int *)&g_NetworkPlayerBuffer[5332] <= 0 ) /*0x711a70*/
  {
LABEL_5:
    if ( *(int *)&g_NetworkPlayerBuffer[5332] >= *(int *)&g_NetworkPlayerBuffer[5324] ) /*0x711a8c*/
    {
      if ( !g_NetworkPlayerBuffer[5329] && *(_DWORD *)&g_NetworkPlayerBuffer[5324] /*0x711ab1*/
        || *(int *)&g_NetworkPlayerBuffer[5336] <= 0
        || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_NetworkPlayerBuffer[5316] + 8))(
              &g_NetworkPlayerBuffer[5316],
              *(_DWORD *)&g_NetworkPlayerBuffer[5336] + *(_DWORD *)&g_NetworkPlayerBuffer[5324],
              0) )
      {
        return this; /*0x711ab6*/
      }
      v3 = *(_DWORD *)&g_NetworkPlayerBuffer[5332]; /*0x711ab8*/
    }
    *(_DWORD *)&g_NetworkPlayerBuffer[5332] = v3 + 1; /*0x711ac6*/
    *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5320] + 4 * v3) = this; /*0x711acb*/
    return this; /*0x711acb*/
  }
  v5 = *(CCINIClass **)&g_NetworkPlayerBuffer[5320]; /*0x711a72*/
  while ( *(_DWORD *)v5->__pad_0 != this ) /*0x711a7a*/
  {
    ++v4; /*0x711a7c*/
    v5 = (CCINIClass *)((char *)v5 + 4); /*0x711a7d*/
    if ( v4 >= *(int *)&g_NetworkPlayerBuffer[5332] ) /*0x711a82*/
      goto LABEL_5; /*0x711a82*/
  }
  return this; /*0x711ad0*/
}
}

// 0x711AE0
int TechnoTypeClass::DTOR()
{
    // 4x vftable installs: exempted (D1-6 #128 vocabulary)
    char v2 = this->CameoAllocated;
    if ( v2 && this->Cameo )
    {
        OperatorDelete(this->Cameo);
        this->Cameo = nullptr;
        this->CameoAllocated = 0;
    }
    if ( this->AltCameoAllocated && this->AltCameo )
    {
        OperatorDelete(this->AltCameo);
        this->AltCameo = nullptr;
        this->AltCameoAllocated = 0;
    }
    void* v17 = this;
    int v3 = g_AbstractClassArray.FindItemIndex(&v17);
    if ( v3 != -1 )
        DynamicVector::RemoveItem(&g_AbstractClassArray, v3);
    void* v17b = this;
    int v4 = g_TechnoTypes.FindItemIndex((TechnoTypeClass**)&v17b);
    if ( v4 != -1 )
        TechnoTypeClass::RemoveItem(&g_TechnoTypes, v4);
    VectorClass::Cleanup(this->DestroyParticleSystems_Embed);
    VectorClass::Cleanup(this->DamageParticleSystems_Embed);
    DynamicVectorClass::Destroy_Alt(this->DestroyAnim_Embed);
    DynamicVectorClass::Destroy_Alt(this->Explosion_Embed);
    VectorClass::Destroy(this->PrerequisiteOverride_Embed);
    VectorClass::Destroy(this->Prerequisite_Embed);
    DynamicVectorClass::Destroy_Alt(this->DebrisAnims_Embed);
    VectorClass::Destroy(this->DieSound_Embed);
    VectorClass::Destroy(this->MoveSound_Embed);
    void* v5 = this->VoiceFeedback_Items;
    if ( v5 && this->VoiceFeedback_FlagByte )
    {
        OperatorDelete(v5);
        this->VoiceFeedback_Items = nullptr;
    }
    this->VoiceFeedback_FlagByte = 0;
    this->VoiceFeedback_Capacity = 0;
    void* v6 = this->IntList_H_Items;
    if ( v6 && this->IntList_H_FlagByte )
    {
        OperatorDelete(v6);
        this->IntList_H_Items = nullptr;
    }
    this->IntList_H_FlagByte = 0;
    this->IntList_H_Capacity = 0;
    void* v7 = this->IntList_G_Items;
    if ( v7 && this->IntList_G_FlagByte )
    {
        OperatorDelete(v7);
        this->IntList_G_Items = nullptr;
    }
    this->IntList_G_FlagByte = 0;
    this->IntList_G_Capacity = 0;
    void* v8 = this->IntList_F_Items;
    if ( v8 && this->IntList_F_FlagByte )
    {
        OperatorDelete(v8);
        this->IntList_F_Items = nullptr;
    }
    this->IntList_F_FlagByte = 0;
    this->IntList_F_Capacity = 0;
    void* v9 = this->IntList_E_Items;
    if ( v9 && this->IntList_E_FlagByte )
    {
        OperatorDelete(v9);
        this->IntList_E_Items = nullptr;
    }
    this->IntList_E_FlagByte = 0;
    this->IntList_E_Capacity = 0;
    void* v10 = this->IntList_D_Items;
    if ( v10 && this->IntList_D_FlagByte )
    {
        OperatorDelete(v10);
        this->IntList_D_Items = nullptr;
    }
    this->IntList_D_FlagByte = 0;
    this->IntList_D_Capacity = 0;
    void* v11 = this->IntList_C_Items;
    if ( v11 && this->IntList_C_FlagByte )
    {
        OperatorDelete(v11);
        this->IntList_C_Items = nullptr;
    }
    this->IntList_C_FlagByte = 0;
    this->IntList_C_Capacity = 0;
    void* v12 = this->IntList_B_Items;
    if ( v12 && this->IntList_B_FlagByte )
    {
        OperatorDelete(v12);
        this->IntList_B_Items = nullptr;
    }
    this->IntList_B_FlagByte = 0;
    this->IntList_B_Capacity = 0;
    void* v13 = this->BuildingTypeList_Items;
    if ( v13 && this->BuildingTypeList_FlagByte )
    {
        OperatorDelete(v13);
        this->BuildingTypeList_Items = nullptr;
    }
    this->BuildingTypeList_FlagByte = 0;
    this->BuildingTypeList_Capacity = 0;
    void* v14 = this->IntList_A_Items;
    if ( v14 && this->IntList_A_FlagByte )
    {
        OperatorDelete(v14);
        this->IntList_A_Items = nullptr;
    }
    this->IntList_A_FlagByte = 0;
    this->IntList_A_Capacity = 0;
    void* v15 = this->VoxelAnimList_Items;
    if ( v15 && this->VoxelAnimList_FlagByte )
    {
        OperatorDelete(v15);
        this->VoxelAnimList_Items = nullptr;
    }
    this->VoxelAnimList_FlagByte = 0;
    this->VoxelAnimList_Capacity = 0;
    return ObjectTypeClass::Destruct(this);
}

// 0x711F00
int TechnoTypeClass::ComputeValueSimple(float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  float ThreatMultiplier; // [esp+8h] [ebp-8h]

  if ( !a2 ) /*0x711f0d*/
    return (*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)this->vtable0 + 172))(this); /*0x711f52*/
  float v5 = TechnoTypeClass::Dispatch(a2, this); /*0x711f17*/
  ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier(a2, this); /*0x711f27*/
  float * v6 = (float *)(*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)this->vtable0 + 172))(this); /*0x711f31*/
  return Math::RoundToInt((double)(int)v6 * ThreatMultiplier * v5); /*0x711f46*/
}
}

// 0x711F60
int TechnoTypeClass::ComputeValue(void * a2, float a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  float ThreatMultiplier; // [esp+Ch] [ebp-4h]
  #375 *v9; // [esp+14h] [ebp+4h]

  float v7 = *(double *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 5944); /*0x711f76*/
  if ( LOBYTE(a3) ) /*0x711f7c*/
    v7 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    float v10 = TechnoTypeClass::Dispatch(a2, this); /*0x711f9a*/
    ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711fac*/
    if ( this->Soylent ) /*0x711fa6*/
    {
      return Math::RoundToInt((double)this->Soylent * v10); /*0x711fc0*/
    }
    else
    {
      v9 = (#375 *)(*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)this->vtable0 + 172))(this); /*0x711fd7*/
      int v6 = Math::RoundToInt((double)(int)v9 * ThreatMultiplier * v10); /*0x711fec*/
      if ( (unsigned __int8)House::IsCurrentPlayer(a2) ) /*0x711ff4*/
        return Math::RoundToInt((double)v6 * v7); /*0x71200a*/
      return v6; /*0x71200c*/
    }
  }
  else
  {
    int v11 = (*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)this->vtable0 + 172))(this); /*0x712020*/
    return Math::RoundToInt((double)v11 * v7); /*0x71202c*/
  }
}
}

// 0x7162F0
int TechnoTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int j; // ebp
  int k; // ebx
  int m; // ebx
  int n; // ebx
  int ii; // ebx
  int jj; // ebx
  int kk; // ebx
  int mm; // ebx
  int nn; // ebx
  int i1; // ebx
  int i2; // ebx
  int i3; // ebx
  int i4; // ebx
  int i5; // ebx
  int i6; // ebx
  int i7; // ebx
  int i8; // ebx
  int i9; // ebx
  int i10; // ebx
  int i11; // esi
  int i12; // esi
  int i13; // esi
  int i14; // esi
  int i15; // esi
  MouseClass *v29; // esi
  MouseClass *v31; // esi
  int i16; // esi
  int i17; // esi
  IUnknown *v35; // edx
  IUnknown *v36; // edx
  IUnknown *v38; // edx
  IUnknown *v39; // edx
  int i; // [esp+288h] [ebp-208h]
  ObjectClass Filename; // [esp+28Ch] [ebp-204h] BYREF
  char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF

  char * v3 = &aP0[1].__pad_14D[7]; /*0x716307*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[7] + 12))(&aP0[1].__pad_14D[7]); /*0x71630f*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].Name[28] + 12))(&aP0[1].Name[28]); /*0x716320*/
  (*(void (__thiscall **)(Armor *))(aP0[2].Armor + 12))(&aP0[2].Armor); /*0x71632f*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[51] + 12))(&aP0[1].__pad_14D[51]); /*0x71633e*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[79] + 12))(&aP0[1].__pad_14D[79]); /*0x71634d*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[107] + 12))(&aP0[1].__pad_14D[107]); /*0x71635c*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[135] + 12))(&aP0[1].__pad_14D[135]); /*0x71636b*/
  (*(void (__thiscall **)(int *))(aP0[1].CrushSound + 12))(&aP0[1].CrushSound); /*0x71637a*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].ImageFile[20] + 12))(&aP0[1].ImageFile[20]); /*0x716389*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].AlphaImageFile[21] + 12))(&aP0[1].AlphaImageFile[21]); /*0x716398*/
  (*(void (__thiscall **)(int *))(aP0[1].VoxelCaches[0] + 12))(aP0[1].VoxelCaches); /*0x7163a7*/
  (*(void (__thiscall **)(int *))(aP0[1].VoxelCaches[7] + 12))(&aP0[1].VoxelCaches[7]); /*0x7163b6*/
  (*(void (__thiscall **)(int *))(aP0[1].VoxelCaches[14] + 12))(&aP0[1].VoxelCaches[14]); /*0x7163c5*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[2].ImageFile[12] + 12))(&aP0[2].ImageFile[12]); /*0x7163d4*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[2].AlphaImageFile[13] + 12))(&aP0[2].AlphaImageFile[13]); /*0x7163e3*/
  (*(void (__thiscall **)(int *))(aP0[2].ChargerBarrels[3] + 12))(&aP0[2].ChargerBarrels[3]); /*0x7163f2*/
  (*(void (__thiscall **)(int *))(aP0[2].ChargerBarrels[10] + 12))(&aP0[2].ChargerBarrels[10]); /*0x716401*/
  (*(void (__thiscall **)(Armor *))(aP0[1].Armor + 12))(&aP0[1].Armor); /*0x716410*/
  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
  int v41; // [esp+284h] [ebp-20Ch] BYREF
    ObjectPtr::RegisterForTracking( /*0x716435*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[1].__pad_14D[35]);
    ObjectPtr::RegisterForTracking( /*0x716446*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[1].__pad_14D[39]);
    ObjectPtr::RegisterForTracking( /*0x716457*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[1].__pad_14D[43]);
    ObjectPtr::RegisterForTracking( /*0x716468*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[2].LineTrailColor[1]);
    ObjectPtr::RegisterForTracking( /*0x716479*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[2].VoxelCaches[2]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&aP0[5].Name[16]); /*0x71648a*/
    ObjectPtr::RegisterForTracking( /*0x71649b*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[5].UINameLabel[31]);
    ObjectPtr::RegisterForTracking( /*0x7164ac*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[5].__pad_24[16]);
    ObjectPtr::RegisterForTracking( /*0x7164bd*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[2].ChargerTurrets[16]);
    ObjectPtr::RegisterForTracking( /*0x7164ce*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[2].ChargerTurrets[17]);
    ObjectPtr::RegisterForTracking( /*0x7164df*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[2].__pad_14D[67]);
    ObjectPtr::RegisterForTracking( /*0x7164f0*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0[2].__pad_14D[71]);
    if ( aP0 != (ObjectTypeClass *)-1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
  int v40; // [esp+280h] [ebp-210h] BYREF
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71650c*/
    for ( i = 0; i < v40; ++i ) /*0x71651d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71652b*/
      DynamicVector::Add_Alt3(v3, (VectorClass *)&v41); /*0x716535*/
    }
    if ( aP0 != (ObjectTypeClass *)-788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor(&aP0[1].Name[28]); /*0x716551*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716562*/
    for ( j = 0; j < v40; ++j ) /*0x71656d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71657b*/
      DynamicVector::Add2(&aP0[1].Name[28], (VectorClass *)&v41); /*0x716585*/
    }
    if ( aP0 != (ObjectTypeClass *)-1476 ) /*0x716599*/
      AnimTypeList::Constructor(&aP0[2].Armor); /*0x71659d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7165ae*/
    for ( k = 0; k < v40; ++k ) /*0x7165b9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7165c7*/
      DynamicVector::Add_Alt4(&aP0[2].Armor, (VectorClass *)&v41); /*0x7165d1*/
    }
    if ( aP0 != (ObjectTypeClass *)-1044 ) /*0x7165e5*/
      TypeList::Construct(&aP0[1].__pad_14D[51]); /*0x7165e9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7165fa*/
    for ( m = 0; m < v40; ++m ) /*0x716605*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716613*/
      DynamicVector::Add_Alt(&aP0[1].__pad_14D[51], (VectorClass *)&v41); /*0x71661d*/
    }
    if ( aP0 != (ObjectTypeClass *)-1072 ) /*0x716631*/
      TypeList::Construct(&aP0[1].__pad_14D[79]); /*0x716635*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716646*/
    for ( n = 0; n < v40; ++n ) /*0x716651*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71665f*/
      DynamicVector::Add_Alt(&aP0[1].__pad_14D[79], (VectorClass *)&v41); /*0x716669*/
    }
    if ( aP0 != (ObjectTypeClass *)-1100 ) /*0x71667d*/
      TypeList::Construct(&aP0[1].__pad_14D[107]); /*0x716681*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716692*/
    for ( ii = 0; ii < v40; ++ii ) /*0x71669d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7166ab*/
      DynamicVector::Add_Alt(&aP0[1].__pad_14D[107], (VectorClass *)&v41); /*0x7166b5*/
    }
    if ( aP0 != (ObjectTypeClass *)-1128 ) /*0x7166c9*/
      TypeList::Construct(&aP0[1].__pad_14D[135]); /*0x7166cd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7166de*/
    for ( jj = 0; jj < v40; ++jj ) /*0x7166e9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7166f7*/
      DynamicVector::Add_Alt(&aP0[1].__pad_14D[135], (VectorClass *)&v41); /*0x716701*/
    }
    if ( aP0 != (ObjectTypeClass *)-1156 ) /*0x716715*/
      TypeList::Construct(&aP0[1].CrushSound); /*0x716719*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71672a*/
    for ( kk = 0; kk < v40; ++kk ) /*0x716735*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716743*/
      DynamicVector::Add_Alt(&aP0[1].CrushSound, (VectorClass *)&v41); /*0x71674d*/
    }
    if ( aP0 != (ObjectTypeClass *)-1184 ) /*0x716761*/
      TypeList::Construct(&aP0[1].ImageFile[20]); /*0x716765*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716776*/
    for ( mm = 0; mm < v40; ++mm ) /*0x716781*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71678f*/
      DynamicVector::Add_Alt(&aP0[1].ImageFile[20], (VectorClass *)&v41); /*0x716799*/
    }
    if ( aP0 != (ObjectTypeClass *)-1212 ) /*0x7167ad*/
      TypeList::Construct(&aP0[1].AlphaImageFile[21]); /*0x7167b1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7167c2*/
    for ( nn = 0; nn < v40; ++nn ) /*0x7167cd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7167db*/
      DynamicVector::Add_Alt(&aP0[1].AlphaImageFile[21], (VectorClass *)&v41); /*0x7167e5*/
    }
    if ( aP0 != (ObjectTypeClass *)-1240 ) /*0x7167f9*/
      TypeList::Construct(aP0[1].VoxelCaches); /*0x7167fd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71680e*/
    for ( i1 = 0; i1 < v40; ++i1 ) /*0x716819*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716827*/
      DynamicVector::Add_Alt(aP0[1].VoxelCaches, (VectorClass *)&v41); /*0x716831*/
    }
    if ( aP0 != (ObjectTypeClass *)-1268 ) /*0x716845*/
      TypeList::Construct(&aP0[1].VoxelCaches[7]); /*0x716849*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71685a*/
    for ( i2 = 0; i2 < v40; ++i2 ) /*0x716865*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716873*/
      DynamicVector::Add_Alt(&aP0[1].VoxelCaches[7], (VectorClass *)&v41); /*0x71687d*/
    }
    if ( aP0 != (ObjectTypeClass *)-1296 ) /*0x716891*/
      TypeList::Construct(&aP0[1].VoxelCaches[14]); /*0x716895*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7168a6*/
    for ( i3 = 0; i3 < v40; ++i3 ) /*0x7168b1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7168bf*/
      DynamicVector::Add_Alt(&aP0[1].VoxelCaches[14], (VectorClass *)&v41); /*0x7168c9*/
    }
    if ( aP0 != (ObjectTypeClass *)-1836 ) /*0x7168dd*/
      AnimTypeList::Constructor(&aP0[2].ImageFile[12]); /*0x7168e1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7168f2*/
    for ( i4 = 0; i4 < v40; ++i4 ) /*0x7168fd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71690b*/
      DynamicVector::Add_Alt4(&aP0[2].ImageFile[12], (VectorClass *)&v41); /*0x716915*/
    }
    if ( aP0 != (ObjectTypeClass *)-1864 ) /*0x716929*/
      AnimTypeList::Constructor(&aP0[2].AlphaImageFile[13]); /*0x71692d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71693e*/
    for ( i5 = 0; i5 < v40; ++i5 ) /*0x716949*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716957*/
      DynamicVector::Add_Alt4(&aP0[2].AlphaImageFile[13], (VectorClass *)&v41); /*0x716961*/
    }
    if ( aP0 != (ObjectTypeClass *)-816 ) /*0x716975*/
      TypeList::Construct(&aP0[1].Armor); /*0x716979*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71698a*/
    for ( i6 = 0; i6 < v40; ++i6 ) /*0x716995*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7169a3*/
      DynamicVector::Add_Alt(&aP0[1].Armor, (VectorClass *)&v41); /*0x7169ad*/
    }
    if ( aP0 != (ObjectTypeClass *)-1592 ) /*0x7169c1*/
      TypeList::Construct(&aP0[2].ChargerBarrels[3]); /*0x7169c5*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7169d6*/
    for ( i7 = 0; i7 < v40; ++i7 ) /*0x7169e1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7169ef*/
      DynamicVector::Add_Alt(&aP0[2].ChargerBarrels[3], (VectorClass *)&v41); /*0x7169f9*/
    }
    if ( aP0 != (ObjectTypeClass *)-1620 ) /*0x716a0d*/
      TypeList::Construct(&aP0[2].ChargerBarrels[10]); /*0x716a11*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716a22*/
    for ( i8 = 0; i8 < v40; ++i8 ) /*0x716a2d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716a3b*/
      DynamicVector::Add_Alt(&aP0[2].ChargerBarrels[10], (VectorClass *)&v41); /*0x716a45*/
    }
    if ( aP0 != (ObjectTypeClass *)-1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor(&aP0[2].VoxelCaches[3]); /*0x716a5d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716a6e*/
    for ( i9 = 0; i9 < v40; ++i9 ) /*0x716a79*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716a87*/
      TypeList::PushBack(&aP0[2].VoxelCaches[3], (VectorClass *)&v41); /*0x716a91*/
    }
    if ( aP0 != (ObjectTypeClass *)-1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor(&aP0[2].VoxelCaches[10]); /*0x716aa9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716aba*/
    for ( i10 = 0; i10 < v40; ++i10 ) /*0x716ac5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716ad3*/
      TypeList::PushBack(&aP0[2].VoxelCaches[10], (VectorClass *)&v41); /*0x716add*/
    }
    for ( i11 = 0; i11 < *(_DWORD *)&aP0[1].__pad_14D[23]; ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking( /*0x716b04*/
        (SwizzleManagerClass *)&stru_B05488[27784],
        (MouseClass *)(*(_DWORD *)&aP0[1].__pad_14D[11] + 4 * i11));
    for ( i12 = 0; i12 < *(_DWORD *)&aP0[2].AlphaImageFile[1]; ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking( /*0x716b2f*/
        (SwizzleManagerClass *)&stru_B05488[27784],
        (MouseClass *)(*(_DWORD *)&aP0[2].ImageFile[16] + 4 * i12));
    for ( i13 = 0; i13 < *(_DWORD *)&aP0[2].Selectable; ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking( /*0x716b5a*/
        (SwizzleManagerClass *)&stru_B05488[27784],
        (MouseClass *)(*(_DWORD *)&aP0[2].AlphaImageFile[17] + 4 * i13));
    for ( i14 = 0; i14 < *(_DWORD *)&aP0[1].Name[44]; ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking( /*0x716b85*/
        (SwizzleManagerClass *)&stru_B05488[27784],
        (MouseClass *)(*(_DWORD *)&aP0[1].Name[32] + 4 * i14));
    for ( i15 = 0; i15 < (int)aP0[2].AlphaImage; ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking( /*0x716bb0*/
        (SwizzleManagerClass *)&stru_B05488[27784],
        (MouseClass *)(aP0[2].Strength + 4 * i15));
    v29 = (MouseClass *)&aP0[3].ChargerTurrets[8]; /*0x716bc0*/
    int v30 = 18; /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], v29); /*0x716bd1*/
      v29 = (MouseClass *)((char *)v29 + 28); /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    v31 = (MouseClass *)&aP0[4].UINameLabel[7]; /*0x716bdc*/
    int v32 = 18; /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], v31); /*0x716bed*/
      v31 = (MouseClass *)((char *)v31 + 28); /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    for ( i16 = 0; i16 < aP0[2].VoxelCaches[7]; ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking( /*0x716c15*/
        (SwizzleManagerClass *)&stru_B05488[27784],
        (MouseClass *)(aP0[2].VoxelCaches[4] + 4 * i16));
    for ( i17 = 0; i17 < aP0[2].VoxelCaches[14]; ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking( /*0x716c40*/
        (SwizzleManagerClass *)&stru_B05488[27784],
        (MouseClass *)(aP0[2].VoxelCaches[11] + 4 * i17));
    _makepath(Buffer, 0, 0, (ObjectClass *)aP0->ImageFile, Ext); /*0x716c66*/
    LOBYTE(v35) = 0; /*0x716c6e*/
    aP0->Image = (void *)SearchMIXFile(Buffer, v35); /*0x716c96*/
    INIClass::GetString( /*0x716c9c*/
      (unsigned __int8 ***)&stru_87C374[44556],
      (INIClass *)aP0->ImageFile,
      (unsigned __int8 *)&stru_830620[77104],
      (INIClass *)&stru_830620[81680],
      (INIClass *)&Filename,
      256);
    if ( !_strcmpi(&Filename, &stru_830620[81680]) ) /*0x716cab*/
      INIClass::GetString( /*0x716cd4*/
        (unsigned __int8 ***)&stru_87C374[44556],
        (INIClass *)aP0->__pad_24,
        (unsigned __int8 *)&stru_830620[77104],
        (INIClass *)&stru_830620[81680],
        (INIClass *)&Filename,
        256);
    _makepath(Buffer, 0, 0, &Filename, Ext); /*0x716ced*/
    LOBYTE(v36) = 0; /*0x716cf5*/
    *(_DWORD *)&aP0[2].__pad_14D[123] = 0; /*0x716cfe*/
    int v37 = SearchMIXFile(Buffer, v36); /*0x716d04*/
    *(_DWORD *)&aP0[2].__pad_14D[123] = v37; /*0x716d0b*/
    if ( !v37 ) /*0x716d11*/
    {
      LOBYTE(v38) = 0; /*0x716d13*/
      *(_DWORD *)&aP0[2].__pad_14D[123] = SearchMIXFile(g_Str_File_XXICON_SHP, v38); /*0x716d1f*/
    }
    INIClass::GetString( /*0x716d3f*/
      (unsigned __int8 ***)&stru_87C374[44556],
      (INIClass *)aP0->ImageFile,
      (unsigned __int8 *)&stru_830620[77092],
      (INIClass *)&stru_87C374[56304],
      (INIClass *)&Filename,
      256);
    _makepath(Buffer, 0, 0, &Filename, Ext); /*0x716d58*/
    LOBYTE(v39) = 0; /*0x716d60*/
    *(_DWORD *)&aP0[2].__pad_14D[155] = 0; /*0x716d69*/
    *(_DWORD *)&aP0[2].__pad_14D[155] = SearchMIXFile(Buffer, v39); /*0x716d8d*/
    INIClass::GetString( /*0x716d93*/
      (unsigned __int8 ***)&stru_87C374[44556],
      (INIClass *)aP0->ImageFile,
      (unsigned __int8 *)&stru_824238.sectionCount,
      (INIClass *)&stru_87C374[56304],
      (INIClass *)&aP0[5].ChargerTurrets[12],
      32);
    if ( LOBYTE(aP0[5].ChargerTurrets[12]) ) /*0x716d98*/
      aP0[5].ChargerBarrels[2] = FileExtension::MapHandler((ObjectClass *)&aP0[5].ChargerTurrets[12]); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return result; /*0x716dac*/
}
}

// 0x716DC0
int TechnoTypeClass::SaveLoad_Prefix_0(void * a1, TechnoTypeClass * aP2, TechnoTypeClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // ebx
  int n; // ebx
  int ii; // ebx
  int jj; // ebx
  int kk; // ebx
  int mm; // ebx

  result = AbstractClass::SaveLoad_PrefixWrapper((int)a1, (int)aP2, (int)aP3); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    int v6 = *(_DWORD *)aP2->vtable0; /*0x716de4*/
    aP3 = (TechnoTypeClass *)*((_DWORD *)a1 + 254); /*0x716df1*/
  int v4; // ebx
    (*(void (__stdcall **)(TechnoTypeClass *, TechnoTypeClass **, int, _DWORD, int))(v6 + 16))(aP2, &aP3, 4, 0, v4); /*0x716df5*/
  int v24; // [esp+124h] [ebp+10h] BYREF
    for ( i = 0; i < v24; ++i ) /*0x716e00*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716e13*/
        aP2,
        *((_DWORD *)a1 + 251) + 4 * i,
        4,
        0);
    int v8 = *(_DWORD *)aP2->vtable0; /*0x716e23*/
    v24 = *((_DWORD *)a1 + 201); /*0x716e2f*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v8 + 16))(aP2, &v24, 4, 0); /*0x716e33*/
    for ( j = 0; j < v24; ++j ) /*0x716e3e*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716e51*/
        aP2,
        *((_DWORD *)a1 + 198) + 4 * j,
        4,
        0);
    int v10 = *(_DWORD *)aP2->vtable0; /*0x716e61*/
    v24 = *((_DWORD *)a1 + 373); /*0x716e6d*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v10 + 16))(aP2, &v24, 4, 0); /*0x716e71*/
    for ( k = 0; k < v24; ++k ) /*0x716e7c*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716e8f*/
        aP2,
        *((_DWORD *)a1 + 370) + 4 * k,
        4,
        0);
    int v12 = *(_DWORD *)aP2->vtable0; /*0x716e9f*/
    v24 = *((_DWORD *)a1 + 265); /*0x716eab*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v12 + 16))(aP2, &v24, 4, 0); /*0x716eaf*/
    for ( m = 0; m < v24; ++m ) /*0x716eba*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716ecd*/
        aP2,
        *((_DWORD *)a1 + 262) + 4 * m,
        4,
        0);
    int v14 = *(_DWORD *)aP2->vtable0; /*0x716edd*/
    v24 = *((_DWORD *)a1 + 272); /*0x716ee9*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v14 + 16))(aP2, &v24, 4, 0); /*0x716eed*/
    for ( n = 0; n < v24; ++n ) /*0x716ef8*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716f0b*/
        aP2,
        *((_DWORD *)a1 + 269) + 4 * n,
        4,
        0);
    int v16 = *(_DWORD *)aP2->vtable0; /*0x716f1b*/
    v24 = *((_DWORD *)a1 + 279); /*0x716f27*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v16 + 16))(aP2, &v24, 4, 0); /*0x716f2b*/
    for ( ii = 0; ii < v24; ++ii ) /*0x716f36*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716f49*/
        aP2,
        *((_DWORD *)a1 + 276) + 4 * ii,
        4,
        0);
    int v18 = *(_DWORD *)aP2->vtable0; /*0x716f59*/
    v24 = *((_DWORD *)a1 + 286); /*0x716f65*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v18 + 16))(aP2, &v24, 4, 0); /*0x716f69*/
    for ( jj = 0; jj < v24; ++jj ) /*0x716f74*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716f87*/
        aP2,
        *((_DWORD *)a1 + 283) + 4 * jj,
        4,
        0);
    int v20 = *(_DWORD *)aP2->vtable0; /*0x716f97*/
    v24 = *((_DWORD *)a1 + 293); /*0x716fa3*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v20 + 16))(aP2, &v24, 4, 0); /*0x716fa7*/
    for ( kk = 0; kk < v24; ++kk ) /*0x716fb2*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716fc5*/
        aP2,
        *((_DWORD *)a1 + 290) + 4 * kk,
        4,
        0);
    int v22 = *(_DWORD *)aP2->vtable0; /*0x716fd5*/
    v24 = *((_DWORD *)a1 + 300); /*0x716fe1*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int))(v22 + 16))(aP2, &v24, 4); /*0x716fe5*/
    for ( mm = 0; mm < (int)aP3; ++mm ) /*0x716ff0*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x717003*/
        aP2,
        *((_DWORD *)a1 + 297) + 4 * mm,
        4,
        0);
    DynamicVector::Read((_DWORD *)a1 + 303, aP2); /*0x717014*/
    DynamicVector::Read((_DWORD *)a1 + 310, aP2); /*0x717020*/
    DynamicVector::Read((_DWORD *)a1 + 317, aP2); /*0x71702c*/
    DynamicVector::Read((_DWORD *)a1 + 324, aP2); /*0x717038*/
    Stream::WriteIntArray((_DWORD *)a1 + 459, aP2); /*0x717044*/
    Stream::WriteIntArray((_DWORD *)a1 + 466, aP2); /*0x717050*/
    DynamicVector::Read((_DWORD *)a1 + 204, aP2); /*0x71705c*/
    DynamicVector::Read((_DWORD *)a1 + 398, aP2); /*0x717068*/
    DynamicVector::Read((_DWORD *)a1 + 405, aP2); /*0x717074*/
    TechnoTypeClass::SaveLoadDataArray((_DWORD *)a1 + 478, aP2); /*0x717080*/
    TechnoTypeClass::SaveLoadDataArray((_DWORD *)a1 + 485, aP2); /*0x71708c*/
    return 0; /*0x717091*/
  }
  return result; /*0x717094*/
}
}

// 0x41CB50
char TechnoTypeClass::vt_entry_A0()
{
{
    return 0;
}
}

// 0x5247C0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon(this);
}
}
}
// 0x711E90
bool TechnoTypeClass::CanAttackMove_IgnoreWeapon()
{
{
    return this->Weapon && !this->PreventAttackMove;
}
}

// 0x711EE0
double TechnoTypeClass::ComputeBuildTime()
{
{
    double result;
    result = (double)this->Cost * *((double *)g_RulesClass_Instance + 745) * 0.9;
    Math::RoundToInt(result);
    return result;
}
}

// 0x7179A0
TechnoTypeClass * TechnoTypeClass::ddtor(char a2)
{
{
    TechnoTypeClass::DTOR((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TechnoTypeClass *)this;
}
}

// 0x717AF0
unsigned int * TechnoTypeClass::Constructor()
{
{
    this->vtable1 = 0;
    this->vtable2 = 0;
    this->vtable3 = 1;
    this->IsAllocated = 0;
    this->abstractFlags = 10;
    this->uniqueId = 0;
    *(void**)this = &vt_TypeList_ParticleSystemTypeClass_const;
    return this;
}
}

// 0x717B20
int TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->uniqueId;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->vtable1 + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// 0x717BC0
unsigned int * TechnoTypeClass::Constructor_0(ObjectTypeClass * aP1)
{
{
    *(void**)this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const;
    return this;
}
}

// 0x717BE0
VectorClass * TechnoTypeClass::Constructor_1(ObjectTypeClass * aP1)
{
{
    *(void**)this = &vt_DynamicVectorClass_BuildingTypeClass_const;
    return (VectorClass *)this;
}
}

// 0x717DB0
char TechnoTypeClass::RemoveItem(int a2)
{
{
    int v2;
    int v3;
    int v4;
    v2 = this->uniqueId;
    v3 = a2;
    if ( a2 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->uniqueId = v4;
    if ( a2 < v4 )
  {
    do
    {
    ++v3;
    *(int *)(this->vtable1 + 4 * v3 - 4) = *(int *)(this->vtable1 + 4 * v3);
    }
    while ( v3 < this->uniqueId );
  }
    return 1;
}
}

// 0x7473D0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon(this);
}
}
}