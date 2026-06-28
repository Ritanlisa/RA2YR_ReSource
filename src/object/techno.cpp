#include "object/techno.hpp"
#include "structure/building.hpp"
#include "type/building_type.hpp"

#include <cstring>

namespace ra2 {
namespace game {

extern int& CurrentFrame;

TechnoClass::TechnoClass() noexcept
    : transporter(nullptr)
    , turretChargeTimer(0)
    , currentTurretNumber(0)
    , secondaryTurretIndex(0)
    , behindAnim(nullptr)
    , deployAnim(nullptr)
    , inAirFlag(false)
    , currentWeaponSlot(0)
    , currentRank(-1)
    , gattlingStage(0)
    , gattlingValue(0)
    , ammoReloadTimer(0)
    , initialOwner(nullptr)
    , armorMultiplier(1.0)
    , firepowerMultiplier(1.0)
    , ironTintStage(0)
    , airstrikeTintStage(0)
    , forceShielded(0)
    , isDeactivated(false)
    , drainTarget(nullptr)
    , drainingMe(nullptr)
    , drainAnim(nullptr)
    , isDisguisedFlag(false)
    , disguiseCreationFrame(0)
    , isTargetedByChrono(false)
    , currentBurstCount(0)
    , currentBarrelIndex(0)
    , Owner(nullptr)
    , focus(nullptr)
    , owner(nullptr)
    , cloakState(0)
    , warpFactor(0.0f)
    , isChronosphereImmune(false)
    , lastSightCoords{}
    , lastSightRange(0)
    , lastSightHeight(0)
    , gapSuperCharged(false)
    , isGeneratingGap(false)
    , gapRadius(0)
    , isBeingWarpedOut(false)
    , isWarpingOut(false)
    , isWarpEffectActive(false)
    , unusedField273(0)
    , temporalUsing(nullptr)
    , temporalTargetingMe(nullptr)
    , isImmobilized(false)
    , owningHouseIndex0(0)
    , chronoLockRemaining(0)
    , chronoDestCoords{}
    , airstrike(nullptr)
    , isBerserk(false)
    , isBerserk_duration_left(0)
    , sprayOffsetIndex(0)
    , isUncrushable(false)
    , rockerLinkedUnit(nullptr)
    , locomotorTarget(nullptr)
    , locomotorSource(nullptr)
    , target(nullptr)
    , lastTarget(nullptr)
    , captureManager(nullptr)
    , mindControlledBy(nullptr)
    , mindControlledBy_a_unit(false)
    , mindControlRingAnim(nullptr)
    , mindControlledBy_house(nullptr)
    , spawnManager(nullptr)
    , spawnOwner(nullptr)
    , slaveManager(nullptr)
    , slaveOwner(nullptr)
    , originalOwnerHouse(nullptr)
    , bunkerLinkedUnit(nullptr)
    , pitchAngle(0.0f)
    , diskLaserChargeState(0)
    , ammo(0)
    , unitValue(0)
    , fireParticles(nullptr)
    , sparkParticles(nullptr)
    , ambientParticles(nullptr)
    , damageParticles(nullptr)
    , railgunParticles(nullptr)
    , auxParticles1(nullptr)
    , auxParticles2(nullptr)
    , firingParticles(nullptr)
    , waveEffect(nullptr)
    , tiltSidewaysAngle(0.0f)
    , tiltForwardsAngle(0.0f)
    , tiltSidewaysRate(0.0f)
    , tiltForwardsRate(0.0f)
    , hijackerInfantryType(0)
    , tiberiumCollectionState(0)
    , unloadTimer{}
    , barrelFacing{}
    , facing{}
    , turretFacing{}
    , currentBurstIndex(0)
    , targetLaserOpacity(0)
    , targetLaserFlags(0)
    , isCountedAsOwned(false)
    , isSinking(false)
    , wasAlreadySinking(false)
    , isReceivingDamageEffect(false)
    , isPlayingDamageSound(false)
    , hasBeenAttacked(false)
    , isCloakableFlag(false)
    , isPrimaryFactory(false)
    , isSpawned(false)
    , isInPlayfield(false)
    , isTurretLocked(false)
    , isBarrelLocked(false)
    , isHumanControlled(false)
    , isDiscoveredByPlayer(false)
    , isDiscoveredByComputer(false)
    , isSelectedByPlayer(false)
    , isUnderCursor(false)
    , isCommandLineTarget(false)
    , sightRangeBonus(0)
    , isRecruitableByAlly(false)
    , isRecruitableByEnemy(false)
    , isRadarTracked(false)
    , isOnCarryall(false)
    , isCrashing(false)
    , wasAlreadyCrashing(false)
    , isBeingManipulated(false)
    , manipulatedByUnit(nullptr)
    , chronoWarpedByHouse(nullptr)
    , isChronoImmuneFlag(false)
    , isEMPImmune(false)
    , isRadiationImmune(false)
    , previousTeam(nullptr)
    , isCountedAsOwned_special(false)
    , isAbsorbed(false)
    , isGrindingInProgress(false)
    , grindingAnimHandle(0)
    , audioLoopIndex3(0)
    , audioVolume3(0)
    , isAudio4Active(false)
    , audioHandle4(0)
    , isAudio5Active(false)
    , audioHandle5(0)
    , queuedVoiceIndex(0)
    , voiceFlags(0)
    , isVoiceOverride(false)
    , voiceHandle(0)
    , voiceVolumeModifier(0)
    , empLockRemaining(0)
    , threatPosed(0)
    , shouldLoseTarget(0)
    , firingRadBeam(nullptr)
    , planningToken(nullptr)
    , disguiseAsType(nullptr)
    , isDisguisedFlag_as_house(nullptr)
{
    std::memset(&flashing, 0, sizeof(flashing));
    std::memset(&animation, 0, sizeof(animation));
    std::memset(&passengers, 0, sizeof(passengers));
    std::memset(&veterancy, 0, sizeof(veterancy));
    std::memset(&idleActionTimer, 0, sizeof(idleActionTimer));
    std::memset(&radarFlashTimer, 0, sizeof(radarFlashTimer));
    std::memset(&targetingTimer, 0, sizeof(targetingTimer));
    std::memset(&ironCurtainTimer, 0, sizeof(ironCurtainTimer));
    std::memset(&ironTintTimer, 0, sizeof(ironTintTimer));
    std::memset(&airstrikeTimer, 0, sizeof(airstrikeTimer));
    std::memset(&airstrikeTintTimer, 0, sizeof(airstrikeTintTimer));
    std::memset(&infantryBlinkTimer, 0, sizeof(infantryBlinkTimer));
    std::memset(&disguiseBlinkTimer, 0, sizeof(disguiseBlinkTimer));
    std::memset(&reloadTimer, 0, sizeof(reloadTimer));
    std::memset(&cloakProgress, 0, sizeof(cloakProgress));
    std::memset(&cloakDelayTimer, 0, sizeof(cloakDelayTimer));
    std::memset(&diskLaserTimer, 0, sizeof(diskLaserTimer));
    std::memset(&target_laser_timer, 0, sizeof(target_laser_timer));
    std::memset(&turretRecoil, 0, sizeof(turretRecoil));
    std::memset(&barrelRecoil, 0, sizeof(barrelRecoil));
    std::memset(&storedTiberium, 0, sizeof(storedTiberium));
    std::memset(&audioController3, 0, sizeof(audioController3));
    std::memset(&audioController4, 0, sizeof(audioController4));
    std::memset(&audioController5, 0, sizeof(audioController5));
    std::memset(&audioController6, 0, sizeof(audioController6));

    abstractFlags |= 0x1u;
}

FireError TechnoClass::GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const
{
    // Fire-error check without range validation (helper for TechnoClass::GetFireError).
    // NOTE: 0x6F3F40 (a previous annotation here) is TechnoClass::Update, a different function.
    // Can_Fire check without range validation.
    // Checks: target alive, not falling, weapon exists, weapon AA/AG match,
    // rearm delay elapsed, ammo available, not cloaked.
    if (!target)
        return (FireError)((int)(gamemd::FireError::ILLEGAL));

    if (isFallingDown)
        return (FireError)((int)(gamemd::FireError::CANT));

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return (FireError)((int)(gamemd::FireError::CANT));

    // IDA: Anti-air check — weapon must have AA=yes to target aircraft (isAirborne)
    // IDA: Anti-ground check — weapon must have AG=yes to target ground units (!isAirborne)
    // Enforced via WeaponStruct AA/AG flags checked against target altitude

    // IDA: Rearm delay check — if weapon Arm != 0 and rearm timer active → REARM
    // if (weapon->Arm != 0 && !isArmed()) return FireError::REARM;

    if (ammo <= 0)
        return (FireError)((int)(gamemd::FireError::AMMO));

    if (cloakState == (uint32_t)(gamemd::CloakState::Cloaked))
        return (FireError)((int)(gamemd::FireError::CLOAKED));

    return (FireError)((int)(gamemd::FireError::NONE));
}

FireError TechnoClass::GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const
{
    auto result = GetFireErrorWithoutRange(target, weapon_index);
    if ((int)(result) != (int)(gamemd::FireError::NONE))
        return result;

    if (!IsCloseEnoughToAttack(target) && !ignore_range)
        return (FireError)((int)(gamemd::FireError::RANGE));

    return (FireError)((int)(gamemd::FireError::NONE));
}

// 0x70ece0
BulletClass* TechnoClass::Fire(AbstractClass* target, int weapon_index)
{
    // IDA: 0x70ECE0 — TechnoClass::Fire (Fire_At)
    // Creates a bullet and fires it at the target.
    // Stages: validate → get fire coords → apply veterancy → create bullet → advance burst

    if (!target)
        return nullptr;

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return nullptr;

    FireError err = GetFireError(target, weapon_index, false);
    if ((int)(err) != (int)(gamemd::FireError::NONE))
        return nullptr;

    // IDA: Get fire coordinates (muzzle flash position via GetFLH)
    CoordStruct fire_coord;
    GetFLH(&fire_coord, weapon_index, location);

    // IDA: Calculate firepower with veterancy bonuses
    int firepower = 25;
    firepower = (int)(firepower * firepowerMultiplier);
    if (currentRank > -1)
    {
        if ((int)(gamemd::Rank::Veteran) <= currentRank)
            firepower = (int)(firepower * 1.1);
        if ((int)(gamemd::Rank::Elite) <= currentRank)
            firepower = (int)(firepower * 1.2);
    }

    // IDA: BulletClass::Create(projectile_type, target, this, firepower, warhead, speed)
    // Bullet creation is deferred to the weapon/bullet subsystem.
    // When BulletClass is available, this will return the created bullet.
    (void)fire_coord;
    (void)firepower;

    // IDA: Advance burst state and decrease ammo
    currentBurstIndex = (currentBurstIndex + 1) % 2;
    currentBarrelIndex = (currentBarrelIndex + 1) & 1;
    DecreaseAmmo();

    // IDA: Returns the created BulletClass* when BulletClass subsystem is available
    return nullptr;
}

bool TechnoClass::IsCloseEnoughToAttack(AbstractClass* target) const
{
    return IsCloseEnough(target, currentWeaponSlot);
}

CellClass* TechnoClass::SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy)
{
    // IDA: Greatest_Threat — dual-mode target scanning.
    // Area scan: radiating outward box from current position, scanning cell occupiers.
    // Full-map fallback: iterate all objects on map layer.
    // Each candidate scored by Evaluate_Object via threat matrix.

    CoordStruct my_pos;
    fetchCoordinatesHere(&my_pos);

    int best_value = current_threat;
    AbstractClass* best_target = nullptr;
    int scan_range = GetWeaponRange(currentWeaponSlot);

    CellStruct center = {
        (int16_t)(my_pos.X / 256),
        (int16_t)(my_pos.Y / 256)
    };

    // IDA: Area scan — radiating outward box, perimeter-only
    for (int radius = 0; radius <= scan_range; ++radius)
    {
        for (int dx = -radius; dx <= radius; ++dx)
        {
            for (int dy = -radius; dy <= radius; ++dy)
            {
                if (abs(dx) != radius && abs(dy) != radius)
                    continue;

                CellStruct map_coords = {
                    (int16_t)(center.X + dx),
                    (int16_t)(center.Y + dy)
                };

                // IDA: CellCoord::To_CellObj(&MapClass_Instance, &map_coords)
                // For each occupier in cell: Evaluate_Object → score comparison
                // if (value > best_value) { best_value = value; best_target = occupier; }
            }
        }

        // IDA: Early exit at range/4 for high-value close targets
        if (best_target && (radius >= scan_range / 4))
        {
            break;
        }
    }

    // IDA: Full-map fallback — iterate MapClass::Instance->Objects
    if (!best_target)
    {
        // IDA: for each object on MapClass::Instance->Objects layer:
        //   value = Evaluate_Object(flags, obj)
        //   if (value > best_value) { ... }
    }

    if (best_target)
        SetTarget(best_target);

    return nullptr;
}

void TechnoClass::Guard()
{
    target = nullptr;
    lastTarget = nullptr;
    queueMission((Mission)((int)(gamemd::Mission::Guard)), true);
}

void TechnoClass::SetTarget(AbstractClass* target)
{
    lastTarget = target;
    target = target;
    if (target)
        SetDestination(target, false);
}

void TechnoClass::Cloak(bool play_sound)
{
    cloakState = (uint32_t)(gamemd::CloakState::Cloaked);
    isCloakableFlag = true;
}

void TechnoClass::Uncloak(bool play_sound)
{
    cloakState = (uint32_t)(gamemd::CloakState::Uncloaking);
}

// 0x6f3330
int TechnoClass::SelectWeapon(AbstractClass* target) const
{
// [IDA decompile]
int __thiscall TechnoClass::SelectWeapon(#377 *this)
{
  int v2; // eax
  int result; // eax
  int v4; // edi
  int v5; // ebx
  _BYTE *v6; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // eax
  bool v10; // bl
  _DWORD *v11; // [esp+1Ch] [ebp+4h]

  v2 = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this);
  if ( (unsigned __int8)HouseClass::HasPower(v2)
    && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3285) )
  {
    return *((_DWORD *)this + 78) != -1 ? *((_DWORD *)this + 78) : 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1024))(this) )
    return 0;
  v4 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 1016))(this, 1);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 1016))(this, 0);
  if ( !v5 || *(_BYTE *)(v4 + 310) || !v11 )
    return 0;
  if ( *((_BYTE *)this + 130) && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3408) != -1 )
    return *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3408);
  v6 = (v11[5] & 1) != 0 ? (_BYTE *)v11 : 0;
  if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3285) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(v4 + 172) + 364) )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6
        && *(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 ? v11 + 328 : (_DWORD *)1312) + 5495) )
      {
        v8 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11);
        if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*(v8 == 6 ? v11 : 0) + 132))(v8 == 6 ? v11 : 0) + 1517) )
        {
          v9 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11);
          return !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*(v9 == 6 ? v11 : 0) + 132))(v9 == 6 ? v11 : 0) + 1516);
        }
        return 1;
      }
    }
    else
    {
      if ( *(_BYTE *)(*(_DWORD *)(v5 + 172) + 347)
        && v6
        && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 6 )
      {
        return 1;
      }
      if ( *(_BYTE *)(v4 + 322)
        && v6
        && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 1519)
        && !*((_DWORD *)this + 115)
        && !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), (int)v6) )
      {
        return 1;
      }
      if ( *(_BYTE *)(v4 + 336) && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 16 )
        return 1;
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 44))(this) == 6 && *((_BYTE *)this + 1633) )
        return 1;
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6
        && Object::IsAlliedWithObjectSimpleHouse(*((_DWORD **)this + 135), v11)
        && *(_BYTE *)(*(_DWORD *)(v4 + 172) + 344)
        && *(_BYTE *)(v11[328] + 5493) )
      {
        return 1;
      }
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 44))(this) == 2 && *((_BYTE *)this + 1738) )
        return 1;
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 11
        && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0 && *(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3278))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11)
        && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 1540) == 2 )
      {
        return 1;
      }
      if ( v6
        && *(double *)(*(_DWORD *)(v4 + 172)
                     + 8 * *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 156)
                     + 160) != 0.0 )
      {
        if ( *(double *)(*(_DWORD *)(v5 + 172)
                       + 8 * *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 156)
                       + 160) == 0.0 )
          return 1;
        v10 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 2
           || *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 6;
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
          v10 = 0;
        if ( !v6[140] && v10 )
        {
          result = (*(int (__thiscall **)(#377 *, _DWORD *))(*(_DWORD *)this + 744))(this, v11);
          if ( result != -1 )
            return result;
          return 0;
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6)
          && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 1540) == 2 )
        {
          return 1;
        }
        if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676)
          && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
        {
          return 1;
        }
      }
    }
    return 0;
  }
  v7 = *((_DWORD *)this + 80);
  if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676)
    && v6
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
  {
    return 2 * v7 + 1;
  }
  else
  {
    return 2 * v7;
  }
}

/* ASM:
sub     esp, 8
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+84h]
mov     ecx, eax
call    HouseClass__HasPower
test    al, al
jz      short loc_6F3379
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CD5h]
test    cl, cl
jnz     short loc_6F3379
mov     esi, [esi+138h]
pop     edi
mov     eax, esi
inc     eax
neg     eax
sbb     eax, eax
and     eax, esi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3379:                             ; CODE XREF: TechnoClass__SelectWeapon+1A↑j
; TechnoClass__SelectWeapon+2E↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+400h]
test    al, al
jnz     loc_6F37AD
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     edi, [eax]
test    edi, edi
mov     [esp+18h+var_8], edi
jz      loc_6F37AD
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3F8h]
mov     ebx, [eax]
test    ebx, ebx
mov     [esp+18h+var_4], ebx
jz      loc_6F37AD
mov     al, [edi+136h]
test    al, al
jnz     loc_6F37AD
mov     edi, [esp+18h+arg_0]
test    edi, edi
jz      loc_6F37AD
mov     al, [esi+82h]
test    al, al
jz      short loc_6F3410
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+0D50h], 0FFFFFFFFh
jz      short loc_6F3410
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     eax, [eax+0D50h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3410:                             ; CODE XREF: TechnoClass__SelectWeapon+B1↑j
; TechnoClass__SelectWeapon+C4↑j
mov     cl, [edi+14h]
mov     edx, [esi]
and     cl, 1
neg     cl
sbb     ecx, ecx
and     ecx, edi
mov     ebp, ecx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CD5h]
test    cl, cl
jz      short loc_6F3477
mov     eax, [esp+18h+var_8]
mov     esi, [esi+140h]
mov     ecx, [eax+0A0h]
mov     al, [ecx+2A4h]
test    al, al
jz      short loc_6F346A
test    ebp, ebp
jz      short loc_6F346A
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+54h]
test    al, al
jz      short loc_6F346A
lea     eax, [esi+esi+1]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F346A:                             ; CODE XREF: TechnoClass__SelectWeapon+11A↑j
; TechnoClass__SelectWeapon+11E↑j ...
lea     eax, [esi+esi]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3477:                             ; CODE XREF: TechnoClass__SelectWeapon+100↑j
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0ACh]
mov     al, [ecx+16Ch]
test    al, al
jz      loc_6F3528
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_6F37AD
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, [eax+520h]
mov     al, [ecx+1577h]
test    al, al
jz      loc_6F37AD
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, eax
mov     edx, [eax]
call    dword ptr [edx+84h]
mov     cl, [eax+5EDh]
test    cl, cl
jz      loc_6F3807
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, eax
mov     edx, [eax]
call    dword ptr [edx+84h]
mov     cl, [eax+5ECh]
test    cl, cl
jnz     loc_6F37AD
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3528:                             ; CODE XREF: TechnoClass__SelectWeapon+159↑j
mov     eax, [ebx+0ACh]
mov     cl, [eax+15Bh]
test    cl, cl
jz      short loc_6F3558
test    ebp, ebp
jz      short loc_6F3558
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_6F3558
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3558:                             ; CODE XREF: TechnoClass__SelectWeapon+206↑j
; TechnoClass__SelectWeapon+20A↑j ...
mov     eax, [esp+18h+var_8]
mov     cl, [eax+142h]
test    cl, cl
jz      short loc_6F35A8
test    ebp, ebp
jz      short loc_6F35A8
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+84h]
mov     cl, [eax+5EFh]
test    cl, cl
jz      short loc_6F35A8
mov     eax, [esi+1CCh]
test    eax, eax
jnz     short loc_6F35A8
mov     ecx, [esi+21Ch]
push    ebp
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     short loc_6F35A8
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35A8:                             ; CODE XREF: TechnoClass__SelectWeapon+234↑j
; TechnoClass__SelectWeapon+238↑j ...
mov     eax, [esp+18h+var_8]
mov     cl, [eax+150h]
test    cl, cl
jz      short loc_6F35D4
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 10h
jnz     short loc_6F35D4
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35D4:                             ; CODE XREF: TechnoClass__SelectWeapon+284↑j
; TechnoClass__SelectWeapon+293↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_6F35F9
mov     al, [esi+661h]
test    al, al
jz      short loc_6F35F9
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35F9:                             ; CODE XREF: TechnoClass__SelectWeapon+2AE↑j
; TechnoClass__SelectWeapon+2B8↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_6F3648
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectSimpleHouse
test    al, al
jz      short loc_6F3648
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0ACh]
mov     al, [ecx+158h]
test    al, al
jz      short loc_6F3648
mov     edx, [edi+520h]
mov     al, [edx+1575h]
test    al, al
jz      short loc_6F3648
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3648:                             ; CODE XREF: TechnoClass__SelectWeapon+2D3↑j
; TechnoClass__SelectWeapon+2E3↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
mov     ebx, 2
cmp     eax, ebx
jnz     short loc_6F3671
mov     al, [esi+6CAh]
test    al, al
jz      short loc_6F3671
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3671:                             ; CODE XREF: TechnoClass__SelectWeapon+326↑j
; TechnoClass__SelectWeapon+330↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 0Bh
jnz     short loc_6F36DB
cmp     [edi+0ECh], ebx
jz      short loc_6F3690
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+50h]
test    al, al
jnz     short loc_6F36AF

loc_6F3690:                             ; CODE XREF: TechnoClass__SelectWeapon+353↑j
mov     eax, [edi+140h]
test    ah, 1
jz      short loc_6F36DB
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_6F36DB

loc_6F36AF:                             ; CODE XREF: TechnoClass__SelectWeapon+35E↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+54h]
test    al, al
jnz     short loc_6F36DB
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+604h], ebx
jnz     short loc_6F36DB
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F36DB:                             ; CODE XREF: TechnoClass__SelectWeapon+34B↑j
; TechnoClass__SelectWeapon+369↑j ...
test    ebp, ebp
jz      loc_6F37AD
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+84h]
mov     edx, [esp+18h+var_8]
mov     ecx, [eax+9Ch]
mov     eax, [edx+0ACh]
fld     qword ptr [eax+ecx*8+0A0h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 40h
jnz     loc_6F37AD
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+84h]
mov     ecx, [esp+18h+var_4]
mov     eax, [eax+9Ch]
mov     edx, [ecx+0ACh]
fld     qword ptr [edx+eax*8+0A0h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 40h
jz      short loc_6F3754
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3754:                             ; CODE XREF: TechnoClass__SelectWeapon+413↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+1BCh]
cmp     [eax+0ECh], ebx
jz      short loc_6F377F
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1BCh]
cmp     dword ptr [eax+0ECh], 6
jz      short loc_6F377F
xor     bl, bl
jmp     short loc_6F3781
; ---------------------------------------------------------------------------

loc_6F377F:                             ; CODE XREF: TechnoClass__SelectWeapon+435↑j
; TechnoClass__SelectWeapon+449↑j
mov     bl, 1

loc_6F3781:                             ; CODE XREF: TechnoClass__SelectWeapon+44D↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+54h]
test    al, al
jz      short loc_6F378F
xor     bl, bl

loc_6F378F:                             ; CODE XREF: TechnoClass__SelectWeapon+45B↑j
mov     al, [ebp+8Ch]
test    al, al
jnz     short loc_6F37B9
test    bl, bl
jz      short loc_6F37B9
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E8h]
cmp     eax, 0FFFFFFFFh
jnz     short loc_6F37AF

loc_6F37AD:                             ; CODE XREF: TechnoClass__SelectWeapon+55↑j
; TechnoClass__SelectWeapon+6F↑j ...
xor     eax, eax

loc_6F37AF:                             ; CODE XREF: TechnoClass__SelectWeapon+47B↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F37B9:                             ; CODE XREF: TechnoClass__SelectWeapon+467↑j
; TechnoClass__SelectWeapon+46B↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+54h]
test    al, al
jnz     short loc_6F37E7
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+604h], 2
jnz     short loc_6F37E7
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F37E7:                             ; CODE XREF: TechnoClass__SelectWeapon+493↑j
; TechnoClass__SelectWeapon+4A6↑j
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0A0h]
mov     al, [ecx+2A4h]
test    al, al
jz      short loc_6F37AD
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+54h]
test    al, al
jz      short loc_6F37AD

loc_6F3807:                             ; CODE XREF: TechnoClass__SelectWeapon+1B9↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
*/
}

void TechnoClass::DecreaseAmmo()
{
    if (ammo > 0)
        --ammo;
}

void TechnoClass::Reload()
{
    auto* weapon = GetWeapon(currentWeaponSlot);
    if (!weapon)
        return;
}

void TechnoClass::UpdateCloak(bool unknown)
{
    if (!isCloakableFlag)
        return;

    bool should_cloak = shouldBeCloaked();
    bool should_uncloak = shouldNotBeCloaked();

    if (should_cloak && cloakState != (uint32_t)(gamemd::CloakState::Cloaked))
        Cloak(true);
    else if (should_uncloak && cloakState != (uint32_t)(gamemd::CloakState::Uncloaked))
        Uncloak(true);
}

void TechnoClass::CreateGap()
{
    isGeneratingGap = true;
    gapRadius = 0;
}

void TechnoClass::DestroyGap()
{
    isGeneratingGap = false;
}

void TechnoClass::UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    lastSightCoords = location;
}

void TechnoClass::RadarTrackingStart()
{
    isRadarTracked = true;
}

void TechnoClass::RadarTrackingStop()
{
    isRadarTracked = false;
}

void TechnoClass::RadarTrackingFlash()
{
    isRadarTracked = !isRadarTracked;
}

void TechnoClass::RadarTrackingUpdate(bool unknown)
{
}

void TechnoClass::SmokeupdateLogic()
{
    // IDA 0x414BB0: Per-frame techno smoke/damage update.
    // Clear chrono immunity for non-deploy/non-harvest missions.
    // Every 24 frames if damaged: create damage smoke anim.
    // Handle sinking (decreasing Z) and random damage smoke.
    if (currentMission != 1 && currentMission != 27
        && currentMission != 30 && currentMission != 31)
        isChronoImmuneFlag = false;

    if ((CurrentFrame % 24) == 0 && hasBeenAttacked)
    {
        // IDA: Create smoke AnimClass at current position
        // AnimClass ctor(rules[209], coords, 0, 1, 0x600, 0, 0)
    }

    if (isAliveFlag)
    {
        if (isSinking)
        {
            CoordStruct coords;
            fetchCoordinatesHere(&coords);
            // IDA: Sinking: decrease Z, if too deep trigger death
        }
        if ((CurrentFrame & 3) == 0 && health > 0)
        {
            // IDA: Random damage smoke near position
        }
    }
}

bool TechnoClass::EnterGrinder() { return false; }
bool TechnoClass::EnterBioReactor() { return false; }
bool TechnoClass::EnterTankBunker() { return false; }
bool TechnoClass::EnterBattleBunker() { return false; }
bool TechnoClass::GarrisonStructure() { return false; }
bool TechnoClass::CanDeploySlashUnload() const { return false; }

void TechnoClass::AddPassenger(FootClass* passenger)
{
    if (!passenger) return;
    if (!passengers.FirstPassenger)
        passengers.FirstPassenger = passenger;
    passengers.NumPassengers++;
}

// ============================================================
// CreateUnit — per-frame unit/building construction pipeline
// IDA: 0x423AC0 (4234 bytes, 197 BBs)
//
// Pipeline stages (from IDA decompilation, ordered):
//  1. Audio: WorkingSound on audioController3
//  2. Cloak/stealth detection (HasStupidGuardMode)
//  3. Building placement validation (cell owner check)
//  4. MCV deploy state check
//  5. Deploy animation coordinate preset (vt_entry_240)
//  6. Mission queued clear
//  7. Deploy/undeploy animation state machine (vt_entry_488)
//  8. Construction progress: timer countdown, placement distance,
//     production size calc, cost accumulation
//  9. Production milestone → type chain switching
// 10. Final unit creation via CreateUnitOnCompletion
// ============================================================
// 0x423ac0
bool TechnoClass::CreateUnit()
{
// [IDA decompile]
bool __thiscall TechnoClass::CreateUnit(#361 *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int *v8; // edi
  int v9; // ebx
  int v10; // ebp
  bool v11; // bl
  bool v12; // al
  void **v13; // eax
  int v14; // edx
  int v15; // ebp
  int v16; // edi
  void **v17; // eax
  void **v18; // eax
  int v19; // edx
  int v20; // ebp
  int v21; // edi
  void **v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // ebp
  _DWORD *Coords; // eax
  int v28; // eax
  int v29; // ebp
  int *v30; // eax
  int *v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // edi
  int v35; // eax
  int v36; // edi
  void **v37; // eax
  int v38; // eax
  int v39; // ebx
  int v40; // ebp
  char v41; // cl
  int v42; // eax
  double v43; // st7
  int v44; // edx
  _DWORD *v45; // edi
  #374 *v46; // ebx
  int v47; // eax
  int *StartCoords; // edx
  int v49; // eax
  int v50; // ecx
  int v51; // edi
  int v52; // edx
  int v53; // edx
  int v54; // edi
  int v55; // ebx
  int Speed; // eax
  int v57; // eax
  int v58; // ecx
  void **v59; // edi
  int *v60; // eax
  _DWORD *v61; // eax
  _DWORD *v62; // eax
  int v63; // eax
  int *v64; // eax
  int v65; // ecx
  int v66; // edx
  int v67; // eax
  int v68; // eax
  _DWORD *v69; // ecx
  int v70; // ecx
  int v71; // eax
  int v72; // edx
  int v73; // edx
  int v74; // ebx
  int v75; // ecx
  double v76; // st7
  int v77; // ebp
  int v78; // eax
  _DWORD *v79; // eax
  int v80; // eax
  int v81; // ecx
  int v82; // ecx
  unsigned __int8 v83; // cl
  int v84; // eax
  int v85; // ecx
  _DWORD *v86; // ecx
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  char v90; // cl
  int v91; // ecx
  int v92; // edx
  char *ProductionTimeMult; // eax
  int *v94; // ebp
  int v95; // edx
  int v96; // eax
  int v97; // edi
  int v98; // eax
  int v99; // ecx
  int v100; // edx
  int v101; // ecx
  _BYTE *v102; // edi
  int v103; // edx
  _DWORD *v104; // eax
  _DWORD *v105; // eax
  int v106; // ecx
  int v107; // edx
  int v108; // ebp
  int v109; // eax
  int v110; // eax
  int v112; // [esp+Ch] [ebp-94h]
  int v113; // [esp+Ch] [ebp-94h]
  bool v114; // [esp+2Bh] [ebp-75h]
  int i; // [esp+2Ch] [ebp-74h]
  int v116; // [esp+30h] [ebp-70h]
  int v117; // [esp+34h] [ebp-6Ch]
  int v118; // [esp+38h] [ebp-68h] BYREF
  int v119; // [esp+3Ch] [ebp-64h] BYREF
  double v120; // [esp+40h] [ebp-60h] BYREF
  float v121; // [esp+48h] [ebp-58h]
  int v122; // [esp+54h] [ebp-4Ch] BYREF
  int v123; // [esp+58h] [ebp-48h]
  int v124; // [esp+5Ch] [ebp-44h]
  int v125; // [esp+60h] [ebp-40h]
  int v126; // [esp+64h] [ebp-3Ch]
  int v127; // [esp+6Ch] [ebp-34h]
  int v128; // [esp+78h] [ebp-28h]
  int v129; // [esp+7Ch] [ebp-24h]
  int v130; // [esp+88h] [ebp-18h]
  int v131; // [esp+8Ch] [ebp-14h]
  char v132[16]; // [esp+90h] [ebp-10h] BYREF

  if ( !*((_BYTE *)this + 408) && *(_DWORD *)(*((_DWORD *)this + 50) + 760) != -1 )
  {
    v2 = (*(int (__thiscall **)(#361 *, int *))(*(_DWORD *)this + 72))(this, &v122);
    StartAudioController(v2, (int)this + 416);
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 50) + 852) )
  {
    ConstructionPositionTracker(this);
    ObjectClass::DetectCloaked(this);
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 50) + 883) )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(*(_DWORD *)this + 72))(this, &v122);
    v4 = Coord::To_Cell(MEMORY[0x87F7E8], v3);
    *((_BYTE *)this + 413) = Cell::CanPlaceBuilding(*((#375 **)this + 96), v4) == 0;
  }
  if ( *((_DWORD *)this + 50) == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 184) )
  {
    if ( HIBYTE(MEMORY[0x87F7E8][539877]) )
      *((_BYTE *)this + 413) = 0;
    else
      *((_BYTE *)this + 413) = 1;
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 50) + 857) )
  {
    v5 = (*(int (__thiscall **)(#361 *))(*(_DWORD *)this + 444))(this);
    *((_BYTE *)this + 413) = !v5 || !Building::GetNthOfType(v5);
  }
  if ( *(_DWORD *)(*((_DWORD *)this + 50) + 844) != -1 )
  {
    v122 = *((_DWORD *)this + 39);
    v6 = *(_DWORD *)this;
    v123 = *((_DWORD *)this + 40);
    v124 = *((_DWORD *)this + 41);
    (*(void (__thiscall **)(#361 *, int *))(v6 + 240))(this, &v122);
  }
  if ( *((_BYTE *)this + 283) && *((_DWORD *)this + 71) == *((_DWORD *)this + 43) )
    *((_BYTE *)this + 283) = 0;
  if ( *((_BYTE *)this + 404) )
  {
    v7 = (*(int (__thiscall **)(#361 *))(*(_DWORD *)this + 488))(this);
    if ( v7 == 2 || v7 == 1 )
    {
      v8 = (int *)((char *)this + 156);
      v122 = *((_DWORD *)this + 39);
      v123 = *((_DWORD *)this + 40);
      v124 = *((_DWORD *)this + 41);
      v9 = *((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v122) + 59);
      v122 = *((_DWORD *)this + 39);
      v123 = *((_DWORD *)this + 40);
      v10 = *((_DWORD *)this + 41);
      v122 = *((_DWORD *)this + 39);
      v123 = *((_DWORD *)this + 40);
      v11 = v9 == 2;
      v124 = *((_DWORD *)this + 41);
      v12 = v10 >= MEMORY[0x87F7E8][27251] + Cell::GetGroundHeight(&v122);
      v114 = v12;
      if ( !v11 || v12 )
      {
        if ( *(_DWORD *)(*((_DWORD *)this + 50) + 772) )
        {
          v120 = *((double *)this + 40);
          v121 = *((float *)this + 82);
          v22 = (void **)__2_YAPAXI_Z(456);
          if ( v22 )
          {
            v122 = Math::RoundToInt(*(float *)&v120);
            v123 = Math::RoundToInt(*((float *)&v120 + 1));
            v23 = Math::RoundToInt(v121);
            v24 = *((_DWORD *)this + 50);
            v124 = v23;
            AnimClass::ctor(v22, *(void **)(v24 + 772), &v122, 0, 1, (void *)0x2600, (void *)0xFFFFFFE2, 0);
          }
          v25 = *((_DWORD *)this + 50);
          v112 = *(_DWORD *)(v25 + 816);
          v26 = Math::RoundToInt(*(double *)(v25 + 680));
          Coords = Coord::GetCoords((float *)this + 74, &v122);
          PlaySoundEffectAt(Coords, v26, 0, v112, 1, 0);
          v28 = *((_DWORD *)this + 50);
          v117 = *(_DWORD *)(v28 + 816);
          v29 = Math::RoundToInt(*(double *)(v28 + 680));
          v30 = Coord::GetCoords((float *)this + 74, &v122);
          CreateSmokeEffectAt(v29, v117, *v30, v30[1], v30[2], 0, 0);
        }
      }
      else if ( *(_BYTE *)(*((_DWORD *)this + 50) + 854) )
      {
        v13 = (void **)__2_YAPAXI_Z(456);
        if ( v13 )
        {
          v14 = *v8;
          v15 = *((_DWORD *)this + 40);
          v16 = *((_DWORD *)this + 41);
          v122 = v14;
          v123 = v15;
          v124 = v16 + 3;
          AnimClass::ctor(
            v13,
            *(void **)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 3012) + 4 * *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3024) - 4),
            &v122,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
      }
      else
      {
        v17 = (void **)__2_YAPAXI_Z(456);
        if ( v17 )
        {
          v122 = *v8;
          v123 = *((_DWORD *)this + 40);
          v124 = *((_DWORD *)this + 41);
          AnimClass::ctor(v17, *(void **)(MEMORY[0x87F7E8][7806] + 148), &v122, 0, 1, (void *)0x600, 0, 0);
        }
        v18 = (void **)__2_YAPAXI_Z(456);
        if ( v18 )
        {
          v19 = *v8;
          v20 = *((_DWORD *)this + 40);
          v21 = *((_DWORD *)this + 41);
          v122 = v19;
          v123 = v20;
          v124 = v21 + 3;
          AnimClass::ctor(v18, **(void ***)(MEMORY[0x87F7E8][7806] + 3012), &v122, 0, 1, (void *)0x600, 0, 0);
        }
      }
      if ( !v11 || v114 )
      {
        v31 = Coord::GetCoords((float *)this + 74, &v120);
        v122 = *v31;
        v123 = v31[1];
        v124 = v31[2];
        v32 = *((_DWORD *)this + 50);
        if ( *(_DWORD *)(v32 + 752) )
        {
          v33 = *(_DWORD *)(v32 + 756);
          if ( v33 > 0 )
          {
            v34 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, v33);
            v35 = v34
                + Random::Range(
                    (_DWORD *)(MEMORY[0x87F7E8][536210] + 536),
                    0,
                    *(_DWORD *)(*((_DWORD *)this + 50) + 756));
            if ( v35 > 0 )
            {
              v36 = v35;
              do
              {
                v37 = (void **)__2_YAPAXI_Z(456);
                if ( v37 )
                  AnimClass::ctor(v37, *(void **)(*((_DWORD *)this + 50) + 752), &v122, 0, 1, (void *)0x600, 0, 0);
                --v36;
              }
              while ( v36 );
            }
          }
        }
        v38 = *((_DWORD *)this + 50);
        v39 = 0;
        v40 = 0;
        v125 = 0;
        v41 = *(_BYTE *)(v38 + 856);
        v126 = 0;
        v127 = 0;
        if ( v41 && !v114 )
        {
          v42 = *(_DWORD *)(v38 + 828);
          for ( i = -v42; i <= v42; ++i )
          {
            v116 = -v42;
            if ( -v42 <= v42 )
            {
              v120 = (double)i * (double)i;
              do
              {
                v43 = Math::Sqrt((double)v116 * (double)v116 + v120);
                if ( (int)Math::RoundToInt(v43) <= *(_DWORD *)(*((_DWORD *)this + 50) + 828) )
                {
                  v44 = i & 7;
                  LOWORD(v117) = v122 / 256 + LOWORD(MEMORY[0x87F7E8][v44 + 32680]);
                  HIWORD(v117) = v123 / 256 + HIWORD(MEMORY[0x87F7E8][v44 + 32680]);
                  v118 = v117;
                  v45 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v118);
                  if ( IsCoordValidMap((int)v45, 0) )
                  {
                    if ( *(_DWORD *)(*((_DWORD *)this + 50) + 824) )
                    {
                      v46 = (#374 *)__2_YAPAXI_Z(176);
                      if ( v46 )
                      {
                        v119 = v45[9];
                        v47 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 3);
                        Object::SpawnAtCell(
                          v46,
                          *(_DWORD *)(MEMORY[0x87F7E8][528743]
                                    + 4 * (v47 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 50) + 824) + 660))),
                          (__int16 *)&v119,
                          -1);
                      }
                      *((_BYTE *)v45 + 286) = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2);
                      StartCoords = House::GetStartCoords((int)v45, v132);
                      v49 = *StartCoords;
                      v50 = StartCoords[1] - MEMORY[0x87F7E8][7663];
                      v51 = StartCoords[2];
                      v52 = StartCoords[3];
                      v130 = v51;
                      v131 = v52;
                      if ( v40 <= 0 || v127 <= 0 )
                      {
                        v40 = v51;
                      }
                      else if ( v51 <= 0 || v52 <= 0 )
                      {
                        v49 = v125;
                        v50 = v126;
                        v52 = v127;
                      }
                      else
                      {
                        v53 = v125;
                        v54 = v126;
                        v129 = v127;
                        v128 = v40;
                        if ( v125 > v49 )
                        {
                          v53 = v49;
                          v128 = v125 + v40 - v49;
                        }
                        if ( v126 > v50 )
                        {
                          v54 = v50;
                          v129 += v126 - v50;
                        }
                        if ( v53 + v128 < v49 + v130 )
                          v128 = v130 - v53 + v49 + 1;
                        v55 = v129;
                        if ( v129 + v54 < v50 + v131 )
                          v55 = v131 - v54 + v50 + 1;
                        v40 = v128;
                        v49 = v53;
                        v50 = v54;
                        v52 = v55;
                      }
                      v39 = v52;
                      v125 = v49;
                      v126 = v50;
                      v127 = v52;
                    }
                  }
                }
                ++v116;
              }
              while ( v116 <= *(_DWORD *)(*((_DWORD *)this + 50) + 828) );
            }
            v42 = *(_DWORD *)(*((_DWORD *)this + 50) + 828);
          }
          Cell::CreateCrater(v125, v126, v40, v39, 0);
        }
      }
      LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(*(_DWORD *)this + 248))(this);
      return Speed;
    }
  }
  if ( *((_BYTE *)this + 144) )
  {
    if ( !*((_BYTE *)this + 411) )
    {
      v57 = *((_DWORD *)this + 50);
      if ( *(_DWORD *)(v57 + 776) )
      {
        v58 = *(_DWORD *)(v57 + 780);
        if ( v58 == 1 || !(dword_A8ED54[12] % v58) )
        {
          v59 = (void **)__2_YAPAXI_Z(456);
          if ( v59 )
          {
            v60 = (int *)(*(int (__thiscall **)(#361 *, int *))(*(_DWORD *)this + 72))(this, &v122);
            AnimClass::ctor(v59, *(void **)(*((_DWORD *)this + 50) + 776), v60, (void *)1, 1, (void *)0x600, 0, 0);
          }
        }
      }
    }
  }
  if ( *((_DWORD *)this + 50) == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5244) )
  {
    v61 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(*(_DWORD *)this + 72))(this, &v122);
    v62 = Coord::To_Cell(MEMORY[0x87F7E8], v61);
    if ( Cell::IsBridge(v62) )
      *((_BYTE *)this + 411) = 1;
  }
  if ( *((_BYTE *)this + 411) )
    goto LABEL_187;
  LOBYTE(Speed) = *((_BYTE *)this + 412);
  if ( (_BYTE)Speed )
  {
    *((_BYTE *)this + 412) = 0;
    return Speed;
  }
  v63 = *((_DWORD *)this + 97);
  if ( v63 )
  {
    Speed = v63 - 1;
    *((_DWORD *)this + 97) = Speed;
    if ( !Speed )
      LOBYTE(Speed) = ProductionCompletionCallback(this);
    return Speed;
  }
  Speed = *((unsigned __int8 *)this + 144);
  if ( (_BYTE)Speed )
  {
    if ( *(_BYTE *)(*((_DWORD *)this + 50) + 864) )
    {
      v64 = (int *)(*(int (__thiscall **)(#361 *, double *))(*(_DWORD *)this + 72))(this, &v120);
      v65 = *v64;
      v66 = v64[1];
      v67 = v64[2];
      v122 = v65 - 384;
      v123 = v66 - 384;
      v124 = v67;
      v68 = *((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v122) + 17);
      if ( v68 == -1 || *(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][528743] + 4 * v68) + 668) != *((_DWORD *)this + 50) )
        *((_BYTE *)this + 411) = 1;
    }
    v69 = (_DWORD *)*((_DWORD *)this + 50);
    if ( v69[176] == -1 )
    {
      *(_DWORD *)(*((_DWORD *)this + 50) + 704) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v69 + 156))(v69) + 6);
      v70 = *((_DWORD *)this + 50);
      if ( *(_BYTE *)(v70 + 882) )
        *(int *)(v70 + 704) /= 2;
    }
    v71 = *((_DWORD *)this + 50);
    if ( *(_DWORD *)(v71 + 700) == -1 )
      *(_DWORD *)(v71 + 700) = *(_DWORD *)(v71 + 704);
    (*(void (__thiscall **)(#361 *, int))(*(_DWORD *)this + 292))(this, 2);
    LOBYTE(Speed) = *((_BYTE *)this + 414);
    if ( !(_BYTE)Speed )
    {
      LOBYTE(Speed) = *((_BYTE *)this + 282);
      if ( !(_BYTE)Speed )
      {
        Speed = Locomotor::GetSpeed((int *)this + 45);
        if ( Speed || (Speed = *((_DWORD *)this + 48)) == 0 )
        {
          *((_BYTE *)this + 176) = 0;
          return Speed;
        }
        v72 = *((_DWORD *)this + 49) + *((_DWORD *)this + 43);
        *((_BYTE *)this + 176) = 1;
        *((_DWORD *)this + 43) = v72;
        v73 = v123;
        *((_DWORD *)this + 45) = dword_A8ED54[12];
        *((_DWORD *)this + 46) = v73;
        *((_DWORD *)this + 47) = Speed;
        v74 = *((_DWORD *)this + 43);
        if ( *(double *)(*((_DWORD *)this + 50) + 680) <= 0.0 || *((_BYTE *)this + 404) )
          goto LABEL_120;
        v75 = *((_DWORD *)this + 51);
        if ( v75 && (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 44))(v75) == 36 )
          v76 = *(double *)(*((_DWORD *)this + 50) + 680) * 5.0;
        else
          v76 = *(double *)(*((_DWORD *)this + 50) + 680);
        *((double *)this + 49) = v76 + *((double *)this + 49);
        if ( *((double *)this + 49) < 1.0 || *((_BYTE *)this + 408) )
          goto LABEL_120;
        v77 = Math::RoundToInt(*((double *)this + 49));
        v78 = *((_DWORD *)this + 50);
        v119 = v77;
        *((double *)this + 49) = *((double *)this + 49) - (double)v77;
        v113 = !strcmp((const char *)(v78 + 36), aInviso)
             ? *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4008)
             : *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3976);
        v79 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(*(_DWORD *)this + 72))(this, &v122);
        PlaySoundEffectAt(v79, v77, 0, v113, 1, 0);
        LOBYTE(Speed) = *((_BYTE *)this + 144);
        if ( (_BYTE)Speed )
        {
LABEL_120:
          v80 = *((_DWORD *)this + 50);
          v81 = *(_DWORD *)(v80 + 664);
          if ( v81 && v74 + *(_DWORD *)(v80 + 692) == v81 && !*((_BYTE *)this + 404) )
            CreateUnitOnCompletion(this);
          Speed = *((_DWORD *)this + 50);
          if ( *(_BYTE *)(Speed + 880) )
          {
            if ( *((_BYTE *)this + 405) <= 1u )
            {
              if ( v74 < *(_DWORD *)(Speed + 704) && v74 )
                goto LABEL_132;
LABEL_131:
              Speed = -*((_DWORD *)this + 49);
              *((_DWORD *)this + 49) = Speed;
              return Speed;
            }
            v82 = *(_DWORD *)(Speed + 692);
            if ( v74 >= *(_DWORD *)(Speed + 700) - v82 || v74 == v82 )
              goto LABEL_131;
          }
LABEL_132:
          v83 = *((_BYTE *)this + 405);
          if ( v83 > 1u )
          {
            if ( v74 >= *(_DWORD *)(Speed + 700) - *(_DWORD *)(Speed + 692) )
              goto LABEL_143;
          }
          else if ( v74 >= *(_DWORD *)(Speed + 704) )
          {
            goto LABEL_143;
          }
          if ( !*(_BYTE *)(Speed + 882) )
            goto LABEL_191;
          if ( *(_BYTE *)(Speed + 881) )
          {
LABEL_142:
            if ( v74 > 0 )
              return Speed;
            goto LABEL_143;
          }
          if ( *((_BYTE *)this + 288) || v74 < *(_DWORD *)(Speed + 700) - *(_DWORD *)(Speed + 692) )
          {
LABEL_191:
            if ( !*(_BYTE *)(Speed + 881) )
            {
              LOBYTE(Speed) = *((_BYTE *)this + 288);
              if ( !(_BYTE)Speed )
                return Speed;
            }
            goto LABEL_142;
          }
LABEL_143:
          if ( v83 && v83 != 0xFF )
            *((_BYTE *)this + 405) = v83 - 1;
          v84 = *((_DWORD *)this + 50);
          if ( *((_BYTE *)this + 405) )
          {
            if ( *(_BYTE *)(v84 + 881) || *((_BYTE *)this + 288) )
              *((_DWORD *)this + 43) = *(_DWORD *)(v84 + 700);
            else
              *((_DWORD *)this + 43) = *(_DWORD *)(v84 + 696) - *(_DWORD *)(v84 + 692);
            Speed = *((_DWORD *)this + 50);
            v85 = *(_DWORD *)(Speed + 732);
            if ( v85 || *(_DWORD *)(Speed + 736) )
            {
              Speed = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), v85, *(_DWORD *)(Speed + 736));
              *((_DWORD *)this + 97) = Speed;
            }
            return Speed;
          }
          v86 = *(_DWORD **)(v84 + 712);
          if ( v86 )
          {
            *((_DWORD *)this + 50) = v86;
            if ( v86[176] == -1 )
            {
              *(_DWORD *)(*((_DWORD *)this + 50) + 704) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v86 + 156))(v86)
                                                                     + 6);
              v87 = *((_DWORD *)this + 50);
              if ( *(_BYTE *)(v87 + 882) )
                *(int *)(v87 + 704) /= 2;
            }
            v88 = *((_DWORD *)this + 50);
            if ( *(_DWORD *)(v88 + 700) == -1 )
              *(_DWORD *)(v88 + 700) = *(_DWORD *)(v88 + 704);
            v89 = *((_DWORD *)this + 50);
            *((_BYTE *)this + 411) = 0;
            v90 = *(_BYTE *)(v89 + 708);
            *((_DWORD *)this + 98) = 0;
            *((_BYTE *)this + 405) = v90;
            v91 = v89;
            *((_DWORD *)this + 99) = 0;
            v92 = *(_DWORD *)(v89 + 740);
            ProductionTimeMult = *(char **)(v89 + 688);
            if ( v92 || *(_DWORD *)(v91 + 744) )
              ProductionTimeMult = (char *)Random::Range(
                                             (_DWORD *)(MEMORY[0x87F7E8][536210] + 536),
                                             v92,
                                             *(_DWORD *)(v91 + 744));
            if ( *(_BYTE *)(*((_DWORD *)this + 50) + 866) )
              ProductionTimeMult = Rules::GetProductionTimeMult(&MEMORY[0x87F7E8][539870], (int)ProductionTimeMult);
            *((_DWORD *)this + 45) = dword_A8ED54[12];
            *((_DWORD *)this + 46) = v123;
            *((_DWORD *)this + 47) = ProductionTimeMult;
            *((_DWORD *)this + 48) = ProductionTimeMult;
            *((_DWORD *)this + 43) = *(_DWORD *)(*((_DWORD *)this + 50) + 692);
            LOBYTE(Speed) = ProductionCompletionCallback(this);
            return Speed;
          }
          if ( *(_DWORD *)(v84 + 844) != -1 )
          {
            v94 = (int *)((char *)this + 156);
            v122 = *((_DWORD *)this + 39);
            v95 = *(_DWORD *)this;
            v123 = *((_DWORD *)this + 40);
            v124 = *((_DWORD *)this + 41);
            (*(void (__thiscall **)(#361 *, int *))(v95 + 244))(this, &v122);
            if ( *(_DWORD *)(*((_DWORD *)this + 50) + 844) <= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3316) )
            {
              v96 = *((_DWORD *)this + 96);
              if ( !v96 || *(_BYTE *)(v96 + 501) )
              {
                v97 = MEMORY[0x87F7E8][524948];
                v98 = HouseTypeClass::Find(g_INI_Key_Civilian);
                v99 = 0;
                if ( v97 > 0 )
                {
                  v100 = MEMORY[0x87F7E8][524945];
                  while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v100 + 52) + 188) != v98 )
                  {
                    ++v99;
                    v100 += 4;
                    if ( v99 >= v97 )
                      goto LABEL_176;
                  }
                  *((_DWORD *)this + 96) = *(_DWORD *)(MEMORY[0x87F7E8][524945] + 4 * v99);
                }
              }
LABEL_176:
              if ( *((_DWORD *)this + 96) )
              {
                v101 = *(_DWORD *)(MEMORY[0x87F7E8][539353]
                                 + 4
                                 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 3304)
                                                         + 4 * *(_DWORD *)(*((_DWORD *)this + 50) + 844))
                                             + 3576));
                v102 = (_BYTE *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v101 + 140))(
                                  v101,
                                  *((_DWORD *)this + 96));
                v122 = *v94;
                v123 = *((_DWORD *)this + 40);
                v103 = *(_DWORD *)v102;
                v124 = *((_DWORD *)this + 41);
                LOBYTE(Speed) = (*(int (__thiscall **)(_BYTE *, int *, int))(v103 + 216))(v102, &v122, 96);
                if ( !(_BYTE)Speed )
                {
                  --*((_DWORD *)this + 43);
                  return Speed;
                }
                v104 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(*(_DWORD *)this + 72))(this, &v122);
                LOWORD(v117) = *v104 / 256;
                HIWORD(v117) = v104[1] / 256;
                v119 = v117;
                v105 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v119);
                if ( v105 )
                {
                  if ( (v105[80] & 0x100) != 0 )
                  {
                    v106 = *v94;
                    v107 = *((_DWORD *)this + 40);
                    v108 = *((_DWORD *)this + 41);
                    v122 = v106;
                    v123 = v107;
                    if ( v108 > *(_DWORD *)((*(int (__thiscall **)(_DWORD *, int *))(*v105 + 72))(v105, &v122) + 8) )
                    {
                      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v102 + 292))(v102, 0);
                      v109 = *(_DWORD *)v102;
                      v102[140] = 1;
                      (*(void (__thiscall **)(_BYTE *, int))(v109 + 292))(v102, 1);
                    }
                  }
                }
                if ( !*(_BYTE *)(*((_DWORD *)this + 96) + 492) )
                  (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v102 + 488))(v102, 15, 0);
              }
            }
            v110 = *(_DWORD *)this;
            *((_BYTE *)this + 377) = 1;
            LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(v110 + 248))(this);
            return Speed;
          }
          *((_BYTE *)this + 377) = 1;
LABEL_187:
          LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(*(_DWORD *)this + 248))(this);
        }
      }
    }
  }
  return Speed;
}

/* ASM:
push    ebp             ; TechnoClass::CreateUnit — per-frame production pipeline (4234B).
; Sections: Audio → Placement → Deploy → Progress → Cost → Milestone → TypeSwitch → UnitCreate
mov     ebp, esp
and     esp, 0FFFFFFF8h
sub     esp, 78h
push    ebx
push    ebp
push    esi
mov     esi, ecx
or      ebp, 0FFFFFFFFh
push    edi
mov     al, [esi+198h]
test    al, al
jnz     short loc_423B05
mov     eax, [esi+0C8h]
cmp     [eax+2F8h], ebp
jz      short loc_423B05
mov     edx, [esi]
lea     eax, [esp+88h+var_4C]
push    eax
mov     ecx, esi
lea     edi, [esi+1A0h]
call    dword ptr [edx+48h]
mov     ecx, eax
mov     edx, edi
call    StartAudioController

loc_423B05:                             ; CODE XREF: TechnoClass__CreateUnit+1A↑j
; TechnoClass__CreateUnit+28↑j
mov     ecx, [esi+0C8h]
mov     al, [ecx+354h]
test    al, al
jz      short loc_423B23
mov     ecx, esi        ; BuildingClass_Full *
call    ConstructionPositionTracker
mov     ecx, esi        ; this
call    ObjectClass__DetectCloaked

loc_423B23:                             ; CODE XREF: TechnoClass__CreateUnit+53↑j
mov     edx, [esi+0C8h]
mov     al, [edx+373h]
test    al, al
jz      short loc_423B62
mov     eax, [esi]
lea     ecx, [esp+88h+var_4C]
push    ecx
mov     ecx, esi
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, [esi+180h]
mov     edx, eax
call    Cell__CanPlaceBuilding
test    al, al
setz    dl
mov     [esi+19Dh], dl

loc_423B62:                             ; CODE XREF: TechnoClass__CreateUnit+71↑j
mov     ecx, ds:8871E0h
mov     eax, [esi+0C8h]
cmp     eax, [ecx+0B8h]
jnz     short loc_423B8F
mov     al, ds:0A8EB7Fh
test    al, al
jnz     short loc_423B88
mov     byte ptr [esi+19Dh], 1
jmp     short loc_423B8F
; ---------------------------------------------------------------------------

loc_423B88:                             ; CODE XREF: TechnoClass__CreateUnit+BD↑j
mov     byte ptr [esi+19Dh], 0

loc_423B8F:                             ; CODE XREF: TechnoClass__CreateUnit+B4↑j
; TechnoClass__CreateUnit+C6↑j
mov     edx, [esi+0C8h]
mov     al, [edx+359h]
test    al, al
jz      short loc_423BC8
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1BCh]
test    eax, eax
jz      short loc_423BC1
mov     ecx, eax
call    Building__GetNthOfType
test    eax, eax
jz      short loc_423BC1
mov     byte ptr [esi+19Dh], 0
jmp     short loc_423BC8
; ---------------------------------------------------------------------------

loc_423BC1:                             ; CODE XREF: TechnoClass__CreateUnit+EB↑j
; TechnoClass__CreateUnit+F6↑j
mov     byte ptr [esi+19Dh], 1

loc_423BC8:                             ; CODE XREF: TechnoClass__CreateUnit+DD↑j
; TechnoClass__CreateUnit+FF↑j
mov     ecx, [esi+0C8h]
cmp     [ecx+34Ch], ebp
jz      short loc_423C03
lea     edx, [esi+9Ch]
mov     eax, [esi+9Ch]
mov     [esp+88h+var_4C], eax
mov     eax, [esi]
mov     ecx, [edx+4]
mov     [esp+88h+var_48], ecx
lea     ecx, [esp+88h+var_4C]
mov     edx, [edx+8]
push    ecx
mov     ecx, esi
mov     [esp+8Ch+var_44], edx
call    dword ptr [eax+0F0h]

loc_423C03:                             ; CODE XREF: TechnoClass__CreateUnit+114↑j
mov     al, [esi+11Bh]
test    al, al
jz      short loc_423C24
mov     edx, [esi+11Ch]
mov     eax, [esi+0ACh]
cmp     edx, eax
jnz     short loc_423C24
mov     byte ptr [esi+11Bh], 0

loc_423C24:                             ; CODE XREF: TechnoClass__CreateUnit+14B↑j
; TechnoClass__CreateUnit+15B↑j
mov     al, [esi+194h]
test    al, al
jz      loc_4242A6
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1E8h]
cmp     eax, 2
jz      short loc_423C4A
cmp     eax, 1
jnz     loc_4242A6

loc_423C4A:                             ; CODE XREF: TechnoClass__CreateUnit+17F↑j
lea     edi, [esi+9Ch]
mov     ecx, edi
mov     edx, [ecx]
mov     [esp+88h+var_4C], edx
lea     edx, [esp+88h+var_4C]
mov     eax, [ecx+4]
push    edx
mov     [esp+8Ch+var_48], eax
mov     ecx, [ecx+8]
mov     [esp+8Ch+var_44], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ebx, [eax+0ECh]
mov     eax, edi
cmp     ebx, 2
mov     ecx, [eax]
mov     [esp+88h+var_4C], ecx
mov     edx, [eax+4]
mov     [esp+88h+var_48], edx
mov     ebp, [eax+8]
mov     ecx, [eax]
mov     [esp+88h+var_4C], ecx
lea     ecx, [esp+88h+var_4C]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+8Ch+var_48], edx
mov     eax, [eax+8]
setz    bl
mov     [esp+8Ch+var_44], eax
call    Cell__GetGroundHeight
add     eax, ds:89A1B4h
cmp     ebp, eax
setnl   al
test    bl, bl
mov     byte ptr [esp+88h+var_78+3], al
jz      loc_423DE7
test    al, al
jnz     loc_423DE7
mov     edx, [esi+0C8h]
push    1C8h            ; Size
mov     al, [edx+356h]
test    al, al
jz      short loc_423D46
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      loc_423EFD
mov     edx, [edi]
mov     ebp, [edi+4]
mov     edi, [edi+8]
push    0               ; char
push    0               ; int
mov     [esp+90h+var_4C], edx
mov     edx, ds:8871E0h
push    600h            ; int
add     edi, 3
push    1               ; int
lea     ecx, [esp+98h+var_4C]
push    0               ; int
mov     [esp+9Ch+var_48], ebp
mov     [esp+9Ch+var_44], edi
push    ecx             ; int
mov     ecx, [edx+0BD0h]
mov     edx, [edx+0BC4h]
mov     ecx, [edx+ecx*4-4]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     loc_423EFD
; ---------------------------------------------------------------------------

loc_423D46:                             ; CODE XREF: TechnoClass__CreateUnit+228↑j
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_423D8E
mov     edx, edi
push    0               ; char
push    0               ; int
push    600h            ; int
mov     ecx, [edx]
push    1               ; int
mov     [esp+98h+var_4C], ecx
push    0               ; int
mov     ecx, [edx+4]
mov     [esp+9Ch+var_48], ecx
lea     ecx, [esp+9Ch+var_4C]
mov     edx, [edx+8]
push    ecx             ; int
mov     [esp+0A0h+var_44], edx
mov     edx, ds:8871E0h
mov     ecx, [edx+94h]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor

loc_423D8E:                             ; CODE XREF: TechnoClass__CreateUnit+290↑j
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      loc_423EFD
mov     edx, [edi]
mov     ebp, [edi+4]
mov     edi, [edi+8]
mov     ecx, ds:8871E0h
push    0               ; char
push    0               ; int
mov     [esp+90h+var_4C], edx
push    600h            ; int
add     edi, 3
push    1               ; int
lea     edx, [esp+98h+var_4C]
push    0               ; int
mov     [esp+9Ch+var_48], ebp
mov     [esp+9Ch+var_44], edi
push    edx             ; int
mov     edx, [ecx+0BC4h]
mov     ecx, [edx]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     loc_423EFD
; ---------------------------------------------------------------------------

loc_423DE7:                             ; CODE XREF: TechnoClass__CreateUnit+207↑j
; TechnoClass__CreateUnit+20F↑j
mov     edx, [esi+0C8h]
mov     eax, [edx+304h]
test    eax, eax
jz      loc_423EFD
lea     eax, [esi+140h]
push    1C8h            ; Size
mov     ecx, [eax]
mov     [esp+8Ch+var_60], ecx
mov     edx, [eax+4]
mov     [esp+8Ch+var_5C], edx
mov     eax, [eax+8]
mov     [esp+8Ch+var_58], eax
call    ??2_YAPAXI_Z
mov     edi, eax
add     esp, 4
test    edi, edi
jz      short loc_423E75
fld     [esp+88h+var_60]
call    Math__RoundToInt
fld     [esp+88h+var_5C]
mov     [esp+88h+var_4C], eax
call    Math__RoundToInt
fld     [esp+88h+var_58]
mov     [esp+88h+var_48], eax
call    Math__RoundToInt
mov     edx, [esi+0C8h]
push    0               ; char
push    0FFFFFFE2h      ; int
push    2600h           ; int
mov     [esp+94h+var_44], eax
mov     eax, [edx+304h]
push    1               ; int
lea     ecx, [esp+98h+var_4C]
push    0               ; int
push    ecx             ; int
push    eax             ; int
mov     ecx, edi        ; void **
call    AnimClass__ctor

loc_423E75:                             ; CODE XREF: TechnoClass__CreateUnit+366↑j
mov     eax, [esi+0C8h]
push    0
push    1
lea     edi, [esi+128h]
mov     ecx, [eax+330h]
fld     qword ptr [eax+2A8h]
push    ecx
push    0
call    Math__RoundToInt
lea     edx, [esp+98h+var_4C]
mov     ecx, edi
push    edx
mov     ebp, eax
call    Coord__GetCoords
mov     ecx, eax
mov     edx, ebp
call    PlaySoundEffectAt
mov     eax, [esi+0C8h]
push    0
push    0
fld     qword ptr [eax+2A8h]
mov     ebp, [eax+330h]
call    Math__RoundToInt
mov     dword ptr [esp+90h+var_6C], ebp
mov     ebp, eax
lea     eax, [esp+90h+var_4C]
mov     ecx, edi
push    eax
call    Coord__GetCoords
mov     edx, [eax]
sub     esp, 0Ch
mov     ecx, esp
mov     [ecx], edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [ecx+4], edx
mov     edx, dword ptr [esp+9Ch+var_6C]
mov     [ecx+8], eax
mov     ecx, ebp
call    CreateSmokeEffectAt

loc_423EFD:                             ; CODE XREF: TechnoClass__CreateUnit+234↑j
; TechnoClass__CreateUnit+281↑j ...
test    bl, bl
jz      short loc_423F0D
mov     al, byte ptr [esp+88h+var_78+3]
test    al, al
jz      loc_424294

loc_423F0D:                             ; CODE XREF: TechnoClass__CreateUnit+43F↑j
lea     eax, [esp+88h+var_60]
lea     ecx, [esi+128h]
push    eax
call    Coord__GetCoords
mov     ecx, [eax]
mov     [esp+88h+var_4C], ecx
mov     edx, [eax+4]
mov     [esp+88h+var_48], edx
mov     eax, [eax+8]
mov     [esp+88h+var_44], eax
mov     eax, [esi+0C8h]
mov     ecx, [eax+2F0h]
test    ecx, ecx
jz      loc_423FC6
mov     eax, [eax+2F4h]
test    eax, eax
jle     short loc_423FC6
mov     ecx, ds:0A8B230h
push    eax
push    0
add     ecx, 218h
call    Random__Range
mov     edx, [esi+0C8h]
mov     edi, eax
mov     eax, [edx+2F4h]
push    eax
mov     eax, ds:0A8B230h
push    0
lea     ecx, [eax+218h]
call    Random__Range
add     eax, edi
test    eax, eax
jle     short loc_423FC6
mov     edi, eax

loc_423F8C:                             ; CODE XREF: TechnoClass__CreateUnit+504↓j
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_423FC3
mov     edx, [esi+0C8h]
push    0               ; char
push    0               ; int
push    600h            ; int
push    1               ; int
lea     ecx, [esp+98h+var_4C]
push    0               ; int
push    ecx             ; int
mov     ecx, [edx+2F0h]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor

loc_423FC3:                             ; CODE XREF: TechnoClass__CreateUnit+4DB↑j
dec     edi
jnz     short loc_423F8C

loc_423FC6:                             ; CODE XREF: TechnoClass__CreateUnit+47F↑j
; TechnoClass__CreateUnit+48D↑j ...
mov     eax, [esi+0C8h]
xor     ebx, ebx
xor     ebp, ebp
mov     [esp+88h+var_40], ebx
mov     cl, [eax+358h]
mov     [esp+88h+var_3C], ebx
test    cl, cl
mov     [esp+88h+var_34], ebx
jz      loc_424294
mov     cl, byte ptr [esp+88h+var_78+3]
test    cl, cl
jnz     loc_424294
mov     eax, [eax+33Ch]
mov     ecx, eax
neg     ecx
cmp     ecx, eax
mov     [esp+88h+var_74], ecx
jg      loc_42426F

loc_42400C:                             ; CODE XREF: TechnoClass__CreateUnit+7A9↓j
mov     ecx, eax
neg     ecx
cmp     ecx, eax
mov     [esp+88h+var_70], ecx
jg      loc_424252
fild    [esp+88h+var_74]
fld     st
fmul    st, st(1)
fstp    qword ptr [esp+88h+var_60]
fstp    st

loc_42402A:                             ; CODE XREF: TechnoClass__CreateUnit+78C↓j
fild    [esp+88h+var_70]
sub     esp, 8
fld     st
fmul    st, st(1)
fadd    qword ptr [esp+90h+var_60]
fstp    [esp+90h+var_90] ; double
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
mov     edx, [esi+0C8h]
cmp     eax, [edx+33Ch]
jg      loc_424235
mov     eax, [esp+88h+var_4C]
cdq
and     edx, 0FFh
add     eax, edx
mov     ecx, eax
mov     eax, [esp+88h+var_48]
cdq
and     edx, 0FFh
add     eax, edx
mov     edx, [esp+88h+var_74]
and     edx, 7
sar     ecx, 8
mov     di, ds:89F688h[edx*4]
lea     edx, ds:89F688h[edx*4]
add     di, cx
mov     cx, [edx+2]
mov     word ptr [esp+88h+var_6C], di
sar     eax, 8
add     cx, ax
lea     eax, [esp+88h+var_6C+4]
mov     word ptr [esp+88h+var_6C+2], cx
mov     edx, dword ptr [esp+88h+var_6C]
push    eax
mov     ecx, 87F7E8h
mov     dword ptr [esp+8Ch+var_6C+4], edx
call    CellCoord__To_CellObj
mov     edi, eax
push    0
mov     ecx, edi
call    IsCoordValidMap
test    al, al
jz      loc_424235
mov     ecx, [esi+0C8h]
mov     eax, [ecx+338h]
test    eax, eax
jz      loc_424235
push    0B0h            ; Size
call    ??2_YAPAXI_Z
mov     ebx, eax
add     esp, 4
test    ebx, ebx
jz      short loc_424140
mov     eax, ds:0A8B230h
mov     edx, [edi+24h]
push    3
push    0
lea     ecx, [eax+218h]
mov     [esp+90h+var_64], edx
call    Random__Range
mov     edx, [esi+0C8h]
lea     ecx, [esp+88h+var_64]
push    0FFFFFFFFh
push    ecx
mov     ecx, [edx+338h]
mov     edx, [ecx+294h]
add     edx, eax
mov     eax, ds:0A83D84h
mov     ecx, [eax+edx*4]
push    ecx
mov     ecx, ebx
call    Object__SpawnAtCell

loc_424140:                             ; CODE XREF: TechnoClass__CreateUnit+638↑j
mov     edx, ds:0A8B230h
push    2
push    0
lea     ecx, [edx+218h]
call    Random__Range
mov     [edi+11Eh], al
lea     eax, [esp+88h+var_10]
push    eax
mov     ecx, edi
call    House__GetStartCoords
mov     edx, eax
mov     ebx, ds:886FA4h
mov     eax, [edx]
mov     ecx, [edx+4]
sub     ecx, ebx
mov     edi, [edx+8]
test    ebp, ebp
mov     edx, [edx+0Ch]
mov     [esp+88h+var_18], edi
mov     [esp+88h+var_14], edx
jle     loc_424225
mov     ebx, [esp+88h+var_34]
test    ebx, ebx
jle     loc_424225
test    edi, edi
jle     short loc_424217
test    edx, edx
jle     short loc_424217
mov     edx, [esp+88h+var_40]
mov     edi, [esp+88h+var_3C]
mov     [esp+88h+var_24], ebx
mov     ebx, edx
cmp     ebx, eax
mov     [esp+88h+var_28], ebp
jle     short loc_4241C0
sub     ebp, eax
mov     edx, eax
add     ebp, ebx
mov     [esp+88h+var_28], ebp

loc_4241C0:                             ; CODE XREF: TechnoClass__CreateUnit+6F4↑j
cmp     edi, ecx
jle     short loc_4241D2
mov     ebx, [esp+88h+var_24]
sub     edi, ecx
add     ebx, edi
mov     edi, ecx
mov     [esp+88h+var_24], ebx

loc_4241D2:                             ; CODE XREF: TechnoClass__CreateUnit+702↑j
mov     ebx, [esp+88h+var_18]
mov     ebp, [esp+88h+var_28]
add     ebx, eax
add     ebp, edx
cmp     ebp, ebx
jge     short loc_4241F0
mov     ebx, [esp+88h+var_18]
sub     ebx, edx
lea     eax, [ebx+eax+1]
mov     [esp+88h+var_28], eax

loc_4241F0:                             ; CODE XREF: TechnoClass__CreateUnit+720↑j
mov     ebx, [esp+88h+var_24]
mov     ebp, [esp+88h+var_14]
add     ebp, ecx
lea     eax, [ebx+edi]
cmp     eax, ebp
jge     short loc_42420B
mov     ebx, [esp+88h+var_14]
sub     ebx, edi
lea     ebx, [ebx+ecx+1]

loc_42420B:                             ; CODE XREF: TechnoClass__CreateUnit+73F↑j
mov     ebp, [esp+88h+var_28]
mov     eax, edx
mov     ecx, edi
mov     edx, ebx
jmp     short loc_424227
; ---------------------------------------------------------------------------

loc_424217:                             ; CODE XREF: TechnoClass__CreateUnit+6DA↑j
; TechnoClass__CreateUnit+6DE↑j
mov     eax, [esp+88h+var_40]
mov     ecx, [esp+88h+var_3C]
mov     edx, [esp+88h+var_34]
jmp     short loc_424227
; ---------------------------------------------------------------------------

loc_424225:                             ; CODE XREF: TechnoClass__CreateUnit+6C6↑j
; TechnoClass__CreateUnit+6D2↑j
mov     ebp, edi

loc_424227:                             ; CODE XREF: TechnoClass__CreateUnit+755↑j
; TechnoClass__CreateUnit+763↑j
mov     ebx, edx
mov     [esp+88h+var_40], eax
mov     [esp+88h+var_3C], ecx
mov     [esp+88h+var_34], ebx

loc_424235:                             ; CODE XREF: TechnoClass__CreateUnit+597↑j
; TechnoClass__CreateUnit+60D↑j ...
mov     ecx, [esi+0C8h]
mov     eax, [esp+88h+var_70]
inc     eax
mov     edx, [ecx+33Ch]
mov     [esp+88h+var_70], eax
cmp     eax, edx
jle     loc_42402A

loc_424252:                             ; CODE XREF: TechnoClass__CreateUnit+556↑j
mov     edx, [esi+0C8h]
mov     ecx, [esp+88h+var_74]
inc     ecx
mov     eax, [edx+33Ch]
mov     [esp+88h+var_74], ecx
cmp     ecx, eax
jle     loc_42400C

loc_42426F:                             ; CODE XREF: TechnoClass__CreateUnit+546↑j
mov     ecx, [esp+88h+var_40]
push    0
mov     edx, [esp+8Ch+var_3C]
sub     esp, 10h
mov     eax, esp
mov     [eax], ecx
mov     ecx, ds:887324h
mov     [eax+4], edx
mov     [eax+8], ebp
mov     [eax+0Ch], ebx
call    Cell__CreateCrater

loc_424294:                             ; CODE XREF: TechnoClass__CreateUnit+447↑j
; TechnoClass__CreateUnit+524↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+0F8h]
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4242A6:                             ; CODE XREF: TechnoClass__CreateUnit+16C↑j
; TechnoClass__CreateUnit+184↑j
mov     al, [esi+90h]
test    al, al
jz      short loc_424322
mov     al, [esi+19Bh]
test    al, al
jnz     short loc_424322
mov     eax, [esi+0C8h]
mov     ecx, [eax+308h]
test    ecx, ecx
jz      short loc_424322
mov     ecx, [eax+30Ch]
cmp     ecx, 1
jz      short loc_4242E1
mov     eax, dword_A8ED54+30h
cdq
idiv    ecx
test    edx, edx
jnz     short loc_424322

loc_4242E1:                             ; CODE XREF: TechnoClass__CreateUnit+813↑j
push    1C8h            ; Size
call    ??2_YAPAXI_Z
mov     edi, eax
add     esp, 4
test    edi, edi
jz      short loc_424322
mov     edx, [esi]
push    0               ; char
push    0               ; int
push    600h            ; int
push    1               ; int
lea     eax, [esp+98h+var_4C]
push    1               ; int
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, [esi+0C8h]
push    eax             ; int
mov     edx, [ecx+308h]
mov     ecx, edi        ; void **
push    edx             ; int
call    AnimClass__ctor

loc_424322:                             ; CODE XREF: TechnoClass__CreateUnit+7EE↑j
; TechnoClass__CreateUnit+7F8↑j ...
mov     ecx, ds:8871E0h
mov     eax, [esi+0C8h]
cmp     eax, [ecx+147Ch]
jnz     short loc_42435F
mov     edx, [esi]
lea     eax, [esp+88h+var_4C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      short loc_42435F
mov     byte ptr [esi+19Bh], 1

loc_42435F:                             ; CODE XREF: TechnoClass__CreateUnit+874↑j
; TechnoClass__CreateUnit+896↑j
mov     al, [esi+19Bh]
test    al, al
jnz     loc_424B38
mov     al, [esi+19Ch]
test    al, al
jz      short loc_424386
mov     byte ptr [esi+19Ch], 0
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_424386:                             ; CODE XREF: TechnoClass__CreateUnit+8B5↑j
mov     eax, [esi+184h]
test    eax, eax
jz      short loc_4243AE
dec     eax
test    eax, eax
mov     [esi+184h], eax
jnz     loc_424B42
mov     ecx, esi        ; BuildingClass_Full *
call    ProductionCompletionCallback ; Production completion callback (543B). Handles audio, special building anims, unit creation.
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4243AE:                             ; CODE XREF: TechnoClass__CreateUnit+8CE↑j
mov     al, [esi+90h]
test    al, al
jz      loc_424B42
mov     eax, [esi+0C8h]
mov     cl, [eax+360h]
test    cl, cl
jz      short loc_42442E
mov     edx, [esi]
lea     eax, [esp+88h+var_60]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [eax+4]
mov     eax, [eax+8]
sub     ecx, 180h
mov     [esp+88h+var_4C], ecx
lea     ecx, [esp+88h+var_4C]
sub     edx, 180h
push    ecx
mov     ecx, 87F7E8h
mov     [esp+8Ch+var_48], edx
mov     [esp+8Ch+var_44], eax
call    Coord__To_Cell
mov     eax, [eax+44h]
cmp     eax, ebp
jz      short loc_424427
mov     edx, ds:0A83D84h
mov     eax, [edx+eax*4]
mov     ecx, [eax+29Ch]
mov     eax, [esi+0C8h]
cmp     ecx, eax
jz      short loc_42442E

loc_424427:                             ; CODE XREF: TechnoClass__CreateUnit+94C↑j
mov     byte ptr [esi+19Bh], 1

loc_42442E:                             ; CODE XREF: TechnoClass__CreateUnit+90A↑j
; TechnoClass__CreateUnit+965↑j
mov     ecx, [esi+0C8h]
cmp     [ecx+2C0h], ebp
jnz     short loc_424475
mov     edx, [ecx]
call    dword ptr [edx+9Ch]
movsx   eax, word ptr [eax+6]
mov     ecx, [esi+0C8h]
mov     [ecx+2C0h], eax
mov     ecx, [esi+0C8h]
mov     al, [ecx+372h]
test    al, al
jz      short loc_424475
mov     eax, [ecx+2C0h]
cdq
sub     eax, edx
sar     eax, 1
mov     [ecx+2C0h], eax

loc_424475:                             ; CODE XREF: TechnoClass__CreateUnit+97A↑j
; TechnoClass__CreateUnit+9A2↑j
mov     eax, [esi+0C8h]
cmp     [eax+2BCh], ebp
jnz     short loc_42448F
mov     edx, [eax+2C0h]
mov     [eax+2BCh], edx

loc_42448F:                             ; CODE XREF: TechnoClass__CreateUnit+9C1↑j
mov     eax, [esi]
push    2
mov     ecx, esi
call    dword ptr [eax+124h]
mov     al, [esi+19Eh]
test    al, al
jnz     loc_424B42
mov     al, [esi+11Ah]
test    al, al
jnz     loc_424B42
lea     edi, [esi+0B4h]
mov     ecx, edi
call    Locomotor__GetSpeed
test    eax, eax
jnz     loc_424560
mov     eax, [esi+0C0h]
test    eax, eax
jz      loc_424560
mov     ecx, [esi+0C4h]
mov     edx, [esi+0ACh]
add     edx, ecx
mov     byte ptr [esi+0B0h], 1
mov     [esi+0ACh], edx
mov     ecx, dword_A8ED54+30h
mov     edx, [esp+88h+var_48]
mov     [edi], ecx
mov     [edi+4], edx
mov     [edi+8], eax
mov     eax, [esi+0C8h]
mov     ebx, [esi+0ACh]
fld     qword ptr [eax+2A8h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 41h
jnz     loc_42465D
mov     al, [esi+194h]
test    al, al
jnz     loc_42465D
mov     ecx, [esi+0CCh]
test    ecx, ecx
jz      short loc_42456F
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 24h ; '$'
jnz     short loc_42456F
mov     eax, [esi+0C8h]
fld     qword ptr [eax+2A8h]
fmul    ds:dbl_7E3568
jmp     short loc_42457B
; ---------------------------------------------------------------------------

loc_424560:                             ; CODE XREF: TechnoClass__CreateUnit+A06↑j
; TechnoClass__CreateUnit+A14↑j
mov     byte ptr [esi+0B0h], 0
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_42456F:                             ; CODE XREF: TechnoClass__CreateUnit+A80↑j
; TechnoClass__CreateUnit+A8A↑j
mov     ecx, [esi+0C8h]
fld     qword ptr [ecx+2A8h]

loc_42457B:                             ; CODE XREF: TechnoClass__CreateUnit+A9E↑j
fadd    qword ptr [esi+188h]
fstp    qword ptr [esi+188h]
fld     qword ptr [esi+188h]
fcomp   ds:dbl_7E1718
fnstsw  ax
test    ah, 1
jnz     loc_42465D
mov     al, [esi+198h]
test    al, al
jnz     loc_42465D
fld     qword ptr [esi+188h]
call    Math__RoundToInt
mov     ebp, eax
mov     eax, [esi+0C8h]
mov     [esp+88h+var_64], ebp
mov     edi, offset aInviso ; "INVISO"
fild    [esp+88h+var_64]
add     eax, 24h ; '$'
fsubr   qword ptr [esi+188h]
fstp    qword ptr [esi+188h]

loc_4245DB:                             ; CODE XREF: TechnoClass__CreateUnit+B39↓j
mov     dl, [eax]
mov     cl, dl
cmp     dl, [edi]
jnz     short loc_4245FF
test    cl, cl
jz      short loc_4245FB
mov     dl, [eax+1]
mov     cl, dl
cmp     dl, [edi+1]
jnz     short loc_4245FF
add     eax, 2
add     edi, 2
test    cl, cl
jnz     short loc_4245DB

loc_4245FB:                             ; CODE XREF: TechnoClass__CreateUnit+B25↑j
xor     eax, eax
jmp     short loc_424604
; ---------------------------------------------------------------------------

loc_4245FF:                             ; CODE XREF: TechnoClass__CreateUnit+B21↑j
; TechnoClass__CreateUnit+B2F↑j
sbb     eax, eax
sbb     eax, 0FFFFFFFFh

loc_424604:                             ; CODE XREF: TechnoClass__CreateUnit+B3D↑j
test    eax, eax
push    0
push    1
jnz     short loc_424628
mov     eax, ds:8871E0h
mov     edx, [esi]
mov     ecx, [eax+0FA8h]
lea     eax, [esp+90h+var_4C]
push    ecx
push    0
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
jmp     short loc_424643
; ---------------------------------------------------------------------------

loc_424628:                             ; CODE XREF: TechnoClass__CreateUnit+B4A↑j
mov     ecx, ds:8871E0h
mov     eax, [esi]
mov     edx, [ecx+0F88h]
lea     ecx, [esp+90h+var_4C]
push    edx
push    0
push    ecx
mov     ecx, esi
call    dword ptr [eax+48h]

loc_424643:                             ; CODE XREF: TechnoClass__CreateUnit+B66↑j
mov     ecx, eax
mov     edx, ebp
call    PlaySoundEffectAt
mov     al, [esi+90h]
test    al, al
jz      loc_424B42
or      ebp, 0FFFFFFFFh

loc_42465D:                             ; CODE XREF: TechnoClass__CreateUnit+A64↑j
; TechnoClass__CreateUnit+A72↑j ...
mov     eax, [esi+0C8h]
xor     edi, edi
mov     ecx, [eax+298h]
cmp     ecx, edi
jz      short loc_42468C
mov     edx, [eax+2B4h]
add     edx, ebx
cmp     edx, ecx
jnz     short loc_42468C
mov     al, [esi+194h]
test    al, al
jnz     short loc_42468C
mov     ecx, esi        ; BuildingClass_Full *
call    CreateUnitOnCompletion ; Create unit at completion (583B). Calculates exit cell, foundation offsets, spawns unit.

loc_42468C:                             ; CODE XREF: TechnoClass__CreateUnit+BAD↑j
; TechnoClass__CreateUnit+BB9↑j ...
mov     eax, [esi+0C8h]
mov     cl, [eax+370h]
test    cl, cl
jz      short loc_4246E4
mov     cl, [esi+195h]
cmp     cl, 1
ja      short loc_4246B8
cmp     ebx, [eax+2C0h]
jge     short loc_4246CE
cmp     ebx, edi
jz      short loc_4246CE
cmp     cl, 1
jbe     short loc_4246E4

loc_4246B8:                             ; CODE XREF: TechnoClass__CreateUnit+BE5↑j
mov     ecx, [eax+2B4h]
mov     edx, [eax+2BCh]
sub     edx, ecx
cmp     ebx, edx
jge     short loc_4246CE
cmp     ebx, ecx
jnz     short loc_4246E4

loc_4246CE:                             ; CODE XREF: TechnoClass__CreateUnit+BED↑j
; TechnoClass__CreateUnit+BF1↑j ...
mov     eax, [esi+0C4h]
neg     eax
mov     [esi+0C4h], eax
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4246E4:                             ; CODE XREF: TechnoClass__CreateUnit+BDA↑j
; TechnoClass__CreateUnit+BF6↑j ...
mov     cl, [esi+195h]
cmp     cl, 1
ja      short loc_4246FC
cmp     ebx, [eax+2C0h]
jge     short loc_42475A
cmp     cl, 1
jbe     short loc_42470C

loc_4246FC:                             ; CODE XREF: TechnoClass__CreateUnit+C2D↑j
mov     edx, [eax+2BCh]
sub     edx, [eax+2B4h]
cmp     ebx, edx
jge     short loc_42475A

loc_42470C:                             ; CODE XREF: TechnoClass__CreateUnit+C3A↑j
mov     dl, [eax+372h]
test    dl, dl
jz      short loc_42473A
mov     dl, [eax+371h]
test    dl, dl
jnz     short loc_424752
mov     dl, [esi+120h]
test    dl, dl
jnz     short loc_42473A
mov     edx, [eax+2BCh]
sub     edx, [eax+2B4h]
cmp     ebx, edx
jge     short loc_42475A

loc_42473A:                             ; CODE XREF: TechnoClass__CreateUnit+C54↑j
; TechnoClass__CreateUnit+C68↑j
mov     dl, [eax+371h]
test    dl, dl
jnz     short loc_424752
mov     al, [esi+120h]
test    al, al
jz      loc_424B42

loc_424752:                             ; CODE XREF: TechnoClass__CreateUnit+C5E↑j
; TechnoClass__CreateUnit+C82↑j
cmp     ebx, edi
jg      loc_424B42

loc_42475A:                             ; CODE XREF: TechnoClass__CreateUnit+C35↑j
; TechnoClass__CreateUnit+C4A↑j ...
test    cl, cl
jz      short loc_42476B
cmp     cl, 0FFh
jz      short loc_42476B
dec     cl
mov     [esi+195h], cl

loc_42476B:                             ; CODE XREF: TechnoClass__CreateUnit+C9C↑j
; TechnoClass__CreateUnit+CA1↑j
mov     al, [esi+195h]
test    al, al
mov     eax, [esi+0C8h]
jz      short loc_4247F3
mov     cl, [eax+371h]
test    cl, cl
jnz     short loc_4247A5
mov     cl, [esi+120h]
test    cl, cl
jnz     short loc_4247A5
mov     ecx, [eax+2B8h]
mov     edx, [eax+2B4h]
sub     ecx, edx
mov     [esi+0ACh], ecx
jmp     short loc_4247B1
; ---------------------------------------------------------------------------

loc_4247A5:                             ; CODE XREF: TechnoClass__CreateUnit+CC3↑j
; TechnoClass__CreateUnit+CCD↑j
mov     edx, [eax+2BCh]
mov     [esi+0ACh], edx

loc_4247B1:                             ; CODE XREF: TechnoClass__CreateUnit+CE3↑j
mov     eax, [esi+0C8h]
mov     ecx, [eax+2DCh]
cmp     ecx, edi
jnz     short loc_4247CD
cmp     [eax+2E0h], edi
jz      loc_424B42

loc_4247CD:                             ; CODE XREF: TechnoClass__CreateUnit+CFF↑j
mov     eax, [eax+2E0h]
push    eax
mov     eax, ds:0A8B230h
push    ecx
lea     ecx, [eax+218h]
call    Random__Range
mov     [esi+184h], eax
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4247F3:                             ; CODE XREF: TechnoClass__CreateUnit+CB9↑j
mov     ecx, [eax+2C8h]
cmp     ecx, edi
jz      loc_424932
mov     [esi+0C8h], ecx
mov     eax, [ecx+2C0h]
cmp     eax, ebp
jnz     short loc_42484A
mov     edx, [ecx]
call    dword ptr [edx+9Ch]
movsx   eax, word ptr [eax+6]
mov     ecx, [esi+0C8h]
mov     [ecx+2C0h], eax
mov     ecx, [esi+0C8h]
mov     al, [ecx+372h]
test    al, al
jz      short loc_42484A
mov     eax, [ecx+2C0h]
cdq
sub     eax, edx
sar     eax, 1
mov     [ecx+2C0h], eax

loc_42484A:                             ; CODE XREF: TechnoClass__CreateUnit+D4F↑j
; TechnoClass__CreateUnit+D77↑j
mov     eax, [esi+0C8h]
cmp     [eax+2BCh], ebp
jnz     short loc_424864
mov     edx, [eax+2C0h]
mov     [eax+2BCh], edx

loc_424864:                             ; CODE XREF: TechnoClass__CreateUnit+D96↑j
mov     eax, [esi+0C8h]
mov     byte ptr [esi+19Bh], 0
mov     cl, [eax+2C4h]
mov     [esi+188h], edi
mov     [esi+195h], cl
mov     ecx, eax
mov     [esi+18Ch], edi
mov     edx, [ecx+2E4h]
mov     eax, [ecx+2B0h]
cmp     edx, edi
jnz     short loc_4248A3
cmp     [ecx+2E8h], edi
jz      short loc_4248BC

loc_4248A3:                             ; CODE XREF: TechnoClass__CreateUnit+DD9↑j
mov     ecx, [ecx+2E8h]
push    ecx
push    edx
mov     edx, ds:0A8B230h
lea     ecx, [edx+218h]
call    Random__Range

loc_4248BC:                             ; CODE XREF: TechnoClass__CreateUnit+DE1↑j
mov     ecx, [esi+0C8h]
mov     dl, [ecx+362h]
test    dl, dl
jz      short loc_4248EF
push    eax
mov     ecx, 0A8EB60h
call    Rules__GetProductionTimeMult
mov     ecx, dword_A8ED54+30h
lea     edx, [esi+0B4h]
mov     [esi+0B4h], ecx
mov     ecx, [esp+88h+var_48]
jmp     short loc_424905
; ---------------------------------------------------------------------------

loc_4248EF:                             ; CODE XREF: TechnoClass__CreateUnit+E0A↑j
mov     ecx, dword_A8ED54+30h
lea     edx, [esi+0B4h]
mov     [esi+0B4h], ecx
mov     ecx, [esp+88h+var_48]

loc_424905:                             ; CODE XREF: TechnoClass__CreateUnit+E2D↑j
mov     [edx+4], ecx
mov     ecx, esi        ; BuildingClass_Full *
mov     [edx+8], eax
mov     [esi+0C0h], eax
mov     edx, [esi+0C8h]
mov     eax, [edx+2B4h]
mov     [esi+0ACh], eax
call    ProductionCompletionCallback ; Production completion callback (543B). Handles audio, special building anims, unit creation.
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_424932:                             ; CODE XREF: TechnoClass__CreateUnit+D3B↑j
cmp     [eax+34Ch], ebp
jz      loc_424B31
lea     ebp, [esi+9Ch]
mov     ecx, ebp
mov     edx, [ecx]
mov     [esp+88h+var_4C], edx
mov     edx, [esi]
mov     eax, [ecx+4]
mov     [esp+88h+var_48], eax
lea     eax, [esp+88h+var_4C]
mov     ecx, [ecx+8]
push    eax
mov     [esp+8Ch+var_44], ecx
mov     ecx, esi
call    dword ptr [edx+0F4h]
mov     ecx, [esi+0C8h]
mov     eax, ds:8871E0h
mov     edx, [ecx+34Ch]
mov     ecx, [eax+0CF4h]
cmp     edx, ecx
jg      loc_424B0A
mov     eax, [esi+180h]
test    eax, eax
jz      short loc_42499C
mov     cl, [eax+1F5h]
test    cl, cl
jz      short loc_4249DE

loc_42499C:                             ; CODE XREF: TechnoClass__CreateUnit+ED0↑j
mov     edi, ds:0A80238h
mov     ecx, offset g_INI_Key_Civilian ; "Civilian"
call    HouseTypeClass__Find
xor     ecx, ecx
test    edi, edi
jle     short loc_4249DE
mov     edx, ds:0A8022Ch

loc_4249B8:                             ; CODE XREF: TechnoClass__CreateUnit+F0B↓j
mov     ebx, [edx]
mov     ebx, [ebx+34h]
cmp     [ebx+0BCh], eax
jz      short loc_4249CF
inc     ecx
add     edx, 4
cmp     ecx, edi
jl      short loc_4249B8
jmp     short loc_4249DE
; ---------------------------------------------------------------------------

loc_4249CF:                             ; CODE XREF: TechnoClass__CreateUnit+F03↑j
mov     edx, ds:0A8022Ch
mov     eax, [edx+ecx*4]
mov     [esi+180h], eax

loc_4249DE:                             ; CODE XREF: TechnoClass__CreateUnit+EDA↑j
; TechnoClass__CreateUnit+EF0↑j ...
mov     eax, [esi+180h]
test    eax, eax
jz      loc_424B0A
mov     ecx, [esi+0C8h]
push    eax
mov     edx, [ecx+34Ch]
mov     ecx, ds:8871E0h
mov     ecx, [ecx+0CE8h]
mov     edx, [ecx+edx*4]
mov     ecx, [edx+0DF8h]
mov     edx, ds:0A8E34Ch
mov     ecx, [edx+ecx*4]
mov     edx, [ecx]
call    dword ptr [edx+8Ch]
mov     edi, eax
mov     eax, ebp
push    60h ; '`'
mov     ecx, [eax]
mov     [esp+8Ch+var_4C], ecx
mov     ecx, edi
mov     edx, [eax+4]
mov     [esp+8Ch+var_48], edx
mov     edx, [edi]
mov     eax, [eax+8]
mov     [esp+8Ch+var_44], eax
lea     eax, [esp+8Ch+var_4C]
push    eax
call    dword ptr [edx+0D8h]
test    al, al
jz      loc_424B23
mov     edx, [esi]
lea     eax, [esp+88h+var_4C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+88h+var_6C], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+88h+var_64]
sar     eax, 8
mov     word ptr [esp+88h+var_6C+2], ax
mov     ecx, dword ptr [esp+88h+var_6C]
mov     [esp+88h+var_64], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
test    eax, eax
jz      short loc_424AEC
mov     ecx, [eax+140h]
test    ch, 1
jz      short loc_424AEC
mov     ecx, [ebp+0]
mov     edx, [ebp+4]
mov     ebp, [ebp+8]
mov     [esp+88h+var_4C], ecx
lea     ecx, [esp+88h+var_4C]
mov     [esp+88h+var_48], edx
mov     edx, [eax]
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
cmp     ebp, [eax+8]
jle     short loc_424AEC
mov     edx, [edi]
push    0
mov     ecx, edi
call    dword ptr [edx+124h]
mov     eax, [edi]
push    1
mov     ecx, edi
mov     byte ptr [edi+8Ch], 1
call    dword ptr [eax+124h]

loc_424AEC:                             ; CODE XREF: TechnoClass__CreateUnit+FDE↑j
; TechnoClass__CreateUnit+FE9↑j ...
mov     ecx, [esi+180h]
mov     al, [ecx+1ECh]
test    al, al
jnz     short loc_424B0A
mov     edx, [edi]
push    0
push    0Fh
mov     ecx, edi
call    dword ptr [edx+1E8h]

loc_424B0A:                             ; CODE XREF: TechnoClass__CreateUnit+EC2↑j
; TechnoClass__CreateUnit+F26↑j ...
mov     eax, [esi]
mov     ecx, esi
mov     byte ptr [esi+179h], 1
call    dword ptr [eax+0F8h]
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_424B23:                             ; CODE XREF: TechnoClass__CreateUnit+F8A↑j
dec     dword ptr [esi+0ACh]
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_424B31:                             ; CODE XREF: TechnoClass__CreateUnit+E78↑j
mov     byte ptr [esi+179h], 1

loc_424B38:                             ; CODE XREF: TechnoClass__CreateUnit+8A7↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0F8h]

loc_424B42:                             ; CODE XREF: TechnoClass__CreateUnit+8D9↑j
; TechnoClass__CreateUnit+8F6↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
*/
}

// ============================================================
// ProductionCompletionCallback (IDA: 0x424CE0, 543B)
// Called when production timer expires.
//
// Sections from IDA:
//  1. vt_entry_292(this, 2) — update production progress display
//  2. Audio: start WorkingSound on Audio7 or stop Audio7
//  3. Audio: stop Audio8 controller
//  4. If no completion threshold (type+664==0): create unit immediately
//  5. Special building launch: NukeSilo/ICBM/SpySat — launch anim + EVA + radar
// ============================================================
bool ProductionCompletionCallback(TechnoClass* techno)
{
    auto* building = (gamemd::BuildingClass*)(techno);
    auto* type = (gamemd::BuildingTypeClass*)(techno->GetTechnoType());
    if (!type) return false;

    // IDA: Section 1: vt_entry_292(this, 2) — update production progress display

    // IDA: Section 2-3: Audio management
    bool audio_active = (techno->audioController3.AudioController_field_00 != 0);
    bool has_working_sound = (type->WorkingSound != -1);

    if (audio_active || !has_working_sound)
    {
        // IDA: Stop Audio7 (AudioController::Stop) — sub_405D40
    }
    else
    {
        // IDA: Start WorkingSound on Audio7 via StartAudioControllerAt
        // CoordStruct coords; fetchCoordinatesHere(&coords);
        // AudioController_StartAt(type->WorkingSound, coords, &building->Audio7)
    }
    // IDA: Stop Audio8 (AudioController::Stop)

    // IDA: Section 4: Immediate unit creation if no completion threshold
    if (!type->ProductionCompletionThreshold)
    {
        // IDA: CreateUnitOnCompletion(techno)
    }

    // IDA: Section 5: Special building launch (Nuke/ICBM/SpySat)
    // IDA: if (!audio_active && (type->ICBMLauncher || type->SpySat || type->NukeSilo)):
    if (!audio_active)
    {
        if (type->ICBMLauncher || type->SpySat || type->NukeSilo)
        {
            // IDA: cell = Coord::To_Cell(fetchCoordinatesHere())
            // IDA: building_idx = BuildingClass::FindByCellHash(cell) — sub_485010
            // IDA: if valid: EVA_Announce, optional launch animation (1-in-3 chance),
            //      PlaySoundEffectAt(coords, Rules[346]), House_AnnounceUpgrade,
            //      Radar::Update — sub_584550
        }
    }

    return true;
}

// ============================================================
// CreateUnitOnCompletion (IDA: 0x424F00, 583B)
// Creates unit at completion of production.
//
// Sections from IDA:
//  1. Get cell coordinates from building position
//  2. Foundation size offsets (type+668/672 via Building::GetFoundationSize)
//  3. Super weapon fire effects (type+716 → SW_CreateFireAt)
//  4. Construction delay check (vt_entry_456)
//  5. Branch: CreateUnitAtCoords_Timed or _Standard
// ============================================================
bool CreateUnitOnCompletion(TechnoClass* techno)
{
    auto* building = (gamemd::BuildingClass*)(techno);
    auto* type = (gamemd::BuildingTypeClass*)(techno->GetTechnoType());
    if (!type) return false;

    // IDA: Section 1: coords = fetchCoordinatesHere() / 256 → CellCoord::To_CellObj
    // CellStruct cell_coords = { coords.X / 256, coords.Y / 256 };
    // CellClass* cell = CellCoord::To_CellObj(&MapClass_Instance, &cell_coords);

    int build_time = 30;

    // IDA: Section 2: Foundation size offsets via vt_entry_108
    // if (vt_entry_108(this)):
    //   foundation_width = Building::GetFoundationSize(coords, type+664)[2/3]
    //   type+668 = foundation_width if -1
    //   type+672 = foundation_height if -1
    //   build_time = type+672
    (void)build_time;

    // IDA: Section 3: Super weapon fire effects (type+716/720)
    // IDA: if (type->field_716 != -1):
    //   for (int i = 0; i < type->field_720; ++i):
    //     SW_CreateFireAt(SW_Array[type+716], coords) — sub_62E430
    if (type->BuildingTypeClass_field_716 != -1)
    {
        for (int i = 0; i < type->BuildingTypeClass_field_720; ++i)
        {
            // IDA: SW_CreateFireAt(sw_array[type+716], coords)
        }
    }

    // IDA: Section 4-5: Construction delay check → unit creation
    // int delay = vt_entry_456(this) — returns < 30 for immediate creation
    // if (delay < 30):
    //   if (type+875 && type+877 && Random >= 0.5):
    //     EVA_Announce + CreateUnitAtCoords_Timed(coords, 300, 300, 1) or
    //     CreateUnitAtCoords_Timed(coords, foundation_width, build_time, 0)
    //   else:
    //     CreateUnitAtCoords_Standard(coords, foundation_width, build_time, 0)

    return false;
}

// ============================================================
// ConstructionPositionTracker (IDA: 0x425670, 1688B)
// Tracks building/pod position during construction.
// Called from CreateUnit pipeline.
//
// Key IDA logic:
//  1. Not production-blocked → start production timer
//  2. Compare current vs target position
//  3. Invalid target → Building::ComputePosition to calculate new target
//  4. Within range (distance <= 18): snap to target, check cell type
//  5. Out of range: angle calculation → vt_entry_436 adjust position
//  6. Cell walkability check at 3 neighbor cells
//  7. Direction angle → update production progress timer / mission
// ============================================================
void ConstructionPositionTracker(TechnoClass* techno)
{
    auto* building = (gamemd::BuildingClass*)(techno);
    auto* type = (gamemd::BuildingTypeClass*)(techno->GetTechnoType());
    if (!type) return;

    // IDA: Section 1: Start production timer if not blocked
    if (!building->ProductionBlocked)
    {
        building->ProductionFrame = (int)(CurrentFrame);
        building->ProductionSpeed = 0;
        building->ProductionRate = 0;
    }

    // IDA: Section 2-3: Target position management
    // Compare current location with target coords (this+0x210 region).
    // If target matches Map_InvalidCoord or ProductionBlocked:
    //   Building::ComputePosition → compute new target
    //   If still invalid: mark ProductionBlocked, set ProductionSpeed=1

    // IDA: Section 4: Distance check
    // Coord_Subtract(current_pos - target_pos)
    // if (Coord_Length(delta) > 18): far → angle calc, vt_entry_436 adjust
    // else: close → snap to target, check cell data[59], update retry counter

    // IDA: Section 5: Cell walkability check
    // If on surface (Z >= ground + threshold):
    //   Check 3 adjacent cells for walkability (cell_data[80] & 0x100)
    //   If all 3 blocked: set flag (this+141 = 1)

    // IDA: Section 6: Angle calculation and timer update
    // if (!ProductionBlocked && current != target):
    //   Math::CalcAngle(Y_delta, X_delta) → direction
    //   Math::RoundToInt(angle) → rotation steps
    //   rotation_steps = type+848 * calculated_steps
    //   CurrentMission = steps + (CurrentFrame/3 % type+848)
    //
    // if (ProductionBlocked):
    //   foundation_size = vt_entry_108(this).GetFoundationWidth() / 2 - 1
    //   if CurrentMission >= foundation_size: vt_entry_248 → complete
}

// ============================================================
// CreateUnitAtCoordsStandard (IDA: 0x6B59A0)
// Creates a unit at specified cell coordinates.
// Iterates BuildingTypeClass array, builds candidate list by walkability,
// applies size filters, random pick winner, creates via UnitClass_Create.
// ============================================================
static bool CreateUnitAtCoordsStandard(CoordStruct* coords, int time, bool special)
{
    if (!coords) return false;

    // IDA: Check if coords == Map_BottomRightCell → early return

    // IDA: Game_LockMutex
    // For each BuildingTypeClass in global instance array:
    //   if (instance->CanPlaceAtCoords flag at +673):
    //     if (Cell_IsWalkable(cell, special)):
    //       Add to DynamicVectorClass candidates (max 10)
    // Game_LockMutex (unlock)

    // IDA: Filter candidates by size constraints (field_664/668)
    // if (filtered count > 0):
    //   Random pick: Random::Range(0, filtered-1)
    //   UnitClass_Create(filtered[index], coords, -1)
    // elif (candidate count > 0):
    //   Random pick: Random::Range(0, candidate-1)
    //   UnitClass_Create(candidates[index], coords, -1)

    // IDA: Clean up dynamic vectors (delete[])

    return false;
}

// ============================================================
// CreateUnitAtCoordsTimed (IDA: 0x6B5C90)
// Same flow as Standard but checks entry+672 flag for timed placement.
// ============================================================
static bool CreateUnitAtCoordsTimed(CoordStruct* coords, int time, bool special)
{
    if (!coords) return false;

    // IDA: Same flow as Standard but:
    //   Filter: entry+672 flag (TimedCreate flag) instead of +673
    //   Additional time-based constraints
    //   Standard mode: (field != 1 || field_668 != 1) && (time <= 60 || special <= 50)
    //   Timed mode: (field > 1 && field_668 > 1) for special placement

    return false;
}

// ============================================================
// TechnoClass::Update — parent per-frame update (IDA: 0x6F3F40)
// Called by all TechnoClass subclasses.
// Sections: owner C4 check, particle/VFX system creation,
//           production display setup, type member copy.
// ============================================================

} // namespace game
} // namespace ra2

#include "object/techno.hpp"

namespace ra2 { namespace game {

// --- TechnoClass ---

HRESULT __stdcall TechnoClass::Load(IStream* stream) { return S_OK; }
HRESULT __stdcall TechnoClass::Save(IStream* stream, int clear_dirty) { return S_OK; }
bool TechnoClass::isUnitfactory() const { return false; }
bool TechnoClass::isCloakable() const { return false; }
bool TechnoClass::canScatter() const { return true; }
bool TechnoClass::belongsToATeam() const { return false; }
bool TechnoClass::shouldSelfHealOneStep() const { return false; }
bool TechnoClass::isVoxel() const { return false; }
bool TechnoClass::canSelfRepair() { return false; }
bool TechnoClass::shouldBeCloaked() const { return false; }
bool TechnoClass::shouldNotBeCloaked() const { return false; }
DirStruct* TechnoClass::getFacing(DirStruct* buffer) const { return nullptr; }
bool TechnoClass::isArmed() const { return false; }
void TechnoClass::onSpawnComplete() const {}
double TechnoClass::getStoragePercentage() const { return 0.0; }
int TechnoClass::getPipFillLevel() const { return 0; }
int TechnoClass::getRefund() const { return 0; }
int TechnoClass::getThreatValue() const { return 0; }
bool TechnoClass::canBeAttacked(uint32_t a) { return false; }
uint32_t TechnoClass::getSpecialValue(uint32_t a, uint32_t b) { return 0; }
bool TechnoClass::canCrush(uint32_t a) { return false; }
int TechnoClass::getCrewCount() const { return 0; }
int TechnoClass::getAntiAirValue() const { return 0; }
int TechnoClass::getAntiArmorValue() const { return 0; }
int TechnoClass::getAntiInfantryValue() const { return 0; }
void TechnoClass::gotHijacked() {}
int TechnoClass::selectNavalTargeting(AbstractClass* target) const { return 0; }
int TechnoClass::getZAdjustment() const { return 0; }
ZGradient TechnoClass::GetZGradient() const { return (ZGradient)(-1); }
CellStruct* TechnoClass::GetSomeCellStruct() const { return nullptr; }
void TechnoClass::SetSomeCellStruct(CellStruct* buffer) {}
CellStruct* TechnoClass::getOccupiedCell(CellStruct* buffer, uint32_t a, uint32_t b) const { return nullptr; }
CoordStruct* TechnoClass::getTurretCoords(CoordStruct* buffer, uint32_t a) const { return nullptr; }
uint32_t TechnoClass::getWeaponRangeValue(uint32_t a, uint32_t b) const { return 0; }
DirStruct* TechnoClass::GetRealFacing(DirStruct* buffer) const { return nullptr; }
InfantryTypeClass* TechnoClass::GetCrew() const { return nullptr; }
bool TechnoClass::isInAirAlt() const { return false; }
int TechnoClass::GetROF(int weapon) const { return 0; }
int TechnoClass::GetGuardRange(int unknown) const { return 0; }
bool TechnoClass::canEnterTransport() const { return false; }
bool TechnoClass::IsRadarVisible(int* out_detection) const { return false; }
bool TechnoClass::IsSensorVisibleToPlayer() const { return false; }
bool TechnoClass::IsSensorVisibleToHouse(HouseClass* house) const { return false; }
bool TechnoClass::IsEngineer() const { return false; }
void TechnoClass::ProceedToNextPlanningWaypoint() {}
uint32_t TechnoClass::ScanForTiberium(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
bool TechnoClass::isPowerOnline() const { return true; }
void TechnoClass::QueueVoice(int idx_voc) {}
int TechnoClass::VoiceEnter() { return 0; }
int TechnoClass::VoiceHarvest() { return 0; }
int TechnoClass::VoiceSelect() { return 0; }
int TechnoClass::VoiceCapture() { return 0; }
int TechnoClass::VoiceMove() { return 0; }
int TechnoClass::VoiceDeploy() { return 0; }
int TechnoClass::VoiceAttack(ObjectClass* target) { return 0; }
bool TechnoClass::ClickedEvent(NetworkEvents event) { return false; }
bool TechnoClass::ClickedMission(Mission mission, ObjectClass* target, CellClass* target_cell, CellClass* nearest_target_cell) { return false; }
bool TechnoClass::isUnderEmp() const { return false; }
bool TechnoClass::isParalyzed() const { return false; }
bool TechnoClass::canCheer() const { return false; }
void TechnoClass::Cheer(bool force) {}
int TechnoClass::GetDefaultSpeed() const { return 0; }
bool TechnoClass::CanDisguiseAs(AbstractClass* target) const { return false; }
bool TechnoClass::TargetAndEstimateDamage(uint32_t a, uint32_t b) { return false; }
uint32_t TechnoClass::getDamageReduction() { return 0; }
bool TechnoClass::TriggersCellInset(AbstractClass* target) { return false; }
bool TechnoClass::IsCloseEnough(AbstractClass* target, int weapon_idx) const { return false; }
bool TechnoClass::IsCloseEnoughToAttackCoords(const CoordStruct& coords) const { return false; }
uint32_t TechnoClass::getSightRange(uint32_t a) const { return 0; }
bool TechnoClass::SetOwningHouse(HouseClass* house, bool announce) { return false; }
void TechnoClass::onHouseChange(uint32_t a, uint32_t b, uint32_t c) {}
bool TechnoClass::Crash(ObjectClass* killer) { return false; }
bool TechnoClass::isAreaFire() const { return false; }
int TechnoClass::isNotSprayAttack() const { return 0; }
int TechnoClass::canAct() { return 0; }
int TechnoClass::isNotSprayAttack2() const { return 0; }
WeaponStruct* TechnoClass::GetDeployWeapon() const { return nullptr; }
WeaponStruct* TechnoClass::GetTurretWeapon() const { return nullptr; }
WeaponStruct* TechnoClass::GetWeapon(int weapon_index) const { return nullptr; }
bool TechnoClass::hasTurret() const { return false; }
bool TechnoClass::canOccupyFire() const { return false; }
int TechnoClass::getOccupyRangeBonus() const { return 0; }
int TechnoClass::getOccupantCount() const { return 0; }
void TechnoClass::OnFinishRepair() {}
void TechnoClass::onBridgeRepair() {}
void TechnoClass::Sensed() {}
void TechnoClass::onReloadComplete() {}
CoordStruct* TechnoClass::GetTargetCoords(CoordStruct* pCrd) const { return nullptr; }
bool TechnoClass::IsNotWarpingIn() const { return false; }
bool TechnoClass::canChronoShift(uint32_t dwUnk) const { return false; }
void TechnoClass::DrawActionLines(bool force, uint32_t dwUnk2) {}
uint32_t TechnoClass::GetDisguiseFlags(uint32_t existingFlags) const { return 0; }
bool TechnoClass::isClearlyVisibleTo(HouseClass* house) const { return false; }
void TechnoClass::onSelect(uint32_t a, uint32_t b) {}
void TechnoClass::DrawHealthBar(Point2D* pLocation, RectangleStruct* pBounds, bool bUnk3) const {}
void TechnoClass::DrawPipScalePips(Point2D* pLocation, Point2D* pOriginalLocation, RectangleStruct* pBounds) const {}
void TechnoClass::DrawVeterancyPips(Point2D* pLocation, RectangleStruct* pBounds) const {}
void TechnoClass::DrawExtraInfo(Point2D const& location, Point2D const& originalLocation, RectangleStruct const& bounds) const {}
uint32_t TechnoClass::getSight(uint32_t dwUnk) const { return 0; }
void TechnoClass::UpdateRefinerySmokeSystems() {}
uint32_t TechnoClass::DisguiseAs(AbstractClass* pTarget) { return 0; }
void TechnoClass::ClearDisguise() {}
bool TechnoClass::IsItTimeForIdleActionYet() const { return false; }
bool TechnoClass::UpdateIdleAction() { return false; }
void TechnoClass::onDamage(uint32_t dwUnk) {}
bool TechnoClass::canRecruit(uint32_t dwUnk, uint32_t dwUnk2) { return false; }
void TechnoClass::onPlacement(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {}
void TechnoClass::onRadarEvent(uint32_t a) {}
void TechnoClass::onSpawn() {}
bool TechnoClass::canSpawn() const { return false; }
bool TechnoClass::isSpawning() const { return false; }
int TechnoClass::getSpawnCount() const { return 0; }
CoordStruct* TechnoClass::getSpawnCoords(CoordStruct* out) { return nullptr; }
uint32_t TechnoClass::processSpawn() { return 0; }
bool TechnoClass::canAttackOnTheMove() const { return false; }
bool TechnoClass::canTarget() const { return false; }
bool TechnoClass::selectTarget() { return false; }
void TechnoClass::onTargetChange() {}
bool TechnoClass::canFire() { return false; }
int TechnoClass::ApplyIronCurtain() { return 0; }
int TechnoClass::ReturnToBase() { return 0; }
int TechnoClass::ReturnToBaseAndReload() { return 0; }
int TechnoClass::ScatterFromThreat() { return 0; }
int TechnoClass::ExecuteMissionCommand() { return 0; }
int TechnoClass::FindNearbyBuildCell() { return -1; }
int TechnoClass::FindClosestPlacementCell() { return -1; }
int TechnoClass::GetTurretFacing() const { return 0; }
void TechnoClass::ComputeTeamAttackPriority() {}
int TechnoClass::GetAutoFireDirection() const { return 0; }
int TechnoClass::sub_41B7D0() { return 0; }
bool TechnoClass::HasOnlyOneGarrisonSlot() const { return false; }
int TechnoClass::sub_41B840() { return 0; }
int TechnoClass::sub_41B860() { return 0; }
int TechnoClass::sub_41B9E0() { return 0; }
bool TechnoClass::CreateWarheadDamageEffect() { return false; }
void TechnoClass::sub_41BEF0() {}
void TechnoClass::vt_entry_428() {}
int TechnoClass::vt_entry_434() { return 0; }
int TechnoClass::GetBodyFacing() const { return 0; }
int TechnoClass::sub_41C640() { return 0; }
int TechnoClass::sub_41C650() { return 0; }
int TechnoClass::sub_41C660() { return 0; }
int TechnoClass::sub_41C670() { return 0; }
int TechnoClass::sub_41C680() { return 0; }
int TechnoClass::sub_41C690() { return 0; }
int TechnoClass::ApplyDamageEffects() { return 0; }
int TechnoClass::sub_5439080() { return 0; }
int TechnoClass::RemoveFromDynamicVector() { return 0; }
void TechnoClass::ComputeTargetAngle() {}
int TechnoClass::StartOrResumeProduction() { return 0; }
int TechnoClass::GetTurretScreenPos() const { return 0; }
void TechnoClass::ProcessMissionDeploy() {}
int TechnoClass::EvacuateFootprintCells() { return 0; }
int TechnoClass::MissionStubReturnZero4() { return 0; }
bool TechnoClass::StubReturnFalse2() { return false; }
int TechnoClass::sub_546B270() { return 0; }
int TechnoClass::sub_54722D0() { return 0; }
int TechnoClass::IndexOf() { return 0; }
int TechnoClass::CalcFacingFromMatrix() const { return 0; }
void TechnoClass::CreateTrailParticle() {}
int TechnoClass::sub_4C2BD0() { return 0; }
int TechnoClass::UpdateThunk() { return 0; }
int TechnoClass::GetData() const { return 0; }
int TechnoClass::sub_54A50F0() { return 0; }
int TechnoClass::CreatePlanningNode() { return 0; }
int TechnoClass::GetBuildCost() const { return 0; }
int TechnoClass::CheckState1() const { return false; }
int TechnoClass::CheckState2() const { return false; }
int TechnoClass::StubReturn450() { return 0; }
void TechnoClass::vt_entry_448() {}
int TechnoClass::sub_54D28C0() { return 0; }
int TechnoClass::GetTypeFlag() const { return 0; }
int TechnoClass::sub_5505180() { return 0; }
int TechnoClass::FindClosestBuilding() { return -1; }
int TechnoClass::FindBestMatch() { return -1; }
int TechnoClass::FindClosestInfantry() { return -1; }
int TechnoClass::FindClosestUnit() { return -1; }
int TechnoClass::FindBestMovementDirection() { return -1; }
int TechnoClass::vt_entry_4A8() { return 0; }
int TechnoClass::vt_entry_4AC() { return 0; }
int TechnoClass::vt_entry_4B0() { return 0; }
int TechnoClass::vt_entry_4B4() { return 0; }
int TechnoClass::vt_entry_4B8() { return 0; }
int TechnoClass::vt_entry_4C4() { return 0; }
int TechnoClass::vt_entry_4C8() { return 0; }
int TechnoClass::vt_entry_4D0() { return 0; }
int TechnoClass::GetAnimationValue() const { return 0; }
int TechnoClass::FindDeployDestination() { return -1; }
int TechnoClass::sub_550D9C0() { return 0; }
int TechnoClass::sub_550D9D0() { return 0; }
int TechnoClass::MapHouseRelationIndex() { return 0; }
int TechnoClass::GetDamageMultiplier() const { return 0; }
int TechnoClass::ProcessTarget() { return 0; }
int TechnoClass::sub_55224F0() { return 0; }
int TechnoClass::GetDeployCoords() { return 0; }
int TechnoClass::CanBePermaMC() const { return false; }
int TechnoClass::GarrisonBuilding() { return 0; }
int TechnoClass::IsMission27to30() const { return false; }
int TechnoClass::HandleSpecialAction() { return 0; }
int TechnoClass::IsEnteringOrCapturingStructure() const { return false; }
// 0x5f5390
void TechnoClass::CreateDestructionEffect() {
// [IDA decompile]
int __thiscall TechnoClass::CreateDestructionEffect(#374 *this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  void **v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  void **v14; // ecx
  void **v15; // ecx
  void **v16; // ecx
  void **v17; // ecx
  void **v18; // ecx
  void **v19; // ecx
  void **v20; // ecx
  int v21; // ecx
  void **v22; // ecx
  void **v23; // ecx
  int v24; // [esp+10h] [ebp-14h]
  int v25; // [esp+14h] [ebp-10h]
  int v26[3]; // [esp+18h] [ebp-Ch] BYREF
  int *v27; // [esp+28h] [ebp+4h]
  int v28; // [esp+2Ch] [ebp+8h]
  int v29; // [esp+30h] [ebp+Ch]
  int v30; // [esp+34h] [ebp+10h]
  char v31; // [esp+38h] [ebp+14h]
  int v32; // [esp+38h] [ebp+14h]
  int v33; // [esp+40h] [ebp+1Ch]

  v24 = 0;
  v25 = *((_DWORD *)this + 27);
  if ( v25 <= 0 || !*v27 || !v31 && *(_BYTE *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 563) )
    return v24;
  v2 = *(_DWORD *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 160);
  if ( !v31 )
  {
    v3 = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this);
    *v27 = ComputeTechnoClassDamageFalloff(*v27, v29, *(_DWORD *)(v3 + 156), v28);
  }
  if ( this
    && (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) == 6
    && !*(_BYTE *)(*((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) == 6
                   ? (_DWORD *)((char *)this + 1312)
                   : (_DWORD *)1312)
                 + 5495) )
  {
    v4 = *v27;
    if ( *v27 < 1 )
      v4 = 1;
    *v27 = v4;
  }
  v5 = *v27;
  if ( !*v27 )
    return 0;
  if ( *v27 >= 0 )
  {
    v24 = 1;
    if ( v25 <= v5 )
    {
      *v27 = v25;
    }
    else if ( v25 >= v2 >> 1 && v25 - v5 < v2 >> 1 )
    {
      v24 = 2;
    }
    v8 = (double)v2 * *(double *)(MEMORY[0x87F7E8][7806] + 5896);
    if ( (double)v25 > v8 && (double)(v25 - *v27) < v8 )
      v24 = 3;
    v9 = v25 - *v27;
    *((_DWORD *)this + 27) = v9;
    if ( v9 > 0
      || (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) != 15
      || v31
      || !*(_BYTE *)(*((_DWORD *)this + 432) + 3756)
      || *((_BYTE *)this + 1755) )
    {
      v13 = v24;
    }
    else
    {
      v10 = (void **)__2_YAPAXI_Z(456);
      if ( v10 )
      {
        v26[0] = *((_DWORD *)this + 39);
        v26[1] = *((_DWORD *)this + 40);
        v26[2] = *((_DWORD *)this + 41);
        AnimClass::ctor(v10, *(void **)(MEMORY[0x87F7E8][7806] + 156), v26, 0, 1, (void *)0x600, 0, 0);
      }
      v11 = Math::RoundToInt((double)*(int *)(*((_DWORD *)this + 432) + 160) * 0.25);
      *((_DWORD *)this + 27) = v11;
      if ( v11 <= 1 )
        v11 = 1;
      v12 = *(_DWORD *)this;
      *((_DWORD *)this + 27) = v11;
      *((_BYTE *)this + 1755) = 1;
      (*(void (__thiscall **)(#374 *, int, int, _DWORD))(v12 + 1368))(this, 6, 1, 0);
      v13 = 3;
      v24 = 3;
    }
    v32 = *((_DWORD *)this + 27);
    if ( v13 == 2 )
    {
      if ( v30 )
      {
        v14 = (void **)*((_DWORD *)this + 13);
        if ( v14 )
          TeamClass::Update_0(v14, 39, (int)this, dword_A8ED54[51587], 0, 0);
      }
      if ( !*((_BYTE *)this + 144) )
        return 5;
      v15 = (void **)*((_DWORD *)this + 13);
      if ( v15 )
        TeamClass::Update_0(v15, 42, (int)this, dword_A8ED54[51587], 0, 0);
    }
    if ( *((_BYTE *)this + 144) )
    {
      if ( v13 == 3 )
      {
        if ( v30 )
        {
          v16 = (void **)*((_DWORD *)this + 13);
          if ( v16 )
            TeamClass::Update_0(v16, 40, (int)this, dword_A8ED54[51587], 0, 0);
        }
        if ( !*((_BYTE *)this + 144) )
          return 5;
        v17 = (void **)*((_DWORD *)this + 13);
        if ( v17 )
          TeamClass::Update_0(v17, 43, (int)this, dword_A8ED54[51587], 0, 0);
      }
      if ( *((_BYTE *)this + 144) )
      {
        if ( *((_DWORD *)this + 27) != v25
          && (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this)
          && v25 == *(_DWORD *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 160) )
        {
          if ( v30 )
          {
            v18 = (void **)*((_DWORD *)this + 13);
            if ( v18 )
              TeamClass::Update_0(v18, 38, (int)this, dword_A8ED54[51587], 0, 0);
          }
          v19 = (void **)*((_DWORD *)this + 13);
          if ( v19 && *((_BYTE *)this + 144) )
            TeamClass::Update_0(v19, 41, (int)this, dword_A8ED54[51587], 0, 0);
          v20 = (void **)*((_DWORD *)this + 13);
          if ( v20 )
          {
            if ( !*((_BYTE *)this + 144) )
              return 5;
            if ( v30 )
              TeamClass::Update_0(v20, 41, (int)this, dword_A8ED54[51587], 0, v30);
          }
        }
        if ( *((_BYTE *)this + 144) && (v32 <= 0 || *((int *)this + 27) > 0) )
        {
          v21 = 0;
          if ( !*((_DWORD *)this + 27) )
          {
            if ( v30 )
              v21 = *(_DWORD *)(v30 + 540);
            if ( !v33 || v30 && v33 == v21 )
              (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 224))(this, v30);
            else
              (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 228))(this, v33);
            v13 = 4;
            v24 = 4;
            (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 220))(this, 1);
          }
          if ( *((_BYTE *)this + 144) )
          {
            if ( v30 )
            {
              v22 = (void **)*((_DWORD *)this + 13);
              if ( v22 )
              {
                if ( v13 != 4 )
                  TeamClass::Update_0(v22, 6, (int)this, dword_A8ED54[51587], 0, v30);
              }
            }
            if ( *((_BYTE *)this + 144) )
            {
              if ( v30 )
              {
                v23 = (void **)*((_DWORD *)this + 13);
                if ( v23 )
                {
                  if ( v13 != 4 )
                    TeamClass::Update_0(v23, 44, (int)this, dword_A8ED54[51587], 0, v30);
                }
              }
              if ( *((_BYTE *)this + 144) && *((_BYTE *)this + 131) )
                (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 292))(this, 2);
            }
          }
          return v24;
        }
      }
    }
    return 5;
  }
  v7 = *((_DWORD *)this + 27);
  *((_DWORD *)this + 27) = v7 - v5;
  if ( v7 - v5 > v2 )
    *((_DWORD *)this + 27) = v2;
  if ( v7 != *((_DWORD *)this + 27) )
    (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 328))(this, 7);
  return 0;
}

/* ASM:
sub     esp, 14h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     [esp+24h+var_14], 0
mov     eax, [esi+6Ch]
test    eax, eax
mov     [esp+24h+var_10], eax
jle     loc_5F5830
mov     edi, [esp+24h+arg_0]
cmp     dword ptr [edi], 0
jz      loc_5F5830
mov     bl, byte ptr [esp+24h+arg_10]
test    bl, bl
jnz     short loc_5F53DB
mov     eax, [esi]
call    dword ptr [eax+88h]
mov     cl, [eax+233h]
test    cl, cl
jnz     loc_5F5830

loc_5F53DB:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+33↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+88h]
mov     ebp, [eax+0A0h]
test    bl, bl
mov     [esp+24h+arg_10], ebp
jnz     short loc_5F5416
mov     eax, [esp+24h+arg_4]
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+88h]
mov     eax, [eax+9Ch]
mov     edx, [esp+28h+arg_8]
mov     ecx, [edi]
push    eax
call    ComputeTechnoClassDamageFalloff
mov     [edi], eax

loc_5F5416:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+61↑j
test    esi, esi
jz      short loc_5F5456
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_5F5456
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, esi
mov     ecx, [eax+520h]
mov     al, [ecx+1577h]
test    al, al
jnz     short loc_5F5456
mov     eax, [edi]
cmp     eax, 1
jge     short loc_5F5454
mov     eax, 1

loc_5F5454:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+BD↑j
mov     [edi], eax

loc_5F5456:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+88↑j
; TechnoClass__CreateDestructionEffect+94↑j ...
mov     ecx, [edi]
test    ecx, ecx
jnz     short loc_5F5468
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 14h
retn    1Ch
; ---------------------------------------------------------------------------

loc_5F5468:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+CA↑j
jge     short loc_5F5498
mov     edx, [esi+6Ch]
mov     eax, edx
sub     eax, ecx
cmp     eax, ebp
mov     [esi+6Ch], eax
jle     short loc_5F547B
mov     [esi+6Ch], ebp

loc_5F547B:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+E6↑j
cmp     edx, [esi+6Ch]
jz      short loc_5F548C
mov     edx, [esi]
push    7
mov     ecx, esi
call    dword ptr [edx+148h]

loc_5F548C:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+EE↑j
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 14h
retn    1Ch
; ---------------------------------------------------------------------------

loc_5F5498:                             ; CODE XREF: TechnoClass__CreateDestructionEffect:loc_5F5468↑j
mov     edx, [esp+24h+var_10]
mov     [esp+24h+var_14], 1
cmp     edx, ecx
jle     short loc_5F54C2
mov     eax, ebp
sar     eax, 1
cmp     edx, eax
jl      short loc_5F54C4
mov     ebp, edx
sub     ebp, ecx
cmp     ebp, eax
jge     short loc_5F54C4
mov     [esp+24h+var_14], 2
jmp     short loc_5F54C4
; ---------------------------------------------------------------------------

loc_5F54C2:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+116↑j
mov     [edi], edx

loc_5F54C4:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+11E↑j
; TechnoClass__CreateDestructionEffect+126↑j ...
fild    [esp+24h+arg_10]
mov     eax, ds:8871E0h
fmul    qword ptr [eax+1708h]
fild    [esp+24h+var_10]
fcomp   st(1)
fnstsw  ax
test    ah, 41h
jnz     short loc_5F5503
mov     eax, [edi]
mov     ecx, edx
sub     ecx, eax
mov     [esp+24h+arg_10], ecx
fild    [esp+24h+arg_10]
fcomp   st(1)
fnstsw  ax
test    ah, 1
fstp    st
jz      short loc_5F5505
mov     [esp+24h+var_14], 3
jmp     short loc_5F5505
; ---------------------------------------------------------------------------

loc_5F5503:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+14E↑j
fstp    st

loc_5F5505:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+167↑j
; TechnoClass__CreateDestructionEffect+171↑j
mov     eax, edx
mov     edx, [edi]
sub     eax, edx
test    eax, eax
mov     [esi+6Ch], eax
jg      loc_5F55EA
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     loc_5F55EA
test    bl, bl
jnz     loc_5F55EA
mov     eax, [esi+6C0h]
mov     cl, [eax+0EACh]
test    cl, cl
jz      loc_5F55EA
mov     al, [esi+6DBh]
test    al, al
jnz     loc_5F55EA
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_5F55A1
lea     ecx, [esi+9Ch]
push    0               ; char
push    0               ; int
push    600h            ; int
mov     edx, [ecx]
push    1               ; int
mov     [esp+34h+var_C], edx
push    0               ; int
mov     edx, [ecx+4]
mov     [esp+38h+var_8], edx
lea     edx, [esp+38h+var_C]
mov     ecx, [ecx+8]
push    edx             ; int
mov     [esp+3Ch+var_4], ecx
mov     ecx, ds:8871E0h
mov     edx, [ecx+9Ch]
mov     ecx, eax        ; void **
push    edx             ; int
call    AnimClass__ctor

loc_5F55A1:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+1CF↑j
mov     eax, [esi+6C0h]
fild    dword ptr [eax+0A0h]
fmul    ds:dbl_7EF250
call    Math__RoundToInt
cmp     eax, 1
mov     [esi+6Ch], eax
jg      short loc_5F55C5
mov     eax, 1

loc_5F55C5:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+22E↑j
mov     edx, [esi]
push    0
push    1
push    6
mov     ecx, esi
mov     [esi+6Ch], eax
mov     byte ptr [esi+6DBh], 1
call    dword ptr [edx+558h]
mov     ebp, 3
mov     [esp+24h+var_14], ebp
jmp     short loc_5F55EE
; ---------------------------------------------------------------------------

loc_5F55EA:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+180↑j
; TechnoClass__CreateDestructionEffect+190↑j ...
mov     ebp, [esp+24h+var_14]

loc_5F55EE:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+258↑j
mov     eax, [esi+6Ch]
mov     edi, [esp+24h+arg_C]
cmp     ebp, 2
mov     [esp+24h+arg_10], eax
jnz     short loc_5F5643
test    edi, edi
jz      short loc_5F561C
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F561C
mov     edx, dword_A8ED54+3260Ch
push    0               ; int
push    0               ; int
push    edx             ; int
push    esi             ; int
push    27h ; '''       ; int
call    TeamClass__Update_0

loc_5F561C:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+270↑j
; TechnoClass__CreateDestructionEffect+277↑j
mov     al, [esi+90h]
test    al, al
jz      loc_5F583E
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F5643
mov     eax, dword_A8ED54+3260Ch
push    0               ; int
push    0               ; int
push    eax             ; int
push    esi             ; int
push    2Ah ; '*'       ; int
call    TeamClass__Update_0

loc_5F5643:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+26C↑j
; TechnoClass__CreateDestructionEffect+29F↑j
mov     al, [esi+90h]
test    al, al
jz      loc_5F583E
cmp     ebp, 3
jnz     short loc_5F569B
test    edi, edi
jz      short loc_5F5674
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F5674
mov     edx, dword_A8ED54+3260Ch
push    0               ; int
push    0               ; int
push    edx             ; int
push    esi             ; int
push    28h ; '('       ; int
call    TeamClass__Update_0

loc_5F5674:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+2C8↑j
; TechnoClass__CreateDestructionEffect+2CF↑j
mov     al, [esi+90h]
test    al, al
jz      loc_5F583E
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F569B
mov     eax, dword_A8ED54+3260Ch
push    0               ; int
push    0               ; int
push    eax             ; int
push    esi             ; int
push    2Bh ; '+'       ; int
call    TeamClass__Update_0

loc_5F569B:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+2C4↑j
; TechnoClass__CreateDestructionEffect+2F7↑j
mov     al, [esi+90h]
test    al, al
jz      loc_5F583E
mov     ebx, [esp+24h+var_10]
mov     eax, [esi+6Ch]
cmp     eax, ebx
jz      loc_5F5744
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+88h]
test    eax, eax
jz      short loc_5F5744
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+88h]
cmp     ebx, [eax+0A0h]
jnz     short loc_5F5744
test    edi, edi
jz      short loc_5F56F6
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F56F6
mov     edx, dword_A8ED54+3260Ch
push    0               ; int
push    0               ; int
push    edx             ; int
push    esi             ; int
push    26h ; '&'       ; int
call    TeamClass__Update_0

loc_5F56F6:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+34A↑j
; TechnoClass__CreateDestructionEffect+351↑j
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F5719
mov     al, [esi+90h]
test    al, al
jz      short loc_5F5719
mov     eax, dword_A8ED54+3260Ch
push    0               ; int
push    0               ; int
push    eax             ; int
push    esi             ; int
push    29h ; ')'       ; int
call    TeamClass__Update_0

loc_5F5719:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+36B↑j
; TechnoClass__CreateDestructionEffect+375↑j
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F5744
mov     al, [esi+90h]
test    al, al
jz      loc_5F583E
test    edi, edi
jz      short loc_5F5744
mov     edx, dword_A8ED54+3260Ch
push    edi             ; int
push    0               ; int
push    edx             ; int
push    esi             ; int
push    29h ; ')'       ; int
call    TeamClass__Update_0

loc_5F5744:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+322↑j
; TechnoClass__CreateDestructionEffect+334↑j ...
mov     al, [esi+90h]
test    al, al
jz      loc_5F583E
mov     eax, [esp+24h+arg_10]
test    eax, eax
jle     short loc_5F5765
mov     eax, [esi+6Ch]
test    eax, eax
jle     loc_5F583E

loc_5F5765:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+3C8↑j
mov     eax, [esi+6Ch]
xor     ecx, ecx
test    eax, eax
jnz     short loc_5F57B5
test    edi, edi
jz      short loc_5F5778
mov     ecx, [edi+21Ch]

loc_5F5778:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+3E0↑j
mov     eax, [esp+24h+arg_18]
test    eax, eax
jz      short loc_5F5795
test    edi, edi
jz      short loc_5F5788
cmp     eax, ecx
jz      short loc_5F5795

loc_5F5788:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+3F2↑j
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+0E4h]
jmp     short loc_5F57A0
; ---------------------------------------------------------------------------

loc_5F5795:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+3EE↑j
; TechnoClass__CreateDestructionEffect+3F6↑j
mov     eax, [esi]
push    edi
mov     ecx, esi
call    dword ptr [eax+0E0h]

loc_5F57A0:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+403↑j
mov     edx, [esi]
mov     ebp, 4
push    1
mov     ecx, esi
mov     [esp+28h+var_14], ebp
call    dword ptr [edx+0DCh]

loc_5F57B5:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+3DC↑j
mov     al, [esi+90h]
test    al, al
jz      short loc_5F5830
test    edi, edi
jz      short loc_5F57E0
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F57E0
cmp     ebp, 4
jz      short loc_5F57E0
mov     eax, dword_A8ED54+3260Ch
push    edi             ; int
push    0               ; int
push    eax             ; int
push    esi             ; int
push    6               ; int
call    TeamClass__Update_0

loc_5F57E0:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+431↑j
; TechnoClass__CreateDestructionEffect+438↑j ...
mov     al, [esi+90h]
test    al, al
jz      short loc_5F5830
test    edi, edi
jz      short loc_5F580C
mov     ecx, [esi+34h]  ; void **
test    ecx, ecx
jz      short loc_5F580C
cmp     ebp, 4
jz      short loc_5F580C
mov     edx, dword_A8ED54+3260Ch
push    edi             ; int
push    0               ; int
push    edx             ; int
push    esi             ; int
push    2Ch ; ','       ; int
call    TeamClass__Update_0

loc_5F580C:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+45C↑j
; TechnoClass__CreateDestructionEffect+463↑j ...
mov     al, [esi+90h]
test    al, al
jz      short loc_5F5830
test    ebp, ebp
jz      short loc_5F5830
mov     al, [esi+83h]
test    al, al
jz      short loc_5F5830
mov     eax, [esi]
push    2
mov     ecx, esi
call    dword ptr [eax+124h]

loc_5F5830:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+1A↑j
; TechnoClass__CreateDestructionEffect+27↑j ...
mov     eax, [esp+24h+var_14]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 14h
retn    1Ch
; ---------------------------------------------------------------------------

loc_5F583E:                             ; CODE XREF: TechnoClass__CreateDestructionEffect+294↑j
; TechnoClass__CreateDestructionEffect+2BB↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 5
pop     ebx
add     esp, 14h
retn    1Ch
*/
}
int TechnoClass::FindMatchingUnit() { return -1; }
int TechnoClass::ClearArrays() { return 0; }
int TechnoClass::ComputeScanRange() const { return 0; }
int TechnoClass::drawSelectionBox() { return 0; }
int TechnoClass::drawHealthBar() { return 0; }
int TechnoClass::sub_6594A0() { return 0; }
int TechnoClass::sub_6594C0() { return 0; }
int TechnoClass::sub_6594E0() { return 0; }
int TechnoClass::sub_6594F0() { return 0; }
int TechnoClass::drawMindControlPips() { return 0; }
int TechnoClass::drawPassengerPips() { return 0; }
int TechnoClass::ClearScriptPlanningData() { return 0; }
int TechnoClass::GetTileAnimationData() const { return 0; }
int TechnoClass::MutateAll() { return 0; }
int TechnoClass::RefreshDeployOccupierState() { return 0; }
int TechnoClass::CountPassengers() const { return 0; }
int TechnoClass::GetValue() const { return 0; }
int TechnoClass::ComputeTransform() { return 0; }
int TechnoClass::CanMoveToCell() const { return false; }
int TechnoClass::CanInitiateSell() const { return false; }
int TechnoClass::IsNotAircraftOrBuilding() const { return false; }
// 0x6f3330
int TechnoClass::SelectWeapon() {
// [IDA decompile]
int __thiscall TechnoClass::SelectWeapon(#377 *this)
{
  int v2; // eax
  int result; // eax
  int v4; // edi
  int v5; // ebx
  _BYTE *v6; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // eax
  bool v10; // bl
  _DWORD *v11; // [esp+1Ch] [ebp+4h]

  v2 = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this);
  if ( (unsigned __int8)HouseClass::HasPower(v2)
    && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3285) )
  {
    return *((_DWORD *)this + 78) != -1 ? *((_DWORD *)this + 78) : 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1024))(this) )
    return 0;
  v4 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 1016))(this, 1);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 1016))(this, 0);
  if ( !v5 || *(_BYTE *)(v4 + 310) || !v11 )
    return 0;
  if ( *((_BYTE *)this + 130) && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3408) != -1 )
    return *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3408);
  v6 = (v11[5] & 1) != 0 ? (_BYTE *)v11 : 0;
  if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3285) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(v4 + 172) + 364) )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6
        && *(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 ? v11 + 328 : (_DWORD *)1312) + 5495) )
      {
        v8 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11);
        if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*(v8 == 6 ? v11 : 0) + 132))(v8 == 6 ? v11 : 0) + 1517) )
        {
          v9 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11);
          return !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*(v9 == 6 ? v11 : 0) + 132))(v9 == 6 ? v11 : 0) + 1516);
        }
        return 1;
      }
    }
    else
    {
      if ( *(_BYTE *)(*(_DWORD *)(v5 + 172) + 347)
        && v6
        && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 6 )
      {
        return 1;
      }
      if ( *(_BYTE *)(v4 + 322)
        && v6
        && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 1519)
        && !*((_DWORD *)this + 115)
        && !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), (int)v6) )
      {
        return 1;
      }
      if ( *(_BYTE *)(v4 + 336) && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 16 )
        return 1;
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 44))(this) == 6 && *((_BYTE *)this + 1633) )
        return 1;
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6
        && Object::IsAlliedWithObjectSimpleHouse(*((_DWORD **)this + 135), v11)
        && *(_BYTE *)(*(_DWORD *)(v4 + 172) + 344)
        && *(_BYTE *)(v11[328] + 5493) )
      {
        return 1;
      }
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 44))(this) == 2 && *((_BYTE *)this + 1738) )
        return 1;
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 11
        && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0 && *(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3278))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11)
        && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 1540) == 2 )
      {
        return 1;
      }
      if ( v6
        && *(double *)(*(_DWORD *)(v4 + 172)
                     + 8 * *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 156)
                     + 160) != 0.0 )
      {
        if ( *(double *)(*(_DWORD *)(v5 + 172)
                       + 8 * *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 156)
                       + 160) == 0.0 )
          return 1;
        v10 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 2
           || *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 6;
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
          v10 = 0;
        if ( !v6[140] && v10 )
        {
          result = (*(int (__thiscall **)(#377 *, _DWORD *))(*(_DWORD *)this + 744))(this, v11);
          if ( result != -1 )
            return result;
          return 0;
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6)
          && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 1540) == 2 )
        {
          return 1;
        }
        if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676)
          && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
        {
          return 1;
        }
      }
    }
    return 0;
  }
  v7 = *((_DWORD *)this + 80);
  if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676)
    && v6
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
  {
    return 2 * v7 + 1;
  }
  else
  {
    return 2 * v7;
  }
}

/* ASM:
sub     esp, 8
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+84h]
mov     ecx, eax
call    HouseClass__HasPower
test    al, al
jz      short loc_6F3379
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CD5h]
test    cl, cl
jnz     short loc_6F3379
mov     esi, [esi+138h]
pop     edi
mov     eax, esi
inc     eax
neg     eax
sbb     eax, eax
and     eax, esi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3379:                             ; CODE XREF: TechnoClass__SelectWeapon+1A↑j
; TechnoClass__SelectWeapon+2E↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+400h]
test    al, al
jnz     loc_6F37AD
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     edi, [eax]
test    edi, edi
mov     [esp+18h+var_8], edi
jz      loc_6F37AD
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3F8h]
mov     ebx, [eax]
test    ebx, ebx
mov     [esp+18h+var_4], ebx
jz      loc_6F37AD
mov     al, [edi+136h]
test    al, al
jnz     loc_6F37AD
mov     edi, [esp+18h+arg_0]
test    edi, edi
jz      loc_6F37AD
mov     al, [esi+82h]
test    al, al
jz      short loc_6F3410
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+0D50h], 0FFFFFFFFh
jz      short loc_6F3410
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     eax, [eax+0D50h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3410:                             ; CODE XREF: TechnoClass__SelectWeapon+B1↑j
; TechnoClass__SelectWeapon+C4↑j
mov     cl, [edi+14h]
mov     edx, [esi]
and     cl, 1
neg     cl
sbb     ecx, ecx
and     ecx, edi
mov     ebp, ecx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CD5h]
test    cl, cl
jz      short loc_6F3477
mov     eax, [esp+18h+var_8]
mov     esi, [esi+140h]
mov     ecx, [eax+0A0h]
mov     al, [ecx+2A4h]
test    al, al
jz      short loc_6F346A
test    ebp, ebp
jz      short loc_6F346A
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+54h]
test    al, al
jz      short loc_6F346A
lea     eax, [esi+esi+1]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F346A:                             ; CODE XREF: TechnoClass__SelectWeapon+11A↑j
; TechnoClass__SelectWeapon+11E↑j ...
lea     eax, [esi+esi]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3477:                             ; CODE XREF: TechnoClass__SelectWeapon+100↑j
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0ACh]
mov     al, [ecx+16Ch]
test    al, al
jz      loc_6F3528
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_6F37AD
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, [eax+520h]
mov     al, [ecx+1577h]
test    al, al
jz      loc_6F37AD
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, eax
mov     edx, [eax]
call    dword ptr [edx+84h]
mov     cl, [eax+5EDh]
test    cl, cl
jz      loc_6F3807
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, eax
mov     edx, [eax]
call    dword ptr [edx+84h]
mov     cl, [eax+5ECh]
test    cl, cl
jnz     loc_6F37AD
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3528:                             ; CODE XREF: TechnoClass__SelectWeapon+159↑j
mov     eax, [ebx+0ACh]
mov     cl, [eax+15Bh]
test    cl, cl
jz      short loc_6F3558
test    ebp, ebp
jz      short loc_6F3558
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_6F3558
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3558:                             ; CODE XREF: TechnoClass__SelectWeapon+206↑j
; TechnoClass__SelectWeapon+20A↑j ...
mov     eax, [esp+18h+var_8]
mov     cl, [eax+142h]
test    cl, cl
jz      short loc_6F35A8
test    ebp, ebp
jz      short loc_6F35A8
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+84h]
mov     cl, [eax+5EFh]
test    cl, cl
jz      short loc_6F35A8
mov     eax, [esi+1CCh]
test    eax, eax
jnz     short loc_6F35A8
mov     ecx, [esi+21Ch]
push    ebp
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     short loc_6F35A8
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35A8:                             ; CODE XREF: TechnoClass__SelectWeapon+234↑j
; TechnoClass__SelectWeapon+238↑j ...
mov     eax, [esp+18h+var_8]
mov     cl, [eax+150h]
test    cl, cl
jz      short loc_6F35D4
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 10h
jnz     short loc_6F35D4
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35D4:                             ; CODE XREF: TechnoClass__SelectWeapon+284↑j
; TechnoClass__SelectWeapon+293↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_6F35F9
mov     al, [esi+661h]
test    al, al
jz      short loc_6F35F9
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35F9:                             ; CODE XREF: TechnoClass__SelectWeapon+2AE↑j
; TechnoClass__SelectWeapon+2B8↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_6F3648
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectSimpleHouse
test    al, al
jz      short loc_6F3648
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0ACh]
mov     al, [ecx+158h]
test    al, al
jz      short loc_6F3648
mov     edx, [edi+520h]
mov     al, [edx+1575h]
test    al, al
jz      short loc_6F3648
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3648:                             ; CODE XREF: TechnoClass__SelectWeapon+2D3↑j
; TechnoClass__SelectWeapon+2E3↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
mov     ebx, 2
cmp     eax, ebx
jnz     short loc_6F3671
mov     al, [esi+6CAh]
test    al, al
jz      short loc_6F3671
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3671:                             ; CODE XREF: TechnoClass__SelectWeapon+326↑j
; TechnoClass__SelectWeapon+330↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 0Bh
jnz     short loc_6F36DB
cmp     [edi+0ECh], ebx
jz      short loc_6F3690
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+50h]
test    al, al
jnz     short loc_6F36AF

loc_6F3690:                             ; CODE XREF: TechnoClass__SelectWeapon+353↑j
mov     eax, [edi+140h]
test    ah, 1
jz      short loc_6F36DB
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_6F36DB

loc_6F36AF:                             ; CODE XREF: TechnoClass__SelectWeapon+35E↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+54h]
test    al, al
jnz     short loc_6F36DB
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+604h], ebx
jnz     short loc_6F36DB
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F36DB:                             ; CODE XREF: TechnoClass__SelectWeapon+34B↑j
; TechnoClass__SelectWeapon+369↑j ...
test    ebp, ebp
jz      loc_6F37AD
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+84h]
mov     edx, [esp+18h+var_8]
mov     ecx, [eax+9Ch]
mov     eax, [edx+0ACh]
fld     qword ptr [eax+ecx*8+0A0h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 40h
jnz     loc_6F37AD
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+84h]
mov     ecx, [esp+18h+var_4]
mov     eax, [eax+9Ch]
mov     edx, [ecx+0ACh]
fld     qword ptr [edx+eax*8+0A0h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 40h
jz      short loc_6F3754
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3754:                             ; CODE XREF: TechnoClass__SelectWeapon+413↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+1BCh]
cmp     [eax+0ECh], ebx
jz      short loc_6F377F
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1BCh]
cmp     dword ptr [eax+0ECh], 6
jz      short loc_6F377F
xor     bl, bl
jmp     short loc_6F3781
; ---------------------------------------------------------------------------

loc_6F377F:                             ; CODE XREF: TechnoClass__SelectWeapon+435↑j
; TechnoClass__SelectWeapon+449↑j
mov     bl, 1

loc_6F3781:                             ; CODE XREF: TechnoClass__SelectWeapon+44D↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+54h]
test    al, al
jz      short loc_6F378F
xor     bl, bl

loc_6F378F:                             ; CODE XREF: TechnoClass__SelectWeapon+45B↑j
mov     al, [ebp+8Ch]
test    al, al
jnz     short loc_6F37B9
test    bl, bl
jz      short loc_6F37B9
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E8h]
cmp     eax, 0FFFFFFFFh
jnz     short loc_6F37AF

loc_6F37AD:                             ; CODE XREF: TechnoClass__SelectWeapon+55↑j
; TechnoClass__SelectWeapon+6F↑j ...
xor     eax, eax

loc_6F37AF:                             ; CODE XREF: TechnoClass__SelectWeapon+47B↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F37B9:                             ; CODE XREF: TechnoClass__SelectWeapon+467↑j
; TechnoClass__SelectWeapon+46B↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+54h]
test    al, al
jnz     short loc_6F37E7
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+604h], 2
jnz     short loc_6F37E7
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F37E7:                             ; CODE XREF: TechnoClass__SelectWeapon+493↑j
; TechnoClass__SelectWeapon+4A6↑j
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0A0h]
mov     al, [ecx+2A4h]
test    al, al
jz      short loc_6F37AD
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+54h]
test    al, al
jz      short loc_6F37AD

loc_6F3807:                             ; CODE XREF: TechnoClass__SelectWeapon+1B9↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
*/
}
int TechnoClass::CanTargetHouse() const { return false; }
int TechnoClass::CanSelfRepair() { return false; }
int TechnoClass::Mission_RepairDispatch() { return 0; }
int TechnoClass::PushNearbyUnits() { return 0; }
int TechnoClass::SetFocus() { return 0; }
int TechnoClass::SetHouseFlag() { return 0; }
int TechnoClass::ProcessAIDecision() { return 0; }
int TechnoClass::CheckPlayerOwned() const { return false; }
int TechnoClass::UpdateProdWithSound() { return 0; }
int TechnoClass::HasActiveParam() const { return false; }
int TechnoClass::HasOnlyOneGarrisonSlot2() const { return false; }
int TechnoClass::FindLowestDamage() { return -1; }
int TechnoClass::ProcessCapture() { return 0; }
int TechnoClass::GetRangeModifier() const { return 0; }
int TechnoClass::ShouldScanArea() const { return false; }
int TechnoClass::IsCloseEnoughToBuilding() const { return false; }
int TechnoClass::IsCellPassableFor() const { return false; }
int TechnoClass::IsPlayerCellPassable() const { return false; }
int TechnoClass::SetMoveDestination() { return 0; }
int TechnoClass::GetPrimaryTargetOrFallback() const { return 0; }
int TechnoClass::PickAlternateTarget() { return 0; }
int TechnoClass::SelectRandomTarget() { return 0; }
int TechnoClass::GetSecondaryTargetOrFallback() const { return 0; }
int TechnoClass::SetPositionAnimated() { return 0; }
int TechnoClass::GetTargetCellCenter() { return 0; }
int TechnoClass::ComputeSpeedFactor() { return 0; }
int TechnoClass::ComputeSpeedFactorEx() { return 0; }
int TechnoClass::CleanupDirection() { return 0; }
int TechnoClass::GetDeployProgressValue() const { return 0; }
int TechnoClass::ComputeAverageValue() const { return 0; }
int TechnoClass::GetGlobalValue() const { return 0; }
int TechnoClass::SetIdleState() { return 0; }
int TechnoClass::ComputeAimVector() { return 0; }
int TechnoClass::RevealAreaConditional() { return 0; }
int TechnoClass::GetCellCoordsV2() const { return 0; }
int TechnoClass::Vt46Thunk() { return 0; }
int TechnoClass::RevealAreaSmall() { return 0; }
int TechnoClass::ScanForEnemies() { return 0; }
int TechnoClass::GetTargetCoords() { return 0; }
int TechnoClass::CalcOffsetFacing() const { return 0; }
int TechnoClass::ShouldSelfHealOneStep() const { return false; }
int TechnoClass::ComputeThreatLevel() { return 0; }
int TechnoClass::CanBeTargeted() const { return false; }
int TechnoClass::GetCommandTooltip() const { return 0; }
int TechnoClass::ShouldBeCloaked() const { return false; }
int TechnoClass::ShouldNotBeCloaked() const { return false; }
int TechnoClass::SetTargetIfAllowed() { return 0; }
int TechnoClass::CanReceivePassengers() const { return false; }
int TechnoClass::GetTarget() const { return 0; }
int TechnoClass::GetID() const { return 0; }
int TechnoClass::GetSightRange() const { return 0; }
int TechnoClass::CheckAndFireAtTarget() { return 0; }
int TechnoClass::GattlingRateUp_GattlingRateDownReset() { return 0; }
int TechnoClass::GattlingValueRateDown_GattlingRateDownDelay() { return 0; }
int TechnoClass::SetMember81() { return 0; }
int TechnoClass::Deactivate() { return 0; }
int TechnoClass::Activate() { return 0; }
int TechnoClass::ActivateEffect() { return 0; }
int TechnoClass::IronCurtain() { return 0; }
int TechnoClass::InvulnerabilityIntensity_SetContext() { return 0; }
int TechnoClass::ResetTimer() { return 0; }
int TechnoClass::CalcAnimDelay() const { return 0; }
int TechnoClass::StepAnimFrame() { return 0; }
int TechnoClass::BeginFiringSequence() { return 0; }
int TechnoClass::CompleteFactoryProduction() { return 0; }
int TechnoClass::IsTimerExpired() const { return false; }
int TechnoClass::GetAudioEntry() const { return 0; }
int TechnoClass::GetTertiaryTargetOrFallback() const { return 0; }
int TechnoClass::VoiceAttack() { return 0; }
int TechnoClass::ResponseMove_Pickup() { return 0; }
int TechnoClass::Vt170() { return 0; }
int TechnoClass::CanAttack() const { return false; }
int TechnoClass::IsDeadOrInactive() const { return false; }
int TechnoClass::CalculateROF() { return 0; }
int TechnoClass::GetAmmoCount() const { return 0; }
int TechnoClass::GetAmmoCount_0() const { return 0; }
int TechnoClass::SelectAttackWeapon() { return 0; }
int TechnoClass::GetAverageDamageScore() const { return 0; }
int TechnoClass::ProcessSpecialUnitDeployCrush() { return 0; }
int TechnoClass::FireWeaponBurst() { return 0; }
int TechnoClass::GetWeaponRange(int weapon_index) const { return 0; }
int TechnoClass::FireWeapon() { return 0; }
int TechnoClass::CreateFireEffect() { return 0; }
int TechnoClass::CreateFireBeamEffect() { return 0; }
int TechnoClass::CreateFiringRadarBlip() { return 0; }
int TechnoClass::CreateRadarBlip() { return 0; }
int TechnoClass::GetFiringAngle() const { return 0; }
int TechnoClass::AssignTarget_SyncLog() { return 0; }
int TechnoClass::ProcessDeploymentState() { return 0; }
int TechnoClass::ComputeAudioFalloffDamage() { return 0; }
int TechnoClass::ComputeCombatDamage() { return 0; }
int TechnoClass::CheckFireCooldown() const { return false; }
int TechnoClass::CanDamageTarget() const { return false; }
int TechnoClass::COMStub_Return0_298() { return 0; }
int TechnoClass::HasPassengers() const { return false; }
int TechnoClass::COMStub_Return0_307() { return 0; }
int TechnoClass::sub_70F040() { return 0; }
int TechnoClass::ProcessCellClearance() { return 0; }
int TechnoClass::GetTypeVt40() const { return 0; }
int TechnoClass::GetMaxSpeed() const { return 0; }
int TechnoClass::DrainAmmo() { return 0; }
int TechnoClass::EjectPassengers() { return 0; }
int TechnoClass::RadarUpdateOn() { return 0; }
int TechnoClass::RadarUpdateOff() { return 0; }
int TechnoClass::RevealOwnCell() { return 0; }
int TechnoClass::ComputeDamage() { return 0; }
int TechnoClass::GetCostMultiplier() const { return 0; }
int TechnoClass::IsInRange() const { return false; }
int TechnoClass::GetCrew() { return 0; }
int TechnoClass::GetCrew_0() { return 0; }
int TechnoClass::GetCrewCount() { return 0; }
int TechnoClass::CheckCellPassable() const { return false; }
int TechnoClass::CheckCellPassable2() const { return false; }
int TechnoClass::CheckCellPassable3() const { return false; }
int TechnoClass::ValidateTarget() const { return false; }
int TechnoClass::GetBridgeDamageMult() const { return 0; }
int TechnoClass::CheckAndFireAtTarget2() { return 0; }
int TechnoClass::EvaluateTarget() { return 0; }
int TechnoClass::SelectAutoTarget_Start_AU() { return 0; }
int TechnoClass::CheckTargetLOS() const { return false; }
int TechnoClass::CheckTargetCell() const { return false; }
int TechnoClass::CheckPlacementTileMatch() const { return false; }
int TechnoClass::ComputeScanDistance() const { return 0; }
int TechnoClass::ComputeTotalPowerDrain() { return 0; }
int TechnoClass::EvaluateBuildingTarget() { return 0; }
int TechnoClass::GetBuildAnim() const { return 0; }
int TechnoClass::IsNotBusy() const { return false; }
int TechnoClass::EvaluateMission() { return 0; }
int TechnoClass::GetThreatValue() const { return 0; }
int TechnoClass::GetThreatValue_0() const { return 0; }
int TechnoClass::ProcessBorderTower() { return 0; }
int TechnoClass::HandleCursor() { return 0; }
int TechnoClass::HandleCursorClick() { return 0; }
int TechnoClass::ScanAdjacentCells2() { return 0; }
int TechnoClass::ScanNeighborCells() { return 0; }
int TechnoClass::IsValidBuildingPlacement() { return false; }
int TechnoClass::StartEffectAudio() { return 0; }
int TechnoClass::TransitionEffectState() { return 0; }
int TechnoClass::Vt279Thunk0() { return 0; }
int TechnoClass::UpdatePowerDrain() { return 0; }
int TechnoClass::UpdatePowered() { return 0; }
int TechnoClass::UpdateState() { return 0; }
int TechnoClass::UpdateUnitAnimation() { return 0; }
int TechnoClass::GetInfantryCursorAction() const { return 0; }
int TechnoClass::GetThreatValueEx() const { return 0; }
int TechnoClass::ComputeSlopeDifference() { return 0; }
int TechnoClass::ComputeSlopePenalty() { return 0; }
int TechnoClass::IsOwnedByHuman() const { return false; }
int TechnoClass::IsCapturableByPlayer() const { return false; }
int TechnoClass::IsC4AnimationActive() const { return false; }
int TechnoClass::CreateDeathAnim() { return 0; }
int TechnoClass::DispatchPlayerInput() { return 0; }
int TechnoClass::Deploy() { return 0; }
int TechnoClass::DeployIntoBuilding() { return 0; }
int TechnoClass::SpawnInfantryFromBuilding() { return 0; }
int TechnoClass::CleanupDeploy() { return 0; }
int TechnoClass::ClearAllTargets() { return 0; }
int TechnoClass::SelectAITarget() { return 0; }
int TechnoClass::ReturnCapturedFlag() { return 0; }
int TechnoClass::AreBuildingFlagsClear() const { return false; }
int TechnoClass::MarkCellImpassable() { return 0; }
int TechnoClass::ClearCellImpassable() { return 0; }
int TechnoClass::CaptureTurret() { return 0; }
int TechnoClass::TransferSlavedUnit() { return 0; }
int TechnoClass::TransferTurret() { return 0; }
int TechnoClass::ApplyObjectEffect() { return 0; }
int TechnoClass::IsGuardingTarget() const { return false; }
int TechnoClass::ProcessUnitSelfDestruct() { return 0; }
int TechnoClass::NotifyTeamOnDestruction() { return 0; }
int TechnoClass::RespondToDestruction() { return 0; }
int TechnoClass::GetWaypointCoords() const { return 0; }
int TechnoClass::Create() { return 0; }
int TechnoClass::CopyStateFrom() { return 0; }
int TechnoClass::ScalarDtor() { return 0; }
int TechnoClass::EnteredOpenTopped() { return 0; }
int TechnoClass::MarkPassengersAsExited() { return 0; }
int TechnoClass::ExitedOpenTopped() { return 0; }
int TechnoClass::GetMember388() const { return 0; }
int TechnoClass::GetBuildCost2() const { return 0; }
int TechnoClass::FindBestMatch2() { return -1; }
int TechnoClass::IsWaypointHidden() const { return false; }
int TechnoClass::LinkToBridge() { return 0; }
int TechnoClass::ResetDamageAccumulator() { return 0; }
int TechnoClass::UpdateBodyTilt() { return 0; }
int TechnoClass::CheckCliffTransition() const { return false; }
int TechnoClass::OnEnterCell() { return 0; }
int TechnoClass::sub_570DC50() { return 0; }
int TechnoClass::OwnerHasPower() const { return false; }
int TechnoClass::sub_570DCE0() { return 0; }
int TechnoClass::sub_570DCF0() { return 0; }
int TechnoClass::GetPoweredWeaponIndex() const { return 0; }
int TechnoClass::GetVt252Byte() const { return 0; }
int TechnoClass::vt_entry_3E8() { return 0; }
int TechnoClass::SetSpread() { return 0; }
int TechnoClass::DecCounter() { return 0; }
int TechnoClass::PlaceAtCell() { return 0; }
int TechnoClass::SelectVocOrSfx() { return 0; }
int TechnoClass::Update2() { return 0; }
int TechnoClass::GetAnimationFlags() const { return 0; }
int TechnoClass::GetTargetSpeedMultiplier() const { return 0; }
int TechnoClass::ProcessEnterTransport() { return 0; }
int TechnoClass::IsCloseEnoughToBuilding2() const { return false; }
int TechnoClass::IsDeployed() const { return false; }
int TechnoClass::CheckAdjacencyFlags() const { return false; }
int TechnoClass::IsProductionChainActive() const { return false; }
int TechnoClass::HasDeployFlags() const { return false; }
int TechnoClass::RemoveBuildingFromScripts() { return 0; }
int TechnoClass::FinishDeploy() { return 0; }
int TechnoClass::ValidateMoveType() { return 0; }
int TechnoClass::ComputeSlopePenalty2() { return 0; }
int TechnoClass::sub_740B10() { return 0; }
int TechnoClass::CheckRepairNeeded() const { return false; }
int TechnoClass::EnterRepairBuilding() { return 0; }
int TechnoClass::CheckUnitFireConstraints() const { return false; }
int TechnoClass::checkTargetValidity() { return 0; }
int TechnoClass::sub_7441B0() { return 0; }
int TechnoClass::sub_744180() { return 0; }
int TechnoClass::sub_744210() { return 0; }
int TechnoClass::sub_744270() { return 0; }
int TechnoClass::sub_744720() { return 0; }
int TechnoClass::sub_7440B0() { return 0; }
int TechnoClass::sub_744100() { return 0; }
int TechnoClass::SelectAutoTargetWithGarrison() { return 0; }
int TechnoClass::processParasiteAttachment() { return 0; }
int TechnoClass::sub_746420() { return 0; }
int TechnoClass::sub_7464E0() { return 0; }
int TechnoClass::sub_7465B0() { return 0; }
int TechnoClass::sub_7465F0() { return 0; }
int TechnoClass::sub_7463A0() { return 0; }
int TechnoClass::sub_746670() { return 0; }
int TechnoClass::sub_746720() { return 0; }
int TechnoClass::sub_746750() { return 0; }
int TechnoClass::sub_746B20() { return 0; }
int TechnoClass::sub_746C90() { return 0; }
int TechnoClass::sub_746CD0() { return 0; }
int TechnoClass::sub_746D00() { return 0; }
int TechnoClass::sub_746D60() { return 0; }
int TechnoClass::sub_746DB0() { return 0; }
int TechnoClass::sub_746E30() { return 0; }
int TechnoClass::sub_746EA0() { return 0; }
int TechnoClass::sub_746100() { return 0; }
int TechnoClass::sub_746F80() { return 0; }
int TechnoClass::sub_70F850() { return 0; }
int TechnoClass::sub_70FB50() { return 0; }
int TechnoClass::sub_70FC90() { return 0; }
int TechnoClass::sub_70FD70() { return 0; }
int TechnoClass::sub_70FEE0() { return 0; }
int TechnoClass::sub_710000() { return 0; }
int TechnoClass::sub_710470() { return 0; }
int TechnoClass::sub_7104A0() { return 0; }
int TechnoClass::sub_7104C0() { return 0; }
int TechnoClass::sub_7106E0() { return 0; }
int TechnoClass::sub_710F70() { return 0; }
int TechnoClass::sub_711E00() { return 0; }
int TechnoClass::sub_711EB0() { return 0; }
int TechnoClass::sub_73EFC0() { return 0; }
int TechnoClass::sub_7393C0() { return 0; }
int TechnoClass::sub_737BA0() { return 0; }
int TechnoClass::sub_738910() { return 0; }
int TechnoClass::GatherAllBuildings() { return 0; }
int TechnoClass::sub_732580() { return 0; }
int TechnoClass::sub_731CF0() { return 0; }
int TechnoClass::sub_729AA0() { return 0; }
int TechnoClass::sub_729480() { return 0; }
int TechnoClass::sub_71F010() { return 0; }
int TechnoClass::sub_71A130() { return 0; }
int TechnoClass::CalculateDamage() { return 0; }
int TechnoClass::UpdateBodyTilt2() { return 0; }
int TechnoClass::GattlingRateUp_GattlingRateDownReset2() { return 0; }
int TechnoClass::ApplySplashDamageToNeighbors() { return 0; }
int TechnoClass::ReceiveDamage_Shield() { return 0; }
int TechnoClass::sub_70B1D0() { return 0; }
int TechnoClass::sub_70B280() { return 0; }
int TechnoClass::sub_70B570() { return 0; }
int TechnoClass::sub_70BCB0() { return 0; }
int TechnoClass::sub_70BE80() { return 0; }
int TechnoClass::sub_70D1D0() { return 0; }
int TechnoClass::sub_70D990() { return 0; }
int TechnoClass::sub_70DE70() { return 0; }
int TechnoClass::sub_70DE00() { return 0; }
int TechnoClass::sub_70DD20() { return 0; }
int TechnoClass::sub_70DD50() { return 0; }
int TechnoClass::sub_70DDD0() { return 0; }
int TechnoClass::sub_70DE40() { return 0; }
int TechnoClass::sub_70E120() { return 0; }
int TechnoClass::sub_70E140() { return 0; }
int TechnoClass::sub_70E1A0() { return 0; }
int TechnoClass::sub_70E280() { return 0; }
int TechnoClass::sub_70E2B0() { return 0; }
int TechnoClass::sub_70E300() { return 0; }
int TechnoClass::sub_70E380() { return 0; }
int TechnoClass::sub_70E4B0() { return 0; }
int TechnoClass::sub_70EC0A() { return 0; }
int TechnoClass::sub_70ED10() { return 0; }
int TechnoClass::sub_70ED80() { return 0; }
int TechnoClass::sub_70EE30() { return 0; }
int TechnoClass::sub_70EFD0() { return 0; }
int TechnoClass::sub_70EF00() { return 0; }
int TechnoClass::sub_70F010() { return 0; }
int TechnoClass::sub_70F000() { return 0; }
int TechnoClass::sub_70ECE0() { return 0; }
int TechnoClass::sub_70CCC0() { return 0; }
int TechnoClass::sub_70CC90() { return 0; }
int TechnoClass::sub_70CD10() { return 0; }
int TechnoClass::sub_70D190() { return 0; }
int TechnoClass::sub_70D460() { return 0; }
int TechnoClass::sub_70D590() { return 0; }
int TechnoClass::sub_70D670() { return 0; }
int TechnoClass::sub_70D690() { return 0; }
int TechnoClass::sub_70D8F0() { return 0; }
int TechnoClass::sub_70DD90() { return 0; }
int TechnoClass::sub_70BE50() { return 0; }
int TechnoClass::sub_70C620() { return 0; }
int TechnoClass::sub_70C610() { return 0; }
int TechnoClass::GetIonCannonValue(AIDifficulty difficulty) const { return 0; }
DirStruct TechnoClass::getFacing() const { DirStruct ret; getFacing(&ret); return ret; }
DirStruct TechnoClass::GetRealFacing() const { DirStruct ret; GetRealFacing(&ret); return ret; }

} // namespace game
} // namespace ra2
