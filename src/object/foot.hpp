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
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x4);

    virtual ~FootClass() = default;

    virtual void Destroyed(ObjectClass* killer) override;
    virtual void onBuildingPlacement(uint32_t a, uint32_t b) override {}

    virtual void ReceiveGunner(FootClass* gunner) {}
    virtual void RemoveGunner(FootClass* gunner) {}
    virtual bool IsLeavingMap() const { return false; }
    virtual bool canMove() const { return false; }
    virtual bool onProductionComplete() const { return false; }
    virtual void onCellEntry(CellStruct* cell) {}
    virtual void processSuperWeapon(CellStruct* cell) {}
    virtual CoordStruct* getMoveCoords(CoordStruct* out) { return nullptr; }
    virtual void onMoveStart() {}
    virtual bool canStop() { return false; }
    virtual bool MoveTo(CoordStruct* coords);
    virtual bool StopMoving();
    virtual bool canRecruitTeamMember() { return false; }
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
    virtual void onDrawComplete() {}
    virtual void Panic();
    virtual void UnPanic();
    virtual void PlayIdleAnim(int idle_anim_number) {}
    virtual uint32_t getMovementMode() { return 0; }
    virtual uint32_t getPathDistance(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual uint32_t getPathCost(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const { return 0; }
    virtual uint32_t isAreaClear(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual void onAreaEntry(uint32_t a, uint32_t b) {}
    virtual int GetCurrentSpeed() const;
    virtual uint32_t getWaypointData(uint32_t a) { return 0; }
    virtual void onWaypointReached(uint32_t a) {}
    virtual void SetSpeedPercentage(double percentage);
    virtual void onPathComplete() {}
    virtual void onMovementDone() {}
    virtual bool canEnterCell(uint32_t a) { return false; }

    bool MovementAI();

    int Mission_Move() override;
    int Mission_Attack() override;
    int Mission_Guard() override;
    int Mission_Hunt() override;

protected:
    void EmitMovementSmoke();
    void UpdateMovementAmbiguity();
    void UpdateMovementSpeed();
    void HandleMovementSoundupdateLogic();
    void HandleLocomotionupdateLogic();

    // ---- member variables ----

    int32_t            planningPathIdx;
    int16_t            unknownShort524;
    int16_t            unknownShort526;
    int16_t            unknownShort528;
    int16_t            field_short_52A;
    uint32_t           field_52C;
    uint32_t           unknown530;
    uint32_t           unknown534;
    uint32_t           unknown538;
    bool               field_bool_53C;
    uint8_t            m_padding_53D[3];
    uint32_t           unknown540;
    AudioController    audioController7;
    CellStruct         currentMapCoords;
    CellStruct         lastMapCoords;
    CellStruct         lastJumpjetMapCoords;
    CellStruct         currentJumpjetMapCoords;
    CoordStruct        unknownCoords568;
    uint32_t           unused574;
    double             currentSpeed_percentage;
    double             currentSpeed_multiplier;
    DynamicVectorClass<AbstractClass*> unknownAbstractArray588;
    uint32_t           field_5A0;
    AbstractClass*     movementDestination;
    AbstractClass*     lastDestination;
    DynamicVectorClass<AbstractClass*> field_abstract_array_5AC;
    int32_t            field_int_5C4;
    uint32_t           field_5C8;
    uint32_t           field_5CC;
    uint8_t            field_5D0;
    bool               field_bool_5D1;
    uint8_t            m_padding_5D2[2];
    TeamClass*         team;
    FootClass*         nextTeamMember;
    uint32_t           field_5DC;
    int32_t            pathDirections[24];
    TimerStruct        pathDelayTimer;
    int32_t            field_int_64C;
    TimerStruct        field_timer_650;
    TimerStruct        sightTimer;
    TimerStruct        blockagePathTimer;
    YRComPtr           locomotor;
    CoordStruct        unknownPoint3d678;
    signed char        tubeIndex;
    bool               unknownBool685;
    signed char        waypointIndex;
    bool               unknownBool687;
    bool               unknownBool688;
    bool               isTeamLeader;
    bool               shouldScanForTarget;
    bool               field_bool_68B;
    bool               field_bool_68C;
    bool               field_bool_68D;
    bool               field_bool_68E;
    bool               shouldEnterAbsorber;
    bool               shouldEnterOccupiable;
    bool               shouldGarrisonStructure;
    FootClass*         parasiteEatingMe;
    uint32_t           unknown698;
    ParasiteClass*     parasiteImUsing;
    TimerStruct        paralysisTimer;
    bool               field_bool_6AC;
    bool               isAttackedByLocomotor;
    bool               isLetGoByLocomotor;
    bool               field_bool_6AF;
    bool               field_bool_6B0;
    bool               field_bool_6B1;
    bool               field_bool_6B2;
    bool               field_bool_6B3;
    bool               field_bool_6B4;
    bool               field_bool_6B5;
    bool               frozenStill;
    bool               field_bool_6B7;
    bool               field_bool_6B8;
    uint8_t            m_padding_6B9[3];
    uint32_t           m_unused_6BC;

protected:
    FootClass() noexcept;
};

} // namespace game
} // namespace ra2
