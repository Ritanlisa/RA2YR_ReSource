#include "gamemd/structure/building.hpp"
#include "gamemd/type/building_type.hpp"

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
            // (RA1 Grand_Opening pattern)
            // owner->AdjustTechnology(Type);
            // owner->IsRecalcNeeded = true;
            //
            // Refinery: spawn free harvester at adjacent cell
            if (Type && Type->Refinery && Type->FreeUnit)
            {
                // auto* harv = CreateUnit(Type->FreeUnit, exit_cell, owner);
                // harv->QueueMission(Mission::Harvest, true);
            }
            //
            // Helipad: spawn free aircraft
            if (Type && Type->Helipad)
            {
                // auto* aircraft = CreateUnit(pad_aircraft, m_location, owner);
            }

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
            if (Type && Type->UndeploysInto)
            {
                // Revert to mobile MCV, preserving health ratio
                // auto* mcv_type = Type->UndeploysInto;
                // int health_pct = m_health * 100 / Type->Strength;
                // auto* mcv = CreateUnit(...);
                // mcv->m_health = health_pct * mcv_type->Strength / 100;
                // Remove();
                // return 5;
            }
            else
            {
                // Refund partial cost: owner->RefundMoney(Type->GetRefund(owner, false));
            }

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
        // Construction yard: stay active while producing
        if (Type && Type->ConstructionYard && Factory)
        {
            // Begin_Mode(BSTATE_ACTIVE);
            m_mission_status = DURING;
            return 20;
        }

        // Repair bay / hospital / armory: contact docked unit
        if (Type && (Type->UnitRepair || Type->Hospital || Type->Armory))
        {
            // Send RADIO_NEED_TO_MOVE to docked unit
            m_mission_status = IDLE;
            return 20;
        }

        // Helipad: contact landed aircraft
        if (Type && Type->Helipad)
        {
            // Send RADIO_NEED_TO_MOVE + RADIO_PREPARED to docked aircraft
            m_mission_status = IDLE;
            return 20;
        }

        // Generic repair: check NeedsRepairs flag
        m_mission_status = IDLE;
        return 20;
    }

    case IDLE:
    {
        if (Type && (Type->UnitRepair || Type->Hospital || Type->Armory))
        {
            // Check docked unit health, begin repair when below threshold
            // Begin_Mode(BSTATE_ACTIVE);
            m_mission_status = DURING;
        }
        else if (Type && Type->Helipad)
        {
            // Wait for aircraft reload signal (RADIO_PREPARED)
        }
        else if (NeedsRepairs)
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
        if (Type && Type->ConstructionYard)
        {
            // Check if radio contact lost (produced unit completed)
            // If no active radio link, return to guard
            return 20;
        }

        if (Type && (Type->UnitRepair || Type->Hospital || Type->Armory))
        {
            // Each anim cycle: send RADIO_REPAIR to docked unit
            // Handle: RADIO_ROGER (ok), RADIO_CANT (no cash), RADIO_ALL_DONE (full)
            return 20;
        }

        if (Type && Type->Helipad)
        {
            // Reload time scales with power fraction, min 50% speed
            // On reload complete: release aircraft
            return 20;
        }

        // Generic repair: per-tick healing (RA1 Repair_AI pattern)
        if (!IsBeingRepaired)
        {
            QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
            return 20;
        }

        // Deduct money and increase health each repair tick
        int repair_step = Type ? Type->GetRepairStep() : 5;
        int max_health = Type ? Type->Strength : 1000;

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
    if (Type && Type->CloakGenerator)
    {
        HasCloakingData = 1;
        CloakRadius = Type->CloakRadiusInCells;
    }

    // Reveal area around building
    int reveal_range = Type ? Type->Sight : 4;
}

} // namespace gamemd
