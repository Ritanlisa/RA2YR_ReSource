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
{
    Dtor();
    return 0;
}

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
{
    (void)killer;
}

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
{
    (void)cell_x; (void)cell_y;
    return true;
}

bool BuildingClass::ValidatePlacement() { return true; }
bool BuildingClass::ValidateFoundation() { return ValidatePlacement(); }
bool BuildingClass::ValidateFoundation_0() { return ValidateFoundation(); }
bool BuildingClass::Validate() { return ValidatePlacement(); }
bool BuildingClass::ValidateCell(int x, int y) { return IsCellPlaceable(x, y); }
bool BuildingClass::ValidatePlacementEx() { return ValidatePlacement(); }
void BuildingClass::FindPlacementCells() {}
void BuildingClass::FindPlacementCells2() { FindPlacementCells(); }
void BuildingClass::SearchPlacement() {}
void BuildingClass::VisualizePlacement() {}

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

bool BuildingClass::CheckOverlapWithOthers() { return false; }
bool BuildingClass::IsFootprintBlocked() { return false; }
void BuildingClass::DamageFactoryBibCells() {}
void BuildingClass::ClearFactoryBib() {}
void BuildingClass::RepairPlacement() {}
bool BuildingClass::CheckBuildability() { return true; }
bool BuildingClass::CheckCellPassability() { return true; }
void BuildingClass::OnCellPlacementComplete() {}

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

void BuildingClass::SetRallyPoint(CoordStruct* target) { (void)target; }
void BuildingClass::MarkExitPath() {}
bool BuildingClass::CheckExitPath() { return true; }
void BuildingClass::RenderExitPosition() {}
void BuildingClass::ReassignFlagPosition() {}
bool BuildingClass::TogglePrimaryFactory() { return false; }
bool BuildingClass::IsFactorySelectable() { return true; }

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
int BuildingClass::GetSellPriority() { return 0; }
void BuildingClass::SellEffects() {}
void BuildingClass::SellUnit() {}
void BuildingClass::HandleSellOrRepair() {}

int BuildingClass::Mission_Repair()
{
    if (IsBeingRepaired) {
        IsBeingRepaired = false; NeedsRepairs = false;
        queueMission(static_cast<ra2::game::Mission>(static_cast<int>(Mission::Guard)), true);
    }
    return 20;
}

void BuildingClass::ProcessRepair() {}
bool BuildingClass::CanRepair() { return health < (Type ? Type->Strength : 1000); }
void BuildingClass::ToggleRepairMode() { IsBeingRepaired = !IsBeingRepaired; }
bool BuildingClass::CheckHealthForRepair() { return CanRepair(); }
bool BuildingClass::IsBeingRepairedOrCaptured() { return IsBeingRepaired || HasBeenCaptured; }

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
BuildingClass* BuildingClass::FindBySWType(int) { return nullptr; }
void BuildingClass::ClearSuperWeaponAnim() {}
void BuildingClass::UpdatePrism() {}
void BuildingClass::Disappear_PrismForward() {}

int BuildingClass::MissionController() { return Mission_Construction(); }
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

void BuildingClass::PowerDrainUpdate() {}
// IDA 0x44e7b0: base power + bonus, health-scaled (uses Type->Power, not PowerOutput)
int BuildingClass::GetPowerOutput() {
    if (!Type || !HasPower) return 0;
    // IDA: int power = Type->Power; plus OverpowerBonus + upgrades + occupants
    return 0; // Requires BuildingTypeClass field mapping
}

// IDA 0x44e880: base drain + overpower drain
int BuildingClass::GetPowerDrain() {
    if (!HasPower || !Type) return 0;
    // IDA: int drain = Type->PowerDrain; plus OverpowerDrain + upgrades
    return 0; // Requires BuildingTypeClass field mapping
}
void BuildingClass::PowerUpdate() {}
int BuildingClass::UpdatePowerDrain() { PowerDrainUpdate(); return 0; }

bool BuildingClass::IsPoweredOn()
{
    if (!Type || !Type->Powered) return true;
    return HasPower;
}

bool BuildingClass::IsPoweredActive() { return HasPower; }
bool BuildingClass::CheckPowerFlags() { return HasPower; }
bool BuildingClass::CheckFlag24() { return BuildingClass_field_bool_6E9; }
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
bool BuildingClass::ProductionCheck() {
    if (SecretProduction && BeingProduced)
        return Type && /*Type->vtable[39]*/false;
    return Type && /*Type->vtable[48]*/false;
}
void BuildingClass::AbandonProduction() { ProductionTimer = 0; }
bool BuildingClass::CanAcceptType(int) { return true; }
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
void BuildingClass::DisableTemporal() {}
void BuildingClass::Infiltrate() {}
void BuildingClass::ProcessStructureAbandoned() {}
void BuildingClass::ProcessEnterUnit() {}
void BuildingClass::ProcessOccupancy() {}
bool BuildingClass::IsIdleWithNoCaptives() { return true; }
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
void BuildingClass::RefreshOccupierCache() {}
void BuildingClass::ClearFactoryData() {}
void BuildingClass::FreeUpgradeQueue() {}
void BuildingClass::FreeUpgradeQueue2() { FreeUpgradeQueue(); }
bool BuildingClass::CheckOccupantState() { return false; }

// ============================================================
// Section 8: Combat / Targeting
// ============================================================

void BuildingClass::ProcessAttack() {}
void BuildingClass::AimTurret() {}
void BuildingClass::CalculateTurretAngle() {}
int BuildingClass::GetFacingToTarget() { return 0; }
int BuildingClass::GetTargetFacing() { return GetFacingToTarget(); }
void BuildingClass::FireLaser() {}
int BuildingClass::GetAmmoCountScaled() { return 0; }
int BuildingClass::GetFireError() { return 0; }
void BuildingClass::AcquireTarget() {}
int BuildingClass::SelectTargetTypeFlags() { return 0; }
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
void BuildingClass::DestroyOnBridgeCollapse() {}

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
void BuildingClass::UpdateAnimationSlots() {}
void BuildingClass::ProcessDamageAnim() {}
void BuildingClass::UpdateDamageAnim() { ProcessDamageAnim(); }
void BuildingClass::CreateIdleAnim() {}
void BuildingClass::PlayUpgradeAnim() {}
void BuildingClass::SyncCrateVisuals() {}
void BuildingClass::MarkUpgradeComponentUsed() {}
void BuildingClass::AnimController() {}

// ============================================================
// Section 12: Cloak / Visibility
// ============================================================

void BuildingClass::UpdateCloak() {}
int BuildingClass::IronCurtain() { return 0; }
bool BuildingClass::IsInvisible() { return HasCloakingData != 0; }
void BuildingClass::AnnounceReady() {}
void BuildingClass::UpdateRevealField() {}
void BuildingClass::UpdateGapGeneratorField() {}
void BuildingClass::UpdateDetectionField() {}
bool BuildingClass::IsCellVisibleToPlayer(int, int) { return true; }
void BuildingClass::CreateFoggedObjects() {}
void BuildingClass::RevealShroud(int) {}
void BuildingClass::RemoveShroud() {}
void BuildingClass::ProcessFogCellOccupancy() {}
void BuildingClass::RemoveGapCellCoverage() {}

// ============================================================
// Section 13: Update
// ============================================================

void BuildingClass::Update()
{
    UpdatePowerAnimation();
    ProcessActiveUpdate();
}

void BuildingClass::OnObjectExpired(ObjectClass* obj) { (void)obj; }
void BuildingClass::UpdateTimerWithElapsed() {}
bool BuildingClass::HasActiveParam() { return StuffEnabled; }
void BuildingClass::CheckSpecialUpdateFlags() {}

// ============================================================
// Section 14: Rendering
// ============================================================

Point2D* BuildingClass::CalcDrawPos(Point2D* out) const
{
    if (out) { out->X = 30; out->Y = 15; }
    return out;
}

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
int BuildingClass::GetZDrawOffset() const { return 0; }
int BuildingClass::GetBoundingSizeExt() const { return 0; }

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

void BuildingClass::SaveLoad_Register() {}
void BuildingClass::CopyTypeDataForRender() {}
BuildingTypeClass* BuildingClass::GetType() { return Type; }
void BuildingClass::SetType(BuildingTypeClass* t) { Type = t; }
BuildingTypeClass* BuildingClass::GetTypePtr() { return Type; }
BuildingTypeClass* BuildingClass::GetType_Thunk() { return Type; }
HouseClass* BuildingClass::GetOwnerHouse() { return nullptr; }
int BuildingClass::GetTypeEntry() { return -1; }
int BuildingClass::GetTypeField60() { return 0; }
int BuildingClass::GetObjectData() { return 0; }
int BuildingClass::GetFWFlags() { return 0; }
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
void BuildingClass::DecrementTypeCounter() {}
void BuildingClass::IncrementOccupantTypeCounter() {}
bool BuildingClass::IsMassSelectable() { return true; }

void BuildingClass::AddUpgrade(BuildingTypeClass* upgrade)
{
    if (!upgrade) return;
    for (int i = 0; i < 3; ++i) {
        if (!Upgrades[i]) { Upgrades[i] = upgrade; return; }
    }
}

void BuildingClass::ProcessUpgradeEffects() {}
void BuildingClass::ExecuteTriggers() {}
void BuildingClass::ProcessUpgradeTargeting() {}
void BuildingClass::ProcessSpreadEffect() {}
void BuildingClass::Unlimbo_UnitDeliveryFix() {}
void BuildingClass::SetConnectedBuildingMission() {}
void BuildingClass::CreateDestructionCrater() {}
void BuildingClass::CreatePlacementCrater() {}
void BuildingClass::CreateCraterAtCell(int, int) {}
void BuildingClass::BeginCrumblingTimer() {}
void BuildingClass::MarkCellOccupied(int, int) {}
void BuildingClass::ClearCellOccupied(int, int) {}
void BuildingClass::ScanCircleForTiberium() {}
void BuildingClass::UpdateTerrainEffect() {}
bool BuildingClass::IsTiberiumCollectorEligible() { return Type && Type->Refinery; }
bool BuildingClass::IsTiberiumSiloEligible() { return false; }
void BuildingClass::UpdateBunker() {}
void BuildingClass::EmptyBunker() {}
void BuildingClass::MakeTraversable() {}
void BuildingClass::RemoveLimpet() {}
void BuildingClass::ClearLimpetCheck() {}
bool BuildingClass::CheckC4Active() { return C4Applied; }
void BuildingClass::SetField95(int v) { BuildingClass_field_bool_6E5 = (v != 0); }
void BuildingClass::SetField8(int v) { BuildingClass_field_bool_6E9 = (v != 0); }
int BuildingClass::GetCursorAction() { return 0; }
void BuildingClass::UpdateThreatBounds() {}
bool BuildingClass::ValidatePath() { return true; }
void BuildingClass::SetSlot(int) {}
uint32_t BuildingClass::GetField184() const { return BuildingClass_field_544; }
void BuildingClass::HandleClickEvent() {}
void BuildingClass::HandleRepairCursor() {}
BuildingClass* BuildingClass::Create(BuildingTypeClass*, CoordStruct*, HouseClass*) { return nullptr; }
BuildingClass* BuildingClass::AllocAndCtor() { return nullptr; /* IDA 0x70bf50 - uses allocator */ }

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
