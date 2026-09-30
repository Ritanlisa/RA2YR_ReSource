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
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Theme_e4.hpp"

// 0x48ACF0
namespace gamemd {
double RulesClass::GetFiringDistance()
{

  return (double)*((int *)g_abs_8871E0 + 1454) * 0.5; /*0x48ad01*/

}
} // namespace gamemd

// 0x538B30
namespace gamemd {
unsigned int * RulesClass::InitINIChain(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x538b3b*/
  *((unsigned int *)this + 2) = a2; /*0x538b3e*/
  *((unsigned char *)this + 12) = 1; /*0x538b41*/
  *((unsigned char *)this + 13) = 0; /*0x538b45*/
  *this = &vt_VectorClass_CCINIClass; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      *((unsigned int *)this + 1) = a3; /*0x538b58*/
      return this; /*0x538b5e*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x538b6d*/
    *((unsigned char *)this + 13) = 1; /*0x538b70*/
  }
  return this; /*0x538b5d*/

}
} // namespace gamemd
// 0x665650
RulesClass::RulesClass()
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
  VectorClass::Construct(&this->?[3], 0, 0);
  this->? = 10;
  this->? = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?[4], 0, 0);
  IDA_LODWORD(this->?) = 10;
  *(unsigned int *)this->? = 0;
  *(unsigned int *)&this->?[4] = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
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
  VectorClass::Construct(&this->VeteranROF, 0, 0);
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
  IDA_LODWORD(this->CHRONOSK_SHP) = &vt_TypeList_BuildingTypeClass_const;
  VectorClass::BuildingTypeConstructor((unsigned int *)&this->? + 1, 0, 0);
  this->?[2] = 10;
  this->?[1] = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_BuildingTypeClass_const;
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
  *(unsigned int *)&this->TargetSpecialThreatCoefficientDefault = 0;
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
  *(unsigned int *)&this->FireSupress = 10;
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
  IDA_LODWORD(this->?) = 10;
  *(unsigned int *)&this->?[4] = 0;
  this->? = (int)&vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  InfantryTypeVector::Construct2((unsigned int *)&this->? + 1, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_InfantryTypeClass_const;
  VectorClass::Construct(&this->?, 0, 0);
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
  VectorClass::BuildingTypeConstructor(&this->?, 0, 0);
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
  VectorClass::Construct(&this->?, 0, 0);
  *(unsigned int *)this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->? + 1, 0, 0);
  this->?[0] = 10;
  this->?[3] = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_int;
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
  *(unsigned int *)this->? = 10;
  this->?[3] = 0;
  this->?[3] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
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
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  this->?[17] = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  *(unsigned int *)this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->? + 1, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->? + 1, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct((unsigned int *)&this->? + 1, 0, 0);
  this->? = 10;
  this->? = 0;
  IDA_HIDWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  this->? = 10;
  IDA_HIDWORD(this->?) = 0;
  *(unsigned int *)this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 0xA00000000LL;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  this->? = 1000;
  VectorClass::Construct(&this->?, 0, 0);
  *(unsigned int *)&this->? = 10;
  this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  *(unsigned int *)&this->? = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  *(unsigned int *)&this->? = 10;
  *(unsigned int *)&this->? = 0;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->? = 0.0;
  *(unsigned int *)&this->? = &vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  IDA_LODWORD(this->?) = 10;
  IDA_HIDWORD(this->?) = 0;
  this->? = (int)&vt_TypeList_int;
  VectorClass::Construct(&this->?, 0, 0);
  this->? = 10;
  this->?[2] = 0;
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  VectorClass::Construct(this->?, 0, 0);
  *(unsigned int *)&this->? = 10;
  IDA_HIDWORD(this->?) = 0;
  *(unsigned int *)this->? = &vt_TypeList_int;
  DynamicVectorClass::Construct(&this->?, 0, 0);
  IDA_LODWORD(this->?) = &vt_TypeList_int;
  this->?[0] = 0;
  this->?[1] = 1072693248;
  DynamicVectorClass::Construct(&this->?[2], 0, 0);
  this->?[2] = (int)&vt_TypeList_int;
  this->? = 0;
  this->? = 0;
  this->? = 0.0;
  this->? = 1.875;
  *((unsigned int *)this + 1288) = 0;
  *((unsigned int *)this + 1289) = 1072693248;
  *((unsigned int *)this + 1290) = 0;
  *((unsigned int *)this + 1291) = 1071644672;
  *((unsigned int *)this + 1292) = 256;
  *((unsigned int *)this + 1293) = 5;
  *((unsigned int *)this + 1294) = 4;
  *((unsigned int *)this + 1295) = 5;
  *((unsigned long long *)this + 648) = 0x300000004LL;
  *((unsigned long long *)this + 649) = 0x300000002LL;
  *((unsigned int *)this + 1300) = 4;
  *((unsigned int *)this + 1301) = 4;
  *((unsigned int *)this + 1302) = 3;
  *((unsigned int *)this + 1303) = 2;
  *((unsigned int *)this + 1304) = 1;
  *((unsigned int *)this + 1305) = 2;
  *((unsigned int *)this + 1306) = 0;
  *((unsigned int *)this + 1307) = 0;
  *((unsigned int *)this + 1308) = 1;
  *((unsigned int *)this + 1309) = 255;
  *((unsigned int *)this + 1310) = 0x2000;
  *((unsigned int *)this + 1311) = 0;
  *((unsigned int *)this + 1312) = 2500;
  *((unsigned int *)this + 1313) = 10000;
  *((unsigned int *)this + 1314) = 10000;
  *((unsigned int *)this + 1315) = 100;
  *((unsigned int *)this + 1316) = 1;
  *((unsigned int *)this + 1317) = 10;
  *((unsigned int *)this + 1318) = 20;
  *((unsigned int *)this + 1319) = 10;
  *((unsigned int *)this + 1320) = 6;
  *((unsigned int *)this + 1321) = 1;
  *((unsigned int *)this + 1322) = 1;
  *((unsigned int *)this + 1323) = 16842753;
  *((unsigned int *)this + 1324) = 257;
  *((unsigned int *)this + 1325) = 0;
  *((unsigned int *)this + 1326) = 16843009;
  *((unsigned int *)this + 1327) = 1024;
  *((unsigned int *)this + 1328) = 858993459;
  *((unsigned int *)this + 1329) = 1071854387;
  *((unsigned int *)this + 1330) = -343597384;
  *((unsigned int *)this + 1331) = 1067366481;
  *((unsigned int *)this + 1332) = 8;
  *((unsigned long long *)this + 667) = 0x3FD0000000000000LL;
  *((unsigned int *)this + 1336) = 20;
  *((unsigned long long *)this + 669) = 0x4000000000000000LL;
  *((unsigned int *)this + 1340) = 0;
  *((unsigned int *)this + 1341) = 1071644672;
  *((unsigned int *)this + 1342) = 200;
  *((unsigned int *)this + 1343) = 100;
  *((unsigned int *)this + 1344) = 300;
  *((unsigned int *)this + 1346) = -1717986918;
  *((unsigned int *)this + 1347) = 1068079513;
  *((unsigned int *)this + 1348) = 0;
  *((unsigned int *)this + 1349) = 1075052544;
  *((unsigned int *)this + 1350) = -1717986918;
  *((unsigned int *)this + 1351) = 1068079513;
  *((unsigned int *)this + 1352) = 2;
  *((unsigned int *)this + 1354) = -755914244;
  *((unsigned int *)this + 1355) = 1066426957;
  *((unsigned int *)this + 1356) = 1000;
  *((unsigned int *)this + 1422) = 0;
  *((unsigned int *)this + 1423) = 0x40000000;
  *((unsigned int *)this + 1424) = 0;
  *((unsigned int *)this + 1425) = 1074790400;
  *((unsigned int *)this + 1426) = -1717986918;
  *((unsigned int *)this + 1427) = 1068079513;
  *((unsigned int *)this + 1428) = 0;
  *((unsigned int *)this + 1429) = 1072693248;
  *((unsigned int *)this + 1430) = 0;
  *((unsigned int *)this + 1431) = 1072693248;
  *((unsigned int *)this + 1432) = 500;
  *((unsigned int *)this + 1434) = -1717986918;
  *((unsigned int *)this + 1435) = 1070176665;
  *((unsigned int *)this + 1436) = -1717986918;
  *((unsigned int *)this + 1437) = 1069128089;
  *((unsigned int *)this + 1438) = 0;
  *((unsigned int *)this + 1439) = 1076101120;
  *((unsigned int *)this + 1440) = 0;
  *((unsigned int *)this + 1441) = 0x40000000;
  *((unsigned int *)this + 1444) = 0;
  *((unsigned int *)this + 1445) = 1076625408;
  *((unsigned int *)this + 1446) = 0;
  *((unsigned int *)this + 1447) = 1075052544;
  *((unsigned int *)this + 1448) = 0;
  *((unsigned int *)this + 1449) = 1076101120;
  *((unsigned int *)this + 1450) = 0;
  *((unsigned int *)this + 1451) = 0x40000000;
  *((unsigned int *)this + 1452) = 0;
  *((unsigned int *)this + 1453) = 1072693248;
  *((unsigned int *)this + 1454) = 3;
  *((unsigned int *)this + 1455) = 50;
  *((unsigned int *)this + 1456) = 0;
  *((unsigned int *)this + 1457) = 1;
  *((unsigned int *)this + 1458) = 1000;
  *((unsigned int *)this + 1459) = 5;
  *((unsigned int *)this + 1460) = 0;
  *((unsigned int *)this + 1461) = 1070596096;
  *((unsigned int *)this + 1462) = 1;
  *((unsigned int *)this + 1464) = -755914244;
  *((unsigned int *)this + 1465) = 1066426957;
  *((unsigned int *)this + 1466) = -755914244;
  *((unsigned int *)this + 1467) = 1066426957;
  *((unsigned int *)this + 1468) = -755914244;
  *((unsigned int *)this + 1469) = 1066426957;
  *((unsigned int *)this + 1470) = 0;
  *((unsigned int *)this + 1471) = 1072693248;
  *((unsigned int *)this + 1472) = 0;
  *((unsigned int *)this + 1473) = 1071644672;
  *((unsigned int *)this + 1474) = 0;
  *((unsigned int *)this + 1475) = 1071644672;
  *((unsigned int *)this + 1476) = -309237645;
  *((unsigned int *)this + 1477) = 1068842876;
  *((unsigned int *)this + 1478) = 640;
  *((unsigned int *)this + 1479) = 512;
  *((unsigned int *)this + 1480) = 512;
  *((unsigned int *)this + 1482) = 384;
  *((unsigned int *)this + 1483) = 640;
  *((unsigned int *)this + 1484) = 512;
  *((unsigned int *)this + 1485) = 256;
  *((unsigned int *)this + 1486) = 0;
  *((unsigned int *)this + 1487) = 1071644672;
  *((unsigned int *)this + 1488) = 1000;
  *((unsigned int *)this + 1490) = 0;
  *((unsigned int *)this + 1491) = 1072693248;
  *((unsigned int *)this + 1492) = -343597384;
  *((unsigned int *)this + 1493) = 1067366481;
  *((unsigned int *)this + 1494) = 1000;
  *((unsigned int *)this + 1496) = -755914244;
  *((unsigned int *)this + 1497) = 1066426957;
  *((unsigned int *)this + 1498) = 60;
  *((unsigned int *)this + 1500) = 0;
  *((unsigned int *)this + 1501) = 1070596096;
  *((unsigned int *)this + 1502) = 1536;
  *((unsigned int *)this + 1503) = 0x2000;
  *((unsigned int *)this + 1504) = 1280;
  *((unsigned int *)this + 1505) = 4096;
  *((unsigned int *)this + 1506) = 20480;
  *((unsigned int *)this + 1507) = 768;
  *((unsigned int *)this + 1508) = 0x7FFFFFFF;
  *((unsigned int *)this + 1509) = 250;
  *((unsigned long long *)this + 755) = 0x384000000C8LL;
  *((unsigned int *)this + 1512) = 90;
  *((unsigned int *)this + 1513) = 10;
  *((unsigned long long *)this + 757) = 0x30000000ALL;
  *((unsigned char *)this + 6064) = 1;
  *((unsigned int *)this + 1517) = 0;
  *((unsigned int *)this + 1518) = 10;
  *((unsigned int *)this + 1519) = 400;
  *((unsigned int *)this + 1520) = 800;
  *((unsigned int *)this + 1521) = 50;
  *((unsigned char *)this + 6088) = 0;
  *((unsigned int *)this + 1523) = 100;
  *((unsigned int *)this + 1524) = 0;
  *((unsigned int *)this + 1525) = 0;
  *((unsigned int *)this + 1526) = 0;
  *((unsigned int *)this + 1527) = 0;
  *((unsigned int *)this + 1528) = 16842753;
  *((unsigned int *)this + 1529) = 16842752;
  *((unsigned int *)this + 1530) = 0;
  *((unsigned int *)this + 1531) = 0x10000;
  *((unsigned int *)this + 1532) = 16843008;
  *((unsigned int *)this + 1533) = 0;
  *((unsigned int *)this + 1534) = 1065353216;
  *((unsigned int *)this + 1535) = 0;
  *((unsigned int *)this + 1536) = 300;
  *((unsigned int *)this + 1537) = 0;
  *((unsigned int *)this + 1538) = 0;
  *((unsigned int *)this + 1539) = 0;
  *((unsigned int *)this + 1540) = 0;
  *((unsigned int *)this + 1541) = 0;
  *((unsigned int *)this + 1542) = 0;
  *((unsigned int *)this + 1543) = 0;
  *((unsigned int *)this + 1544) = 0;
  *((unsigned int *)this + 1545) = 0;
  *((unsigned int *)this + 1546) = 0;
  *((unsigned int *)this + 1547) = 0;
  *((unsigned char *)this + 6192) = 0;
  *((unsigned char *)this + 6193) = 0;
  *((unsigned char *)this + 6194) = 0;
  *((unsigned int *)this + 1549) = 0;
  *((unsigned int *)this + 1550) = 0;
  *((unsigned int *)this + 1552) = 0;
  *((unsigned int *)this + 1553) = 1072693248;
  *((unsigned int *)this + 1554) = 0;
  *((unsigned int *)this + 1555) = 0;
  *((unsigned char *)this + 6224) = 0;
  *((unsigned int *)this + 1558) = 0;
  *((unsigned int *)this + 1559) = 1071644672;
  *((unsigned int *)this + 1560) = 0xFFFFFF;
  *((unsigned int *)this + 1561) = 0;
  *((unsigned int *)this + 1562) = 0;
  v3 = (char *)this + 6260;
  *((unsigned int *)this + 1563) = 50;
  *((unsigned int *)this + 1564) = 0;
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
  *((unsigned int *)this + 1577) = 0;
  *((unsigned int *)this + 1578) = 0;
  *((unsigned int *)this + 1579) = 0;
  *((unsigned int *)this + 1580) = 0;
  *((unsigned int *)this + 1581) = 1065353216;
  *((unsigned int *)this + 1582) = 1065353216;
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
  v6 = 16;
  do
  {
    v7 = v3;
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

  v2 = &this->q13F0[2]; /*0x667a3b*/
  *v2 = (int)&vt_VectorClass_int; /*0x667a41*/
  VectorClass::Destroy((int)v2); /*0x667a43*/
  IDA_LODWORD(this->q13C8) = &vt_VectorClass_int; /*0x667a4e*/
  VectorClass::Destroy((int)&this->q13C8); /*0x667a50*/
  *(unsigned int *)this->q13AC = &vt_VectorClass_int; /*0x667a5b*/
  VectorClass::Destroy((int)this->q13AC); /*0x667a5d*/
  IDA_LODWORD(this->q1390) = &vt_VectorClass_int; /*0x667a68*/
  VectorClass::Destroy((int)&this->q1390); /*0x667a6a*/
  this->q1374 = (int)&vt_VectorClass_int; /*0x667a75*/
  VectorClass::Destroy((int)&this->q1374); /*0x667a77*/
  *(unsigned int *)&this->q1358 = &vt_VectorClass_int; /*0x667a82*/
  VectorClass::Destroy((int)&this->q1358); /*0x667a84*/
  IDA_LODWORD(this->q133C) = &vt_VectorClass_int; /*0x667a8f*/
  VectorClass::Destroy((int)&this->q133C); /*0x667a91*/
  this->q1320 = (int)&vt_VectorClass_int; /*0x667a9c*/
  VectorClass::Destroy((int)&this->q1320); /*0x667a9e*/
  this->q1304 = (int)&vt_VectorClass_int; /*0x667aa9*/
  VectorClass::Destroy((int)&this->q1304); /*0x667aab*/
  this->q12E4 = (int)&vt_VectorClass_int; /*0x667ab6*/
  VectorClass::Destroy((int)&this->q12E4); /*0x667ab8*/
  IDA_LODWORD(this->q12C8) = &vt_VectorClass_int; /*0x667ac3*/
  VectorClass::Destroy((int)&this->q12C8); /*0x667ac5*/
  *(unsigned int *)this->q12AC = &vt_VectorClass_int; /*0x667ad0*/
  VectorClass::Destroy((int)this->q12AC); /*0x667ad2*/
  this->q1290 = (int)&vt_VectorClass_int; /*0x667add*/
  VectorClass::Destroy((int)&this->q1290); /*0x667adf*/
  IDA_HIDWORD(this->q1274) = &vt_VectorClass_int; /*0x667aea*/
  VectorClass::Destroy((int)&this->q1274 + 4); /*0x667aec*/
  IDA_LODWORD(this->q1258) = &vt_VectorClass_int; /*0x667af7*/
  VectorClass::Destroy((int)&this->q1258); /*0x667af9*/
  IDA_HIDWORD(this->q123C) = &vt_VectorClass_int; /*0x667b04*/
  VectorClass::Destroy((int)&this->q123C + 4); /*0x667b06*/
  this->q1220 = (int)&vt_VectorClass_int; /*0x667b11*/
  VectorClass::Destroy((int)&this->q1220); /*0x667b13*/
  IDA_HIDWORD(this->q1204) = &vt_VectorClass_int; /*0x667b1e*/
  VectorClass::Destroy((int)&this->q1204 + 4); /*0x667b20*/
  IDA_LODWORD(this->q11E8) = &vt_VectorClass_int; /*0x667b2b*/
  VectorClass::Destroy((int)&this->q11E8); /*0x667b2d*/
  *(unsigned int *)this->q11CC = &vt_VectorClass_int; /*0x667b38*/
  VectorClass::Destroy((int)this->q11CC); /*0x667b3a*/
  IDA_LODWORD(this->q11B0) = &vt_VectorClass_int; /*0x667b45*/
  VectorClass::Destroy((int)&this->q11B0); /*0x667b47*/
  this->q1194[17] = (int)&vt_VectorClass_int; /*0x667b52*/
  VectorClass::Destroy((int)&this->q1194[17]); /*0x667b54*/
  this->q1174[9] = (int)&vt_VectorClass_int; /*0x667b5f*/
  VectorClass::Destroy((int)&this->q1174[9]); /*0x667b61*/
  this->q1158[2] = (int)&vt_VectorClass_int; /*0x667b6c*/
  VectorClass::Destroy((int)&this->q1158[2]); /*0x667b6e*/
  this->qFF8 = (int)&vt_VectorClass_TerrainTypeClass_const; /*0x667b79*/
  TypeList_cptr_TerrainTypeClass::TryFreeAndClear((int)&this->qFF8); /*0x667b7f*/
  IDA_LODWORD(this->qF20) = &vt_VectorClass_int; /*0x667b8a*/
  VectorClass::Destroy((int)&this->qF20); /*0x667b8c*/
  this->qF04[3] = (int)&vt_VectorClass_int; /*0x667b97*/
  VectorClass::Destroy((int)&this->qF04[3]); /*0x667b99*/
  this->qEE8[0] = (int)&vt_VectorClass_int; /*0x667ba4*/
  VectorClass::Destroy((int)this->qEE8); /*0x667ba6*/
  this->qEC4[3] = (int)&vt_VectorClass_int; /*0x667bb1*/
  VectorClass::Destroy((int)&this->qEC4[3]); /*0x667bb3*/
  this->qEA0[2] = (int)&vt_VectorClass_int; /*0x667bbe*/
  VectorClass::Destroy((int)&this->qEA0[2]); /*0x667bc0*/
  this->qE84[0] = (int)&vt_VectorClass_int; /*0x667bcb*/
  VectorClass::Destroy((int)this->qE84); /*0x667bcd*/
  this->qE68[1] = (int)&vt_VectorClass_int; /*0x667bd8*/
  VectorClass::Destroy((int)&this->qE68[1]); /*0x667bda*/
  this->qE4C[2] = (int)&vt_VectorClass_int; /*0x667be5*/
  VectorClass::Destroy((int)&this->qE4C[2]); /*0x667be7*/
  this->qE2C[2] = (int)&vt_VectorClass_int; /*0x667bf2*/
  VectorClass::Destroy((int)&this->qE2C[2]); /*0x667bf4*/
  this->qE10[3] = (int)&vt_VectorClass_int; /*0x667bff*/
  VectorClass::Destroy((int)&this->qE10[3]); /*0x667c01*/
  this->qDD4[0] = (int)&vt_VectorClass_int; /*0x667c0c*/
  VectorClass::Destroy((int)this->qDD4); /*0x667c0e*/
  this->qDB8[2] = (int)&vt_VectorClass_int; /*0x667c19*/
  VectorClass::Destroy((int)&this->qDB8[2]); /*0x667c1b*/
  IDA_HIDWORD(this->qD9C) = &vt_VectorClass_int; /*0x667c26*/
  VectorClass::Destroy((int)&this->qD9C + 4); /*0x667c28*/
  this->qD80 = (int)&vt_VectorClass_int; /*0x667c33*/
  VectorClass::Destroy((int)&this->qD80); /*0x667c35*/
  this->qD38 = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667c45*/
  DynamicVectorClass::Destroy((int)&this->qD38); /*0x667c47*/
  *(unsigned int *)this->qD1C = &vt_VectorClass_UnitTypeClass_const; /*0x667c52*/
  Vector::Destructor((int)this->qD1C); /*0x667c58*/
  IDA_LODWORD(this->qD00) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c63*/
  Vector::Cleanup((int)&this->qD00); /*0x667c69*/
  IDA_HIDWORD(this->qCE4) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c74*/
  Vector::Cleanup((int)&this->qCE4 + 4); /*0x667c7a*/
  IDA_LODWORD(this->qCC8) = &vt_VectorClass_int; /*0x667c85*/
  VectorClass::Destroy((int)&this->qCC8); /*0x667c87*/
  IDA_HIDWORD(this->qCAC) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c92*/
  Vector::Cleanup((int)&this->qCAC + 4); /*0x667c98*/
  IDA_LODWORD(this->qC90) = &vt_VectorClass_int; /*0x667ca3*/
  VectorClass::Destroy((int)&this->qC90); /*0x667ca5*/
  this->qC74 = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cb0*/
  Vector::Cleanup((int)&this->qC74); /*0x667cb6*/
  this->qC58 = (int)&vt_VectorClass_int; /*0x667cc1*/
  VectorClass::Destroy((int)&this->qC58); /*0x667cc3*/
  this->__pad_C3C = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cce*/
  Vector::Cleanup((int)&this->__pad_C3C); /*0x667cd4*/
  this->qC20 = (int)&vt_VectorClass_int; /*0x667cdf*/
  VectorClass::Destroy((int)&this->qC20); /*0x667ce1*/
  this->qC04 = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cec*/
  Vector::Cleanup((int)&this->qC04); /*0x667cf2*/
  this->qBC0 = (int)&vt_VectorClass_AnimTypeClass_const; /*0x667cfd*/
  DynamicVectorClass::Destroy_Alt((int)&this->qBC0); /*0x667d03*/
  IDA_LODWORD(this->qB90) = &vt_VectorClass_AnimTypeClass_const; /*0x667d0e*/
  DynamicVectorClass::Destroy_Alt((int)&this->qB90); /*0x667d14*/
  this->qB74[2] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x667d1f*/
  DynamicVectorClass::Destroy_Alt((int)&this->qB74[2]); /*0x667d25*/
  IDA_LODWORD(this->qB58) = &vt_VectorClass_AircraftTypeClass_const; /*0x667d30*/
  VectorClass::ClearAndFree4((int)&this->qB58); /*0x667d36*/
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
  if ( v3 && IDA_BYTE1(this->Aircraft[3]) ) /*0x667d96*/
  {
    RA2_OPDEL(v3); /*0x667d9f*/
    this->Aircraft[1] = 0; /*0x667da7*/
  }
  IDA_BYTE1(this->Aircraft[3]) = 0; /*0x667dad*/
  this->Aircraft[2] = 0; /*0x667db3*/
  HarvesterTooFarDistance = (void *)this->Production; /*0x667db9*/
  this->SuperWeapons = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667dbf*/
  if ( HarvesterTooFarDistance && IDA_BYTE1(this->RepairSell[0]) ) /*0x667dc9*/
  {
    RA2_OPDEL(HarvesterTooFarDistance); /*0x667dd2*/
    this->Production = 0; /*0x667dda*/
  }
  IDA_BYTE1(this->RepairSell[0]) = 0; /*0x667de0*/
  this->GuardArea = 0; /*0x667de6*/
  SovietDisguise = (void *)this->BaseBias; /*0x667dec*/
  this->qA50 = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667df2*/
  if ( SovietDisguise && IDA_BYTE1(this->ExpSpread) ) /*0x667dfc*/
  {
    RA2_OPDEL(SovietDisguise); /*0x667e05*/
    this->BaseBias = 0; /*0x667e0d*/
  }
  IDA_BYTE1(this->ExpSpread) = 0; /*0x667e13*/
  this->qA58 = 0; /*0x667e19*/
  v6 = (void *)this->InfantryBaseMult[3]; /*0x667e1f*/
  this->InfantryBaseMult[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e25*/
  if ( v6 && IDA_BYTE1(this->PatrolScan[1]) ) /*0x667e2f*/
  {
    RA2_OPDEL(v6); /*0x667e38*/
    this->InfantryBaseMult[3] = 0; /*0x667e40*/
  }
  IDA_BYTE1(this->PatrolScan[1]) = 0; /*0x667e46*/
  this->PatrolScan[0] = 0; /*0x667e4c*/
  v7 = (void *)this->qA1C[0]; /*0x667e52*/
  this->RefineryRatio[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e58*/
  if ( v7 && IDA_BYTE1(this->qA25[2]) ) /*0x667e62*/
  {
    RA2_OPDEL(v7); /*0x667e6b*/
    this->qA1C[0] = 0; /*0x667e73*/
  }
  IDA_BYTE1(this->qA25[2]) = 0; /*0x667e79*/
  this->BaseSizeAdd[1] = 0; /*0x667e7f*/
  v8 = (void *)this->WarRatio[1]; /*0x667e85*/
  this->WarRatio[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e8b*/
  if ( v8 && IDA_BYTE1(this->WarRatio[3]) ) /*0x667e95*/
  {
    RA2_OPDEL(v8); /*0x667e9e*/
    this->WarRatio[1] = 0; /*0x667ea6*/
  }
  IDA_BYTE1(this->WarRatio[3]) = 0; /*0x667eac*/
  this->WarRatio[2] = 0; /*0x667eb2*/
  v9 = (void *)this->AARatio[2]; /*0x667eb8*/
  this->TeslaLimit[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ebe*/
  if ( v9 && IDA_BYTE1(this->AALimit[0]) ) /*0x667ec8*/
  {
    RA2_OPDEL(v9); /*0x667ed1*/
    this->AARatio[2] = 0; /*0x667ed9*/
  }
  IDA_BYTE1(this->AALimit[0]) = 0; /*0x667edf*/
  this->q9E8[3] = 0; /*0x667ee5*/
  v10 = (void *)this->AirstripLimit[3]; /*0x667eeb*/
  this->q9C4[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ef1*/
  if ( v10 && IDA_BYTE1(this->HelipadRatio[1]) ) /*0x667efb*/
  {
    RA2_OPDEL(v10); /*0x667f04*/
    this->AirstripLimit[3] = 0; /*0x667f0c*/
  }
  IDA_BYTE1(this->HelipadRatio[1]) = 0; /*0x667f12*/
  this->HelipadRatio[0] = 0; /*0x667f18*/
  v11 = (void *)this->q9AC[0]; /*0x667f1e*/
  this->AttackInterval[3] = (int)&vt_VectorClass_int; /*0x667f24*/
  if ( v11 && IDA_BYTE1(this->q9B5[2]) ) /*0x667f2e*/
  {
    RA2_OPDEL(v11); /*0x667f37*/
    this->q9AC[0] = 0; /*0x667f3f*/
  }
  IDA_BYTE1(this->q9B5[2]) = 0; /*0x667f45*/
  this->AttackDelay[1] = 0; /*0x667f4b*/
  v12 = (void *)this->TargetDistanceCoefficientDefault[1]; /*0x667f51*/
  this->q98C[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667f57*/
  if ( v12 && IDA_BYTE1(this->q999[3]) ) /*0x667f61*/
  {
    RA2_OPDEL(v12); /*0x667f6a*/
    this->TargetDistanceCoefficientDefault[1] = 0; /*0x667f72*/
  }
  IDA_BYTE1(this->q999[3]) = 0; /*0x667f78*/
  this->q994[2] = 0; /*0x667f7e*/
  ChronoDelay = (void *)this->q974; /*0x667f84*/
  this->MyEffectivenessCoefficientDefault = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667f8a*/
  if ( ChronoDelay && IDA_BYTE1(this->q97D) ) /*0x667f94*/
  {
    RA2_OPDEL(ChronoDelay); /*0x667f9d*/
    this->q974 = 0; /*0x667fa5*/
  }
  IDA_BYTE1(this->q97D) = 0; /*0x667fab*/
  this->TargetEffectivenessCoefficientDefault = 0; /*0x667fb1*/
  v14 = (void *)this->q958[1]; /*0x667fb7*/
  this->q954[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667fbd*/
  if ( v14 && IDA_BYTE1(this->q961[3]) ) /*0x667fc7*/
  {
    RA2_OPDEL(v14); /*0x667fd0*/
    this->q958[1] = 0; /*0x667fd8*/
  }
  IDA_BYTE1(this->q961[3]) = 0; /*0x667fde*/
  this->q95C[2] = 0; /*0x667fe4*/
  v15 = (void *)this->CMisl[3]; /*0x667fea*/
  this->q938[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ff0*/
  if ( v15 && IDA_BYTE1(this->q945) ) /*0x667ffa*/
  {
    RA2_OPDEL(v15); /*0x668003*/
    this->CMisl[3] = 0; /*0x66800b*/
  }
  IDA_BYTE1(this->q945) = 0; /*0x668011*/
  this->q940 = 0; /*0x668017*/
  v16 = (void *)this->q920[0]; /*0x66801d*/
  this->q91C[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668023*/
  if ( v16 && IDA_BYTE1(this->q929[2]) ) /*0x66802d*/
  {
    RA2_OPDEL(v16); /*0x668036*/
    this->q920[0] = 0; /*0x66803e*/
  }
  IDA_BYTE1(this->q929[2]) = 0; /*0x668044*/
  this->q924[1] = 0; /*0x66804a*/
  v17 = (void *)this->q904[1]; /*0x668050*/
  this->q900[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668056*/
  if ( v17 && IDA_BYTE1(this->q90D[3]) ) /*0x668060*/
  {
    RA2_OPDEL(v17); /*0x668069*/
    this->q904[1] = 0; /*0x668071*/
  }
  IDA_BYTE1(this->q90D[3]) = 0; /*0x668077*/
  this->DMisl[2] = 0; /*0x66807d*/
  ComputerBaseDefenseResponse = (void *)this->q8E8; /*0x668083*/
  IDA_HIDWORD(this->q8E4) = &vt_VectorClass_BuildingTypeClass_const; /*0x668089*/
  if ( ComputerBaseDefenseResponse && IDA_BYTE1(this->q8F1[0]) ) /*0x668093*/
  {
    RA2_OPDEL(ComputerBaseDefenseResponse); /*0x66809c*/
    this->q8E8 = 0; /*0x6680a4*/
  }
  IDA_BYTE1(this->q8F1[0]) = 0; /*0x6680aa*/
  this->q8EC = 0; /*0x6680b0*/
  GDIWallDefense_high = (void *)IDA_HIDWORD(this->CHRONOSK_SHP); /*0x6680b6*/
  IDA_LODWORD(this->CHRONOSK_SHP) = &vt_VectorClass_BuildingTypeClass_const; /*0x6680bc*/
  if ( GDIWallDefense_high && BYTE5(this->PsychicRevealRadius) ) /*0x6680c6*/
  {
    RA2_OPDEL(GDIWallDefense_high); /*0x6680cf*/
    IDA_HIDWORD(this->CHRONOSK_SHP) = 0; /*0x6680d7*/
  }
  BYTE5(this->PsychicRevealRadius) = 0; /*0x6680dd*/
  IDA_LODWORD(this->PsychicRevealRadius) = 0; /*0x6680e3*/
  v20 = (void *)this->IvanWarhead[2]; /*0x6680e9*/
  this->IvanWarhead[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x6680ef*/
  if ( v20 && IDA_BYTE1(this->CanDetonateTimeBomb[0]) ) /*0x6680f9*/
  {
    RA2_OPDEL(v20); /*0x668102*/
    this->IvanWarhead[2] = 0; /*0x66810a*/
  }
  IDA_BYTE1(this->CanDetonateTimeBomb[0]) = 0; /*0x668110*/
  this->IvanWarhead[3] = 0; /*0x668116*/
  v21 = (void *)this->NukeProjectile[3]; /*0x66811c*/
  this->NukeProjectile[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668122*/
  if ( v21 && IDA_BYTE1(this->C4Warhead[1]) ) /*0x66812c*/
  {
    RA2_OPDEL(v21); /*0x668135*/
    this->NukeProjectile[3] = 0; /*0x66813d*/
  }
  IDA_BYTE1(this->C4Warhead[1]) = 0; /*0x668143*/
  this->C4Warhead[0] = 0; /*0x668149*/
  v22 = (void *)this->AISafeDistance[3]; /*0x66814f*/
  this->AISafeDistance[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668155*/
  if ( v22 && IDA_BYTE1(this->Engineer[1]) ) /*0x66815f*/
  {
    RA2_OPDEL(v22); /*0x668168*/
    this->AISafeDistance[3] = 0; /*0x668170*/
  }
  IDA_BYTE1(this->Engineer[1]) = 0; /*0x668176*/
  this->Engineer[0] = 0; /*0x66817c*/
  v23 = (void *)this->SpyPowerBlackout[0]; /*0x668182*/
  this->ChronoRangeMinimum[3] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x66818f*/
  if ( v23 && IDA_BYTE1(this->SpyPowerBlackout[2]) ) /*0x668197*/
  {
    RA2_OPDEL(v23); /*0x6681a0*/
    this->SpyPowerBlackout[0] = 0; /*0x6681a8*/
  }
  IDA_BYTE1(this->SpyPowerBlackout[2]) = 0; /*0x6681ae*/
  this->SpyPowerBlackout[1] = 0; /*0x6681b4*/
  v24 = (void *)this->ChronoReinfDelay[1]; /*0x6681ba*/
  this->ChronoReinfDelay[0] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x6681c0*/
  if ( v24 && IDA_BYTE1(this->ChronoReinfDelay[3]) ) /*0x6681ca*/
  {
    RA2_OPDEL(v24); /*0x6681d3*/
    this->ChronoReinfDelay[1] = 0; /*0x6681db*/
  }
  IDA_BYTE1(this->ChronoReinfDelay[3]) = 0; /*0x6681e1*/
  this->ChronoReinfDelay[2] = 0; /*0x6681e7*/
  v25 = (void *)this->BombParachute[2]; /*0x6681ed*/
  this->BombParachute[1] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x6681f3*/
  if ( v25 && IDA_BYTE1(this->LargeFire[0]) ) /*0x6681fd*/
  {
    RA2_OPDEL(v25); /*0x668206*/
    this->BombParachute[2] = 0; /*0x66820e*/
  }
  IDA_BYTE1(this->LargeFire[0]) = 0; /*0x668214*/
  this->BombParachute[3] = 0; /*0x66821a*/
  v26 = (void *)this->BaseUnit[3]; /*0x668220*/
  this->BaseUnit[2] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x668226*/
  if ( v26 && IDA_BYTE1(this->TreeFire[1]) ) /*0x668230*/
  {
    RA2_OPDEL(v26); /*0x668239*/
    this->BaseUnit[3] = 0; /*0x668241*/
  }
  IDA_BYTE1(this->TreeFire[1]) = 0; /*0x668247*/
  this->TreeFire[0] = 0; /*0x66824d*/
  v27 = (void *)this->GDIBaseDefenseCoefficient[0]; /*0x668253*/
  this->GDIWallDefenseCoefficient[3] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x668259*/
  if ( v27 && IDA_BYTE1(this->GDIBaseDefenseCoefficient[2]) ) /*0x668263*/
  {
    RA2_OPDEL(v27); /*0x66826c*/
    this->GDIBaseDefenseCoefficient[0] = 0; /*0x668274*/
  }
  IDA_BYTE1(this->GDIBaseDefenseCoefficient[2]) = 0; /*0x66827a*/
  this->GDIBaseDefenseCoefficient[1] = 0; /*0x668280*/
  v28 = (void *)this->q738[1]; /*0x668286*/
  this->q734[0] = (int)&vt_VectorClass_int; /*0x66828c*/
  if ( v28 && IDA_BYTE1(this->q741[3]) ) /*0x668296*/
  {
    RA2_OPDEL(v28); /*0x66829f*/
    this->q738[1] = 0; /*0x6682a7*/
  }
  IDA_BYTE1(this->q741[3]) = 0; /*0x6682ad*/
  this->q73C[2] = 0; /*0x6682b3*/
  CameraRange = (void *)this->ChuteSound; /*0x6682b9*/
  this->HealCrateSound = (int)&vt_VectorClass_int; /*0x6682bf*/
  if ( CameraRange && IDA_BYTE1(this->GuardSound) ) /*0x6682c9*/
  {
    RA2_OPDEL(CameraRange); /*0x6682d2*/
    this->ChuteSound = 0; /*0x6682da*/
  }
  IDA_BYTE1(this->GuardSound) = 0; /*0x6682e0*/
  this->StopSound = 0; /*0x6682e6*/
  StopSound = (void *)this->q64C; /*0x6682ec*/
  this->VeteranROF = (int)&vt_VectorClass_int; /*0x6682f2*/
  if ( StopSound && IDA_BYTE1(this->q655) ) /*0x6682fc*/
  {
    RA2_OPDEL(StopSound); /*0x668305*/
    this->q64C = 0; /*0x66830d*/
  }
  IDA_BYTE1(this->q655) = 0; /*0x668313*/
  this->VeteranCap = 0; /*0x668319*/
  v31 = (void *)this->RevealTriggerRadius[0]; /*0x66831f*/
  this->CloakingStages = (int)&vt_VectorClass_VoxelAnimTypeClass_const; /*0x66832c*/
  if ( v31 && IDA_BYTE1(this->RevealTriggerRadius[2]) ) /*0x668334*/
  {
    RA2_OPDEL(v31); /*0x66833d*/
    this->RevealTriggerRadius[0] = 0; /*0x668345*/
  }
  IDA_BYTE1(this->RevealTriggerRadius[2]) = 0; /*0x66834b*/
  this->RevealTriggerRadius[1] = 0; /*0x668351*/
  v32 = (void *)this->q478[7]; /*0x668357*/
  this->q474[6] = (int)&vt_VectorClass_int; /*0x66835d*/
  if ( v32 && IDA_BYTE1(this->q481[9]) ) /*0x668367*/
  {
    RA2_OPDEL(v32); /*0x668370*/
    this->q478[7] = 0; /*0x668378*/
  }
  IDA_BYTE1(this->q481[9]) = 0; /*0x66837e*/
  this->q47C[8] = 0; /*0x668384*/
  v33 = (void *)this->q45C[0]; /*0x66838a*/
  this->q458[13] = (int)&vt_VectorClass_int; /*0x668390*/
  if ( v33 && IDA_BYTE1(this->q465[2]) ) /*0x66839a*/
  {
    RA2_OPDEL(v33); /*0x6683a3*/
    this->q45C[0] = 0; /*0x6683ab*/
  }
  IDA_BYTE1(this->q465[2]) = 0; /*0x6683b1*/
  this->q460[1] = 0; /*0x6683b7*/
  v34 = (void *)this->q440[7]; /*0x6683bd*/
  this->q43C[6] = (int)&vt_VectorClass_int; /*0x6683c3*/
  if ( v34 && IDA_BYTE1(this->q449[9]) ) /*0x6683cd*/
  {
    RA2_OPDEL(v34); /*0x6683d6*/
    this->q440[7] = 0; /*0x6683de*/
  }
  IDA_BYTE1(this->q449[9]) = 0; /*0x6683e4*/
  this->q444[8] = 0; /*0x6683ea*/
  PrismSupportHeight = (void *)this->q3E8; /*0x6683f0*/
  this->q3E4 = (int)&vt_VectorClass_int; /*0x6683f6*/
  if ( PrismSupportHeight && IDA_BYTE1(this->q3F1[1]) ) /*0x668400*/
  {
    RA2_OPDEL(PrismSupportHeight); /*0x668409*/
    this->q3E8 = 0; /*0x668411*/
  }
  IDA_BYTE1(this->q3F1[1]) = 0; /*0x668417*/
  this->q3EC[0] = 0; /*0x66841d*/
  IonCannonDamage = (void *)this->q3CC; /*0x668423*/
  this->q3C8[3] = (int)&vt_VectorClass_int; /*0x668429*/
  if ( IonCannonDamage && IDA_BYTE1(this->q3D5) ) /*0x668433*/
  {
    RA2_OPDEL(IonCannonDamage); /*0x66843c*/
    this->q3CC = 0; /*0x668444*/
  }
  IDA_BYTE1(this->q3D5) = 0; /*0x66844a*/
  this->q3D0 = 0; /*0x668450*/
  v37 = (void *)this->q3B0[1]; /*0x668456*/
  this->q3AC[0] = (int)&vt_VectorClass_int; /*0x66845c*/
  if ( v37 && IDA_BYTE1(this->q3B9[3]) ) /*0x668466*/
  {
    RA2_OPDEL(v37); /*0x66846f*/
    this->q3B0[1] = 0; /*0x668477*/
  }
  IDA_BYTE1(this->q3B9[3]) = 0; /*0x66847d*/
  this->q3B4[2] = 0; /*0x668483*/
  WobblesPerSecond_high = (void *)IDA_HIDWORD(this->q394); /*0x668489*/
  IDA_LODWORD(this->q390) = &vt_VectorClass_int; /*0x66848f*/
  if ( WobblesPerSecond_high && IDA_BYTE1(this->q39D[0]) ) /*0x668499*/
  {
    RA2_OPDEL(WobblesPerSecond_high); /*0x6684a2*/
    IDA_HIDWORD(this->q394) = 0; /*0x6684aa*/
  }
  IDA_BYTE1(this->q39D[0]) = 0; /*0x6684b0*/
  this->q398 = 0; /*0x6684b6*/
  Climb = (void *)this->q378; /*0x6684bc*/
  *(unsigned int *)&this->q374[4] = &vt_VectorClass_int; /*0x6684c2*/
  if ( Climb && IDA_BYTE1(this->q381) ) /*0x6684cc*/
  {
    RA2_OPDEL(Climb); /*0x6684d5*/
    IDA_LODWORD(this->q378) = 0; /*0x6684dd*/
  }
  IDA_BYTE1(this->q381) = 0; /*0x6684e3*/
  IDA_HIDWORD(this->q37C) = 0; /*0x6684e9*/
  PrerequisiteProcAlternate = (void *)this->q35C; /*0x6684ef*/
  this->q358[3] = (int)&vt_VectorClass_int; /*0x6684f5*/
  if ( PrerequisiteProcAlternate && IDA_BYTE1(this->q365) ) /*0x6684ff*/
  {
    RA2_OPDEL(PrerequisiteProcAlternate); /*0x668508*/
    this->q35C = 0; /*0x668510*/
  }
  IDA_BYTE1(this->q365) = 0; /*0x668516*/
  this->q360 = 0; /*0x66851c*/
  WarpIn = (void *)this->q2DC; /*0x668522*/
  this->q2D8 = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66852f*/
  if ( WarpIn && IDA_BYTE1(this->q2E5) ) /*0x668537*/
  {
    RA2_OPDEL(WarpIn); /*0x668540*/
    this->q2DC = 0; /*0x668548*/
  }
  IDA_BYTE1(this->q2E5) = 0; /*0x66854e*/
  this->q2E0 = 0; /*0x668554*/
  DrainAnimationType = (void *)this->q2C0; /*0x66855a*/
  this->q2BC = (int)&vt_VectorClass_AnimTypeClass_const; /*0x668560*/
  if ( DrainAnimationType && IDA_BYTE1(this->q2C9) ) /*0x66856a*/
  {
    RA2_OPDEL(DrainAnimationType); /*0x668573*/
    this->q2C0 = 0; /*0x66857b*/
  }
  IDA_BYTE1(this->q2C9) = 0; /*0x668581*/
  this->q2C4 = 0; /*0x668587*/
  DominatorSecondAnim = (void *)this->q2A4; /*0x66858d*/
  this->q2A0 = (int)&vt_VectorClass_AnimTypeClass_const; /*0x668593*/
  if ( DominatorSecondAnim && IDA_BYTE1(this->q2AD) ) /*0x66859d*/
  {
    RA2_OPDEL(DominatorSecondAnim); /*0x6685a6*/
    this->q2A4 = 0; /*0x6685ae*/
  }
  IDA_BYTE1(this->q2AD) = 0; /*0x6685b4*/
  this->q2A8 = 0; /*0x6685ba*/
  GUIOpenSound = (void *)this->CrateFireSound; /*0x6685c0*/
  this->CrateRevealSound = (int)&vt_VectorClass_AnimTypeClass_const; /*0x6685c6*/
  if ( GUIOpenSound && IDA_BYTE1(this->CrateSpeedSound) ) /*0x6685d0*/
  {
    RA2_OPDEL(GUIOpenSound); /*0x6685d9*/
    this->CrateFireSound = 0; /*0x6685e1*/
  }
  IDA_BYTE1(this->CrateSpeedSound) = 0; /*0x6685e7*/
  this->CrateArmourSound = 0; /*0x6685ed*/
  CreateUnitSound = (void *)this->DefaultChronoSound; /*0x6685f3*/
  this->PlaceBeaconSound = (int)&vt_VectorClass_AnimTypeClass_const; /*0x6685f9*/
  if ( CreateUnitSound && IDA_BYTE1(this->AddPlanningModeCommandSound) ) /*0x668603*/
  {
    RA2_OPDEL(CreateUnitSound); /*0x66860c*/
    this->DefaultChronoSound = 0; /*0x668614*/
  }
  IDA_BYTE1(this->AddPlanningModeCommandSound) = 0; /*0x66861a*/
  this->StartPlanningModeSound = 0; /*0x668620*/
  v46 = (void *)this->GUICheckboxSound[2]; /*0x668626*/
  this->GUICheckboxSound[1] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66862c*/
  if ( v46 && IDA_BYTE1(this->BuildingGarrisonedSound[0]) ) /*0x668636*/
  {
    RA2_OPDEL(v46); /*0x66863f*/
    this->GUICheckboxSound[2] = 0; /*0x668647*/
  }
  IDA_BYTE1(this->BuildingGarrisonedSound[0]) = 0; /*0x66864d*/
  this->GUICheckboxSound[3] = 0; /*0x668653*/
  v47 = (void *)this->GUITabSound[3]; /*0x668659*/
  this->GUITabSound[2] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66865f*/
  if ( v47 && IDA_BYTE1(this->GUIMoveInSound[1]) ) /*0x668669*/
  {
    RA2_OPDEL(v47); /*0x668672*/
    this->GUITabSound[3] = 0; /*0x66867a*/
  }
  IDA_BYTE1(this->GUIMoveInSound[1]) = 0; /*0x668680*/
  this->GUIMoveInSound[0] = 0; /*0x668686*/
  result = this->RadarEventColorSpeed[1]; /*0x66868c*/
  this->RadarEventColorSpeed[0] = (int)&vt_VectorClass_VoxelAnimTypeClass_const; /*0x66868f*/
  if ( result && IDA_BYTE1(this->RadarEventColorSpeed[3]) ) /*0x668696*/
  {
    RA2_OPDEL((void *)result); /*0x66869c*/
    this->RadarEventColorSpeed[1] = 0; /*0x6686a4*/
  }
  IDA_BYTE1(this->RadarEventColorSpeed[3]) = 0; /*0x6686a7*/
  this->RadarEventColorSpeed[2] = 0; /*0x6686aa*/
  return result; /*0x6686ad*/

}

// 0x66D150
void* RulesClass::readAudioVisual()
{

  int result; // eax
  int Int_Overwrite; // eax
  int v4; // ecx
  double Double_Overwrite; // st7
  unsigned int v6; // eax
  unsigned int v7; // ecx
  double v8; // [esp-8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v9, (uint8_t *)g_abs_839E70); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v9,
                      (uint8_t *)g_abs_839E70,
                      (uint8_t *)g_abs_83B370,
                      *((unsigned int *)this + 1550));
    v4 = *((unsigned int *)this + 1552); /*0x66d188*/
    *((unsigned int *)this + 1550) = Int_Overwrite; /*0x66d18e*/
    IDA_HIDWORD(v8) = *((unsigned int *)this + 1553); /*0x66d1a0*/
    IDA_LODWORD(v8) = v4; /*0x66d1a1*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x66d1aa*/
                         v9,
                         (uint8_t *)g_abs_839E70,
                         (uint8_t *)g_abs_83B358,
                         v8);
    v6 = *((unsigned int *)this + 1555); /*0x66d1af*/
    v7 = *((unsigned int *)this + 1554); /*0x66d1b5*/
    *((double *)this + 776) = Double_Overwrite; /*0x66d1bb*/
    *((double *)this + 777) = INIClass::ReadDouble_Overwrite( /*0x66d1d6*/
                                v9,
                                (uint8_t *)g_abs_839E70,
                                (uint8_t *)g_abs_83B344,
                                COERCE_DOUBLE(__PAIR64__(v6, v7)));
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
  char *v7; // esi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  double v11; // st7
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  uint8_t ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (uint8_t *)g_abs_839D98); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    v2 = 0; /*0x673ea5*/
    v3 = g_abs_89EC28; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 v13,
                 (uint8_t *)g_abs_839D98,
                 *((uint8_t **)&off_7E523C + v2),
                 g_abs_83D4AC,
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        v4 = strtok(String, g_abs_817F70); /*0x673ee7*/
        v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        v6 = strtok(0, g_abs_817F70); /*0x673f13*/
        v7 = v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        v8 = strtok(0, g_abs_817F70); /*0x673f3d*/
        v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, g_abs_825BF8) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, g_abs_825BF4) ) /*0x673f73*/
              g_abs_89ECC0[v2] = 0; /*0x673f7f*/
          }
          else
          {
            g_abs_89ECC0[v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, g_abs_817F70); /*0x673f8c*/
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
    while ( (int)v3 < (int)g_abs_89ECC0 ); /*0x673fd7*/
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

  result = INIClass::BinarySearchSection(v16, (uint8_t *)g_abs_839D58); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    this->?[8] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                   v16,
                   (uint8_t *)g_abs_839D58,
                   (uint8_t *)g_abs_83D554,
                   this->?[8]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (uint8_t *)g_abs_839D58,
                      (uint8_t *)g_INI_Key_Speed,
                      this->?[9]);
    v4 = this->?[12]; /*0x67442c*/
    this->?[9] = Int_Overwrite; /*0x674432*/
    IDA_HIDWORD(v15) = v4; /*0x674444*/
    IDA_LODWORD(v15) = this->?[11]; /*0x674445*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x67444e*/
                         v16,
                         (uint8_t *)g_abs_839D58,
                         (uint8_t *)g_abs_83D54C,
                         v15);
    v6 = this->?[13]; /*0x674453*/
    *(double *)&this->?[11] = Double_Overwrite; /*0x67445b*/
    v7 = INIClass::ReadInt_Overwrite(v16, (uint8_t *)g_abs_839D58, (uint8_t *)g_abs_83D53C, v6); /*0x67446d*/
    v8 = this->?[2]; /*0x674472*/
    v9 = this->?[1]; /*0x674478*/
    this->?[13] = v7; /*0x67447e*/
    v10 = INIClass::ReadDouble_Overwrite( /*0x674493*/
            v16,
            (uint8_t *)g_abs_839D58,
            (uint8_t *)g_abs_81B140,
            COERCE_DOUBLE(__PAIR64__(v8, v9)));
    v11 = this->?[4]; /*0x674498*/
    v12 = this->?[3]; /*0x67449e*/
    *(double *)&this->?[1] = v10; /*0x6744a4*/
    v13 = INIClass::ReadDouble_Overwrite( /*0x6744b9*/
            v16,
            (uint8_t *)g_abs_839D58,
            (uint8_t *)g_abs_83D528,
            COERCE_DOUBLE(__PAIR64__(v11, v12)));
    v14 = this->?[5]; /*0x6744be*/
    *(double *)&this->?[3] = v13; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite( /*0x6744d9*/
               v16,
               (uint8_t *)g_abs_839D58,
               (uint8_t *)g_abs_83D518,
               v14);
    this->?[5] = result; /*0x6744de*/
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
  char *v7; // [esp+28h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (uint8_t *)aMovies); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7, (uint8_t *)aMovies); /*0x67457d*/
    v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v7, (uint8_t *)aMovies, i); /*0x6745a4*/
      result = INIClass::GetString( /*0x6745b3*/
                 (uint8_t ***)v7,
                 (uint8_t *)aMovies,
                 StringByIndex,
                 g_Str__none_,
                 Source,
                 32);
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex(Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          v5 = _strdup(Source); /*0x6745da*/
          result = g_abs_ABF398; /*0x6745dc*/
          if ( g_abs_ABF3A0 < g_abs_ABF398 /*0x674614*/
            || (g_abs_ABF39D || !g_abs_ABF398)
            && g_abs_ABF3A4 > 0
            && (result = (*(int (**)(int *, int, unsigned int))(g_abs_ABF390 + 8))(
                           &g_abs_ABF390,
                           g_abs_ABF398 + g_abs_ABF3A4,
                           0),
                (unsigned char)result) )
          {
            result = g_abs_ABF3A0++; /*0x67461c*/
            *((unsigned int *)g_abs_ABF394 + result) = v5; /*0x67462b*/
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

  void *v2; // eax

  v2 = (void *)*((unsigned int *)this + 1); /*0x679fa6*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x679fa9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x679fb3*/
  {
    RA2_OPDEL(v2); /*0x679fb9*/
    *((unsigned int *)this + 1) = 0; /*0x679fc1*/
  }
  *((unsigned char *)this + 13) = 0; /*0x679fc4*/
  *((unsigned int *)this + 2) = 0; /*0x679fc7*/

}
// 0x679FD0
void RulesClass::readInfantryTypes()
{

  void *v2; // eax

  v2 = (void *)*((unsigned int *)this + 1); /*0x679fd6*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x679fd9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x679fe3*/
  {
    RA2_OPDEL(v2); /*0x679fe9*/
    *((unsigned int *)this + 1) = 0; /*0x679ff1*/
  }
  *((unsigned char *)this + 13) = 0; /*0x679ff4*/
  *((unsigned int *)this + 2) = 0; /*0x679ff7*/

}
// 0x67A000
void RulesClass::readCountries()
{

  void *v2; // eax

  v2 = (void *)*((unsigned int *)this + 1); /*0x67a006*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x67a009*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x67a013*/
  {
    RA2_OPDEL(v2); /*0x67a019*/
    *((unsigned int *)this + 1) = 0; /*0x67a021*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67a024*/
  *((unsigned int *)this + 2) = 0; /*0x67a027*/

}
// 0x67A060
void RulesClass::readVehicleTypes()
{

  void *v2; // eax

  v2 = (void *)*((unsigned int *)this + 1); /*0x67a066*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67a069*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x67a073*/
  {
    RA2_OPDEL(v2); /*0x67a079*/
    *((unsigned int *)this + 1) = 0; /*0x67a081*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67a084*/
  *((unsigned int *)this + 2) = 0; /*0x67a087*/

}
// 0x67A190
void *  RulesClass::readAircraftTypes( int * a2)
{

  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a19a*/
  {
    (*(void (**)(int *))(*this + 12))(this); /*0x67a19e*/
    v3 = a2[2]; /*0x67a1a1*/
    *(this + 2) = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a1b3*/
      *(this + 1) = (int)v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        v5 = *(this + 2); /*0x67a1c2*/
        v6 = 0; /*0x67a1c5*/
        *((unsigned char *)this + 13) = 1; /*0x67a1c9*/
        if ( v5 > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(unsigned int *)(*(this + 1) + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < *(this + 2) ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a1e5*/
      *((unsigned char *)this + 13) = 0; /*0x67a1ec*/
    }
  }
  *(this + 4) = a2[4]; /*0x67a1f3*/
  *(this + 5) = a2[5]; /*0x67a1f9*/
  *(this + 6) = a2[6]; /*0x67a1ff*/
  return this; /*0x67a204*/

}
// 0x67A210
void * RulesClass::readSuperWeaponTypes(int * a2)
{

  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a21a*/
  {
    (*(void (**)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this);;
    v3 = a2[2]; /*0x67a221*/
    *((char *)this + 2) = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a233*/
      *((char *)this + 1) = (int)v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        v5 = *((char *)this + 2); /*0x67a242*/
        v6 = 0; /*0x67a245*/
        *((unsigned char *)this + 13) = 1; /*0x67a249*/
        if ( v5 > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(unsigned int *)(*((char *)this + 1) + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < *((char *)this + 2) ); /*0x67a261*/
        }
      }
    }
    else
    {
      *((char *)this + 1) = 0; /*0x67a265*/
      *((unsigned char *)this + 13) = 0; /*0x67a26c*/
    }
  }
  *((char *)this + 4) = a2[4]; /*0x67a273*/
  *((char *)this + 5) = a2[5]; /*0x67a279*/
  *((char *)this + 6) = a2[6]; /*0x67a27f*/
  return this; /*0x67a284*/

}
// 0x67A310
void * RulesClass::readBuildingTypes(int * a2)
{

  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a31a*/
  {
    (*(void (**)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this);;
    v3 = a2[2]; /*0x67a321*/
    *((char *)this + 2) = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a333*/
      *((char *)this + 1) = (int)v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        v5 = *((char *)this + 2); /*0x67a342*/
        v6 = 0; /*0x67a345*/
        *((unsigned char *)this + 13) = 1; /*0x67a349*/
        if ( v5 > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(unsigned int *)(*((char *)this + 1) + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < *((char *)this + 2) ); /*0x67a361*/
        }
      }
    }
    else
    {
      *((char *)this + 1) = 0; /*0x67a365*/
      *((unsigned char *)this + 13) = 0; /*0x67a36c*/
    }
  }
  *((char *)this + 4) = a2[4]; /*0x67a373*/
  *((char *)this + 5) = a2[5]; /*0x67a379*/
  *((char *)this + 6) = a2[6]; /*0x67a37f*/
  return this; /*0x67a384*/

}
// 0x67A8B0
unsigned int * RulesClass::readParticles()
{

  *((unsigned int *)this + 1) = 0; /*0x67a8b4*/
  *((unsigned int *)this + 2) = 0; /*0x67a8b7*/
  *((unsigned char *)this + 12) = 1; /*0x67a8ba*/
  *((unsigned char *)this + 13) = 0; /*0x67a8be*/
  *((unsigned int *)this + 5) = 10; /*0x67a8c1*/
  *((unsigned int *)this + 4) = 0; /*0x67a8c8*/
  *this = &vt_TypeList_TerrainTypeClass_const; /*0x67a8cb*/
  return this; /*0x67a8d1*/

}
// 0x67B480
int  RulesClass::readAI( unsigned int * a2)
{

  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x67b483*/
  if ( *(this + 4) >= v3 ) /*0x67b48b*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x67b496*/
      return 0; /*0x67b496*/
    v4 = *(this + 5); /*0x67b498*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*this + 8))(this, v3 + v4, 0) ) /*0x67b4a8*/
      return 0; /*0x67b4af*/
  }
  v6 = *(this + 4); /*0x67b4b5*/
  v7 = *(this + 1); /*0x67b4b8*/
  *(this + 4) = v6 + 1; /*0x67b4be*/
  *(unsigned int *)(v7 + 4 * v6) = *a2; /*0x67b4c8*/
  return 1; /*0x67b4b1*/

}
// 0x67BDD0
void * RulesClass::LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
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

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&g_abs_87F8E4, String, 128) ) /*0x67bdfc*/
  {
    RulesClass::readIQ(&v17, 0, 0); /*0x67be11*/
    v22 = 10; /*0x67be1a*/
    v21 = 0; /*0x67be28*/
    v17 = (VectorClass *)&vt_TypeList_TerrainTypeClass_const; /*0x67be2c*/
    for ( i = strtok(String[0].__pad_0, g_abs_817F70); i; i = strtok(0, g_abs_817F70) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = (INIClass *)TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((uint8_t (*)(VectorClass **, int, unsigned int))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67be86*/
        *((unsigned int *)Block + v8) = v7; /*0x67be91*/
      }
    }
    *(unsigned int *)(a1 + 4) = 0; /*0x67bead*/
    *(unsigned int *)(a1 + 8) = 0; /*0x67beb0*/
    *(unsigned char *)(a1 + 12) = 1; /*0x67beb3*/
    *(unsigned char *)(a1 + 13) = 0; /*0x67beb7*/
    *(unsigned int *)a1 = &vt_VectorClass_TerrainTypeClass_const; /*0x67beba*/
    System_Load_67BFA0((unsigned int *)a1, &v17); /*0x67bec0*/
    *(unsigned int *)a1 = &vt_TypeList_TerrainTypeClass_const; /*0x67bec5*/
    v17 = (VectorClass *)&vt_VectorClass_TerrainTypeClass_const; /*0x67becb*/
    v9 = (VectorClass *)v22; /*0x67bed7*/
    *(unsigned int *)(a1 + 16) = v21; /*0x67bedb*/
    v10 = Block; /*0x67bede*/
    v11 = Block == 0; /*0x67bee2*/
    *(unsigned int *)(a1 + 20) = v9; /*0x67bee4*/
    if ( !v11 && v20 ) /*0x67bef1*/
    {
      RA2_OPDEL(v10); /*0x67bef8*/
      return (VectorClass *)a1; /*0x67bf0b*/
    }
  }
  else
  {
    *(unsigned int *)(a1 + 4) = 0; /*0x67bf19*/
    *(unsigned int *)(a1 + 8) = 0; /*0x67bf1c*/
    *(unsigned char *)(a1 + 12) = 1; /*0x67bf1f*/
    *(unsigned char *)(a1 + 13) = 0; /*0x67bf23*/
    *(unsigned int *)a1 = &vt_VectorClass_TerrainTypeClass_const; /*0x67bf26*/
    if ( (unsigned int *)a1 != a5 ) /*0x67bf2c*/
    {
      TypeList_cptr_TerrainTypeClass::TryFreeAndClear(a1); /*0x67bf30*/
      v13 = a5[2]; /*0x67bf36*/
      *(unsigned int *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        v14 = RA2_OPNEW(4 * v13); /*0x67bf48*/
        *(unsigned int *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67bf57*/
          v16 = 0; /*0x67bf5a*/
          *(unsigned char *)(a1 + 13) = 1; /*0x67bf5e*/
          if ( (int)v15 > 0 ) /*0x67bf62*/
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
    *(unsigned int *)a1 = &vt_TypeList_TerrainTypeClass_const; /*0x67bf8c*/
  }
  return (VectorClass *)a1; /*0x67bf02*/

}
// 0x67C430
unsigned int * RulesClass::readIQ(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x67c43b*/
  *((unsigned int *)this + 2) = a2; /*0x67c43e*/
  *((unsigned char *)this + 12) = 1; /*0x67c441*/
  *((unsigned char *)this + 13) = 0; /*0x67c445*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      *((unsigned int *)this + 1) = a3; /*0x67c458*/
      return this; /*0x67c45e*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x67c46d*/
    *((unsigned char *)this + 13) = 1; /*0x67c470*/
  }
  return this; /*0x67c45d*/

}
// 0x6614F0
int RulesClass::readGeneralSection(TechnoTypeClass * aP1)
{

  return (*(int (**)(TechnoTypeClass *, void *, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))(aP1, this, 3, 0); /*0x6614ff*/

}
// 0x661510
int RulesClass::readCombatDamage(int a2)
{

  return (*(int (**)(int, void *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, this, 3, 0); /*0x66151f*/

}
// 0x66D1F0
int RulesClass::readSpecialWeapons()
{

  int result; // eax
  char Bool_Overwrite; // al
  int v4; // ecx
  double v5; // [esp-8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v6, (uint8_t *)g_abs_839E64); /*0x66d200*/
  if ( result ) /*0x66d20c*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x66d223*/
                       v6,
                       (uint8_t *)g_abs_839E64,
                       (uint8_t *)g_abs_83B39C,
                       *((unsigned char *)this + 6224));
    v4 = *((unsigned int *)this + 1558); /*0x66d228*/
    *((unsigned char *)this + 6224) = Bool_Overwrite; /*0x66d22e*/
    IDA_HIDWORD(v5) = *((unsigned int *)this + 1559); /*0x66d240*/
    IDA_LODWORD(v5) = v4; /*0x66d241*/
    *((double *)this + 779) = INIClass::ReadDouble_Overwrite( /*0x66d24f*/
                                v6,
                                (uint8_t *)g_abs_839E64,
                                (uint8_t *)g_abs_83B384,
                                v5);
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
  unsigned char v8[4]; // [esp+8h] [ebp-4h] BYREF
  char *v9; // [esp+10h] [ebp+4h] BYREF

  v1 = v9; /*0x66d3a9*/
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
      Color = INIEntry::ReadColor((uint8_t ***)v1, (int)v8, (uint8_t *)aColors, StringByIndex, v7); /*0x66d413*/
      IDA_LOWORD(v9) = *(unsigned short *)Color; /*0x66d41b*/
      IDA_BYTE2(v9) = *(unsigned char *)(Color + 2); /*0x66d425*/
      System_Read((const char *)StringByIndex, (int)&v9); /*0x66d42d*/
      System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)g_abs_886380, (int)&g_abs_885780, 1); /*0x66d444*/
      result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)g_abs_886380, (int)&g_abs_885780, 53); /*0x66d45b*/
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

  char *v1; // edi
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
  char *v13; // [esp+18h] [ebp+4h] BYREF

  v1 = v13; /*0x66d48b*/
  result = INIClass::BinarySearchSection((int)v13, (uint8_t *)aColoradd); /*0x66d494*/
  if ( result ) /*0x66d4a2*/
  {
    result = INIClass::GetKeyCount(v1, (uint8_t *)aColoradd); /*0x66d4ae*/
    v4 = 0; /*0x66d4b3*/
    v12 = result; /*0x66d4b7*/
    if ( result > 0 ) /*0x66d4bb*/
    {
      v5 = (char *)this + 6260; /*0x66d4bd*/
      do /*0x66d511*/
      {
        StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v1, (uint8_t *)aColoradd, v4); /*0x66d4cd*/
        IDA_LOWORD(v13) = 0; /*0x66d4e6*/
        IDA_BYTE2(v13) = 0; /*0x66d4ee*/
        Coord = INIClass::GetCoord( /*0x66d4f2*/
                  (uint8_t ***)v1,
                  (int)v11,
                  (uint8_t *)aColoradd,
                  StringByIndex,
                  (uint8_t *)&v13);
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
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (uint8_t *)g_abs_839E34); /*0x672297*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67229d*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6, (uint8_t *)g_abs_839E34, i); /*0x6722b5*/
    if ( INIClass::GetString( /*0x6722c3*/
           (uint8_t ***)v6,
           (uint8_t *)g_abs_839E34,
           StringByIndex,
           &g_abs_889F64,
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
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (uint8_t *)g_abs_839E08); /*0x6723e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6723ed*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6, (uint8_t *)g_abs_839E08, i); /*0x672405*/
    if ( INIClass::GetString( /*0x672413*/
           (uint8_t ***)v6,
           (uint8_t *)g_abs_839E08,
           StringByIndex,
           &g_abs_889F64,
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
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (uint8_t *)g_abs_839DEC); /*0x672607*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67260d*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6, (uint8_t *)g_abs_839DEC, i); /*0x672625*/
    if ( INIClass::GetString( /*0x672633*/
           (uint8_t ***)v6,
           (uint8_t *)g_abs_839DEC,
           StringByIndex,
           &g_abs_889F64,
           Destination,
           32) )
    {
      WeaponTypeClass::Process(Destination); /*0x672640*/
    }
  }
  return KeyCount > 0; /*0x67264c*/

}
// 0x67A3C0
int  RulesClass::readTerrainTypes( TechnoTypeClass * aP1)
{

  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(unsigned int *)aP1->vtable0; /*0x67a3cc*/
  v6 = *(this + 4); /*0x67a3d9*/
  (*(void (**)(TechnoTypeClass *, int *, int, unsigned int))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a3dd*/
  result = v6; /*0x67a3e0*/
  for ( i = 0; i < v6; ++i ) /*0x67a3e8*/
  {
    (*(void (**)(TechnoTypeClass *, int, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))( /*0x67a3f8*/
      aP1,
      *(this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a3fb*/
  }
  return result; /*0x67a404*/

}
// 0x67A730
int RulesClass::readSmudgeTypes()
{

  return *((unsigned int *)this + 4); /*0x67a733*/

}
// 0x67A7C0
int RulesClass::readOverlayTypes()
{

  return *((unsigned int *)this + 4); /*0x67a7c3*/

}
// 0x67A7D0
int  RulesClass::readAnimations( TechnoTypeClass * aP1)
{

  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(unsigned int *)aP1->vtable0; /*0x67a7dc*/
  v6 = *(this + 4); /*0x67a7e9*/
  (*(void (**)(TechnoTypeClass *, int *, int, unsigned int))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a7ed*/
  result = v6; /*0x67a7f0*/
  for ( i = 0; i < v6; ++i ) /*0x67a7f8*/
  {
    (*(void (**)(TechnoTypeClass *, int, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))( /*0x67a808*/
      aP1,
      *(this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a80b*/
  }
  return result; /*0x67a814*/

}
// 0x67A8A0
int RulesClass::readWarheads()
{

  return *((unsigned int *)this + 4); /*0x67a8a3*/

}
// 0x67A8E0
int  RulesClass::readParticleSystems( TechnoTypeClass * aP1)
{

  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(unsigned int *)aP1->vtable0; /*0x67a8ec*/
  v6 = *(this + 4); /*0x67a8f9*/
  (*(void (**)(TechnoTypeClass *, int *, int, unsigned int))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a8fd*/
  result = v6; /*0x67a900*/
  for ( i = 0; i < v6; ++i ) /*0x67a908*/
  {
    (*(void (**)(TechnoTypeClass *, int, int, unsigned int))(*(unsigned int *)aP1->vtable0 + 16))( /*0x67a918*/
      aP1,
      *(this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a91b*/
  }
  return result; /*0x67a924*/

}