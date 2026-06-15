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
    int16_t            planningPathIndex;        // +0x524
    int16_t            pathWaypointY;            // +0x526
    int16_t            pathTargetX;              // +0x528
    int16_t            pathTargetY;              // +0x52A
    uint32_t           pathMoveState;            // +0x52C
    uint32_t           pathStepCounter;          // +0x530
    uint32_t           pathBlockFlags;           // +0x534
    uint32_t           pathCollisionState;       // +0x538
    bool               pathRecomputeFlag;        // +0x53C
    uint32_t           pathReserved;             // +0x540
    AudioController    movementAudio;
    CellStruct         currentMapCoords;
    CellStruct         lastMapCoords;
    CellStruct         lastJumpjetCoords;
    CellStruct         currentJumpjetCoords;
    CoordStruct        movementOriginCoords;      // +0x568
    uint32_t           m_unused_574;
    double             m_speed_percentage;
    double             m_speed_multiplier;
    DynamicVectorClass<AbstractClass*> pathCheckpointList;  // +0x588
    uint32_t           pathSequenceId;           // +0x5A0
    AbstractClass*     destination;
    AbstractClass*     lastDestination;
    DynamicVectorClass<AbstractClass*> pathAbortList;      // +0x5AC
    int32_t            pathDirectionIndex;       // +0x5C4
    uint32_t           pathScanState;            // +0x5C8
    uint32_t           pathScanTimer;            // +0x5CC
    uint8_t            movementReserved1;        // +0x5D0
    bool               movementBlockedFlag;      // +0x5D1
    TeamClass*         team;
    FootClass*         nextTeamMember;
    uint32_t           teamFormationIndex;       // +0x5DC
    int32_t            m_path_directions[24];
    TimerStruct        m_path_delay_timer;
    int32_t            pathSequenceLength;       // +0x64C
    TimerStruct        pathSequenceTimer;        // +0x650
    TimerStruct        sightTimer;
    TimerStruct        blockagePathTimer;
    ILocomotion*        locomotor;
    CoordStruct        locomotorTargetCoords;    // +0x678
    int8_t             tubeIndex;
    bool               locomotorShiftFlag;       // +0x685
    int8_t             waypointIndex;
    bool               pathSequencingFlag;       // +0x687
    bool               pathAlternateFlag;        // +0x688
    bool               isTeamLeader;
    bool               shouldScanForTarget;
    bool               aiSearchFlag0;            // +0x68B
    bool               aiSearchFlag1;            // +0x68C
    bool               aiSearchFlag2;            // +0x68D
    bool               aiSearchFlag3;            // +0x68E
    bool               shouldEnterAbsorber;
    bool               shouldEnterOccupiable;
    bool               shouldGarrisonStructure;
    FootClass*         parasiteEatingMe;
    uint32_t           parasiteState;            // +0x698
    ParasiteClass*     parasiteImUsing;
    TimerStruct        paralysisTimer;
    bool               parasiteFlag0;            // +0x6AC
    bool               isAttackedByLocomotor;
    bool               isLetGoByLocomotor;
    bool               locomotorFlag0;           // +0x6AF
    bool               locomotorFlag1;           // +0x6B0
    bool               locomotorFlag2;           // +0x6B1
    bool               locomotorFlag3;           // +0x6B2
    bool               locomotorFlag4;           // +0x6B3
    bool               locomotorFlag5;           // +0x6B4
    bool               locomotorFlag6;           // +0x6B5
    bool               frozenStill;
    bool               locomotorFlag7;           // +0x6B7
    bool               locomotorFlag8;           // +0x6B8
    uint8_t            padding_6B9[3];
    uint32_t           m_unused_6BC;

protected:
    FootClass() noexcept;
};

} // namespace game
} // namespace ra2
