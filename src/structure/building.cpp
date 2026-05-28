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
    , ProductionTimer(0)
    , PlacementAllowed(false)
    , ProductionBlocked(0)
    , m_pad_prod_1(0)
    , m_pad_prod_2(0)
    , ProductionAccum(0)
    , ProductionFrame(0)
    , ProductionRate(0)
    , ProductionSpeed(0)
    , CostAccumulator(0.0)
    , PipelineStep(0)
{
    m_pad_prod_3[0] = 0; m_pad_prod_3[1] = 0; m_pad_prod_3[2] = 0;
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
    // RA1 BuildingClass::Mission_Missile — handles nuke silo + GPS satellite launch
    // Two separate state machines depending on building type

    // GPS Satellite (STRUCT_ADVANCED_TECH in RA1)
    if (Type && (Type->ICBMLauncher || Type->SpySat))
    {
        enum { DOOR_OPENING, LAUNCH_UP, DONE_LAUNCH };

        switch (m_mission_status)
        {
        case DOOR_OPENING:
        {
            // Open building door
            // Create door opening animation at center
            // AnimClass* door_anim = new AnimClass(Type->DoorAnim, CenterCoord());

            // Track door animation
            // m_mission_data = door_anim;
            m_mission_status = LAUNCH_UP;
            return 10;
        }

        case LAUNCH_UP:
        {
            // Wait for door animation to reach launch stage
            // When ready: create GPS satellite bullet
            // BulletClass* bullet = new BulletClass(GPS_SATELLITE, target, this, 200, WARHEAD_FIRE, MPH_ROCKET);
            // bullet->Unlimbo(launch_coord, DIR_N);

            // After launch, return to guard
            QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
            return 10;
        }

        case DONE_LAUNCH:
        default:
            QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
            return 10;
        }
    }

    // Nuke Silo
    if (Type && Type->NukeSilo)
    {
        enum { INITIAL, DOOR_OPENING, LAUNCH_UP, LAUNCH_DOWN, DONE_LAUNCH };

        switch (m_mission_status)
        {
        case INITIAL:
        {
            // Start opening the silo door
            // Begin_Mode(BSTATE_ACTIVE);
            m_mission_status = DOOR_OPENING;
            return 10;
        }

        case DOOR_OPENING:
        {
            // Poll for door fully open
            // if (IsReadyToCommence) {
            //     Begin_Mode(BSTATE_AUX1); // hold door open
            //     m_mission_status = LAUNCH_UP;
            // }
            m_mission_status = LAUNCH_UP;
            return 10;
        }

        case LAUNCH_UP:
        {
            // Launch nuke-up bullet
            // BulletClass* bullet = new BulletClass(BULLET_NUKE_UP, target, this, 200, WARHEAD_HE, MPH_VERY_FAST);
            // bullet->Unlimbo(launch_coord, DIR_N);

            // Speak VOX_ABOMB_LAUNCH

            // Launch nuke-down bullet at House->NukeDest
            // BulletClass* nuke_down = new BulletClass(BULLET_NUKE_DOWN, nuke_target, this, 200, WARHEAD_NUKE, MPH_VERY_FAST);
            // nuke_down->Unlimbo(nuke_start, DIR_S);

            m_mission_status = DONE_LAUNCH;
            return 60;
        }

        case DONE_LAUNCH:
        {
            // Close silo door
            // Begin_Mode(BSTATE_IDLE);
            QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
            return 10;
        }

        default:
            return 10;
        }
    }

    return 10;
}

// ============================================================
// ExitObject — unit exit from building (RA1 Exit_Object pattern)
// Returns: 0=failure, 1=retry, 2=success
// ============================================================
int Building_ExitObject(BuildingClass* building, ra2::game::TechnoClass* exiting_unit)
{
    if (!exiting_unit || !building || !building->Type)
        return 0;

    using ra2::game::AbstractType;

    switch (building->Type->Factory)
    {
    case AbstractType::Aircraft:
        // Aircraft exit from helipad/airstrip
        // air->Unlimbo(dock_coord, air->Pose_Dir());
        // Transmit_Message(RADIO_HELLO, air);
        return 1;

    case AbstractType::Unit:
        if (building->Type->Refinery)
        {
            // Harvester exit from refinery
            // unit->Unlimbo(exit_cell, DIR_SW_X2);
            // unit->QueueMission(Mission::Harvest, true);
            return 1;
        }
        // War factory exit
        return 1;

    case AbstractType::Infantry:
        // Barracks exit
        // exiting_unit->Unlimbo(Exit_Coord(), dir);
        return 1;

    default:
        return 0;
    }
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

// ============================================================
// BuildingClass::Load — deserialize from save stream
// IDA 0x453E20, 870 bytes.
// vtable[5] of BuildingClass
//
// Reads building data from a save game stream, reconstructing
// the building state including Type, Factory, animations,
// upgrades, and audio controllers.
// ============================================================
namespace {
    // Forward declarations for referenced subroutines
    // sub_41C590: Lookup building type from production queue table
    // sub_70BF50: Allocate/initialize BuildingClass object
    // sub_43B680: BuildingClass constructor
    // sub_41C500: Grow dynamic array
    // sub_6CF240: Register pointer for garbage collection tracking
    // sub_405BE0: Initialize AudioController
}

// TODO: Full implementation when save/load system is ready
// Current skeleton covers the member initialization structure only
