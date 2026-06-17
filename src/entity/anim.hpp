#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"

namespace gamemd {

class AnimTypeClass;
class BulletClass;
class LightConvertClass;

struct BounceClass
{
    uint32_t data[6];
};

class AnimClass : public ra2::game::ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Anim;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~AnimClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(AnimClass); }

    virtual int AnimExtras() { return 0; }
    virtual int GetEnd() const { return 0; }

    ProgressTimer       Animation;
    AnimTypeClass*      Type;
    ra2::game::ObjectClass* OwnerObject;
    uint32_t            field_D0;
    LightConvertClass*  LightConvert;
    int32_t             LightConvertIndex;
    char                PaletteName[0x20];
    int32_t             TintColor;
    int32_t             ZAdjust;
    int32_t             YSortAdjust;
    ra2::game::CoordStruct  FlamingGuyCoords;
    int32_t             FlamingGuyRetries;
    bool                IsBuildingAnim;
    bool                UnderTemporal;
    bool                Paused;
    bool                Unpaused;
    int32_t             PausedAnimFrame;
    bool                Reverse;
    uint32_t            field_124;
    BounceClass         Bounce;
    uint8_t             TranslucencyLevel;
    bool                TimeToDie;
    BulletClass*        AttachedBullet;
    ra2::game::HouseClass*  Owner;
    int32_t             LoopDelay;
    double              Damage;
    BlitterFlags        AnimFlags;
    bool                HasExtras;
    uint8_t             RemainingIterations;
    uint8_t             field_196;
    uint8_t             field_197;
    bool                IsPlaying;
    bool                IsFogged;
    bool                FlamingGuyExpire;
    bool                UnableToContinue;
    bool                SkipProcessOnce;
    bool                Invisible;
    bool                PowerOff;
    uint8_t             unused_19F;
    ra2::game::AudioController Audio3;
    ra2::game::AudioController Audio4;

protected:
    AnimClass() = default;
public:
    AnimClass(AnimTypeClass* pType, const ra2::game::CoordStruct& coords,
              int z_adjust, int loop_delay, double damage,
              ra2::game::HouseClass* owner) noexcept;
};

} // namespace gamemd
