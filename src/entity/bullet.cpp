#include "gamemd/entity/bullet.hpp"
#include "gamemd/type/bullet_type.hpp"
#include "gamemd/type/weapon_type.hpp"
#include "gamemd/type/warhead_type.hpp"
#include "gamemd/core/vector.hpp"

#include <cstring>

namespace gamemd
{

extern void* BulletClass_vftable[1];
extern DynamicVectorClass<BulletClass*> BulletClass_Array;
extern DynamicVectorClass<ObjectClass*> ObjectClass_Array;

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

    m_abstract_flags = kBulletFlag;

    const auto vft = reinterpret_cast<void**>(&BulletClass_vftable[0]);
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    BulletClass_Array.AddItem(this);
    ObjectClass_Array.AddItem(this);
}

} // namespace gamemd
