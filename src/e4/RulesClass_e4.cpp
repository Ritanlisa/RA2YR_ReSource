// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TypeList_cptr_TerrainTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x48ACF0
double RulesClass::GetFiringDistance()
{
{
  return (double)*((int *)g_RulesClass_Instance + 1454) * 0.5; /*0x48ad01*/
}

// 0x538B30
unsigned int * RulesClass::InitINIChain(int a2, int a3)
{
{
  this->DetailMinFrameRateMovie = 0; /*0x538b3b*/
  this->DetailBufferZoneWidth = a2; /*0x538b3e*/
  this->SelfHealInfantryFrames = 1; /*0x538b41*/
  this->SelfHealInfantryAmount = 0; /*0x538b45*/
  *this = &vt_VectorClass_CCINIClass; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x538b58*/
      return this; /*0x538b5e*/
    }
    this->DetailMinFrameRateMovie = __2_YAPAXI_Z(4 * a2); /*0x538b6d*/
    this->SelfHealInfantryAmount = 1; /*0x538b70*/
  }
  return this; /*0x538b5d*/
}

// 0x665650
R RulesClass::RulesClass()
{
{
  int *BarrelDebris; // ebp

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
  this->q1434 = 5;
  this->q1438 = 4;
  this->q143C = 5;
  this->BaseSizeAdd = 0x300000004LL;
  this->PowerSurplus = 0x300000002LL;
  this->q1450 = 4;
  this->q1454 = 4;
  this->q1458 = 3;
  this->q145C = 2;
  this->q1460 = 1;
  this->q1464 = 2;
  *((_DWORD *)this + 1306) = 0;
  *((_DWORD *)this + 1307) = 0;
  *((_DWORD *)this + 1308) = 1;
  *((_DWORD *)this + 1309) = 255;
  *((_DWORD *)this + 1310) = 0x2000;
  *((_DWORD *)this + 1311) = 0;
  this->AddPlanningModeCommandSound = 2500;
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
  this->ExecutePlanSound = 858993459;
  *((_DWORD *)this + 1329) = 1071854387;
  *((_DWORD *)this + 1330) = -343597384;
  *((_DWORD *)this + 1331) = 1067366481;
  *((_DWORD *)this + 1332) = 8;
  this->SuperWeapons = 0x3FD0000000000000LL;
  *((_DWORD *)this + 1336) = 20;
  this->GuardArea = 0x4000000000000000LL;
  *((_DWORD *)this + 1340) = 0;
  *((_DWORD *)this + 1341) = 1071644672;
  *((_DWORD *)this + 1342) = 200;
  *((_DWORD *)this + 1343) = 100;
  this->EndPlanningModeSound = 300;
  *((_DWORD *)this + 1346) = -1717986918;
  *((_DWORD *)this + 1347) = 1068079513;
  this->q1510 = 0;
  this->q1514 = 1075052544;
  this->q1518 = -1717986918;
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
  this->MissileSafetyAltitude = 0;
  this->SpeakDelay = 0x40000000;
  this->DropPodWeapon = 0;
  this->Gravity = 1076625408;
  this->LeptonsPerSightIncrease = 0;
  this->Incoming = 1075052544;
  this->MinDamage = 0;
  this->MaxDamage = 1076101120;
  this->RepairStep = 0;
  this->RepairPercent = 0x40000000;
  this->DropPodSpeed = 0;
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
  this->ShakeScreen = 512;
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
  this->HoverBoost = -755914244;
  this->LightningWarhead = 1066426957;
  this->ForceShieldRadius = 60;
  this->ForceShieldBlackoutDuration = 0;
  this->ForceShieldPlayFadeSoundTime = 1070596096;
  this->MutateExplosion = 1536;
  this->CollapseChance = 0x2000;
  this->WeedCapacity = 1280;
  this->ExtraUnitLight = 4096;
  this->ExtraInfantryLight = 20480;
  this->ExtraAircraftLight = 768;
  this->Paranoid = 0x7FFFFFFF;
  this->FineDiffControl = 250;
  this->SeparateAircraft = 0x384000000C8LL;
  this->HoverBrake = 90;
  this->EngineerCaptureLevel = 10;
  this->TalkBubbleTime = 0x30000000ALL;
  this->RadApplicationDelay = 1;
  this->RadLevelMax = 0;
  this->RadLevelDelay = 10;
  this->RadLightDelay = 400;
  this->RadLevelFactor = 800;
  *((_DWORD *)this + 1521) = 50;
  this->RadLightFactor = 0;
  *((_DWORD *)this + 1523) = 100;
  this->RadTintFactor = 0;
  *((_DWORD *)this + 1525) = 0;
  this->RadColor = 0;
  this->RadSiteWarhead = 0;
  this->ElevationIncrement = 16842753;
  this->ElevationIncrementBonus = 16842752;
  *((_DWORD *)this + 1530) = 0;
  this->ElevationBonusCap = 0x10000;
  *((_DWORD *)this + 1532) = 16843008;
  this->AlliedWallTransparency = 0;
  this->WallPenetratorThreshold = 1065353216;
  *((_DWORD *)this + 1535) = 0;
  this->CloakingStages = 300;
  this->q1804 = 0;
  this->q1808 = 0;
  this->OreTwinkleChance = 0;
  this->OreTwinkle = 0;
  this->ColorAdd = 0;
  this->q1818 = 0;
  this->q181C = 0;
  this->ShipSinkingWeight = 0;
  *((_DWORD *)this + 1545) = 0;
  *((_DWORD *)this + 1546) = 0;
  *((_DWORD *)this + 1547) = 0;
  this->q1830 = 0;
  *((_BYTE *)this + 6193) = 0;
  this->q1832 = 0;
  this->q1834 = 0;
  *((_DWORD *)this + 1550) = 0;
  this->IceCrackingWeight = 0;
  this->LaserTargetColor = 1072693248;
  this->IronCurtainColor = 0;
  this->BerserkColor = 0;
  this->ForceShieldColor = 0;
  this->FallBackCoefficient = 0;
  this->CrewCount = 1071644672;
  this->IceBreakingWeight = 0xFFFFFF;
  *((_DWORD *)this + 1561) = 0;
  *((_DWORD *)this + 1562) = 0;
  char * v3 = (char *)this + 6260;
  *((_DWORD *)this + 1563) = 50;
  this->q1870 = 0;
  char * v4 = (char *)this + 6260;
  int v5 = 16;
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
  int v6 = 16;
  do
  {
    char * v7 = v3;
    v3 += 3;
    --v6;
    *(_WORD *)v7 = 0;
    v7[2] = 0;
  }
  while ( v6 );
  return (int)this;
}

// 0x667A30
int RulesClass::DTOR()
{
int *v2;
void *v3;
void *HarvesterTooFarDistance;
void *SovietDisguise;
void *v6;
void *v7;
void *v8;
void *v9;
void *v10;
void *v11;
void *v12;
void *ChronoDelay;
void *v14;
void *v15;
void *v16;
void *v17;
void *ComputerBaseDefenseResponse;
void *GDIWallDefense_high;
void *v20;
void *v21;
void *v22;
void *v23;
void *v24;
void *v25;
void *v26;
void *v27;
void *v28;
void *CameraRange;
void *StopSound;
void *v31;
void *v32;
void *v33;
void *v34;
void *PrismSupportHeight;
void *IonCannonDamage;
void *v37;
void *WobblesPerSecond_high;
void *Climb;
void *PrerequisiteProcAlternate;
void *WarpIn;
void *DrainAnimationType;
void *DominatorSecondAnim;
void *GUIOpenSound;
void *CreateUnitSound;
void *v46;
void *v47;
int result;
    {
    v2 = &this->q13F0[2];
    VectorClass::Destroy((int)v2);
    VectorClass::Destroy(&this->q13C8);
    VectorClass::Destroy(this->q13AC);
    VectorClass::Destroy(&this->q1390);
    VectorClass::Destroy(&this->q1374);
    VectorClass::Destroy(&this->q1358);
    VectorClass::Destroy(&this->q133C);
    VectorClass::Destroy(&this->q1320);
    VectorClass::Destroy(&this->q1304);
    VectorClass::Destroy(&this->q12E4);
    VectorClass::Destroy(&this->q12C8);
    VectorClass::Destroy(this->q12AC);
    VectorClass::Destroy(&this->q1290);
    VectorClass::Destroy(&this->q1274 + 4);
    VectorClass::Destroy(&this->q1258);
    VectorClass::Destroy(&this->q123C + 4);
    VectorClass::Destroy(&this->q1220);
    VectorClass::Destroy(&this->q1204 + 4);
    VectorClass::Destroy(&this->q11E8);
    VectorClass::Destroy(this->q11CC);
    VectorClass::Destroy(&this->q11B0);
    this->q1194[17] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->q1194[17]);
    this->q1174[9] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->q1174[9]);
    this->q1158[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->q1158[2]);
    TypeList_cptr_TerrainTypeClass::TryFreeAndClear(&this->qFF8);
    VectorClass::Destroy(&this->qF20);
    this->qF04[3] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qF04[3]);
    this->qEE8[0] = &vt_VectorClass_int;
    VectorClass::Destroy(this->qEE8);
    this->qEC4[3] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qEC4[3]);
    this->qEA0[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qEA0[2]);
    this->qE84[0] = &vt_VectorClass_int;
    VectorClass::Destroy(this->qE84);
    this->qE68[1] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qE68[1]);
    this->qE4C[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qE4C[2]);
    this->qE2C[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qE2C[2]);
    this->qE10[3] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qE10[3]);
    this->qDD4[0] = &vt_VectorClass_int;
    VectorClass::Destroy(this->qDD4);
    this->qDB8[2] = &vt_VectorClass_int;
    VectorClass::Destroy(&this->qDB8[2]);
    VectorClass::Destroy(&this->qD9C + 4);
    VectorClass::Destroy(&this->qD80);
    DynamicVectorClass::Destroy(&this->qD38);
    Vector::Destructor(this->qD1C);
    Vector::Cleanup(&this->qD00);
    Vector::Cleanup(&this->qCE4 + 4);
    VectorClass::Destroy(&this->qCC8);
    Vector::Cleanup(&this->qCAC + 4);
    VectorClass::Destroy(&this->qC90);
    Vector::Cleanup(&this->qC74);
    VectorClass::Destroy(&this->qC58);
    Vector::Cleanup(&this->__pad_C3C);
    VectorClass::Destroy(&this->qC20);
    Vector::Cleanup(&this->qC04);
    DynamicVectorClass::Destroy_Alt(&this->qBC0);
    DynamicVectorClass::Destroy_Alt(&this->qB90);
    this->qB74[2] = &vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt(&this->qB74[2]);
    VectorClass::ClearAndFree4(&this->qB58);
    Vector::Destructor(&this->HarvesterLoadRate);
    this->SovietSurvivorDivisor[1] = &vt_VectorClass_UnitTypeClass_const;
    Vector::Destructor(&this->SovietSurvivorDivisor[1]);
    this->BridgeDestruction[1] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy(&this->BridgeDestruction[1]);
    DynamicVectorClass::Destroy(&this->MinUnitCount);
    this->SilverCrate[3] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy(&this->SilverCrate[3]);
    v3 = (void *)this->Aircraft[1];
    this->Aircraft[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v3 && BYTE1(this->Aircraft[3]) )
    {
    __3_YAXPAX_Z(v3);
    this->Aircraft[1] = 0;
}
    BYTE1(this->Aircraft[3]) = 0;
    this->Aircraft[2] = 0;
    HarvesterTooFarDistance = (void *)this->Production;
    if ( HarvesterTooFarDistance && BYTE1(this->RepairSell[0]) )
    {
    __3_YAXPAX_Z(HarvesterTooFarDistance);
    this->Production = 0;
}
    BYTE1(this->RepairSell[0]) = 0;
    this->GuardArea = 0;
    SovietDisguise = (void *)this->BaseBias;
    if ( SovietDisguise && BYTE1(this->ExpSpread) )
    {
    __3_YAXPAX_Z(SovietDisguise);
    this->BaseBias = 0;
}
    BYTE1(this->ExpSpread) = 0;
    this->qA58 = 0;
    v6 = (void *)this->InfantryBaseMult[3];
    this->InfantryBaseMult[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v6 && BYTE1(this->PatrolScan[1]) )
    {
    __3_YAXPAX_Z(v6);
    this->InfantryBaseMult[3] = 0;
}
    BYTE1(this->PatrolScan[1]) = 0;
    this->PatrolScan[0] = 0;
    v7 = (void *)this->qA1C[0];
    this->RefineryRatio[3] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v7 && BYTE1(this->qA25[2]) )
    {
    __3_YAXPAX_Z(v7);
    this->qA1C[0] = 0;
}
    BYTE1(this->qA25[2]) = 0;
    this->BaseSizeAdd[1] = 0;
    v8 = (void *)this->WarRatio[1];
    this->WarRatio[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v8 && BYTE1(this->WarRatio[3]) )
    {
    __3_YAXPAX_Z(v8);
    this->WarRatio[1] = 0;
}
    BYTE1(this->WarRatio[3]) = 0;
    this->WarRatio[2] = 0;
    v9 = (void *)this->AARatio[2];
    this->TeslaLimit[1] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v9 && BYTE1(this->AALimit[0]) )
    {
    __3_YAXPAX_Z(v9);
    this->AARatio[2] = 0;
}
    BYTE1(this->AALimit[0]) = 0;
    this->q9E8[3] = 0;
    v10 = (void *)this->AirstripLimit[3];
    this->q9C4[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v10 && BYTE1(this->HelipadRatio[1]) )
    {
    __3_YAXPAX_Z(v10);
    this->AirstripLimit[3] = 0;
}
    BYTE1(this->HelipadRatio[1]) = 0;
    this->HelipadRatio[0] = 0;
    v11 = (void *)this->q9AC[0];
    this->AttackInterval[3] = &vt_VectorClass_int;
    if ( v11 && BYTE1(this->q9B5[2]) )
    {
    __3_YAXPAX_Z(v11);
    this->q9AC[0] = 0;
}
    BYTE1(this->q9B5[2]) = 0;
    this->AttackDelay[1] = 0;
    v12 = (void *)this->TargetDistanceCoefficientDefault[1];
    this->q98C[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v12 && BYTE1(this->q999[3]) )
    {
    __3_YAXPAX_Z(v12);
    this->TargetDistanceCoefficientDefault[1] = 0;
}
    BYTE1(this->q999[3]) = 0;
    this->q994[2] = 0;
    ChronoDelay = (void *)this->q974;
    if ( ChronoDelay && BYTE1(this->q97D) )
    {
    __3_YAXPAX_Z(ChronoDelay);
    this->q974 = 0;
}
    BYTE1(this->q97D) = 0;
    this->TargetEffectivenessCoefficientDefault = 0;
    v14 = (void *)this->q958[1];
    this->q954[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v14 && BYTE1(this->q961[3]) )
    {
    __3_YAXPAX_Z(v14);
    this->q958[1] = 0;
}
    BYTE1(this->q961[3]) = 0;
    this->q95C[2] = 0;
    v15 = (void *)this->CMisl[3];
    this->q938[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v15 && BYTE1(this->q945) )
    {
    __3_YAXPAX_Z(v15);
    this->CMisl[3] = 0;
}
    BYTE1(this->q945) = 0;
    this->q940 = 0;
    v16 = (void *)this->q920[0];
    this->q91C[3] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v16 && BYTE1(this->q929[2]) )
    {
    __3_YAXPAX_Z(v16);
    this->q920[0] = 0;
}
    BYTE1(this->q929[2]) = 0;
    this->q924[1] = 0;
    v17 = (void *)this->q904[1];
    this->q900[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v17 && BYTE1(this->q90D[3]) )
    {
    __3_YAXPAX_Z(v17);
    this->q904[1] = 0;
}
    BYTE1(this->q90D[3]) = 0;
    this->DMisl[2] = 0;
    ComputerBaseDefenseResponse = (void *)this->q8E8;
    if ( ComputerBaseDefenseResponse && BYTE1(this->q8F1[0]) )
    {
    __3_YAXPAX_Z(ComputerBaseDefenseResponse);
    this->q8E8 = 0;
}
    BYTE1(this->q8F1[0]) = 0;
    this->q8EC = 0;
    GDIWallDefense_high = (void *)HIDWORD(this->CHRONOSK_SHP);
    if ( GDIWallDefense_high && BYTE5(this->PsychicRevealRadius) )
    {
    __3_YAXPAX_Z(GDIWallDefense_high);
    HIDWORD(this->CHRONOSK_SHP) = 0;
}
    BYTE5(this->PsychicRevealRadius) = 0;
    LODWORD(this->PsychicRevealRadius) = 0;
    v20 = (void *)this->IvanWarhead[2];
    this->IvanWarhead[1] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v20 && BYTE1(this->CanDetonateTimeBomb[0]) )
    {
    __3_YAXPAX_Z(v20);
    this->IvanWarhead[2] = 0;
}
    BYTE1(this->CanDetonateTimeBomb[0]) = 0;
    this->IvanWarhead[3] = 0;
    v21 = (void *)this->NukeProjectile[3];
    this->NukeProjectile[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v21 && BYTE1(this->C4Warhead[1]) )
    {
    __3_YAXPAX_Z(v21);
    this->NukeProjectile[3] = 0;
}
    BYTE1(this->C4Warhead[1]) = 0;
    this->C4Warhead[0] = 0;
    v22 = (void *)this->AISafeDistance[3];
    this->AISafeDistance[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v22 && BYTE1(this->Engineer[1]) )
    {
    __3_YAXPAX_Z(v22);
    this->AISafeDistance[3] = 0;
}
    BYTE1(this->Engineer[1]) = 0;
    this->Engineer[0] = 0;
    v23 = (void *)this->SpyPowerBlackout[0];
    this->ChronoRangeMinimum[3] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v23 && BYTE1(this->SpyPowerBlackout[2]) )
    {
    __3_YAXPAX_Z(v23);
    this->SpyPowerBlackout[0] = 0;
}
    BYTE1(this->SpyPowerBlackout[2]) = 0;
    this->SpyPowerBlackout[1] = 0;
    v24 = (void *)this->ChronoReinfDelay[1];
    this->ChronoReinfDelay[0] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v24 && BYTE1(this->ChronoReinfDelay[3]) )
    {
    __3_YAXPAX_Z(v24);
    this->ChronoReinfDelay[1] = 0;
}
    BYTE1(this->ChronoReinfDelay[3]) = 0;
    this->ChronoReinfDelay[2] = 0;
    v25 = (void *)this->BombParachute[2];
    this->BombParachute[1] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v25 && BYTE1(this->LargeFire[0]) )
    {
    __3_YAXPAX_Z(v25);
    this->BombParachute[2] = 0;
}
    BYTE1(this->LargeFire[0]) = 0;
    this->BombParachute[3] = 0;
    v26 = (void *)this->BaseUnit[3];
    this->BaseUnit[2] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v26 && BYTE1(this->TreeFire[1]) )
    {
    __3_YAXPAX_Z(v26);
    this->BaseUnit[3] = 0;
}
    BYTE1(this->TreeFire[1]) = 0;
    this->TreeFire[0] = 0;
    v27 = (void *)this->GDIBaseDefenseCoefficient[0];
    this->GDIWallDefenseCoefficient[3] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v27 && BYTE1(this->GDIBaseDefenseCoefficient[2]) )
    {
    __3_YAXPAX_Z(v27);
    this->GDIBaseDefenseCoefficient[0] = 0;
}
    BYTE1(this->GDIBaseDefenseCoefficient[2]) = 0;
    this->GDIBaseDefenseCoefficient[1] = 0;
    v28 = (void *)this->q738[1];
    this->q734[0] = &vt_VectorClass_int;
    if ( v28 && BYTE1(this->q741[3]) )
    {
    __3_YAXPAX_Z(v28);
    this->q738[1] = 0;
}
    BYTE1(this->q741[3]) = 0;
    this->q73C[2] = 0;
    CameraRange = (void *)this->ChuteSound;
    if ( CameraRange && BYTE1(this->GuardSound) )
    {
    __3_YAXPAX_Z(CameraRange);
    this->ChuteSound = 0;
}
    BYTE1(this->GuardSound) = 0;
    this->StopSound = 0;
    StopSound = (void *)this->q64C;
    if ( StopSound && BYTE1(this->q655) )
    {
    __3_YAXPAX_Z(StopSound);
    this->q64C = 0;
}
    BYTE1(this->q655) = 0;
    this->VeteranCap = 0;
    v31 = (void *)this->RevealTriggerRadius[0];
    if ( v31 && BYTE1(this->RevealTriggerRadius[2]) )
    {
    __3_YAXPAX_Z(v31);
    this->RevealTriggerRadius[0] = 0;
}
    BYTE1(this->RevealTriggerRadius[2]) = 0;
    this->RevealTriggerRadius[1] = 0;
    v32 = (void *)this->q478[7];
    this->q474[6] = &vt_VectorClass_int;
    if ( v32 && BYTE1(this->q481[9]) )
    {
    __3_YAXPAX_Z(v32);
    this->q478[7] = 0;
}
    BYTE1(this->q481[9]) = 0;
    this->q47C[8] = 0;
    v33 = (void *)this->q45C[0];
    this->q458[13] = &vt_VectorClass_int;
    if ( v33 && BYTE1(this->q465[2]) )
    {
    __3_YAXPAX_Z(v33);
    this->q45C[0] = 0;
}
    BYTE1(this->q465[2]) = 0;
    this->q460[1] = 0;
    v34 = (void *)this->q440[7];
    this->q43C[6] = &vt_VectorClass_int;
    if ( v34 && BYTE1(this->q449[9]) )
    {
    __3_YAXPAX_Z(v34);
    this->q440[7] = 0;
}
    BYTE1(this->q449[9]) = 0;
    this->q444[8] = 0;
    PrismSupportHeight = (void *)this->q3E8;
    if ( PrismSupportHeight && BYTE1(this->q3F1[1]) )
    {
    __3_YAXPAX_Z(PrismSupportHeight);
    this->q3E8 = 0;
}
    BYTE1(this->q3F1[1]) = 0;
    this->q3EC[0] = 0;
    IonCannonDamage = (void *)this->q3CC;
    this->q3C8[3] = &vt_VectorClass_int;
    if ( IonCannonDamage && BYTE1(this->q3D5) )
    {
    __3_YAXPAX_Z(IonCannonDamage);
    this->q3CC = 0;
}
    BYTE1(this->q3D5) = 0;
    this->q3D0 = 0;
    v37 = (void *)this->q3B0[1];
    this->q3AC[0] = &vt_VectorClass_int;
    if ( v37 && BYTE1(this->q3B9[3]) )
    {
    __3_YAXPAX_Z(v37);
    this->q3B0[1] = 0;
}
    BYTE1(this->q3B9[3]) = 0;
    this->q3B4[2] = 0;
    WobblesPerSecond_high = (void *)HIDWORD(this->q394);
    if ( WobblesPerSecond_high && BYTE1(this->q39D[0]) )
    {
    __3_YAXPAX_Z(WobblesPerSecond_high);
    HIDWORD(this->q394) = 0;
}
    BYTE1(this->q39D[0]) = 0;
    this->q398 = 0;
    Climb = (void *)this->q378;
    *(_DWORD *)&this->q374[4] = &vt_VectorClass_int;
    if ( Climb && BYTE1(this->q381) )
    {
    __3_YAXPAX_Z(Climb);
    LODWORD(this->q378) = 0;
}
    BYTE1(this->q381) = 0;
    HIDWORD(this->q37C) = 0;
    PrerequisiteProcAlternate = (void *)this->q35C;
    this->q358[3] = &vt_VectorClass_int;
    if ( PrerequisiteProcAlternate && BYTE1(this->q365) )
    {
    __3_YAXPAX_Z(PrerequisiteProcAlternate);
    this->q35C = 0;
}
    BYTE1(this->q365) = 0;
    this->q360 = 0;
    WarpIn = (void *)this->q2DC;
    if ( WarpIn && BYTE1(this->q2E5) )
    {
    __3_YAXPAX_Z(WarpIn);
    this->q2DC = 0;
}
    BYTE1(this->q2E5) = 0;
    this->q2E0 = 0;
    DrainAnimationType = (void *)this->q2C0;
    if ( DrainAnimationType && BYTE1(this->q2C9) )
    {
    __3_YAXPAX_Z(DrainAnimationType);
    this->q2C0 = 0;
}
    BYTE1(this->q2C9) = 0;
    this->q2C4 = 0;
    DominatorSecondAnim = (void *)this->q2A4;
    if ( DominatorSecondAnim && BYTE1(this->q2AD) )
    {
    __3_YAXPAX_Z(DominatorSecondAnim);
    this->q2A4 = 0;
}
    BYTE1(this->q2AD) = 0;
    this->q2A8 = 0;
    GUIOpenSound = (void *)this->CrateFireSound;
    if ( GUIOpenSound && BYTE1(this->CrateSpeedSound) )
    {
    __3_YAXPAX_Z(GUIOpenSound);
    this->CrateFireSound = 0;
}
    BYTE1(this->CrateSpeedSound) = 0;
    this->CrateArmourSound = 0;
    CreateUnitSound = (void *)this->DefaultChronoSound;
    if ( CreateUnitSound && BYTE1(this->AddPlanningModeCommandSound) )
    {
    __3_YAXPAX_Z(CreateUnitSound);
    this->DefaultChronoSound = 0;
}
    BYTE1(this->AddPlanningModeCommandSound) = 0;
    this->StartPlanningModeSound = 0;
    v46 = (void *)this->GUICheckboxSound[2];
    this->GUICheckboxSound[1] = &vt_VectorClass_AnimTypeClass_const;
    if ( v46 && BYTE1(this->BuildingGarrisonedSound[0]) )
    {
    __3_YAXPAX_Z(v46);
    this->GUICheckboxSound[2] = 0;
}
    BYTE1(this->BuildingGarrisonedSound[0]) = 0;
    this->GUICheckboxSound[3] = 0;
    v47 = (void *)this->GUITabSound[3];
    this->GUITabSound[2] = &vt_VectorClass_AnimTypeClass_const;
    if ( v47 && BYTE1(this->GUIMoveInSound[1]) )
    {
    __3_YAXPAX_Z(v47);
    this->GUITabSound[3] = 0;
}
    BYTE1(this->GUIMoveInSound[1]) = 0;
    this->GUIMoveInSound[0] = 0;
    result = this->RadarEventColorSpeed[1];
    this->RadarEventColorSpeed[0] = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( result && BYTE1(this->RadarEventColorSpeed[3]) )
    {
    __3_YAXPAX_Z((void *)result);
    this->RadarEventColorSpeed[1] = 0;
}
    BYTE1(this->RadarEventColorSpeed[3]) = 0;
    this->RadarEventColorSpeed[2] = 0;
    return result;
}
}

// 0x66D150
void* RulesClass::readAudioVisual()
{
{
  int result; // eax
  int Int_Overwrite; // eax
  double Double_Overwrite; // st7

  int v9; // [esp+Ch] [ebp+4h]
  result = INIClass::BinarySearchSection(v9, (unsigned __int8 *)DataGlobal_839E70); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v9,
                      (unsigned __int8 *)DataGlobal_839E70,
                      (unsigned __int8 *)DataGlobal_83B370,
                      *((_DWORD *)this + 1550));
    double v4 = this->IceCrackingWeight; /*0x66d188*/
    *((_DWORD *)this + 1550) = Int_Overwrite; /*0x66d18e*/
  double v8; // [esp-8h] [ebp-10h]
    HIDWORD(v8) = this->LaserTargetColor; /*0x66d1a0*/
    LODWORD(v8) = v4; /*0x66d1a1*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x66d1aa*/
                         v9,
                         (unsigned __int8 *)DataGlobal_839E70,
                         (unsigned __int8 *)DataGlobal_83B358,
                         v8);
    IUnknown *v6 = this->BerserkColor; /*0x66d1af*/
    unsigned int v7 = this->IronCurtainColor; /*0x66d1b5*/
    this->qC20 = Double_Overwrite; /*0x66d1bb*/
    this->q309 = INIClass::ReadDouble_Overwrite( /*0x66d1d6*/
                                v9,
                                (unsigned __int8 *)DataGlobal_839E70,
                                (unsigned __int8 *)DataGlobal_83B344,
                                COERCE_DOUBLE(__PAIR64__(v6, v7)));
    LOBYTE(result) = 1; /*0x66d1dd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d1e4*/
  }
  return result; /*0x66d1dc*/
}

// 0x673E80
INIClass * * RulesClass::ReadPowerupsSection()
{
{
  int result; // eax
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  unsigned __int8 ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)DataGlobal_839D98); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    WeaponTypeClass *v2 = 0; /*0x673ea5*/
    double * v3 = DataGlobal_89EC28; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 v13,
                 (unsigned __int8 *)DataGlobal_839D98,
                 *((unsigned __int8 **)&off_7E523C + v2),
                 DataGlobal_83D4AC,
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        char * v4 = strtok(String, Delimiter); /*0x673ee7*/
        const char * v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        char * v6 = strtok(0, Delimiter); /*0x673f13*/
        INIClass *v7 = v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        char * v8 = strtok(0, Delimiter); /*0x673f3d*/
        INIClass *v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, DataGlobal_825BF8) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, g_Str_no) ) /*0x673f73*/
              DataGlobal_89ECC0[v2] = 0; /*0x673f7f*/
          }
          else
          {
            DataGlobal_89ECC0[v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, Delimiter); /*0x673f8c*/
        INIClass *v10 = (char *)result; /*0x673f91*/
        if ( result ) /*0x673f98*/
        {
  double v11; // st7
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
    while ( (int)v3 < (int)DataGlobal_89ECC0 ); /*0x673fd7*/
    LOBYTE(result) = 1; /*0x673fdf*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x673feb*/
  }
  return result; /*0x673fe2*/
}

// 0x6743D0
INIClass * * RulesClass::readDifficulty()
{
{
  int result; // eax
  int Int_Overwrite; // eax
  double Double_Overwrite; // st7

  int v16; // [esp+Ch] [ebp+4h]
  result = INIClass::BinarySearchSection(v16, (unsigned __int8 *)DataGlobal_839D58); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    this->?[8] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                   v16,
                   (unsigned __int8 *)DataGlobal_839D58,
                   (unsigned __int8 *)DataGlobal_83D554,
                   this->?[8]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (unsigned __int8 *)DataGlobal_839D58,
                      (unsigned __int8 *)g_INI_Key_Speed,
                      this->?[9]);
    IUnknown *v4 = this->?[12]; /*0x67442c*/
    this->?[9] = Int_Overwrite; /*0x674432*/
  double v15; // [esp-8h] [ebp-10h]
    HIDWORD(v15) = v4; /*0x674444*/
    LODWORD(v15) = this->?[11]; /*0x674445*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x67444e*/
                         v16,
                         (unsigned __int8 *)DataGlobal_839D58,
                         (unsigned __int8 *)DataGlobal_83D54C,
                         v15);
    INIClass *v6 = this->?[13]; /*0x674453*/
    *(double *)&this->?[11] = Double_Overwrite; /*0x67445b*/
    int v7 = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)DataGlobal_839D58, (unsigned __int8 *)DataGlobal_83D53C, v6); /*0x67446d*/
    int v8 = this->?[2]; /*0x674472*/
    IUnknown *v9 = this->?[1]; /*0x674478*/
    this->?[13] = v7; /*0x67447e*/
  double v10; // st7
    v10 = INIClass::ReadDouble_Overwrite( /*0x674493*/
            v16,
            (unsigned __int8 *)DataGlobal_839D58,
            (unsigned __int8 *)DataGlobal_81B140,
            COERCE_DOUBLE(__PAIR64__(v8, v9)));
    int v11 = this->?[4]; /*0x674498*/
    IUnknown *v12 = this->?[3]; /*0x67449e*/
    *(double *)&this->?[1] = v10; /*0x6744a4*/
  double v13; // st7
    v13 = INIClass::ReadDouble_Overwrite( /*0x6744b9*/
            v16,
            (unsigned __int8 *)DataGlobal_839D58,
            (unsigned __int8 *)DataGlobal_83D528,
            COERCE_DOUBLE(__PAIR64__(v11, v12)));
    INIClass *v14 = this->?[5]; /*0x6744be*/
    *(double *)&this->?[3] = v13; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite( /*0x6744d9*/
               v16,
               (unsigned __int8 *)DataGlobal_839D58,
               (unsigned __int8 *)DataGlobal_83D518,
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

// 0x674550
INIClass * * RulesClass::ReadMovies()
{
{
  int result; // eax
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  char Source[32]; // [esp+4h] [ebp-20h] BYREF

  char *v7; // [esp+28h] [ebp+4h]
  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)DataGlobal_839D50); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7, (unsigned __int8 *)DataGlobal_839D50); /*0x67457d*/
    int v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7, (unsigned __int8 *)DataGlobal_839D50, i); /*0x6745a4*/
      result = INIClass::GetString( /*0x6745b3*/
                 (unsigned __int8 ***)v7,
                 (unsigned __int8 *)DataGlobal_839D50,
                 StringByIndex,
                 g_Str__none_,
                 Source,
                 32);
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex(Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          INIClass *v5 = _strdup(Source); /*0x6745da*/
          result = DataGlobal_ABF398; /*0x6745dc*/
          if ( DataGlobal_ABF3A0 < DataGlobal_ABF398 /*0x674614*/
            || (DataGlobal_ABF39D || !DataGlobal_ABF398)
            && DataGlobal_ABF3A4 > 0
            && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MovieInfo_Array + 8))(
                           &MovieInfo_Array,
                           DataGlobal_ABF398 + DataGlobal_ABF3A4,
                           0),
                (_BYTE)result) )
          {
            result = DataGlobal_ABF3A0++; /*0x67461c*/
            *((_DWORD *)DataGlobal_ABF394 + result) = v5; /*0x67462b*/
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

// 0x679FA0
void RulesClass::readMaximums()
{
{

  AbstractClass *v2 = (void *)this->DetailMinFrameRateMovie; /*0x679fa6*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x679fa9*/
  if ( v2 && this->SelfHealInfantryAmount ) /*0x679fb3*/
  {
    __3_YAXPAX_Z(v2); /*0x679fb9*/
    this->DetailMinFrameRateMovie = 0; /*0x679fc1*/
  }
  this->SelfHealInfantryAmount = 0; /*0x679fc4*/
  this->DetailBufferZoneWidth = 0; /*0x679fc7*/
}

// 0x679FD0
void RulesClass::readInfantryTypes()
{
{

  AbstractClass *v2 = (void *)this->DetailMinFrameRateMovie; /*0x679fd6*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x679fd9*/
  if ( v2 && this->SelfHealInfantryAmount ) /*0x679fe3*/
  {
    __3_YAXPAX_Z(v2); /*0x679fe9*/
    this->DetailMinFrameRateMovie = 0; /*0x679ff1*/
  }
  this->SelfHealInfantryAmount = 0; /*0x679ff4*/
  this->DetailBufferZoneWidth = 0; /*0x679ff7*/
}

// 0x67A000
void RulesClass::readCountries()
{
{

  AbstractClass *v2 = (void *)this->DetailMinFrameRateMovie; /*0x67a006*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x67a009*/
  if ( v2 && this->SelfHealInfantryAmount ) /*0x67a013*/
  {
    __3_YAXPAX_Z(v2); /*0x67a019*/
    this->DetailMinFrameRateMovie = 0; /*0x67a021*/
  }
  this->SelfHealInfantryAmount = 0; /*0x67a024*/
  this->DetailBufferZoneWidth = 0; /*0x67a027*/
}

// 0x67A060
void RulesClass::readVehicleTypes()
{
{

  AbstractClass *v2 = (void *)this->DetailMinFrameRateMovie; /*0x67a066*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67a069*/
  if ( v2 && this->SelfHealInfantryAmount ) /*0x67a073*/
  {
    __3_YAXPAX_Z(v2); /*0x67a079*/
    this->DetailMinFrameRateMovie = 0; /*0x67a081*/
  }
  this->SelfHealInfantryAmount = 0; /*0x67a084*/
  this->DetailBufferZoneWidth = 0; /*0x67a087*/
}

// 0x67A190
void * RulesClass::readAircraftTypes(int * a2)
{
{

  if ( this != a2 ) /*0x67a19a*/
  {
    this->vt_slot_12(); /*0x67a19e*/
    int v3 = a2[2]; /*0x67a1a1*/
    this->DetailBufferZoneWidth = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      void * v4 = __2_YAPAXI_Z(4 * v3); /*0x67a1b3*/
      this->DetailMinFrameRateMovie = (int)v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        int v5 = this->DetailBufferZoneWidth; /*0x67a1c2*/
        int v6 = 0; /*0x67a1c5*/
        this->SelfHealInfantryAmount = 1; /*0x67a1c9*/
        if ( v5 > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a1e5*/
      this->SelfHealInfantryAmount = 0; /*0x67a1ec*/
    }
  }
  this->DetailMinFrameRateMovie = a2[4]; /*0x67a1f3*/
  this->SmallVisceroid = a2[5]; /*0x67a1f9*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a1ff*/
  return this; /*0x67a204*/
}

// 0x67A210
void * RulesClass::readSuperWeaponTypes(int * a2)
{
{

  if ( this != a2 ) /*0x67a21a*/
  {
    this->vt_slot_12(); /*0x67a21e*/
    int v3 = a2[2]; /*0x67a221*/
    this->DetailBufferZoneWidth = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      void * v4 = __2_YAPAXI_Z(4 * v3); /*0x67a233*/
      this->DetailMinFrameRateMovie = (int)v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        int v5 = this->DetailBufferZoneWidth; /*0x67a242*/
        int v6 = 0; /*0x67a245*/
        this->SelfHealInfantryAmount = 1; /*0x67a249*/
        if ( v5 > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a261*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a265*/
      this->SelfHealInfantryAmount = 0; /*0x67a26c*/
    }
  }
  this->DetailMinFrameRateMovie = a2[4]; /*0x67a273*/
  this->SmallVisceroid = a2[5]; /*0x67a279*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a27f*/
  return this; /*0x67a284*/
}

// 0x67A310
void * RulesClass::readBuildingTypes(int * a2)
{
{

  if ( this != a2 ) /*0x67a31a*/
  {
    this->vt_slot_12(); /*0x67a31e*/
    int v3 = a2[2]; /*0x67a321*/
    this->DetailBufferZoneWidth = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      void * v4 = __2_YAPAXI_Z(4 * v3); /*0x67a333*/
      this->DetailMinFrameRateMovie = (int)v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        int v5 = this->DetailBufferZoneWidth; /*0x67a342*/
        int v6 = 0; /*0x67a345*/
        this->SelfHealInfantryAmount = 1; /*0x67a349*/
        if ( v5 > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a361*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a365*/
      this->SelfHealInfantryAmount = 0; /*0x67a36c*/
    }
  }
  this->DetailMinFrameRateMovie = a2[4]; /*0x67a373*/
  this->SmallVisceroid = a2[5]; /*0x67a379*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a37f*/
  return this; /*0x67a384*/
}

// 0x67A8B0
unsigned int * RulesClass::readParticles()
{
{
  this->DetailMinFrameRateMovie = 0; /*0x67a8b4*/
  this->DetailBufferZoneWidth = 0; /*0x67a8b7*/
  this->SelfHealInfantryFrames = 1; /*0x67a8ba*/
  this->SelfHealInfantryAmount = 0; /*0x67a8be*/
  this->SmallVisceroid = 10; /*0x67a8c1*/
  this->LargeVisceroid = 0; /*0x67a8c8*/
  *this = &vt_TypeList_TerrainTypeClass_const; /*0x67a8cb*/
  return this; /*0x67a8d1*/
}

// 0x67B480
int RulesClass::readAI(unsigned int * a2)
{
{

  int v3 = this->DetailBufferZoneWidth; /*0x67b483*/
  if ( this->LargeVisceroid >= v3 ) /*0x67b48b*/
  {
    if ( !this->SelfHealInfantryAmount && v3 ) /*0x67b496*/
      return 0; /*0x67b496*/
    int v4 = this->SmallVisceroid; /*0x67b498*/
    if ( v4 <= 0 || !this->vt_slot_8(v3 + v4, 0) ) /*0x67b4a8*/
      return 0; /*0x67b4af*/
  }
  int v6 = this->LargeVisceroid; /*0x67b4b5*/
  int v7 = this->DetailMinFrameRateMovie; /*0x67b4b8*/
  this->LargeVisceroid = v6 + 1; /*0x67b4be*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x67b4c8*/
  return 1; /*0x67b4b1*/
}

// 0x67BDD0
void * RulesClass::LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
{
{
  char *i; // eax
  INIClass *v7; // edi
  VectorClass *v9; // ecx
  VectorClass *v15; // ecx
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&DataGlobal_87F8E4[42624], String, 128) ) /*0x67bdfc*/
  {
  char v20; // [esp+19h] [ebp-8Fh]
    RulesClass::readIQ(&v17, 0, 0); /*0x67be11*/
    int v22 = 10; /*0x67be1a*/
    int v21 = 0; /*0x67be28*/
    v17 = (VectorClass *)&vt_TypeList_TerrainTypeClass_const; /*0x67be2c*/
    for ( i = strtok(String[0].__pad_0, Delimiter[0]); i; i = strtok(0, Delimiter[0]) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = (INIClass *)TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
  int v19; // [esp+14h] [ebp-94h]
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        int v8 = v21++; /*0x67be86*/
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
    void * v10 = Block; /*0x67bede*/
    bool v11 = Block == 0; /*0x67bee2*/
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
      int v13 = a5[2]; /*0x67bf36*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        int v14 = __2_YAPAXI_Z(4 * v13); /*0x67bf48*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67bf57*/
          int v16 = 0; /*0x67bf5a*/
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

// 0x67C430
unsigned int * RulesClass::readIQ(int a2, int a3)
{
{
  this->DetailMinFrameRateMovie = 0; /*0x67c43b*/
  this->DetailBufferZoneWidth = a2; /*0x67c43e*/
  this->SelfHealInfantryFrames = 1; /*0x67c441*/
  this->SelfHealInfantryAmount = 0; /*0x67c445*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x67c458*/
      return this; /*0x67c45e*/
    }
    this->DetailMinFrameRateMovie = __2_YAPAXI_Z(4 * a2); /*0x67c46d*/
    this->SelfHealInfantryAmount = 1; /*0x67c470*/
  }
  return this; /*0x67c45d*/
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
