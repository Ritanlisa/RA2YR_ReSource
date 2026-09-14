// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x48ACF0
double RulesClass::GetFiringDistance()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double RulesClass_GetFiringDistance()
{
  return (double)*((int *)MEMORY[0x8871E0] + 1454) * 0.5; /*0x48ad01*/
}
}

// 0x538B30
unsigned int * RulesClass::InitINIChain(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_538B30(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x538b3b*/
  *(this + 2) = a2; /*0x538b3e*/
  *((_BYTE *)this + 12) = 1; /*0x538b41*/
  *((_BYTE *)this + 13) = 0; /*0x538b45*/
  *this = &vt_VectorClass_CCINIClass; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      *(this + 1) = a3; /*0x538b58*/
      return this; /*0x538b5e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x538b6d*/
    *((_BYTE *)this + 13) = 1; /*0x538b70*/
  }
  return this; /*0x538b5d*/
}
}

// 0x665650
int RulesClass::RulesClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RulesClass::Constructor(RulesClass *this)
{
  int *BarrelDebris; // ebp
  char *v3; // ecx
  char *v4; // ebp
  int v5; // edx
  int v6; // eax
  char *v7; // edi

  this->DetailMinFrameRateNormal = 15;
  this->DetailMinFrameRateMovie = 20;
  this->DetailBufferZoneWidth = 5;
  this->AmmoCrateDamage = 100;
  this->LargeVisceroid = 0;
  this->SmallVisceroid = 0;
  this->AttackingAircraftSightRange = 5;
  this->TunnelSpeed = 0x3FF0000000000000LL;
  this->TiberiumHeal = 0x3F91111111111111LL;
  this->SelfHealInfantryFrames = 1000;
  this->SelfHealInfantryAmount = 1;
  this->SelfHealUnitFrames = 1000;
  this->SelfHealUnitAmount = 1;
  this->FreeMCV = 0;
  this->BerzerkAllowed = 0;
  this->PoseDir = 0;
  this->DeployDir = 0;
  BarrelDebris = this->RadarEventColorSpeed;
  this->FlashFrameTime = 0;
  this->RadarCombatFlashTime = 12;
  this->MaxWaypointPathLength = 0;
  VoxelAnimTypeVector::Constructor(this->RadarEventColorSpeed, 0, 0);
  BarrelDebris[4] = 0;
  BarrelDebris[5] = 10;
  *BarrelDebris = (int)&vt_TypeList_VoxelAnimTypeClass_const;
  this->BarrelParticle = 0.0;
  this->Wake = 0.050000001;
  this->NukeTakeOff = 5;
  this->InfantryExplode = 1065353216;
  this->FlamingInfantry = 1036831949;
  this->InfantryHeadPop = 7;
  this->InfantryNuked = 21;
  this->InfantryVirus = 15;
  this->InfantryBrute = 0;
  this->InfantryMutate = 0;
  this->Behind = 0;
  this->__pad_A0 = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  *(_DWORD *)&this->?[4] = 0;
  LODWORD(this->?) = 0;
  this->AITriggerSuccessWeightDelta = 0x3FF0000000000000LL;
  this->AITriggerFailureWeightDelta = 0xBFF0000000000000uLL;
  this->AITriggerTrackRecordCoefficient = 0;
  this->? = 1072693248;
  this->MaximumQueuedObjects = 10000;
  this->AircraftFogReveal = 1000;
  this->DigSound = 100;
  this->CreateUnitSound = 100;
  this->CreateInfantrySound = 0;
  this->CreateAircraftSound = 2;
  this->BaseUnderAttackSound = 5;
  this->GUIMainButtonSound = 6;
  this->GUIBuildSound = 0;
  this->GUITabSound[0] = 0;
  this->GUITabSound[1] = 0;
  AnimTypeVector::Constructor(&this->GUITabSound[2], 0, 0);
  this->GUIMoveInSound[3] = 10;
  this->GUIMoveInSound[2] = 0;
  this->GUITabSound[2] = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->GUICheckboxSound[1], 0, 0);
  this->BuildingGarrisonedSound[2] = 10;
  this->BuildingGarrisonedSound[1] = 0;
  this->GUICheckboxSound[1] = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->PlaceBeaconSound, 0, 0);
  this->EndPlanningModeSound = 10;
  this->ExecutePlanSound = 0;
  this->PlaceBeaconSound = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->CrateRevealSound, 0, 0);
  this->CratePromoteSound = 10;
  this->CrateUnitSound = 0;
  this->CrateRevealSound = (int)&vt_TypeList_AnimTypeClass_const;
  this->ImpactLandSound = -1;
  this->SinkingSound = -1;
  this->BombTickingSound = -1;
  this->BombAttachSound = -1;
  this->YuriMindControlSound = -1;
  this->ChronoInSound = -1;
  this->ChronoOutSound = -1;
  this->SpySatActivationSound = -1;
  this->SpySatDeactivationSound = -1;
  this->UpgradeVeteranSound = -1;
  this->UpgradeEliteSound = -1;
  this->VoiceIFVRepair = -1;
  this->SlavesFreeSound = -1;
  this->SlaveMinerDeploySound = -1;
  this->SlaveMinerUndeploySound = -1;
  this->BunkerWallsUpSound = -1;
  this->BunkerWallsDownSound = -1;
  this->RepairBridgeSound = -1;
  this->PsychicDominatorActivateSound = -1;
  this->GeneticMutatorActivateSound = -1;
  this->PsychicRevealActivateSound = -1;
  this->MasterMindOverloadDeathSound = -1;
  this->AirstrikeAbortSound = -1;
  this->AirstrikeAttackVoice = -1;
  this->MindClearedSound = -1;
  this->EnterGrinderSound = -1;
  this->LeaveGrinderSound = -1;
  this->EnterBioReactorSound = -1;
  this->LeaveBioReactorSound = -1;
  this->ActivateSound = -1;
  this->DeactivateSound = -1;
  this->SpyPlaneCamera = -1;
  this->SpyPlaneCameraFrames = -1;
  this->Dig = -1;
  this->IonBlast = -1;
  this->IonBeam = -1;
  this->DamageFireTypes = -1;
  this->ParadropRadius = -1;
  this->ZoomInFactor = -1;
  this->? = -1;
  this->? = -1;
  this->ConditionYellowSparkingProbability = -1;
  this->? = -1;
  this->TiberiumExplosionDamage = -1;
  this->TiberiumStrength = -1;
  this->MinLowPowerProductionSpeed = -1;
  this->MaxLowPowerProductionSpeed = -1;
  this->LowPowerPenaltyModifier = -1;
  this->MultipleFactory = -1;
  this->MaximumCheerRate = -1;
  this->__pad_240 = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->? = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = 16;
  this->?[3] = 0;
  this->? = 0;
  this->? = 0;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_AnimTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 50;
  this->?[3] = 2;
  this->?[0] = 50;
  this->?[1] = 15;
  this->?[2] = 100;
  this->?[3] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[4], 0, 0);
  LODWORD(this->?) = 10;
  *(_DWORD *)this->? = 0;
  *(_DWORD *)&this->?[4] = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->? = (int)&vt_TypeList_int;
  this->?[5] = 0;
  this->?[6] = -1;
  this->?[7] = -1;
  this->?[8] = 3;
  this->?[9] = 30;
  this->?[11] = 0;
  this->?[12] = 1075052544;
  this->?[13] = 400;
  this->?[1] = 0;
  this->?[2] = 1070596096;
  this->?[3] = 0;
  this->?[4] = 1070596096;
  this->?[5] = 40;
  VectorClass::Construct(&this->?[6], 0, 0);
  this->?[11] = 10;
  this->?[10] = 0;
  this->?[6] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[13], 0, 0);
  this->?[4] = 10;
  this->?[3] = 0;
  this->?[13] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[6], 0, 0);
  this->?[11] = 10;
  this->?[10] = 0;
  this->?[6] = (int)&vt_TypeList_int;
  this->?[13] = 700;
  this->? = 128;
  this->? = 0x6400000000LL;
  this->? = 0x6400000008LL;
  this->? = 0x12C0000000FLL;
  this->?[1] = 1024;
  this->?[2] = 0;
  this->?[3] = 0x40000000;
  this->? = 1202590843;
  this->? = 1066695393;
  this->? = 1202590843;
  this->? = 1065646817;
  this->? = 100;
  *(_DWORD *)this->? = 10;
  this->? = 0x3F6666663F000000LL;
  this->? = 0x3F8000003F800000LL;
  LODWORD(this->?) = 1;
  this->TreeFlammability[0] = -1717986918;
  this->TreeFlammability[1] = 1069128089;
  this->TreeFlammability[2] = 0;
  this->TreeFlammability[3] = 1070596096;
  *(_DWORD *)&this->MissileROTVar = 0;
  *(_DWORD *)&this->?[3] = 1070596096;
  this->MissileSafetyAltitude = 500;
  this->DropPodHeight = 0x28000005DCLL;
  this->DropPodAngle = 0x3FF921FB54442D18LL;
  this->ScrollMultiplier = 0x3FF0000000000000LL;
  this->CrewEscape = 0x3FE0000000000000LL;
  this->ShakeScreen = 0x7800000190LL;
  this->HoverBob = 0x403E000000000000LL;
  this->HoverBoost = -858993459;
  this->? = 1073007820;
  this->HoverAcceleration = -343597384;
  this->? = 1067366481;
  this->HoverBrake = -343597384;
  this->? = 1067366481;
  this->HoverDampen = -1717986918;
  this->? = 1072273817;
  this->PlacementDelay = -1717986918;
  this->? = 1068079513;
  VoxelAnimTypeVector::Constructor(&this->CloakingStages, 0, 0);
  this->? = 10;
  this->RevealTriggerRadius[3] = 0;
  this->CloakingStages = (int)&vt_TypeList_VoxelAnimTypeClass_const;
  this->? = 0;
  this->VeteranRatio = 0;
  this->? = 3;
  this->VeteranCombat = 9;
  this->? = 5;
  this->VeteranSpeed = 0;
  this->? = 1074266112;
  this->VeteranSight = 0;
  this->? = 0x40000000;
  this->VeteranArmor = 0;
  this->? = 1074790400;
  VectorClass::Construct(&this->VeteranROF, 0, 0);
  this->SellSound = 10;
  this->CloakSound = 0;
  this->VeteranROF = (int)&vt_TypeList_int;
  LOBYTE(this->GameClosed[1]) = 0;
  this->GameClosed[2] = 0;
  this->GameClosed[3] = 1076101120;
  this->GameForming = 0;
  *(_DWORD *)this->PlayerLeft = 1072693248;
  this->PlayerJoined = 0x3FF0000000000000LL;
  this->Construction = 0x3FF0000000000000LL;
  this->? = 0x3FF0000000000000LL;
  this->? = 0x3FF0000000000000LL;
  this->? = 0x3FF0000000000000LL;
  this->BuildingSlam = -1;
  this->RadarOff = -1;
  this->MovieOn = -1;
  this->MovieOff = -1;
  this->TeslaCharge = -1;
  this->GenericClick = -1;
  this->BuildingDamageSound = -1;
  VectorClass::Construct(&this->HealCrateSound, 0, 0);
  this->DeploySound = 10;
  this->ScatterSound = 0;
  this->HealCrateSound = (int)&vt_TypeList_int;
  this->StormSound[1] = -1;
  this->StormSound[2] = -1;
  this->StormSound[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  this->__pad_704[0] = -1;
  this->__pad_704[1] = -1;
  this->__pad_704[2] = -1;
  this->__pad_704[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  this->?[0] = -1;
  this->?[1] = -1;
  this->?[2] = -1;
  this->?[3] = -1;
  VectorClass::Construct(this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[0] = (int)&vt_TypeList_int;
  this->? = -1;
  this->WallBuildSpeedCoefficient[0] = 0;
  this->WallBuildSpeedCoefficient[1] = 1071644672;
  this->WallBuildSpeedCoefficient[2] = 0;
  this->WallBuildSpeedCoefficient[3] = 1074266112;
  this->WindDirection = 0;
  this->CameraRange = 1072693248;
  this->FlightLevel = 0;
  this->ParachuteMaxFallRate = 1072693248;
  this->NoParachuteMaxFallRate[0] = 0;
  this->NoParachuteMaxFallRate[1] = 1072693248;
  this->NoParachuteMaxFallRate[2] = 0;
  this->NoParachuteMaxFallRate[3] = 1072693248;
  this->NodGateOne[0] = 2000;
  this->NodGateOne[1] = 1000;
  this->NodGateOne[2] = -1717986918;
  this->NodGateOne[3] = 1068079513;
  this->BuildPower[0] = 1202590843;
  this->BuildPower[1] = 1064598241;
  this->BuildPower[2] = 0;
  this->BuildPower[3] = 1077149696;
  this->BuildWeapons[0] = 175;
  this->BuildWeapons[1] = -1;
  this->BuildWeapons[2] = 2304;
  this->BuildWeapons[3] = 500;
  this->GDIWallDefenseCoefficient[0] = -3;
  this->GDIWallDefenseCoefficient[1] = -100;
  this->GDIWallDefenseCoefficient[2] = -1;
  Game::LockMutex(&this->GDIWallDefenseCoefficient[3], 0, 0);
  this->BaseUnit[0] = 10;
  this->GDIBaseDefenseCoefficient[3] = 0;
  this->GDIWallDefenseCoefficient[3] = (int)&vt_TypeList_SmudgeTypeClass_const;
  Game::LockMutex(&this->BaseUnit[2], 0, 0);
  this->TreeFire[3] = 10;
  this->TreeFire[2] = 0;
  this->BaseUnit[2] = (int)&vt_TypeList_SmudgeTypeClass_const;
  Game::LockMutex(&this->BombParachute[1], 0, 0);
  this->LargeFire[2] = 10;
  this->LargeFire[1] = 0;
  this->BombParachute[1] = (int)&vt_TypeList_SmudgeTypeClass_const;
  Game::LockMutex(this->ChronoReinfDelay, 0, 0);
  this->ChronoRangeMinimum[1] = 10;
  this->ChronoRangeMinimum[0] = 0;
  this->ChronoReinfDelay[0] = (int)&vt_TypeList_SmudgeTypeClass_const;
  Game::LockMutex(&this->ChronoRangeMinimum[3], 0, 0);
  this->AISafeDistance[0] = 10;
  this->SpyPowerBlackout[3] = 0;
  this->ChronoRangeMinimum[3] = (int)&vt_TypeList_SmudgeTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->AISafeDistance[2], 0, 0);
  this->Engineer[3] = 10;
  this->Engineer[2] = 0;
  this->AISafeDistance[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  this->ThirdCrew[1] = 0;
  this->ThirdCrew[2] = 0;
  this->ThirdCrew[3] = 0;
  this->NukeProjectile[0] = 0;
  this->NukeProjectile[1] = 0;
  VectorClass::BuildingTypeConstructor(&this->NukeProjectile[2], 0, 0);
  this->C4Warhead[3] = 10;
  this->C4Warhead[2] = 0;
  this->NukeProjectile[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  this->CMislWarhead[1] = 0;
  this->CMislWarhead[2] = 0;
  this->CMislWarhead[3] = 0;
  this->IvanWarhead[0] = 0;
  VectorClass::BuildingTypeConstructor(&this->IvanWarhead[1], 0, 0);
  this->CanDetonateTimeBomb[2] = 10;
  this->CanDetonateTimeBomb[1] = 0;
  this->IvanWarhead[1] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->CHRONOSK_SHP, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->CHRONOSK_SHP) = &vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor((_DWORD *)&this->? + 1, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  HIDWORD(this->?) = &vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?[2], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->MyEffectivenessCoefficientDefault, 0, 0);
  this->? = 10;
  *(_DWORD *)&this->TargetSpecialThreatCoefficientDefault = 0;
  this->MyEffectivenessCoefficientDefault = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::BuildingTypeConstructor(&this->?[2], 0, 0);
  this->HelipadRatio[3] = 10;
  this->HelipadRatio[2] = 0;
  this->?[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?[1], 0, 0);
  this->AALimit[2] = 10;
  this->AALimit[1] = 0;
  this->?[1] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->WarRatio, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->WarRatio[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?[3], 0, 0);
  this->InfantryBaseMult[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->InfantryBaseMult[2], 0, 0);
  this->PatrolScan[3] = 10;
  this->PatrolScan[2] = 0;
  this->InfantryBaseMult[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?, 0, 0);
  *(_DWORD *)&this->FireSupress = 10;
  this->? = 0.0;
  this->? = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->SuperWeapons, 0, 0);
  this->RepairSell[2] = 10;
  this->RepairSell[1] = 0;
  this->SuperWeapons = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(this->Aircraft, 0, 0);
  this->SilverCrate[1] = 10;
  this->SilverCrate[0] = 0;
  this->Aircraft[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->SilverCrate[3], 0, 0);
  this->MoneyIncrement = 10;
  this->CrateMaximum[3] = 0;
  this->SilverCrate[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->MinUnitCount, 0, 0);
  this->Players = 10;
  this->AIPlayers = 0;
  this->MinUnitCount = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->BridgeDestruction[1], 0, 0);
  this->DropZoneRadius[2] = 10;
  this->DropZoneRadius[1] = 0;
  this->BridgeDestruction[1] = (int)&vt_TypeList_BuildingTypeClass_const;
  this->? = 0;
  this->BaseDefenseDelay[0] = 1075314688;
  this->BaseDefenseDelay[1] = 0;
  this->BaseDefenseDelay[2] = 1074266112;
  this->BaseDefenseDelay[3] = 0;
  this->?[0] = 1072693248;
  this->?[1] = 0;
  this->?[2] = 1072693248;
  this->?[3] = 3;
  this->SovietSurvivorDivisor[0] = 60;
  UnitTypeVector::ConstructUnitTypeVectorClass(&this->SovietSurvivorDivisor[1], 0, 0);
  this->AutocreateTime[2] = 10;
  this->AutocreateTime[1] = 0;
  this->SovietSurvivorDivisor[1] = (int)&vt_TypeList_UnitTypeClass_const;
  UnitTypeVector::ConstructUnitTypeVectorClass(&this->HarvesterLoadRate, 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->HarvesterLoadRate = (int)&vt_TypeList_UnitTypeClass_const;
  AircraftTypeVector::Constructor(&this->?, 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  LODWORD(this->?) = &vt_TypeList_AircraftTypeClass_const;
  AnimTypeVector::Constructor(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0.0;
  LODWORD(this->?) = &vt_TypeList_AnimTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->? = 0.0;
  *(_DWORD *)&this->? = 0;
  this->? = 0;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_AnimTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 100;
  this->Difficult = 60;
  this->? = 60;
  this->? = 32;
  LOBYTE(this->?) = 1;
  this->? = 0;
  this->? = 0;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  InfantryTypeVector::Construct2(&this->__pad_C3C, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->__pad_C3C = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  LODWORD(this->?) = 10;
  *(_DWORD *)&this->?[4] = 0;
  this->? = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  InfantryTypeVector::Construct2((_DWORD *)&this->? + 1, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  HIDWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  InfantryTypeVector::Construct2((_DWORD *)&this->? + 1, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  HIDWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  UnitTypeVector::ConstructUnitTypeVectorClass(this->?, 0, 0);
  LODWORD(this->?) = 10;
  *(_DWORD *)this->? = 0;
  *(_DWORD *)this->? = &vt_TypeList_UnitTypeClass_const;
  VectorClass::BuildingTypeConstructor(&this->?, 0, 0);
  *(_DWORD *)this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_BuildingTypeClass_const;
  HIDWORD(this->?) = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  this->? = 0;
  this->? = 1056964608;
  LOBYTE(this->?) = 0;
  this->? = 0x83F4CCCCDLL;
  this->? = 5;
  this->? = 50;
  VectorClass::Construct(&this->?, 0, 0);
  *(_DWORD *)this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct((_DWORD *)&this->? + 1, 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_int;
  this->?[3] = 500;
  this->?[0] = 5;
  this->?[1] = 1;
  this->?[2] = 5000;
  this->?[3] = -5000;
  this->?[0] = 36;
  this->?[1] = 27;
  this->?[2] = 20;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  this->?[1] = 5;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[1], 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->?[1] = (int)&vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->?[0] = 10;
  this->? = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  this->?[2] = 25;
  this->?[3] = 10;
  VectorClass::Construct(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[3], 0, 0);
  *(_DWORD *)this->? = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  LODWORD(this->?) = &vt_TypeList_int;
  *(_DWORD *)&this->?[4] = 1048576000;
  this->? = 0x3F8000003F800000LL;
  this->? = 0x3F80000000000005LL;
  this->? = 0x23F800000LL;
  this->? = 0x23F800000LL;
  this->? = 5;
  this->? = 1065353216;
  LOBYTE(this->?) = 1;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[4] = 0;
  this->?[5] = 0;
  this->?[6] = 0;
  this->?[0] = 0;
  this->?[1] = 0;
  this->?[2] = 0;
  this->?[3] = 0;
  this->?[4] = 0;
  this->?[5] = 0;
  this->?[6] = 0;
  this->?[0] = 100;
  this->?[1] = 450;
  LOBYTE(this->?[2]) = 0;
  BYTE1(this->?[2]) = 0;
  this->?[3] = 8;
  this->?[4] = 0;
  this->?[5] = 0;
  this->?[6] = 0;
  this->? = 0;
  this->? = 3;
  this->? = 0;
  this->? = 0;
  RulesClass::readIQ(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_TerrainTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)&this->? = 0;
  *(_DWORD *)&this->? = 0;
  *(_DWORD *)&this->? = 0;
  *(_DWORD *)&this->? = 0;
  this->? = 0;
  LODWORD(this->?) = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(_DWORD *)this->? = 1073217536;
  this->? = 0x4008000000000000LL;
  this->? = 0;
  *(_DWORD *)this->? = 1075052544;
  this->?[0] = 0;
  this->?[1] = 1072168960;
  this->?[2] = -343597384;
  this->?[3] = 1069463633;
  this->?[4] = 5;
  this->?[6] = -343597384;
  this->?[7] = 1069463633;
  this->?[8] = 5;
  this->?[10] = 1202590843;
  this->?[11] = 1069841121;
  this->?[12] = 10;
  this->?[14] = 515396076;
  this->?[15] = 1069673349;
  this->?[16] = 10;
  this->?[18] = 0;
  this->?[19] = 1071644672;
  this->?[0] = 40;
  this->?[2] = -1717986918;
  this->?[3] = 1069128089;
  this->?[4] = 2;
  this->?[6] = 1202590843;
  this->?[7] = 1069841121;
  this->?[8] = 2;
  this->?[9] = 4;
  this->?[10] = 1202590843;
  this->?[11] = 1069841121;
  this->?[12] = 3;
  this->?[13] = 50;
  this->?[14] = 2000;
  this->?[15] = 2;
  this->?[16] = 2000;
  this->?[17] = 25;
  this->?[18] = 0;
  this->?[0] = -755914244;
  this->?[1] = 1066426957;
  VectorClass::Construct(&this->?[2], 0, 0);
  this->?[7] = 10;
  this->?[6] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[9], 0, 0);
  this->?[14] = 10;
  this->?[13] = 0;
  this->?[9] = (int)&vt_TypeList_int;
  this->?[16] = 5000;
  VectorClass::Construct(&this->?[17], 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  this->?[17] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  *(_DWORD *)this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct((_DWORD *)&this->? + 1, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct((_DWORD *)&this->? + 1, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct((_DWORD *)&this->? + 1, 0, 0);
  this->? = 10;
  this->? = 0;
  HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->? = 10;
  HIDWORD(this->?) = 0;
  *(_DWORD *)this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  this->? = 1000;
  VectorClass::Construct(&this->?, 0, 0);
  *(_DWORD *)&this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  *(_DWORD *)&this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  *(_DWORD *)&this->? = 10;
  *(_DWORD *)&this->? = 0;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0.0;
  *(_DWORD *)&this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->?[2] = 0;
  LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  *(_DWORD *)&this->? = 10;
  HIDWORD(this->?) = 0;
  *(_DWORD *)this->? = &vt_TypeList_int;
  DynamicVectorClass::Construct(&this->?, 0, 0);
  LODWORD(this->?) = &vt_TypeList_int;
  this->?[0] = 0;
  this->?[1] = 1072693248;
  DynamicVectorClass::Construct(&this->?[2], 0, 0);
  this->?[2] = (int)&vt_TypeList_int;
  this->? = 0;
  this->? = 0;
  this->? = 0.0;
  this->? = 1.875;
  *((_DWORD *)this + 1288) = 0;
  *((_DWORD *)this + 1289) = 1072693248;
  *((_DWORD *)this + 1290) = 0;
  *((_DWORD *)this + 1291) = 1071644672;
  *((_DWORD *)this + 1292) = 256;
  *((_DWORD *)this + 1293) = 5;
  *((_DWORD *)this + 1294) = 4;
  *((_DWORD *)this + 1295) = 5;
  *((_QWORD *)this + 648) = 0x300000004LL;
  *((_QWORD *)this + 649) = 0x300000002LL;
  *((_DWORD *)this + 1300) = 4;
  *((_DWORD *)this + 1301) = 4;
  *((_DWORD *)this + 1302) = 3;
  *((_DWORD *)this + 1303) = 2;
  *((_DWORD *)this + 1304) = 1;
  *((_DWORD *)this + 1305) = 2;
  *((_DWORD *)this + 1306) = 0;
  *((_DWORD *)this + 1307) = 0;
  *((_DWORD *)this + 1308) = 1;
  *((_DWORD *)this + 1309) = 255;
  *((_DWORD *)this + 1310) = 0x2000;
  *((_DWORD *)this + 1311) = 0;
  *((_DWORD *)this + 1312) = 2500;
  *((_DWORD *)this + 1313) = 10000;
  *((_DWORD *)this + 1314) = 10000;
  *((_DWORD *)this + 1315) = 100;
  *((_DWORD *)this + 1316) = 1;
  *((_DWORD *)this + 1317) = 10;
  *((_DWORD *)this + 1318) = 20;
  *((_DWORD *)this + 1319) = 10;
  *((_DWORD *)this + 1320) = 6;
  *((_DWORD *)this + 1321) = 1;
  *((_DWORD *)this + 1322) = 1;
  *((_DWORD *)this + 1323) = 16842753;
  *((_DWORD *)this + 1324) = 257;
  *((_DWORD *)this + 1325) = 0;
  *((_DWORD *)this + 1326) = 16843009;
  *((_DWORD *)this + 1327) = 1024;
  *((_DWORD *)this + 1328) = 858993459;
  *((_DWORD *)this + 1329) = 1071854387;
  *((_DWORD *)this + 1330) = -343597384;
  *((_DWORD *)this + 1331) = 1067366481;
  *((_DWORD *)this + 1332) = 8;
  *((_QWORD *)this + 667) = 0x3FD0000000000000LL;
  *((_DWORD *)this + 1336) = 20;
  *((_QWORD *)this + 669) = 0x4000000000000000LL;
  *((_DWORD *)this + 1340) = 0;
  *((_DWORD *)this + 1341) = 1071644672;
  *((_DWORD *)this + 1342) = 200;
  *((_DWORD *)this + 1343) = 100;
  *((_DWORD *)this + 1344) = 300;
  *((_DWORD *)this + 1346) = -1717986918;
  *((_DWORD *)this + 1347) = 1068079513;
  *((_DWORD *)this + 1348) = 0;
  *((_DWORD *)this + 1349) = 1075052544;
  *((_DWORD *)this + 1350) = -1717986918;
  *((_DWORD *)this + 1351) = 1068079513;
  *((_DWORD *)this + 1352) = 2;
  *((_DWORD *)this + 1354) = -755914244;
  *((_DWORD *)this + 1355) = 1066426957;
  *((_DWORD *)this + 1356) = 1000;
  this->GrowthRate = 0;
  *((_DWORD *)this + 1423) = 0x40000000;
  this->ShroudRate = 0;
  *((_DWORD *)this + 1425) = 1074790400;
  this->FogRate = -1717986918;
  *((_DWORD *)this + 1427) = 1068079513;
  this->IceGrowthRate = 0;
  *((_DWORD *)this + 1429) = 1072693248;
  this->VeinGrowthRate = 0;
  *((_DWORD *)this + 1431) = 1072693248;
  this->IceSolidifyFrameTime = 500;
  *((_DWORD *)this + 1434) = -1717986918;
  this->AmbientChangeStep = 1070176665;
  *((_DWORD *)this + 1436) = -1717986918;
  this->CrateRegen = 1069128089;
  *((_DWORD *)this + 1438) = 0;
  this->TimerWarning = 1076101120;
  *((_DWORD *)this + 1440) = 0;
  this->SpeakDelay = 0x40000000;
  *((_DWORD *)this + 1444) = 0;
  this->Gravity = 1076625408;
  this->LeptonsPerSightIncrease = 0;
  this->Incoming = 1075052544;
  this->MinDamage = 0;
  this->MaxDamage = 1076101120;
  this->RepairStep = 0;
  this->RepairPercent = 0x40000000;
  *((_DWORD *)this + 1452) = 0;
  this->IRepairStep = 1072693248;
  this->RepairRate = 3;
  *((_DWORD *)this + 1455) = 50;
  this->URepairRate = 0;
  *((_DWORD *)this + 1457) = 1;
  this->IRepairRate = 1000;
  *((_DWORD *)this + 1459) = 5;
  this->ConditionYellow = 0;
  *((_DWORD *)this + 1461) = 1070596096;
  this->ConditionRed = 1;
  this->IdleActionFrequency = -755914244;
  *((_DWORD *)this + 1465) = 1066426957;
  this->CloseEnough = -755914244;
  this->Stray = 1066426957;
  this->RelaxedStray = -755914244;
  this->GuardModeStray = 1066426957;
  this->Crush = 0;
  this->CrateRadius = 1072693248;
  this->HomingScatter = 0;
  this->BallisticScatter = 1071644672;
  this->RefundPercent = 0;
  *((_DWORD *)this + 1475) = 1071644672;
  this->BridgeStrength = -309237645;
  this->BuildSpeed = 1068842876;
  *((_DWORD *)this + 1478) = 640;
  this->C4Delay = 512;
  *((_DWORD *)this + 1480) = 512;
  this->PathDelay = 384;
  *((_DWORD *)this + 1483) = 640;
  this->BlockagePathDelay = 512;
  this->MovieTime = 256;
  *((_DWORD *)this + 1486) = 0;
  this->TiberiumShortScan = 1071644672;
  this->TiberiumLongScan = 1000;
  this->LightningDamage = 0;
  this->LightningStormDuration = 1072693248;
  this->LightningHitDelay = -343597384;
  this->LightningScatterDelay = 1067366481;
  this->LightningCellSpread = 1000;
  *((_DWORD *)this + 1496) = -755914244;
  this->LightningWarhead = 1066426957;
  this->ForceShieldRadius = 60;
  this->ForceShieldBlackoutDuration = 0;
  this->ForceShieldPlayFadeSoundTime = 1070596096;
  *((_DWORD *)this + 1502) = 1536;
  this->CollapseChance = 0x2000;
  this->WeedCapacity = 1280;
  this->ExtraUnitLight = 4096;
  this->ExtraInfantryLight = 20480;
  this->ExtraAircraftLight = 768;
  *((_DWORD *)this + 1508) = 0x7FFFFFFF;
  *((_DWORD *)this + 1509) = 250;
  *((_QWORD *)this + 755) = 0x384000000C8LL;
  *((_DWORD *)this + 1512) = 90;
  this->EngineerCaptureLevel = 10;
  *((_QWORD *)this + 757) = 0x30000000ALL;
  *((_BYTE *)this + 6064) = 1;
  this->RadLevelMax = 0;
  this->RadLevelDelay = 10;
  this->RadLightDelay = 400;
  this->RadLevelFactor = 800;
  *((_DWORD *)this + 1521) = 50;
  *((_BYTE *)this + 6088) = 0;
  *((_DWORD *)this + 1523) = 100;
  this->RadTintFactor = 0;
  *((_DWORD *)this + 1525) = 0;
  *((_DWORD *)this + 1526) = 0;
  this->RadSiteWarhead = 0;
  this->ElevationIncrement = 16842753;
  this->ElevationIncrementBonus = 16842752;
  *((_DWORD *)this + 1530) = 0;
  this->ElevationBonusCap = 0x10000;
  *((_DWORD *)this + 1532) = 16843008;
  *((_DWORD *)this + 1533) = 0;
  this->WallPenetratorThreshold = 1065353216;
  *((_DWORD *)this + 1535) = 0;
  *((_DWORD *)this + 1536) = 300;
  *((_DWORD *)this + 1537) = 0;
  *((_DWORD *)this + 1538) = 0;
  this->OreTwinkleChance = 0;
  this->OreTwinkle = 0;
  this->ColorAdd = 0;
  *((_DWORD *)this + 1542) = 0;
  *((_DWORD *)this + 1543) = 0;
  *((_DWORD *)this + 1544) = 0;
  *((_DWORD *)this + 1545) = 0;
  *((_DWORD *)this + 1546) = 0;
  *((_DWORD *)this + 1547) = 0;
  *((_BYTE *)this + 6192) = 0;
  *((_BYTE *)this + 6193) = 0;
  *((_BYTE *)this + 6194) = 0;
  *((_DWORD *)this + 1549) = 0;
  *((_DWORD *)this + 1550) = 0;
  *((_DWORD *)this + 1552) = 0;
  this->LaserTargetColor = 1072693248;
  this->IronCurtainColor = 0;
  this->BerserkColor = 0;
  *((_BYTE *)this + 6224) = 0;
  this->FallBackCoefficient = 0;
  this->CrewCount = 1071644672;
  *((_DWORD *)this + 1560) = 0xFFFFFF;
  *((_DWORD *)this + 1561) = 0;
  *((_DWORD *)this + 1562) = 0;
  v3 = (char *)this + 6260;
  *((_DWORD *)this + 1563) = 50;
  *((_DWORD *)this + 1564) = 0;
  v4 = (char *)this + 6260;
  v5 = 16;
  do
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)this + 1577) = 0;
  *((_DWORD *)this + 1578) = 0;
  *((_DWORD *)this + 1579) = 0;
  *((_DWORD *)this + 1580) = 0;
  *((_DWORD *)this + 1581) = 1065353216;
  *((_DWORD *)this + 1582) = 1065353216;
  this->? = 0;
  this->? = 60;
  this->? = 0.0;
  this->? = 1.0;
  this->? = 0.050000001;
  LODWORD(this->?) = 1;
  this->? = 1053609165;
  *(_DWORD *)this->? = 768;
  LODWORD(this->?) = 1000;
  HIDWORD(this->?) = 1000;
  LODWORD(this->?) = 256;
  BYTE4(this->?) = 1;
  LODWORD(this->?) = 0;
  HIDWORD(this->?) = 10;
  this->? = 60;
  this->? = 0;
  this->? = 1065353216;
  this->? = 1028443341;
  LODWORD(this->?) = 1;
  HIDWORD(this->?) = 1053609165;
  LODWORD(this->?) = 768;
  HIDWORD(this->?) = 1000;
  LODWORD(this->?) = 1000;
  HIDWORD(this->?) = 128;
  LOBYTE(this->?) = 0;
  this->? = 0;
  LODWORD(this->?) = 10;
  HIDWORD(this->?) = 30;
  LODWORD(this->?) = 1065353216;
  HIDWORD(this->?) = 1065353216;
  LODWORD(this->?) = 1065353216;
  HIDWORD(this->?) = 1;
  LODWORD(this->?) = 1058642330;
  HIDWORD(this->?) = 768;
  LODWORD(this->?) = 500;
  HIDWORD(this->?) = 500;
  LODWORD(this->?) = 128;
  BYTE4(this->?) = 0;
  this->?[0] = 0;
  v6 = 16;
  do
  {
    v7 = v3;
    v3 += 3;
    --v6;
    *(_WORD *)v7 = 0;
    v7[2] = 0;
  }
  while ( v6 );
  return (int)this;
}
}

// 0x667A30
int RulesClass::DTOR()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RulesClass::DTOR(RulesClass *this)
{
  int *v2; // ecx
  void *v3; // eax
  void *HarvesterTooFarDistance; // eax
  void *SovietDisguise; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *ChronoDelay; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  void *ComputerBaseDefenseResponse; // eax
  void *GDIWallDefense_high; // eax
  void *v20; // eax
  void *v21; // eax
  void *v22; // eax
  void *v23; // eax
  void *v24; // eax
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // eax
  void *CameraRange; // eax
  void *StopSound; // eax
  void *v31; // eax
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  void *PrismSupportHeight; // eax
  void *IonCannonDamage; // eax
  void *v37; // eax
  void *WobblesPerSecond_high; // eax
  void *Climb; // eax
  void *PrerequisiteProcAlternate; // eax
  void *WarpIn; // eax
  void *DrainAnimationType; // eax
  void *DominatorSecondAnim; // eax
  void *GUIOpenSound; // eax
  void *CreateUnitSound; // eax
  void *v46; // eax
  void *v47; // eax
  int result; // eax

  v2 = &this->?[2]; /*0x667a3b*/
  *v2 = (int)&vt_VectorClass_int; /*0x667a41*/
  VectorClass::Destroy((int)v2); /*0x667a43*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667a4e*/
  VectorClass::Destroy((int)&this->?); /*0x667a50*/
  *(_DWORD *)this->? = &vt_VectorClass_int; /*0x667a5b*/
  VectorClass::Destroy((int)this->?); /*0x667a5d*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667a68*/
  VectorClass::Destroy((int)&this->?); /*0x667a6a*/
  this->? = (int)&vt_VectorClass_int; /*0x667a75*/
  VectorClass::Destroy((int)&this->?); /*0x667a77*/
  *(_DWORD *)&this->? = &vt_VectorClass_int; /*0x667a82*/
  VectorClass::Destroy((int)&this->?); /*0x667a84*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667a8f*/
  VectorClass::Destroy((int)&this->?); /*0x667a91*/
  this->? = (int)&vt_VectorClass_int; /*0x667a9c*/
  VectorClass::Destroy((int)&this->?); /*0x667a9e*/
  this->? = (int)&vt_VectorClass_int; /*0x667aa9*/
  VectorClass::Destroy((int)&this->?); /*0x667aab*/
  this->? = (int)&vt_VectorClass_int; /*0x667ab6*/
  VectorClass::Destroy((int)&this->?); /*0x667ab8*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667ac3*/
  VectorClass::Destroy((int)&this->?); /*0x667ac5*/
  *(_DWORD *)this->? = &vt_VectorClass_int; /*0x667ad0*/
  VectorClass::Destroy((int)this->?); /*0x667ad2*/
  this->? = (int)&vt_VectorClass_int; /*0x667add*/
  VectorClass::Destroy((int)&this->?); /*0x667adf*/
  HIDWORD(this->?) = &vt_VectorClass_int; /*0x667aea*/
  VectorClass::Destroy((int)&this->? + 4); /*0x667aec*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667af7*/
  VectorClass::Destroy((int)&this->?); /*0x667af9*/
  HIDWORD(this->?) = &vt_VectorClass_int; /*0x667b04*/
  VectorClass::Destroy((int)&this->? + 4); /*0x667b06*/
  this->? = (int)&vt_VectorClass_int; /*0x667b11*/
  VectorClass::Destroy((int)&this->?); /*0x667b13*/
  HIDWORD(this->?) = &vt_VectorClass_int; /*0x667b1e*/
  VectorClass::Destroy((int)&this->? + 4); /*0x667b20*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667b2b*/
  VectorClass::Destroy((int)&this->?); /*0x667b2d*/
  *(_DWORD *)this->? = &vt_VectorClass_int; /*0x667b38*/
  VectorClass::Destroy((int)this->?); /*0x667b3a*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667b45*/
  VectorClass::Destroy((int)&this->?); /*0x667b47*/
  this->?[17] = (int)&vt_VectorClass_int; /*0x667b52*/
  VectorClass::Destroy((int)&this->?[17]); /*0x667b54*/
  this->?[9] = (int)&vt_VectorClass_int; /*0x667b5f*/
  VectorClass::Destroy((int)&this->?[9]); /*0x667b61*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667b6c*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667b6e*/
  this->? = (int)&vt_VectorClass_TerrainTypeClass_const; /*0x667b79*/
  TypeList_cptr_TerrainTypeClass::TryFreeAndClear((int)&this->?); /*0x667b7f*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667b8a*/
  VectorClass::Destroy((int)&this->?); /*0x667b8c*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x667b97*/
  VectorClass::Destroy((int)&this->?[3]); /*0x667b99*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x667ba4*/
  VectorClass::Destroy((int)this->?); /*0x667ba6*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x667bb1*/
  VectorClass::Destroy((int)&this->?[3]); /*0x667bb3*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667bbe*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667bc0*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x667bcb*/
  VectorClass::Destroy((int)this->?); /*0x667bcd*/
  this->?[1] = (int)&vt_VectorClass_int; /*0x667bd8*/
  VectorClass::Destroy((int)&this->?[1]); /*0x667bda*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667be5*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667be7*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667bf2*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667bf4*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x667bff*/
  VectorClass::Destroy((int)&this->?[3]); /*0x667c01*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x667c0c*/
  VectorClass::Destroy((int)this->?); /*0x667c0e*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667c19*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667c1b*/
  HIDWORD(this->?) = &vt_VectorClass_int; /*0x667c26*/
  VectorClass::Destroy((int)&this->? + 4); /*0x667c28*/
  this->? = (int)&vt_VectorClass_int; /*0x667c33*/
  VectorClass::Destroy((int)&this->?); /*0x667c35*/
  this->? = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667c45*/
  DynamicVectorClass::Destroy((int)&this->?); /*0x667c47*/
  *(_DWORD *)this->? = &vt_VectorClass_UnitTypeClass_const; /*0x667c52*/
  Vector::Destructor((int)this->?); /*0x667c58*/
  LODWORD(this->?) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c63*/
  Vector::Cleanup((int)&this->?); /*0x667c69*/
  HIDWORD(this->?) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c74*/
  Vector::Cleanup((int)&this->? + 4); /*0x667c7a*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667c85*/
  VectorClass::Destroy((int)&this->?); /*0x667c87*/
  HIDWORD(this->?) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c92*/
  Vector::Cleanup((int)&this->? + 4); /*0x667c98*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667ca3*/
  VectorClass::Destroy((int)&this->?); /*0x667ca5*/
  this->? = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cb0*/
  Vector::Cleanup((int)&this->?); /*0x667cb6*/
  this->? = (int)&vt_VectorClass_int; /*0x667cc1*/
  VectorClass::Destroy((int)&this->?); /*0x667cc3*/
  this->__pad_C3C = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cce*/
  Vector::Cleanup((int)&this->__pad_C3C); /*0x667cd4*/
  this->? = (int)&vt_VectorClass_int; /*0x667cdf*/
  VectorClass::Destroy((int)&this->?); /*0x667ce1*/
  this->? = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cec*/
  Vector::Cleanup((int)&this->?); /*0x667cf2*/
  this->? = (int)&vt_VectorClass_AnimTypeClass_const; /*0x667cfd*/
  DynamicVectorClass::Destroy_Alt((int)&this->?); /*0x667d03*/
  LODWORD(this->?) = &vt_VectorClass_AnimTypeClass_const; /*0x667d0e*/
  DynamicVectorClass::Destroy_Alt((int)&this->?); /*0x667d14*/
  this->?[2] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x667d1f*/
  DynamicVectorClass::Destroy_Alt((int)&this->?[2]); /*0x667d25*/
  LODWORD(this->?) = &vt_VectorClass_AircraftTypeClass_const; /*0x667d30*/
  VectorClass::ClearAndFree4((int)&this->?); /*0x667d36*/
  this->HarvesterLoadRate = (int)&vt_VectorClass_UnitTypeClass_const; /*0x667d41*/
  Vector::Destructor((int)&this->HarvesterLoadRate); /*0x667d47*/
  this->SovietSurvivorDivisor[1] = (int)&vt_VectorClass_UnitTypeClass_const; /*0x667d52*/
  Vector::Destructor((int)&this->SovietSurvivorDivisor[1]); /*0x667d58*/
  this->BridgeDestruction[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d63*/
  DynamicVectorClass::Destroy((int)&this->BridgeDestruction[1]); /*0x667d65*/
  this->MinUnitCount = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d70*/
  DynamicVectorClass::Destroy((int)&this->MinUnitCount); /*0x667d72*/
  this->SilverCrate[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d7d*/
  DynamicVectorClass::Destroy((int)&this->SilverCrate[3]); /*0x667d7f*/
  v3 = (void *)this->Aircraft[1]; /*0x667d84*/
  this->Aircraft[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d8e*/
  if ( v3 && BYTE1(this->Aircraft[3]) ) /*0x667d96*/
  {
    __3_YAXPAX_Z(v3); /*0x667d9f*/
    this->Aircraft[1] = 0; /*0x667da7*/
  }
  BYTE1(this->Aircraft[3]) = 0; /*0x667dad*/
  this->Aircraft[2] = 0; /*0x667db3*/
  HarvesterTooFarDistance = (void *)this->Production; /*0x667db9*/
  this->SuperWeapons = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667dbf*/
  if ( HarvesterTooFarDistance && BYTE1(this->RepairSell[0]) ) /*0x667dc9*/
  {
    __3_YAXPAX_Z(HarvesterTooFarDistance); /*0x667dd2*/
    this->Production = 0; /*0x667dda*/
  }
  BYTE1(this->RepairSell[0]) = 0; /*0x667de0*/
  this->GuardArea = 0; /*0x667de6*/
  SovietDisguise = (void *)this->BaseBias; /*0x667dec*/
  this->? = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667df2*/
  if ( SovietDisguise && BYTE1(this->ExpSpread) ) /*0x667dfc*/
  {
    __3_YAXPAX_Z(SovietDisguise); /*0x667e05*/
    this->BaseBias = 0; /*0x667e0d*/
  }
  BYTE1(this->ExpSpread) = 0; /*0x667e13*/
  this->? = 0; /*0x667e19*/
  v6 = (void *)this->InfantryBaseMult[3]; /*0x667e1f*/
  this->InfantryBaseMult[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e25*/
  if ( v6 && BYTE1(this->PatrolScan[1]) ) /*0x667e2f*/
  {
    __3_YAXPAX_Z(v6); /*0x667e38*/
    this->InfantryBaseMult[3] = 0; /*0x667e40*/
  }
  BYTE1(this->PatrolScan[1]) = 0; /*0x667e46*/
  this->PatrolScan[0] = 0; /*0x667e4c*/
  v7 = (void *)this->?[0]; /*0x667e52*/
  this->?[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e58*/
  if ( v7 && BYTE1(this->?[2]) ) /*0x667e62*/
  {
    __3_YAXPAX_Z(v7); /*0x667e6b*/
    this->?[0] = 0; /*0x667e73*/
  }
  BYTE1(this->?[2]) = 0; /*0x667e79*/
  this->?[1] = 0; /*0x667e7f*/
  v8 = (void *)this->WarRatio[1]; /*0x667e85*/
  this->WarRatio[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e8b*/
  if ( v8 && BYTE1(this->WarRatio[3]) ) /*0x667e95*/
  {
    __3_YAXPAX_Z(v8); /*0x667e9e*/
    this->WarRatio[1] = 0; /*0x667ea6*/
  }
  BYTE1(this->WarRatio[3]) = 0; /*0x667eac*/
  this->WarRatio[2] = 0; /*0x667eb2*/
  v9 = (void *)this->?[2]; /*0x667eb8*/
  this->?[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ebe*/
  if ( v9 && BYTE1(this->AALimit[0]) ) /*0x667ec8*/
  {
    __3_YAXPAX_Z(v9); /*0x667ed1*/
    this->?[2] = 0; /*0x667ed9*/
  }
  BYTE1(this->AALimit[0]) = 0; /*0x667edf*/
  this->?[3] = 0; /*0x667ee5*/
  v10 = (void *)this->?[3]; /*0x667eeb*/
  this->?[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ef1*/
  if ( v10 && BYTE1(this->HelipadRatio[1]) ) /*0x667efb*/
  {
    __3_YAXPAX_Z(v10); /*0x667f04*/
    this->?[3] = 0; /*0x667f0c*/
  }
  BYTE1(this->HelipadRatio[1]) = 0; /*0x667f12*/
  this->HelipadRatio[0] = 0; /*0x667f18*/
  v11 = (void *)this->?[0]; /*0x667f1e*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x667f24*/
  if ( v11 && BYTE1(this->?[2]) ) /*0x667f2e*/
  {
    __3_YAXPAX_Z(v11); /*0x667f37*/
    this->?[0] = 0; /*0x667f3f*/
  }
  BYTE1(this->?[2]) = 0; /*0x667f45*/
  this->?[1] = 0; /*0x667f4b*/
  v12 = (void *)this->?[1]; /*0x667f51*/
  this->?[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667f57*/
  if ( v12 && BYTE1(this->?[3]) ) /*0x667f61*/
  {
    __3_YAXPAX_Z(v12); /*0x667f6a*/
    this->?[1] = 0; /*0x667f72*/
  }
  BYTE1(this->?[3]) = 0; /*0x667f78*/
  this->?[2] = 0; /*0x667f7e*/
  ChronoDelay = (void *)this->?; /*0x667f84*/
  this->MyEffectivenessCoefficientDefault = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667f8a*/
  if ( ChronoDelay && BYTE1(this->?) ) /*0x667f94*/
  {
    __3_YAXPAX_Z(ChronoDelay); /*0x667f9d*/
    this->? = 0; /*0x667fa5*/
  }
  BYTE1(this->?) = 0; /*0x667fab*/
  this->TargetEffectivenessCoefficientDefault = 0; /*0x667fb1*/
  v14 = (void *)this->?[1]; /*0x667fb7*/
  this->?[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667fbd*/
  if ( v14 && BYTE1(this->?[3]) ) /*0x667fc7*/
  {
    __3_YAXPAX_Z(v14); /*0x667fd0*/
    this->?[1] = 0; /*0x667fd8*/
  }
  BYTE1(this->?[3]) = 0; /*0x667fde*/
  this->?[2] = 0; /*0x667fe4*/
  v15 = (void *)this->?[3]; /*0x667fea*/
  this->?[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ff0*/
  if ( v15 && BYTE1(this->?) ) /*0x667ffa*/
  {
    __3_YAXPAX_Z(v15); /*0x668003*/
    this->?[3] = 0; /*0x66800b*/
  }
  BYTE1(this->?) = 0; /*0x668011*/
  this->? = 0; /*0x668017*/
  v16 = (void *)this->?[0]; /*0x66801d*/
  this->?[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668023*/
  if ( v16 && BYTE1(this->?[2]) ) /*0x66802d*/
  {
    __3_YAXPAX_Z(v16); /*0x668036*/
    this->?[0] = 0; /*0x66803e*/
  }
  BYTE1(this->?[2]) = 0; /*0x668044*/
  this->?[1] = 0; /*0x66804a*/
  v17 = (void *)this->?[1]; /*0x668050*/
  this->?[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668056*/
  if ( v17 && BYTE1(this->?[3]) ) /*0x668060*/
  {
    __3_YAXPAX_Z(v17); /*0x668069*/
    this->?[1] = 0; /*0x668071*/
  }
  BYTE1(this->?[3]) = 0; /*0x668077*/
  this->?[2] = 0; /*0x66807d*/
  ComputerBaseDefenseResponse = (void *)this->?; /*0x668083*/
  HIDWORD(this->?) = &vt_VectorClass_BuildingTypeClass_const; /*0x668089*/
  if ( ComputerBaseDefenseResponse && BYTE1(this->?[0]) ) /*0x668093*/
  {
    __3_YAXPAX_Z(ComputerBaseDefenseResponse); /*0x66809c*/
    this->? = 0; /*0x6680a4*/
  }
  BYTE1(this->?[0]) = 0; /*0x6680aa*/
  this->? = 0; /*0x6680b0*/
  GDIWallDefense_high = (void *)HIDWORD(this->CHRONOSK_SHP); /*0x6680b6*/
  LODWORD(this->CHRONOSK_SHP) = &vt_VectorClass_BuildingTypeClass_const; /*0x6680bc*/
  if ( GDIWallDefense_high && BYTE5(this->PsychicRevealRadius) ) /*0x6680c6*/
  {
    __3_YAXPAX_Z(GDIWallDefense_high); /*0x6680cf*/
    HIDWORD(this->CHRONOSK_SHP) = 0; /*0x6680d7*/
  }
  BYTE5(this->PsychicRevealRadius) = 0; /*0x6680dd*/
  LODWORD(this->PsychicRevealRadius) = 0; /*0x6680e3*/
  v20 = (void *)this->IvanWarhead[2]; /*0x6680e9*/
  this->IvanWarhead[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x6680ef*/
  if ( v20 && BYTE1(this->CanDetonateTimeBomb[0]) ) /*0x6680f9*/
  {
    __3_YAXPAX_Z(v20); /*0x668102*/
    this->IvanWarhead[2] = 0; /*0x66810a*/
  }
  BYTE1(this->CanDetonateTimeBomb[0]) = 0; /*0x668110*/
  this->IvanWarhead[3] = 0; /*0x668116*/
  v21 = (void *)this->NukeProjectile[3]; /*0x66811c*/
  this->NukeProjectile[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668122*/
  if ( v21 && BYTE1(this->C4Warhead[1]) ) /*0x66812c*/
  {
    __3_YAXPAX_Z(v21); /*0x668135*/
    this->NukeProjectile[3] = 0; /*0x66813d*/
  }
  BYTE1(this->C4Warhead[1]) = 0; /*0x668143*/
  this->C4Warhead[0] = 0; /*0x668149*/
  v22 = (void *)this->AISafeDistance[3]; /*0x66814f*/
  this->AISafeDistance[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668155*/
  if ( v22 && BYTE1(this->Engineer[1]) ) /*0x66815f*/
  {
    __3_YAXPAX_Z(v22); /*0x668168*/
    this->AISafeDistance[3] = 0; /*0x668170*/
  }
  BYTE1(this->Engineer[1]) = 0; /*0x668176*/
  this->Engineer[0] = 0; /*0x66817c*/
  v23 = (void *)this->SpyPowerBlackout[0]; /*0x668182*/
  this->ChronoRangeMinimum[3] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x66818f*/
  if ( v23 && BYTE1(this->SpyPowerBlackout[2]) ) /*0x668197*/
  {
    __3_YAXPAX_Z(v23); /*0x6681a0*/
    this->SpyPowerBlackout[0] = 0; /*0x6681a8*/
  }
  BYTE1(this->SpyPowerBlackout[2]) = 0; /*0x6681ae*/
  this->SpyPowerBlackout[1] = 0; /*0x6681b4*/
  v24 = (void *)this->ChronoReinfDelay[1]; /*0x6681ba*/
  this->ChronoReinfDelay[0] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x6681c0*/
  if ( v24 && BYTE1(this->ChronoReinfDelay[3]) ) /*0x6681ca*/
  {
    __3_YAXPAX_Z(v24); /*0x6681d3*/
    this->ChronoReinfDelay[1] = 0; /*0x6681db*/
  }
  BYTE1(this->ChronoReinfDelay[3]) = 0; /*0x6681e1*/
  this->ChronoReinfDelay[2] = 0; /*0x6681e7*/
  v25 = (void *)this->BombParachute[2]; /*0x6681ed*/
  this->BombParachute[1] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x6681f3*/
  if ( v25 && BYTE1(this->LargeFire[0]) ) /*0x6681fd*/
  {
    __3_YAXPAX_Z(v25); /*0x668206*/
    this->BombParachute[2] = 0; /*0x66820e*/
  }
  BYTE1(this->LargeFire[0]) = 0; /*0x668214*/
  this->BombParachute[3] = 0; /*0x66821a*/
  v26 = (void *)this->BaseUnit[3]; /*0x668220*/
  this->BaseUnit[2] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x668226*/
  if ( v26 && BYTE1(this->TreeFire[1]) ) /*0x668230*/
  {
    __3_YAXPAX_Z(v26); /*0x668239*/
    this->BaseUnit[3] = 0; /*0x668241*/
  }
  BYTE1(this->TreeFire[1]) = 0; /*0x668247*/
  this->TreeFire[0] = 0; /*0x66824d*/
  v27 = (void *)this->GDIBaseDefenseCoefficient[0]; /*0x668253*/
  this->GDIWallDefenseCoefficient[3] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x668259*/
  if ( v27 && BYTE1(this->GDIBaseDefenseCoefficient[2]) ) /*0x668263*/
  {
    __3_YAXPAX_Z(v27); /*0x66826c*/
    this->GDIBaseDefenseCoefficient[0] = 0; /*0x668274*/
  }
  BYTE1(this->GDIBaseDefenseCoefficient[2]) = 0; /*0x66827a*/
  this->GDIBaseDefenseCoefficient[1] = 0; /*0x668280*/
  v28 = (void *)this->?[1]; /*0x668286*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x66828c*/
  if ( v28 && BYTE1(this->?[3]) ) /*0x668296*/
  {
    __3_YAXPAX_Z(v28); /*0x66829f*/
    this->?[1] = 0; /*0x6682a7*/
  }
  BYTE1(this->?[3]) = 0; /*0x6682ad*/
  this->?[2] = 0; /*0x6682b3*/
  CameraRange = (void *)this->ChuteSound; /*0x6682b9*/
  this->HealCrateSound = (int)&vt_VectorClass_int; /*0x6682bf*/
  if ( CameraRange && BYTE1(this->GuardSound) ) /*0x6682c9*/
  {
    __3_YAXPAX_Z(CameraRange); /*0x6682d2*/
    this->ChuteSound = 0; /*0x6682da*/
  }
  BYTE1(this->GuardSound) = 0; /*0x6682e0*/
  this->StopSound = 0; /*0x6682e6*/
  StopSound = (void *)this->?; /*0x6682ec*/
  this->VeteranROF = (int)&vt_VectorClass_int; /*0x6682f2*/
  if ( StopSound && BYTE1(this->?) ) /*0x6682fc*/
  {
    __3_YAXPAX_Z(StopSound); /*0x668305*/
    this->? = 0; /*0x66830d*/
  }
  BYTE1(this->?) = 0; /*0x668313*/
  this->VeteranCap = 0; /*0x668319*/
  v31 = (void *)this->RevealTriggerRadius[0]; /*0x66831f*/
  this->CloakingStages = (int)&vt_VectorClass_VoxelAnimTypeClass_const; /*0x66832c*/
  if ( v31 && BYTE1(this->RevealTriggerRadius[2]) ) /*0x668334*/
  {
    __3_YAXPAX_Z(v31); /*0x66833d*/
    this->RevealTriggerRadius[0] = 0; /*0x668345*/
  }
  BYTE1(this->RevealTriggerRadius[2]) = 0; /*0x66834b*/
  this->RevealTriggerRadius[1] = 0; /*0x668351*/
  v32 = (void *)this->?[7]; /*0x668357*/
  this->?[6] = (int)&vt_VectorClass_int; /*0x66835d*/
  if ( v32 && BYTE1(this->?[9]) ) /*0x668367*/
  {
    __3_YAXPAX_Z(v32); /*0x668370*/
    this->?[7] = 0; /*0x668378*/
  }
  BYTE1(this->?[9]) = 0; /*0x66837e*/
  this->?[8] = 0; /*0x668384*/
  v33 = (void *)this->?[0]; /*0x66838a*/
  this->?[13] = (int)&vt_VectorClass_int; /*0x668390*/
  if ( v33 && BYTE1(this->?[2]) ) /*0x66839a*/
  {
    __3_YAXPAX_Z(v33); /*0x6683a3*/
    this->?[0] = 0; /*0x6683ab*/
  }
  BYTE1(this->?[2]) = 0; /*0x6683b1*/
  this->?[1] = 0; /*0x6683b7*/
  v34 = (void *)this->?[7]; /*0x6683bd*/
  this->?[6] = (int)&vt_VectorClass_int; /*0x6683c3*/
  if ( v34 && BYTE1(this->?[9]) ) /*0x6683cd*/
  {
    __3_YAXPAX_Z(v34); /*0x6683d6*/
    this->?[7] = 0; /*0x6683de*/
  }
  BYTE1(this->?[9]) = 0; /*0x6683e4*/
  this->?[8] = 0; /*0x6683ea*/
  PrismSupportHeight = (void *)this->?; /*0x6683f0*/
  this->? = (int)&vt_VectorClass_int; /*0x6683f6*/
  if ( PrismSupportHeight && BYTE1(this->?[1]) ) /*0x668400*/
  {
    __3_YAXPAX_Z(PrismSupportHeight); /*0x668409*/
    this->? = 0; /*0x668411*/
  }
  BYTE1(this->?[1]) = 0; /*0x668417*/
  this->?[0] = 0; /*0x66841d*/
  IonCannonDamage = (void *)this->?; /*0x668423*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x668429*/
  if ( IonCannonDamage && BYTE1(this->?) ) /*0x668433*/
  {
    __3_YAXPAX_Z(IonCannonDamage); /*0x66843c*/
    this->? = 0; /*0x668444*/
  }
  BYTE1(this->?) = 0; /*0x66844a*/
  this->? = 0; /*0x668450*/
  v37 = (void *)this->?[1]; /*0x668456*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x66845c*/
  if ( v37 && BYTE1(this->?[3]) ) /*0x668466*/
  {
    __3_YAXPAX_Z(v37); /*0x66846f*/
    this->?[1] = 0; /*0x668477*/
  }
  BYTE1(this->?[3]) = 0; /*0x66847d*/
  this->?[2] = 0; /*0x668483*/
  WobblesPerSecond_high = (void *)HIDWORD(this->?); /*0x668489*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x66848f*/
  if ( WobblesPerSecond_high && BYTE1(this->?[0]) ) /*0x668499*/
  {
    __3_YAXPAX_Z(WobblesPerSecond_high); /*0x6684a2*/
    HIDWORD(this->?) = 0; /*0x6684aa*/
  }
  BYTE1(this->?[0]) = 0; /*0x6684b0*/
  this->? = 0; /*0x6684b6*/
  Climb = (void *)this->?; /*0x6684bc*/
  *(_DWORD *)&this->?[4] = &vt_VectorClass_int; /*0x6684c2*/
  if ( Climb && BYTE1(this->?) ) /*0x6684cc*/
  {
    __3_YAXPAX_Z(Climb); /*0x6684d5*/
    LODWORD(this->?) = 0; /*0x6684dd*/
  }
  BYTE1(this->?) = 0; /*0x6684e3*/
  HIDWORD(this->?) = 0; /*0x6684e9*/
  PrerequisiteProcAlternate = (void *)this->?; /*0x6684ef*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x6684f5*/
  if ( PrerequisiteProcAlternate && BYTE1(this->?) ) /*0x6684ff*/
  {
    __3_YAXPAX_Z(PrerequisiteProcAlternate); /*0x668508*/
    this->? = 0; /*0x668510*/
  }
  BYTE1(this->?) = 0; /*0x668516*/
  this->? = 0; /*0x66851c*/
  WarpIn = (void *)this->?; /*0x668522*/
  this->? = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66852f*/
  if ( WarpIn && BYTE1(this->?) ) /*0x668537*/
  {
    __3_YAXPAX_Z(WarpIn); /*0x668540*/
    this->? = 0; /*0x668548*/
  }
  BYTE1(this->?) = 0; /*0x66854e*/
  this->? = 0; /*0x668554*/
  DrainAnimationType = (void *)this->?; /*0x66855a*/
  this->? = (int)&vt_VectorClass_AnimTypeClass_const; /*0x668560*/
  if ( DrainAnimationType && BYTE1(this->?) ) /*0x66856a*/
  {
    __3_YAXPAX_Z(DrainAnimationType); /*0x668573*/
    this->? = 0; /*0x66857b*/
  }
  BYTE1(this->?) = 0; /*0x668581*/
  this->? = 0; /*0x668587*/
  DominatorSecondAnim = (void *)this->?; /*0x66858d*/
  this->? = (int)&vt_VectorClass_AnimTypeClass_const; /*0x668593*/
  if ( DominatorSecondAnim && BYTE1(this->?) ) /*0x66859d*/
  {
    __3_YAXPAX_Z(DominatorSecondAnim); /*0x6685a6*/
    this->? = 0; /*0x6685ae*/
  }
  BYTE1(this->?) = 0; /*0x6685b4*/
  this->? = 0; /*0x6685ba*/
  GUIOpenSound = (void *)this->CrateFireSound; /*0x6685c0*/
  this->CrateRevealSound = (int)&vt_VectorClass_AnimTypeClass_const; /*0x6685c6*/
  if ( GUIOpenSound && BYTE1(this->CrateSpeedSound) ) /*0x6685d0*/
  {
    __3_YAXPAX_Z(GUIOpenSound); /*0x6685d9*/
    this->CrateFireSound = 0; /*0x6685e1*/
  }
  BYTE1(this->CrateSpeedSound) = 0; /*0x6685e7*/
  this->CrateArmourSound = 0; /*0x6685ed*/
  CreateUnitSound = (void *)this->DefaultChronoSound; /*0x6685f3*/
  this->PlaceBeaconSound = (int)&vt_VectorClass_AnimTypeClass_const; /*0x6685f9*/
  if ( CreateUnitSound && BYTE1(this->AddPlanningModeCommandSound) ) /*0x668603*/
  {
    __3_YAXPAX_Z(CreateUnitSound); /*0x66860c*/
    this->DefaultChronoSound = 0; /*0x668614*/
  }
  BYTE1(this->AddPlanningModeCommandSound) = 0; /*0x66861a*/
  this->StartPlanningModeSound = 0; /*0x668620*/
  v46 = (void *)this->GUICheckboxSound[2]; /*0x668626*/
  this->GUICheckboxSound[1] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66862c*/
  if ( v46 && BYTE1(this->BuildingGarrisonedSound[0]) ) /*0x668636*/
  {
    __3_YAXPAX_Z(v46); /*0x66863f*/
    this->GUICheckboxSound[2] = 0; /*0x668647*/
  }
  BYTE1(this->BuildingGarrisonedSound[0]) = 0; /*0x66864d*/
  this->GUICheckboxSound[3] = 0; /*0x668653*/
  v47 = (void *)this->GUITabSound[3]; /*0x668659*/
  this->GUITabSound[2] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66865f*/
  if ( v47 && BYTE1(this->GUIMoveInSound[1]) ) /*0x668669*/
  {
    __3_YAXPAX_Z(v47); /*0x668672*/
    this->GUITabSound[3] = 0; /*0x66867a*/
  }
  BYTE1(this->GUIMoveInSound[1]) = 0; /*0x668680*/
  this->GUIMoveInSound[0] = 0; /*0x668686*/
  result = this->RadarEventColorSpeed[1]; /*0x66868c*/
  this->RadarEventColorSpeed[0] = (int)&vt_VectorClass_VoxelAnimTypeClass_const; /*0x66868f*/
  if ( result && BYTE1(this->RadarEventColorSpeed[3]) ) /*0x668696*/
  {
    __3_YAXPAX_Z((void *)result); /*0x66869c*/
    this->RadarEventColorSpeed[1] = 0; /*0x6686a4*/
  }
  BYTE1(this->RadarEventColorSpeed[3]) = 0; /*0x6686a7*/
  this->RadarEventColorSpeed[2] = 0; /*0x6686aa*/
  return result; /*0x6686ad*/
}
}

// 0x66D150
int RulesClass::readAudioVisual()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_66D150(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // ecx
  double Double_Overwrite; // st7
  unsigned int v6; // eax
  unsigned int v7; // ecx
  double v8; // [esp-8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v9, (unsigned __int8 *)MEMORY[0x839E70]); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v9,
                      (unsigned __int8 *)MEMORY[0x839E70],
                      (unsigned __int8 *)MEMORY[0x83B370],
                      *((_DWORD *)this + 1550));
    v4 = *((_DWORD *)this + 1552); /*0x66d188*/
    *((_DWORD *)this + 1550) = Int_Overwrite; /*0x66d18e*/
    HIDWORD(v8) = this->LaserTargetColor; /*0x66d1a0*/
    LODWORD(v8) = v4; /*0x66d1a1*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x66d1aa*/
                         v9,
                         (unsigned __int8 *)MEMORY[0x839E70],
                         (unsigned __int8 *)MEMORY[0x83B358],
                         v8);
    v6 = this->BerserkColor; /*0x66d1af*/
    v7 = this->IronCurtainColor; /*0x66d1b5*/
    *((double *)this + 776) = Double_Overwrite; /*0x66d1bb*/
    *((double *)this + 777) = INIClass::ReadDouble_Overwrite( /*0x66d1d6*/
                                v9,
                                (unsigned __int8 *)MEMORY[0x839E70],
                                (unsigned __int8 *)MEMORY[0x83B344],
                                COERCE_DOUBLE(__PAIR64__(v6, v7)));
    LOBYTE(result) = 1; /*0x66d1dd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d1e4*/
  }
  return result; /*0x66d1dc*/
}
}

// 0x673E80
int RulesClass::ReadPowerupsSection()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_673E80(RulesClass *this)
{
  int result; // eax
  int v2; // edi
  double *v3; // ebp
  char *v4; // eax
  const char *v5; // esi
  char *v6; // eax
  char *v7; // esi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  double v11; // st7
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  unsigned __int8 ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)MEMORY[0x839D98]); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    v2 = 0; /*0x673ea5*/
    v3 = MEMORY[0x89EC28]; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 v13,
                 (unsigned __int8 *)MEMORY[0x839D98],
                 *((unsigned __int8 **)&off_7E523C + v2),
                 MEMORY[0x83D4AC],
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        v4 = strtok(String, MEMORY[0x817F70]); /*0x673ee7*/
        v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        v6 = strtok(0, MEMORY[0x817F70]); /*0x673f13*/
        v7 = v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        v8 = strtok(0, MEMORY[0x817F70]); /*0x673f3d*/
        v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, MEMORY[0x825BF8]) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, MEMORY[0x825BF4]) ) /*0x673f73*/
              MEMORY[0x89ECC0][v2] = 0; /*0x673f7f*/
          }
          else
          {
            MEMORY[0x89ECC0][v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, MEMORY[0x817F70]); /*0x673f8c*/
        v10 = (char *)result; /*0x673f91*/
        if ( result ) /*0x673f98*/
        {
          if ( strchr((const char *)result, 37) ) /*0x673f9d*/
          {
            v11 = atof(v10) * 0.01; /*0x673faf*/
          }
          else
          {
            String::Trim(v10); /*0x673fbc*/
            v11 = atof(v10); /*0x673fc2*/
          }
          *v3 = v11; /*0x673fca*/
        }
      }
      ++v3; /*0x673fcd*/
      ++v2; /*0x673fd0*/
    }
    while ( (int)v3 < (int)MEMORY[0x89ECC0] ); /*0x673fd7*/
    LOBYTE(result) = 1; /*0x673fdf*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x673feb*/
  }
  return result; /*0x673fe2*/
}
}

// 0x6743D0
int RulesClass::readDifficulty()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6743D0(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  double Double_Overwrite; // st7
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  int v14; // ecx
  double v15; // [esp-8h] [ebp-10h]
  int v16; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v16, (unsigned __int8 *)MEMORY[0x839D58]); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    this->?[8] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                   v16,
                   (unsigned __int8 *)MEMORY[0x839D58],
                   (unsigned __int8 *)MEMORY[0x83D554],
                   this->?[8]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (unsigned __int8 *)MEMORY[0x839D58],
                      (unsigned __int8 *)g_INI_Key_Speed,
                      this->?[9]);
    v4 = this->?[12]; /*0x67442c*/
    this->?[9] = Int_Overwrite; /*0x674432*/
    HIDWORD(v15) = v4; /*0x674444*/
    LODWORD(v15) = this->?[11]; /*0x674445*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x67444e*/
                         v16,
                         (unsigned __int8 *)MEMORY[0x839D58],
                         (unsigned __int8 *)MEMORY[0x83D54C],
                         v15);
    v6 = this->?[13]; /*0x674453*/
    *(double *)&this->?[11] = Double_Overwrite; /*0x67445b*/
    v7 = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)MEMORY[0x839D58], (unsigned __int8 *)MEMORY[0x83D53C], v6); /*0x67446d*/
    v8 = this->?[2]; /*0x674472*/
    v9 = this->?[1]; /*0x674478*/
    this->?[13] = v7; /*0x67447e*/
    v10 = INIClass::ReadDouble_Overwrite( /*0x674493*/
            v16,
            (unsigned __int8 *)MEMORY[0x839D58],
            (unsigned __int8 *)MEMORY[0x81B140],
            COERCE_DOUBLE(__PAIR64__(v8, v9)));
    v11 = this->?[4]; /*0x674498*/
    v12 = this->?[3]; /*0x67449e*/
    *(double *)&this->?[1] = v10; /*0x6744a4*/
    v13 = INIClass::ReadDouble_Overwrite( /*0x6744b9*/
            v16,
            (unsigned __int8 *)MEMORY[0x839D58],
            (unsigned __int8 *)MEMORY[0x83D528],
            COERCE_DOUBLE(__PAIR64__(v11, v12)));
    v14 = this->?[5]; /*0x6744be*/
    *(double *)&this->?[3] = v13; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite( /*0x6744d9*/
               v16,
               (unsigned __int8 *)MEMORY[0x839D58],
               (unsigned __int8 *)MEMORY[0x83D518],
               v14);
    this->?[5] = result; /*0x6744de*/
    LOBYTE(result) = 1; /*0x6744e5*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6744ec*/
  }
  return result; /*0x6744e4*/
}
}

// 0x674550
int RulesClass::ReadMovies()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_674550(RulesClass *this)
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // esi
  char Source[32]; // [esp+4h] [ebp-20h] BYREF
  char *v7; // [esp+28h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)MEMORY[0x839D50]); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7, (unsigned __int8 *)MEMORY[0x839D50]); /*0x67457d*/
    v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7, (unsigned __int8 *)MEMORY[0x839D50], i); /*0x6745a4*/
      result = INIClass::GetString( /*0x6745b3*/
                 (unsigned __int8 ***)v7,
                 (unsigned __int8 *)MEMORY[0x839D50],
                 StringByIndex,
                 MEMORY[0x817474],
                 Source,
                 32);
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex(Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          v5 = _strdup(Source); /*0x6745da*/
          result = MEMORY[0xABF398]; /*0x6745dc*/
          if ( MEMORY[0xABF3A0] < MEMORY[0xABF398] /*0x674614*/
            || (MEMORY[0xABF39D] || !MEMORY[0xABF398])
            && MEMORY[0xABF3A4] > 0
            && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xABF390] + 8))(
                           &MEMORY[0xABF390],
                           MEMORY[0xABF398] + MEMORY[0xABF3A4],
                           0),
                (_BYTE)result) )
          {
            result = MEMORY[0xABF3A0]++; /*0x67461c*/
            *((_DWORD *)MEMORY[0xABF394] + result) = v5; /*0x67462b*/
          }
        }
      }
    }
    LOBYTE(result) = 1; /*0x67463a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x674643*/
  }
  return result; /*0x67463c*/
}
}

// 0x679FA0
void RulesClass::readMaximums()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_679FA0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x679fa6*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x679fa9*/
  if ( v2 && *((_BYTE *)this + 13) ) /*0x679fb3*/
  {
    __3_YAXPAX_Z(v2); /*0x679fb9*/
    *(this + 1) = 0; /*0x679fc1*/
  }
  *((_BYTE *)this + 13) = 0; /*0x679fc4*/
  *(this + 2) = 0; /*0x679fc7*/
}
}

// 0x679FD0
void RulesClass::readInfantryTypes()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_679FD0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x679fd6*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x679fd9*/
  if ( v2 && *((_BYTE *)this + 13) ) /*0x679fe3*/
  {
    __3_YAXPAX_Z(v2); /*0x679fe9*/
    *(this + 1) = 0; /*0x679ff1*/
  }
  *((_BYTE *)this + 13) = 0; /*0x679ff4*/
  *(this + 2) = 0; /*0x679ff7*/
}
}

// 0x67A000
void RulesClass::readCountries()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_67A000(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x67a006*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x67a009*/
  if ( v2 && *((_BYTE *)this + 13) ) /*0x67a013*/
  {
    __3_YAXPAX_Z(v2); /*0x67a019*/
    *(this + 1) = 0; /*0x67a021*/
  }
  *((_BYTE *)this + 13) = 0; /*0x67a024*/
  *(this + 2) = 0; /*0x67a027*/
}
}

// 0x67A060
void RulesClass::readVehicleTypes()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_67A060(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x67a066*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67a069*/
  if ( v2 && *((_BYTE *)this + 13) ) /*0x67a073*/
  {
    __3_YAXPAX_Z(v2); /*0x67a079*/
    *(this + 1) = 0; /*0x67a081*/
  }
  *((_BYTE *)this + 13) = 0; /*0x67a084*/
  *(this + 2) = 0; /*0x67a087*/
}
}

// 0x67A190
int * RulesClass::readAircraftTypes(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_67A190(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a19a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a19e*/
    v3 = a2[2]; /*0x67a1a1*/
    *(this + 2) = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a1b3*/
      *(this + 1) = (int)v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        v5 = *(this + 2); /*0x67a1c2*/
        v6 = 0; /*0x67a1c5*/
        *((_BYTE *)this + 13) = 1; /*0x67a1c9*/
        if ( v5 > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < *(this + 2) ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a1e5*/
      *((_BYTE *)this + 13) = 0; /*0x67a1ec*/
    }
  }
  *(this + 4) = a2[4]; /*0x67a1f3*/
  *(this + 5) = a2[5]; /*0x67a1f9*/
  *(this + 6) = a2[6]; /*0x67a1ff*/
  return this; /*0x67a204*/
}
}

// 0x67A210
int * RulesClass::readSuperWeaponTypes(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_67A210(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a21a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a21e*/
    v3 = a2[2]; /*0x67a221*/
    *(this + 2) = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a233*/
      *(this + 1) = (int)v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        v5 = *(this + 2); /*0x67a242*/
        v6 = 0; /*0x67a245*/
        *((_BYTE *)this + 13) = 1; /*0x67a249*/
        if ( v5 > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < *(this + 2) ); /*0x67a261*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a265*/
      *((_BYTE *)this + 13) = 0; /*0x67a26c*/
    }
  }
  *(this + 4) = a2[4]; /*0x67a273*/
  *(this + 5) = a2[5]; /*0x67a279*/
  *(this + 6) = a2[6]; /*0x67a27f*/
  return this; /*0x67a284*/
}
}

// 0x67A310
int * RulesClass::readBuildingTypes(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_67A310(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a31a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a31e*/
    v3 = a2[2]; /*0x67a321*/
    *(this + 2) = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a333*/
      *(this + 1) = (int)v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        v5 = *(this + 2); /*0x67a342*/
        v6 = 0; /*0x67a345*/
        *((_BYTE *)this + 13) = 1; /*0x67a349*/
        if ( v5 > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < *(this + 2) ); /*0x67a361*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a365*/
      *((_BYTE *)this + 13) = 0; /*0x67a36c*/
    }
  }
  *(this + 4) = a2[4]; /*0x67a373*/
  *(this + 5) = a2[5]; /*0x67a379*/
  *(this + 6) = a2[6]; /*0x67a37f*/
  return this; /*0x67a384*/
}
}

// 0x67A8B0
unsigned int * RulesClass::readParticles()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_67A8B0(_DWORD *this)
{
  *(this + 1) = 0; /*0x67a8b4*/
  *(this + 2) = 0; /*0x67a8b7*/
  *((_BYTE *)this + 12) = 1; /*0x67a8ba*/
  *((_BYTE *)this + 13) = 0; /*0x67a8be*/
  *(this + 5) = 10; /*0x67a8c1*/
  *(this + 4) = 0; /*0x67a8c8*/
  *this = &vt_TypeList_TerrainTypeClass_const; /*0x67a8cb*/
  return this; /*0x67a8d1*/
}
}

// 0x67B480
char RulesClass::readAI(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_67B480(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x67b483*/
  if ( *(this + 4) >= v3 ) /*0x67b48b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x67b496*/
      return 0; /*0x67b496*/
    v4 = *(this + 5); /*0x67b498*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x67b4a8*/
      return 0; /*0x67b4af*/
  }
  v6 = *(this + 4); /*0x67b4b5*/
  v7 = *(this + 1); /*0x67b4b8*/
  *(this + 4) = v6 + 1; /*0x67b4be*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x67b4c8*/
  return 1; /*0x67b4b1*/
}
}

// 0x67BDD0
VectorClass * RulesClass::LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__fastcall RulesClass::LoadTypeList(
        int a1,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a2,
        _DWORD *a5)
{
  char *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x67bdfc*/
  {
    RulesClass::readIQ(&v17, 0, 0); /*0x67be11*/
    v22 = 10; /*0x67be1a*/
    v21 = 0; /*0x67be28*/
    v17 = (VectorClass *)&vt_TypeList_TerrainTypeClass_const; /*0x67be2c*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = (INIClass *)TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67be86*/
        *((_DWORD *)Block + v8) = v7; /*0x67be91*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67bead*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67beb0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67beb3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67beb7*/
    *(_DWORD *)a1 = &vt_VectorClass_TerrainTypeClass_const; /*0x67beba*/
    System_Load_67BFA0((_DWORD *)a1, &v17); /*0x67bec0*/
    *(_DWORD *)a1 = &vt_TypeList_TerrainTypeClass_const; /*0x67bec5*/
    v17 = (VectorClass *)&vt_VectorClass_TerrainTypeClass_const; /*0x67becb*/
    v9 = (VectorClass *)v22; /*0x67bed7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67bedb*/
    v10 = Block; /*0x67bede*/
    v11 = Block == 0; /*0x67bee2*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67bee4*/
    if ( !v11 && v20 ) /*0x67bef1*/
    {
      __3_YAXPAX_Z(v10); /*0x67bef8*/
      return (VectorClass *)a1; /*0x67bf0b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67bf19*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bf1c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bf1f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bf23*/
    *(_DWORD *)a1 = &vt_VectorClass_TerrainTypeClass_const; /*0x67bf26*/
    if ( (_DWORD *)a1 != a5 ) /*0x67bf2c*/
    {
      TypeList_cptr_TerrainTypeClass::TryFreeAndClear(a1); /*0x67bf30*/
      v13 = a5[2]; /*0x67bf36*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bf48*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67bf57*/
          v16 = 0; /*0x67bf5a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67bf5e*/
          if ( (int)v15 > 0 ) /*0x67bf62*/
          {
            do /*0x67bf76*/
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v16) = *(_DWORD *)(a5[1] + 4 * v16); /*0x67bf6d*/
              ++v16; /*0x67bf73*/
            }
            while ( v16 < *(_DWORD *)(a1 + 8) ); /*0x67bf76*/
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0; /*0x67bf7a*/
        *(_BYTE *)(a1 + 13) = 0; /*0x67bf7d*/
      }
    }
    *(_DWORD *)(a1 + 16) = a5[4]; /*0x67bf83*/
    *(_DWORD *)(a1 + 20) = a5[5]; /*0x67bf89*/
    *(_DWORD *)a1 = &vt_TypeList_TerrainTypeClass_const; /*0x67bf8c*/
  }
  return (VectorClass *)a1; /*0x67bf02*/
}
}

// 0x67C430
unsigned int * RulesClass::readIQ(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_67C430(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x67c43b*/
  *(this + 2) = a2; /*0x67c43e*/
  *((_BYTE *)this + 12) = 1; /*0x67c441*/
  *((_BYTE *)this + 13) = 0; /*0x67c445*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      *(this + 1) = a3; /*0x67c458*/
      return this; /*0x67c45e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x67c46d*/
    *((_BYTE *)this + 13) = 1; /*0x67c470*/
  }
  return this; /*0x67c45d*/
}
}

// 0x6614F0
int RulesClass::readGeneralSection(TechnoTypeClass * aP1)
{
{
    return (*(int (__stdcall **)(TechnoTypeClass *, void *, int, int))(*(int *)aP1->vtable0 + 16))(aP1, this, 3, 0);
}
}

// 0x661510
int RulesClass::readCombatDamage(int a2)
{
{
    return (*(int (__stdcall **)(int, void *, int, int))(*(int *)(a2) + 12))(a2, this, 3, 0);
}
}

// 0x66D1F0
int RulesClass::readSpecialWeapons()
{
{
    int result;
    char Bool_Overwrite;
    int v4;
    double v5;
    int v6;
    result = INIClass::BinarySearchSection(v6, (unsigned char *)DataGlobal_839E64);
    if ( result )
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( v6, (unsigned char *)DataGlobal_839E64, (unsigned char *)DataGlobal_83B39C, (unsigned char)this->ForceShieldColor);
    v4 = this->FallBackCoefficient;
    this->ForceShieldColor = Bool_Overwrite;
    HIDWORD(v5) = this->CrewCount;
    LODWORD(v5) = v4;
    *((double *)(this) + 779) = INIClass::ReadDouble_Overwrite( v6, (unsigned char *)DataGlobal_839E64, (unsigned char *)DataGlobal_83B384, v5);
    LOBYTE(result) = 1;
  }
    else
  {
    LOBYTE(result) = 0;
  }
    return result;
}
}

// 0x66D3A0
int RulesClass::ReadColors()
{
{
    char *v1;
    int result;
    int v3;
    int i;
    unsigned char *StringByIndex;
    int Color;
    unsigned char v7[4];
    char v8[4];
    char *v9;
    v1 = v9;
    result = INIClass::BinarySearchSection((int)v9, (unsigned char *)DataGlobal_839E5C);
    if ( result )
  {
    result = INIClass::GetKeyCount(v1, (unsigned char *)DataGlobal_839E5C);
    v3 = result;
    for ( i = 0; i < v3; ++i )
    {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v1, (unsigned char *)DataGlobal_839E5C, i);
    v7[0] = 0;
    v7[1] = 0;
    v7[2] = 0;
    Color = INIEntry::ReadColor( (unsigned char ***)v1, (int)v8, (unsigned char *)DataGlobal_839E5C, StringByIndex, v7);
    LOWORD(v9) = *(short *)Color;
    BYTE2(v9) = *(char *)(Color + 2);
    System_Read((const char *)StringByIndex, (int)&v9);
    System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)DataGlobal_886380, (int)&FileSystem_TEMPERAT_PAL, 1);
    result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)DataGlobal_886380, (int)&FileSystem_TEMPERAT_PAL, 53);
    }
    LOBYTE(result) = 1;
  }
    else
  {
    LOBYTE(result) = 0;
  }
    return result;
}
}

// 0x66D480
int RulesClass::ReadColorAdd()
{
{
    char *v1;
    int result;
    int v4;
    char *v5;
    unsigned char *StringByIndex;
    int Coord;
    char *v8;
    char v9;
    bool v10;
    char v11[4];
    int v12;
    char *v13;
    v1 = v13;
    result = INIClass::BinarySearchSection((int)v13, (unsigned char *)DataGlobal_839E50);
    if ( result )
  {
    result = INIClass::GetKeyCount(v1, (unsigned char *)DataGlobal_839E50);
    v4 = 0;
    v12 = result;
    if ( result > 0 )
    {
    v5 = (char *)(this) + 6260;
    do
      {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v1, (unsigned char *)DataGlobal_839E50, v4);
    LOWORD(v13) = 0;
    BYTE2(v13) = 0;
    Coord = INIClass::GetCoord( (unsigned char ***)v1, (int)v11, (unsigned char *)DataGlobal_839E50, StringByIndex, (unsigned char *)&v13);
    v8 = v5;
    ++v4;
    v5 += 3;
    v9 = *(char *)(Coord + 2);
    *(short *)v8 = *(short *)Coord;
    result = v12;
    v10 = v4 < v12;
    v8[2] = v9;
      }
    while ( v10 );
    }
    LOBYTE(result) = 1;
  }
    else
  {
    LOBYTE(result) = 0;
  }
    return result;
}
}

// 0x672280
int RulesClass::readCrateRules()
{
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839E34);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839E34, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839E34, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    KeywordType::FindOrCreate2(Destination);
    }
  }
    return KeyCount > 0;
}
}

// 0x6723D0
int RulesClass::readRadiation()
{
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839E08);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839E08, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839E08, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    KeywordClass::FindOrCreate(Destination);
    }
  }
    return KeyCount > 0;
}
}

// 0x6725F0
int RulesClass::ReadSidesList()
{
{
    int KeyCount;
    int i;
    unsigned char *StringByIndex;
    char Destination[32];
    char *v6;
    KeyCount = INIClass::GetKeyCount(v6, (unsigned char *)DataGlobal_839DEC);
    for ( i = 0; i < KeyCount; ++i )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(v6, (unsigned char *)DataGlobal_839DEC, i);
    if ( INIClass::GetString( (unsigned char ***)v6, (unsigned char *)DataGlobal_839DEC, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) )
    {
    WeaponTypeClass::Process(Destination);
    }
  }
    return KeyCount > 0;
}
}

// 0x67A3C0
int RulesClass::readTerrainTypes(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->LargeVisceroid;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// 0x67A730
int RulesClass::readSmudgeTypes()
{
{
    return this->LargeVisceroid;
}
}

// 0x67A7C0
int RulesClass::readOverlayTypes()
{
{
    return this->LargeVisceroid;
}
}

// 0x67A7D0
int RulesClass::readAnimations(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->LargeVisceroid;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}

// 0x67A8A0
int RulesClass::readWarheads()
{
{
    return this->LargeVisceroid;
}
}

// 0x67A8E0
int RulesClass::readParticleSystems(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->LargeVisceroid;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}
