#include "gamemd/entity/bullet.hpp"
#include "gamemd/type/bullet_type.hpp"
#include "gamemd/type/weapon_type.hpp"
#include "gamemd/type/warhead_type.hpp"
#include "gamemd/core/vector.hpp"

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
    bulletField_B4        = false;

    std::memset(&Data, 0, sizeof(Data));

    Bright            = false;
    bulletField_E4        = 0;

    std::memset(&Velocity, 0, sizeof(Velocity));

    bulletField_100       = 0;
    bulletField_104       = false;
    bulletField_108       = 0;
    Target            = nullptr;
    Speed             = 0;
    InheritedColor    = 0;
    bulletField_118       = 0;
    bulletField_11C       = 0;
    bulletField_120       = 0.0;
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

    m_abstract_flags = kBulletFlag;
}

} // namespace gamemd
