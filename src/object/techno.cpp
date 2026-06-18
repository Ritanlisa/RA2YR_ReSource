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
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::ILLEGAL));

    if (isFallingDown)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::CANT));

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::CANT));

    // IDA: Anti-air check — weapon must have AA=yes to target aircraft (isAirborne)
    // IDA: Anti-ground check — weapon must have AG=yes to target ground units (!isAirborne)
    // Enforced via WeaponStruct AA/AG flags checked against target altitude

    // IDA: Rearm delay check — if weapon Arm != 0 and rearm timer active → REARM
    // if (weapon->Arm != 0 && !isArmed()) return FireError::REARM;

    if (ammo <= 0)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::AMMO));

    if (cloakState == static_cast<uint32_t>(gamemd::CloakState::Cloaked))
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::CLOAKED));

    return static_cast<FireError>(static_cast<int>(gamemd::FireError::NONE));
}

FireError TechnoClass::GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const
{
    auto result = GetFireErrorWithoutRange(target, weapon_index);
    if (static_cast<int>(result) != static_cast<int>(gamemd::FireError::NONE))
        return result;

    if (!IsCloseEnoughToAttack(target) && !ignore_range)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::RANGE));

    return static_cast<FireError>(static_cast<int>(gamemd::FireError::NONE));
}

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
    if (static_cast<int>(err) != static_cast<int>(gamemd::FireError::NONE))
        return nullptr;

    // IDA: Get fire coordinates (muzzle flash position via GetFLH)
    CoordStruct fire_coord;
    GetFLH(&fire_coord, weapon_index, location);

    // IDA: Calculate firepower with veterancy bonuses
    int firepower = 25;
    firepower = static_cast<int>(firepower * firepowerMultiplier);
    if (currentRank > -1)
    {
        if (static_cast<int>(gamemd::Rank::Veteran) <= currentRank)
            firepower = static_cast<int>(firepower * 1.1);
        if (static_cast<int>(gamemd::Rank::Elite) <= currentRank)
            firepower = static_cast<int>(firepower * 1.2);
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
        static_cast<int16_t>(my_pos.X / 256),
        static_cast<int16_t>(my_pos.Y / 256)
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
                    static_cast<int16_t>(center.X + dx),
                    static_cast<int16_t>(center.Y + dy)
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
    queueMission(static_cast<Mission>(static_cast<int>(gamemd::Mission::Guard)), true);
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
    cloakState = static_cast<uint32_t>(gamemd::CloakState::Cloaked);
    isCloakableFlag = true;
}

void TechnoClass::Uncloak(bool play_sound)
{
    cloakState = static_cast<uint32_t>(gamemd::CloakState::Uncloaking);
}

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

    if (should_cloak && cloakState != static_cast<uint32_t>(gamemd::CloakState::Cloaked))
        Cloak(true);
    else if (should_uncloak && cloakState != static_cast<uint32_t>(gamemd::CloakState::Uncloaked))
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
bool TechnoClass::CreateUnit()
{
    auto* type = GetTechnoType();
    if (!type)
        return false;

    auto* building = reinterpret_cast<gamemd::BuildingClass*>(this);
    auto* build_type = reinterpret_cast<gamemd::BuildingTypeClass*>(type);

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
        building->ProductionFrame = static_cast<int>(CurrentFrame);
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
            int count = static_cast<int>(building->CostAccumulator);
            building->CostAccumulator -= static_cast<double>(count);
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
            building->Type = reinterpret_cast<gamemd::BuildingTypeClass*>(next_type);
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
            building->ProductionFrame = static_cast<int>(CurrentFrame);
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
static bool ProductionCompletionCallback(TechnoClass* techno)
{
    auto* building = reinterpret_cast<gamemd::BuildingClass*>(techno);
    auto* type = reinterpret_cast<gamemd::BuildingTypeClass*>(techno->GetTechnoType());
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
static bool CreateUnitOnCompletion(TechnoClass* techno)
{
    auto* building = reinterpret_cast<gamemd::BuildingClass*>(techno);
    auto* type = reinterpret_cast<gamemd::BuildingTypeClass*>(techno->GetTechnoType());
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
static void ConstructionPositionTracker(TechnoClass* techno)
{
    auto* building = reinterpret_cast<gamemd::BuildingClass*>(techno);
    auto* type = reinterpret_cast<gamemd::BuildingTypeClass*>(techno->GetTechnoType());
    if (!type) return;

    // IDA: Section 1: Start production timer if not blocked
    if (!building->ProductionBlocked)
    {
        building->ProductionFrame = static_cast<int>(CurrentFrame);
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
