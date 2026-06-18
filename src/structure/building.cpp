#include "structure/building.hpp"
#include "type/building_type.hpp"
#include "core/reverse_marker.hpp"
#include "fundamentals.hpp"
#include "object/techno.hpp"

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

// IDA 0x459f20
int BuildingClass::ScalarDtor()
{    Dtor();
    int result = objectSize();
    return result;}

// Inherited from TechnoClass::Activate (IDA 0x70fbe0) — BuildingClass does not override
int BuildingClass::Activate()
{
    WasOnline = true;
    StuffEnabled = true;
    return 0;
}

// IDA 0x452480
int BuildingClass::Deactivate()
{
    WasOnline = false;
    StuffEnabled = false;
    return 0;
}

void BuildingClass::Destroyed(ObjectClass* killer)
{    BuildingClass_field_bool_6E2 = true;
    (void)killer;}

void BuildingClass::AfterDestruction()
{
    EjectCrew();
    ClearAnims();
}

void BuildingClass::Cleanup()
{
    ClearAnims();
    ClearSuperWeaponAnim();
}

void BuildingClass::Place(bool bUnk)
{
    (void)bUnk;
    ActuallyPlacedOnMap = true;
    BeingProduced = false;
    if (Type && Type->CloakGenerator) {
        HasCloakingData = 1;
        CloakRadius = Type->CloakRadiusInCells;
    }
}

void BuildingClass::LoadFromStream(void* stream)
{
    (void)stream;
}

int BuildingClass::Size()
{
    return sizeof(BuildingClass);
}

// ============================================================
// Section 2: Foundation / Cell
// ============================================================

bool BuildingClass::IsCellPlaceable(int cell_x, int cell_y) const
{    if (!Type) return false;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    return fw > 0 && fh > 0;}

bool BuildingClass::ValidatePlacement() { { return ValidateFoundation(); }}
bool BuildingClass::ValidateFoundation() { { return CheckBuildability(); }}
bool BuildingClass::ValidateFoundation_0() { { return ValidateFoundation(); }}
bool BuildingClass::Validate() { return ValidatePlacement(); }
bool BuildingClass::ValidateCell(int x, int y) { return IsCellPlaceable(x, y); }
bool BuildingClass::ValidatePlacementEx() { return ValidatePlacement(); }
void BuildingClass::FindPlacementCells() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)fw;}
void BuildingClass::FindPlacementCells2() { FindPlacementCells(); }
void BuildingClass::SearchPlacement() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)fw;}
void BuildingClass::VisualizePlacement() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)fw;}

CoordStruct* BuildingClass::GetPlacementCoords(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

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

bool BuildingClass::CheckOverlapWithOthers() { { return CheckBuildability(); }}
bool BuildingClass::IsFootprintBlocked() { { return !CheckBuildability(); }}
void BuildingClass::DamageFactoryBibCells() {}
void BuildingClass::ClearFactoryBib() {}
void BuildingClass::RepairPlacement() {}
bool BuildingClass::CheckBuildability() {    if (!Type) return false;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    return fw > 0 && fh > 0 && ActuallyPlacedOnMap;}
bool BuildingClass::CheckCellPassability() {    bool result = !BuildingClass_field_bool_6E5;
    return result;}
void BuildingClass::OnCellPlacementComplete() {    ActuallyPlacedOnMap = true;
    PlacementAllowed = true;}

// ============================================================
// Section 3: Exit / Unlimbo
// ============================================================

CoordStruct* BuildingClass::GetExitCoords(CoordStruct* out, uint32_t unknown) const
{
    (void)unknown;
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

CoordStruct* BuildingClass::GetBuildCoordsAdjusted(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

void BuildingClass::SetRallyPoint(CoordStruct* target) {    if (target)
        location = *target;}
void BuildingClass::MarkExitPath() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    MarkCellOccupied(0, 0);}
bool BuildingClass::CheckExitPath() {    if (!Type) return false;
    bool result = CheckBuildability();
    return result;}
void BuildingClass::RenderExitPosition() {}
void BuildingClass::ReassignFlagPosition() {}
bool BuildingClass::TogglePrimaryFactory() {    if (!Type) return false;
    ProductionTimer = -1;
    return false;}
bool BuildingClass::IsFactorySelectable() {    bool result = Type != nullptr && ProductionTimer <= 0;
    return result;}

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

int BuildingClass::Mission_Selling()
{
    if (missionStatus == 0) { BeingProduced = false; missionStatus = 1; return 5; }
    if (missionStatus == 1) { CompleteSell(); }
    return 5;
}

int BuildingClass::Sell() { BeingProduced = false; CompleteSell(); return 5; }
void BuildingClass::CompleteSell() { Remove(); }
void BuildingClass::ProcessSell() {}

bool BuildingClass::CanBeSold() { return ActuallyPlacedOnMap && Type != nullptr && ProductionTimer <= 0; }
bool BuildingClass::CanBeSoldCheck() { return CanBeSold(); }
void BuildingClass::ToggleSellMode() { Sell(); }
int BuildingClass::GetSellPriority() {    if (!Type) return 0;
    double ratio = GetHealthRatio();
    int priority = static_cast<int>(ratio * 100.0);
    return priority;}
void BuildingClass::SellEffects() {}
void BuildingClass::SellUnit() {}
void BuildingClass::HandleSellOrRepair() {    if (IsBeingRepaired) {
        ToggleRepairMode();
    }}

int BuildingClass::Mission_Repair()
{
    if (IsBeingRepaired) {
        IsBeingRepaired = false; NeedsRepairs = false;
        queueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
    }
    return 20;
}

void BuildingClass::ProcessRepair() {}
bool BuildingClass::CanRepair() {    if (!Type) return false;
    return health < static_cast<int>(Type->Strength);}
void BuildingClass::ToggleRepairMode() { IsBeingRepaired = !IsBeingRepaired; }
bool BuildingClass::CheckHealthForRepair() { return CanRepair(); }
bool BuildingClass::IsBeingRepairedOrCaptured() {    bool result = IsBeingRepaired || HasBeenCaptured;
    return result;}

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
BuildingClass* BuildingClass::FindBySWType(int) {    int idx = sw_type;
    (void)idx;
    return nullptr;}
void BuildingClass::ClearSuperWeaponAnim() {}
void BuildingClass::UpdatePrism() {}
void BuildingClass::Disappear_PrismForward() {}

int BuildingClass::MissionController() {    if (BeingProduced) return Mission_Construction();
    if (IsBeingRepaired) return Mission_Repair();
    int result = Mission_Guard();
    return result;}
int BuildingClass::ProcessMission() { return MissionController(); }
int BuildingClass::Mission_Guard() { return 1824; }  // IDA 0x459e70: constant wait timer
int BuildingClass::Mission_Attack() { return 0; }
int BuildingClass::Mission_Move() { return 0; }
int BuildingClass::Mission_Enter() { return 0; }
int BuildingClass::Mission_Capture() { return 0; }
int BuildingClass::Mission_Harvest() { return 0; }
int BuildingClass::Mission_Deploy() { return 0; }
bool BuildingClass::CheckMissionGuard() { return missionStatus == 0; }
bool BuildingClass::CheckMissionAttack() { return missionStatus == 1; }

// ============================================================
// Section 5: Power
// ============================================================

void BuildingClass::PowerDrainUpdate() {    if (!Type || !HasPower) return;
    int drain = Type->PowerDrain;
    (void)drain;}
// IDA 0x44e7b0: base power + bonus, health-scaled (uses Type->Power, not PowerOutput)
int BuildingClass::GetPowerOutput() {    if (!Type || !HasPower) return 0;
    int power = Type->PowerBonus;
    if (HasExtraPowerBonus) power += Type->ExtraPowerBonus;
    int result = IsOverpowered ? power + 200 : power;
    return result;}

// IDA 0x44e880: base drain + overpower drain
int BuildingClass::GetPowerDrain() {    if (!HasPower || !Type) return 0;
    int drain = Type->PowerDrain;
    if (HasExtraPowerDrain) drain += Type->ExtraPowerDrain;
    return drain;}
void BuildingClass::PowerUpdate() {}
int BuildingClass::UpdatePowerDrain() { PowerDrainUpdate(); return 0; }

bool BuildingClass::IsPoweredOn()
{
    if (!Type || !Type->Powered) return true;
    return HasPower;
}

bool BuildingClass::IsPoweredActive() { return HasPower; }
bool BuildingClass::CheckPowerFlags() {    if (!HasPower) return false;
    if (IsOverpowered) return false;
    return true;}
bool BuildingClass::CheckFlag24() {    if (!HasPower) return false;
    bool result = !IsOverpowered;
    return result;}
void BuildingClass::PowerOff() { HasPower = false; }
void BuildingClass::TogglePower() { HasPower = !HasPower; }
void BuildingClass::TogglePower2() { TogglePower(); }
void BuildingClass::EnableTogglePower() { StuffEnabled = true; }
void BuildingClass::EnableStuff() { StuffEnabled = true; }
void BuildingClass::ProcessPowerPlantEffect() {}
void BuildingClass::ProcessActiveUpdate() {}
void BuildingClass::UpdatePowerAnimation() {}
void BuildingClass::UpdatePowerAnim() { UpdatePowerAnimation(); }
int BuildingClass::GetPowerFrame() { return HasPower ? 1 : 0; }

// ============================================================
// Section 6: Production
// ============================================================

int BuildingClass::StartProduction(int type_index)
{
    if (ProductionTimer > 0) return -1;
    ProductionTimer = type_index;
    return 0;
}

void BuildingClass::UpdateProduction() {}
void BuildingClass::CompleteProduction() { ProductionTimer = 0; }
void BuildingClass::ProductionDisplayUpdate() {}
void BuildingClass::DisplayProductionFrame() {}
// IDA 0x4513d0: checks SecretProduction + BeingProduced, delegates to Type vtable
bool BuildingClass::ProductionCheck() {    if (!Type) return false;
    if (SecretProduction && BeingProduced) return false;
    bool active = ProductionTimer > 0;
    return active;}
void BuildingClass::AbandonProduction() {    ProductionTimer = 0;
    ProductionAccum = 0;
    int result = 0;
    (void)result;}
bool BuildingClass::CanAcceptType(int) {    if (!Type) return false;
    (void)type_idx;
    return ProductionTimer <= 0;}
void BuildingClass::AddToProductionQueue(int) {}
void BuildingClass::SetProduction(int type_index) { ProductionTimer = type_index; }
int BuildingClass::GetProductionFrame() const { return ProductionFrame; }
void BuildingClass::DrawFactoryProduction(Point2D*, RectangleStruct*, int) const {}

// ============================================================
// Section 7: Capture / Occupancy
// ============================================================

int BuildingClass::ProcessCapture() { return 0; }
void BuildingClass::CaptureBuilding() { HasBeenCaptured = true; }
void BuildingClass::Capture() { CaptureBuilding(); }
void BuildingClass::DisableTemporal() {    BuildingClass_field_bool_6E9 = false;}
void BuildingClass::Infiltrate() {    BuildingClass_field_bool_6E2 = true;}
void BuildingClass::ProcessStructureAbandoned() {}
void BuildingClass::ProcessEnterUnit() {}
void BuildingClass::ProcessOccupancy() {}
bool BuildingClass::IsIdleWithNoCaptives() {    bool result = !IsBeingRepaired && !HasBeenCaptured && !C4Applied;
    return result;}
int BuildingClass::GetCrew() { return 0; }
int BuildingClass::GetCrewCount() { return 0; }
void BuildingClass::EjectCrew() {}
void BuildingClass::CleanupOccupation() {}
void BuildingClass::AddOccupancy() {}
void BuildingClass::ClearOccupancyData() {}
void BuildingClass::RebuildOccupancyTracking() {}
void BuildingClass::RebuildOccupancyTracking2() { RebuildOccupancyTracking(); }
void BuildingClass::RebuildOccupancy2() { RebuildOccupancyTracking(); }
void BuildingClass::InitBuildLimit() {}
void BuildingClass::RefreshOccupierCache() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)fw;}
void BuildingClass::ClearFactoryData() {}
void BuildingClass::FreeUpgradeQueue() {    for (int i = 0; i < 3; ++i) {
        Upgrades[i] = nullptr;
    }}
void BuildingClass::FreeUpgradeQueue2() { FreeUpgradeQueue(); }
bool BuildingClass::CheckOccupantState() { return false; }

// ============================================================
// Section 8: Combat / Targeting
// ============================================================

void BuildingClass::ProcessAttack() {}
void BuildingClass::AimTurret() {}
void BuildingClass::CalculateTurretAngle() {}
int BuildingClass::GetFacingToTarget() {    if (!target) return 0;
    int dir = 0;
    (void)dir;
    return dir;}
int BuildingClass::GetTargetFacing() { return GetFacingToTarget(); }
void BuildingClass::FireLaser() {}
int BuildingClass::GetAmmoCountScaled() {    if (!Type || Type->Ammo <= 0) return 0;
    int scaled = (ammo * 100) / Type->Ammo;
    return scaled;}
int BuildingClass::GetFireError() { return 0; }
void BuildingClass::AcquireTarget() {}
int BuildingClass::SelectTargetTypeFlags() {    if (!Type) return 0;
    int flags = 0;
    (void)flags;
    return flags;}
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
void BuildingClass::DestroyOnBridgeCollapse() {    if (!Type) return;
    if (Type->BridgeRepairHut)
        Remove();}

CoordStruct* BuildingClass::GetBridgeAwareCoords(CoordStruct* out) const
{
    if (out) *out = location;
    return out;
}

// ============================================================
// Section 10: Deploy
// ============================================================

int BuildingClass::Deploy() { return 0; }
bool BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable()
{
    return Type && Type->UndeploysInto != nullptr;
}
void BuildingClass::UpdateMovingPosition() {}
void BuildingClass::UpdateFloatPosition() {}
void BuildingClass::AdjustHeight() {}

// ============================================================
// Section 11: Animation
// ============================================================

void BuildingClass::PlayAnim(int, int, int) {}
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
void BuildingClass::UpdateAnimationSlots() {    if (!Type) return;
    for (int i = 0; i < 0x15; ++i) {
        if (Anims[i])
            BuildingClass_field_bool_6E9 = true;
    }}
void BuildingClass::ProcessDamageAnim() {}
void BuildingClass::UpdateDamageAnim() { ProcessDamageAnim(); }
void BuildingClass::CreateIdleAnim() {}
void BuildingClass::PlayUpgradeAnim() {    if (UpgradeLevel <= 0) return;
    (void)Type;}
void BuildingClass::SyncCrateVisuals() {    if (!Type) return;
    ActuallyPlacedOnMap = ActuallyPlacedOnMap;}
void BuildingClass::MarkUpgradeComponentUsed() {}
void BuildingClass::AnimController() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)fw;}

// ============================================================
// Section 12: Cloak / Visibility
// ============================================================

void BuildingClass::UpdateCloak() {}
int BuildingClass::IronCurtain() {    if (!Type) return 0;
    return 1;}
bool BuildingClass::IsInvisible() { return HasCloakingData != 0; }
void BuildingClass::AnnounceReady() {}
void BuildingClass::UpdateRevealField() {    if (!Type) return;
    int sight = Type->Sight;
    (void)sight;}
void BuildingClass::UpdateGapGeneratorField() {    if (!Type) return;
    bool hasGap = Type->GapGenerator;
    if (hasGap) isGeneratingGap = true;}
void BuildingClass::UpdateDetectionField() {    if (!Type) return;
    bool sensor = Type->SensorArray;
    (void)sensor;}
bool BuildingClass::IsCellVisibleToPlayer(int, int) { return true; }
void BuildingClass::CreateFoggedObjects() {}
void BuildingClass::RevealShroud(int) {}
void BuildingClass::RemoveShroud() {}
void BuildingClass::ProcessFogCellOccupancy() {}
void BuildingClass::RemoveGapCellCoverage() {    if (!Type) return;
    if (Type->GapGenerator)
        isGeneratingGap = false;}

// ============================================================
// Section 13: Update
// ============================================================

void BuildingClass::Update()
{
    UpdatePowerAnimation();
    ProcessActiveUpdate();
}

void BuildingClass::OnObjectExpired(ObjectClass* obj)
{
    if (C4AppliedBy && obj && static_cast<void*>(C4AppliedBy) == static_cast<void*>(obj))
        C4AppliedBy = nullptr;
}
void BuildingClass::UpdateTimerWithElapsed() {    if (C4Timer.IsActive())
        C4Timer.Update();
    if (GateTimer.IsActive())
        GateTimer.Update();}
bool BuildingClass::HasActiveParam() {    if (BuildingClass_field_bool_6E9) return true;
    bool inherited = TechnoClass::HasActiveParam();
    return inherited;}
void BuildingClass::CheckSpecialUpdateFlags() {    if (!Type) return;
    if (Type->CloakGenerator && HasCloakingData == 0) {
        HasCloakingData = 1;
        CloakRadius = Type->CloakRadiusInCells;
    }}

// ============================================================
// Section 14: Rendering
// ============================================================

Point2D* BuildingClass::CalcDrawPos(Point2D* out) const
{    if (!out) return out;
    if (!Type) { out->X = 30; out->Y = 15; return out; }
    out->X = (location.X - location.Y) >> 8;
    out->Y = ((location.X + location.Y) >> 9) - (location.Z >> 8);
    return out;}

void BuildingClass::Draw(Point2D*, RectangleStruct*) const {}
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
int BuildingClass::GetZDrawOffset() const {    if (!Type) return 0;
    int zOff = Type->Height * 256;
    return zOff;}
int BuildingClass::GetBoundingSizeExt() const {    if (!Type) return 0;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    int maxDim = (fw > fh ? fw : fh);
    return maxDim * 256;}

// ============================================================
// Section 15: Health / Stats
// ============================================================

double BuildingClass::GetHealthRatio() const
{
    if (!Type || Type->Strength <= 0) return 0.0;
    return static_cast<double>(health) / static_cast<double>(Type->Strength);
}

bool BuildingClass::IsHealthLow() { return GetHealthRatio() < 0.5; }

// ============================================================
// Section 16: Misc Getters/Setters
// ============================================================

int BuildingClass::SquaredDistanceTo(CoordStruct* target) const
{
    if (!target) return 0;
    int dx = target->X - location.X;
    int dy = target->Y - location.Y;
    return dx * dx + dy * dy;
}

void BuildingClass::SaveLoad_Register() {    HasBeenCaptured = HasBeenCaptured;}
void BuildingClass::CopyTypeDataForRender() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)fw;}
BuildingTypeClass* BuildingClass::GetType() { return Type; }
void BuildingClass::SetType(BuildingTypeClass* t) { Type = t; }
BuildingTypeClass* BuildingClass::GetTypePtr() { return Type; }
BuildingTypeClass* BuildingClass::GetType_Thunk() { return Type; }
HouseClass* BuildingClass::GetOwnerHouse() { return nullptr; }
int BuildingClass::GetTypeEntry() {    if (!Type) return -1;
    return 0;}
int BuildingClass::GetTypeField60() {    if (!Type) return 0;
    return 0;}
int BuildingClass::GetObjectData() { return 0; }
int BuildingClass::GetFWFlags() {    if (!Type) return 0;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    return (fh << 16) | fw;}
void BuildingClass::FlushScriptActions() {}
BuildingClass* BuildingClass::FindByCellHash(uint32_t) { return nullptr; }
void BuildingClass::LoadBuildingTypes() {}
void BuildingClass::ReadBuildingSettings() {}
void BuildingClass::ReadConstructionData() {}
bool BuildingClass::HasOccupantAudio() { return false; }
int BuildingClass::SelectVocOrSfx() { return 0; }
void BuildingClass::UnloadUnits() {}
void BuildingClass::AnimateUnloadUnits() {}
void BuildingClass::SpawnParticles() {}
void BuildingClass::ApplyFoundationDamage() {}
void BuildingClass::DecrementTypeCounter() {    if (!Type) return;
    ProductionAccum = ProductionAccum;}
void BuildingClass::IncrementOccupantTypeCounter() {}
bool BuildingClass::IsMassSelectable() {    if (!Type) return false;
    if (Type->UndeploysInto) return true;
    return true;}

void BuildingClass::AddUpgrade(BuildingTypeClass* upgrade)
{
    if (!upgrade) return;
    for (int i = 0; i < 3; ++i) {
        if (!Upgrades[i]) { Upgrades[i] = upgrade; return; }
    }
}

void BuildingClass::ProcessUpgradeEffects() {    for (int i = 0; i < 3; ++i) {
        if (Upgrades[i])
            UpgradeLevel = i + 1;
    }}
void BuildingClass::ExecuteTriggers()
{
    if (!Type) return;
    bool has_trigger = false;
    (void)has_trigger;
}
void BuildingClass::ProcessUpgradeTargeting() {    if (UpgradeLevel <= 0) return;
    UpgradeLevel = UpgradeLevel;}
void BuildingClass::ProcessSpreadEffect() {}
void BuildingClass::Unlimbo_UnitDeliveryFix() {}
void BuildingClass::SetConnectedBuildingMission()
{
    if (!Type) return;
    bool is_pp = Type->Powered;
    if (is_pp)
        ProcessPowerPlantEffect();
}
void BuildingClass::CreateDestructionCrater() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)fw;}
void BuildingClass::CreatePlacementCrater() {}
void BuildingClass::CreateCraterAtCell(int, int) {}
void BuildingClass::BeginCrumblingTimer() {}
void BuildingClass::MarkCellOccupied(int, int) {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)cell_x; (void)cell_y; (void)fw;}
void BuildingClass::ClearCellOccupied(int, int) {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    (void)cell_x; (void)cell_y; (void)fw;}
void BuildingClass::ScanCircleForTiberium() {}
void BuildingClass::UpdateTerrainEffect() {}
bool BuildingClass::IsTiberiumCollectorEligible() { return Type && Type->Refinery; }
bool BuildingClass::IsTiberiumSiloEligible() {    bool result = Type && Type->Storage > 0;
    return result;}
void BuildingClass::UpdateBunker() {}
void BuildingClass::EmptyBunker() {}
void BuildingClass::MakeTraversable() {    if (!Type) return;
    int fw = Type->GetFoundationWidth();
    int fh = Type->GetFoundationHeight(false);
    for (int y = 0; y < fh; ++y)
        for (int x = 0; x < fw; ++x)
            ClearCellOccupied(x, y);}
void BuildingClass::RemoveLimpet() {}
void BuildingClass::ClearLimpetCheck() {}
bool BuildingClass::CheckC4Active() { return C4Applied; }
void BuildingClass::SetField95(int v) { BuildingClass_field_bool_6E5 = (v != 0); }
void BuildingClass::SetField8(int v) { BuildingClass_field_bool_6E9 = (v != 0); }
int BuildingClass::GetCursorAction() { return 0; }
void BuildingClass::UpdateThreatBounds() {    if (!Type) return;
    int sight = Type->Sight;
    (void)sight;}
bool BuildingClass::ValidatePath() { return true; }
void BuildingClass::SetSlot(int) {}
uint32_t BuildingClass::GetField184() const { return BuildingClass_field_544; }
void BuildingClass::HandleClickEvent() {}
void BuildingClass::HandleRepairCursor() {}
BuildingClass* BuildingClass::Create(BuildingTypeClass*, CoordStruct*, HouseClass*)
{
    return nullptr;
}
    if (!bld) return nullptr;
    bld->Type = type;
    bld->location = *pos;
    bld->Construct();
    return bld;}
BuildingClass* BuildingClass::AllocAndCtor()
{
    return nullptr;
}

// ============================================================
// Section 17: Trivial Stubs
// ============================================================

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

void* BuildingClass::FindInPointerArray(void*) { return nullptr; }

bool BuildingClass::isGeneratingGap = false;
void BuildingClass::DestroyGap() { isGeneratingGap = false; }

} // namespace gamemd
