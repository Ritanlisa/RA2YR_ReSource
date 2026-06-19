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
    BulletClass_field_B4        = false;

    std::memset(&Data, 0, sizeof(Data));

    Bright            = false;
    BulletClass_field_E4        = 0;

    std::memset(&Velocity, 0, sizeof(Velocity));

    BulletClass_field_100       = 0;
    BulletClass_field_104       = false;
    BulletClass_field_108       = 0;
    Target            = nullptr;
    Speed             = 0;
    InheritedColor    = 0;
    BulletClass_field_118       = 0;
    BulletClass_field_11C       = 0;
    BulletClass_field_120       = 0.0;
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

#include "entity/bullet.hpp"

namespace gamemd {

// --- BulletClass ---

HRESULT __stdcall BulletClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall BulletClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall BulletClass::whatAmI() const { return kObjectTypeId; }
int BulletClass::objectSize() const { return sizeof(BulletClass); }
uint8_t BulletClass::GetAnimFrame() const { return 0; }
void BulletClass::SetTarget(AbstractClass* pTarget) {}
bool BulletClass::MoveTo(const CoordStruct& where, const BulletVelocity& velocity) { return false; }

} // namespace gamemd
