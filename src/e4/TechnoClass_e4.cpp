// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/E4Recv_634B20_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/AudioFile_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/SpawnManagerClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/FrameSnapshot_e4.hpp"  // G42.36 C2027 supply

// 0x41A9E0
namespace gamemd {
int TechnoClass_CanFireAtTarget(void * a1, void * a2, void * a3, void * a4, void * a5)
{
  int result; // eax
  int v7; // edi

  result = (int)(((TriggerTypeClass *)((unsigned int *)(a1)))->ReadINI( (gamemd::TechnoClass *)(a2), (gamemd::TechnoClass *)(a3), (int)(a4), (TechnoClass *)(a5)));
  if ( !result ) /*0x41a9fd*/
  {
        if ( !*(unsigned char *)((unsigned int)(a1)+ 1737) || *(unsigned int *)((unsigned int)(a1)+ 280) )
    {
      v7 = *((ProgressTimer *)((ProgressTimer *)a1->secondaryFacing))->GetValue(&a5); /*0x41aa2e*/
      if ( (*(int (**)(char *))(*((unsigned int *)a1 + 432) + 28))((char *)a1 + 1728) /*0x41aa6a*/
        || abs16(v7 - *(unsigned short *)((ObjectClass *)((ObjectClass *)a1))->CalcTargetFacing((int *)&a5, (int)a3)) <= 0x800u )
      {
        return 0; /*0x41aa77*/
      }
      else
      {
        return 2; /*0x41aa6e*/
      }
    }
    else
    {
      return 1; /*0x41aa15*/
    }
  }
  return result; /*0x41aa13*/
}
}
// 0x6F2B40
namespace gamemd {
TechnoClass::TechnoClass(AbstractClass * aP1)
{

  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax

  RadioClass::Release((RadioClass *)this); /*0x6f2b46*/
  this->flashing[0] = 0; /*0x6f2b52*/
  LOBYTE(this->flashing[1]) = 0; /*0x6f2b58*/
  this->animation[0] = 0; /*0x6f2b5e*/
  LOBYTE(this->animation[1]) = 0; /*0x6f2b64*/
  v3 = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2b6a*/
  this->animation[4] = 0; /*0x6f2b6f*/
  this->animation[2] = v3; /*0x6f2b75*/
  this->animation[5] = 0; /*0x6f2b7b*/
  this->animation[6] = 1; /*0x6f2b81*/
  this->passengers[0] = 0; /*0x6f2b87*/
  this->passengers[1] = 0; /*0x6f2b8d*/
  this->transporter = 0; /*0x6f2b93*/
  this->turretChargeTimer = -100; /*0x6f2b9c*/
  this->currentTurretNumber = -1; /*0x6f2ba6*/
  this->secondaryTurretIndex = -1; /*0x6f2bac*/
  this->behindAnim = 0; /*0x6f2bb2*/
  this->deployAnim = 0; /*0x6f2bb8*/
  this->inAirFlag = 0; /*0x6f2bbe*/
  this->currentWeaponSlot = 0; /*0x6f2bc4*/
  this->currentRank = -1; /*0x6f2bca*/
  this->gattlingStage = 0; /*0x6f2bd0*/
  this->gattlingValue = 0; /*0x6f2bd6*/
  this->ammoReloadTimer = 0; /*0x6f2be2*/
  unknown_libname_35( (void *)((ObjectClass *)this->veterancy)); /*0x6f2be8*/
  (&this->armorMultiplier)[0] = 0; /*0x6f2bf2*/
  (&this->armorMultiplier)[1] = 1072693248; /*0x6f2bf8*/
  ((unsigned int *)&this->firepowerMultiplier)[0] = 0; /*0x6f2bfe*/
  ((unsigned int *)&this->firepowerMultiplier)[1] = 1072693248; /*0x6f2c04*/
  this->idleActionTimer[0] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2c10*/
  this->idleActionTimer[2] = 0; /*0x6f2c16*/
  v4 = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2c1c*/
  this->radarFlashTimer[2] = 0; /*0x6f2c22*/
  this->radarFlashTimer[0] = v4; /*0x6f2c28*/
  this->targetingTimer[0] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2c33*/
  this->targetingTimer[2] = 45; /*0x6f2c39*/
  v5 = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2c43*/
  this->ironCurtainTimer[1] = 0; /*0x6f2c49*/
  *(unsigned int *)this->__pad_18C = v5; /*0x6f2c4f*/
  this->ironCurtainTimer[2] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2c5b*/
  this->ironTintTimer[1] = 0; /*0x6f2c61*/
  this->ironTintTimer[2] = 10; /*0x6f2c67*/
  this->ironTintStage = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2c76*/
  this->airstrikeTimer[1] = 0; /*0x6f2c7c*/
  v6 = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2c82*/
  this->airstrikeTintTimer[1] = 0; /*0x6f2c88*/
  this->airstrikeTimer[2] = v6; /*0x6f2c8e*/
  *(unsigned int *)this->__pad_1C4 = 0; /*0x6f2c94*/
  (&this->__pad_1C4)[4] = 0; /*0x6f2c9a*/
  this->drainTarget = 0; /*0x6f2ca0*/
  this->drainingMe = 0; /*0x6f2ca6*/
  this->drainAnim = 0; /*0x6f2cac*/
  this->isDisguisedFlag = 0; /*0x6f2cb2*/
  this->disguiseCreationFrame = 0; /*0x6f2cb8*/
  v7 = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2cbe*/
  ((unsigned int *)&this->infantryBlinkTimer)[2] = 0; /*0x6f2cc4*/
  ((unsigned int *)&this->infantryBlinkTimer)[0] = v7; /*0x6f2cca*/
  this->disguiseBlinkTimer[0] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2cd5*/
  this->disguiseBlinkTimer[2] = 0; /*0x6f2cdb*/
  this->isTargetedByChrono = 0; /*0x6f2ce1*/
  ((unsigned int *)&this->reloadTimer)[0] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2ced*/
  ((unsigned int *)&this->reloadTimer)[2] = 0; /*0x6f2cf3*/
  this->currentBurstCount = 0; /*0x6f2cf9*/
  this->currentBarrelIndex = 0; /*0x6f2cff*/
  (&this->displayProductionTo)[0] = 0; /*0x6f2d05*/
  this->controlGroup = -1; /*0x6f2d0f*/
  this->focus = 0; /*0x6f2d15*/
  this->owner = (HouseClass *)aP1; /*0x6f2d1b*/
  this->cloakState = 0; /*0x6f2d21*/
  this->cloakProgress[0] = 0; /*0x6f2d27*/
  LOBYTE(this->cloakProgress[1]) = 0; /*0x6f2d2d*/
  this->cloakProgress[2] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2d38*/
  this->cloakProgress[4] = 0; /*0x6f2d3e*/
  this->cloakProgress[5] = 0; /*0x6f2d44*/
  this->cloakProgress[6] = 1; /*0x6f2d4a*/
  v8 = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2d50*/
  this->cloakDelayTimer[2] = 0; /*0x6f2d56*/
  this->cloakDelayTimer[0] = v8; /*0x6f2d5c*/
  this->warpFactor = 0.0; /*0x6f2d62*/
  this->isChronosphereImmune = 0; /*0x6f2d68*/
  this->lastSightCoords[0] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3)); /*0x6f2d79*/
  this->lastSightCoords[1] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)); /*0x6f2d85*/
  this->lastSightCoords[2] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 5)); /*0x6f2d93*/
  this->lastSightRange = 0; /*0x6f2d96*/
  this->lastSightHeight = 0; /*0x6f2d9c*/
  this->gapSuperCharged = 0; /*0x6f2da2*/
  this->isGeneratingGap = 0; /*0x6f2da8*/
  this->gapRadius = 0; /*0x6f2dae*/
  this->isBeingWarpedOut = 0; /*0x6f2db4*/
  this->isWarpingOut = 0; /*0x6f2dba*/
  this->isWarpEffectActive = 0; /*0x6f2dc0*/
  this->temporalUsing = 0; /*0x6f2dc6*/
  this->temporalTargetingMe = 0; /*0x6f2dcc*/
  this->isImmobilized = 0; /*0x6f2dd2*/
  this->owningHouseIndex0 = 0; /*0x6f2dd8*/
  this->chronoLockRemaining = 0; /*0x6f2dde*/
  this->chronoDestCoords[0] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3)); /*0x6f2dea*/
  this->chronoDestCoords[1] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)); /*0x6f2df1*/
  v9 = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 5)); /*0x6f2df4*/
  this->bunkerLinkedUnit = 0; /*0x6f2dfa*/
  this->pitchAngle = 0.0; /*0x6f2e00*/
  this->chronoDestCoords[2] = v9; /*0x6f2e06*/
  this->airstrike = 0; /*0x6f2e09*/
  this->isBerserk = 0; /*0x6f2e0f*/
  this->isBerserk_duration_left = 0; /*0x6f2e15*/
  this->sprayOffsetIndex = 0; /*0x6f2e1b*/
  this->isUncrushable = 0; /*0x6f2e21*/
  this->rockerLinkedUnit = 0; /*0x6f2e27*/
  this->locomotorTarget = 0; /*0x6f2e2d*/
  this->locomotorSource = 0; /*0x6f2e33*/
  this->target = 0; /*0x6f2e39*/
  this->lastTarget = 0; /*0x6f2e3f*/
  this->captureManager = 0; /*0x6f2e45*/
  this->mindControlledBy = 0; /*0x6f2e4b*/
  this->mindControlledBy_a_unit = 0; /*0x6f2e51*/
  this->mindControlRingAnim = 0; /*0x6f2e57*/
  this->mindControlledBy_house = 0; /*0x6f2e5d*/
  this->spawnManager = 0; /*0x6f2e63*/
  this->spawnOwner = 0; /*0x6f2e69*/
  this->slaveManager = 0; /*0x6f2e6f*/
  this->slaveOwner = 0; /*0x6f2e75*/
  this->originalOwnerHouse = 0; /*0x6f2e7b*/
  this->diskLaserTimer[0] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2e86*/
  this->diskLaserTimer[2] = 0; /*0x6f2e8c*/
  this->diskLaserChargeState = 0; /*0x6f2e98*/
  this->ammo = -1; /*0x6f2e9e*/
  this->unitValue = 0; /*0x6f2ea4*/
  this->damageParticles_2 = 0; /*0x6f2eaa*/
  this->railgunParticles_2 = 0; /*0x6f2eb0*/
  this->auxParticles1 = 0; /*0x6f2eb6*/
  this->auxParticles2 = 0; /*0x6f2ebc*/
  this->firingParticles = 0; /*0x6f2ec2*/
  this->waveEffect = (WaveClass *)-1; /*0x6f2ec8*/
  ((Delegate *)((Delegate *)&this->tiltSidewaysAngle))->GetField(); /*0x6f2ece*/
  TechnoClass::checkCloakState((TechnoClass *)this->storedTiberium); /*0x6f2ed9*/
  ((FrameSnapshot *)((FrameSnapshot *)this->barrelFacing))->InitMax(3); /*0x6f2ee6*/
  ((FrameSnapshot *)(this->primaryFacing))->Init(); /*0x6f2ef1*/
  ((FrameSnapshot *)(this->secondaryFacing))->Init(); /*0x6f2efc*/
  this->currentBurstIndex = 0; /*0x6f2f01*/
  this->targetLaserTimer[0] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f2f0d*/
  this->targetLaserTimer[2] = 0; /*0x6f2f13*/
  *(unsigned short *)this->unknown_3CA = 0; /*0x6f2f1e*/
  this->countedAsOwned = 0; /*0x6f2f25*/
  this->isSinking = 0; /*0x6f2f2b*/
  this->wasAlreadySinking = 0; /*0x6f2f31*/
  this->isReceivingDamageEffect = 0; /*0x6f2f37*/
  this->isUseless = 0; /*0x6f2f3d*/
  this->hasBeenAttacked = 0; /*0x6f2f43*/
  this->isCloakableFlag = 0; /*0x6f2f49*/
  this->isPrimaryFactory = 0; /*0x6f2f4f*/
  this->isALoaner = 0; /*0x6f2f55*/
  this->isInPlayfield = 0; /*0x6f2f5b*/
  this->turretRecoil[0] = 2; /*0x6f2f61*/
  this->turretRecoil[1] = 1; /*0x6f2f67*/
  this->turretRecoil[2] = 1; /*0x6f2f6d*/
  this->turretRecoil[3] = 1; /*0x6f2f73*/
  this->turretRecoil[5] = 0; /*0x6f2f79*/
  this->turretRecoil[6] = 0; /*0x6f2f7f*/
  (&this->barrelRecoil)[0] = 2; /*0x6f2f85*/
  (&this->barrelRecoil)[1] = 1; /*0x6f2f8b*/
  (&this->barrelRecoil)[2] = 1; /*0x6f2f91*/
  (&this->barrelRecoil)[3] = 1; /*0x6f2f97*/
  (&this->barrelRecoil)[5] = 0; /*0x6f2f9d*/
  (&this->barrelRecoil)[6] = 0; /*0x6f2fa3*/
  this->isTether = 0; /*0x6f2fa9*/
  this->isAlternativeTether = 0; /*0x6f2faf*/
  this->isOwnedByCurrentPlayer = 0; /*0x6f2fb5*/
  this->isDiscoveredByCurrentPlayer = 0; /*0x6f2fbb*/
  this->isDiscoveredByComputer = 0; /*0x6f2fc1*/
  this->isSelectedByPlayer = 0; /*0x6f2fc7*/
  this->isUnderCursor = 0; /*0x6f2fcd*/
  this->isCommandLineTarget = 0; /*0x6f2fd3*/
  this->sightRangeBonus = 0; /*0x6f2fd9*/
  this->isRecruitableByAlly = 1; /*0x6f2fdf*/
  this->isRecruitableByEnemy = 1; /*0x6f2fe6*/
  this->isRadarTracked = 0; /*0x6f2fed*/
  this->isOnCarryall = 0; /*0x6f2ff3*/
  this->isCrashing = 0; /*0x6f2ff9*/
  this->wasAlreadyCrashing = 0; /*0x6f2fff*/
  this->isBeingManipulated = 0; /*0x6f3005*/
  this->manipulatedByUnit = 0; /*0x6f300b*/
  this->chronoWarpedByHouse = 0; /*0x6f3011*/
  this->isChronoImmuneFlag = 0; /*0x6f3017*/
  this->isMouseHovering = 0; /*0x6f301d*/
  this->shouldBeReselectOnUnlimbo = 0; /*0x6f3023*/
  this->previousTeam = 0; /*0x6f3029*/
  this->isCountedAsOwned_special = 0; /*0x6f302f*/
  this->isAbsorbed = 0; /*0x6f3035*/
  this->isGrindingInProgress = 0; /*0x6f303b*/
  this->grindingAnimHandle = 0; /*0x6f3046*/
  ((unsigned int *)&this->currentTargetThreatValues)[1] = 0; /*0x6f3051*/
  ((unsigned int *)&this->currentTargetThreatValues)[2] = 0; /*0x6f3057*/
  LOBYTE(((unsigned int *)&this->currentTargetThreatValues)[3]) = 1; /*0x6f305d*/
  BYTE1(((unsigned int *)&this->currentTargetThreatValues)[3]) = 0; /*0x6f3064*/
  ((unsigned int *)&this->currentTargetThreatValues)[0] = (int)&vt_DynamicVectorClass; /*0x6f306a*/
  ((unsigned int *)&this->currentTargetThreatValues)[5] = 10; /*0x6f3074*/
  ((unsigned int *)&this->currentTargetThreatValues)[4] = 0; /*0x6f307a*/
  ((unsigned int *)&this->currentTargets)[1] = 0; /*0x6f3080*/
  ((unsigned int *)&this->currentTargets)[2] = 0; /*0x6f3086*/
  LOBYTE(((unsigned int *)&this->currentTargets)[3]) = 1; /*0x6f308c*/
  BYTE1(((unsigned int *)&this->currentTargets)[3]) = 0; /*0x6f3093*/
  ((unsigned int *)&this->currentTargets)[0] = (int)&vt_DynamicVectorClass; /*0x6f3099*/
  ((unsigned int *)&this->currentTargets)[5] = 10; /*0x6f309f*/
  ((unsigned int *)&this->currentTargets)[4] = 0; /*0x6f30a5*/
  ((unsigned int *)&this->attackedTargets)[1] = 0; /*0x6f30ab*/
  ((unsigned int *)&this->attackedTargets)[2] = 0; /*0x6f30b1*/
  LOBYTE(((unsigned int *)&this->attackedTargets)[3]) = 1; /*0x6f30b7*/
  BYTE1(((unsigned int *)&this->attackedTargets)[3]) = 0; /*0x6f30be*/
  ((unsigned int *)&this->attackedTargets)[0] = (int)&vt_DynamicVectorClass; /*0x6f30c4*/
  ((unsigned int *)&this->attackedTargets)[5] = 10; /*0x6f30ca*/
  ((unsigned int *)&this->attackedTargets)[4] = 0; /*0x6f30d0*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f30d6*/
  this->turretIsRotating = 0; /*0x6f30dc*/
  this->isGattlingSoundPlaying = 0; /*0x6f30e2*/
  this->unknown_4BC = 0; /*0x6f30e8*/
  this->isUnusedGattlingSoundPlaying = 0; /*0x6f30ee*/
  this->unknown_4D8 = 0; /*0x6f30f4*/
  this->unknown_bool_4F8 = 0; /*0x6f30fa*/
  this->unknown_4FC = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6f3106*/
  this->queueUpToEnter = 0; /*0x6f310c*/
  this->empLockRemaining = 0; /*0x6f3112*/
  this->firingRadBeam = 0; /*0x6f3118*/
  this->planningToken = 0; /*0x6f311e*/
  this->disguiseAsType = 0; /*0x6f3124*/
  this->disguisedAsHouse = 0; /*0x6f312a*/
  this->vtable1 = &vt_TechnoClass; /*0x6f3130*/
  ((unsigned int *)this)[0] = (unsigned int)&vt_TechnoClass; /*0x6f3136*/
  ((unsigned int *)this)[0] = (unsigned int)&vt_TechnoClass; /*0x6f313d*/
  ((unsigned int *)this)[0] = (unsigned int)&off_7F4934; /*0x6f314a*/
  AudioController::Init((AudioController *)this->turretRotateSoundController); /*0x6f3151*/
  AudioController::Init((AudioController *)this->gattlingSoundController); /*0x6f315c*/
  AudioController::Init((AudioController *)this->unusedGattlingSoundController); /*0x6f3167*/
  AudioController::Init((AudioController *)this->queuedVoiceSoundController); /*0x6f3172*/
  this->queuedVoiceIndex = -1; /*0x6f3177*/
  this->unknown_4F4 = -1; /*0x6f317d*/
  if ( *(int *)((char *)&stru_A8EB00 + 164) < *(int *)((char *)&stru_A8EB00 + 156) /*0x6f31b6*/
    || (*((unsigned int *)((char *)&stru_A8EB00 + 161)) || !*(unsigned int *)((char *)&stru_A8EB00 + 156))
    && *(int *)((char *)&stru_A8EB00 + 168) > 0
&& (*(uint8_t (**)(unsigned char *, int, unsigned int))(*(unsigned int *)((char *)&stru_A8EB00 + 148) + 8))( (unsigned char *)(((char *)&stru_A8EB00 + 148)), *(unsigned int *)((char *)&stru_A8EB00 + 168) + *(unsigned int *)((char *)&stru_A8EB00 + 156), 0) )



  {
    v10 = (*(unsigned int *)((char *)&stru_A8EB00 + 164))++; /*0x6f31c3*/
    *(unsigned int *)(*(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v10) = (unsigned int)this;
  }
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16] < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[8] /*0x6f3209*/
    || (g_BuildingLoadQueue_Array.__pad_E88[13] || !*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[8])
    && *(int *)&g_BuildingLoadQueue_Array.__pad_E88[20] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E88 + 8))(
         g_BuildingLoadQueue_Array.__pad_E88,
         *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[20] + *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[8],
         0) )
  {
    v11 = (*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[16])++; /*0x6f3216*/
    *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v11) = (unsigned int)this;
  }
  LOBYTE(((unsigned int *)this)[0]) |= 1u; /*0x6f3237*/
  this->initialOwner = (HouseClass *)aP1; /*0x6f3241*/
  memset( (void *)(&this->fireParticles), 0, 0x20u); /*0x6f3247*/
  *(unsigned short *)this->unknown_short_3C8 = ((Random *)((Random *)&dword_A8B230[14].NeedsSaveOrLink))->State(); /*0x6f3259*/
  return this; /*0x6f3262*/

}
} // namespace ra2

// 0x6F3F40
namespace gamemd {
unsigned int * TechnoClass::Update(int a2)
{

  int v2; // ecx
  TechnoClass *v3; // esi
  Object *v4; // eax
  unsigned int *result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  TemporalClass *v18; // eax
  TemporalClass *v19; // eax
  int (**vtable0)(TechnoClass *, unsigned int); // edx
  int v21; // eax
  int v22; // eax
  HouseClass *owner; // eax
  int sideIndex; // eax
  unsigned int *v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // [esp-Ch] [ebp-10h]
  int v30; // [esp-Ch] [ebp-10h]
  int v31; // [esp-8h] [ebp-Ch]
  int v32; // [esp-8h] [ebp-Ch]
  int v33; // [esp-4h] [ebp-8h]
  int v34; // [esp-4h] [ebp-8h]

  v3 = (TechnoClass *)v2; /*0x6f3f41*/
  v4 = *(Object **)(v2 + 540); /*0x6f3f43*/
  if ( v4 ) /*0x6f3f4b*/
    *(unsigned char *)(v2 + 1050) = dword_A83D4C   ==   (unsigned int)((unsigned int)(v4)); /*0x6f3f55*/
  result = (unsigned int *)(*(int (**)(void))(*(unsigned int *)v2 + 132))(); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !v3->planningToken ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(v3); /*0x6f3f83*/
    if ( *(unsigned int *)((*((int (**)(TechnoClass *, int))v3->vtable1 + 33))( (TechnoClass *)(v3), a2) + 3416) ) /*0x6f3f93*/
    {
      v6 = (unsigned int)__2_YAPAXI_Z(0x74u); /*0x6f3fa4*/
      if ( v6 ) /*0x6f3fab*/
      {
        v33 = *(unsigned int *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3428); /*0x6f3fbf*/
        v31 = *(unsigned int *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3424); /*0x6f3fd0*/
        v29 = *(unsigned int *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3420); /*0x6f3fe1*/
        v7 = (*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)); /*0x6f3fe4*/
        v8 = SpawnManagerClass::SpawnManagerClass(v6, (int)v3, *(unsigned int *)(v7 + 3416), v29, v31, v33); /*0x6f3ff4*/
      }
      else
      {
        v8 = 0; /*0x6f3ffb*/
      }
      v3->spawnManager = (gamemd::CaptureManagerClass *)((SpawnManagerClass *)v8); /*0x6f3ffd*/
    }
    if ( *(unsigned int *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3392) ) /*0x6f400d*/
    {
      v9 = (unsigned int)__2_YAPAXI_Z(0x64u); /*0x6f401e*/
      if ( v9 ) /*0x6f4025*/
      {
        v34 = *(unsigned int *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3404); /*0x6f4039*/
        v32 = *(unsigned int *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3400); /*0x6f404a*/
        v30 = *(unsigned int *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3396); /*0x6f405b*/
        v10 = (*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)); /*0x6f405e*/
        v11 = (int)(((SlaveManagerClass *)v9)->ctor( (TechnoClass *)((int)v3), *(unsigned int *)(v10 + 3392), v30, v32, v34)); /*0x6f406e*/
      }
      else
      {
        v11 = 0; /*0x6f4075*/
      }
      v3->slaveManager = (SlaveManagerClass *)v11; /*0x6f4077*/
    }
    if ( *(unsigned int *)(*((int (**)(TechnoClass *, unsigned int))v3->vtable1 + 254))( (TechnoClass *)(v3), 0) /*0x6f40a2*/
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*((int (**)(TechnoClass *, unsigned int))v3->vtable1 + 254))( (TechnoClass *)(v3), 0)
                              + 172)
                  + 341) )
    {
      v12 = (unsigned int)__2_YAPAXI_Z(0x50u); /*0x6f40b3*/
      if ( v12 ) /*0x6f40ba*/
      {
        LOBYTE(v13) = *(unsigned char *)(*(unsigned int *)(*((int (**)(TechnoClass *))v3->vtable1 + 254))( (TechnoClass *)(v3)) + 320); /*0x6f40cc*/
        v14 = (*((int (**)(TechnoClass *, unsigned int, int))v3->vtable1 + 254))( (TechnoClass *)(v3), 0, v13); /*0x6f40d7*/
        v15 = CaptureManagerClass::CaptureManagerClass(v12, (int)v3, *(unsigned int *)(*(unsigned int *)&v14->__pad_290, 0); /*0x6f40e9*/
      }
      else
      {
        v15 = 0; /*0x6f40f0*/
      }
      v3->captureManager = (gamemd::FootClass *)((CaptureManagerClass *)v15); /*0x6f40f2*/
    }
    if ( (*((int (**)(TechnoClass *))v3->vtable1 + 11))( (TechnoClass *)(v3)) != 6 /*0x6f412a*/
      && *(unsigned int *)(*((int (**)(TechnoClass *, unsigned int))v3->vtable1 + 254))( (TechnoClass *)(v3), 0)
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*((int (**)(TechnoClass *, unsigned int))v3->vtable1 + 254))( (TechnoClass *)(v3), 0)
                              + 172)
                  + 345) )
    {
      v16 = (unsigned int)__2_YAPAXI_Z(0x58u); /*0x6f4136*/
      if ( v16 ) /*0x6f4140*/
        v17 = ParasiteClass::ParasiteClass(v16, (int)v3); /*0x6f4145*/
      else
        v17 = 0; /*0x6f414c*/
      v3[1].radarFlashTimer[2] = v17; /*0x6f414e*/
    }
    if ( *(unsigned int *)(*((int (**)(TechnoClass *, unsigned int))v3->vtable1 + 254))( (TechnoClass *)(v3), 0) /*0x6f4179*/
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*((int (**)(TechnoClass *, unsigned int))v3->vtable1 + 254))( (TechnoClass *)(v3), 0)
                              + 172)
                  + 346) )
    {
      v18 = (TemporalClass *)__2_YAPAXI_Z(0x50u); /*0x6f4185*/
      if ( v18 ) /*0x6f418f*/
        v19 = (TemporalClass *)TemporalClass::TemporalClass(v18, (int)v3); /*0x6f4194*/
      else
        v19 = (TemporalClass *)(0); /*0x6f419b*/
      vtable0 = (int (**)(TechnoClass *, unsigned int))v3->RadioClass; /*0x6f419d*/
      v3->temporalUsing = v19; /*0x6f41a3*/
      v3->temporalUsing[1] = *(unsigned int *)(*(unsigned int *)vtable0[254](v3, 0) + 164); /*0x6f41bd*/
    }
    if ( *(int *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 1564) > 0 ) /*0x6f41d2*/
    {
      v21 = (unsigned int)__2_YAPAXI_Z(0x60u); /*0x6f41d6*/
      if ( v21 ) /*0x6f41e0*/
        v22 = AirstrikeClass::AirstrikeClass(v21, (int)v3); /*0x6f41e5*/
      else
        v22 = 0; /*0x6f41ec*/
      v3->airstrike = (unsigned int)((AirstrikeClass *)v22); /*0x6f41ee*/
    }
    if ( *(unsigned char *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3375) /*0x6f4212*/
      && *(unsigned char *)((*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)) + 3376) )
    {
      owner = v3->owner; /*0x6f421c*/
      v3->isDisguisedFlag = (gamemd::TechnoClass *)(1); /*0x6f4222*/
      v3->disguisedAsHouse = owner; /*0x6f4229*/
      sideIndex = owner->sideIndex; /*0x6f422f*/
      if ( sideIndex ) /*0x6f4237*/
      {
        if ( sideIndex == 1 ) /*0x6f4250*/
          v3->disguiseAsType = *(ObjectTypeClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3420); /*0x6f425d*/
        else
          v3->disguiseAsType = *(ObjectTypeClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x6f4271*/
      }
      else
      {
        v3->disguiseAsType = *(ObjectTypeClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3416); /*0x6f4245*/
      }
    }
    v25 = (unsigned int *)(*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)); /*0x6f427b*/
    v26 = v25[809]; /*0x6f4281*/
    v25 += 809; /*0x6f4287*/
    v3->turretRecoil[0] = v26; /*0x6f428c*/
    v3->turretRecoil[1] = v25[1]; /*0x6f4295*/
    v3->turretRecoil[2] = v25[2]; /*0x6f429e*/
    v3->turretRecoil[3] = v25[3]; /*0x6f42a7*/
    v27 = (*((int (**)(TechnoClass *))v3->vtable1 + 33))( (TechnoClass *)(v3)); /*0x6f42b1*/
    v28 = *(unsigned int *)(v27 + 3256); /*0x6f42b7*/
    result = (unsigned int *)(v27 + 3256); /*0x6f42bd*/
    v3->barrelRecoil[0] = v28; /*0x6f42c2*/
    v3->barrelRecoil[1] = result[1]; /*0x6f42cb*/
    v3->barrelRecoil[2] = result[2]; /*0x6f42d4*/
    v3->barrelRecoil[3] = result[3]; /*0x6f42dd*/
    v3->isTurretRotateSoundPlaying = 1; /*0x6f42e3*/
    v3->turretIsRotating = 0; /*0x6f42ed*/
  }
  return result; /*0x6f42f7*/

}
} // namespace ra2

// 0x6F4500
namespace gamemd {
int TechnoClass::DTOR()
{

  Sidebar *v2; // ecx
  int v3; // ecx
  int v4; // ecx
  TechnoClass *v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned int *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  ObjectClass *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-4h] BYREF

  v2 = *(Sidebar **)&this->planningToken; /*0x6f4507*/
  *(unsigned int *)this = (unsigned int)&vt_TechnoClass;
  *((unsigned int *)this + 1) = (unsigned int)&vt_TechnoClass;
  *((unsigned int *)this + 2) = (unsigned int)&vt_TechnoClass;
  *((unsigned int *)this + 3) = (unsigned int)&off_7F4934;
  if ( v2 ) /*0x6f452a*/
  {
    Sidebar::CancelSidebarProductionQueue( (int *)(v2)); /*0x6f452c*/
    *((unsigned int *)this + 325) = 0; /*0x6f4531*/
  }
  v3 = *((unsigned int *)this + 175); /*0x6f4537*/
  if ( v3 ) /*0x6f453f*/
  {
    (*(void (**)(int, int))(*(unsigned int *)v3 + 32))(v3, 1); /*0x6f4545*/
    *((unsigned int *)this + 175) = 0; /*0x6f4548*/
  }
  v4 = *((unsigned int *)this + 180); /*0x6f454e*/
  if ( v4 ) /*0x6f4556*/
  {
    (*(void (**)(int, int))(*(unsigned int *)v4 + 32))(v4, 1); /*0x6f455c*/
    *((unsigned int *)this + 180) = 0; /*0x6f455f*/
  }
  v5 = *(TechnoClass **)&this->slaveManager; /*0x6f4565*/
  if ( v5 ) /*0x6f456d*/
  {
    TechnoClass::MutateAll(v5, 0, 0); /*0x6f4571*/
    v6 = *((unsigned int *)this + 182); /*0x6f4576*/
    if ( v6 ) /*0x6f457e*/
      (*(void (**)(int, int))(*(unsigned int *)v6 + 32))(v6, 1); /*0x6f4584*/
    *((unsigned int *)this + 182) = 0; /*0x6f4587*/
  }
  v7 = *((unsigned int *)this + 157); /*0x6f458d*/
  if ( v7 ) /*0x6f4595*/
  {
    (*(void (**)(int, int))(*(unsigned int *)&v7->q_80))(v7, 1);  /*0x6f459b*/
    *((unsigned int *)this + 157) = 0; /*0x6f459e*/
  }
  v8 = *(unsigned int **)&this->airstrike; /*0x6f45a4*/
  if ( v8 && v8[19]   ==   (unsigned int)((unsigned int)(this ))) /*0x6f45b1*/
  {
    (*(void (**)(unsigned int *, int))(*v8 + 32))( (unsigned int *)(v8), 1); /*0x6f45bb*/
    *((unsigned int *)this + 165) = 0; /*0x6f45be*/
  }
  AudioFile::Stop((AudioFile *)((char *)this + 1160)); /*0x6f45cd*/
  AudioFileClass::Release( (AudioFileClass *)((char *)this + 1160)); /*0x6f45d4*/
  AudioFile::Stop((AudioFile *)((char *)this + 1188)); /*0x6f45e1*/
  AudioFileClass::Release( (AudioFileClass *)((char *)this + 1188)); /*0x6f45e8*/
  AudioFile::Stop((AudioFile *)((char *)this + 1216)); /*0x6f45f5*/
  AudioFileClass::Release( (AudioFileClass *)((char *)this + 1216)); /*0x6f45fc*/
  AudioFileClass::Release( (AudioFileClass *)((char *)this + 1244)); /*0x6f4607*/
  *((unsigned int *)this + 135) = 0; /*0x6f4610*/
  *((unsigned char *)this + 1050) = 0; /*0x6f4616*/
  v18 = (unsigned int)this;
  v9 = (*(int (**)(unsigned char *, int *))(*(unsigned int *)((char *)&stru_A8EB00 + 148) + 16))( (unsigned char *)(((char *)&stru_A8EB00 + 148)), (int *)(&v18)); /*0x6f462c*/
  if ( v9 != -1 ) /*0x6f4633*/
    FactoryClass::RemoveItem((FactoryClass *)((char *)&stru_A8EB00 + 148), v9); /*0x6f463b*/
  v18 = (unsigned int)this;
v10 = (*(int (**)(char *, int *))(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E88 + 16))( /*0x6f4654*/ g_BuildingLoadQueue_Array.__pad_E88, (int *)(&v18));


  if ( v10 != -1 ) /*0x6f465a*/
    ((DynamicVector *)((DynamicVector *)g_BuildingLoadQueue_Array.__pad_E88))->RemoveItem(v10); /*0x6f4662*/
  v11 = *((unsigned int *)this + 75); /*0x6f4667*/
  if ( v11 ) /*0x6f466f*/
  {
    (*(void (**)(int))(*(unsigned int *)v11 + 248))(v11); /*0x6f4673*/
    *((unsigned int *)this + 75) = 0; /*0x6f4679*/
  }
  v12 = *((unsigned int *)this + 76); /*0x6f467f*/
  if ( v12 ) /*0x6f4687*/
  {
    (*(void (**)(int))(*(unsigned int *)v12 + 248))(v12); /*0x6f468b*/
    *((unsigned int *)this + 76) = 0; /*0x6f4691*/
  }
  *((unsigned int *)this + 284) = (unsigned int)&vt_VectorClass;
  AbstractClassVector::ddtor( (char *)this + 1136); /*0x6f46a3*/
  v13 = *(void **)&this->attackedTargets; /*0x6f46a8*/
  *((unsigned int *)this + 278) = (unsigned int)&vt_VectorClass;
  if ( v13 && *((unsigned char *)this + 1125) ) /*0x6f46bc*/
  {
    __3_YAXPAX_Z(v13); /*0x6f46c5*/
    *((unsigned int *)this + 279) = 0; /*0x6f46cd*/
  }
  *((unsigned char *)this + 1125) = 0; /*0x6f46d3*/
  *((unsigned int *)this + 280) = 0; /*0x6f46d9*/
  v14 = *(void **)&this->vecInt_Items; /*0x6f46df*/
  *((unsigned int *)this + 272) = (unsigned int)&vt_VectorClass;
  if ( v14 && *((unsigned char *)this + 1101) ) /*0x6f46f3*/
  {
    __3_YAXPAX_Z(v14); /*0x6f46fc*/
    *((unsigned int *)this + 273) = 0; /*0x6f4704*/
  }
  *((unsigned char *)this + 1101) = 0; /*0x6f4710*/
  *((unsigned int *)this + 274) = 0; /*0x6f4716*/
  nullsub_69(); /*0x6f471c*/
  *(unsigned int *)this = (unsigned int)&vt_RadioClass;
  *((unsigned int *)this + 1) = (unsigned int)&vt_RadioClass;
  *((unsigned int *)this + 2) = (unsigned int)&vt_RadioClass;
  *((unsigned int *)this + 3) = (unsigned int)&vt_RadioClass;
  v15 = *(void **)&this->flashing; /*0x6f473c*/
  *((unsigned int *)this + 56) = (unsigned int)&vt_VectorClass;
  if ( v15 && *((unsigned char *)this + 237) ) /*0x6f4750*/
  {
    __3_YAXPAX_Z(v15); /*0x6f4759*/
    *((unsigned int *)this + 57) = 0; /*0x6f4761*/
  }
  *((unsigned char *)this + 237) = 0; /*0x6f4767*/
  *((unsigned int *)this + 58) = 0; /*0x6f476d*/
  *(unsigned int *)this = (unsigned int)&vt_MissionClass;
  *((unsigned int *)this + 1) = (unsigned int)&vt_MissionClass;
  *((unsigned int *)this + 2) = (unsigned int)&vt_MissionClass;
  *((unsigned int *)this + 3) = (unsigned int)&vt_MissionClass;
  return ((ObjectClass *)((ObjectClass *)this))->Dtor(); /*0x6f4795*/

}
} // namespace gamemd

// 0x702D40
namespace gamemd {
Coord * * TechnoClass::RegisterKill()
{

  int v2; // eax
  int v3; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v5; // ecx
  TeamClass *v6; // ecx
  TeamClass *v7; // ecx
  TeamClass *v8; // ecx
  int result; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  unsigned int *v17; // eax
  unsigned int *v18; // eax
  int v19; // [esp-Ch] [ebp-1Ch]
  int v20; // [esp-Ch] [ebp-1Ch]
  int v21; // [esp-Ch] [ebp-1Ch]
  int v22; // [esp-Ch] [ebp-1Ch]
  HouseClass *owner; // [esp-8h] [ebp-18h]
  HouseClass *v24; // [esp-8h] [ebp-18h]
  HouseClass *v25; // [esp-8h] [ebp-18h]
  HouseClass *v26; // [esp-8h] [ebp-18h]
  int v27; // [esp+Ch] [ebp-4h]
  int v28; // [esp+14h] [ebp+4h]

  v27 = 0; /*0x702d46*/
  v2 = (*((int (**)(TechnoClass *))this->vtable1 + 33))(this); /*0x702d50*/
  v3 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v2 + 132))( v2, (HouseClass *)(this->owner)); /*0x702d6b*/
  if ( ((unsigned int *)this)[0] ) /*0x702d6d*/
  {
    attachedTag = (TeamClass *)((unsigned int *)this)[0]; /*0x702d77*/
    if ( attachedTag ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        ((TeamClass *)(attachedTag))->Update_0(6, (int)this, *(int *)((char *)&g_BuildingLoadQueue_Array + 24), 0, 0); /*0x702d90*/
    }
  }
  if ( ((unsigned int *)this)[0] ) /*0x702d95*/
  {
    v5 = (TeamClass *)((unsigned int *)this)[0]; /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      ((TeamClass *)(v5))->Update_0(4, (int)this, *(int *)((char *)&g_BuildingLoadQueue_Array + 24), 0, 0); /*0x702dbb*/
    if ( ((unsigned int *)this)[0] && (*((int (**)(TechnoClass *))this->vtable1 + 11))(this) != 1 && ((unsigned int *)this)[0] ) /*0x702dd6*/
    {
      v6 = (TeamClass *)((unsigned int *)this)[0]; /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        ((TeamClass *)(v6))->Update_0(7, (int)this, *(int *)((char *)&g_BuildingLoadQueue_Array + 24), 0, 0); /*0x702df8*/
      if ( ((unsigned int *)this)[0] ) /*0x702dfd*/
      {
        v7 = (TeamClass *)((unsigned int *)this)[0]; /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          ((TeamClass *)(v7))->Update_0(48, (int)this, *(int *)((char *)&g_BuildingLoadQueue_Array + 24), 0, 0); /*0x702e1c*/
        if ( ((unsigned int *)this)[0] ) /*0x702e21*/
        {
          v8 = (TeamClass *)((unsigned int *)this)[0]; /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            ((TeamClass *)(v8))->Update_0(29, (int)this, *(int *)((char *)&g_BuildingLoadQueue_Array + 24), 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*((int (**)(TechnoClass *))this->vtable1 + 33))(this); /*0x702e48*/
  if ( !*(unsigned char *)(result + 3231) )
  {
    if ( v28 )
    {
      if ( (uint8_t)((Object *)(*(Object **)(v28 + 540)))->IsAlliedWithObjectHouse((int)this) ) /*0x702e6c*/
      {
        v3 = 0; /*0x702e75*/
      }
      else if ( (uint8_t)Audio::IsMediumVolume(this->veterancy) ) /*0x702e81*/
      {
        v3 *= 2; /*0x702e8a*/
      }
      else if ( (uint8_t)Audio::IsLoud(this->veterancy) ) /*0x702e90*/
      {
        v3 *= 3; /*0x702e99*/
      }
      if ( *(unsigned char *)(v28 + 130)
        && (v10 = *(unsigned int *)(v28 + 284)) != 0
        && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v10 + 132))(v10) + 3214) )
      {
        v11 = (*(int (**)(unsigned int))(**(unsigned int **)(v28 + 284) + 132))(*(unsigned int *)(v28 + 284)); /*0x702ecb*/
        owner = this->owner; /*0x702eda*/
        v19 = (*(int (**)(int))(*(unsigned int *)v11 + 132))(v11); /*0x702ee9*/
        HouseClass::AccumulateScore((*(unsigned int *)(v28 + 284) + 336), v19, (int)owner); /*0x702ef0*/
      }
      else if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v28 + 132))(v28) + 3214) )
      {
        v12 = (*(int (**)(int))(*(unsigned int *)v28 + 132))(v28); /*0x702f0d*/
        v24 = this->owner; /*0x702f1c*/
        v20 = (*(int (**)(int))(*(unsigned int *)v12 + 132))(v12); /*0x702f25*/
        HouseClass::AccumulateScore((int *)(v28 + 336), v20, (int)v24); /*0x702f2c*/
      }
      else if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v28 + 132))(v28) + 3432) )
      {
        v13 = *(unsigned int *)(v28 + 724); /*0x702f45*/
        if ( v13 && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v13 + 132))(v13) + 3214) ) /*0x702f5b*/
        {
          v14 = (*(int (**)(unsigned int))(**(unsigned int **)(v28 + 724) + 132))(*(unsigned int *)(v28 + 724)); /*0x702f71*/
          v25 = this->owner; /*0x702f80*/
          v21 = (*(int (**)(int))(*(unsigned int *)v14 + 132))(v14); /*0x702f8f*/
          HouseClass::AccumulateScore((*(unsigned int *)(v28 + 724) + 336), v21, (int)v25); /*0x702f96*/
        }
      }
      else if ( (*(uint8_t (**)(int))(*(unsigned int *)v28 + 1024))(v28)
             && (*(int (**)(int))(*(unsigned int *)v28 + 44))(v28) == 6 )
      {
        v15 = (*(int (**)(int))(*(unsigned int *)v28 + 44))(v28); /*0x702fb6*/
        v16 = *(unsigned int *)(*(unsigned int *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(unsigned int *)(v15 == 6 ? v28 + 0x69C : 1692));
        v26 = this->owner; /*0x702fda*/
        v22 = (*(int (**)(unsigned int))(**(unsigned int **)(v16 + 1728) + 132))(*(unsigned int *)(v16 + 1728)); /*0x702fe9*/
        HouseClass::AccumulateScore((int *)(v16 + 336), v22, (int)v26); /*0x702ff0*/
      }
      this->owner->HouseClass_field_548C = (*(int (**)(int))(*(unsigned int *)v28 + 56))(v28); /*0x703003*/
      *(unsigned int *)(*(unsigned int *)(v28 + 540) + 21736) += v3; /*0x70300f*/
    }
    result = (*((int (**)(TechnoClass *))this->vtable1 + 11))(this) - 1; /*0x70301c*/
    switch ( result ) /*0x70302e*/
    {
      case 0: /*0x70302e*/
        goto LABEL_59;
      case 1: /*0x70302e*/
        if ( !v28 ) /*0x7030d5*/
          goto LABEL_63; /*0x7030d5*/
        if ( !*(unsigned char *)((*((int (**)(TechnoClass *))this->vtable1 + 33))(this) + 3231) ) /*0x7030e5*/
        {
          HouseClass::IncrementStat( /*0x703108*/
            (HouseClass *)(*(unsigned int *)(v28 + 540) + 9032),
            *(unsigned int *)(*((unsigned int *)this + 433) + 3576));
          v27 = 1; /*0x70310d*/
        }
LABEL_55:
        if ( v28 ) /*0x703117*/
        {
          if ( !v27 && !*(unsigned char *)((*((int (**)(TechnoClass *))this->vtable1 + 33))(this) + 3231) ) /*0x70312f*/
          {
            HouseClass::IncrementStat( /*0x703152*/
              (HouseClass *)(*(unsigned int *)(v28 + 540) + 11088),
              *(unsigned int *)(*((unsigned int *)this + 432) + 3576));
            v27 = 1; /*0x703157*/
          }
LABEL_59:
          if ( v28 && !v27 && !*(unsigned char *)((*((int (**)(TechnoClass *))this->vtable1 + 33))(this) + 3231) ) /*0x703175*/
            HouseClass::IncrementStat( /*0x703198*/
              (HouseClass *)(*(unsigned int *)(v28 + 540) + 13144),
              *(unsigned int *)(*((unsigned int *)this + 433) + 3576));
        }
LABEL_63:
        ++this->owner->killedBuildingsOfHouses[0]; /*0x70319d*/
        if ( v28 ) /*0x7031b2*/
        {
          if ( !*(unsigned char *)((*((int (**)(TechnoClass *))this->vtable1 + 33))(this) + 3231) ) /*0x7031be*/
          {
            v18 = (unsigned int *)(*(unsigned int *)(v28 + 540) /*0x7031d5*/
                           + 4 * (*((int (**)(TechnoClass *))this->vtable1 + 14))(this)
                           + 21476);
            ++*v18; /*0x7031dc*/
          }
        }
        result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x7031e3*/
        if ( (unsigned char)result ) /*0x7031ea*/
LABEL_67:
          result = RadarClass::SetFlag((RadarClass *)&stru_87F5F0.__pad_58[416], 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*((int (**)(TechnoClass *))this->vtable1 + 33))(this); /*0x703039*/
        if ( !*(unsigned char *)(result + 562) ) /*0x70303f*/
        {
          if ( *((unsigned int *)this + 335) != -1 ) /*0x703054*/
            ++*(unsigned int *)this->owner->__pad_5488; /*0x70305c*/
          if ( v28 && !*(unsigned char *)((*((int (**)(TechnoClass *))this->vtable1 + 33))(this) + 3231) ) /*0x703070*/
          {
            HouseClass::IncrementStat( /*0x703093*/
              (HouseClass *)(*(unsigned int *)(v28 + 540) + 15200),
              *(unsigned int *)(*((unsigned int *)this + 328) + 3576));
            v17 = (unsigned int *)(*(unsigned int *)(v28 + 540) /*0x7030a5*/
                           + 4 * (*((int (**)(TechnoClass *))this->vtable1 + 14))(this)
                           + 21560);
            ++*v17; /*0x7030ac*/
          }
          result = RadarClass::IsActiveMode((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x7030b3*/
          if ( (unsigned char)result ) /*0x7030ba*/
            goto LABEL_67; /*0x7030ba*/
        }
        return (Coord * *)result; /*0x7030ba*/
      case 14: /*0x70302e*/
        goto LABEL_55;
      default:
        return (Coord * *)result;
    }
  }
  return (Coord * *)result; /*0x7030cc*/

}
  return result; /*0x7030cc*/

}
} // namespace ra2

// 0x705860
namespace gamemd {
int TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
{

  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int result; // eax
  int *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // edx
  int v16; // esi
  int v17; // ebx
  int v18; // esi
  bool v19; // cc
  uint8_t v20; // [esp+30h] [ebp-60h] BYREF
  int16_t v21; // [esp+31h] [ebp-5Fh]
  int v22; // [esp+34h] [ebp-5Ch]
  int v23; // [esp+38h] [ebp-58h]
  int v24; // [esp+3Ch] [ebp-54h]
  int v25; // [esp+40h] [ebp-50h] BYREF
  int v26; // [esp+44h] [ebp-4Ch]
  signed int v27; // [esp+48h] [ebp-48h]
  signed int v28; // [esp+4Ch] [ebp-44h]
  int v29; // [esp+50h] [ebp-40h] BYREF
  int v30; // [esp+54h] [ebp-3Ch]
  int v31; // [esp+58h] [ebp-38h] BYREF
  int v32; // [esp+5Ch] [ebp-34h]
  int v33; // [esp+60h] [ebp-30h] BYREF
  int v34; // [esp+64h] [ebp-2Ch]
  int v35; // [esp+68h] [ebp-28h] BYREF
  int v36; // [esp+6Ch] [ebp-24h]
  int v37; // [esp+70h] [ebp-20h] BYREF
  int v38; // [esp+74h] [ebp-1Ch]
  int v39; // [esp+78h] [ebp-18h] BYREF
  int v40; // [esp+7Ch] [ebp-14h]
  int v41; // [esp+80h] [ebp-10h] BYREF
  int v42; // [esp+84h] [ebp-Ch]
  int v43; // [esp+88h] [ebp-8h]
  int v44; // [esp+8Ch] [ebp-4h]

  ((Coord *)(g_TacticalClass_Instance))->To_Screen( (unsigned int *)(&a1), (int *)(&v41)); /*0x705875*/
  ((Coord *)(g_TacticalClass_Instance))->To_Screen( (unsigned int *)(&a4), (int *)(&v31)); /*0x70588a*/
  v6 = -32 - ZCoordToScreenY(a3); /*0x7058a4*/
  v7 = -32 - ZCoordToScreenY(a6); /*0x7058b4*/
  v28 = abs32(v31 - v41); /*0x7058c5*/
  v8 = *(unsigned int *)g_DSurface_Hidden_2; /*0x7058da*/
  v27 = abs32(v32 - v42); /*0x7058dc*/
  result = (*(int (**)(int))(v8 + 132))(g_DSurface_Hidden_2); /*0x7058e0*/
  if ( (unsigned char)result ) /*0x7058e8*/
  {
    v10 = (int *)g_DSurface_Hidden_2; /*0x7058f0*/
    v11 = Random::Range(Randomizer_Global, 190, 270); /*0x705905*/
    v21 = 0; /*0x70590c*/
    if ( v11 <= 255 ) /*0x70591c*/
    {
      v20 = v11; /*0x705972*/
    }
    else
    {
      v20 = -1; /*0x705925*/
      LOBYTE(v21) = (char)(110 * v11) / 14; /*0x705950*/
      HIBYTE(v21) = (char)(30 * v11) / 14; /*0x70596c*/
    }
    v12 = v32; /*0x705976*/
    v13 = v42; /*0x70597a*/
    if ( v32 < v42 ) /*0x705980*/
    {
      v14 = 255 >> g_BitShift_Green_0 << g_BitShift_Red; /*0x7059c5*/
      v29 = v31 + 1; /*0x7059cc*/
      v25 = v31 - 2; /*0x7059d0*/
      v26 = v32 + 1; /*0x7059d8*/
      v30 = v32 + 1; /*0x7059dc*/
      (*(void (**)(int *, int *, int *, int))(*v10 + 48))( (int *)(v10), (int *)(&v25), (int *)(&v29), v14); /*0x7059eb*/
      v15 = *v10; /*0x7059f2*/
      v25 = v31 - 2; /*0x7059f9*/
      v29 = v31 + 1; /*0x705a01*/
      v26 = v32; /*0x705a05*/
      v30 = v32; /*0x705a09*/
      (*(void (**)(int *, int *, int *, int))(v15 + 48))( (int *)(v10), (int *)(&v25), (int *)(&v29), v14); /*0x705a19*/
      v26 = v32 - 1; /*0x705a2e*/
      v30 = v32 + 2; /*0x705a32*/
      v25 = v31 - 1; /*0x705a3a*/
      v29 = v31 - 1; /*0x705a3e*/
      (*(void (**)(int *, int *, int *, int))(*v10 + 48))( (int *)(v10), (int *)(&v25), (int *)(&v29), v14); /*0x705a4c*/
      v25 = v31; /*0x705a58*/
      v30 = v32 + 2; /*0x705a62*/
      v26 = v32 - 1; /*0x705a66*/
      v29 = v31; /*0x705a72*/
      (*(void (**)(int *, int *, int *, int))(*v10 + 48))( (int *)(v10), (int *)(&v25), (int *)(&v29), v14); /*0x705a7c*/
      v13 = v42; /*0x705a7f*/
      v12 = v32; /*0x705a83*/
    }
    v16 = v41; /*0x705a8b*/
    v44 = v12 - v13; /*0x705a95*/
    v43 = v31 - v41; /*0x705a9b*/
    v29 = v7 - v6; /*0x705a9f*/
    v24 = v7 - v6; /*0x705aa3*/
    v17 = 100; /*0x705aab*/
    v35 = v41; /*0x705ab0*/
    v36 = v13; /*0x705ab4*/
    v23 = v12 - v13; /*0x705ab8*/
    v22 = v31 - v41; /*0x705abc*/
    v25 = 0; /*0x705ac0*/
    while ( 1 ) /*0x705ae1*/
    {
      v33 = v16 + v22 / 4; /*0x705ae1*/
      v34 = v13 + v23 / 4; /*0x705af8*/
      v18 = v6 + v24 / 4; /*0x705b15*/
      ((AudioStream *)v10)->DrawWaveform( (IUnknown *)(&DSurface_ViewBounds), (IUnknown *)(&v35), (IUnknown *)(&v33), (IUnknown *)(&v20), v25 / 4 + 255, v6, v18); /*0x705b34*/
      if ( v28 <= v27 ) /*0x705b43*/
      {
        v39 = v35 + 1; /*0x705bc8*/
        v40 = v36; /*0x705bd1*/
        v37 = v33 + 1; /*0x705bd6*/
        v38 = v34; /*0x705bdf*/
        ((AudioStream *)v10)->DrawWaveform( (IUnknown *)(&DSurface_ViewBounds), (IUnknown *)(&v39), (IUnknown *)(&v37), (IUnknown *)(&v20), v17, v6, v18); /*0x705bf6*/
        v39 = v35 - 1; /*0x705c08*/
        v40 = v36; /*0x705c11*/
        v37 = v33 - 1; /*0x705c16*/
        v38 = v34; /*0x705c1f*/
      }
      else
      {
        v39 = v35; /*0x705b51*/
        v40 = v36 + 1; /*0x705b5a*/
        v37 = v33; /*0x705b60*/
        v38 = v34 + 1; /*0x705b69*/
        ((AudioStream *)v10)->DrawWaveform( (IUnknown *)(&DSurface_ViewBounds), (IUnknown *)(&v39), (IUnknown *)(&v37), (IUnknown *)(&v20), v17, v6, v18); /*0x705b80*/
        v39 = v35; /*0x705b91*/
        v40 = v36 - 1; /*0x705b9a*/
        v37 = v33; /*0x705ba0*/
        v38 = v34 - 1; /*0x705ba9*/
      }
      ((AudioStream *)v10)->DrawWaveform( (IUnknown *)(&DSurface_ViewBounds), (IUnknown *)(&v39), (IUnknown *)(&v37), (IUnknown *)(&v20), v17, v6, v18); /*0x705bb9*/
      v35 = v33; /*0x705c47*/
      v36 = v34; /*0x705c4f*/
      v6 = v18; /*0x705c57*/
      v22 += v43; /*0x705c65*/
      v23 += v44; /*0x705c6d*/
      result = v25 - 255; /*0x705c75*/
      v17 -= 25; /*0x705c7a*/
      v19 = v25 - 255 < -765; /*0x705c7f*/
      v24 += v29; /*0x705c84*/
      v25 -= 255; /*0x705c88*/
      if ( v19 ) /*0x705c8c*/
        break; /*0x705c8c*/
      v13 = v42; /*0x705aca*/
      v16 = v41; /*0x705ace*/
    }
  }
  return result; /*0x705c94*/

}
} // namespace ra2

// 0x70D0D0
namespace gamemd {
int TechnoClass::HasVoiceResponse(int weaponIndex)
{

  int *v3; // edi
  int result; // eax
  int v5; // esi

  v3 = (int *)((char *)this + 84); /*0x70d0d5*/
  if ( !(uint8_t)Audio::IsMediumVolume((char *)this + 84) ) /*0x70d0dd*/
  {
    result = Audio::IsLoud(v3); /*0x70d0e8*/
    if ( !(unsigned char)result ) /*0x70d0ef*/
      goto LABEL_10; /*0x70d0ef*/
  }
  v5 = (*(int (**)(int *))(*(unsigned int *)this + 132))(this); /*0x70d0fd*/
  result = Audio::IsMediumVolume(v3); /*0x70d0ff*/
  if ( (unsigned char)result && *(unsigned char *)(v5 + weaponIndex + 668) ) /*0x70d10c*/
  {
    LOBYTE(result) = 1; /*0x70d119*/
    return result; /*0x70d11c*/
  }
  result = Audio::IsLoud(v3); /*0x70d121*/
  if ( (unsigned char)result && (*(unsigned char *)(v5 + weaponIndex + 668) || *(unsigned char *)(v5 + weaponIndex + 686)) ) /*0x70d135*/
    LOBYTE(result) = 1; /*0x70d142*/
  else
LABEL_10:
    LOBYTE(result) = 0; /*0x70d14a*/
  return result; /*0x70d117*/

}
} // namespace ra2

// 0x73B140
namespace gamemd {
HouseClass * * TechnoClass::RenderTechnoSHP(int * a0, int * a1, int * a2, HouseClass * aP3, HouseClass * aP4, int a6, int a7, TechnoClass * aP7, TechnoClass * aP8, int a10, int a11)
{

  int *v11; // ecx
  int *v12; // esi
  unsigned int *v13; // eax
  CellClass *v14; // eax
  char v15; // bl
  unsigned int *v16; // edi
  int v17; // edi
  int SHPFrame; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v26; // eax
  int v27; // eax
  int v28; // [esp-Ch] [ebp-58h]
  int v29; // [esp-Ch] [ebp-58h]
  int v30; // [esp-8h] [ebp-54h]
  int v31; // [esp-8h] [ebp-54h]
  int v32; // [esp-4h] [ebp-50h]
  int v33; // [esp-4h] [ebp-50h]
  int v34; // [esp+0h] [ebp-4Ch]
  int v35; // [esp+4h] [ebp-48h]
  int v36; // [esp+14h] [ebp-38h]
  int v37; // [esp+14h] [ebp-38h]
  int16_t v38[2]; // [esp+18h] [ebp-34h] BYREF
  int v39; // [esp+1Ch] [ebp-30h] BYREF
  int v40; // [esp+20h] [ebp-2Ch] BYREF
  int v41[2]; // [esp+24h] [ebp-28h] BYREF
  int v42; // [esp+2Ch] [ebp-20h] BYREF
  int v43; // [esp+30h] [ebp-1Ch] BYREF
  int v44; // [esp+34h] [ebp-18h]
  int v45; // [esp+38h] [ebp-14h]
  int v46; // [esp+3Ch] [ebp-10h]
  int v47; // [esp+40h] [ebp-Ch] BYREF
  int v48; // [esp+44h] [ebp-8h] BYREF

  v12 = v11; /*0x73b146*/
  v13 = (unsigned int *)(*(int (**)(int *, int *))(*v11 + 72))( (int *)(v11), (int *)(&v39)); /*0x73b152*/
  LOWORD(v36) = *v13 / 256; /*0x73b165*/
  HIWORD(v36) = v13[1] / 256; /*0x73b17e*/
  *(unsigned int *)v38 = v36; /*0x73b18b*/
  v14 = (CellClass *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj( (int16_t *)(v38)); /*0x73b190*/
  if ( (uint8_t)((CellClass *)(v14))->QuickPassable() ) /*0x73b197*/
    aP8 = (TechnoClass *)(0); /*0x73b1a0*/
  v15 = 0; /*0x73b1ae*/
  if ( *(unsigned char *)(v12[433] + 3606) ) /*0x73b1b0*/
  {
    if ( ((TechnoClass *)((TechnoClass *)v12))->CheckTargetCell() && !((TechnoClass *)((TechnoClass *)v12))->ScanNeighborCells() /*0x73b1fb*/
      || (v16 = (unsigned int *)((Array *)((Array *)v12))->Get(0), v12[361])
      && v16
      && (*(int (**)(unsigned int *))(*v16 + 44))( (unsigned int *)(v16)) == 6
      && *(unsigned char *)(v16[328] + 5821) )
    {
      v15 = 1; /*0x73b205*/
    }
  }
  v37 = 0; /*0x73b20f*/
  v17 = 10240; /*0x73b217*/
  switch ( (*(int (**)(int *, unsigned int, unsigned int))(*v12 + 104))( (int *)(v12), 0, 0) ) /*0x73b225*/
  {
    case 1: /*0x73b225*/
      v17 = 10242; /*0x73b22c*/
      break; /*0x73b231*/
    case 2: /*0x73b225*/
    case 3: /*0x73b225*/
      v17 = 10244; /*0x73b233*/
      break; /*0x73b238*/
    case 4: /*0x73b225*/
      v17 = 10250; /*0x73b240*/
      if ( v12[137] ) /*0x73b23a*/
        v17 = 10252; /*0x73b249*/
      v37 = TechnoClass::CalcOffsetFacing((TechnoClass *)v12); /*0x73b255*/
      break; /*0x73b255*/
    default:
      break;
  }
  if ( (*(uint8_t (**)(int *))(*v12 + 468))( (int *)(v12)) /*0x73b26b*/
    || (*(uint8_t (**)(int *))(*v12 + 472))( (int *)(v12)) )
  {
    v17 |= 4u; /*0x73b275*/
  }
  if ( (uint8_t)((House *)v12[135])->IsHumanPlayer() /*0x73b28b*/
    && (*(uint8_t (**)(int *))(*v12 + 196))( (int *)(v12)) )
  {
    v17 = (*(int (**)(int *, int))(*v12 + 1084))( (int *)(v12), v17); /*0x73b2a0*/
  }
  SHPFrame = BuildingClass::GetSHPFrame( /*0x73b2d3*/
               *(BuildingClass **)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)(v12[135] + 90196)) + 780),
               v17);
  v42 = (int)a1 + dword_B1CFC0 - 128; /*0x73b2dd*/
  v43 = (int)a2 + dword_B1CFC4 - 128; /*0x73b2eb*/
  v44 = dword_B1CFC8; /*0x73b2f6*/
  v45 = dword_B1CFCC; /*0x73b2fa*/
  if ( v15 && dword_B1CFCC > 16 ) /*0x73b307*/
  {
    v19 = (unsigned int)aP7; /*0x73b30d*/
    v39 = dword_B1CFC0; /*0x73b311*/
    v41[0] = dword_B1CFC8; /*0x73b319*/
    v45 = dword_B1CFCC - 16; /*0x73b329*/
    v41[1] = dword_B1CFCC - 16; /*0x73b32d*/
    v20 = *v12; /*0x73b331*/
    v32 = (unsigned int)aP8; /*0x73b333*/
    v40 = dword_B1CFC4; /*0x73b339*/
    v30 = (*(int (**)(int *, unsigned int, int))(v20 + 748))( (int *)(v12), 0, (int)(aP7)) - 5; /*0x73b34a*/
    v21 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( (AudioStream *)(g_DSurface_Hidden_2)); /*0x73b35a*/
    BlitterCopySHP(a1, &aP4, &v43, (int *)g_DSurface_Hidden_2->__pad_0, v21, &v48, v41, SHPFrame, v30, v32, v37, v35); /*0x73b377*/
    v22 = v46 + v44; /*0x73b388*/
    v23 = v46 + v41[0]; /*0x73b38a*/
    v46 = 16; /*0x73b391*/
    v42 = 16; /*0x73b395*/
    v44 = v22; /*0x73b39d*/
    v41[0] = v23; /*0x73b3a6*/
    v34 = a10; /*0x73b3ac*/
    v28 = (*(int (**)(int *))(*v12 + 748))( (int *)(v12)); /*0x73b3be*/
    v24 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( (AudioStream *)(g_DSurface_Hidden_2)); /*0x73b3cc*/
    return BlitterCopySHP( /*0x73b3e5*/
             a1,
             &aP3,
             &v42,
             (int *)g_DSurface_Hidden_2->__pad_0,
             v24,
             &v47,
             &v40,
             SHPFrame,
             v28,
             2,
             v19,
             v34);
  }
  else
  {
    v33 = (unsigned int)aP8; /*0x73b403*/
    v31 = (unsigned int)aP7; /*0x73b404*/
    v26 = (*(int (**)(int *))(*v12 + 752))( (int *)(v12)); /*0x73b407*/
    v29 = (*(int (**)(int *, int))(*v12 + 748))( (int *)(v12), v26); /*0x73b41e*/
    v27 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))( (AudioStream *)(g_DSurface_Hidden_2)); /*0x73b42c*/
    return BlitterCopySHP( /*0x73b446*/
             (int *)a0,
             &aP3,
             &v42,
             (int *)g_DSurface_Hidden_2->__pad_0,
             v27,
             &v47,
             &dword_B1CFC0,
             SHPFrame,
             v29,
             v31,
             v33,
             v37);
  }

}
} // namespace ra2

// 0x73B470
namespace gamemd {
int TechnoClass_DrawVoxel()
{
  ObjectClass *v16; // eax
  float *inited; // eax
  TechnoClass *v22; // esi
  size_t v30; // eax
  size_t v31; // eax
  bool v32; // al
  ParticleSystemClass *v33; // esi
  ObjectClass *v36; // esi
  TechnoClass *v37; // edi
  BuildingTypeClass *v38; // edi
  TechnoClass *v39; // esi
  int16_t v40; // ax
  BuildingTypeClass *v43; // eax
  int v44; // edx
  BuildingTypeClass *v45; // esi
  int v53; // esi
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  int v59; // eax
  int v61; // ecx
  AbstractClass *v62; // esi
  ObjectClass *v63; // eax
  VectorClass_flat *v72; // esi
  BuildingTypeClass *v89; // [esp+ECh] [ebp-1D0h]
  BuildingTypeClass *v90; // [esp+ECh] [ebp-1D0h]
  float aP1a; // [esp+F4h] [ebp-1C8h]
  float aP1b; // [esp+F4h] [ebp-1C8h]
  int aP1c; // [esp+F4h] [ebp-1C8h]
  float aP1d; // [esp+F4h] [ebp-1C8h]
  float aP1e; // [esp+F4h] [ebp-1C8h]
  float aP1f; // [esp+F4h] [ebp-1C8h]
  int aP1g; // [esp+F4h] [ebp-1C8h]
  float aP1_4; // [esp+F8h] [ebp-1C4h]
  float v104; // [esp+FCh] [ebp-1C0h]
  bool v105; // [esp+109h] [ebp-1B3h]
  uint8_t v108; // [esp+109h] [ebp-1B3h]
  uint8_t v109; // [esp+109h] [ebp-1B3h]
  char v110; // [esp+10Ah] [ebp-1B2h]
  uint8_t v111; // [esp+10Ah] [ebp-1B2h]
  uint8_t v112; // [esp+10Ah] [ebp-1B2h]
  uint8_t v113; // [esp+10Bh] [ebp-1B1h]
  uint8_t v114; // [esp+10Bh] [ebp-1B1h]
  TechnoClass *aP3; // [esp+10Ch] [ebp-1B0h] BYREF
  ObjectClass *v116; // [esp+110h] [ebp-1ACh] BYREF
  int v117; // [esp+114h] [ebp-1A8h] BYREF
  double v118; // [esp+118h] [ebp-1A4h] BYREF
  TechnoClass *v120; // [esp+124h] [ebp-198h]
  int64_t v121; // [esp+128h] [ebp-194h] BYREF
  int v122; // [esp+130h] [ebp-18Ch] BYREF
  double v123; // [esp+134h] [ebp-188h] BYREF
  int v125; // [esp+144h] [ebp-178h]
  int v126; // [esp+148h] [ebp-174h] BYREF
  int v127; // [esp+14Ch] [ebp-170h]
  int v128; // [esp+150h] [ebp-16Ch]
  int v129; // [esp+154h] [ebp-168h]
  int v130; // [esp+158h] [ebp-164h] BYREF
  int v131; // [esp+15Ch] [ebp-160h]
  int v132; // [esp+160h] [ebp-15Ch] BYREF
  int v133; // [esp+164h] [ebp-158h] BYREF
  unsigned int a1[2]; // [esp+168h] [ebp-154h] BYREF
  int GroundHeight; // [esp+170h] [ebp-14Ch]
  float v136; // [esp+174h] [ebp-148h] BYREF
  float v137; // [esp+178h] [ebp-144h]
  float v138; // [esp+17Ch] [ebp-140h]
  int v140; // [esp+184h] [ebp-138h]
  AbstractClass *v141; // [esp+188h] [ebp-134h]
  float v142[12]; // [esp+18Ch] [ebp-130h] BYREF
  unsigned int v143[4]; // [esp+1BCh] [ebp-100h] BYREF
  unsigned char v144[48]; // [esp+1CCh] [ebp-F0h] BYREF
  float v145[12]; // [esp+1FCh] [ebp-C0h] BYREF
  unsigned char v146[48]; // [esp+22Ch] [ebp-90h] BYREF
  float v147[12]; // [esp+25Ch] [ebp-60h] BYREF
  float v148[12]; // [esp+28Ch] [ebp-30h] BYREF

  v121 = a2;
  int v10 = ecx0[433];
  if ( !(*(uint8_t (**)(unsigned int *, int))(*ecx0 + 1088))(ecx0, HouseClass_Player.field_0) )
    v10 = (*(int (**)(unsigned int *, int))(*ecx0 + 204))(ecx0, 1);
  if ( *((unsigned char *)ecx0 + 1760) && *(unsigned int *)(ecx0[433] + 1720) )
    v10 = *(unsigned int *)(ecx0[433] + 1720);
  int v11 = ecx0[334] % *(unsigned int *)(*(unsigned int *)(v10 + 180) + 8);
  v122 = 0;
  v125 = v11;
  if ( !v11 )
  {
    int v12 = *(unsigned int *)(v10 + 188);
    if ( !v12 )
      goto LABEL_10;
    v11 = ecx0[82] % *(unsigned int *)(v12 + 8);
  }
  v122 = v11;
LABEL_10:
  v131 = a4;
  v130 = a3;
  v141 = *(AbstractClass **)&stru_87C374[44960];
  v132 = a5;
  v133 = a6;
  v121 = 0x8000000080LL;
  aP3 = (TechnoClass *)(0);
  *(unsigned int *)&stru_87C374[44960] = dword_B1D13C;
  int * v13 = (int *)(*(int (**)(unsigned int *, float *))(*dword_B1D13C + 120))( (unsigned int *)(dword_B1D13C), (float *)(&v136));
  v130 = *v13;
  v131 = v13[1];
  v132 = v13[2];
  int v14 = v13[3];
  *((unsigned char *)ecx0 + 1747) = 1;
  v133 = v14;
  aP3 = (TechnoClass *)((stru_87C374[45220] != 0) - 1);
  if ( !ecx0[413] )
    WinAPI::Wrapper(-2147467261);
  const void *v15; // eax
v15 = (const void *)(*(int (**)(unsigned int, float *, TechnoClass **))(*(unsigned int *)ecx0[413] + 36))( ecx0[413], (float *)(v145), (TechnoClass **)(&aP3));



  Transform::Copy( (const void *)(v144), (void *)(v15));
  v16 = (ObjectClass *)aP3;
  qmemcpy( (void *)(v142), (const void *)(v144), sizeof(v142));
  int v17 = v125;
  if ( aP3 != (TechnoClass *)-1 )
  {
    v16 = (ObjectClass *)(v125 & 0x1F | (32 * (unsigned int)aP3));
    aP3 = (TechnoClass *)v16;
  }
  v126 = v130;
  v140 = ((int)v16 >> 5) & 0x3FF;
  v128 = v132;
  v127 = v131;
  v129 = v133;
  *(unsigned int *)aP6[0] = xmmword_B1CFA8;
  aP6.Width = DWORD1(xmmword_B1CFA8);
  aP6.Height = DWORD2(xmmword_B1CFA8);
  aP6.LockCount = IDA_HIDWORD(xmmword_B1CFA8);
  if ( !*(unsigned char *)(ecx0[433] + 488) || ((SpawnManagerClass *)(int *)ecx0[180])->CountDockedSpawns() )
  {
    int v20 = *ecx0;
    v90 = started;
    inited = (float *)((AudioConfig *)(v144))->InitDefault();
    float * v88 = MultiplyMatrix3x4( (ObjectClass *)v145, (float *)(inited), (float *)(v142));
    (*(void (**)(unsigned int *, int, int, TechnoClass *, int, int *, int64_t *, float *, BuildingTypeClass *, int, unsigned int))(v20 + 1296))(
      ecx0,
      v10 + 176,
      v17,
      aP3,
      v10 + 580,
      &v126,
      &v121,
      v88,
      v90,
      10240,
      0);
  }
  else
  {
    v89 = started;
    aP3 = (TechnoClass *)((unsigned int)aP3 | 0x10000);
    int v18 = *ecx0;
    float * v19 = (float *)((AudioConfig *)(v144))->InitDefault();
    float * v87 = MultiplyMatrix3x4( (ObjectClass *)v145, (float *)(v19), (float *)(v142));
    (*(void (**)(unsigned int *, int, int, TechnoClass *, int, int *, int64_t *, float *, BuildingTypeClass *, int, unsigned int))(v18 + 1296))(
      ecx0,
      v10 + 184,
      v17,
      aP3,
      v10 + 580,
      &v126,
      &v121,
      v87,
      v89,
      10240,
      0);
  }
  v22 = aP3;
  v120 = aP3;
  if ( aP3 != (TechnoClass *)-1 )
  {
  unsigned int v23; // esi
    v23 = ((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 464))->GetValue((IUnknown *)&v116) >> 10) + 1) >> 1) & 0x1F
        | (unsigned int)v22 & 0xFFFFFFE0;
    if ( !*(unsigned int *)((*(int (**)(unsigned int *))(*ecx0 + 132))(ecx0) + 1824) )
      v23 &= 0xFFFFFC1F;
    v22 = (TechnoClass *)(((uint8_t)v122 << 16) | v23);
    v120 = v22;
  }
  if ( !*(unsigned char *)(v10 + 3233) && (!TechnoClass::OwnerHasPower(ecx0) || !TechnoClass::checkEMPState(ecx0)) )
  {
    if ( *(unsigned int *)(v10 + 192) && *(unsigned int *)(v10 + 196) )
    {
      v116 = (ObjectClass *)((((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 440))->GetValue((IUnknown *)&v117) >> 10)
                                            + 1) >> 1)
                            & 0x1F)
                           - 8);
      double v24 = (double)(int)v116 * -0.1963495408493621;
      v118 = v24;
      TechnoClass::CalcFacingFromMatrix((IUnknown *)v142);
      float aP1 = -(v118 - v24);
      ((void (*)(float *, float))Matrix3D::RotateZ)(v142, aP1);
      aP1a = (double)*(int *)((*(int (**)(unsigned int *, unsigned int))(*ecx0 + 1016))(ecx0, 0) + 12) * unk_B1D008;
      aP1b = (double)*(int *)((*(int (**)(unsigned int *, unsigned int, unsigned int, unsigned int))(*ecx0 + 1016))(
                                ecx0,
                                0,
                                0,
                                IDA_LODWORD(aP1a))
                            + 4)
           * unk_B1D008;
      ((Vector *)&v142[2])->MatrixMulVectorMath( aP1b, aP1_4, v104);
      int v25 = *ecx0;
      v104 = 0.0;
      aP1_4 = 0.0;
      aP1c = a9;
      float * v26 = (float *)((AudioConfig *)(&v144[8]))->InitDefault();
      float * v27 = MultiplyMatrix3x4( (ObjectClass *)&v145[2], (float *)(v26), (float *)(&v142[2]));
      (*(void (**)(unsigned int *, int, int, unsigned int, int, int *, int *, float *, int))(v25 + 1296))(
        ecx0,
        v10 + 192,
        v127,
        IDA_HIDWORD(v121),
        v10 + 640,
        &v132,
        &v122,
        v27,
        aP1c);
    }
    goto LABEL_81;
  }
  v117 = 0;
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(unsigned char *)(ecx0[433] + 3285) )
  {
    if ( *(unsigned int *)(v10 + 192) && *(unsigned int *)(v10 + 196) )
    {
      v110 = 1;
      goto LABEL_37;
    }
LABEL_36:
    v110 = 0;
    goto LABEL_37;
  }
  int v28 = TechnoClass::applyEMPulseDamage(ecx0);
  v117 = v28;
  v22 = (TechnoClass *)((v28 << 24) | (unsigned int)v22);
  int v29 = *(unsigned int *)(v10 + 8 * v28 + 344);
  v120 = v22;
  if ( !v29 || !*(unsigned int *)(v10 + 8 * v28 + 348) )
    goto LABEL_36;
  v110 = 1;
LABEL_37:
  v116 = (ObjectClass *)v22;
  if ( v22 == (TechnoClass *)-1 || v10 == -600 )
  {
    v105 = 0;
    goto LABEL_46;
  }
  if ( !*(unsigned int *)(v10 + 604) )
    goto LABEL_44;
  if ( !TechnoClass::processIronCurtainExpiry((unsigned int *)(v10 + 600), (IUnknown *)&v116) )
  {
    v30 = SortedStateVector::BinarySearch((char **)(v10 + 600), (IUnknown *)&v116);
    if ( v30 )
    {
      *(unsigned int *)(v10 + 616) = v30;
      goto LABEL_43;
    }
LABEL_44:
    v105 = unk_B78824 != 0;
    goto LABEL_46;
  }
LABEL_43:
  v105 = *(unsigned int *)(*(unsigned int *)(v10 + 616) + 4) != 0;
LABEL_46:
  if ( !v110 || (v116 = (ObjectClass *)v22, v22 == (TechnoClass *)-1) || v10 == -640 )
  {
    v32 = 0;
    goto LABEL_56;
  }
  if ( !*(unsigned int *)(v10 + 644) )
    goto LABEL_54;
  if ( !TechnoClass::processIronCurtainExpiry((unsigned int *)(v10 + 640), (IUnknown *)&v116) )
  {
    v31 = SortedStateVector::BinarySearch((char **)(v10 + 640), (IUnknown *)&v116);
    if ( v31 )
    {
      *(unsigned int *)(v10 + 656) = v31;
      goto LABEL_53;
    }
LABEL_54:
    v32 = unk_B78824 != 0;
    goto LABEL_56;
  }
LABEL_53:
  v32 = *(unsigned int *)(*(unsigned int *)(v10 + 656) + 4) != 0;
LABEL_56:
  if ( v105 && (!v110 || v32) )
  {
    qmemcpy( (void *)(v144), (const void *)(v142), sizeof(v144));
    v33 = (ParticleSystemClass *)v142;
  }
  else
  {
    aP1d = (double)*(int *)(v10 + 1824) * unk_B1D008;
    ((Matrix3x4 *)(v142))->Translate((ParticleSystemClass *)IDA_LODWORD(aP1d));
    v116 = (ObjectClass *)((((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 464))->GetValue((IUnknown *)a1) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    v123 = (double)(int)v116 * -0.1963495408493621;
    v116 = (ObjectClass *)((((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 452))->GetValue((IUnknown *)&v118) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    aP1e = v123 - (double)(int)v116 * -0.1963495408493621;
    ((void (*)(float *, float))Matrix2D::Rotate)(v142, aP1e);
    *(float *)&v118 = -v142[3];
    v137 = v142[7];
    qmemcpy( (void *)(v145), (const void *)(v142), sizeof(v145));
    v138 = v142[11];
    *((float *)&v118 + 1) = -v142[7];
    v136 = v142[3];
    v123 = v118;
    float v119 = -v142[11];
    float v124 = v119;
    ((Matrix3x3 *)(v145))->Multiply((float *)&v123);
    v116 = (ObjectClass *)((((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 440))->GetValue((IUnknown *)&v118) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    aP1f = -((double)(int)v116 * -0.1963495408493621);
    ((void (*)(float *, float))Matrix3D::RotateZ)(v145, aP1f);
    ((Matrix3x3 *)(v145))->Multiply( (float *)(&v136));
    float * v34 = (float *)((AudioConfig *)(v148))->InitDefault();
    qmemcpy( (void *)(v144), MultiplyMatrix3x4( (ObjectClass *)v147, (float *)(v34), (float *)(v142)), sizeof(v144));
    float * v35 = (float *)((AudioConfig *)(v147))->InitDefault();
    v33 = (ParticleSystemClass *)MultiplyMatrix3x4( (ObjectClass *)v148, (float *)(v35), (float *)(v145));
  }
  qmemcpy( (void *)(v146), (const void *)(v33), sizeof(v146));
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(unsigned char *)(ecx0[433] + 3285) )
  {
  char v107; // [esp+109h] [ebp-1B3h]
    if ( (((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 464))->GetValue((IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 464))->GetValue((IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v107 = 0;
      if ( *(unsigned int *)(v10 + 192) && *(unsigned int *)(v10 + 196) )
        (*(void (**)(unsigned int *, int, unsigned int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
          ecx0,
          v10 + 192,
          0,
          v120,
          v10 + 640,
          &v130,
          &v121,
          v146,
          started,
          10240,
          0);
    }
    else
    {
      v107 = 1;
    }
    v38 = started;
    v39 = v120;
    (*(void (**)(unsigned int *, int, int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
      ecx0,
      v10 + 184,
      v122,
      v120,
      v10 + 600,
      &v130,
      &v121,
      v144,
      started,
      10240,
      0);
    if ( v107 && *(unsigned int *)(v10 + 192) && *(unsigned int *)(v10 + 196) )
      (*(void (**)(unsigned int *, int, unsigned int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
        ecx0,
        v10 + 192,
        0,
        v39,
        v10 + 640,
        &v130,
        &v121,
        v146,
        v38,
        10240,
        0);
  }
  else
  {
  char v106; // [esp+109h] [ebp-1B3h]
    if ( (((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 464))->GetValue((IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*((ProgressTimer *)((unsigned short *)ecx0 + 464))->GetValue((IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v106 = 0;
      if ( v110 )
        (*(void (**)(unsigned int *, int, unsigned int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
          ecx0,
          v10 + 8 * v117 + 344,
          0,
          v120,
          v10 + 640,
          &v130,
          &v121,
          v146,
          started,
          10240,
          0);
    }
    else
    {
      v106 = 1;
    }
    v36 = (ObjectClass *)v117;
    v37 = v120;
    (*(void (**)(unsigned int *, int, int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
      ecx0,
      v10 + 8 * v117 + 200,
      v125,
      v120,
      v10 + 600,
      &v130,
      &v121,
      v144,
      started,
      10240,
      0);
    if ( v106 && v110 )
      (*(void (**)(unsigned int *, int, unsigned int, TechnoClass *, int, int *, int64_t *, unsigned char *, BuildingTypeClass *, int, unsigned int))(*ecx0 + 1296))(
        ecx0,
        v10 + 8 * (unsigned int)v36 + 344,
        0,
        v37,
        v10 + 640,
        &v130,
        &v121,
        v146,
        started,
        10240,
        0);
  }
LABEL_81:
  v127 = a4;
  v40 = *((unsigned short *)ecx0 + 485);
  v128 = a5;
  v126 = a3;
  v129 = a6;
  if ( v40 <= 0 )
  {
    if ( *((unsigned char *)ecx0 + 973) )
      *((unsigned short *)ecx0 + 485) = IDA_LOWORD(aP6.LockCount)
                             + IDA_WORD2(a2)
                             + *(unsigned short *)(*(unsigned int *)&stru_87C374[44976] + 180)
                             + IDA_LOWORD(aP6.Width)
                             - 128;
  }
  else
  {
    int v41 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44976] + 180);
    v136 = 0.0;
    int v139 = v40 - v41;
    v137 = 0.0;
    v138 = *(float *)&stru_87C374[44084];
    int * v42 = ClipRectIntersection( (RectangleStruct*)((IUnknown *)&v123), (const RectangleStruct*)((IUnknown *)&v126), (const RectangleStruct*)((IUnknown *)&v136), 0, 0);
    v126 = *v42;
    v127 = v42[1];
    v128 = v42[2];
    v129 = v42[3];
  }
  v43 = (BuildingTypeClass *)(*(int (**)(unsigned int *, BuildingTypeClass *))(*ecx0 + 1124))(ecx0, started);
  v44 = *ecx0;
  v45 = v43;
  started = v43;
  if ( (*(uint8_t (**)(unsigned int *, unsigned int, unsigned int))(v44 + 352))(ecx0, IDA_LODWORD(aP1_4), IDA_LODWORD(v104)) )
  {
  int v52; // esi
  int v51; // esi
  int v50; // ecx
  int v49; // edx
    started = ((Techno *)ecx0)->StartInvulnerability( v45);
    int v46 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6312);
    int v47 = *(unsigned int *)&stru_87C374[44652] + 2 * v46;
    v113 = *(unsigned char *)(v46 + v47 + 6260);
    v111 = *(unsigned char *)(v46 + v47 + 4174 + 2087);
    v108 = *(unsigned char *)(v46 + v47 + 6262);
    int v48 = DDraw_GetStatus() - 1;
    if ( v48 )
    {
      if ( --v48 )
      {
        v52 = a8;
        goto LABEL_92;
      }
      IDA_LOWORD(v50) = v113;
      IDA_LOWORD(v49) = v111;
      v50 = v108 | (32 * (v49 | (v50 << 6)));
      v51 = v50 | a8;
    }
    else
    {
      v51 = a8;
    }
    IDA_LOWORD(v48) = v113;
    IDA_LOWORD(v49) = v111 >> 1;
    IDA_LOWORD(v50) = v108;
    v48 *= 32;
    v49 = v50 | ((v48 | v49) << 6);
    v52 = v49 | v51;
LABEL_92:
    IDA_LOWORD(v50) = v108;
    IDA_LOWORD(v49) = v111 >> 1;
    IDA_LOWORD(v48) = v113;
    v53 = v50 | (32 * ((32 * v48) | v49)) | v52;
    goto LABEL_94;
  }
  v53 = a8;
LABEL_94:
  if ( !*((unsigned char *)ecx0 + 664) )
    goto LABEL_102;
  v54 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6316);
  v55 = v54 + *(unsigned int *)&stru_87C374[44652] + 2 * v54;
  v114 = *(unsigned char *)(v55 + 6260);
  v112 = *(unsigned char *)(v55 + 6262);
  v109 = *(unsigned char *)(v54 + *(unsigned int *)&stru_87C374[44652] + 2 * v54 + 4174 + 2087);
  v56 = DDraw_GetStatus() - 1;
  if ( v56 )
  {
    v59 = v56 - 1;
    if ( v59 )
    {
      IDA_LOBYTE(v59) = v109;
      goto LABEL_101;
    }
    IDA_LOWORD(v57) = v114;
    v59 = v109;
    IDA_LOWORD(v58) = v109;
    int v60 = v58 | (v57 << 6);
    IDA_LOWORD(v58) = v112;
    v57 = v58 | (32 * v60);
    v53 |= v57;
  }
  else
  {
    v59 = v109;
  }
  IDA_LOWORD(v58) = (uint8_t)v59 >> 1;
  IDA_LOWORD(v57) = v114;
  v57 *= 32;
  v61 = v57 | v58;
  IDA_LOWORD(v57) = v112;
  v58 = v57 | (v61 << 6);
  v53 |= v58;
LABEL_101:
  IDA_LOWORD(v58) = v114;
  IDA_LOWORD(v57) = v112;
  IDA_LOWORD(v59) = (uint8_t)v59 >> 1;
  v53 |= v57 | (32 * ((32 * v58) | v59));
LABEL_102:
  if ( UnitClass::IsDeactivated(ecx0) )
    started = (BuildingTypeClass *)((int)started / 2);
  aP1g = v53;
  v62 = v141;
  (*(void (**)(unsigned int *, AbstractClass *, unsigned int, unsigned int, int, int, int, int, BuildingTypeClass *, int))(*ecx0 + 1372))(
    ecx0,
    v141,
    a2,
    IDA_HIDWORD(a2),
    v126,
    v127,
    v128,
    v129,
    started,
    aP1g);
  v143[1] = aP6.Width;
  v63 = *(ObjectClass **)&stru_87C374[44960];
  *(unsigned int *)&stru_87C374[44960] = (unsigned int)v62;
  v116 = v63;
  IDA_LOBYTE(v63) = *((unsigned char *)ecx0 + 973);
  v143[0] = *(unsigned int *)aP6[0];
  v143[2] = aP6.Height;
  v143[3] = aP6.LockCount;
  *((unsigned char *)ecx0 + 1747) = 0;
  if ( !(unsigned char)v63 )
  {
    int v64 = ecx0[433];
    v118 = *(double *)&a2;
  int v65; // eax
    if ( *(unsigned char *)(v64 + 3434) || (v65 = *(unsigned int *)(v64 + 1660), v65 == 1) || v65 == 2 )
    {
      aP3 = (TechnoClass *)v140;
    }
    else
    {
      aP3 = (TechnoClass *)(32 * v140);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int v66 = (*(int (**)(unsigned int, double *))(*(unsigned int *)ecx0[413] + 48))( ecx0[413], (double *)(&v123));
      aP3 = (TechnoClass *)(((uint8_t)*(unsigned int *)(v66 + 4) - 16) & 0x1F | (unsigned int)aP3);
    }
    if ( !ecx0[413] )
      WinAPI::Wrapper(-2147467261);
  const void *v67; // eax
v67 = (const void *)(*(int (**)(unsigned int, float *, TechnoClass **))(*(unsigned int *)ecx0[413] + 40))( ecx0[413], (float *)(v147), (TechnoClass **)(&aP3));



    Transform::Copy( (const void *)(v144), (void *)(v67));
    qmemcpy( (void *)(v142), (const void *)(v144), sizeof(v142));
    if ( *(unsigned char *)(v10 + 3367) )
    {
      a1[0] = ecx0[39];
      a1[1] = ecx0[40];
      GroundHeight = ecx0[41];
      GroundHeight = Cell::GetGroundHeight( (IUnknown *)a1);
      ((Coord *)(*(unsigned int **)&stru_87C374[44976]))->To_Screen( (unsigned int *)(a1), (int *)((IUnknown *)&v118));
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int * v68 = (int *)(*(int (**)(unsigned int, double *))(*(unsigned int *)ecx0[413] + 48))( ecx0[413], (double *)(&v123));
      int v69 = *v68;
      int v70 = v68[1];
      IDA_LODWORD(v118) += v69;
      IDA_HIDWORD(v118) += v70;
    }
    if ( *((unsigned char *)ecx0 + 1060) )
      IDA_HIDWORD(v118) -= 14;
    int v71 = (*(int (**)(unsigned int *))(*ecx0 + 456))(ecx0);
    v136 = *((float *)ecx0 + 39);
    v137 = *((float *)ecx0 + 40);
    v138 = *((float *)ecx0 + 41);
    v72 = (VectorClass_flat *)((Coord *)(&stru_87C374[13428]))->To_Cell((IUnknown *)&v136);
    if ( *((unsigned char *)ecx0 + 1060) )
    {
      if ( !*((unsigned char *)ecx0 + 140) && v71 >= unk_B1D0AC )
      {
        void * v73 = v72[20].vtable0;
        if ( ((uint16_t)v73 & 0x100) != 0
          && ((IDA_BYTE1(v73) & 8) != 0 && (*((unsigned int *)((Cell *)(v72))->GetNeighbourContent(0) + 80) & 0x100) != 0
           || ((int)v72[20].vtable0 & 0x800) == 0 && (*((unsigned int *)((Cell *)(v72))->GetNeighbourContent(6u) + 80) & 0x100) != 0) )
        {
          IDA_HIDWORD(v118) -= 60;
        }
      }
    }
    if ( (*(uint8_t (**)(unsigned int *))(*ecx0 + 84))(ecx0) )
    {
      v117 = 0;
    }
    else
    {
      int v74 = ecx0[433];
      v117 = (int)v116;
  int v75; // eax
      if ( *(unsigned char *)(v74 + 3434) || (v75 = *(unsigned int *)(v74 + 1660), v75 == 1) || v75 == 2 )
      {
        if ( (*(int (**)(unsigned int *))(*ecx0 + 456))(ecx0) > 0 )
          aP3 = (TechnoClass *)-1;
        else
          aP3 = (TechnoClass *)((unsigned int)aP3 | 0x80000000);
      }
    }
    bool v76 = (*(int (**)(unsigned int *))(*ecx0 + 456))(ecx0) <= 0;
    int v77 = ecx0[413];
    if ( v76 )
    {
      if ( !v77 )
        WinAPI::Wrapper(-2147467261);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int v81 = ecx0[413];
      int v82 = (*(int (**)(int))(*(unsigned int *)v81 + 48))(v81);
  int v94; // [esp+F0h] [ebp-1CCh]
v94 = *(unsigned int *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)v81 + 48))( v81, (int *)(&v133), *(unsigned int *)(v82 + 4));



      int v92 = v117;
      float * v83 = (float *)((AudioConfig *)(v147))->InitDefault();
      float * v86 = MultiplyMatrix3x4( (ObjectClass *)v148, (float *)(v83), (float *)(v142));
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (unsigned char **)(v10 + 176),
        *(unsigned int *)(v10 + 2044),
        aP3,
        v10 + 620,
        (int)&a3,
        (TechnoClass *)&v118,
        (int)v86,
        1u,
        v92,
        v94,
        (int)&v123);
    }
    else
    {
      if ( !v77 )
        WinAPI::Wrapper(-2147467261);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      int v78 = ecx0[413];
      int v79 = (*(int (**)(int))(*(unsigned int *)v78 + 48))(v78);
  int v93; // [esp+F0h] [ebp-1CCh]
v93 = *(unsigned int *)(*(int (**)(int, int *, int))(*(unsigned int *)v78 + 48))( v78, (int *)(&v133), *(unsigned int *)(v79 + 4) + 1);



      int v91 = v117;
      float * v80 = (float *)((AudioConfig *)(v147))->InitDefault();
      float * v85 = MultiplyMatrix3x4( (ObjectClass *)v148, (float *)(v80), (float *)(v142));
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (unsigned char **)(v10 + 176),
        *(unsigned int *)(v10 + 2044),
        aP3,
        v10 + 620,
        (int)&a3,
        (TechnoClass *)&v118,
        (int)v85,
        1u,
        v91,
        v93,
        (int)&v123);
    }
  }
  return (*(int (**)(ObjectClass *, unsigned int *, unsigned int))(*(unsigned int *)v116->__pad_0 + 20))( (ObjectClass *)(v116), (unsigned int *)(v143), 0);
}
} // namespace gamemd

// 0x41B7D0
namespace gamemd {
BOOL TechnoClass::processDamageAnimation(int a1)
{

  return *((unsigned int *)a1 - 362) != 0; /*0x41b7e4*/

}
} // namespace gamemd

// 0x41B840
namespace gamemd {
BOOL TechnoClass::updateWeaponCooldown(int a1)
{

  return *((unsigned char *)((unsigned int *)a1)[0] + 3598) != 0; /*0x41b854*/

}
} // namespace gamemd

// 0x41B860
namespace gamemd {
int TechnoClass::checkAmmo(AircraftClass * aP0)
{

  return *(uint8_t *)(aP0 + 18); /*0x41b869*/

}
} // namespace gamemd

// 0x4722D0
namespace gamemd {
int TechnoClass::processPowerDrain()
{

  return (int)((unsigned int *)this)[0]; /*0x4722d3*/

}
} // namespace gamemd

// 0x4C2BD0
namespace gamemd {
void TechnoClass::updateSightRange(IUnknown * aP1, int a3)
{

  if ( aP1 && (*(int (**)(unsigned char *))(*(unsigned int *)&aP1->suspendedMission))( (unsigned char *)(aP1)) == 1 && aP1[144] && !aP1[129] ) /*0x4c2bf2*/
  {
    ((unsigned int *)this)[0] = (unsigned int)aP1; /*0x4c2c00*/
    ((unsigned int *)this)[0] = a3; /*0x4c2c03*/
  }

}
} // namespace gamemd

// 0x703CC0
namespace gamemd {
char TechnoClass::ScanAdjacentCells()
{

  unsigned int *v2; // esi
  unsigned int *v3; // edi
  unsigned int *v4; // ebp
  unsigned int *v5; // ebx
  unsigned int *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  int16_t v12[2]; // [esp+10h] [ebp-14h] BYREF
  int16_t v13[2]; // [esp+14h] [ebp-10h] BYREF
  int16_t v14[2]; // [esp+18h] [ebp-Ch] BYREF
  int16_t v15[2]; // [esp+1Ch] [ebp-8h] BYREF
  int16_t v16[2]; // [esp+20h] [ebp-4h] BYREF

  *(unsigned int *)v12 = *(unsigned int *)(*((int (**)(TechnoClass *, int16_t *))this->vtable1 + 110))( this, (int16_t *)(v16)); /*0x703ce4*/
  v2 = (unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj( (int16_t *)(v12)); /*0x703ced*/
  if ( !v2 || ((unsigned int *)this)[0] ) /*0x703cf7*/
    return 0; /*0x703cf7*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703d1c*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703d21*/
  *(unsigned int *)v14 = *(unsigned int *)v13; /*0x703d2e*/
  v3 = (unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj( (int16_t *)(v14)); /*0x703d4f*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703d57*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703d5c*/
  *(unsigned int *)v15 = *(unsigned int *)v13; /*0x703d69*/
  v4 = (unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj( (int16_t *)(v15)); /*0x703d88*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703d91*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703d96*/
  *(unsigned int *)v16 = *(unsigned int *)v13; /*0x703da9*/
  v5 = (unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj( (int16_t *)(v16)); /*0x703dbc*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703dcb*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703dd4*/
  v6 = (unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj( (int16_t *)(v13)); /*0x703de7*/
  if ( (v2[80] & 0x400) != 0 ) /*0x703df5*/
    return 1; /*0x703df5*/
  if ( v3 ) /*0x703df9*/
  {
    v7 = v3[80]; /*0x703dfb*/
    if ( (v7 & 0x400) != 0 && (v7 & 0x800) != 0 ) /*0x703e0f*/
      return 1; /*0x703e0f*/
  }
  if ( v6 ) /*0x703e13*/
  {
    v8 = v6[80]; /*0x703e15*/
    if ( (v8 & 0x400) != 0 && (v8 & 0x800) == 0 ) /*0x703e23*/
      return 1; /*0x703e23*/
  }
  if ( v5 ) /*0x703e27*/
  {
    v9 = v5[80]; /*0x703e29*/
    if ( (v9 & 0x400) != 0 && (v9 & 0x800) == 0 ) /*0x703e37*/
      return 1; /*0x703e37*/
  }
  if ( v4 && (v10 = v4[80], (v10 & 0x400) != 0) && (v10 & 0x800) != 0 ) /*0x703e51*/
    return 1; /*0x703e56*/
  else
    return 0; /*0x703e60*/

}
} // namespace gamemd

// 0x709A20
namespace gamemd {
int TechnoClass::COMStub_Return0_287()
{

  int result; // eax

  return result; /*0x709a20*/

}
} // namespace gamemd

// 0x70F020
namespace gamemd {
int TechnoClass::StubReturnFalse5()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f020*/
  return result; /*0x70f022*/

}
} // namespace gamemd

// 0x70F030
namespace gamemd {
int TechnoClass::StubReturnFalse6()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f030*/
  return result; /*0x70f032*/

}
} // namespace gamemd

// 0x70F040
namespace gamemd {
int TechnoClass::checkMovementRestrictions()
{

  return -1; /*0x70f043*/

}
} // namespace gamemd

// 0x70F0E0
namespace gamemd {
int TechnoClass::StubReturnFalse7()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f0e0*/
  return result; /*0x70f0e2*/

}
} // namespace gamemd

// 0x70F0F0
namespace gamemd {
int TechnoClass::StubReturnFalse8()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f0f0*/
  return result; /*0x70f0f2*/

}
} // namespace gamemd

// 0x70F110
namespace gamemd {
int TechnoClass::StubReturnFalse9()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x70f110*/
  return result; /*0x70f112*/

}
} // namespace gamemd

// 0x731CF0
namespace gamemd {
void TechnoClass::GetField(void *a1, void *a2)
{

  byte_B0FE58 = 0; /*0x731cf0*/

}
} // namespace gamemd
