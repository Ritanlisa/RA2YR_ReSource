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
    // RA1 Can_Fire pattern -- without range check
    if (!target)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::ILLEGAL));

    if (isFallingDown)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::CANT));

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::CANT));

    // TODO: Anti-air check -- weapon must have AA capability to target aircraft
    // TODO: Anti-ground check -- weapon must have AG capability to target ground units
    // TODO: Rearm delay check -- Arm != 0 -> REARM

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
    // RA1 Fire_At pattern:
    // 1. Validate weapon & target
    // 2. Calculate fire coordinates (FLH)
    // 3. Calculate firing direction & firepower
    // 4. Create BulletClass with weapon parameters
    // 5. Unlimbo bullet into world
    // 6. Apply recoil, switch burst index
    // 7. Play weapon animation + sound
    // 8. Decrease ammo
    // 9. Reveal hidden units (fog of war)

    if (!target)
        return nullptr;

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return nullptr;

    // Get fire coordinates (muzzle flash position)
    CoordStruct fire_coord;
    GetFLH(&fire_coord, weapon_index, location);

    // TODO: Calculate firing direction
    // If projectile has R != 0 or is lobber -> use Fire_Direction() (turret facing)
    // Otherwise -> Direction(fire_coord, target_coord)

    // TODO: Calculate firepower (consider FirepowerBias, house modifiers, etc.)

    // TODO: Create bullet
    // auto* bullet = new BulletClass(weapon->WeaponType->Projectile, target, this,
    //     firepower, weapon->WeaponType->Warhead, firespeed);
    // bullet->Unlimbo(fire_coord, direction);

    // TODO: Recoil effects, burst index switch

    // TODO: Play weapon animation + sound
    // TODO: DecreaseAmmo()

    // TODO: Reveal hidden units in fog of war (if firer not visible to enemy)
    // If !IsVisibleTo(player):
    //   reveal 2-cell radius around firer

    return nullptr;
}

bool TechnoClass::IsCloseEnoughToAttack(AbstractClass* target) const
{
    return IsCloseEnough(target, currentWeaponSlot);
}

CellClass* TechnoClass::SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy)
{
    // RA1 Greatest_Threat pattern:
    // Two scanning modes: area scan (expanding box) and full-map scan
    //
    // Area scan: radiate outward from current position in expanding box
    //   For each cell: get occupier -> Evaluate_Object() for legality + scoring
    //   Early exit at range/4 and range/2 when best target found
    //
    // Full-map scan: iterate all objects on map layer
    //   For each: Evaluate_Object() with appropriate threat type

    CoordStruct my_pos;
    fetchCoordinatesHere(&my_pos);

    int best_value = current_threat;
    AbstractClass* best_target = nullptr;
    int scan_range = GetWeaponRange(currentWeaponSlot);

    CellStruct center = {
        static_cast<int16_t>(my_pos.X / 256),
        static_cast<int16_t>(my_pos.Y / 256)
    };

    // Area scan -- radiate outward in expanding box
    for (int radius = 0; radius <= scan_range; ++radius)
    {
        for (int dx = -radius; dx <= radius; ++dx)
        {
            for (int dy = -radius; dy <= radius; ++dy)
            {
                // Only scan perimeter of each ring (skip interior)
                if (abs(dx) != radius && abs(dy) != radius)
                    continue;

                CellStruct map_coords = {
                    static_cast<int16_t>(center.X + dx),
                    static_cast<int16_t>(center.Y + dy)
                };

                // TODO: GetCellAt(map_coords) -> get occupier list
                // CellClass* cell = MapClass::Instance->TryGetCellAt(map_coords);
                // if (!cell) continue;
                //
                // for each occupier in cell:
                //   int value = Evaluate_Object(flags, occupier);
                //   if (value > best_value)
                //   {
                //       best_value = value;
                //       best_target = occupier;
                //   }
            }
        }

        // Early exit at range/4 and range/2
        if (best_target && (radius >= scan_range / 4))
        {
            // Early exit for close high-value targets
            break;
        }
    }

    // Full-map fallback if no target found in area scan
    if (!best_target)
    {
        // TODO: iterate all objects on map layer
        // for each object on MapClass::Instance->Objects:
        //   int value = Evaluate_Object(flags, obj);
        //   if (value > best_value)
        //   {
        //       best_value = value;
        //       best_target = obj;
        //   }
    }

    if (best_target)
        SetTarget(best_target);

    return nullptr; // TODO: return CellClass* for the cell containing best target
}

void TechnoClass::Guard()
{
    // RA1: Clear target, enter Guard mission with area-defense mode
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
    // RA1 What_Weapon_Should_I_Use pattern:
    // Compare both weapons' warhead multipliers against target armor
    // Choose the weapon with higher effective damage
    // If within range, double the value
    // Default to primary (weapon 0)
    if (!target)
        return 0;

    auto* primary = GetWeapon(0);
    auto* secondary = GetWeapon(1);

    if (!primary && !secondary)
        return 0;
    if (!primary)
        return 1;
    if (!secondary)
        return 0;

    // If secondary is depleted, use primary
    if (ammo <= 0 && currentWeaponSlot == 1)
        return 0;

    // Default: use primary
    return currentWeaponSlot;
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
    // reloadTimer.Start(weapon->ROF);
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
    // IDA 0x414BB0: Per-frame techno smoke/damage update
    // Default: clear smoke flags for most mission states
    if (currentMission != 1 && currentMission != 27
        && currentMission != 30 && currentMission != 31)
        isChronoImmuneFlag = false;

    // Every 24 frames if moving/attacking: create damage smoke
    if ((CurrentFrame % 24) == 0 && hasBeenAttacked)
    {
        // Create smoke AnimClass at current position
        // AnimClass_ctor(rules[209], coords, 0, 1, 0x600, 0, 0)
    }

    if (isAliveFlag)
    {
        if (isSinking)
        {
            CoordStruct coords;
            fetchCoordinatesHere(&coords);
            // Sinking: adjust Z, if too deep trigger death
        }
        if ((CurrentFrame & 3) == 0 && health > 0)
        {
            // Random damage smoke near position
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
// CreateUnit -- per-frame unit/building construction pipeline
// IDA 0x423AC0, 4234 bytes.
//
// Sections:
// 1. Audio (working sound)
// 2. Cloak/stealth detection
// 3. Building placement validation
// 4. MCV deploy state
// 5. Deploy animation setup
// 6. Deploy/undeploy animation
// 7. Construction progress (main loop)
// 8. Cost accumulation
// 9. Production milestone + type switching
// 10. Final unit creation
// ============================================================
bool TechnoClass::CreateUnit()
{
    auto* type = GetTechnoType();
    if (!type)
        return false;

    auto* building = reinterpret_cast<gamemd::BuildingClass*>(this);
    auto* build_type = reinterpret_cast<gamemd::BuildingTypeClass*>(type);

    // ---- Section 1: Audio setup ----
    if (!audioController3.AudioController_field_00 && build_type->WorkingSound != -1)
    {
        // TODO: StartAudio(building->Audio7, build_type->WorkingSound)
    }

    // ---- Section 2: Cloak/stealth detection ----
    // TODO: if (build_type->HasStupidGuardMode) { CloakDetect(); DetectSensors(); }

    // ---- Section 3: Building placement validation ----
    if (build_type->CanBeOccupied) // IDA: field_883 (placement check flag)
    {
        // TODO: Check if cell owner allows placement
        // building->PlacementAllowed = (CheckCellOwner(building->owner, cell) == 0);
    }

    // ---- Section 4: MCV deploy state check ----
    // TODO: if (type == Rules->MCVType) { placement override }

    // ---- Section 5: Deploy animation coordinate preset ----
    // IDA: if (type->field_844 != -1) { vt_entry_240 preset coords }
    if (build_type->DeployingAnim)
    {
        // TODO: vt_entry_240(this, &location) -- preset deploy coordinates
    }

    // ---- Section 6: Mission queued clear ----
    if (missionQueued && queuedMission == currentMission)
        missionQueued = false;

    // ---- Section 7: Deploy/undeploy animation state machine ----
    // IDA 0x423C24-0x4242A5: vt_entry_488 -> deploy state check
    // Handles: MCV undeploy, subterranean emerge, surface build animation
    {
        // TODO: int deploy_state = vt_entry_488(this);
        // For now, check if building is in deployed state
        bool is_deployed = building->ActuallyPlacedOnMap; // proxy for deploy state

        if (is_deployed)
        {
            // TODO: deploy_state = vt_entry_488()
            // IDA: states 1 (building up) and 2 (holding) trigger animation

            // Create deploy animation based on building type
            if (build_type->IsSubterranean)
            {
                // Subterranean building: special emerge animation from underground
                // IDA: Rules[753][Rules[756]-1] anim at location with Z+3 offset
                // TODO: new AnimClass(Rules->SubterraneanEmergeAnim, location + Z(3), ...)
            }
            else
            {
                // Surface building: deploy anim + build smoke
                // IDA: Rules[37] deploy anim + Rules[753][0] build smoke
                // TODO: new AnimClass(Rules->DeployAnim, location, 0,1,0x600,...)
                // TODO: new AnimClass(Rules->BuildSmokeAnim, location+Z(3), 0,1,0x600,...)
            }

            // Special deploy animation with fire effects
            // IDA: if (type->field_772) -> special anim + fire + smoke effects
            if (build_type->CreateUnitSound) // proxy for field_772
            {
                // TODO: new AnimClass(type->field_772, location, 0,1,0x2600,-30,...)
                // TODO: sub_489280(0, type->field_816, 1, 0) -- fire effect
                // TODO: sub_48A620(anim_coords, 0, 0) -- smoke effect
            }

            // Fire/smoke effects for all deploying buildings
            // IDA: if (type->field_752) { for each count: create fire anim }
            // TODO

            // Crater effect for large buildings
            // IDA: if (type->field_856 && !above_surface) {
            //   circular radius scan -> create debris/damage fire anims
            //   sub_6D2790(crater_rect, 0)
            // }
            // TODO

            // vt_entry_248(this) -- finalize deploy
            // TODO
            return false;
        }
    }

    // ---- Section 8: Construction progress ----
    if (!isAliveFlag)
        return false;

    if (building->ProductionBlocked)
        return false;

    // Section 8a: Construction idle animation
    // TODO: if (build_type->CreateUnitSound) spawn construction anim

    // Section 8b: Production timer countdown
    if (building->ProductionTimer > 0)
    {
        --building->ProductionTimer;
        if (building->ProductionTimer == 0)
        {
            // TODO: ProductionCompletionCallback(this)
        }
        return true;
    }

    // Section 8c: Placement distance check
    if (build_type->IsThreatRatingNode) // IDA: field_864
    {
        // TODO: Check if building has matching type at owner's conyard cell
    }

    // Section 8d: Production size calculation
    if (build_type->ProductionSizeOverride == -1)
    {
        build_type->ProductionSizeOverride = build_type->GetFoundationWidth();
        if (build_type->FreeBuildup) // IDA: field_882 - cliff protector
            build_type->ProductionSizeOverride /= 2;
    }
    if (build_type->ProductionStepsTarget == -1)
        build_type->ProductionStepsTarget = build_type->ProductionSizeOverride;

    // vt_entry_292(this, 2) -- production progress update
    // TODO: update production display bar

    // Section 8e: Production speed tracking
    int prod_speed = building->ProductionSpeed;
    if (prod_speed != 0)
    {
        building->ProductionAccum += prod_speed;
        building->ProductionFrame = static_cast<int>(CurrentFrame);
        building->ProductionRate = prod_speed;
    }

    // Section 8f: Cost accumulation
    double cost_rate = build_type->CostRatePerFrame;
    if (cost_rate > 0.0 && !building->ProductionBlocked)
    {
        // TODO: locomotor type 36 -> cost_rate *= 5.0
        building->CostAccumulator += cost_rate;
        if (building->CostAccumulator >= 1.0 && !building->Audio7.AudioController_field_00)
        {
            int count = static_cast<int>(building->CostAccumulator);
            building->CostAccumulator -= static_cast<double>(count);
            // TODO: SpendMoney(Rules[994/1002], count)
        }
    }

    // ---- Section 9: Milestone and type switching ----
    int accum = building->ProductionAccum;
    int target = build_type->ProductionStepsTarget;
    int offset = build_type->InitialProductionProgress;

    // Pipeline milestone flag (IDA: field_880)
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

    // Production milestone reached
    if (pipeline_step != 0 && pipeline_step != 0xFF)
        building->PipelineStep = pipeline_step - 1;

    // Check production chain
    if (!building->PipelineStep)
    {
        // No more steps -- try switching to next type in chain
        auto* next_type = build_type->NextTypeInChain;
        if (next_type)
        {
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

            // Random timer for new cycle
            // TODO: building->ProductionTimer = RandomBetween(build_type->BuildingTypeClass_field_732, build_type->BuildingTypeClass_field_736)
            building->ProductionTimer = build_type->BuildingTypeClass_field_688;
            building->ProductionFrame = static_cast<int>(CurrentFrame);
            building->ProductionRate = building->ProductionTimer;
            building->ProductionSpeed = building->ProductionTimer;
            building->ProductionAccum = build_type->InitialProductionProgress;

            // TODO: ProductionCompletionCallback(this)
            return true;
        }

        // ---- Section 10: Final unit creation (production complete) ----
        // IDA 0x424938-0x424B31: spawn the produced unit
        if (build_type->DeployingAnim)
        {
            // vt_entry_244 -- finalize deploy coordinates
            // TODO: (*(vt + 244))(this, &location)

            // Check if deploy animation index is valid (<= Rules[829])
            // IDA: if (type->field_844 <= Rules->DeployAnimCount) {
            if (true) // TODO: proper condition
            {
                auto* owner = building->owningHouse();

                // If owner is neutral or invalid, fallback to Civilian house
                // IDA: if (!owner || !IsActive()) -> find Civilian house
                if (!owner)
                {
                    // IDA: iterate houses to find Civilian house
                    // for (int i = 0; i < HouseArray->Count; ++i)
                    //     if (houses[i]->Type == Civilian)
                    //         building->owner = houses[i];
                    // TODO: FindCivilianHouse()
                }

                if (building->owningHouse())
                {
                    // Find exit cell for unit placement
                    // IDA: factory = Rules[826][type->field_844]
                    //       cell = factory->GetExitCoords(building->owner)
                    //       vt_entry_D8 of factory -> PlaceUnit(cell, owner)

                    // Check cell walkability at exit position
                    // IDA: if (cell->field_320 & 0x100) -> obstacle check
                    //       If blocked: vt_entry_124(unit, 0) -> disable
                    //       vt_entry_124(unit, 1) -> re-enable after reposition
                    //       Set unit flag (byte+140 = 1)

                    // Create the unit in playfield
                    // IDA: if (owner->field_492 == 0) { onParticleExpired(unit, 15, 0) }
                    //       // field_492 = no special behavior

                    // TODO: CreateUnitAtCoordsStandard(exit_coords, time, false)
                    // TODO: sub_6B4A50(unit_obj, coords, ...)
                }
            }

            // vt_entry_248(this) -- finalize
            building->isPlayingDamageSound = true;
            // TODO: return vt_entry_248(this);
            return false;
        }

        // No deploy animation -> production complete, set flag
        building->isPlayingDamageSound = true;
        // TODO: return vt_entry_248(this);
    }

    return true;
}

// ============================================================
// ProductionCompletionCallback -- sub_424CE0 (543B)
// IDA 0x424CE0. Called when production timer expires.
//
// Sections:
//  1. vt_entry_292(this, 2) -- update production progress display
//  2. Audio: start/stop WorkingSound on Audio7 controller
//  3. Audio: stop Audio8 controller
//  4. If no completion threshold (type+664 == 0): create unit immediately
//  5. Special building launch (NukeSilo/ICBM/SpySat): launch animation + EVA
//  6. Cell radar update after launch
// ============================================================
static bool ProductionCompletionCallback(TechnoClass* techno)
{
    auto* building = reinterpret_cast<gamemd::BuildingClass*>(techno);
    auto* type = reinterpret_cast<gamemd::BuildingTypeClass*>(techno->GetTechnoType());
    if (!type) return false;

    // Section 1: Update production progress display
    // TODO: vt_entry_292(this, 2)

    // Section 2-3: Audio management
    bool audio_active = (techno->audioController3.AudioController_field_00 != 0);
    bool has_working_sound = (type->WorkingSound != -1);

    if (audio_active || !has_working_sound)
    {
        // No audio or no sound configured -> stop Audio7
        // TODO: AudioControllerStop(&building->Audio7)
    }
    else
    {
        // Start working sound on Audio7
        // TODO: CoordStruct coords; fetchCoordinatesHere(&coords);
        // AudioController_StartAt(type->WorkingSound, coords, &building->Audio7)
    }
    // Stop Audio8
    // TODO: AudioControllerStop(&building->Audio8)

    // Section 4: Immediate unit creation if no threshold
    if (!type->ProductionCompletionThreshold)
    {
        // TODO: CreateUnitOnCompletion(techno)
    }

    // Section 5: Special building launch sequence
    // IDA: check field_855 -> NukeSilo / ICBMLauncher / SpySat types
    if (!audio_active)
    {
        if (type->ICBMLauncher || type->SpySat || type->NukeSilo)
        {
            // Get cell at building position
            // TODO: cell = Coord_To_Cell(fetchCoordinatesHere())
            // TODO: building_idx = BuildingClass_FindByCellHash(cell)
            // if (building_idx != -1) {
            //     building_instance = BuildingClass_InstanceArray[building_idx]
            //     EVA_Announce(cell, cell->field_286 + 1)
            //
            //     // 1-in-3 chance: create launch animation
            //     if (building_instance->field_53 > 0 && !(random() % 3)) {
            //         AnimClass* anim = new AnimClass(
            //             building_instance->Anims[random(0, field_53)],
            //             coords + Z(10),
            //             0, 1, 0x600, 0, 0)
            //         anim->X = BuildingTypeClass_AnimTable[building_instance->field_48 + 780]
            //         anim->Y = cell->field_266
            //     }
            //
            //     PlaySoundEffectAt(coords, Rules[346], ...)
            //     House_AnnounceUpgrade(cell, -1)
            //     Cell_SetRadar(cell)
            //     Radar_Update(cell)
            // }

            // TODO: Full launch sequence implementation
        }
    }

    return true;
}

// ============================================================
// CreateUnitOnCompletion -- sub_424F00 (583B)
// IDA 0x424F00. Creates unit at completion of production.
//
// Sections:
//  1. Get cell coordinates from building position
//  2. Look up foundation size offsets (type+668, type+672)
//  3. Create super weapon fire effects (type+716 -> SW_CreateFireAt)
//  4. Get construction delay (vt_entry_456)
//  5. Branch: CreateUnitAtCoords_Timed or _Standard
// ============================================================
static bool CreateUnitOnCompletion(TechnoClass* techno)
{
    auto* building = reinterpret_cast<gamemd::BuildingClass*>(techno);
    auto* type = reinterpret_cast<gamemd::BuildingTypeClass*>(techno->GetTechnoType());
    if (!type) return false;

    // Section 1: Get cell coordinates
    // IDA: coords = fetchCoordinatesHere() / 256 -> CellCoord_To_CellObj
    // auto* coords = fetchCoordinatesHere(); // via vt_entry_72
    // int cell_x = coords->X / 256;
    // int cell_y = coords->Y / 256;
    // auto* cell = CellCoord_To_CellObj(CellStruct{cell_x, cell_y});

    int build_time = 30;

    // Section 2: Foundation size offsets
    // IDA: vt_entry_108(this) -> if active, calculate foundation dimensions
    // if (vt_entry_108(this)) {
    //     if (type+668 == -1)
    //         type+668 = Building_GetFoundationSize(coords, type+664)[2]
    //     if (type+672 == -1)
    //         type+672 = Building_GetFoundationSize(coords, type+664)[3]
    //     build_time = type+672
    // }

    int foundation_width = build_time; // placeholder for type+668

    // Section 3: Super weapon fire effects
    // IDA: type+716 -> index into SW array, type+720 -> count
    if (type->BuildingTypeClass_field_716 != -1)
    {
        for (int i = 0; i < type->BuildingTypeClass_field_720; ++i)
        {
            // auto sw_coords = fetchCoordinatesHere();
            // SW_CreateFireAt(sw_array[type+716], sw_coords)
        }
    }

    // Section 4-5: Construction delay check and unit creation
    // IDA: int delay = vt_entry_456(this)
    // if (delay < 30) {
    //     if (!type+875 || (type+877 && Random >= 0.5)) {
    //         if (type+877) {
    //             EVA_Announce(cell, 6)
    //             if (type+878)
    //                 CreateUnitAtCoords_Timed(coords, 300, 300, 1)
    //             else
    //                 CreateUnitAtCoords_Timed(coords, foundation_width, build_time, 0)
    //         }
    //     } else {
    //         CreateUnitAtCoords_Standard(coords, foundation_width, build_time, 0)
    //     }
    // }

    // TODO: actual unit creation when cell/coordinate system is ready
    return false;
}

// ============================================================
// ConstructionPositionTracker -- sub_425670 (1688B)
// IDA 0x425670. Tracks building/pod position during construction.
//
// Key logic:
//  1. If not ProductionBlocked: start production timer
//  2. Compare current position vs target position
//  3. If target is invalid (Map_InvalidCoord): compute new target
//  4. If within range (distance <= 18): snap to target, check cell
//  5. If out of range: calculate angle, adjust position via vt_entry_436
//  6. Check cell walkability at 3 neighbor cells
//  7. Calculate direction angle -> update production progress timer
// ============================================================
static void ConstructionPositionTracker(TechnoClass* techno)
{
    auto* building = reinterpret_cast<gamemd::BuildingClass*>(techno);
    auto* type = reinterpret_cast<gamemd::BuildingTypeClass*>(techno->GetTechnoType());
    if (!type) return;

    // Section 1: Start production timer if not blocked
    if (!building->ProductionBlocked)
    {
        building->ProductionFrame = static_cast<int>(CurrentFrame);
        building->ProductionSpeed = 0;
        building->ProductionRate = 0;
    }

    // Section 2-3: Target position management
    // IDA: Compare current location with target coords (this+0x210 area)
    //       If target matches Map_InvalidCoord or ProductionBlocked:
    //         Compute position via Building_ComputePosition
    //         If computed is still invalid: mark ProductionBlocked,
    //           set ProductionSpeed=1, recalculate mission timer

    // Section 4: Distance check
    // IDA: Coord_Subtract(current_pos - target_pos)
    //       If Coord_Length(delta) > 18: far away
    //         Calculate angle (Math_SinCos/ArcTan2), adjust position
    //         vt_entry_436(this, adjusted_coords)
    //       Else: close enough
    //         Check cell type (Coord_To_Cell + cell_data[59])
    //         If valid: update target position from Building_ComputePosition
    //         Increment retry counter

    // Section 5: Cell walkability check
    // IDA: if building is on surface (Coordinates.Z >= ground + threshold)
    //        Check 3 adjacent cells for walkability (cell_data[80] & 0x100)
    //        If all 3 are blocked: set flag (this+141 = 1)

    // Section 6: Angle calculation and timer update
    // IDA: if not ProductionBlocked:
    //        If current position != target:
    //          Math_CalcAngle(Y_delta, X_delta) -> direction
    //          Math_RoundToInt(angle) -> rotation steps
    //          rotation_steps = type+848 * calculated_steps
    //        CurrentMission = rotation_steps + (CurrentFrame/3 % type+848)
    //
    // IDA: if ProductionBlocked:
    //        foundation_size = vt_entry_108(this).GetFoundationWidth() / 2 - 1
    //        if CurrentMission >= foundation_size:
    //          vt_entry_248(this) -> complete construction
}

// ============================================================
// CreateUnitAtCoordsStandard -- sub_6B59A0
// IDA 0x6B59A0. Creates a unit at specified cell coordinates.
//
// Algorithm:
//  1. Skip if coords == Map_BottomRightCell
//  2. Lock mutex, iterate BuildingTypeClass instances:
//     - Filter: entry+673 flag set + cell is walkable
//     - Add to candidate list (max 10)
//  3. Unlock mutex, filter candidates by size constraints
//  4. If filtered: random pick -> UnitClass_Create
//  5. Else if regular: random pick -> UnitClass_Create
//  6. Clean up dynamic vectors
// ============================================================
static bool CreateUnitAtCoordsStandard(CoordStruct* coords, int time, bool special)
{
    if (!coords) return false;

    // TODO: Check if coords == Map_BottomRightCell -> early return

    // TODO: Game_LockMutex
    // foreach BuildingTypeClass instance in global array:
    //   if (instance->CanPlaceAtCoords):   // flag at +673
    //     if (Cell_IsWalkable(cell, special)):
    //       add to candidates (DynamicVectorClass, max 10)
    // TODO: Game_LockMutex (unlock)

    // TODO: Filter candidates by size constraints (field_664/668)
    // if (filtered count > 0):
    //   pick Random_Range(0, filtered_count - 1)
    //   UnitClass_Create(filtered[index], coords, -1)
    // elif (candidate count > 0):
    //   pick Random_Range(0, candidate_count - 1)
    //   UnitClass_Create(candidates[index], coords, -1)

    // TODO: Clean up dynamic vectors

    return false;
}

// ============================================================
// CreateUnitAtCoordsTimed -- sub_6B5C90
// IDA 0x6B5C90. Variant with timed placement rules.
// Same structure as Standard but checks entry+672 flag instead.
// ============================================================
static bool CreateUnitAtCoordsTimed(CoordStruct* coords, int time, bool special)
{
    if (!coords) return false;

    // TODO: Same flow as Standard but:
    //   - Filter: entry+672 flag (instead of +673)
    //   - Additional time-based constraints
    //   - Standard: check (field != 1 || field_668 != 1) && (time <= 60 || special <= 50)
    //   - Timed: check (field > 1 && field_668 > 1) for special mode

    return false;
}

// ============================================================
// TechnoClass::Update -- parent per-frame update (IDA 0x6F3F40)
// Called by all TechnoClass subclasses (Building/Infantry/Unit/Aircraft).
//
// Sections:
//  1. Owner check: if C4AppliedBy(this+540) exists, update owner flag
//  2. vt_entry_132 -> get TechnoTypeClass* -> create particle/vfx systems:
//     a. type+3392  -> sub_6AF1A0 -> store at this+728 (laser/sensor system)
//     b. type+3416  -> sub_6B6C90 -> store at this+720 (particle system)
//     c. type+172->341 -> sub_4717D0 -> store at this+700 (pip/display)
//     d. type+172->345 -> sub_6292B0 -> store at this+1692 (planning token)
//     e. type+172->346 -> sub_71A4E0 -> store at this+628 (locomotor link?)
//     f. type+1564    -> sub_41D380 -> store at this+660 (capture manager?)
//  3. Production display setup (type+3375/3376):
//     Copy Rules display fields to this+1304/1308
//  4. Copy type members to instance:
//     type+3236->3252 (4 dwords) -> this+984->1004
//     type+3256->3272 (4 dwords) -> this+1016->1040
//  5. Set this+1180=1, this+1184=0 (update flags)
// ============================================================

} // namespace game
} // namespace ra2
