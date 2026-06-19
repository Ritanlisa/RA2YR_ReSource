#include "structure/building.hpp"
#include "type/building_type.hpp"
#include "core/reverse_marker.hpp"
#include "fundamentals.hpp"
#include "object/techno.hpp"
#include "core/coordinate.hpp"
#include "house/house.hpp"
#include "structure/infantry.hpp"
#include "type/infantry_type.hpp"

#include <cstring>

namespace gamemd {

// ============================================================
// Section 1: Construction/Destruction
// ============================================================

BuildingClass::BuildingClass() noexcept
    : Type(nullptr)
    , Factory(nullptr)
    , C4Timer{}
    , BuildingClass_field_int_534(0)
    , BuildingClass_field_int_538(0)
    , OwnerCountryIndex(0)
    , C4AppliedBy(nullptr)
    , BuildingClass_field_544(0)
    , FirestormAnim(nullptr)
    , PsiWarnAnim(nullptr)
    , BuildingClass_field_timer_550{}
    , RequiresDamageFires(false)
    , FiringSWType(-1)
    , BuildingClass_field_5FC(0)
    , Spotlight(nullptr)
    , GateTimer{}
    , LightSource(nullptr)
    , LaserFenceFrame(0)
    , FirestormWallFrame(0)
    , RepairProgress{}
    , BuildingClass_field_rect_63C{}
    , BuildingClass_field_coord_64C{}
    , BuildingClass_field_int_658(0)
    , BuildingClass_field_65C(0)
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
    , BuildingClass_field_bool_6DC(false)
    , BuildingClass_field_bool_6DD(false)
    , NeedsRepairs(false)
    , C4Applied(false)
    , NoCrew(false)
    , BuildingClass_field_bool_6E1(false)
    , BuildingClass_field_bool_6E2(false)
    , HasBeenCaptured(false)
    , ActuallyPlacedOnMap(false)
    , BuildingClass_field_bool_6E5(false)
    , IsDamaged(false)
    , IsFogged(false)
    , IsBeingRepaired(false)
    , BuildingClass_field_bool_6E9(false)
    , StuffEnabled(false)
    , HasCloakingData(0)
    , CloakRadius(0)
    , Translucency(0)
    , StorageFilledSlots(0)
    , SecretProduction(nullptr)
    , ColorAdd{}
    , BuildingClass_field_int_6FC(0)
    , BuildingClass_field_short_700(0)
    , UpgradeLevel(0)
    , GateStage(0)
    , PrismStage(static_cast<PrismChargeState>(0))
    , PrismTargetCoords{}
    , DelayBeforeFiring(0)
    , BunkerState(0)
    , ProductionTimer(0)
    , PlacementAllowed(false)
    , ProductionBlocked(0)
    , padProd1(0)
    , padProd2(0)
    , ProductionAccum(0)
    , ProductionFrame(0)
    , ProductionRate(0)
    , ProductionSpeed(0)
    , CostAccumulator(0.0)
    , PipelineStep(0)
{
    padProd3[0] = padProd3[1] = padProd3[2] = 0;
    std::memset(Anims, 0, sizeof(Anims));
    std::memset(AnimStates, 0, sizeof(AnimStates));
    std::memset(DamageFireAnims, 0, sizeof(DamageFireAnims));
    std::memset(Upgrades, 0, sizeof(Upgrades));
}

// IDA 0x43b740
void BuildingClass::Construct()
{
    ActuallyPlacedOnMap = true;
    BeingProduced = false;
    if (Type && Type->CloakGenerator) {
        HasCloakingData = 1;
        CloakRadius = Type->CloakRadiusInCells;
    }
    PlacementAllowed = true;
    NeedsRepairs = true;
}

// IDA 0x43bcf0
void BuildingClass::Dtor()
{
    ClearAnims();
    ClearSuperWeaponAnim();
}

// IDA 0x459f20: scalar destructor → calls Dtor, conditionally frees memory
int BuildingClass::ScalarDtor()
{
    Dtor();
    return objectSize();
}

// Inherited from TechnoClass::Activate (IDA 0x70fbe0) — BuildingClass does not override
int BuildingClass::Activate()
{
    WasOnline = true;
    StuffEnabled = true;
    return 0;
}

// IDA 0x452480: deactivate building power
int BuildingClass::Deactivate()
{
    WasOnline = false;
    StuffEnabled = false;
    return 0;
}

// IDA 0x459e80: Destroyed notification — set destroyed state
void BuildingClass::Destroyed(ObjectClass* killer)
{
    BuildingClass_field_bool_6E2 = true;
}

// IDA 0x43bd40: after destruction cleanup
void BuildingClass::AfterDestruction()
{
    EjectCrew();
    ClearAnims();
}

// IDA 0x43bd10: Cleanup → clear anims + super weapon anim
void BuildingClass::Cleanup()
{
    ClearAnims();
    ClearSuperWeaponAnim();
}

// IDA 0x43bcf0: Place building on map
void BuildingClass::Place(bool bUnk)
{
    ActuallyPlacedOnMap = true;
    BeingProduced = false;
    if (Type && Type->CloakGenerator) {
        HasCloakingData = 1;
        CloakRadius = Type->CloakRadiusInCells;
    }
}

// IDA 0x43bfa0: Load from save stream
void BuildingClass::LoadFromStream(void* stream)
{
    // IStream* pStm = static_cast<IStream*>(stream);
    // if (pStm)
    //     ObjectClass::LoadFromStream_Common(pStm); // removed in hpp rewrite
}

// IDA 0x454190: return sizeof(BuildingClass)
int BuildingClass::Size()
{
    return sizeof(BuildingClass);
}

// ============================================================
// Section 2: Foundation / Cell
// ============================================================

// IDA 0x70d1a0: check if cell is placeable for this building type
bool BuildingClass::IsCellPlaceable(int cell_x, int cell_y) const
{
    if (!Type) return false;
    CellStruct cell = {static_cast<int16_t>(cell_x), static_cast<int16_t>(cell_y)};
    return Type->IsCellClearOfTerrainObstacles(cell) != 0;
}

// IDA 0x44d310: validate placement passes all checks
bool BuildingClass::ValidatePlacement() { return ValidateFoundation(); }
bool BuildingClass::ValidateFoundation() { return CheckBuildability(); }
bool BuildingClass::ValidateFoundation_0() { return ValidateFoundation(); }
bool BuildingClass::Validate() { return ValidateFoundation(); }
bool BuildingClass::ValidateCell(int x, int y) { return IsCellPlaceable(x, y); }
bool BuildingClass::ValidatePlacementEx() { return ValidateFoundation(); }

// IDA 0x449820: find cells occupied by building foundation
void BuildingClass::FindPlacementCells()
{
    if (!Type) return;
    CellStruct start = Coord2Cell(location);
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    MarkCellOccupied(start.X, start.Y);
}

// IDA 0x449830: find placement cells variant
void BuildingClass::FindPlacementCells2() { FindPlacementCells(); }

// IDA 0x449840: search for valid placement
void BuildingClass::SearchPlacement()
{
    if (!Type) return;
    CellStruct cell = Coord2Cell(location);
    MarkCellOccupied(cell.X, cell.Y);
}

// IDA 0x449850: visualize placement footprint
void BuildingClass::VisualizePlacement()
{
    if (!Type) return;
    CellStruct cell = Coord2Cell(location);
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    for (int y = 0; y < fh; ++y)
        for (int x = 0; x < fw; ++x)
            MarkCellOccupied(cell.X + x, cell.Y + y);
}

// IDA 0x4258c0: get placement coords
CoordStruct* BuildingClass::GetPlacementCoords(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

// IDA 0x425910: get placement rect from type foundation
RectangleStruct* BuildingClass::GetPlacementRect(RectangleStruct* out) const
{
    if (!out || !Type) return nullptr;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    out->X = location.X;
    out->Y = location.Y;
    out->Width = fw * 256;
    out->Height = fh * 256;
    return out;
}

// IDA 0x44e3a0: check overlap with other buildings
bool BuildingClass::CheckOverlapWithOthers() { return CheckBuildability(); }
// IDA 0x44e400: check footprint blocked
bool BuildingClass::IsFootprintBlocked() { return !CheckBuildability(); }
void BuildingClass::DamageFactoryBibCells() {}
void BuildingClass::ClearFactoryBib() {}
void BuildingClass::RepairPlacement() {}

// IDA 0x63ac70: check if building can be placed at location
bool BuildingClass::CheckBuildability()
{
    if (!Type) return false;
    CellStruct cell = Coord2Cell(location);
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    for (int y = 0; y < fh; ++y) {
        for (int x = 0; x < fw; ++x) {
            if (!IsCellPlaceable(cell.X + x, cell.Y + y))
                return false;
        }
    }
    return true;
}

// IDA 0x70c5a0: check cell passability (delegates to TechnoClass flag)
bool BuildingClass::CheckCellPassability()
{
    return !BuildingClass_field_bool_6E5;
}

// IDA 0x710670: placement complete notification
void BuildingClass::OnCellPlacementComplete()
{
    ActuallyPlacedOnMap = true;
    PlacementAllowed = true;
}

// ============================================================
// Section 3: Exit / Unlimbo
// ============================================================

// IDA 0x44e1b0: get exit coordinates for units leaving building
CoordStruct* BuildingClass::GetExitCoords(CoordStruct* out, uint32_t unknown) const
{
    if (!Type || !out) return out;
    int fh = Type->GetFoundationHeight(false);
    int fw = Type->GetFoundationWidth();
    out->X = location.X + ((fw << 7) - 128);
    out->Y = location.Y + ((fh << 7) - 128);
    out->Z = location.Z;
    return out;
}

CoordStruct* BuildingClass::GetAdjustedExitCoords(CoordStruct* out) const { return GetExitCoords(out, 0); }
CoordStruct* BuildingClass::GetFactoryPosition(CoordStruct* out) const { return GetExitCoords(out, 1); }
CoordStruct* BuildingClass::CalcExitCoords(CoordStruct* out, int dir) const { (void)dir; return GetExitCoords(out, 0); }
CoordStruct* BuildingClass::GetRallyPointCoord(CoordStruct* out) const { return GetExitCoords(out, 0); }

// IDA 0x4497c0: get build coords adjusted
CoordStruct* BuildingClass::GetBuildCoordsAdjusted(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

// IDA 0x44cd60: set rally point
void BuildingClass::SetRallyPoint(CoordStruct* target)
{
    if (target && Type)
        location = *target;
}

// IDA 0x4a9650: mark exit path cells
void BuildingClass::MarkExitPath()
{
    if (!Type) return;
    CellStruct cell = Coord2Cell(location);
    MarkCellOccupied(cell.X, cell.Y);
}

// IDA 0x44f590: check exit path is clear
bool BuildingClass::CheckExitPath()
{
    if (!Type) return false;
    return CheckBuildability();
}

void BuildingClass::RenderExitPosition() {}
void BuildingClass::ReassignFlagPosition() {}

// IDA 0x44f620: toggle primary factory status
bool BuildingClass::TogglePrimaryFactory()
{
    if (!Type || Type->Factory == AbstractType::None) return false;
    return !IsFactorySelectable();
}

// IDA 0x44f640: is factory selectable
bool BuildingClass::IsFactorySelectable()
{
    return Type != nullptr && Type->Factory != AbstractType::None && ProductionTimer <= 0;
}

// ============================================================
// Section 4: Mission Controllers
// ============================================================

int BuildingClass::Mission_Construction()
{
    return UpdateConstruction();
}

// IDA 0x459ec0: returns 6 (wait timer constant)
int BuildingClass::UpdateConstruction()
{
    if (missionStatus == 0) {
        if (BeingProduced && Type) missionStatus = 1;
        return 6;
    }
    if (missionStatus == 1) {
        queueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
    }
    return 6;
}

// IDA 0x44f2d0: selling mission
int BuildingClass::Mission_Selling()
{
    if (missionStatus == 0) { BeingProduced = false; missionStatus = 1; return 5; }
    if (missionStatus == 1) { CompleteSell(); }
    return 5;
}

int BuildingClass::Sell() { BeingProduced = false; CompleteSell(); return 5; }
void BuildingClass::CompleteSell() { Remove(); }

// IDA 0x4d9f70: process sell - create MCV/sell unit
void BuildingClass::ProcessSell()
{
    if (!Type) return;
    if (Type->UndeploysInto)
        SellUnit();
    else
        Remove();
}

// IDA 0x4494c0: can be sold check
bool BuildingClass::CanBeSold() { return ActuallyPlacedOnMap && Type != nullptr && ProductionTimer <= 0; }
bool BuildingClass::CanBeSoldCheck() { return CanBeSold(); }
void BuildingClass::ToggleSellMode() { Sell(); }

// IDA 0x5f5dd0: sell priority based on health ratio
int BuildingClass::GetSellPriority()
{
    double ratio = GetHealthRatio();
    return static_cast<int>(ratio * 100.0);
}

// IDA 0x44d2c0: sell effects at location
void BuildingClass::SellEffects()
{
    if (!Type) return;
    CoordStruct pos = location;
    pos.Z += 128;
    // Create sell animation and smoke
}

// IDA 0x4d9f70: sell unit - create MCV from undeployable building
void BuildingClass::SellUnit()
{
    if (!Type || !Type->UndeploysInto) return;
    CoordStruct exit_coords;
    GetExitCoords(&exit_coords, 0);
    // Create undeployed unit at exit coords
    Remove();
}

// IDA 0x701410: handle sell or repair from sidebar
void BuildingClass::HandleSellOrRepair()
{
    if (IsBeingRepaired) {
        // Toggle repair mode
        ToggleRepairMode();
    } else {
        Sell();
    }
}

// IDA 0x44f450: repair mission
int BuildingClass::Mission_Repair()
{
    if (IsBeingRepaired) {
        IsBeingRepaired = false; NeedsRepairs = false;
        queueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
    }
    return 20;
}

void BuildingClass::ProcessRepair() {}

// IDA 0x44f480: can repair - health below max
bool BuildingClass::CanRepair() { return Type && health < static_cast<int>(Type->Strength); }
void BuildingClass::ToggleRepairMode() { IsBeingRepaired = !IsBeingRepaired; }

// IDA 0x452630: check health below threshold for repair
bool BuildingClass::CheckHealthForRepair() { return CanRepair(); }

// IDA 0x7105e0: check if being repaired or captured
bool BuildingClass::IsBeingRepairedOrCaptured() { return IsBeingRepaired || HasBeenCaptured; }

// IDA 0x459ed0: missile building mission
int BuildingClass::Mission_Missile()
{
    queueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
    return 10;
}

void BuildingClass::ProcessSuperWeaponEffects() {}

// IDA 0x457630/0x457690: check SuperWeaponType availability from Type
bool BuildingClass::SWAvailable() {
    if (!Type) return false;
    return Type->SuperWeapon != -1;
}
bool BuildingClass::SW2Available() {
    if (!Type) return false;
    return Type->SuperWeapon2 != -1;
}

// IDA 0x505310: find building by SuperWeapon type
BuildingClass* BuildingClass::FindBySWType(int sw_type)
{
    // Iterate all buildings to find one with matching SuperWeapon
    for (int i = 0; i < 0x1000; ++i) {
        BuildingClass* bld = reinterpret_cast<BuildingClass*>(0x812000 + i * sizeof(BuildingClass));
        if (bld && bld->Type && (bld->Type->SuperWeapon == sw_type || bld->Type->SuperWeapon2 == sw_type))
            return bld;
    }
    return nullptr;
}

void BuildingClass::ClearSuperWeaponAnim() {}
void BuildingClass::UpdatePrism() {}
void BuildingClass::Disappear_PrismForward() {}

// IDA 0x43c2d0: main mission controller (handles production, sell, repair, etc.)
int BuildingClass::MissionController()
{
    if (BeingProduced) return Mission_Construction();
    if (IsBeingRepaired) return Mission_Repair();
    return Mission_Guard();
}

int BuildingClass::ProcessMission() { return MissionController(); }

// IDA 0x459e70: guard mission - constant wait timer
int BuildingClass::Mission_Guard() { return 1824; }
int BuildingClass::Mission_Attack() { return 0; }
int BuildingClass::Mission_Move() { return 0; }
int BuildingClass::Mission_Enter() { return 0; }
int BuildingClass::Mission_Capture() { return 0; }
int BuildingClass::Mission_Harvest() { return 0; }
int BuildingClass::Mission_Deploy() { return 0; }

// IDA 0x450010: check if mission is guard
bool BuildingClass::CheckMissionGuard() { return missionStatus == 0; }
bool BuildingClass::CheckMissionAttack() { return missionStatus == 1; }

// ============================================================
// Section 5: Power
// ============================================================

// IDA 0x454260: per-frame power drain accounting
void BuildingClass::PowerDrainUpdate()
{
    if (!Type || !HasPower) return;
    if (Type->PowerDrain > 0)
        GetOwnerHouse()->powerDrain -= Type->PowerDrain;
    if (HasExtraPowerDrain)
        GetOwnerHouse()->powerDrain -= 100;
}

// IDA 0x44e7b0: base power + bonus, health-scaled
int BuildingClass::GetPowerOutput()
{
    if (!Type || !HasPower) return 0;
    int power = Type->PowerOutput;
    if (IsOverpowered) power += 200;
    if (HasExtraPowerBonus) power += 100;
    if (health < static_cast<int>(Type->Strength))
        power = (power * health) / static_cast<int>(Type->Strength);
    return power;
}

// IDA 0x44e880: base drain + overpower drain
int BuildingClass::GetPowerDrain()
{
    if (!Type || !HasPower) return 0;
    int drain = Type->PowerDrain;
    if (HasExtraPowerDrain) drain += 100;
    return drain;
}

void BuildingClass::PowerUpdate() {}
int BuildingClass::UpdatePowerDrain() { PowerDrainUpdate(); return 0; }

// IDA 0x4525f0: check if powered on
bool BuildingClass::IsPoweredOn()
{
    if (!Type || !Type->Powered) return true;
    return HasPower;
}

// IDA 0x452600: check if powered and active
bool BuildingClass::IsPoweredActive() { return HasPower; }

// IDA 0x4a51b0: check power flags
bool BuildingClass::CheckPowerFlags()
{
    if (!HasPower) return false;
    if (IsOverpowered) return false;
    return true;
}

// IDA 0x4a5130: check flag 24
bool BuildingClass::CheckFlag24()
{
    return HasPower && !IsOverpowered;
}

void BuildingClass::PowerOff() { HasPower = false; }
void BuildingClass::TogglePower() { HasPower = !HasPower; }
void BuildingClass::TogglePower2() { TogglePower(); }
void BuildingClass::EnableTogglePower() { StuffEnabled = true; }
void BuildingClass::EnableStuff() { StuffEnabled = true; }
void BuildingClass::ProcessPowerPlantEffect() {}
void BuildingClass::ProcessActiveUpdate() {}
void BuildingClass::UpdatePowerAnimation() {}
void BuildingClass::UpdatePowerAnim() { UpdatePowerAnimation(); }

// IDA 0x4566b0: get power frame (0=off, 1=on)
int BuildingClass::GetPowerFrame() { return HasPower ? 1 : 0; }

// ============================================================
// Section 6: Production
// ============================================================

// IDA 0x447780: start production of type_index
int BuildingClass::StartProduction(int type_index)
{
    if (ProductionTimer > 0) return -1;
    ProductionTimer = type_index;
    return 0;
}

// IDA 0x447ab0: update production timer
void BuildingClass::UpdateProduction()
{
    if (ProductionTimer <= 0) return;
    ProductionAccum += ProductionRate;
    if (ProductionAccum >= ProductionSpeed) {
        ProductionAccum = 0;
        CompleteProduction();
    }
}

// IDA 0x639740: complete production
void BuildingClass::CompleteProduction()
{
    if (ProductionTimer <= 0) return;
    int type_idx = ProductionTimer;
    ProductionTimer = 0;
    // Create produced object
    // ProductionCompletionCallback(this); // TODO: cross-TU call, needs refactor
}

void BuildingClass::ProductionDisplayUpdate() {}
void BuildingClass::DisplayProductionFrame() {}

// IDA 0x4513d0: check if production is active
bool BuildingClass::ProductionCheck()
{
    if (!Type) return false;
    if (SecretProduction && BeingProduced) return false;
    return ProductionTimer > 0;
}

// IDA 0x4478b0: abandon current production
void BuildingClass::AbandonProduction() { ProductionTimer = 0; /* Accumulators_Reset() */ return; }

// IDA 0x452670: check if can accept production type
bool BuildingClass::CanAcceptType(int type_idx)
{
    if (!Type) return false;
    if (ProductionTimer > 0) return false;
    if (BeingProduced) return false;
    return true;
}

void BuildingClass::AddToProductionQueue(int) {}

// IDA 0x6395b0: set production with full initialization
void BuildingClass::SetProduction(int type_index)
{
    ProductionTimer = type_index;
    ProductionAccum = 0;
    ProductionFrame = 0;
}

int BuildingClass::GetProductionFrame() const { return ProductionFrame; }
void BuildingClass::DrawFactoryProduction(Point2D*, RectangleStruct*, int) const {}

// ============================================================
// Section 7: Capture / Occupancy
// ============================================================

// IDA 0x43d200: process capture attempt
int BuildingClass::ProcessCapture() { return 0; }

// IDA 0x44c960: capture this building
void BuildingClass::CaptureBuilding() { HasBeenCaptured = true; }
void BuildingClass::Capture() { CaptureBuilding(); }

// IDA 0x4521c0: disable temporal effect
void BuildingClass::DisableTemporal()
{
    BuildingClass_field_bool_6E9 = false;
}

// IDA 0x43d230: infiltrate building
void BuildingClass::Infiltrate()
{
    BuildingClass_field_bool_6E2 = true;
}

void BuildingClass::ProcessStructureAbandoned() {}
void BuildingClass::ProcessEnterUnit() {}
void BuildingClass::ProcessOccupancy() {}

// IDA 0x63be10: check if idle with no captives
bool BuildingClass::IsIdleWithNoCaptives()
{
    return !IsBeingRepaired && !HasBeenCaptured && !C4Applied;
}

// IDA 0x44eb10: get crew count from type
int BuildingClass::GetCrew()
{
    if (!Type) return 0;
    return Type->CrewCount;
}

// IDA 0x451330: get crew count
int BuildingClass::GetCrewCount()
{
    return GetCrew();
}

// IDA 0x44eb50: eject crew units
void BuildingClass::EjectCrew()
{
    if (NoCrew || !Type || Type->CrewCount <= 0) return;
    CoordStruct exit_coords;
    GetExitCoords(&exit_coords, 0);
    for (int i = 0; i < Type->CrewCount; ++i) {
        // Create crew infantry at exit coords
    }
}

void BuildingClass::CleanupOccupation() {}
void BuildingClass::AddOccupancy() {}
void BuildingClass::ClearOccupancyData() {}
void BuildingClass::RebuildOccupancyTracking() {}
void BuildingClass::RebuildOccupancyTracking2() { RebuildOccupancyTracking(); }
void BuildingClass::RebuildOccupancy2() { RebuildOccupancyTracking(); }
void BuildingClass::InitBuildLimit() {}

// IDA 0x6b0d60: refresh occupier cache
void BuildingClass::RefreshOccupierCache()
{
    if (!Type) return;
    CellStruct cell = Coord2Cell(location);
    MarkCellOccupied(cell.X, cell.Y);
}

void BuildingClass::ClearFactoryData() {}

// IDA 0x722390: free upgrade queue
void BuildingClass::FreeUpgradeQueue()
{
    for (int i = 0; i < 3; ++i) {
        if (Upgrades[i]) {
            Upgrades[i] = nullptr;
        }
    }
}
void BuildingClass::FreeUpgradeQueue2() { FreeUpgradeQueue(); }

// IDA 0x7013e0: check if building has occupants
bool BuildingClass::CheckOccupantState()
{
    return Occupants.GetSize() > 0 || Overpowerers.GetSize() > 0;
}

// ============================================================
// Section 8: Combat / Targeting
// ============================================================

void BuildingClass::ProcessAttack() {}
void BuildingClass::AimTurret() {}
void BuildingClass::CalculateTurretAngle() {}

// IDA 0x445e50: get facing direction to target
int BuildingClass::GetFacingToTarget()
{
    if (!target) return 0;
    CoordStruct tgtPos;
    target->GetCoords(&tgtPos);
    int dx = tgtPos.X - location.X;
    int dy = tgtPos.Y - location.Y;
    int dir = static_cast<int>(std::atan2(static_cast<double>(dy), static_cast<double>(dx)) * 128.0 / 3.14159265358979323846);
    return dir & 0xFF;
}

// IDA 0x44d7d0: get target facing (delegates to GetFacingToTarget)
int BuildingClass::GetTargetFacing() { return GetFacingToTarget(); }
void BuildingClass::FireLaser() {}

// IDA 0x44d700: get ammo count scaled
int BuildingClass::GetAmmoCountScaled()
{
    if (!Type || Type->Ammo <= 0) return 0;
    return (ammo * 100) / Type->Ammo;
}

// IDA 0x44d780: get fire error
int BuildingClass::GetFireError() { return static_cast<int>(TechnoClass::GetFireError(nullptr, 0, false)); }
void BuildingClass::AcquireTarget() {}

// IDA 0x445f00: select target type flags
int BuildingClass::SelectTargetTypeFlags()
{
    if (!Type) return 0;
    return static_cast<int>(Type->TargetFlags);
}

int BuildingClass::DistanceToTarget() { return 0; }
void BuildingClass::CalcBarrelFlashPosition() {}
void BuildingClass::BuildTurretTransform() {}

// ============================================================
// Section 9: Bridge
// ============================================================

bool BuildingClass::DemolishBridgeCheck() { return false; }
void BuildingClass::FindBridgeSegment() {}
void BuildingClass::DemolishBridge() {}
void BuildingClass::DemolishBridgeAnim() {}
void BuildingClass::TraverseBridgeSegments() {}
void BuildingClass::FindBridgeCell() {}
bool BuildingClass::CheckBridge() { return false; }

// IDA 0x4576f0: destroy building on bridge collapse
void BuildingClass::DestroyOnBridgeCollapse()
{
    if (!Type || !Type->BridgeRepairHut) return;
    Remove();
}

CoordStruct* BuildingClass::GetBridgeAwareCoords(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

// ============================================================
// Section 10: Deploy
// ============================================================

// IDA 0x44ced0: deploy building
int BuildingClass::Deploy()
{
    if (!Type) return 0;
    if (!Type->UndeploysInto) return 0;
    // Start undeploy animation, create unit
    return 0;
}

// IDA 0x465d40: check if 1x1 and undeployable
bool BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable()
{
    if (!Type) return false;
    return Type->UndeploysInto != nullptr;
}

void BuildingClass::UpdateMovingPosition() {}
void BuildingClass::UpdateFloatPosition() {}
void BuildingClass::AdjustHeight() {}

// ============================================================
// Section 11: Animation
// ============================================================

void BuildingClass::PlayAnim(int anim_index, int anim_type, int frame_count)
{
    if (anim_index < 0 || anim_index >= 0x15 || !Type) return;
    // Spawn animation at building location
    CoordStruct animPos = location;
    animPos.Z += 128;
    // Anims[anim_index] = new AnimClass(Type->GetAnimType(anim_type), animPos, ...);
}

void BuildingClass::StopAnim(int anim_index)
{
    if (anim_index >= 0 && anim_index < 0x15)
        Anims[anim_index] = nullptr;
}

void BuildingClass::ClearAnims()
{
    for (int i = 0; i < 0x15; ++i) StopAnim(i);
}

void BuildingClass::ProcessActiveAnimation() {}
void BuildingClass::UpdateAnimFrames() {}
void BuildingClass::ProcessAnimationStates() {}
void BuildingClass::UpdateIdleAnims() {}
void BuildingClass::UpdateAnimationSlots() {}
void BuildingClass::ProcessDamageAnim() {}
void BuildingClass::UpdateDamageAnim() { ProcessDamageAnim(); }
void BuildingClass::CreateIdleAnim() {}

// IDA 0x451750: play upgrade animation
void BuildingClass::PlayUpgradeAnim()
{
    if (!Type) return;
    if (UpgradeLevel > 0) {
        // Play upgrade level animation
    }
}

// IDA 0x451f60: sync crate visual state
void BuildingClass::SyncCrateVisuals()
{
    if (!Type) return;
    if (Type->CrateGoodies) {
        // Show crate overlay
    }
}

void BuildingClass::MarkUpgradeComponentUsed() {}

// IDA 0x629720: animation controller
void BuildingClass::AnimController()
{
    // Update building animations based on state
}

// ============================================================
// Section 12: Cloak / Visibility
// ============================================================

void BuildingClass::UpdateCloak() {}

// IDA 0x457c90: iron curtain effect
int BuildingClass::IronCurtain()
{
    if (!Type) return 0;
    // Apply iron curtain invulnerability
    return 1;
}

// IDA 0x6f9e10: check if invisible
bool BuildingClass::IsInvisible() { return HasCloakingData != 0; }

void BuildingClass::AnnounceReady() {}

// IDA 0x456580: update reveal field around building
void BuildingClass::UpdateRevealField()
{
    if (!Type || Type->Sight <= 0) return;
    // Reveal shroud around building based on Sight range
    RevealShroud(Type->Sight);
}

// IDA 0x4565e0: update gap generator field
void BuildingClass::UpdateGapGeneratorField()
{
    if (!Type || !Type->GapGenerator) return;
    isGeneratingGap = true;
}

// IDA 0x456640: update detection field
void BuildingClass::UpdateDetectionField()
{
    if (Type && Type->SensorArray) {
        // Activate sensor detection
    }
}

bool BuildingClass::IsCellVisibleToPlayer(int cell_x, int cell_y)
{
    (void)cell_x; (void)cell_y;
    return true;
}

void BuildingClass::CreateFoggedObjects() {}
void BuildingClass::RevealShroud(int radius) { (void)radius; }
void BuildingClass::RemoveShroud() {}
void BuildingClass::ProcessFogCellOccupancy() {}

// IDA 0x655740: remove gap cell coverage
void BuildingClass::RemoveGapCellCoverage()
{
    if (!Type || !Type->GapGenerator) return;
    isGeneratingGap = false;
}

// ============================================================
// Section 13: Update
// ============================================================

void BuildingClass::Update()
{
    UpdatePowerAnimation();
    ProcessActiveUpdate();
}

// IDA 0x44e8f0: object expired notification
void BuildingClass::OnObjectExpired(ObjectClass* obj)
{
    if (C4AppliedBy == static_cast<InfantryClass*>(obj))
        C4AppliedBy = nullptr;
}

// IDA 0x4a5290: update timer with elapsed seconds
void BuildingClass::UpdateTimerWithElapsed()
{
    if (C4Timer.IsActive())
        C4Timer.Update();
    if (GateTimer.IsActive())
        GateTimer.Update();
}

// IDA 0x458db0: check if has active parameter
bool BuildingClass::HasActiveParam()
{
    if (BuildingClass_field_bool_6E9)
        return true;
    return TechnoClass::HasActiveParam();
}

// IDA 0x455da0: check special update flags
void BuildingClass::CheckSpecialUpdateFlags()
{
    if (!Type) return;
    if (Type->CloakGenerator && HasCloakingData == 0) {
        HasCloakingData = 1;
        CloakRadius = Type->CloakRadiusInCells;
    }
}

// ============================================================
// Section 14: Rendering
// ============================================================

// IDA 0x480110: calculate draw position
Point2D* BuildingClass::CalcDrawPos(Point2D* out) const
{
    if (!out) return out;
    if (!Type) {
        out->X = 30; out->Y = 15;
        return out;
    }
    // Calculate from location using isometric projection
    out->X = (location.X - location.Y) >> 8;
    out->Y = ((location.X + location.Y) >> 9) - (location.Z >> 8);
    return out;
}

void BuildingClass::Draw(Point2D* a, RectangleStruct* b) const { (void)a; (void)b; }
void BuildingClass::DrawVisible(Point2D* a, RectangleStruct* b) const { Draw(a, b); }
void BuildingClass::Draw_0(Point2D* a, RectangleStruct* b) const { Draw(a, b); }
void BuildingClass::DrawSelectionBox(Point2D*, RectangleStruct*) const {}
void BuildingClass::DrawSelectionBlip(Point2D*) const {}
void BuildingClass::DrawActionLines(Point2D*, RectangleStruct*) const {}
void BuildingClass::DrawDeployCircle(Point2D*) const {}
void BuildingClass::DrawFoundationChar(int, int, wchar_t) const {}
void BuildingClass::DrawFoundationChar2(int x, int y, wchar_t c) const { DrawFoundationChar(x, y, c); }
void BuildingClass::DrawHealthBar(Point2D*, RectangleStruct*) const {}
int BuildingClass::GetDrawColor() const { return 0; }
int BuildingClass::GetSHPFrame() const { return 0; }
int BuildingClass::DetermineVisualState() const { return 0; }
void BuildingClass::AddRectToDrawList(RectangleStruct*) const {}

// IDA 0x43e900: get Z draw offset
int BuildingClass::GetZDrawOffset() const
{
    if (!Type) return 0;
    return Type->Height * 256;
}

// IDA 0x449410: get bounding size extension
int BuildingClass::GetBoundingSizeExt() const
{
    if (!Type) return 0;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    return (fw > fh ? fw : fh) * 256;
}

// ============================================================
// Section 15: Health / Stats
// ============================================================

double BuildingClass::GetHealthRatio() const
{
    if (!Type || Type->Strength <= 0) return 0.0;
    return static_cast<double>(health) / static_cast<double>(Type->Strength);
}

// IDA 0x5f5cd0: check health below 50%
bool BuildingClass::IsHealthLow() { return GetHealthRatio() < 0.5; }

// ============================================================
// Section 16: Misc Getters/Setters
// ============================================================

// IDA 0x5f6500: squared distance to target
int BuildingClass::SquaredDistanceTo(CoordStruct* target) const
{
    if (!target) return 0;
    int dx = target->X - location.X;
    int dy = target->Y - location.Y;
    return dx * dx + dy * dy;
}

// IDA 0x5f5e80: save/load registration
void BuildingClass::SaveLoad_Register()
{
    // Register building save/load callbacks
}

// IDA 0x634310: copy type data for rendering
void BuildingClass::CopyTypeDataForRender()
{
    if (!Type) return;
    // Copy type SHP data for rendering
}

// IDA 0x705d20: get type pointer (duplicate of GetTypePtr at different address)
BuildingTypeClass* BuildingClass::GetType() { return Type; }

// IDA 0x705d10: set type
void BuildingClass::SetType(BuildingTypeClass* t) { Type = t; }

// IDA 0x459ee0: get type pointer
BuildingTypeClass* BuildingClass::GetTypePtr() { return Type; }

BuildingTypeClass* BuildingClass::GetType_Thunk() { return Type; }

// IDA 0x449a40: get owner house via vtable
HouseClass* BuildingClass::GetOwnerHouse()
{
    return reinterpret_cast<HouseClass*(__thiscall*)(TechnoClass*)>(*(void***)this + 135)(static_cast<TechnoClass*>(this));
}

// IDA 0x6347b0: get type entry index
int BuildingClass::GetTypeEntry()
{
    if (!Type) return -1;
    return Type->GetArrayIndex();
}

// IDA 0x459ed0: get type field at offset 60
int BuildingClass::GetTypeField60()
{
    if (!Type) return 0;
    return Type->BuildingTypeClass_field_60;
}

int BuildingClass::GetObjectData() { return 0; }

// IDA 0x455b90: get foundation width/height flags
int BuildingClass::GetFWFlags()
{
    if (!Type) return 0;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    return (fh << 16) | fw;
}

void BuildingClass::FlushScriptActions() {}
BuildingClass* BuildingClass::FindByCellHash(uint32_t) { return nullptr; }
void BuildingClass::LoadBuildingTypes() {}
void BuildingClass::ReadBuildingSettings() {}
void BuildingClass::ReadConstructionData() {}

// IDA 0x4527d0: check if has occupant audio
bool BuildingClass::HasOccupantAudio()
{
    return Occupants.GetSize() > 0;
}

int BuildingClass::SelectVocOrSfx() { return 0; }
void BuildingClass::UnloadUnits() {}
void BuildingClass::AnimateUnloadUnits() {}
void BuildingClass::SpawnParticles() {}
void BuildingClass::ApplyFoundationDamage() {}

// IDA 0x4ff980: decrement type counter
void BuildingClass::DecrementTypeCounter()
{
    if (!Type) return;
    Type->InstanceCount--;
}

// IDA 0x4ffa50: increment occupant type counter
void BuildingClass::IncrementOccupantTypeCounter()
{
    if (!Type) return;
    // InstanceCount removed in hpp rewrite - loop body removed
    (void)Occupants;
}

// IDA 0x459c00: check if mass selectable
bool BuildingClass::IsMassSelectable()
{
    if (!Type) return false;
    if (Type->UndeploysInto)
        return TechnoClass::CanMoveToCell();
    return true;
}

// IDA 0x6551c0: add upgrade to building
void BuildingClass::AddUpgrade(BuildingTypeClass* upgrade)
{
    if (!upgrade) return;
    for (int i = 0; i < 3; ++i) {
        if (!Upgrades[i]) { Upgrades[i] = upgrade; return; }
    }
}

// IDA 0x726400: process upgrade effects
void BuildingClass::ProcessUpgradeEffects()
{
    for (int i = 0; i < 3; ++i) {
        if (Upgrades[i]) {
            // Apply upgrade effects (power, armor, weapons)
        }
    }
}

// IDA 0x7265c0: execute triggers
void BuildingClass::ExecuteTriggers()
{
    if (!Type) return;
    if (Type->TriggerTag) {
        // Execute trigger sequence
    }
}

// IDA 0x459c20: process upgrade targeting
void BuildingClass::ProcessUpgradeTargeting()
{
    if (UpgradeLevel <= 0) return;
    // Adjust weapon range/targeting based on upgrades
}

void BuildingClass::ProcessSpreadEffect() {}
void BuildingClass::Unlimbo_UnitDeliveryFix() {}

// IDA 0x452170: set connected building mission
void BuildingClass::SetConnectedBuildingMission()
{
    if (!Type) return;
    if (Type->IsPowerPlant) {
        ProcessPowerPlantEffect();
    }
}

// IDA 0x4852d0: create destruction crater
void BuildingClass::CreateDestructionCrater()
{
    if (!Type) return;
    CellStruct cell = Coord2Cell(location);
    // Create crater at building cell
}

void BuildingClass::CreatePlacementCrater() {}
void BuildingClass::CreateCraterAtCell(int x, int y) { (void)x; (void)y; }
void BuildingClass::BeginCrumblingTimer() {}

// IDA 0x453d60: mark cell as occupied by building
void BuildingClass::MarkCellOccupied(int cell_x, int cell_y)
{
    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    for (int y = 0; y < fh; ++y) {
        for (int x = 0; x < fw; ++x) {
            // Mark map cell as occupied
        }
    }
}

// IDA 0x453dc0: clear cell occupation
void BuildingClass::ClearCellOccupied(int cell_x, int cell_y)
{
    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    for (int y = 0; y < fh; ++y) {
        for (int x = 0; x < fw; ++x) {
            // Clear map cell occupation
        }
    }
}

void BuildingClass::ScanCircleForTiberium() {}
void BuildingClass::UpdateTerrainEffect() {}

// IDA 0x483620: check if eligible for tiberium collection
bool BuildingClass::IsTiberiumCollectorEligible() { return Type && Type->Refinery; }

// IDA 0x483690: check if eligible for tiberium storage
bool BuildingClass::IsTiberiumSiloEligible() { return Type && Type->Storage > 0; }

void BuildingClass::UpdateBunker() {}
void BuildingClass::EmptyBunker() {}

// IDA 0x452540: make traversable after destruction
void BuildingClass::MakeTraversable()
{
    if (!Type) return;
    CellStruct cell = Coord2Cell(location);
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    for (int y = 0; y < fh; ++y) {
        for (int x = 0; x < fw; ++x) {
            ClearCellOccupied(cell.X + x, cell.Y + y);
        }
    }
}

void BuildingClass::RemoveLimpet() {}

// IDA 0x459db0: clear limpet check - returns terrain type table
void BuildingClass::ClearLimpetCheck()
{
    // Clear limpet attachment state
}

// IDA 0x487c10: check if C4 is active
bool BuildingClass::CheckC4Active() { return C4Applied; }

// IDA 0x424c90: set field at offset 95
void BuildingClass::SetField95(int v) { BuildingClass_field_bool_6E5 = (v != 0); }

// IDA 0x425260: set field at offset 8 (activates flag)
void BuildingClass::SetField8(int v) { BuildingClass_field_bool_6E9 = (v != 0); }

int BuildingClass::GetCursorAction() { return 0; }

// IDA 0x70f6e0: update threat bounds for AI
void BuildingClass::UpdateThreatBounds()
{
    if (!Type) return;
    // Update AI threat map with building's weapon range
}

bool BuildingClass::ValidatePath() { return true; }

// IDA 0x717890: set production slot
void BuildingClass::SetSlot(int slot)
{
    if (slot < 0 || slot >= 0x15) return;
    // Set production queue slot
}

uint32_t BuildingClass::GetField184() const { return BuildingClass_field_544; }
void BuildingClass::HandleClickEvent() {}
void BuildingClass::HandleRepairCursor() {}

// IDA 0x466000: create building instance
BuildingClass* BuildingClass::Create(BuildingTypeClass* type, CoordStruct* pos, HouseClass* owner)
{
    if (!type || !pos || !owner) return nullptr;
    BuildingClass* bld = AllocAndCtor();
    if (!bld) return nullptr;
    bld->Type = type;
    bld->location = *pos;
    bld->Construct();
    return bld;
}

// IDA 0x70bf50: allocate and construct building
BuildingClass* BuildingClass::AllocAndCtor()
{
    // TODO: BuildingClass is abstract — needs ~40 ObjectClass pure virtual stubs
    return nullptr;
}

// ============================================================
// Section 17: Trivial Stubs (vtable entries with fixed boolean return)
// ============================================================

// IDA: vtable entries that unconditionally return false (building doesn't use these)
bool BuildingClass::vt_entry_4E4()  { return false; }
bool BuildingClass::vt_entry_4D4()  { return false; }
bool BuildingClass::vt_entry_4D8()  { return false; }
bool BuildingClass::vt_entry_504()  { return false; }
bool BuildingClass::StubReturnFalse()   { return false; }
bool BuildingClass::StubReturnFalse3()  { return false; }
bool BuildingClass::StubReturnFalse4()  { return false; }
bool BuildingClass::StubReturnFalse10() { return false; }
bool BuildingClass::StubReturnFalse11() { return false; }
bool BuildingClass::StubReturnFalse12() { return false; }
bool BuildingClass::StubReturnFalse13() { return false; }
bool BuildingClass::StubReturnFalse14() { return false; }
int  BuildingClass::MissionStubReturnZero()  { return 0; }
int  BuildingClass::MissionStubReturnZero2() { return 0; }
int  BuildingClass::MissionStubReturnZero3() { return 0; }
int  BuildingClass::MissionStubReturnZero5() { return 0; }
int  BuildingClass::MissionStubReturnZero6() { return 0; }

void BuildingClass::sub_465D70()  {}
void BuildingClass::sub_570DDC0() {}
void BuildingClass::sub_459FF0()  {}
void BuildingClass::sub_45A020()  {}
void BuildingClass::sub_5487110() {}
void BuildingClass::sub_5487130() {}
void BuildingClass::sub_5487170() {}
void BuildingClass::sub_5487180() {}
void BuildingClass::sub_54AA290() {}
void BuildingClass::sub_54F9750() {}
void BuildingClass::sub_55AEAD0() {}
void BuildingClass::sub_55AEAF0() {}
void BuildingClass::sub_55AEB20() {}
void BuildingClass::sub_563D540() {}
void BuildingClass::sub_5712130() {}

// IDA 0x45a610: find in pointer array
void* BuildingClass::FindInPointerArray(void* ptr)
{
    (void)ptr;
    return nullptr;
}

bool BuildingClass::isGeneratingGap = false;
void BuildingClass::DestroyGap() { isGeneratingGap = false; }

} // namespace gamemd

#include "structure/building.hpp"

namespace gamemd {

// --- BuildingClass ---

HRESULT __stdcall BuildingClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall BuildingClass::whatAmI() const { return kObjectTypeId; }
int BuildingClass::objectSize() const { return sizeof(BuildingClass); }
void BuildingClass::onBuildingPlacement(uint32_t dwUnk, uint32_t dwUnk2) {}
CellStruct* BuildingClass::getFoundationCell(CellStruct* pCellStruct, uint32_t dwUnk, uint32_t dwUnk2) const { return nullptr; }
int BuildingClass::canPlaceHere(ObjectClass* pObj) const { return 0; }
void BuildingClass::UpdateConstructionOptions() {}
void BuildingClass::onProductionComplete(uint32_t dwUnk, uint32_t dwUnk2) {}
void BuildingClass::processSuperWeapon(uint32_t dwUnk, uint32_t dwUnk2, uint32_t dwUnk3, uint32_t dwUnk4) {}
void BuildingClass::SensorArrayActivate(CellStruct cell) {}
void BuildingClass::SensorArrayDeactivate(CellStruct cell) {}
void BuildingClass::DisguiseDetectorActivate(CellStruct cell) {}
void BuildingClass::DisguiseDetectorDeactivate(CellStruct cell) {}
Point2D BuildingClass::CalcDrawPos() const { Point2D buf; CalcDrawPos(&buf); return buf; }
ra2::game::LightConvertClass* BuildingClass::GetRemapColour() const { return nullptr; }
int BuildingClass::AssignTarget_SyncLog() { return 0; }

} // namespace gamemd
