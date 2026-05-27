#pragma once

#include "radio.hpp"
#include "..\core\vector.hpp"
#include "..\fundamentals.hpp"

namespace ra2 {
namespace game {

using ::gamemd::DynamicVectorClass;
using ::gamemd::ProgressTimer;

enum class CloakState : int;
enum class FireError : int;
enum class Rank : int;
enum class TargetFlags : unsigned int;
enum class ZGradient : int;
enum class Ability : int;
enum class AIDifficulty : unsigned int;
enum class NetworkEvents : unsigned char;
struct WeaponStruct;
class AirstrikeClass;
class AnimClass;
class BulletClass;
class BuildingClass;
class CaptureManagerClass;
class CellClass;
class FootClass;
class HouseClass;
class InfantryTypeClass;
class LaserDrawClass;
class ObjectTypeClass;
class ParticleSystemClass;
class PlanningTokenClass;
class RadBeam;
class SlaveManagerClass;
class SpawnManagerClass;
class TeamClass;
class TemporalClass;
class WaveClass;

struct FlashData {
    int32_t DurationRemaining;
    bool    FlashingNow;
    uint8_t padding[3];
};

struct PassengersClass {
    int32_t     NumPassengers;
    FootClass*  FirstPassenger;
};

struct VeterancyStruct {
    float Veterancy;
};

struct TurretControl {
    uint32_t data[4];
};

struct RecoilData {
    TurretControl   Turret;
    float           TravelPerFrame;
    float           TravelSoFar;
    uint32_t        State;
    int32_t         TravelFramesLeft;
};

struct TransitionTimer {
    uint32_t data[3];
};

template <typename T>
struct IndexBitfield {
    T* Items;
};

struct OwnedTiberiumStruct {
    float Amount1;
    float Amount2;
    float Amount3;
    float Amount4;
};

class TechnoClass : public RadioClass {
public:
    static constexpr AbstractType kAbsDeriveID = static_cast<AbstractType>(0x1);

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return S_OK; }

    virtual ~TechnoClass() = default;

    virtual bool IsUnitFactory() const { return false; }
    virtual bool IsCloakable() const { return false; }
    virtual bool CanScatter() const { return true; }
    virtual bool BelongsToATeam() const { return false; }
    virtual bool ShouldSelfHealOneStep() const { return false; }
    virtual bool IsVoxel() const { return false; }
    virtual bool vt_entry_29C() { return false; }
    virtual bool ShouldBeCloaked() const { return false; }
    virtual bool ShouldNotBeCloaked() const { return false; }
    virtual DirStruct* GetFacing(DirStruct* buffer) const { return nullptr; }
    virtual bool IsArmed() const { return false; }
    virtual void vt_entry_2B0() const {}
    virtual double GetStoragePercentage() const { return 0.0; }
    virtual int GetPipFillLevel() const { return 0; }
    virtual int GetRefund() const { return 0; }
    virtual int GetThreatValue() const { return 0; }
    virtual bool vt_entry_2C4(uint32_t a) { return false; }
    virtual uint32_t vt_entry_2C8(uint32_t a, uint32_t b) { return 0; }
    virtual bool vt_entry_2CC(uint32_t a) { return false; }
    virtual int GetCrewCount() const { return 0; }
    int GetAntiAirValue() const { return 0; }
    int GetAntiArmorValue() const { return 0; }
    int GetAntiInfantryValue() const { return 0; }
    virtual void GotHijacked() {}
    int SelectWeapon(AbstractClass* target) const { return 0; }
    virtual int SelectNavalTargeting(AbstractClass* target) const { return 0; }
    virtual int GetZAdjustment() const { return 0; }
    virtual ZGradient GetZGradient() const { return static_cast<ZGradient>(-1); }
    virtual CellStruct* GetSomeCellStruct() const { return nullptr; }
    virtual void SetSomeCellStruct(CellStruct* buffer) {}
    virtual CellStruct* vt_entry_2FC(CellStruct* buffer, uint32_t a, uint32_t b) const { return nullptr; }
    virtual CoordStruct* vt_entry_300(CoordStruct* buffer, uint32_t a) const { return nullptr; }
    virtual uint32_t vt_entry_304(uint32_t a, uint32_t b) const { return 0; }
    virtual DirStruct* GetRealFacing(DirStruct* buffer) const { return nullptr; }
    virtual InfantryTypeClass* GetCrew() const { return nullptr; }
    virtual bool vt_entry_310() const { return false; }
    virtual bool CanDeploySlashUnload() const { return false; }
    virtual int GetROF(int weapon) const { return 0; }
    virtual int GetGuardRange(int unknown) const { return 0; }
    virtual bool vt_entry_320() const { return false; }
    bool IsRadarVisible(int* out_detection) const { return false; }
    virtual bool IsSensorVisibleToPlayer() const { return false; }
    virtual bool IsSensorVisibleToHouse(HouseClass* house) const { return false; }
    virtual bool IsEngineer() const { return false; }
    virtual void ProceedToNextPlanningWaypoint() {}
    virtual uint32_t ScanForTiberium(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual bool EnterGrinder() { return false; }
    virtual bool EnterBioReactor() { return false; }
    virtual bool EnterTankBunker() { return false; }
    virtual bool EnterBattleBunker() { return false; }
    virtual bool GarrisonStructure() { return false; }
    virtual bool IsPowerOnline() const { return true; }
    void QueueVoice(int idx_voc) {}
    int VoiceEnter() { return 0; }
    int VoiceHarvest() { return 0; }
    int VoiceSelect() { return 0; }
    int VoiceCapture() { return 0; }
    int VoiceMove() { return 0; }
    int VoiceDeploy() { return 0; }
    int VoiceAttack(ObjectClass* target) { return 0; }
    virtual bool ClickedEvent(NetworkEvents event) { return false; }
    virtual bool ClickedMission(Mission mission, ObjectClass* target, CellClass* target_cell, CellClass* nearest_target_cell) { return false; }
    virtual bool IsUnderEMP() const { return false; }
    virtual bool IsParalyzed() const { return false; }
    virtual bool CanCheer() const { return false; }
    virtual void Cheer(bool force) {}
    virtual int GetDefaultSpeed() const { return 0; }
    virtual void DecreaseAmmo() {}
    virtual void AddPassenger(FootClass* passenger) {}
    virtual bool CanDisguiseAs(AbstractClass* target) const { return false; }
    virtual bool TargetAndEstimateDamage(uint32_t a, uint32_t b) { return false; }
    virtual uint32_t vt_entry_3A0() { return 0; }
    virtual bool TriggersCellInset(AbstractClass* target) { return false; }
    virtual bool IsCloseEnough(AbstractClass* target, int weapon_idx) const { return false; }
    virtual bool IsCloseEnoughToAttack(AbstractClass* target) const;
    virtual bool IsCloseEnoughToAttackCoords(const CoordStruct& coords) const { return false; }
    virtual uint32_t vt_entry_3B4(uint32_t a) const { return 0; }
    virtual void Destroyed(ObjectClass* killer) = 0;
    virtual FireError GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const;
    virtual FireError GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const;
    virtual CellClass* SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy);
    virtual void SetTarget(AbstractClass* target) {}
    virtual BulletClass* Fire(AbstractClass* target, int weapon_index);
    virtual void Guard() {}
    virtual bool SetOwningHouse(HouseClass* house, bool announce = true) { return false; }
    virtual void vt_entry_3D8(uint32_t a, uint32_t b, uint32_t c) {}
    virtual bool Crash(ObjectClass* killer) { return false; }
    virtual bool IsAreaFire() const { return false; }
    virtual int IsNotSprayAttack() const { return 0; }
    virtual int vt_entry_3E8() { return 0; }
    virtual int IsNotSprayAttack2() const { return 0; }
    virtual WeaponStruct* GetDeployWeapon() const { return nullptr; }
    virtual WeaponStruct* GetTurretWeapon() const { return nullptr; }
    virtual WeaponStruct* GetWeapon(int weapon_index) const { return nullptr; }
    virtual bool HasTurret() const { return false; }
    virtual bool CanOccupyFire() const { return false; }
    virtual int GetOccupyRangeBonus() const { return 0; }
    virtual int GetOccupantCount() const { return 0; }
    virtual void OnFinishRepair() {}
    void UpdateCloak(bool unknown = true) {}
    virtual void CreateGap() {}
    virtual void DestroyGap() {}
    virtual void vt_entry_41C() {}
    virtual void Sensed() {}
    virtual void Reload() {}
    virtual void vt_entry_428() {}
    virtual CoordStruct* GetTargetCoords(CoordStruct* out) const { return nullptr; }
    virtual bool IsNotWarpingIn() const { return true; }
    virtual bool vt_entry_434(uint32_t a) const { return false; }
    void DrawActionLines(bool force, uint32_t unknown) {}
    virtual uint32_t GetDisguiseFlags(uint32_t existing_flags) const { return 0; }
    virtual bool IsClearlyVisibleTo(HouseClass* house) const { return false; }
    virtual void vt_entry_444(
        uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e,
        uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j) {}
    virtual void vt_entry_448(uint32_t a, uint32_t b) {}
    void DrawHealthBar(Point2D* location, RectangleStruct* bounds, bool unknown) const {}
    void DrawPipScalePips(Point2D* location, Point2D* original_location, RectangleStruct* bounds) const {}
    void DrawVeterancyPips(Point2D* location, RectangleStruct* bounds) const {}
    void DrawExtraInfo(const Point2D& location, const Point2D& original_location, const RectangleStruct& bounds) const {}
    virtual void Uncloak(bool play_sound) {}
    virtual void Cloak(bool play_sound) {}
    virtual uint32_t vt_entry_464(uint32_t a) const { return 0; }
    virtual void UpdateRefinerySmokeSystems() {}
    virtual uint32_t DisguiseAs(AbstractClass* target) { return 0; }
    virtual void ClearDisguise() {}
    virtual bool IsItTimeForIdleActionYet() const { return false; }
    virtual bool UpdateIdleAction() { return false; }
    virtual void vt_entry_47C(uint32_t a) {}
    virtual void SetDestination(AbstractClass* dest, bool unknown) {}
    virtual bool vt_entry_484(uint32_t a, uint32_t b) { return false; }
    virtual void UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {}
    virtual void vt_entry_48C(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {}
    virtual void vt_entry_490(uint32_t a, uint32_t b) = 0;
    virtual void RadarTrackingStart() {}
    virtual void RadarTrackingStop() {}
    virtual void RadarTrackingFlash() {}
    virtual void RadarTrackingUpdate(bool unknown) {}
    virtual void vt_entry_4A4(uint32_t a) {}
    virtual void vt_entry_4A8() {}
    virtual bool vt_entry_4AC() const { return false; }
    virtual bool vt_entry_4B0() const { return false; }
    virtual int vt_entry_4B4() const { return 0; }
    virtual CoordStruct* vt_entry_4B8(CoordStruct* out) { return nullptr; }
    virtual uint32_t vt_entry_4BC() { return 0; }
    virtual bool CanAttackOnTheMove() const { return false; }
    virtual bool vt_entry_4C4() const { return false; }
    virtual bool vt_entry_4C8() { return false; }
    virtual void vt_entry_4CC() {}
    virtual bool vt_entry_4D0() { return false; }

    int GetIonCannonValue(AIDifficulty difficulty) const { return 0; }

    DirStruct GetFacing() const { DirStruct ret; GetFacing(&ret); return ret; }
    DirStruct GetRealFacing() const { DirStruct ret; GetRealFacing(&ret); return ret; }

    // ---- member variables ----

    FlashData               m_flashing;
    ProgressTimer           m_animation;
    PassengersClass         m_passengers;
    TechnoClass*            m_transporter;
    int32_t                 m_unknown_int_120;
    int32_t                 m_current_turret_number;
    int32_t                 m_unknown_int_128;
    AnimClass*              m_behind_anim;
    AnimClass*              m_deploy_anim;
    bool                    m_in_air;
    uint8_t                 m_padding_139[3];
    int32_t                 m_current_weapon_number;
    int32_t                 m_current_ranking;          // Rank enum
    int32_t                 m_current_gattling_stage;
    int32_t                 m_gattling_value;
    uint32_t                m_unknown_148;
    HouseClass*             m_initial_owner;
    VeterancyStruct         m_veterancy;
    uint32_t                m_align_154;
    double                  m_armor_multiplier;
    double                  m_firepower_multiplier;
    TimerStruct             m_idle_action_timer;
    TimerStruct             m_radar_flash_timer;
    TimerStruct             m_targeting_timer;
    TimerStruct             m_iron_curtain_timer;
    TimerStruct             m_iron_tint_timer;
    int32_t                 m_iron_tint_stage;
    TimerStruct             m_airstrike_timer;
    TimerStruct             m_airstrike_tint_timer;
    uint32_t                m_airstrike_tint_stage;
    int32_t                 m_force_shielded;
    bool                    m_deactivated;
    uint8_t                 m_padding_1BD[3];
    TechnoClass*            m_drain_target;
    TechnoClass*            m_draining_me;
    AnimClass*              m_drain_anim;
    bool                    m_disguised;
    uint8_t                 m_padding_1CE[3];
    uint32_t                m_disguise_creation_frame;
    TimerStruct             m_infantry_blink_timer;
    TimerStruct             m_disguise_blink_timer;
    bool                    m_unknown_bool_1F8;
    uint8_t                 m_padding_1F9[3];
    TimerStruct             m_reload_timer;
    uint32_t                m_unknown_208;
    uint32_t                m_unknown_20C;
    IndexBitfield<HouseClass*> m_display_production_to;
    int32_t                 m_group;
    AbstractClass*          m_focus;
    HouseClass*             m_owner;
    uint32_t                m_cloak_state;              // CloakState enum
    ProgressTimer           m_cloak_progress;
    TimerStruct             m_cloak_delay_timer;
    float                   m_warp_factor;
    bool                    m_unknown_bool_250;
    uint8_t                 m_padding_251[3];
    CoordStruct             m_last_sight_coords;
    int32_t                 m_last_sight_range;
    int32_t                 m_last_sight_height;
    bool                    m_gap_super_charged;
    bool                    m_generating_gap;
    uint8_t                 m_padding_27E[2];
    int32_t                 m_gap_radius;
    bool                    m_being_warped_out;
    bool                    m_warping_out;
    bool                    m_unknown_bool_272;
    uint8_t                 m_unused_273;
    TemporalClass*          m_temporal_im_using;
    TemporalClass*          m_temporal_targeting_me;
    bool                    m_is_immobilized;
    uint8_t                 m_padding_27D[3];
    uint32_t                m_unknown_280;
    int32_t                 m_chrono_lock_remaining;
    CoordStruct             m_chrono_dest_coords;
    AirstrikeClass*         m_airstrike;
    bool                    m_berzerk;
    uint8_t                 m_padding_29D[3];
    uint32_t                m_berzerk_duration_left;
    uint32_t                m_spray_offset_index;
    bool                    m_uncrushable;
    uint8_t                 m_padding_2A9[3];
    FootClass*              m_direct_rocker_linked_unit;
    FootClass*              m_locomotor_target;
    FootClass*              m_locomotor_source;
    AbstractClass*          m_target;
    AbstractClass*          m_last_target;
    CaptureManagerClass*    m_capture_manager;
    TechnoClass*            m_mind_controlled_by;
    bool                    m_mind_controlled_by_a_unit;
    uint8_t                 m_padding_2C2[3];
    AnimClass*              m_mind_control_ring_anim;
    HouseClass*             m_mind_controlled_by_house;
    SpawnManagerClass*      m_spawn_manager;
    TechnoClass*            m_spawn_owner;
    SlaveManagerClass*      m_slave_manager;
    TechnoClass*            m_slave_owner;
    HouseClass*             m_originally_owned_by_house;
    TechnoClass*            m_bunker_linked_item;
    float                   m_pitch_angle;
    TimerStruct             m_disk_laser_timer;
    uint32_t                m_unknown_2F8;
    int32_t                 m_ammo;
    int32_t                 m_value;
    ParticleSystemClass*    m_fire_particle_system;
    ParticleSystemClass*    m_spark_particle_system;
    ParticleSystemClass*    m_natural_particle_system;
    ParticleSystemClass*    m_damage_particle_system;
    ParticleSystemClass*    m_railgun_particle_system;
    ParticleSystemClass*    m_unk1_particle_system;
    ParticleSystemClass*    m_unk2_particle_system;
    ParticleSystemClass*    m_firing_particle_system;
    WaveClass*              m_wave;
    float                   m_angle_rotated_sideways;
    float                   m_angle_rotated_forwards;
    float                   m_rocking_sideways_per_frame;
    float                   m_rocking_forwards_per_frame;
    int32_t                 m_hijacker_infantry_type;
    OwnedTiberiumStruct     m_tiberium;
    uint32_t                m_unknown_34C;
    TransitionTimer         m_unload_timer;
    FacingStruct            m_barrel_facing;
    FacingStruct            m_facing;
    FacingStruct            m_turret_facing;
    int32_t                 m_current_burst_index;
    TimerStruct             m_target_laser_timer;
    int16_t                 m_unknown_short_3C8;
    uint16_t                m_unknown_3CA;
    bool                    m_counted_as_owned;
    bool                    m_is_sinking;
    bool                    m_was_sinking_already;
    bool                    m_unknown_bool_3CF;
    bool                    m_unknown_bool_3D0;
    bool                    m_has_been_attacked;
    bool                    m_cloakable;
    bool                    m_is_primary_factory;
    bool                    m_spawned;
    bool                    m_is_in_playfield;
    RecoilData              m_turret_recoil;
    RecoilData              m_barrel_recoil;
    bool                    m_unknown_bool_418;
    bool                    m_unknown_bool_419;
    bool                    m_is_human_controlled;
    bool                    m_discovered_by_player;
    bool                    m_discovered_by_computer;
    bool                    m_unknown_bool_41D;
    bool                    m_unknown_bool_41E;
    bool                    m_unknown_bool_41F;
    char                    m_sight_increase;
    bool                    m_recruitable_a;
    bool                    m_recruitable_b;
    bool                    m_is_radar_tracked;
    bool                    m_is_on_carryall;
    bool                    m_is_crashing;
    bool                    m_was_crashing_already;
    bool                    m_is_being_manipulated;
    TechnoClass*            m_being_manipulated_by;
    HouseClass*             m_chrono_warped_by_house;
    bool                    m_unknown_bool_430;
    bool                    m_unknown_bool_431;
    bool                    m_unknown_bool_432;
    uint8_t                 m_padding_433;
    TeamClass*              m_old_team;
    bool                    m_counted_as_owned_special;
    bool                    m_absorbed;
    bool                    m_unknown_bool_43A;
    uint8_t                 m_padding_43B;
    uint32_t                m_unknown_43C;
    DynamicVectorClass<int32_t> m_current_target_threat_values;
    DynamicVectorClass<AbstractClass*> m_current_targets;
    DynamicVectorClass<AbstractClass*> m_attacked_targets;
    AudioController         m_audio3;
    uint32_t                m_unknown_49C;
    uint32_t                m_unknown_4A0;
    AudioController         m_audio4;
    bool                    m_unknown_bool_4B8;
    uint8_t                 m_padding_4B9[3];
    uint32_t                m_unknown_4BC;
    AudioController         m_audio5;
    bool                    m_unknown_bool_4D4;
    uint8_t                 m_padding_4D5[3];
    uint32_t                m_unknown_4D8;
    AudioController         m_audio6;
    uint32_t                m_queued_voice_index;
    uint32_t                m_unknown_4F4;
    bool                    m_unknown_bool_4F8;
    uint8_t                 m_padding_4F9[3];
    uint32_t                m_unknown_4FC;
    uint32_t                m_unknown_500;
    uint32_t                m_emp_lock_remaining;
    uint32_t                m_threat_posed;
    uint32_t                m_should_lose_target_now;
    RadBeam*                m_firing_rad_beam;
    PlanningTokenClass*     m_planning_token;
    ObjectTypeClass*        m_disguise;
    HouseClass*             m_disguised_as_house;

protected:
    TechnoClass() noexcept;
};

} // namespace game
} // namespace ra2
