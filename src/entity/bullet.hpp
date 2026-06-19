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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // IDA: NOT_FOUND

    virtual ~BulletClass() override = default;  // 0x466560

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override; // IDA: NOT_FOUND

    virtual uint8_t GetAnimFrame() const;  // 0x468000
    virtual void SetTarget(AbstractClass* pTarget); // IDA: NOT_FOUND
    virtual bool MoveTo(const CoordStruct& where, const BulletVelocity& velocity); // IDA: NOT_FOUND

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
};

} // namespace gamemd

