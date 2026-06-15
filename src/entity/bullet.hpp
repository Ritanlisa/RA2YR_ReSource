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
    TimerStruct  UnknownTimer;
    TimerStruct  ArmTimer;
    CoordStruct  Location;
    int32_t      Distance;
};

using BulletVelocity = Vector3D<double>;

class BulletClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Bullet;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~BulletClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(BulletClass); }

    virtual uint8_t GetAnimFrame() const { return 0; }
    virtual void SetTarget(AbstractClass* pTarget) {}
    virtual bool MoveTo(const CoordStruct& where, const BulletVelocity& velocity) { return false; }

    BulletTypeClass*    Type;
    TechnoClass*        Owner;
    bool                unknown_B4;
    BulletData          Data;
    bool                Bright;
    uint32_t            unknown_E4;
    BulletVelocity      Velocity;
    uint32_t            unknown_100;
    bool                unknown_104;
    uint32_t            unknown_108;
    AbstractClass*      Target;
    int32_t             Speed;
    int32_t             InheritedColor;
    uint32_t            unknown_118;
    uint32_t            unknown_11C;
    double              unknown_120;
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
    BulletClass(BulletTypeClass* pType) noexcept;

protected:
    BulletClass() = default;
};

} // namespace gamemd

