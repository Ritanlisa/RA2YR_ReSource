#include "gamemd/object/techno.hpp"

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
// IDA 0x423AC0, 4234 bytes. Translates the core production logic.
//
// This function handles:
// 1. Audio setup (movement sounds)
// 2. StupTank cloak detection
// 3. Building placement validation
// 4. Deploy animation (MCV, subterranean, surface deploy)
// 5. Construction progress tracking
// 6. Production cost accumulation
// 7. Production completion (switch to next type, create unit)
// ============================================================
bool TechnoClass::CreateUnit()
{
    auto* type = GetTechnoType();
    if (!type)
        return false;

    // --- Section 1: Audio setup ---
    // If no audio controller active and type has movement sound:
    // Start audio tracking at this+416 (techno-level audio controller)
    // if (!*(this + 408) && type->field_760 != -1) { ... }

    // --- Section 2: Cloak detection (StupTank / stealth building) ---
    // if (*(type + 852)) { sub_425670(); sub_5F3E70(); }

    // --- Section 3: Building placement validation ---
    // Check if building can be placed on current cell
    // *(this + 413) = sub_43B4C0(cell_owner, cell_coord) == 0;

    // --- Section 4: MCV deploy state check ---
    // if (type == rules[46]) { deploy = byte_A8EB7F; }

    // --- Section 5: Deploy animation creation ---
    // if (type->field_844 != -1 && m_current_mission == m_queued_mission)
    //     m_mission_queued = false;
    //
    // if (deployed_state) {
    //     anim_state = vt_entry_488();
    //     if (anim_state == 1 || anim_state == 2) {
    //         // Create deploy/sell animation at current position
    //         // Subterranean: rules[753][756] special sub-emerge anim
    //         // Surface: rules[37] deploy anim + rules[753][0] build smoke
    //         // Fire/smoke effects after animation
    //     }
    //     return true;
    // }

    // --- Section 6: Construction state ---
    bool is_producing = m_is_alive; // this+144 (m_is_alive + 144?)

    if (is_producing)
    {
        // Idle construction animation
        // if (type->field_776) {
        //     anim = new AnimClass(type->field_776, coords, 1, 1, 0x600, 0, 0);
        // }

        // Production progress timer countdown
        int* prod_timer = nullptr; // this + 97 (offset 0x184 in TechnoClass?)
        if (*prod_timer > 0)
        {
            --(*prod_timer);
            if (*prod_timer == 0)
            {
                // Production complete — trigger callback
                // sub_424CE0(this);
            }
            return true;
        }

        // Building placement distance/cell check
        // if (type->field_864) {
        //     coords = GetCoords() - (384, 384, 0);
        //     cell_owner = sub_565730(coords) + 68;
        //     if (cell_owner == -1 || buildings[cell_owner].type != type)
        //         *(this + 411) = 1; // production blocked
        // }

        // Production size check
        // if (type->field_704 == -1) {
        //     type->field_704 = vt_entry_156(type).size;
        //     type->field_704 /= 2 if cliff protector;
        // }
        // if (type->field_700 == -1) type->field_700 = type->field_704;

        // vt_entry_292(this, 2); // production progress update

        // Speed/timer calculation
        // speed = *(this + 48); // production speed
        // if (speed) {
        //     *(this + 43) += speed;
        //     *(this + 45) = CurrentFrame;
        //     *(this + 46) = timer_value;
        //     *(this + 47) = speed;
        // }
        //
        // // Cost accumulation
        // if (type->field_680 > 0.0 && !deployed) {
        //     if (locomotor && locomotor_type == 36)
        //         cost_rate = type->field_680 * 5.0;
        //     else
        //         cost_rate = type->field_680;
        //     *(this + 49) += cost_rate;
        //     if (*(this + 49) >= 1.0 && !audio) {
        //         int count = (int)*(this + 49);
        //         *(this + 49) -= count;
        //         // Spend money: rules[994] for normal, rules[1002] for "INVISO"
        //     }
        // }

        // Production milestone checks
        // if (type->field_880) {
        //     if (step < type->field_704) return;
        // }
        // if (step >= type->field_700 - type->field_692) {
        //     // Production complete — switch to next type
        //}

        // Type switching (production pipeline)
        // if (type->field_712) {
        //     this+50 = type->field_712; // switch to next type
        //     reset progress counters;
        //     reset timer;
        //     sub_424CE0(); // start new production cycle
        // } else {
        //     // Final completion: create deploy anim, create unit
        //     // rules[826][type->field_844] → factory type → house index
        //     // Check cell buildability (civilian house fallback)
        //     // Spawn unit at exit cell
        // }

        // m_unknown_bool_3D0 = true; // production complete
        // return true;
    }

    return true;
}

} // namespace game
} // namespace ra2
