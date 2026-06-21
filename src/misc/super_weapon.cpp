#include "misc/super_weapon.hpp"
#include "house/house.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{


DynamicVectorClass<AbstractTypeClass*>* SuperWeaponTypeClass::Array = nullptr;
DynamicVectorClass<SuperClass*>* SuperClass::Array                  = nullptr;

SuperWeaponTypeClass::SuperWeaponTypeClass(const char* pID) noexcept
    : AbstractTypeClass(pID)
    , ArrayIndex(0)
    , WeaponType(nullptr)
    , RechargeVoice(0)
    , ChargingVoice(0)
    , ImpatientVoice(0)
    , SuspendVoice(0)
    , RechargeTime(0)
    , Type(SuperWeaponType{})
    , SidebarImage(nullptr)
    , ActionValue(Action::None)
    , SpecialSound(0)
    , StartSound(0)
    , AuxBuilding(nullptr)
    , zero_E4(0)
    , UseChargeDrain(false)
    , IsPowered(false)
    , DisableableFromShell(false)
    , FlashSidebarTabFrames(0)
    , AIDefendAgainst(false)
    , PreClick(false)
    , PostClick(false)
    , PreDependent(0)
    , ShowTimer(false)
    , ManualControl(false)
    , Range(0.0f)
    , LineMultiplier(0)
{
    std::memset(SidebarImageFile, 0, sizeof(SidebarImageFile));

    if (Array)
    {
        Array->AddItem(this);
    }
}

SuperWeaponTypeClass::SuperWeaponTypeClass(noinit_t) noexcept
    : AbstractTypeClass(noinit_t())
{
}

SuperClass::SuperClass(SuperWeaponTypeClass* pSWType, HouseClass* pOwner) noexcept
{
    CustomChargeTime  = 0;
    Type              = pSWType;
    Owner             = pOwner;

    std::memset(&RechargeTimer, 0, sizeof(RechargeTimer));

    unused_3C         = 0;
    BlinkState        = false;

    std::memset(&BlinkTimer, 0, sizeof(BlinkTimer));

    SpecialSoundDuration   = 0;
    SpecialSoundLocation   = CoordStruct{};
    CanHold                = false;
    unused_61              = 0;

    ChronoMapCoords        = CellStruct{};

    Animation              = nullptr;
    AnimationGotInvalid    = false;
    Granted                = false;
    OneTime                = false;
    IsCharged              = false;
    IsOnHold               = false;

    ReadinessFrame         = 0;
    CameoChargeState       = 0;
    ChargeDrainState       = (gamemd::ChargeDrainState)(0);

    uniqueId      = (uint32_t)(-1);
    abstractFlags = 0;
    nextArrayIndex     = 0;
    referenceCount      = 0;
    needsSave          = false;

    if (Array)
    {
        Array->AddItem(this);
    }
}

SuperClass::SuperClass(noinit_t) noexcept
{
}

// TODO: complete implementation of all static methods:
// LightningStorm, PsyDom, NukeFlash, ChronoScreenEffect

} // namespace gamemd

#include "misc/super_weapon.hpp"

namespace gamemd {

// --- SuperWeaponTypeClass ---

AbstractType __stdcall SuperWeaponTypeClass::whatAmI() const { return AbsID; }
int32_t SuperWeaponTypeClass::objectSize() const { return sizeof(SuperWeaponTypeClass); }
Action SuperWeaponTypeClass::MouseOverObject(const CellStruct& cell, ObjectClass* pObjBelowMouse) const { return Action::None; }

// --- SuperClass ---

AbstractType __stdcall SuperClass::whatAmI() const { return AbsID; }
int32_t SuperClass::objectSize() const { return sizeof(SuperClass); }

} // namespace gamemd
