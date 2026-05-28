#include "gamemd/object/techno.hpp"
#include "gamemd/structure/building.hpp"
#include "gamemd/type/building_type.hpp"

#include <cstring>

namespace ra2 {
namespace game {

extern int& CurrentFrame;

TechnoClass::TechnoClass() noexcept
    : m_transporter(nullptr)
    , m_unknown_int_120(0)
    , m_current_turret_number(0)
    , m_unknown_int_128(0)
    , m_behind_anim(nullptr)
    , m_deploy_anim(nullptr)
    , m_in_air(false)
    , m_current_weapon_number(0)
    , m_current_ranking(-1)
    , m_current_gattling_stage(0)
    , m_gattling_value(0)
    , m_unknown_148(0)
    , m_initial_owner(nullptr)
    , m_armor_multiplier(1.0)
    , m_firepower_multiplier(1.0)
    , m_iron_tint_stage(0)
    , m_airstrike_tint_stage(0)
    , m_force_shielded(0)
    , m_deactivated(false)
    , m_drain_target(nullptr)
    , m_draining_me(nullptr)
    , m_drain_anim(nullptr)
    , m_disguised(false)
    , m_disguise_creation_frame(0)
    , m_unknown_bool_1F8(false)
    , m_unknown_208(0)
    , m_unknown_20C(0)
    , m_group(-1)
    , m_focus(nullptr)
    , m_owner(nullptr)
    , m_cloak_state(0)
    , m_warp_factor(0.0f)
    , m_unknown_bool_250(false)
    , m_last_sight_coords{}
    , m_last_sight_range(0)
    , m_last_sight_height(0)
    , m_gap_super_charged(false)
    , m_generating_gap(false)
    , m_gap_radius(0)
    , m_being_warped_out(false)
    , m_warping_out(false)
    , m_unknown_bool_272(false)
    , m_unused_273(0)
    , m_temporal_im_using(nullptr)
    , m_temporal_targeting_me(nullptr)
    , m_is_immobilized(false)
    , m_unknown_280(0)
    , m_chrono_lock_remaining(0)
    , m_chrono_dest_coords{}
    , m_airstrike(nullptr)
    , m_berzerk(false)
    , m_berzerk_duration_left(0)
    , m_spray_offset_index(0)
    , m_uncrushable(false)
    , m_direct_rocker_linked_unit(nullptr)
    , m_locomotor_target(nullptr)
    , m_locomotor_source(nullptr)
    , m_target(nullptr)
    , m_last_target(nullptr)
    , m_capture_manager(nullptr)
    , m_mind_controlled_by(nullptr)
    , m_mind_controlled_by_a_unit(false)
    , m_mind_control_ring_anim(nullptr)
    , m_mind_controlled_by_house(nullptr)
    , m_spawn_manager(nullptr)
    , m_spawn_owner(nullptr)
    , m_slave_manager(nullptr)
    , m_slave_owner(nullptr)
    , m_originally_owned_by_house(nullptr)
    , m_bunker_linked_item(nullptr)
    , m_pitch_angle(0.0f)
    , m_unknown_2F8(0)
    , m_ammo(0)
    , m_value(0)
    , m_fire_particle_system(nullptr)
    , m_spark_particle_system(nullptr)
    , m_natural_particle_system(nullptr)
    , m_damage_particle_system(nullptr)
    , m_railgun_particle_system(nullptr)
    , m_unk1_particle_system(nullptr)
    , m_unk2_particle_system(nullptr)
    , m_firing_particle_system(nullptr)
    , m_wave(nullptr)
    , m_angle_rotated_sideways(0.0f)
    , m_angle_rotated_forwards(0.0f)
    , m_rocking_sideways_per_frame(0.0f)
    , m_rocking_forwards_per_frame(0.0f)
    , m_hijacker_infantry_type(0)
    , m_unknown_34C(0)
    , m_unload_timer{}
    , m_barrel_facing{}
    , m_facing{}
    , m_turret_facing{}
    , m_current_burst_index(0)
    , m_unknown_short_3C8(0)
    , m_unknown_3CA(0)
    , m_counted_as_owned(false)
    , m_is_sinking(false)
    , m_was_sinking_already(false)
    , m_unknown_bool_3CF(false)
    , m_unknown_bool_3D0(false)
    , m_has_been_attacked(false)
    , m_cloakable(false)
    , m_is_primary_factory(false)
    , m_spawned(false)
    , m_is_in_playfield(false)
    , m_unknown_bool_418(false)
    , m_unknown_bool_419(false)
    , m_is_human_controlled(false)
    , m_discovered_by_player(false)
    , m_discovered_by_computer(false)
    , m_unknown_bool_41D(false)
    , m_unknown_bool_41E(false)
    , m_unknown_bool_41F(false)
    , m_sight_increase(0)
    , m_recruitable_a(false)
    , m_recruitable_b(false)
    , m_is_radar_tracked(false)
    , m_is_on_carryall(false)
    , m_is_crashing(false)
    , m_was_crashing_already(false)
    , m_is_being_manipulated(false)
    , m_being_manipulated_by(nullptr)
    , m_chrono_warped_by_house(nullptr)
    , m_unknown_bool_430(false)
    , m_unknown_bool_431(false)
    , m_unknown_bool_432(false)
    , m_old_team(nullptr)
    , m_counted_as_owned_special(false)
    , m_absorbed(false)
    , m_unknown_bool_43A(false)
    , m_unknown_43C(0)
    , m_unknown_49C(0)
    , m_unknown_4A0(0)
    , m_unknown_bool_4B8(false)
    , m_unknown_4BC(0)
    , m_unknown_bool_4D4(false)
    , m_unknown_4D8(0)
    , m_queued_voice_index(0)
    , m_unknown_4F4(0)
    , m_unknown_bool_4F8(false)
    , m_unknown_4FC(0)
    , m_unknown_500(0)
    , m_emp_lock_remaining(0)
    , m_threat_posed(0)
    , m_should_lose_target_now(0)
    , m_firing_rad_beam(nullptr)
    , m_planning_token(nullptr)
    , m_disguise(nullptr)
    , m_disguised_as_house(nullptr)
{
    std::memset(&m_flashing, 0, sizeof(m_flashing));
    std::memset(&m_animation, 0, sizeof(m_animation));
    std::memset(&m_passengers, 0, sizeof(m_passengers));
    std::memset(&m_veterancy, 0, sizeof(m_veterancy));
    std::memset(&m_idle_action_timer, 0, sizeof(m_idle_action_timer));
    std::memset(&m_radar_flash_timer, 0, sizeof(m_radar_flash_timer));
    std::memset(&m_targeting_timer, 0, sizeof(m_targeting_timer));
    std::memset(&m_iron_curtain_timer, 0, sizeof(m_iron_curtain_timer));
    std::memset(&m_iron_tint_timer, 0, sizeof(m_iron_tint_timer));
    std::memset(&m_airstrike_timer, 0, sizeof(m_airstrike_timer));
    std::memset(&m_airstrike_tint_timer, 0, sizeof(m_airstrike_tint_timer));
    std::memset(&m_infantry_blink_timer, 0, sizeof(m_infantry_blink_timer));
    std::memset(&m_disguise_blink_timer, 0, sizeof(m_disguise_blink_timer));
    std::memset(&m_reload_timer, 0, sizeof(m_reload_timer));
    std::memset(&m_cloak_progress, 0, sizeof(m_cloak_progress));
    std::memset(&m_cloak_delay_timer, 0, sizeof(m_cloak_delay_timer));
    std::memset(&m_disk_laser_timer, 0, sizeof(m_disk_laser_timer));
    std::memset(&m_target_laser_timer, 0, sizeof(m_target_laser_timer));
    std::memset(&m_turret_recoil, 0, sizeof(m_turret_recoil));
    std::memset(&m_barrel_recoil, 0, sizeof(m_barrel_recoil));
    std::memset(&m_tiberium, 0, sizeof(m_tiberium));
    std::memset(&m_audio3, 0, sizeof(m_audio3));
    std::memset(&m_audio4, 0, sizeof(m_audio4));
    std::memset(&m_audio5, 0, sizeof(m_audio5));
    std::memset(&m_audio6, 0, sizeof(m_audio6));

    m_abstract_flags |= 0x1u;
}

FireError TechnoClass::GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const
{
    // RA1 Can_Fire pattern — without range check
    if (!target)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::ILLEGAL));

    if (m_is_falling_down)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::CANT));

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::CANT));

    // TODO: Anti-air check — weapon must have AA capability to target aircraft
    // TODO: Anti-ground check — weapon must have AG capability to target ground units
    // TODO: Rearm delay check — Arm != 0 → REARM

    if (m_ammo <= 0)
        return static_cast<FireError>(static_cast<int>(gamemd::FireError::AMMO));

    if (m_cloak_state == static_cast<uint32_t>(gamemd::CloakState::Cloaked))
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
    GetFLH(&fire_coord, weapon_index, m_location);

    // TODO: Calculate firing direction
    // If projectile has R != 0 or is lobber → use Fire_Direction() (turret facing)
    // Otherwise → Direction(fire_coord, target_coord)

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
    return IsCloseEnough(target, m_current_weapon_number);
}

CellClass* TechnoClass::SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy)
{
    // RA1 Greatest_Threat pattern:
    // Two scanning modes: area scan (expanding box) and full-map scan
    //
    // Area scan: radiate outward from current position in expanding box
    //   For each cell: get occupier → Evaluate_Object() for legality + scoring
    //   Early exit at range/4 and range/2 when best target found
    //
    // Full-map scan: iterate all objects on map layer
    //   For each: Evaluate_Object() with appropriate threat type

    CoordStruct my_pos;
    GetCoords(&my_pos);

    int best_value = current_threat;
    AbstractClass* best_target = nullptr;
    int scan_range = GetWeaponRange(m_current_weapon_number);

    CellStruct center = {
        static_cast<int16_t>(my_pos.X / 256),
        static_cast<int16_t>(my_pos.Y / 256)
    };

    // Area scan — radiate outward in expanding box
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

                // TODO: GetCellAt(map_coords) → get occupier list
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
    m_target = nullptr;
    m_last_target = nullptr;
    QueueMission(static_cast<Mission>(static_cast<int>(gamemd::Mission::Guard)), true);
}

void TechnoClass::SetTarget(AbstractClass* target)
{
    m_last_target = m_target;
    m_target = target;
    if (target)
        SetDestination(target, false);
}

void TechnoClass::Cloak(bool play_sound)
{
    m_cloak_state = static_cast<uint32_t>(gamemd::CloakState::Cloaked);
    m_cloakable = true;
}

void TechnoClass::Uncloak(bool play_sound)
{
    m_cloak_state = static_cast<uint32_t>(gamemd::CloakState::Uncloaking);
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
    if (m_ammo <= 0 && m_current_weapon_number == 1)
        return 0;

    // Default: use primary
    return m_current_weapon_number;
}

void TechnoClass::DecreaseAmmo()
{
    if (m_ammo > 0)
        --m_ammo;
}

void TechnoClass::Reload()
{
    auto* weapon = GetWeapon(m_current_weapon_number);
    if (!weapon)
        return;
    // m_reload_timer.Start(weapon->ROF);
}

void TechnoClass::UpdateCloak(bool unknown)
{
    if (!m_cloakable)
        return;

    bool should_cloak = ShouldBeCloaked();
    bool should_uncloak = ShouldNotBeCloaked();

    if (should_cloak && m_cloak_state != static_cast<uint32_t>(gamemd::CloakState::Cloaked))
        Cloak(true);
    else if (should_uncloak && m_cloak_state != static_cast<uint32_t>(gamemd::CloakState::Uncloaked))
        Uncloak(true);
}

void TechnoClass::CreateGap()
{
    m_generating_gap = true;
    m_gap_radius = 0;
}

void TechnoClass::DestroyGap()
{
    m_generating_gap = false;
}

void TechnoClass::UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    m_last_sight_coords = m_location;
}

void TechnoClass::RadarTrackingStart()
{
    m_is_radar_tracked = true;
}

void TechnoClass::RadarTrackingStop()
{
    m_is_radar_tracked = false;
}

void TechnoClass::RadarTrackingFlash()
{
    m_is_radar_tracked = !m_is_radar_tracked;
}

void TechnoClass::RadarTrackingUpdate(bool unknown)
{
}

void TechnoClass::SmokeUpdate()
{
    // IDA 0x414BB0: Per-frame techno smoke/damage update
    // Default: clear smoke flags for most mission states
    if (m_current_mission != 1 && m_current_mission != 27
        && m_current_mission != 30 && m_current_mission != 31)
        m_unknown_bool_430 = false;

    // Every 24 frames if moving/attacking: create damage smoke
    if ((CurrentFrame % 24) == 0 && m_has_been_attacked)
    {
        // Create smoke AnimClass at current position
        // AnimClass_ctor(rules[209], coords, 0, 1, 0x600, 0, 0)
    }

    if (m_is_alive)
    {
        if (m_is_sinking)
        {
            CoordStruct coords;
            GetCoords(&coords);
            // Sinking: adjust Z, if too deep trigger death
        }
        if ((CurrentFrame & 3) == 0 && m_health > 0)
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
    if (!m_passengers.FirstPassenger)
        m_passengers.FirstPassenger = passenger;
    m_passengers.NumPassengers++;
}

// ============================================================
// CreateUnit — per-frame unit/building construction pipeline
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
    if (!m_audio3.unknown_00 && build_type->WorkingSound != -1)
    {
        // TODO: StartAudio(building->Audio7, build_type->WorkingSound)
    }

    // ---- Section 2: Cloak/stealth detection ----
    // TODO: if (build_type->HasStupidGuardMode) { CloakDetect(); DetectSensors(); }

    // ---- Section 3: Building placement validation ----
    if (build_type->CanBeOccupied) // IDA: field_883 (placement check flag)
    {
        // TODO: Check if cell owner allows placement
        // building->PlacementAllowed = (CheckCellOwner(building->m_owner, cell) == 0);
    }

    // ---- Section 4: MCV deploy state check ----
    // TODO: if (type == Rules->MCVType) { placement override }

    // ---- Section 5: Deploy animation coordinate preset ----
    // IDA: if (type->field_844 != -1) { vt_entry_240 preset coords }
    if (build_type->DeployingAnim)
    {
        // TODO: vt_entry_240(this, &m_location) — preset deploy coordinates
    }

    // ---- Section 6: Mission queued clear ----
    if (m_mission_queued && m_queued_mission == m_current_mission)
        m_mission_queued = false;

    // ---- Section 7: Deploy/undeploy animation state machine ----
    // IDA 0x423C24-0x4242A5: vt_entry_488 → deploy state check
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
                // IDA: Rules[753][Rules[756]-1] anim at m_location with Z+3 offset
                // TODO: new AnimClass(Rules->SubterraneanEmergeAnim, m_location + Z(3), ...)
            }
            else
            {
                // Surface building: deploy anim + build smoke
                // IDA: Rules[37] deploy anim + Rules[753][0] build smoke
                // TODO: new AnimClass(Rules->DeployAnim, m_location, 0,1,0x600,...)
                // TODO: new AnimClass(Rules->BuildSmokeAnim, m_location+Z(3), 0,1,0x600,...)
            }

            // Special deploy animation with fire effects
            // IDA: if (type->field_772) → special anim + fire + smoke effects
            if (build_type->CreateUnitSound) // proxy for field_772
            {
                // TODO: new AnimClass(type->field_772, m_location, 0,1,0x2600,-30,...)
                // TODO: sub_489280(0, type->field_816, 1, 0) — fire effect
                // TODO: sub_48A620(anim_coords, 0, 0) — smoke effect
            }

            // Fire/smoke effects for all deploying buildings
            // IDA: if (type->field_752) { for each count: create fire anim }
            // TODO

            // Crater effect for large buildings
            // IDA: if (type->field_856 && !above_surface) {
            //   circular radius scan → create debris/damage fire anims
            //   sub_6D2790(crater_rect, 0)
            // }
            // TODO

            // vt_entry_248(this) — finalize deploy
            // TODO
            return false;
        }
    }

    // ---- Section 8: Construction progress ----
    if (!m_is_alive)
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

    // vt_entry_292(this, 2) — production progress update
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
        // TODO: locomotor type 36 → cost_rate *= 5.0
        building->CostAccumulator += cost_rate;
        if (building->CostAccumulator >= 1.0 && !building->Audio7.unknown_00)
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
        // No more steps — try switching to next type in chain
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
            // TODO: building->ProductionTimer = RandomBetween(build_type->Unknown_732, build_type->Unknown_736)
            building->ProductionTimer = build_type->Unknown_688;
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
            // vt_entry_244 — finalize deploy coordinates
            // TODO: (*(vt + 244))(this, &m_location)

            // Check if deploy animation index is valid (<= Rules[829])
            // IDA: if (type->field_844 <= Rules->DeployAnimCount) {
            if (true) // TODO: proper condition
            {
                auto* owner = building->GetOwningHouse();

                // If owner is neutral or invalid, fallback to Civilian house
                // IDA: if (!owner || !IsActive()) → find Civilian house
                if (!owner)
                {
                    // IDA: iterate houses to find Civilian house
                    // for (int i = 0; i < HouseArray->Count; ++i)
                    //     if (houses[i]->Type == Civilian)
                    //         building->m_owner = houses[i];
                    // TODO: FindCivilianHouse()
                }

                if (building->GetOwningHouse())
                {
                    // Find exit cell for unit placement
                    // IDA: factory = Rules[826][type->field_844]
                    //       cell = factory->GetExitCoords(building->m_owner)
                    //       vt_entry_D8 of factory → PlaceUnit(cell, owner)

                    // Check cell walkability at exit position
                    // IDA: if (cell->field_320 & 0x100) → obstacle check
                    //       If blocked: vt_entry_124(unit, 0) → disable
                    //       vt_entry_124(unit, 1) → re-enable after reposition
                    //       Set unit flag (byte+140 = 1)

                    // Create the unit in playfield
                    // IDA: if (owner->field_492 == 0) { vt_entry_1E8(unit, 15, 0) }
                    //       // field_492 = no special behavior

                    // TODO: CreateUnitAtCoordsStandard(exit_coords, time, false)
                    // TODO: sub_6B4A50(unit_obj, coords, ...)
                }
            }

            // vt_entry_248(this) — finalize
            building->m_unknown_bool_3D0 = true;
            // TODO: return vt_entry_248(this);
            return false;
        }

        // No deploy animation → production complete, set flag
        building->m_unknown_bool_3D0 = true;
        // TODO: return vt_entry_248(this);
    }

    return true;
}

// ============================================================
// ProductionCompletionCallback — sub_424CE0 (543B)
// IDA 0x424CE0. Called when production timer expires.
//
// Sections:
//  1. vt_entry_292(this, 2) — update production progress display
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
    bool audio_active = (techno->m_audio3.unknown_00 != 0);
    bool has_working_sound = (type->WorkingSound != -1);

    if (audio_active || !has_working_sound)
    {
        // No audio or no sound configured → stop Audio7
        // TODO: AudioController_Stop(&building->Audio7)
    }
    else
    {
        // Start working sound on Audio7
        // TODO: CoordStruct coords; GetCoords(&coords);
        // AudioController_StartAt(type->WorkingSound, coords, &building->Audio7)
    }
    // Stop Audio8
    // TODO: AudioController_Stop(&building->Audio8)

    // Section 4: Immediate unit creation if no threshold
    if (!type->ProductionCompletionThreshold)
    {
        // TODO: CreateUnitOnCompletion(techno)
    }

    // Section 5: Special building launch sequence
    // IDA: check field_855 → NukeSilo / ICBMLauncher / SpySat types
    if (!audio_active)
    {
        if (type->ICBMLauncher || type->SpySat || type->NukeSilo)
        {
            // Get cell at building position
            // TODO: cell = Coord_To_Cell(GetCoords())
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
// CreateUnitOnCompletion — sub_424F00 (583B)
// IDA 0x424F00. Creates unit at completion of production.
//
// Sections:
//  1. Get cell coordinates from building position
//  2. Look up foundation size offsets (type+668, type+672)
//  3. Create super weapon fire effects (type+716 → SW_CreateFireAt)
//  4. Get construction delay (vt_entry_456)
//  5. Branch: CreateUnitAtCoords_Timed or _Standard
// ============================================================
static bool CreateUnitOnCompletion(TechnoClass* techno)
{
    auto* building = reinterpret_cast<gamemd::BuildingClass*>(techno);
    auto* type = reinterpret_cast<gamemd::BuildingTypeClass*>(techno->GetTechnoType());
    if (!type) return false;

    // Section 1: Get cell coordinates
    // IDA: coords = GetCoords() / 256 → CellCoord_To_CellObj
    // auto* coords = GetCoords(); // via vt_entry_72
    // int cell_x = coords->X / 256;
    // int cell_y = coords->Y / 256;
    // auto* cell = CellCoord_To_CellObj(CellStruct{cell_x, cell_y});

    int build_time = 30;

    // Section 2: Foundation size offsets
    // IDA: vt_entry_108(this) → if active, calculate foundation dimensions
    // if (vt_entry_108(this)) {
    //     if (type+668 == -1)
    //         type+668 = Building_GetFoundationSize(coords, type+664)[2]
    //     if (type+672 == -1)
    //         type+672 = Building_GetFoundationSize(coords, type+664)[3]
    //     build_time = type+672
    // }

    int foundation_width = build_time; // placeholder for type+668

    // Section 3: Super weapon fire effects
    // IDA: type+716 → index into SW array, type+720 → count
    if (type->Unknown_716 != -1)
    {
        for (int i = 0; i < type->Unknown_720; ++i)
        {
            // auto sw_coords = GetCoords();
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
// ConstructionPositionTracker — sub_425670 (1688B)
// IDA 0x425670. Tracks building/pod position during construction.
//
// Key logic:
//  1. If not ProductionBlocked: start production timer
//  2. Compare current position vs target position
//  3. If target is invalid (Map_InvalidCoord): compute new target
//  4. If within range (distance <= 18): snap to target, check cell
//  5. If out of range: calculate angle, adjust position via vt_entry_436
//  6. Check cell walkability at 3 neighbor cells
//  7. Calculate direction angle → update production progress timer
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
    //          Math_CalcAngle(Y_delta, X_delta) → direction
    //          Math_RoundToInt(angle) → rotation steps
    //          rotation_steps = type+848 * calculated_steps
    //        CurrentMission = rotation_steps + (CurrentFrame/3 % type+848)
    //
    // IDA: if ProductionBlocked:
    //        foundation_size = vt_entry_108(this).GetFoundationWidth() / 2 - 1
    //        if CurrentMission >= foundation_size:
    //          vt_entry_248(this) → complete construction
}

// ============================================================
// CreateUnitAtCoordsStandard — sub_6B59A0
// IDA 0x6B59A0. Creates a unit at specified cell coordinates.
//
// Algorithm:
//  1. Skip if coords == Map_BottomRightCell
//  2. Lock mutex, iterate BuildingTypeClass instances:
//     - Filter: entry+673 flag set + cell is walkable
//     - Add to candidate list (max 10)
//  3. Unlock mutex, filter candidates by size constraints
//  4. If filtered: random pick → UnitClass_Create
//  5. Else if regular: random pick → UnitClass_Create
//  6. Clean up dynamic vectors
// ============================================================
static bool CreateUnitAtCoordsStandard(CoordStruct* coords, int time, bool special)
{
    if (!coords) return false;

    // TODO: Check if coords == Map_BottomRightCell → early return

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
// CreateUnitAtCoordsTimed — sub_6B5C90
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

} // namespace game
} // namespace ra2
