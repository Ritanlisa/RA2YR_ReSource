#pragma once

#include "techno.hpp"

#include <unknwn.h>

namespace ra2 {
namespace game {

struct Matrix3DStruct;
struct SHPStruct;
struct VoxelStruct;
struct SomeVoxelCache;
class ILocomotion;
class LocomotionClass;
class ParasiteClass;
class TeamClass;

struct YRComPtr {
    ILocomotion* ptr;
};

class FootClass : public TechnoClass {
public:
    static constexpr AbstractType kAbsDeriveID = static_cast<AbstractType>(0x4);

    virtual ~FootClass() = default;

    virtual void Destroyed(ObjectClass* killer) override;
    virtual void vt_entry_490(uint32_t a, uint32_t b) override {}

    virtual void ReceiveGunner(FootClass* gunner) {}
    virtual void RemoveGunner(FootClass* gunner) {}
    virtual bool IsLeavingMap() const { return false; }
    virtual bool vt_entry_4E0() const { return false; }
    virtual bool vt_entry_4E4() const { return false; }
    virtual void vt_entry_4E8(CellStruct* cell) {}
    virtual void vt_entry_4EC(CellStruct* cell) {}
    virtual CoordStruct* vt_entry_4F0(CoordStruct* out) { return nullptr; }
    virtual void vt_entry_4F4() {}
    virtual bool vt_entry_4F8() { return false; }
    virtual bool MoveTo(CoordStruct* coords);
    virtual bool StopMoving();
    virtual bool vt_entry_504() { return false; }
    virtual bool ChronoWarpTo(CoordStruct dest);
    virtual void Draw_A_SHP(
        SHPStruct* shp, int facing_idx, Point2D* coords, RectangleStruct* rect,
        uint32_t a5, uint32_t a6, uint32_t a7, ZGradient gradient,
        uint32_t a9, int extra_light, uint32_t a11, uint32_t a12,
        uint32_t a13, uint32_t a14, uint32_t a15, uint32_t a16) {}
    virtual void Draw_A_VXL(
        VoxelStruct* vxl, int hva_frame_index, int flags, SomeVoxelCache* cache,
        RectangleStruct* rect, Point2D* center_point, Matrix3DStruct* matrix,
        uint32_t a8, uint32_t draw_flags, uint32_t a10) {}
    virtual void vt_entry_514() {}
    virtual void Panic();
    virtual void UnPanic();
    virtual void PlayIdleAnim(int idle_anim_number) {}
    virtual uint32_t vt_entry_524() { return 0; }
    virtual uint32_t vt_entry_528(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual uint32_t vt_entry_52C(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const { return 0; }
    virtual uint32_t vt_entry_530(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual void vt_entry_534(uint32_t a, uint32_t b) {}
    virtual int GetCurrentSpeed() const;
    virtual uint32_t vt_entry_53C(uint32_t a) { return 0; }
    virtual void vt_entry_540(uint32_t a) {}
    virtual void SetSpeedPercentage(double percentage);
    virtual void vt_entry_548() {}
    virtual void vt_entry_54C() {}
    virtual bool vt_entry_550(uint32_t a) { return false; }

    bool MovementAI();

    int Mission_Move() override;
    int Mission_Attack() override;
    int Mission_Guard() override;
    int Mission_Hunt() override;

protected:
    void EmitMovementSmoke();
    void UpdateMovementAmbiguity();
    void UpdateMovementSpeed();
    void HandleMovementSoundUpdate();
    void HandleLocomotionUpdate();

    // ---- member variables ----

    int32_t            m_planning_path_idx;
    int16_t            m_unknown_short_524;
    int16_t            m_unknown_short_526;
    int16_t            m_unknown_short_528;
    int16_t            m_unknown_short_52A;
    uint32_t           m_unknown_52C;
    uint32_t           m_unknown_530;
    uint32_t           m_unknown_534;
    uint32_t           m_unknown_538;
    bool               m_unknown_bool_53C;
    uint8_t            m_padding_53D[3];
    uint32_t           m_unknown_540;
    AudioController    m_audio7;
    CellStruct         m_current_map_coords;
    CellStruct         m_last_map_coords;
    CellStruct         m_last_jumpjet_map_coords;
    CellStruct         m_current_jumpjet_map_coords;
    CoordStruct        m_unknown_coords_568;
    uint32_t           m_unused_574;
    double             m_speed_percentage;
    double             m_speed_multiplier;
    DynamicVectorClass<AbstractClass*> m_unknown_abstract_array_588;
    uint32_t           m_unknown_5A0;
    AbstractClass*     m_destination;
    AbstractClass*     m_last_destination;
    DynamicVectorClass<AbstractClass*> m_unknown_abstract_array_5AC;
    int32_t            m_unknown_int_5C4;
    uint32_t           m_unknown_5C8;
    uint32_t           m_unknown_5CC;
    uint8_t            m_unknown_5D0;
    bool               m_unknown_bool_5D1;
    uint8_t            m_padding_5D2[2];
    TeamClass*         m_team;
    FootClass*         m_next_team_member;
    uint32_t           m_unknown_5DC;
    int32_t            m_path_directions[24];
    TimerStruct        m_path_delay_timer;
    int32_t            m_unknown_int_64C;
    TimerStruct        m_unknown_timer_650;
    TimerStruct        m_sight_timer;
    TimerStruct        m_blockage_path_timer;
    YRComPtr           m_locomotor;
    CoordStruct        m_unknown_point3d_678;
    signed char        m_tube_index;
    bool               m_unknown_bool_685;
    signed char        m_waypoint_index;
    bool               m_unknown_bool_687;
    bool               m_unknown_bool_688;
    bool               m_is_team_leader;
    bool               m_should_scan_for_target;
    bool               m_unknown_bool_68B;
    bool               m_unknown_bool_68C;
    bool               m_unknown_bool_68D;
    bool               m_unknown_bool_68E;
    bool               m_should_enter_absorber;
    bool               m_should_enter_occupiable;
    bool               m_should_garrison_structure;
    FootClass*         m_parasite_eating_me;
    uint32_t           m_unknown_698;
    ParasiteClass*     m_parasite_im_using;
    TimerStruct        m_paralysis_timer;
    bool               m_unknown_bool_6AC;
    bool               m_is_attacked_by_locomotor;
    bool               m_is_let_go_by_locomotor;
    bool               m_unknown_bool_6AF;
    bool               m_unknown_bool_6B0;
    bool               m_unknown_bool_6B1;
    bool               m_unknown_bool_6B2;
    bool               m_unknown_bool_6B3;
    bool               m_unknown_bool_6B4;
    bool               m_unknown_bool_6B5;
    bool               m_frozen_still;
    bool               m_unknown_bool_6B7;
    bool               m_unknown_bool_6B8;
    uint8_t            m_padding_6B9[3];
    uint32_t           m_unused_6BC;

protected:
    FootClass() noexcept;
};

} // namespace game
} // namespace ra2
