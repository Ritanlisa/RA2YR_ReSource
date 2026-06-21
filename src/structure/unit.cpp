#include "structure/unit.hpp"

#include <cstring>
#include <cmath>

namespace gamemd {

namespace {

constexpr uint32_t kUnitFlag = (uint32_t)(AbstractFlags::Foot)
                              | (uint32_t)(AbstractFlags::Object)
                              | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x7353C0 -- UnitClass::Construct (960B)
UnitClass::UnitClass() noexcept
    : UnitClass_field_int_6C0((int)(-1))
    , Type(nullptr)
    , FollowerCar(nullptr)
    , FlagHouseIndex(-1)
    , HasFollowerCar(false)
    , Unloading(false)
    , UnitClass_field_bool_6D2(false)
    , TerrainPalette(false)
    , UnitClass_field_int_6D4((int)(-1))
    , DeathFrameCounter((int)(-1))
    , ElectricBolt(nullptr)
    , Deployed(false)
    , Deploying(false)
    , Undeploying(false)
    , NonPassengerCount(0)
{
    abstractFlags = kUnitFlag;
}

// ============================================================
// Phase 3: Harvest/Unload
// ============================================================

int UnitClass::Mission_Harvest()
{
    enum { LOOKING, HARVESTING, FINDHOME, HEADINGHOME, GOINGTOIDLE };

    switch (missionStatus)
    {
    case LOOKING:
        if (lastTarget)
        {
            movementDestination = lastTarget;
            lastTarget = nullptr;
        }
        return 10;

    case HARVESTING:
        return 10;

    case FINDHOME:
        return 10;

    case HEADINGHOME:
        queueMission((ra2::game::Mission)((int)(gamemd::Mission::Enter)), true);
        return 10;

    case GOINGTOIDLE:
        queueMission((ra2::game::Mission)((int)(gamemd::Mission::Guard)), true);
        return 10;
    }

    return 10;
}

int UnitClass::Mission_Unload()
{
    if (!HasFollowerCar)
        return 0;

    Unloading = true;
    return 5;
}

// IDA: 0x73D450 (ProcessResourceHarvesting, 477B)
int UnitClass::ProcessResourceHarvesting()
{
    // Process tiberium/ore harvesting at current cell
    if (!Type) return 0;

    // Check if harvester, check cell for ore
    // Transfer resources to load
    return 0;
}

// IDA: 0x4C2C10 (updateHarvesting, 19B)
int UnitClass::updateHarvesting()
{
    // Update harvesting state
    return 0;
}

// IDA: 0x6B4BE0 (UnloadPassengers, 136B)
int UnitClass::UnloadPassengers()
{
    // Unload all passengers at current position
    Unloading = false;
    HasFollowerCar = false;
    return 0;
}

// IDA: 0x6B7230 (ProcessExitQueue, 2363B)
int UnitClass::ProcessExitQueue()
{
    // Process building exit queue for unit production
    return 0;
}

// IDA: 0x6B6080 (CreateUnloadPlacementCraters, 167B)
int UnitClass::CreateUnloadPlacementCraters()
{
    // Binary: int __thiscall CreateUnloadPlacementCraters(CellStruct* cell)
    // Creates craters in a grid pattern at unload position.
    // Uses storedTiberium.Amount1 as column count, Amount2 as row count.
    // Uses hijackerInfantryType as crater type set on cells.

    int rowCount = *(int*)&this->storedTiberium.Amount2;
    if (rowCount <= 0)
        return 0;

    int colCount = *(int*)&this->storedTiberium.Amount1;
    int y = 0;
    do {
        for (int x = 0; x < colCount; x++) {
            // CellStruct cell = { (short)(x + cellParam->X), (short)(y + cellParam->Y) };
            // CellClass* cellObj = CellCoord::To_CellObj(&MapClass_Instance, &cell);
            // cellObj->field_48 = this->hijackerInfantryType;
            // cellObj->field_11F = (uint8_t)(x + (uint8_t)colCount * y);
            // BuildingClass::CreatePlacementCrater(cellObj);
        }
        y++;
    } while (y < rowCount);

    return y;
}

// IDA: 0x54E3B0 (GetExitCell, 288B)
int UnitClass::GetExitCell()
{
    // Get exit cell for unit leaving a building
    return 0;
}

// ============================================================
// Phase 3: Deploy
// ============================================================

// IDA: 0x7192F0 (Deploy, 2302B)
int UnitClass::Deploy()
{
    // MCV/Siege unit deploy logic
    if (!Type) return 0;

    Deploying = true;

    // Check if can deploy at current cell
    // Find the building type to deploy into
    // Start deploy animation/timer
    return 0;
}

// IDA: 0x738D30 (DeployToBuilding, 1652B)
int UnitClass::DeployToBuilding()
{
    // Deploy unit into a building (MCV -> Construction Yard)
    if (!Type) return 0;

    // Check building type from unit type
    // Create building at deploy position
    // Remove this unit
    Deployed = true;
    return 0;
}

// IDA: 0x739AC0 (SimpleDeployerDeploy, 516B)
int UnitClass::SimpleDeployerDeploy()
{
    // Simple deployer (like Siege Chopper deploy)
    Deploying = false;
    Deployed = true;
    return 0;
}

// IDA: 0x739CD0 (SimpleDeployerUndeploy, 494B)
int UnitClass::SimpleDeployerUndeploy()
{
    // Simple deployer undeploy
    Deployed = false;
    Undeploying = false;
    return 0;
}

// IDA: 0x737430 (MissionDispatch, 1826B)
int UnitClass::MissionDispatch()
{
    // Dispatch mission based on current state
    if (Deploying)
    {
        return Deploy();
    }

    if (Undeploying)
    {
        return SimpleDeployerUndeploy();
    }

    return 0;
}

// ============================================================
// Phase 3: Movement
// ============================================================

// IDA: 0x7359F0 (CalcMoveTarget, 1730B)
int UnitClass::CalcMoveTarget()
{
    // Calculate movement target for unit
    return 0;
}

// IDA: 0x741970 (AssignDestination_SyncLog, 6167B)
int UnitClass::AssignDestination_SyncLog()
{
    // Assign movement destination with network sync logging
    return 0;
}

// IDA: 0x7414E0 (ApproachTarget_DisallowMoving, 435B)
int UnitClass::ApproachTarget_DisallowMoving()
{
    // Approach target without moving (turret rotation only)
    return 0;
}

// IDA: 0x736990 (UpdateRotation_TurretFacing_EMP, 639B)
int UnitClass::UpdateRotation_TurretFacing_EMP()
{
    // Update turret rotation and facing
    return 0;
}

// IDA: 0x743A50 (Scatter, 1622B)
int UnitClass::Scatter()
{
    // Binary: int __thiscall Scatter(CellStruct* threatPos, bool a3, bool a4)
    // Scatters unit away from danger/threat position.

    // 1. canScatter() check via vtable[652/4=163]
    // if (!((bool(__thiscall*)(UnitClass*))this->vfptr_0[163])(this))
    //     return 0;

    // 2. Locomotor COM interface check
    // ILocomotion* loco = this->locomotor.ptr;
    // if (!loco) return 0;
    // COM: StreamClass::Set2 → GetClassID → compare with g_CLSID_HoverLocomotion
    // If Hover locomotion, skip scatter (return)

    // 3. Mission control check
    // Mission* mc = MissionClass::GetMissionControl(this);
    // if (mc[9] && !a3) return 0;

    // 4. Timer and flag checks
    // if (TimerClass::Active((int)((uint8_t*)this + 904))) return 0;
    // if (*(int*)((uint8_t*)this + 1444) && !a4) return 0;

    // 5. Deploy flags check
    if (this->Deployed || this->Deploying || this->Undeploying)
        return 0;

    // 6. Locomotor movement capability check
    // if (!loco->IsMoving()) return 0;

    // 7. Compute scatter direction from threat position
    // int curX = this->location.X;
    // int curY = this->location.Y;
    // int curZ = this->location.Z;

    // int threatX = threatPos->X; int threatY = threatPos->Y; int threatZ = threatPos->Z;
    // If threat matches current: use Pathfinding_Find to get safe cell
    // If mission control[7]: return
    // Special check: vtable[44]==1 && byte_1745 || offset_1444 check
    // offset_692 check with a3 for random abort

    // Compute angle away from threat:
    // double angle = Math::CalcAngle(threatY - curY, curX - threatX);
    // int dir = Math::RoundToInt((angle - 1.5708) * -10430.06);
    // int scatterDir = (Random::Range(0, 2) + ((dir >> 12) + 1) / 2 - 1) & 7;

    // 8. Get current cell, scan 8 directions for safe cell
    // CellClass* curCell = CellCoord::To_CellObj(&MapClass_Instance, &curCellCoord);
    // int extraStep = curCell->field_283 + vtable[188] ? 4 : 0;
    // Loop 8 directions using Direction_X_Offsets:
    //   LayerClass::IsWithinUsableArea → ObjectClass::GetLandHeight → vtable[428]
    //   Terrain::ClimbCheck → validate cell
    // First valid cell used as scatter destination

    // 9. Set destination and mission
    // vtable[1152](this, destCell, 1) → set move destination
    // vtable[488](this, 2, 0) → set mission to Move

    // 10. COM cleanup: loco->Release()

    return 0;
}

// IDA: 0x458A00 (IsCellBlockedByBridge, 121B)
int UnitClass::IsCellBlockedByBridge()
{
    // Check if cell is blocked by a bridge
    return 0;
}

// IDA: 0x4D03D0 (CompareCoordinateMagnitude, 36B)
int UnitClass::CompareCoordinateMagnitude()
{
    // Compare coordinate magnitudes
    return 0;
}

// IDA: 0x7178B0 (processEnterTarget, 14B)
int UnitClass::processEnterTarget()
{
    // Process entering a target (transport/building)
    return 0;
}

// IDA: 0x7468C0 (CheckForNearbyEnemies, 606B)
int UnitClass::CheckForNearbyEnemies()
{
    // Scan for nearby enemies in threat range
    return 0;
}

// IDA: 0x737C90 (OnUnderAttack, 2540B)
int UnitClass::OnUnderAttack()
{
    // Binary: OnUnderAttack(ObjectClass* attacker, int damage, int weaponIdx,
    //                        CellStruct* sourceCell, int a8, bool a9, void* a10)

    // 1. Human player check → isHumanControlled flag
    // bool isHumanControlled = false;
    // if (this->isSelected)
    //     isHumanControlled = House::IsHumanPlayer(this->owner);

    // 2. Team bridge check (when !a8):
    // Team::GetMember(this, 0) → if member is UnitClass (vtable[44]==6)
    //   and member type flag at offset 5821:
    //     Coord::To_Cell(&ScenarioClass_Instance, &this->location) → Cell::IsBridge
    //     if bridge belongs to member → return 0

    // 3. FootClass::ProcessDeploy(this, ...) returns result
    // int deployResult = 5; // Simulated: ProcessDeploy returns 5 (early exit)

    // If result == 5: return result (early exit)
    // If result == 4: death handling path
    // If result == 0 or other: continue processing

    // ===== Death path (result == 4) =====
    // BuildingClass* linkedBuilding = (BuildingClass*)this->field_740;
    // if (linkedBuilding && linkedBuilding->vtable[44]() == 6)
    //     BuildingClass::UpdateDamageAnim(linkedBuilding);

    // UnitTypeClass* type = this->Type;
    // if (type->spawnCount > 0) { ... death without animation ... }
    // else { ... death with animation ... }

    // vtable[292]: SetMission(0)
    // if (type->field_1508) TechnoClass::MarkPassengersAsExited(this);
    // if (vtable[456]() > 208) TechnoClass::CleanupAll(this, attacker);

    // ===== Passenger ejection loop =====
    // while (this->field_70) {
    //     FootClass* passenger = FootClass::PopAndProcess(this);
    //     if (!passenger) break;
    //     // Check cell passability, set passenger position
    //     // Release with scatter or add to team or set mission 15
    //     // If isHumanControlled: vtable[332] notify
    // }

    // ===== Infantry crew spawn =====
    // if (this->field_824 != -1) {
    //     InfantryClass::Construct(crewType, typeData[field_824], owner);
    // } else if (!a9 && type->field_3277 && type->field_1504 == 0) {
    //     Random check: if random < type->field_1472:
    //         vtable[780] → InfantryTypeClass* crewType
    //         InfantryClass::Construct(crewType, crewType, owner) → spawn infantry
    //         Set infantry health, position, scatter
    // }

    // ===== Building placement for deployables =====
    // if (type->field_3610 && CheckRulesFlags):
    //     vtable[440] → get coords → Pathfinding_Find → BuildingClass::SearchPlacement

    // ===== Self-destruct check =====
    // if (type->field_3477) {
    //     if (!vtable[988](this, 0)) vtable[248](this); // undeploy → self-destruct
    // } else if (!this->field_973) {
    //     vtable[248](this); // self-destruct
    // }

    return 0;
}

// ============================================================
// Phase 3: Weapon Switching
// ============================================================

// IDA: 0x70DC70 (SetTurret, 110B)
int UnitClass::SetTurret()
{
    // Set turret facing/target
    return 0;
}

// IDA: 0x73F0A0 (EvaluateTarget, 3238B)
int UnitClass::EvaluateTarget()
{
    // Evaluate target for weapon selection and attack
    if (!target) return 0;
    return 1;
}

// IDA: 0x7438F0 (CanCrushTarget, 339B)
bool UnitClass::CanCrushTarget()
{
    // Check if this unit can crush its target
    if (!target) return false;
    return false;
}

// IDA: 0x70FBD0 (IsDeactivated, 7B)
int UnitClass::IsDeactivated()
{
    // Check if unit is deactivated (EMP/paralyzed)
    return 0;
}

// ============================================================
// Phase 3: Construction & Destruct
// ============================================================

// IDA: 0x6B4A50 (Create, 234B static)
int UnitClass::Create()
{
    // Static factory: create a UnitClass instance
    return 0;
}

// IDA: 0x6B4C80 (ReadINI, 322B)
int UnitClass::ReadINI()
{
    // Read unit configuration from INI
    return 0;
}

// IDA: 0x6B4FA0 (DestroySmudge, 167B)
int UnitClass::DestroySmudge()
{
    // Create smudge/scorch on destruction
    return 0;
}

// IDA: 0x735780 (Destructor, 622B)
void UnitClass::Destructor()
{
    // Clean up electric bolt and other resources
    ElectricBolt = nullptr;
}

// ============================================================
// Phase 3: Stream & Save
// ============================================================

// IDA: 0x744470 (LoadFromStream, 391B)
int UnitClass::LoadFromStream()
{
    // COM deserialization for unit
    return 0;
}

// IDA: 0x6B4EA0 (SaveLoadData, 90B)
int UnitClass::SaveLoadData()
{
    // Save/Load game data for unit
    return 0;
}

// IDA: 0x6B4F00 (SaveState, 23B)
int UnitClass::SaveState()
{
    // Save unit state for save games
    return 0;
}

// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

// IDA: 0x744640 (PowerDrainUpdate, 159B)
void UnitClass::PowerDrainUpdate()
{
    // Per-frame power drain for units
}

// IDA: 0x746810 (PerFrameUpdate, 167B)
int UnitClass::PerFrameUpdate()
{
    // Per-frame update: speed/position/facing via ILocomotion
    return 0;
}

// IDA: 0x7446E0 (HandleTargetDestroyed, 56B)
int UnitClass::HandleTargetDestroyed()
{
    // Handle when target is destroyed
    target = nullptr;
    return 0;
}

// IDA: 0x6B4F20 (CheckStatus, 7B) — returns Type pointer (vtable entry)
int UnitClass::CheckStatus()
{
    return (int)(Type);
}

// IDA: 0x6B7C60 (ClearTargetRef, 206B)
int UnitClass::ClearTargetRef()
{
    // Clear target reference
    return 0;
}

// IDA: 0x6B7BB0 (ProcessIdleOrders, 133B)
int UnitClass::ProcessIdleOrders()
{
    // Process idle orders for units
    return 0;
}

// IDA: 0x6B4F30 (StubReturn176, 6B)
int UnitClass::StubReturn176()
{
    return 176;
}

// IDA: 0x6B4F40 (StubReturn29, 6B)
int UnitClass::StubReturn29()
{
    return 29;
}

// ============================================================
// Phase 3: Approach Evaluate
// ============================================================

// IDA: 0x4D4280 (ApproachEvaluate, 2177B)
int UnitClass::ApproachEvaluate()
{
    // Evaluate approach path to target
    return 0;
}

// ============================================================
// Phase 3: Drawing
// ============================================================

void UnitClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
    if (!screen_pos || !Type)
        return;

    (void)bounds;
}

void UnitClass::DrawVoxel(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

void UnitClass::DrawPlacementPreview(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd

#include "structure/unit.hpp"

namespace gamemd {

// --- UnitClass ---

HRESULT __stdcall UnitClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall UnitClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall UnitClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall UnitClass::whatAmI() const { return kObjectTypeId; }
int UnitClass::objectSize() const { return sizeof(UnitClass); }
void UnitClass::DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}
void UnitClass::DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}

} // namespace gamemd
