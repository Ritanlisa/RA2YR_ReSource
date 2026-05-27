#include "gamemd/entity/anim.hpp"
#include "gamemd/type/anim_type.hpp"
#include "gamemd/core/vector.hpp"
#include "gamemd/render/palette.hpp"
#include "gamemd/house/house.hpp"

#include <cstring>

namespace gamemd
{

using ra2::game::CoordStruct;

extern void* AnimClass_vftable[1];
extern DynamicVectorClass<AnimClass*> AnimClass_Array;
extern DynamicVectorClass<ra2::game::ObjectClass*> ObjectClass_Array;

namespace {

constexpr uint32_t kAnimFlag = 0x4u;

} // anonymous namespace

AnimClass::AnimClass(AnimTypeClass* pType, const CoordStruct& coords,
                     int z_adjust, int loop_delay, double damage,
                     ra2::game::HouseClass* owner) noexcept
{
    std::memset(&Animation, 0, sizeof(Animation));

    Type              = pType;
    OwnerObject       = nullptr;
    unknown_D0        = 0;
    LightConvert      = nullptr;
    LightConvertIndex = 0;

    std::memset(PaletteName, 0, sizeof(PaletteName));

    TintColor         = 0;
    ZAdjust           = z_adjust;
    YSortAdjust       = 0;

    std::memset(&FlamingGuyCoords, 0, sizeof(FlamingGuyCoords));

    FlamingGuyRetries = 0;
    IsBuildingAnim    = false;
    UnderTemporal     = false;
    Paused            = false;
    Unpaused          = false;
    PausedAnimFrame   = 0;
    Reverse           = false;
    unknown_124       = 0;

    std::memset(&Bounce, 0, sizeof(Bounce));

    TranslucencyLevel = 0;
    TimeToDie         = false;
    AttachedBullet    = nullptr;
    Owner             = owner;
    LoopDelay         = loop_delay;
    Damage            = damage;
    AnimFlags         = BlitterFlags{};

    HasExtras             = false;
    RemainingIterations   = 0;
    unknown_196           = 0;
    unknown_197           = 0;
    IsPlaying             = true;
    IsFogged              = false;
    FlamingGuyExpire      = false;
    UnableToContinue      = false;
    SkipProcessOnce       = false;
    Invisible             = false;
    PowerOff              = false;
    unused_19F            = 0;

    std::memset(&Audio3, 0, sizeof(Audio3));
    std::memset(&Audio4, 0, sizeof(Audio4));

    if (coords.X != 0 || coords.Y != 0 || coords.Z != 0)
    {
        m_location = coords;
    }

    m_abstract_flags = kAnimFlag;

    const auto vft = reinterpret_cast<void**>(&AnimClass_vftable[0]);
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    AnimClass_Array.AddItem(this);
    ObjectClass_Array.AddItem(this);

    // TODO: complete implementation
    // - Initialize animation from AnimTypeClass data
    // - Start animation timer
}

} // namespace gamemd
