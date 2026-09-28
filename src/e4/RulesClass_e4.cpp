// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TypeList_cptr_TerrainTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/RocketLocomotionClass_17_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x48ACF0
namespace gamemd {
double RulesClass::GetFiringDistance()
{
  return (double)*((int *)g_RulesClass_Instance + 1454) * 0.5; /*0x48ad01*/
}
} // namespace gamemd

// 0x538B30
namespace gamemd {
unsigned int * RulesClass::InitINIChain(int a2, int a3)
{
  this->DetailMinFrameRateMovie = (unsigned int)(0);
  this->DetailBufferZoneWidth = a2; /*0x538b3e*/
  IDA_LOBYTE(this->AmmoCrateDamage) = 1; /*0x538b41*/
  IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x538b45*/
  this->DetailMinFrameRateNormal = (int)&VectorClass_CCINIClass___vftable; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      this->DetailMinFrameRateMovie = (unsigned int *)(a3);
      return &this->DetailMinFrameRateNormal; /*0x538b5e*/
    }
    this->DetailMinFrameRateMovie = RA2_OPNEW(4 * a2); /*0x538b6d*/
    IDA_BYTE1(this->AmmoCrateDamage) = 1; /*0x538b70*/
  }
  return (unsigned int *)(&this->DetailMinFrameRateNormal);
}
} // namespace gamemd
// 0x665650
RulesClass::RulesClass()
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
  *(unsigned int *)this->? = 0;
  *(unsigned int *)&this->?[4] = 0;
  IDA_LODWORD(this->?) = 0;
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
  VectorClass_flat::Construct(&this->?[3], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[4], 0, 0);
  IDA_LODWORD(this->?) = 10;
  *(unsigned int *)this->? = 0;
  *(unsigned int *)&this->?[4] = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[3], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
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
  VectorClass_flat::Construct(&this->?[6], 0, 0);
  this->?[11] = 10;
  this->?[10] = 0;
  this->?[6] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[13], 0, 0);
  this->?[4] = 10;
  this->?[3] = 0;
  this->?[13] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[6], 0, 0);
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
  *(unsigned int *)this->? = 10;
  this->? = 0x3F6666663F000000LL;
  this->? = 0x3F8000003F800000LL;
  IDA_LODWORD(this->?) = 1;
  this->TreeFlammability[0] = -1717986918;
  this->TreeFlammability[1] = 1069128089;
  this->TreeFlammability[2] = 0;
  this->TreeFlammability[3] = 1070596096;
  *(unsigned int *)&this->MissileROTVar = 0;
  *(unsigned int *)&this->?[3] = 1070596096;
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
  VectorClass_flat::Construct(&this->VeteranROF, 0, 0);
  this->SellSound = 10;
  this->CloakSound = 0;
  this->VeteranROF = (int)&vt_TypeList_int;
  IDA_LOBYTE(this->GameClosed[1]) = 0;
  this->GameClosed[2] = 0;
  this->GameClosed[3] = 1076101120;
  this->GameForming = 0;
  *(unsigned int *)this->PlayerLeft = 1072693248;
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
  VectorClass_flat::Construct(&this->HealCrateSound, 0, 0);
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
  VectorClass_flat::Construct(this->?, 0, 0);
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
  VectorClass_flat::BuildingTypeConstructor(&this->AISafeDistance[2], 0, 0);
  this->Engineer[3] = 10;
  this->Engineer[2] = 0;
  this->AISafeDistance[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  this->ThirdCrew[1] = 0;
  this->ThirdCrew[2] = 0;
  this->ThirdCrew[3] = 0;
  this->NukeProjectile[0] = 0;
  this->NukeProjectile[1] = 0;
  VectorClass_flat::BuildingTypeConstructor(&this->NukeProjectile[2], 0, 0);
  this->C4Warhead[3] = 10;
  this->C4Warhead[2] = 0;
  this->NukeProjectile[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  this->CMislWarhead[1] = 0;
  this->CMislWarhead[2] = 0;
  this->CMislWarhead[3] = 0;
  this->IvanWarhead[0] = 0;
  VectorClass_flat::BuildingTypeConstructor(&this->IvanWarhead[1], 0, 0);
  this->CanDetonateTimeBomb[2] = 10;
  this->CanDetonateTimeBomb[1] = 0;
  this->IvanWarhead[1] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->CHRONOSK_SHP, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->CHRONOSK_SHP) = &vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor((unsigned int *)&this->? + 1, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->?[2], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->MyEffectivenessCoefficientDefault, 0, 0);
  this->? = 10;
  *(unsigned int *)&this->TargetSpecialThreatCoefficientDefault = 0;
  this->MyEffectivenessCoefficientDefault = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass_flat::BuildingTypeConstructor(&this->?[2], 0, 0);
  this->HelipadRatio[3] = 10;
  this->HelipadRatio[2] = 0;
  this->?[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->?[1], 0, 0);
  this->AALimit[2] = 10;
  this->AALimit[1] = 0;
  this->?[1] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(this->WarRatio, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->WarRatio[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->?[3], 0, 0);
  this->InfantryBaseMult[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->InfantryBaseMult[2], 0, 0);
  this->PatrolScan[3] = 10;
  this->PatrolScan[2] = 0;
  this->InfantryBaseMult[2] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->?, 0, 0);
  *(unsigned int *)&this->FireSupress = 10;
  this->? = 0.0;
  this->? = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->SuperWeapons, 0, 0);
  this->RepairSell[2] = 10;
  this->RepairSell[1] = 0;
  this->SuperWeapons = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(this->Aircraft, 0, 0);
  this->SilverCrate[1] = 10;
  this->SilverCrate[0] = 0;
  this->Aircraft[0] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->SilverCrate[3], 0, 0);
  this->MoneyIncrement = 10;
  this->CrateMaximum[3] = 0;
  this->SilverCrate[3] = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->MinUnitCount, 0, 0);
  this->Players = 10;
  this->AIPlayers = 0;
  this->MinUnitCount = (int)&vt_TypeList_BuildingTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->BridgeDestruction[1], 0, 0);
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
  IDA_LODWORD(this->?) = &vt_TypeList_AircraftTypeClass_const;
  AnimTypeVector::Constructor(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_AnimTypeClass_const;
  AnimTypeVector::Constructor(&this->?, 0, 0);
  this->? = 10;
  this->? = 0.0;
  IDA_LODWORD(this->?) = &vt_TypeList_AnimTypeClass_const;
  this->? = 0;
  this->? = 0;
  this->? = 0.0;
  *(unsigned int *)&this->? = 0;
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
  IDA_LOBYTE(this->?) = 1;
  this->? = 0;
  this->? = 0;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  InfantryTypeVector::Construct2(&this->__pad_C3C, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->__pad_C3C = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  IDA_LODWORD(this->?) = 10;
  *(unsigned int *)&this->?[4] = 0;
  this->? = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  InfantryTypeVector::Construct2((unsigned int *)&this->? + 1, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  InfantryTypeVector::Construct2((unsigned int *)&this->? + 1, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  InfantryTypeVector::Construct2(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  UnitTypeVector::ConstructUnitTypeVectorClass(this->?, 0, 0);
  IDA_LODWORD(this->?) = 10;
  *(unsigned int *)this->? = 0;
  *(unsigned int *)this->? = &vt_TypeList_UnitTypeClass_const;
  VectorClass_flat::BuildingTypeConstructor(&this->?, 0, 0);
  *(unsigned int *)this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_BuildingTypeClass_const;
  IDA_HIDWORD(this->?) = 0;
  this->? = 0;
  *(unsigned int *)this->? = 0;
  this->? = 0;
  this->? = 1056964608;
  IDA_LOBYTE(this->?) = 0;
  this->? = 0x83F4CCCCDLL;
  this->? = 5;
  this->? = 50;
  VectorClass_flat::Construct(&this->?, 0, 0);
  *(unsigned int *)this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass_flat::Construct((unsigned int *)&this->? + 1, 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[2], 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(this->?, 0, 0);
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
  VectorClass_flat::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  this->?[1] = 5;
  VectorClass_flat::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[1], 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  this->?[1] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(this->?, 0, 0);
  this->?[0] = 10;
  this->? = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[2], 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[3], 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  this->?[2] = 25;
  this->?[3] = 10;
  VectorClass_flat::Construct(this->?, 0, 0);
  this->?[1] = 10;
  this->?[0] = 0;
  this->?[0] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[3], 0, 0);
  *(unsigned int *)this->? = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->?[3] = 10;
  this->?[2] = 0;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  *(unsigned int *)&this->?[4] = 1048576000;
  this->? = 0x3F8000003F800000LL;
  this->? = 0x3F80000000000005LL;
  this->? = 0x23F800000LL;
  this->? = 0x23F800000LL;
  this->? = 5;
  this->? = 1065353216;
  IDA_LOBYTE(this->?) = 1;
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
  IDA_LOBYTE(this->?[2]) = 0;
  IDA_BYTE1(this->?[2]) = 0;
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
  *(unsigned int *)&this->? = 0;
  *(unsigned int *)&this->? = 0;
  *(unsigned int *)&this->? = 0;
  *(unsigned int *)&this->? = 0;
  this->? = 0;
  IDA_LODWORD(this->?) = 0;
  this->? = 0;
  this->? = 0;
  *(unsigned int *)this->? = 0;
  this->? = 0;
  this->? = 0;
  *(unsigned int *)this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(unsigned int *)this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  this->? = 0;
  *(unsigned int *)this->? = 1073217536;
  this->? = 0x4008000000000000LL;
  this->? = 0;
  *(unsigned int *)this->? = 1075052544;
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
  VectorClass_flat::Construct(&this->?[2], 0, 0);
  this->?[7] = 10;
  this->?[6] = 0;
  this->?[2] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?[9], 0, 0);
  this->?[14] = 10;
  this->?[13] = 0;
  this->?[9] = (int)&vt_TypeList_int;
  this->?[16] = 5000;
  VectorClass_flat::Construct(&this->?[17], 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  this->?[17] = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(this->?, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  *(unsigned int *)this->? = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct((unsigned int *)&this->? + 1, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass_flat::Construct((unsigned int *)&this->? + 1, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct((unsigned int *)&this->? + 1, 0, 0);
  this->? = 10;
  this->? = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  this->? = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(this->?, 0, 0);
  this->? = 10;
  IDA_HIDWORD(this->?) = 0;
  *(unsigned int *)this->? = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  this->? = 1000;
  VectorClass_flat::Construct(&this->?, 0, 0);
  *(unsigned int *)&this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 10;
  *(unsigned int *)&this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  *(unsigned int *)&this->? = 10;
  *(unsigned int *)&this->? = 0;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0.0;
  *(unsigned int *)&this->? = &vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass_flat::Construct(&this->?, 0, 0);
  this->? = 10;
  this->?[2] = 0;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass_flat::Construct(this->?, 0, 0);
  *(unsigned int *)&this->? = 10;
  IDA_HIDWORD(this->?) = 0;
  *(unsigned int *)this->? = &vt_TypeList_int;
  DynamicVectorClass_flat::Construct(&this->?, 0, 0);
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  this->?[0] = 0;
  this->?[1] = 1072693248;
  DynamicVectorClass_flat::Construct(&this->?[2], 0, 0);
  this->?[2] = (int)&vt_TypeList_int;
  this->? = 0;
  this->? = 0;
  this->? = 0.0;
  this->? = 1.875;
  this->u32_1420 = 0;
  this->u32_1424 = 1072693248;
  this->u32_1428 = 0;
  this->u32_142C = 1071644672;
  this->u32_1430 = 256;
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
  this->u32_1468 = 0;
  this->u32_146C = 0;
  this->u32_1470 = 1;
  this->u32_1474 = 255;
  this->u32_1478 = 0x2000;
  this->u32_147C = 0;
  this->AddPlanningModeCommandSound = 2500;
  this->u32_1484 = 10000;
  this->u32_1488 = 10000;
  this->u32_148C = 100;
  this->u32_1490 = 1;
  this->u32_1494 = 10;
  this->u32_1498 = 20;
  this->u32_149C = 10;
  this->u32_14A0 = 6;
  this->u32_14A4 = 1;
  this->u32_14A8 = 1;
  this->u32_14AC = 16842753;
  this->u32_14B0 = 257;
  this->u32_14B4 = 0;
  this->u32_14B8 = 16843009;
  this->u32_14BC = 1024;
  this->ExecutePlanSound = 858993459;
  this->u32_14C4 = 1071854387;
  this->u32_14C8 = -343597384;
  this->u32_14CC = 1067366481;
  this->u32_14D0 = 8;
  this->SuperWeapons = 0x3FD0000000000000LL;
  this->u32_14E0 = 20;
  this->GuardArea = 0x4000000000000000LL;
  this->u32_14F0 = 0;
  this->u32_14F4 = 1071644672;
  this->u32_14F8 = 200;
  this->u32_14FC = 100;
  this->EndPlanningModeSound = 300;
  this->u32_1508 = -1717986918;
  this->u32_150C = 1068079513;
  this->q1510 = 0;
  this->q1514 = 1075052544;
  this->q1518 = -1717986918;
  this->u32_151C = 1068079513;
  this->u32_1520 = 2;
  this->u32_1528 = -755914244;
  this->u32_152C = 1066426957;
  this->u32_1530 = 1000;
  this->GrowthRate = 0;
  this->u32_163C = 0x40000000;
  this->ShroudRate = 0;
  this->u32_1644 = 1074790400;
  this->FogRate = -1717986918;
  this->u32_164C = 1068079513;
  this->IceGrowthRate = 0;
  this->u32_1654 = 1072693248;
  this->VeinGrowthRate = 0;
  this->u32_165C = 1072693248;
  this->IceSolidifyFrameTime = 500;
  this->u32_1668 = -1717986918;
  this->AmbientChangeStep = 1070176665;
  this->u32_1670 = -1717986918;
  this->CrateRegen = 1069128089;
  this->u32_1678 = 0;
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
  this->u32_16BC = 50;
  this->URepairRate = 0;
  this->u32_16C4 = 1;
  this->IRepairRate = 1000;
  this->u32_16CC = 5;
  this->ConditionYellow = 0;
  this->u32_16D4 = 1070596096;
  this->ConditionRed = 1;
  this->IdleActionFrequency = -755914244;
  this->u32_16E4 = 1066426957;
  this->CloseEnough = -755914244;
  this->Stray = 1066426957;
  this->RelaxedStray = -755914244;
  this->GuardModeStray = 1066426957;
  this->Crush = 0;
  this->CrateRadius = 1072693248;
  this->HomingScatter = 0;
  this->BallisticScatter = 1071644672;
  this->RefundPercent = 0;
  this->u32_170C = 1071644672;
  this->BridgeStrength = -309237645;
  this->BuildSpeed = 1068842876;
  this->u32_1718 = 640;
  this->C4Delay = 512;
  this->ShakeScreen = 512;
  this->PathDelay = 384;
  this->u32_172C = 640;
  this->BlockagePathDelay = 512;
  this->MovieTime = 256;
  this->u32_1738 = 0;
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
  this->u32_17C4 = 50;
  this->RadLightFactor = 0;
  this->u32_17CC = 100;
  this->RadTintFactor = 0;
  this->u32_17D4 = 0;
  this->RadColor = 0;
  this->RadSiteWarhead = 0;
  this->ElevationIncrement = 16842753;
  this->ElevationIncrementBonus = 16842752;
  this->u32_17E8 = 0;
  this->ElevationBonusCap = 0x10000;
  this->u32_17F0 = 16843008;
  this->AlliedWallTransparency = 0;
  this->WallPenetratorThreshold = 1065353216;
  this->u32_17FC = 0;
  this->CloakingStages = 300;
  this->q1804 = 0;
  this->q1808 = 0;
  this->OreTwinkleChance = 0;
  this->OreTwinkle = 0;
  this->ColorAdd = 0;
  this->q1818 = 0;
  this->q181C = 0;
  this->ShipSinkingWeight = 0;
  this->u32_1824 = 0;
  this->u32_1828 = 0;
  this->u32_182C = 0;
  this->q1830 = 0;
  this->u8_1831 = 0;
  this->q1832 = 0;
  this->q1834 = 0;
  this->u32_1838 = 0;
  this->IceCrackingWeight = 0;
  this->LaserTargetColor = 1072693248;
  this->IronCurtainColor = 0;
  this->BerserkColor = 0;
  this->ForceShieldColor = 0;
  this->FallBackCoefficient = 0;
  this->CrewCount = 1071644672;
  this->IceBreakingWeight = 0xFFFFFF;
  this->u32_1864 = 0;
  this->u32_1868 = 0;
  char * v3 = (char *)&this->u32_61D0;
  this->u32_186C = 50;
  this->q1870 = 0;
  char * v4 = (char *)&this->u32_61D0;
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
  this->u32_18A4 = 0;
  this->u32_18A8 = 0;
  this->u32_18AC = 0;
  this->u32_18B0 = 0;
  this->u32_18B4 = 1065353216;
  this->u32_18B8 = 1065353216;
  this->? = 0;
  this->? = 60;
  this->? = 0.0;
  this->? = 1.0;
  this->? = 0.050000001;
  IDA_LODWORD(this->?) = 1;
  this->? = 1053609165;
  *(unsigned int *)this->? = 768;
  IDA_LODWORD(this->?) = 1000;
  IDA_HIDWORD(this->?) = 1000;
  IDA_LODWORD(this->?) = 256;
  IDA_BYTE4(this->?) = 1;
  IDA_LODWORD(this->?) = 0;
  IDA_HIDWORD(this->?) = 10;
  this->? = 60;
  this->? = 0;
  this->? = 1065353216;
  this->? = 1028443341;
  IDA_LODWORD(this->?) = 1;
  IDA_HIDWORD(this->?) = 1053609165;
  IDA_LODWORD(this->?) = 768;
  IDA_HIDWORD(this->?) = 1000;
  IDA_LODWORD(this->?) = 1000;
  IDA_HIDWORD(this->?) = 128;
  IDA_LOBYTE(this->?) = 0;
  this->? = 0;
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 30;
  IDA_LODWORD(this->?) = 1065353216;
  IDA_HIDWORD(this->?) = 1065353216;
  IDA_LODWORD(this->?) = 1065353216;
  IDA_HIDWORD(this->?) = 1;
  IDA_LODWORD(this->?) = 1058642330;
  IDA_HIDWORD(this->?) = 768;
  IDA_LODWORD(this->?) = 500;
  IDA_HIDWORD(this->?) = 500;
  IDA_LODWORD(this->?) = 128;
  IDA_BYTE4(this->?) = 0;
  this->?[0] = 0;
  int v6 = 16;
  do
  {
    char * v7 = v3;
    v3 += 3;
    --v6;
    *(unsigned short *)v7 = 0;
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
    VectorClass_flat::Destroy((int)v2);
    VectorClass_flat::Destroy(&this->q13C8);
    VectorClass_flat::Destroy(this->q13AC);
    VectorClass_flat::Destroy(&this->q1390);
    VectorClass_flat::Destroy(&this->q1374);
    VectorClass_flat::Destroy(&this->q1358);
    VectorClass_flat::Destroy(&this->q133C);
    VectorClass_flat::Destroy(&this->q1320);
    VectorClass_flat::Destroy(&this->q1304);
    VectorClass_flat::Destroy(&this->q12E4);
    VectorClass_flat::Destroy(&this->q12C8);
    VectorClass_flat::Destroy(this->q12AC);
    VectorClass_flat::Destroy(&this->q1290);
    VectorClass_flat::Destroy(&this->q1274 + 4);
    VectorClass_flat::Destroy(&this->q1258);
    VectorClass_flat::Destroy(&this->q123C + 4);
    VectorClass_flat::Destroy(&this->q1220);
    VectorClass_flat::Destroy(&this->q1204 + 4);
    VectorClass_flat::Destroy(&this->q11E8);
    VectorClass_flat::Destroy(this->q11CC);
    VectorClass_flat::Destroy(&this->q11B0);
    this->q1194[17] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->q1194[17]);
    this->q1174[9] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->q1174[9]);
    this->q1158[2] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->q1158[2]);
    TypeList_cptr_TerrainTypeClass::TryFreeAndClear(&this->qFF8);
    VectorClass_flat::Destroy(&this->qF20);
    this->qF04[3] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->qF04[3]);
    this->qEE8[0] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(this->qEE8);
    this->qEC4[3] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->qEC4[3]);
    this->qEA0[2] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->qEA0[2]);
    this->qE84[0] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(this->qE84);
    this->qE68[1] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->qE68[1]);
    this->qE4C[2] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->qE4C[2]);
    this->qE2C[2] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->qE2C[2]);
    this->qE10[3] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->qE10[3]);
    this->qDD4[0] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(this->qDD4);
    this->qDB8[2] = &vt_VectorClass_int;
    VectorClass_flat::Destroy(&this->qDB8[2]);
    VectorClass_flat::Destroy(&this->qD9C + 4);
    VectorClass_flat::Destroy(&this->qD80);
    DynamicVectorClass_flat::Destroy(&this->qD38);
    Vector::Destructor(this->qD1C);
    Vector::Cleanup(&this->qD00);
    Vector::Cleanup(&this->qCE4 + 4);
    VectorClass_flat::Destroy(&this->qCC8);
    Vector::Cleanup(&this->qCAC + 4);
    VectorClass_flat::Destroy(&this->qC90);
    Vector::Cleanup(&this->qC74);
    VectorClass_flat::Destroy(&this->qC58);
    Vector::Cleanup(&this->__pad_C3C);
    VectorClass_flat::Destroy(&this->qC20);
    Vector::Cleanup(&this->qC04);
    DynamicVectorClass_flat::Destroy_Alt(&this->qBC0);
    DynamicVectorClass_flat::Destroy_Alt(&this->qB90);
    this->qB74[2] = &vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass_flat::Destroy_Alt(&this->qB74[2]);
    VectorClass_flat::ClearAndFree4(&this->qB58);
    Vector::Destructor(&this->HarvesterLoadRate);
    this->SovietSurvivorDivisor[1] = &vt_VectorClass_UnitTypeClass_const;
    Vector::Destructor(&this->SovietSurvivorDivisor[1]);
    this->BridgeDestruction[1] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass_flat::Destroy(&this->BridgeDestruction[1]);
    DynamicVectorClass_flat::Destroy(&this->MinUnitCount);
    this->SilverCrate[3] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass_flat::Destroy(&this->SilverCrate[3]);
    v3 = (void *)this->Aircraft[1];
    this->Aircraft[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v3 && IDA_BYTE1(this->Aircraft[3]) )
    {
    RA2_OPDEL(v3);
    this->Aircraft[1] = 0;
}
    IDA_BYTE1(this->Aircraft[3]) = 0;
    this->Aircraft[2] = 0;
    HarvesterTooFarDistance = (void *)this->Production;
    if ( HarvesterTooFarDistance && IDA_BYTE1(this->RepairSell[0]) )
    {
    RA2_OPDEL(HarvesterTooFarDistance);
    this->Production = 0;
}
    IDA_BYTE1(this->RepairSell[0]) = 0;
    this->GuardArea = 0;
    SovietDisguise = (void *)this->BaseBias;
    if ( SovietDisguise && IDA_BYTE1(this->ExpSpread) )
    {
    RA2_OPDEL(SovietDisguise);
    this->BaseBias = 0;
}
    IDA_BYTE1(this->ExpSpread) = 0;
    this->qA58 = 0;
    v6 = (void *)this->InfantryBaseMult[3];
    this->InfantryBaseMult[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v6 && IDA_BYTE1(this->PatrolScan[1]) )
    {
    RA2_OPDEL(v6);
    this->InfantryBaseMult[3] = 0;
}
    IDA_BYTE1(this->PatrolScan[1]) = 0;
    this->PatrolScan[0] = 0;
    v7 = (void *)this->qA1C[0];
    this->RefineryRatio[3] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v7 && IDA_BYTE1(this->qA25[2]) )
    {
    RA2_OPDEL(v7);
    this->qA1C[0] = 0;
}
    IDA_BYTE1(this->qA25[2]) = 0;
    this->BaseSizeAdd[1] = 0;
    v8 = (void *)this->WarRatio[1];
    this->WarRatio[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v8 && IDA_BYTE1(this->WarRatio[3]) )
    {
    RA2_OPDEL(v8);
    this->WarRatio[1] = 0;
}
    IDA_BYTE1(this->WarRatio[3]) = 0;
    this->WarRatio[2] = 0;
    v9 = (void *)this->AARatio[2];
    this->TeslaLimit[1] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v9 && IDA_BYTE1(this->AALimit[0]) )
    {
    RA2_OPDEL(v9);
    this->AARatio[2] = 0;
}
    IDA_BYTE1(this->AALimit[0]) = 0;
    this->q9E8[3] = 0;
    v10 = (void *)this->AirstripLimit[3];
    this->q9C4[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v10 && IDA_BYTE1(this->HelipadRatio[1]) )
    {
    RA2_OPDEL(v10);
    this->AirstripLimit[3] = 0;
}
    IDA_BYTE1(this->HelipadRatio[1]) = 0;
    this->HelipadRatio[0] = 0;
    v11 = (void *)this->q9AC[0];
    this->AttackInterval[3] = &vt_VectorClass_int;
    if ( v11 && IDA_BYTE1(this->q9B5[2]) )
    {
    RA2_OPDEL(v11);
    this->q9AC[0] = 0;
}
    IDA_BYTE1(this->q9B5[2]) = 0;
    this->AttackDelay[1] = 0;
    v12 = (void *)this->TargetDistanceCoefficientDefault[1];
    this->q98C[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v12 && IDA_BYTE1(this->q999[3]) )
    {
    RA2_OPDEL(v12);
    this->TargetDistanceCoefficientDefault[1] = 0;
}
    IDA_BYTE1(this->q999[3]) = 0;
    this->q994[2] = 0;
    ChronoDelay = (void *)this->q974;
    if ( ChronoDelay && IDA_BYTE1(this->q97D) )
    {
    RA2_OPDEL(ChronoDelay);
    this->q974 = 0;
}
    IDA_BYTE1(this->q97D) = 0;
    this->TargetEffectivenessCoefficientDefault = 0;
    v14 = (void *)this->q958[1];
    this->q954[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v14 && IDA_BYTE1(this->q961[3]) )
    {
    RA2_OPDEL(v14);
    this->q958[1] = 0;
}
    IDA_BYTE1(this->q961[3]) = 0;
    this->q95C[2] = 0;
    v15 = (void *)this->CMisl[3];
    this->q938[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v15 && IDA_BYTE1(this->q945) )
    {
    RA2_OPDEL(v15);
    this->CMisl[3] = 0;
}
    IDA_BYTE1(this->q945) = 0;
    this->q940 = 0;
    v16 = (void *)this->q920[0];
    this->q91C[3] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v16 && IDA_BYTE1(this->q929[2]) )
    {
    RA2_OPDEL(v16);
    this->q920[0] = 0;
}
    IDA_BYTE1(this->q929[2]) = 0;
    this->q924[1] = 0;
    v17 = (void *)this->q904[1];
    this->q900[0] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v17 && IDA_BYTE1(this->q90D[3]) )
    {
    RA2_OPDEL(v17);
    this->q904[1] = 0;
}
    IDA_BYTE1(this->q90D[3]) = 0;
    this->DMisl[2] = 0;
    ComputerBaseDefenseResponse = (void *)this->q8E8;
    if ( ComputerBaseDefenseResponse && IDA_BYTE1(this->q8F1[0]) )
    {
    RA2_OPDEL(ComputerBaseDefenseResponse);
    this->q8E8 = 0;
}
    IDA_BYTE1(this->q8F1[0]) = 0;
    this->q8EC = 0;
    GDIWallDefense_high = (void *)IDA_HIDWORD(this->CHRONOSK_SHP);
    if ( GDIWallDefense_high && IDA_BYTE5(this->PsychicRevealRadius) )
    {
    RA2_OPDEL(GDIWallDefense_high);
    IDA_HIDWORD(this->CHRONOSK_SHP) = 0;
}
    IDA_BYTE5(this->PsychicRevealRadius) = 0;
    IDA_LODWORD(this->PsychicRevealRadius) = 0;
    v20 = (void *)this->IvanWarhead[2];
    this->IvanWarhead[1] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v20 && IDA_BYTE1(this->CanDetonateTimeBomb[0]) )
    {
    RA2_OPDEL(v20);
    this->IvanWarhead[2] = 0;
}
    IDA_BYTE1(this->CanDetonateTimeBomb[0]) = 0;
    this->IvanWarhead[3] = 0;
    v21 = (void *)this->NukeProjectile[3];
    this->NukeProjectile[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v21 && IDA_BYTE1(this->C4Warhead[1]) )
    {
    RA2_OPDEL(v21);
    this->NukeProjectile[3] = 0;
}
    IDA_BYTE1(this->C4Warhead[1]) = 0;
    this->C4Warhead[0] = 0;
    v22 = (void *)this->AISafeDistance[3];
    this->AISafeDistance[2] = &vt_VectorClass_BuildingTypeClass_const;
    if ( v22 && IDA_BYTE1(this->Engineer[1]) )
    {
    RA2_OPDEL(v22);
    this->AISafeDistance[3] = 0;
}
    IDA_BYTE1(this->Engineer[1]) = 0;
    this->Engineer[0] = 0;
    v23 = (void *)this->SpyPowerBlackout[0];
    this->ChronoRangeMinimum[3] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v23 && IDA_BYTE1(this->SpyPowerBlackout[2]) )
    {
    RA2_OPDEL(v23);
    this->SpyPowerBlackout[0] = 0;
}
    IDA_BYTE1(this->SpyPowerBlackout[2]) = 0;
    this->SpyPowerBlackout[1] = 0;
    v24 = (void *)this->ChronoReinfDelay[1];
    this->ChronoReinfDelay[0] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v24 && IDA_BYTE1(this->ChronoReinfDelay[3]) )
    {
    RA2_OPDEL(v24);
    this->ChronoReinfDelay[1] = 0;
}
    IDA_BYTE1(this->ChronoReinfDelay[3]) = 0;
    this->ChronoReinfDelay[2] = 0;
    v25 = (void *)this->BombParachute[2];
    this->BombParachute[1] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v25 && IDA_BYTE1(this->LargeFire[0]) )
    {
    RA2_OPDEL(v25);
    this->BombParachute[2] = 0;
}
    IDA_BYTE1(this->LargeFire[0]) = 0;
    this->BombParachute[3] = 0;
    v26 = (void *)this->BaseUnit[3];
    this->BaseUnit[2] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v26 && IDA_BYTE1(this->TreeFire[1]) )
    {
    RA2_OPDEL(v26);
    this->BaseUnit[3] = 0;
}
    IDA_BYTE1(this->TreeFire[1]) = 0;
    this->TreeFire[0] = 0;
    v27 = (void *)this->GDIBaseDefenseCoefficient[0];
    this->GDIWallDefenseCoefficient[3] = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v27 && IDA_BYTE1(this->GDIBaseDefenseCoefficient[2]) )
    {
    RA2_OPDEL(v27);
    this->GDIBaseDefenseCoefficient[0] = 0;
}
    IDA_BYTE1(this->GDIBaseDefenseCoefficient[2]) = 0;
    this->GDIBaseDefenseCoefficient[1] = 0;
    v28 = (void *)this->q738[1];
    this->q734[0] = &vt_VectorClass_int;
    if ( v28 && IDA_BYTE1(this->q741[3]) )
    {
    RA2_OPDEL(v28);
    this->q738[1] = 0;
}
    IDA_BYTE1(this->q741[3]) = 0;
    this->q73C[2] = 0;
    CameraRange = (void *)this->ChuteSound;
    if ( CameraRange && IDA_BYTE1(this->GuardSound) )
    {
    RA2_OPDEL(CameraRange);
    this->ChuteSound = 0;
}
    IDA_BYTE1(this->GuardSound) = 0;
    this->StopSound = 0;
    StopSound = (void *)this->q64C;
    if ( StopSound && IDA_BYTE1(this->q655) )
    {
    RA2_OPDEL(StopSound);
    this->q64C = 0;
}
    IDA_BYTE1(this->q655) = 0;
    this->VeteranCap = 0;
    v31 = (void *)this->RevealTriggerRadius[0];
    if ( v31 && IDA_BYTE1(this->RevealTriggerRadius[2]) )
    {
    RA2_OPDEL(v31);
    this->RevealTriggerRadius[0] = 0;
}
    IDA_BYTE1(this->RevealTriggerRadius[2]) = 0;
    this->RevealTriggerRadius[1] = 0;
    v32 = (void *)this->q478[7];
    this->q474[6] = &vt_VectorClass_int;
    if ( v32 && IDA_BYTE1(this->q481[9]) )
    {
    RA2_OPDEL(v32);
    this->q478[7] = 0;
}
    IDA_BYTE1(this->q481[9]) = 0;
    this->q47C[8] = 0;
    v33 = (void *)this->q45C[0];
    this->q458[13] = &vt_VectorClass_int;
    if ( v33 && IDA_BYTE1(this->q465[2]) )
    {
    RA2_OPDEL(v33);
    this->q45C[0] = 0;
}
    IDA_BYTE1(this->q465[2]) = 0;
    this->q460[1] = 0;
    v34 = (void *)this->q440[7];
    this->q43C[6] = &vt_VectorClass_int;
    if ( v34 && IDA_BYTE1(this->q449[9]) )
    {
    RA2_OPDEL(v34);
    this->q440[7] = 0;
}
    IDA_BYTE1(this->q449[9]) = 0;
    this->q444[8] = 0;
    PrismSupportHeight = (void *)this->q3E8;
    if ( PrismSupportHeight && IDA_BYTE1(this->q3F1[1]) )
    {
    RA2_OPDEL(PrismSupportHeight);
    this->q3E8 = 0;
}
    IDA_BYTE1(this->q3F1[1]) = 0;
    this->q3EC[0] = 0;
    IonCannonDamage = (void *)this->q3CC;
    this->q3C8[3] = &vt_VectorClass_int;
    if ( IonCannonDamage && IDA_BYTE1(this->q3D5) )
    {
    RA2_OPDEL(IonCannonDamage);
    this->q3CC = 0;
}
    IDA_BYTE1(this->q3D5) = 0;
    this->q3D0 = 0;
    v37 = (void *)this->q3B0[1];
    this->q3AC[0] = &vt_VectorClass_int;
    if ( v37 && IDA_BYTE1(this->q3B9[3]) )
    {
    RA2_OPDEL(v37);
    this->q3B0[1] = 0;
}
    IDA_BYTE1(this->q3B9[3]) = 0;
    this->q3B4[2] = 0;
    WobblesPerSecond_high = (void *)IDA_HIDWORD(this->q394);
    if ( WobblesPerSecond_high && IDA_BYTE1(this->q39D[0]) )
    {
    RA2_OPDEL(WobblesPerSecond_high);
    IDA_HIDWORD(this->q394) = 0;
}
    IDA_BYTE1(this->q39D[0]) = 0;
    this->q398 = 0;
    Climb = (void *)this->q378;
    *(unsigned int *)&this->q374[4] = &vt_VectorClass_int;
    if ( Climb && IDA_BYTE1(this->q381) )
    {
    RA2_OPDEL(Climb);
    IDA_LODWORD(this->q378) = 0;
}
    IDA_BYTE1(this->q381) = 0;
    IDA_HIDWORD(this->q37C) = 0;
    PrerequisiteProcAlternate = (void *)this->q35C;
    this->q358[3] = &vt_VectorClass_int;
    if ( PrerequisiteProcAlternate && IDA_BYTE1(this->q365) )
    {
    RA2_OPDEL(PrerequisiteProcAlternate);
    this->q35C = 0;
}
    IDA_BYTE1(this->q365) = 0;
    this->q360 = 0;
    WarpIn = (void *)this->q2DC;
    if ( WarpIn && IDA_BYTE1(this->q2E5) )
    {
    RA2_OPDEL(WarpIn);
    this->q2DC = 0;
}
    IDA_BYTE1(this->q2E5) = 0;
    this->q2E0 = 0;
    DrainAnimationType = (void *)this->q2C0;
    if ( DrainAnimationType && IDA_BYTE1(this->q2C9) )
    {
    RA2_OPDEL(DrainAnimationType);
    this->q2C0 = 0;
}
    IDA_BYTE1(this->q2C9) = 0;
    this->q2C4 = 0;
    DominatorSecondAnim = (void *)this->q2A4;
    if ( DominatorSecondAnim && IDA_BYTE1(this->q2AD) )
    {
    RA2_OPDEL(DominatorSecondAnim);
    this->q2A4 = 0;
}
    IDA_BYTE1(this->q2AD) = 0;
    this->q2A8 = 0;
    GUIOpenSound = (void *)this->CrateFireSound;
    if ( GUIOpenSound && IDA_BYTE1(this->CrateSpeedSound) )
    {
    RA2_OPDEL(GUIOpenSound);
    this->CrateFireSound = 0;
}
    IDA_BYTE1(this->CrateSpeedSound) = 0;
    this->CrateArmourSound = 0;
    CreateUnitSound = (void *)this->DefaultChronoSound;
    if ( CreateUnitSound && IDA_BYTE1(this->AddPlanningModeCommandSound) )
    {
    RA2_OPDEL(CreateUnitSound);
    this->DefaultChronoSound = 0;
}
    IDA_BYTE1(this->AddPlanningModeCommandSound) = 0;
    this->StartPlanningModeSound = 0;
    v46 = (void *)this->GUICheckboxSound[2];
    this->GUICheckboxSound[1] = &vt_VectorClass_AnimTypeClass_const;
    if ( v46 && IDA_BYTE1(this->BuildingGarrisonedSound[0]) )
    {
    RA2_OPDEL(v46);
    this->GUICheckboxSound[2] = 0;
}
    IDA_BYTE1(this->BuildingGarrisonedSound[0]) = 0;
    this->GUICheckboxSound[3] = 0;
    v47 = (void *)this->GUITabSound[3];
    this->GUITabSound[2] = &vt_VectorClass_AnimTypeClass_const;
    if ( v47 && IDA_BYTE1(this->GUIMoveInSound[1]) )
    {
    RA2_OPDEL(v47);
    this->GUITabSound[3] = 0;
}
    IDA_BYTE1(this->GUIMoveInSound[1]) = 0;
    this->GUIMoveInSound[0] = 0;
    result = this->RadarEventColorSpeed[1];
    this->RadarEventColorSpeed[0] = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( result && IDA_BYTE1(this->RadarEventColorSpeed[3]) )
    {
    RA2_OPDEL((void *)result);
    this->RadarEventColorSpeed[1] = 0;
}
    IDA_BYTE1(this->RadarEventColorSpeed[3]) = 0;
    this->RadarEventColorSpeed[2] = 0;
    return result;
}
}

// 0x66D150
void* RulesClass::readAudioVisual()
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // ecx
  int BerserkColor; // eax
  int IronCurtainColor; // ecx
  double v9; // [esp-8h] [ebp-10h]
  bool *v10; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v10, (uint8_t *)aElevationmodel); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v10,
                      (uint8_t *)aElevationmodel,
                      aElevationincre,
                      this->ColorAdd[9]);
    v4 = this->ColorAdd[11]; /*0x66d188*/
    this->ColorAdd[9] = Int_Overwrite; /*0x66d18e*/
    IDA_HIDWORD(v9) = this->LaserTargetColor; /*0x66d1a0*/
    IDA_LODWORD(v9) = v4; /*0x66d1a1*/
    INIClass::ReadDouble_Overwrite((double *)v10, (uint8_t *)aElevationmodel, aElevationincre_0, v9); /*0x66d1aa*/
    BerserkColor = this->BerserkColor; /*0x66d1af*/
    IronCurtainColor = this->IronCurtainColor; /*0x66d1b5*/
    __asm { fstp qword ptr [esi+1840h] } /*0x66d1bb*/
    *(double *)&this->ColorAdd[11] = _RT1; /*0x66d1bb*/
    result = INIClass::ReadDouble_Overwrite( /*0x66d1d1*/
               (double *)v10,
               (uint8_t *)aElevationmodel,
               aElevationbonus,
               COERCE_DOUBLE(IDA___PAIR64__(BerserkColor, IronCurtainColor)));
    __asm { fstp qword ptr [esi+1848h] } /*0x66d1d6*/
    *(double *)&this->IronCurtainColor = _RT1; /*0x66d1d6*/
    IDA_LOBYTE(result) = 1; /*0x66d1dd*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x66d1e4*/
  }
  return result; /*0x66d1dc*/
}
// 0x673E80
INIClass * * RulesClass::ReadPowerupsSection()
{
  int result; // eax
  int v2; // edi
  double *v3; // ebp
  char *v4; // eax
  const char *v5; // esi
  char *v6; // eax
  GlobalArray *v7; // esi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  uint8_t ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (uint8_t *)aPowerups); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    v2 = 0; /*0x673ea5*/
    v3 = dbl_89EC28; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 (INIClass *)v13,
                 (uint8_t *)aPowerups,
                 (&off_7E523C)[v2],
                 a0None,
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        v4 = strtok(String, Str); /*0x673ee7*/
        v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        v6 = strtok(0, Str); /*0x673f13*/
        v7 = (GlobalArray *)v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        v8 = strtok(0, Str); /*0x673f3d*/
        v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, off_825BF8) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, g_Str_no) ) /*0x673f73*/
              byte_89ECC0[v2] = 0; /*0x673f7f*/
          }
          else
          {
            byte_89ECC0[v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, Str); /*0x673f8c*/
        v10 = (char *)result; /*0x673f91*/
        if ( result ) /*0x673f98*/
        {
          if ( strchr((const char *)result, 37) ) /*0x673f9d*/
          {
            result = atof(v10); /*0x673faa*/
            __asm { fmul ds:dbl_7E3808 } /*0x673faf*/
          }
          else
          {
            String::Trim(v10); /*0x673fbc*/
            result = atof(v10); /*0x673fc2*/
          }
          __asm { fstp qword ptr [ebp+0] } /*0x673fca*/
          *v3 = _RT1; /*0x673fca*/
        }
      }
      ++v3; /*0x673fcd*/
      ++v2; /*0x673fd0*/
    }
    while ( (int)v3 < (int)byte_89ECC0 ); /*0x673fd7*/
    IDA_LOBYTE(result) = 1; /*0x673fdf*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x673feb*/
  }
  return result; /*0x673fe2*/
}
// 0x6743D0
INIClass * * RulesClass::readDifficulty()
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  int v5; // edx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v13; // ecx
  double v15; // [esp-8h] [ebp-10h]
  bool *v16; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v16, (uint8_t *)aJumpjetcontrol); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    *(unsigned int *)&this->__pad_240[460] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                                         v16,
                                         (uint8_t *)aJumpjetcontrol,
                                         aTurnrate,
                                         *(unsigned int *)&this->__pad_240[460]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (uint8_t *)aJumpjetcontrol,
                      g_INI_Key_Speed,
                      *(unsigned int *)&this->__pad_240[464]);
    v4 = *(unsigned int *)&this->__pad_240[476]; /*0x67442c*/
    *(unsigned int *)&this->__pad_240[464] = Int_Overwrite; /*0x674432*/
    IDA_HIDWORD(v15) = v4; /*0x674444*/
    IDA_LODWORD(v15) = *(unsigned int *)&this->__pad_240[472]; /*0x674445*/
    INIClass::ReadDouble_Overwrite((double *)v16, (uint8_t *)aJumpjetcontrol, aClimb, v15); /*0x67444e*/
    v5 = *(unsigned int *)&this->__pad_240[480]; /*0x674453*/
    __asm { fstp qword ptr [esi+418h] } /*0x67445b*/
    *(double *)&this->__pad_240[472] = _RT1; /*0x67445b*/
    v7 = INIClass::ReadInt_Overwrite(v16, (uint8_t *)aJumpjetcontrol, aCruiseheight, v5); /*0x67446d*/
    v8 = *(unsigned int *)&this->__pad_240[492]; /*0x674472*/
    v9 = *(unsigned int *)&this->__pad_240[488]; /*0x674478*/
    *(unsigned int *)&this->__pad_240[480] = v7; /*0x67447e*/
    INIClass::ReadDouble_Overwrite( /*0x674493*/
      (double *)v16,
      (uint8_t *)aJumpjetcontrol,
      (uint8_t *)&stru_81AF8C.__pad_14D[103],
      COERCE_DOUBLE(IDA___PAIR64__(v8, v9)));
    v10 = *(unsigned int *)&this->__pad_240[500]; /*0x674498*/
    v11 = *(unsigned int *)&this->__pad_240[496]; /*0x67449e*/
    __asm { fstp qword ptr [esi+428h] } /*0x6744a4*/
    *(double *)&this->__pad_240[488] = _RT1; /*0x6744a4*/
    INIClass::ReadDouble_Overwrite( /*0x6744b9*/
      (double *)v16,
      (uint8_t *)aJumpjetcontrol,
      aWobblesperseco,
      COERCE_DOUBLE(IDA___PAIR64__(v10, v11)));
    v13 = *(unsigned int *)&this->__pad_240[504]; /*0x6744be*/
    __asm { fstp qword ptr [esi+430h] } /*0x6744c4*/
    *(double *)&this->__pad_240[496] = _RT1; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite(v16, (uint8_t *)aJumpjetcontrol, aWobbledeviatio, v13); /*0x6744d9*/
    *(unsigned int *)&this->__pad_240[504] = result; /*0x6744de*/
    IDA_LOBYTE(result) = 1; /*0x6744e5*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x6744ec*/
  }
  return result; /*0x6744e4*/
}
// 0x674550
INIClass * * RulesClass::ReadMovies()
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  uint8_t *StringByIndex; // eax
  char *v5; // esi
  char Source[32]; // [esp+4h] [ebp-20h] BYREF
  INIClass *v7; // [esp+28h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (uint8_t *)aMovies); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7->__pad_0, (uint8_t *)aMovies); /*0x67457d*/
    v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v7->__pad_0, (uint8_t *)aMovies, i); /*0x6745a4*/
      result = INIClass::GetString(v7, (uint8_t *)aMovies, StringByIndex, g_Str__none_, Source, 32); /*0x6745b3*/
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex((ObjectClass *)Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          v5 = _strdup(Source); /*0x6745da*/
          result = g_MissionQueueFrame.localVariables[581]; /*0x6745dc*/
          if ( g_MissionQueueFrame.localVariables[583] < g_MissionQueueFrame.localVariables[581] /*0x674614*/
            || (IDA_BYTE1(g_MissionQueueFrame.localVariables[582]) || !g_MissionQueueFrame.localVariables[581])
            && g_MissionQueueFrame.localVariables[584] > 0
            && (result = (*(int (__thiscall **)(int *, int, unsigned int))(g_MissionQueueFrame.localVariables[579] + 8))(
                           &g_MissionQueueFrame.localVariables[579],
                           g_MissionQueueFrame.localVariables[581] + g_MissionQueueFrame.localVariables[584],
                           0),
                (unsigned char)result) )
          {
            result = g_MissionQueueFrame.localVariables[583]++; /*0x67461c*/
            *(unsigned int *)(g_MissionQueueFrame.localVariables[580] + 4 * result) = v5; /*0x67462b*/
          }
        }
      }
    }
    IDA_LOBYTE(result) = 1; /*0x67463a*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x674643*/
  }
  return result; /*0x67463c*/
}
// 0x679FA0
void RulesClass::readMaximums()
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x679fa6*/
  this->DetailMinFrameRateNormal = (int)&VectorClass_BuildingTypeClass_const___vftable; /*0x679fa9*/
  if ( DetailMinFrameRateMovie && IDA_BYTE1(this->AmmoCrateDamage) ) /*0x679fb3*/
  {
    RA2_OPDEL(DetailMinFrameRateMovie); /*0x679fb9*/
    this->DetailMinFrameRateMovie = 0; /*0x679fc1*/
  }
  IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x679fc4*/
  this->DetailBufferZoneWidth = 0; /*0x679fc7*/
}
// 0x679FD0
void RulesClass::readInfantryTypes()
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x679fd6*/
  this->DetailMinFrameRateNormal = (int)&VectorClass_UnitTypeClass_const___vftable; /*0x679fd9*/
  if ( DetailMinFrameRateMovie && IDA_BYTE1(this->AmmoCrateDamage) ) /*0x679fe3*/
  {
    RA2_OPDEL(DetailMinFrameRateMovie); /*0x679fe9*/
    this->DetailMinFrameRateMovie = 0; /*0x679ff1*/
  }
  IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x679ff4*/
  this->DetailBufferZoneWidth = 0; /*0x679ff7*/
}
// 0x67A000
void RulesClass::readCountries()
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x67a006*/
  this->DetailMinFrameRateNormal = (int)&VectorClass_AircraftTypeClass_const___vftable; /*0x67a009*/
  if ( DetailMinFrameRateMovie && IDA_BYTE1(this->AmmoCrateDamage) ) /*0x67a013*/
  {
    RA2_OPDEL(DetailMinFrameRateMovie); /*0x67a019*/
    this->DetailMinFrameRateMovie = 0; /*0x67a021*/
  }
  IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x67a024*/
  this->DetailBufferZoneWidth = 0; /*0x67a027*/
}
// 0x67A060
void RulesClass::readVehicleTypes()
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x67a066*/
  this->DetailMinFrameRateNormal = (int)&VectorClass_TerrainTypeClass_const___vftable; /*0x67a069*/
  if ( DetailMinFrameRateMovie && IDA_BYTE1(this->AmmoCrateDamage) ) /*0x67a073*/
  {
    RA2_OPDEL(DetailMinFrameRateMovie); /*0x67a079*/
    this->DetailMinFrameRateMovie = 0; /*0x67a081*/
  }
  IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x67a084*/
  this->DetailBufferZoneWidth = 0; /*0x67a087*/
}
// 0x67A190
void * RulesClass::readAircraftTypes(int * a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a19a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a19e*/
    v3 = a2[2]; /*0x67a1a1*/
    this->DetailBufferZoneWidth = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a1b3*/
      this->DetailMinFrameRateMovie = v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a1c2*/
        v6 = 0; /*0x67a1c5*/
        IDA_BYTE1(this->AmmoCrateDamage) = 1; /*0x67a1c9*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(unsigned int *)(this->DetailMinFrameRateMovie + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a1e5*/
      IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x67a1ec*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a1f3*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a1f9*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a1ff*/
  return &this->DetailMinFrameRateNormal; /*0x67a204*/
}
// 0x67A210
void * RulesClass::readSuperWeaponTypes(int * a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a21a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a21e*/
    v3 = a2[2]; /*0x67a221*/
    this->DetailBufferZoneWidth = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a233*/
      this->DetailMinFrameRateMovie = v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a242*/
        v6 = 0; /*0x67a245*/
        IDA_BYTE1(this->AmmoCrateDamage) = 1; /*0x67a249*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(unsigned int *)(this->DetailMinFrameRateMovie + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a261*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a265*/
      IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x67a26c*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a273*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a279*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a27f*/
  return &this->DetailMinFrameRateNormal; /*0x67a284*/
}
// 0x67A310
void * RulesClass::readBuildingTypes(int * a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a31a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a31e*/
    v3 = a2[2]; /*0x67a321*/
    this->DetailBufferZoneWidth = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a333*/
      this->DetailMinFrameRateMovie = v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a342*/
        v6 = 0; /*0x67a345*/
        IDA_BYTE1(this->AmmoCrateDamage) = 1; /*0x67a349*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(unsigned int *)(this->DetailMinFrameRateMovie + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a361*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a365*/
      IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x67a36c*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a373*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a379*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a37f*/
  return &this->DetailMinFrameRateNormal; /*0x67a384*/
}
// 0x67A8B0
unsigned int * RulesClass::readParticles()
{
  this->DetailMinFrameRateMovie = 0; /*0x67a8b4*/
  this->DetailBufferZoneWidth = 0; /*0x67a8b7*/
  IDA_LOBYTE(this->AmmoCrateDamage) = 1; /*0x67a8ba*/
  IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x67a8be*/
  this->SmallVisceroid = (UnitTypeClass *)10; /*0x67a8c1*/
  this->LargeVisceroid = 0; /*0x67a8c8*/
  this->DetailMinFrameRateNormal = (int)&TypeList_TerrainTypeClass_const___vftable; /*0x67a8cb*/
  return &this->DetailMinFrameRateNormal; /*0x67a8d1*/
}
// 0x67B480
int RulesClass::readAI(unsigned int * a2)
{
  int DetailBufferZoneWidth; // ecx
  int result; // eax
  int DetailMinFrameRateMovie; // edx

  DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67b483*/
  result = (int)this->LargeVisceroid; /*0x67b486*/
  if ( result < DetailBufferZoneWidth /*0x67b4ad*/
    || (IDA_BYTE1(this->AmmoCrateDamage) || !DetailBufferZoneWidth)
    && (result = (int)this->SmallVisceroid, result > 0)
    && (result = (*(int (__thiscall **)(RulesClass *, int, unsigned int))(this->DetailMinFrameRateNormal + 8))(
                   this,
                   DetailBufferZoneWidth + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->LargeVisceroid; /*0x67b4b5*/
    DetailMinFrameRateMovie = this->DetailMinFrameRateMovie; /*0x67b4b8*/
    this->LargeVisceroid = (UnitTypeClass *)(result + 1); /*0x67b4be*/
    *(unsigned int *)(DetailMinFrameRateMovie + 4 * result) = *a2; /*0x67b4c8*/
    IDA_LOBYTE(result) = 1; /*0x67b4cb*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x67b4af*/
  }
  return result; /*0x67b4b1*/
}
// 0x67BDD0
void * RulesClass::LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  void **v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)edx0, aP1, a2, &g_INI_DefaultBuffer, String, 128) ) /*0x67bdfc*/
  {
    RulesClass::readIQ((RulesClass *)&v17, 0, 0); /*0x67be11*/
    v22 = 10; /*0x67be1a*/
    v21 = 0; /*0x67be28*/
    v17 = (void*)&TypeList_TerrainTypeClass_const___vftable; /*0x67be2c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v17[2])(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67be86*/
        *((unsigned int *)Block + v8) = v7; /*0x67be91*/
      }
    }
    *(unsigned int *)(a1 + 4) = 0; /*0x67bead*/
    *(unsigned int *)(a1 + 8) = 0; /*0x67beb0*/
    *(unsigned char *)(a1 + 12) = 1; /*0x67beb3*/
    *(unsigned char *)(a1 + 13) = 0; /*0x67beb7*/
    *(unsigned int *)a1 = (void*)&VectorClass_TerrainTypeClass_const___vftable; /*0x67beba*/
    System_Load_67BFA0((ObjectClass *)a1, &v17); /*0x67bec0*/
    *(unsigned int *)a1 = (void*)&TypeList_TerrainTypeClass_const___vftable; /*0x67bec5*/
    v17 = (void*)&VectorClass_TerrainTypeClass_const___vftable; /*0x67becb*/
    v9 = v22; /*0x67bed7*/
    *(unsigned int *)(a1 + 16) = v21; /*0x67bedb*/
    v10 = Block; /*0x67bede*/
    v11 = Block == 0; /*0x67bee2*/
    *(unsigned int *)(a1 + 20) = v9; /*0x67bee4*/
    if ( !v11 && v20 ) /*0x67bef1*/
    {
      RA2_OPDEL(v10); /*0x67bef8*/
      return (void *)a1; /*0x67bf0b*/
    }
  }
  else
  {
    *(unsigned int *)(a1 + 4) = 0; /*0x67bf19*/
    *(unsigned int *)(a1 + 8) = 0; /*0x67bf1c*/
    *(unsigned char *)(a1 + 12) = 1; /*0x67bf1f*/
    *(unsigned char *)(a1 + 13) = 0; /*0x67bf23*/
    *(unsigned int *)a1 = (void*)&VectorClass_TerrainTypeClass_const___vftable; /*0x67bf26*/
    if ( (unsigned int *)a1 != a5 ) /*0x67bf2c*/
    {
      TypeList_cptr_TerrainTypeClass::TryFreeAndClear((_VectorClass_PBVTerrainTypeClass *)a1); /*0x67bf30*/
      v13 = a5[2]; /*0x67bf36*/
      *(unsigned int *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        v14 = RA2_OPNEW(4 * v13); /*0x67bf48*/
        *(unsigned int *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(unsigned int *)(a1 + 8); /*0x67bf57*/
          v16 = 0; /*0x67bf5a*/
          *(unsigned char *)(a1 + 13) = 1; /*0x67bf5e*/
          if ( v15 > 0 ) /*0x67bf62*/
          {
            do /*0x67bf76*/
            {
              *(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v16) = *(unsigned int *)(a5[1] + 4 * v16); /*0x67bf6d*/
              ++v16; /*0x67bf73*/
            }
            while ( v16 < *(unsigned int *)(a1 + 8) ); /*0x67bf76*/
          }
        }
      }
      else
      {
        *(unsigned int *)(a1 + 4) = 0; /*0x67bf7a*/
        *(unsigned char *)(a1 + 13) = 0; /*0x67bf7d*/
      }
    }
    *(unsigned int *)(a1 + 16) = a5[4]; /*0x67bf83*/
    *(unsigned int *)(a1 + 20) = a5[5]; /*0x67bf89*/
    *(unsigned int *)a1 = (void*)&TypeList_TerrainTypeClass_const___vftable; /*0x67bf8c*/
  }
  return (void *)a1; /*0x67bf02*/
}
// 0x67C430
unsigned int * RulesClass::readIQ(int a2, int a3)
{
  this->DetailMinFrameRateMovie = 0; /*0x67c43b*/
  this->DetailBufferZoneWidth = a2; /*0x67c43e*/
  IDA_LOBYTE(this->AmmoCrateDamage) = 1; /*0x67c441*/
  IDA_BYTE1(this->AmmoCrateDamage) = 0; /*0x67c445*/
  this->DetailMinFrameRateNormal = (int)&VectorClass_TerrainTypeClass_const___vftable; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x67c458*/
      return &this->DetailMinFrameRateNormal; /*0x67c45e*/
    }
    this->DetailMinFrameRateMovie = RA2_OPNEW(4 * a2); /*0x67c46d*/
    IDA_BYTE1(this->AmmoCrateDamage) = 1; /*0x67c470*/
  }
  return &this->DetailMinFrameRateNormal; /*0x67c45d*/
}
// 0x6614F0
int RulesClass::readGeneralSection(TechnoTypeClass * aP1)
{
  return (*(int (__stdcall **)(int, RulesClass *, int, unsigned int))(aP1->uniqueId)(aP1, this, 3, 0); /*0x6614ff*/
}
// 0x661510
int RulesClass::readCombatDamage(int a2)
{
  return (*(int (__stdcall **)(int, RulesClass *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, this, 3, 0); /*0x66151f*/
}
// 0x66D1F0
int RulesClass::readSpecialWeapons()
{
  int result; // eax
  char Bool_Overwrite; // al
  float FallBackCoefficient; // ecx
  double v6; // [esp-8h] [ebp-10h]
  int *v7; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (uint8_t *)aWallmodel); /*0x66d200*/
  if ( result ) /*0x66d20c*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x66d223*/
                       v7,
                       (uint8_t *)aWallmodel,
                       aAlliedwalltran,
                       this->ForceShieldColor);
    FallBackCoefficient = this->FallBackCoefficient; /*0x66d228*/
    IDA_LOBYTE(this->ForceShieldColor) = Bool_Overwrite; /*0x66d22e*/
    IDA_HIDWORD(v6) = this->CrewCount; /*0x66d240*/
    *(float *)&v6 = FallBackCoefficient; /*0x66d241*/
    result = INIClass::ReadDouble_Overwrite((double *)v7, (uint8_t *)aWallmodel, aWallpenetrator, v6); /*0x66d24a*/
    __asm { fstp qword ptr [esi+1858h] } /*0x66d24f*/
    *(double *)&this->FallBackCoefficient = _RT1; /*0x66d24f*/
    IDA_LOBYTE(result) = 1; /*0x66d256*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x66d25d*/
  }
  return result; /*0x66d255*/
}
// 0x66D3A0
int RulesClass::ReadColors()
{
  char *v1; // ebp
  int result; // eax
  int v3; // ebx
  int i; // edi
  uint8_t *StringByIndex; // esi
  int Color; // eax
  uint8_t v7[4]; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF
  INIEntry *v9; // [esp+10h] [ebp+4h] BYREF

  v1 = (char *)v9; /*0x66d3a9*/
  result = INIClass::BinarySearchSection((int)v9, (uint8_t *)aColors); /*0x66d3b0*/
  if ( result ) /*0x66d3bc*/
  {
    result = INIClass::GetKeyCount(v1, (uint8_t *)aColors); /*0x66d3cd*/
    v3 = result; /*0x66d3d2*/
    for ( i = 0; i < v3; ++i ) /*0x66d3d8*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v1, (uint8_t *)aColors, i); /*0x66d3f4*/
      v7[0] = 0; /*0x66d404*/
      v7[1] = 0; /*0x66d409*/
      v7[2] = 0; /*0x66d40e*/
      Color = INIEntry::ReadColor((INIEntry *)v1, (int)&v8, (uint8_t *)aColors, StringByIndex, v7); /*0x66d413*/
      IDA_LOWORD(v9) = *(unsigned short *)Color; /*0x66d41b*/
      IDA_BYTE2(v9) = *(unsigned char *)(Color + 2); /*0x66d425*/
      System_Read((const char *)StringByIndex, (int)&v9); /*0x66d42d*/
      System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)&stru_886380, (int)&FileSystem_TEMPERAT_PAL, 1); /*0x66d444*/
      result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)&stru_886380, (int)&FileSystem_TEMPERAT_PAL, 53); /*0x66d45b*/
    }
    IDA_LOBYTE(result) = 1; /*0x66d46c*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x66d475*/
  }
  return result; /*0x66d46e*/
}
// 0x66D480
int RulesClass::ReadColorAdd()
{
  INIClass *v1; // edi
  int result; // eax
  int v4; // esi
  char *v5; // ebp
  uint8_t *StringByIndex; // eax
  int Coord; // eax
  char *v8; // edx
  char v9; // cl
  bool v10; // cc
  char v11[4]; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]
  INIClass *v13; // [esp+18h] [ebp+4h] BYREF

  v1 = v13; /*0x66d48b*/
  result = INIClass::BinarySearchSection((int)v13, (uint8_t *)aColoradd); /*0x66d494*/
  if ( result ) /*0x66d4a2*/
  {
    result = INIClass::GetKeyCount(v1->__pad_0, (uint8_t *)aColoradd); /*0x66d4ae*/
    v4 = 0; /*0x66d4b3*/
    v12 = result; /*0x66d4b7*/
    if ( result > 0 ) /*0x66d4bb*/
    {
      v5 = (char *)this + 6260; /*0x66d4bd*/
      do /*0x66d511*/
      {
        StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v1->__pad_0, (uint8_t *)aColoradd, v4); /*0x66d4cd*/
        IDA_LOWORD(v13) = 0; /*0x66d4e6*/
        IDA_BYTE2(v13) = 0; /*0x66d4ee*/
        Coord = INIClass::GetCoord(v1, (int)v11, (uint8_t *)aColoradd, StringByIndex, (uint8_t *)&v13); /*0x66d4f2*/
        v8 = v5; /*0x66d4f9*/
        ++v4; /*0x66d4fb*/
        v5 += 3; /*0x66d4fc*/
        v9 = *(unsigned char *)(Coord + 2); /*0x66d502*/
        *(unsigned short *)v8 = *(unsigned short *)Coord; /*0x66d505*/
        result = v12; /*0x66d508*/
        v10 = v4 < v12; /*0x66d50c*/
        v8[2] = v9; /*0x66d50e*/
      }
      while ( v10 ); /*0x66d511*/
    }
    IDA_LOBYTE(result) = 1; /*0x66d516*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x66d521*/
  }
  return result; /*0x66d514*/
}
// 0x672280
int RulesClass::readCrateRules()
{
  int KeyCount; // ebx
  int i; // esi
  uint8_t *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (uint8_t *)aInfantrytypes); /*0x672297*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67229d*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6->__pad_0, (uint8_t *)aInfantrytypes, i); /*0x6722b5*/
    if ( INIClass::GetString( /*0x6722c3*/
           v6,
           (uint8_t *)aInfantrytypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      KeywordType::FindOrCreate2(Destination); /*0x6722d0*/
    }
  }
  return KeyCount > 0; /*0x6722dc*/
}
// 0x6723D0
int RulesClass::readRadiation()
{
  int KeyCount; // ebx
  int i; // esi
  uint8_t *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (uint8_t *)aAircrafttypes); /*0x6723e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6723ed*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6->__pad_0, (uint8_t *)aAircrafttypes, i); /*0x672405*/
    if ( INIClass::GetString( /*0x672413*/
           v6,
           (uint8_t *)aAircrafttypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      KeywordClass::FindOrCreate(Destination); /*0x672420*/
    }
  }
  return KeyCount > 0; /*0x67242c*/
}
// 0x6725F0
int RulesClass::ReadSidesList()
{
  int KeyCount; // ebx
  int i; // esi
  uint8_t *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (uint8_t *)aSuperweapontyp); /*0x672607*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67260d*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6->__pad_0, (uint8_t *)aSuperweapontyp, i); /*0x672625*/
    if ( INIClass::GetString( /*0x672633*/
           v6,
           (uint8_t *)aSuperweapontyp,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      WeaponTypeClass::Process(Destination); /*0x672640*/
    }
  }
  return KeyCount > 0; /*0x67264c*/
}
// 0x67A3C0
int RulesClass::readTerrainTypes(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a3cc*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a3d9*/
  aP1->IsClean(&LargeVisceroid, 4, 0); /*0x67a3dd*/
  result = (int)LargeVisceroid; /*0x67a3e0*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a3e8*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a3f8*/
    result = (int)LargeVisceroid; /*0x67a3fb*/
  }
  return result; /*0x67a404*/
}
// 0x67A730
int RulesClass::readSmudgeTypes()
{
  return (int)this->LargeVisceroid; /*0x67a733*/
}
// 0x67A7C0
int RulesClass::readOverlayTypes()
{
  return (int)this->LargeVisceroid; /*0x67a7c3*/
}
// 0x67A7D0
int RulesClass::readAnimations(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a7dc*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a7e9*/
  aP1->IsClean(&LargeVisceroid, 4, 0); /*0x67a7ed*/
  result = (int)LargeVisceroid; /*0x67a7f0*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a7f8*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a808*/
    result = (int)LargeVisceroid; /*0x67a80b*/
  }
  return result; /*0x67a814*/
}
// 0x67A8A0
int RulesClass::readWarheads()
{
  return (int)this->LargeVisceroid; /*0x67a8a3*/
}
// 0x67A8E0
int RulesClass::readParticleSystems(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a8ec*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a8f9*/
  aP1->IsClean(&LargeVisceroid, 4, 0); /*0x67a8fd*/
  result = (int)LargeVisceroid; /*0x67a900*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a908*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a918*/
    result = (int)LargeVisceroid; /*0x67a91b*/
  }
  return result; /*0x67a924*/
}