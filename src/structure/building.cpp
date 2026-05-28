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

// ============================================================
// Mission_Construction — building construction state machine
// Based on RA1 BuildingClass::Mission_Construction
// States: INITIAL=0 → DURING=1
// ============================================================
int BuildingClass::Mission_Construction()
{
    enum { INITIAL, DURING };

    switch (m_mission_status)
    {
    case INITIAL:
    {
        if (!Factory || !BeingProduced)
            return 0;

        // Begin construction buildup animation
        // RADIO_BUILDING in RA1
        SendToFirstLink(static_cast<ra2::game::RadioCommand>(
            static_cast<int>(RadioCommand::RequestBeginProduction)));

        // TODO: owner->IsPlayerControl → Sound_Effect(VOC_CONSTRUCTION, coord)

        m_mission_status = DURING;
        return 15;
    }

    case DURING:
    {
        // Poll animation completion
        // In RA1: if (IsReadyToCommence) → finish construction
        bool construction_done = true; // TODO: actual animation completion check

        if (construction_done)
        {
            SendToFirstLink(static_cast<ra2::game::RadioCommand>(
                static_cast<int>(RadioCommand::RequestEndProduction)));
            SendToFirstLink(static_cast<ra2::game::RadioCommand>(
                static_cast<int>(RadioCommand::AnswerLeave)));

            // Grand Opening: post-construction unlock
            // owner->AdjustTechnology(Type); owner->IsRecalcNeeded = true;
            // Spawn free harvester / helicopter

            QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
        }
        break;
    }
    }

    return 15;
}

// ============================================================
// Mission_Selling — building sell/deconstruction state machine
// Based on RA1 BuildingClass::Mission_Deconstruction
// States: INITIAL=0 → HOLDING=1 → DURING=2
// ============================================================
int BuildingClass::Mission_Selling()
{
    enum { INITIAL, HOLDING, DURING };

    switch (m_mission_status)
    {
    case INITIAL:
    {
        BeingProduced = false;

        // Tell docked units to leave
        SendToEachLink(static_cast<ra2::game::RadioCommand>(
            static_cast<int>(RadioCommand::AnswerLeave)));

        m_mission_status = HOLDING;
        return 5;
    }

    case HOLDING:
    {
        // Evacuate crew — spawn survivor infantry
        // In RA1: How_Many_Survivors() → spawn InfantryClass at exit cell
        // TODO: Sound_Effect(VOC_CASHTURN, coord)

        // Begin deconstruction animation
        // Detach_All(true);

        m_mission_status = DURING;
        return 5;
    }

    case DURING:
    {
        bool decon_done = true; // TODO: animation completion check

        if (decon_done)
        {
            // Construction yard → undeploy to MCV
            // If Type->UndeploysInto → revert to mobile MCV
            // Refund partial cost to owner

            // Remove gap effect if this building generates one
            if (m_generating_gap)
            {
                DestroyGap();
            }

            // Remove from map
            Remove();
        }
        break;
    }
    }

    return 5;
}

// ============================================================
// Mission_Repair — repair bay / helipad / conyard active state
// Based on RA1 BuildingClass::Mission_Repair
// States: INITIAL=0 → IDLE=1 → DURING=2
// ============================================================
int BuildingClass::Mission_Repair()
{
    enum { INITIAL, IDLE, DURING };

    switch (m_mission_status)
    {
    case INITIAL:
    {
        m_mission_status = IDLE;
        return 20;
    }

    case IDLE:
    {
        // Contact docked unit for repair bay / helipad modes
        // For generic repair buildings: check NeedsRepairs
        if (NeedsRepairs)
        {
            NeedsRepairs = false;
            IsBeingRepaired = true;
            // Begin_Mode(BSTATE_ACTIVE);
            m_mission_status = DURING;
        }
        break;
    }

    case DURING:
    {
        // Per-tick repair logic (RA1 Repair_AI pattern)
        if (!IsBeingRepaired)
        {
            QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
            return 20;
        }

        // Deduct money and increase health each repair tick
        int repair_step = 5;   // TODO: Type->RepairStep
        int max_health = 1000; // TODO: Type->Strength

        auto* owner = GetOwningHouse();
        if (owner)
        {
            m_health += repair_step;
            if (m_health >= max_health)
            {
                m_health = max_health;
                IsBeingRepaired = false;
                QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
            }
        }
        else
        {
            IsBeingRepaired = false;
        }
        break;
    }
    }

    return 20;
}

int BuildingClass::Mission_Missile()
{
    return 0;
}

// ============================================================
// Place — building placement finalization
// ============================================================
void BuildingClass::Place(bool bUnk)
{
    ActuallyPlacedOnMap = true;
    BeingProduced = false;

    auto* owner = GetOwningHouse();
    if (!owner)
        return;

    // Register with house building list
    // owner->RegisterGain(this);
    // owner->IsRecalcNeeded = true;

    // Enable cloak radius if applicable
    if (HasCloakingData && CloakRadius > 0)
    {
        // Cloak surrounding area
    }

    // Reveal area around building
    int reveal_range = 4; // TODO: from Type->SightRange
}

} // namespace gamemd
