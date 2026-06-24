#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "object/object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif










class BulletTypeClass;
class WarheadTypeClass;
class WeaponTypeClass;
class AnimClass;

struct BulletData
{
    TimerStruct  BulletData_field_timer_;
    TimerStruct  ArmTimer;
    CoordStruct  Location;
    int32_t      Distance;
};

using BulletVelocity = Vector3D<double>;

class BulletClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Bullet;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~BulletClass() override = default;  // 0x466560

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to BulletClass::Dtor at 0x466560
    virtual int objectSize() const override;

    virtual uint8_t GetAnimFrame() const;  // 0x468000
    // wrapper: delegates to BulletClass::GetAnimFrame at 0x468000
    virtual void SetTarget(AbstractClass* pTarget);
    // wrapper: delegates to BulletClass::GetAnimFrame at 0x468000
    virtual bool MoveTo(const CoordStruct& where, const BulletVelocity& velocity);

    BulletTypeClass*    Type;
    TechnoClass*        Owner;
    bool                BulletClass_field_B4;
    BulletData          Data;
    bool                Bright;
    uint32_t            BulletClass_field_E4;
    BulletVelocity      Velocity;
    uint32_t            BulletClass_field_100;
    bool                BulletClass_field_104;
    uint32_t            BulletClass_field_108;
    AbstractClass*      Target;
    int32_t             Speed;
    int32_t             InheritedColor;
    uint32_t            BulletClass_field_118;
    uint32_t            BulletClass_field_11C;
    double              BulletClass_field_120;
    WarheadTypeClass*   WH;
    uint8_t             AnimFrame;
    uint8_t             AnimRateCounter;
    WeaponTypeClass*    WeaponType;
    CoordStruct         SourceCoords;
    CoordStruct         TargetCoords;
    CellStruct          LastMapCoords;
    int32_t             DamageMultiplier;
    AnimClass*          NextAnim;
    bool                SpawnNextAnim;
    int32_t             Range;

public:
    BulletClass(BulletTypeClass* pType) noexcept; // 0x466380

protected:
    BulletClass() = default; // 0x466380
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* FlightUpdate(int a1, int a2);  // 0x415EE0
    void NormalizeZeroVector();  // 0x41C3F0
    bool CheckMirrorState(int a1);  // 0x4666C0
    int ProcessNukeExplosion();  // 0x4666E0
    void SetupVoxelTransform(void* a1, void* a2);  // 0x468090
    int LoseTarget();  // 0x468430
    int ProcessImpact(void* a1, void* a2);  // 0x4684E0
    int ProcessObstacle(void* a1, void* a2);  // 0x468670
    int UpdateFlightPath();  // 0x468B90
    bool CheckBulletCollision(void* a1);  // 0x468BB0
    int Fire(int a1);  // 0x468D80
    int SaveLoad_Prefix(void* a1, int a2);  // 0x46AE70
    int RenderVoxelBullet(int a1, void* a2, void* a3, void* a4, int a5, int a6, int a7);  // 0x46B0C0
    int InitScalable();  // 0x46B280
    int CheckEndOfSequence(int a1);  // 0x46B5A0
    int CheckMissionAbort();  // 0x46B5B0
    void* CheckActionStatus(int a1);  // 0x46B5C0
    void* AddVector3(void* a1);  // 0x46B960
    void* ResetDetonationTimer();  // 0x4E1100
    int InitDetonationTimer(void* a1, void* a2, int a3, int a4);  // 0x4E1130
    int CheckProximityDetonation(void* a1);  // 0x4E11F0
    int ComputeImpactTrajectory(int a1);  // 0x6620F0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd

