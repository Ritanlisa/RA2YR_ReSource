#include "entity/bullet.hpp"
#include "type/bullet_type.hpp"
#include "type/weapon_type.hpp"
#include "type/warhead_type.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{
namespace {

constexpr uint32_t kBulletFlag = 0x8u;

} // anonymous namespace

BulletClass::BulletClass(BulletTypeClass* pType) noexcept
{
    Type              = pType;
    Owner             = nullptr;
    unknown_B4        = false;

    std::memset(&Data, 0, sizeof(Data));

    Bright            = false;
    unknown_E4        = 0;

    std::memset(&Velocity, 0, sizeof(Velocity));

    unknown_100       = 0;
    unknown_104       = false;
    unknown_108       = 0;
    Target            = nullptr;
    Speed             = 0;
    InheritedColor    = 0;
    unknown_118       = 0;
    unknown_11C       = 0;
    unknown_120       = 0.0;
    WH                = nullptr;
    AnimFrame         = 0;
    AnimRateCounter   = 0;
    WeaponType        = nullptr;

    std::memset(&SourceCoords,   0, sizeof(SourceCoords));
    std::memset(&TargetCoords,   0, sizeof(TargetCoords));
    std::memset(&LastMapCoords,  0, sizeof(LastMapCoords));

    DamageMultiplier  = 0;
    NextAnim          = nullptr;
    SpawnNextAnim     = false;
    Range             = 0;

    abstractFlags = kBulletFlag;
}

} // namespace gamemd
