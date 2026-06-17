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
    field_B4        = false;

    std::memset(&Data, 0, sizeof(Data));

    Bright            = false;
    field_E4        = 0;

    std::memset(&Velocity, 0, sizeof(Velocity));

    field_100       = 0;
    field_104       = false;
    field_108       = 0;
    Target            = nullptr;
    Speed             = 0;
    InheritedColor    = 0;
    field_118       = 0;
    field_11C       = 0;
    field_120       = 0.0;
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
