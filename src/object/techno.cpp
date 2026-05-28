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
    if (!target)
        return static_cast<FireError>(0);

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return static_cast<FireError>(1);

    return static_cast<FireError>(-1);
}

FireError TechnoClass::GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const
{
    if (!target)
        return static_cast<FireError>(0);

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return static_cast<FireError>(1);

    if (!IsCloseEnoughToAttack(target) && !ignore_range)
        return static_cast<FireError>(2);

    return static_cast<FireError>(-1);
}

BulletClass* TechnoClass::Fire(AbstractClass* target, int weapon_index)
{
    if (!target)
        return nullptr;

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return nullptr;

    CoordStruct fire_coord;
    GetFLH(&fire_coord, weapon_index, m_location);

    // TODO: BulletClass creation, unlimbo, sound, ammo decrease
    return nullptr;
}

bool TechnoClass::IsCloseEnoughToAttack(AbstractClass* target) const
{
    return IsCloseEnough(target, m_current_weapon_number);
}

CellClass* TechnoClass::SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy)
{
    // RA1 Greatest_Threat pattern:
    // Two scanning modes: area scan and full-map scan
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

    // Area scan — radiate outward
    CellStruct center = {
        static_cast<int16_t>(my_pos.X / 256),
        static_cast<int16_t>(my_pos.Y / 256)
    };

    for (int radius = 0; radius <= scan_range && !best_target; ++radius)
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

                // TODO: GetCellAt(map_coords) → check occupier → Evaluate_Object
                // CellClass* cell = MapClass::Instance->TryGetCellAt(map_coords);
                // TechnoClass* occupier = cell->GetOccupier();
                // if (occupier && Evaluate_Object(flags, occupier))
                //     best_target = occupier;
            }
        }
    }

    if (best_target)
        SetTarget(best_target);

    return nullptr;
}

void TechnoClass::Guard()
{
    m_target = nullptr;
    QueueMission(static_cast<Mission>(0), true);
}

void TechnoClass::SetTarget(AbstractClass* target)
{
    m_target = target;
    if (target)
        SetDestination(target, false);
}

void TechnoClass::Cloak(bool play_sound)
{
    m_cloak_state = static_cast<uint32_t>(2);
    m_cloakable = true;
}

void TechnoClass::Uncloak(bool play_sound)
{
    m_cloak_state = static_cast<uint32_t>(1);
}

int TechnoClass::SelectWeapon(AbstractClass* target) const
{
    if (!target) return 0;
    return 0;
}

void TechnoClass::DecreaseAmmo()
{
    if (m_ammo > 0) --m_ammo;
}

void TechnoClass::Reload()
{
}

void TechnoClass::UpdateCloak(bool unknown)
{
    if (!m_cloakable) return;
    if (ShouldBeCloaked() && m_cloak_state != 2)
        Cloak(true);
    else if (ShouldNotBeCloaked() && m_cloak_state != 1)
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

} // namespace game
} // namespace ra2
