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
    , group(-1)
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
    // IDA: 0x6F3F40 — TechnoClass::GetFireErrorWithoutRange
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
    // IDA: 0x6F3330 — TechnoClass::SelectWeapon
    // Chooses primary (0) or secondary (1) weapon based on:
    // weapon availability, ammo, Versus multipliers, and range bonus.
    if (!target)
        return currentWeaponSlot;

    auto* primary = GetWeapon(0);
    auto* secondary = GetWeapon(1);

    if (!primary && !secondary)
        return 0;
    if (!primary)
        return 1;
    if (!secondary)
        return 0;

    // IDA: If secondary is ammo-depleted, use primary
    if (ammo <= 0 && currentWeaponSlot == 1)
        return 0;

    // IDA: Calculate Versus multipliers (armor-based effectiveness)
    // Primary vs target armor and Secondary vs target armor
    double primary_value = 1.0;
    double secondary_value = 1.0;

    if (primary)
        primary_value = 1.0;
    if (secondary)
    {
        secondary_value = 1.0;
        // IDA: Range bonus — if secondary is within range, give +100% weight
        if (IsCloseEnoughToAttack(target))
            secondary_value *= 2.0;
    }

    if (secondary_value > primary_value)
        return 1;

    return 0;
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
    auto* type = GetTechnoType();
    if (!type)
        return false;

    auto* building = (gamemd::BuildingClass*)(this);
    auto* build_type = (gamemd::BuildingTypeClass*)(type);

    // ---- Section 1: Audio setup (WorkingSound) ----
    // IDA: if (!audioController3.field_00 && build_type->WorkingSound != -1)
    //        StartAudioController(type->WorkingSound, 0) at coordinates
    if (!audioController3.AudioController_field_00 && build_type->WorkingSound != -1)
    {
        // IDA: StartAudioController(type->WorkingSound, coords, &building->Audio7)
    }

    // ---- Section 2: Cloak/stealth detection ----
    // IDA: if (build_type->HasStupidGuardMode)
    //   CloakDetect(); DetectSensors();
    if (build_type->HasStupidGuardMode)
    {
        // IDA: Cloak detection and sensor sweep for special buildings
    }

    // ---- Section 3: Building placement validation ----
    // IDA: if (build_type->CanBeOccupied — field_883):
    //   Building->PlacementAllowed = (CheckCellOwner(building->owner, cell) == 0)
    if (build_type->CanBeOccupied)
    {
        // IDA: Check if cell owner allows placement at this location
        // building->PlacementAllowed = (CheckCellOwner(...) == 0);
    }

    // ---- Section 4: MCV deploy state check ----
    // IDA: if (type == Rules->MCVType) — special placement override for MCV unpacking
    // IDA: if (type == Rules->MCVType) { placement override logic }

    // ---- Section 5: Deploy animation coordinate preset ----
    // IDA: if (type->field_844 != -1) — has deploy animation
    //   vt_entry_240(this, &location) — preset deploy coordinates
    if (build_type->DeployingAnim)
    {
        // IDA: vt_entry_240(this, &location) — preset deploy coordinates for animation
    }

    // ---- Section 6: Mission queued clear ----
    if (missionQueued && queuedMission == currentMission)
        missionQueued = false;

    // ---- Section 7: Deploy/undeploy animation state machine ----
    // IDA: vt_entry_488(this) → deploy state check (0=undeployed, 1=building, 2=holding)
    // Creates: build-up animation, subterranean emerge, deploy smoke, fire effects
    {
        bool is_deployed = building->ActuallyPlacedOnMap;

        if (is_deployed)
        {
            // IDA: deploy_state = vt_entry_488()
            // States 1 (building up) and 2 (holding) trigger animation sequences

            // IDA: Subterranean building emerge animation (Rules[753][Rules[756]-1])
            if (build_type->IsSubterranean)
            {
                // IDA: new AnimClass(Rules->SubterraneanEmergeAnim, location + Z(3), 0,1,0x600,0,0)
            }
            else
            {
                // IDA: Surface building: deploy anim (Rules[37]) + build smoke (Rules[753][0])
                // IDA: new AnimClass(Rules->DeployAnim, location, 0,1,0x600,...)
                // IDA: new AnimClass(Rules->BuildSmokeAnim, location+Z(3), 0,1,0x600,...)
            }

            // IDA: Special deploy animation with fire/smoke effects (type->field_772)
            if (build_type->CreateUnitSound)
            {
                // IDA: new AnimClass(type->field_772, location, 0,1,0x2600,-30,...)
                // IDA: sub_489280(0, type->field_816, 1, 0) — fire effect
                // IDA: sub_48A620(anim_coords, 0, 0) — smoke effect
            }

            // IDA: Fire/smoke effects for all deploying buildings (type->field_752)
            // IDA: Crater effect for large buildings (type->field_856 && !above_surface)
            //   Circular radius scan → create debris/damage fire anims
            //   Cell::CreateCrater(crater_rect, 0) — sub_6D2790

            // IDA: vt_entry_248(this) — finalize deploy state machine
            return false;
        }
    }

    // ---- Section 8: Construction progress ----
    if (!isAliveFlag)
        return false;

    if (building->ProductionBlocked)
        return false;

    // IDA: Section 8a: Construction idle animation
    // if (build_type->CreateUnitSound) spawn construction progress anim

    // IDA: Section 8b: Production timer countdown
    if (building->ProductionTimer > 0)
    {
        --building->ProductionTimer;
        if (building->ProductionTimer == 0)
        {
            // IDA: ProductionCompletionCallback(this)
        }
        return true;
    }

    // IDA: Section 8c: Placement distance check
    if (build_type->IsThreatRatingNode)
    {
        // IDA: Check if building has matching type at owner's conyard cell
        // BuildingClass_FindByCellHash(cell) → verify type match
    }

    // IDA: Section 8d: Production size calculation
    if (build_type->ProductionSizeOverride == -1)
    {
        build_type->ProductionSizeOverride = build_type->GetFoundationWidth();
        if (build_type->FreeBuildup)
            build_type->ProductionSizeOverride /= 2;
    }
    if (build_type->ProductionStepsTarget == -1)
        build_type->ProductionStepsTarget = build_type->ProductionSizeOverride;

    // IDA: vt_entry_292(this, 2) — update production progress display bar

    // IDA: Section 8e: Production speed tracking
    int prod_speed = building->ProductionSpeed;
    if (prod_speed != 0)
    {
        building->ProductionAccum += prod_speed;
        building->ProductionFrame = (int)(CurrentFrame);
        building->ProductionRate = prod_speed;
    }

    // IDA: Section 8f: Cost accumulation
    // IDA: cost_rate = type->CostRatePerFrame;
    //       if (cost_rate > 0.0 && !ProductionBlocked)
    //         CostAccumulator += cost_rate
    //         if (CostAccumulator >= 1.0): SpendMoney(Rules[994/1002], floor(CostAccumulator))
    double cost_rate = build_type->CostRatePerFrame;
    if (cost_rate > 0.0 && !building->ProductionBlocked)
    {
        // IDA: Locomotor type 36 (jumpjet) → cost_rate *= 5.0
        // IDA: building->CostAccumulator += cost_rate;
        // IDA: if (CostAccumulator >= 1.0) spend money and decrement accumulator
        building->CostAccumulator += cost_rate;
        if (building->CostAccumulator >= 1.0)
        {
            int count = (int)(building->CostAccumulator);
            building->CostAccumulator -= (double)(count);
            // IDA: SpendMoney(Rules[994/1002], count) — charge owner for progress
        }
    }

    // ---- Section 9: Milestone and type switching ----
    int accum = building->ProductionAccum;
    int target = build_type->ProductionStepsTarget;
    int offset = build_type->InitialProductionProgress;

    // IDA: Pipeline milestone flag (type->field_880 = IsBaseDefense):
    //       if (IsBaseDefense && accum < ProductionSizeOverride && accum == 0) return true
    if (build_type->IsBaseDefense)
    {
        if (accum < build_type->ProductionSizeOverride && accum == 0)
            return true;
    }

    uint8_t pipeline_step = building->PipelineStep;
    if (pipeline_step > 1)
    {
        if (accum < target - offset)
            return true;
    }
    else if (accum < build_type->ProductionSizeOverride)
    {
        return true;
    }

    // IDA: Production milestone reached — decrement pipeline step
    if (pipeline_step != 0 && pipeline_step != 0xFF)
        building->PipelineStep = pipeline_step - 1;

    // IDA: Check production chain (NextTypeInChain)
    if (!building->PipelineStep)
    {
        auto* next_type = build_type->NextTypeInChain;
        if (next_type)
        {
            // IDA: Switch to next type in production chain
            building->Type = (gamemd::BuildingTypeClass*)(next_type);
            build_type = building->Type;

            if (build_type->ProductionSizeOverride == -1)
            {
                build_type->ProductionSizeOverride = build_type->GetFoundationWidth();
                if (build_type->FreeBuildup)
                    build_type->ProductionSizeOverride /= 2;
            }
            if (build_type->ProductionStepsTarget == -1)
                build_type->ProductionStepsTarget = build_type->ProductionSizeOverride;

            building->ProductionBlocked = false;
            building->PipelineStep = build_type->PipelineStepCount;
            building->ProductionAccum = 0;

            // IDA: Random timer for new production cycle
            // building->ProductionTimer = RandomBetween(type->field_732, type->field_736)
            building->ProductionTimer = build_type->BuildingTypeClass_field_688;
            building->ProductionFrame = (int)(CurrentFrame);
            building->ProductionRate = building->ProductionTimer;
            building->ProductionSpeed = building->ProductionTimer;
            building->ProductionAccum = build_type->InitialProductionProgress;

            // IDA: ProductionCompletionCallback(this)
            return true;
        }

        // ---- Section 10: Final unit creation (production complete) ----
        // IDA: 0x424938-0x424B31 — spawn the produced unit
        if (build_type->DeployingAnim)
        {
            // IDA: vt_entry_244(this, &location) — finalize deploy coordinates

            // IDA: if (type->field_844 <= Rules->DeployAnimCount):
            auto* owner = building->owningHouse();

            // IDA: If owner is neutral/invalid, find Civilian house fallback
            if (!owner)
            {
                // IDA: HouseTypeClass::Find("Civilian") — sub_6A46D0
                // Iterate HouseClass array to find house with type=Civilian
                // building->owner = civilian_house;
            }

            if (building->owningHouse())
            {
                // IDA: Find exit cell for unit placement
                // factory = Rules[826][type->field_844]
                // cell = factory->GetExitCoords(building->owner)
                // Check cell walkability, handle obstacle repositioning
                // Create the unit in playfield
                // if (owner->field_492 == 0): onParticleExpired(unit, 15, 0)
                // StandardCreateUnitAtCoords(exit_coords, time, false) — sub_6B59A0
                // sub_6B4A50(unit_obj, coords, ...) — unit post-creation setup
            }

            // IDA: vt_entry_248(this) — finalize construction state
            building->isPlayingDamageSound = true;
            return false;
        }

        // IDA: No deploy animation → production complete, set completion flag
        building->isPlayingDamageSound = true;
        // IDA: vt_entry_248(this) — finalize construction
    }

    return true;
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
void TechnoClass::CreateDestructionEffect() {}
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
int TechnoClass::SelectWeapon() { return 0; }
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
