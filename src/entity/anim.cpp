#include "gamemd/entity/anim.hpp"
#include "gamemd/type/anim_type.hpp"
#include "gamemd/core/vector.hpp"
#include "gamemd/render/palette.hpp"
#include "gamemd/house/house.hpp"

#include <cstring>

namespace gamemd
{

using ra2::game::CoordStruct;
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
    animField_D0        = 0;
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
    animField_124       = 0;

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
    animField_196           = 0;
    animField_197           = 0;
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

    // TODO: complete implementation
    // - Initialize animation from AnimTypeClass data
    // - Start animation timer
}

// IDA: 0x428DE0 — AnimClass::FreeRenderBuffer (81B)
// Frees the render buffer (at this+164) if allocated and flags permit.
// Fields: this+164 = SHP render buffer ptr, this+168 = buffer allocated flag,
//         this+862 = render active flag, this+863 = free permission flag
void AnimClass::FreeRenderBuffer()
{
    // NOTE: field names are unknown — using raw offsets faithful to IDA
    auto* buffer_flag   = reinterpret_cast<uint8_t*>(this) + 862;
    auto* buffer_ptr    = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(this) + 164);
    auto* free_perm     = reinterpret_cast<uint8_t*>(this) + 863;
    auto* alloc_flag    = reinterpret_cast<uint8_t*>(this) + 168;

    if (*buffer_flag && *buffer_ptr)
    {
        if (*free_perm)
        {
            Debug::Log();
            operator delete(*buffer_ptr);
            *buffer_ptr = nullptr;
            *alloc_flag = 0;
        }
    }
}

} // namespace gamemd
