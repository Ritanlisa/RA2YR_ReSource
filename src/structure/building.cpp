#include "gamemd/structure/building.hpp"

#include <cstring>

namespace gamemd {

BuildingClass::BuildingClass() noexcept
    : Type(nullptr)
    , Factory(nullptr)
    , C4Timer{}
    , unknown_int_534(0)
    , unknown_int_538(0)
    , OwnerCountryIndex(0)
    , C4AppliedBy(nullptr)
    , unknown_544(0)
    , FirestormAnim(nullptr)
    , PsiWarnAnim(nullptr)
    , unknown_timer_550{}
    , RequiresDamageFires(false)
    , FiringSWType(-1)
    , unknown_5FC(0)
    , Spotlight(nullptr)
    , GateTimer{}
    , LightSource(nullptr)
    , LaserFenceFrame(0)
    , FirestormWallFrame(0)
    , RepairProgress{}
    , unknown_rect_63C{}
    , unknown_coord_64C{}
    , unknown_int_658(0)
    , unknown_65C(0)
    , HasPower(false)
    , IsOverpowered(false)
    , RegisteredAsPoweredUnitSource(false)
    , SupportingPrisms(0)
    , HasExtraPowerBonus(false)
    , HasExtraPowerDrain(false)
    , FiringOccupantIndex(-1)
    , Audio7{}
    , Audio8{}
    , WasOnline(false)
    , ShowRealName(false)
    , BeingProduced(false)
    , ShouldRebuild(false)
    , HasEngineer(false)
    , CashProductionTimer{}
    , unknown_bool_6DC(false)
    , unknown_bool_6DD(false)
    , NeedsRepairs(false)
    , C4Applied(false)
    , NoCrew(false)
    , unknown_bool_6E1(false)
    , unknown_bool_6E2(false)
    , HasBeenCaptured(false)
    , ActuallyPlacedOnMap(false)
    , unknown_bool_6E5(false)
    , IsDamaged(false)
    , IsFogged(false)
    , IsBeingRepaired(false)
    , unknown_bool_6E9(false)
    , StuffEnabled(false)
    , HasCloakingData(0)
    , CloakRadius(0)
    , Translucency(0)
    , StorageFilledSlots(0)
    , SecretProduction(nullptr)
    , ColorAdd{}
    , unknown_int_6FC(0)
    , unknown_short_700(0)
    , UpgradeLevel(0)
    , GateStage(0)
    , PrismStage(static_cast<PrismChargeState>(0))
    , PrismTargetCoords{}
    , DelayBeforeFiring(0)
    , BunkerState(0)
{
    std::memset(Anims, 0, sizeof(Anims));
    std::memset(AnimStates, 0, sizeof(AnimStates));
    std::memset(DamageFireAnims, 0, sizeof(DamageFireAnims));
    std::memset(Upgrades, 0, sizeof(Upgrades));
}

int BuildingClass::Mission_Construction()
{
    if (!Factory || !BeingProduced)
        return 0;

    // Construction progress update
    // TODO: advance build progress, check completion
    return 15;
}

int BuildingClass::Mission_Selling()
{
    // Selling animation and deconstruction
    // TODO: deconstruction animation, refund calculation
    return 5;
}

int BuildingClass::Mission_Repair()
{
    if (!NeedsRepairs)
        return 0;

    // Repair progress
    IsBeingRepaired = true;
    // TODO: advance repair, check completion
    return 10;
}

int BuildingClass::Mission_Missile()
{
    return 0;
}

void BuildingClass::Place(bool bUnk)
{
    ActuallyPlacedOnMap = true;
    BeingProduced = false;

    // Register with house building list
    // TODO: HouseClass::RegisterGain(this),
    //        power system registration,
    //        reveal area around building
}

} // namespace gamemd
