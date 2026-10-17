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
#include "e4/classes/AudioConfig_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Transform_e4.hpp"
#include "e4/minimal_carriers.hpp"
#include "classes/BuildingClass_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/Delegate_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/FrameSnapshot_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Matrix2D_e4.hpp"  // w18j2 C2065 Matrix2D:: supply
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int OwnerHasPower(TechnoClass *p_this); }  // x4:ida@0x70dc60
namespace gamemd { int checkEMPState(TechnoClass *p_this); }  // x4:ida@0x70dce0
namespace gamemd { int applyEMPulseDamage(TechnoClass *p_this); }  // x4:ida@0x70dcf0
namespace gamemd { int processIronCurtainExpiry(int* p0); }  // x4:signals@0x746ea0
namespace gamemd { int BinarySearch(int* p0); }  // x4:signals@0x52b390
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int BlitterCopySHP(int* p0, int* p1, int* p2, int* p3, int p4, int* p5, int* p6, int p7, int p8, int p9, int p10, int p11);  // x4:signals@0x4373b0
} // namespace gamemd
// [w14e3] fwd decl: nullsub_69 (raw 0x74FF40: void nullsub_69(ObjectClass *this))
namespace gamemd { void nullsub_69(ObjectClass * a1); }

// [w14e3] Matrix3D supply: verbatim struct from src/core/math.hpp (gamemd), cpp-local carrier
namespace gamemd {
struct Matrix3D
{
  float Data[12] = {};  // data: 0x840b4c
  unsigned char q000;  // 0x0
  unsigned int q080;  // 0x80
  unsigned int u32_0;   // 0x0 (g57w10 r4: raw RotateZ 0x5af0aa fld [esi] float element vocab)
  unsigned int u32_8;   // 0x8 (raw fld [esi+8])
  unsigned int u32_10;  // 0x10
  unsigned int u32_18;  // 0x18
  unsigned int u32_28;  // 0x28
  public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
  void* Constructor(float a1, float a2);  // 0x5AE6F0
  void RotateZ(float a1);  // 0x5AF080
  // --- gap2 auto-generated stub declarations (END) ---
};
} // namespace gamemd


// 0x41A9E0
namespace gamemd {  // G42.18 ns repair
int TechnoClass_CanFireAtTarget(TechnoClass *aP0, void * a1, void * a2, void * a3, void * a4, void * a5)
{

  int result; // eax
  result = (int)(TriggerTypeClass::ReadINI((unsigned int *)(a1), a2, a3, a4, a5));
  if ( !result ) /*0x41a9fd*/
  {
    if ( !aP0->Tactical_6C9 || aP0->passengers[1] )
    {
      int v7; // edi
      v7 = *ProgressTimer::GetValue((ProgressTimer *)a1->secondaryFacing, &a5); /*0x41aa2e*/
      if ( (*(int (__stdcall **)(char *))(*((unsigned int *)a1 + 432) + 28))((char *)a1 + 1728) /*0x41aa6a*/
        || abs16(v7 - *(unsigned short *)((ObjectClass *)a1)->CalcTargetFacing((int *)&a5, (int)a3)) <= 0x800u )
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
}  // G42.18 ns repair
// 0x6F2B40
namespace gamemd {
TechnoClass::TechnoClass(AbstractClass * aP1)
{


  RadioClass::Release((RadioClass *)this); /*0x6f2b46*/
  this->flashing[0] = 0; /*0x6f2b52*/
  LOBYTE(this->flashing[1]) = 0; /*0x6f2b58*/
  this->animation[0] = 0; /*0x6f2b5e*/
  LOBYTE(this->animation[1]) = 0; /*0x6f2b64*/
  int v3; // eax
  v3 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2b6a*/
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
  unknown_libname_35((ObjectClass *)this->veterancy); /*0x6f2be8*/
  this->armorMultiplier[0] = 0; /*0x6f2bf2*/
  this->armorMultiplier[1] = 1072693248; /*0x6f2bf8*/
  this->firepowerMultiplier[0] = 0; /*0x6f2bfe*/
  this->firepowerMultiplier[1] = 1072693248; /*0x6f2c04*/
  this->idleActionTimer[0] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2c10*/
  this->idleActionTimer[2] = 0; /*0x6f2c16*/
  int v4; // edx
  v4 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2c1c*/
  this->radarFlashTimer[2] = 0; /*0x6f2c22*/
  this->radarFlashTimer[0] = v4; /*0x6f2c28*/
  this->targetingTimer[0] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2c33*/
  this->targetingTimer[2] = 45; /*0x6f2c39*/
  int v5; // ecx
  v5 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2c43*/
  this->ironCurtainTimer[1] = 0; /*0x6f2c49*/
  *(unsigned int *)this->q18C = v5; /*0x6f2c4f*/
  this->ironCurtainTimer[2] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2c5b*/
  this->ironTintTimer[1] = 0; /*0x6f2c61*/
  this->ironTintTimer[2] = 10; /*0x6f2c67*/
  this->ironTintStage = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2c76*/
  this->airstrikeTimer[1] = 0; /*0x6f2c7c*/
  int v6; // ecx
  v6 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2c82*/
  this->airstrikeTintTimer[1] = 0; /*0x6f2c88*/
  this->airstrikeTimer[2] = v6; /*0x6f2c8e*/
  *(unsigned int *)this->airstrikeTintStage_d = 0; /*0x6f2c94*/
  this->airstrikeTintStage_2 = 0; /*0x6f2c9a*/
  this->drainTarget = 0; /*0x6f2ca0*/
  this->drainingMe = 0; /*0x6f2ca6*/
  this->drainAnim = 0; /*0x6f2cac*/
  this->isDisguisedFlag = 0; /*0x6f2cb2*/
  this->disguiseCreationFrame = 0; /*0x6f2cb8*/
  int v7; // edx
  v7 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2cbe*/
  this->infantryBlinkTimer[2] = 0; /*0x6f2cc4*/
  this->infantryBlinkTimer[0] = v7; /*0x6f2cca*/
  this->disguiseBlinkTimer[0] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2cd5*/
  this->disguiseBlinkTimer[2] = 0; /*0x6f2cdb*/
  this->isTargetedByChrono = 0; /*0x6f2ce1*/
  this->reloadTimer[0] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2ced*/
  this->reloadTimer[2] = 0; /*0x6f2cf3*/
  this->currentBurstCount = 0; /*0x6f2cf9*/
  this->currentBarrelIndex = 0; /*0x6f2cff*/
  this->displayProductionTo[0] = 0; /*0x6f2d05*/
  this->controlGroup = -1; /*0x6f2d0f*/
  this->focus = 0; /*0x6f2d15*/
  this->owner = (HouseClass *)aP1; /*0x6f2d1b*/
  this->cloakState = 0; /*0x6f2d21*/
  this->cloakProgress[0] = 0; /*0x6f2d27*/
  LOBYTE(this->cloakProgress[1]) = 0; /*0x6f2d2d*/
  this->cloakProgress[2] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2d38*/
  this->cloakProgress[4] = 0; /*0x6f2d3e*/
  this->cloakProgress[5] = 0; /*0x6f2d44*/
  this->cloakProgress[6] = 1; /*0x6f2d4a*/
  int v8; // ecx
  v8 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2d50*/
  this->cloakDelayTimer[2] = 0; /*0x6f2d56*/
  this->cloakDelayTimer[0] = v8; /*0x6f2d5c*/
  this->warpFactor = 0.0; /*0x6f2d62*/
  this->isChronosphereImmune = 0; /*0x6f2d68*/
  this->lastSightCoords[0] = g_BuildingLoadQueue_Array.?[3]; /*0x6f2d79*/
  this->lastSightCoords[1] = g_BuildingLoadQueue_Array.?[4]; /*0x6f2d85*/
  this->lastSightCoords[2] = g_BuildingLoadQueue_Array.?[5]; /*0x6f2d93*/
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
  this->chronoDestCoords[0] = g_BuildingLoadQueue_Array.?[3]; /*0x6f2dea*/
  this->chronoDestCoords[1] = g_BuildingLoadQueue_Array.?[4]; /*0x6f2df1*/
  int v9; // edx
  v9 = g_BuildingLoadQueue_Array.?[5]; /*0x6f2df4*/
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
  this->diskLaserTimer[0] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2e86*/
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
  (&this->tiltSidewaysAngle)->GetField(); /*0x6f2ece*/
  TechnoClass::checkCloakState((TechnoClass *)this->storedTiberium); /*0x6f2ed9*/
  FrameSnapshot::InitMax((FrameSnapshot *)this->barrelFacing, 3); /*0x6f2ee6*/
  ((FrameSnapshot *)this->primaryFacing)->Init(); /*0x6f2ef1*/
  ((FrameSnapshot *)this->secondaryFacing)->Init(); /*0x6f2efc*/
  this->currentBurstIndex = 0; /*0x6f2f01*/
  this->targetLaserTimer[0] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f2f0d*/
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
  this->barrelRecoil[0] = 2; /*0x6f2f85*/
  this->barrelRecoil[1] = 1; /*0x6f2f8b*/
  this->barrelRecoil[2] = 1; /*0x6f2f91*/
  this->barrelRecoil[3] = 1; /*0x6f2f97*/
  this->barrelRecoil[5] = 0; /*0x6f2f9d*/
  this->barrelRecoil[6] = 0; /*0x6f2fa3*/
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
  this->currentTargetThreatValues[1] = 0; /*0x6f3051*/
  this->currentTargetThreatValues[2] = 0; /*0x6f3057*/
  LOBYTE(this->currentTargetThreatValues[3]) = 1; /*0x6f305d*/
  BYTE1(this->currentTargetThreatValues[3]) = 0; /*0x6f3064*/
  this->currentTargetThreatValues[0] = (int)&vt_DynamicVectorClass; /*0x6f306a*/
  this->currentTargetThreatValues[5] = 10; /*0x6f3074*/
  this->currentTargetThreatValues[4] = 0; /*0x6f307a*/
  this->currentTargets[1] = 0; /*0x6f3080*/
  this->currentTargets[2] = 0; /*0x6f3086*/
  LOBYTE(this->currentTargets[3]) = 1; /*0x6f308c*/
  BYTE1(this->currentTargets[3]) = 0; /*0x6f3093*/
  this->currentTargets[0] = (int)&vt_DynamicVectorClass; /*0x6f3099*/
  this->currentTargets[5] = 10; /*0x6f309f*/
  this->currentTargets[4] = 0; /*0x6f30a5*/
  this->attackedTargets[1] = 0; /*0x6f30ab*/
  this->attackedTargets[2] = 0; /*0x6f30b1*/
  LOBYTE(this->attackedTargets[3]) = 1; /*0x6f30b7*/
  BYTE1(this->attackedTargets[3]) = 0; /*0x6f30be*/
  this->attackedTargets[0] = (int)&vt_DynamicVectorClass; /*0x6f30c4*/
  this->attackedTargets[5] = 10; /*0x6f30ca*/
  this->attackedTargets[4] = 0; /*0x6f30d0*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f30d6*/
  this->turretIsRotating = 0; /*0x6f30dc*/
  this->isGattlingSoundPlaying = 0; /*0x6f30e2*/
  this->unknown_4BC = 0; /*0x6f30e8*/
  this->isUnusedGattlingSoundPlaying = 0; /*0x6f30ee*/
  this->unknown_4D8 = 0; /*0x6f30f4*/
  this->unknown_bool_4F8 = 0; /*0x6f30fa*/
  this->unknown_4FC = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6f3106*/
  this->queueUpToEnter = 0; /*0x6f310c*/
  this->empLockRemaining = 0; /*0x6f3112*/
  this->firingRadBeam = 0; /*0x6f3118*/
  this->planningToken = 0; /*0x6f311e*/
  this->disguiseAsType = 0; /*0x6f3124*/
  this->disguisedAsHouse = 0; /*0x6f312a*/
  this->RadioClass = &vt_TechnoClass; /*0x6f3130*/
  /* X11: vtable install elided (implicit via TechnoClass virtuals 0x6f3136) */
  /* X11: vtable install elided (implicit via TechnoClass virtuals 0x6f313d) */
  /* X11: vtable install elided (implicit via off_7F4934 virtuals 0x6f314a) */
  AudioController::Init((AudioController *)this->turretRotateSoundController); /*0x6f3151*/
  AudioController::Init((AudioController *)this->gattlingSoundController); /*0x6f315c*/
  AudioController::Init((AudioController *)this->unusedGattlingSoundController); /*0x6f3167*/
  AudioController::Init((AudioController *)this->queuedVoiceSoundController); /*0x6f3172*/
  this->queuedVoiceIndex = -1; /*0x6f3177*/
  this->unknown_4F4 = -1; /*0x6f317d*/
  if ( *(int *)&DataGlobal_A8EB00[392] < *(int *)&DataGlobal_A8EB00[384] /*0x6f31b6*/
    || (DataGlobal_A8EB00[389] || !*(unsigned int *)&DataGlobal_A8EB9C)
    && *(int *)&dword_A8EBA8 > 0
    && (*(unsigned __int8 (**)(unsigned char *, int, unsigned int))(*(unsigned int *)&byte_A8EB94 + 8))(
         &byte_A8EB94,
         *(unsigned int *)&dword_A8EBA8 + *(unsigned int *)&DataGlobal_A8EB9C,
         0) )
  {
    int v10; // eax
    v10 = (*(unsigned int *)&DataGlobal_A8EB00[392])++; /*0x6f31c3*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_A8EB00[380] + 4 * v10) = this; /*0x6f31d2*/
  }
  if ( *(int *)&DataGlobal_B0F6D8 < *(int *)&DataGlobal_B0F6D0 /*0x6f3209*/
    || (DataGlobal_B0F6D5 || !*(unsigned int *)&DataGlobal_B0F6D0)
    && *(int *)&DataGlobal_B0F6DC > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)DataGlobal_B0F6C8 + 8))(
         DataGlobal_B0F6C8,
         *(unsigned int *)&DataGlobal_B0F6DC + *(unsigned int *)&DataGlobal_B0F6D0,
         0) )
  {
    int v11; // eax
    v11 = (*(unsigned int *)&DataGlobal_B0F6D8)++; /*0x6f3216*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_B0F6CC + 4 * v11) = (unsigned int)(this); /*0x6f3225*/
  }
  LOBYTE(this->abstractFlags) |= 1u; /*0x6f3237*/
  this->initialOwner = (HouseClass *)aP1; /*0x6f3241*/
  memset(&this->fireParticles, 0, 0x20u); /*0x6f3247*/
  *(unsigned short *)this->unknown_short_3C8 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x6f3259*/
  return &this->RadioClass; /*0x6f3262*/

}
} // namespace ra2

// 0x6F3F40
namespace gamemd {
unsigned int * TechnoClass::Update(int a2, void *a2_1, void *a3, void *a4)
{

  TechnoClass *v2; // ecx
  TechnoClass *v3; // esi
  int owner; // eax
  unsigned int *result; // eax
  int v6; // edi
  unsigned int *v7; // eax
  SpawnManagerClass *v8; // eax
  int v9; // edi
  int v10; // eax
  SlaveManagerClass *v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // eax
  CaptureManagerClass *v15; // eax
  int v16; // eax
  int v17; // eax
  TemporalClass *v18; // eax
  unsigned int *v19; // eax
  int vfptr; // edx
  AirstrikeClass *v21; // eax
  AirstrikeClass *v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int *v25; // eax
  int v26; // ecx
  unsigned int *v27; // eax
  unsigned int v28; // ecx
  int v29; // [esp-Ch] [ebp-10h]
  int v30; // [esp-Ch] [ebp-10h]
  int v31; // [esp-8h] [ebp-Ch]
  int v32; // [esp-8h] [ebp-Ch]
  int v33; // [esp-4h] [ebp-8h]
  int v34; // [esp-4h] [ebp-8h]

  v3 = v2; /*0x6f3f41*/
  owner = v2->owner; /*0x6f3f43*/
  if ( owner ) /*0x6f3f4b*/
    v2->isOwnedByCurrentPlayer[0] = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) == owner; /*0x6f3f55*/
  result = (unsigned int *)(*(int (**)(void))(v2->vfptr + 132))(); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !v3->planningToken ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(v3); /*0x6f3f83*/
    if ( *(unsigned int *)((*(int (**)(TechnoClass *, int))(v3->vfptr + 132))(v3, a2) + 3416) ) /*0x6f3f93*/
    {
      v6 = __2_YAPAXI_Z(0x74u); /*0x6f3fa4*/
      if ( v6 ) /*0x6f3fab*/
      {
        v33 = *(unsigned int *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3428); /*0x6f3fbf*/
        v31 = *(unsigned int *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3424); /*0x6f3fd0*/
        v29 = *(unsigned int *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3420); /*0x6f3fe1*/
        v7 = (unsigned int *)(*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3); /*0x6f3fe4*/
        v8 = (SpawnManagerClass *)SpawnManagerClass::SpawnManagerClass(v6, (int)v3, v7[854], v29, v31, v33); /*0x6f3ff4*/
      }
      else
      {
        v8 = 0; /*0x6f3ffb*/
      }
      v3->spawnManager = (int)v8; /*0x6f3ffd*/
    }
    if ( *(unsigned int *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3392) ) /*0x6f400d*/
    {
      v9 = __2_YAPAXI_Z(0x64u); /*0x6f401e*/
      if ( v9 ) /*0x6f4025*/
      {
        v34 = *(unsigned int *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3404); /*0x6f4039*/
        v32 = *(unsigned int *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3400); /*0x6f404a*/
        v30 = *(unsigned int *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3396); /*0x6f405b*/
        v10 = (*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3); /*0x6f405e*/
        v11 = (SlaveManagerClass *)SlaveManagerClass::ctor(v9, (int)v3, *(unsigned int *)(v10 + 3392), v30, v32, v34); /*0x6f406e*/
      }
      else
      {
        v11 = 0; /*0x6f4075*/
      }
      v3->slaveManager = (int)v11; /*0x6f4077*/
    }
    if ( *(unsigned int *)(*(int (**)(TechnoClass *, unsigned int))(v3->vfptr + 1016))(v3, 0) /*0x6f40a2*/
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(TechnoClass *, unsigned int))(v3->vfptr + 1016))(v3, 0) + 172)
                  + 341) )
    {
      v12 = __2_YAPAXI_Z(0x50u); /*0x6f40b3*/
      if ( v12 ) /*0x6f40ba*/
      {
        LOBYTE(v13) = *(unsigned char *)(*(unsigned int *)(*(int (**)(TechnoClass *))(v3->vfptr + 1016))(v3) + 320); /*0x6f40cc*/
        v14 = (*(int (**)(TechnoClass *, unsigned int, int))(v3->vfptr + 1016))(v3, 0, v13); /*0x6f40d7*/
        v15 = (CaptureManagerClass *)CaptureManagerClass::CaptureManagerClass( /*0x6f40e9*/
                                       v12,
                                       (int)v3,
                                       *(unsigned int *)(*(unsigned int *)v14 + 164),
                                       0);
      }
      else
      {
        v15 = 0; /*0x6f40f0*/
      }
      v3->captureManager = (int)v15; /*0x6f40f2*/
    }
    if ( (*(int (**)(TechnoClass *))(v3->vfptr + 44))(v3) != 6 /*0x6f412a*/
      && *(unsigned int *)(*(int (**)(TechnoClass *, unsigned int))(v3->vfptr + 1016))(v3, 0)
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(TechnoClass *, unsigned int))(v3->vfptr + 1016))(v3, 0) + 172)
                  + 345) )
    {
      v16 = __2_YAPAXI_Z(0x58u); /*0x6f4136*/
      if ( v16 ) /*0x6f4140*/
        v17 = ParasiteClass::ParasiteClass(v16, (int)v3); /*0x6f4145*/
      else
        v17 = 0; /*0x6f414c*/
      v3[1].radarFlashTimer[2] = v17; /*0x6f414e*/
    }
    if ( *(unsigned int *)(*(int (**)(TechnoClass *, unsigned int))(v3->vfptr + 1016))(v3, 0) /*0x6f4179*/
      && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(TechnoClass *, unsigned int))(v3->vfptr + 1016))(v3, 0) + 172)
                  + 346) )
    {
      v18 = (TemporalClass *)__2_YAPAXI_Z(0x50u); /*0x6f4185*/
      if ( v18 ) /*0x6f418f*/
        v19 = TemporalClass::TemporalClass(v18, (int)v3); /*0x6f4194*/
      else
        v19 = 0; /*0x6f419b*/
      vfptr = v3->vfptr; /*0x6f419d*/
      v3->temporalUsing = (int)v19; /*0x6f41a3*/
      *(unsigned int *)(v3->temporalUsing + 76) = *(unsigned int *)(*(unsigned int *)(*(int (**)(TechnoClass *, unsigned int))(vfptr + 1016))( /*0x6f41bd*/
                                                                     v3,
                                                                     0)
                                                      + 164);
    }
    if ( *(int *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 1564) > 0 ) /*0x6f41d2*/
    {
      v21 = (AirstrikeClass *)__2_YAPAXI_Z(0x60u); /*0x6f41d6*/
      if ( v21 ) /*0x6f41e0*/
        v22 = AirstrikeClass::AirstrikeClass(v21, (int)v3); /*0x6f41e5*/
      else
        v22 = 0; /*0x6f41ec*/
      v3->airstrike = (int)v22; /*0x6f41ee*/
    }
    if ( *(unsigned char *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3375) /*0x6f4212*/
      && *(unsigned char *)((*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3) + 3376) )
    {
      v23 = v3->owner; /*0x6f421c*/
      v3->isDisguisedFlag[0] = 1; /*0x6f4222*/
      v3->disguisedAsHouse = v23; /*0x6f4229*/
      v24 = v23->sideIndex; /*0x6f422f*/
      if ( v24 ) /*0x6f4237*/
      {
        if ( v24 == 1 ) /*0x6f4250*/
          v3->disguiseAsType = *&dword_8871E0->u32_D5C; /*0x6f425d*/
        else
          v3->disguiseAsType = *&dword_8871E0->u32_D60; /*0x6f4271*/
      }
      else
      {
        v3->disguiseAsType = *&dword_8871E0->u32_D58; /*0x6f4245*/
      }
    }
    v25 = (unsigned int *)(*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3); /*0x6f427b*/
    v26 = v25[809]; /*0x6f4281*/
    v25 += 809; /*0x6f4287*/
    v3->turretRecoil[0] = v26; /*0x6f428c*/
    v3->turretRecoil[1] = v25[1]; /*0x6f4295*/
    v3->turretRecoil[2] = v25[2]; /*0x6f429e*/
    v3->turretRecoil[3] = v25[3]; /*0x6f42a7*/
    v27 = (unsigned int *)(*(int (**)(TechnoClass *))(v3->vfptr + 132))(v3); /*0x6f42b1*/
    v28 = v27[814]; /*0x6f42b7*/
    result = v27 + 814; /*0x6f42bd*/
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
int TechnoClass::DTOR(void *a1)
{


  Sidebar *v2 = *&this->planningToken; // ecx /*0x6f4507*/
  /* X11: vtable install elided (implicit via TechnoClass virtuals 0x6f450d) */
  /* X11: vtable install elided (implicit via TechnoClass virtuals 0x6f4515) */
  /* X11: vtable install elided (implicit via TechnoClass virtuals 0x6f451c) */
  /* X11: vtable install elided (implicit via off_7F4934 virtuals 0x6f4523) */
  if ( v2 ) /*0x6f452a*/
  {
    Sidebar::CancelSidebarProductionQueue(v2); /*0x6f452c*/
    this->planningToken = 0; /*0x6f4531*/
  }
  int v3 = this->captureManager; // ecx /*0x6f4537*/
  if ( v3 ) /*0x6f453f*/
  {
    (*(void (**)(int, int))(*(unsigned int *)v3 + 32))(v3, 1); /*0x6f4545*/
    this->captureManager = 0; /*0x6f4548*/
  }
  int v4 = this->spawnManager; // ecx /*0x6f454e*/
  if ( v4 ) /*0x6f4556*/
  {
    (*(void (**)(int, int))(*(unsigned int *)v4 + 32))(v4, 1); /*0x6f455c*/
    this->spawnManager = 0; /*0x6f455f*/
  }
  TechnoClass *v5 = *&this->slaveManager; // ecx /*0x6f4565*/
  if ( v5 ) /*0x6f456d*/
  {
    TechnoClass::MutateAll(v5, 0, 0); /*0x6f4571*/
    int v6 = this->slaveManager; // ecx /*0x6f4576*/
    if ( v6 ) /*0x6f457e*/
      (*(void (**)(int, int))(*(unsigned int *)v6 + 32))(v6, 1); /*0x6f4584*/
    this->slaveManager = 0; /*0x6f4587*/
  }
  int v7 = this->temporalUsing; // ecx /*0x6f458d*/
  if ( v7 ) /*0x6f4595*/
  {
    (*(void (**)(int, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x6f459b*/
    this->temporalUsing = 0; /*0x6f459e*/
  }
  unsigned int *v8 = *&this->airstrike; // ecx /*0x6f45a4*/
  if ( v8 && v8[19] == this ) /*0x6f45b1*/
  {
    (*(void (**)(unsigned int *, int))(*v8 + 32))(v8, 1); /*0x6f45bb*/
    this->airstrike = 0; /*0x6f45be*/
  }
  AudioFile::Stop(&this->turretRotateSoundController); /*0x6f45cd*/
  AudioFileClass::Release(&this->turretRotateSoundController); /*0x6f45d4*/
  AudioFile::Stop(&this->gattlingSoundController); /*0x6f45e1*/
  AudioFileClass::Release(&this->gattlingSoundController); /*0x6f45e8*/
  AudioFile::Stop(&this->unusedGattlingSoundController); /*0x6f45f5*/
  AudioFileClass::Release(&this->unusedGattlingSoundController); /*0x6f45fc*/
  AudioFileClass::Release(&this->queuedVoiceSoundController); /*0x6f4607*/
  this->owner = 0; /*0x6f4610*/
  this->isOwnedByCurrentPlayer = 0; /*0x6f4616*/
  int v18; // [esp+18h] [ebp-4h] BYREF
  v18 = this; /*0x6f4628*/
  int v9; // eax
  v9 = (*(int (**)(unsigned char *, int *))(*(unsigned int *)&DataGlobal_A8EB00[376] + 16))(&DataGlobal_A8EB00[376], &v18); /*0x6f462c*/
  if ( v9 != -1 ) /*0x6f4633*/
    FactoryClass::RemoveItem((FactoryClass *)&byte_A8EB94, v9); /*0x6f463b*/
  v18 = this; /*0x6f4650*/
  int v10; // eax
  v10 = (*(int (**)(char *, int *))(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E88 + 16))( /*0x6f4654*/
          g_BuildingLoadQueue_Array.__pad_E88,
          &v18);
  if ( v10 != -1 ) /*0x6f465a*/
    DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.__pad_E88, v10); /*0x6f4662*/
  int v11 = this->behindAnim; // ecx /*0x6f4667*/
  if ( v11 ) /*0x6f466f*/
  {
    (*(void (**)(int))(*(unsigned int *)v11 + 248))(v11); /*0x6f4673*/
    this->behindAnim = 0; /*0x6f4679*/
  }
  int v12 = this->deployAnim; // ecx /*0x6f467f*/
  if ( v12 ) /*0x6f4687*/
  {
    (*(void (**)(int))(*(unsigned int *)v12 + 248))(v12); /*0x6f468b*/
    this->deployAnim = 0; /*0x6f4691*/
  }
  this->__pad_470 = &vt_VectorClass; /*0x6f469d*/
  AbstractClassVector::ddtor(&this->__pad_470); /*0x6f46a3*/
  void *v13 = *&this->attackedTargets; // eax /*0x6f46a8*/
  this->currentTargets = &vt_VectorClass; /*0x6f46ae*/
  if ( v13 && this->vecAbs_IsAllocated ) /*0x6f46bc*/
  {
    __3_YAXPAX_Z(v13); /*0x6f46c5*/
    this->attackedTargets = 0; /*0x6f46cd*/
  }
  this->vecAbs_IsAllocated = 0; /*0x6f46d3*/
  this->audioController3 = 0; /*0x6f46d9*/
  void *v14 = *&this->vecInt_Items; // eax /*0x6f46df*/
  this->currentTargetThreatValues = &vt_VectorClass; /*0x6f46e5*/
  if ( v14 && this->vecInt_IsAllocated ) /*0x6f46f3*/
  {
    __3_YAXPAX_Z(v14); /*0x6f46fc*/
    this->vecInt_Items = 0; /*0x6f4704*/
  }
  this->vecInt_IsAllocated = 0; /*0x6f4710*/
  this->vecInt_Capacity = 0; /*0x6f4716*/
  ObjectClass *v17; // [esp+10h] [ebp-Ch]
  nullsub_69(v17); /*0x6f471c*/
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x6f4721) */
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x6f4727) */
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x6f472e) */
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x6f4735) */
  void *v15 = *&this->flashing; // eax /*0x6f473c*/
  this->radioLinks = &vt_VectorClass; /*0x6f4742*/
  if ( v15 && this->vecTechno_IsAllocated ) /*0x6f4750*/
  {
    __3_YAXPAX_Z(v15); /*0x6f4759*/
    this->flashing = 0; /*0x6f4761*/
  }
  this->vecTechno_IsAllocated = 0; /*0x6f4767*/
  this->vecTechno_Capacity = 0; /*0x6f476d*/
  /* X11: vtable install elided (implicit via MissionClass virtuals 0x6f4775) */
  /* X11: vtable install elided (implicit via MissionClass virtuals 0x6f477b) */
  /* X11: vtable install elided (implicit via MissionClass virtuals 0x6f4782) */
  /* X11: vtable install elided (implicit via MissionClass virtuals 0x6f4789) */
  return ObjectClass::Dtor((ObjectClass *)this); /*0x6f4795*/

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
  v2 = (*((int (**)(TechnoClass *))this->RadioClass + 33))(this); /*0x702d50*/
  v3 = (*(int (**)(int, HouseClass *))(*(unsigned int *)v2 + 132))(v2, this->owner); /*0x702d6b*/
  if ( this->isAliveFlag ) /*0x702d6d*/
  {
    attachedTag = (TeamClass *)this->attachedTag; /*0x702d77*/
    if ( attachedTag ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        TeamClass::Update_0(attachedTag, 6, (int)this, *(int *)&DataGlobal_B0E840[528], 0, 0); /*0x702d90*/
    }
  }
  if ( this->isAliveFlag ) /*0x702d95*/
  {
    v5 = (TeamClass *)this->attachedTag; /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      TeamClass::Update_0(v5, 4, (int)this, *(int *)&DataGlobal_B0E840[528], 0, 0); /*0x702dbb*/
    if ( this->unknown_short_3C8 && (*((int (**)(TechnoClass *))this->RadioClass + 11))(this) != 1 && this->unknown_short_3C8 ) /*0x702dd6*/
    {
      v6 = (TeamClass *)this->attachedTag; /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        TeamClass::Update_0(v6, 7, (int)this, *(int *)&DataGlobal_B0E840[528], 0, 0); /*0x702df8*/
      if ( this->isAliveFlag ) /*0x702dfd*/
      {
        v7 = (TeamClass *)this->attachedTag; /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          TeamClass::Update_0(v7, 48, (int)this, *(int *)&DataGlobal_B0E840[528], 0, 0); /*0x702e1c*/
        if ( this->isAliveFlag ) /*0x702e21*/
        {
          v8 = (TeamClass *)this->attachedTag; /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            TeamClass::Update_0(v8, 29, (int)this, *(int *)&DataGlobal_B0E840[528], 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*((int (**)(TechnoClass *))this->RadioClass + 33))(this); /*0x702e48*/
  if ( !result->u8_C9F )
  {
    if ( v28 )
    {
      if ( (unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(v28 + 540), (int)this) ) /*0x702e6c*/
      {
        v3 = 0; /*0x702e75*/
      }
      else if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) ) /*0x702e81*/
      {
        v3 *= 2; /*0x702e8a*/
      }
      else if ( (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x702e90*/
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
        HouseClass::AccumulateScore((int *)(*(unsigned int *)(v28 + 284) + 336), v19, (int)owner); /*0x702ef0*/
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
          HouseClass::AccumulateScore((int *)(*(unsigned int *)(v28 + 724) + 336), v21, (int)v25); /*0x702f96*/
        }
      }
      else if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v28 + 1024))(v28)
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
    result = (*((int (**)(TechnoClass *))this->RadioClass + 11))(this) - 1; /*0x70301c*/
    switch ( result ) /*0x70302e*/
    {
      case 0: /*0x70302e*/
        goto LABEL_59;
      case 1: /*0x70302e*/
        if ( !v28 ) /*0x7030d5*/
          goto LABEL_63; /*0x7030d5*/
        if ( !*(unsigned char *)((*((int (**)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7030e5*/
        {
        HouseClass::IncrementStat( /*0x703108*/
            (HouseClass *)(*(unsigned int *)(v28 + 540) + 9032),
            *(unsigned int *)&this->u32_6C4->qDF8);
        v27 = 1; /*0x70310d*/
      }
        LABEL_55:
        if ( v28 ) /*0x703117*/
        {
        if ( !v27 && !*(unsigned char *)((*((int (**)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x70312f*/
        {
          HouseClass::IncrementStat( /*0x703152*/
              (HouseClass *)(*(unsigned int *)(v28 + 540) + 11088),
              *(unsigned int *)&this->q6C0->qDF8);
          v27 = 1; /*0x703157*/
        }
        LABEL_59:
        if ( v28 && !v27 && !*(unsigned char *)((*((int (**)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703175*/
          HouseClass::IncrementStat( /*0x703198*/
              (HouseClass *)(*(unsigned int *)(v28 + 540) + 13144),
              *(unsigned int *)&this->u32_6C4->qDF8);
      }
        LABEL_63:
        ++this->owner->killedBuildingsOfHouses[0]; /*0x70319d*/
        if ( v28 ) /*0x7031b2*/
        {
        if ( !*(unsigned char *)((*((int (**)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x7031be*/
        {
          v18 = (unsigned int *)(*(unsigned int *)(v28 + 540) /*0x7031d5*/
            + 4 * (*((int (**)(TechnoClass *))this->RadioClass + 14))(this)
            + 21476);
          ++*v18; /*0x7031dc*/
        }
      }
        result = RadarClass::IsActiveMode((RadarClass *)&DataGlobal_87F7E8); /*0x7031e3*/
        if ( (unsigned char)result ) /*0x7031ea*/
          LABEL_67:
        result = RadarClass::SetFlag((RadarClass *)&DataGlobal_87F7E8, 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*((int (**)(TechnoClass *))this->RadioClass + 33))(this); /*0x703039*/
        if ( !result->u8_232 ) /*0x70303f*/
        {
        if ( this->u32_53C != -1 ) /*0x703054*/
          ++*(unsigned int *)this->owner->__pad_5488; /*0x70305c*/
        if ( v28 && !*(unsigned char *)((*((int (**)(TechnoClass *))this->RadioClass + 33))(this) + 3231) ) /*0x703070*/
        {
          HouseClass::IncrementStat( /*0x703093*/
              (HouseClass *)(*(unsigned int *)(v28 + 540) + 15200),
              *(unsigned int *)&this->BuildingTypeClass_520->qDF8);
          v17 = (unsigned int *)(*(unsigned int *)(v28 + 540) /*0x7030a5*/
            + 4 * (*((int (**)(TechnoClass *))this->RadioClass + 14))(this)
            + 21560);
          ++*v17; /*0x7030ac*/
        }
        result = RadarClass::IsActiveMode((RadarClass *)&DataGlobal_87F7E8); /*0x7030b3*/
        if ( (unsigned char)result ) /*0x7030ba*/
          goto LABEL_67; /*0x7030ba*/
      }
        return result; /*0x7030ba*/
      case 14: /*0x70302e*/
        goto LABEL_55;
      default:
        return result;
    }
  }
  return result; /*0x7030cc*/

}
} // namespace ra2

// 0x705860
namespace gamemd {
int TechnoClass_DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
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
  unsigned __int8 v20; // [esp+30h] [ebp-60h] BYREF
  __int16 v21; // [esp+31h] [ebp-5Fh]
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

  Coord::To_Screen(g_TacticalClass_Instance, &a1, &v41); /*0x705875*/
  Coord::To_Screen(g_TacticalClass_Instance, &a4, &v31); /*0x70588a*/
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
      v10->ComputeScreenYOffset(&v25, &v29, v14); /*0x7059eb*/
      v15 = *v10; /*0x7059f2*/
      v25 = v31 - 2; /*0x7059f9*/
      v29 = v31 + 1; /*0x705a01*/
      v26 = v32; /*0x705a05*/
      v30 = v32; /*0x705a09*/
      (*(void (**)(int *, int *, int *, int))(v15 + 48))(v10, &v25, &v29, v14); /*0x705a19*/
      v26 = v32 - 1; /*0x705a2e*/
      v30 = v32 + 2; /*0x705a32*/
      v25 = v31 - 1; /*0x705a3a*/
      v29 = v31 - 1; /*0x705a3e*/
      v10->ComputeScreenYOffset(&v25, &v29, v14); /*0x705a4c*/
      v25 = v31; /*0x705a58*/
      v30 = v32 + 2; /*0x705a62*/
      v26 = v32 - 1; /*0x705a66*/
      v29 = v31; /*0x705a72*/
      v10->ComputeScreenYOffset(&v25, &v29, v14); /*0x705a7c*/
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
      AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v35, &v33, &v20, v25 / 4 + 255, v6, v18); /*0x705b34*/
      if ( v28 <= v27 ) /*0x705b43*/
      {
        v39 = v35 + 1; /*0x705bc8*/
        v40 = v36; /*0x705bd1*/
        v37 = v33 + 1; /*0x705bd6*/
        v38 = v34; /*0x705bdf*/
        AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705bf6*/
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
        AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705b80*/
        v39 = v35; /*0x705b91*/
        v40 = v36 - 1; /*0x705b9a*/
        v37 = v33; /*0x705ba0*/
        v38 = v34 - 1; /*0x705ba9*/
      }
      AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18); /*0x705bb9*/
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

  v3 = &this->initialOwner; /*0x70d0d5*/
  if ( !(uint8_t)this->u32_54.IsMediumVolume() ) /*0x70d0dd*/
  {
    result = Audio::IsLoud(v3); /*0x70d0e8*/
    if ( !(unsigned char)result ) /*0x70d0ef*/
      goto LABEL_10; /*0x70d0ef*/
  }
  v5 = this->GetSpecialValue(); /*0x70d0fd*/
  result = Audio::IsMediumVolume(v3); /*0x70d0ff*/
  if ( (unsigned char)result && *(unsigned char *)(v5 + weaponIndex + 668) ) /*0x70d10c*/
  {
    (*((unsigned char *)&(result))) = 1; /*0x70d119*/
    return result; /*0x70d11c*/
  }
  result = Audio::IsLoud(v3); /*0x70d121*/
  if ( (unsigned char)result && (*(unsigned char *)(v5 + weaponIndex + 668) || *(unsigned char *)(v5 + weaponIndex + 686)) ) /*0x70d135*/
    (*((unsigned char *)&(result))) = 1; /*0x70d142*/
  else
    LABEL_10:
  (*((unsigned char *)&(result))) = 0; /*0x70d14a*/
  return result; /*0x70d117*/
}
} // namespace ra2

// 0x73B140
namespace gamemd {
HouseClass * * TechnoClass::RenderTechnoSHP(int * a0, int * a1, int * a2, HouseClass * aP3, HouseClass * aP4, int a6, int a7, TechnoClass * aP7, TechnoClass * aP8, int a10, int a11)
{

  int *v11; // ecx
  TechnoClass *v12; // esi
  unsigned int *v13; // eax
  CellClass *v14; // eax
  char v15; // bl
  unsigned int *v16; // edi
  int v17; // edi
  int SHPFrame; // edi
  int v19; // ebx
  int vfptr; // eax
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
  unsigned __int16 *v36; // [esp+14h] [ebp-38h]
  int v37; // [esp+14h] [ebp-38h]
  __int16 v38[2]; // [esp+18h] [ebp-34h] BYREF
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

  v12 = (TechnoClass *)v11; /*0x73b146*/
  v13 = (unsigned int *)(*(int (**)(int *, int *))(*v11 + 72))(v11, &v39); /*0x73b152*/
  LOWORD(v36) = *v13 / 256; /*0x73b165*/
  HIWORD(v36) = v13[1] / 256; /*0x73b17e*/
  *(unsigned int *)v38 = v36; /*0x73b18b*/
  v14 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v38); /*0x73b190*/
  if ( (unsigned __int8)CellClass::QuickPassable(v14) ) /*0x73b197*/
    a9 = 0; /*0x73b1a0*/
  v15 = 0; /*0x73b1ae*/
  if ( *(unsigned char *)(v12[1].ironTintTimer[2] + 3606) ) /*0x73b1b0*/
  {
    if ( TechnoClass::CheckTargetCell(v12) && !TechnoClass::ScanNeighborCells(v12) /*0x73b1fb*/
      || (v16 = (unsigned int *)Array::Get((Array *)v12, 0), *v12->vtable2.hasParachute)
      && v16
      && (*(int (**)(unsigned int *))(*v16 + 44))(v16) == 6
      && *(unsigned char *)(v16[328] + 5821) )
    {
      v15 = 1; /*0x73b205*/
    }
  }
  v37 = 0; /*0x73b20f*/
  v17 = 10240; /*0x73b217*/
  switch ( (*(int (**)(TechnoClass *, unsigned int, unsigned int))(v12->vfptr + 104))(v12, 0, 0) ) /*0x73b225*/
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
      if ( v12->cloakProgress[0] ) /*0x73b23a*/
        v17 = 10252; /*0x73b249*/
      v37 = TechnoClass::CalcOffsetFacing(v12); /*0x73b255*/
      break; /*0x73b255*/
    default:
      break;
  }
  if ( (*(unsigned __int8 (**)(TechnoClass *))(v12->vfptr + 468))(v12) /*0x73b26b*/
    || (*(unsigned __int8 (**)(TechnoClass *))(v12->vfptr + 472))(v12) )
  {
    v17 |= 4u; /*0x73b275*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v12->owner) /*0x73b28b*/
    && (*(unsigned __int8 (**)(TechnoClass *))(v12->vfptr + 196))(v12) )
  {
    v17 = (*(int (**)(TechnoClass *, int))(v12->vfptr + 1084))(v12, v17); /*0x73b2a0*/
  }
  SHPFrame = BuildingClass::GetSHPFrame( /*0x73b2d3*/
               *(BuildingClass **)(*((unsigned int *)dword_B054D4 + *(unsigned int *)(v12->owner + 90196)) + 780),
               v17);
  v42 = (int)a2 + dword_B1CFC0 - 128; /*0x73b2dd*/
  v43 = (int)a3 + dword_B1CFC4 - 128; /*0x73b2eb*/
  v44 = dword_B1CFC8; /*0x73b2f6*/
  v45 = dword_B1CFCC; /*0x73b2fa*/
  if ( v15 && dword_B1CFCC > 16 ) /*0x73b307*/
  {
    v19 = a8; /*0x73b30d*/
    v39 = dword_B1CFC0; /*0x73b311*/
    v41[0] = dword_B1CFC8; /*0x73b319*/
    v45 = dword_B1CFCC - 16; /*0x73b329*/
    v41[1] = dword_B1CFCC - 16; /*0x73b32d*/
    vfptr = v12->vfptr; /*0x73b331*/
    v32 = a9; /*0x73b333*/
    v40 = dword_B1CFC4; /*0x73b339*/
    v30 = (*(int (**)(TechnoClass *, unsigned int, int))(vfptr + 748))(v12, 0, a8) - 5; /*0x73b34a*/
    v21 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x73b35a*/
    BlitterCopySHP(a2, &a5, &v43, (int *)g_DSurface_Hidden_2->__pad_0, v21, &v48, v41, SHPFrame, v30, v32, v37, v35); /*0x73b377*/
    v22 = v46 + v44; /*0x73b388*/
    v23 = v46 + v41[0]; /*0x73b38a*/
    v46 = 16; /*0x73b391*/
    v42 = 16; /*0x73b395*/
    v44 = v22; /*0x73b39d*/
    v41[0] = v23; /*0x73b3a6*/
    v34 = a10; /*0x73b3ac*/
    v28 = (*(int (**)(TechnoClass *))(v12->vfptr + 748))(v12); /*0x73b3be*/
    v24 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x73b3cc*/
    return BlitterCopySHP( /*0x73b3e5*/
             a2,
             &a4,
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
    v33 = a9; /*0x73b403*/
    v31 = a8; /*0x73b404*/
    v26 = (*(int (**)(TechnoClass *))(v12->vfptr + 752))(v12); /*0x73b407*/
    v29 = (*(int (**)(TechnoClass *, int))(v12->vfptr + 748))(v12, v26); /*0x73b41e*/
    v27 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x73b42c*/
    return BlitterCopySHP( /*0x73b446*/
             &this->vfptr,
             &a4,
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
int TechnoClass_DrawVoxel(TechnoClass *ecx0, int64_t a2, int a3, int a4, int a5, int a6, int started, int a9)
{

  unsigned int *v9; // ecx
  unsigned int *v10; // ebp
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int *v14; // eax
  int v15; // edx
  const void *v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // edi
  float *v20; // eax
  int v21; // edi
  float *inited; // eax
  int v23; // esi
  unsigned int v24; // esi
  double v25; // st7
  int v26; // edi
  float *v27; // eax
  float *v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  bool v33; // al
  const void *v34; // esi
  float *v35; // eax
  float *v36; // eax
  int v37; // esi
  int v38; // edi
  int v39; // edi
  int v40; // esi
  __int16 v41; // ax
  IPersistStream v42; // edi
  int *v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; // esi
  int DeployDir; // eax
  char *v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  int v52; // esi
  int v53; // esi
  int v54; // esi
  int FlashFrameTime; // eax
  char *v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  int v60; // eax
  int v61; // edx
  int v62; // ecx
  AudioStream *v63; // esi
  AudioStream *v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  const void *v68; // eax
  int *v69; // eax
  int v70; // ecx
  int v71; // eax
  int v72; // edi
  Cell *v73; // esi
  int Cell_field_0x140; // eax
  int v75; // eax
  int v76; // eax
  bool v77; // cc
  int v78; // eax
  int v79; // esi
  int v80; // eax
  float *v81; // eax
  int v82; // esi
  int v83; // eax
  float *v84; // eax
  float *v86; // [esp+E4h] [ebp-1D8h]
  float *v87; // [esp+E4h] [ebp-1D8h]
  float *v88; // [esp+E8h] [ebp-1D4h]
  float *v89; // [esp+E8h] [ebp-1D4h]
  int v90; // [esp+ECh] [ebp-1D0h]
  int v91; // [esp+ECh] [ebp-1D0h]
  int v92; // [esp+ECh] [ebp-1D0h]
  int v93; // [esp+ECh] [ebp-1D0h]
  int v94; // [esp+F0h] [ebp-1CCh]
  int v95; // [esp+F0h] [ebp-1CCh]
  float v96; // [esp+F4h] [ebp-1C8h]
  float v97; // [esp+F4h] [ebp-1C8h]
  float v98; // [esp+F4h] [ebp-1C8h]
  int v99; // [esp+F4h] [ebp-1C8h]
  float v100; // [esp+F4h] [ebp-1C8h]
  float v101; // [esp+F4h] [ebp-1C8h]
  float v102; // [esp+F4h] [ebp-1C8h]
  int v103; // [esp+F4h] [ebp-1C8h]
  float *v104; // [esp+F8h] [ebp-1C4h]
  float *v105; // [esp+F8h] [ebp-1C4h]
  float v106; // [esp+FCh] [ebp-1C0h]
  bool v107; // [esp+109h] [ebp-1B3h]
  char v108; // [esp+109h] [ebp-1B3h]
  char v109; // [esp+109h] [ebp-1B3h]
  unsigned __int8 v110; // [esp+109h] [ebp-1B3h]
  unsigned __int8 v111; // [esp+109h] [ebp-1B3h]
  char v112; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v113; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v114; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v115; // [esp+10Bh] [ebp-1B1h]
  unsigned __int8 v116; // [esp+10Bh] [ebp-1B1h]
  int v117; // [esp+10Ch] [ebp-1B0h] BYREF
  int v118; // [esp+110h] [ebp-1ACh] BYREF
  int v119; // [esp+114h] [ebp-1A8h] BYREF
  int v120[2]; // [esp+118h] [ebp-1A4h] BYREF
  float v121; // [esp+120h] [ebp-19Ch]
  int v122; // [esp+124h] [ebp-198h]
  unsigned __int64 v123; // [esp+128h] [ebp-194h] BYREF
  int v124; // [esp+130h] [ebp-18Ch] BYREF
  int v125[2]; // [esp+134h] [ebp-188h] BYREF
  float v126; // [esp+13Ch] [ebp-180h]
  int v127; // [esp+144h] [ebp-178h]
  int v128; // [esp+148h] [ebp-174h] BYREF
  int v129; // [esp+14Ch] [ebp-170h]
  int v130; // [esp+150h] [ebp-16Ch]
  int v131; // [esp+154h] [ebp-168h]
  int v132; // [esp+158h] [ebp-164h] BYREF
  int v133; // [esp+15Ch] [ebp-160h]
  int v134; // [esp+160h] [ebp-15Ch] BYREF
  int v135; // [esp+164h] [ebp-158h] BYREF
  unsigned int v136[2]; // [esp+168h] [ebp-154h] BYREF
  int GroundHeight; // [esp+170h] [ebp-14Ch]
  int v138; // [esp+174h] [ebp-148h] BYREF
  int v139; // [esp+178h] [ebp-144h]
  int v140; // [esp+17Ch] [ebp-140h]
  int v141; // [esp+180h] [ebp-13Ch]
  int v142; // [esp+184h] [ebp-138h]
  AudioStream *v143; // [esp+188h] [ebp-134h]
  int v144[12]; // [esp+18Ch] [ebp-130h] BYREF
  unsigned int v145[4]; // [esp+1BCh] [ebp-100h] BYREF
  Transform v146[12]; // [esp+1CCh] [ebp-F0h] BYREF
  int v147[12]; // [esp+1FCh] [ebp-C0h] BYREF
  unsigned char v148[48]; // [esp+22Ch] [ebp-90h] BYREF
  AudioConfig v149[12]; // [esp+25Ch] [ebp-60h] BYREF
  AudioConfig v150[12]; // [esp+28Ch] [ebp-30h] BYREF

  v10 = v9; /*0x73b47f*/
  v123 = __PAIR64__(ecx0, (unsigned int)this); /*0x73b488*/
  v11 = v9[433]; /*0x73b494*/
  if ( !(*(unsigned __int8 (**)(unsigned int *, unsigned int))(*v9 + 1088))( /*0x73b4a3*/
          v9,
          *(int *)((char *)&stru_A83CD9.estimatedHealth + 3)) )
    v11 = (*(int (**)(unsigned int *, int))(*v10 + 204))(v10, 1); /*0x73b4ba*/
  if ( *((unsigned char *)v10 + 1760) && *(unsigned int *)(v10[433] + 1720) ) /*0x73b4ce*/
    v11 = *(unsigned int *)(v10[433] + 1720); /*0x73b4d8*/
  v12 = v10[334] % *(unsigned int *)(*(unsigned int *)(v11 + 180) + 8); /*0x73b4e7*/
  v124 = 0; /*0x73b4ea*/
  v127 = v12; /*0x73b4f0*/
  if ( !v12 ) /*0x73b4f4*/
  {
    v13 = *(unsigned int *)(v11 + 188); /*0x73b4f6*/
    if ( !v13 ) /*0x73b4fe*/
      goto LABEL_10; /*0x73b4fe*/
    v12 = v10[82] % *(unsigned int *)(v13 + 8); /*0x73b507*/
  }
  v124 = v12; /*0x73b50a*/
LABEL_10:
  v133 = a2; /*0x73b50e*/
  v132 = HIDWORD(ecx0); /*0x73b52c*/
  v143 = g_DSurface_Hidden_2; /*0x73b537*/
  v134 = a3; /*0x73b543*/
  v135 = a4; /*0x73b54d*/
  v123 = 0x8000000080LL; /*0x73b553*/
  v117 = 0; /*0x73b557*/
  g_DSurface_Hidden_2 = (AudioStream *)dword_B1D13C; /*0x73b55b*/
  v14 = (int *)(*(int (**)(int, int *))(*(unsigned int *)dword_B1D13C + 120))(dword_B1D13C, &v138); /*0x73b56c*/
  v132 = *v14; /*0x73b571*/
  v133 = v14[1]; /*0x73b578*/
  v134 = v14[2]; /*0x73b57f*/
  v15 = v14[3]; /*0x73b583*/
  *((unsigned char *)v10 + 1747) = 1; /*0x73b586*/
  v135 = v15; /*0x73b592*/
  v117 = (byte_887418 != 0) - 1; /*0x73b59d*/
  if ( !v10[413] ) /*0x73b5a1*/
    sub_7DC720(-2147467261); /*0x73b5b0*/
  v16 = (const void *)(*(int (**)(unsigned int, int *, int *))(*(unsigned int *)v10[413] + 36))(v10[413], v147, &v117); /*0x73b5cb*/
  Transform::Copy(v146, v16); /*0x73b5d6*/
  v17 = v117; /*0x73b5db*/
  qmemcpy(v144, v146, sizeof(v144)); /*0x73b5f5*/
  v18 = v127; /*0x73b5f9*/
  if ( v117 != -1 ) /*0x73b5f7*/
  {
    v17 = v127 & 0x1F | (32 * v117); /*0x73b605*/
    v117 = v17; /*0x73b607*/
  }
  v128 = v132; /*0x73b621*/
  v142 = (v17 >> 5) & 0x3FF; /*0x73b629*/
  v130 = v134; /*0x73b634*/
  v129 = v133; /*0x73b63e*/
  v131 = v135; /*0x73b647*/
  dword_B1CFC0 = dword_B1CFA8; /*0x73b651*/
  dword_B1CFC4 = dword_B1CFAC; /*0x73b65b*/
  dword_B1CFC8 = dword_B1CFB0; /*0x73b661*/
  dword_B1CFCC = dword_B1CFB4; /*0x73b667*/
  if ( !*(unsigned char *)(v10[433] + 488) || SpawnManagerClass::CountDockedSpawns((SpawnManagerClass *)v10[180]) ) /*0x73b682*/
  {
    v21 = *v10; /*0x73b6f4*/
    v91 = a5; /*0x73b705*/
    inited = (float *)AudioConfig::InitDefault((AudioConfig *)v146); /*0x73b70e*/
    v89 = MultiplyMatrix3x4((float *)v147, inited, (float *)v144); /*0x73b721*/
    (*(void (**)(unsigned int *, int, int, int, int, int *, unsigned __int64 *, float *, int, int, unsigned int))(v21 + 1296))( /*0x73b742*/
      v10,
      v11 + 176,
      v18,
      v117,
      v11 + 580,
      &v128,
      &v123,
      v89,
      v91,
      10240,
      0);
  }
  else
  {
    v90 = a5; /*0x73b6a9*/
    v117 |= 0x10000u; /*0x73b6aa*/
    v19 = *v10; /*0x73b6ae*/
    v20 = (float *)AudioConfig::InitDefault((AudioConfig *)v146); /*0x73b6b9*/
    v88 = MultiplyMatrix3x4((float *)v147, v20, (float *)v144); /*0x73b6d0*/
    (*(void (**)(unsigned int *, int, int, int, int, int *, unsigned __int64 *, float *, int, int, unsigned int))(v19 + 1296))( /*0x73b6eb*/
      v10,
      v11 + 184,
      v18,
      v117,
      v11 + 580,
      &v128,
      &v123,
      v88,
      v90,
      10240,
      0);
  }
  v23 = v117; /*0x73b748*/
  v122 = v117; /*0x73b74f*/
  if ( v117 != -1 ) /*0x73b753*/
  {
    v24 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 232), &v118) >> 10) + 1) >> 1) & 0x1F /*0x73b778*/
        | v23 & 0xFFFFFFE0;
    if ( !*(unsigned int *)((*(int (**)(unsigned int *))(*v10 + 132))(v10) + 1824) ) /*0x73b780*/
      v24 &= 0xFFFFFC1F; /*0x73b78a*/
    v23 = ((unsigned __int8)v124 << 16) | v24; /*0x73b79d*/
    v122 = v23; /*0x73b79f*/
  }
  if ( !*(unsigned char *)(v11 + 3233) /*0x73b7be*/
    && (!(unsigned __int8)TechnoClass::OwnerHasPower((TechnoClass *)v10)
     || !TechnoClass::checkEMPState((TechnoClass *)v10)) )
  {
    if ( *(unsigned int *)(v11 + 192) && *(unsigned int *)(v11 + 196) ) /*0x73b7df*/
    {
      v118 = (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 220), &v119) >> 10) + 1) >> 1) & 0x1F) /*0x73b80f*/
           - 8;
      v25 = (double)v118 * -0.1963495408493621; /*0x73b817*/
      *(double *)v120 = v25; /*0x73b81d*/
      TechnoClass::CalcFacingFromMatrix((float *)v144); /*0x73b821*/
      v96 = -(*(double *)v120 - v25); /*0x73b834*/
      Matrix3D::RotateZ(v144, v96); /*0x73b837*/
      v97 = (double)*(int *)((*(int (**)(unsigned int *, unsigned int))(*v10 + 1016))(v10, 0) + 12) * dbl_B1D008; /*0x73b858*/
      v98 = (double)*(int *)((*(int (**)(unsigned int *, unsigned int, unsigned int, unsigned int))(*v10 + 1016))( /*0x73b876*/
                               v10,
                               0,
                               0,
                               LODWORD(v97))
                           + 4)
          * dbl_B1D008;
      Vector::MatrixMulVectorMath(&v144[2], v98, *(float *)&v104, v106); /*0x73b879*/
      v26 = *v10; /*0x73b885*/
      v106 = 0.0; /*0x73b888*/
      v104 = 0; /*0x73b88a*/
      v99 = started; /*0x73b893*/
      v27 = (float *)AudioConfig::InitDefault((AudioConfig *)&v146[2]); /*0x73b89c*/
      v28 = MultiplyMatrix3x4((float *)&v147[2], v27, (float *)&v144[2]); /*0x73b8aa*/
      (*(void (**)(unsigned int *, int, int, unsigned int, int, int *, int *, float *, int))(v26 + 1296))( /*0x73b8ce*/
        v10,
        v11 + 192,
        v129,
        HIDWORD(v123),
        v11 + 640,
        &v134,
        &v124,
        v28,
        v99);
    }
    goto LABEL_81; /*0x73b8d4*/
  }
  v119 = 0; /*0x73b8db*/
  if ( !(unsigned __int8)TechnoClass::OwnerHasPower((TechnoClass *)v10) || *(unsigned char *)(v10[433] + 3285) ) /*0x73b8f2*/
  {
    if ( *(unsigned int *)(v11 + 192) && *(unsigned int *)(v11 + 196) ) /*0x73b939*/
    {
      v112 = 1; /*0x73b943*/
      goto LABEL_37; /*0x73b948*/
    }
LABEL_36:
    v112 = 0; /*0x73b94a*/
    goto LABEL_37; /*0x73b94a*/
  }
  v29 = TechnoClass::applyEMPulseDamage((TechnoClass *)v10); /*0x73b8fe*/
  v119 = v29; /*0x73b905*/
  v23 |= v29 << 24; /*0x73b90c*/
  v30 = *(unsigned int *)(v11 + 8 * v29 + 344); /*0x73b90e*/
  v122 = v23; /*0x73b917*/
  if ( !v30 || !*(unsigned int *)(v11 + 8 * v29 + 348) ) /*0x73b91d*/
    goto LABEL_36; /*0x73b926*/
  v112 = 1; /*0x73b928*/
LABEL_37:
  v118 = v23; /*0x73b94f*/
  if ( v23 == -1 || v11 == -600 ) /*0x73b960*/
  {
    v107 = 0; /*0x73b9ab*/
    goto LABEL_46; /*0x73b9ab*/
  }
  if ( !*(unsigned int *)(v11 + 604) ) /*0x73b967*/
    goto LABEL_44; /*0x73b967*/
  if ( !TechnoClass::processIronCurtainExpiry((TechnoClass *)(v11 + 600), &v118) ) /*0x73b970*/
  {
    v31 = SortedStateVector::BinarySearch((SortedStateVector *)(v11 + 600), &v118); /*0x73b980*/
    if ( v31 ) /*0x73b987*/
    {
      *(unsigned int *)(v11 + 616) = v31; /*0x73b989*/
      goto LABEL_43; /*0x73b989*/
    }
LABEL_44:
    v107 = unk_B78824 != 0; /*0x73b99c*/
    goto LABEL_46; /*0x73b9a9*/
  }
LABEL_43:
  v107 = *(unsigned int *)(*(unsigned int *)(v11 + 616) + 4) != 0; /*0x73b98c*/
LABEL_46:
  if ( !v112 || (v118 = v23, v23 == -1) || v11 == -640 ) /*0x73b9c9*/
  {
    v33 = 0; /*0x73ba10*/
    goto LABEL_56; /*0x73ba10*/
  }
  if ( !*(unsigned int *)(v11 + 644) ) /*0x73b9d0*/
    goto LABEL_54; /*0x73b9d0*/
  if ( !TechnoClass::processIronCurtainExpiry((TechnoClass *)(v11 + 640), &v118) ) /*0x73b9d9*/
  {
    v32 = SortedStateVector::BinarySearch((SortedStateVector *)(v11 + 640), &v118); /*0x73b9e9*/
    if ( v32 ) /*0x73b9f0*/
    {
      *(unsigned int *)(v11 + 656) = v32; /*0x73b9f2*/
      goto LABEL_53; /*0x73b9f2*/
    }
LABEL_54:
    v33 = unk_B78824 != 0; /*0x73ba03*/
    goto LABEL_56; /*0x73ba0e*/
  }
LABEL_53:
  v33 = *(unsigned int *)(*(unsigned int *)(v11 + 656) + 4) != 0; /*0x73b9f5*/
LABEL_56:
  if ( v107 && (!v112 || v33) ) /*0x73ba24*/
  {
    qmemcpy(v146, v144, sizeof(v146)); /*0x73ba39*/
    v34 = v144; /*0x73ba40*/
  }
  else
  {
    v100 = (double)*(int *)(v11 + 1824) * dbl_B1D008; /*0x73ba60*/
    Matrix3x4::Translate(v144, v100); /*0x73ba63*/
    v118 = (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 232), v136) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x73ba8b*/
    *(double *)v125 = (double)v118 * -0.1963495408493621; /*0x73ba9f*/
    v118 = (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 226), v120) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x73babe*/
    v101 = *(double *)v125 - (double)v118 * -0.1963495408493621; /*0x73bad0*/
    Matrix2D::Rotate(v144, v101); /*0x73bad3*/
    *(float *)v120 = -*(float *)&v144[3]; /*0x73baff*/
    v139 = v144[7]; /*0x73bb22*/
    qmemcpy(v147, v144, sizeof(v147)); /*0x73bb2b*/
    v140 = v144[11]; /*0x73bb31*/
    *(float *)&v120[1] = -*(float *)&v144[7]; /*0x73bb38*/
    v138 = v144[3]; /*0x73bb44*/
    v125[1] = v120[1]; /*0x73bb4c*/
    v125[0] = v120[0]; /*0x73bb52*/
    v121 = -*(float *)&v144[11]; /*0x73bb5a*/
    v126 = v121; /*0x73bb6a*/
    Matrix3x3::Multiply(v125, v104); /*0x73bb6e*/
    v118 = (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 220), v120) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x73bb99*/
    v102 = -((double)v118 * -0.1963495408493621); /*0x73bba9*/
    Matrix3D::RotateZ(v147, v102); /*0x73bbac*/
    Matrix3x3::Multiply(&v138, v105); /*0x73bbbd*/
    v35 = (float *)AudioConfig::InitDefault(v150); /*0x73bbd1*/
    qmemcpy(v146, MultiplyMatrix3x4((float *)v149, v35, (float *)v144), sizeof(v146)); /*0x73bbf9*/
    v36 = (float *)AudioConfig::InitDefault(v149); /*0x73bc03*/
    v34 = MultiplyMatrix3x4((float *)v150, v36, (float *)v147); /*0x73bc1b*/
  }
  qmemcpy(v148, v34, sizeof(v148)); /*0x73bc24*/
  if ( !(unsigned __int8)TechnoClass::OwnerHasPower((TechnoClass *)v10) || *(unsigned char *)(v10[433] + 3285) ) /*0x73bc3b*/
  {
    if ( (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 232), v120) >> 13) + 1) >> 1) & 3) == 0 /*0x73bdb1*/
      || (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 232), v136) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v109 = 0; /*0x73bdc8*/
      if ( *(unsigned int *)(v11 + 192) && *(unsigned int *)(v11 + 196) ) /*0x73bdcf*/
        (*(void (**)(unsigned int *, int, unsigned int, int, int, int *, unsigned __int64 *, unsigned char *, int, int, unsigned int))(*v10 + 1296))( /*0x73be0b*/
          v10,
          v11 + 192,
          0,
          v122,
          v11 + 640,
          &v132,
          &v123,
          v148,
          a5,
          10240,
          0);
    }
    else
    {
      v109 = 1; /*0x73bdb3*/
    }
    v39 = a5; /*0x73be11*/
    v40 = v122; /*0x73be1a*/
    (*(void (**)(unsigned int *, int, int, int, int, int *, unsigned __int64 *, Transform *, int, int, unsigned int))(*v10 + 1296))( /*0x73be4f*/
      v10,
      v11 + 184,
      v124,
      v122,
      v11 + 600,
      &v132,
      &v123,
      v146,
      a5,
      10240,
      0);
    if ( v109 && *(unsigned int *)(v11 + 192) && *(unsigned int *)(v11 + 196) ) /*0x73be6d*/
      (*(void (**)(unsigned int *, int, unsigned int, int, int, int *, unsigned __int64 *, unsigned char *, int, int, unsigned int))(*v10 + 1296))( /*0x73be9e*/
        v10,
        v11 + 192,
        0,
        v40,
        v11 + 640,
        &v132,
        &v123,
        v148,
        v39,
        10240,
        0);
  }
  else
  {
    if ( (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 232), v120) >> 13) + 1) >> 1) & 3) == 0 /*0x73bc81*/
      || (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v10 + 232), v136) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v108 = 0; /*0x73bc8e*/
      if ( v112 ) /*0x73bc95*/
        (*(void (**)(unsigned int *, int, unsigned int, int, int, int *, unsigned __int64 *, unsigned char *, int, int, unsigned int))(*v10 + 1296))( /*0x73bcd7*/
          v10,
          v11 + 8 * v119 + 344,
          0,
          v122,
          v11 + 640,
          &v132,
          &v123,
          v148,
          a5,
          10240,
          0);
    }
    else
    {
      v108 = 1; /*0x73bc83*/
    }
    v37 = v119; /*0x73bce4*/
    v38 = v122; /*0x73bcea*/
    (*(void (**)(unsigned int *, int, int, int, int, int *, unsigned __int64 *, Transform *, int, int, unsigned int))(*v10 + 1296))( /*0x73bd20*/
      v10,
      v11 + 8 * v119 + 200,
      v127,
      v122,
      v11 + 600,
      &v132,
      &v123,
      v146,
      a5,
      10240,
      0);
    if ( v108 && v112 ) /*0x73bd38*/
      (*(void (**)(unsigned int *, int, unsigned int, int, int, int *, unsigned __int64 *, unsigned char *, int, int, unsigned int))(*v10 + 1296))( /*0x73bd74*/
        v10,
        v11 + 8 * v37 + 344,
        0,
        v38,
        v11 + 640,
        &v132,
        &v123,
        v148,
        a5,
        10240,
        0);
  }
LABEL_81:
  v129 = a2; /*0x73bea4*/
  v41 = *((unsigned short *)v10 + 485); /*0x73bebd*/
  v130 = a3; /*0x73bec4*/
  v128 = HIDWORD(ecx0); /*0x73bec8*/
  v131 = a4; /*0x73bed5*/
  if ( v41 <= 0 ) /*0x73bedc*/
  {
    if ( *((unsigned char *)v10 + 973) ) /*0x73bf45*/
      *((unsigned short *)v10 + 485) = dword_B1CFCC + ecx0 + *(unsigned short *)g_TacticalClass_Instance[45].__tail_0 + dword_B1CFC4 - 128; /*0x73bf74*/
  }
  else
  {
    v42 = g_TacticalClass_Instance[45]; /*0x73bee8*/
    v138 = 0; /*0x73bef6*/
    v141 = v41 - *(unsigned int *)&v42; /*0x73befd*/
    v139 = 0; /*0x73bf0b*/
    v140 = dword_886FA8; /*0x73bf12*/
    v43 = ClipRectIntersection(v125, &v128, &v138, 0, 0); /*0x73bf23*/
    v128 = *v43; /*0x73bf2a*/
    v129 = v43[1]; /*0x73bf31*/
    v130 = v43[2]; /*0x73bf38*/
    v131 = v43[3]; /*0x73bf3f*/
  }
  v44 = (*(int (**)(unsigned int *, int))(*v10 + 1124))(v10, a5); /*0x73bf88*/
  v45 = *v10; /*0x73bf8e*/
  v46 = v44; /*0x73bf91*/
  a5 = v44; /*0x73bf95*/
  if ( (*(unsigned __int8 (**)(unsigned int *, float *, float))(v45 + 352))(v10, v104, COERCE_FLOAT(LODWORD(v106))) ) /*0x73bf9c*/
  {
    a5 = Techno::StartInvulnerability((TechnoClass *)v10, v46); /*0x73bfb8*/
    DeployDir = dword_8871E0[1].DeployDir; /*0x73bfbf*/
    v48 = (char *)dword_8871E0 + 2 * DeployDir; /*0x73bfc5*/
    v115 = v48[DeployDir + 6260]; /*0x73bfd9*/
    v113 = v48[DeployDir + 6261]; /*0x73bfea*/
    v110 = v48[DeployDir + 6262]; /*0x73bfee*/
    v49 = DDraw::GetStatus() - 1; /*0x73bff7*/
    if ( v49 ) /*0x73bff8*/
    {
      if ( --v49 ) /*0x73bffb*/
      {
        v53 = a6; /*0x73c050*/
        goto LABEL_92; /*0x73c050*/
      }
      LOWORD(v51) = v115; /*0x73bffd*/
      LOWORD(v50) = v113; /*0x73c003*/
      v51 = v110 | (32 * (v50 | (v51 << 6))); /*0x73c01e*/
      v52 = v51 | a6; /*0x73c020*/
    }
    else
    {
      v52 = a6; /*0x73c024*/
    }
    LOWORD(v49) = v115; /*0x73c032*/
    LOWORD(v50) = v113 >> 1; /*0x73c03a*/
    LOWORD(v51) = v110; /*0x73c03c*/
    v49 *= 32; /*0x73c042*/
    v50 = v51 | ((v49 | v50) << 6); /*0x73c04a*/
    v53 = v50 | v52; /*0x73c04c*/
LABEL_92:
    LOWORD(v51) = v110; /*0x73c057*/
    LOWORD(v50) = v113 >> 1; /*0x73c066*/
    LOWORD(v49) = v115; /*0x73c068*/
    v54 = v51 | (32 * ((32 * v49) | v50)) | v53; /*0x73c078*/
    goto LABEL_94; /*0x73c07a*/
  }
  v54 = a6; /*0x73c07c*/
LABEL_94:
  if ( !*((unsigned char *)v10 + 664) ) /*0x73c08b*/
    goto LABEL_102; /*0x73c08b*/
  FlashFrameTime = dword_8871E0[1].FlashFrameTime; /*0x73c097*/
  v56 = (char *)dword_8871E0 + 2 * FlashFrameTime + FlashFrameTime; /*0x73c0a0*/
  v116 = v56[6260]; /*0x73c0b0*/
  v114 = v56[6262]; /*0x73c0bb*/
  v111 = *((unsigned char *)&dword_8871E0[1].SmallVisceroid + 2 * FlashFrameTime + FlashFrameTime + 1); /*0x73c0c6*/
  v57 = DDraw::GetStatus() - 1; /*0x73c0cf*/
  if ( v57 ) /*0x73c0d0*/
  {
    v60 = v57 - 1; /*0x73c0d2*/
    if ( v60 ) /*0x73c0d3*/
    {
      LOBYTE(v60) = v111; /*0x73c11f*/
      goto LABEL_101; /*0x73c11f*/
    }
    LOWORD(v58) = v116; /*0x73c0d5*/
    v60 = v111; /*0x73c0db*/
    LOWORD(v59) = v111; /*0x73c0e5*/
    v61 = v59 | (v58 << 6); /*0x73c0e7*/
    LOWORD(v59) = v114; /*0x73c0e9*/
    v58 = v59 | (32 * v61); /*0x73c0f2*/
    v54 |= v58; /*0x73c0f4*/
  }
  else
  {
    v60 = v111; /*0x73c0f8*/
  }
  LOWORD(v59) = (unsigned __int8)v60 >> 1; /*0x73c103*/
  LOWORD(v58) = v116; /*0x73c105*/
  v58 *= 32; /*0x73c10b*/
  v62 = v58 | v59; /*0x73c10e*/
  LOWORD(v58) = v114; /*0x73c110*/
  v59 = v58 | (v62 << 6); /*0x73c119*/
  v54 |= v59; /*0x73c11b*/
LABEL_101:
  LOWORD(v59) = v116; /*0x73c123*/
  LOWORD(v58) = v114; /*0x73c129*/
  LOWORD(v60) = (unsigned __int8)v60 >> 1; /*0x73c131*/
  v54 |= v58 | (32 * ((32 * v59) | v60)); /*0x73c13f*/
LABEL_102:
  if ( UnitClass::IsDeactivated((UnitClass *)v10) ) /*0x73c143*/
    a5 /= 2; /*0x73c158*/
  v103 = v54; /*0x73c166*/
  v63 = v143; /*0x73c16f*/
  (*(void (**)(unsigned int *, AudioStream *, TechnoClass *, unsigned int, int, int, int, int, int, int))(*v10 + 1372))( /*0x73c1a5*/
    v10,
    v143,
    this,
    ecx0,
    v128,
    v129,
    v130,
    v131,
    a5,
    v103);
  v145[1] = dword_B1CFC4; /*0x73c1bc*/
  v64 = g_DSurface_Hidden_2; /*0x73c1c3*/
  g_DSurface_Hidden_2 = v63; /*0x73c1c8*/
  v118 = (int)v64; /*0x73c1ce*/
  LOBYTE(v64) = *((unsigned char *)v10 + 973); /*0x73c1d2*/
  v145[0] = dword_B1CFC0; /*0x73c1d8*/
  v145[2] = dword_B1CFC8; /*0x73c1e7*/
  v145[3] = dword_B1CFCC; /*0x73c1ee*/
  *((unsigned char *)v10 + 1747) = 0; /*0x73c1f5*/
  if ( !(unsigned char)v64 ) /*0x73c1fc*/
  {
    v65 = v10[433]; /*0x73c210*/
    v120[0] = (int)this; /*0x73c216*/
    v120[1] = ecx0; /*0x73c21a*/
    if ( *(unsigned char *)(v65 + 3434) || (v66 = *(unsigned int *)(v65 + 1660), v66 == 1) || v66 == 2 ) /*0x73c236*/
    {
      v117 = v142; /*0x73c23f*/
    }
    else
    {
      v117 = 32 * v142; /*0x73c24f*/
      if ( !v10[413] ) /*0x73c253*/
        sub_7DC720(-2147467261); /*0x73c262*/
      v67 = (*(int (**)(unsigned int, int *))(*(unsigned int *)v10[413] + 48))(v10[413], v125); /*0x73c275*/
      v117 |= ((unsigned __int8)*(unsigned int *)(v67 + 4) - 16) & 0x1F; /*0x73c287*/
    }
    if ( !v10[413] ) /*0x73c28b*/
      sub_7DC720(-2147467261); /*0x73c29a*/
    v68 = (const void *)(*(int (**)(unsigned int, AudioConfig *, int *))(*(unsigned int *)v10[413] + 40))( /*0x73c2b5*/
                          v10[413],
                          v149,
                          &v117);
    Transform::Copy(v146, v68); /*0x73c2c0*/
    qmemcpy(v144, v146, sizeof(v144)); /*0x73c2d8*/
    if ( *(unsigned char *)(v11 + 3367) ) /*0x73c2da*/
    {
      v136[0] = v10[39]; /*0x73c2f4*/
      v136[1] = v10[40]; /*0x73c305*/
      GroundHeight = v10[41]; /*0x73c30c*/
      GroundHeight = Cell::GetGroundHeight(v136); /*0x73c31b*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v136, v120); /*0x73c329*/
      if ( !v10[413] ) /*0x73c32e*/
        sub_7DC720(-2147467261); /*0x73c33d*/
      v69 = (int *)(*(int (**)(unsigned int, int *))(*(unsigned int *)v10[413] + 48))(v10[413], v125); /*0x73c350*/
      v70 = *v69; /*0x73c353*/
      v71 = v69[1]; /*0x73c359*/
      v120[0] += v70; /*0x73c362*/
      v120[1] += v71; /*0x73c368*/
    }
    if ( *((unsigned char *)v10 + 1060) ) /*0x73c36c*/
      v120[1] -= 14; /*0x73c376*/
    v72 = (*(int (**)(unsigned int *))(*v10 + 456))(v10); /*0x73c38c*/
    v138 = v10[39]; /*0x73c390*/
    v139 = v10[40]; /*0x73c39c*/
    v140 = v10[41]; /*0x73c3a6*/
    v73 = (Cell *)Coord::To_Cell((Coord *)&dword_87F7E8, &v138); /*0x73c3b7*/
    if ( *((unsigned char *)v10 + 1060) ) /*0x73c3b9*/
    {
      if ( !*((unsigned char *)v10 + 140) && v72 >= dword_B1D0AC ) /*0x73c3d3*/
      {
        Cell_field_0x140 = v73->Cell_field_0x140; /*0x73c3d5*/
        if ( (Cell_field_0x140 & 0x100) != 0 /*0x73c414*/
          && ((Cell_field_0x140 & 0x800) != 0 && (*((unsigned int *)Cell::GetNeighbourContent(v73, 0) + 80) & 0x100) != 0
           || (v73->Cell_field_0x140 & 0x800) == 0
           && (*((unsigned int *)Cell::GetNeighbourContent(v73, 6u) + 80) & 0x100) != 0) )
        {
          v120[1] -= 60; /*0x73c416*/
        }
      }
    }
    if ( (*(unsigned __int8 (**)(unsigned int *))(*v10 + 84))(v10) ) /*0x73c420*/
    {
      v119 = 0; /*0x73c427*/
    }
    else
    {
      v75 = v10[433]; /*0x73c435*/
      v119 = v118; /*0x73c43b*/
      if ( *(unsigned char *)(v75 + 3434) || (v76 = *(unsigned int *)(v75 + 1660), v76 == 1) || v76 == 2 ) /*0x73c457*/
      {
        if ( (*(int (**)(unsigned int *))(*v10 + 456))(v10) > 0 ) /*0x73c466*/
          v117 = -1; /*0x73c472*/
        else
          v117 |= 0x80000000; /*0x73c468*/
      }
    }
    v77 = (*(int (**)(unsigned int *))(*v10 + 456))(v10) <= 0; /*0x73c485*/
    v78 = v10[413]; /*0x73c487*/
    if ( v77 ) /*0x73c48d*/
    {
      if ( !v78 ) /*0x73c52c*/
        sub_7DC720(-2147467261); /*0x73c533*/
      if ( !v10[413] ) /*0x73c53e*/
        sub_7DC720(-2147467261); /*0x73c549*/
      v82 = v10[413]; /*0x73c550*/
      v83 = (*(int (**)(int))(*(unsigned int *)v82 + 48))(v82); /*0x73c55c*/
      v95 = *(unsigned int *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)v82 + 48))( /*0x73c574*/
                         v82,
                         &v135,
                         *(unsigned int *)(v83 + 4));
      v93 = v119; /*0x73c575*/
      v84 = (float *)AudioConfig::InitDefault(v149); /*0x73c587*/
      v87 = MultiplyMatrix3x4((float *)v150, v84, (float *)v144); /*0x73c59e*/
      TechnoClass::QueueDrawVoiceResponse( /*0x73c5c4*/
        (TechnoClass *)v10,
        (unsigned char **)(v11 + 176),
        *(unsigned int *)(v11 + 2044),
        v117,
        v11 + 620,
        (int)&ecx0 + 4,
        v120,
        (int)v87,
        1u,
        v93,
        v95,
        (int)v125);
    }
    else
    {
      if ( !v78 ) /*0x73c495*/
        sub_7DC720(-2147467261); /*0x73c49c*/
      if ( !v10[413] ) /*0x73c4a7*/
        sub_7DC720(-2147467261); /*0x73c4b2*/
      v79 = v10[413]; /*0x73c4b9*/
      v80 = (*(int (**)(int))(*(unsigned int *)v79 + 48))(v79); /*0x73c4c5*/
      v94 = *(unsigned int *)(*(int (**)(int, int *, int))(*(unsigned int *)v79 + 48))( /*0x73c4de*/
                         v79,
                         &v135,
                         *(unsigned int *)(v80 + 4) + 1);
      v92 = v119; /*0x73c4df*/
      v81 = (float *)AudioConfig::InitDefault(v149); /*0x73c4f1*/
      v86 = MultiplyMatrix3x4((float *)v150, v81, (float *)v144); /*0x73c504*/
      TechnoClass::QueueDrawVoiceResponse( /*0x73c525*/
        (TechnoClass *)v10,
        (unsigned char **)(v11 + 176),
        *(unsigned int *)(v11 + 2044),
        v117,
        v11 + 620,
        (int)&ecx0 + 4,
        v120,
        (int)v86,
        1u,
        v92,
        v94,
        (int)v125);
    }
  }
  return (*(int (**)(int, unsigned int *, unsigned int))(*(unsigned int *)v118 + 20))(v118, v145, 0); /*0x73c5dc*/

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
  return *(unsigned char *)(a1->vfptr1 + 3598) != 0; /*0x41b854*/
}
} // namespace gamemd

// 0x41B860
namespace gamemd {
int TechnoClass::checkAmmo(AircraftClass * aP0)
{
  return aP0->vfptr_3; /*0x41b869*/
}
} // namespace gamemd

// 0x4722D0
namespace gamemd {
int TechnoClass::processPowerDrain()
{
  return (int)this->attachedTag; /*0x4722d3*/
}
} // namespace gamemd

// 0x4C2BD0
namespace gamemd {
void TechnoClass::updateSightRange(IUnknown * aP1, int a3)
{
  if ( aP1 && (*(int (**)(unsigned char *))(aP1->fallRate)(aP1) == 1 && aP1[144] && !aP1[129] ) /*0x4c2bf2*/
  {
    *&this->NeedsSaveOrLink = aP1; /*0x4c2c00*/
    this->a3 = a3; /*0x4c2c03*/
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
  __int16 v12[2]; // [esp+10h] [ebp-14h] BYREF
  __int16 v13[2]; // [esp+14h] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v15[2]; // [esp+1Ch] [ebp-8h] BYREF
  __int16 v16[2]; // [esp+20h] [ebp-4h] BYREF

  *(unsigned int *)v12 = *(unsigned int *)(*((int (**)(TechnoClass *, __int16 *))this->RadioClass + 110))(this, v16); /*0x703ce4*/
  v2 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v12); /*0x703ced*/
  if ( !v2 || this->onBridge ) /*0x703cf7*/
    return 0; /*0x703cf7*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703d1c*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x703d21*/
  *(unsigned int *)v14 = *(unsigned int *)v13; /*0x703d2e*/
  v3 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v14); /*0x703d4f*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703d57*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x703d5c*/
  *(unsigned int *)v15 = *(unsigned int *)v13; /*0x703d69*/
  v4 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v15); /*0x703d88*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703d91*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[84]); /*0x703d96*/
  *(unsigned int *)v16 = *(unsigned int *)v13; /*0x703da9*/
  v5 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v16); /*0x703dbc*/
  v13[0] = v12[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703dcb*/
  v13[1] = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x703dd4*/
  v6 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v13); /*0x703de7*/
  if ( (v2[80] & 0x400) != 0 ) /*0x703df5*/
    return 1; /*0x703df5*/
  if ( v3 ) /*0x703df9*/
  {
    v7 = v3->u32_140; /*0x703dfb*/
    if ( (v7 & 0x400) != 0 && (v7 & 0x800) != 0 ) /*0x703e0f*/
      return 1; /*0x703e0f*/
  }
  if ( v6 ) /*0x703e13*/
  {
    v8 = v6->u32_140; /*0x703e15*/
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

  (*((unsigned char *)&(result))) = 0; /*0x70f020*/
  return result; /*0x70f022*/
}
} // namespace gamemd

// 0x70F030
namespace gamemd {
int TechnoClass::StubReturnFalse6()
{
  int result; // eax

  (*((unsigned char *)&(result))) = 0; /*0x70f030*/
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

  (*((unsigned char *)&(result))) = 0; /*0x70f0e0*/
  return result; /*0x70f0e2*/
}
} // namespace gamemd

// 0x70F0F0
namespace gamemd {
int TechnoClass::StubReturnFalse8()
{
  int result; // eax

  (*((unsigned char *)&(result))) = 0; /*0x70f0f0*/
  return result; /*0x70f0f2*/
}
} // namespace gamemd

// 0x70F110
namespace gamemd {
int TechnoClass::StubReturnFalse9()
{
  int result; // eax

  (*((unsigned char *)&(result))) = 0; /*0x70f110*/
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
