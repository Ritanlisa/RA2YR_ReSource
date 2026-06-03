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

// IDA: 0x447AC0 — BuildingClass::GetExitCoords (84B), see definition at end of file

// ============================================================
// Mission_Construction — building construction state machine
// Based on RA1 BuildingClass::Mission_Construction
// States: INITIAL=0 → DURING=1
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
// BuildingClass_GetExitCoords — calculate foundation center
// IDA 0x447AC0, 84B. Returns exit position for units leaving building.
//
// Algorithm:
//   foundation_h = GetFoundationHeight(false) → coord offset
//   foundation_w = GetFoundationWidth(Type) → coord offset  
//   exit.X = Location.X + (foundation_w << 7) - 128
//   exit.Y = Location.Y + (foundation_h << 7) - 128
//   exit.Z = Location.Z
// ============================================================

// ============================================================
// BuildingClass_OnObjectExpired — cleanup dangling refs (0x44E8F0, 536B)
// Called when a referenced object (anim, unit, overlay) is destroyed.
// Clears matching pointers in: this+336/338/329/384/389/351/353.
// Updates building animations based on health ratio.
// Removes entry from dynamic arrays (this+411/417).
// ============================================================

// ============================================================
// BuildingClass_TogglePrimaryFactory — get factory exit coords (0x447E90, 121B)
// Returns exit coordinates for the primary factory.
// Checks Type flags (5835/5801/5803) to determine coordinate source.
// Uses vt_entry_168 or vt_entry_72 to get position.
// ============================================================

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

// ============================================================
// BuildingClass_LoadFromStream — deserialize from save game
// IDA 0x453E20, 870B. vtable[5]: COM IPersistStream::Load override.
//
// Steps:
//  1. Get BuildingTypeClass* from load queue (dequeue)
//  2. Allocate + call BuildingClass_ctor(this, type)
//  3. Register building in BuildingLoadQueue
//  4. Register key members for GC tracking (Type, Factory, Anims, Upgrades, etc.)
//  5. Init Audio7/Audio8 controllers
//  6. Read dynamic arrays from stream (Occupants, Occupiers)
//  7. Clear field at offset 0x614 (GateStage/LaserFence)
// ============================================================

// ============================================================
// BuildingClass::Update — per-frame update (0x442C40)
// IDA 0x442C40, vtable[9] or non-vt member.
//
// Sections:
//  1. TechnoClass_Update(this) — parent class update
//  2. If C4AppliedBy (this+0x540):
//     - Copy owner's field_184 to this+0x53C (OwnerCountryIndex)
//     - BuildingClass_PowerUpdate(this)
//  3. If Type exists:
//     a. Update power drain/usage (field_160, field_1664)
//     b. BuildingTypeClass_GetPowerOutput(Type+1820)
//     c. vt_entry_192(Type) → check power online:
//        - If online: BuildingTypeClass_IsPowered(Type), set this+0x6E9 = 1
//        - If offline: set this+0x6DC = 0
//     d. Special C4AppliedBy logic:
//        - If C4AppliedBy->field_704 && Type conditions:
//          House_PowerChanged(1)
//  4. If Type && Type+0x16B0 (Special flag):
//     - Register this in global tracking array (dword_8B41E0+)
// ============================================================

// ============================================================
// BuildingClass::PowerDrainUpdate — per-frame power consumption (0x454260)
// IDA 0x454260, vtable[13]. Processes power drain timers & flags.
//
// Called every frame when building is online. Processes:
//  - Power timers (this+1320/1328, 1744/1752, 1332/1336/1340, 1360/1368)
//    Each timer: remaining = duration - (CurrentFrame - start)
//    Power_TimerProcess(remaining) updates drain state
//  - Power flags via Power_FlagProcess:
//    this+1632, 1770, 1738, 1739, 1756-1766, 1740 (16 flags total)
//  - Power_TimerProcess(this+1792) — 16-bit accumulator
//  - Power_FinalizeDrain(this+1794) — finalize this frame
//  - Related objects (this+1344, 1352): get type via vtable[16]
// ============================================================

// IDA: 0x447AC0 — BuildingClass::GetExitCoords (84B)
// Computes exit cell coordinate for unit spawning from a building.
// IDA: this+0x520 = Type, this+0x9C = m_location
CoordStruct* BuildingClass::GetExitCoords(CoordStruct* out, uint32_t unknown) const
{
    (void)unknown;
    if (!Type) {
        *out = {};
        return out;
    }

    int fh = Type->GetFoundationHeight(false);
    int fw = Type->GetFoundationWidth();

    // IDA: foundationW*128 - 128 + location.X, foundationH*128 - 128 + location.Y
    out->X = m_location.X + ((fw << 7) - 128);
    out->Y = m_location.Y + ((fh << 7) - 128);
    out->Z = m_location.Z;

    return out;
}

} // namespace gamemd
