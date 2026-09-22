// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41A9E0
namespace gamemd {
int TechnoClass_CanFireAtTarget()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge TechnoClass::CanFireAtTarget@<eax>(
        int a1@<ecx>,
        TechnoClass *a2@<edx>,
        ObjectClass *aP2,
        int a4,
        IUnknown aP1)
{
  int result; // eax
  int v7; // edi

  result = TriggerTypeClass::ReadINI((_DWORD *)a1, a2, (TechnoClass *)aP2, a4, (TechnoClass *)aP1.field_0); /*0x41a9f6*/
  if ( !result ) /*0x41a9fd*/
  {
    if ( !*(_BYTE *)(a1 + 1737) || *(_DWORD *)(a1 + 280) ) /*0x41aa09*/
    {
      v7 = *ProgressTimer::GetValue((_WORD *)(a1 + 928), &aP1); /*0x41aa2e*/
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a1 + 1728) + 28))(a1 + 1728) /*0x41aa6a*/
        || abs16(v7 - *(_WORD *)ObjectClass::CalcTargetFacing((void *)a1, &aP1, aP2)) <= 0x800u )
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
} // namespace gamemd

// 0x6F2B40
namespace ra2 {
namespace game {
unsigned int * TechnoClass::TechnoClass(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TechnoClass::TechnoClass(_DWORD *this, AbstractClass *aP1)
{
  int v3; // eax
  IUnknown *v4; // edx
  IUnknown *v5; // ecx
  IUnknown *v6; // ecx
  IUnknown *v7; // edx
  IUnknown *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax

  RadioClass::Release(this); /*0x6f2b46*/
  this->q0F0 = 0; /*0x6f2b52*/
  this->isUseless = 0; /*0x6f2b58*/
  this->q0F8 = 0; /*0x6f2b5e*/
  this->chronoWarpedByHouse = 0; /*0x6f2b64*/
  v3 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2b6a*/
  this->q108 = 0; /*0x6f2b6f*/
  this->q100 = v3; /*0x6f2b75*/
  this->turretChargeTimer = 0; /*0x6f2b7b*/
  this->q110 = 1; /*0x6f2b81*/
  this->secondaryTurretIndex = 0; /*0x6f2b87*/
  this->q118 = 0; /*0x6f2b8d*/
  this->q11C = 0; /*0x6f2b93*/
  this->q120 = -100; /*0x6f2b9c*/
  this->q124 = -1; /*0x6f2ba6*/
  this->q128 = -1; /*0x6f2bac*/
  this->behindAnim = 0; /*0x6f2bb2*/
  this->deployAnim = 0; /*0x6f2bb8*/
  this->inAirFlag = 0; /*0x6f2bbe*/
  this->currentWeaponSlot = 0; /*0x6f2bc4*/
  this->q13C = -1; /*0x6f2bca*/
  this->currentRank = 0; /*0x6f2bd0*/
  this->gattlingStage = 0; /*0x6f2bd6*/
  this->gattlingValue = 0; /*0x6f2be2*/
  unknown_libname_35(this + 84); /*0x6f2be8*/
  this->alignmentPadding154 = 0; /*0x6f2bf2*/
  this->armorMultiplier = 1072693248; /*0x6f2bf8*/
  this->q160 = 0; /*0x6f2bfe*/
  this->firepowerMultiplier = 1072693248; /*0x6f2c04*/
  this->q168 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c10*/
  this->q170 = 0; /*0x6f2c16*/
  v4 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c1c*/
  this->q17C = 0; /*0x6f2c22*/
  this->radarFlashTimer = v4; /*0x6f2c28*/
  this->targetingTimer = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c33*/
  this->q188 = 45; /*0x6f2c39*/
  v5 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c43*/
  this->q194 = 0; /*0x6f2c49*/
  this->q18C = v5; /*0x6f2c4f*/
  this->q198 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c5b*/
  this->q1A0 = 0; /*0x6f2c61*/
  this->q1A4 = 10; /*0x6f2c67*/
  this->ironTintStage = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c76*/
  this->airstrikeTimer = 0; /*0x6f2c7c*/
  v6 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c82*/
  this->q1BC = 0; /*0x6f2c88*/
  this->q1B4 = v6; /*0x6f2c8e*/
  this->q1C4 = 0; /*0x6f2c94*/
  this->isDeactivated = 0; /*0x6f2c9a*/
  this->drainTarget = 0; /*0x6f2ca0*/
  this->drainingMe = 0; /*0x6f2ca6*/
  this->drainAnim = 0; /*0x6f2cac*/
  this->isDisguisedFlag = 0; /*0x6f2cb2*/
  this->disguiseCreationFrame = 0; /*0x6f2cb8*/
  v7 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2cbe*/
  this->q1E8 = 0; /*0x6f2cc4*/
  this->infantryBlinkTimer = v7; /*0x6f2cca*/
  this->disguiseBlinkTimer = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2cd5*/
  this->q07D = 0; /*0x6f2cdb*/
  this->isTargetedByChrono = 0; /*0x6f2ce1*/
  this->reloadTimer = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2ced*/
  this->q204 = 0; /*0x6f2cf3*/
  this->currentBurstCount = 0; /*0x6f2cf9*/
  this->currentBarrelIndex = 0; /*0x6f2cff*/
  this->displayProductionTo = 0; /*0x6f2d05*/
  this->controlGroup = -1; /*0x6f2d0f*/
  this->focus = 0; /*0x6f2d15*/
  this->owner = aP1; /*0x6f2d1b*/
  this->cloakState = 0; /*0x6f2d21*/
  this->cloakProgress = 0; /*0x6f2d27*/
  this->q228 = 0; /*0x6f2d2d*/
  this->q22C = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2d38*/
  this->q234 = 0; /*0x6f2d3e*/
  this->q238 = 0; /*0x6f2d44*/
  this->warpFactor = 1; /*0x6f2d4a*/
  v8 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2d50*/
  this->q092 = 0; /*0x6f2d56*/
  this->q240 = v8; /*0x6f2d5c*/
  this->q24C = 0; /*0x6f2d62*/
  this->isChronosphereImmune = 0; /*0x6f2d68*/
  this->lastSightCoords = *(_DWORD *)&g_OverlayTypeConfig.__pad_579C[6908]; /*0x6f2d79*/
  this->q096 = *(_DWORD *)&g_OverlayTypeConfig.__pad_579C[6912]; /*0x6f2d85*/
  this->q097 = *(_DWORD *)&g_OverlayTypeConfig.__pad_579C[6916]; /*0x6f2d93*/
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
  this->chronoDestCoords = *(_DWORD *)&g_OverlayTypeConfig.__pad_579C[6908]; /*0x6f2dea*/
  this->q28C = *(_DWORD *)&g_OverlayTypeConfig.__pad_579C[6912]; /*0x6f2df1*/
  v9 = *(_DWORD *)&g_OverlayTypeConfig.__pad_579C[6916]; /*0x6f2df4*/
  this->bunkerLinkedUnit = 0; /*0x6f2dfa*/
  this->pitchAngle = 0; /*0x6f2e00*/
  this->q290 = v9; /*0x6f2e06*/
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
  this->diskLaserTimer = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2e86*/
  this->q2F4 = 0; /*0x6f2e8c*/
  this->diskLaserChargeState = 0; /*0x6f2e98*/
  this->ammo = -1; /*0x6f2e9e*/
  this->unitValue = 0; /*0x6f2ea4*/
  this->q324 = 0; /*0x6f2eaa*/
  this->q328 = 0; /*0x6f2eb0*/
  this->auxParticles1 = 0; /*0x6f2eb6*/
  this->auxParticles2 = 0; /*0x6f2ebc*/
  this->firingParticles = 0; /*0x6f2ec2*/
  this->waveEffect = -1; /*0x6f2ec8*/
  Delegate::GetField(this + 207); /*0x6f2ece*/
  TechnoClass::checkCloakState((int)(this + 212)); /*0x6f2ed9*/
  FrameSnapshot::InitMax((_WORD *)this + 440, 3); /*0x6f2ee6*/
  FrameSnapshot::Init((_WORD *)this + 452); /*0x6f2ef1*/
  FrameSnapshot::Init((_WORD *)this + 464); /*0x6f2efc*/
  this->q3B8 = 0; /*0x6f2f01*/
  this->targetLaserTimer = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2f0d*/
  this->qF10 = 0; /*0x6f2f13*/
  this->unknown_3CA = 0; /*0x6f2f1e*/
  this->countedAsOwned = 0; /*0x6f2f25*/
  this->isUseless = 0; /*0x6f2f3d*/
  this->isALoaner = 0; /*0x6f2f55*/
  this->q3D5 = 0; /*0x6f2f5b*/
  this->q3D8 = 2; /*0x6f2f61*/
  this->isTurretLocked = 1; /*0x6f2f67*/
  this->isDiscoveredByComputer = 1; /*0x6f2f6d*/
  this->sightRangeBonus = 1; /*0x6f2f73*/
  this->manipulatedByUnit = 0; /*0x6f2f79*/
  this->chronoWarpedByHouse = 0; /*0x6f2f7f*/
  this->q3F8 = 2; /*0x6f2f85*/
  this->q0FF = 1; /*0x6f2f8b*/
  this->q100 = 1; /*0x6f2f91*/
  this->q404 = 1; /*0x6f2f97*/
  this->q40C = 0; /*0x6f2f9d*/
  this->q410 = 0; /*0x6f2fa3*/
  this->isTether = 0; /*0x6f2fa9*/
  this->isAlternativeTether = 0; /*0x6f2faf*/
  this->isOwnedByCurrentPlayer = 0; /*0x6f2fb5*/
  this->isDiscoveredByCurrentPlayer = 0; /*0x6f2fbb*/
  this->q41C = 0; /*0x6f2fc1*/
  this->q41D = 0; /*0x6f2fc7*/
  this->q41E = 0; /*0x6f2fcd*/
  this->q41F = 0; /*0x6f2fd3*/
  this->q420 = 0; /*0x6f2fd9*/
  this->q421 = 1; /*0x6f2fdf*/
  this->q422 = 1; /*0x6f2fe6*/
  this->q423 = 0; /*0x6f2fed*/
  this->q424 = 0; /*0x6f2ff3*/
  this->q425 = 0; /*0x6f2ff9*/
  this->q426 = 0; /*0x6f2fff*/
  this->q427 = 0; /*0x6f3005*/
  this->q428 = 0; /*0x6f300b*/
  this->q42C = 0; /*0x6f3011*/
  this->q430 = 0; /*0x6f3017*/
  this->isMouseHovering = 0; /*0x6f301d*/
  this->shouldBeReselectOnUnlimbo = 0; /*0x6f3023*/
  this->previousTeam = 0; /*0x6f3029*/
  this->isCountedAsOwned_special = 0; /*0x6f302f*/
  this->isAbsorbed = 0; /*0x6f3035*/
  this->isGrindingInProgress = 0; /*0x6f303b*/
  this->grindingAnimHandle = 0; /*0x6f3046*/
  this->vecInt_Items = 0; /*0x6f3051*/
  this->vecInt_Capacity = 0; /*0x6f3057*/
  this->currentTargetThreatValues.IsInitialized = 1; /*0x6f305d*/
  this->currentTargetThreatValues.IsAllocated = 0; /*0x6f3064*/
  this->currentTargetThreatValues = &vt_DynamicVectorClass_int; /*0x6f306a*/
  this->q115 = 10; /*0x6f3074*/
  this->secondaryTurretIndex = 0; /*0x6f307a*/
  this->attackedTargets = 0; /*0x6f3080*/
  this->audioController3 = 0; /*0x6f3086*/
  *((_BYTE *)this + 1124) = 1; /*0x6f308c*/
  this->vecAbs_IsAllocated = 0; /*0x6f3093*/
  this->currentTargets = &vt_DynamicVectorClass_AbstractClass; /*0x6f3099*/
  this->q11B = 10; /*0x6f309f*/
  this->q11A = 0; /*0x6f30a5*/
  this->audioLoopIndex3 = 0; /*0x6f30ab*/
  this->audioVolume3 = 0; /*0x6f30b1*/
  this->audioController4 = 1; /*0x6f30b7*/
  this->q47D = 0; /*0x6f30be*/
  this->q470 = &vt_DynamicVectorClass_AbstractClass; /*0x6f30c4*/
  this->q121 = 10; /*0x6f30ca*/
  this->q120 = 0; /*0x6f30d0*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f30d6*/
  this->turretIsRotating = 0; /*0x6f30dc*/
  this->isGattlingSoundPlaying = 0; /*0x6f30e2*/
  this->unknown_4BC = 0; /*0x6f30e8*/
  this->isAudio5Active = 0; /*0x6f30ee*/
  this->unknown_4D8 = 0; /*0x6f30f4*/
  this->isVoiceOverride = 0; /*0x6f30fa*/
  this->unknown_4FC = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f3106*/
  this->queueUpToEnter = 0; /*0x6f310c*/
  this->empLockRemaining = 0; /*0x6f3112*/
  this->firingRadBeam = 0; /*0x6f3118*/
  this->planningToken = 0; /*0x6f311e*/
  this->disguiseAsType = 0; /*0x6f3124*/
  this->disguisedAsHouse = 0; /*0x6f312a*/
  *this = &TechnoClass::`vftable'; /*0x6f3130*/
  this->vtable2 = &TechnoClass::`vftable'; /*0x6f3136*/
  this->vtable3 = &vt_TechnoClass; /*0x6f313d*/
  this->vtable4 = &off_7F4934; /*0x6f314a*/
  AudioController::Init(this + 290); /*0x6f3151*/
  AudioController::Init(this + 297); /*0x6f315c*/
  AudioController::Init(this + 304); /*0x6f3167*/
  AudioController::Init(this + 311); /*0x6f3172*/
  this->queuedVoiceIndex = -1; /*0x6f3177*/
  this->unknown_4F4 = -1; /*0x6f317d*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[412] < *(int *)&MEMORY[0xA8D63C].__pad_14B0[404] /*0x6f31b6*/
    || (MEMORY[0xA8D63C].__pad_14B0[409] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[404])
    && *(int *)&MEMORY[0xA8D63C].__pad_14B0[416] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[396] + 8))(
         &MEMORY[0xA8D63C].__pad_14B0[396],
         *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[416] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[404],
         0) )
  {
    v10 = (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412])++; /*0x6f31c3*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * v10) = this; /*0x6f31d2*/
  }
  if ( *(int *)&g_OverlayTypeConfig.__pad_579C[10052] < *(int *)&g_OverlayTypeConfig.__pad_579C[10044] /*0x6f3209*/
    || (g_OverlayTypeConfig.__pad_579C[10049] || !*(_DWORD *)&g_OverlayTypeConfig.__pad_579C[10044])
    && *(int *)&g_OverlayTypeConfig.__pad_579C[10056] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_OverlayTypeConfig.__pad_579C[10036] + 8))(
         &g_OverlayTypeConfig.__pad_579C[10036],
         *(_DWORD *)&g_OverlayTypeConfig.__pad_579C[10056] + *(_DWORD *)&g_OverlayTypeConfig.__pad_579C[10044],
         0) )
  {
    v11 = (*(_DWORD *)&g_OverlayTypeConfig.__pad_579C[10052])++; /*0x6f3216*/
    *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig.__pad_579C[10040] + 4 * v11) = this; /*0x6f3225*/
  }
  (unsigned char)this->abstractFlags |= 1u; /*0x6f3237*/
  this->ammoReloadTimer = aP1; /*0x6f3241*/
  memset(this + 193, 0, 0x20u); /*0x6f3247*/
  this->q1E4 = Random::State(&g_ScenarioClass_Instance->random[1]); /*0x6f3259*/
  return this; /*0x6f3262*/
}
}
} // namespace game
} // namespace ra2

// 0x6F3F40
namespace ra2 {
namespace game {
unsigned int * TechnoClass::Update(BuildingClass * aP0, FootClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *TechnoClass::Update(BuildingClass *aP0, FootClass *aP1)
{
  int v2; // ecx
  TechnoClass *esi1; // esi
  HouseClass *v3; // eax
  _DWORD *result; // eax
  int v6; // edi
  int v7; // eax
  void *v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int edi20; // edi
  int v13; // edx
  int eax21a; // eax
  void *eax21; // eax
  int eax27; // eax
  ParasiteClass *v12; // eax
  _DWORD *v18; // eax
  TemporalClass *v14; // eax
  AbstractClass *v15; // edx
  int v21; // eax
  AirstrikeClass *v16; // eax
  HouseClass *v17; // eax
  int sideIndex; // eax
  _DWORD *eax49; // eax
  int ecx49; // ecx
  int v27; // eax
  int v28; // ecx
  FootClass *v23; // [esp-Ch] [ebp-10h]
  FootClass *v24; // [esp-Ch] [ebp-10h]
  AircraftClass *v25; // [esp-8h] [ebp-Ch]
  AircraftClass *v26; // [esp-8h] [ebp-Ch]
  int v33; // [esp-4h] [ebp-8h]
  int v34; // [esp-4h] [ebp-8h]

  esi1 = (TechnoClass *)v2; /*0x6f3f41*/
  v3 = *(HouseClass **)(v2 + 540); /*0x6f3f43*/
  if ( v3 ) /*0x6f3f4b*/
    *(_BYTE *)(v2 + 1050) = (HouseClass *)HouseClass_Player.field_0 == v3; /*0x6f3f55*/
  result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v2 + 132))(); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !esi1->planningToken ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(esi1); /*0x6f3f83*/
    if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3416) ) /*0x6f3f93*/
    {
      v6 = __2_YAPAXI_Z(0x74u); /*0x6f3fa4*/
      if ( v6 ) /*0x6f3fab*/
      {
        v33 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3428); /*0x6f3fbf*/
        v25 = *(AircraftClass **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3424); /*0x6f3fd0*/
        v23 = *(FootClass **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3420); /*0x6f3fe1*/
        v7 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f3fe4*/
        v8 = (void *)SpawnManagerClass::SpawnManagerClass(v6, esi1, *(_DWORD *)(v7 + 3416), (int)v23, (int)v25, v33); /*0x6f3ff4*/
      }
      else
      {
        v8 = 0; /*0x6f3ffb*/
      }
      esi1->captureManager = v8; /*0x6f3ffd*/
    }
    if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3392) ) /*0x6f400d*/
    {
      v9 = __2_YAPAXI_Z(0x64u); /*0x6f401e*/
      if ( v9 ) /*0x6f4025*/
      {
        v34 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3404); /*0x6f4039*/
        v26 = *(AircraftClass **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3400); /*0x6f404a*/
        v24 = *(FootClass **)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3396); /*0x6f405b*/
        v10 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f405e*/
        v11 = SlaveManagerClass::ctor(v9, esi1, *(_DWORD *)(v10 + 3392), (int)v24, (int)v26, v34); /*0x6f406e*/
      }
      else
      {
        v11 = 0; /*0x6f4075*/
      }
      *(_DWORD *)&esi1->mindControlledBy_a_unit = v11; /*0x6f4077*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1, 0) /*0x6f40a2*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(
                                             esi1,
                                             0)
                              + 172)
                  + 341) )
    {
      edi20 = __2_YAPAXI_Z(0x50u); /*0x6f40b3*/
      if ( edi20 ) /*0x6f40ba*/
      {
        LOBYTE(v13) = *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1) /*0x6f40cc*/
                               + 320);
        eax21a = (*(int (__thiscall **)(TechnoClass *, _DWORD, int))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1, 0, v13); /*0x6f40d7*/
        eax21 = (void *)CaptureManagerClass::CaptureManagerClass(edi20, esi1, *(_DWORD *)(*(_DWORD *)eax21a + 164), 0); /*0x6f40e9*/
      }
      else
      {
        eax21 = 0; /*0x6f40f0*/
      }
      esi1->rockerLinkedUnit = eax21; /*0x6f40f2*/
    }
    if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 44))(esi1) != 6 /*0x6f412a*/
      && *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1, 0)
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(
                                             esi1,
                                             0)
                              + 172)
                  + 345) )
    {
      eax27 = __2_YAPAXI_Z(0x58u); /*0x6f4136*/
      if ( eax27 ) /*0x6f4140*/
        v12 = (ParasiteClass *)ParasiteClass::ParasiteClass(eax27, esi1); /*0x6f4145*/
      else
        v12 = 0; /*0x6f414c*/
      esi1[1].radarFlashTimer[1] = (int)v12; /*0x6f414e*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(esi1, 0) /*0x6f4179*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1016))(
                                             esi1,
                                             0)
                              + 172)
                  + 346) )
    {
      v18 = (_DWORD *)__2_YAPAXI_Z(0x50u); /*0x6f4185*/
      if ( v18 ) /*0x6f418f*/
        v14 = (TemporalClass *)TemporalClass::TemporalClass(v18, esi1); /*0x6f4194*/
      else
        v14 = 0; /*0x6f419b*/
      v15 = *(AbstractClass **)esi1->__pad_0; /*0x6f419d*/
      *(_DWORD *)&esi1->__pad_26A[10] = v14; /*0x6f41a3*/
      *(_DWORD *)(*(_DWORD *)&esi1->__pad_26A[10] + 76) = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))&v15[28].__pad_0[8])( /*0x6f41bd*/
                                                                                   esi1,
                                                                                   0)
                                                                    + 164);
    }
    if ( *(int *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 1564) > 0 ) /*0x6f41d2*/
    {
      v21 = __2_YAPAXI_Z(0x60u); /*0x6f41d6*/
      if ( v21 ) /*0x6f41e0*/
        v16 = (AirstrikeClass *)AirstrikeClass::AirstrikeClass(v21, esi1); /*0x6f41e5*/
      else
        v16 = 0; /*0x6f41ec*/
      esi1->owningHouseIndex0 = (int)v16; /*0x6f41ee*/
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3375) /*0x6f4212*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3376) )
    {
      v17 = (HouseClass *)esi1->focus; /*0x6f421c*/
      LOBYTE(esi1->drainAnim) = 1; /*0x6f4222*/
      esi1->isDisguisedFlag_as_house = v17; /*0x6f4229*/
      sideIndex = v17->sideIndex; /*0x6f422f*/
      if ( sideIndex ) /*0x6f4237*/
      {
        if ( sideIndex == 1 ) /*0x6f4250*/
          esi1->disguiseAsType = *(void **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3420); /*0x6f425d*/
        else
          esi1->disguiseAsType = *(void **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3424); /*0x6f4271*/
      }
      else
      {
        esi1->disguiseAsType = *(void **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3416); /*0x6f4245*/
      }
    }
    eax49 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f427b*/
    ecx49 = eax49[809]; /*0x6f4281*/
    eax49 += 809; /*0x6f4287*/
    esi1->barrelRecoil[7] = ecx49; /*0x6f428c*/
    *(_DWORD *)&esi1->isTurretLocked = eax49[1]; /*0x6f4295*/
    *(_DWORD *)&esi1->isDiscoveredByComputer = eax49[2]; /*0x6f429e*/
    *(_DWORD *)&esi1->sightRangeBonus = eax49[3]; /*0x6f42a7*/
    v27 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f42b1*/
    v28 = *(_DWORD *)(v27 + 3256); /*0x6f42b7*/
    result = (_DWORD *)(v27 + 3256); /*0x6f42bd*/
    *(_DWORD *)&esi1->__pad_3F7[1] = v28; /*0x6f42c2*/
    *(_DWORD *)&esi1->__pad_3F7[5] = result[1]; /*0x6f42cb*/
    *(_DWORD *)&esi1->__pad_3F7[9] = result[2]; /*0x6f42d4*/
    *(_DWORD *)&esi1->__pad_3F7[13] = result[3]; /*0x6f42dd*/
    *(_DWORD *)&esi1->__pad_491[11] = 1; /*0x6f42e3*/
    *(_DWORD *)&esi1->__pad_491[15] = 0; /*0x6f42ed*/
  }
  return result; /*0x6f42f7*/
}
}
} // namespace game
} // namespace ra2

// 0x6F4500
namespace ra2 {
namespace game {
int TechnoClass::DTOR()
{
    PlanningTokenClass *v2 = this->planningToken;
    this->vtable3 = 0;
    if ( v2 )
    {
        Sidebar::CancelSidebarProductionQueue(v2);
        this->planningToken = 0;
    }
    CaptureManagerClass *v3 = this->captureManager;
    if ( v3 )
    {
        v3->vtRel32(1);
        this->captureManager = 0;
    }
    SpawnManagerClass *v4 = this->spawnManager;
    if ( v4 )
    {
        v4->vtRel32(1);
        this->spawnManager = 0;
    }
    SlaveManagerClass *v5 = this->slaveManager;
    if ( v5 )
    {
        TechnoClass::MutateAll(v5, 0, 0);
        SlaveManagerClass *v6 = this->slaveManager;
        if ( v6 )
        {
            v6->vtRel32(1);
        }
        this->slaveManager = 0;
    }
    TemporalClass *v7 = this->temporalUsing;
    if ( v7 )
    {
        v7->vtRel248();
        this->temporalUsing = 0;
    }
    AirstrikeClass *v8 = this->airstrike;
    if ( v8 && v8[19] == this )
    {
        v8->vtRel32(1);
        this->airstrike = 0;
    }
    AudioFile::Stop(&this->turretRotateSoundController);
    AudioFileClass::Release(&this->turretRotateSoundController);
    AudioFile::Stop(&this->gattlingSoundController);
    AudioFileClass::Release(&this->gattlingSoundController);
    AudioFile::Stop(&this->unusedGattlingSoundController);
    AudioFileClass::Release(&this->unusedGattlingSoundController);
    AudioFileClass::Release(&this->queuedVoiceSoundController);
    this->owner = 0;
    this->isOwnedByCurrentPlayer = 0;
    TechnoClass* v17 = this;
    TechnoClass_Array;
    int v9 = TechnoClass_Array.FindItemIndex(&v17);
    if ( v9 != -1 )
        FactoryClass::RemoveItem(&TechnoClass_Array, v9);
    TechnoClass* v17b = this;
    DataGlobal_B0F6C8;
    int v10 = DataGlobal_B0F6C8.FindItemIndex(&v17b);
    if ( v10 != -1 )
        DynamicVector::RemoveItem(&DataGlobal_B0F6C8, v10);
    AnimClass *v11 = this->behindAnim;
    if ( v11 )
    {
        v11->vtRel248();
        this->behindAnim = 0;
    }
    AnimClass *v12 = this->deployAnim;
    if ( v12 )
    {
        v12->vtRel248();
        this->deployAnim = 0;
    }
    AbstractClassVector::ddtor(&this->attackedTargets);
    void *v13 = this->vecAbs_Items;
    if ( v13 && this->vecAbs_IsAllocated )
    {
        OperatorDelete(v13);
        this->vecAbs_Items = 0;
    }
    this->vecAbs_IsAllocated = 0;
    this->vecAbs_Capacity = 0;
    void *v14 = this->vecInt_Items;
    if ( v14 && this->vecInt_IsAllocated )
    {
        OperatorDelete(v14);
        this->vecInt_Items = 0;
    }
    this->vecInt_IsAllocated = 0;
    this->vecInt_Capacity = 0;
    void *v15 = this->vecTechno_Items;
    if ( v15 && this->vecTechno_IsAllocated )
    {
        OperatorDelete(v15);
        this->vecTechno_Items = 0;
    }
    this->vecTechno_IsAllocated = 0;
    this->vecTechno_Capacity = 0;
    return ObjectClass::Dtor(this);
}
}
} // namespace game
} // namespace ra2

// 0x702D40
namespace ra2 {
namespace game {
int TechnoClass::RegisterKill()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TechnoClass::RegisterKill(#377 *this)
{
  int v2; // eax
  int v3; // ebp
  void **v4; // ecx
  void **v5; // ecx
  void **v6; // ecx
  void **v7; // ecx
  void **v8; // ecx
  int result; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // [esp-Ch] [ebp-1Ch]
  int v20; // [esp-Ch] [ebp-1Ch]
  int v21; // [esp-Ch] [ebp-1Ch]
  int v22; // [esp-Ch] [ebp-1Ch]
  int v23; // [esp-8h] [ebp-18h]
  int v24; // [esp-8h] [ebp-18h]
  int v25; // [esp-8h] [ebp-18h]
  int v26; // [esp-8h] [ebp-18h]
  int v27; // [esp+Ch] [ebp-4h]
  int v28; // [esp+14h] [ebp+4h]

  v27 = 0; /*0x702d46*/
  v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x702d50*/
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 132))(v2, this->owner); /*0x702d6b*/
  if ( this->isAliveFlag ) /*0x702d6d*/
  {
    v4 = (void **)this->attachedTag; /*0x702d77*/
    if ( v4 ) /*0x702d7c*/
    {
      if ( v28 ) /*0x702d80*/
        TeamClass::Update_0(v4, 6, (AbstractClass *)this, *(IUnknown **)&g_OverlayTypeConfig.__pad_579C[6844], 0, 0); /*0x702d90*/
    }
  }
  if ( this->isAliveFlag ) /*0x702d95*/
  {
    v5 = (void **)this->attachedTag; /*0x702da3*/
    if ( v5 && v28 ) /*0x702dac*/
      TeamClass::Update_0(v5, 4, (AbstractClass *)this, *(IUnknown **)&g_OverlayTypeConfig.__pad_579C[6844], 0, 0); /*0x702dbb*/
    if ( this->isAliveFlag /*0x702dd6*/
      && (*(int (__thiscall **)(#377 *))(this->fallRate)(this) != 1
      && this->isAliveFlag )
    {
      v6 = (void **)this->attachedTag; /*0x702de0*/
      if ( v6 && v28 ) /*0x702de9*/
        TeamClass::Update_0(v6, 7, (AbstractClass *)this, *(IUnknown **)&g_OverlayTypeConfig.__pad_579C[6844], 0, 0); /*0x702df8*/
      if ( this->isAliveFlag ) /*0x702dfd*/
      {
        v7 = (void **)this->attachedTag; /*0x702e07*/
        if ( v7 ) /*0x702e0c*/
          TeamClass::Update_0(v7, 48, (AbstractClass *)this, *(IUnknown **)&g_OverlayTypeConfig.__pad_579C[6844], 0, 0); /*0x702e1c*/
        if ( this->isAliveFlag ) /*0x702e21*/
        {
          v8 = (void **)this->attachedTag; /*0x702e2b*/
          if ( v8 ) /*0x702e30*/
            TeamClass::Update_0(v8, 29, (AbstractClass *)this, *(IUnknown **)&g_OverlayTypeConfig.__pad_579C[6844], 0, 0); /*0x702e3f*/
        }
      }
    }
  }
  result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x702e48*/
  if ( !*(_BYTE *)(result + 3231) )
  {
    if ( v28 )
    {
      if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(v28 + 540), (IUnknown *)this) ) /*0x702e6c*/
      {
        v3 = 0; /*0x702e75*/
      }
      else if ( VeterancyStruct::IsVeteran((float *)this + 84) ) /*0x702e81*/
      {
        v3 *= 2; /*0x702e8a*/
      }
      else if ( VeterancyStruct::IsElite((float *)this + 84) ) /*0x702e90*/
      {
        v3 *= 3; /*0x702e99*/
      }
      if ( *(_BYTE *)(v28 + 130)
        && (v10 = *(_DWORD *)(v28 + 284)) != 0
        && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 132))(v10) + 3214) )
      {
        v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 284) + 132))(*(_DWORD *)(v28 + 284)); /*0x702ecb*/
        v23 = this->owner; /*0x702eda*/
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x702ee9*/
        VeterancyStruct::Accumulate((float *)(*(_DWORD *)(v28 + 284) + 336), v19, v23); /*0x702ef0*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3214) )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28); /*0x702f0d*/
        v24 = this->owner; /*0x702f1c*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 132))(v12); /*0x702f25*/
        VeterancyStruct::Accumulate((float *)(v28 + 336), v20, v24); /*0x702f2c*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 132))(v28) + 3432) )
      {
        v13 = *(_DWORD *)(v28 + 724); /*0x702f45*/
        if ( v13 && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3214) ) /*0x702f5b*/
        {
          v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 724) + 132))(*(_DWORD *)(v28 + 724)); /*0x702f71*/
          v25 = this->owner; /*0x702f80*/
          v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 132))(v14); /*0x702f8f*/
          VeterancyStruct::Accumulate((float *)(*(_DWORD *)(v28 + 724) + 336), v21, v25); /*0x702f96*/
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 1024))(v28)
             && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28) == 6 )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28); /*0x702fb6*/
        v16 = *(_DWORD *)(*(_DWORD *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(_DWORD *)(v15 == 6 ? v28 + 0x69C : 1692));
        v26 = this->owner; /*0x702fda*/
        v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 1728) + 132))(*(_DWORD *)(v16 + 1728)); /*0x702fe9*/
        VeterancyStruct::Accumulate((float *)(v16 + 336), v22, v26); /*0x702ff0*/
      }
      *(_DWORD *)(this->owner + 21644) = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 56))(v28); /*0x703003*/
      *(_DWORD *)(*(_DWORD *)(v28 + 540) + 21736) += v3; /*0x70300f*/
    }
    result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this) - 1; /*0x70301c*/
    switch ( result ) /*0x70302e*/
    {
      case 0: /*0x70302e*/
        goto LABEL_59;
      case 1: /*0x70302e*/
        if ( !v28 ) /*0x7030d5*/
          goto LABEL_63; /*0x7030d5*/
        if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x7030e5*/
        {
          HouseClass::IncrementStat( /*0x703108*/
            (_DWORD *)(*(_DWORD *)(v28 + 540) + 9032),
            *(_DWORD *)(this->q1B1 + 3576));
          v27 = 1; /*0x70310d*/
        }
LABEL_55:
        if ( v28 ) /*0x703117*/
        {
          if ( !v27 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x70312f*/
          {
            HouseClass::IncrementStat( /*0x703152*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 11088),
              *(_DWORD *)(this->airstrikeTimer + 3576));
            v27 = 1; /*0x703157*/
          }
LABEL_59:
          if ( v28 && !v27 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x703175*/
            HouseClass::IncrementStat( /*0x703198*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 13144),
              *(_DWORD *)(this->q1B1 + 3576));
        }
LABEL_63:
        ++*(_DWORD *)(this->owner + 21556); /*0x70319d*/
        if ( v28 ) /*0x7031b2*/
        {
          if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x7031be*/
          {
            v18 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7031d5*/
                           + 4 * (*(int (__thiscall **)(#377 *))(this->attachedBomb)(this)
                           + 21476);
            ++*v18; /*0x7031dc*/
          }
        }
        result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x7031e3*/
        if ( (_BYTE)result ) /*0x7031ea*/
LABEL_67:
          result = RadarClass::SetFlag(&MEMORY[0x87F7E8], 0); /*0x7031ec*/
        break; /*0x7031f3*/
      case 5: /*0x70302e*/
        result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x703039*/
        if ( !*(_BYTE *)(result + 562) ) /*0x70303f*/
        {
          if ( *((_DWORD *)this + 335) != -1 ) /*0x703054*/
            ++*(_DWORD *)(this->owner + 21640); /*0x70305c*/
          if ( v28 && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3231) ) /*0x703070*/
          {
            HouseClass::IncrementStat( /*0x703093*/
              (_DWORD *)(*(_DWORD *)(v28 + 540) + 15200),
              *(_DWORD *)(this->gattlingValue + 3576));
            v17 = (_DWORD *)(*(_DWORD *)(v28 + 540) /*0x7030a5*/
                           + 4 * (*(int (__thiscall **)(#377 *))(this->attachedBomb)(this)
                           + 21560);
            ++*v17; /*0x7030ac*/
          }
          result = RadarClass::IsActiveMode(&MEMORY[0x87F7E8]); /*0x7030b3*/
          if ( (_BYTE)result ) /*0x7030ba*/
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
}
} // namespace game
} // namespace ra2

// 0x705860
namespace ra2 {
namespace game {
int TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
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
  v8 = *(_DWORD *)g_DSurface_Hidden_2; /*0x7058da*/
  v27 = abs32(v32 - v42); /*0x7058dc*/
  result = (*(int (__thiscall **)(int))(v8 + 132))(g_DSurface_Hidden_2); /*0x7058e0*/
  if ( (_BYTE)result ) /*0x7058e8*/
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
      v14 = 255 >> g_BitShift_Green_0 << MEMORY[0x8A0DD0]; /*0x7059c5*/
      v29 = v31 + 1; /*0x7059cc*/
      v25 = v31 - 2; /*0x7059d0*/
      v26 = v32 + 1; /*0x7059d8*/
      v30 = v32 + 1; /*0x7059dc*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x7059eb*/
      v15 = *v10; /*0x7059f2*/
      v25 = v31 - 2; /*0x7059f9*/
      v29 = v31 + 1; /*0x705a01*/
      v26 = v32; /*0x705a05*/
      v30 = v32; /*0x705a09*/
      (*(void (__thiscall **)(int *, int *, int *, int))(v15 + 48))(v10, &v25, &v29, v14); /*0x705a19*/
      v26 = v32 - 1; /*0x705a2e*/
      v30 = v32 + 2; /*0x705a32*/
      v25 = v31 - 1; /*0x705a3a*/
      v29 = v31 - 1; /*0x705a3e*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a4c*/
      v25 = v31; /*0x705a58*/
      v30 = v32 + 2; /*0x705a62*/
      v26 = v32 - 1; /*0x705a66*/
      v29 = v31; /*0x705a72*/
      (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14); /*0x705a7c*/
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
}
} // namespace game
} // namespace ra2

// 0x70D0D0
namespace ra2 {
namespace game {
bool TechnoClass::HasVoiceResponse(int weaponIndex)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall TechnoTypeClass::HasVoiceResponse(TechnoClass *this, int weaponIndex)
{
  HouseClass *v3; // edi
  int v4; // esi

  v3 = (HouseClass *)&this->initialOwner; /*0x70d0d5*/
  if ( !VeterancyStruct::IsVeteran((float *)&this->initialOwner) && !VeterancyStruct::IsElite((float *)v3->__pad_0) ) /*0x70d0e8*/
    return 0; /*0x70d0e8*/
  v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 132))(this); /*0x70d0fd*/
  if ( VeterancyStruct::IsVeteran((float *)v3->__pad_0) && *(_BYTE *)(v4 + weaponIndex + 668) ) /*0x70d10c*/
    return 1; /*0x70d11c*/
  return VeterancyStruct::IsElite((float *)v3->__pad_0) /*0x70d142*/
      && (*(_BYTE *)(v4 + weaponIndex + 668) || *(_BYTE *)(v4 + weaponIndex + 686));
}
}
} // namespace game
} // namespace ra2

// 0x73B140
namespace ra2 {
namespace game {
char TechnoClass::RenderTechnoSHP(int * a0, int * a1, int * a2, HouseClass * aP3, HouseClass * aP4, int a6, int a7, TechnoClass * aP7, TechnoClass * aP8, int a10, int a11)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char TechnoClass::RenderTechnoSHP(
        int *a0,
        int *a1,
        int *a2,
        HouseClass *aP3,
        HouseClass *aP4,
        int a6,
        int a7,
        TechnoClass *aP7,
        TechnoClass *aP8,
        int a10,
        int a11)
{
  TechnoClass *v11; // ecx
  TechnoClass *v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  char v15; // bl
  HouseClass *Array; // edi
  int v17; // edi
  XSurface *SHPFrame; // edi
  XSurface *v18; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v26; // eax
  int eax26a; // eax
  TechnoClass *v27; // [esp-Ch] [ebp-58h]
  TechnoClass *v28; // [esp-Ch] [ebp-58h]
  XSurface *v30; // [esp-8h] [ebp-54h]
  TechnoClass *v31; // [esp-8h] [ebp-54h]
  AbstractClass *_FFFFFFFC; // [esp-4h] [ebp-50h]
  AbstractClass *v32; // [esp-4h] [ebp-50h]
  AbstractClass *v34; // [esp+0h] [ebp-4Ch]
  int v35; // [esp+4h] [ebp-48h]
  int v36; // [esp+14h] [ebp-38h]
  int v37; // [esp+14h] [ebp-38h]
  int v38; // [esp+18h] [ebp-34h] BYREF
  int v39; // [esp+1Ch] [ebp-30h] BYREF
  XSurface aP6; // [esp+20h] [ebp-2Ch] BYREF
  XSurface v41; // [esp+30h] [ebp-1Ch] BYREF
  _BYTE v42[12]; // [esp+40h] [ebp-Ch] BYREF

  v12 = v11; /*0x73b146*/
  v13 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(*(_DWORD *)v11->__pad_0 + 72))(v11, &v39); /*0x73b152*/
  LOWORD(v36) = *v13 / 256; /*0x73b165*/
  HIWORD(v36) = v13[1] / 256; /*0x73b17e*/
  v38 = v36; /*0x73b18b*/
  v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38); /*0x73b190*/
  if ( CellClass::QuickPassable(v14) ) /*0x73b197*/
    aP8 = 0; /*0x73b1a0*/
  v15 = 0; /*0x73b1ae*/
  if ( *(_BYTE *)(v12[1].ironTintTimer[2] + 3606) ) /*0x73b1b0*/
  {
    if ( TechnoClass::CheckTargetCell(v12) && !TechnoClass::ScanNeighborCells(v12) /*0x73b1fb*/
      || (Array = (HouseClass *)Array::Get(v12, 0), *(_DWORD *)&v12[1].hasParachute)
      && Array
      && (*(int (__thiscall **)(HouseClass *))(*(_DWORD *)Array->__pad_0 + 44))(Array) == 6
      && *(_BYTE *)(Array->builtInfantryTypes[126] + 5821) )
    {
      v15 = 1; /*0x73b205*/
    }
  }
  v37 = 0; /*0x73b20f*/
  v17 = 10240; /*0x73b217*/
  switch ( (*(int (__thiscall **)(TechnoClass *, _DWORD, _DWORD))(*(_DWORD *)v12->__pad_0 + 104))(v12, 0, 0) ) /*0x73b225*/
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
      if ( v12->cloakState ) /*0x73b23a*/
        v17 = 10252; /*0x73b249*/
      v37 = TechnoClass::CalcOffsetFacing((int)v12); /*0x73b255*/
      break; /*0x73b255*/
    default:
      break;
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 468))(v12) /*0x73b26b*/
    || (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 472))(v12) )
  {
    v17 |= 4u; /*0x73b275*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v12->focus) /*0x73b28b*/
    && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 196))(v12) )
  {
    v17 = (*(int (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v12->__pad_0 + 1084))(v12, v17); /*0x73b2a0*/
  }
  SHPFrame = (XSurface *)BuildingClass::GetSHPFrame( /*0x73b2d3*/
                           *(_DWORD **)(*(_DWORD *)(stru_B05488.field_4C + 4 * *((_DWORD *)v12->focus + 22549)) + 780),
                           (ConvertClass *)v17);
  aP6.LockCount = (int)a1 + *(_DWORD *)::aP6.__pad_0 - 128; /*0x73b2dd*/
  *(_DWORD *)v41.__pad_0 = (char *)a2 + ::aP6.Width - 128; /*0x73b2eb*/
  v41.Width = ::aP6.Height; /*0x73b2f6*/
  v41.Height = ::aP6.LockCount; /*0x73b2fa*/
  if ( v15 && ::aP6.LockCount > 16 ) /*0x73b307*/
  {
    v18 = (XSurface *)aP7; /*0x73b30d*/
    v39 = *(_DWORD *)::aP6.__pad_0; /*0x73b311*/
    aP6.Width = ::aP6.Height; /*0x73b319*/
    v41.Height = ::aP6.LockCount - 16; /*0x73b329*/
    aP6.Height = ::aP6.LockCount - 16; /*0x73b32d*/
    v20 = *(_DWORD *)v12->__pad_0; /*0x73b331*/
    _FFFFFFFC = (AbstractClass *)aP8; /*0x73b333*/
    *(_DWORD *)aP6.__pad_0 = ::aP6.Width; /*0x73b339*/
    v30 = (XSurface *)((*(int (__thiscall **)(TechnoClass *, _DWORD, TechnoClass *))(v20 + 748))(v12, 0, aP7) - 5); /*0x73b34a*/
    v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b35a*/
    BlitterCopySHP( /*0x73b377*/
      (XSurface *)a1,
      (XSurface *)&aP4,
      &v41,
      *(XSurface **)&stru_87C374.__pad_579C[22532],
      v21,
      (XSurface *)&v42[4],
      (XSurface *)&aP6.Width,
      SHPFrame,
      v30,
      (int)_FFFFFFFC,
      v37,
      v35);
    v22 = v41.LockCount + v41.Width; /*0x73b388*/
    v23 = v41.LockCount + aP6.Width; /*0x73b38a*/
    v41.LockCount = 16; /*0x73b391*/
    aP6.LockCount = 16; /*0x73b395*/
    v41.Width = v22; /*0x73b39d*/
    aP6.Width = v23; /*0x73b3a6*/
    v34 = (AbstractClass *)a10; /*0x73b3ac*/
    v27 = (TechnoClass *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 748))(v12); /*0x73b3be*/
    v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b3cc*/
    return BlitterCopySHP( /*0x73b3e5*/
             (XSurface *)a1,
             (XSurface *)&aP3,
             (XSurface *)&aP6.LockCount,
             *(XSurface **)&stru_87C374.__pad_579C[22532],
             v24,
             (XSurface *)v42,
             &aP6,
             SHPFrame,
             (XSurface *)v27,
             2,
             (int)v18,
             (int)v34);
  }
  else
  {
    v32 = (AbstractClass *)aP8; /*0x73b403*/
    v31 = aP7; /*0x73b404*/
    v26 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 752))(v12); /*0x73b407*/
    v28 = (TechnoClass *)(*(int (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v12->__pad_0 + 748))(v12, v26); /*0x73b41e*/
    eax26a = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b42c*/
    return BlitterCopySHP( /*0x73b446*/
             (XSurface *)a0,
             (XSurface *)&aP3,
             (XSurface *)&aP6.LockCount,
             *(XSurface **)&stru_87C374.__pad_579C[22532],
             eax26a,
             (XSurface *)v42,
             &::aP6,
             SHPFrame,
             (XSurface *)v28,
             (int)v31,
             (int)v32,
             v37);
  }
}
}
} // namespace game
} // namespace ra2

// 0x73B470
namespace gamemd {
int TechnoClass_DrawVoxel()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge TechnoClass::DrawVoxel@<eax>(
        _DWORD *ecx0@<ecx>,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        BuildingTypeClass *started,
        int a8,
        int a9)
{
  int v10; // ebx
  int v11; // edx
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  const void *v15; // eax
  ObjectClass *v16; // eax
  int v17; // esi
  int v18; // edi
  float *v19; // eax
  int v20; // edi
  float *inited; // eax
  TechnoClass *v22; // esi
  unsigned int v23; // esi
  double v24; // st7
  int v25; // edi
  float *v26; // eax
  float *v27; // eax
  int v28; // eax
  int v29; // ecx
  size_t v30; // eax
  size_t v31; // eax
  bool v32; // al
  ParticleSystemClass *v33; // esi
  float *v34; // eax
  float *v35; // eax
  ObjectClass *v36; // esi
  TechnoClass *v37; // edi
  BuildingTypeClass *v38; // edi
  TechnoClass *v39; // esi
  __int16 v40; // ax
  int v41; // edi
  int *v42; // eax
  BuildingTypeClass *v43; // eax
  int v44; // edx
  BuildingTypeClass *v45; // esi
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // edx
  int v50; // ecx
  int v51; // esi
  int v52; // esi
  int v53; // esi
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  int v59; // eax
  int v60; // edx
  int v61; // ecx
  AbstractClass *v62; // esi
  ObjectClass *v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  const void *v67; // eax
  int *v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // edi
  VectorClass *v72; // esi
  void *v73; // eax
  int v74; // eax
  int v75; // eax
  bool v76; // cc
  int v77; // eax
  int v78; // esi
  int v79; // eax
  float *v80; // eax
  int v81; // esi
  int v82; // eax
  float *v83; // eax
  float *v85; // [esp+E4h] [ebp-1D8h]
  float *v86; // [esp+E4h] [ebp-1D8h]
  float *v87; // [esp+E8h] [ebp-1D4h]
  float *v88; // [esp+E8h] [ebp-1D4h]
  BuildingTypeClass *v89; // [esp+ECh] [ebp-1D0h]
  BuildingTypeClass *v90; // [esp+ECh] [ebp-1D0h]
  int v91; // [esp+ECh] [ebp-1D0h]
  int v92; // [esp+ECh] [ebp-1D0h]
  int v93; // [esp+F0h] [ebp-1CCh]
  int v94; // [esp+F0h] [ebp-1CCh]
  float aP1; // [esp+F4h] [ebp-1C8h]
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
  char v106; // [esp+109h] [ebp-1B3h]
  char v107; // [esp+109h] [ebp-1B3h]
  unsigned __int8 v108; // [esp+109h] [ebp-1B3h]
  unsigned __int8 v109; // [esp+109h] [ebp-1B3h]
  char v110; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v111; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v112; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v113; // [esp+10Bh] [ebp-1B1h]
  unsigned __int8 v114; // [esp+10Bh] [ebp-1B1h]
  TechnoClass *aP3; // [esp+10Ch] [ebp-1B0h] BYREF
  ObjectClass *v116; // [esp+110h] [ebp-1ACh] BYREF
  int v117; // [esp+114h] [ebp-1A8h] BYREF
  double v118; // [esp+118h] [ebp-1A4h] BYREF
  float v119; // [esp+120h] [ebp-19Ch]
  TechnoClass *v120; // [esp+124h] [ebp-198h]
  __int64 v121; // [esp+128h] [ebp-194h] BYREF
  int v122; // [esp+130h] [ebp-18Ch] BYREF
  double v123; // [esp+134h] [ebp-188h] BYREF
  float v124; // [esp+13Ch] [ebp-180h]
  int v125; // [esp+144h] [ebp-178h]
  int v126; // [esp+148h] [ebp-174h] BYREF
  int v127; // [esp+14Ch] [ebp-170h]
  int v128; // [esp+150h] [ebp-16Ch]
  int v129; // [esp+154h] [ebp-168h]
  int v130; // [esp+158h] [ebp-164h] BYREF
  int v131; // [esp+15Ch] [ebp-160h]
  int v132; // [esp+160h] [ebp-15Ch] BYREF
  int v133; // [esp+164h] [ebp-158h] BYREF
  _DWORD a1[2]; // [esp+168h] [ebp-154h] BYREF
  int GroundHeight; // [esp+170h] [ebp-14Ch]
  float v136; // [esp+174h] [ebp-148h] BYREF
  float v137; // [esp+178h] [ebp-144h]
  float v138; // [esp+17Ch] [ebp-140h]
  int v139; // [esp+180h] [ebp-13Ch]
  int v140; // [esp+184h] [ebp-138h]
  AbstractClass *v141; // [esp+188h] [ebp-134h]
  float v142[12]; // [esp+18Ch] [ebp-130h] BYREF
  _DWORD v143[4]; // [esp+1BCh] [ebp-100h] BYREF
  _BYTE v144[48]; // [esp+1CCh] [ebp-F0h] BYREF
  float v145[12]; // [esp+1FCh] [ebp-C0h] BYREF
  _BYTE v146[48]; // [esp+22Ch] [ebp-90h] BYREF
  float v147[12]; // [esp+25Ch] [ebp-60h] BYREF
  float v148[12]; // [esp+28Ch] [ebp-30h] BYREF

  v121 = a2;
  v10 = ecx0[433];
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*ecx0 + 1088))(ecx0, HouseClass_Player.field_0) )
    v10 = (*(int (__thiscall **)(_DWORD *, int))(*ecx0 + 204))(ecx0, 1);
  if ( *((_BYTE *)ecx0 + 1760) && *(_DWORD *)(ecx0[433] + 1720) )
    v10 = *(_DWORD *)(ecx0[433] + 1720);
  v11 = ecx0[334] % *(_DWORD *)(*(_DWORD *)(v10 + 180) + 8);
  v122 = 0;
  v125 = v11;
  if ( !v11 )
  {
    v12 = *(_DWORD *)(v10 + 188);
    if ( !v12 )
      goto LABEL_10;
    v11 = ecx0[82] % *(_DWORD *)(v12 + 8);
  }
  v122 = v11;
LABEL_10:
  v131 = a4;
  v130 = a3;
  v141 = *(AbstractClass **)&stru_87C374.__pad_579C[22532];
  v132 = a5;
  v133 = a6;
  v121 = 0x8000000080LL;
  aP3 = 0;
  *(_DWORD *)&stru_87C374.__pad_579C[22532] = dword_B1D13C;
  v13 = (int *)(*(int (__thiscall **)(_DWORD *, float *))(*dword_B1D13C + 120))(dword_B1D13C, &v136);
  v130 = *v13;
  v131 = v13[1];
  v132 = v13[2];
  v14 = v13[3];
  *((_BYTE *)ecx0 + 1747) = 1;
  v133 = v14;
  aP3 = (TechnoClass *)((stru_87C374.__pad_579C[22792] != 0) - 1);
  if ( !ecx0[413] )
    WinAPI::Wrapper(-2147467261);
  v15 = (const void *)(*(int (__stdcall **)(_DWORD, float *, TechnoClass **))(*(_DWORD *)ecx0[413] + 36))(
                        ecx0[413],
                        v145,
                        &aP3);
  Transform::Copy(v144, v15);
  v16 = (ObjectClass *)aP3;
  qmemcpy(v142, v144, sizeof(v142));
  v17 = v125;
  if ( aP3 != (TechnoClass *)-1 )
  {
    v16 = (ObjectClass *)(v125 & 0x1F | (32 * (_DWORD)aP3));
    aP3 = (TechnoClass *)v16;
  }
  v126 = v130;
  v140 = ((int)v16 >> 5) & 0x3FF;
  v128 = v132;
  v127 = v131;
  v129 = v133;
  *(_DWORD *)aP6.__pad_0 = xmmword_B1CFA8;
  aP6.Width = DWORD1(xmmword_B1CFA8);
  aP6.Height = DWORD2(xmmword_B1CFA8);
  aP6.LockCount = HIDWORD(xmmword_B1CFA8);
  if ( !*(_BYTE *)(ecx0[433] + 488) || SpawnManagerClass::CountDockedSpawns((int *)ecx0[180]) )
  {
    v20 = *ecx0;
    v90 = started;
    inited = (float *)AudioConfig::InitDefault(v144);
    v88 = MultiplyMatrix3x4((ObjectClass *)v145, inited, v142);
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, float *, BuildingTypeClass *, int, _DWORD))(v20 + 1296))(
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
    v18 = *ecx0;
    v19 = (float *)AudioConfig::InitDefault(v144);
    v87 = MultiplyMatrix3x4((ObjectClass *)v145, v19, v142);
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, float *, BuildingTypeClass *, int, _DWORD))(v18 + 1296))(
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
    v23 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v116) >> 10) + 1) >> 1) & 0x1F
        | (unsigned int)v22 & 0xFFFFFFE0;
    if ( !*(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*ecx0 + 132))(ecx0) + 1824) )
      v23 &= 0xFFFFFC1F;
    v22 = (TechnoClass *)(((unsigned __int8)v122 << 16) | v23);
    v120 = v22;
  }
  if ( !*(_BYTE *)(v10 + 3233) && (!TechnoClass::OwnerHasPower(ecx0) || !TechnoClass::checkEMPState(ecx0)) )
  {
    if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
    {
      v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 440, (IUnknown *)&v117) >> 10)
                                            + 1) >> 1)
                            & 0x1F)
                           - 8);
      v24 = (double)(int)v116 * -0.1963495408493621;
      v118 = v24;
      TechnoClass::CalcFacingFromMatrix((IUnknown *)v142);
      aP1 = -(v118 - v24);
      ((void (__thiscall *)(float *, float))Matrix3D::RotateZ)(v142, aP1);
      aP1a = (double)*(int *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*ecx0 + 1016))(ecx0, 0) + 12) * unk_B1D008;
      aP1b = (double)*(int *)((*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*ecx0 + 1016))(
                                ecx0,
                                0,
                                0,
                                LODWORD(aP1a))
                            + 4)
           * unk_B1D008;
      Vector::MatrixMulVectorMath(&v142[2], aP1b, aP1_4, v104);
      v25 = *ecx0;
      v104 = 0.0;
      aP1_4 = 0.0;
      aP1c = a9;
      v26 = (float *)AudioConfig::InitDefault(&v144[8]);
      v27 = MultiplyMatrix3x4((ObjectClass *)&v145[2], v26, &v142[2]);
      (*(void (__thiscall **)(_DWORD *, int, int, _DWORD, int, int *, int *, float *, int))(v25 + 1296))(
        ecx0,
        v10 + 192,
        v127,
        HIDWORD(v121),
        v10 + 640,
        &v132,
        &v122,
        v27,
        aP1c);
    }
    goto LABEL_81;
  }
  v117 = 0;
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(_BYTE *)(ecx0[433] + 3285) )
  {
    if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
    {
      v110 = 1;
      goto LABEL_37;
    }
LABEL_36:
    v110 = 0;
    goto LABEL_37;
  }
  v28 = TechnoClass::applyEMPulseDamage(ecx0);
  v117 = v28;
  v22 = (TechnoClass *)((v28 << 24) | (unsigned int)v22);
  v29 = *(_DWORD *)(v10 + 8 * v28 + 344);
  v120 = v22;
  if ( !v29 || !*(_DWORD *)(v10 + 8 * v28 + 348) )
    goto LABEL_36;
  v110 = 1;
LABEL_37:
  v116 = (ObjectClass *)v22;
  if ( v22 == (TechnoClass *)-1 || v10 == -600 )
  {
    v105 = 0;
    goto LABEL_46;
  }
  if ( !*(_DWORD *)(v10 + 604) )
    goto LABEL_44;
  if ( !TechnoClass::processIronCurtainExpiry((_DWORD *)(v10 + 600), (IUnknown *)&v116) )
  {
    v30 = SortedStateVector::BinarySearch((char **)(v10 + 600), (IUnknown *)&v116);
    if ( v30 )
    {
      *(_DWORD *)(v10 + 616) = v30;
      goto LABEL_43;
    }
LABEL_44:
    v105 = unk_B78824 != 0;
    goto LABEL_46;
  }
LABEL_43:
  v105 = *(_DWORD *)(*(_DWORD *)(v10 + 616) + 4) != 0;
LABEL_46:
  if ( !v110 || (v116 = (ObjectClass *)v22, v22 == (TechnoClass *)-1) || v10 == -640 )
  {
    v32 = 0;
    goto LABEL_56;
  }
  if ( !*(_DWORD *)(v10 + 644) )
    goto LABEL_54;
  if ( !TechnoClass::processIronCurtainExpiry((_DWORD *)(v10 + 640), (IUnknown *)&v116) )
  {
    v31 = SortedStateVector::BinarySearch((char **)(v10 + 640), (IUnknown *)&v116);
    if ( v31 )
    {
      *(_DWORD *)(v10 + 656) = v31;
      goto LABEL_53;
    }
LABEL_54:
    v32 = unk_B78824 != 0;
    goto LABEL_56;
  }
LABEL_53:
  v32 = *(_DWORD *)(*(_DWORD *)(v10 + 656) + 4) != 0;
LABEL_56:
  if ( v105 && (!v110 || v32) )
  {
    qmemcpy(v144, v142, sizeof(v144));
    v33 = (ParticleSystemClass *)v142;
  }
  else
  {
    aP1d = (double)*(int *)(v10 + 1824) * unk_B1D008;
    Matrix3x4::Translate(v142, (ParticleSystemClass *)LODWORD(aP1d));
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    v123 = (double)(int)v116 * -0.1963495408493621;
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 452, (IUnknown *)&v118) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    aP1e = v123 - (double)(int)v116 * -0.1963495408493621;
    ((void (__thiscall *)(float *, float))Matrix2D::Rotate)(v142, aP1e);
    *(float *)&v118 = -v142[3];
    v137 = v142[7];
    qmemcpy(v145, v142, sizeof(v145));
    v138 = v142[11];
    *((float *)&v118 + 1) = -v142[7];
    v136 = v142[3];
    v123 = v118;
    v119 = -v142[11];
    v124 = v119;
    Matrix3x3::Multiply(v145, (float *)&v123);
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 440, (IUnknown *)&v118) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    aP1f = -((double)(int)v116 * -0.1963495408493621);
    ((void (__thiscall *)(float *, float))Matrix3D::RotateZ)(v145, aP1f);
    Matrix3x3::Multiply(v145, &v136);
    v34 = (float *)AudioConfig::InitDefault(v148);
    qmemcpy(v144, MultiplyMatrix3x4((ObjectClass *)v147, v34, v142), sizeof(v144));
    v35 = (float *)AudioConfig::InitDefault(v147);
    v33 = (ParticleSystemClass *)MultiplyMatrix3x4((ObjectClass *)v148, v35, v145);
  }
  qmemcpy(v146, v33, sizeof(v146));
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(_BYTE *)(ecx0[433] + 3285) )
  {
    if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v107 = 0;
      if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
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
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
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
    if ( v107 && *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
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
    if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v106 = 0;
      if ( v110 )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
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
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
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
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
        ecx0,
        v10 + 8 * (_DWORD)v36 + 344,
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
  v40 = *((_WORD *)ecx0 + 485);
  v128 = a5;
  v126 = a3;
  v129 = a6;
  if ( v40 <= 0 )
  {
    if ( *((_BYTE *)ecx0 + 973) )
      *((_WORD *)ecx0 + 485) = LOWORD(aP6.LockCount)
                             + WORD2(a2)
                             + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180)
                             + LOWORD(aP6.Width)
                             - 128;
  }
  else
  {
    v41 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180);
    v136 = 0.0;
    v139 = v40 - v41;
    v137 = 0.0;
    v138 = *(float *)&stru_87C374.__pad_579C[21656];
    v42 = ClipRectIntersection((IUnknown *)&v123, (IUnknown *)&v126, (IUnknown *)&v136, 0, 0);
    v126 = *v42;
    v127 = v42[1];
    v128 = v42[2];
    v129 = v42[3];
  }
  v43 = (BuildingTypeClass *)(*(int (__thiscall **)(_DWORD *, BuildingTypeClass *))(*ecx0 + 1124))(ecx0, started);
  v44 = *ecx0;
  v45 = v43;
  started = v43;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v44 + 352))(ecx0, LODWORD(aP1_4), LODWORD(v104)) )
  {
    started = Techno::StartInvulnerability(ecx0, v45);
    v46 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6312);
    v47 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2 * v46;
    v113 = *(_BYTE *)(v46 + v47 + 6260);
    v111 = *(_BYTE *)(v46 + v47 + 4174 + 2087);
    v108 = *(_BYTE *)(v46 + v47 + 6262);
    v48 = DDraw::GetStatus() - 1;
    if ( v48 )
    {
      if ( --v48 )
      {
        v52 = a8;
        goto LABEL_92;
      }
      LOWORD(v50) = v113;
      LOWORD(v49) = v111;
      v50 = v108 | (32 * (v49 | (v50 << 6)));
      v51 = v50 | a8;
    }
    else
    {
      v51 = a8;
    }
    LOWORD(v48) = v113;
    LOWORD(v49) = v111 >> 1;
    LOWORD(v50) = v108;
    v48 *= 32;
    v49 = v50 | ((v48 | v49) << 6);
    v52 = v49 | v51;
LABEL_92:
    LOWORD(v50) = v108;
    LOWORD(v49) = v111 >> 1;
    LOWORD(v48) = v113;
    v53 = v50 | (32 * ((32 * v48) | v49)) | v52;
    goto LABEL_94;
  }
  v53 = a8;
LABEL_94:
  if ( !*((_BYTE *)ecx0 + 664) )
    goto LABEL_102;
  v54 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6316);
  v55 = v54 + *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2 * v54;
  v114 = *(_BYTE *)(v55 + 6260);
  v112 = *(_BYTE *)(v55 + 6262);
  v109 = *(_BYTE *)(v54 + *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2 * v54 + 4174 + 2087);
  v56 = DDraw::GetStatus() - 1;
  if ( v56 )
  {
    v59 = v56 - 1;
    if ( v59 )
    {
      LOBYTE(v59) = v109;
      goto LABEL_101;
    }
    LOWORD(v57) = v114;
    v59 = v109;
    LOWORD(v58) = v109;
    v60 = v58 | (v57 << 6);
    LOWORD(v58) = v112;
    v57 = v58 | (32 * v60);
    v53 |= v57;
  }
  else
  {
    v59 = v109;
  }
  LOWORD(v58) = (unsigned __int8)v59 >> 1;
  LOWORD(v57) = v114;
  v57 *= 32;
  v61 = v57 | v58;
  LOWORD(v57) = v112;
  v58 = v57 | (v61 << 6);
  v53 |= v58;
LABEL_101:
  LOWORD(v58) = v114;
  LOWORD(v57) = v112;
  LOWORD(v59) = (unsigned __int8)v59 >> 1;
  v53 |= v57 | (32 * ((32 * v58) | v59));
LABEL_102:
  if ( UnitClass::IsDeactivated(ecx0) )
    started = (BuildingTypeClass *)((int)started / 2);
  aP1g = v53;
  v62 = v141;
  (*(void (__thiscall **)(_DWORD *, AbstractClass *, _DWORD, _DWORD, int, int, int, int, BuildingTypeClass *, int))(*ecx0 + 1372))(
    ecx0,
    v141,
    a2,
    HIDWORD(a2),
    v126,
    v127,
    v128,
    v129,
    started,
    aP1g);
  v143[1] = aP6.Width;
  v63 = *(ObjectClass **)&stru_87C374.__pad_579C[22532];
  *(_DWORD *)&stru_87C374.__pad_579C[22532] = v62;
  v116 = v63;
  LOBYTE(v63) = *((_BYTE *)ecx0 + 973);
  v143[0] = *(_DWORD *)aP6.__pad_0;
  v143[2] = aP6.Height;
  v143[3] = aP6.LockCount;
  *((_BYTE *)ecx0 + 1747) = 0;
  if ( !(_BYTE)v63 )
  {
    v64 = ecx0[433];
    v118 = *(double *)&a2;
    if ( *(_BYTE *)(v64 + 3434) || (v65 = *(_DWORD *)(v64 + 1660), v65 == 1) || v65 == 2 )
    {
      aP3 = (TechnoClass *)v140;
    }
    else
    {
      aP3 = (TechnoClass *)(32 * v140);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      v66 = (*(int (__stdcall **)(_DWORD, double *))(*(_DWORD *)ecx0[413] + 48))(ecx0[413], &v123);
      aP3 = (TechnoClass *)(((unsigned __int8)*(_DWORD *)(v66 + 4) - 16) & 0x1F | (unsigned int)aP3);
    }
    if ( !ecx0[413] )
      WinAPI::Wrapper(-2147467261);
    v67 = (const void *)(*(int (__stdcall **)(_DWORD, float *, TechnoClass **))(*(_DWORD *)ecx0[413] + 40))(
                          ecx0[413],
                          v147,
                          &aP3);
    Transform::Copy(v144, v67);
    qmemcpy(v142, v144, sizeof(v142));
    if ( *(_BYTE *)(v10 + 3367) )
    {
      a1[0] = ecx0[39];
      a1[1] = ecx0[40];
      GroundHeight = ecx0[41];
      GroundHeight = Cell::GetGroundHeight((IUnknown *)a1);
      Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v118);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      v68 = (int *)(*(int (__stdcall **)(_DWORD, double *))(*(_DWORD *)ecx0[413] + 48))(ecx0[413], &v123);
      v69 = *v68;
      v70 = v68[1];
      LODWORD(v118) += v69;
      HIDWORD(v118) += v70;
    }
    if ( *((_BYTE *)ecx0 + 1060) )
      HIDWORD(v118) -= 14;
    v71 = (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0);
    v136 = *((float *)ecx0 + 39);
    v137 = *((float *)ecx0 + 40);
    v138 = *((float *)ecx0 + 41);
    v72 = (VectorClass *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v136);
    if ( *((_BYTE *)ecx0 + 1060) )
    {
      if ( !*((_BYTE *)ecx0 + 140) && v71 >= unk_B1D0AC )
      {
        v73 = v72[20].vtable0;
        if ( ((unsigned __int16)v73 & 0x100) != 0
          && ((BYTE1(v73) & 8) != 0 && (*((_DWORD *)Cell::GetNeighbourContent(v72, 0) + 80) & 0x100) != 0
           || ((int)v72[20].vtable0 & 0x800) == 0 && (*((_DWORD *)Cell::GetNeighbourContent(v72, 6u) + 80) & 0x100) != 0) )
        {
          HIDWORD(v118) -= 60;
        }
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*ecx0 + 84))(ecx0) )
    {
      v117 = 0;
    }
    else
    {
      v74 = ecx0[433];
      v117 = (int)v116;
      if ( *(_BYTE *)(v74 + 3434) || (v75 = *(_DWORD *)(v74 + 1660), v75 == 1) || v75 == 2 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0) > 0 )
          aP3 = (TechnoClass *)-1;
        else
          aP3 = (TechnoClass *)((unsigned int)aP3 | 0x80000000);
      }
    }
    v76 = (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0) <= 0;
    v77 = ecx0[413];
    if ( v76 )
    {
      if ( !v77 )
        WinAPI::Wrapper(-2147467261);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      v81 = ecx0[413];
      v82 = (*(int (__stdcall **)(int))(*(_DWORD *)v81 + 48))(v81);
      v94 = *(_DWORD *)(*(int (__stdcall **)(int, int *, _DWORD))(*(_DWORD *)v81 + 48))(
                         v81,
                         &v133,
                         *(_DWORD *)(v82 + 4));
      v92 = v117;
      v83 = (float *)AudioConfig::InitDefault(v147);
      v86 = MultiplyMatrix3x4((ObjectClass *)v148, v83, v142);
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (_BYTE **)(v10 + 176),
        *(_DWORD *)(v10 + 2044),
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
      v78 = ecx0[413];
      v79 = (*(int (__stdcall **)(int))(*(_DWORD *)v78 + 48))(v78);
      v93 = *(_DWORD *)(*(int (__stdcall **)(int, int *, int))(*(_DWORD *)v78 + 48))(
                         v78,
                         &v133,
                         *(_DWORD *)(v79 + 4) + 1);
      v91 = v117;
      v80 = (float *)AudioConfig::InitDefault(v147);
      v85 = MultiplyMatrix3x4((ObjectClass *)v148, v80, v142);
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (_BYTE **)(v10 + 176),
        *(_DWORD *)(v10 + 2044),
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
  return (*(int (__thiscall **)(ObjectClass *, _DWORD *, _DWORD))(*(_DWORD *)v116->__pad_0 + 20))(v116, v143, 0);
}
}
} // namespace gamemd

// 0x41B7D0
namespace ra2 {
namespace game {
BOOL TechnoClass::processDamageAnimation(int a1)
{
{
    return *(int *)(a1 - 1448) != 0;
}
}
} // namespace game
} // namespace ra2

// 0x41B840
namespace ra2 {
namespace game {
BOOL TechnoClass::updateWeaponCooldown(int a1)
{
{
    return *(char *)(*(int *)(a1 + 4) + 3598) != 0;
}
}
} // namespace game
} // namespace ra2

// 0x41B860
namespace ra2 {
namespace game {
int TechnoClass::checkAmmo(AircraftClass * aP0)
{
{
    return BYTE2(aP0->uniqueId);
}
}
} // namespace game
} // namespace ra2

// 0x4722D0
namespace ra2 {
namespace game {
int TechnoClass::processPowerDrain()
{
{
    return this->attachedTag;
}
}
} // namespace game
} // namespace ra2

// 0x4C2BD0
namespace ra2 {
namespace game {
void TechnoClass::updateSightRange(IUnknown * aP1, int a3)
{
{
    if ( aP1 && (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) == 1 && aP1->__pad_8C[4] && !aP1->__pad_68[25] )
  {
    this->needsSave = aP1;
    this->objectTypeFlags = a3;
  }
}
}
} // namespace game
} // namespace ra2

// 0x703CC0
namespace ra2 {
namespace game {
char TechnoClass::ScanAdjacentCells()
{
{
    int *v2;
    int *v3;
    int *v4;
    int *v5;
    int *v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    v12 = *(int *)this->GetCellCoords_Alt(&v16);
    v2 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v12);
    if ( !v2 || this->onBridge )
    return 0;
    LOWORD(v13) = v12 + g_DirectionOffsetPool;
    HIWORD(v13) = HIWORD(v12) + HIWORD(g_DirectionOffsetPool);
    v14 = v13;
    v3 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v14);
    HIWORD(v13) = HIWORD(v12) + HIWORD(Direction_X_Offsets[0]);
    LOWORD(v13) = v12 + LOWORD(Direction_X_Offsets[0]);
    v15 = v13;
    v4 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v15);
    HIWORD(v13) = HIWORD(v12) + HIWORD(g_CellDirectionOffsets);
    LOWORD(v13) = v12 + g_CellDirectionOffsets;
    v16 = v13;
    v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v16);
    LOWORD(v13) = v12 + Direction_Y_Offsets;
    HIWORD(v13) = HIWORD(v12) + HIWORD(Direction_Y_Offsets);
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v13);
    if ( (v2[80] & 0x400) != 0 )
    return 1;
    if ( v3 )
  {
    v7 = v3[80];
    if ( (v7 & 0x400) != 0 && (v7 & 0x800) != 0 )
    return 1;
  }
    if ( v6 )
  {
    v8 = v6[80];
    if ( (v8 & 0x400) != 0 && (v8 & 0x800) == 0 )
    return 1;
  }
    if ( v5 )
  {
    v9 = v5[80];
    if ( (v9 & 0x400) != 0 && (v9 & 0x800) == 0 )
    return 1;
  }
    if ( v4 && (v10 = v4[80], (v10 & 0x400) != 0) && (v10 & 0x800) != 0 )
    return 1;
    else
    return 0;
}
}
} // namespace game
} // namespace ra2

// 0x709A20
namespace ra2 {
namespace game {
int TechnoClass::COMStub_Return0_287()
{
{
    int result;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x70F020
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse5()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x70F030
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse6()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x70F040
namespace ra2 {
namespace game {
int TechnoClass::checkMovementRestrictions()
{
return -1;
}
} // namespace game
} // namespace ra2

// 0x70F0E0
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse7()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x70F0F0
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse8()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x70F110
namespace ra2 {
namespace game {
int TechnoClass::StubReturnFalse9()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x731CF0
namespace ra2 {
namespace game {
void TechnoClass::GetField()
{
{
    DataGlobal_B0FE58 = 0;
}
}
} // namespace game
} // namespace ra2
