#include "rulesclass.hpp"

int  RulesClass::Constructor(RulesClass *this)
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
    BarrelDebris = this->BarrelDebris;
    this->DropPodPuff = 0;
    this->WaypointAnimationSpeed = 12;
    this->BarrelExplode = 0;
    VoxelAnimTypeVector::Constructor(this->BarrelDebris, 0, 0);
    BarrelDebris[4] = 0;
    BarrelDebris[5] = 10;
    *BarrelDebris = (int)&TypeList<VoxelAnimTypeClass const *>::`vftable';
    this->RadarEventSpeed = 0.0;
    this->RadarEventRotationSpeed = 0.050000001;
    this->FlashFrameTime = 5;
    this->RadarCombatFlashTime = 1065353216;
    this->MaxWaypointPathLength = 1036831949;
    this->Wake = 7;
    this->NukeTakeOff = 21;
    this->InfantryExplode = 15;
    this->FlamingInfantry = 0;
    this->InfantryHeadPop = 0;
    this->InfantryNuked = 0;
    this->InfantryVirus = 0;
    this->InfantryBrute = 0;
    this->InfantryMutate = 0;
    this->Behind = 0;
    *(uint32_t *)this->gapB0 = 0;
    *(uint32_t *)&this->gapB0[4] = 0;
    LODWORD(this->AITriggerSuccessWeightDelta) = 0;
    this->AITriggerFailureWeightDelta = 0x3FF0000000000000LL;
    this->AITriggerTrackRecordCoefficient = 0xBFF0000000000000uLL;
    this->VeinholeMonsterStrength = 0;
    this->MaxVeinholeGrowth = 1072693248;
    this->VeinholeGrowthRate = 10000;
    this->VeinholeShrinkRate = 1000;
    this->VeinAttack = 100;
    this->VeinDamage = 100;
    this->MaximumQueuedObjects = 0;
    this->AircraftFogReveal = 2;
    this->WoodCrateImg = 5;
    this->CrateImg = 6;
    this->WaterCrateImg = 0;
    this->DropPod[0] = 0;
    this->DropPod[1] = 0;
    AnimTypeVector::Constructor(&this->DropPod[2], 0, 0);
    this->DeadBodies[3] = 10;
    this->DeadBodies[2] = 0;
    this->DropPod[2] = (int)&TypeList<AnimTypeClass const *>::`vftable';
    AnimTypeVector::Constructor(&this->MetallicDebris[1], 0, 0);
    this->BridgeExplosions[2] = 10;
    this->BridgeExplosions[1] = 0;
    this->MetallicDebris[1] = (int)&TypeList<AnimTypeClass const *>::`vftable';
    AnimTypeVector::Constructor(&this->DigSound, 0, 0);
    this->GUIMainButtonSound = 10;
    this->BaseUnderAttackSound = 0;
    this->DigSound = (int)&TypeList<AnimTypeClass const *>::`vftable';
    AnimTypeVector::Constructor(&this->GUITabSound, 0, 0);
    this->GUIComboOpenSound = 10;
    this->GUIMoveInSound = 0;
    this->GUITabSound = (int)&TypeList<AnimTypeClass const *>::`vftable';
    this->GUICheckboxSound = -1;
    this->ScoreAnimSound = -1;
    this->IFVTransformSound = -1;
    this->PsychicSensorDetectSound = -1;
    this->BuildingGarrisonedSound = -1;
    this->BuildingAbandonedSound = -1;
    this->BuildingRepairedSound = -1;
    this->CheerSound = -1;
    this->PlaceBeaconSound = -1;
    this->DefaultChronoSound = -1;
    this->StartPlanningModeSound = -1;
    this->AddPlanningModeCommandSound = -1;
    this->ExecutePlanSound = -1;
    this->EndPlanningModeSound = -1;
    this->CrateMoneySound = -1;
    this->CrateRevealSound = -1;
    this->CrateFireSound = -1;
    this->CrateArmourSound = -1;
    this->CrateSpeedSound = -1;
    this->CrateUnitSound = -1;
    this->CratePromoteSound = -1;
    this->ImpactWaterSound = -1;
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
    this->LetsDoTheTimeWarpOutAgain = -1;
    this->LetsDoTheTimeWarpInAgain = -1;
    this->DiskLaserChargeUp = -1;
    this->SpyPlaneCameraFrames = -1;
    this->Dig = -1;
    this->IonBlast = -1;
    this->IonBeam = -1;
    this->DamageFireTypes[0] = -1;
    this->DamageFireTypes[1] = -1;
    this->DamageFireTypes[2] = -1;
    this->DamageFireTypes[3] = -1;
    this->WeatherConClouds[0] = -1;
    this->WeatherConClouds[1] = -1;
    this->WeatherConClouds[2] = -1;
    this->WeatherConClouds[3] = -1;
    this->WeatherConBolts[0] = -1;
    this->WeatherConBolts[1] = -1;
    this->WeatherConBolts[2] = 16;
    this->WeatherConBolts[3] = 0;
    this->WeatherConBoltExplosion = 0;
    this->DominatorWarhead = 0;
    AnimTypeVector::Constructor(&this->DominatorFirstAnim, 0, 0);
    this->MindControlAttackLineFrames = 10;
    this->DominatorDamage = 0;
    this->DominatorFirstAnim = (int)&TypeList<AnimTypeClass const *>::`vftable';
    AnimTypeVector::Constructor(&this->DrainMoneyAmount, 0, 0);
    this->ChronoBlastDest = 10;
    this->ChronoBlast = 0;
    this->DrainMoneyAmount = (int)&TypeList<AnimTypeClass const *>::`vftable';
    AnimTypeVector::Constructor(&this->ChronoBeam, 0, 0);
    this->IronCurtainInvokeAnim = 10;
    this->ChronoSparkle1 = 0;
    this->ChronoBeam = (int)&TypeList<AnimTypeClass const *>::`vftable';
    this->WeaponNullifyAnim = 0;
    this->AtmosphereEntry = 0;
    this->PrerequisitePower[0] = 0;
    this->PrerequisitePower[1] = 0;
    this->PrerequisitePower[2] = 50;
    this->PrerequisitePower[3] = 2;
    this->PrerequisiteFactory[0] = 50;
    this->PrerequisiteFactory[1] = 15;
    this->PrerequisiteFactory[2] = 100;
    this->PrerequisiteFactory[3] = 0;
    this->PrerequisiteBarracks[0] = 0;
    this->PrerequisiteBarracks[1] = 0;
    this->PrerequisiteBarracks[2] = 0;
    this->PrerequisiteBarracks[3] = 0;
    this->PrerequisiteRadar[0] = 0;
    this->PrerequisiteRadar[1] = 0;
    this->PrerequisiteRadar[2] = 0;
    this->PrerequisiteRadar[3] = 0;
    this->PrerequisiteTech[0] = 0;
    this->PrerequisiteTech[1] = 0;
    this->PrerequisiteTech[2] = 0;
    this->PrerequisiteTech[3] = 0;
    this->PrerequisiteProc[0] = 0;
    this->PrerequisiteProc[1] = 0;
    this->PrerequisiteProc[2] = 0;
    VectorClass::Construct(&this->PrerequisiteProc[3], 0, 0);
    this->Speed = 10;
    this->TurnRate = 0;
    this->PrerequisiteProc[3] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->gap370[4], 0, 0);
    LODWORD(this->Acceleration) = 10;
    *(uint32_t *)this->gap384 = 0;
    *(uint32_t *)&this->gap370[4] = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->WobblesPerSecond, 0, 0);
    this->RadarEventSuppressionDistances[2] = 10;
    this->RadarEventSuppressionDistances[1] = 0;
    LODWORD(this->WobblesPerSecond) = &TypeList<int>::`vftable';
    VectorClass::Construct(this->RadarEventVisibilityDurations, 0, 0);
    this->RadarEventDurations[1] = 10;
    this->RadarEventDurations[0] = 0;
    this->RadarEventVisibilityDurations[0] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->RadarEventDurations[3], 0, 0);
    this->PrismSupportMax = 10;
    this->PrismSupportModifier = 0;
    this->RadarEventDurations[3] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->PrismSupportDuration, 0, 0);
    this->V3Rocket[3] = 10;
    this->V3Rocket[2] = 0;
    this->PrismSupportDuration = (int)&TypeList<int>::`vftable';
    this->V3Rocket[5] = 0;
    this->V3Rocket[6] = -1;
    this->V3Rocket[7] = -1;
    this->V3Rocket[8] = 3;
    this->V3Rocket[9] = 30;
    this->V3Rocket[11] = 0;
    this->V3Rocket[12] = 1075052544;
    this->V3Rocket[13] = 400;
    this->DMisl[1] = 0;
    this->DMisl[2] = 1070596096;
    this->DMisl[3] = 0;
    this->DMisl[4] = 1070596096;
    this->DMisl[5] = 40;
    VectorClass::Construct(&this->DMisl[6], 0, 0);
    this->DMisl[11] = 10;
    this->DMisl[10] = 0;
    this->DMisl[6] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->DMisl[13], 0, 0);
    this->CMisl[4] = 10;
    this->CMisl[3] = 0;
    this->DMisl[13] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->CMisl[6], 0, 0);
    this->CMisl[11] = 10;
    this->CMisl[10] = 0;
    this->CMisl[6] = (int)&TypeList<int>::`vftable';
    this->CMisl[13] = 700;
    this->ParadropRadius = 128;
    this->ZoomInFactor = 0x6400000000LL;
    this->ConditionRedSparkingProbability = 0x6400000008LL;
    this->ConditionYellowSparkingProbability = 0x12C0000000FLL;
    this->ExplosiveVoxelDebris[1] = 1024;
    this->ExplosiveVoxelDebris[2] = 0;
    this->ExplosiveVoxelDebris[3] = 0x40000000;
    this->TireVoxelDebris = 1202590843;
    this->ScrapVoxelDebris = 1066695393;
    this->BridgeVoxelMax = 1202590843;
    this->CloakingStages = 1065646817;
    this->RevealTriggerRadius = 100;
    *(uint32_t *)this->gap56C = 10;
    this->ShipSinkingWeight = 0x3F6666663F000000LL;
    this->IceCrackingWeight = 0x3F8000003F800000LL;
    LODWORD(this->IceBreakingWeight) = 1;
    this->IceCrackSounds[0] = -1717986918;
    this->IceCrackSounds[1] = 1069128089;
    this->IceCrackSounds[2] = 0;
    this->IceCrackSounds[3] = 1070596096;
    *(uint32_t *)&this->CliffBackImpassability = 0;
    *(uint32_t *)&this->gap599[3] = 1070596096;
    this->VeteranRatio = 500;
    this->VeteranCombat = 0x28000005DCLL;
    this->VeteranSpeed = 0x3FF921FB54442D18LL;
    this->VeteranSight = 0x3FF0000000000000LL;
    this->VeteranArmor = 0x3FE0000000000000LL;
    this->VeteranROF = 0x7800000190LL;
    this->VeteranCap = 0x403E000000000000LL;
    this->CloakSound = -858993459;
    this->SellSound = 1073007820;
    this->GameClosed = -343597384;
    this->IncomingMessage = 1067366481;
    this->SystemError = -343597384;
    this->OptionsChanged = 1067366481;
    this->GameForming = -1717986918;
    this->PlayerLeft = 1072273817;
    this->PlayerJoined = -1717986918;
    this->MessageCharTyped = 1068079513;
    VoxelAnimTypeVector::Constructor(&this->Construction, 0, 0);
    this->BuildingDieSound = 10;
    this->CreditTicks[3] = 0;
    this->Construction = (int)&TypeList<VoxelAnimTypeClass const *>::`vftable';
    this->RadarOn = 0;
    this->RadarOff = 0;
    this->MovieOn = 3;
    this->MovieOff = 9;
    this->ScoldSound = 5;
    this->TeslaCharge = 0;
    this->TeslaZap = 1074266112;
    this->GenericClick = 0;
    this->GenericBeep = 0x40000000;
    this->BuildingDamageSound = 0;
    this->HealCrateSound = 1074790400;
    VectorClass::Construct(&this->ChuteSound, 0, 0);
    this->StormSound = 10;
    this->DeploySound = 0;
    this->ChuteSound = (int)&TypeList<int>::`vftable';
    LOBYTE(this->LightningSounds[1]) = 0;
    this->LightningSounds[2] = 0;
    this->LightningSounds[3] = 1076101120;
    this->ShellButtonSlideSound = 0;
    *(uint32_t *)this->gap674 = 1072693248;
    this->WallBuildSpeedCoefficient = 0x3FF0000000000000LL;
    this->ChargeToDrainRatio = 0x3FF0000000000000LL;
    this->TrackedUphill = 0x3FF0000000000000LL;
    this->TrackedDownhill = 0x3FF0000000000000LL;
    this->WheeledUphill = 0x3FF0000000000000LL;
    this->WheeledDownhill = -1;
    this->SpotlightMovementRadius = -1;
    this->SpotlightLocationRadius = -1;
    this->SpotlightSpeed = -1;
    this->SpotlightAcceleration = -1;
    this->SpotlightAngle = -1;
    this->SpotlightRadius = -1;
    VectorClass::Construct(&this->WindDirection, 0, 0);
    this->BuildingDrop = 10;
    this->NoParachuteMaxFallRate = 0;
    this->WindDirection = (int)&TypeList<int>::`vftable';
    this->Scorches[1] = -1;
    this->Scorches[2] = -1;
    this->Scorches[3] = -1;
    this->Scorches1[0] = -1;
    this->Scorches1[1] = -1;
    this->Scorches1[2] = -1;
    this->Scorches1[3] = -1;
    this->Scorches2[0] = -1;
    this->Scorches2[1] = -1;
    this->Scorches2[2] = -1;
    this->Scorches2[3] = -1;
    this->Scorches3[0] = -1;
    this->Scorches3[1] = -1;
    this->Scorches3[2] = -1;
    this->Scorches3[3] = -1;
    this->Scorches4[0] = -1;
    this->Scorches4[1] = -1;
    this->Scorches4[2] = -1;
    this->Scorches4[3] = -1;
    VectorClass::Construct(this->RepairBay, 0, 0);
    this->GDIGateTwo = 10;
    this->GDIGateOne = 0;
    this->RepairBay[0] = (int)&TypeList<int>::`vftable';
    this->NodGateTwo = -1;
    this->Shipyard[0] = 0;
    this->Shipyard[1] = 1071644672;
    this->Shipyard[2] = 0;
    this->Shipyard[3] = 1074266112;
    this->GDIPowerPlant = 0;
    this->NodRegularPower = 1072693248;
    this->NodAdvancedPower = 0;
    this->ThirdPowerPlant = 1072693248;
    this->BuildConst[0] = 0;
    this->BuildConst[1] = 1072693248;
    this->BuildConst[2] = 0;
    this->BuildConst[3] = 1072693248;
    this->BuildPower[0] = 2000;
    this->BuildPower[1] = 1000;
    this->BuildPower[2] = -1717986918;
    this->BuildPower[3] = 1068079513;
    this->BuildRefinery[0] = 1202590843;
    this->BuildRefinery[1] = 1064598241;
    this->BuildRefinery[2] = 0;
    this->BuildRefinery[3] = 1077149696;
    this->BuildBarracks[0] = 175;
    this->BuildBarracks[1] = -1;
    this->BuildBarracks[2] = 2304;
    this->BuildBarracks[3] = 500;
    this->BuildTech[0] = -3;
    this->BuildTech[1] = -100;
    this->BuildTech[2] = -1;
    Game::LockMutex(&this->BuildTech[3], 0, 0);
    this->AlliedBaseDefenses[0] = 10;
    this->BuildWeapons[3] = 0;
    this->BuildTech[3] = (int)&TypeList<SmudgeTypeClass const *>::`vftable';
    Game::LockMutex(&this->AlliedBaseDefenses[2], 0, 0);
    this->SovietBaseDefenses[3] = 10;
    this->SovietBaseDefenses[2] = 0;
    this->AlliedBaseDefenses[2] = (int)&TypeList<SmudgeTypeClass const *>::`vftable';
    Game::LockMutex(&this->ThirdBaseDefenses[1], 0, 0);
    this->AIForcePredictionFudge[2] = 10;
    this->AIForcePredictionFudge[1] = 0;
    this->ThirdBaseDefenses[1] = (int)&TypeList<SmudgeTypeClass const *>::`vftable';
    Game::LockMutex(this->BuildDefense, 0, 0);
    this->BuildPDefense[1] = 10;
    this->BuildPDefense[0] = 0;
    this->BuildDefense[0] = (int)&TypeList<SmudgeTypeClass const *>::`vftable';
    Game::LockMutex(&this->BuildPDefense[3], 0, 0);
    this->BuildHelipad[0] = 10;
    this->BuildAA[3] = 0;
    this->BuildPDefense[3] = (int)&TypeList<SmudgeTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->BuildHelipad[2], 0, 0);
    this->BuildRadar[3] = 10;
    this->BuildRadar[2] = 0;
    this->BuildHelipad[2] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    this->ConcreteWalls[1] = 0;
    this->ConcreteWalls[2] = 0;
    this->ConcreteWalls[3] = 0;
    this->NSGates[0] = 0;
    this->NSGates[1] = 0;
    VectorClass::BuildingTypeConstructor(&this->NSGates[2], 0, 0);
    this->EWGates[3] = 10;
    this->EWGates[2] = 0;
    this->NSGates[2] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    this->BuildNavalYard[1] = 0;
    this->BuildNavalYard[2] = 0;
    this->BuildNavalYard[3] = 0;
    this->BuildDummy[0] = 0;
    VectorClass::BuildingTypeConstructor(&this->BuildDummy[1], 0, 0);
    this->NeutralTechBuildings[2] = 10;
    this->NeutralTechBuildings[1] = 0;
    this->BuildDummy[1] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->GDIWallDefense, 0, 0);
    this->NodBaseDefenseCoefficient = 0xA00000000LL;
    LODWORD(this->GDIWallDefense) = &TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor((uint32_t *)&this->GDIBaseDefenseCoefficient + 1, 0, 0);
    this->BaseUnit[2] = 10;
    this->BaseUnit[1] = 0;
    HIDWORD(this->GDIBaseDefenseCoefficient) = &TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(this->HarvesterUnit, 0, 0);
    this->PadAircraft[1] = 10;
    this->PadAircraft[0] = 0;
    this->HarvesterUnit[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->PadAircraft[3], 0, 0);
    this->TreeFire[0] = 10;
    this->OnFire[3] = 0;
    this->PadAircraft[3] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->TreeFire[2], 0, 0);
    this->BombParachute = 10;
    this->MoveFlash = 0;
    this->TreeFire[2] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(this->SplashList, 0, 0);
    this->LargeFire = 10;
    this->SmallFire = 0;
    this->SplashList[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->EliteFlashTimer, 0, 0);
    this->ChronoMinimumDelay = 10;
    *(uint32_t *)&this->ChronoTrigger = 0;
    this->EliteFlashTimer = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(this->AmerParaDropInf, 0, 0);
    this->AmerParaDropNum[1] = 10;
    this->AmerParaDropNum[0] = 0;
    this->AmerParaDropInf[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::Construct(&this->AmerParaDropNum[3], 0, 0);
    this->AllyParaDropNum[0] = 10;
    this->AllyParaDropInf[3] = 0;
    this->AmerParaDropNum[3] = (int)&TypeList<int>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->AllyParaDropNum[2], 0, 0);
    this->SovParaDropInf[3] = 10;
    this->SovParaDropInf[2] = 0;
    this->AllyParaDropNum[2] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->SovParaDropNum[1], 0, 0);
    this->YuriParaDropInf[2] = 10;
    this->YuriParaDropInf[1] = 0;
    this->SovParaDropNum[1] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(this->YuriParaDropNum, 0, 0);
    this->AnimToInfantry[1] = 10;
    this->AnimToInfantry[0] = 0;
    this->YuriParaDropNum[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->AnimToInfantry[3], 0, 0);
    this->SecretUnits[0] = 10;
    this->SecretInfantry[3] = 0;
    this->AnimToInfantry[3] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->SecretUnits[2], 0, 0);
    this->SecretBuildings[3] = 10;
    this->SecretBuildings[2] = 0;
    this->SecretUnits[2] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->AlliedDisguise, 0, 0);
    *(uint32_t *)&this->AttackCursorOnDisguise = 10;
    this->SpyMoneyStealPercent = 0.0;
    this->AlliedDisguise = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->AISafeDistance, 0, 0);
    this->AlliedBaseDefenseCounts[2] = 10;
    this->AlliedBaseDefenseCounts[1] = 0;
    this->AISafeDistance = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(this->SovietBaseDefenseCounts, 0, 0);
    this->ThirdBaseDefenseCounts[1] = 10;
    this->ThirdBaseDefenseCounts[0] = 0;
    this->SovietBaseDefenseCounts[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->ThirdBaseDefenseCounts[3], 0, 0);
    this->AIRestrictReplaceTime = 10;
    this->AIPickWallDefensePercent[3] = 0;
    this->ThirdBaseDefenseCounts[3] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->ApproachTargetResetMultiplier, 0, 0);
    this->AINavalYardAdjacency = 10;
    this->NormalTargetingDelay = 0;
    this->ApproachTargetResetMultiplier = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->DisabledDisguiseDetectionPercent[1], 0, 0);
    this->AIAutoDeployFrameDelay[2] = 10;
    this->AIAutoDeployFrameDelay[1] = 0;
    this->DisabledDisguiseDetectionPercent[1] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    this->MaximumBuildingPlacementFailures = 0;
    this->AICaptureNormal[0] = 1075314688;
    this->AICaptureNormal[1] = 0;
    this->AICaptureNormal[2] = 1074266112;
    this->AICaptureNormal[3] = 0;
    this->AICaptureWounded[0] = 1072693248;
    this->AICaptureWounded[1] = 0;
    this->AICaptureWounded[2] = 1072693248;
    this->AICaptureWounded[3] = 3;
    this->AICaptureLowPower[0] = 60;
    UnitTypeVector::ConstructUnitTypeVectorClass(&this->AICaptureLowPower[1], 0, 0);
    this->AICaptureLowMoney[2] = 10;
    this->AICaptureLowMoney[1] = 0;
    this->AICaptureLowPower[1] = (int)&TypeList<UnitTypeClass const *>::`vftable';
    UnitTypeVector::ConstructUnitTypeVectorClass(&this->AICaptureLowMoneyMark, 0, 0);
    this->AISuperDefenseProbability[3] = 10;
    this->AISuperDefenseProbability[2] = 0;
    this->AICaptureLowMoneyMark = (int)&TypeList<UnitTypeClass const *>::`vftable';
    AircraftTypeVector::Constructor(&this->AISuperDefenseDistance, 0, 0);
    this->OverloadDamage[0] = 10;
    this->OverloadCount[3] = 0;
    LODWORD(this->AISuperDefenseDistance) = &TypeList<AircraftTypeClass const *>::`vftable';
    AnimTypeVector::Constructor(&this->OverloadDamage[2], 0, 0);
    this->OverloadFrames[3] = 10;
    this->OverloadFrames[2] = 0;
    this->OverloadDamage[2] = (int)&TypeList<AnimTypeClass const *>::`vftable';
    AnimTypeVector::Constructor(&this->OccupyDamageMultiplier, 0, 0);
    this->BunkerWeaponRangeBonus = 10;
    this->BunkerROFMultiplier = 0.0;
    LODWORD(this->OccupyDamageMultiplier) = &TypeList<AnimTypeClass const *>::`vftable';
    this->OpenToppedRangeBonus = 0;
    this->OpenToppedWarpDistance = 0;
    this->FallingDamageMultiplier = 0.0;
    *(uint32_t *)&this->CurrentStrengthDamage = 0;
    this->Technician = 0;
    AnimTypeVector::Constructor(&this->Engineer, 0, 0);
    this->FlameDamage = 10;
    this->ThirdCrew = 0;
    this->Engineer = (int)&TypeList<AnimTypeClass const *>::`vftable';
    this->NukeWarhead = 0;
    this->NukeProjectile = 0;
    this->NukeDown = 0;
    this->MutateWarhead = 100;
    this->MutateExplosionWarhead = 60;
    this->EMPulseWarhead = 60;
    this->EMPulseProjectile = 32;
    LOBYTE(this->C4Warhead) = 1;
    this->CrushWarhead = 0;
    this->V3Warhead = 0;
    InfantryTypeVector::Construct2(&this->DMislWarhead, 0, 0);
    this->IvanWarhead = 10;
    this->CMislEliteWarhead = 0;
    this->DMislWarhead = (int)&TypeList<InfantryTypeClass const *>::`vftable';
    VectorClass::Construct(&this->IvanTimedDelay, 0, 0);
    this->CHRONOSK_SHP = 10;
    this->BOMBCURS_SHP = 0;
    this->IvanTimedDelay = (int)&TypeList<int>::`vftable';
    InfantryTypeVector::Construct2(&this->PsychicRevealRadius, 0, 0);
    this->DefaultMirageDisguises[2] = 10;
    this->DefaultMirageDisguises[1] = 0;
    this->PsychicRevealRadius = (int)&TypeList<InfantryTypeClass const *>::`vftable';
    VectorClass::Construct(&this->InfantryBlinkDisguiseTime, 0, 0);
    this->DefaultSmallRedSmokeSystem = 10;
    this->DefaultLargeRedSmokeSystem = 0;
    this->InfantryBlinkDisguiseTime = (int)&TypeList<int>::`vftable';
    InfantryTypeVector::Construct2(&this->DefaultFireStreamSystem, 0, 0);
    LODWORD(this->MyEffectivenessCoefficientDefault) = 10;
    *(uint32_t *)&this->gapC80[4] = 0;
    this->DefaultFireStreamSystem = (int)&TypeList<InfantryTypeClass const *>::`vftable';
    VectorClass::Construct(&this->TargetEffectivenessCoefficientDefault, 0, 0);
    this->TargetStrengthCoefficientDefault = 0xA00000000LL;
    LODWORD(this->TargetEffectivenessCoefficientDefault) = &TypeList<int>::`vftable';
    InfantryTypeVector::Construct2((uint32_t *)&this->TargetDistanceCoefficientDefault + 1, 0, 0);
    LODWORD(this->DumbTargetSpecialThreatCoefficient) = 10;
    HIDWORD(this->DumbTargetEffectivenessCoefficient) = 0;
    HIDWORD(this->TargetDistanceCoefficientDefault) = &TypeList<InfantryTypeClass const *>::`vftable';
    VectorClass::Construct(&this->DumbTargetStrengthCoefficient, 0, 0);
    this->EnemyHouseThreatBonus = 0xA00000000LL;
    LODWORD(this->DumbTargetStrengthCoefficient) = &TypeList<int>::`vftable';
    InfantryTypeVector::Construct2((uint32_t *)&this->TurboBoost + 1, 0, 0);
    LODWORD(this->PowerEmergency) = 10;
    HIDWORD(this->AttackDelay) = 0;
    HIDWORD(this->TurboBoost) = &TypeList<InfantryTypeClass const *>::`vftable';
    InfantryTypeVector::Construct2(&this->AirstripRatio, 0, 0);
    this->HelipadRatio = 0xA00000000LL;
    LODWORD(this->AirstripRatio) = &TypeList<InfantryTypeClass const *>::`vftable';
    UnitTypeVector::ConstructUnitTypeVectorClass(this->gapD1C, 0, 0);
    LODWORD(this->AARatio) = 10;
    *(uint32_t *)this->gapD2C = 0;
    *(uint32_t *)this->gapD1C = &TypeList<UnitTypeClass const *>::`vftable';
    VectorClass::BuildingTypeConstructor(&this->AALimit, 0, 0);
    *(uint32_t *)this->gapD4C = 10;
    this->DefenseLimit = 0;
    this->AALimit = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    HIDWORD(this->WarRatio) = 0;
    this->WarLimit = 0;
    *(uint32_t *)this->gapD5C = 0;
    this->BarracksRatio = 0;
    this->BarracksLimit = 1056964608;
    LOBYTE(this->RefineryLimit) = 0;
    this->RefineryRatio = 0x83F4CCCCDLL;
    this->BaseSizeAdd = 5;
    this->PowerSurplus = 50;
    VectorClass::Construct(&this->InfantryReserve, 0, 0);
    *(uint32_t *)this->gapD94 = 10;
    this->UnitCrateType = 0;
    this->InfantryReserve = (int)&TypeList<int>::`vftable';
    VectorClass::Construct((uint32_t *)&this->PatrolScan + 1, 0, 0);
    this->AIHateDelays[0] = 10;
    this->TeamDelays[3] = 0;
    HIDWORD(this->PatrolScan) = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->AIHateDelays[2], 0, 0);
    this->AIIonCannonConYardValue[2] = 10;
    this->AIIonCannonConYardValue[1] = 0;
    this->AIHateDelays[2] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(this->AIIonCannonWarFactoryValue, 0, 0);
    this->AIIonCannonPowerValue[1] = 10;
    this->AIIonCannonPowerValue[0] = 0;
    this->AIIonCannonWarFactoryValue[0] = (int)&TypeList<int>::`vftable';
    this->AIIonCannonPowerValue[3] = 500;
    this->AIIonCannonTechCenterValue[0] = 5;
    this->AIIonCannonTechCenterValue[1] = 1;
    this->AIIonCannonTechCenterValue[2] = 5000;
    this->AIIonCannonTechCenterValue[3] = -5000;
    this->AIIonCannonEngineerValue[0] = 36;
    this->AIIonCannonEngineerValue[1] = 27;
    this->AIIonCannonEngineerValue[2] = 20;
    VectorClass::Construct(&this->AIIonCannonEngineerValue[3], 0, 0);
    this->AIIonCannonHarvesterValue[0] = 10;
    this->AIIonCannonThiefValue[3] = 0;
    this->AIIonCannonEngineerValue[3] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->AIIonCannonHarvesterValue[2], 0, 0);
    this->AIIonCannonMCVValue[3] = 10;
    this->AIIonCannonMCVValue[2] = 0;
    this->AIIonCannonHarvesterValue[2] = (int)&TypeList<int>::`vftable';
    this->AIIonCannonAPCValue[1] = 5;
    VectorClass::Construct(&this->AIIonCannonAPCValue[2], 0, 0);
    this->AIIonCannonBaseDefenseValue[3] = 10;
    this->AIIonCannonBaseDefenseValue[2] = 0;
    this->AIIonCannonAPCValue[2] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->AIIonCannonPlugValue[1], 0, 0);
    this->AIIonCannonHelipadValue[2] = 10;
    this->AIIonCannonHelipadValue[1] = 0;
    this->AIIonCannonPlugValue[1] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(this->AIIonCannonTempleValue, 0, 0);
    this->MultiplayerAICM[0] = 10;
    this->AIAlternateProductionCreditCutoff = 0;
    this->AIIonCannonTempleValue[0] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->MultiplayerAICM[2], 0, 0);
    this->AIVirtualPurifiers[3] = 10;
    this->AIVirtualPurifiers[2] = 0;
    this->MultiplayerAICM[2] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->AISlaveMinerNumber[3], 0, 0);
    this->AIExtraRefineries[0] = 10;
    this->HarvestersPerRefinery[3] = 0;
    this->AISlaveMinerNumber[3] = (int)&TypeList<int>::`vftable';
    this->AIExtraRefineries[2] = 25;
    this->AIExtraRefineries[3] = 10;
    VectorClass::Construct(this->MinimumAIDefensiveTeams, 0, 0);
    this->MaximumAIDefensiveTeams[1] = 10;
    this->MaximumAIDefensiveTeams[0] = 0;
    this->MinimumAIDefensiveTeams[0] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->MaximumAIDefensiveTeams[3], 0, 0);
    *(uint32_t *)this->gapF18 = 10;
    this->TotalAITeamCap[3] = 0;
    this->MaximumAIDefensiveTeams[3] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->AIUseTurbineUpgradeProbability, 0, 0);
    this->FillEarliestTeamProbability[3] = 10;
    this->FillEarliestTeamProbability[2] = 0;
    LODWORD(this->AIUseTurbineUpgradeProbability) = &TypeList<int>::`vftable';
    *(uint32_t *)&this->gapF38[4] = 1048576000;
    this->CloakDelay = 0x3F8000003F800000LL;
    this->GameSpeedBias = 0x3F80000000000005LL;
    this->BaseBias = 0x23F800000LL;
    this->ExpSpread = 0x23F800000LL;
    this->FireSupress = 5;
    this->MaxIQLevels = 1065353216;
    LOBYTE(this->SuperWeapons) = 1;
    this->Production = 0;
    this->GuardArea = 0;
    this->RepairSell = 0;
    this->AutoCrush = 0;
    this->Scatter = 0;
    this->ContentScan = 0;
    this->Aircraft = 0;
    this->Harvester = 0;
    this->SellBack = 0;
    this->AIBaseSpacing = 0;
    this->SilverCrate[0] = 0;
    this->SilverCrate[1] = 0;
    this->SilverCrate[2] = 0;
    this->SilverCrate[3] = 0;
    this->SilverCrate[4] = 0;
    this->SilverCrate[5] = 0;
    this->SilverCrate[6] = 0;
    this->WoodCrate[0] = 0;
    this->WoodCrate[1] = 0;
    this->WoodCrate[2] = 0;
    this->WoodCrate[3] = 0;
    this->WoodCrate[4] = 0;
    this->WoodCrate[5] = 0;
    this->WoodCrate[6] = 0;
    this->WaterCrate[0] = 100;
    this->WaterCrate[1] = 450;
    LOBYTE(this->WaterCrate[2]) = 0;
    BYTE1(this->WaterCrate[2]) = 0;
    this->WaterCrate[3] = 8;
    this->WaterCrate[4] = 0;
    this->WaterCrate[5] = 0;
    this->WaterCrate[6] = 0;
    this->CrateMinimum = 0;
    this->CrateMaximum = 3;
    this->unknown_int_1478 = 0;
    this->DropZoneAnim = 0;
    RulesClass::readIQ(&this->MinMoney, 0, 0);
    this->UnitCount = 10;
    this->MinUnitCount = 0;
    this->MinMoney = (int)&TypeList<TerrainTypeClass const *>::`vftable';
    this->TechLevel = 0;
    this->GameSpeed = 0;
    this->AIDifficultyStruct = 0;
    this->AIPlayers = 0;
    *(uint32_t *)&this->BridgeDestruction = 0;
    *(uint32_t *)&this->TiberiumGrows = 0;
    *(uint32_t *)&this->MultiEngineer = 0;
    *(uint32_t *)&this->MCVRedeploys = 0;
    this->DropZoneRadius = 0;
    LODWORD(this->MessageDelay) = 0;
    this->SavourDelay = 0;
    this->Players = 0;
    *(uint32_t *)this->gap104C = 0;
    this->BaseDefenseDelay = 0;
    this->SuspendPriority = 0;
    *(uint32_t *)this->gap105C = 0;
    this->SuspendDelay = 0;
    this->SurvivorRate = 0;
    this->AlliedSurvivorDivisor = 0;
    this->SovietSurvivorDivisor = 0;
    this->ThirdSurvivorDivisor = 0;
    *(uint32_t *)this->gap107C = 0;
    this->ReloadRate = 0;
    this->AutocreateTime = 0;
    this->BuildupTime = 0;
    this->HarvesterLoadRate = 0;
    *(uint32_t *)this->gap109C = 1073217536;
    this->HarvesterDumpRate = 0x4008000000000000LL;
    this->AtomDamage = 0;
    *(uint32_t *)this->gap10AC = 1075052544;
    this->Easy[0] = 0;
    this->Easy[1] = 1072168960;
    this->Easy[2] = -343597384;
    this->Easy[3] = 1069463633;
    this->Easy[4] = 5;
    this->Easy[6] = -343597384;
    this->Easy[7] = 1069463633;
    this->Easy[8] = 5;
    this->Easy[10] = 1202590843;
    this->Easy[11] = 1069841121;
    this->Easy[12] = 10;
    this->Easy[14] = 515396076;
    this->Easy[15] = 1069673349;
    this->Easy[16] = 10;
    this->Easy[18] = 0;
    this->Easy[19] = 1071644672;
    this->Normal[0] = 40;
    this->Normal[2] = -1717986918;
    this->Normal[3] = 1069128089;
    this->Normal[4] = 2;
    this->Normal[6] = 1202590843;
    this->Normal[7] = 1069841121;
    this->Normal[8] = 2;
    this->Normal[9] = 4;
    this->Normal[10] = 1202590843;
    this->Normal[11] = 1069841121;
    this->Normal[12] = 3;
    this->Normal[13] = 50;
    this->Normal[14] = 2000;
    this->Normal[15] = 2;
    this->Normal[16] = 2000;
    this->Normal[17] = 25;
    this->Normal[18] = 0;
    this->Difficult[0] = -755914244;
    this->Difficult[1] = 1066426957;
    VectorClass::Construct(&this->Difficult[2], 0, 0);
    this->Difficult[7] = 10;
    this->Difficult[6] = 0;
    this->Difficult[2] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->Difficult[9], 0, 0);
    this->Difficult[14] = 10;
    this->Difficult[13] = 0;
    this->Difficult[9] = (int)&TypeList<int>::`vftable';
    this->Difficult[16] = 5000;
    VectorClass::Construct(&this->Difficult[17], 0, 0);
    LODWORD(this->ShroudRate) = 10;
    HIDWORD(this->GrowthRate) = 0;
    this->Difficult[17] = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->FogRate, 0, 0);
    this->VeinGrowthRate = 0xA00000000LL;
    LODWORD(this->FogRate) = &TypeList<int>::`vftable';
    VectorClass::Construct(this->gap11CC, 0, 0);
    LODWORD(this->CrateRegen) = 10;
    HIDWORD(this->AmbientChangeStep) = 0;
    *(uint32_t *)this->gap11CC = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->TimerWarning, 0, 0);
    this->unknown_double_1690 = 0xA00000000LL;
    LODWORD(this->TimerWarning) = &TypeList<int>::`vftable';
    VectorClass::Construct((uint32_t *)&this->unknown_double_1698 + 1, 0, 0);
    LODWORD(this->DamageDelay) = 10;
    HIDWORD(this->SpeakDelay) = 0;
    HIDWORD(this->unknown_double_1698) = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->Gravity, 0, 0);
    this->RepairStep = 10;
    this->MaxDamage = 0;
    this->Gravity = (int)&TypeList<int>::`vftable';
    VectorClass::Construct((uint32_t *)&this->RepairPercent + 1, 0, 0);
    LODWORD(this->URepairRate) = 10;
    HIDWORD(this->RepairRate) = 0;
    HIDWORD(this->RepairPercent) = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->IRepairRate, 0, 0);
    this->ConditionYellow = 0xA00000000LL;
    LODWORD(this->IRepairRate) = &TypeList<int>::`vftable';
    VectorClass::Construct((uint32_t *)&this->ConditionRed + 1, 0, 0);
    this->RelaxedStray = 10;
    this->Stray = 0;
    HIDWORD(this->ConditionRed) = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->Crush, 0, 0);
    this->RefundPercent = 0xA00000000LL;
    this->Crush = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(this->gap12AC, 0, 0);
    this->CreditReserve = 10;
    HIDWORD(this->C4Delay) = 0;
    *(uint32_t *)this->gap12AC = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->PathDelay, 0, 0);
    this->MovieTime = 0xA00000000LL;
    LODWORD(this->PathDelay) = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->TiberiumLongScan, 0, 0);
    this->SlaveMinerKickFrameDelay = 10;
    this->SlaveMinerScanCorrection = 0;
    this->TiberiumLongScan = (int)&TypeList<int>::`vftable';
    this->LightningDamage = 1000;
    VectorClass::Construct(&this->LightningStormDuration, 0, 0);
    *(uint32_t *)&this->LightningPrintText = 10;
    this->LightningSeparation = 0;
    this->LightningStormDuration = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->ForceShieldRadius, 0, 0);
    this->CollapseChance = 10;
    *(uint32_t *)&this->MutateExplosion = 0;
    this->ForceShieldRadius = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->ExtraUnitLight, 0, 0);
    *(uint32_t *)&this->SeparateAircraft = 10;
    *(uint32_t *)&this->FineDiffControl = 0;
    LODWORD(this->ExtraUnitLight) = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->ShroudGrow, 0, 0);
    this->RadDurationMultiple = 10;
    this->TalkBubbleTime = 0.0;
    *(uint32_t *)&this->ShroudGrow = &TypeList<int>::`vftable';
    VectorClass::Construct(&this->RadLevelMax, 0, 0);
    LODWORD(this->RadLightFactor) = 10;
    HIDWORD(this->RadLevelFactor) = 0;
    this->RadLevelMax = (int)&TypeList<int>::`vftable';
    VectorClass::Construct(&this->RadTintFactor, 0, 0);
    this->RadSiteWarhead = 10;
    this->RadColor[2] = 0;
    LODWORD(this->RadTintFactor) = &TypeList<int>::`vftable';
    VectorClass::Construct(this->gap13AC, 0, 0);
    *(uint32_t *)&this->AlliedWallTransparency = 10;
    HIDWORD(this->ElevationBonusCap) = 0;
    *(uint32_t *)this->gap13AC = &TypeList<int>::`vftable';
    DynamicVectorClass::Construct(&this->WallPenetratorThreshold, 0, 0);
    LODWORD(this->WallPenetratorThreshold) = &TypeList<int>::`vftable';
    this->ChronoBeamColor[0] = 0;
    this->ChronoBeamColor[1] = 1072693248;
    DynamicVectorClass::Construct(&this->ChronoBeamColor[2], 0, 0);
    this->ChronoBeamColor[2] = (int)&TypeList<int>::`vftable';
    this->BerserkColor = 0;
    this->ForceShieldColor = 0;
    this->DirectRockingCoefficient = 0.0;
    this->FallBackCoefficient = 1.875;
    *((uint32_t *)this + 1288) = 0;
    *((uint32_t *)this + 1289) = 1072693248;
    *((uint32_t *)this + 1290) = 0;
    *((uint32_t *)this + 1291) = 1071644672;
    *((uint32_t *)this + 1292) = 256;
    *((uint32_t *)this + 1293) = 5;
    *((uint32_t *)this + 1294) = 4;
    *((uint32_t *)this + 1295) = 5;
    *((_QWORD *)this + 648) = 0x300000004LL;
    *((_QWORD *)this + 649) = 0x300000002LL;
    *((uint32_t *)this + 1300) = 4;
    *((uint32_t *)this + 1301) = 4;
    *((uint32_t *)this + 1302) = 3;
    *((uint32_t *)this + 1303) = 2;
    *((uint32_t *)this + 1304) = 1;
    *((uint32_t *)this + 1305) = 2;
    *((uint32_t *)this + 1306) = 0;
    *((uint32_t *)this + 1307) = 0;
    *((uint32_t *)this + 1308) = 1;
    *((uint32_t *)this + 1309) = 255;
    *((uint32_t *)this + 1310) = 0x2000;
    *((uint32_t *)this + 1311) = 0;
    *((uint32_t *)this + 1312) = 2500;
    *((uint32_t *)this + 1313) = 10000;
    *((uint32_t *)this + 1314) = 10000;
    *((uint32_t *)this + 1315) = 100;
    *((uint32_t *)this + 1316) = 1;
    *((uint32_t *)this + 1317) = 10;
    *((uint32_t *)this + 1318) = 20;
    *((uint32_t *)this + 1319) = 10;
    *((uint32_t *)this + 1320) = 6;
    *((uint32_t *)this + 1321) = 1;
    *((uint32_t *)this + 1322) = 1;
    *((uint32_t *)this + 1323) = 16842753;
    *((uint32_t *)this + 1324) = 257;
    *((uint32_t *)this + 1325) = 0;
    *((uint32_t *)this + 1326) = 16843009;
    *((uint32_t *)this + 1327) = 1024;
    *((uint32_t *)this + 1328) = 858993459;
    *((uint32_t *)this + 1329) = 1071854387;
    *((uint32_t *)this + 1330) = -343597384;
    *((uint32_t *)this + 1331) = 1067366481;
    *((uint32_t *)this + 1332) = 8;
    *((_QWORD *)this + 667) = 0x3FD0000000000000LL;
    *((uint32_t *)this + 1336) = 20;
    *((_QWORD *)this + 669) = 0x4000000000000000LL;
    *((uint32_t *)this + 1340) = 0;
    *((uint32_t *)this + 1341) = 1071644672;
    *((uint32_t *)this + 1342) = 200;
    *((uint32_t *)this + 1343) = 100;
    *((uint32_t *)this + 1344) = 300;
    *((uint32_t *)this + 1346) = -1717986918;
    *((uint32_t *)this + 1347) = 1068079513;
    *((uint32_t *)this + 1348) = 0;
    *((uint32_t *)this + 1349) = 1075052544;
    *((uint32_t *)this + 1350) = -1717986918;
    *((uint32_t *)this + 1351) = 1068079513;
    *((uint32_t *)this + 1352) = 2;
    *((uint32_t *)this + 1354) = -755914244;
    *((uint32_t *)this + 1355) = 1066426957;
    *((uint32_t *)this + 1356) = 1000;
    *((uint32_t *)this + 1422) = 0;
    *((uint32_t *)this + 1423) = 0x40000000;
    *((uint32_t *)this + 1424) = 0;
    *((uint32_t *)this + 1425) = 1074790400;
    *((uint32_t *)this + 1426) = -1717986918;
    *((uint32_t *)this + 1427) = 1068079513;
    *((uint32_t *)this + 1428) = 0;
    *((uint32_t *)this + 1429) = 1072693248;
    *((uint32_t *)this + 1430) = 0;
    *((uint32_t *)this + 1431) = 1072693248;
    *((uint32_t *)this + 1432) = 500;
    *((uint32_t *)this + 1434) = -1717986918;
    *((uint32_t *)this + 1435) = 1070176665;
    *((uint32_t *)this + 1436) = -1717986918;
    *((uint32_t *)this + 1437) = 1069128089;
    *((uint32_t *)this + 1438) = 0;
    *((uint32_t *)this + 1439) = 1076101120;
    *((uint32_t *)this + 1440) = 0;
    *((uint32_t *)this + 1441) = 0x40000000;
    *((uint32_t *)this + 1444) = 0;
    *((uint32_t *)this + 1445) = 1076625408;
    *((uint32_t *)this + 1446) = 0;
    *((uint32_t *)this + 1447) = 1075052544;
    *((uint32_t *)this + 1448) = 0;
    *((uint32_t *)this + 1449) = 1076101120;
    *((uint32_t *)this + 1450) = 0;
    *((uint32_t *)this + 1451) = 0x40000000;
    *((uint32_t *)this + 1452) = 0;
    *((uint32_t *)this + 1453) = 1072693248;
    *((uint32_t *)this + 1454) = 3;
    *((uint32_t *)this + 1455) = 50;
    *((uint32_t *)this + 1456) = 0;
    *((uint32_t *)this + 1457) = 1;
    *((uint32_t *)this + 1458) = 1000;
    *((uint32_t *)this + 1459) = 5;
    *((uint32_t *)this + 1460) = 0;
    *((uint32_t *)this + 1461) = 1070596096;
    *((uint32_t *)this + 1462) = 1;
    *((uint32_t *)this + 1464) = -755914244;
    *((uint32_t *)this + 1465) = 1066426957;
    *((uint32_t *)this + 1466) = -755914244;
    *((uint32_t *)this + 1467) = 1066426957;
    *((uint32_t *)this + 1468) = -755914244;
    *((uint32_t *)this + 1469) = 1066426957;
    *((uint32_t *)this + 1470) = 0;
    *((uint32_t *)this + 1471) = 1072693248;
    *((uint32_t *)this + 1472) = 0;
    *((uint32_t *)this + 1473) = 1071644672;
    *((uint32_t *)this + 1474) = 0;
    *((uint32_t *)this + 1475) = 1071644672;
    *((uint32_t *)this + 1476) = -309237645;
    *((uint32_t *)this + 1477) = 1068842876;
    *((uint32_t *)this + 1478) = 640;
    *((uint32_t *)this + 1479) = 512;
    *((uint32_t *)this + 1480) = 512;
    *((uint32_t *)this + 1482) = 384;
    *((uint32_t *)this + 1483) = 640;
    *((uint32_t *)this + 1484) = 512;
    *((uint32_t *)this + 1485) = 256;
    *((uint32_t *)this + 1486) = 0;
    *((uint32_t *)this + 1487) = 1071644672;
    *((uint32_t *)this + 1488) = 1000;
    *((uint32_t *)this + 1490) = 0;
    *((uint32_t *)this + 1491) = 1072693248;
    *((uint32_t *)this + 1492) = -343597384;
    *((uint32_t *)this + 1493) = 1067366481;
    *((uint32_t *)this + 1494) = 1000;
    *((uint32_t *)this + 1496) = -755914244;
    *((uint32_t *)this + 1497) = 1066426957;
    *((uint32_t *)this + 1498) = 60;
    *((uint32_t *)this + 1500) = 0;
    *((uint32_t *)this + 1501) = 1070596096;
    *((uint32_t *)this + 1502) = 1536;
    *((uint32_t *)this + 1503) = 0x2000;
    *((uint32_t *)this + 1504) = 1280;
    *((uint32_t *)this + 1505) = 4096;
    *((uint32_t *)this + 1506) = 20480;
    *((uint32_t *)this + 1507) = 768;
    *((uint32_t *)this + 1508) = 0x7FFFFFFF;
    *((uint32_t *)this + 1509) = 250;
    *((_QWORD *)this + 755) = 0x384000000C8LL;
    *((uint32_t *)this + 1512) = 90;
    *((uint32_t *)this + 1513) = 10;
    *((_QWORD *)this + 757) = 0x30000000ALL;
    *((uint8_t *)this + 6064) = 1;
    *((uint32_t *)this + 1517) = 0;
    *((uint32_t *)this + 1518) = 10;
    *((uint32_t *)this + 1519) = 400;
    *((uint32_t *)this + 1520) = 800;
    *((uint32_t *)this + 1521) = 50;
    *((uint8_t *)this + 6088) = 0;
    *((uint32_t *)this + 1523) = 100;
    *((uint32_t *)this + 1524) = 0;
    *((uint32_t *)this + 1525) = 0;
    *((uint32_t *)this + 1526) = 0;
    *((uint32_t *)this + 1527) = 0;
    *((uint32_t *)this + 1528) = 16842753;
    *((uint32_t *)this + 1529) = 16842752;
    *((uint32_t *)this + 1530) = 0;
    *((uint32_t *)this + 1531) = 0x10000;
    *((uint32_t *)this + 1532) = 16843008;
    *((uint32_t *)this + 1533) = 0;
    *((uint32_t *)this + 1534) = 1065353216;
    *((uint32_t *)this + 1535) = 0;
    *((uint32_t *)this + 1536) = 300;
    *((uint32_t *)this + 1537) = 0;
    *((uint32_t *)this + 1538) = 0;
    *((uint32_t *)this + 1539) = 0;
    *((uint32_t *)this + 1540) = 0;
    *((uint32_t *)this + 1541) = 0;
    *((uint32_t *)this + 1542) = 0;
    *((uint32_t *)this + 1543) = 0;
    *((uint32_t *)this + 1544) = 0;
    *((uint32_t *)this + 1545) = 0;
    *((uint32_t *)this + 1546) = 0;
    *((uint32_t *)this + 1547) = 0;
    *((uint8_t *)this + 6192) = 0;
    *((uint8_t *)this + 6193) = 0;
    *((uint8_t *)this + 6194) = 0;
    *((uint32_t *)this + 1549) = 0;
    *((uint32_t *)this + 1550) = 0;
    *((uint32_t *)this + 1552) = 0;
    *((uint32_t *)this + 1553) = 1072693248;
    *((uint32_t *)this + 1554) = 0;
    *((uint32_t *)this + 1555) = 0;
    *((uint8_t *)this + 6224) = 0;
    *((uint32_t *)this + 1558) = 0;
    *((uint32_t *)this + 1559) = 1071644672;
    *((uint32_t *)this + 1560) = 0xFFFFFF;
    *((uint32_t *)this + 1561) = 0;
    *((uint32_t *)this + 1562) = 0;
    v3 = (char *)this + 6260;
    *((uint32_t *)this + 1563) = 50;
    *((uint32_t *)this + 1564) = 0;
    v4 = (char *)this + 6260;
    v5 = 16;
    do
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4 += 3;
    --v5;
    while ( v5 );
    *((uint32_t *)this + 1577) = 0;
    *((uint32_t *)this + 1578) = 0;
    *((uint32_t *)this + 1579) = 0;
    *((uint32_t *)this + 1580) = 0;
    *((uint32_t *)this + 1581) = 1065353216;
    *((uint32_t *)this + 1582) = 1065353216;
    this->TiberiumExplosionDamage = 0;
    this->TiberiumStrength = 60;
    this->MinLowPowerProductionSpeed = 0.0;
    this->MaxLowPowerProductionSpeed = 1.0;
    this->LowPowerPenaltyModifier = 0.050000001;
    LODWORD(this->MultipleFactory) = 1;
    this->MaximumCheerRate = 1053609165;
    *(uint32_t *)this->gap4CC = 768;
    LODWORD(this->TreeFlammability) = 1000;
    HIDWORD(this->TreeFlammability) = 1000;
    LODWORD(this->MissileSpeedVar) = 256;
    BYTE4(this->MissileSpeedVar) = 1;
    LODWORD(this->MissileROTVar) = 0;
    HIDWORD(this->MissileROTVar) = 10;
    this->MissileSafetyAltitude = 60;
    this->DropPodWeapon = 0;
    this->DropPodHeight = 1065353216;
    this->DropPodSpeed = 1028443341;
    LODWORD(this->DropPodAngle) = 1;
    HIDWORD(this->DropPodAngle) = 1053609165;
    LODWORD(this->ScrollMultiplier) = 768;
    HIDWORD(this->ScrollMultiplier) = 1000;
    LODWORD(this->CrewEscape) = 1000;
    HIDWORD(this->CrewEscape) = 128;
    LOBYTE(this->ShakeScreen) = 0;
    this->HoverHeight = 0;
    LODWORD(this->HoverBob) = 10;
    HIDWORD(this->HoverBob) = 30;
    LODWORD(this->HoverBoost) = 1065353216;
    HIDWORD(this->HoverBoost) = 1065353216;
    LODWORD(this->HoverAcceleration) = 1065353216;
    HIDWORD(this->HoverAcceleration) = 1;
    LODWORD(this->HoverBrake) = 1058642330;
    HIDWORD(this->HoverBrake) = 768;
    LODWORD(this->HoverDampen) = 500;
    HIDWORD(this->HoverDampen) = 500;
    LODWORD(this->PlacementDelay) = 128;
    BYTE4(this->PlacementDelay) = 0;
    this->ExplosiveVoxelDebris[0] = 0;
    v6 = 16;
    do
    v7 = v3;
    v3 += 3;
    --v6;
    *(_WORD *)v7 = 0;
    v7[2] = 0;
    while ( v6 );
    return (int)this;
}

int  RulesClass::DTOR(RulesClass *this)
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
    v2 = &this->ChronoBeamColor[2];
    *v2 = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)v2);
    LODWORD(this->WallPenetratorThreshold) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->WallPenetratorThreshold);
    *(uint32_t *)this->gap13AC = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)this->gap13AC);
    LODWORD(this->RadTintFactor) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->RadTintFactor);
    this->RadLevelMax = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->RadLevelMax);
    *(uint32_t *)&this->ShroudGrow = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->ShroudGrow);
    LODWORD(this->ExtraUnitLight) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->ExtraUnitLight);
    this->ForceShieldRadius = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->ForceShieldRadius);
    this->LightningStormDuration = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->LightningStormDuration);
    this->TiberiumLongScan = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->TiberiumLongScan);
    LODWORD(this->PathDelay) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->PathDelay);
    *(uint32_t *)this->gap12AC = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)this->gap12AC);
    this->Crush = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->Crush);
    HIDWORD(this->ConditionRed) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->ConditionRed + 4);
    LODWORD(this->IRepairRate) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->IRepairRate);
    HIDWORD(this->RepairPercent) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->RepairPercent + 4);
    this->Gravity = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->Gravity);
    HIDWORD(this->unknown_double_1698) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->unknown_double_1698 + 4);
    LODWORD(this->TimerWarning) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->TimerWarning);
    *(uint32_t *)this->gap11CC = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)this->gap11CC);
    LODWORD(this->FogRate) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->FogRate);
    this->Difficult[17] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->Difficult[17]);
    this->Difficult[9] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->Difficult[9]);
    this->Difficult[2] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->Difficult[2]);
    this->MinMoney = (int)&VectorClass<TerrainTypeClass const *>::`vftable';
    TypeList_cptr_TerrainTypeClass::TryFreeAndClear((int)&this->MinMoney);
    LODWORD(this->AIUseTurbineUpgradeProbability) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->AIUseTurbineUpgradeProbability);
    this->MaximumAIDefensiveTeams[3] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->MaximumAIDefensiveTeams[3]);
    this->MinimumAIDefensiveTeams[0] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)this->MinimumAIDefensiveTeams);
    this->AISlaveMinerNumber[3] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->AISlaveMinerNumber[3]);
    this->MultiplayerAICM[2] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->MultiplayerAICM[2]);
    this->AIIonCannonTempleValue[0] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)this->AIIonCannonTempleValue);
    this->AIIonCannonPlugValue[1] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->AIIonCannonPlugValue[1]);
    this->AIIonCannonAPCValue[2] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->AIIonCannonAPCValue[2]);
    this->AIIonCannonHarvesterValue[2] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->AIIonCannonHarvesterValue[2]);
    this->AIIonCannonEngineerValue[3] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->AIIonCannonEngineerValue[3]);
    this->AIIonCannonWarFactoryValue[0] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)this->AIIonCannonWarFactoryValue);
    this->AIHateDelays[2] = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->AIHateDelays[2]);
    HIDWORD(this->PatrolScan) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->PatrolScan + 4);
    this->InfantryReserve = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->InfantryReserve);
    this->AALimit = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)&this->AALimit);
    *(uint32_t *)this->gapD1C = &VectorClass<UnitTypeClass const *>::`vftable';
    Vector::Destructor((int)this->gapD1C);
    LODWORD(this->AirstripRatio) = &VectorClass<InfantryTypeClass const *>::`vftable';
    Vector::Cleanup((int)&this->AirstripRatio);
    HIDWORD(this->TurboBoost) = &VectorClass<InfantryTypeClass const *>::`vftable';
    Vector::Cleanup((int)&this->TurboBoost + 4);
    LODWORD(this->DumbTargetStrengthCoefficient) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->DumbTargetStrengthCoefficient);
    HIDWORD(this->TargetDistanceCoefficientDefault) = &VectorClass<InfantryTypeClass const *>::`vftable';
    Vector::Cleanup((int)&this->TargetDistanceCoefficientDefault + 4);
    LODWORD(this->TargetEffectivenessCoefficientDefault) = &VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->TargetEffectivenessCoefficientDefault);
    this->DefaultFireStreamSystem = (int)&VectorClass<InfantryTypeClass const *>::`vftable';
    Vector::Cleanup((int)&this->DefaultFireStreamSystem);
    this->InfantryBlinkDisguiseTime = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->InfantryBlinkDisguiseTime);
    this->PsychicRevealRadius = (int)&VectorClass<InfantryTypeClass const *>::`vftable';
    Vector::Cleanup((int)&this->PsychicRevealRadius);
    this->IvanTimedDelay = (int)&VectorClass<int>::`vftable';
    VectorClass::Destroy((int)&this->IvanTimedDelay);
    this->DMislWarhead = (int)&VectorClass<InfantryTypeClass const *>::`vftable';
    Vector::Cleanup((int)&this->DMislWarhead);
    this->Engineer = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)&this->Engineer);
    LODWORD(this->OccupyDamageMultiplier) = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)&this->OccupyDamageMultiplier);
    this->OverloadDamage[2] = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)&this->OverloadDamage[2]);
    LODWORD(this->AISuperDefenseDistance) = &VectorClass<AircraftTypeClass const *>::`vftable';
    VectorClass::ClearAndFree4((int)&this->AISuperDefenseDistance);
    this->AICaptureLowMoneyMark = (int)&VectorClass<UnitTypeClass const *>::`vftable';
    Vector::Destructor((int)&this->AICaptureLowMoneyMark);
    this->AICaptureLowPower[1] = (int)&VectorClass<UnitTypeClass const *>::`vftable';
    Vector::Destructor((int)&this->AICaptureLowPower[1]);
    this->DisabledDisguiseDetectionPercent[1] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)&this->DisabledDisguiseDetectionPercent[1]);
    this->ApproachTargetResetMultiplier = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)&this->ApproachTargetResetMultiplier);
    this->ThirdBaseDefenseCounts[3] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)&this->ThirdBaseDefenseCounts[3]);
    v3 = (void *)this->SovietBaseDefenseCounts[1];
    this->SovietBaseDefenseCounts[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v3 && BYTE1(this->SovietBaseDefenseCounts[3]) )
    __3_YAXPAX_Z(v3);
    this->SovietBaseDefenseCounts[1] = 0;
    BYTE1(this->SovietBaseDefenseCounts[3]) = 0;
    this->SovietBaseDefenseCounts[2] = 0;
    HarvesterTooFarDistance = (void *)this->HarvesterTooFarDistance;
    this->AISafeDistance = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( HarvesterTooFarDistance && BYTE1(this->AlliedBaseDefenseCounts[0]) )
    __3_YAXPAX_Z(HarvesterTooFarDistance);
    this->HarvesterTooFarDistance = 0;
    BYTE1(this->AlliedBaseDefenseCounts[0]) = 0;
    this->ChronoHarvTooFarDistance = 0;
    SovietDisguise = (void *)this->SovietDisguise;
    this->AlliedDisguise = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( SovietDisguise && BYTE1(this->SpyPowerBlackout) )
    __3_YAXPAX_Z(SovietDisguise);
    this->SovietDisguise = 0;
    BYTE1(this->SpyPowerBlackout) = 0;
    this->ThirdDisguise = 0;
    v6 = (void *)this->SecretUnits[3];
    this->SecretUnits[2] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v6 && BYTE1(this->SecretBuildings[1]) )
    __3_YAXPAX_Z(v6);
    this->SecretUnits[3] = 0;
    BYTE1(this->SecretBuildings[1]) = 0;
    this->SecretBuildings[0] = 0;
    v7 = (void *)this->SecretInfantry[0];
    this->AnimToInfantry[3] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v7 && BYTE1(this->SecretInfantry[2]) )
    __3_YAXPAX_Z(v7);
    this->SecretInfantry[0] = 0;
    BYTE1(this->SecretInfantry[2]) = 0;
    this->SecretInfantry[1] = 0;
    v8 = (void *)this->YuriParaDropNum[1];
    this->YuriParaDropNum[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v8 && BYTE1(this->YuriParaDropNum[3]) )
    __3_YAXPAX_Z(v8);
    this->YuriParaDropNum[1] = 0;
    BYTE1(this->YuriParaDropNum[3]) = 0;
    this->YuriParaDropNum[2] = 0;
    v9 = (void *)this->SovParaDropNum[2];
    this->SovParaDropNum[1] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v9 && BYTE1(this->YuriParaDropInf[0]) )
    __3_YAXPAX_Z(v9);
    this->SovParaDropNum[2] = 0;
    BYTE1(this->YuriParaDropInf[0]) = 0;
    this->SovParaDropNum[3] = 0;
    v10 = (void *)this->AllyParaDropNum[3];
    this->AllyParaDropNum[2] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v10 && BYTE1(this->SovParaDropInf[1]) )
    __3_YAXPAX_Z(v10);
    this->AllyParaDropNum[3] = 0;
    BYTE1(this->SovParaDropInf[1]) = 0;
    this->SovParaDropInf[0] = 0;
    v11 = (void *)this->AllyParaDropInf[0];
    this->AmerParaDropNum[3] = (int)&VectorClass<int>::`vftable';
    if ( v11 && BYTE1(this->AllyParaDropInf[2]) )
    __3_YAXPAX_Z(v11);
    this->AllyParaDropInf[0] = 0;
    BYTE1(this->AllyParaDropInf[2]) = 0;
    this->AllyParaDropInf[1] = 0;
    v12 = (void *)this->AmerParaDropInf[1];
    this->AmerParaDropInf[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v12 && BYTE1(this->AmerParaDropInf[3]) )
    __3_YAXPAX_Z(v12);
    this->AmerParaDropInf[1] = 0;
    BYTE1(this->AmerParaDropInf[3]) = 0;
    this->AmerParaDropInf[2] = 0;
    ChronoDelay = (void *)this->ChronoDelay;
    this->EliteFlashTimer = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( ChronoDelay && BYTE1(this->ChronoDistanceFactor) )
    __3_YAXPAX_Z(ChronoDelay);
    this->ChronoDelay = 0;
    BYTE1(this->ChronoDistanceFactor) = 0;
    this->ChronoReinfDelay = 0;
    v14 = (void *)this->SplashList[1];
    this->SplashList[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v14 && BYTE1(this->SplashList[3]) )
    __3_YAXPAX_Z(v14);
    this->SplashList[1] = 0;
    BYTE1(this->SplashList[3]) = 0;
    this->SplashList[2] = 0;
    v15 = (void *)this->TreeFire[3];
    this->TreeFire[2] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v15 && BYTE1(this->Smoke_) )
    __3_YAXPAX_Z(v15);
    this->TreeFire[3] = 0;
    BYTE1(this->Smoke_) = 0;
    this->Smoke = 0;
    v16 = (void *)this->OnFire[0];
    this->PadAircraft[3] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v16 && BYTE1(this->OnFire[2]) )
    __3_YAXPAX_Z(v16);
    this->OnFire[0] = 0;
    BYTE1(this->OnFire[2]) = 0;
    this->OnFire[1] = 0;
    v17 = (void *)this->HarvesterUnit[1];
    this->HarvesterUnit[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v17 && BYTE1(this->HarvesterUnit[3]) )
    __3_YAXPAX_Z(v17);
    this->HarvesterUnit[1] = 0;
    BYTE1(this->HarvesterUnit[3]) = 0;
    this->HarvesterUnit[2] = 0;
    ComputerBaseDefenseResponse = (void *)this->ComputerBaseDefenseResponse;
    HIDWORD(this->GDIBaseDefenseCoefficient) = &VectorClass<BuildingTypeClass const *>::`vftable';
    if ( ComputerBaseDefenseResponse && BYTE1(this->BaseUnit[0]) )
    __3_YAXPAX_Z(ComputerBaseDefenseResponse);
    this->ComputerBaseDefenseResponse = 0;
    BYTE1(this->BaseUnit[0]) = 0;
    this->MaximumBaseDefenseValue = 0;
    GDIWallDefense_high = (void *)HIDWORD(this->GDIWallDefense);
    LODWORD(this->GDIWallDefense) = &VectorClass<BuildingTypeClass const *>::`vftable';
    if ( GDIWallDefense_high && BYTE5(this->GDIWallDefenseCoefficient) )
    __3_YAXPAX_Z(GDIWallDefense_high);
    HIDWORD(this->GDIWallDefense) = 0;
    BYTE5(this->GDIWallDefenseCoefficient) = 0;
    LODWORD(this->GDIWallDefenseCoefficient) = 0;
    v20 = (void *)this->BuildDummy[2];
    this->BuildDummy[1] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v20 && BYTE1(this->NeutralTechBuildings[0]) )
    __3_YAXPAX_Z(v20);
    this->BuildDummy[2] = 0;
    BYTE1(this->NeutralTechBuildings[0]) = 0;
    this->BuildDummy[3] = 0;
    v21 = (void *)this->NSGates[3];
    this->NSGates[2] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v21 && BYTE1(this->EWGates[1]) )
    __3_YAXPAX_Z(v21);
    this->NSGates[3] = 0;
    BYTE1(this->EWGates[1]) = 0;
    this->EWGates[0] = 0;
    v22 = (void *)this->BuildHelipad[3];
    this->BuildHelipad[2] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    if ( v22 && BYTE1(this->BuildRadar[1]) )
    __3_YAXPAX_Z(v22);
    this->BuildHelipad[3] = 0;
    BYTE1(this->BuildRadar[1]) = 0;
    this->BuildRadar[0] = 0;
    v23 = (void *)this->BuildAA[0];
    this->BuildPDefense[3] = (int)&VectorClass<SmudgeTypeClass const *>::`vftable';
    if ( v23 && BYTE1(this->BuildAA[2]) )
    __3_YAXPAX_Z(v23);
    this->BuildAA[0] = 0;
    BYTE1(this->BuildAA[2]) = 0;
    this->BuildAA[1] = 0;
    v24 = (void *)this->BuildDefense[1];
    this->BuildDefense[0] = (int)&VectorClass<SmudgeTypeClass const *>::`vftable';
    if ( v24 && BYTE1(this->BuildDefense[3]) )
    __3_YAXPAX_Z(v24);
    this->BuildDefense[1] = 0;
    BYTE1(this->BuildDefense[3]) = 0;
    this->BuildDefense[2] = 0;
    v25 = (void *)this->ThirdBaseDefenses[2];
    this->ThirdBaseDefenses[1] = (int)&VectorClass<SmudgeTypeClass const *>::`vftable';
    if ( v25 && BYTE1(this->AIForcePredictionFudge[0]) )
    __3_YAXPAX_Z(v25);
    this->ThirdBaseDefenses[2] = 0;
    BYTE1(this->AIForcePredictionFudge[0]) = 0;
    this->ThirdBaseDefenses[3] = 0;
    v26 = (void *)this->AlliedBaseDefenses[3];
    this->AlliedBaseDefenses[2] = (int)&VectorClass<SmudgeTypeClass const *>::`vftable';
    if ( v26 && BYTE1(this->SovietBaseDefenses[1]) )
    __3_YAXPAX_Z(v26);
    this->AlliedBaseDefenses[3] = 0;
    BYTE1(this->SovietBaseDefenses[1]) = 0;
    this->SovietBaseDefenses[0] = 0;
    v27 = (void *)this->BuildWeapons[0];
    this->BuildTech[3] = (int)&VectorClass<SmudgeTypeClass const *>::`vftable';
    if ( v27 && BYTE1(this->BuildWeapons[2]) )
    __3_YAXPAX_Z(v27);
    this->BuildWeapons[0] = 0;
    BYTE1(this->BuildWeapons[2]) = 0;
    this->BuildWeapons[1] = 0;
    v28 = (void *)this->RepairBay[1];
    this->RepairBay[0] = (int)&VectorClass<int>::`vftable';
    if ( v28 && BYTE1(this->RepairBay[3]) )
    __3_YAXPAX_Z(v28);
    this->RepairBay[1] = 0;
    BYTE1(this->RepairBay[3]) = 0;
    this->RepairBay[2] = 0;
    CameraRange = (void *)this->CameraRange;
    this->WindDirection = (int)&VectorClass<int>::`vftable';
    if ( CameraRange && BYTE1(this->ParachuteMaxFallRate) )
    __3_YAXPAX_Z(CameraRange);
    this->CameraRange = 0;
    BYTE1(this->ParachuteMaxFallRate) = 0;
    this->FlightLevel = 0;
    StopSound = (void *)this->StopSound;
    this->ChuteSound = (int)&VectorClass<int>::`vftable';
    if ( StopSound && BYTE1(this->ScatterSound) )
    __3_YAXPAX_Z(StopSound);
    this->StopSound = 0;
    BYTE1(this->ScatterSound) = 0;
    this->GuardSound = 0;
    v31 = (void *)this->CreditTicks[0];
    this->Construction = (int)&VectorClass<VoxelAnimTypeClass const *>::`vftable';
    if ( v31 && BYTE1(this->CreditTicks[2]) )
    __3_YAXPAX_Z(v31);
    this->CreditTicks[0] = 0;
    BYTE1(this->CreditTicks[2]) = 0;
    this->CreditTicks[1] = 0;
    v32 = (void *)this->CMisl[7];
    this->CMisl[6] = (int)&VectorClass<int>::`vftable';
    if ( v32 && BYTE1(this->CMisl[9]) )
    __3_YAXPAX_Z(v32);
    this->CMisl[7] = 0;
    BYTE1(this->CMisl[9]) = 0;
    this->CMisl[8] = 0;
    v33 = (void *)this->CMisl[0];
    this->DMisl[13] = (int)&VectorClass<int>::`vftable';
    if ( v33 && BYTE1(this->CMisl[2]) )
    __3_YAXPAX_Z(v33);
    this->CMisl[0] = 0;
    BYTE1(this->CMisl[2]) = 0;
    this->CMisl[1] = 0;
    v34 = (void *)this->DMisl[7];
    this->DMisl[6] = (int)&VectorClass<int>::`vftable';
    if ( v34 && BYTE1(this->DMisl[9]) )
    __3_YAXPAX_Z(v34);
    this->DMisl[7] = 0;
    BYTE1(this->DMisl[9]) = 0;
    this->DMisl[8] = 0;
    PrismSupportHeight = (void *)this->PrismSupportHeight;
    this->PrismSupportDuration = (int)&VectorClass<int>::`vftable';
    if ( PrismSupportHeight && BYTE1(this->V3Rocket[1]) )
    __3_YAXPAX_Z(PrismSupportHeight);
    this->PrismSupportHeight = 0;
    BYTE1(this->V3Rocket[1]) = 0;
    this->V3Rocket[0] = 0;
    IonCannonDamage = (void *)this->IonCannonDamage;
    this->RadarEventDurations[3] = (int)&VectorClass<int>::`vftable';
    if ( IonCannonDamage && BYTE1(this->PrismType) )
    __3_YAXPAX_Z(IonCannonDamage);
    this->IonCannonDamage = 0;
    BYTE1(this->PrismType) = 0;
    this->RailgunDamageRadius = 0;
    v37 = (void *)this->RadarEventVisibilityDurations[1];
    this->RadarEventVisibilityDurations[0] = (int)&VectorClass<int>::`vftable';
    if ( v37 && BYTE1(this->RadarEventVisibilityDurations[3]) )
    __3_YAXPAX_Z(v37);
    this->RadarEventVisibilityDurations[1] = 0;
    BYTE1(this->RadarEventVisibilityDurations[3]) = 0;
    this->RadarEventVisibilityDurations[2] = 0;
    WobblesPerSecond_high = (void *)HIDWORD(this->WobblesPerSecond);
    LODWORD(this->WobblesPerSecond) = &VectorClass<int>::`vftable';
    if ( WobblesPerSecond_high && BYTE1(this->RadarEventSuppressionDistances[0]) )
    __3_YAXPAX_Z(WobblesPerSecond_high);
    HIDWORD(this->WobblesPerSecond) = 0;
    BYTE1(this->RadarEventSuppressionDistances[0]) = 0;
    this->WobbleDeviation = 0;
    Climb = (void *)this->Climb;
    *(uint32_t *)&this->gap370[4] = &VectorClass<int>::`vftable';
    if ( Climb && BYTE1(this->CruiseHeight) )
    __3_YAXPAX_Z(Climb);
    LODWORD(this->Climb) = 0;
    BYTE1(this->CruiseHeight) = 0;
    HIDWORD(this->Climb) = 0;
    PrerequisiteProcAlternate = (void *)this->PrerequisiteProcAlternate;
    this->PrerequisiteProc[3] = (int)&VectorClass<int>::`vftable';
    if ( PrerequisiteProcAlternate && BYTE1(this->GateDown) )
    __3_YAXPAX_Z(PrerequisiteProcAlternate);
    this->PrerequisiteProcAlternate = 0;
    BYTE1(this->GateDown) = 0;
    this->GateUp = 0;
    WarpIn = (void *)this->WarpIn;
    this->ChronoBeam = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    if ( WarpIn && BYTE1(this->WarpAway) )
    __3_YAXPAX_Z(WarpIn);
    this->WarpIn = 0;
    BYTE1(this->WarpAway) = 0;
    this->WarpOut = 0;
    DrainAnimationType = (void *)this->DrainAnimationType;
    this->DrainMoneyAmount = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    if ( DrainAnimationType && BYTE1(this->PermaControlledAnimationType) )
    __3_YAXPAX_Z(DrainAnimationType);
    this->DrainAnimationType = 0;
    BYTE1(this->PermaControlledAnimationType) = 0;
    this->ControlledAnimationType = 0;
    DominatorSecondAnim = (void *)this->DominatorSecondAnim;
    this->DominatorFirstAnim = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    if ( DominatorSecondAnim && BYTE1(this->DominatorCaptureRange) )
    __3_YAXPAX_Z(DominatorSecondAnim);
    this->DominatorSecondAnim = 0;
    BYTE1(this->DominatorCaptureRange) = 0;
    this->DominatorFireAtPercentage = 0;
    GUIOpenSound = (void *)this->GUIOpenSound;
    this->GUITabSound = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    if ( GUIOpenSound && BYTE1(this->GUIMoveOutSound) )
    __3_YAXPAX_Z(GUIOpenSound);
    this->GUIOpenSound = 0;
    BYTE1(this->GUIMoveOutSound) = 0;
    this->GUICloseSound = 0;
    CreateUnitSound = (void *)this->CreateUnitSound;
    this->DigSound = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    if ( CreateUnitSound && BYTE1(this->CreateAircraftSound) )
    __3_YAXPAX_Z(CreateUnitSound);
    this->CreateUnitSound = 0;
    BYTE1(this->CreateAircraftSound) = 0;
    this->CreateInfantrySound = 0;
    v46 = (void *)this->MetallicDebris[2];
    this->MetallicDebris[1] = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    if ( v46 && BYTE1(this->BridgeExplosions[0]) )
    __3_YAXPAX_Z(v46);
    this->MetallicDebris[2] = 0;
    BYTE1(this->BridgeExplosions[0]) = 0;
    this->MetallicDebris[3] = 0;
    v47 = (void *)this->DropPod[3];
    this->DropPod[2] = (int)&VectorClass<AnimTypeClass const *>::`vftable';
    if ( v47 && BYTE1(this->DeadBodies[1]) )
    __3_YAXPAX_Z(v47);
    this->DropPod[3] = 0;
    BYTE1(this->DeadBodies[1]) = 0;
    this->DeadBodies[0] = 0;
    result = this->BarrelDebris[1];
    this->BarrelDebris[0] = (int)&VectorClass<VoxelAnimTypeClass const *>::`vftable';
    if ( result && BYTE1(this->BarrelDebris[3]) )
    __3_YAXPAX_Z((void *)result);
    this->BarrelDebris[1] = 0;
    BYTE1(this->BarrelDebris[3]) = 0;
    this->BarrelDebris[2] = 0;
    return result;
}

int  RulesClass::Reset(RulesClass *this)
{
    void *v2; // edi
    char *v3; // ebp
    char *v4; // eax
    int v5; // ecx
    char *v6; // esi
    int v7; // esi
    int KeyCount; // ebx
    unsigned __int8 *StringByIndex; // eax
    int Coord; // eax
    char *v11; // edx
    char v12; // cl
    __int16 v14; // [esp+50h] [ebp-D0h] BYREF
    char v15; // [esp+52h] [ebp-CEh]
    RulesClass *v16; // [esp+54h] [ebp-CCh]
    char v17[4]; // [esp+58h] [ebp-C8h] BYREF
    void *v18[4]; // [esp+5Ch] [ebp-C4h] BYREF
    uint32_t v19[3]; // [esp+6Ch] [ebp-B4h] BYREF
    uint32_t v20[6]; // [esp+78h] [ebp-A8h] BYREF
    char v21; // [esp+90h] [ebp-90h]
    int v22; // [esp+94h] [ebp-8Ch]
    int v23; // [esp+98h] [ebp-88h]
    char v24; // [esp+9Ch] [ebp-84h]
    uint32_t v25[22]; // [esp+B4h] [ebp-6Ch] BYREF
    char v26[12]; // [esp+10Ch] [ebp-14h] BYREF
    int v27; // [esp+118h] [ebp-8h]
    char *v28; // [esp+124h] [ebp+4h]
    v16 = this;
    while ( g_AnimClass_SaveState )
    v2 = *(void **)BuildingTypeClass_AnimTable;
    if ( *(uint32_t *)BuildingTypeClass_AnimTable )
    ColorScheme::Destructor(*(uint32_t *)BuildingTypeClass_AnimTable);
    __3_YAXPAX_Z(v2);
    g_AnimClass_SaveState = 0;
    VectorClass_ptr_ColorScheme::Remove(&ColorScheme_Array);
    sub_6269A0();
    while ( g_MultiplayerLogState )
    if ( *(uint32_t *)g_TeamTypePool )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_TeamTypePool + 32))(*(uint32_t *)g_TeamTypePool, 1);
    while ( g_MultiplayerLogFlags )
    if ( *(uint32_t *)g_MultiplayerLogEntry )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_MultiplayerLogEntry + 32))(
    *(uint32_t *)g_MultiplayerLogEntry,
    1);
    while ( g_MultiplayerDebugState )
    if ( *(uint32_t *)g_MultiplayerSyncState )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_MultiplayerSyncState + 32))(
    *(uint32_t *)g_MultiplayerSyncState,
    1);
    while ( g_ObjectTypeConfig )
    if ( *(uint32_t *)BuildingTypeClass_Array->gap0 )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)BuildingTypeClass_Array->gap0 + 32))(
    *(uint32_t *)BuildingTypeClass_Array->gap0,
    1);
    while ( FactoryClass_Count )
    if ( *(uint32_t *)FactoryClass_Array )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)FactoryClass_Array + 32))(*(uint32_t *)FactoryClass_Array, 1);
    while ( g_RulesClassInitState )
    if ( *(uint32_t *)dword_A8E31C )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)dword_A8E31C + 32))(*(uint32_t *)dword_A8E31C, 1);
    while ( g_LoadScreenProgress )
    if ( *(uint32_t *)Factory_ExitCellTable )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)Factory_ExitCellTable + 32))(
    *(uint32_t *)Factory_ExitCellTable,
    1);
    while ( g_CrateCount )
    if ( *(uint32_t *)g_UnitTypeCount2 )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_UnitTypeCount2 + 32))(*(uint32_t *)g_UnitTypeCount2, 1);
    while ( g_TypeClass_FindCache )
    if ( *(uint32_t *)g_AircraftTypeCount )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_AircraftTypeCount + 32))(*(uint32_t *)g_AircraftTypeCount, 1);
    while ( g_BulletTypeInitState )
    if ( *(uint32_t *)dword_A83C84 )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)dword_A83C84 + 32))(*(uint32_t *)dword_A83C84, 1);
    while ( g_TriggerClassCount )
    if ( *(uint32_t *)g_TriggerTypeCount )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_TriggerTypeCount + 32))(*(uint32_t *)g_TriggerTypeCount, 1);
    while ( g_HouseClassInitState )
    if ( *(uint32_t *)g_SuperWeaponPool )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_SuperWeaponPool + 32))(*(uint32_t *)g_SuperWeaponPool, 1);
    while ( g_BuildingTypeCount2 )
    if ( *(uint32_t *)g_AnimTypeCount )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_AnimTypeCount + 32))(*(uint32_t *)g_AnimTypeCount, 1);
    while ( g_WeaponTypePool )
    if ( *(uint32_t *)g_WeaponTypeConfig )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_WeaponTypeConfig + 32))(*(uint32_t *)g_WeaponTypeConfig, 1);
    while ( g_WarheadTypePool )
    if ( *(uint32_t *)dword_8874C4 )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)dword_8874C4 + 32))(*(uint32_t *)dword_8874C4, 1);
    while ( g_MultiplayerPool )
    if ( *(uint32_t *)dword_A8EB2C )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)dword_A8EB2C + 32))(*(uint32_t *)dword_A8EB2C, 1);
    while ( g_BuildingTypeInitState )
    if ( *(uint32_t *)g_BuildingProductionQueue )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_BuildingProductionQueue + 32))(
    *(uint32_t *)g_BuildingProductionQueue,
    1);
    while ( g_InfantryTypeInitState )
    if ( *(uint32_t *)dword_A83D6C )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)dword_A83D6C + 32))(*(uint32_t *)dword_A83D6C, 1);
    while ( HouseClass_Count )
    if ( *(uint32_t *)HouseClass_Array->gap0 )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)HouseClass_Array->gap0 + 32))(
    *(uint32_t *)HouseClass_Array->gap0,
    1);
    while ( g_SuperWeaponTypeArray )
    if ( *(uint32_t *)g_SuperWeaponTypeCount )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)g_SuperWeaponTypeCount + 32))(
    *(uint32_t *)g_SuperWeaponTypeCount,
    1);
    if ( INIClass::BinarySearchSection((int)v28, (unsigned __int8 *)aMaximums) )
    *((uint32_t *)this + 1332) = INIClass::ReadInt_Overwrite(aMaximums, aPlayers, *((uint32_t *)this + 1332));
    RulesClass::Addition(this);
    v3 = (char *)this + 6260;
    v14 = 0;
    v4 = v3;
    v5 = 16;
    do
    v6 = v4;
    v4 += 3;
    --v5;
    *(_WORD *)v6 = 0;
    v6[2] = 0;
    while ( v5 );
    CCFileClass::Construct(v25, aLangruleIni);
    v7 = 0;
    if ( CCFileClass::Open(v25, 0) == 1 )
    v18[1] = 0;
    v18[2] = 0;
    GenericNode::Constructor(v19);
    GenericNode::Constructor(v20);
    LinkedList::Prepend(v19, (int)v20);
    v18[3] = &List<INIClass::INISection *>::`vftable';
    memset(&v20[3], 0, 12);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v18[0] = &CCINIClass_Vtable;
    if ( CCINIClass::Load(v18, (int)v25, 1, 0) > 1 )
    HashTable::DestroyHashTableINIClass(v18);
    goto LABEL_99;
    RulesClass::Addition(v16);
    HashTable::DestroyHashTableINIClass(v18);
    if ( INIClass::BinarySearchSection((int)v28, (unsigned __int8 *)aColoradd) )
    KeyCount = INIClass::GetKeyCount(v28, (unsigned __int8 *)aColoradd);
    if ( KeyCount > 0 )
    do
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v28, (unsigned __int8 *)aColoradd, v7);
    v14 = 0;
    v15 = 0;
    Coord = INIClass::GetCoord(
    (unsigned __int8 ***)v28,
    (int)v17,
    (unsigned __int8 *)aColoradd,
    StringByIndex,
    (unsigned __int8 *)&v14);
    v11 = v3;
    ++v7;
    v3 += 3;
    v12 = *(uint8_t *)(Coord + 2);
    *(_WORD *)v11 = *(_WORD *)Coord;
    v11[2] = v12;
    while ( v7 < KeyCount );
    if ( GameMode_Current[0] && g_GameStateFlags )
    GameConfig::Constructor(g_GameStateFlags);
    RulesClass::Addition(v16);
    LABEL_99:
    v25[0] = &CCFileClass::`vftable';
    v27 = 0;
    Vector::Clear((int)v26);
    v25[0] = &off_7E1668;
    return BufferIOFileClass::Dtor(v25);
}

int  RulesClass::LoadSpecialWeapons(RulesClass *this)
{
    int result; // eax
    int SellBack; // ebx
    int v4; // eax
    int AIBaseSpacing; // ebx
    int v6; // eax
    int v7; // ebx
    int v8; // eax
    int v9; // ebx
    int v10; // eax
    int v11; // ebx
    int v12; // eax
    int v13; // ebx
    int v14; // eax
    int v15; // ebx
    int v16; // eax
    int i; // esi
    char Destination[128]; // [esp+8h] [ebp-80h] BYREF
    unsigned __int8 ***v19; // [esp+8Ch] [ebp+4h]
    result = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)aSpecialweapons);
    if ( result )
    SellBack = this->SellBack;
    if ( INIClass::GetString(
    v19,
    (unsigned __int8 *)aSpecialweapons,
    (unsigned __int8 *)aNukewarhead,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v4 = WarheadTypeClass::FindOrCreate(Destination);
    else
    v4 = SellBack;
    this->SellBack = v4;
    AIBaseSpacing = this->AIBaseSpacing;
    if ( INIClass::GetString(
    v19,
    (unsigned __int8 *)aSpecialweapons,
    (unsigned __int8 *)aNukeprojectile,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v6 = ObjectTypeClass::FindOrCreate(Destination);
    else
    v6 = AIBaseSpacing;
    v7 = this->SilverCrate[0];
    this->AIBaseSpacing = v6;
    if ( INIClass::GetString(
    v19,
    (unsigned __int8 *)aSpecialweapons,
    (unsigned __int8 *)aNukedown,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v8 = ObjectTypeClass::FindOrCreate(Destination);
    else
    v8 = v7;
    v9 = this->SilverCrate[1];
    this->SilverCrate[0] = v8;
    if ( INIClass::GetString(
    v19,
    (unsigned __int8 *)aSpecialweapons,
    (unsigned __int8 *)aMutatewarhead,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v10 = WarheadTypeClass::FindOrCreate(Destination);
    else
    v10 = v9;
    this->SilverCrate[1] = v10;
    v11 = this->SilverCrate[2];
    if ( INIClass::GetString(
    v19,
    (unsigned __int8 *)aSpecialweapons,
    (unsigned __int8 *)aMutateexplosio,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v12 = WarheadTypeClass::FindOrCreate(Destination);
    else
    v12 = v11;
    v13 = this->SilverCrate[3];
    this->SilverCrate[2] = v12;
    if ( INIClass::GetString(
    v19,
    (unsigned __int8 *)aSpecialweapons,
    (unsigned __int8 *)aEmpulsewarhead,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v14 = WarheadTypeClass::FindOrCreate(Destination);
    else
    v14 = v13;
    v15 = this->SilverCrate[4];
    this->SilverCrate[3] = v14;
    if ( INIClass::GetString(
    v19,
    (unsigned __int8 *)aSpecialweapons,
    (unsigned __int8 *)aEmpulseproject,
    &g_INI_DefaultBuffer,
    Destination,
    128) )
    v16 = ObjectTypeClass::FindOrCreate(Destination);
    else
    v16 = v15;
    this->SilverCrate[4] = v16;
    result = g_WarheadTypePool;
    for ( i = 0; i < g_WarheadTypePool; ++i )
    (*(void (__thiscall **)(uint32_t, unsigned __int8 ***))(**((uint32_t **)dword_8874C4 + i) + 100))(
    *((uint32_t *)dword_8874C4 + i),
    v19);
    result = g_WarheadTypePool;
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 0;
    return result;
}

int  RulesClass::LoadCountries(RulesClass *this)
{
    int KeyCount; // ebx
    int i; // esi
    unsigned __int8 *StringByIndex; // eax
    char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
    char *v6; // [esp+30h] [ebp+4h]
    KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)aCountries);
    for ( i = 0; i < KeyCount; ++i )
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)aCountries, i);
    if ( INIClass::GetString(
    (unsigned __int8 ***)v6,
    (unsigned __int8 *)aCountries,
    StringByIndex,
    &g_INI_DefaultBuffer,
    Destination,
    32) )
    WeaponTypeClass::Create(Destination);
    return KeyCount > 0;
}

int  RulesClass::LoadSpeedTypes(RulesClass *this)
{
    double v1; // st7
    unsigned __int8 **v2; // esi
    float *v3; // ebx
    int result; // eax
    unsigned __int8 *v5; // edx
    unsigned __int8 *v6; // ecx
    unsigned __int8 *v7; // eax
    unsigned __int8 *v8; // edx
    unsigned __int8 *v9; // ecx
    unsigned __int8 *v10; // eax
    unsigned __int8 *v11; // edx
    int v12; // [esp+10h] [ebp+4h]
    v2 = (unsigned __int8 **)off_839D68;
    v3 = (float *)&unk_89EA44;
    do
    result = INIClass::BinarySearchSection(v12, *v2);
    if ( result )
    INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Hover, 1.0);
    if ( v1 >= 1.0 )
    v1 = 1.0;
    else
    INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Hover, 1.0);
    v5 = *v2;
    v3[2] = v1;
    INIClass::ReadDouble_Overwrite((int)v5, (int)g_INI_Key_Foot, 1.0);
    if ( v1 >= 1.0 )
    v1 = 1.0;
    else
    INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Foot, 1.0);
    v6 = *v2;
    *(v3 - 1) = v1;
    INIClass::ReadDouble_Overwrite((int)v6, (int)g_INI_Key_Track, 1.0);
    if ( v1 >= 1.0 )
    v1 = 1.0;
    else
    INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Track, 1.0);
    v7 = *v2;
    *v3 = v1;
    INIClass::ReadDouble_Overwrite((int)v7, (int)g_INI_Key_Wheel, 1.0);
    if ( v1 >= 1.0 )
    v1 = 1.0;
    else
    INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Wheel, 1.0);
    v8 = *v2;
    v3[1] = v1;
    v3[3] = 1.0;
    INIClass::ReadDouble_Overwrite((int)v8, (int)g_INI_Key_Float, 1.0);
    if ( v1 >= 1.0 )
    v1 = 1.0;
    else
    INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Float, 1.0);
    v9 = *v2;
    v3[4] = v1;
    INIClass::ReadDouble_Overwrite((int)v9, (int)g_INI_Key_Amphibious, 1.0);
    if ( v1 >= 1.0 )
    v1 = 1.0;
    else
    INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Amphibious, 1.0);
    v10 = *v2;
    v3[5] = v1;
    INIClass::ReadDouble_Overwrite((int)v10, (int)g_INI_Key_FloatBeach, 1.0);
    if ( v1 >= 1.0 )
    v1 = 1.0;
    else
    INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_FloatBeach, 1.0);
    v11 = *v2;
    v3[6] = v1;
    result = INIClass::ReadBool_Overwrite(v11, aBuildable, 0);
    *((uint8_t *)v3 + 28) = result;
    v3 += 9;
    ++v2;
    while ( (int)v3 < (int)((float *)&dbl_89EBF0 + 1) );
    LOBYTE(result) = 1;
    return result;
}

int  RulesClass::SaveLoad_Prefix(uint32_t *this, int *a2)
{
    int *v2; // esi
    int v4; // edx
    int i; // ebx
    int v6; // edx
    int j; // ebx
    int v8; // edx
    int k; // ebx
    int v10; // edx
    int m; // ebx
    int v12; // edx
    int n; // ebx
    int v14; // edx
    int ii; // ebx
    int v16; // edx
    int jj; // ebx
    int v18; // edx
    int kk; // ebx
    int v20; // edx
    int mm; // ebx
    int v22; // edx
    int nn; // ebx
    int v24; // edx
    int i1; // ebx
    int v26; // edx
    int i2; // ebx
    int v28; // edx
    int i3; // ebx
    int v30; // edx
    int i4; // ebx
    int v32; // edx
    int i5; // ebx
    int v34; // edx
    int i6; // ebx
    int v36; // edx
    int i7; // ebx
    int v38; // edx
    int i8; // ebx
    int v40; // edx
    int i9; // ebx
    int v42; // edx
    int i10; // ebx
    int v44; // edx
    int i11; // ebx
    int v46; // edx
    int i12; // ebx
    int v48; // edx
    int i13; // ebx
    int v50; // edx
    int i14; // ebx
    int v52; // edx
    int i15; // ebx
    int v54; // edx
    int i16; // ebx
    int v56; // edx
    int i17; // ebx
    int v58; // edx
    int i18; // ebx
    char *v60; // edi
    int v61; // ebx
    int result; // eax
    v2 = a2;
    (*(void (__stdcall **)(int *, uint32_t *, int, uint32_t))(*a2 + 16))(a2, this, 6336, 0);
    v4 = *v2;
    a2 = (int *)*(this + 1129);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v4 + 16))(v2, &a2, 4, 0);
    for ( i = 0; i < (int)a2; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1126) + 4 * i, 4, 0);
    v6 = *v2;
    a2 = (int *)*(this + 1136);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v6 + 16))(v2, &a2, 4, 0);
    for ( j = 0; j < (int)a2; ++j )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1133) + 4 * j, 4, 0);
    v8 = *v2;
    a2 = (int *)*(this + 1143);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v8 + 16))(v2, &a2, 4, 0);
    for ( k = 0; k < (int)a2; ++k )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1140) + 4 * k, 4, 0);
    v10 = *v2;
    a2 = (int *)*(this + 1150);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v10 + 16))(v2, &a2, 4, 0);
    for ( m = 0; m < (int)a2; ++m )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1147) + 4 * m, 4, 0);
    v12 = *v2;
    a2 = (int *)*(this + 1157);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v12 + 16))(v2, &a2, 4, 0);
    for ( n = 0; n < (int)a2; ++n )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1154) + 4 * n, 4, 0);
    v14 = *v2;
    a2 = (int *)*(this + 1164);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v14 + 16))(v2, &a2, 4, 0);
    for ( ii = 0; ii < (int)a2; ++ii )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1161) + 4 * ii, 4, 0);
    v16 = *v2;
    a2 = (int *)*(this + 1171);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v16 + 16))(v2, &a2, 4, 0);
    for ( jj = 0; jj < (int)a2; ++jj )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1168) + 4 * jj, 4, 0);
    v18 = *v2;
    a2 = (int *)*(this + 1178);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v18 + 16))(v2, &a2, 4, 0);
    for ( kk = 0; kk < (int)a2; ++kk )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1175) + 4 * kk, 4, 0);
    v20 = *v2;
    a2 = (int *)*(this + 1185);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v20 + 16))(v2, &a2, 4, 0);
    for ( mm = 0; mm < (int)a2; ++mm )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1182) + 4 * mm, 4, 0);
    v22 = *v2;
    a2 = (int *)*(this + 1192);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v22 + 16))(v2, &a2, 4, 0);
    for ( nn = 0; nn < (int)a2; ++nn )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1189) + 4 * nn, 4, 0);
    v24 = *v2;
    a2 = (int *)*(this + 1199);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v24 + 16))(v2, &a2, 4, 0);
    for ( i1 = 0; i1 < (int)a2; ++i1 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1196) + 4 * i1, 4, 0);
    v26 = *v2;
    a2 = (int *)*(this + 1206);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v26 + 16))(v2, &a2, 4, 0);
    for ( i2 = 0; i2 < (int)a2; ++i2 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1203) + 4 * i2, 4, 0);
    v28 = *v2;
    a2 = (int *)*(this + 1213);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v28 + 16))(v2, &a2, 4, 0);
    for ( i3 = 0; i3 < (int)a2; ++i3 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1210) + 4 * i3, 4, 0);
    v30 = *v2;
    a2 = (int *)*(this + 1280);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v30 + 16))(v2, &a2, 4, 0);
    for ( i4 = 0; i4 < (int)a2; ++i4 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1277) + 4 * i4, 4, 0);
    v32 = *v2;
    a2 = (int *)*(this + 1114);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v32 + 16))(v2, &a2, 4, 0);
    for ( i5 = 0; i5 < (int)a2; ++i5 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1111) + 4 * i5, 4, 0);
    v34 = *v2;
    a2 = (int *)*(this + 622);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v34 + 16))(v2, &a2, 4, 0);
    for ( i6 = 0; i6 < (int)a2; ++i6 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 619) + 4 * i6, 4, 0);
    v36 = *v2;
    a2 = (int *)*(this + 868);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v36 + 16))(v2, &a2, 4, 0);
    for ( i7 = 0; i7 < (int)a2; ++i7 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 865) + 4 * i7, 4, 0);
    v38 = *v2;
    a2 = (int *)*(this + 875);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v38 + 16))(v2, &a2, 4, 0);
    for ( i8 = 0; i8 < (int)a2; ++i8 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 872) + 4 * i8, 4, 0);
    v40 = *v2;
    a2 = (int *)*(this + 882);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v40 + 16))(v2, &a2, 4, 0);
    for ( i9 = 0; i9 < (int)a2; ++i9 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 879) + 4 * i9, 4, 0);
    v42 = *v2;
    a2 = (int *)*(this + 958);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v42 + 16))(v2, &a2, 4, 0);
    for ( i10 = 0; i10 < (int)a2; ++i10 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 955) + 4 * i10, 4, 0);
    v44 = *v2;
    a2 = (int *)*(this + 965);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v44 + 16))(v2, &a2, 4, 0);
    for ( i11 = 0; i11 < (int)a2; ++i11 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 962) + 4 * i11, 4, 0);
    v46 = *v2;
    a2 = (int *)*(this + 972);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v46 + 16))(v2, &a2, 4, 0);
    for ( i12 = 0; i12 < (int)a2; ++i12 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 969) + 4 * i12, 4, 0);
    v48 = *v2;
    a2 = (int *)*(this + 904);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v48 + 16))(v2, &a2, 4, 0);
    for ( i13 = 0; i13 < (int)a2; ++i13 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 901) + 4 * i13, 4, 0);
    v50 = *v2;
    a2 = (int *)*(this + 949);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v50 + 16))(v2, &a2, 4, 0);
    for ( i14 = 0; i14 < (int)a2; ++i14 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 946) + 4 * i14, 4, 0);
    v52 = *v2;
    a2 = (int *)*(this + 911);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v52 + 16))(v2, &a2, 4, 0);
    for ( i15 = 0; i15 < (int)a2; ++i15 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 908) + 4 * i15, 4, 0);
    v54 = *v2;
    a2 = (int *)*(this + 889);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v54 + 16))(v2, &a2, 4, 0);
    for ( i16 = 0; i16 < (int)a2; ++i16 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 886) + 4 * i16, 4, 0);
    v56 = *v2;
    a2 = (int *)*(this + 1256);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v56 + 16))(v2, &a2, 4, 0);
    for ( i17 = 0; i17 < (int)a2; ++i17 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1253) + 4 * i17, 4, 0);
    v58 = *v2;
    a2 = (int *)*(this + 1263);
    (*(void (__stdcall **)(int *, int **, int, uint32_t))(v58 + 16))(v2, &a2, 4, 0);
    for ( i18 = 0; i18 < (int)a2; ++i18 )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1260) + 4 * i18, 4, 0);
    DynamicVector::Read(this + 915, v2);
    DynamicVector::Read(this + 922, v2);
    DynamicVector::Read(this + 929, v2);
    DynamicVector::Read(this + 936, v2);
    DynamicVector::Read(this + 1217, v2);
    DynamicVector::Read(this + 1224, v2);
    DynamicVector::Read(this + 1231, v2);
    DynamicVector::Read(this + 1238, v2);
    DynamicVector::Read(this + 1245, v2);
    DynamicVector::Read(this + 1266, v2);
    DynamicVector::Read(this + 1117, v2);
    DynamicVector::Read(this + 271, v2);
    DynamicVector::Read(this + 278, v2);
    DynamicVector::Read(this + 285, v2);
    RulesClass::readTerrainTypes(this + 22, v2);
    RulesClass::readTerrainTypes(this + 384, v2);
    DynamicVector::Read(this + 214, v2);
    DynamicVector::Read(this + 221, v2);
    DynamicVector::Read(this + 228, v2);
    DynamicVector::Read(this + 235, v2);
    DynamicVector::Read(this + 242, v2);
    DynamicVector::Read(this + 249, v2);
    DynamicVector::Read(this + 435, v2);
    DynamicVector::Read(this + 461, v2);
    VectorClass::LoadStream(this + 497, v2);
    VectorClass::LoadStream(this + 504, v2);
    VectorClass::LoadStream(this + 511, v2);
    VectorClass::LoadStream(this + 518, v2);
    VectorClass::LoadStream(this + 525, v2);
    DynamicVector::Read_Alt(this + 532, v2);
    DynamicVector::Read_Alt(this + 544, v2);
    DynamicVector::Read_Alt(this + 555, v2);
    DynamicVector::Read_Alt(this + 562, v2);
    DynamicVector::Read_Alt(this + 569, v2);
    DynamicVector::Read_Alt(this + 576, v2);
    DynamicVector::Read_Alt(this + 583, v2);
    DynamicVector::Read_Alt(this + 590, v2);
    DynamicVector::Read_Alt(this + 597, v2);
    DynamicVector::Read_Alt(this + 604, v2);
    DynamicVector::Read_Alt(this + 611, v2);
    DynamicVector::Read_Alt(this + 625, v2);
    DynamicVector::Read_Alt(this + 632, v2);
    DynamicVector::Read_Alt(this + 639, v2);
    DynamicVector::Read_Alt(this + 646, v2);
    DynamicVector::Read_Alt(this + 653, v2);
    DynamicVector::Read_Alt(this + 660, v2);
    DynamicVector::Read_Alt(this + 667, v2);
    DynamicVector::Read_Alt(this + 674, v2);
    DynamicVector::Read_Alt(this + 681, v2);
    DynamicVector::Read_Alt(this + 688, v2);
    DynamicVector::Read_Alt(this + 695, v2);
    RulesClass::readAnimations(this + 726, v2);
    Stream::WriteIntArray(this + 733, v2);
    Stream::WriteIntArray(this + 740, v2);
    Stream::WriteIntArray(this + 752, v2);
    SaveLoad::StreamVector(this + 712, v2);
    RulesClass::readParticleSystems(this + 1022, v2);
    SaveLoad::StreamVector(this + 719, v2);
    VectorClass::SaveLoad(this + 832, v2);
    SaveLoad::StreamVector(this + 839, v2);
    DynamicVector::Read_Alt(this + 846, v2);
    Stream::WriteIntArray(this + 72, v2);
    Stream::WriteIntArray(this + 65, v2);
    Stream::WriteIntArray(this + 79, v2);
    Stream::WriteIntArray(this + 86, v2);
    DynamicVector::Read(this + 402, v2);
    VectorClass::SaveLoad(this + 769, v2);
    DynamicVector::Read(this + 776, v2);
    VectorClass::SaveLoad(this + 783, v2);
    DynamicVector::Read(this + 790, v2);
    VectorClass::SaveLoad(this + 797, v2);
    DynamicVector::Read(this + 804, v2);
    VectorClass::SaveLoad(this + 811, v2);
    DynamicVector::Read(this + 818, v2);
    VectorClass::SaveLoad(this + 825, v2);
    Stream::WriteIntArray(this + 168, v2);
    Stream::WriteIntArray(this + 175, v2);
    Stream::WriteIntArray(this + 182, v2);
    v60 = (char *)(this + 1565);
    v61 = 16;
    do
    result = RulesClass::readGeneralSection(v60, (int)v2);
    v60 += 3;
    --v61;
    while ( v61 );
    return result;
}

int  RulesClass::SaveLoad_Prefix_0(int *this, int i)
{
    uint32_t *v3; // ebx
    int v4; // edi
    int j; // ebx
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
    int i11; // ebx
    int i12; // ebx
    int i13; // ebx
    int i14; // ebx
    int i15; // ebx
    int i16; // ebx
    int i17; // ebx
    int i18; // ebx
    int i19; // ebx
    int i20; // ebx
    int i21; // ebx
    int i22; // ebx
    int i23; // ebx
    int i24; // ebx
    int i25; // ebx
    int i26; // ebx
    int i27; // ebx
    int i28; // ebx
    int i29; // ebx
    int i30; // ebx
    int i31; // ebx
    int i32; // ebx
    int i33; // ebx
    int i34; // ebx
    int i35; // ebx
    int i36; // ebx
    int i37; // ebx
    int i38; // ebx
    int i39; // ebx
    int i40; // ebx
    int i41; // ebx
    int i42; // ebx
    int i43; // ebx
    int i44; // ebx
    int i45; // ebx
    int i46; // ebx
    int i47; // ebx
    int i48; // ebx
    int i49; // ebx
    int i50; // ebx
    int i51; // ebx
    int i52; // ebx
    int i53; // ebx
    int i54; // ebx
    int i55; // ebx
    int i56; // ebx
    int i57; // ebx
    int i58; // ebx
    int i59; // ebx
    int i60; // ebx
    int i61; // ebx
    int i62; // ebx
    int i63; // ebx
    int i64; // ebx
    int i65; // ebx
    int i66; // ebx
    int i67; // ebx
    int i68; // ebx
    int i69; // ebx
    int i70; // ebx
    int i71; // ebx
    int i72; // ebx
    int i73; // ebx
    int i74; // ebx
    int i75; // ebx
    int i76; // ebx
    int i77; // ebx
    int i78; // ebx
    int i79; // ebx
    int i80; // ebx
    int i81; // ebx
    int i82; // ebx
    int i83; // ebx
    int i84; // ebx
    int i85; // ebx
    int i86; // ebx
    int i87; // ebx
    int i88; // ebx
    int i89; // ebx
    int i90; // ebx
    int i91; // ebx
    int i92; // ebx
    int i93; // ebx
    int i94; // ebx
    int i95; // ebx
    int i96; // ebx
    char *v110; // ebx
    int v111; // ebp
    int i97; // edi
    int i98; // edi
    int i99; // edi
    int i100; // edi
    int i101; // edi
    int i102; // edi
    int i103; // edi
    int i104; // edi
    int i105; // edi
    int i106; // edi
    int i107; // edi
    int i108; // edi
    int i109; // edi
    int i110; // edi
    int i111; // edi
    int i112; // edi
    int i113; // edi
    int i114; // edi
    int i115; // edi
    int i116; // edi
    int i117; // edi
    int i118; // edi
    int i119; // edi
    int i120; // edi
    int i121; // edi
    int i122; // edi
    int i123; // edi
    int i124; // edi
    int i125; // edi
    int i126; // edi
    int i127; // edi
    int i128; // edi
    int i129; // edi
    int i130; // edi
    int i131; // edi
    int i132; // edi
    int i133; // edi
    int i134; // edi
    int i135; // edi
    int i136; // edi
    int i137; // edi
    int i138; // edi
    int i139; // edi
    int v155; // ebx
    int i140; // edi
    int v157; // ebx
    int i141; // edi
    int i142; // edi
    int i143; // edi
    int i144; // edi
    int i145; // edi
    int result; // eax
    int i146; // edi
    int v165; // ebx
    int v166; // edi
    uint32_t *v167; // esi
    int v168; // [esp+D4Ch] [ebp-8h] BYREF
    int v169; // [esp+D50h] [ebp-4h] BYREF
    v3 = this + 1125;
    (*(void (__thiscall **)(int *))(*(this + 1125) + 12))(this + 1125);
    (*(void (__thiscall **)(int *))(*(this + 1132) + 12))(this + 1132);
    (*(void (__thiscall **)(int *))(*(this + 1139) + 12))(this + 1139);
    (*(void (__thiscall **)(int *))(*(this + 1146) + 12))(this + 1146);
    (*(void (__thiscall **)(int *))(*(this + 1153) + 12))(this + 1153);
    (*(void (__thiscall **)(int *))(*(this + 1160) + 12))(this + 1160);
    (*(void (__thiscall **)(int *))(*(this + 1167) + 12))(this + 1167);
    (*(void (__thiscall **)(int *))(*(this + 1174) + 12))(this + 1174);
    (*(void (__thiscall **)(int *))(*(this + 1181) + 12))(this + 1181);
    (*(void (__thiscall **)(int *))(*(this + 1188) + 12))(this + 1188);
    (*(void (__thiscall **)(int *))(*(this + 1195) + 12))(this + 1195);
    (*(void (__thiscall **)(int *))(*(this + 1202) + 12))(this + 1202);
    (*(void (__thiscall **)(int *))(*(this + 1209) + 12))(this + 1209);
    (*(void (__thiscall **)(int *))(*(this + 1276) + 12))(this + 1276);
    (*(void (__thiscall **)(int *))(*(this + 1110) + 12))(this + 1110);
    (*(void (__thiscall **)(int *))(*(this + 618) + 12))(this + 618);
    (*(void (__thiscall **)(int *))(*(this + 864) + 12))(this + 864);
    (*(void (__thiscall **)(int *))(*(this + 871) + 12))(this + 871);
    (*(void (__thiscall **)(int *))(*(this + 878) + 12))(this + 878);
    (*(void (__thiscall **)(int *))(*(this + 954) + 12))(this + 954);
    (*(void (__thiscall **)(int *))(*(this + 961) + 12))(this + 961);
    (*(void (__thiscall **)(int *))(*(this + 968) + 12))(this + 968);
    (*(void (__thiscall **)(int *))(*(this + 900) + 12))(this + 900);
    (*(void (__thiscall **)(int *))(*(this + 945) + 12))(this + 945);
    (*(void (__thiscall **)(int *))(*(this + 907) + 12))(this + 907);
    (*(void (__thiscall **)(int *))(*(this + 885) + 12))(this + 885);
    (*(void (__thiscall **)(int *))(*(this + 1252) + 12))(this + 1252);
    (*(void (__thiscall **)(int *))(*(this + 1259) + 12))(this + 1259);
    (*(void (__thiscall **)(int *))(*(this + 915) + 12))(this + 915);
    (*(void (__thiscall **)(int *))(*(this + 922) + 12))(this + 922);
    (*(void (__thiscall **)(int *))(*(this + 929) + 12))(this + 929);
    (*(void (__thiscall **)(int *))(*(this + 936) + 12))(this + 936);
    (*(void (__thiscall **)(int *))(*(this + 1217) + 12))(this + 1217);
    (*(void (__thiscall **)(int *))(*(this + 1224) + 12))(this + 1224);
    (*(void (__thiscall **)(int *))(*(this + 1231) + 12))(this + 1231);
    (*(void (__thiscall **)(int *))(*(this + 1238) + 12))(this + 1238);
    (*(void (__thiscall **)(int *))(*(this + 1245) + 12))(this + 1245);
    (*(void (__thiscall **)(int *))(*(this + 1266) + 12))(this + 1266);
    (*(void (__thiscall **)(int *))(*(this + 1117) + 12))(this + 1117);
    (*(void (__thiscall **)(int *))(*(this + 271) + 12))(this + 271);
    (*(void (__thiscall **)(int *))(*(this + 278) + 12))(this + 278);
    (*(void (__thiscall **)(int *))(*(this + 285) + 12))(this + 285);
    (*(void (__thiscall **)(int *))(*(this + 384) + 12))(this + 384);
    (*(void (__thiscall **)(int *))(*(this + 214) + 12))(this + 214);
    (*(void (__thiscall **)(int *))(*(this + 221) + 12))(this + 221);
    (*(void (__thiscall **)(int *))(*(this + 228) + 12))(this + 228);
    (*(void (__thiscall **)(int *))(*(this + 235) + 12))(this + 235);
    (*(void (__thiscall **)(int *))(*(this + 242) + 12))(this + 242);
    (*(void (__thiscall **)(int *))(*(this + 249) + 12))(this + 249);
    (*(void (__thiscall **)(int *))(*(this + 435) + 12))(this + 435);
    (*(void (__thiscall **)(int *))(*(this + 461) + 12))(this + 461);
    (*(void (__thiscall **)(int *))(*(this + 497) + 12))(this + 497);
    (*(void (__thiscall **)(int *))(*(this + 504) + 12))(this + 504);
    (*(void (__thiscall **)(int *))(*(this + 511) + 12))(this + 511);
    (*(void (__thiscall **)(int *))(*(this + 518) + 12))(this + 518);
    (*(void (__thiscall **)(int *))(*(this + 525) + 12))(this + 525);
    (*(void (__thiscall **)(int *))(*(this + 532) + 12))(this + 532);
    (*(void (__thiscall **)(int *))(*(this + 544) + 12))(this + 544);
    (*(void (__thiscall **)(int *))(*(this + 555) + 12))(this + 555);
    (*(void (__thiscall **)(int *))(*(this + 562) + 12))(this + 562);
    (*(void (__thiscall **)(int *))(*(this + 569) + 12))(this + 569);
    (*(void (__thiscall **)(int *))(*(this + 576) + 12))(this + 576);
    (*(void (__thiscall **)(int *))(*(this + 583) + 12))(this + 583);
    (*(void (__thiscall **)(int *))(*(this + 590) + 12))(this + 590);
    (*(void (__thiscall **)(int *))(*(this + 597) + 12))(this + 597);
    (*(void (__thiscall **)(int *))(*(this + 604) + 12))(this + 604);
    (*(void (__thiscall **)(int *))(*(this + 611) + 12))(this + 611);
    (*(void (__thiscall **)(int *))(*(this + 625) + 12))(this + 625);
    (*(void (__thiscall **)(int *))(*(this + 632) + 12))(this + 632);
    (*(void (__thiscall **)(int *))(*(this + 639) + 12))(this + 639);
    (*(void (__thiscall **)(int *))(*(this + 646) + 12))(this + 646);
    (*(void (__thiscall **)(int *))(*(this + 653) + 12))(this + 653);
    (*(void (__thiscall **)(int *))(*(this + 660) + 12))(this + 660);
    (*(void (__thiscall **)(int *))(*(this + 667) + 12))(this + 667);
    (*(void (__thiscall **)(int *))(*(this + 674) + 12))(this + 674);
    (*(void (__thiscall **)(int *))(*(this + 681) + 12))(this + 681);
    (*(void (__thiscall **)(int *))(*(this + 688) + 12))(this + 688);
    (*(void (__thiscall **)(int *))(*(this + 695) + 12))(this + 695);
    (*(void (__thiscall **)(int *))(*(this + 726) + 12))(this + 726);
    (*(void (__thiscall **)(int *))(*(this + 733) + 12))(this + 733);
    (*(void (__thiscall **)(int *))(*(this + 740) + 12))(this + 740);
    (*(void (__thiscall **)(int *))(*(this + 752) + 12))(this + 752);
    (*(void (__thiscall **)(int *))(*(this + 712) + 12))(this + 712);
    (*(void (__thiscall **)(int *))(*(this + 1022) + 12))(this + 1022);
    (*(void (__thiscall **)(int *))(*(this + 719) + 12))(this + 719);
    (*(void (__thiscall **)(int *))(*(this + 832) + 12))(this + 832);
    (*(void (__thiscall **)(int *))(*(this + 839) + 12))(this + 839);
    (*(void (__thiscall **)(int *))(*(this + 846) + 12))(this + 846);
    (*(void (__thiscall **)(int *))(*(this + 402) + 12))(this + 402);
    (*(void (__thiscall **)(int *))(*(this + 769) + 12))(this + 769);
    (*(void (__thiscall **)(int *))(*(this + 776) + 12))(this + 776);
    (*(void (__thiscall **)(int *))(*(this + 783) + 12))(this + 783);
    (*(void (__thiscall **)(int *))(*(this + 790) + 12))(this + 790);
    (*(void (__thiscall **)(int *))(*(this + 797) + 12))(this + 797);
    (*(void (__thiscall **)(int *))(*(this + 804) + 12))(this + 804);
    (*(void (__thiscall **)(int *))(*(this + 811) + 12))(this + 811);
    (*(void (__thiscall **)(int *))(*(this + 818) + 12))(this + 818);
    (*(void (__thiscall **)(int *))(*(this + 825) + 12))(this + 825);
    v4 = i;
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)i + 12))(i, this, 6336, 0);
    if ( this )
    HouseClass::InitTypeVectors(this, (int)&i);
    if ( v3 )
    TypeList::Construct(v3);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v168, 4, 0);
    for ( i = 0; i < v168; ++i )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(v3, &v169);
    if ( this != (int *)-4528 )
    TypeList::Construct(this + 1132);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( j = 0; j < i; ++j )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1132, &v169);
    if ( this != (int *)-4556 )
    TypeList::Construct(this + 1139);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( k = 0; k < i; ++k )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1139, &v169);
    if ( this != (int *)-4584 )
    TypeList::Construct(this + 1146);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( m = 0; m < i; ++m )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1146, &v169);
    if ( this != (int *)-4612 )
    TypeList::Construct(this + 1153);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( n = 0; n < i; ++n )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1153, &v169);
    if ( this != (int *)-4640 )
    TypeList::Construct(this + 1160);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( ii = 0; ii < i; ++ii )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1160, &v169);
    if ( this != (int *)-4668 )
    TypeList::Construct(this + 1167);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( jj = 0; jj < i; ++jj )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1167, &v169);
    if ( this != (int *)-4696 )
    TypeList::Construct(this + 1174);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( kk = 0; kk < i; ++kk )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1174, &v169);
    if ( this != (int *)-4724 )
    TypeList::Construct(this + 1181);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( mm = 0; mm < i; ++mm )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1181, &v169);
    if ( this != (int *)-4752 )
    TypeList::Construct(this + 1188);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( nn = 0; nn < i; ++nn )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1188, &v169);
    if ( this != (int *)-4780 )
    TypeList::Construct(this + 1195);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i1 = 0; i1 < i; ++i1 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1195, &v169);
    if ( this != (int *)-4808 )
    TypeList::Construct(this + 1202);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i2 = 0; i2 < i; ++i2 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1202, &v169);
    if ( this != (int *)-4836 )
    TypeList::Construct(this + 1209);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i3 = 0; i3 < i; ++i3 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1209, &v169);
    if ( this != (int *)-5104 )
    TypeList::Construct(this + 1276);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i4 = 0; i4 < i; ++i4 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1276, &v169);
    if ( this != (int *)-4440 )
    TypeList::Construct(this + 1110);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i5 = 0; i5 < i; ++i5 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1110, &v169);
    if ( this != (int *)-2472 )
    TypeList::Construct(this + 618);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i6 = 0; i6 < i; ++i6 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 618, &v169);
    if ( this != (int *)-3456 )
    TypeList::Construct(this + 864);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i7 = 0; i7 < i; ++i7 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 864, &v169);
    if ( this != (int *)-3484 )
    TypeList::Construct(this + 871);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i8 = 0; i8 < i; ++i8 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 871, &v169);
    if ( this != (int *)-3512 )
    TypeList::Construct(this + 878);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i9 = 0; i9 < i; ++i9 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 878, &v169);
    if ( this != (int *)-3816 )
    TypeList::Construct(this + 954);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i10 = 0; i10 < i; ++i10 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 954, &v169);
    if ( this != (int *)-3844 )
    TypeList::Construct(this + 961);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i11 = 0; i11 < i; ++i11 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 961, &v169);
    if ( this != (int *)-3872 )
    TypeList::Construct(this + 968);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i12 = 0; i12 < i; ++i12 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 968, &v169);
    if ( this != (int *)-3600 )
    TypeList::Construct(this + 900);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i13 = 0; i13 < i; ++i13 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 900, &v169);
    if ( this != (int *)-3780 )
    TypeList::Construct(this + 945);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i14 = 0; i14 < i; ++i14 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 945, &v169);
    if ( this != (int *)-3628 )
    TypeList::Construct(this + 907);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i15 = 0; i15 < i; ++i15 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 907, &v169);
    if ( this != (int *)-3540 )
    TypeList::Construct(this + 885);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i16 = 0; i16 < i; ++i16 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 885, &v169);
    if ( this != (int *)-5008 )
    TypeList::Construct(this + 1252);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i17 = 0; i17 < i; ++i17 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1252, &v169);
    if ( this != (int *)-5036 )
    TypeList::Construct(this + 1259);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i18 = 0; i18 < i; ++i18 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1259, &v169);
    if ( this != (int *)-3660 )
    TypeList::Construct(this + 915);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i19 = 0; i19 < i; ++i19 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 915, &v169);
    if ( this != (int *)-3688 )
    TypeList::Construct(this + 922);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i20 = 0; i20 < i; ++i20 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 922, &v169);
    if ( this != (int *)-3716 )
    TypeList::Construct(this + 929);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i21 = 0; i21 < i; ++i21 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 929, &v169);
    if ( this != (int *)-3744 )
    TypeList::Construct(this + 936);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i22 = 0; i22 < i; ++i22 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 936, &v169);
    if ( this != (int *)-4868 )
    TypeList::Construct(this + 1217);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i23 = 0; i23 < i; ++i23 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1217, &v169);
    if ( this != (int *)-4896 )
    TypeList::Construct(this + 1224);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i24 = 0; i24 < i; ++i24 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1224, &v169);
    if ( this != (int *)-4924 )
    TypeList::Construct(this + 1231);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i25 = 0; i25 < i; ++i25 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1231, &v169);
    if ( this != (int *)-4952 )
    TypeList::Construct(this + 1238);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i26 = 0; i26 < i; ++i26 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1238, &v169);
    if ( this != (int *)-4980 )
    TypeList::Construct(this + 1245);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i27 = 0; i27 < i; ++i27 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1245, &v169);
    if ( this != (int *)-5064 )
    TypeList::Construct(this + 1266);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i28 = 0; i28 < i; ++i28 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1266, &v169);
    if ( this != (int *)-4468 )
    TypeList::Construct(this + 1117);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i29 = 0; i29 < i; ++i29 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1117, &v169);
    if ( this != (int *)-1084 )
    TypeList::Construct(this + 271);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i30 = 0; i30 < i; ++i30 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 271, &v169);
    if ( this != (int *)-1112 )
    TypeList::Construct(this + 278);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i31 = 0; i31 < i; ++i31 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 278, &v169);
    if ( this != (int *)-1140 )
    TypeList::Construct(this + 285);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i32 = 0; i32 < i; ++i32 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 285, &v169);
    if ( this != (int *)-88 )
    TypeList::VoxelAnimConstructor(this + 22);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i33 = 0; i33 < i; ++i33 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add2(this + 22, &v169);
    if ( this != (int *)-1536 )
    TypeList::VoxelAnimConstructor(this + 384);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i34 = 0; i34 < i; ++i34 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add2(this + 384, &v169);
    if ( this != (int *)-856 )
    TypeList::Construct(this + 214);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i35 = 0; i35 < i; ++i35 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 214, &v169);
    if ( this != (int *)-884 )
    TypeList::Construct(this + 221);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i36 = 0; i36 < i; ++i36 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 221, &v169);
    if ( this != (int *)-912 )
    TypeList::Construct(this + 228);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i37 = 0; i37 < i; ++i37 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 228, &v169);
    if ( this != (int *)-940 )
    TypeList::Construct(this + 235);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i38 = 0; i38 < i; ++i38 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 235, &v169);
    if ( this != (int *)-968 )
    TypeList::Construct(this + 242);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i39 = 0; i39 < i; ++i39 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 242, &v169);
    if ( this != (int *)-996 )
    TypeList::Construct(this + 249);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i40 = 0; i40 < i; ++i40 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 249, &v169);
    if ( this != (int *)-1740 )
    TypeList::Construct(this + 435);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i41 = 0; i41 < i; ++i41 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 435, &v169);
    if ( this != (int *)-1844 )
    TypeList::Construct(this + 461);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i42 = 0; i42 < i; ++i42 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 461, &v169);
    if ( this != (int *)-1988 )
    TypeList::ConstructSmudge(this + 497);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i43 = 0; i43 < i; ++i43 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 497, &v169);
    if ( this != (int *)-2016 )
    TypeList::ConstructSmudge(this + 504);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i44 = 0; i44 < i; ++i44 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 504, &v169);
    if ( this != (int *)-2044 )
    TypeList::ConstructSmudge(this + 511);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i45 = 0; i45 < i; ++i45 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 511, &v169);
    if ( this != (int *)-2072 )
    TypeList::ConstructSmudge(this + 518);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i46 = 0; i46 < i; ++i46 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 518, &v169);
    if ( this != (int *)-2100 )
    TypeList::ConstructSmudge(this + 525);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i47 = 0; i47 < i; ++i47 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 525, &v169);
    if ( this != (int *)-2128 )
    TypeList::BuildingTypeConstructor(this + 532);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i48 = 0; i48 < i; ++i48 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 532, &v169);
    if ( this != (int *)-2176 )
    TypeList::BuildingTypeConstructor(this + 544);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i49 = 0; i49 < i; ++i49 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 544, &v169);
    if ( this != (int *)-2220 )
    TypeList::BuildingTypeConstructor(this + 555);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i50 = 0; i50 < i; ++i50 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 555, &v169);
    if ( this != (int *)-2248 )
    TypeList::BuildingTypeConstructor(this + 562);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i51 = 0; i51 < i; ++i51 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 562, &v169);
    if ( this != (int *)-2276 )
    TypeList::BuildingTypeConstructor(this + 569);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i52 = 0; i52 < i; ++i52 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 569, &v169);
    if ( this != (int *)-2304 )
    TypeList::BuildingTypeConstructor(this + 576);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i53 = 0; i53 < i; ++i53 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 576, &v169);
    if ( this != (int *)-2332 )
    TypeList::BuildingTypeConstructor(this + 583);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i54 = 0; i54 < i; ++i54 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 583, &v169);
    if ( this != (int *)-2360 )
    TypeList::BuildingTypeConstructor(this + 590);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i55 = 0; i55 < i; ++i55 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 590, &v169);
    if ( this != (int *)-2388 )
    TypeList::BuildingTypeConstructor(this + 597);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i56 = 0; i56 < i; ++i56 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 597, &v169);
    if ( this != (int *)-2416 )
    TypeList::BuildingTypeConstructor(this + 604);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i57 = 0; i57 < i; ++i57 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 604, &v169);
    if ( this != (int *)-2444 )
    TypeList::BuildingTypeConstructor(this + 611);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i58 = 0; i58 < i; ++i58 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 611, &v169);
    if ( this != (int *)-2500 )
    TypeList::BuildingTypeConstructor(this + 625);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i59 = 0; i59 < i; ++i59 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 625, &v169);
    if ( this != (int *)-2528 )
    TypeList::BuildingTypeConstructor(this + 632);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i60 = 0; i60 < i; ++i60 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 632, &v169);
    if ( this != (int *)-2556 )
    TypeList::BuildingTypeConstructor(this + 639);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i61 = 0; i61 < i; ++i61 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 639, &v169);
    if ( this != (int *)-2584 )
    TypeList::BuildingTypeConstructor(this + 646);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i62 = 0; i62 < i; ++i62 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 646, &v169);
    if ( this != (int *)-2612 )
    TypeList::BuildingTypeConstructor(this + 653);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i63 = 0; i63 < i; ++i63 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 653, &v169);
    if ( this != (int *)-2640 )
    TypeList::BuildingTypeConstructor(this + 660);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i64 = 0; i64 < i; ++i64 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 660, &v169);
    if ( this != (int *)-2668 )
    TypeList::BuildingTypeConstructor(this + 667);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i65 = 0; i65 < i; ++i65 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 667, &v169);
    if ( this != (int *)-2696 )
    TypeList::BuildingTypeConstructor(this + 674);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i66 = 0; i66 < i; ++i66 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 674, &v169);
    if ( this != (int *)-2724 )
    TypeList::BuildingTypeConstructor(this + 681);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i67 = 0; i67 < i; ++i67 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 681, &v169);
    if ( this != (int *)-2752 )
    TypeList::BuildingTypeConstructor(this + 688);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i68 = 0; i68 < i; ++i68 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 688, &v169);
    if ( this != (int *)-2780 )
    TypeList::BuildingTypeConstructor(this + 695);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i69 = 0; i69 < i; ++i69 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 695, &v169);
    if ( this != (int *)-2904 )
    HouseTypeClass::readStartUnit(this + 726);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i70 = 0; i70 < i; ++i70 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    HouseTypeClass::readPowerPlants(this + 726, &v169);
    if ( this != (int *)-2932 )
    AnimTypeList::Constructor(this + 733);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i71 = 0; i71 < i; ++i71 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 733, &v169);
    if ( this != (int *)-2960 )
    AnimTypeList::Constructor(this + 740);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i72 = 0; i72 < i; ++i72 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 740, &v169);
    if ( this != (int *)-3008 )
    AnimTypeList::Constructor(this + 752);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i73 = 0; i73 < i; ++i73 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 752, &v169);
    if ( this != (int *)-2848 )
    UnitTypeList::Constructor(this + 712);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i74 = 0; i74 < i; ++i74 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    VectorClass::PushBack(this + 712, &v169);
    if ( this != (int *)-4088 )
    RulesClass::readParticles(this + 1022);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i75 = 0; i75 < i; ++i75 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    RulesClass::readAI(this + 1022, &v169);
    if ( this != (int *)-2876 )
    UnitTypeList::Constructor(this + 719);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i76 = 0; i76 < i; ++i76 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    VectorClass::PushBack(this + 719, &v169);
    if ( this != (int *)-3328 )
    TypeList::InfantryConstructor(this + 832);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i77 = 0; i77 < i; ++i77 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 832, &v169);
    if ( this != (int *)-3356 )
    UnitTypeList::Constructor(this + 839);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i78 = 0; i78 < i; ++i78 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    VectorClass::PushBack(this + 839, &v169);
    if ( this != (int *)-3384 )
    TypeList::BuildingTypeConstructor(this + 846);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i79 = 0; i79 < i; ++i79 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 846, &v169);
    if ( this != (int *)-288 )
    AnimTypeList::Constructor(this + 72);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i80 = 0; i80 < i; ++i80 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 72, &v169);
    if ( this != (int *)-260 )
    AnimTypeList::Constructor(this + 65);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i81 = 0; i81 < i; ++i81 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 65, &v169);
    if ( this != (int *)-316 )
    AnimTypeList::Constructor(this + 79);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i82 = 0; i82 < i; ++i82 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 79, &v169);
    if ( this != (int *)-344 )
    AnimTypeList::Constructor(this + 86);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i83 = 0; i83 < i; ++i83 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 86, &v169);
    if ( this != (int *)-1608 )
    TypeList::Construct(this + 402);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i84 = 0; i84 < i; ++i84 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 402, &v169);
    if ( this != (int *)-3076 )
    TypeList::InfantryConstructor(this + 769);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i85 = 0; i85 < i; ++i85 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 769, &v169);
    if ( this != (int *)-3104 )
    TypeList::Construct(this + 776);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i86 = 0; i86 < i; ++i86 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 776, &v169);
    if ( this != (int *)-3132 )
    TypeList::InfantryConstructor(this + 783);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i87 = 0; i87 < i; ++i87 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 783, &v169);
    if ( this != (int *)-3160 )
    TypeList::Construct(this + 790);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i88 = 0; i88 < i; ++i88 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 790, &v169);
    if ( this != (int *)-3188 )
    TypeList::InfantryConstructor(this + 797);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i89 = 0; i89 < i; ++i89 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 797, &v169);
    if ( this != (int *)-3216 )
    TypeList::Construct(this + 804);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i90 = 0; i90 < i; ++i90 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 804, &v169);
    if ( this != (int *)-3244 )
    TypeList::InfantryConstructor(this + 811);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i91 = 0; i91 < i; ++i91 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 811, &v169);
    if ( this != (int *)-3272 )
    TypeList::Construct(this + 818);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i92 = 0; i92 < i; ++i92 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 818, &v169);
    if ( this != (int *)-3300 )
    TypeList::InfantryConstructor(this + 825);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i93 = 0; i93 < i; ++i93 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 825, &v169);
    if ( this != (int *)-672 )
    AnimTypeList::Constructor(this + 168);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i94 = 0; i94 < i; ++i94 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 168, &v169);
    if ( this != (int *)-700 )
    AnimTypeList::Constructor(this + 175);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i95 = 0; i95 < i; ++i95 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 175, &v169);
    if ( this != (int *)-728 )
    AnimTypeList::Constructor(this + 182);
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &i, 4, 0);
    for ( i96 = 0; i96 < i; ++i96 )
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 182, &v169);
    v110 = (char *)(this + 1565);
    v111 = 16;
    do
    RulesClass::readCombatDamage(v110, v4);
    v110 += 3;
    --v111;
    while ( v111 );
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 995);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 998);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 999);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 993);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 994);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 4);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 5);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 361);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1000);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1002);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1003);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1004);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1005);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1006);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1007);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1008);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1009);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 312);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 325);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 338);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 294);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1010);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1015);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1020);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1030);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1031);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1032);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1033);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1034);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1035);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1036);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1037);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1038);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1021);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 189);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 191);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 192);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 199);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 200);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 201);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 747);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 748);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 749);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 750);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 751);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 759);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 760);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1311);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1106);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 761);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 854);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 855);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 856);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 987);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 988);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 989);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 990);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 991);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 992);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 539);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 540);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 541);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 542);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 543);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 551);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 552);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 553);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 554);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 256);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 996);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 997);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1001);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 391);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 392);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 213);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 39);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 166);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 205);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 202);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 203);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 204);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 167);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 206);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 207);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 208);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 209);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 210);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 211);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 212);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 165);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1533);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 37);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1564);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 40);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 38);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 41);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 42);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 43);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 44);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 45);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 46);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 58);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 21);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 29);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 19);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1517);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 190);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1549);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 62);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 63);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 64);
    *(this + 1016) = SearchMIXFile(aBombcursShp, 0);
    *(this + 1017) = SearchMIXFile(aChronoskShp, 0);
    for ( i97 = 0; i97 < *(this + 26); ++i97 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 23) + 4 * i97));
    for ( i98 = 0; i98 < *(this + 737); ++i98 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 734) + 4 * i98));
    for ( i99 = 0; i99 < *(this + 744); ++i99 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 741) + 4 * i99));
    for ( i100 = 0; i100 < *(this + 756); ++i100 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 753) + 4 * i100));
    for ( i101 = 0; i101 < *(this + 501); ++i101 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 498) + 4 * i101));
    for ( i102 = 0; i102 < *(this + 508); ++i102 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 505) + 4 * i102));
    for ( i103 = 0; i103 < *(this + 515); ++i103 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 512) + 4 * i103));
    for ( i104 = 0; i104 < *(this + 522); ++i104 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 519) + 4 * i104));
    for ( i105 = 0; i105 < *(this + 529); ++i105 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 526) + 4 * i105));
    for ( i106 = 0; i106 < *(this + 716); ++i106 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 713) + 4 * i106));
    for ( i107 = 0; i107 < *(this + 1026); ++i107 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 1023) + 4 * i107));
    for ( i108 = 0; i108 < *(this + 723); ++i108 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 720) + 4 * i108));
    for ( i109 = 0; i109 < *(this + 836); ++i109 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 833) + 4 * i109));
    for ( i110 = 0; i110 < *(this + 843); ++i110 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 840) + 4 * i110));
    for ( i111 = 0; i111 < *(this + 850); ++i111 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 847) + 4 * i111));
    for ( i112 = 0; i112 < *(this + 536); ++i112 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 533) + 4 * i112));
    for ( i113 = 0; i113 < *(this + 548); ++i113 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 545) + 4 * i113));
    for ( i114 = 0; i114 < *(this + 559); ++i114 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 556) + 4 * i114));
    for ( i115 = 0; i115 < *(this + 566); ++i115 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 563) + 4 * i115));
    for ( i116 = 0; i116 < *(this + 573); ++i116 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 570) + 4 * i116));
    for ( i117 = 0; i117 < *(this + 580); ++i117 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 577) + 4 * i117));
    for ( i118 = 0; i118 < *(this + 587); ++i118 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 584) + 4 * i118));
    for ( i119 = 0; i119 < *(this + 594); ++i119 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 591) + 4 * i119));
    for ( i120 = 0; i120 < *(this + 601); ++i120 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 598) + 4 * i120));
    for ( i121 = 0; i121 < *(this + 608); ++i121 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 605) + 4 * i121));
    for ( i122 = 0; i122 < *(this + 615); ++i122 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 612) + 4 * i122));
    for ( i123 = 0; i123 < *(this + 629); ++i123 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 626) + 4 * i123));
    for ( i124 = 0; i124 < *(this + 636); ++i124 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 633) + 4 * i124));
    for ( i125 = 0; i125 < *(this + 643); ++i125 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 640) + 4 * i125));
    for ( i126 = 0; i126 < *(this + 650); ++i126 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 647) + 4 * i126));
    for ( i127 = 0; i127 < *(this + 657); ++i127 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 654) + 4 * i127));
    for ( i128 = 0; i128 < *(this + 664); ++i128 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 661) + 4 * i128));
    for ( i129 = 0; i129 < *(this + 671); ++i129 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 668) + 4 * i129));
    for ( i130 = 0; i130 < *(this + 678); ++i130 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 675) + 4 * i130));
    for ( i131 = 0; i131 < *(this + 685); ++i131 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 682) + 4 * i131));
    for ( i132 = 0; i132 < *(this + 692); ++i132 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 689) + 4 * i132));
    for ( i133 = 0; i133 < *(this + 699); ++i133 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 696) + 4 * i133));
    for ( i134 = 0; i134 < *(this + 730); ++i134 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 727) + 4 * i134));
    for ( i135 = 0; i135 < *(this + 388); ++i135 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 385) + 4 * i135));
    for ( i136 = 0; i136 < *(this + 76); ++i136 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 73) + 4 * i136));
    for ( i137 = 0; i137 < *(this + 69); ++i137 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 66) + 4 * i137));
    for ( i138 = 0; i138 < *(this + 83); ++i138 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 80) + 4 * i138));
    for ( i139 = 0; i139 < *(this + 90); ++i139 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 87) + 4 * i139));
    v155 = *(this + 179);
    for ( i140 = 0; i140 < v155; ++i140 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 176) + 4 * i140));
    v157 = *(this + 186);
    for ( i141 = 0; i141 < v157; ++i141 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 183) + 4 * i141));
    for ( i142 = 0; i142 < *(this + 773); ++i142 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 770) + 4 * i142));
    for ( i143 = 0; i143 < *(this + 787); ++i143 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 784) + 4 * i143));
    for ( i144 = 0; i144 < *(this + 801); ++i144 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 798) + 4 * i144));
    for ( i145 = 0; i145 < *(this + 815); ++i145 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 812) + 4 * i145));
    result = *(this + 829);
    for ( i146 = 0; i146 < result; ++i146 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 826) + 4 * i146));
    result = *(this + 829);
    v165 = *(this + 172);
    v166 = 0;
    if ( v165 > 0 )
    v167 = this + 169;
    do
    result = ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*v167 + 4 * v166++));
    while ( v166 < v165 );
    return result;
}

