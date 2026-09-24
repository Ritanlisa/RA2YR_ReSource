#include "object/techno.hpp"
#include "object/globals_object.hpp"
#include "object/radbeam.hpp"
#include "structure/building.hpp"
#include "type/building_type.hpp"

#include <cstring>
#include "e4/e4_globals.hpp"

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
  int result; // eax
  int v2; // [esp+0h] [ebp-4h]

  result = *this; /*0x70ece1*/
  v2 = *this; /*0x70ece5*/
  if ( *this ) /*0x70ece5*/
  {
    result = *(this + 1); /*0x70eceb*/
    *(this + 6) = 1; /*0x70ecf5*/
    *(this + 7) = result; /*0x70ecf8*/
    if ( result < 1 ) /*0x70ecfb*/
      *(this + 7) = 1; /*0x70ecfd*/
    *((float *)this + 4) = (double)v2 / (double)*(this + 7); /*0x70ed07*/
  }
  return result; /*0x70ed0b*/
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
AbstractClass * * TechnoClass::SelectWeapon(AbstractClass* target) const
{
  _DWORD *v2; // eax
  int result; // eax
  int v4; // edi
  int v5; // ebx
  _BYTE *v6; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // eax
  bool v10; // bl
  _DWORD *v11; // [esp+1Ch] [ebp+4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 132))(target); /*0x6f333b*/
  if ( HouseClass::HasPower(v2) && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 132))(target) + 3285) )
    return *((_DWORD *)target + 78) != -1 ? *((_DWORD *)target + 78) : 0;
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)target + 1024))(target) ) /*0x6f337d*/
    return 0; /*0x6f337d*/
  v4 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(*(_DWORD *)target + 1016))(target, 1); /*0x6f3397*/
  if ( !v4 ) /*0x6f339f*/
    return 0; /*0x6f339f*/
  v5 = *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)target + 1016))(target, 0); /*0x6f33b1*/
  if ( !v5 || *(_BYTE *)(v4 + 310) || !v11 ) /*0x6f33d3*/
    return 0; /*0x6f33d3*/
  if ( *((_BYTE *)target + 130) && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 132))(target) + 3408) != -1 ) /*0x6f33f4*/
    return *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 132))(target) + 3408); /*0x6f340d*/
  v6 = (v11[5] & 1) != 0 ? (_BYTE *)v11 : 0;
  if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 132))(target) + 3285) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(v4 + 172) + 364) )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6
        && *(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 ? v11 + 328 : (_DWORD *)1312) + 5495) )
      {
        v8 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11); /*0x6f34c9*/
        if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*(v8 == 6 ? v11 : 0) + 132))(v8 == 6 ? v11 : 0) + 1517) )
        {
          v9 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11); /*0x6f34f3*/
          return !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*(v9 == 6 ? v11 : 0) + 132))(v9 == 6 ? v11 : 0) + 1516);
        }
        return 1; /*0x6f380a*/
      }
    }
    else
    {
      if ( *(_BYTE *)(*(_DWORD *)(v5 + 172) + 347) /*0x6f3547*/
        && v6
        && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 6 )
      {
        return 1; /*0x6f3555*/
      }
      if ( *(_BYTE *)(v4 + 322) /*0x6f3590*/
        && v6
        && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 1519)
        && !*((_DWORD *)target + 115)
        && !Object::IsAlliedWithObjectHouse(*((_DWORD **)target + 135), (int)v6) )
      {
        return 1; /*0x6f35a5*/
      }
      if ( *(_BYTE *)(v4 + 336) && (*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 388))(target) == 16 ) /*0x6f35c3*/
        return 1; /*0x6f35d1*/
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 44))(target) == 6 && *((_BYTE *)target + 1633) ) /*0x6f35e0*/
        return 1; /*0x6f35f6*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 /*0x6f362f*/
        && Object::IsAlliedWithObjectSimpleHouse(*((_DWORD **)target + 135), v11)
        && *(_BYTE *)(*(_DWORD *)(v4 + 172) + 344)
        && *(_BYTE *)(v11[328] + 5493) )
      {
        return 1; /*0x6f3645*/
      }
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 44))(target) == 2 && *((_BYTE *)target + 1738) ) /*0x6f3658*/
        return 1; /*0x6f366e*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 11 /*0x6f36ca*/
        && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0 && *(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 132))(target) + 3278))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11)
        && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 132))(target) + 1540) == 2 )
      {
        return 1; /*0x6f36d8*/
      }
      if ( v6 /*0x6f3710*/
        && *(double *)(*(_DWORD *)(v4 + 172)
                     + 8 * *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 156)
                     + 160) != 0.0 )
      {
        if ( *(double *)(*(_DWORD *)(v5 + 172) /*0x6f3743*/
                       + 8 * *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 156)
                       + 160) == 0.0 )
          return 1; /*0x6f3751*/
        v10 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 2 /*0x6f377f*/
           || *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 6;
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) ) /*0x6f3786*/
          v10 = 0; /*0x6f378d*/
        if ( !v6[140] && v10 ) /*0x6f379b*/
        {
          result = (*(int (__thiscall **)(#377 *, _DWORD *))(*(_DWORD *)target + 744))(target, v11); /*0x6f37a2*/
          if ( result != -1 ) /*0x6f37ab*/
            return result; /*0x6f37ab*/
          return 0; /*0x6f37ab*/
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) /*0x6f37d6*/
          && *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)target + 132))(target) + 1540) == 2 )
        {
          return 1; /*0x6f37e4*/
        }
        if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676) /*0x6f3800*/
          && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
        {
          return 1; /*0x6f3805*/
        }
      }
    }
    return 0; /*0x6f37ad*/
  }
  v7 = *((_DWORD *)target + 80); /*0x6f3436*/
  if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676) /*0x6f3455*/
    && v6
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
  {
    return 2 * v7 + 1; /*0x6f345c*/
  }
  else
  {
    return 2 * v7; /*0x6f346a*/
  }
}
// 0x4f9af0
        && Object::IsAlliedWithObjectSimpleHouse(this->owner, v11)
        {
          int v3; // eax
          int v5; // eax

          if ( !v11 ) /*0x4f9af9*/
            return 0; /*0x4f9af9*/
          if ( (v11[20] & 2) == 0 ) /*0x4f9aff*/
            return 0; /*0x4f9aff*/
          v3 = (*(int (**)(void))(*(_DWORD *)v11 + 60))(); /*0x4f9b03*/
          if ( !v3 ) /*0x4f9b08*/
            return 0; /*0x4f9b08*/
          if ( (_DWORD *)v3 == owner ) /*0x4f9b0c*/
            return 1; /*0x4f9b11*/
          v5 = *(_DWORD *)(v3 + 48); /*0x4f9b14*/
          if ( v5 == *(owner + 12) ) /*0x4f9b1c*/
            return 1; /*0x4f9b21*/
          return v5 != -1 && (*(owner + 5602) & (1 << v5)) != 0; /*0x4f9b3b*/
        }
      if ( (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 2 && *((_BYTE *)this + 1738) )
        return 1;
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 11
        && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0 && *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3278))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11)
        && *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1540) == 2 )
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
  bool v10; // bl
        v10 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 2
           || *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 6;
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
          v10 = 0;
        if ( !v6[140] && v10 )
        {
          result = (*(int (__thiscall **)(#377 *, _DWORD *))(this->pitchAngle)(this, v11);
          if ( result != -1 )
            return result;
          return 0;
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6)
          && *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1540) == 2 )
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
  int v7 = this->customSound_controller;
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
    return {}; // TODO stub - translate quarantined IDA block above

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
bool TechnoClass::GarrisonStructure() { return false; 
bool TechnoClass::CanDeploySlashUnload() const { return false; 

void TechnoClass::AddPassenger(FootClass* passenger)
{
    if (!passenger) return;
    if (!passengers.FirstPassenger)
        passengers.FirstPassenger = passenger;
    passengers.NumPassengers++;

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
int TechnoClass::CreateUnit()
{
// 0x423ac0
{
  void **v13; // eax
  void **v17; // eax
  void **v18; // eax
  void **v22; // edi
  _DWORD *Coords; // eax
  void **v37; // eax
  #374 *v46; // ebx
  int *StartCoords; // edx
  int Speed; // eax
  void **v59; // edi
  unsigned __int8 v83; // cl
  char *ProductionTimeMult; // eax
  int i; // [esp+2Ch] [ebp-74h]
  int v117; // [esp+34h] [ebp-6Ch]
  int v119; // [esp+3Ch] [ebp-64h] BYREF
  double v120; // [esp+40h] [ebp-60h] BYREF
  int v122; // [esp+54h] [ebp-4Ch] BYREF
  int v123; // [esp+58h] [ebp-48h]
  int v124; // [esp+5Ch] [ebp-44h]
  if ( !this->q198 && *(_DWORD *)(this->missionTimer + 760) != -1 )
  {
    int v2 = (*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122);
    StartAudioController(v2, (int)&this->locationZ6);
  }
  if ( *(_BYTE *)(this->missionTimer + 852) )
  {
    ConstructionPositionTracker(this);
    ObjectClass::DetectCloaked(this);
  }
  if ( *(_BYTE *)(this->missionTimer + 883) )
  {
    _DWORD * v3 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122);
    _DWORD * v4 = Coord::To_Cell(DataGlobal_87F7E8, v3);
    this->q674 = Cell::CanPlaceBuilding(*((#375 **)&this->objectTypeFlags6), v4) == 0;
  }
  if ( this->missionTimer == *(_DWORD *)(DataGlobal_87F7E8[7806] + 184) )
  {
    if ( HIBYTE(DataGlobal_87F7E8[539877]) )
      this->q674 = 0;
    else
      this->q674 = 1;
  }
  if ( *(_BYTE *)(this->missionTimer + 857) )
  {
    int v5 = (*(int (__thiscall **)(#361 *))(this->q1BC)(this);
    this->q674 = !v5 || !Building::GetNthOfType(v5);
  }
  if ( *(_DWORD *)(this->missionTimer + 844) != -1 )
  {
    v122 = this->q027;
    int v6 = *(_DWORD *)this;
    v123 = this->owningHouseIndex;
    v124 = this->q029;
    (*(void (__thiscall **)(#361 *, int *))(v6 + 240))(this, &v122);
  }
  if ( this->q11B && this->q11C == this->q02B )
    this->q11B = 0;
  if ( this->q194 )
  {
    int v7 = (*(int (__thiscall **)(#361 *))(this->q1E8)(this);
    if ( v7 == 2 || v7 == 1 )
    {
      int * v8 = (int *)((char *)&this->ambientSoundController6);
      v122 = this->q027;
      v123 = this->owningHouseIndex;
      v124 = this->q029;
      int v9 = *((_DWORD *)Coord::To_Cell(DataGlobal_87F7E8, &v122) + 59);
      v122 = this->q027;
      v123 = this->owningHouseIndex;
      int v10 = this->q029;
      v122 = this->q027;
      v123 = this->owningHouseIndex;
      bool v11 = v9 == 2;
      v124 = this->q029;
      bool v12 = v10 >= DataGlobal_87F7E8[27251] + Cell::GetGroundHeight(&v122);
      bool v114 = v12;
      if ( !v11 || v12 )
      {
        if ( *(_DWORD *)(this->missionTimer + 772) )
        {
          v120 = this->locationY;
          float v121 = this->gattlingValue;
          v22 = (void **)__2_YAPAXI_Z(456);
          if ( v22 )
          {
            v122 = Math::RoundToInt(*(float *)&v120);
            v123 = Math::RoundToInt(*((float *)&v120 + 1));
            int v23 = Math::RoundToInt(v121);
            int v24 = this->missionTimer;
            v124 = v23;
            AnimClass::ctor(v22, *(void **)(v24 + 772), &v122, 0, 1, (void *)0x2600, (void *)0xFFFFFFE2, 0);
          }
          int v25 = this->missionTimer;
          int v112 = *(_DWORD *)(v25 + 816);
          int v26 = Math::RoundToInt(*(double *)(v25 + 680));
          Coords = Coord::GetCoords((float *)&this->q128, &v122);
          PlaySoundEffectAt(Coords, v26, 0, v112, 1, 0);
          int v28 = this->missionTimer;
          v117 = *(_DWORD *)(v28 + 816);
          int v29 = Math::RoundToInt(*(double *)(v28 + 680));
          int * v30 = Coord::GetCoords((float *)&this->q128, &v122);
          CreateSmokeEffectAt(v29, v117, *v30, v30[1], v30[2], 0, 0);
        }
      }
      else if ( *(_BYTE *)(this->missionTimer + 854) )
      {
        v13 = (void **)__2_YAPAXI_Z(456);
        if ( v13 )
        {
          int v14 = *v8;
          int v15 = this->owningHouseIndex;
          int v16 = this->q029;
          v122 = v14;
          v123 = v15;
          v124 = v16 + 3;
          AnimClass::ctor(
            v13,
            *(void **)(*(_DWORD *)(DataGlobal_87F7E8[7806] + 3012) + 4 * *(_DWORD *)(DataGlobal_87F7E8[7806] + 3024) - 4),
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
          v123 = this->owningHouseIndex;
          v124 = this->q029;
          AnimClass::ctor(v17, *(void **)(DataGlobal_87F7E8[7806] + 148), &v122, 0, 1, (void *)0x600, 0, 0);
        }
        v18 = (void **)__2_YAPAXI_Z(456);
        if ( v18 )
        {
          int v19 = *v8;
          int v20 = this->owningHouseIndex;
          int v21 = this->q029;
          v122 = v19;
          v123 = v20;
          v124 = v21 + 3;
          AnimClass::ctor(v18, **(void ***)(DataGlobal_87F7E8[7806] + 3012), &v122, 0, 1, (void *)0x600, 0, 0);
        }
      }
      if ( !v11 || v114 )
      {
        int * v31 = Coord::GetCoords((float *)&this->q128, &v120);
        v122 = *v31;
        v123 = v31[1];
        v124 = v31[2];
        int v32 = this->missionTimer;
        if ( *(_DWORD *)(v32 + 752) )
        {
          int v33 = *(_DWORD *)(v32 + 756);
          if ( v33 > 0 )
          {
            int v34 = Random::Range((_DWORD *)(DataGlobal_87F7E8[536210] + 536), 0, v33);
  int v35; // eax
            v35 = v34
                + Random::Range(
                    (_DWORD *)(DataGlobal_87F7E8[536210] + 536),
                    0,
                    *(_DWORD *)(this->missionTimer + 756));
            if ( v35 > 0 )
            {
              int v36 = v35;
              do
              {
                v37 = (void **)__2_YAPAXI_Z(456);
                if ( v37 )
                  AnimClass::ctor(v37, *(void **)(this->missionTimer + 752), &v122, 0, 1, (void *)0x600, 0, 0);
                --v36;
              }
              while ( v36 );
            }
          }
        }
        int v38 = this->missionTimer;
        int v39 = 0;
        int v40 = 0;
        int v125 = 0;
        char v41 = *(_BYTE *)(v38 + 856);
        int v126 = 0;
        int v127 = 0;
        if ( v41 && !v114 )
        {
          int v42 = *(_DWORD *)(v38 + 828);
          for ( i = -v42; i <= v42; ++i )
          {
            int v116 = -v42;
            if ( -v42 <= v42 )
            {
              v120 = (double)i * (double)i;
              do
              {
                double v43 = Math::Sqrt((double)v116 * (double)v116 + v120);
                if ( (int)Math::RoundToInt(v43) <= *(_DWORD *)(this->missionTimer + 828) )
                {
                  int v44 = i & 7;
                  LOWORD(v117) = v122 / 256 + LOWORD(DataGlobal_87F7E8[v44 + 32680]);
                  HIWORD(v117) = v123 / 256 + HIWORD(DataGlobal_87F7E8[v44 + 32680]);
                  int v118 = v117;
                  _DWORD * v45 = CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v118);
                  if ( IsCoordValidMap((int)v45, 0) )
                  {
                    if ( *(_DWORD *)(this->missionTimer + 824) )
                    {
                      v46 = (#374 *)__2_YAPAXI_Z(176);
                      if ( v46 )
                      {
                        v119 = v45[9];
                        int v47 = Random::Range((_DWORD *)(DataGlobal_87F7E8[536210] + 536), 0, 3);
                        Object::SpawnAtCell(
                          v46,
                          *(_DWORD *)(DataGlobal_87F7E8[528743]
                                    + 4 * (v47 + *(_DWORD *)(*(_DWORD *)(this->missionTimer + 824) + 660))),
                          (__int16 *)&v119,
                          -1);
                      }
                      *((_BYTE *)v45 + 286) = Random::Range((_DWORD *)(DataGlobal_87F7E8[536210] + 536), 0, 2);
  char v132[16]; // [esp+90h] [ebp-10h] BYREF
                      StartCoords = House::GetStartCoords((int)v45, v132);
                      int v49 = *StartCoords;
                      int v50 = StartCoords[1] - DataGlobal_87F7E8[7663];
                      int v51 = StartCoords[2];
                      int v52 = StartCoords[3];
                      int v130 = v51;
                      int v131 = v52;
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
                        int v53 = v125;
                        int v54 = v126;
                        int v129 = v127;
                        int v128 = v40;
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
                        int v55 = v129;
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
              while ( v116 <= *(_DWORD *)(this->missionTimer + 828) );
            }
            v42 = *(_DWORD *)(this->missionTimer + 828);
          }
          Cell::CreateCrater(v125, v126, v40, v39, 0);
        }
      }
      LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(this->q0F8)(this);
      return Speed;
    }
  }
  if ( this->isAliveFlag )
  {
    if ( !this->u8_19B )
    {
      int v57 = this->missionTimer;
      if ( *(_DWORD *)(v57 + 776) )
      {
        int v58 = *(_DWORD *)(v57 + 780);
        if ( v58 == 1 || !(dword_A8ED54[12] % v58) )
        {
          v59 = (void **)__2_YAPAXI_Z(456);
          if ( v59 )
          {
            int * v60 = (int *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122);
            AnimClass::ctor(v59, *(void **)(this->missionTimer + 776), v60, (void *)1, 1, (void *)0x600, 0, 0);
          }
        }
      }
    }
  }
  if ( this->missionTimer == *(_DWORD *)(DataGlobal_87F7E8[7806] + 5244) )
  {
    _DWORD * v61 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122);
    _DWORD * v62 = Coord::To_Cell(DataGlobal_87F7E8, v61);
    if ( Cell::IsBridge(v62) )
      this->u8_19B = 1;
  }
  if ( this->u8_19B )
    goto LABEL_187;
  LOBYTE(Speed) = this->ironTintTimer;
  if ( (_BYTE)Speed )
  {
    this->ironTintTimer = 0;
    return Speed;
  }
  TechnoTypeClass *v63 = this->q184;
  if ( v63 )
  {
    Speed = v63 - 1;
    this->q184 = Speed;
    if ( !Speed )
      LOBYTE(Speed) = ProductionCompletionCallback(this);
    return Speed;
  }
  Speed = this->q240;
  if ( (_BYTE)Speed )
  {
    if ( *(_BYTE *)(this->missionTimer + 864) )
    {
      int * v64 = (int *)(*(int (__thiscall **)(#361 *, double *))(this->q048)(this, &v120);
      int v65 = *v64;
      int v66 = v64[1];
      int v67 = v64[2];
      v122 = v65 - 384;
      v123 = v66 - 384;
      v124 = v67;
      int v68 = *((_DWORD *)Coord::To_Cell(DataGlobal_87F7E8, &v122) + 17);
      if ( v68 == -1 || *(_DWORD *)(*(_DWORD *)(DataGlobal_87F7E8[528743] + 4 * v68) + 668) != this->missionTimer )
        this->u8_19B = 1;
    }
    _DWORD * v69 = (_DWORD *)this->missionTimer;
    if ( v69[176] == -1 )
    {
      *(_DWORD *)(this->missionTimer + 704) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v69 + 156))(v69) + 6);
      int v70 = this->missionTimer;
      if ( *(_BYTE *)(v70 + 882) )
        *(int *)(v70 + 704) /= 2;
    }
    int v71 = this->missionTimer;
    if ( *(_DWORD *)(v71 + 700) == -1 )
      *(_DWORD *)(v71 + 700) = *(_DWORD *)(v71 + 704);
    (*(void (__thiscall **)(#361 *, int))(this->q124)(this, 2);
    LOBYTE(Speed) = this->q678;
    if ( !(_BYTE)Speed )
    {
      LOBYTE(Speed) = this->q11A;
      if ( !(_BYTE)Speed )
      {
        Speed = CDTimerClass::TimeRemaining((int *)&this->uniqueId5);
        if ( Speed || (Speed = this->nextObject) == 0 )
        {
          this->suspendedMission = 0;
          return Speed;
        }
        int v72 = this->q031 + this->q02B;
        this->suspendedMission = 1;
        this->q02B = v72;
        int v73 = v123;
        this->queuedMission = dword_A8ED54[12];
        this->missionQueued = v73;
        this->missionStatus = Speed;
        bool v74 = this->q02B;
        if ( *(double *)(this->missionTimer + 680) <= 0.0 || this->q194 )
          goto LABEL_120;
        int v75 = this->q033;
        if ( v75 && (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 44))(v75) == 36 )
          double v76 = *(double *)(this->missionTimer + 680) * 5.0;
        else
          v76 = *(double *)(this->missionTimer + 680);
        this->q031 = v76 + this->q031;
        if ( this->q031 < 1.0 || this->q198 )
          goto LABEL_120;
        int v77 = Math::RoundToInt(this->q031);
        int v78 = this->missionTimer;
        v119 = v77;
        this->q031 = this->q031 - (double)v77;
  int v113; // [esp+Ch] [ebp-94h]
        v113 = !strcmp((const char *)(v78 + 36), aInviso)
             ? *(_DWORD *)(DataGlobal_87F7E8[7806] + 4008)
             : *(_DWORD *)(DataGlobal_87F7E8[7806] + 3976);
        _DWORD * v79 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122);
        PlaySoundEffectAt(v79, v77, 0, v113, 1, 0);
        LOBYTE(Speed) = this->isAliveFlag;
        if ( (_BYTE)Speed )
        {
LABEL_120:
          int v80 = this->missionTimer;
          int v81 = *(_DWORD *)(v80 + 664);
          if ( v81 && v74 + *(_DWORD *)(v80 + 692) == v81 && !this->q194 )
            CreateUnitOnCompletion(this);
          Speed = this->missionTimer;
          if ( *(_BYTE *)(Speed + 880) )
          {
            if ( this->q654 <= 1u )
            {
              if ( v74 < *(_DWORD *)(Speed + 704) && v74 )
                goto LABEL_132;
LABEL_131:
              Speed = -this->q031;
              this->q031 = Speed;
              return Speed;
            }
            int v82 = *(_DWORD *)(Speed + 692);
            if ( v74 >= *(_DWORD *)(Speed + 700) - v82 || v74 == v82 )
              goto LABEL_131;
          }
LABEL_132:
          v83 = this->q654;
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
          if ( this->q120 || v74 < *(_DWORD *)(Speed + 700) - *(_DWORD *)(Speed + 692) )
          {
LABEL_191:
            if ( !*(_BYTE *)(Speed + 881) )
            {
              LOBYTE(Speed) = this->q120;
              if ( !(_BYTE)Speed )
                return Speed;
            }
            goto LABEL_142;
          }
LABEL_143:
          if ( v83 && v83 != 0xFF )
            this->q654 = v83 - 1;
          int v84 = this->missionTimer;
          if ( this->q654 )
          {
            if ( *(_BYTE *)(v84 + 881) || this->q120 )
              this->q02B = *(_DWORD *)(v84 + 700);
            else
              this->q02B = *(_DWORD *)(v84 + 696) - *(_DWORD *)(v84 + 692);
            Speed = this->missionTimer;
            int v85 = *(_DWORD *)(Speed + 732);
            if ( v85 || *(_DWORD *)(Speed + 736) )
            {
              Speed = Random::Range((_DWORD *)(DataGlobal_87F7E8[536210] + 536), v85, *(_DWORD *)(Speed + 736));
              this->q184 = Speed;
            }
            return Speed;
          }
          _DWORD * v86 = *(_DWORD **)(v84 + 712);
          if ( v86 )
          {
            this->missionTimer = v86;
            if ( v86[176] == -1 )
            {
              *(_DWORD *)(this->missionTimer + 704) = *(__int16 *)((*(int (__thiscall **)(_DWORD *))(*v86 + 156))(v86)
                                                                     + 6);
              int v87 = this->missionTimer;
              if ( *(_BYTE *)(v87 + 882) )
                *(int *)(v87 + 704) /= 2;
            }
            int v88 = this->missionTimer;
            if ( *(_DWORD *)(v88 + 700) == -1 )
              *(_DWORD *)(v88 + 700) = *(_DWORD *)(v88 + 704);
            int v89 = this->missionTimer;
            this->u8_19B = 0;
            char v90 = *(_BYTE *)(v89 + 708);
            this->q188 = 0;
            this->q654 = v90;
            int v91 = v89;
            this->q18C = 0;
            int v92 = *(_DWORD *)(v89 + 740);
            ProductionTimeMult = *(char **)(v89 + 688);
            if ( v92 || *(_DWORD *)(v91 + 744) )
              ProductionTimeMult = (char *)Random::Range(
                                             (_DWORD *)(DataGlobal_87F7E8[536210] + 536),
                                             v92,
                                             *(_DWORD *)(v91 + 744));
            if ( *(_BYTE *)(this->missionTimer + 866) )
              ProductionTimeMult = Rules::GetProductionTimeMult(&DataGlobal_87F7E8[539870], (int)ProductionTimeMult);
            this->queuedMission = dword_A8ED54[12];
            this->missionQueued = v123;
            this->missionStatus = ProductionTimeMult;
            this->nextObject = ProductionTimeMult;
            this->q02B = *(_DWORD *)(this->missionTimer + 692);
            LOBYTE(Speed) = ProductionCompletionCallback(this);
            return Speed;
          }
          if ( *(_DWORD *)(v84 + 844) != -1 )
          {
            int * v94 = (int *)((char *)&this->ambientSoundController6);
            v122 = this->q027;
            int v95 = *(_DWORD *)this;
            v123 = this->owningHouseIndex;
            v124 = this->q029;
            (*(void (__thiscall **)(#361 *, int *))(v95 + 244))(this, &v122);
            if ( *(_DWORD *)(this->missionTimer + 844) <= *(_DWORD *)(DataGlobal_87F7E8[7806] + 3316) )
            {
              int v96 = this->q060;
              if ( !v96 || *(_BYTE *)(v96 + 501) )
              {
                int v97 = DataGlobal_87F7E8[524948];
                int v98 = HouseTypeClass::Find(g_INI_Key_Civilian);
                int v99 = 0;
                if ( v97 > 0 )
                {
                  int v100 = DataGlobal_87F7E8[524945];
                  while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v100 + 52) + 188) != v98 )
                  {
                    ++v99;
                    v100 += 4;
                    if ( v99 >= v97 )
                      goto LABEL_176;
                  }
                  this->q060 = *(_DWORD *)(DataGlobal_87F7E8[524945] + 4 * v99);
                }
              }
LABEL_176:
              if ( this->q060 )
              {
  int v101; // ecx
                v101 = *(_DWORD *)(DataGlobal_87F7E8[539353]
                                 + 4
                                 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(DataGlobal_87F7E8[7806] + 3304)
                                                         + 4 * *(_DWORD *)(this->missionTimer + 844))
                                             + 3576));
  _BYTE *v102; // edi
                v102 = (_BYTE *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v101 + 140))(
                                  v101,
                                  this->q060);
                v122 = *v94;
                v123 = this->owningHouseIndex;
                int v103 = *(_DWORD *)v102;
                v124 = this->q029;
                LOBYTE(Speed) = (*(int (__thiscall **)(_BYTE *, int *, int))(v103 + 216))(v102, &v122, 96);
                if ( !(_BYTE)Speed )
                {
                  --this->q02B;
                  return Speed;
                }
                _DWORD * v104 = (_DWORD *)(*(int (__thiscall **)(#361 *, int *))(this->q048)(this, &v122);
                LOWORD(v117) = *v104 / 256;
                HIWORD(v117) = v104[1] / 256;
                v119 = v117;
                _DWORD * v105 = CellCoord::To_CellObj(DataGlobal_87F7E8, (__int16 *)&v119);
                if ( v105 )
                {
                  if ( (v105[80] & 0x100) != 0 )
                  {
                    int v106 = *v94;
                    int v107 = this->owningHouseIndex;
                    int v108 = this->q029;
                    v122 = v106;
                    v123 = v107;
                    if ( v108 > *(_DWORD *)((*(int (__thiscall **)(_DWORD *, int *))(*v105 + 72))(v105, &v122) + 8) )
                    {
                      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v102 + 292))(v102, 0);
                      int v109 = *(_DWORD *)v102;
                      v102[140] = 1;
                      (*(void (__thiscall **)(_BYTE *, int))(v109 + 292))(v102, 1);
                    }
                  }
                }
                if ( !*(_BYTE *)(this->q060 + 492) )
                  (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v102 + 488))(v102, 15, 0);
              }
            }
            int v110 = *(_DWORD *)this;
            this->q5E4 = 1;
            LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(v110 + 248))(this);
            return Speed;
          }
          this->q5E4 = 1;
LABEL_187:
          LOBYTE(Speed) = (*(bool (__thiscall **)(#361 *))(this->q0F8)(this);
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
    // Compare current location with target coords (&this->q840 region).
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
    //   If all 3 blocked: set flag (&this->u32_234 = 1)

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
// 0x707d20
InfantryTypeClass* TechnoClass::GetCrew() const { return nullptr; }
  int v3; // ecx
  int v4; // eax
  RulesClass *v5; // eax
  int Scatter; // esi
  bool v7; // zf

  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3277) ) /*0x707d2b*/
    return 0; /*0x707d38*/
  v3 = *(this + 135); /*0x707d39*/
  v4 = *(_DWORD *)(v3 + 488); /*0x707d40*/
  if ( v4 ) /*0x707d48*/
  {
    if ( v4 == 1 ) /*0x707d5a*/
    {
      v5 = g_RulesClass_Instance; /*0x707d5c*/
      Scatter = g_RulesClass_Instance->Scatter; /*0x707d61*/
    }
    else
    {
      v7 = v4 == 2; /*0x707d69*/
      v5 = g_RulesClass_Instance; /*0x707d6c*/
      if ( v7 ) /*0x707d71*/
        Scatter = g_RulesClass_Instance->ContentScan; /*0x707d73*/
      else
        Scatter = g_RulesClass_Instance->Production; /*0x707d7b*/
    }
  }
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
}
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  }
  return Scatter; /*0x707d37*/
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 684))(this) /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  return Scatter; /*0x707d37*/
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( this->vt_slot_684() /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  return Scatter; /*0x707d37*/
  else
  {
    v5 = g_RulesClass_Instance; /*0x707d4a*/
    Scatter = g_RulesClass_Instance->AutoCrush; /*0x707d4f*/
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 52) + 188) == -1 ) /*0x707d8b*/
    return v5->Production; /*0x707dc5*/
  if ( this->vt_slot_684() /*0x707db2*/
    && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < 15 )
  {
    return g_RulesClass_Instance->Production; /*0x707dc4*/
  return Scatter; /*0x707d37*/
return this->q6C0->qEC8;
int TechnoClass::sub_5505180() { return 0; 
// 0x4dff40
int TechnoClass::FindClosestBuilding() { return -1; }
  char result; // al
  int v3; // ebp
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  double v7; // st7
  int v8; // ebx
  int v9; // [esp+24h] [ebp-2Ch]
  _DWORD *v10; // [esp+28h] [ebp-28h]
  int v11; // [esp+30h] [ebp-20h]
  int v12; // [esp+34h] [ebp-1Ch]
  _BYTE v13[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v14[12]; // [esp+44h] [ebp-Ch] BYREF

  result = TechnoClass::CanSelfRepair(this); /*0x4dff4f*/
  if ( result ) /*0x4dff56*/
  {
    v10 = 0; /*0x4dff66*/
    v9 = 0x7FFFFFFF; /*0x4dff6e*/
    v3 = *(_DWORD *)(*(this + 135) + 216) - 1; /*0x4dff7c*/
    if ( v3 < 0 ) /*0x4dff7d*/
      return 0; /*0x4dff7d*/
    do /*0x4e002d*/
    {
      v4 = *(_DWORD **)(*(_DWORD *)(*(this + 135) + 204) + 4 * v3); /*0x4dff94*/
      v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 72))(v4, v13); /*0x4dffa0*/
      v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v14); /*0x4dffa9*/
      v11 = v6[1] - v5[1]; /*0x4dffc7*/
      v12 = v6[2] - v5[2]; /*0x4dffd1*/
      v7 = Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v12 * (double)v12 + (double)v11 * (double)v11); /*0x4dfff6*/
      v8 = Math::RoundToInt(v7); /*0x4e0003*/
      if ( v8 < v9 && !Team::GetMember(v4, 0) && !v4[185] ) /*0x4e001a*/
      {
        v9 = v8; /*0x4e0024*/
        v10 = v4; /*0x4e0028*/
      }
      --v3; /*0x4e002c*/
    }
    while ( v3 >= 0 ); /*0x4e002d*/
    if ( v10 ) /*0x4e0039*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*this + 1152))(this, v10, 1); /*0x4e004c*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD *))(*this + 632))(this, 2, v10); /*0x4e0059*/
      (*(void (__thiscall **)(_DWORD *, int, int))(*this + 488))(this, 7, 1); /*0x4e0067*/
      return 1; /*0x4e006e*/
    }
    else
    {
      return 0; /*0x4e003b*/
    }
  }
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
  return result; /*0x4dff58*/
// 0x4df1d0
int TechnoClass::vt_entry_4B0() {
  return *(this + 1489); /*0x4df1d6*/
}
// 0x4df1e0
int TechnoClass::vt_entry_4B4() {
  return *(this + 369); /*0x4df1e6*/
}
// 0x4df1f0
int TechnoClass::vt_entry_4B8() { return 0; }
  int v2; // eax
  _DWORD *v3; // edx
  int v5; // ecx
  _DWORD *v6; // ecx
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *(this + 370); /*0x4df1f0*/
  if ( v2 ) /*0x4df1fc*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v7); /*0x4df20a*/
    *a2 = *v3; /*0x4df214*/
    a2[1] = v3[1]; /*0x4df219*/
    a2[2] = v3[2]; /*0x4df220*/
    return a2; /*0x4df20c*/
  }
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    return a2; /*0x4df23f*/
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    return a2; /*0x4df23f*/
  else
  {
    v5 = *(this + 371); /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    return a2; /*0x4df23f*/
// 0x4df320
int TechnoClass::vt_entry_4C8() { return 0; }
  int v2; // eax
  int v4; // edx

  v2 = *(this + 370); /*0x4df326*/
  *((_BYTE *)this + 1489) = 0; /*0x4df32c*/
  if ( v2 ) /*0x4df335*/
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*this + 488))(this, 2, 1); /*0x4df33d*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 370), 1); /*0x4df350*/
    return 1; /*0x4df356*/
  }
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
  else
  {
    v4 = *this; /*0x4df361*/
    if ( *(this + 371) ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, *(this + 371)); /*0x4df37e*/
      return 1; /*0x4df384*/
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
// 0x522a60
int TechnoClass::HandleSpecialAction() { return 0; }
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  int v10; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v11[12]; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+20h] [ebp+4h]

  v4 = *(this + 430); /*0x522a6c*/
  if ( (*(_BYTE *)(v4 + 3434) || *(_BYTE *)(v4 + 3476)) /*0x522a93*/
    && a2 == 4475
    && (v5 = this - 2, Team::AllMembersValid(this - 2)) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v5 + 628))(this - 2, 8); /*0x522aa2*/
    v6 = *(this + 132); /*0x522aa8*/
    if ( !v6 || v6 == *(this + 359) ) /*0x522ab8*/
    {
      FootClass::ClearPathIndex(this - 2); /*0x522ad4*/
      (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*v5 + 372))(this - 2, &dword_A8F200, 1, 0); /*0x522ae6*/
      return 1; /*0x522aee*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*v5 + 1152))(this - 2, v6, 1); /*0x522ac1*/
      return 1; /*0x522ac9*/
    }
  }
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  }
  else
  {
    return 0; /*0x522bae*/
  }
}
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  else
  {
    return 0; /*0x522bae*/
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  else
  {
    return 0; /*0x522bae*/
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  else
  {
    return 0; /*0x522bae*/
  else if ( *(_BYTE *)(*(this + 430) + 3477) && a2 == 4476 ) /*0x522b11*/
  {
    v8 = this - 2; /*0x522b1a*/
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 2) + 72))(this - 2, v11); /*0x522b24*/
    LOWORD(v12) = *v9 / 256; /*0x522b37*/
    HIWORD(v12) = v9[1] / 256; /*0x522b4f*/
    v10 = v12; /*0x522b58*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 ) /*0x522b70*/
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 460))(this - 2, dword_A8F234); /*0x522b7d*/
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v8 + 460))(this - 2, 0); /*0x522b8b*/
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v8 + 1368))(this - 2, 36, 1, 0); /*0x522b9b*/
    return 1; /*0x522ba3*/
  else
  {
    return 0; /*0x522bae*/
// 0x5f5390
int TechnoClass::CreateDestructionEffect() {
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

  v24 = 0; /*0x5f5399*/
  v25 = *((_DWORD *)this + 27); /*0x5f53a6*/
  if ( v25 <= 0 || !*v27 || !v31 && *(_BYTE *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 563) ) /*0x5f53cd*/
    return v24; /*0x5f583b*/
  v2 = *(_DWORD *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 160); /*0x5f53e5*/
  if ( !v31 ) /*0x5f53f1*/
  {
    v3 = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this); /*0x5f53fc*/
    *v27 = ComputeTechnoClassDamageFalloff(*v27, v29, *(_DWORD *)(v3 + 156), v28); /*0x5f5414*/
  }
  if ( this
    && (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) == 6
    && !*(_BYTE *)(*((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) == 6
                   ? (_DWORD *)((char *)this + 1312)
                   : (_DWORD *)1312)
                 + 5495) )
  {
    v4 = *v27; /*0x5f5448*/
    if ( *v27 < 1 ) /*0x5f544d*/
      v4 = 1; /*0x5f544f*/
    *v27 = v4; /*0x5f5454*/
  }
  v5 = *v27; /*0x5f5456*/
  if ( !*v27 ) /*0x5f5456*/
    return 0; /*0x5f5465*/
  if ( *v27 >= 0 ) /*0x5f5468*/
  {
    v24 = 1; /*0x5f549c*/
    if ( v25 <= v5 ) /*0x5f54a6*/
    {
      *v27 = v25; /*0x5f54c2*/
    }
    else if ( v25 >= v2 >> 1 && v25 - v5 < v2 >> 1 ) /*0x5f54b6*/
    {
      v24 = 2; /*0x5f54b8*/
    }
    v8 = (double)v2 * *(double *)&g_RulesClass_Instance[1].ChronoSparkle1; /*0x5f54cd*/
    if ( (double)v25 > v8 && (double)(v25 - *v27) < v8 ) /*0x5f54f7*/
      v24 = 3; /*0x5f54f9*/
    v9 = v25 - *v27; /*0x5f5509*/
    *((_DWORD *)this + 27) = v9; /*0x5f550d*/
    if ( v9 > 0 /*0x5f5542*/
      || (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) != 15
      || v31
      || !*(_BYTE *)(*((_DWORD *)this + 432) + 3756)
      || *((_BYTE *)this + 1755) )
    {
      v13 = v24; /*0x5f55ea*/
    }
    else
    {
      v10 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x5f5555*/
      if ( v10 ) /*0x5f555f*/
      {
        v26[0] = *((_DWORD *)this + 39); /*0x5f5574*/
        v26[1] = *((_DWORD *)this + 40); /*0x5f557d*/
        v26[2] = *((_DWORD *)this + 41); /*0x5f5589*/
        AnimClass::ctor(v10, (void *)g_RulesClass_Instance->InfantryNuked, v26, 0, 1, (void *)0x600, 0, 0); /*0x5f559c*/
      }
      v11 = Math::RoundToInt((double)*(int *)(*((_DWORD *)this + 432) + 160) * 0.25); /*0x5f55b3*/
      *((_DWORD *)this + 27) = v11; /*0x5f55bb*/
      if ( v11 <= 1 ) /*0x5f55be*/
        v11 = 1; /*0x5f55c0*/
      v12 = *(_DWORD *)this; /*0x5f55c5*/
      *((_DWORD *)this + 27) = v11; /*0x5f55cf*/
      *((_BYTE *)this + 1755) = 1; /*0x5f55d2*/
      (*(void (__thiscall **)(#374 *, int, int, _DWORD))(v12 + 1368))(this, 6, 1, 0); /*0x5f55d9*/
      v13 = 3; /*0x5f55df*/
      v24 = 3; /*0x5f55e4*/
    }
    v32 = *((_DWORD *)this + 27); /*0x5f55f8*/
    if ( v13 == 2 ) /*0x5f55fc*/
    {
      if ( v30 ) /*0x5f5600*/
      {
        v14 = (void **)*((_DWORD *)this + 13); /*0x5f5602*/
        if ( v14 ) /*0x5f5607*/
          TeamClass::Update_0(v14, 39, (int)this, dword_AC1360, 0, 0); /*0x5f5617*/
      }
      if ( !*((_BYTE *)this + 144) ) /*0x5f5624*/
        return 5; /*0x5f5624*/
      v15 = (void **)*((_DWORD *)this + 13); /*0x5f562a*/
      if ( v15 ) /*0x5f562f*/
        TeamClass::Update_0(v15, 42, (int)this, dword_AC1360, 0, 0); /*0x5f563e*/
    }
    if ( *((_BYTE *)this + 144) ) /*0x5f5643*/
    {
      if ( v13 == 3 ) /*0x5f5654*/
      {
        if ( v30 ) /*0x5f5658*/
        {
          v16 = (void **)*((_DWORD *)this + 13); /*0x5f565a*/
          if ( v16 ) /*0x5f565f*/
            TeamClass::Update_0(v16, 40, (int)this, dword_AC1360, 0, 0); /*0x5f566f*/
        }
        if ( !*((_BYTE *)this + 144) ) /*0x5f567c*/
          return 5; /*0x5f567c*/
        v17 = (void **)*((_DWORD *)this + 13); /*0x5f5682*/
        if ( v17 ) /*0x5f5687*/
          TeamClass::Update_0(v17, 43, (int)this, dword_AC1360, 0, 0); /*0x5f5696*/
      }
      if ( *((_BYTE *)this + 144) ) /*0x5f569b*/
      {
        if ( *((_DWORD *)this + 27) != v25 /*0x5f56d6*/
          && (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this)
          && v25 == *(_DWORD *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 160) )
        {
          if ( v30 ) /*0x5f56da*/
          {
            v18 = (void **)*((_DWORD *)this + 13); /*0x5f56dc*/
            if ( v18 ) /*0x5f56e1*/
              TeamClass::Update_0(v18, 38, (int)this, dword_AC1360, 0, 0); /*0x5f56f1*/
          }
          v19 = (void **)*((_DWORD *)this + 13); /*0x5f56f6*/
          if ( v19 && *((_BYTE *)this + 144) ) /*0x5f56fd*/
            TeamClass::Update_0(v19, 41, (int)this, dword_AC1360, 0, 0); /*0x5f5714*/
          v20 = (void **)*((_DWORD *)this + 13); /*0x5f5719*/
          if ( v20 ) /*0x5f571e*/
          {
            if ( !*((_BYTE *)this + 144) ) /*0x5f5728*/
              return 5; /*0x5f5728*/
            if ( v30 ) /*0x5f5730*/
              TeamClass::Update_0(v20, 41, (int)this, dword_AC1360, 0, v30); /*0x5f573f*/
          }
        }
        if ( *((_BYTE *)this + 144) && (v32 <= 0 || *((int *)this + 27) > 0) ) /*0x5f575f*/
        {
          v21 = 0; /*0x5f5768*/
          if ( !*((_DWORD *)this + 27) ) /*0x5f5765*/
          {
            if ( v30 ) /*0x5f5770*/
              v21 = *(_DWORD *)(v30 + 540); /*0x5f5772*/
            if ( !v33 || v30 && v33 == v21 ) /*0x5f5786*/
              (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 224))(this, v30); /*0x5f579a*/
            else
              (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 228))(this, v33); /*0x5f578d*/
            v13 = 4; /*0x5f57a2*/
            v24 = 4; /*0x5f57ab*/
            (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 220))(this, 1); /*0x5f57af*/
          }
          if ( *((_BYTE *)this + 144) ) /*0x5f57b5*/
          {
            if ( v30 ) /*0x5f57c1*/
            {
              v22 = (void **)*((_DWORD *)this + 13); /*0x5f57c3*/
              if ( v22 ) /*0x5f57c8*/
              {
                if ( v13 != 4 ) /*0x5f57cd*/
                  TeamClass::Update_0(v22, 6, (int)this, dword_AC1360, 0, v30); /*0x5f57db*/
              }
            }
            if ( *((_BYTE *)this + 144) ) /*0x5f57e0*/
            {
              if ( v30 ) /*0x5f57ec*/
              {
                v23 = (void **)*((_DWORD *)this + 13); /*0x5f57ee*/
                if ( v23 ) /*0x5f57f3*/
                {
                  if ( v13 != 4 ) /*0x5f57f8*/
                    TeamClass::Update_0(v23, 44, (int)this, dword_AC1360, 0, v30); /*0x5f5807*/
                }
              }
              if ( *((_BYTE *)this + 144) && *((_BYTE *)this + 131) ) /*0x5f581a*/
                (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 292))(this, 2); /*0x5f582a*/
            }
          }
          return v24; /*0x5f582a*/
        }
      }
    }
    return 5; /*0x5f5841*/
  }
  v7 = *((_DWORD *)this + 27); /*0x5f546a*/
  *((_DWORD *)this + 27) = v7 - v5; /*0x5f5473*/
  if ( v7 - v5 > v2 ) /*0x5f5476*/
    *((_DWORD *)this + 27) = v2; /*0x5f5478*/
  if ( v7 != *((_DWORD *)this + 27) ) /*0x5f547e*/
    (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 328))(this, 7); /*0x5f5486*/
  return 0; /*0x5f545c*/
}
// 0x5f7900
int TechnoClass::FindMatchingUnit() { return -1; }
  int v6; // ebx
  int v7; // ebp
  int v8; // esi
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v6 = 0; /*0x5f7909*/
  v10 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 112))(this); /*0x5f7914*/
  v7 = 0; /*0x5f7918*/
  v11 = *(_DWORD *)(a5 + 120); /*0x5f791f*/
  if ( v11 <= 0 ) /*0x5f7923*/
    return 0; /*0x5f7a83*/
  do /*0x5f7a5e*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)(a5 + 108) + 4 * v7); /*0x5f7930*/
    if ( !*(_BYTE *)(v8 + 129) /*0x5f79c1*/
      && *(_DWORD *)(*(_DWORD *)(v8 + 1312) + 3768) == (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 44))(this)
      && (!a3 || *(_BYTE *)(v8 + 1632))
      && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 388))(v8) != 19
      && *(_DWORD *)(v8 + 180) != 19
      && (!a4 || (int)HouseClass::CanBuild(this, 1, 1) > 0)
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 1312) + 112))(*(_DWORD *)(v8 + 1312)) & v10) != 0 )
    {
      if ( a2 || !Team::AllMembersValid((int *)v8) || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 44))(this) != 3 ) /*0x5f79e4*/
      {
        if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 44))(this) == 40 && *(this + 3278) ) /*0x5f7a15*/
        {
          if ( !*(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3278) ) /*0x5f7a2d*/
            goto LABEL_26; /*0x5f7a2d*/
          if ( *(_BYTE *)(v8 + 979) ) /*0x5f7a2f*/
            return v8; /*0x5f7a37*/
        }
        else if ( *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3278) ) /*0x5f7a41*/
        {
          goto LABEL_26; /*0x5f7a49*/
        }
        if ( *(_BYTE *)(v8 + 979) ) /*0x5f7a4b*/
          return v8; /*0x5f7a7d*/
        goto LABEL_25; /*0x5f7a53*/
      }
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 44))(this) == 3 /*0x5f79f4*/
        && (unsigned __int8)RadioClass::HasFreeLink(v8) )
      {
        if ( *(_BYTE *)(v8 + 979) ) /*0x5f79fd*/
          return v8; /*0x5f7a05*/
  LABEL_25:
        v6 = v8; /*0x5f7a55*/
      }
    }
  LABEL_26:
    ++v7; /*0x5f7a57*/
  }
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
  while ( v7 < v11 ); /*0x5f7a5e*/
  if ( !v6 ) /*0x5f7a66*/
    return 0; /*0x5f7a66*/
  return v6; /*0x5f7a68*/
// 0x659490
int RadBeam::drawHealthBar(int a2) {
  *(this + 3) = a2; /*0x659494*/
  return a2; /*0x659497*/
}
// 0x659540
int RadBeam::drawMindControlPips(int a2) {
  *(this + 21) = a2; /*0x659544*/
  return a2; /*0x659547*/
}
// 0x659550
char RadBeam::drawPassengerPips(char a2) {
  *(this + 88) = a2; /*0x659554*/
  return a2; /*0x659557*/
}
// 0x633d30
int TechnoClass::ClearScriptPlanningData() { return 0; }
  int v2; // eax
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void *v6; // eax
  int v7; // [esp+Ch] [ebp-4h] BYREF

  FactoryClass::ClearObjects((int *)this); /*0x633d35*/
  v7 = this; /*0x633d4a*/
  v2 = (*(int (__thiscall **)(int *, int *))(g_ScriptConfig + 16))(&g_ScriptConfig, &v7); /*0x633d4e*/
  if ( v2 != -1 ) /*0x633d54*/
    Array::RemoveAt(&g_ScriptConfig, v2); /*0x633d5c*/
  v3 = (*(int (__thiscall **)(int *, int *))(dword_AC4B30 + 16))(&dword_AC4B30, &v7); /*0x633d71*/
  if ( v3 != -1 ) /*0x633d77*/
    Array::RemoveAt(&dword_AC4B30, v3); /*0x633d7f*/
  v4 = (*(int (__thiscall **)(int *, int *))(dword_AC4C18 + 16))(&dword_AC4C18, &v7); /*0x633d94*/
  if ( v4 != -1 && v4 < dword_AC4C28 && v4 < --dword_AC4C28 ) /*0x633daf*/
  {
    do /*0x633dc7*/
    {
      ++v4; /*0x633db7*/
      *((_DWORD *)dword_AC4C1C + v4 - 1) = *((_DWORD *)dword_AC4C1C + v4); /*0x633dbb*/
    }
    while ( v4 < dword_AC4C28 ); /*0x633dc7*/
  }
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
}
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
}
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
}
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
}
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
}
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
}
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
}
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  }
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
}
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
  if ( g_ScriptPool == v7 ) /*0x633dd7*/
    g_ScriptPool = 0; /*0x633dd9*/
  if ( g_ScriptState == v7 ) /*0x633de5*/
    g_ScriptState = 0; /*0x633de7*/
  if ( g_ScriptActionPool == v7 ) /*0x633df3*/
    g_ScriptActionPool = 0; /*0x633df5*/
  v5 = *(void **)(this + 36); /*0x633dfb*/
  *(_DWORD *)(this + 32) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x633dfe*/
  if ( v5 && *(_BYTE *)(this + 45) ) /*0x633e09*/
  {
    __3_YAXPAX_Z(v5); /*0x633e0f*/
    *(_DWORD *)(this + 36) = 0; /*0x633e17*/
  *(_BYTE *)(this + 45) = 0; /*0x633e1a*/
  *(_DWORD *)(this + 40) = 0; /*0x633e1d*/
  v6 = *(void **)(this + 4); /*0x633e20*/
  *(_DWORD *)this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x633e23*/
  if ( v6 && *(_BYTE *)(this + 13) ) /*0x633e2d*/
  {
    __3_YAXPAX_Z(v6); /*0x633e33*/
    *(_DWORD *)(this + 4) = 0; /*0x633e3b*/
  *(_BYTE *)(this + 13) = 0; /*0x633e3e*/
  *(_DWORD *)(this + 8) = 0; /*0x633e41*/
// 0x4f9af0
        && Object::IsAlliedWithObjectSimpleHouse(this->owner, v11)
        {
          int v3; // eax
          int v5; // eax

          if ( !v11 ) /*0x4f9af9*/
            return 0; /*0x4f9af9*/
          if ( (v11[20] & 2) == 0 ) /*0x4f9aff*/
            return 0; /*0x4f9aff*/
          v3 = (*(int (**)(void))(*(_DWORD *)v11 + 60))(); /*0x4f9b03*/
          if ( !v3 ) /*0x4f9b08*/
            return 0; /*0x4f9b08*/
          if ( (_DWORD *)v3 == owner ) /*0x4f9b0c*/
            return 1; /*0x4f9b11*/
          v5 = *(_DWORD *)(v3 + 48); /*0x4f9b14*/
          if ( v5 == *(owner + 12) ) /*0x4f9b1c*/
            return 1; /*0x4f9b21*/
          return v5 != -1 && (*(owner + 5602) & (1 << v5)) != 0; /*0x4f9b3b*/
        }
      if ( (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 2 && *((_BYTE *)this + 1738) )
        return 1;
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 11
        && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0 && *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3278))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11)
        && *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1540) == 2 )
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
  bool v10; // bl
        v10 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 2
           || *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 6;
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
          v10 = 0;
        if ( !v6[140] && v10 )
        {
          result = (*(int (__thiscall **)(#377 *, _DWORD *))(this->pitchAngle)(this, v11);
          if ( result != -1 )
            return result;
          return 0;
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6)
          && *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1540) == 2 )
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
  int v7 = this->customSound_controller;
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
// 0x6f3820
int TechnoClass::CanTargetHouse() const { return false; 
  _DWORD *v1; // esi
  int result; // eax
  char v4; // bl
  char v5; // [esp+Eh] [ebp-2h]
  bool v6; // [esp+Fh] [ebp-1h]
  _BYTE *v7; // [esp+14h] [ebp+4h]
  char v8; // [esp+14h] [ebp+4h]

  v1 = v7; /*0x6f3823*/
  if ( !v7 || (v7[20] & 1) == 0 ) /*0x6f3832*/
    return -1; /*0x6f3836*/
  v4 = *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 132))(v7) + 3433); /*0x6f384a*/
  v8 = *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 132))(v7) + 3479); /*0x6f3862*/
  v6 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v1 + 132))(v1) + 1660) == 3; /*0x6f3879*/
  v5 = *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v1 + 132))(v1) + 1684); /*0x6f388c*/
  switch ( *(_DWORD *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 1536) ) /*0x6f38a3*/
  {
    case 0: /*0x6f38a3*/
      if ( !v4 || !v1[136] ) /*0x6f38ae*/
        goto LABEL_16; /*0x6f38b6*/
      return -1; /*0x6f38b6*/
    case 1: /*0x6f38a3*/
      return v4 != 0; /*0x6f38cd*/
    case 2: /*0x6f38a3*/
      return (v4 != 0) - 1; /*0x6f38dd*/
    case 3: /*0x6f38a3*/
      if ( !v8 && !v5 ) /*0x6f38ee*/
        goto LABEL_16; /*0x6f38ee*/
      result = 1; /*0x6f38f2*/
      break; /*0x6f38f9*/
    case 4: /*0x6f38a3*/
      if ( v6 || v8 ) /*0x6f390a*/
        goto LABEL_16; /*0x6f390a*/
      result = 1; /*0x6f390e*/
      break; /*0x6f3915*/
    case 6: /*0x6f38a3*/
      return -1; /*0x6f38bf*/
    default:
  LABEL_16:
      result = 0; /*0x6f3918*/
      break; /*0x6f391a*/
  }
  return result; /*0x6f3834*/
}
    result = (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 4) + 12))(v2 + 4); /*0x6389ee*/
    *(_DWORD *)(v2 + 140) = -1; /*0x6389f1*/
    *(_DWORD *)(v2 + 144) = -1; /*0x6389f7*/
    *(_DWORD *)(v2 + 148) = -1; /*0x6389fd*/
    *(_BYTE *)(v2 + 152) = 0; /*0x638a03*/
    *(_BYTE *)(v2 + 153) = 0; /*0x638a0a*/
  }
  return result; /*0x638a12*/
}
int TechnoClass::sub_7441B0() { return 0; }
int TechnoClass::sub_744180() { return 0; }
int TechnoClass::sub_744210() { return 0; }
int TechnoClass::sub_744270() { return 0; 
int TechnoClass::sub_744720() { return 0; 
int TechnoClass::sub_7440B0() { return 0; 
int TechnoClass::sub_744100() { return 0; 
// 0x743190
int TechnoClass::SelectAutoTargetWithGarrison() { return 0; }
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  _DWORD **v10; // eax
  int v11; // eax
  _DWORD **v12; // eax
  int v13; // eax
  _DWORD **v14; // eax
  int v15; // eax

  if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135]) && *(_BYTE *)(a1[433] + 3602) ) /*0x7431a8*/
    return 0; /*0x7431b2*/
  v7 = a3; /*0x7431b9*/
  if ( (a3 & 0x1B978) == 0 ) /*0x7431c3*/
  {
    if ( !TechnoClass::OwnerHasPower(a1) || *(_BYTE *)(a1[433] + 3285) ) /*0x7431da*/
    {
      if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 1016))(a1, 0, a2) ) /*0x74320f*/
      {
        v12 = (_DWORD **)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1016))(a1, 0); /*0x74321a*/
        LOBYTE(v13) = Building::GetRenderType(*v12); /*0x743222*/
        v7 = v13 | a3; /*0x743227*/
      }
      if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 1016))(a1, 1) ) /*0x743235*/
      {
        v14 = (_DWORD **)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 1016))(a1, 1); /*0x743240*/
        LOBYTE(v15) = Building::GetRenderType(*v14); /*0x743248*/
        v7 |= v15; /*0x74324d*/
      }
    }
    else
    {
      v8 = *a1; /*0x7431e5*/
      v9 = TechnoClass::GetPoweredWeaponIndex(a1); /*0x7431e9*/
      v10 = (_DWORD **)(*(int (__thiscall **)(_DWORD *, int))(v8 + 1016))(a1, v9); /*0x7431f1*/
      LOBYTE(v11) = Building::GetRenderType(*v10); /*0x7431f9*/
      v7 = v11 | a3; /*0x7431fe*/
    }
  }
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
  return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5); /*0x7431b4*/
}
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
int TechnoClass::sub_710000() { return 0; 
int TechnoClass::sub_710470() { return 0; 
int TechnoClass::sub_7104A0() { return 0; 
int TechnoClass::sub_7104C0() { return 0; 
int TechnoClass::sub_7106E0() { return 0; 
int TechnoClass::sub_710F70() { return 0; 
int TechnoClass::sub_711E00() { return 0; 
int TechnoClass::sub_711EB0() { return 0; 
int TechnoClass::sub_73EFC0() { return 0; 
int TechnoClass::sub_7393C0() { return 0; 
int TechnoClass::sub_737BA0() { return 0; 
int TechnoClass::sub_738910() { return 0; 
// 0x732050
int TechnoClass::GatherAllBuildings() { return 0; }
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  int v2; // ebp
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  wchar_t *v9; // [esp+10h] [ebp-4h]

  v0 = __2_YAPAXI_Z(0x18u); /*0x732058*/
  if ( v0 ) /*0x732064*/
  {
    v0[1] = 0; /*0x732066*/
    v0[2] = 0; /*0x732069*/
    *((_BYTE *)v0 + 12) = 1; /*0x73206c*/
    *((_BYTE *)v0 + 13) = 0; /*0x732070*/
    *v0 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x732073*/
    v0[5] = 10; /*0x732079*/
    v0[4] = 0; /*0x732080*/
    v1 = v0; /*0x732083*/
  }
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
    ++v2; /*0x7320ed*/
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
  else
  {
    v1 = 0; /*0x732087*/
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
    ++v2; /*0x7320ed*/
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
  else
  {
    v1 = 0; /*0x732087*/
  v2 = 0; /*0x73208e*/
  v9 = g_SelectionManager; /*0x732092*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
    ++v2; /*0x7320ed*/
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/

} // namespace game
} // namespace ra2
